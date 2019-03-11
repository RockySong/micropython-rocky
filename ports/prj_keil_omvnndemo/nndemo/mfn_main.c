

#include <stdint.h>
#include <stdio.h>
#include "arm_math.h"
#include <math.h>
#include "arm_nnfunctions.h"

#include <mp.h>
#include <arm_math.h>
#include "imlib.h"
#include "array.h"
#include "sensor.h"
#include "ff_wrapper.h"
#include "xalloc.h"
#include "fb_alloc.h"
#include "framebuffer.h"
#include "py_assert.h"
#include "py_helper.h"
#include "py_image.h"
#include "omv_boardconfig.h"
#include "py/runtime0.h"
#include "py/runtime.h"
#include "fsl_gpio.h"
#include "fsl_iomuxc.h"
#include "fsl_elcdif.h"
#include "fsl_camera.h"
#include "fsl_ov7725.h"
#include "fsl_camera_receiver.h"
#include "fsl_camera_device.h"

#include "fsl_csi.h"
#include "fsl_csi_camera_adapter.h"
#include "fsl_ov7725.h"

#include "fsl_lpi2c.h"
#include "fsl_ft5406_rt.h"

#include "sample.h"
#include "storage.h"
// misc options for AC6
// -Wno-old-style-cast -Wno-comma -Wno-cast-qual -Wno-cast-align -Wno-sign-conversion -Wno-padded -Wno-conversion -Wno-unused-parameter -Wno-covered-switch-default -Wno-zero-as-null-pointer-constant
/*******************************************************************************
 * Definitions
 ******************************************************************************/

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

#define APP_CAMERA_CONTROL_FLAGS (kCAMERA_HrefActiveHigh | kCAMERA_DataLatchOnRisingEdge)

/* Frame buffer data alignment. */
#define FRAME_BUFFER_ALIGN 64


#define APP_FRAME_BUFFER_COUNT 2
/* Pixel format RGB565, bytesPerPixel is 2. */
#define APP_BPP 2

#ifndef APP_LCDIF_DATA_BUS
#define APP_LCDIF_DATA_BUS kELCDIF_DataBus24Bit
#endif

#define GET_MSB(a, bits, ofs)  (((a) >> (8 - (bits))) & ((1 << (bits)) - 1)) << ofs
/*******************************************************************************
 * Prototypes
 ******************************************************************************/
extern uint16_t s_frameBuffer[2][272][480] ;
/*******************************************************************************
 * Variables
 ******************************************************************************/

extern const unsigned char cg_btns[][64*64*3];
static ft5406_rt_handle_t g_touchHandle;
volatile int g_label = 0;
volatile int g_angle;
volatile uint32_t g_isToEnroll, g_isToDel;
volatile float g_dThsld;

Face_t g_db[MAX_FACES];
const SavedFace_t * const cg_pcSavedDB = (SavedFace_t*) 0x60380000;


/*******************************************************************************
 * Code
 ******************************************************************************/

void _LoadImage(uint16_t *pFB, uint32_t fbW, uint32_t x0, uint32_t y0, uint32_t w, uint32_t h, uint8_t *pImage, bool is_BGR)
{
     uint16_t *p;
     uint32_t r,g,b;
     uint32_t x, y;
	uint32_t tmp;
     for (y=0; y<h; y++) {
		p = pFB + (y0 + y) * fbW + x0;
        for (x=0; x<w; x++) {
						if(is_BGR)
						{
								r = *pImage++;
								g = *pImage++;
								b = *pImage++;
						}
						else
						{
								b = *pImage++;
								g = *pImage++;
								r = *pImage++;
						}
            b = GET_MSB(b, 5, 0);
            g = GET_MSB(g, 6, 5);
            r = GET_MSB(r, 5, 11);
			tmp = r | g | b;
			tmp = (tmp >> 8) | (tmp & 0xFF) << 8;
			*p++ = tmp;
        }
    }
}

void CopyImage2LCD(uint16_t *pvFB, uint32_t x0, uint32_t y0, uint32_t w, uint32_t h, uint8_t *pImage, bool is_BGR)
{
     uint16_t *p;
     uint32_t r,g,b;
     uint32_t x, y;
     for (y=0; y<h; y++) {
		p = pvFB + (APP_LCD_HEIGHT - 1 - (y0 + y)) * APP_LCD_WIDTH + APP_LCD_WIDTH - 1 - x0;
        for (x=0; x<w; x++) {
						if(is_BGR)
						{
								r = *pImage++;
								g = *pImage++;
								b = *pImage++;
						}
						else
						{
								b = *pImage++;
								g = *pImage++;
								r = *pImage++;
						}
            b = GET_MSB(b, 5, 0);
            g = GET_MSB(g, 6, 5);
            r = GET_MSB(r, 5, 11);
			*p-- = r | g | b;
        }
    }
}


volatile uint32_t msTicks;

uint32_t LcdRotateWidth = 320;
uint32_t LcdRotateHeight = 240;
uint32_t g_status;	// 0=normal, 1=to add, 2 = to del

uint8_t g_borderRGB[3] = {255, 255, 255};
extern void SysTick_Handler(void);
bool is_BGR = false;
volatile bool g_waitForDone = false;
volatile bool g_continueWork = true;
#define TRIGGER_IRQ()	NVIC->STIR = Reserved169_IRQn
volatile bool g_isToCheckTouch, g_isToSnapshot;
volatile uint32_t g_burstDel;

uint32_t g_vtTouch = 50, g_vtLabel;
uint32_t g_vtToEnroll;

uint16_t MakeOmvCol(uint32_t r, uint32_t g, uint32_t b) {
	uint32_t c = (b>>3) | (g>>2)<<5 | (r>>3)<<11;
	c = (c>>8) | (c & 0xFF) << 8;
	return c;
}

void DrawMfnOSD(image_t *pImg, rectangle_t *pWnd) {
	uint32_t col;
	char buf[64];
	_LoadImage((uint16_t*)pImg->pixels, pImg->w, pImg->w - 1 - 64, 0, 64, 64, (uint8_t*)g_db[g_label].img, g_label != 0);
	if (g_label != 0) {
		
		snprintf(buf, 64, "DIFF=%d.%d", (int)(g_angle), (int)((g_angle - (int)(g_angle)) * 10.0f));
		imlib_draw_string(pImg, pImg->w - 1 - 144, 4, buf, MakeOmvCol(255, 255, 0), 2, 1/*x_spacing*/, 1/*y_spacing*/, 0);
	}
	if (g_vtToEnroll != 0) {
		snprintf(buf, 64, "%d", g_vtToEnroll / 100);
		imlib_draw_string(pImg, pImg->w - 1 - 144, 32, buf, MakeOmvCol(0, 255, 0), 3, 1/*x_spacing*/, 1/*y_spacing*/, 0);
	}
	col = MakeOmvCol(220, 220, 220);
	if (g_isToEnroll || g_status == 1) {
		col = MakeOmvCol(0, 255, 0);
	} else if (g_isToDel || g_status == 2)
		col = MakeOmvCol(255, 0, 0);

	imlib_draw_rectangle(pImg, 60, 4, 16, 16, col, 2 + (g_isToEnroll + g_isToDel) * 4, g_burstDel >= 5 ? 1: 0);
	
	if (g_dThsld > 0)
		imlib_draw_rectangle(pImg, 30, 4, (int)g_dThsld, 2, MakeOmvCol(0,255,255), 1, 0);
	else if (g_dThsld < 0)
		imlib_draw_rectangle(pImg, 30 + (int)g_dThsld, 4, (int)(-g_dThsld), 2, MakeOmvCol(255,0,0), 1, 0);
}

void Reserved169_IRQHandler(void)
{
	static touch_event_t prevTouch = kTouch_Up;
	static int lastTx, lastTy;


	if (g_isToCheckTouch) {
		g_isToCheckTouch = 0;
		touch_event_t touch_event;
		int tx, ty;
		FT5406_RT_GetSingleTouch(&g_touchHandle, &touch_event, &tx, &ty);
		if (touch_event == kTouch_Down || touch_event == kTouch_Contact) {
			lastTx = APP_LCD_WIDTH - 1 - ty , lastTy = APP_LCD_HEIGHT - 1 - tx;
		}
		if (touch_event == kTouch_Up && prevTouch != kTouch_Up) {
			int cmd = 0;
			if (lastTx < 68)
				cmd = 1 + lastTy / 68;
			else if (lastTx >= 480 - 1 - 68) {
				cmd = 10 + lastTy / 68;
				if (cmd == 10) 
					g_dThsld += 2.0f;
				else if (cmd == 12)
					g_dThsld -= 2.0f;
				else if (cmd == 11)
					g_dThsld = 0;
				if (g_dThsld > 20)
					g_dThsld = 20;
				else if (g_dThsld < -18)
					g_dThsld = -18;
			}
			
			if (cmd == 1) {
				g_status = 1;	// add
				g_burstDel = 0;
			} 
			else if (cmd == 2) {	// del
				g_status = 2;
				g_burstDel++;
			}
			else if (cmd == 3) {
				if (g_status == 1) {
					g_vtToEnroll = 4000;
					g_isToEnroll = 1;
				}
				else if (g_status == 2)
				{
					g_isToDel = 1;
				}
					g_status = 0;
			}
			else if (cmd == 4) {
				g_status = 0;
				g_burstDel = 0 , g_isToEnroll = 0 , g_isToDel = 0;
			}			
		}
		prevTouch = touch_event;
	}
}

void NndemoTickHandler(void)
{
	static uint32_t prevKeySt;
	int i;
	if (msTicks % 45 == 0) {
		uint32_t keySt = GPIO_PinRead(GPIO5, 0);
		if (keySt == 0 && prevKeySt == 1) {
			if (g_status == 0) {
				g_status = 1;
			}
			else if (g_status == 1) {
				g_status = 0;
				g_vtToEnroll = 4000;
				g_isToEnroll = 1;
			}
		}
		prevKeySt = keySt;
		
		if (g_isToDel) {
			
			if (g_burstDel >= 5) {
				// del all
				g_isToDel = 0;
				for (i=FIXED_FACE_CNT; i<MAX_FACES; i++) {
					if (g_db[i].tagWord != -1) {
						g_db[i].tagWord = -1;
						DelFace(i);
					}
				}
			}
			else if (g_label >= FIXED_FACE_CNT) {
				g_isToDel = 0;
				g_db[g_label].tagWord = -1;
				DelFace(g_label);
			}
			g_burstDel = 0;
		}		
		
	}

	if (g_vtToEnroll != 0) {
		if (--g_vtToEnroll == 0) {
		}
	}
	
	if (g_vtTouch != 0) {
		if (--g_vtTouch == 0) {
			g_vtTouch = 62;
			g_isToCheckTouch = 1;
			TRIGGER_IRQ();
		}
	}
	
	if (g_vtLabel != 0) {
		if (--g_vtLabel == 0) {
			g_label = 0;
		}
	}
	
	msTicks++;
}

#define IMAGE_CNT	120
void* RunModel(const void *in_buf, uint8_t normOfs);
#define IMAGE_SIZE    (8 + 12288 * 2)
#define ANGLE_BORDER	64.569822f
extern const unsigned char cg_testData[20][IMAGE_SIZE];

float GetAngle(signed char *pv1, signed char *pv2)
{
	int32_t iM1, iM2, iDot;
	float fM1, fM2, fDot;
	int i;
	for (i=0, iM1 = 0, iM2 = 0, iDot = 0; i<128; i++) {
		iDot += (int32_t) pv1[i] * pv2[i];
		iM1 += (int32_t) pv1[i] * pv1[i];
		iM2 += (int32_t) pv2[i] * pv2[i];
	}
	fDot = (float) iDot;
	fM1 = sqrtf((float)iM1);
	fM2 = sqrtf((float)iM2);
	float cosVal = fDot / (fM1 * fM2);
	float angle = acosf(cosVal) * 180 / 3.141592654f;
	return angle;
}

void LoadFaces(void)
{
	int i;
	signed char *pRet;
	for(i = 0; i<FIXED_FACE_CNT; i++)
	{	
		memcpy(g_db[i].img, cg_sample0 + i * FACE_IMAGE_SIZE, FACE_IMAGE_SIZE);
		g_db[0].tagWord = 0;		
		pRet = (signed char *) RunModel(g_db[i].img, 128);
		memcpy(g_db[i].vec, pRet, FACE_VEC_SIZE);
	}

	const SavedFace_t * p = cg_pcSavedDB;
	for (; i< MAX_FACES; i++, p++) {
		g_db[i].tagWord = -1;
		if (p->inuse == -1)
			continue;
		g_db[i].tagWord = 0;
		memcpy(g_db[i].vec, p->vec, FACE_VEC_SIZE);
		memcpy(g_db[i].img, p->img, FACE_IMAGE_SIZE);
	}
}

void AppendFace(void *pvImg)
{
	signed char *pRet = RunModel(pvImg, 128);
	int i;
	for (i=FIXED_FACE_CNT; i< MAX_FACES; i++) {
		if (g_db[i].tagWord == -1) {
			g_db[i].tagWord = 0;
			memcpy(g_db[i].vec, pRet, FACE_VEC_SIZE);
			memcpy(g_db[i].img, pvImg, FACE_IMAGE_SIZE);
			SaveFace(i, pRet, pvImg);
			break;
		}
	}
}

void ShowIcons(void)
{
	int i;
	for (int i=0; i<4; i++) {
		CopyImage2LCD((uint16_t *)s_frameBuffer[0], 2, 2 + i * 68, 64, 64, (uint8_t*)cg_btns[i], 1);
		CopyImage2LCD((uint16_t *)s_frameBuffer[1], 2, 2 + i * 68, 64, 64, (uint8_t*)cg_btns[i], 1);	
	}
	for (int i=4; i<7; i++) {
		CopyImage2LCD((uint16_t *)s_frameBuffer[0], 479 - 68, 2 + (i - 4) * 68, 64, 64, (uint8_t*)cg_btns[i], 1);
		CopyImage2LCD((uint16_t *)s_frameBuffer[1], 479 - 68, 2 + (i - 4) * 68, 64, 64, (uint8_t*)cg_btns[i], 1);	
	}		
}

extern const unsigned char cg_btns[][64*64*3];
void RunMfn(void *pPix)
{
	uint32_t t1 = msTicks;		

	if (g_isToEnroll == 1 && g_vtToEnroll == 0) {
		AppendFace(pPix);
		g_isToEnroll = 0;
	}
	

	
	signed char *pRet;
	pRet = (signed char *) RunModel(pPix, 128);
	
	float min = 1E6; g_label = 0;
	for(int i= 0;i < MAX_FACES; i++)
	{
		if (g_db[i].tagWord == -1)
			continue;
		float min_temp = GetAngle((signed char*)pRet,(signed char*)g_db[i].vec);
		if(min >= min_temp && min_temp <= 45 + g_dThsld)
		{
			min = min_temp;
			g_label = i;
			g_angle = min;
		}
	}
	if (g_label != 0)
		g_vtLabel = 1999;

}

#define BOARD_TOUCH_I2C LPI2C1
/* Clock divider for master lpi2c clock source */
#define LPI2C_CLOCK_SOURCE_DIVIDER (5U)
#define BOARD_TOUCH_I2C_CLOCK_FREQ ((CLOCK_GetFreq(kCLOCK_Usb1PllClk) / 8) / (LPI2C_CLOCK_SOURCE_DIVIDER + 1U))
#define BOARD_TOUCH_I2C_BAUDRATE 100000U
void ProfilingInit(void);
int mfn_main()
{
	ShowIcons();
    lpi2c_master_config_t masterConfig = {0};
    /*
    * masterConfig.debugEnable = false;
    * masterConfig.ignoreAck = false;
    * masterConfig.pinConfig = kLPI2C_2PinOpenDrain;
    * masterConfig.baudRate_Hz = 100000U;
    * masterConfig.busIdleTimeout_ns = 0;
    * masterConfig.pinLowTimeout_ns = 0;
    * masterConfig.sdaGlitchFilterWidth_ns = 0;
    * masterConfig.sclGlitchFilterWidth_ns = 0;
    */
    LPI2C_MasterGetDefaultConfig(&masterConfig);

    /* Change the default baudrate configuration */
    masterConfig.baudRate_Hz = BOARD_TOUCH_I2C_BAUDRATE;

    /* Initialize the LPI2C master peripheral */
    LPI2C_MasterInit(BOARD_TOUCH_I2C, &masterConfig, BOARD_TOUCH_I2C_CLOCK_FREQ);

    /* Initialize the touch handle. */
	FT5406_RT_Init(&g_touchHandle, BOARD_TOUCH_I2C);
	NVIC_SetPriority(Reserved169_IRQn, 15);
	NVIC_EnableIRQ(Reserved169_IRQn);
	StorageInit();
	LoadFaces();
	return 0;
}

