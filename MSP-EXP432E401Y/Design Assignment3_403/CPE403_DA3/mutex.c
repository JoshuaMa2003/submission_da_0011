/*
 *  Multi-Task Scheduling on MSP432E401Y LaunchPad
 *
 *  This TI-RTOS application demonstrates:
 *    - ADC Task (every 5 ms) reading joystick/pot on ADC0-CH0 (PE3/AIN0)
 *    - UART Task (every 10 ms) printing the latest ADC value
 *    - PWM Task (every 15 ms) updating PF0 duty cycle on switch press
 *    - Switch HWI (SW1) latching the ADC value for PWM
 *    - Heartbeat Clock toggling LED (PF4) every 500 ms
 *
 *  The design uses TI-RTOS Tasks, Clocks, Semaphores, and a GPIO Hwi.
 *
 *  Board resources (via SysConfig / ti_drivers_config.h):
 *    CONFIG_ADC_0   -> ADC channel on PE3/AIN0 (joystick)
 *    CONFIG_UART_0  -> XDS110 virtual COM port
 *    CONFIG_PWM_0   -> PWM output on PF0
 *    CONFIG_GPIO_LED_0 -> PF4 LED (heartbeat)
 *    CONFIG_GPIO_SW1   -> SW1 pushbutton (HWI trigger)
 */

/*
 *  ======== Includes ========
 */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>          // snprintf

/* XDC / TI-RTOS kernel headers */
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/hal/Hwi.h>

/* TI Drivers (configured via SysConfig) */
#include "ti_drivers_config.h"
#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>
#include <ti/drivers/ADC.h>
#include <ti/drivers/PWM.h>

/*
 *  ======== Configuration constants ========
 */

#define TASKSTACKSIZE           2048    // Stack size for each task
#define SYSTEM_TICK_MS          1       // BIOS Clock tick (1 ms)

#define ADC_PERIOD_MS           5       // ADC task release period
#define UART_PERIOD_MS          10      // UART task release period
#define PWM_PERIOD_MS           15      // PWM task release period
#define HEARTBEAT_PERIOD_MS     500     // Heartbeat blink period

#define ADC_MAX_VALUE           4095U   // 12-bit ADC full-scale value

/*
 *  ======== Globals: kernel objects backing storage ========
 *
 *  Construct TI-RTOS objects statically (Clock, Semaphore, Task) with
 *  associated structures declared here.
 */

/* Counting semaphores: posted by Clock callbacks to release tasks */
static Semaphore_Struct adcSemStruct;
static Semaphore_Struct uartSemStruct;
static Semaphore_Struct pwmSemStruct;

/* Binary semaphores used as mutexes around shared resources */
static Semaphore_Struct adcDataMutexStruct;    // protects gAdcValue
static Semaphore_Struct uartMutexStruct;       // serializes UART prints

/* Clock objects for periodic events */
static Clock_Struct adcClockStruct;
static Clock_Struct uartClockStruct;
static Clock_Struct pwmClockStruct;
static Clock_Struct heartbeatClockStruct;

/* Task objects + stacks */
static Task_Struct adcTaskStruct;
static Task_Struct uartTaskStruct;
static Task_Struct pwmTaskStruct;

static uint8_t adcTaskStack[TASKSTACKSIZE];
static uint8_t uartTaskStack[TASKSTACKSIZE];
static uint8_t pwmTaskStack[TASKSTACKSIZE];

/*
 *  ======== Globals: shared data and handles ========
 */

/* Most recent ADC sample (updated by ADC task, read by others) */
static volatile uint16_t gAdcValue = 0;

/* ADC value latched by the switch HWI for use by the PWM task */
static volatile uint16_t gLatchedAdcValue = 0;

/* Flag set in Hwi when a new PWM update is pending */
static volatile bool gPwmUpdatePending = false;

/* Driver handles (initialized in main) */
static UART_Handle uartHandle = NULL;
static PWM_Handle  pwmHandle  = NULL;

/* Semaphore handles (obtained from the constructed structs) */
static Semaphore_Handle adcSem       = NULL;
static Semaphore_Handle uartSem      = NULL;
static Semaphore_Handle pwmSem       = NULL;
static Semaphore_Handle adcDataMutex = NULL;
static Semaphore_Handle uartMutex    = NULL;

/*
 *  ======== Forward declarations ========
 */

/* Task entry functions */
static void adcTaskFxn(UArg, UArg);     // ADC acquisition every 5 ms
static void uartTaskFxn(UArg, UArg);    // UART display every 10 ms
static void pwmTaskFxn(UArg, UArg);     // PWM update check every 15 ms

/* Clock callback functions */
static void adcClockFxn(UArg);          // posts adcSem at 5 ms instances
static void uartClockFxn(UArg);         // posts uartSem at 10 ms instances
static void pwmClockFxn(UArg);          // posts pwmSem at 15 ms instances
static void heartbeatClockFxn(UArg);    // toggles PF4 LED periodically

/* GPIO switch callback (HWI) */
void SwitchHwiFxn(uint_least8_t index);

/*
 *  ======== Clock callbacks (1 ms base tick → 5/10/15/500 ms periods) ========
 */

static void adcClockFxn(UArg arg0)
{
    (void)arg0;
    /* Trigger ADC Task at 5 ms instances of the 1 ms system tick */
    if (adcSem != NULL) {
        Semaphore_post(adcSem);
    }
}

static void uartClockFxn(UArg arg0)
{
    (void)arg0;
    /* Trigger UART Task at 10 ms instances */
    if (uartSem != NULL) {
        Semaphore_post(uartSem);
    }
}

static void pwmClockFxn(UArg arg0)
{
    (void)arg0;
    /* Trigger PWM Task at 15 ms instances */
    if (pwmSem != NULL) {
        Semaphore_post(pwmSem);
    }
}

static void heartbeatClockFxn(UArg arg0)
{
    (void)arg0;
    /* Heartbeat: blink PF4 LED independently of other tasks */
    GPIO_toggle(CONFIG_GPIO_LED_0);
}

/*
 *  ======== Switch HWI callback ========
 *
 *  This is bound to SW1 (CONFIG_GPIO_SW1) via GPIO_setCallback().
 *  It runs in interrupt context (Hwi) and must be quick.
 *
 *    - Capture & store the *current* ADC value when the switch is pressed.
 *    - PWM duty cycle updates only when triggered by this switch event.
 */

void SwitchHwiFxn(uint_least8_t index)
{
    (void)index;

    /* Latch the current ADC reading for the PWM task */
    gLatchedAdcValue   = gAdcValue;
    gPwmUpdatePending  = true;     // mark that a new duty update is pending
}

/*
 *  ======== ADC Task ========
 *
 *  - Waits on adcSem.
 *  - Every 5 ms (Clock driven), performs an ADC conversion on ADC0-CH0.
 *  - Stores the result in gAdcValue under protection of adcDataMutex.
 */

static void adcTaskFxn(UArg arg0, UArg arg1)
{
    (void)arg0;
    (void)arg1;

    ADC_Handle adcHandle;
    uint16_t sample;

    /* Open ADC driver instance configured as CONFIG_ADC_0 in SysConfig.
     * Make sure CONFIG_ADC_0 is mapped to PE3/AIN0 in your .syscfg file.
     */
    adcHandle = ADC_open(CONFIG_ADC_0, NULL);
    if (adcHandle == NULL) {
        /* If ADC fails to open, halt here */
        while (1) { }
    }

    for (;;) {
        /* Block until the 5 ms Clock posts the semaphore */
        Semaphore_pend(adcSem, BIOS_WAIT_FOREVER);

        /* Single ADC conversion */
        if (ADC_convert(adcHandle, &sample) == ADC_STATUS_SUCCESS) {

            /* Protect the shared variable while updating it */
            Semaphore_pend(adcDataMutex, BIOS_WAIT_FOREVER);
            gAdcValue = sample;
            Semaphore_post(adcDataMutex);
        }
    }
}

/*
 *  ======== UART Task ========
 *
 *  - Waits on uartSem.
 *  - Every 10 ms, reads current ADC value from gAdcValue
 *    (guarded by adcDataMutex).
 *  - Prints the value and percentage over UART.
 *  - Uses uartMutex so PWM task and UART task do not interleave text.
 *
 */

static void uartTaskFxn(UArg arg0, UArg arg1)
{
    (void)arg0;
    (void)arg1;

    uint16_t adcCopy;
    char msg[64];

    for (;;) {
        /* Wait for 10 ms period tick */
        Semaphore_pend(uartSem, BIOS_WAIT_FOREVER);

        /* Take a safe snapshot of the ADC value */
        Semaphore_pend(adcDataMutex, BIOS_WAIT_FOREVER);
        adcCopy = gAdcValue;
        Semaphore_post(adcDataMutex);

        /* Convert reading to % of full-scale for easier interpretation */
        uint32_t adcPercent =
            ((uint32_t)adcCopy * 100U) / ADC_MAX_VALUE;

        int len = snprintf(msg, sizeof(msg),
                           "[UART] ADC = %4u (%2lu%%)\r\n",
                           adcCopy,
                           (unsigned long)adcPercent);

        if (len > 0) {
            /* UART is a shared resource – guard with mutex semaphore */
            Semaphore_pend(uartMutex, BIOS_WAIT_FOREVER);
            UART_write(uartHandle, msg, (size_t)len);
            Semaphore_post(uartMutex);
        }
    }
}

/*
 *  ======== PWM Task ========
 *
 *  - Waits on pwmSem (15 ms period).
 *  - Checks if the switch Hwi has latched a new ADC value.
 *  - If so, converts that latched ADC value to a PWM duty fraction
 *    and updates PWM on PF0 (CONFIG_PWM_0).
 *  - Also prints info to UART about the new duty cycle.
 *
 *  interaction: PWM duty only changes when the switch has triggered
 *  and latched a value, and stays fixed otherwise.
 */

static void pwmTaskFxn(UArg arg0, UArg arg1)
{
    (void)arg0;
    (void)arg1;

    uint32_t currentDuty = 0;

    /* Start with duty = 0% (LED off), per assignment */
    PWM_setDuty(pwmHandle, currentDuty);

    for (;;) {
        /* Release every 15 ms */
        Semaphore_pend(pwmSem, BIOS_WAIT_FOREVER);

        /*
         * Safely snapshot the "update pending" flag and the latched ADC
         * value. We briefly disable interrupts to avoid racing the Hwi.
         */
        UInt key        = Hwi_disable();
        bool pending    = gPwmUpdatePending;
        uint16_t latchedVal = gLatchedAdcValue;
        if (pending) {
            gPwmUpdatePending = false;   // consume the event
        }
        Hwi_restore(key);

        if (pending) {
            /* Convert 12-bit ADC value into PWM fraction.
             * PWM_DUTY_FRACTION_MAX is defined by the TI PWM driver when
             * dutyUnits == PWM_DUTY_FRACTION.
             */
            uint64_t scaled =
                ((uint64_t)latchedVal * (uint64_t)PWM_DUTY_FRACTION_MAX) /
                (uint64_t)ADC_MAX_VALUE;

            currentDuty = (uint32_t)scaled;
            PWM_setDuty(pwmHandle, currentDuty);

            /* Compute some human-readable info for UART */
            char msg[96];
            uint32_t dutyPercent =
                (uint32_t)(((uint64_t)currentDuty * 100U) /
                           (uint64_t)PWM_DUTY_FRACTION_MAX);

            Semaphore_pend(uartMutex, BIOS_WAIT_FOREVER);

            int len = snprintf(msg, sizeof(msg),
                               "[SW1] Latched ADC = %4u (%2lu%%)\r\n",
                               latchedVal,
                               (unsigned long)((uint32_t)latchedVal *
                                               100U / ADC_MAX_VALUE));
            if (len > 0) {
                UART_write(uartHandle, msg, (size_t)len);
            }

            len = snprintf(msg, sizeof(msg),
                           "[PWM] Duty = %4lu (%2lu%%)\r\n",
                           (unsigned long)currentDuty,
                           (unsigned long)dutyPercent);
            if (len > 0) {
                UART_write(uartHandle, msg, (size_t)len);
            }

            Semaphore_post(uartMutex);
        }
    }
}

/*
 *  ======== main ========
 *
 *  System initialization:
 *   - Initialize board & drivers
 *   - Configure UART, PWM
 *   - Construct semaphores, clocks, and tasks
 *   - Hook SW1 to SwitchHwiFxn
 *   - Start TI-RTOS (BIOS_start)
 */

int main(void)
{
    /* Board / pinmux / power configured by SysConfig-generated code */
    Board_init();

    /* Initialize peripheral drivers */
    GPIO_init();
    UART_init();
    ADC_init();
    PWM_init();

    /* Disable SW1 interrupts until we have our callback set up */
    GPIO_disableInt(CONFIG_GPIO_SW1);

    /* ----- UART configuration (XDS110 VCOM) ----- */
    UART_Params uartParams;
    UART_Params_init(&uartParams);
    uartParams.baudRate  = 115200;          // 115200-8-N-1
    uartParams.writeMode = UART_MODE_BLOCKING;
    uartParams.readMode  = UART_MODE_BLOCKING;

    uartHandle = UART_open(CONFIG_UART_0, &uartParams);
    if (uartHandle == NULL) {
        while (1) { }
    }

    /* ----- PWM configuration (PF0, CONFIG_PWM_0) ----- */
    PWM_Params pwmParams;
    PWM_Params_init(&pwmParams);
    pwmParams.dutyUnits   = PWM_DUTY_FRACTION;   // 0..PWM_DUTY_FRACTION_MAX
    pwmParams.periodUnits = PWM_PERIOD_HZ;       // set by frequency
    pwmParams.periodValue = 1000;                // 1 kHz PWM
    pwmParams.dutyValue   = 0;                   // initial 0% duty

    pwmHandle = PWM_open(CONFIG_PWM_0, &pwmParams);
    if (pwmHandle == NULL) {
        while (1) { }
    }
    PWM_start(pwmHandle);

    /* ----- Counting semaphores for periodic tasks ----- */
    Semaphore_Params semParams;
    Semaphore_Params_init(&semParams);
    semParams.mode = Semaphore_Mode_COUNTING;

    /* Start with count = 0 (tasks will block until first Clock post) */
    Semaphore_construct(&adcSemStruct,  0, &semParams);
    Semaphore_construct(&uartSemStruct, 0, &semParams);
    Semaphore_construct(&pwmSemStruct,  0, &semParams);

    adcSem  = Semaphore_handle(&adcSemStruct);
    uartSem = Semaphore_handle(&uartSemStruct);
    pwmSem  = Semaphore_handle(&pwmSemStruct);

    /* ----- Binary semaphores as mutexes (start "unlocked" with count=1) */
    Semaphore_Params mutexParams;
    Semaphore_Params_init(&mutexParams);
    mutexParams.mode = Semaphore_Mode_BINARY;

    Semaphore_construct(&adcDataMutexStruct, 1, &mutexParams);
    Semaphore_construct(&uartMutexStruct,    1, &mutexParams);

    adcDataMutex = Semaphore_handle(&adcDataMutexStruct);
    uartMutex    = Semaphore_handle(&uartMutexStruct);

    /* ----- Clocks implementing the 1 ms base schedule ----- */

    /* ADC Clock: 5 ms period */
    Clock_Params adcClkParams;
    Clock_Params_init(&adcClkParams);
    adcClkParams.period    = ADC_PERIOD_MS / SYSTEM_TICK_MS;
    adcClkParams.startFlag = TRUE;
    Clock_construct(&adcClockStruct,
                    adcClockFxn,
                    ADC_PERIOD_MS / SYSTEM_TICK_MS,
                    &adcClkParams);

    /* UART Clock: 10 ms period */
    Clock_Params uartClkParams;
    Clock_Params_init(&uartClkParams);
    uartClkParams.period    = UART_PERIOD_MS / SYSTEM_TICK_MS;
    uartClkParams.startFlag = TRUE;
    Clock_construct(&uartClockStruct,
                    uartClockFxn,
                    UART_PERIOD_MS / SYSTEM_TICK_MS,
                    &uartClkParams);

    /* PWM Clock: 15 ms period */
    Clock_Params pwmClkParams;
    Clock_Params_init(&pwmClkParams);
    pwmClkParams.period    = PWM_PERIOD_MS / SYSTEM_TICK_MS;
    pwmClkParams.startFlag = TRUE;
    Clock_construct(&pwmClockStruct,
                    pwmClockFxn,
                    PWM_PERIOD_MS / SYSTEM_TICK_MS,
                    &pwmClkParams);

    /* Heartbeat Clock: 500 ms period */
    Clock_Params hbClkParams;
    Clock_Params_init(&hbClkParams);
    hbClkParams.period    = HEARTBEAT_PERIOD_MS / SYSTEM_TICK_MS;
    hbClkParams.startFlag = TRUE;
    Clock_construct(&heartbeatClockStruct,
                    heartbeatClockFxn,
                    HEARTBEAT_PERIOD_MS / SYSTEM_TICK_MS,
                    &hbClkParams);

    /* ----- Create Tasks (priorities implement simple scheduling) ----- */
    Task_Params taskParams;

    /* ADC Task: highest priority (3) */
    Task_Params_init(&taskParams);
    taskParams.stack     = adcTaskStack;
    taskParams.stackSize = sizeof(adcTaskStack);
    taskParams.priority  = 3;
    Task_construct(&adcTaskStruct, adcTaskFxn, &taskParams, NULL);

    /* UART Task: medium priority (2) */
    Task_Params_init(&taskParams);
    taskParams.stack     = uartTaskStack;
    taskParams.stackSize = sizeof(uartTaskStack);
    taskParams.priority  = 2;
    Task_construct(&uartTaskStruct, uartTaskFxn, &taskParams, NULL);

    /* PWM Task: medium priority (2) */
    Task_Params_init(&taskParams);
    taskParams.stack     = pwmTaskStack;
    taskParams.stackSize = sizeof(pwmTaskStack);
    taskParams.priority  = 2;
    Task_construct(&pwmTaskStruct, pwmTaskFxn, &taskParams, NULL);

    /* ----- Hook SW1 to our Hwi callback and enable its interrupt ----- */
    GPIO_setCallback(CONFIG_GPIO_SW1, SwitchHwiFxn);
    GPIO_enableInt(CONFIG_GPIO_SW1);

    /* Start TI-RTOS scheduler – never returns */
    BIOS_start();

    return 0;
}
