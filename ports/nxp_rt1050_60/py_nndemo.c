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
#include "fsl_lpi2c.h"
#define GET_MSB(a, bits, ofs)  (((a) >> (8 - (bits))) & ((1 << (bits)) - 1)) << ofs

extern sensor_t sensor;
uint8_t s_isMfnInited;
union {
	uint64_t pad64;
	uint8_t ary[640*480];
}s_gray;


static inline uint32_t Rgb565ToRgb888(uint16_t col) //use inline with GCC, must add the static key word
{
	uint32_t n888Color = 0;
/*	uint8_t cRed = (col & RGB565_RED) >> 8;  //in this way the lowest bit will be zero, so will not the >>11 >>8, in this way, the loweset bit will be the data, but is not the way of Rgb888ToRgb565
	uint8_t cGreen = (col & RGB565_GREEN) >> 3;
	uint8_t cBlue = (col & RGB565_BLUE) << 3;
	n888Color = ( cRed << 16 ) + (cGreen << 8) + (cBlue <<0);*/

	uint32_t r,g,b;
	r = (col >> 11) & 0x1F;  //in order to use the BFI instruction
	g = (col >> 5)  & 0x3F;
	b = (col >> 0)  & 0x1F;
	r = (r << 3) | (r >> 5); //extract the highest bit,and add it to the lowest
	g = (g << 2) | (g >> 6);
	b = (b << 3) | (b >> 5);
	n888Color = (r << 16) | (g << 8) | (b << 0);		
		
	return n888Color;
}

uint16_t Rgb888ToRgb565(uint32_t r, uint32_t g, uint32_t b) 
{
     b = GET_MSB(b, 5, 0);
     g = GET_MSB(g, 6, 5);
     r = GET_MSB(r, 5, 11);
     return (uint16_t)(r|g|b);
}

void CSI2Image(uint8_t *pDst, uint32_t w, uint32_t h, uint16_t *pSrc,int w0, int h0, bool is_bgr)
{
	uint32_t t_Color;
	uint32_t x,y;
	uint8_t b, g, r;
	uint32_t pix;
	if (w0 < w || h0 < 0)
		return;
	for (y=0; y<h; y++) {
		for (x=0; x<w; x++)
		{
			pix = *pSrc++;
			pix = (pix & 0xFF) << 8 | (pix >> 8);
			t_Color = Rgb565ToRgb888(pix);
			b = t_Color & 0xff; //b
			g = (t_Color & (0xff00)) >> 8; //g
			r = (t_Color & (0xff0000)) >> 16; //r
            if(is_bgr)
			{
				*pDst++ = r;
				*pDst++ = g;
				*pDst++ = b;
			}
			else
			{
				*pDst++ = b;
				*pDst++ = g;
				*pDst++ = r;
			}			
		}
		pSrc += w0 - w;
	}
}

uint8_t *ResizeRgb888(uint8_t *pIn, int w0, int h0, int w1, int h1) {
	uint8_t *p = (uint8_t*)m_malloc(w1 * h1 * 3);
	uint8_t *pRet = p;
	const uint8_t *p0;
	int y, x, ySrc, xSrc;
	float fySrc, fxSrc;
	float dx = (float)(w0) / (float)(w1);
	float dy = (float)(h0) / (float)(h1);
	for (y=0, fySrc = 0; y<h1; y++, fySrc += dy) {
		
		for (x=0, fxSrc = 0;x<w1; x++, fxSrc += dx) {
			xSrc = (int)(fxSrc);
			ySrc = (int)(fySrc);
			p0 = pIn + (w0 * ySrc + xSrc) * 3;
			*p++ = *p0++;
			*p++ = *p0++;
			*p++ = *p0++;
		}
	}
	return pRet;
}



extern void ShowIcons(void);
extern int mfn_main(void);
extern void RunMfn(void *pPix);
extern void DrawMfnOSD(image_t *pImg, rectangle_t *pWnd);
mp_obj_t RunMFN(uint8_t isFixed) {
    // Snapshot image
	static cascade_t cascade;
	static int cnt;
	mp_obj_t image = py_image(0, 0, 0, 0);
	if (!s_isMfnInited) {
		mfn_main();
		OverlaySwitch(OVLY_HAAR);
		// Load cascade from file or flash
		int res = imlib_load_cascade(&cascade, "frontalface");
		if (res != FR_OK) {
			nlr_raise(mp_obj_new_exception_msg(&mp_type_OSError, ffs_strerror(res)));
		}
		cascade.threshold = 0.90f; //py_helper_keyword_float(n_args, args, 2, kw_args, MP_OBJ_NEW_QSTR(MP_QSTR_threshold), 0.5f);
		cascade.scale_factor = 1.35f; //py_helper_keyword_float(n_args, args, 3, kw_args, MP_OBJ_NEW_QSTR(MP_QSTR_scale_factor), 1.5f);
		// Read the number of stages
		int stages = 25; // lower stage is faster but less accurate
		// Check the number of stages
		if (stages > 0 && stages < cascade.n_stages) {
			cascade.n_stages = stages;
		}
				
		s_isMfnInited = 1;
	}
    // Sanity checks
    PY_ASSERT_TRUE_MSG((sensor.pixformat != PIXFORMAT_JPEG), "Operation not supported on JPEG");

    if (sensor_snapshot((image_t*) py_image_cobj(image), 0, 0)==-1) {
        nlr_raise(mp_obj_new_exception_msg(&mp_type_RuntimeError, "Sensor Timeout!!"));
        return mp_const_false;
	}
	int y, x;
	rectangle_t roi = {0,0,240,240};
	image_t *pImg = (image_t*) py_image_cobj(image);
	
	if (isFixed)
	{
		y = (pImg->h - 128) / 2 , x = (pImg->w - 128) / 2;
		uint16_t *pIn = (uint16_t*)pImg->pixels + y * pImg->w + x;
		uint8_t *pOut = (uint8_t*) s_gray.ary;
		CSI2Image(pOut, 128, 128, pIn, pImg->w, pImg->h, 1);
		pOut = ResizeRgb888(pOut, 128, 128, 64, 64);
		RunMfn(pOut);
		m_free(pOut);
		imlib_draw_rectangle(pImg, x - 2, y - 2, 128 + 4, 128 + 4, 0xFFFFFFFF, 2, 0);
	} else {
		uint8_t isRGB565 = 0;
		
		uint8_t *pPixBkup;
		
		int roiW = 160;
		if (pImg->w < roiW)
			roiW = pImg->w;
		if (pImg->h < roiW)
			roiW = pImg->h;
		roi.x = (pImg->w - roiW) / 2 , roi.y = (pImg->h - roiW) / 2 , roi.w = roi.h = roiW;
		if (pImg->bpp == IMAGE_BPP_RGB565) {
			isRGB565 = 1;
			OverlaySwitch(OVLY_YUV_TAB);
			uint16_t *pRGBPix = (uint16_t*)(pImg->pixels);
			uint8_t *p = s_gray.ary;
			uint32_t pix, yuv_y;
			for (y=0; y<pImg->h; y++) {
				for (x=0; x<pImg->w; x++) {
					pix = *pRGBPix++;
					yuv_y = 128 + yuv_table[pix * 3];
					*p++ = (uint8_t)yuv_y;
				}
			}
			pPixBkup = pImg->pixels;
			pImg->pixels = s_gray.ary;
			pImg->bpp = IMAGE_BPP_GRAYSCALE;
		}
		OverlaySwitch(OVLY_HAAR);
		array_t *objects_array = imlib_detect_objects(pImg, &cascade, &roi);
		if (pImg->pixels == s_gray.ary) {
			pImg->pixels = pPixBkup;
			pImg->bpp = IMAGE_BPP_RGB565;
		}
		int objCnt = array_length(objects_array);
		if (objCnt > 0) {
			rectangle_t *r = array_at(objects_array, 0);
			mp_printf(&mp_plat_print, "x=%d,y=%d,w=%d,h=%d\r\n", r->x, r->y, r->w, r->h);
			if (isRGB565) {
				// clip image
				int dD = (r->w + r->h) * 5 / 100 / 2;
				if (r->x >= dD && r->x + dD < pImg->w && r->h >= dD && r->y + dD < pImg->h) {
					int clipW = r->w + 2 *dD, tmp;
					uint16_t *pIn = (uint16_t*)pImg->pixels + (r->y - dD) * pImg->w + (r->x - dD);
					uint8_t *pOut = (uint8_t*) s_gray.ary;
					CSI2Image(pOut, clipW, clipW, pIn, pImg->w, pImg->h, 1);
					pOut = ResizeRgb888(pOut, clipW, clipW, 64, 64);
					RunMfn(pOut);
					m_free(pOut);
				}
				imlib_draw_rectangle(pImg, r->x, r->y, r->w, r->h, 0xFFFFFFFF, 2, 0);
				
			}
		}
		array_free(objects_array);
	}
	DrawMfnOSD(pImg, &roi);
	return image;
}

typedef struct _FaceVald_t {
	uint32_t magic;
	uint32_t sameWord;
	uint8_t img1[64*64*3];
	uint8_t img2[64*64*3];
}FaceVald_t;

#define IMAGE_SIZE    (8 + 12288 * 2)


/// \method mem_read(data, addr, memaddr, timeout=5000, addr_size=8)
///
/// Read from the memory of an I2C device:
///
///   - `data` can be an integer or a buffer to read into
///   - `addr` is the I2C device address
///   - `memaddr` is the memory location within the I2C device
///   - `timeout` is the timeout in milliseconds to wait for the read
///   - `addr_size` selects width of memaddr: 8 or 16 bits
///
/// Returns the read data.
/// This is only valid in master mode.
STATIC const mp_arg_t nndemo_show_allowed_args[] = {
    { MP_QSTR_index,   MP_ARG_INT, {.u_int = 0} },
    { MP_QSTR_data,    MP_ARG_INT, {.u_int = 0} },
};

STATIC mp_obj_t nndemo_show(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    // parse args
    mp_arg_val_t args[MP_ARRAY_SIZE(nndemo_show_allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(nndemo_show_allowed_args), nndemo_show_allowed_args, args);
	
	switch(args[0].u_int) {
		case 0:
			RunMFN(args[1].u_int != 0);
			if (args[1].u_int == 1) {
				ShowIcons();
			}
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
	mp_printf(&mp_plat_print, "nndemo cmd=%d\r\n", args[1].u_int);

    return mp_const_none;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(nndemo_show_obj, 1, nndemo_show);
STATIC const mp_rom_map_elem_t globals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_OBJ_NEW_QSTR(MP_QSTR_nndemo) },
	{ MP_ROM_QSTR(MP_QSTR_show),     MP_ROM_PTR(&nndemo_show_obj) },
};

STATIC MP_DEFINE_CONST_DICT(globals_dict, globals_dict_table);

const mp_obj_module_t nndemo_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_t) &globals_dict
};