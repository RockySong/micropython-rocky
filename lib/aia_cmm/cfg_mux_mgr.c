#include <stdint.h>
#include "py/mpconfig.h"
#include "py/misc.h"
#include "py/obj.h"
#include "py/runtime.h"
#include "py/gc.h"
#include "py/objstr.h"
#include "vfs.h"
#include "pin.h"
#define _CMM_PoolSize (256 - 8)
typedef struct _CMM_StrPool
{
    /* control states, must be 8 bytes*/
	uint16_t itemCnt;
	uint16_t prevTotalCnt;
	struct _CMM_StrPool *pPrev;
    /* pool*/
	char strs[_CMM_PoolSize];
	
}CMM_StrPool_t;

typedef struct _CMM_Main_t
{
    mp_obj_base_t base;
	uint16_t poolCnt;
	uint32_t filledByteCnt;
    mp_obj_dict_t *pDict;	
}CMM_State_t, CMM_Obj_t;

CMM_Obj_t s_cmm;

STATIC mp_obj_t CMM_Init(void) {
    if (s_cmm.pDict == 0) {
    }
    return mp_const_none;
}
#define CMM_MAX_STR_DESC_LEN  32

typedef struct _CMM_DescItem 
{
    char szDesc[32]; /* comboname descriptor */
	char *pszHint; /* point to a location inside the szDesc */
	pin_obj_t *pPinObj;	
}CMM_DescItem_t;

mp_obj_t CMM_Deinit(void) {
    return mp_const_none;
}

/*static */mp_obj_t CMM_Add(mp_obj_t dict) {
    s_cmm.pDict = dict;
    mp_state_ctx.vm.pvPortRoots[0] = dict;
    mp_obj_t ret = MP_OBJ_NEW_SMALL_INT(3);
	return ret;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_1(s_cmm_add_obj, CMM_Add);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(s_cmm_deinit_obj, CMM_Deinit);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(s_cmm_init_obj, CMM_Init);

STATIC const mp_rom_map_elem_t s_cmm_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_add), MP_ROM_PTR(&s_cmm_add_obj) },
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&s_cmm_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&s_cmm_deinit_obj) },
};
STATIC MP_DEFINE_CONST_DICT(s_cmm_locals_dict, s_cmm_locals_dict_table);

const mp_obj_module_t g_cmm_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&s_cmm_locals_dict,
};

