#include "tmr.h"

typedef struct _timer_obj_t{
	mp_obj_base_t base;
	uint32_t reload;
	uint32_t cntr;
	bool isActive;
	mp_obj_t callback;
} pyb_tmr_obj_t;
STATIC mp_obj_t pyb_tmr_callback(mp_obj_t self_in, mp_obj_t callback);
STATIC void timer_handle_irq_channel(pyb_tmr_obj_t *tim, mp_obj_t callback);

pyb_tmr_obj_t pyb_tmr_obj[6];
void SwTimerHandler(void)
{
	int cnt = sizeof(pyb_tmr_obj) / sizeof(pyb_tmr_obj[0]);
	pyb_tmr_obj_t *obj = &pyb_tmr_obj[0];
	for(int i=0; i<cnt; i++, obj++)
	{
		if (obj->isActive) {
			if (obj->cntr != 0) {
				if (--obj->cntr == 0) {
					obj->cntr = obj->reload;
					timer_handle_irq_channel(obj, obj->callback);
				}
			}
		}
	}
}


#define MSEC_TO_TICK(ms) (ms)
#define TICK_TO_MSEC(tk) (tk)

mp_obj_t tmr_init(pyb_tmr_obj_t *self_in){                                  /* Software Input On Field: Input Path is determined by functionality */	
	pyb_tmr_obj_t *self = self_in;
	self->cntr = self->reload = 0;
	self->base.type = &pyb_tmr_type;
	return mp_const_none;
	
}

mp_obj_t tmr_get_count(mp_obj_t self_in){
	pyb_tmr_obj_t *self = self_in;
	uint32_t count = self->cntr;
	return mp_obj_new_int(count);	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(get_count_obj, tmr_get_count);

static mp_obj_t get_ticks(mp_obj_t self_in){
	pyb_tmr_obj_t *self = self_in;
	return mp_obj_new_int(self->reload);	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(get_ticks_obj, get_ticks);

STATIC mp_obj_t pyb_tmr_period(size_t n_args, const mp_obj_t *args) {
    pyb_tmr_obj_t *self = args[0];
    if (n_args == 1) {
        return mp_obj_new_int(self->reload);
    } else {
		if((mp_obj_get_int(args[1]) > 100) || (mp_obj_get_int(args[1]) <1))
		{
			nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only accept 1-100 %%>_<%%"));
			return mp_const_none;
		}
        self->reload = mp_obj_get_int(args[1]);
        return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_tmr_period_obj, 1, 2, pyb_tmr_period);

mp_obj_t pyb_tmr_deinit(mp_obj_t self_in){
	pyb_tmr_obj_t *self = self_in;
	/* Stop the counter */
    self->isActive = 0;
	return mp_const_none;
	
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_tmr_deinit_obj, pyb_tmr_deinit);

STATIC void pyb_tmr_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_tmr_obj_t *self = self_in;
    mp_printf(print, "<Idex %u, period %d ms, remaining %d ms>", self - pyb_tmr_obj
		, self->reload, self->cntr);
}


STATIC mp_obj_t pyb_tmr_init_helper(pyb_tmr_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_period,     MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },	// interval 20ms, ppr 50->pulse per round
		{ MP_QSTR_callback,   MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = mp_const_none} },
    };
	tmr_init(self);
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);
	if (args[0].u_obj != MP_OBJ_NULL) {
			self->reload = mp_obj_get_int(args[0].u_obj);
		} else {
			self->reload = 20;
	}
	self->cntr = self->reload;
    if (args[1].u_obj == mp_const_none) {
    } else {
        pyb_tmr_callback(self, args[1].u_obj);
    }

    return mp_const_none;
}
STATIC mp_obj_t pyb_tmr_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {

    return pyb_tmr_init_helper(args[0], n_args - 1, args + 1, kw_args);

}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_tmr_init_obj, 1, pyb_tmr_init);

STATIC mp_obj_t pyb_tmr_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
	// check arguments
	uint32_t cnt = sizeof(pyb_tmr_obj) / sizeof(pyb_tmr_obj[0]);
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    int id = mp_obj_get_int(args[0]);
	if((id < 1) || (id>cnt))
		nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "only support 1-%d %%>_<%%", cnt));
	//if(!check_legal(id))
	//	nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "only support tmr in diff group([1-3],[4],[5-8],[9-12]."));
	pyb_tmr_obj_t *s = &pyb_tmr_obj[id-1];
	s->isActive = true;
    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_tmr_init_helper(s, n_args - 1, args + 1, &kw_args);
    }
    return (mp_obj_t)s;
}
STATIC void timer_handle_irq_channel(pyb_tmr_obj_t *tim, mp_obj_t callback) {

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
STATIC mp_obj_t pyb_tmr_callback(mp_obj_t self_in, mp_obj_t callback) {
    pyb_tmr_obj_t *self = self_in;
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
STATIC MP_DEFINE_CONST_FUN_OBJ_2(pyb_tmr_callback_obj, pyb_tmr_callback);

STATIC const mp_rom_map_elem_t tmr_locals_dict_table[] = {    
	{ MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_tmr_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_tmr_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_callback), MP_ROM_PTR(&pyb_tmr_callback_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_count), MP_ROM_PTR(&get_count_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_ticks), MP_ROM_PTR(&get_ticks_obj) },	
	{ MP_ROM_QSTR(MP_QSTR_period), MP_ROM_PTR(&pyb_tmr_period_obj) },
};

STATIC MP_DEFINE_CONST_DICT(tmr_locals_dict, tmr_locals_dict_table);

const mp_obj_type_t pyb_tmr_type = {
    { &mp_type_type },
    .name = MP_QSTR_TMR,
	.print = pyb_tmr_print,
	.make_new = pyb_tmr_make_new,
    .locals_dict = (mp_obj_dict_t*)&tmr_locals_dict,
};