#include <stdio.h>
#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "fsl_xbara.h"
#include "dcmc.h"
#include "genhdr/pins.h"
#if 1
#include "fsl_iomuxc.h"

pyb_dcmc_obj_t pyb_dcmc_obj[3]={
	{.base = {&pyb_dcmc_type}, .pwm_base = PWM1,.flexidex = kPWM_Module_2, .control_t = kPWM_Control_Module_2, .pwm_width = 50, .freq = 50000, .inverted = 0},
	{.base = {&pyb_dcmc_type}, .pwm_base = PWM3,.flexidex = kPWM_Module_0, .control_t = kPWM_Control_Module_0, .pwm_width = 50, .freq = 50000, .inverted = 0},
	{.base = {&pyb_dcmc_type}, .pwm_base = PWM3,.flexidex = kPWM_Module_3, .control_t = kPWM_Control_Module_3, .pwm_width = 50, .freq = 50000, .inverted = 0},
};

/* Get source clock for PWM driver */
#define PWM_SRC_CLK_FREQ CLOCK_GetFreq(kCLOCK_IpgClk)
void init_pwm(pyb_dcmc_obj_t *s)
{
		mp_hal_pin_config_alt(s->pin[0], GPIO_MODE_OUTPUT_PP, AF_FN_PWM);
		mp_hal_pin_config_alt(s->pin[1], GPIO_MODE_OUTPUT_PP, AF_FN_PWM);
		pwm_config_t pwmConfig;
		pwm_signal_param_t pwmSignal[2];
		CLOCK_SetDiv(kCLOCK_AhbDiv, 0x2); /* Set AHB PODF to 2, divide by 3 */
		CLOCK_SetDiv(kCLOCK_IpgDiv, 0x3); /* Set IPG PODF to 3, divede by 4 */
		//disable the fault detect function to avoid using the xbara
		s->pwm_base->SM[s->flexidex].DISMAP[0]=0;
		s->pwm_base->SM[s->flexidex].DISMAP[1]=0;
	
		PWM_GetDefaultConfig(&pwmConfig);
		pwmConfig.reloadLogic = kPWM_ReloadPwmFullCycle;
		pwmConfig.pairOperation = kPWM_ComplementaryPwmA;
		pwmConfig.enableDebugMode = false;
		pwmConfig.clockSource = kPWM_BusClock;
		pwmConfig.enableWait = false;
		//calcute the right prescale with less loss
		uint32_t clkSource = PWM_SRC_CLK_FREQ;
		float threshold = s->err;
		uint32_t prescale = 7;
		float error = 1.0;
		while(1)
		{
			float temp = clkSource*1.0/(1<<prescale)/s->freq;
			if(((error = (temp - (uint32_t)temp)/temp)<threshold)||(prescale==0))
				break;
			prescale -= 1;
		}
		s->prescale = prescale;
		pwmConfig.prescale = s->prescale;
		PWM_Init(s->pwm_base, s->flexidex, &pwmConfig);		
		uint16_t deadTimeVal;
		uint32_t pwmSourceClockInHz = PWM_SRC_CLK_FREQ;
		/* Set deadtime count, we set this to about 650ns */
		deadTimeVal = ((uint64_t)pwmSourceClockInHz * 650) / 1000000000;
		
		pwmSignal[0].pwmChannel = kPWM_PwmA;
		pwmSignal[0].level = kPWM_HighTrue;
		pwmSignal[0].dutyCyclePercent = s->pwm_width; /* 1 percent dutycycle */
		pwmSignal[0].deadtimeValue = deadTimeVal;

		pwmSignal[1].pwmChannel = kPWM_PwmB;
		pwmSignal[1].level = kPWM_HighTrue;
		/* Dutycycle field of PWM B does not matter as we are running in PWM A complementary mode */
		pwmSignal[1].dutyCyclePercent = s->pwm_width;
		pwmSignal[1].deadtimeValue = deadTimeVal;

		PWM_SetupPwm(s->pwm_base, s->flexidex, pwmSignal, 2, kPWM_SignedCenterAligned, s->freq,
					 pwmSourceClockInHz);
		PWM_SetPwmLdok(s->pwm_base, s->control_t, true);
		PWM_StartTimer(s->pwm_base, s->control_t);	
}

void set_dcmc(pyb_dcmc_obj_t *s)
{
	uint8_t polarityShift = PWM_OCTRL_POLA_SHIFT;

	/* Setup signal active level */
	if (s->inverted == kPWM_HighTrue)
	{
		s->pwm_base->SM[s->flexidex].OCTRL &= ~(1U << polarityShift);
	}
	else
	{
		s->pwm_base->SM[s->flexidex].OCTRL |= (1U << polarityShift);
	}
	PWM_UpdatePwmDutycycle(s->pwm_base, s->flexidex, kPWM_ComplementaryPwmA, kPWM_SignedCenterAligned, s->pwm_width);
	PWM_SetPwmLdok(s->pwm_base, s->control_t, true);
}
#endif

#define DCMC_INIT_PINS(n) \
	pyb_dcmc_obj[n].pin[0] = &MICROPY_HW_DCMC_##n; \
	pyb_dcmc_obj[n].pin[1] = &MICROPY_HW_DCMC_##n##N; 

void dcmc_init0()
{
	#if !defined(MICROPY_HW_DCMC0_NAME)
	pyb_dcmc_obj[0].pin[0] = 0;
	pyb_dcmc_obj[0].pin[1] = 0;
	#else
	DCMC_INIT_PINS(0);
	#endif


	#if !defined(MICROPY_HW_DCMC1_NAME)
	pyb_dcmc_obj[1].pin[0] = 0;
	pyb_dcmc_obj[1].pin[1] = 0;
	#else
	DCMC_INIT_PINS(1);
	#endif
	
	#if !defined(MICROPY_HW_DCMC2_NAME)
	pyb_dcmc_obj[2].pin[0] = 0;
	pyb_dcmc_obj[2].pin[1] = 0;
	#else
	DCMC_INIT_PINS(2);
	#endif
	
	
}
mp_obj_t dcmc_init(pyb_dcmc_obj_t *s) {
	init_pwm(s);
	set_dcmc(s);
    return mp_const_none;
}


mp_obj_t pyb_dcmc_deinit(mp_obj_t self_in){
	pyb_dcmc_obj_t *self = self_in;	
	PWM_StopTimer(self->pwm_base, self->control_t);
	PWM_Deinit(self->pwm_base, self->flexidex);
	return mp_const_none;
	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_dcmc_deinit_obj, pyb_dcmc_deinit);

STATIC void pyb_dcmc_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_dcmc_obj_t *self = self_in;
    mp_printf(print, "<Idex %u, Width %.2f, Freq %u, Prescale %u, is Inverted at %u>", self - pyb_dcmc_obj + 1, self->pwm_width, self->freq, self->prescale, self->inverted);
}


STATIC mp_obj_t pyb_dcmc_init_helper(pyb_dcmc_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_width,     MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },	// 0 = master, !0 = slave
        { MP_QSTR_freq, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 50000} },
        { MP_QSTR_inverted, MP_ARG_KW_ONLY | MP_ARG_INT,  {.u_int = 0} },
		{ MP_QSTR_erro,     MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
    };
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);
	if (args[0].u_obj != MP_OBJ_NULL) {
			self->pwm_width = mp_obj_get_float(args[0].u_obj);
		} else 
			self->pwm_width = 50.0;
	if (args[3].u_obj != MP_OBJ_NULL) {
			self->err = mp_obj_get_float(args[3].u_obj);
		} else 
			self->err = 0.01;
	self->freq = args[1].u_int; self->inverted = args[2].u_int;
	dcmc_init(self);
    return mp_const_none;
}
STATIC mp_obj_t pyb_dcmc_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {

    return pyb_dcmc_init_helper(args[0], n_args - 1, args + 1, kw_args);

}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_dcmc_init_obj, 1, pyb_dcmc_init);

STATIC mp_obj_t pyb_dcmc_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
	// check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    // work out pwm channel
    int dcmc_id = mp_obj_get_int(args[0]);
	if((dcmc_id < 1) || (dcmc_id>3))
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only support 1-3"));
	pyb_dcmc_obj_t *s = &pyb_dcmc_obj[dcmc_id-1];
	
    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_dcmc_init_helper(s, n_args - 1, args + 1, &kw_args);
    }
    return (mp_obj_t)s;
}



/// \method pulse_width([value])
/// Get or set the duty circle in 0-100.
STATIC mp_obj_t pyb_dcmc_pulse_width(size_t n_args, const mp_obj_t *args) {
    pyb_dcmc_obj_t *self = args[0];
    if (n_args == 1) {
        // get pulse width, in us
        return mp_obj_new_float(self->pwm_width);
    } else {
        // set pulse width, in us
		if(mp_obj_get_float(args[1]) > 100)
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only accept 0-100"));
			return mp_const_none;
		}
        self->pwm_width = mp_obj_get_float(args[1]);
		set_dcmc(self);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_dcmc_width_obj, 1, 2, pyb_dcmc_pulse_width);

STATIC mp_obj_t pyb_dcmc_freq(size_t n_args, const mp_obj_t *args) {
    pyb_dcmc_obj_t *self = args[0];
    if (n_args == 1) {
        // get pulse width, in us
        return mp_obj_new_int(self->freq);
    } else {
        // set pulse width, in us
        self->freq = mp_obj_get_int(args[1]);		
        return dcmc_init(self);
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_dcmc_freq_obj, 1, 2, pyb_dcmc_freq);

STATIC mp_obj_t pyb_dcmc_inverted(size_t n_args, const mp_obj_t *args) {
    pyb_dcmc_obj_t *self = args[0];
    if (n_args == 1) {
        return mp_obj_new_int(self->inverted);
    } else {
		if(mp_obj_get_int(args[1]) > 1)
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only accept 0/1/r/n"));
			return mp_const_none;
		}
        self->inverted = mp_obj_get_int(args[1]);
		set_dcmc(self);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_dcmc_inverted_obj, 1, 2, pyb_dcmc_inverted);

STATIC const mp_rom_map_elem_t dcmc_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_dcmc_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_dcmc_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_width), MP_ROM_PTR(&pyb_dcmc_width_obj) },
	{ MP_ROM_QSTR(MP_QSTR_freq), MP_ROM_PTR(&pyb_dcmc_freq_obj) },
	{ MP_ROM_QSTR(MP_QSTR_inverted), MP_ROM_PTR(&pyb_dcmc_inverted_obj) },
};

STATIC MP_DEFINE_CONST_DICT(dcmc_locals_dict, dcmc_locals_dict_table);

const mp_obj_type_t pyb_dcmc_type = {
    { &mp_type_type },
    .name = MP_QSTR_DCMC,
	.print = pyb_dcmc_print,
	.make_new = pyb_dcmc_make_new,
    .locals_dict = (mp_obj_dict_t*)&dcmc_locals_dict,
};