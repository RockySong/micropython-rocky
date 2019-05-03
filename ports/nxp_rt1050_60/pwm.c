#include <stdio.h>
#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "fsl_xbara.h"
#include "pwm.h"
#include "genhdr/pins.h"
#if 1
#include "fsl_iomuxc.h"

pyb_pwm_obj_t pyb_pwm_obj[10]={
	{.base = {&pyb_pwm_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_0, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_1, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_3, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .tmr_base = TMR1, .idex = kQTMR_Channel_3, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .pwm_base = PWM3, .flexidex = kPWM_Module_3, .channel = kPWM_PwmA, .control_t = kPWM_Control_Module_3,.pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .pwm_base = PWM3, .flexidex = kPWM_Module_3, .channel = kPWM_PwmB, .control_t = kPWM_Control_Module_3, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .pwm_base = PWM3, .flexidex = kPWM_Module_0, .channel = kPWM_PwmB, .control_t = kPWM_Control_Module_0, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .pwm_base = PWM1, .flexidex = kPWM_Module_2, .channel = kPWM_PwmA, .control_t = kPWM_Control_Module_2, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .pwm_base = PWM3, .flexidex = kPWM_Module_0, .channel = kPWM_PwmA, .control_t = kPWM_Control_Module_0, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
	{.base = {&pyb_pwm_type}, .pwm_base = PWM1, .flexidex = kPWM_Module_2, .channel = kPWM_PwmB, .control_t = kPWM_Control_Module_2, .pwm_width = 50, .freq = 50000, .inverted = 0, .angle = 0, NULL},
};

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
/* Get source clock for PWM driver */
#define PWM_SRC_CLK_FREQ CLOCK_GetFreq(kCLOCK_IpgClk)
uint32_t _CalcPrescale(pyb_pwm_obj_t *s, uint32_t clkSource) {
	int prescale;
	float error;
	float threshold = s->err;
	for (prescale=7; prescale >=0; prescale--)
	{
		float temp = (float)(clkSource) / (1<<prescale) / s->freq;
		if (temp >= 65536.0f)
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "pwm freq is too low, chen qie zuo bu dao a! %>_<% "));
		error = (temp - (uint32_t)temp)/temp;
		if(error <= threshold) {				
			return prescale;
		}
	}
	nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "Allowed error is too small for this freq, chen qie zuo bu dao a!  %>_<% "));	
}

void init_tmr(pyb_pwm_obj_t *s)
{
	uint32_t id = s-pyb_pwm_obj;
	if(id<4)
	{
		mp_hal_pin_config_alt(s->pin, GPIO_MODE_OUTPUT_PP, AF_FN_TMR);
		qtmr_config_t qtmrConfig;
		QTMR_GetDefaultConfig(&qtmrConfig);
	    /* Init the first channel to use the IP Bus clock div by a calcute-value */
		s->prescale = _CalcPrescale(s, QTMR_SOURCE_CLOCK);
	    qtmrConfig.primarySource = kQTMR_ClockDivide_1 + s->prescale; //if use 8, the compare value is too large that bigger than 16bits register
	    QTMR_Init(s->tmr_base, s->idex, &qtmrConfig);
	}
	else
	{
		mp_hal_pin_config_alt(s->pin, GPIO_MODE_OUTPUT_PP, AF_FN_PWM);
		pwm_config_t pwmConfig;
		pwm_signal_param_t pwmSignal[2];
		CLOCK_SetDiv(kCLOCK_AhbDiv, 0x2); /* Set AHB PODF to 2, divide by 3 */
		CLOCK_SetDiv(kCLOCK_IpgDiv, 0x3); /* Set IPG PODF to 3, divede by 4 */
		/*use the fault detect function, when the input is high, will input a positive singnal, then enable the pwm output, or a 
		  low value will disable the output, pull the pwm pin low to protect the circuit
		XBARA_Init(XBARA1);
		XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1Fault0);
		XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1Fault1);
		
		XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm2Fault0);
		XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm2Fault1);
		
		XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm3Fault0);
		XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm3Fault1);
		
		XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1234Fault2);
		XBARA_SetSignalsConnection(XBARA1, kXBARA1_InputLogicHigh, kXBARA1_OutputFlexpwm1234Fault3);*/
		//disable the fault detect function to avoid using the xbara
		s->pwm_base->SM[s->flexidex].DISMAP[0]=0;
		s->pwm_base->SM[s->flexidex].DISMAP[1]=0;
		
		PWM_GetDefaultConfig(&pwmConfig);
		pwmConfig.reloadLogic = kPWM_ReloadPwmFullCycle;
		pwmConfig.pairOperation = kPWM_Independent;
		pwmConfig.enableDebugMode = false;
		pwmConfig.clockSource = kPWM_BusClock;
		pwmConfig.enableWait = false;
		_CalcPrescale(s, PWM_SRC_CLK_FREQ);
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
}

status_t QTMR_SetupPwmHiRes(
    TMR_Type *base, qtmr_channel_selection_t channel, uint32_t pwmFreqHz, float dutyCyclePercent, bool outputPolarity, uint32_t srcClock_Hz)
{
    uint32_t periodCount, highCount, lowCount, reg;

    if (dutyCyclePercent > 100.0f)
    {
        /* Invalid dutycycle */
        return kStatus_Fail;
    }

    /* Set OFLAG pin for output mode and force out a low on the pin */
    base->CHANNEL[channel].SCTRL |= (TMR_SCTRL_FORCE_MASK | TMR_SCTRL_OEN_MASK);

    /* Counter values to generate a PWM signal */
    periodCount = (srcClock_Hz / pwmFreqHz);
    highCount = (uint32_t)((periodCount * dutyCyclePercent + 50.0f) / 100.0f);
    lowCount = periodCount - highCount;

    /* Setup the compare registers for PWM output */
    base->CHANNEL[channel].COMP1 = lowCount;
    base->CHANNEL[channel].COMP2 = highCount;

    /* Setup the pre-load registers for PWM output */
    base->CHANNEL[channel].CMPLD1 = lowCount;
    base->CHANNEL[channel].CMPLD2 = highCount;

    reg = base->CHANNEL[channel].CSCTRL;
    /* Setup the compare load control for COMP1 and COMP2.
     * Load COMP1 when CSCTRL[TCF2] is asserted, load COMP2 when CSCTRL[TCF1] is asserted
     */
    reg &= ~(TMR_CSCTRL_CL1_MASK | TMR_CSCTRL_CL2_MASK);
    reg |= (TMR_CSCTRL_CL1(kQTMR_LoadOnComp2) | TMR_CSCTRL_CL2(kQTMR_LoadOnComp1));
    base->CHANNEL[channel].CSCTRL = reg;

    if (outputPolarity)
    {
        /* Invert the polarity */
        base->CHANNEL[channel].SCTRL |= TMR_SCTRL_OPS_MASK;
    }
    else
    {
        /* True polarity, no inversion */
        base->CHANNEL[channel].SCTRL &= ~TMR_SCTRL_OPS_MASK;
    }

    reg = base->CHANNEL[channel].CTRL;
    reg &= ~(TMR_CTRL_OUTMODE_MASK);
    /* Count until compare value is  reached and re-initialize the counter, toggle OFLAG output
     * using alternating compare register
     */
    reg |= (TMR_CTRL_LENGTH_MASK | TMR_CTRL_OUTMODE(kQTMR_ToggleOnAltCompareReg));
    base->CHANNEL[channel].CTRL = reg;
   
    return kStatus_Success;
}

void set_pwm(pyb_pwm_obj_t *s)
{
	uint32_t id = s-pyb_pwm_obj;
	if(id<4)
	{
		/* Generate a 50Khz PWM signal with 50% dutycycle */
    	QTMR_SetupPwmHiRes(s->tmr_base, s->idex, s->freq, s->pwm_width, s->inverted, QTMR_SOURCE_CLOCK / (1<<s->prescale));
		/* Start the counter */
    	QTMR_StartTimer(s->tmr_base, s->idex, kQTMR_PriSrcRiseEdge);
	}
	else
	{
		uint8_t polarityShift;
		if (s->channel == kPWM_PwmA)
        {
            polarityShift = PWM_OCTRL_POLA_SHIFT;

        }
        else
        {
            polarityShift = PWM_OCTRL_POLB_SHIFT;
        }

        /* Setup signal active level */
        if (s->inverted == kPWM_HighTrue)
        {
            s->pwm_base->SM[s->flexidex].OCTRL &= ~(1U << polarityShift);
        }
        else
        {
            s->pwm_base->SM[s->flexidex].OCTRL |= (1U << polarityShift);
        }
		PWM_UpdatePwmDutycycle(s->pwm_base, s->flexidex, s->channel, kPWM_SignedCenterAligned, s->pwm_width);
		PWM_SetPwmLdok(s->pwm_base, s->control_t, true);
	}
}
#endif

#define PWM_INIT_PINS(n) \
	pyb_pwm_obj[n].pin = &MICROPY_HW_PWM_##n; 
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
	
	#if !defined(MICROPY_HW_PWM4_NAME)
	pyb_pwm_obj[4].pin = 0;
	#else
	PWM_INIT_PINS(4);
	#endif
	
	#if !defined(MICROPY_HW_PWM5_NAME)
	pyb_pwm_obj[5].pin = 0;
	#else
	PWM_INIT_PINS(5);
	#endif

	#if !defined(MICROPY_HW_PWM6_NAME)
	pyb_pwm_obj[6].pin = 0;
	#else
	PWM_INIT_PINS(6);
	#endif

	#if !defined(MICROPY_HW_PWM7_NAME)
	pyb_pwm_obj[7].pin = 0;
	#else
	PWM_INIT_PINS(7);
	#endif
	
	#if !defined(MICROPY_HW_PWM8_NAME)
	pyb_pwm_obj[8].pin = 0;
	#else
	PWM_INIT_PINS(8);
	#endif
	
	#if !defined(MICROPY_HW_PWM9_NAME)
	pyb_pwm_obj[9].pin = 0;
	#else
	PWM_INIT_PINS(9);
	#endif	
}

#define ANGLE_TO_DUTY_PERCENT(angle, offset, scale) (((angle) / 180.0f * (scale) + (offset)) / 20.0f * 100.0f)

mp_obj_t pwm_init(pyb_pwm_obj_t *s) {
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
	uint32_t id = self - pyb_pwm_obj;
	if(id<4)
	{
		/* Stop the qtimer */
		QTMR_StopTimer(self->tmr_base, self->idex);
		QTMR_Deinit(self->tmr_base, self->idex);
	}
	else
	{
		/* stop the timer of the flexpwm */
		PWM_StopTimer(self->pwm_base, self->control_t);
		PWM_Deinit(self->pwm_base, self->flexidex);
	}
	return mp_const_none;
	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_pwm_deinit_obj, pyb_pwm_deinit);

STATIC void pyb_pwm_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_pwm_obj_t *self = self_in;
    mp_printf(print, "<Idex %u, Width %.2f, Freq %u, Prescale %u, is Inverted at %u>", self - pyb_pwm_obj + 1, self->pwm_width, self->freq, self->prescale, self->inverted);
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
	if((pwm_id < 1) || (pwm_id>10))
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only support 1-10  %%>_<%% "));
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
///   - `(optional) offset`= 1.0, pulse width in ms, for 0 degree
///   -  (optional) scale = 1.0, scale factor, 1.0 means 0 degree to 180 degree has 1ms width delta
STATIC mp_obj_t pyb_angle(size_t n_args, const mp_obj_t *args) {
    pyb_pwm_obj_t *self = args[0];
	if((self-pyb_pwm_obj)>3)
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only pwm[1-4] support the angle function  %%>_<%% "));
    if (n_args == 1) {
        // get angle
        return mp_obj_new_int(self->angle);
    } else {
		uint32_t base_freq = 50;
		float offset = 0.5f, scale = 2.0f;
		float angle = mp_obj_get_float(args[1]);
		if (angle > 180)
			angle = 180;
		if (angle < 0)
			angle = 0;
		if (n_args >= 3) {
			offset = mp_obj_get_float(args[2]);
			if (n_args >= 4) {
				scale = mp_obj_get_float(args[3]);
			}
		}
		float angle_duty = ANGLE_TO_DUTY_PERCENT(angle, offset, scale);
		self->angle = angle;
		self->freq = base_freq;
		self->pwm_width = angle_duty;
		pwm_init(self);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_angle_obj,1, 4, pyb_angle);

/// \method pulse_width([value])
/// Get or set the duty circle in 0-100.
STATIC mp_obj_t pyb_pwm_pulse_width(size_t n_args, const mp_obj_t *args) {
    pyb_pwm_obj_t *self = args[0];
    if (n_args == 1) {
        // get pulse width, in us
        return mp_obj_new_float(self->pwm_width);
    } else {
        // set pulse width, in us
        float percent = mp_obj_get_float(args[1]);
		if(percent > 100)
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only accept 0-100  %%>_<%% "));
			return mp_const_none;
		}
        self->pwm_width = percent;
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
		_CalcPrescale(self, QTMR_SOURCE_CLOCK);
		return pwm_init(self);
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
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only accept 0/1 %%>_<%%"));
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
	{ MP_ROM_QSTR(MP_QSTR_angle), MP_ROM_PTR(&pyb_angle_obj) },
	{ MP_ROM_QSTR(MP_QSTR_pwm_width), MP_ROM_PTR(&pyb_pwm_width_obj) },
	{ MP_ROM_QSTR(MP_QSTR_pwm_freq), MP_ROM_PTR(&pyb_pwm_freq_obj) },
	{ MP_ROM_QSTR(MP_QSTR_pwm_inverted), MP_ROM_PTR(&pyb_pwm_inverted_obj) },
};

STATIC MP_DEFINE_CONST_DICT(pwm_locals_dict, pwm_locals_dict_table);

const mp_obj_type_t pyb_pwm_type = {
    { &mp_type_type },
    .name = MP_QSTR_PWM,
	.print = pyb_pwm_print,
	.make_new = pyb_pwm_make_new,
    .locals_dict = (mp_obj_dict_t*)&pwm_locals_dict,
};