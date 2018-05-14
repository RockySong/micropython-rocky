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

#define APP_LCD_HEIGHT 240
#define APP_LCD_WIDTH 320
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
/*static*/ LCD_FB uint16_t s_frameBuffer[APP_FRAME_BUFFER_COUNT][APP_CAMERA_HEIGHT][APP_CAMERA_WIDTH] ;
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
    {128,  160 },    /* LCD       */
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


extern void CSI_DriverIRQHandler(void);    //warning:if no define this,will appera the situation that goto the default IRQ function!

void CSI_IRQHandler(void)
{
    CSI_DriverIRQHandler();
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

void LCDMonitor_Init(void)
{
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
	memset(s_frameBuffer, 0, sizeof(s_frameBuffer));

    lcdConfig.bufferAddr = (uint32_t)activeFrameAddr;

    ELCDIF_RgbModeInit(APP_ELCDIF, &lcdConfig);

    ELCDIF_SetNextBufferAddr(APP_ELCDIF, inactiveFrameAddr);
    ELCDIF_RgbModeStart(APP_ELCDIF);  	
}

int sensor_init()
{
   
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
    
    const camera_config_t cameraConfig = {
        .pixelFormat = kVIDEO_PixelFormatRGB565,
        .bytesPerPixel = APP_BPP,
        .resolution = FSL_VIDEO_RESOLUTION(APP_CAMERA_WIDTH, APP_CAMERA_HEIGHT),
        .frameBufferLinePitch_Bytes = APP_CAMERA_WIDTH * APP_BPP,
        .interface = kCAMERA_InterfaceGatedClock,
        .controlFlags = APP_CAMERA_CONTROL_FLAGS,
        .framePerSec = 30,
    };
    
  /*  for(uint8_t i=0;i<=0x3F;i++)     for the test:print the reg of the ov7725
{
    cambus_readb(sensor.slv_addr,i,&temp);
    PRINTF("%x \r\n",temp);
}*/
    CAMERA_RECEIVER_Init(&cameraReceiver, &cameraConfig, NULL, NULL);
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
          /* Submit the empty frame buffers to buffer queue. */
    for (uint32_t i = 0; i < APP_FRAME_BUFFER_COUNT; i++)
    {
        CAMERA_RECEIVER_SubmitEmptyBuffer(&cameraReceiver, (uint32_t)(s_frameBuffer[i]));
    }
    CAMERA_RECEIVER_Start(&cameraReceiver);
   /*  PRINTF("Regs in CSI!\r\n");
       for(uint32_t i=0x402BC000;i<=0x402BC018;i+=4)
      PRINTF("%x \r\n",*(uint32_t*)i);
    for(uint32_t i=0x402BC020;i<=0x402BC034;i+=4)
      PRINTF("%x \r\n",*(uint32_t*)i);
    for(uint32_t i=0x402BC048;i<=0x402BC04c;i+=4)
      PRINTF("%x \r\n",*(uint32_t*)i);*/    
 
     while (kStatus_Success != CAMERA_RECEIVER_GetFullBuffer(&cameraReceiver, &activeFrameAddr))
    {
    }

    /* Wait to get the full frame buffer to show. */
    while (kStatus_Success != CAMERA_RECEIVER_GetFullBuffer(&cameraReceiver, &inactiveFrameAddr))
    {
    }
    /* All good! */
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

void LCDMonitor_Update(void)
{
/*
    // Wait for frame
     ELCDIF_ClearInterruptStatus(APP_ELCDIF, kELCDIF_CurFrameDone);
     while (!(kELCDIF_CurFrameDone & ELCDIF_GetInterruptStatus(APP_ELCDIF)))
        {
        }
     while (kStatus_Success != CAMERA_RECEIVER_GetFullBuffer(&cameraReceiver, &activeADDR))   //warning:must write like this,if not,will not run the correct result,transfer only one time;the important thing is use two free buffer and submit one of the buffer to the csi queue
    {
    } 
    ELCDIF_SetNextBufferAddr(APP_ELCDIF, activeADDR);
    inactiveADDR = activeADDR;
    CAMERA_RECEIVER_SubmitEmptyBuffer(&cameraReceiver, inactiveADDR);
    *buf = (char*)activeADDR;*/
     ELCDIF_ClearInterruptStatus(APP_ELCDIF, kELCDIF_CurFrameDone);
        /* Wait the inactive buffer be active. */
        while (!(kELCDIF_CurFrameDone & ELCDIF_GetInterruptStatus(APP_ELCDIF)))
        {
        }

        CAMERA_RECEIVER_SubmitEmptyBuffer(&cameraReceiver, activeFrameAddr);
		
        activeFrameAddr = inactiveFrameAddr;

		/* Wait to get the full frame buffer to show. */
        while (kStatus_Success != CAMERA_RECEIVER_GetFullBuffer(&cameraReceiver, &inactiveFrameAddr))
        {
        }
        ELCDIF_SetNextBufferAddr(APP_ELCDIF, inactiveFrameAddr);
	
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
		uint32_t i;
		uint16_t *p = (uint16_t*) fb_framebuffer->pixels;
		
		uint32_t j;
		uint32_t t1, t2;
		t1 = HAL_GetTick();
		fb_update_jpeg_buffer();
		t2 = HAL_GetTick() - t1;
		// PRINTF("JPEG %dms\r\n", t2);
		/*
		for (i=0; i<sensor.fb_h; i++) {
			for (j=0; j<sensor.fb_w; j++) {
				if (i > j)
					p[0] = (n & 0x1F) <<0;
				else
					p[0] = 0xFFFF;
				p++;
			}
		}
		*/
		
		n++;
		CAMERA_RECEIVER_SubmitEmptyBuffer(&cameraReceiver, (uint32_t)fb_framebuffer->pixels );
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
