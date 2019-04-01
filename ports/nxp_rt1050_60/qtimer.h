#include "py/obj.h"
#include "fsl_qtmr.h"

typedef struct _qtimer_obj_t{
	mp_obj_base_t base;
	TMR_Type* tmr_base;
	IRQn_Type IRQn;
	qtmr_channel_selection_t idex;
	__IO uint32_t ticks;
	float period;
	uint16_t prescale;
	bool isActive;
	mp_obj_t callback;
} pyb_qtimer_obj_t;
extern const mp_obj_type_t pyb_qtimer_type;