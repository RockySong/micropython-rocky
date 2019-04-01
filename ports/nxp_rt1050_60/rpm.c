#include <stdio.h>
#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "rpm.h"
#include "genhdr/pins.h"

#define QTMR_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_IpgClk)
void init_rpm_tmr(pyb_rpm_obj_t *s)
{
	qtmr_config_t qtmrConfig;
	QTMR_GetDefaultConfig(&qtmrConfig);
    /* Init the first channel to use the IP Bus clock div by 8 */
    qtmrConfig.primarySource = s->idex; //if use 8, the compare value is too large that bigger than 16bits register
    QTMR_Init(s->tmr_base, s->idex, &qtmrConfig);	
} 


pyb_rpm_obj_t pyb_rpm_obj[4]={
	{.base = {&pyb_rpm_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_0, .isActive=false, NULL},
	{.base = {&pyb_rpm_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_1, .isActive=false, NULL},
	{.base = {&pyb_rpm_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_3, .isActive=false, NULL},
	{.base = {&pyb_rpm_type}, .tmr_base = TMR1, .idex = kQTMR_Channel_3, .isActive=false, NULL},
};

#define RPM_INIT_PINS(n) \
	pyb_rpm_obj[n].pin = &MICROPY_HW_RPM_##n;

void rpm_init0()
{
	#if !defined(MICROPY_HW_RPM0_NAME)
	pyb_rpm_obj[0].pin = 0;
	#else
	RPM_INIT_PINS(0);
	#endif

	#if !defined(MICROPY_HW_RPM1_NAME)
	pyb_rpm_obj[1].pin = 0;
	#else
	RPM_INIT_PINS(1);
	#endif

	#if !defined(MICROPY_HW_RPM2_NAME)
	pyb_rpm_obj[2].pin = 0;
	#else
	RPM_INIT_PINS(2);
	#endif

	
	#if !defined(MICROPY_HW_RPM3_NAME)
	pyb_rpm_obj[3].pin = 0;
	#else
	RPM_INIT_PINS(3);
	#endif
	
}
mp_obj_t capture_init(pyb_rpm_obj_t *self_in){                                  /* Software Input On Field: Input Path is determined by functionality */
	
	
	pyb_rpm_obj_t *self = self_in;
	mp_hal_pin_config_alt(self->pin, GPIO_MODE_OUTPUT_PP, AF_FN_TMR);
	init_rpm_tmr(self);	
    QTMR_StartTimer(self->tmr_base, self->idex, kQTMR_PriSrcRiseEdge);
	return mp_const_none;
	
}

mp_obj_t get_count(mp_obj_t self_in){
	pyb_rpm_obj_t *self = self_in;
	uint16_t count = QTMR_GetCurrentTimerCount(self->tmr_base, self->idex);
	return mp_obj_new_int(count);	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(get_count_obj, get_count);

void calc_speed()
{
	uint32_t i;
	uint16_t cntr;
	for(i=0;i<MAX_RPM;i++)
	{
		if(pyb_rpm_obj[i].isActive)
		{
			if(--pyb_rpm_obj[i].vtInterval==0)
			{
				cntr = QTMR_GetCurrentTimerCount(pyb_rpm_obj[i].tmr_base, pyb_rpm_obj[i].idex);
                if(cntr < pyb_rpm_obj[i].prevCntr)
					pyb_rpm_obj[i].prevCntr = 0;
				pyb_rpm_obj[i].pps=(cntr - pyb_rpm_obj[i].prevCntr)*1.0*1000/pyb_rpm_obj[i].interval;
				pyb_rpm_obj[i].prevCntr = cntr;
				pyb_rpm_obj[i].vtInterval = pyb_rpm_obj[i].interval;
			}
		}
	}
}
mp_obj_t get_pps(mp_obj_t self_in){
	pyb_rpm_obj_t *self = self_in;
	/*uint16_t count1 = QTMR_GetCurrentTimerCount(self->tmr_base, self->idex);
	mp_hal_delay_ms(self->interval);
	uint16_t count2 = QTMR_GetCurrentTimerCount(self->tmr_base, self->idex);
	float speed = (count2-count1)*1.0*1000/self->interval;*/
	return mp_obj_new_float(self->pps);	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_get_pps_obj, get_pps);

STATIC mp_obj_t get_rpm(mp_obj_t self_in) {
	pyb_rpm_obj_t *self = self_in;
	uint32_t circle = self->pprParam;
	float temp = mp_obj_get_float(get_pps(self_in));
    return mp_obj_new_float(temp*60/circle*1.0);
}

STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_get_rpm_obj, get_rpm);

mp_obj_t pyb_rpm_deinit(mp_obj_t self_in){
	pyb_rpm_obj_t *self = self_in;
	/* Stop the counter */
    QTMR_StopTimer(self->tmr_base, self->idex);
	QTMR_Deinit(self->tmr_base, self->idex);
	return mp_const_none;
	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_rpm_deinit_obj, pyb_rpm_deinit);

STATIC void pyb_rpm_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_rpm_obj_t *self = self_in;
    mp_printf(print, "<Idex %u, interval %u, pps %u, is active %u>", self->idex, self->interval, self->pprParam, self->isActive);
}


STATIC mp_obj_t pyb_rpm_init_helper(pyb_rpm_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_interval,     MP_ARG_REQUIRED | MP_ARG_INT, {.u_int = 20} },	// interval 20ms, ppr 50->pulse per round
        { MP_QSTR_pprparam, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 50} },
    };
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);
	self->interval = args[0].u_int; self->vtInterval = args[0].u_int; self->pprParam = args[1].u_int;self->prevCntr=0;
	capture_init(self);
    return mp_const_none;
}
STATIC mp_obj_t pyb_rpm_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {

    return pyb_rpm_init_helper(args[0], n_args - 1, args + 1, kw_args);

}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_rpm_init_obj, 1, pyb_rpm_init);

STATIC mp_obj_t pyb_rpm_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
	// check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    // work out rpm channel
    int id = mp_obj_get_int(args[0]);
	if((id < 1) || (id>4))
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only support RPM 1-4"));
	pyb_rpm_obj_t *s = &pyb_rpm_obj[id-1];
	s->isActive = true;
    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_rpm_init_helper(s, n_args - 1, args + 1, &kw_args);
    }
    return (mp_obj_t)s;
}


STATIC const mp_rom_map_elem_t rpm_locals_dict_table[] = {
	{ MP_ROM_QSTR(MP_QSTR_get_count), MP_ROM_PTR(&get_count_obj) },
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_rpm_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_rpm_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_pps), MP_ROM_PTR(&pyb_get_pps_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_rpm), MP_ROM_PTR(&pyb_get_rpm_obj) },
};

STATIC MP_DEFINE_CONST_DICT(rpm_locals_dict, rpm_locals_dict_table);

const mp_obj_type_t pyb_rpm_type = {
    { &mp_type_type },
    .name = MP_QSTR_rpm,
	.print = pyb_rpm_print,
	.make_new = pyb_rpm_make_new,
    .locals_dict = (mp_obj_dict_t*)&rpm_locals_dict,
};