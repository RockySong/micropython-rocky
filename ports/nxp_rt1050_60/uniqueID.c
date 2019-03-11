#include <stdio.h>
#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "uniqueID.h"

uint16_t g_uid[4];
mp_obj_t uniqueID_obj_readID() {

	mp_printf(&mp_plat_print, "Unique ID: %04x %04x %04x %04x\n",g_uid[0],g_uid[1], g_uid[2], g_uid[3]);
    return mp_const_none;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_0(uniqueID_obj_readID_obj, uniqueID_obj_readID);

STATIC const mp_rom_map_elem_t uniqueID_locals_dict_table[] = {

    { MP_ROM_QSTR(MP_QSTR_readID), MP_ROM_PTR(&uniqueID_obj_readID_obj) },

};

STATIC MP_DEFINE_CONST_DICT(uniqueID_locals_dict, uniqueID_locals_dict_table);

const mp_obj_type_t pyb_uniqueID_type = {
    { &mp_type_type },
    .name = MP_QSTR_uniqueID,
    .locals_dict = (mp_obj_dict_t*)&uniqueID_locals_dict,
};