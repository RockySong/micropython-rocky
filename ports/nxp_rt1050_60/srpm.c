#include <stdio.h>
#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "srpm.h"
#include "genhdr/pins.h"

#define QTMR_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_IpgClk)
void init_srpm_tmr(pyb_srpm_obj_t *s)
{
	qtmr_config_t qtmrConfig;
	QTMR_GetDefaultConfig(&qtmrConfig);
    /* Init the first channel to use the IP Bus clock div by 8 */
    qtmrConfig.primarySource = s->prisrc; //if use 8, the compare value is too large that bigger than 16bits register
	qtmrConfig.secondarySource = s->secsrc;
    QTMR_Init(s->tmr_base, s->idex[0], &qtmrConfig);	
	QTMR_Init(s->tmr_base, s->idex[1], &qtmrConfig);
} 

pyb_srpm_obj_t pyb_srpm_obj[1]={
	{.base = {&pyb_srpm_type}, .tmr_base = TMR2, .idex = {kQTMR_Channel_0, kQTMR_Channel_1}, .prisrc = kQTMR_ClockCounter0InputPin, .secsrc = kQTMR_Counter1InputPin, .isActive=false},
};


#define SRPM_INIT_PINS(n) \
	pyb_srpm_obj[n].pin[0] = &MICROPY_HW_SRPM_##n; \
	pyb_srpm_obj[n].pin[1] = &MICROPY_HW_SRPM_##n##_N;

void srpm_init0()
{
	#if !defined(MICROPY_HW_SRPM0_NAME)
	pyb_srpm_obj[0].pin[0] = 0;
	pyb_srpm_obj[1].pin[0] = 0;
	#else
	SRPM_INIT_PINS(0);
	#endif
}
mp_obj_t scapture_init(pyb_srpm_obj_t *self_in){                                  /* Software Input On Field: Input Path is determined by functionality */
	
	
	pyb_srpm_obj_t *self = self_in;
	mp_hal_pin_config_alt(self->pin[0], GPIO_MODE_OUTPUT_PP, AF_FN_TMR);
	mp_hal_pin_config_alt(self->pin[1], GPIO_MODE_OUTPUT_PP, AF_FN_TMR);
	init_srpm_tmr(self);	
    QTMR_StartTimer(self->tmr_base, self->idex[0], kQTMR_QuadCountMode);
	QTMR_StartTimer(self->tmr_base, self->idex[1], kQTMR_QuadCountMode);
	return mp_const_none;
	
}

mp_obj_t get_scount(mp_obj_t self_in){
	pyb_srpm_obj_t *self = self_in;
	qtmr_channel_selection_t idex = self->idex[0]; // or self->idex[1] is fine too
	int16_t count = (int16_t) QTMR_GetCurrentTimerCount(self->tmr_base, idex);
	return mp_obj_new_int(count);			//mp_obj_new_int_from_uint   return mp_obj_new_int(count);	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(get_count_obj, get_scount);

void SRPM_TickHandler(void)
{
	uint32_t i;
	int16_t cntr;
	for(i=0;i<MAX_SRPM;i++)
	{
		if(pyb_srpm_obj[i].isActive)
		{
			if(--pyb_srpm_obj[i].vtInterval==0)
			{
				qtmr_channel_selection_t idex = pyb_srpm_obj[i].idex[0]; // or self->idex[1] is fine too
				cntr = (int16_t) QTMR_GetCurrentTimerCount(pyb_srpm_obj[i].tmr_base, idex);
				pyb_srpm_obj[i].spps=(cntr - pyb_srpm_obj[i].prevCntr)*1.0*1000/pyb_srpm_obj[i].interval;
				pyb_srpm_obj[i].prevCntr = cntr;
				pyb_srpm_obj[i].vtInterval = pyb_srpm_obj[i].interval;
			}
		}
	}
}

mp_obj_t get_spps(mp_obj_t self_in){
	pyb_srpm_obj_t *self = self_in;
	return mp_obj_new_float(self->spps);	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_get_spps_obj, get_spps);

STATIC mp_obj_t get_srpm(mp_obj_t self_in) {
	pyb_srpm_obj_t *self = self_in;
	uint32_t circle = self->pprParam;
	float temp = mp_obj_get_float(get_spps(self_in));
    return mp_obj_new_float(temp*60/circle*1.0);
}

STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_get_srpm_obj, get_srpm);

mp_obj_t pyb_srpm_deinit(mp_obj_t self_in){
	pyb_srpm_obj_t *self = self_in;
	/* Stop the counter for both two channel*/
	qtmr_channel_selection_t idex = self->idex[0];
    QTMR_StopTimer(self->tmr_base, idex);
	QTMR_Deinit(self->tmr_base, idex);
	idex = self->idex[1];
	QTMR_StopTimer(self->tmr_base, idex);
	QTMR_Deinit(self->tmr_base, idex);
	return mp_const_none;
	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_srpm_deinit_obj, pyb_srpm_deinit);

STATIC void pyb_srpm_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_srpm_obj_t *self = self_in;
    mp_printf(print, "<Idex %u, channel pair (%u, %u), interval %u, pps %u, is active %u>", (self - pyb_srpm_obj)+1, self->idex[0], self->idex[1], self->interval, self->pprParam, self->isActive);
}


STATIC mp_obj_t pyb_srpm_init_helper(pyb_srpm_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_interval,     MP_ARG_REQUIRED | MP_ARG_INT, {.u_int = 20} },	// interval 20ms, ppr 50->pulse per round
        { MP_QSTR_pprparam, 	MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 50} },
    };
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);
	self->interval = args[0].u_int; self->vtInterval = args[0].u_int; self->pprParam = args[1].u_int;self->prevCntr=0;
	scapture_init(self);
    return mp_const_none;
}
STATIC mp_obj_t pyb_srpm_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {

    return pyb_srpm_init_helper(args[0], n_args - 1, args + 1, kw_args);

}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_srpm_init_obj, 1, pyb_srpm_init);

STATIC mp_obj_t pyb_srpm_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
	// check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    // work out srpm channel
    int id = mp_obj_get_int(args[0]);
	if((id < 1) || (id>MAX_SRPM))
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only support 1 %%>_<%% "));
	pyb_srpm_obj_t *s = &pyb_srpm_obj[id-1];
	s->isActive = true;
    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_srpm_init_helper(s, n_args - 1, args + 1, &kw_args);
    }
    return (mp_obj_t)s;
}


STATIC const mp_rom_map_elem_t srpm_locals_dict_table[] = {
	{ MP_ROM_QSTR(MP_QSTR_get_count), MP_ROM_PTR(&get_count_obj) },
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_srpm_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_srpm_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_spps), MP_ROM_PTR(&pyb_get_spps_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_srpm), MP_ROM_PTR(&pyb_get_srpm_obj) },
};

STATIC MP_DEFINE_CONST_DICT(srpm_locals_dict, srpm_locals_dict_table);

const mp_obj_type_t pyb_srpm_type = {
    { &mp_type_type },
    .name = MP_QSTR_SRPM,
	.print = pyb_srpm_print,
	.make_new = pyb_srpm_make_new,
    .locals_dict = (mp_obj_dict_t*)&srpm_locals_dict,
};