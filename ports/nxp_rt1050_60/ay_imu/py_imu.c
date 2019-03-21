#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>

#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "pin.h"
#include "genhdr/pins.h"
#include "bufhelper.h"
#include "fsl_gpio.h"
#include "pin.h"
#include "fusion.h"
#include "eular.h"
#include "py_imu.h"
pyb_imu_obj_t pyb_imu_obj[1] = {
	{&pyb_imu_type, fusion_out_euler}, 
};

void pyb_imu_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_imu_obj_t *self = self_in;
	if (self->outMode == fusion_out_euler) {
    	mp_printf(print, "sensor fusion: Euler angle mode");
	} else {
		mp_printf(print, "sensor fusion: Quat mode");
	}
}

STATIC mp_obj_t pyb_imu_init_helper(pyb_imu_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_mode,     MP_ARG_INT, {.u_int = 0} },	// 0 = euler, 1 = quat
        { MP_QSTR_scale_a,    MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
		{ MP_QSTR_scale_g,    MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
		{ MP_QSTR_scale_m,    MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_delta_ms,   MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },      
		// <<<
    };
	static const mp_float_t dfltCArgs[4] = {2.0 / 32768.0, 1000.0 * (3.141592654 / 180.0) / 32768.0, 0.01, 0.05};
	uint32_t i;
    // parse args
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

	self->outMode = args[0].u_int == 0 ? fusion_out_euler : fusion_out_quat;
	for (i=0; i<4; i++) {
		if (args[1 + i].u_obj != MP_OBJ_NULL) {
			self->args[i] = mp_obj_get_float(args[i + 1].u_obj);
		} else 
			self->args[i] = dfltCArgs[i];
	}
	
    return mp_const_none;
}

STATIC mp_obj_t pyb_imu_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) 
{
    // check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);
	
    if (n_args != 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_imu_init_helper(&pyb_imu_obj[0], n_args - 1, args + 1, &kw_args);
    }

    return (mp_obj_t)&pyb_imu_obj[0];	
}

STATIC mp_obj_t pyb_imu_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {
    return pyb_imu_init_helper(args[0], n_args - 1, args + 1, kw_args);
}


STATIC mp_obj_t pyb_imu_deinit(mp_obj_t self_in) {
    pyb_imu_obj_t *self = self_in;
	self->outMode = fusion_out_euler;	
    return mp_const_none;
}

#include "objlist.h"
typedef union _imu_param_t {
	float agm[3][3];
	v3_t vs[3];
}imu_param_t;

typedef struct _mp_obj_float_t {
    mp_obj_base_t base;
    mp_float_t value;
} mp_obj_float_t;


STATIC mp_obj_t pyb_imu_step(size_t n_args, const mp_obj_t *args) {

	pyb_imu_obj_t *self = MP_OBJ_TO_PTR(args[0]);

	mp_buffer_info_t bufinfos[3];
    uint8_t data[1];
	uint8_t *p;
	uint32_t i, j;
	int32_t s32Val;
	q_t q;
	eular_t e;
	imu_param_t imu;
	memset(&imu, 0, sizeof(imu));
	mp_obj_tuple_t *pObjTuple;
	mp_obj_t items[4];	
	for (i=0; i<3; i++) {
		if (args[i + 1] != (const mp_obj_t)&mp_const_none_obj ) {
			pyb_buf_get_for_send(args[i + 1], bufinfos + i, data);
			if (bufinfos[i].len != 6) {
				nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "must be 6 bytes of sensor raw data!"));
			}
			p = (uint8_t*) bufinfos[i].buf;
			for (j=0; j<3; j++ , p += 2) {
				s32Val = (((uint32_t)p[0]<<8) + p[1]);
				if (s32Val & 0x8000)
					s32Val |= 0xFFFF0000;
				imu.agm[i][j] = (float) s32Val * self->args[i];
			}
		}
	}
	mp_float_t itv_ms = self->args[3];
	if (args[4] != MP_OBJ_NULL) {
		itv_ms = mp_obj_get_float(args[4]);
	}
	uint32_t retFObjCnt = self->outMode == fusion_out_euler ? 3 : 4;	
	
	f1_ahrs_update(&q, imu.vs[1], imu.vs[0], imu.vs[2], itv_ms);	
	
	if (self->outMode == fusion_out_euler) {
		f1_get_q(&q);
		quat2angle(&q, &e, "ZYX");
		items[0] = mp_obj_new_float((mp_float_t) e.pitch);
		items[1] = mp_obj_new_float((mp_float_t) e.roll);
		items[2] = mp_obj_new_float((mp_float_t) e.yaw);
	} else {
		items[0] = mp_obj_new_float((mp_float_t) q.x);
		items[1] = mp_obj_new_float((mp_float_t) q.y);
		items[2] = mp_obj_new_float((mp_float_t) q.z);	
		items[3] = mp_obj_new_float((mp_float_t) q.w);	
	}

	pObjTuple = (mp_obj_tuple_t*) mp_obj_new_tuple(retFObjCnt, (mp_obj_t)items);

	return (mp_obj_t)pObjTuple;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_imu_init_obj, 1, pyb_imu_init);
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_imu_deinit_obj, pyb_imu_deinit);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_imu_step_obj, 4, 5, pyb_imu_step);

STATIC const mp_rom_map_elem_t imu_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_imu_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_imu_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_step), MP_ROM_PTR(&pyb_imu_step_obj) },
};


STATIC MP_DEFINE_CONST_DICT(imu_locals_dict, imu_locals_dict_table);

const mp_obj_type_t pyb_imu_type = {
    { &mp_type_type },
    .name = MP_QSTR_imu,
    .print = pyb_imu_print,
    .make_new = pyb_imu_make_new,
    .locals_dict = (mp_obj_dict_t*)&imu_locals_dict,
};

