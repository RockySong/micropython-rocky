/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * Sensor abstraction layer.
 *
 */

#include <stdlib.h>
#include <string.h>
#include "mp.h"
#include "irq.h"
#include "cambus.h"
#include "ov9650.h"
#include "ov2640.h"
#include "ov7725.h"
#include "ov7725_regs.h"
#include "mt9v034.h"
#include "sensor.h"
#include "systick.h"
#include "framebuffer.h"
#include "fsl_clock.h"
#include "fsl_csi.h"
#include "fsl_debug_console.h"
#include "fsl_csi_camera_adapter.h"
#include "fsl_camera.h"
#include "fsl_camera_receiver.h"
#include "fsl_camera_device.h"
#include "fsl_ov7725.h"
#include "fsl_elcdif.h"
#include "fsl_edma.h"
#include "fsl_dmamux.h"
#include "omv_boardconfig.h"

#define OV_CHIP_ID      (0x0A)
#define ON_CHIP_ID      (0x00)
#define MAX_XFER_SIZE (0xFFFC)
#define OV7725_I2C LPI2C1
/* LCD definition. */
#define APP_ELCDIF LCDIF

#define APP_LCD_HEIGHT 272
#define APP_LCD_WIDTH 480
#define APP_HSW 41
#define APP_HFP 4
#define APP_HBP 8
#define APP_VSW 10
#define APP_VFP 4
#define APP_VBP 2
#define APP_LCD_POL_FLAGS \
    (kELCDIF_DataEnableActiveHigh | kELCDIF_VsyncActiveLow | kELCDIF_HsyncActiveLow | kELCDIF_DriveDataOnRisingClkEdge)

#define APP_LCDIF_DATA_BUS kELCDIF_DataBus16Bit

/* Display. */
#define LCD_DISP_GPIO GPIO1
#define LCD_DISP_GPIO_PIN 2
/* Back light. */
#define LCD_BL_GPIO GPIO2
#define LCD_BL_GPIO_PIN 31

#define APP_BPP 2
/* Camera definition. */
#define APP_CAMERA_HEIGHT 240
#define APP_CAMERA_WIDTH 320
#define APP_CAMERA_CONTROL_FLAGS (kCAMERA_HrefActiveHigh | kCAMERA_DataLatchOnRisingEdge)
#define APP_FRAME_BUFFER_COUNT 4
#define FRAME_BUFFER_ALIGN 64
sensor_t sensor;

/*static*/ volatile uint8_t s_isOmvSensorSnapshotReady;


//This moment ,for the easy use, we do not take the DMA function to our project.
                                   //we will add it later.
#define DMA DMA0
#define DMA0_DMA16_DriverIRQHandler DMA_CH_0_16_DriverIRQHandler
#define BUFF_LENGTH 4U    
edma_handle_t g_EDMA_Handle;
volatile bool g_Transfer_Done = false;
/*******************************************************************************
 * Variables
 ******************************************************************************/
#ifdef __CC_ARM
#define LCD_FB __attribute__((section(".lcd_fb")))
/*static*/ LCD_FB uint16_t s_frameBuffer[2][272][480] ;
#else
AT_NONCACHEABLE_SECTION_ALIGN(static uint16_t s_frameBuffer[APP_FRAME_BUFFER_COUNT][APP_CAMERA_HEIGHT][APP_CAMERA_WIDTH],
                              FRAME_BUFFER_ALIGN);
#endif
typedef struct _ov7725_reg
{
    uint8_t reg;
    uint8_t val;
} ov7725_reg_t;

static const ov7725_reg_t ov7725InitRegs[] = {   //note that:we use our rt defaults reg to replace the openmv's,beacause some diffetents will cause the program fail,the rate of the  lcd flushing is very high,do not know which one have an effect on this
    {COM3,          0x00},//if we set the varible COM3_SWAP_YUV,the picture will be a mass one 
    {COM7,          COM7_RES_VGA | COM7_FMT_RGB565 | COM7_FMT_RGB},
    {0x3d, 0x03},
    {0x42, 0x7f},
    {0x4d, 0x09},

    /* DSP */
    {0x64, 0xff},
    {0x65, 0x20},
    {0x66, 0x00},
    {0x67, 0x48},
    {0x0f, 0xc5},
    {0x13, 0xff},

    /* AEC/AGC/AWB */
    {0x63, 0xe0},
    {0x14, 0x11},
    {0x22, 0x3f},
    {0x23, 0x07},
    {0x24, 0x40},
    {0x25, 0x30},
    {0x26, 0xa1},
    {0x2b, 0x00},
    {0x6b, 0xaa},
    {0x0d, 0x41},

    /* Sharpness. */
    {0x90, 0x05},
    {0x91, 0x01},
    {0x92, 0x03},
    {0x93, 0x00},

    /* Matrix. */
    {0x94, 0x90},
    {0x95, 0x8a},
    {0x96, 0x06},
    {0x97, 0x0b},
    {0x98, 0x95},
    {0x99, 0xa0},
    {0x9a, 0x1e},

    /* Brightness. */
    {0x9b, 0x08},
    /* Contrast. */
    {0x9c, 0x20},
    /* UV */
    {0x9e, 0x81},
    /* DSE */
    {0xa6, 0x04},

    /* Gamma. */
    {0x7e, 0x0c},
    {0x7f, 0x16},
    {0x80, 0x2a},
    {0x81, 0x4e},
    {0x82, 0x61},
    {0x83, 0x6f},
    {0x84, 0x7b},
    {0x85, 0x86},
    {0x86, 0x8e},
    {0x87, 0x97},
    {0x88, 0xa4},
    {0x89, 0xaf},
    {0x8a, 0xc5},
    {0x8b, 0xd7},
    {0x8c, 0xe8},

};

static status_t cambus_writes(uint8_t slv_addr, const ov7725_reg_t regs[], uint32_t num)
{
    status_t status = kStatus_Success;

    for (uint32_t i = 0; i < num; i++)
    {
        status = cambus_writeb(slv_addr, regs[i].reg, regs[i].val);

        if (kStatus_Success != status)
        {
            break;
        }
    }

    return status;
}
const int resolution[][2] = {
    // C/SIF Resolutions
    {88,   72  },    /* QQCIF     */
    {176,  144 },    /* QCIF      */
    {352,  288 },    /* CIF       */
    {88,   60  },    /* QQSIF     */
    {176,  120 },    /* QSIF      */
    {352,  240 },    /* SIF       */
    // VGA Resolutions
    {40,   30  },    /* QQQQVGA   */
    {80,   60  },    /* QQQVGA    */
    {160,  120 },    /* QQVGA     */
    {320,  240 },    /* QVGA      */
    {640,  480 },    /* VGA       */
    {60,   40  },    /* HQQQVGA   */
    {120,  80  },    /* HQQVGA    */
    {240,  160 },    /* HQVGA     */
    // FFT Resolutions
    {64,   32  },    /* 64x32     */
    {64,   64  },    /* 64x64     */
    {128,  64  },    /* 128x64    */
    {128,  128 },    /* 128x64    */
    // Other
    {480,  272 },    /* LCD       */
    {128,  160 },    /* QQVGA2    */
    {800,  600 },    /* SVGA      */
    {1280, 1024},    /* SXGA      */
    {1600, 1200},    /* UXGA      */
};
/* OV7725 connect to CSI. */
static csi_resource_t csiResource = {
    .csiBase = CSI,
};

static csi_private_data_t csiPrivateData;

camera_receiver_handle_t cameraReceiver = {
    .resource = &csiResource, .ops = &csi_ops, .privateData = &csiPrivateData,
};

void BOARD_InitLcd(void)
{
    volatile uint32_t i = 0x100U;

    gpio_pin_config_t config = {
        kGPIO_DigitalOutput, 0,
    };

    /* Reset the LCD. */
    GPIO_PinInit(LCD_DISP_GPIO, LCD_DISP_GPIO_PIN, &config);

    GPIO_PinWrite(LCD_DISP_GPIO, LCD_DISP_GPIO_PIN, 0);

    while (i--)
    {
    }

    GPIO_PinWrite(LCD_DISP_GPIO, LCD_DISP_GPIO_PIN, 1);

    /* Backlight. */
    config.outputLogic = 1;
    GPIO_PinInit(LCD_BL_GPIO, LCD_BL_GPIO_PIN, &config);
}

void BOARD_InitLcdifPixClock(void)
{
    /*
     * The desired output frame rate is 60Hz. So the pixel clock frequency is:
     * (480 + 41 + 4 + 18) * (272 + 10 + 4 + 2) * 60 = 9.2M.
     * Here set the LCDIF pixel clock to 9.3M.
     */

    /*
     * Initialize the Video PLL.
     * Video PLL output clock is OSC24M * (loopDivider + (denominator / numerator)) / postDivider = 93MHz.
     */
    clock_video_pll_config_t config = {
        .loopDivider = 31, .postDivider = 8, .numerator = 0, .denominator = 0,
    };

    CLOCK_InitVideoPll(&config);

    /*
     * 000 derive clock from PLL2
     * 001 derive clock from PLL3 PFD3
     * 010 derive clock from PLL5
     * 011 derive clock from PLL2 PFD0
     * 100 derive clock from PLL2 PFD1
     * 101 derive clock from PLL3 PFD1
     */
    CLOCK_SetMux(kCLOCK_Lcdif1PreMux, 2);

    CLOCK_SetDiv(kCLOCK_Lcdif1PreDiv, 4);

    CLOCK_SetDiv(kCLOCK_Lcdif1Div, 1);

    /*
     * 000 derive clock from divided pre-muxed lcdif1 clock
     * 001 derive clock from ipp_di0_clk
     * 010 derive clock from ipp_di1_clk
     * 011 derive clock from ldb_di0_clk
     * 100 derive clock from ldb_di1_clk
     */
    CLOCK_SetMux(kCLOCK_Lcdif1Mux, 0);
}
static void OV7725_DelayMs(uint32_t ms)
{
    volatile uint32_t i;
    uint32_t loopPerMs = SystemCoreClock / 3000;

    while (ms--)
    {
        i = loopPerMs;
        while (i--)
        {
        }
    }
}

static void BOARD_PullCameraResetPin(bool pullUp)
{
    /* Reset pin is connected to DCDC_3V3. */
    return;
}

static void BOARD_PullCameraPowerDownPin(bool pullUp)
{
    if (pullUp)
    {
        GPIO_PinWrite(GPIO1, 4, 1);
    }
    else
    {
        GPIO_PinWrite(GPIO1, 4, 0);
    }
}
static ov7725_resource_t ov7725Resource = {
    .sccbI2C = OV7725_I2C,
    .pullResetPin = BOARD_PullCameraResetPin,
    .pullPowerDownPin = BOARD_PullCameraPowerDownPin,
    .inputClockFreq_Hz = 24000000,
};
/*
camera_device_handle_t cameraDevice = {
    .resource = &ov7725Resource, .ops = &ov7725_ops,
};
*/
void sensor_init0()      //make a note that we do not have the function of the jpeg,so no need to init the jpeg buffer
{
    // Init FB mutex
  //  mutex_init(&JPEG_FB()->lock);

    // Save fb_enabled flag state
   // int fb_enabled = JPEG_FB()->enabled;

    // Clear framebuffers
    // memset(MAIN_FB(), 0, sizeof(*MAIN_FB()));
  //  memset(JPEG_FB(), 0, sizeof(*JPEG_FB()));

    // Set default quality
 //   JPEG_FB()->quality = 35;

    // Set fb_enabled
  //  JPEG_FB()->enabled = fb_enabled;
}
uint32_t activeFrameAddr;
uint32_t inactiveFrameAddr;

void LCDMonitor_InitFB(void)
{
	int i, x,y;
	for (i=0; i<2; i++) {
		for (x=0;x<480;x++) {
			for (y=0;y<272;y++) {
				if (x % 10 < 8 && y % 10 < 8)
					s_frameBuffer[i][y][x] = (4 | 8<<6 | 4<<11);
				else
					s_frameBuffer[i][y][x] = 0;
			}
		}
	}
}

void LCDMonitor_Init(void)
{
	static uint8_t isInited;
	if (isInited)
		return;
	isInited = 1;
    // Initialize the camera bus.
    BOARD_InitLcdifPixClock();
   // BOARD_InitDebugConsole();
    BOARD_InitLcd();	
    elcdif_rgb_mode_config_t lcdConfig = {
        .panelWidth = APP_LCD_WIDTH,
        .panelHeight = APP_LCD_HEIGHT,
        .hsw = APP_HSW,
        .hfp = APP_HFP,
        .hbp = APP_HBP,
        .vsw = APP_VSW,
        .vfp = APP_VFP,
        .vbp = APP_VBP,
        .polarityFlags = APP_LCD_POL_FLAGS,
        .pixelFormat = kELCDIF_PixelFormatRGB565,
        .dataBus = APP_LCDIF_DATA_BUS,
    };	
	LCDMonitor_InitFB();

    lcdConfig.bufferAddr = (uint32_t)activeFrameAddr;

    ELCDIF_RgbModeInit(APP_ELCDIF, &lcdConfig);

    ELCDIF_SetNextBufferAddr(APP_ELCDIF, (uint32_t)s_frameBuffer);
    ELCDIF_RgbModeStart(APP_ELCDIF);  	

}

#define CSI_FRAG_MODE
#ifdef CSI_FRAG_MODE
CSI_Type *s_pCSI = CSI;

//				 			8bit | PixRisEdge | gatedClk  | SyncClrFifo| HSyncActHigh|SofOnVsyncRis|ExtVSync
#define CSICR1_INIT_VAL 	0<<0 | 1<<1	      | 1<<4	  | 1<<8	   | 1<<11		 | 1<<17	   |1<<30   


typedef enum {
	csiirq_wantVSync,
	csiirq_wantDma1,
	csiirq_wantDma2,
}enum_csiIrqSt;

uint64_t s_dmaBulkbufs[2][640*2 / 8];	// max supported line length

typedef struct _CSIIrq_t
{
	enum_csiIrqSt st;
	uint8_t isStarted;
	uint8_t isGray;
	uint32_t base0;
	uint32_t linePerFrag;
	
	uint32_t dmaBytePerLine;
	uint32_t dmaBytePerFrag;
	uint32_t dmaFragNdx;

	uint32_t datBytePerLine;
	uint32_t datBytePerFrag;
	uint32_t datFragNdx;

	uint32_t datCurBase;

	uint32_t fragCnt;
	// in color mode, dmaFragNdx should == datLineNdx
	// in gray mode, to save memory, move backword nextDmaBulk every 4 lines
	
}CSIIrq_t;
CSIIrq_t s_irq;

typedef union {
	uint8_t u8Ary[4][2];
	struct {
		uint8_t y0, u0, y1, v0, y2, u2, y3, v2;
	};
	
}YUV64bit_t;

#define RAM_CODE __attribute__((section(".ram_code")))

#define ARMCC_ASM_FUNC	__asm
ARMCC_ASM_FUNC RAM_CODE uint32_t ExtractYFromYuv(uint32_t dmaBase, uint32_t datBase, uint32_t _256bitUnitCnt) {
	push	{r4-r11, lr}
10
	LDMIA	R0!, {r3-r6, r8-r11}
	// schedule code carefully to allow dual-issue on Cortex-M7
	bfi		r7, r3, #0, #8	// Y0
	bfi		ip, r5, #0, #8	// Y4
	lsr		r3,	r3,	#16
	lsr		r5,	r5,	#16
	bfi		r7, r3, #8, #8	// Y1
	bfi		ip, r5, #8, #8  // Y5
	bfi		r7, r4, #16, #8 // Y2
	bfi		ip, r6, #16, #8 // Y6
	lsr		r4,	r4,	#16
	lsr		r6,	r6,	#16
	bfi		r7, r4, #24, #8 // Y3
	bfi		ip, r6, #24, #8	// Y7
	STRD	r7, ip, [R1], #8
	
	bfi		r7, r8, #0, #8	// Y0
	bfi		ip, r10, #0, #8	// Y4
	lsr		r8,	r8,	#16
	lsr		r10,	r10,	#16
	bfi		r7, r8, #8, #8	// Y1
	bfi		ip, r10, #8, #8  // Y5
	bfi		r7, r9, #16, #8 // Y2
	bfi		ip, r11, #16, #8 // Y6
	lsr		r9,	r9,	#16
	lsr		r11,	r11,	#16
	bfi		r7, r9, #24, #8 // Y3
	bfi		ip, r11, #24, #8	// Y7
	STRD	r7, ip, [R1], #8	
	
	subs	r2,	#1
	bne		%b10
	mov		r0,	r1
	pop		{r4-r11, pc}
}

RAM_CODE void CsiFragModeHandler(void) {
    uint32_t csisr = s_pCSI->CSISR;

    /* Clear the error flags. */
    s_pCSI->CSISR = csisr;

	if (csisr & (1<<16)) {
		// VSync
		s_irq.st = csiirq_wantDma1;
		//               SOF    | FB1    | FB2    irqEn
		s_pCSI->CSICR1 = 1U<<16 | 1U<<19 | 1U<<20 | CSICR1_INIT_VAL;
		//				 16 doubleWords| RxFifoDmaReqEn| ReflashRFF|ResetFrmCnt
		s_pCSI->CSICR3 = 2<<4          | 1<<12         | 1<<14     |1<<15;
	} else if (csisr & (3<<19))
	{
		uint32_t dmaBase;
		if (s_irq.isGray) {
			if (s_irq.dmaFragNdx & 1)
				dmaBase = s_pCSI->CSIDMASA_FB2;
			else
				dmaBase = s_pCSI->CSIDMASA_FB1;
			
			s_irq.datCurBase = ExtractYFromYuv(dmaBase, s_irq.datCurBase, s_irq.datBytePerFrag >> 4);
		}
		
		if (++s_irq.dmaFragNdx == s_irq.fragCnt || (csisr & (3<<19)) == 3<<19 )
		{
			CSI_Stop(CSI);
			//				 16 doubleWords| ReflashRFF
			s_pCSI->CSICR3 = 2<<4		   | 1<<14;
			NVIC_DisableIRQ(CSI_IRQn);
			s_isOmvSensorSnapshotReady = 1;	
			goto Cleanup;
		}
		
		if (csisr & (1<<19) ) {
			if (!s_irq.isGray)
				s_pCSI->CSIDMASA_FB1 += 2 * s_irq.dmaBytePerFrag;
		} else {
			if (!s_irq.isGray)
				s_pCSI->CSIDMASA_FB2 += 2 * s_irq.dmaBytePerFrag;
			s_pCSI->CSICR3 |= CSI_CSICR3_DMA_REFLASH_RFF_MASK;	// reflash DMA
		}
	}
Cleanup:
	return;
}

void CsiFragModeInit(void) {

	CLOCK_EnableClock(kCLOCK_Csi);
	CSI_Reset(CSI);
	
	s_pCSI->CSICR1 = CSICR1_INIT_VAL;
	s_pCSI->CSICR2 = 3U << 30;	// INCR16 for RxFIFO DMA
	s_pCSI->CSICR3 = 2U << 4;	// 16 double words to trigger DMA request
	s_pCSI->CSIFBUF_PARA = 0;	// no stride


	s_pCSI->CSICR18 = 13<<12 | 1<<18;	// HProt AHB bus protocol, write to memory when CSI_ENABLE is 1

	s_irq.st = csiirq_wantVSync;
}

void CsiFragModeCalc(void) {

	s_irq.datBytePerLine = s_irq.dmaBytePerLine = sensor.fb_w * 2;
	if (sensor.pixformat == PIXFORMAT_GRAYSCALE) {
		s_irq.datBytePerLine /= 2;	// only contain Y
		s_irq.isGray = 1;
	} else {
		s_irq.isGray = 0;
	}

	if (1) // (s_irq.isGray)
	{
		// >>> calculate how many lines per fragment (DMA xfer unit)
		uint32_t burstBytes;
	    if (!(s_irq.dmaBytePerLine % (8 * 16)))
	    {
			burstBytes = 128;
	        s_pCSI->CSICR2 = CSI_CSICR2_DMA_BURST_TYPE_RFF(3U);
	        s_pCSI->CSICR3 = (CSI->CSICR3 & ~CSI_CSICR3_RxFF_LEVEL_MASK) | ((2U << CSI_CSICR3_RxFF_LEVEL_SHIFT));
	    }
	    else if (!(s_irq.dmaBytePerLine % (8 * 8)))
	    {
			burstBytes = 64;
	        s_pCSI->CSICR2 = CSI_CSICR2_DMA_BURST_TYPE_RFF(2U);
	        s_pCSI->CSICR3 = (CSI->CSICR3 & ~CSI_CSICR3_RxFF_LEVEL_MASK) | ((1U << CSI_CSICR3_RxFF_LEVEL_SHIFT));
	    }
	    else
	    {
			burstBytes = 32;
	        s_pCSI->CSICR2 = CSI_CSICR2_DMA_BURST_TYPE_RFF(1U);
	        s_pCSI->CSICR3 = (CSI->CSICR3 & ~CSI_CSICR3_RxFF_LEVEL_MASK) | ((0U << CSI_CSICR3_RxFF_LEVEL_SHIFT));
	    }

		
		for (s_irq.linePerFrag = 1; s_irq.linePerFrag < sensor.fb_h; s_irq.linePerFrag++) {
			if (0 == s_irq.linePerFrag * s_irq.dmaBytePerLine % burstBytes )
				break;
		}
	}else {
		// we do not use bulking in color mode
		s_pCSI->CSICR2 = CSI_CSICR2_DMA_BURST_TYPE_RFF(3U);
		s_pCSI->CSICR3 = (CSI->CSICR3 & ~CSI_CSICR3_RxFF_LEVEL_MASK) | ((2U << CSI_CSICR3_RxFF_LEVEL_SHIFT));
		s_irq.linePerFrag = sensor.fb_h;
	}
	s_irq.fragCnt = sensor.fb_h / s_irq.linePerFrag;
	// <<<
	
	s_irq.dmaBytePerFrag = s_irq.dmaBytePerLine * s_irq.linePerFrag;
	s_irq.datBytePerFrag = s_irq.datBytePerLine * s_irq.linePerFrag;
	LCDMonitor_InitFB();

}

void CsiFragModeStartNewFrame(void) {
	s_irq.dmaFragNdx = 0;
	if (s_irq.isGray) {
		s_pCSI->CSIDMASA_FB1 = (uint32_t) s_dmaBulkbufs[0];
		s_pCSI->CSIDMASA_FB2 = (uint32_t) s_dmaBulkbufs[1];
	} else {
		s_pCSI->CSIDMASA_FB1 = s_irq.base0;
		s_pCSI->CSIDMASA_FB2 = s_irq.base0 + s_irq.dmaBytePerFrag;
	}
	s_irq.datCurBase = s_irq.base0;
	s_pCSI->CSICR1 = CSICR1_INIT_VAL | 1<<16;	// enable SOF iRQ
	if (s_irq.dmaBytePerFrag & 0xFFFF0000) {
		
		uint32_t h16 = s_irq.linePerFrag << 16U , l16 = s_irq.dmaBytePerLine;
		s_pCSI->CSIIMAG_PARA = l16 | h16;
	} else {
		s_pCSI->CSIIMAG_PARA = 1U | s_irq.dmaBytePerFrag << 16;	// set xfer cnt
	}
	__set_PRIMASK(1);
	s_pCSI->CSISR = s_pCSI->CSISR;
	s_pCSI->CSICR18 |= 1U<<31;	// start CSI
	NVIC_EnableIRQ(CSI_IRQn);
	__set_PRIMASK(0);	
}
#define CAMERA_TAKE_SNAPSHOT() CsiFragModeStartNewFrame()
#else
#define CAMERA_TAKE_SNAPSHOT() do { \
CAMERA_RECEIVER_SubmitEmptyBuffer(&cameraReceiver, (uint32_t)fb_framebuffer->pixels); \
/* fool the driver to make it think we have 2 FBs, otherwise it refuses to work */ \
CAMERA_RECEIVER_SubmitEmptyBuffer(&cameraReceiver, (uint32_t)fb_framebuffer->pixels); \
CAMERA_RECEIVER_Start(&cameraReceiver);  \
} while(0)

#endif

#define CAMERA_WAIT_FOR_SNAPSHOT() do { \
	while (0 == s_isOmvSensorSnapshotReady) {} \
	s_isOmvSensorSnapshotReady = 0; \
	}while(0)

int sensor_init()
{
	s_irq.base0 = (uint32_t)(MAIN_FB()->pixels);
 //   uint8_t com10=0,com2=0,com3=0,clkrc=0;
   
    cambus_init();
    // Clear sensor chip ID.
    sensor.chip_id = 0;
    sensor.slv_addr = 0x21U; //?
    // Read ON semi sensor ID.
    cambus_readb(sensor.slv_addr, ON_CHIP_ID, &sensor.chip_id);
    if (sensor.chip_id == MT9V034_ID) {
        mt9v034_init(&sensor);
    } else { // Read OV sensor ID.
        cambus_readb(sensor.slv_addr, OV_CHIP_ID, &sensor.chip_id);
        // Initialize sensor struct.
        switch (119) {
            case OV9650_ID:
                ov9650_init(&sensor);
                break;
            case OV2640_ID:
                ov2640_init(&sensor);
                break;
            case OV7725_ID:
                ov7725_init(&sensor);
                break;
            default:
                // Sensor is not supported.
                return -3;
        }
    }
    // Clear fb_enabled flag
    // This is executed only once to initialize the FB enabled flag.
   // JPEG_FB()->enabled = 0;
   // dcmi_config(); replace this func by the below sentences
    
    
  /*  for(uint8_t i=0;i<=0x3F;i++)     for the test:print the reg of the ov7725
{
    cambus_readb(sensor.slv_addr,i,&temp);
    PRINTF("%x \r\n",temp);
}*/
	
    systick_sleep(10);
    BOARD_PullCameraPowerDownPin(true);

    /* Delay 1ms. */
    OV7725_DelayMs(1);

    BOARD_PullCameraPowerDownPin(false);

    /* Delay 1ms. */
    OV7725_DelayMs(1);

    BOARD_PullCameraResetPin(false);

    /* Delay 1ms. */
    OV7725_DelayMs(1);

    BOARD_PullCameraResetPin(true);

    /* Delay 1ms. */
    OV7725_DelayMs(3);

	#ifdef CSI_FRAG_MODE
	sensor_set_pixformat(PIXFORMAT_RGB565);
	sensor_set_framesize(FRAMESIZE_QVGA);	
	CsiFragModeInit();
	#else

    const camera_config_t cameraConfig = {
        .pixelFormat = kVIDEO_PixelFormatRGB565,
        .bytesPerPixel = APP_BPP,
        .resolution = FSL_VIDEO_RESOLUTION(APP_CAMERA_WIDTH, APP_CAMERA_HEIGHT),
        .frameBufferLinePitch_Bytes = APP_CAMERA_WIDTH * APP_BPP,
        .interface = kCAMERA_InterfaceGatedClock,
        .controlFlags = APP_CAMERA_CONTROL_FLAGS,
        .framePerSec = 30,
    };

	/* Submit the empty frame buffers to buffer queue. */
	/*
    for (uint32_t i = 0; i < APP_FRAME_BUFFER_COUNT; i++)
    {
        CAMERA_RECEIVER_SubmitEmptyBuffer(&cameraReceiver, (uint32_t)(s_frameBuffer[i]));
    }
    CAMERA_RECEIVER_Start(&cameraReceiver);
    */
   /*  PRINTF("Regs in CSI!\r\n");
       for(uint32_t i=0x402BC000;i<=0x402BC018;i+=4)
      PRINTF("%x \r\n",*(uint32_t*)i);
    for(uint32_t i=0x402BC020;i<=0x402BC034;i+=4)
      PRINTF("%x \r\n",*(uint32_t*)i);
    for(uint32_t i=0x402BC048;i<=0x402BC04c;i+=4)
      PRINTF("%x \r\n",*(uint32_t*)i);*/    
 	/*
     while (kStatus_Success != CAMERA_RECEIVER_GetFullBuffer(&cameraReceiver, &activeFrameAddr))
    {
    }

    // Wait to get the full frame buffer to show
    while (kStatus_Success != CAMERA_RECEIVER_GetFullBuffer(&cameraReceiver, &inactiveFrameAddr))
    {
    }
    */
    CAMERA_RECEIVER_Init(&cameraReceiver, &cameraConfig, NULL, NULL);
	#endif
	LCDMonitor_Init();
	CAMERA_TAKE_SNAPSHOT();	
	CAMERA_WAIT_FOR_SNAPSHOT();
    /* All good! */
#ifdef CSI_LINE_MODE

#endif
	
    return 0;
}

uint8_t s_isSensorInited;
int sensor_reset()
{
	if (!s_isSensorInited) {
		sensor_init0();
		sensor_init();	
	
	}
    // Reset the sesnor state
    sensor.sde          = 0xFF;
    sensor.pixformat    = 0xFF;
    sensor.framesize    = 0xFF;
    sensor.framerate    = 0xFF;
    sensor.gainceiling  = 0xFF;


    // Call sensor-specific reset function; in the moment,we use our init function and defaults regs
    sensor.reset(&sensor);
	/*
      // Reset all registers
    cambus_writeb(sensor.slv_addr, COM7, COM7_RESET);   
    OV7725_DelayMs(2);
    cambus_writes(sensor.slv_addr,ov7725InitRegs,ARRAY_SIZE(ov7725InitRegs));  
	*/
    return 0;
}

int sensor_get_id()
{
    return sensor.chip_id;
}

int sensor_set_vsync_output(void *gpio, uint32_t pin)
{
    // sensor.vsync_pin  = pin;
    // sensor.vsync_gpio = gpio;
    return 0;
}

int sensor_sleep(int enable)
{
    if (sensor.sleep == NULL
        || sensor.sleep(&sensor, enable) != 0) {
        // Operation not supported
        return -1;
    }
    return 0;
}

int sensor_read_reg(uint8_t reg_addr)
{
    if (sensor.read_reg == NULL) {
        // Operation not supported
        return -1;
    }
    return sensor.read_reg(&sensor, reg_addr);
}

int sensor_write_reg(uint8_t reg_addr, uint16_t reg_data)
{
    if (sensor.write_reg == NULL) {
        // Operation not supported
        return -1;
    }
    return sensor.write_reg(&sensor, reg_addr, reg_data);
}

int sensor_set_pixformat(pixformat_t pixformat)
{

    if (sensor.pixformat == pixformat) {
        // No change
        return 0;
    }

    if (sensor.set_pixformat == NULL
        || sensor.set_pixformat(&sensor, pixformat) != 0) {
        // Operation not supported
        return -1;
    }

    // Set pixel format
    sensor.pixformat = pixformat;

    // Set JPEG mode + no support function
    if (pixformat == PIXFORMAT_JPEG) {
        return -1;
    }

    // Skip the first frame.
    MAIN_FB()->bpp = 0;
	CsiFragModeCalc();
    return 0;
}

int sensor_set_framesize(framesize_t framesize)
{
    if (sensor.framesize == framesize) {
        // No change
        return 0;
    }

    // Call the sensor specific function
    if (sensor.set_framesize == NULL
        || sensor.set_framesize(&sensor, framesize) != 0) {
        // Operation not supported
        return -1;
    }

    // Set framebuffer size
    sensor.framesize = framesize;

    // Skip the first frame.
    MAIN_FB()->bpp = 0;
    MAIN_FB()->w = sensor.fb_w = resolution[framesize][0];
    MAIN_FB()->h = sensor.fb_h = resolution[framesize][1];

	CsiFragModeCalc();
    return 0;
}

int sensor_set_framerate(framerate_t framerate)
{
    if (sensor.framerate == framerate) {
       /* no change */
        return 0;
    }

    /* call the sensor specific function */
    if (sensor.set_framerate == NULL
        || sensor.set_framerate(&sensor, framerate) != 0) {
        /* operation not supported */
        return -1;
    }

    /* set the frame rate */
    sensor.framerate = framerate;

    return 0;
}

int sensor_set_windowing(int x, int y, int w, int h)      //may no this function in our RT csi,be used to set the output window,draw a rect in the picture
{
    MAIN_FB()->w = sensor.fb_w = w;
    MAIN_FB()->h = sensor.fb_h = h;
   // HAL_DCMI_ConfigCROP(&DCMIHandle, x*2, y, w*2-1, h-1);
   // HAL_DCMI_EnableCROP(&DCMIHandle);
    return 0;
}

int sensor_set_contrast(int level)
{
    if (sensor.set_contrast != NULL) {
        return sensor.set_contrast(&sensor, level);
    }
    return -1;
}

int sensor_set_brightness(int level)
{
    if (sensor.set_brightness != NULL) {
        return sensor.set_brightness(&sensor, level);
    }
    return -1;
}

int sensor_set_saturation(int level)
{
    if (sensor.set_saturation != NULL) {
        return sensor.set_saturation(&sensor, level);
    }
    return -1;
}

int sensor_set_gainceiling(gainceiling_t gainceiling)
{
    if (sensor.gainceiling == gainceiling) {
        /* no change */
        return 0;
    }

    /* call the sensor specific function */
    if (sensor.set_gainceiling == NULL
        || sensor.set_gainceiling(&sensor, gainceiling) != 0) {
        /* operation not supported */
        return -1;
    }

    sensor.gainceiling = gainceiling;
    return 0;
}

int sensor_set_quality(int qs)
{
    /* call the sensor specific function */
    if (sensor.set_quality == NULL
        || sensor.set_quality(&sensor, qs) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_set_colorbar(int enable)
{
    /* call the sensor specific function */
    if (sensor.set_colorbar == NULL
        || sensor.set_colorbar(&sensor, enable) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_set_auto_gain(int enable, float gain_db, float gain_db_ceiling)
{
    /* call the sensor specific function */
    if (sensor.set_auto_gain == NULL
        || sensor.set_auto_gain(&sensor, enable, gain_db, gain_db_ceiling) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_get_gain_db(float *gain_db)
{
    /* call the sensor specific function */
    if (sensor.get_gain_db == NULL
        || sensor.get_gain_db(&sensor, gain_db) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_set_auto_exposure(int enable, int exposure_us)
{
    /* call the sensor specific function */
    if (sensor.set_auto_exposure == NULL
        || sensor.set_auto_exposure(&sensor, enable, exposure_us) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_get_exposure_us(int *exposure_us)
{
    /* call the sensor specific function */
    if (sensor.get_exposure_us == NULL
        || sensor.get_exposure_us(&sensor, exposure_us) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_set_auto_whitebal(int enable, float r_gain_db, float g_gain_db, float b_gain_db)
{
    /* call the sensor specific function */
    if (sensor.set_auto_whitebal == NULL
        || sensor.set_auto_whitebal(&sensor, enable, r_gain_db, g_gain_db, b_gain_db) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_get_rgb_gain_db(float *r_gain_db, float *g_gain_db, float *b_gain_db)
{
    /* call the sensor specific function */
    if (sensor.get_rgb_gain_db == NULL
        || sensor.get_rgb_gain_db(&sensor, r_gain_db, g_gain_db, b_gain_db) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_set_hmirror(int enable)
{
    /* call the sensor specific function */
    if (sensor.set_hmirror == NULL
        || sensor.set_hmirror(&sensor, enable) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_set_vflip(int enable)
{
    /* call the sensor specific function */
    if (sensor.set_vflip == NULL
        || sensor.set_vflip(&sensor, enable) != 0) {
        /* operation not supported */
        return -1;
    }
    return 0;
}

int sensor_set_special_effect(sde_t sde)
{
    if (sensor.sde == sde) {
        /* no change */
        return 0;
    }

    /* call the sensor specific function */
    if (sensor.set_special_effect == NULL
        || sensor.set_special_effect(&sensor, sde) != 0) {
        /* operation not supported */
        return -1;
    }

    sensor.sde = sde;
    return 0;
}

int sensor_set_line_filter(line_filter_t line_filter_func, void *line_filter_args)
{
    // Set line pre-processing function and args
    sensor.line_filter_func = line_filter_func;
    sensor.line_filter_args = line_filter_args;
    return 0;
}


int sensor_set_lens_correction(int enable, int radi, int coef)
{
    /* call the sensor specific function */
    if (sensor.set_lens_correction == NULL
        || sensor.set_lens_correction(&sensor, enable, radi, coef) != 0) {
        /* operation not supported */
        return -1;
    }

    return 0;
}

static void sensor_check_bufsize()
{
    int bpp=0;
    switch (sensor.pixformat) {
        case PIXFORMAT_BAYER:
        case PIXFORMAT_GRAYSCALE:
            bpp = 1;
            break;
        case PIXFORMAT_YUV422:
        case PIXFORMAT_RGB565:
            bpp = 2;
            break;
        default:
            break;
    }

    if ((MAIN_FB()->w * MAIN_FB()->h * bpp) > OMV_RAW_BUF_SIZE) {
        if (sensor.pixformat == PIXFORMAT_GRAYSCALE) {
            // Crop higher GS resolutions to QVGA
            sensor_set_windowing(190, 120, 320, 240);
        } else if (sensor.pixformat == PIXFORMAT_RGB565) {
            // Switch to BAYER if the frame is too big to fit in RAM.
            sensor_set_pixformat(PIXFORMAT_BAYER);
        }
    }

}

__asm uint16_t* LCDMonitor_UpdateLineGray(uint16_t *pLcdFB, uint16_t *pCamFB, uint32_t quadPixCnt) {
	push	{r4-r6, lr}
	mov		r5,	#0
	mov		r6,	#0
10
	subs	r2,	r2,	#1
	
	ldr		r3, [r1], #4
	ldr		ip,	=0xFCFCFCFC
	and		r3,	r3,	ip
	lsr		r3,	r3,	#2
	lsr		r4,	r3,	#16
	bfi		r5,	r3,	#5,	#6
	bfi		r6,	r4, #5, #6
	rev16	r3,	r3
	rev16	r4,	r4
	bfi		r5,	r3,	#21, #6
	bfi		r6,	r4,	#21, #6
	
	rev16	r3,	r3
	rev16	r4,	r4
	ldr		ip,	=0xFEFE
	and		r3,	r3,	ip
	and		r4,	r4,	ip
	lsr		r3,	r3,	#1
	lsr		r4,	r4,	#1
	
	bfi		r5,	r3,	#0,	#5
	bfi		r6,	r4,	#0,	#5
	rev16	r3,	r3
	rev16	r4,	r4	
	bfi		r5,	r3,	#16,	#5
	bfi		r6,	r4,	#16,	#5
	rev16	r3,	r3
	rev16	r4,	r4
	bfi		r5,	r3,	#11,	#5
	bfi		r6,	r4,	#11,	#5
	rev16	r3,	r3
	rev16	r4,	r4	
	bfi		r5,	r3,	#27,	#5
	bfi		r6,	r4,	#27,	#5	
	
	strd	r5,	r6,	[r0], #8
	bne		%b10
	pop		{r4-r6, pc}
}

__asm uint16_t* LCDMonitor_UpdateLineRGB565(uint16_t *pLcdFB, uint16_t *pCamFB, uint32_t u64Cnt) {
10
	subs	r2,	r2,	#1
	ldrd	r3, ip, [r1], #8
	rev16	r3,	r3
	rev16	ip,	ip
	strd	r3,	ip,	[r0], #8
	bne		%b10
	bx		lr
}

void LCDMonitor_Update(uint32_t fbNdx)
{
	uint32_t y, t1;
	uint16_t *p0 = (uint16_t*) MAIN_FB()->pixels;
	uint8_t *p0Gray = (uint8_t*) MAIN_FB()->pixels;
	uint16_t *p1 = (uint16_t*) (s_frameBuffer[fbNdx & 1]);
	uint16_t *p1Bkup;
	uint32_t h = sensor.fb_h > 272 ? 272 : sensor.fb_h;
	p1Bkup = p1;
	p1 += (480 - sensor.fb_w) >> 1;
	p1 += ((272 - h) >> 1) * 480;
	
	t1 = s_irq.dmaBytePerLine / 8;
	if (s_irq.isGray) {
		p0Gray += (h - 1) * MAIN_FB()->w;
		for (y=0; y< h; y++, p0Gray -= MAIN_FB()->w) {
			LCDMonitor_UpdateLineGray(p1, p0Gray, t1);
			p1 += 480;
		}
		ELCDIF_SetNextBufferAddr(LCDIF, (uint32_t) p1Bkup);		
	}
	else {
		p0 += (h - 1) * MAIN_FB()->w;
		for (y=0; y< h; y++, p0 -= MAIN_FB()->w) {
			LCDMonitor_UpdateLineRGB565(p1, p0, t1);
			p1 += 480;
		}		
	}

	ELCDIF_SetNextBufferAddr(LCDIF, (uint32_t) p1Bkup);
}


// This function is called back after each line transfer is complete,
// with a pointer to the line buffer that was used. At this point the
// DMA transfers the next line to the other half of the line buffer.
// Note:  For JPEG this function is called once (and ignored) at the end of the transfer.

void PreprocessOneLine(uint32_t addr, int line)
{
    uint8_t *src = (uint8_t*) addr;
    uint8_t *dst = MAIN_FB()->pixels;

    if (sensor.line_filter_func && sensor.line_filter_args) {
        int bpp = ((sensor.pixformat == PIXFORMAT_GRAYSCALE) ? 1:2);
        dst += line++ * MAIN_FB()->w * bpp;
        // If there's an image filter installed call it.
        // Note: BPP is the target BPP, not the line bpp (the line is always 2 bytes per pixel) if the target BPP is 1
        // it means the image currently being read is going to be Grayscale, and the function needs to output w * 1BPP.
        sensor.line_filter_func(src, MAIN_FB()->w * 2 , dst, MAIN_FB()->w * bpp, sensor.line_filter_args);
    } else {
        switch (sensor.pixformat) {
            case PIXFORMAT_BAYER:
                dst += line++ * MAIN_FB()->w;
                for (int i=0; i<MAIN_FB()->w; i++) {
                    dst[i] = src[i];
                }
                break;
            case PIXFORMAT_GRAYSCALE:
                dst += line++ * MAIN_FB()->w;
                if (sensor.gs_bpp == 1) {
                    // 1BPP GRAYSCALE.
                    for (int i=0; i<MAIN_FB()->w; i++) {
                        dst[i] = src[i];
                    }
                } else {
                    // Extract Y channel from YUV.
                    for (int i=0; i<MAIN_FB()->w; i++) {
                        dst[i] = src[i<<1];
                    }
                }
                break;
            case PIXFORMAT_YUV422:
            case PIXFORMAT_RGB565:
                dst += line++ * MAIN_FB()->w * 2;
                for (int i=0; i<MAIN_FB()->w * 2; i++) {
                    dst[i] = src[i];
                }
                break;
            case PIXFORMAT_JPEG:
                break;
            default:
                break;
        }
    }
}


// The JPEG offset allows JPEG compression of the framebuffer without overwriting the pixels.
// The offset size may need to be adjusted depending on the quality, otherwise JPEG data may
// overwrite image pixels before they are compressed.
int sensor_snapshot(image_t *pImg, void *pv1, void *pv2)
{
 //   uint32_t activeADDR;//, length;
  //  uint32_t inactiveADDR;
  	pv1 = pv1 , pv2 = pv2;	// keep compatible with original openMV
    sensor_check_bufsize();
    MAIN_FB()->w = sensor.fb_w;
    MAIN_FB()->h = sensor.fb_h;

    switch (sensor.pixformat) {
        case PIXFORMAT_GRAYSCALE:
            MAIN_FB()->bpp = 1;
            break;
        case PIXFORMAT_YUV422:
        case PIXFORMAT_RGB565:
            MAIN_FB()->bpp = 2;
            break;
        case PIXFORMAT_BAYER:
            MAIN_FB()->bpp = 3;
            break;
        case PIXFORMAT_JPEG:
            // Read the number of data items transferred
            // MAIN_FB()->bpp = (MAX_XFER_SIZE - __HAL_DMA_GET_COUNTER(&DMAHandle))*4;
            break;
    }

	static uint8_t n;
    {
		uint32_t t1, t2;
		if (JPEG_FB()->enabled) {
			
			t1 = HAL_GetTick();
			fb_update_jpeg_buffer();
			t2 = HAL_GetTick() - t1;
			t2 = t2;
		}
		LCDMonitor_Update(n);
		#if 1
		CAMERA_TAKE_SNAPSHOT();
		CAMERA_WAIT_FOR_SNAPSHOT();
		#else
		/*
		uint32_t i;
		uint16_t *p = (uint16_t*) fb_framebuffer->pixels;
		
		uint32_t j;		
		for (i=0; i<sensor.fb_h; i++) {
			for (j=0; j<sensor.fb_w; j++) {
				if (i > 120)
					p[0] = 0xBeef; //(n & 0x1F) <<0;
				else
					p[0] = 0xDead;
				p++;
			}
		}
		*/
		s_irq.st = csiirq_wantVSync;
		s_irq.nextDmaBulk = 0;
		s_pCSI->CSICR18 |= CSI_CSICR18_CSI_ENABLE_MASK;
		#endif
		
		n++;

		/*
		for (i=0, p = (uint16_t*) fb_framebuffer->pixels; i<sensor.fb_h; i++) {
			PreprocessOneLine((uint32_t)p, i);
			p += sensor.fb_w;
		}
		*/
    }
	if (pImg) {
		pImg->w = MAIN_FB()->w , pImg->h = MAIN_FB()->h , pImg->bpp = MAIN_FB()->bpp;
		pImg->pixels = (uint8_t*) MAIN_FB()->pixels;		
	}
    return 0;
}


void CSI_OmvTransferHandleIRQ(CSI_Type *base, csi_handle_t *handle)
{
    uint32_t csisr = base->CSISR;

    /* Clear the error flags. */
    base->CSISR = csisr;
	CSI_Stop(base);
	handle->transferOnGoing = false;
    if (handle->callback)
    {
        handle->callback(base, handle, kStatus_CSI_FrameDone, handle->userData);
    }
	handle->queueDrvWriteIdx = 0;
	handle->queueDrvReadIdx = 0;
	handle->queueUserReadIdx = 0;
	handle->queueUserWriteIdx = 0;
	handle->activeBufferNum = 0;
	s_isOmvSensorSnapshotReady = 1;	
/* Add for ARM errata 838869, affects Cortex-M4, Cortex-M4F Store immediate overlapping
  exception return operation might vector to incorrect interrupt */
#if defined __CORTEX_M && (__CORTEX_M >= 4U)
	__DSB();
#endif
}

extern void CSI_DriverIRQHandler(void);    //warning:if no define this,will appera the situation that goto the default IRQ function!

RAM_CODE void CSI_IRQHandler(void)
{
	#ifdef CSI_FRAG_MODE
	CsiFragModeHandler();
	#else
    CSI_DriverIRQHandler();
	#endif
}


