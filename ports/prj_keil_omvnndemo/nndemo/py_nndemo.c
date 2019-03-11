#include <mp.h>
#include <arm_math.h>
#include "imlib.h"
#include "array.h"
#include "sensor.h"
#include "ff_wrapper.h"
#include "xalloc.h"
#include "fb_alloc.h"
#include "framebuffer.h"
#include "py_assert.h"
#include "py_helper.h"
#include "py_image.h"
#include "omv_boardconfig.h"
#include "py/runtime0.h"
#include "py/runtime.h"

STATIC MP_DEFINE_CONST_FUN_OBJ_KW(nndemo_show_obj, 1, nndemo_show);

/// \method mem_read(data, addr, memaddr, timeout=5000, addr_size=8)
///
/// Read from the memory of an I2C device:
///
///   - `data` can be an integer or a buffer to read into
///   - `addr` is the I2C device address
///   - `memaddr` is the memory location within the I2C device
///   - `timeout` is the timeout in milliseconds to wait for the read
///   - `addr_size` selects width of memaddr: 8 or 16 bits
///
/// Returns the read data.
/// This is only valid in master mode.
STATIC const mp_arg_t nndemo_show_allowed_args[] = {
    { MP_QSTR_index,   MP_ARG_INT, {.u_int = 0} },
    { MP_QSTR_data,    MP_ARG_INT, {.u_int = 16} },
};

STATIC mp_obj_t nndemo_show(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    // parse args
    mp_arg_val_t args[MP_ARRAY_SIZE(nndemo_show_allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(nndemo_show_allowed_args), nndemo_show_allowed_args, args);

	switch(args[1].u_int) {
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
	mp_printf(&mp_plat_print, "nndemo cmd=%d\r\n", args[1].u_int);
	
    return mp_const_none;
}