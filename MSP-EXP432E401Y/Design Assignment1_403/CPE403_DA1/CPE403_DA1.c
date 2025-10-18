/* MSP-EXP432E401Y: ADC(PE3/AIN0 timer+DMA) + UART(500ms) + PWM(PF0/D4 active-LOW, inverted) + SWI + WDT heartbeat (D1/PN1) */
#include <ti/devices/msp432e4/driverlib/driverlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "uartstdio.h"

#define JOY_GPIO_BASE   GPIO_PORTE_BASE
#define JOY_GPIO_PIN    GPIO_PIN_3
#define JOY_ADC_BASE    ADC0_BASE
#define JOY_ADC_SEQ     2
#define JOY_ADC_CH      ADC_CTL_CH0             // AIN0 (PE3)

#define PWM_GPIO_BASE   GPIO_PORTF_BASE
#define PWM_GPIO_PIN    GPIO_PIN_0              // PF0 -> D4 (active-LOW)
#define PWM_GPIO_CFG    GPIO_PF0_M0PWM0
#define PWM_BASE_M      PWM0_BASE
#define PWM_GEN         PWM_GEN_0
#define PWM_OUT         PWM_OUT_0
#define PWM_OUT_BIT     PWM_OUT_0_BIT
#define PWM_FREQ_HZ     1000

#define HB_GPIO_BASE    GPIO_PORTN_BASE
#define HB_GPIO_PIN     GPIO_PIN_1              // PN1 -> D1
#define SW_GPIO_BASE    GPIO_PORTJ_BASE
#define SW1_PIN         GPIO_PIN_0
#define SW2_PIN         GPIO_PIN_1

static volatile uint16_t g_adcLatest = 0;
static volatile bool     g_adcReady  = false;
static uint16_t          g_dmaBuf[1];

#if defined(__ICCARM__)
#pragma data_alignment=1024
uint8_t g_udmaTable[1024];
#elif defined(__TI_ARM__)
#pragma DATA_ALIGN(g_udmaTable, 1024)
uint8_t g_udmaTable[1024];
#else
uint8_t g_udmaTable[1024] __attribute__((aligned(1024)));
#endif

static void startADC_DMATransfer(void)
{
    MAP_uDMAChannelTransferSet(UDMA_CH16_ADC0_2 | UDMA_PRI_SELECT,
                               UDMA_MODE_BASIC,
                               (void *)&ADC0->SSFIFO2,
                               (void *)g_dmaBuf,
                               sizeof(g_dmaBuf)/2);
    MAP_uDMAChannelEnable(UDMA_CH16_ADC0_2);
}

/* Inverted brightness: joystick left = bright, right = dim */
static void setPWMDuty_u16(uint16_t sample)
{
    uint32_t duty = (sample * 100U + 2047U) / 4095U;
    if (duty > 100U) duty = 100U;

    uint32_t period = MAP_PWMGenPeriodGet(PWM_BASE_M, PWM_GEN);

    /* Invert polarity: LED bright when duty is HIGH (active-LOW LED) */
    uint32_t high_pw = (period * duty) / 100U;

    if (high_pw == 0U)        high_pw = 1U;
    if (high_pw >= period)    high_pw = period - 1U;

    MAP_PWMPulseWidthSet(PWM_BASE_M, PWM_OUT, high_pw);
}

/* --- ISRs --- */
static void WatchdogISR(void)
{
    MAP_WatchdogIntClear(WATCHDOG0_BASE);
    MAP_GPIOPinWrite(HB_GPIO_BASE, HB_GPIO_PIN,
        (MAP_GPIOPinRead(HB_GPIO_BASE, HB_GPIO_PIN) ^ HB_GPIO_PIN));
}

void ADC0SS2_IRQHandler(void)
{
    uint32_t st = MAP_ADCIntStatusEx(ADC0_BASE, true);
    if (st & ADC_INT_DMA_SS2) {
        MAP_ADCIntClearEx(ADC0_BASE, ADC_INT_DMA_SS2);
        g_adcLatest = g_dmaBuf[0];
        g_adcReady  = true;
        startADC_DMATransfer();
    }
}

void GPIOJ_IRQHandler(void)
{
    uint32_t status = MAP_GPIOIntStatus(SW_GPIO_BASE, true);
    MAP_GPIOIntClear(SW_GPIO_BASE, status);
    if (status & (SW1_PIN | SW2_PIN))
        setPWMDuty_u16(g_adcLatest);
}

/* --- Init --- */
static void ConfigureUART(uint32_t sysclk)
{
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    MAP_GPIOPinConfigure(GPIO_PA0_U0RX);
    MAP_GPIOPinConfigure(GPIO_PA1_U0TX);
    MAP_GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    UARTStdioConfig(0, 115200, sysclk);
}

static void initADC_DMA_Timer2Trigger(uint32_t sysclk)
{
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOE)) {}
    MAP_GPIOPinTypeADC(JOY_GPIO_BASE, JOY_GPIO_PIN);

    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_ADC0)) {}
    MAP_ADCHardwareOversampleConfigure(JOY_ADC_BASE, 64);

    MAP_ADCSequenceConfigure(JOY_ADC_BASE, JOY_ADC_SEQ, ADC_TRIGGER_TIMER, 2);
    MAP_ADCSequenceStepConfigure(JOY_ADC_BASE, JOY_ADC_SEQ, 0,
                                 JOY_ADC_CH | ADC_CTL_IE | ADC_CTL_END);
    MAP_ADCIntClearEx(JOY_ADC_BASE, ADC_INT_DMA_SS2);
    MAP_ADCIntEnableEx(JOY_ADC_BASE, ADC_INT_DMA_SS2);
    MAP_ADCSequenceDMAEnable(JOY_ADC_BASE, JOY_ADC_SEQ);
    MAP_ADCSequenceEnable(JOY_ADC_BASE, JOY_ADC_SEQ);
    MAP_IntEnable(INT_ADC0SS2);

    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_UDMA);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_UDMA)) {}
    MAP_uDMAEnable();
    MAP_uDMAControlBaseSet(g_udmaTable);
    MAP_uDMAChannelAssign(UDMA_CH16_ADC0_2);
    MAP_uDMAChannelAttributeDisable(UDMA_CH16_ADC0_2,
        UDMA_ATTR_ALTSELECT | UDMA_ATTR_USEBURST | UDMA_ATTR_HIGH_PRIORITY | UDMA_ATTR_REQMASK);
    MAP_uDMAChannelControlSet(UDMA_CH16_ADC0_2 | UDMA_PRI_SELECT,
        UDMA_SIZE_16 | UDMA_SRC_INC_NONE | UDMA_DST_INC_16 | UDMA_ARB_4);
    startADC_DMATransfer();

    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER2);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_TIMER2)) {}
    MAP_TimerConfigure(TIMER2_BASE, TIMER_CFG_A_PERIODIC);
    MAP_TimerLoadSet(TIMER2_BASE, TIMER_A, (sysclk/1000U));
    MAP_TimerADCEventSet(TIMER2_BASE, TIMER_ADC_TIMEOUT_A);
    MAP_TimerControlTrigger(TIMER2_BASE, TIMER_A, true);
    MAP_TimerEnable(TIMER2_BASE, TIMER_A);
}

static void initPWM_PF0(uint32_t sysclk)
{
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF)) {}
    MAP_GPIOPinConfigure(PWM_GPIO_CFG);
    MAP_GPIOPinTypePWM(PWM_GPIO_BASE, PWM_GPIO_PIN);

    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM0);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_PWM0)) {}

    MAP_PWMClockSet(PWM_BASE_M, PWM_SYSCLK_DIV_64);
    uint32_t pwmClk = sysclk / 64U;
    uint32_t period = (pwmClk / PWM_FREQ_HZ) - 1U;

    MAP_PWMGenConfigure(PWM_BASE_M, PWM_GEN, PWM_GEN_MODE_DOWN | PWM_GEN_MODE_NO_SYNC);
    MAP_PWMGenPeriodSet(PWM_BASE_M, PWM_GEN, period);
    MAP_PWMPulseWidthSet(PWM_BASE_M, PWM_OUT, 1U);   // start LED bright (leftmost)
    MAP_PWMGenEnable(PWM_BASE_M, PWM_GEN);
    MAP_PWMOutputState(PWM_BASE_M, PWM_OUT_BIT, true);
}

static void initHeartbeat_WDT(uint32_t sysclk)
{
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_GPION)) {}
    MAP_GPIOPinTypeGPIOOutput(HB_GPIO_BASE, HB_GPIO_PIN);
    MAP_GPIOPinWrite(HB_GPIO_BASE, HB_GPIO_PIN, 0);

    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_WDOG0);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_WDOG0)) {}
    MAP_WatchdogUnlock(WATCHDOG0_BASE);
    MAP_WatchdogResetDisable(WATCHDOG0_BASE);
    MAP_WatchdogIntEnable(WATCHDOG0_BASE);
    MAP_WatchdogStallEnable(WATCHDOG0_BASE);
    MAP_WatchdogReloadSet(WATCHDOG0_BASE, sysclk / 2U);
    WatchdogIntRegister(WATCHDOG0_BASE, WatchdogISR);
    MAP_IntEnable(INT_WATCHDOG);
    MAP_WatchdogEnable(WATCHDOG0_BASE);
}

static void initSwitches(void)
{
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOJ);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOJ)) {}
    MAP_GPIOPadConfigSet(SW_GPIO_BASE, SW1_PIN | SW2_PIN,
                         GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
    MAP_GPIOIntDisable(SW_GPIO_BASE, SW1_PIN | SW2_PIN);
    MAP_GPIOIntTypeSet(SW_GPIO_BASE, SW1_PIN | SW2_PIN, GPIO_FALLING_EDGE);
    MAP_GPIOIntClear(SW_GPIO_BASE, SW1_PIN | SW2_PIN);
    MAP_GPIOIntEnable(SW_GPIO_BASE, SW1_PIN | SW2_PIN);
    MAP_IntEnable(INT_GPIOJ);
}

/* --- main --- */
int main(void)
{
    uint32_t sysclk = MAP_SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN |
                                              SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480), 120000000);

    ConfigureUART(sysclk);
    initADC_DMA_Timer2Trigger(sysclk);
    initPWM_PF0(sysclk);
    initHeartbeat_WDT(sysclk);
    initSwitches();
    MAP_IntMasterEnable();

    UARTprintf("\r\nMSP432E401Y: ADC + PWM (inverted) + UART + SWI + WDT\r\n");

    uint16_t tick500 = 0;
    while (1)
    {
        if (g_adcReady) {
            g_adcReady = false;
            if (++tick500 >= 500) {
                tick500 = 0;
                UARTprintf("ADC = %4u\r\n", g_adcLatest);
            }
        }
    }
}
