
#include <stdio.h>

#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "tpyboard.h"

mp_obj_t tpyboard_obj_display() {

    printf("Hello TPYBoard\n");
    return mp_const_none;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_0(tpyboard_obj_display_obj, tpyboard_obj_display);

STATIC const mp_rom_map_elem_t tpyboard_locals_dict_table[] = {

    { MP_ROM_QSTR(MP_QSTR_display), MP_ROM_PTR(&tpyboard_obj_display_obj) },

};

STATIC MP_DEFINE_CONST_DICT(tpyboard_locals_dict, tpyboard_locals_dict_table);

const mp_obj_type_t pyb_tpyboard_type = {
    { &mp_type_type },
    .name = MP_QSTR_tpyboard,
    .locals_dict = (mp_obj_dict_t*)&tpyboard_locals_dict,
};
