#ifndef _PY_SWIM_H_
#define _PY_SWIM_H_
#include "nxp_swim/inc/lpc_x6x13.h"
#include "nxp_swim/inc/lpc_x5x7.h"
#include "nxp_swim/inc/lpc_swim.h"
#include "nxp_swim/inc/lpc_swim_font.h"


typedef enum _enum_swim_disp_t
{
	swim_disp_oled128128 = 0,
	swim_disp_tft480272 = 1,
}enum_swim_disp_t;

typedef void swim_update_display_t(uint8_t *pfb);
typedef struct _pyb_swim_obj_t {
    mp_obj_base_t base;
	enum_swim_disp_t disp;
	swim_update_display_t *pfnUpdtDisp;
	SWIM_WINDOW_T win;
}pyb_swim_obj_t;


extern const mp_obj_type_t pyb_swim_type;


#endif

