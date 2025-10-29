
/******************************************************************************
 * MSP432E4 CMSIS DSP Example (MAX4466 on PE3/AIN0)
 * - Fs = 8 kHz, N = 1024, uDMA ping-pong
 * - Hann window -> RFFT (arm_rfft_fast_f32) -> magnitude
 * - Clean status lines (A/B); press 'F' to toggle CSV FFT streaming
 ******************************************************************************/

#include <ti/devices/msp432e4/driverlib/driverlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include "uartstdio.h"
#include "arm_math.h"

/* ========================== Config ========================== */
#define NUM_SAMPLES   1024u          /* FFT size (power of two) */
#define SAMP_FREQ     8000u          /* 8 kHz sample rate */

/* =================== Streaming (UART CSV) =================== */
#define STREAM_EVERY_N_FRAMES   1     /* 1=every frame, 2=every other, etc. */
#define STREAM_DECIMATE         2     /* send every 2nd bin => 256 values */
#define STREAM_SCALE            1000  /* scale 0..1 -> 0..1000 integers */
#define STREAM_DEFAULT          1     /* 0 = OFF at boot, 1 = ON at boot */

static volatile bool g_stream = STREAM_DEFAULT;
static uint32_t frameCounter = 0;

/* ====================== DMA Buffers ========================= */
static uint16_t adcBufA[NUM_SAMPLES];
static uint16_t adcBufB[NUM_SAMPLES];
volatile bool setBufAReady = false;
volatile bool setBufBReady = false;

/* =================== FFT Working Arrays ==================== */
static arm_rfft_fast_instance_f32 rfft;
static float32_t x_time[NUM_SAMPLES];
static float32_t X_freq[NUM_SAMPLES];
static float32_t mag[NUM_SAMPLES/2];
static float32_t hann[NUM_SAMPLES];

static float32_t dcMean = 0.0f;
static float32_t rmsVal = 0.0f;

/* =================== uDMA Control Table ==================== */
#if defined(__ICCARM__)
#pragma data_alignment=1024
uint8_t pui8ControlTable[1024];
#elif defined(__TI_ARM__)
#pragma DATA_ALIGN(pui8ControlTable, 1024)
uint8_t pui8ControlTable[1024];
#else
uint8_t pui8ControlTable[1024] __attribute__((aligned(1024)));
#endif

/* ================= Helpers: printing & streaming ============ */
static void print_status(const char *tag,
                         float32_t peakVal, float32_t peakHz,
                         float32_t rms, float32_t dc)
{
    int32_t peak_milli = (int32_t)(peakVal * 1000.0f + 0.5f);
    int32_t rms_milli  = (int32_t)(rms     * 1000.0f + 0.5f);
    int32_t dc_milli   = (int32_t)(dc      * 1000.0f + 0.5f);
    int32_t hz_tenths  = (int32_t)(peakHz  *   10.0f + 0.5f);

    UARTprintf("%s  peak=%d.%03d @ %d.%01d Hz  rms=%d.%03d  dc=%d.%03d\r\n",
               tag,
               peak_milli/1000,  abs(peak_milli%1000),
               hz_tenths/10,     abs(hz_tenths%10),
               rms_milli/1000,   abs(rms_milli%1000),
               dc_milli/1000,    abs(dc_milli%1000));
}

static void stream_fft_frame(const float32_t *m, uint32_t bins, uint32_t fs)
{
    /* Normalize per-frame, decimate bins, scale to 0..STREAM_SCALE integers. */
    uint32_t i, step = STREAM_DECIMATE, outBins = bins / step;
    float32_t maxv = 1e-9f;
    for (i = 0; i < bins; ++i)
        if (m[i] > maxv) maxv = m[i];

    UARTprintf("FFT:%u,%u", (unsigned)fs, (unsigned)outBins);
    for (i = 0; i < outBins; ++i)
    {
        uint32_t k = i * step;
        int32_t v = (int32_t)((m[k] / maxv) * STREAM_SCALE + 0.5f);
        if (v < 0) v = 0;
        if (v > (int32_t)STREAM_SCALE) v = STREAM_SCALE;
        UARTprintf(",%d", v);
    }
    UARTprintf("\r\n");
}

/* Non-blocking key to toggle streaming */
static inline void poll_uart_toggle(void)
{
    if (UARTCharsAvail(UART0_BASE)) {
        int c = UARTCharGetNonBlocking(UART0_BASE);
        if (toupper(c) == 'F') {
            g_stream = !g_stream;
            UARTprintf("\r\n[FFT stream %s]\r\n", g_stream ? "ON" : "OFF");
        }
    }
}

/* ======================= ADC ISR =========================== */
void ADC0SS2_IRQHandler(void)
{
    uint32_t adcInt = MAP_ADCIntStatusEx(ADC0_BASE, true);
    MAP_ADCIntClearEx(ADC0_BASE, adcInt);

    uint32_t modePri = MAP_uDMAChannelModeGet(UDMA_CH16_ADC0_2 | UDMA_PRI_SELECT);
    if (modePri == UDMA_MODE_STOP)
    {
        MAP_uDMAChannelTransferSet(UDMA_CH16_ADC0_2 | UDMA_PRI_SELECT,
                                   UDMA_MODE_PINGPONG,
                                   (void *)&ADC0->SSFIFO2,
                                   (void *)adcBufA,
                                   NUM_SAMPLES);
        setBufAReady = true;
    }

    uint32_t modeAlt = MAP_uDMAChannelModeGet(UDMA_CH16_ADC0_2 | UDMA_ALT_SELECT);
    if (modeAlt == UDMA_MODE_STOP)
    {
        MAP_uDMAChannelTransferSet(UDMA_CH16_ADC0_2 | UDMA_ALT_SELECT,
                                   UDMA_MODE_PINGPONG,
                                   (void *)&ADC0->SSFIFO2,
                                   (void *)adcBufB,
                                   NUM_SAMPLES);
        setBufBReady = true;
    }
}

/* ===================== UART Config ========================= */
static void ConfigureUART(uint32_t systemClock)
{
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);

    MAP_GPIOPinConfigure(GPIO_PA0_U0RX);
    MAP_GPIOPinConfigure(GPIO_PA1_U0TX);
    MAP_GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);

    UARTStdioConfig(0, 115200, systemClock);
}

/* ======================== MAIN ============================= */
int main(void)
{
    uint32_t i;
    float32_t peakVal, peakHz;
    uint32_t peakBin;

    /* 120 MHz system clock */
    uint32_t systemClock = MAP_SysCtlClockFreqSet(
        SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480,
        120000000);

    ConfigureUART(systemClock);
    UARTprintf("\r\nMSP432E401Y Real-Time FFT (Fs=%u, N=%u)\r\n", (unsigned)SAMP_FREQ, (unsigned)NUM_SAMPLES);
    UARTprintf("Press 'F' to toggle FFT CSV stream (for Python).\r\n");

    /* --------- GPIOE / PE3 as ADC input (AIN0) --------- */
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOE)) { }
    MAP_GPIOPinTypeADC(GPIO_PORTE_BASE, GPIO_PIN_3); /* PE3 = AIN0 */

    /* --------- ADC0 + Sequencer 2 (single sample) ------- */
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_ADC0)) { }

    MAP_ADCHardwareOversampleConfigure(ADC0_BASE, 8);
    MAP_ADCSequenceStepConfigure(ADC0_BASE, 2, 0, ADC_CTL_CH0 | ADC_CTL_IE | ADC_CTL_END);
    MAP_ADCSequenceConfigure(ADC0_BASE, 2, ADC_TRIGGER_TIMER, 2);

    MAP_ADCIntClearEx(ADC0_BASE, ADC_INT_DMA_SS2 | ADC_INT_SS2);
    MAP_ADCIntEnableEx(ADC0_BASE, ADC_INT_DMA_SS2 | ADC_INT_SS2);

    MAP_ADCSequenceDMAEnable(ADC0_BASE, 2);
    MAP_ADCSequenceEnable(ADC0_BASE, 2);

    /* --------- uDMA controller + channel setup ----------- */
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_UDMA);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_UDMA)) { }
    MAP_uDMAEnable();
    MAP_uDMAControlBaseSet(pui8ControlTable);
    MAP_uDMAChannelAssign(UDMA_CH16_ADC0_2);

    MAP_uDMAChannelAttributeDisable(UDMA_CH16_ADC0_2,
        UDMA_ATTR_ALTSELECT | UDMA_ATTR_USEBURST |
        UDMA_ATTR_HIGH_PRIORITY | UDMA_ATTR_REQMASK);

    MAP_uDMAChannelControlSet(UDMA_CH16_ADC0_2 | UDMA_PRI_SELECT,
        UDMA_SIZE_16 | UDMA_SRC_INC_NONE | UDMA_DST_INC_16 | UDMA_ARB_4);
    MAP_uDMAChannelTransferSet(UDMA_CH16_ADC0_2 | UDMA_PRI_SELECT,
        UDMA_MODE_PINGPONG, (void *)&ADC0->SSFIFO2, (void *)adcBufA, NUM_SAMPLES);

    MAP_uDMAChannelControlSet(UDMA_CH16_ADC0_2 | UDMA_ALT_SELECT,
        UDMA_SIZE_16 | UDMA_SRC_INC_NONE | UDMA_DST_INC_16 | UDMA_ARB_4);
    MAP_uDMAChannelTransferSet(UDMA_CH16_ADC0_2 | UDMA_ALT_SELECT,
        UDMA_MODE_PINGPONG, (void *)&ADC0->SSFIFO2, (void *)adcBufB, NUM_SAMPLES);

    MAP_uDMAChannelEnable(UDMA_CH16_ADC0_2);

    /* --------- Timer0A @ SAMP_FREQ to trigger ADC -------- */
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);
    while(!MAP_SysCtlPeripheralReady(SYSCTL_PERIPH_TIMER0)) { }
    MAP_TimerConfigure(TIMER0_BASE, TIMER_CFG_A_PERIODIC);
    MAP_TimerLoadSet(TIMER0_BASE, TIMER_A, (systemClock / SAMP_FREQ));
    MAP_TimerADCEventSet(TIMER0_BASE, TIMER_ADC_TIMEOUT_A);
    MAP_TimerControlTrigger(TIMER0_BASE, TIMER_A, true);
    MAP_TimerEnable(TIMER0_BASE, TIMER_A);

    MAP_IntEnable(INT_ADC0SS2);
    MAP_IntMasterEnable();

    /* --------- Precompute Hann window & RFFT plan -------- */
    for (i = 0; i < NUM_SAMPLES; ++i)
        hann[i] = 0.5f * (1.0f - arm_cos_f32(2.0f * PI * ((float32_t)i) / (NUM_SAMPLES - 1)));
    arm_rfft_fast_init_f32(&rfft, NUM_SAMPLES);

    /* ===================== Main Loop ===================== */
    while (1)
    {
        /* --------- Process Buffer A --------- */
        while (!setBufAReady) { poll_uart_toggle(); }
        setBufAReady = false;

        for (i = 0; i < NUM_SAMPLES; ++i) {
            float32_t s = ((float32_t)adcBufA[i] - 2048.0f) * (1.0f / 2048.0f);
            x_time[i] = s * hann[i];
        }
        arm_rms_f32(x_time, NUM_SAMPLES, &rmsVal);
        arm_mean_f32(x_time, NUM_SAMPLES, &dcMean);
        arm_rfft_fast_f32(&rfft, x_time, X_freq, 0);
        arm_cmplx_mag_f32(X_freq, mag, NUM_SAMPLES/2);
        arm_max_f32(mag, NUM_SAMPLES/2, &peakVal, &peakBin);
        peakHz = ((float32_t)peakBin) * ((float32_t)SAMP_FREQ) / ((float32_t)NUM_SAMPLES);

        print_status("A", peakVal, peakHz, rmsVal, dcMean);
        poll_uart_toggle();
        if (g_stream && ((frameCounter++ % STREAM_EVERY_N_FRAMES) == 0))
            stream_fft_frame(mag, NUM_SAMPLES/2, SAMP_FREQ);

        /* --------- Process Buffer B --------- */
        while (!setBufBReady) { poll_uart_toggle(); }
        setBufBReady = false;

        for (i = 0; i < NUM_SAMPLES; ++i) {
            float32_t s = ((float32_t)adcBufB[i] - 2048.0f) * (1.0f / 2048.0f);
            x_time[i] = s * hann[i];
        }
        arm_rms_f32(x_time, NUM_SAMPLES, &rmsVal);
        arm_mean_f32(x_time, NUM_SAMPLES, &dcMean);
        arm_rfft_fast_f32(&rfft, x_time, X_freq, 0);
        arm_cmplx_mag_f32(X_freq, mag, NUM_SAMPLES/2);
        arm_max_f32(mag, NUM_SAMPLES/2, &peakVal, &peakBin);
        peakHz = ((float32_t)peakBin) * ((float32_t)SAMP_FREQ) / ((float32_t)NUM_SAMPLES);

        print_status("B", peakVal, peakHz, rmsVal, dcMean);
        poll_uart_toggle();
        if (g_stream && ((frameCounter++ % STREAM_EVERY_N_FRAMES) == 0))
            stream_fft_frame(mag, NUM_SAMPLES/2, SAMP_FREQ);
    }
}
