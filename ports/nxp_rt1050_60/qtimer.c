#include <stdio.h>
#include "py/nlr.h"
#include "py/gc.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "qtimer.h"
#include "genhdr/pins.h"


STATIC mp_obj_t pyb_timer_callback(mp_obj_t self_in, mp_obj_t callback);
STATIC void timer_handle_irq_channel(pyb_qtimer_obj_t *tim, mp_obj_t callback);

pyb_qtimer_obj_t pyb_qtimer_obj[11]={
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR1, .ticks=0, .IRQn = TMR1_IRQn, .idex = kQTMR_Channel_0, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR1, .ticks=0, .IRQn = TMR1_IRQn, .idex = kQTMR_Channel_1, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR1, .ticks=0, .IRQn = TMR1_IRQn, .idex = kQTMR_Channel_2, .callback = mp_const_none, .isActive=false},
	//{.base = {&pyb_qtimer_type}, .tmr_base = TMR2, .ticks=0, .IRQn = TMR2_IRQn, .idex = kQTMR_Channel_3, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR3, .ticks=0, .IRQn = TMR3_IRQn, .idex = kQTMR_Channel_0, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR3, .ticks=0, .IRQn = TMR3_IRQn, .idex = kQTMR_Channel_1, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR3, .ticks=0, .IRQn = TMR3_IRQn, .idex = kQTMR_Channel_2, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR3, .ticks=0, .IRQn = TMR3_IRQn, .idex = kQTMR_Channel_3, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR4, .ticks=0, .IRQn = TMR4_IRQn, .idex = kQTMR_Channel_0, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR4, .ticks=0, .IRQn = TMR4_IRQn, .idex = kQTMR_Channel_1, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR4, .ticks=0, .IRQn = TMR4_IRQn, .idex = kQTMR_Channel_2, .callback = mp_const_none, .isActive=false},
	{.base = {&pyb_qtimer_type}, .tmr_base = TMR4, .ticks=0, .IRQn = TMR4_IRQn, .idex = kQTMR_Channel_3, .callback = mp_const_none, .isActive=false},
};

void TMR1_IRQHandler()
{
	for(int i=0;i<3;i++)
	{
		pyb_qtimer_obj_t *temp = &pyb_qtimer_obj[i];
		uint16_t reg = temp->tmr_base->CHANNEL[temp->idex].SCTRL;
		//check if the timer channel is active, and if the interrupt in this channel is occur
		if((temp->isActive) && ((reg & TMR_SCTRL_TCF_MASK)>>TMR_SCTRL_TCF_SHIFT))
		{
			QTMR_ClearStatusFlags(temp->tmr_base, temp->idex, kQTMR_CompareFlag);
			timer_handle_irq_channel(temp, temp->callback);
			temp->ticks++;
		}
	}
}
void TMR2_IRQHandler()
{
		//clear the related flags to re-init the interrupt, for the Qtimer can not clear the flag auto
	pyb_qtimer_obj_t *temp = &pyb_qtimer_obj[3];
	uint16_t reg = temp->tmr_base->CHANNEL[temp->idex].SCTRL;
	//check if the timer channel is active, and if the interrupt in this channel is occur 
	if((temp->isActive) && ((reg & TMR_SCTRL_TCF_MASK)>>TMR_SCTRL_TCF_SHIFT))
	{
		
		QTMR_ClearStatusFlags(temp->tmr_base, temp->idex, kQTMR_CompareFlag);
		timer_handle_irq_channel(temp, temp->callback);
		temp->ticks++;
	}
}
void TMR3_IRQHandler()
{
	for(int i=3;i<7;i++)
	{
		pyb_qtimer_obj_t *temp = &pyb_qtimer_obj[i];
		uint16_t reg = temp->tmr_base->CHANNEL[temp->idex].SCTRL;
		//check if the timer channel is active, and if the interrupt in this channel is occur 
		if((temp->isActive) && ((reg & TMR_SCTRL_TCF_MASK)>>TMR_SCTRL_TCF_SHIFT))
		{

			QTMR_ClearStatusFlags(temp->tmr_base, temp->idex, kQTMR_CompareFlag);
			timer_handle_irq_channel(temp, temp->callback);
			temp->ticks++;
		}
	}
}
void TMR4_IRQHandler()
{
	//clear the related flags to re-init the interrupt, for the Qtimer can not clear the flag auto
	for(int i=7;i<11;i++)
	{
		pyb_qtimer_obj_t *temp = &pyb_qtimer_obj[i];
		uint16_t reg = temp->tmr_base->CHANNEL[temp->idex].SCTRL;
		//check if the timer channel is active, and if the interrupt in this channel is occur 
		if((temp->isActive) && ((reg & TMR_SCTRL_TCF_MASK)>>TMR_SCTRL_TCF_SHIFT))
		{

			QTMR_ClearStatusFlags(temp->tmr_base, temp->idex, kQTMR_CompareFlag);
			timer_handle_irq_channel(temp, temp->callback);
			temp->ticks++;
		}
	}
}

#define QTMR_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_IpgClk)
void init_common_tmr(pyb_qtimer_obj_t *s)
{
	qtmr_config_t qtmrConfig;
	QTMR_GetDefaultConfig(&qtmrConfig);
    /* Init the first channel to use the IP Bus clock div by 8 */
    qtmrConfig.primarySource = kQTMR_ClockDivide_1 + s->prescale;
    QTMR_Init(s->tmr_base, s->idex, &qtmrConfig);	 
} 

#define MSEC_FLOAT_TO_COUNT(ms, clockFreqInHz) (uint64_t)(ms * clockFreqInHz / 1000U)  
void set_tmr_period(pyb_qtimer_obj_t *s)
{
    QTMR_SetTimerPeriod(s->tmr_base, s->idex, MSEC_FLOAT_TO_COUNT(s->period, (QTMR_SOURCE_CLOCK / (1<<s->prescale))));
}

mp_obj_t qtimer_init(pyb_qtimer_obj_t *self_in){                                  /* Software Input On Field: Input Path is determined by functionality */	
	pyb_qtimer_obj_t *self = self_in;
	init_common_tmr(self);	
	set_tmr_period(self);
	NVIC_SetPriority(self->IRQn, 15);
    EnableIRQ(self->IRQn);
	QTMR_EnableInterrupts(self->tmr_base, self->idex, kQTMR_CompareInterruptEnable);
    QTMR_StartTimer(self->tmr_base, self->idex, kQTMR_PriSrcRiseEdge);
	return mp_const_none;
	
}

mp_obj_t qtimer_get_count(mp_obj_t self_in){
	pyb_qtimer_obj_t *self = self_in;
	uint16_t count = QTMR_GetCurrentTimerCount(self->tmr_base, self->idex);
	return mp_obj_new_int(count);	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(get_count_obj, qtimer_get_count);

mp_obj_t get_ticks(mp_obj_t self_in){
	pyb_qtimer_obj_t *self = self_in;
	return mp_obj_new_int(self->ticks);	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(get_ticks_obj, get_ticks);

STATIC mp_obj_t pyb_qtimer_period(size_t n_args, const mp_obj_t *args) {
    pyb_qtimer_obj_t *self = args[0];
    if (n_args == 1) {
        // get pulse width, in us
        return mp_obj_new_int(self->period);
    } else {
        // set pulse width, in us
		if((mp_obj_get_int(args[1]) > 100) || (mp_obj_get_int(args[1]) <1))
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only accept 1-100"));
			return mp_const_none;
		}
        self->period = mp_obj_get_int(args[1]);
		if(((QTMR_SOURCE_CLOCK / (1<<self->prescale) / 1000)*1.0*self->period)>((1<<17)-1))
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "The group of the prescale & period does not support, up the prescale or down the period"));
			return mp_const_none;
		}
		set_tmr_period(self);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_qtimer_period_obj, 1, 2, pyb_qtimer_period);

STATIC mp_obj_t pyb_qtimer_prescale(size_t n_args, const mp_obj_t *args) {
    pyb_qtimer_obj_t *self = args[0];
    if (n_args == 1) {
        // get pulse width, in us
        return mp_obj_new_int(self->prescale);
    } else {
        // set pulse width, in us
		if((mp_obj_get_int(args[1]) > 7) || (mp_obj_get_int(args[1]) <0))
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only accept 0-7"));
			return mp_const_none;
		}
        self->prescale = mp_obj_get_int(args[1]);
		if(((QTMR_SOURCE_CLOCK / (1<<self->prescale) / 1000)*1.0*self->period) > ((1<<17)-1))
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "The group of the prescale & period does not support, up the prescale or down the period"));
			return mp_const_none;
		}
		qtimer_init(self);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_qtimer_pescale_obj, 1, 2, pyb_qtimer_prescale);

void QTimer_StopAll(void) {
	uint32_t cnt = sizeof(pyb_qtimer_obj) / sizeof(pyb_qtimer_obj[0]);
	pyb_qtimer_obj_t *self = pyb_qtimer_obj;
	for (int i=0; i<cnt;i++,self++) {
		QTMR_StopTimer(self->tmr_base, self->idex);
		QTMR_Deinit(self->tmr_base, self->idex);
		if (self->isActive)
			self->isActive = 0;
	}
}

mp_obj_t pyb_qtimer_deinit(mp_obj_t self_in){
	pyb_qtimer_obj_t *self = self_in;
	/* Stop the counter */
    QTMR_StopTimer(self->tmr_base, self->idex);
	QTMR_Deinit(self->tmr_base, self->idex);
	self->isActive = 0;
	return mp_const_none;
	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_qtimer_deinit_obj, pyb_qtimer_deinit);

STATIC void pyb_qtimer_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_qtimer_obj_t *self = self_in;
    mp_printf(print, "<Idex %u, period %.2f ms, prescale %u>", self->idex, self->period, self->prescale);
}


STATIC mp_obj_t pyb_qtimer_init_helper(pyb_qtimer_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_period,     MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },	// interval 20ms, ppr 50->pulse per round
		{ MP_QSTR_prescale, 	MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 7} },
		{ MP_QSTR_callback,     MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = mp_const_none} },
    };
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);
	if (args[0].u_obj != MP_OBJ_NULL) {
			self->period = mp_obj_get_float(args[0].u_obj);
		} else 
			self->period = 20;
	self->prescale = args[1].u_int;
	if(((QTMR_SOURCE_CLOCK / (1<<self->prescale) / 1000)*1.0*self->period)>((1<<17)-1))
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "The group of the prescale & period does not support, up the prescale or down the period"));	
	    // Start the timer running
    if (args[2].u_obj == mp_const_none) {
        qtimer_init(self);
    } else {
		qtimer_init(self);
        pyb_timer_callback(self, args[2].u_obj);
    }

    return mp_const_none;
}
STATIC mp_obj_t pyb_qtimer_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {

    return pyb_qtimer_init_helper(args[0], n_args - 1, args + 1, kw_args);

}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_qtimer_init_obj, 1, pyb_qtimer_init);

#if 0
//for crist test, only accept the sub-qtimer in different group, ([1-3],[4],[5-8],[9-12], e.g. 1-3 can only have one enable.
bool check_is_else_active(uint32_t min_idex, uint32_t max_idex, uint32_t idex)
{
	for(int i=min_idex;i<max_idex;i++)
	{
		if(i==idex)
			continue;
		else
			if(pyb_qtimer_obj[i].isActive)
				return false;
	}
	return true;
}
bool check_legal(uint32_t idex)
{
	if(idex<4)
		return(check_is_else_active(0,3,idex-1));
	if((idex>4) && (idex<9))
		return(check_is_else_active(4,8,idex-1));
	if(idex>=9)
		return(check_is_else_active(8,12,idex-1));
	
}
#endif
STATIC mp_obj_t pyb_qtimer_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
	// check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    int id = mp_obj_get_int(args[0]);
	if((id < 1) || (id>11))
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only support 1-11"));
	//if(!check_legal(id))
	//	nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only support qtimer in diff group([1-3],[4],[5-8],[9-12]."));
	pyb_qtimer_obj_t *s = &pyb_qtimer_obj[id-1];
	s->isActive = true;
    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_qtimer_init_helper(s, n_args - 1, args + 1, &kw_args);
    }
    return (mp_obj_t)s;
}
STATIC void timer_handle_irq_channel(pyb_qtimer_obj_t *tim, mp_obj_t callback) {

	// execute callback if it's set
	if (callback != mp_const_none) {
		mp_sched_lock();
		// When executing code within a handler we must lock the GC to prevent
		// any memory allocations.  We must also catch any exceptions.
		gc_lock();
		nlr_buf_t nlr;
		if (nlr_push(&nlr) == 0) {
			mp_call_function_1(callback, tim);
			nlr_pop();
		} else {
			// Uncaught exception; disable the callback so it doesn't run again.
			tim->callback = mp_const_none;
			//__HAL_TIM_DISABLE_IT(&tim->tim, irq_mask);
			mp_obj_print_exception(&mp_plat_print, (mp_obj_t)nlr.ret_val);
		}
		gc_unlock();
		mp_sched_unlock();
	}
}
/// \method callback(fun)
/// Set the function to be called when the timer triggers.
/// `fun` is passed 1 argument, the timer object.
/// If `fun` is `None` then the callback will be disabled.
STATIC mp_obj_t pyb_timer_callback(mp_obj_t self_in, mp_obj_t callback) {
    pyb_qtimer_obj_t *self = self_in;
    if (callback == mp_const_none) {
        // stop interrupt (but not timer)
        self->callback = mp_const_none;
    } else if (mp_obj_is_callable(callback)) {
        //__HAL_TIM_DISABLE_IT(&self->tim, TIM_IT_UPDATE);
        self->callback = callback;
        // start timer, so that it interrupts on overflow, but clear any
        // pending interrupts which may have been set by initializing it.
        //__HAL_TIM_CLEAR_FLAG(&self->tim, TIM_IT_UPDATE);
        //HAL_TIM_Base_Start_IT(&self->tim); // This will re-enable the IRQ
        //HAL_NVIC_EnableIRQ(self->irqn);
    } else {
        mp_raise_ValueError("callback must be None or a callable object");
    }
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(pyb_timer_callback_obj, pyb_timer_callback);

STATIC const mp_rom_map_elem_t qtimer_locals_dict_table[] = {    
	{ MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_qtimer_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_qtimer_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_count), MP_ROM_PTR(&get_count_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_ticks), MP_ROM_PTR(&get_ticks_obj) },
	{ MP_ROM_QSTR(MP_QSTR_callback), MP_ROM_PTR(&pyb_timer_callback_obj) },
	{ MP_ROM_QSTR(MP_QSTR_period), MP_ROM_PTR(&pyb_qtimer_period_obj) },
	{ MP_ROM_QSTR(MP_QSTR_prescale), MP_ROM_PTR(&pyb_qtimer_pescale_obj) },

};

STATIC MP_DEFINE_CONST_DICT(qtimer_locals_dict, qtimer_locals_dict_table);

const mp_obj_type_t pyb_qtimer_type = {
    { &mp_type_type },
    .name = MP_QSTR_qtimer,
	.print = pyb_qtimer_print,
	.make_new = pyb_qtimer_make_new,
    .locals_dict = (mp_obj_dict_t*)&qtimer_locals_dict,
};