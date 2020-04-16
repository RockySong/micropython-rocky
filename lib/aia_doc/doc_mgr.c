#include <stdint.h>
#include <stdio.h>
#include "doc_mgr.h"
#include "py/objstr.h"
#include "py/objtuple.h"
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

typedef struct _DOC_Main_t
{
	uint8_t isFound;
	char szKey[32];
	char szLang[8];
}DOC_State_t, DOC_Obj_t;

DOC_Obj_t s_doc = {0, "help", "eng"};

#include "lexer.h"
#include "lib/utils/pyexec.h"
mp_obj_t DOC_Find(int arg_cnt, mp_obj_t *args) {
    
	const char *pszKey = "help";
	if (arg_cnt > 0)
	{
		if (!mp_obj_is_str(args[0]))
		{
			mp_raise_TypeError("key argument must be string type!");
		} else {
            pszKey = mp_obj_str_get_str(args[0]);
        }
	}
	snprintf(s_doc.szKey, sizeof(s_doc.szKey), "%s", pszKey);	
	
	const char *pszLang = "chs";
	if (arg_cnt > 1)
	{
		if (!mp_obj_is_str(args[1]))
		{
			mp_raise_TypeError("Language argument must be string type!");
		}
		pszLang = mp_obj_str_get_str(args[1]);
	}
	snprintf(s_doc.szLang, sizeof(s_doc.szLang), "%s", pszLang);
	
	mp_import_stat_t stat = mp_import_stat("doc_load.py");
	if (stat == MP_IMPORT_STAT_FILE) {
		nlr_buf_t nlr;
		if (nlr_push(&nlr) == 0) {
			int ret = pyexec_file("doc_load.py");
			if (ret & PYEXEC_FORCED_EXIT) {
				ret = 1;
			}			
			nlr_pop();
		}
		else {
		}
	} else {
        mp_printf(&mp_plat_print, "doc script does not found, please copy it to root folder");
		return MP_OBJ_NEW_SMALL_INT(-1);
    }
	return MP_OBJ_NEW_SMALL_INT(s_doc.isFound);
}

// this method is intended to be called from the doc_load.py
mp_obj_t DOC_doc(void)
{
	mp_obj_t objs[2];
	mp_obj_t pTup;
	objs[0] = mp_obj_new_str(s_doc.szKey, strlen(s_doc.szKey));
	objs[1] = mp_obj_new_str(s_doc.szLang, strlen(s_doc.szLang));
	pTup = mp_obj_new_tuple(2, objs);
	s_doc.isFound = 0;
	return pTup;
}

// the agent script will call this if it found help string
mp_obj_t DOC_get(mp_obj_t str)
{
	if (str != mp_const_none)
	{
		s_doc.isFound = 1;
	}
    return mp_const_none;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(s_doc_find_obj, 0, 2, DOC_Find);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(s_doc_doc_obj, DOC_doc);
STATIC MP_DEFINE_CONST_FUN_OBJ_1(s_doc_get_obj, DOC_get);

STATIC const mp_rom_map_elem_t s_doc_locals_dict_table[] = {
	{ MP_ROM_QSTR(MP_QSTR_doc), MP_ROM_PTR(&s_doc_doc_obj) },
	{ MP_ROM_QSTR(MP_QSTR_find), MP_ROM_PTR(&s_doc_find_obj) },	
	{ MP_ROM_QSTR(MP_QSTR_get), MP_ROM_PTR(&s_doc_get_obj) },	
};
STATIC MP_DEFINE_CONST_DICT(s_doc_locals_dict, s_doc_locals_dict_table);

const mp_obj_module_t g_doc_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&s_doc_locals_dict,
};

