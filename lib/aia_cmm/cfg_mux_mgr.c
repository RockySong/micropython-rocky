#include <stdint.h>
#include <stdio.h>
#include "cfg_mux_mgr.h"
#define _CMM_PoolSize (256 - 8)
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

typedef struct _CMM_Main_t
{
    mp_obj_dict_t *pDict;	
}CMM_State_t, CMM_Obj_t;

CMM_Obj_t s_cmm;

STATIC mp_obj_t CMM_Init(void) {
    if (s_cmm.pDict == 0) {
    }
    return mp_const_none;
}

mp_obj_t CMM_Deinit(void) {
	if (s_cmm.pDict) {
		mp_state_ctx.vm.pvPortRoots[0] = 0;
		gc_free(s_cmm.pDict);
		s_cmm.pDict = 0;
	}
    return mp_const_none;
}

static mp_obj_t _prvMux_Query(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData, 
    bool isTake, bool isPreempt)
{
	char szCombo[CMM_COMBOKEY_CAP];
    mp_obj_t objRet;
	if (unit < 0) /* if a function does not have sub units, then unit < 0 */
	{
		snprintf(szCombo, sizeof(szCombo), "%s.%s", pszFn, pszSignal);
	} else {
        snprintf(szCombo, sizeof(szCombo), "%s.%d.%s", pszFn, unit, pszSignal);
    }    
    //rocky: do not use qstr nor MP_DEFINE_STR_OBJ!
    mp_obj_str_t *pStrComboKey = mp_obj_new_str(szCombo, strlen(szCombo));
    nlr_buf_t nlr;
    if (nlr_push(&nlr) == 0)/*try*/ {
        mp_obj_tuple_t *pTup = (mp_obj_tuple_t*) mp_obj_dict_get(s_cmm.pDict, (mp_obj_t)pStrComboKey);
        if (!pMuxData) /* If this is called from Python, we ju st return the tuple data */
	    {
		    nlr_pop();
		    goto cleanup;
	    }
	    /* We got the pin information as a tuple: (hint str, pin str, pin object, owner object) */
        mp_obj_t objHint, objPinObj, objOwner;
        objHint = pTup->items[0];
        objPinObj = pTup->items[2];
        objOwner = pTup->items[3];
        strcpy(pMuxData->szComboKey, szCombo);
        pMuxData->pPinObj = objPinObj;
        GET_STR_DATA_LEN(objHint, s, l);
        snprintf(pMuxData->szHint, sizeof(pMuxData->szHint), "%s", s);
        if (isTake) {
            if (isPreempt || mp_obj_is_small_int(objOwner) || objOwner == mp_const_none || objOwner == userObj) {
                /* free pin object or preempt */
                pTup->items[3] = userObj; /* well, py tuples are immutable, but we are in C */
            } else {
                pMuxData->pPinObj = 0; // failed to take
            }
            
        }
        nlr_pop();
        objRet = (mp_obj_t)pTup;
    } else /*except*/{
        // not found
        memset(pMuxData, 0, sizeof(*pMuxData));
        objRet = mp_const_none;
    }
cleanup:
    return objRet;
}

int Mux_Give(MuxItem_t *pMuxData)
{
    /* well, py tuples are immutable, but we are in C, set back the old owner */
    /* tuple layout: (hint string, pin string, pin object, owner object) */
    assert(pMuxData);
    assert(pMuxData->pTuple);
    
    nlr_buf_t nlr;
    if (nlr_push(&nlr) == 0)/*try*/ {
        mp_obj_str_t *pStrComboKey = mp_obj_new_str(pMuxData->szComboKey, strlen(pMuxData->szComboKey));
        mp_obj_tuple_t *pTup = (mp_obj_tuple_t*) mp_obj_dict_get(s_cmm.pDict, pStrComboKey);
        pTup->items[3] = 0; // owner cleared
        nlr_pop();
    } else /*except*/{
        // not found
    }    
    return 1;
}

int Mux_Take(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData) 
{
    assert(pMuxData);
    mp_obj_t obj = _prvMux_Query(userObj, pszFn, unit, pszSignal, pMuxData, TRUE, TRUE);
    return 1;
}

int Mux_TryTake(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData) 
{
    assert(pMuxData);
    mp_obj_t obj = _prvMux_Query(userObj, pszFn, unit, pszSignal, pMuxData, TRUE, FALSE);
    if (pMuxData->pPinObj == 0) 
        return -1L;
    return 1;
}

int Mux_Query(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData) 
{
    assert(pMuxData);
    mp_obj_t obj = _prvMux_Query(userObj, pszFn, unit, pszSignal, pMuxData, FALSE, FALSE);
    return 1;
}

int Mux_GiveMany(MuxItem_t *pMuxData, int cnt) {
    for (int i=0; i<cnt; i++ , pMuxData++) {
        Mux_Give(pMuxData);
    }
    return 1;
}

int Mux_TakeMany(mp_obj_t userObj, const char *pszFn, int unit, const char **ppszSignals, int signalCnt, MuxItem_t *pMuxData) {
    int i;
    for (i=0; i<signalCnt; i++) {
        Mux_Take(userObj, pszFn, unit, ppszSignals[i], pMuxData + i);
    }
    return 1;
}

int Mux_TryTakeMany(mp_obj_t userObj, const char *pszFn, int unit, const char **ppszSignals, int signalCnt, MuxItem_t *pMuxData) {
    int i;
    int ret;
    for (i=0; i<signalCnt; i++) {
        ret = Mux_Take(userObj, pszFn, unit, ppszSignals[i], pMuxData + i);
        if (ret < 0) {
            // we failed one, give all taken
            while (i--) {
                Mux_Give(pMuxData + i);
            }
            break;
        }
    }
    return ret;
}

int Mux_QueryMany(mp_obj_t userObj, const char *pszFn, int unit, const char **ppszSignals, int signalCnt, MuxItem_t *pMuxData) {
    int i;
    for (i=0; i<signalCnt; i++) {
        Mux_Query(userObj, pszFn, unit, ppszSignals[i], pMuxData + i);
    }
    return 1;
}

mp_obj_t CMM_Query(mp_obj_t keyFn, mp_obj_t keyUnit, mp_obj_t keySignal) {
    const char *pszFn = mp_obj_str_get_str(keyFn);
    int unit = MP_OBJ_SMALL_INT_VALUE(keyUnit);
    const char *pszSignal = mp_obj_str_get_str(keySignal);
    MuxItem_t item;
    mp_obj_tuple_t *pTup = _prvMux_Query(mp_const_none, pszFn, unit, pszSignal, &item, FALSE, FALSE);
    return pTup;
}

/*static */mp_obj_t CMM_Add(mp_obj_t dict) {
    s_cmm.pDict = dict;
    mp_state_ctx.vm.pvPortRoots[0] = dict;
    mp_obj_t ret = MP_OBJ_NEW_SMALL_INT(1);
	return ret;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_1(s_cmm_add_obj, CMM_Add);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(s_cmm_deinit_obj, CMM_Deinit);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(s_cmm_init_obj, CMM_Init);
STATIC MP_DEFINE_CONST_FUN_OBJ_3(s_cmm_find_obj, CMM_Query);

STATIC const mp_rom_map_elem_t s_cmm_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_add), MP_ROM_PTR(&s_cmm_add_obj) },
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&s_cmm_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&s_cmm_deinit_obj) },
    { MP_ROM_QSTR(MP_QSTR_find), MP_ROM_PTR(&s_cmm_find_obj) },
};
STATIC MP_DEFINE_CONST_DICT(s_cmm_locals_dict, s_cmm_locals_dict_table);

const mp_obj_module_t g_cmm_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&s_cmm_locals_dict,
};

