#include <stdio.h>
#include <math.h>
#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "fsl_xbara.h"
#include "servo.h"
#include "genhdr/pins.h"
#include "fsl_iomuxc.h"

#define PULSE_TO_DUTY(x) ((x)*10*100*1.0/20000)

pyb_servo_obj_t pyb_servo_obj[5]={
	{.base = {&pyb_servo_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_0, .IRQn = TMR2_IRQn,  .isActive=false, .freq = 50, .inverted = 0, .angle = 0, 0.0f},
	{.base = {&pyb_servo_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_1, .IRQn = TMR2_IRQn,  .isActive=false, .freq = 50, .inverted = 0, .angle = 0, 0.0f},
	{.base = {&pyb_servo_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_3, .IRQn = TMR2_IRQn,  .isActive=false, .freq = 50, .inverted = 0, .angle = 0, 0.0f},
	{.base = {&pyb_servo_type}, .tmr_base = TMR1, .idex = kQTMR_Channel_3, .IRQn = TMR1_IRQn,  .isActive=false, .freq = 50, .inverted = 0, .angle = 0, 0.0f},
	{.base = {&pyb_servo_type}, .tmr_base = TMR2, .idex = kQTMR_Channel_2, .IRQn = TMR2_IRQn,  .isActive=false, .freq = 50, .inverted = 0, .angle = 0, 0.0f},
};

void ServoUpdateQTmrHiLow(pyb_servo_obj_t *pObj)
{
    uint32_t highCount, lowCount;
	TMR_Type *base = pObj->tmr_base;
	qtmr_channel_selection_t channel = pObj->idex;
	servo_config_obj_t *p = &pObj->servo_obj;

    highCount = (uint16_t)p->tmrHighNow;
    lowCount = (uint16_t)(p->qtmrPeriodCnt - p->tmrHighNow);

    /* Setup the compare registers for PWM output */
    base->CHANNEL[channel].COMP1 = lowCount;
    base->CHANNEL[channel].COMP2 = highCount;

    /* Setup the pre-load registers for PWM output */
    base->CHANNEL[channel].CMPLD1 = lowCount;
    base->CHANNEL[channel].CMPLD2 = highCount;
}

void ServoSetupQTmr(pyb_servo_obj_t *pObj) {
	TMR_Type *base = pObj->tmr_base;
	qtmr_channel_selection_t channel = pObj->idex;
	uint32_t reg;
    /* Set OFLAG pin for output mode and force out a low on the pin */
    base->CHANNEL[channel].SCTRL |= (TMR_SCTRL_FORCE_MASK | TMR_SCTRL_OEN_MASK);
	ServoUpdateQTmrHiLow(pObj);
    reg = base->CHANNEL[channel].CSCTRL;
    /* Setup the compare load control for COMP1 and COMP2.
     * Load COMP1 when CSCTRL[TCF2] is asserted, load COMP2 when CSCTRL[TCF1] is asserted
     */
    reg &= ~(TMR_CSCTRL_CL1_MASK | TMR_CSCTRL_CL2_MASK);
    reg |= (TMR_CSCTRL_CL1(kQTMR_LoadOnComp2) | TMR_CSCTRL_CL2(kQTMR_LoadOnComp1));
    base->CHANNEL[channel].CSCTRL = reg;

    if (pObj->inverted)
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
	QTMR_EnableInterrupts(pObj->tmr_base, pObj->idex, kQTMR_Compare2InterruptEnable);
}

#define USE_INT_CODE (0)
uint32_t _g_Vtimer;
uint32_t g_scale = 16;
bool g_need_it = false;
void servo_timer_irq_callback(void) {
	g_need_it = false;
	servo_config_obj_t *p;
    for (int i = 0; i < SERVO_NUM; i++) {
        pyb_servo_obj_t *s = &pyb_servo_obj[i];
		uint16_t reg = s->tmr_base->CHANNEL[s->idex].CSCTRL;
		p = &s->servo_obj;
		//check if the timer channel is active, and if the interrupt in this channel is occur
		if(s->isActive && p->periodNdx < p->periodCnt)
		{
			QTMR_ClearStatusFlags(s->tmr_base, s->idex, kQTMR_Compare2Flag);
			p->periodNdx++;
 			p->tmrHighNow = p->tmrHighFrom + (p->tmrHighTo - p->tmrHighFrom) * p->periodNdx / p->periodCnt;
			if (p->tmrHighNow > p->tmrHighAllowedMax) {
				p->tmrHighNow = p->tmrHighAllowedMax;
			} 
			else if (p->tmrHighNow < p->tmrHighAllowedMin) {
				p->tmrHighNow = p->tmrHighAllowedMin;
			}	
			ServoUpdateQTmrHiLow(s);
		}
		else {
			QTMR_DisableInterrupts(s->tmr_base, s->idex, kQTMR_Compare2InterruptEnable);
		}
    }

		
}

void init_servo_config(servo_config_obj_t *p)
{
	p->us_min = 640;	// uint: 10us
	p->us_max = 2420;
	p->us_centre = 1500;
	p->us_angle_90 = 1000;
	p->angle_range = 180;
	p->us_speed_100 = 0; // 0 means not a free-rotate (360 degree) servo
	p->dpsConfig = 90.0f;
}
/* Get source clock for QTMR driver */
#define QTMR_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_IpgClk)

// call this on init of a servo
uint32_t ServoCalcPrescale(int32_t *pQtmrPeriodCnt) {
	int prescale;
	uint32_t clkSource = QTMR_SOURCE_CLOCK;
	uint32_t ticks = clkSource / 50;	// servo pwm is 50Hz

	// find min prescale that can set 50Hz period
	for (prescale = 0; ticks > 65535; prescale++ , ticks >>= 1) {}
	assert(prescale < 8);
	if (pQtmrPeriodCnt) pQtmrPeriodCnt[0] = ticks;
	return prescale;
}

// only for non-free-rotate servos
uint16_t ServoUsToQtmrHighCnt(servo_config_obj_t *p, float us) {
	int32_t usRealMin =  p->us_centre - p->angle_range * p->us_angle_90 / 90 / 2;
	float ratio = (us - usRealMin) * 90 / p->us_angle_90 / p->angle_range;
	float dCnt = p->tmrHighRealRange * ratio + 0.5f;
	uint32_t cnt = (uint32_t)dCnt + p->tmrHighRealMin;
	return (uint16_t) cnt;
}

float ServoUsToAngle(servo_config_obj_t *p, uint32_t us) {
	int32_t usRealMin =  p->us_centre - p->angle_range * p->us_angle_90 / 90 / 2;
	float dgr = (us - usRealMin) * 90.0f / p->us_angle_90 - p->angle_range / 2;
	return dgr;
}

// only for non-free-rotate servos, dgr: -90 to 90
int32_t ServoDgrToQtmrHighCnt(servo_config_obj_t *p, float dgr) {
	float ratio = (dgr + p->angle_range / 2.0f) / p->angle_range;
	float fRet = ratio * p->tmrHighRealRange + p->tmrHighRealMin + 0.5f;
	return (int32_t)fRet;
}

float ServoQtmrHighCntToDgr(servo_config_obj_t *p, uint16_t highCnt) {
	float ratio = (float)(highCnt - p->tmrHighRealMin) / p->tmrHighRealRange;
	float dgr = ratio * p->angle_range - p->angle_range / 2;
	return dgr;
}

float ServoQtmrGetCurDgr(servo_config_obj_t *p) {
	float ret = 180.0f * (p->tmrHighNow - p->tmrHighRealMin) / p->tmrHighRealRange - 90.0f;
	return ret;
}

int32_t ServoQtmrHighCntToUs(servo_config_obj_t *p, uint16_t highCnt) {
	float ratio = (float)(highCnt - p->tmrHighRealMin) / p->tmrHighRealRange;
	int32_t usRealMin =  p->us_centre - p->angle_range * p->us_angle_90 / 90 / 2;
	int32_t usRealRange = p->angle_range * p->us_angle_90 / 90;
	float ret = usRealMin + usRealRange * ratio;
	return (int32_t) ret;
}

int32_t ServoDgrToUs(servo_config_obj_t *p, float dgr) {
	float ratio = (dgr + p->angle_range / 2.0f) / p->angle_range;
	int32_t usRealMin =  p->us_centre - p->angle_range * p->us_angle_90 / 90 / 2;
	int32_t usRealRange = p->angle_range * p->us_angle_90 / 90;
	float ret = usRealMin + usRealRange * ratio;
	return (int32_t) ret;
}

void ServoSetInitialState(servo_config_obj_t *p, float dgrOrDps) 
{
	if (p->us_speed_100 == 0) {
		p->tmrHighNow = ServoDgrToQtmrHighCnt(p, dgrOrDps);
		p->tmrHighFrom = p->tmrHighTo = p->tmrHighNow;
		p->dps = p->dpsConfig;
	} else {
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "sorry, free rotate servo is not supported yet"));
	}
}
// call this ONCE when init, begin moving to a new angle or calibration
void ServoCalcQTmrParams(servo_config_obj_t *p) {
	if (p->us_speed_100 == 0) {
		float usRealMin = p->us_centre - p->angle_range * p->us_angle_90 / 90 / 2;
		p->tmrHighRealMin = (uint16_t)(p->qtmrPeriodCnt * usRealMin / 20000 + 0.5f);
		
		// rocky: must convert to required type before int get overflow
		p->tmrHighRealRange = (int32_t)(p->qtmrPeriodCnt * p->us_angle_90 / 90.0f * p->angle_range / 20000.0f + 0.5f);
		p->tmrHighAllowedMax = ServoUsToQtmrHighCnt(p, p->us_max);
		p->tmrHighAllowedMin = ServoUsToQtmrHighCnt(p, p->us_min);
		p->dgrAllowedMin = ServoQtmrHighCntToDgr(p, p->tmrHighAllowedMin);
		p->dgrAllowedMax = ServoQtmrHighCntToDgr(p, p->tmrHighAllowedMax);
	}
}

void init_servo(pyb_servo_obj_t *s)
{
	mp_hal_pin_config_alt(s->pin, GPIO_MODE_OUTPUT_PP, AF_FN_TMR);
	qtmr_config_t qtmrConfig;
	QTMR_GetDefaultConfig(&qtmrConfig);
	/* Init the first channel to use the IP Bus clock div by a calcute-value */
	s->prescale = ServoCalcPrescale(&s->servo_obj.qtmrPeriodCnt);
	ServoCalcQTmrParams(&s->servo_obj);
	NVIC_SetPriority(s->IRQn, 15);
    EnableIRQ(s->IRQn);
	// QTMR_EnableInterrupts(s->tmr_base, s->idex, kQTMR_Compare2InterruptEnable);
	qtmrConfig.primarySource = kQTMR_ClockDivide_1 + s->prescale; //if use 8, the compare value is too large that bigger than 16bits register
	QTMR_Init(s->tmr_base, s->idex, &qtmrConfig);
}
#define SERVO_INIT_PINS(n) \
	pyb_servo_obj[n].pin = &MICROPY_HW_SERVO_##n; 

void servo_init0()
{
	#if !defined(MICROPY_HW_SERVO0_NAME)
	pyb_servo_obj[0].pin = 0;
	#else
	SERVO_INIT_PINS(0);
	#endif

	#if !defined(MICROPY_HW_SERVO1_NAME)
	pyb_servo_obj[1].pin = 0;
	#else
	SERVO_INIT_PINS(1);
	#endif

	#if !defined(MICROPY_HW_SERVO2_NAME)
	pyb_servo_obj[2].pin = 0;
	#else
	SERVO_INIT_PINS(2);
	#endif

	#if !defined(MICROPY_HW_SERVO3_NAME)
	pyb_servo_obj[3].pin = 0;
	#else
	SERVO_INIT_PINS(3);
	#endif
	
	#if !defined(MICROPY_HW_SERVO4_NAME)
	pyb_servo_obj[4].pin = 0;
	#else
	SERVO_INIT_PINS(4);
	#endif
}

#define ANGLE_TO_DUTY_PERCENT(angle, offset, scale) (((angle) / 180.0f * (scale) + (offset)) / 20.0f * 100.0f)

mp_obj_t pyb_servo_deinit(mp_obj_t self_in){
	pyb_servo_obj_t *self = self_in;
	/* Stop the qtimer */
	QTMR_StopTimer(self->tmr_base, self->idex);
	QTMR_Deinit(self->tmr_base, self->idex);
	self->isActive = 0;
	self->servo_obj.periodCnt = self->servo_obj.periodNdx = 0;
	return mp_const_none;
	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_servo_deinit_obj, pyb_servo_deinit);

STATIC void pyb_servo_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_servo_obj_t *self = self_in;
	servo_config_obj_t *p = &self->servo_obj;
	if (p->us_speed_100 == 0) {
	float dgrTo = ServoQtmrHighCntToDgr(p, p->tmrHighTo);
	float dgrNow = ServoQtmrGetCurDgr(p);
	mp_printf(print, "<non-free-rotate servo %lu, cen=%dus, us/90dgr=%d, min=%.2f, max=%.2f, \ncur=%.2f, to=%.2f, >", self - &pyb_servo_obj[0] + 1, 
		p->us_centre, p->us_angle_90, p->dgrAllowedMin, p->dgrAllowedMax, dgrNow, dgrTo);
	} else {
		mp_printf(print, "<free-rotate servo %lu, us @ stop =%d, us @ 100dgr/s =%d >", self - &pyb_servo_obj[0] + 1, 
			p->us_centre, p->us_speed_100);
	}
}

STATIC mp_obj_t pyb_servo_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
	// check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    // work out pwm channel
    int servo_id = mp_obj_get_int(args[0]);
	if((servo_id < 1) || (servo_id>5))
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only support 1-5 %%>_<%% "));
	pyb_servo_obj_t *s = &pyb_servo_obj[servo_id-1];
	s->isActive = true;
        // start the peripheral
    
	float dgrOrDps = 0;
	if (n_args >= 2) {
		dgrOrDps = mp_obj_get_float(args[1]);
	}
	memset(&s->servo_obj, 0, sizeof(s->servo_obj));
	init_servo_config(&s->servo_obj);
	init_servo(s);
	ServoSetInitialState(&s->servo_obj, dgrOrDps);
    return (mp_obj_t)s;
}

/*static*/ void _DoApplyNewDgr(pyb_servo_obj_t *self, float dgrTo, int periodCnt)
{
	servo_config_obj_t *p = &self->servo_obj;
	#if 1
	if (dgrTo < p->dgrAllowedMin)
		dgrTo = p->dgrAllowedMin;
	else if (dgrTo > p->dgrAllowedMax)
		dgrTo = p->dgrAllowedMax;
	#else
	if (dgrTo < p->dgrAllowedMin || dgrTo > p->dgrAllowedMax) {
		nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, 
			"degree is out of allowed range %.2f-%.2f!", p->dgrAllowedMin, p->dgrAllowedMax));
	}
	#endif
	NVIC_DisableIRQ(self->IRQn);
	p->tmrHighTo = ServoDgrToQtmrHighCnt(p, dgrTo);
	
	p->tmrHighFrom = p->tmrHighNow;

	p->periodCnt = periodCnt;
	p->periodNdx = 0;
	ServoSetupQTmr(self);
	QTMR_StartTimer(self->tmr_base, self->idex, kQTMR_PriSrcRiseEdge);
	NVIC_EnableIRQ(self->IRQn);	
}

/// \method angle([angle, time=0])
/// Get or set the angle of the servo.
///
///   - `angle` is the angle to move to in degrees.
///   - `time` is the number of milliseconds to take to get to the specified angle.
STATIC mp_obj_t pyb_servo_angle(size_t n_args, const mp_obj_t *args) {
    pyb_servo_obj_t *self = args[0];
	servo_config_obj_t *p = &self->servo_obj;
	float dgrTo;
	int periodCnt;
    if (n_args == 1) {
        // get angle
        return mp_obj_new_float(ServoQtmrGetCurDgr(&self->servo_obj));
    }
	#if MICROPY_PY_BUILTINS_FLOAT
		dgrTo = mp_obj_get_float(args[1]);
	#else
		dgrTo = mp_obj_get_int(args[1]);
	#endif

	while (p->periodNdx < p->periodCnt) {}
	
	float dgrNow = ServoQtmrGetCurDgr(p);
	float deltaDgrAbs = fabs(dgrNow - dgrTo);
	if (n_args == 2) {
		// use default dps
		p->dps = p->dpsConfig;
	} else {
		// set angle over a given time (given in milli seconds)
		p->dps = deltaDgrAbs / mp_obj_get_float(args[2]) * 1000.0f;
		if (p->dps < 1e-2f)
			p->dps = 1e-2f;	
	}
	periodCnt = (deltaDgrAbs / self->servo_obj.dps * 50.0f + 0.5f);
	if (periodCnt == 0)
		periodCnt = 1;
	_DoApplyNewDgr(self, dgrTo, periodCnt);
    
    return mp_const_none;
    
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_servo_angle_obj, 1, 3, pyb_servo_angle);

/// \method us_width([value])
/// Get or set the duty circle in us.
STATIC mp_obj_t pyb_servo_us_width(size_t n_args, const mp_obj_t *args) {
    pyb_servo_obj_t *self = args[0];
    if (n_args == 1) {
        // get pulse width, in us
        return mp_obj_new_float(ServoQtmrHighCntToUs(&self->servo_obj, self->servo_obj.tmrHighNow));
    } else {
        // set pulse width, in us
        float us = mp_obj_get_float(args[1]);
        float dgrTo = ServoUsToAngle(&self->servo_obj, us);
		pyb_servo_angle(
			3, // n_args
                (mp_obj_t []) {
                    self, // 
					mp_obj_new_float(dgrTo),
					mp_obj_new_int(100),
                }			
		);		
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_servo_width_obj, 1, 2, pyb_servo_us_width);

/// \method calibration([us_min, us_max, us_centre, [us_angle_90[, us_speed_100[, angle_range]]]])
/// Get or set the calibration of the servo timing.
// TODO should accept 1 arg, a 5-tuple of values to set
STATIC mp_obj_t pyb_servo_calibration(size_t n_args, const mp_obj_t *args) {
    pyb_servo_obj_t *self = args[0];
	mp_obj_t ret = mp_const_true;
    if (n_args == 1) {
        // get calibration values
        mp_obj_t tuple[6];
        tuple[0] = mp_obj_new_int(self->servo_obj.us_min);
        tuple[1] = mp_obj_new_int(self->servo_obj.us_max);
        tuple[2] = mp_obj_new_int(self->servo_obj.us_centre);
        tuple[3] = mp_obj_new_int(self->servo_obj.us_angle_90 + self->servo_obj.us_centre);
        tuple[4] = mp_obj_new_int(self->servo_obj.us_speed_100);
		if (self->servo_obj.us_speed_100 == 0)
			tuple[5] = mp_obj_new_int(self->servo_obj.angle_range);
		else

			tuple[5] = mp_obj_new_int(0);
        return mp_obj_new_tuple(5, tuple);
    } else if (n_args >= 4) {
        // set min, max, centre
        self->servo_obj.us_min = mp_obj_get_int(args[1]);
        self->servo_obj.us_max = mp_obj_get_int(args[2]);
        self->servo_obj.us_centre = mp_obj_get_int(args[3]);
        if (n_args == 4) {
            ret = mp_const_none;
			goto cleanup;
        }
		if (n_args >= 5) {
            self->servo_obj.us_angle_90 = mp_obj_get_int(args[4]);
			ret = mp_const_none;
        }
		if (n_args >= 6) {
            self->servo_obj.us_speed_100 = mp_obj_get_int(args[5]);
            ret = mp_const_none;
        }
		if (n_args >= 7) {
			self->servo_obj.angle_range = mp_obj_get_int(args[6]);
        }
    }
cleanup:
	if (ret != mp_const_none) {
    	// bad number of arguments
    	nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_TypeError, "calibration expecting 1, 4-6 arguments, got %d", n_args - 1));
	}
	ServoCalcQTmrParams(&self->servo_obj);
	return ret;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_servo_calibration_obj, 1, 7, pyb_servo_calibration);

/// \method speed([speed, time=0])
/// Get or set the speed of a free rotation servo.
///
///   - for non-free-rotate servo: speed is degree/s, float
///   - `speed` is the speed to move to change to, between -100 and 100.
///   - `time` is the number of milliseconds to take to get to the specified speed.
STATIC mp_obj_t pyb_servo_speed(size_t n_args, const mp_obj_t *args) {
    pyb_servo_obj_t *self = args[0];
	servo_config_obj_t *p = &self->servo_obj;
    if (n_args == 1) {
        // get speed
        if (p->us_speed_100 == 0) { 
			return mp_obj_new_float(p->dps);
		} else 
		{
	        int32_t usNow = ServoQtmrHighCntToUs(&self->servo_obj, self->servo_obj.tmrHighNow);
	        return mp_obj_new_float((usNow - self->servo_obj.us_centre) * 100 / self->servo_obj.us_speed_100);
        }
    } else {
    	if (p->us_speed_100 == 0) {
			
			#if MICROPY_PY_BUILTINS_FLOAT
				p->dpsConfig = mp_obj_get_float(args[1]);
			#else
				p->dpsConfig = mp_obj_get_int(args[1]);
			#endif

		} else {

			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, 
						"free rotate servo is not yet supported yet"));

			int32_t usTo;
			#if MICROPY_PY_BUILTINS_FLOAT
				usTo = self->servo_obj.us_centre + self->servo_obj.us_speed_100 * mp_obj_get_float(args[1]) / 100.0;
			#else
				usTo = self->servo_obj.us_centre + self->servo_obj.us_speed_100 * mp_obj_get_int(args[1]) / 100;
			#endif
			
	        if (n_args == 2) {
	            // set speed immediately
	            if (p->us_speed_100 == 0) p->dpsAccConfig = 180.0f;
	        } else {
	            // set speed over a given time (given in milli seconds)
	        }
    	}
        return mp_const_none;
    }
}

STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_servo_speed_obj, 1, 3, pyb_servo_speed);

STATIC const mp_rom_map_elem_t servo_locals_dict_table[] = {
	{ MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_servo_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_angle), MP_ROM_PTR(&pyb_servo_angle_obj) },
	{ MP_ROM_QSTR(MP_QSTR_calibration), MP_ROM_PTR(&pyb_servo_calibration_obj) },
	{ MP_ROM_QSTR(MP_QSTR_speed), MP_ROM_PTR(&pyb_servo_speed_obj) },
	{ MP_ROM_QSTR(MP_QSTR_pulse_width), MP_ROM_PTR(&pyb_servo_width_obj) },
};

STATIC MP_DEFINE_CONST_DICT(servo_locals_dict, servo_locals_dict_table);

const mp_obj_type_t pyb_servo_type = {
    { &mp_type_type },
    .name = MP_QSTR_Servo,
	.print = pyb_servo_print,
	.make_new = pyb_servo_make_new,
    .locals_dict = (mp_obj_dict_t*)&servo_locals_dict,
};
