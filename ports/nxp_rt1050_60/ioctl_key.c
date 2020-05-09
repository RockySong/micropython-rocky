#include "extmod/vfs.h"
#include "py/obj.h"
#include "py/runtime.h"
STATIC const mp_rom_map_elem_t ioctl_globals_table[] = {
	{MP_ROM_QSTR(MP_QSTR_INIT), MP_ROM_INT(MP_BLOCKDEV_IOCTL_INIT)},
	{MP_ROM_QSTR(MP_QSTR_DEINIT), MP_ROM_INT(MP_BLOCKDEV_IOCTL_DEINIT)},
	{MP_ROM_QSTR(MP_QSTR_SYNC), MP_ROM_INT(MP_BLOCKDEV_IOCTL_SYNC)},
	{MP_ROM_QSTR(MP_QSTR_SEC_COUNT), MP_ROM_INT(MP_BLOCKDEV_IOCTL_BLOCK_COUNT)},
	{MP_ROM_QSTR(MP_QSTR_SEC_SIZE), MP_ROM_INT(MP_BLOCKDEV_IOCTL_BLOCK_SIZE)},

};

STATIC MP_DEFINE_CONST_DICT(ioctl_globals, ioctl_globals_table);
const mp_obj_module_t ioctl_key = {
	.base = {&mp_type_module},
	.globals = (mp_obj_dict_t*)&ioctl_globals,
};