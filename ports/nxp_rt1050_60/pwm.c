#include <stdio.h>
#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "pwm.h"
#include "genhdr/pins.h"
#if 1
#include "fsl_iomuxc.h"
void init_pwm_pin()
{
	  IOMUXC_SetPinMux(
      IOMUXC_GPIO_EMC_19_QTIMER2_TIMER0,    /* GPIO_AD_B1_00 is configured as QTIMER3_TIMER0 */
      0U); 
	  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_EMC_19_QTIMER2_TIMER0,    /* GPIO_AD_B1_00 PAD functional properties : */
      0x10B0u);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */ 
	
}
/* Get source clock for QTMR driver */
#define QTMR_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_IpgClk)
void init_tmr(pyb_pwm_obj_t *s)
{
	qtmr_config_t qtmrConfig;
	QTMR_GetDefaultConfig(&qtmrConfig);
    /* Init the first channel to use the IP Bus clock div by 8 */
	uint32_t clkSource = QTMR_SOURCE_CLOCK;
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
    qtmrConfig.primarySource = kQTMR_ClockDivide_1 + s->prescale; //if use 8, the compare value is too large that bigger than 16bits register
    QTMR_Init(s->tmr_base, s->idex, &qtmrConfig);	
}

void set_pwm(pyb_pwm_obj_t *s)
{
	/* Generate a 50Khz PWM signal with 50% dutycycle */
    QTMR_SetupPwm(s->tmr_base, s->idex, s->freq, s->pwm_width, s->inverted, QTMR_SOURCE_CLOCK / (1<<s->prescale));
	/* Start the counter */
    QTMR_StartTimer(s->tmr_base, s->idex, kQTMR_PriSrcRiseEdge);
}
#endif

#define PWM_INIT_PINS(n) \
	pyb_pwm_obj[n].pin = &MICROPY_HW_PWM_##n; 

pyb_pwm_obj_t pyb_pwm_obj[4]={
	{.base = {&pyb_pwm_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_0, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_1, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_3, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .tmr_base = TMR1, .idex = kQTMR_Channel_3, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
};

void pwm_init0()
{
	#if !defined(MICROPY_HW_PWM0_NAME)
	pyb_pwm_obj[0].pin = 0;
	#else
	PWM_INIT_PINS(0);
	#endif

	#if !defined(MICROPY_HW_PWM1_NAME)
	pyb_pwm_obj[1].pin = 0;
	#else
	PWM_INIT_PINS(1);
	#endif

	#if !defined(MICROPY_HW_PWM2_NAME)
	pyb_pwm_obj[2].pin = 0;
	#else
	PWM_INIT_PINS(2);
	#endif

	
	#if !defined(MICROPY_HW_PWM3_NAME)
	pyb_pwm_obj[3].pin = 0;
	#else
	PWM_INIT_PINS(3);
	#endif
	
}
mp_obj_t pwm_init(pyb_pwm_obj_t *s) {
	mp_hal_pin_config_alt(s->pin, GPIO_MODE_OUTPUT_PP, AF_FN_TMR);
	init_tmr(s);
	set_pwm(s);
    return mp_const_none;
}

mp_obj_t pwm_test(mp_obj_t self_in){
	pyb_pwm_obj_t *self = self_in;
	init_tmr(self);
		/* Generate a 50Khz PWM signal with 50% dutycycle */
    QTMR_SetupPwm(self->tmr_base, self->idex, 500000, 50, false, QTMR_SOURCE_CLOCK / 8);
	/* Start the counter */
    QTMR_StartTimer(self->tmr_base, self->idex, kQTMR_PriSrcRiseEdge);
	return mp_const_none;
	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pwm_test_obj, pwm_test);

mp_obj_t pyb_pwm_deinit(mp_obj_t self_in){
	pyb_pwm_obj_t *self = self_in;
	/* Stop the counter */
    QTMR_StopTimer(self->tmr_base, self->idex);
	QTMR_Deinit(self->tmr_base, self->idex);
	return mp_const_none;
	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_pwm_deinit_obj, pyb_pwm_deinit);

STATIC void pyb_pwm_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_pwm_obj_t *self = self_in;
    mp_printf(print, "<Idex %u, Width %.2f, Freq %u, is Inverted at %u>", self->idex, self->pwm_width, self->freq, self->inverted);
}


STATIC mp_obj_t pyb_pwm_init_helper(pyb_pwm_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
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
	pwm_init(self);
    return mp_const_none;
}
STATIC mp_obj_t pyb_pwm_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {

    return pyb_pwm_init_helper(args[0], n_args - 1, args + 1, kw_args);

}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_pwm_init_obj, 1, pyb_pwm_init);

STATIC mp_obj_t pyb_pwm_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
	// check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    // work out pwm channel
    int pwm_id = mp_obj_get_int(args[0]);
	pyb_pwm_obj_t *s = &pyb_pwm_obj[pwm_id-1];
	
    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_pwm_init_helper(s, n_args - 1, args + 1, &kw_args);
    }
    return (mp_obj_t)s;
}


/// \method angle([angle, time=0])
/// Get or set the angle of the servo.
///
///   - `angle` is the angle to move to in degrees.
///   - `time` is the number of milliseconds to take to get to the specified angle.
STATIC mp_obj_t pyb_servo_angle(size_t n_args, const mp_obj_t *args) {
    pyb_pwm_obj_t *self = args[0];
    if (n_args == 1) {
        // get angle
        return mp_obj_new_int(self->angle);
    } else {
		uint32_t base_freq = 50;
		float base_duty = 0.5/20;
		uint32_t angle = mp_obj_get_int(args[1]);
		uint32_t angle_duty = (base_duty + ((float)angle/45.0)*base_duty) * 100; //in percent
		self->angle = angle;
		self->freq = base_freq;
		self->pwm_width = angle_duty;
		set_pwm(self);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_servo_angle_obj,1, 2, pyb_servo_angle);

/// \method pulse_width([value])
/// Get or set the duty circle in 0-100.
STATIC mp_obj_t pyb_pwm_pulse_width(size_t n_args, const mp_obj_t *args) {
    pyb_pwm_obj_t *self = args[0];
    if (n_args == 1) {
        // get pulse width, in us
        return mp_obj_new_int(self->pwm_width);
    } else {
        // set pulse width, in us
		if(mp_obj_get_int(args[1]) > 100)
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only accept 0-100"));
			return mp_const_none;
		}
        self->pwm_width = mp_obj_get_int(args[1]);
		set_pwm(self);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_pwm_width_obj, 1, 2, pyb_pwm_pulse_width);

STATIC mp_obj_t pyb_pwm_freq(size_t n_args, const mp_obj_t *args) {
    pyb_pwm_obj_t *self = args[0];
    if (n_args == 1) {
        // get pulse width, in us
        return mp_obj_new_int(self->freq);
    } else {
        // set pulse width, in us
        self->freq = mp_obj_get_int(args[1]);
		set_pwm(self);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_pwm_freq_obj, 1, 2, pyb_pwm_freq);

STATIC mp_obj_t pyb_pwm_inverted(size_t n_args, const mp_obj_t *args) {
    pyb_pwm_obj_t *self = args[0];
    if (n_args == 1) {
        return mp_obj_new_int(self->inverted);
    } else {
		if(mp_obj_get_int(args[1]) > 1)
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only accept 0/1/r/n"));
			return mp_const_none;
		}
        self->inverted = mp_obj_get_int(args[1]);
		set_pwm(self);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_pwm_inverted_obj, 1, 2, pyb_pwm_inverted);

STATIC const mp_rom_map_elem_t pwm_locals_dict_table[] = {

	{ MP_ROM_QSTR(MP_QSTR_test), MP_ROM_PTR(&pwm_test_obj) },
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_pwm_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_pwm_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_angle), MP_ROM_PTR(&pyb_servo_angle_obj) },
	{ MP_ROM_QSTR(MP_QSTR_pwm_width), MP_ROM_PTR(&pyb_pwm_width_obj) },
	{ MP_ROM_QSTR(MP_QSTR_pwm_freq), MP_ROM_PTR(&pyb_pwm_freq_obj) },
	{ MP_ROM_QSTR(MP_QSTR_pwm_inverted), MP_ROM_PTR(&pyb_pwm_inverted_obj) },
};

STATIC MP_DEFINE_CONST_DICT(pwm_locals_dict, pwm_locals_dict_table);

const mp_obj_type_t pyb_pwm_type = {
    { &mp_type_type },
    .name = MP_QSTR_pwm,
	.print = pyb_pwm_print,
	.make_new = pyb_pwm_make_new,
    .locals_dict = (mp_obj_dict_t*)&pwm_locals_dict,
};