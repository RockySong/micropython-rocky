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

typedef enum _DocSearch_enum
{
	kWantKey = 0,
	kWantLang = 2,
	kWrongLang = 3,
	kWantEnd = 4,
}DocSearch_enum;

typedef struct _DOC_Main_t
{
	uint8_t isFound;
	uint32_t lnNum;
	DocSearch_enum state;
	char szKey[64];
	char szLang[8];
}DOC_State_t, DOC_Obj_t;

DOC_Obj_t s_doc = {0, 0, kWantKey, "help", "chs"};

typedef enum _DocSearchResult_enum
{
    kSearchNotFound = 0,
	kSearchOK = 1,
	kSearchLink = 2,
}DocSearchResult_enum;

mp_obj_t DOC_FastSearch(mp_obj_t strSeg, mp_obj_t objLen)
{
	const char *s = mp_obj_str_get_str(strSeg);
	const char *sLine;
	int len = MP_OBJ_SMALL_INT_VALUE(objLen);
	int t = 0;
	int t2 = 0;
	int ret = kSearchNotFound;
	int lineLen;
	int keyLen = strlen(s_doc.szKey);
	int langLen = strlen(s_doc.szLang);
    do
	{
		// find \n
		for(t2 = t ; t2 < len ; t2++)
		{
			if (s[t2] == '\n')
				break;
		}
		if (t2 == len)
		{
			// a partial ine is in the remainder
			ret = -(len - t);
			t2 = -1;
			break;
		}
		lineLen = t2 - t - (s[t2 - 1] == '\r' ? 1 : 0); // mp reads as \r\n, strip \r
		++s_doc.lnNum;
		
		sLine = s + t;
		
		if (s_doc.state == kWantKey)
		{
			ProcKey:
			if (memcmp("#### ", sLine, 5) == 0)
			{
				if (memcmp(sLine + 5, s_doc.szKey, keyLen) == 0)
				{
					s_doc.state = kWantLang;
				}
			}
		}
		else if (s_doc.state == kWantLang)
		{
			ProcLang:
			if (memcmp("<lang=", sLine, 6) == 0 && sLine[lineLen - 1] == '>')
			{
				if (memcmp(sLine + 6, s_doc.szLang, langLen) == 0 || (memcmp(sLine + 6, "dft", 3) == 0))
				{
					s_doc.state = kWantEnd;
					s_doc.isFound = 1;
					if (s_doc.lnNum >= 1000)
						mp_printf(&mp_plat_print, "\r\n");	
				}
				else
				{
					s_doc.state = kWrongLang;
				}
			}
			else if (memcmp("<link=", sLine, 6) == 0 && sLine[lineLen - 1] == '>')
			{
				// link to another key
				memset(s_doc.szKey, 0, sizeof(s_doc.szKey));
				memcpy(s_doc.szKey, sLine + 6, lineLen - 6 - 1);
				ret = kSearchLink;
                s_doc.state = 0;
				break;
			}
		} 
		else if (s_doc.state == kWrongLang)
		{
			if (memcmp("</lang>", sLine, 7) == 0)
			{
				s_doc.state = kWantLang;
			}
			else if (memcmp("<lang=", sLine, 6) == 0) {
				s_doc.state = kWantLang;
				goto ProcLang;
			}
			else if (memcmp("#### ", sLine, 5) == 0) {
				s_doc.state = kWantKey;
				goto ProcKey;
			}			
		}
		else if (s_doc.state == kWantEnd)
		{
			if (memcmp("</lang>", sLine, 7) == 0 || 
			    memcmp("<lang=", sLine, 6) == 0 || memcmp("#### ", sLine, 5) == 0)
			{				
				ret = kSearchOK;
				break;
			}
			char *psz = m_malloc0(lineLen + 1);
			memcpy(psz, sLine, lineLen);
			mp_printf(&mp_plat_print, "%s\r\n", psz);			
		}
        t = t2 + 1;
	} while (t < len);
	return MP_OBJ_NEW_SMALL_INT(ret);
}

#include "lexer.h"
#include "lib/utils/pyexec.h"
int DOC_DoWork(int arg_cnt, mp_obj_t *args) {
    
	const char *pszKey = "welcome";
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
	
	const char *pszLang = s_doc.szLang;
	if (arg_cnt > 1)
	{
		if (!mp_obj_is_str(args[1]))
		{
			mp_raise_TypeError("Language argument must be string type!");
		}
		pszLang = mp_obj_str_get_str(args[1]);
        snprintf(s_doc.szLang, sizeof(s_doc.szLang), "%s", pszLang);
	}	
	
	char *path;
	extern bool flash_mounted, s_cardInserted;
	if(s_cardInserted)
		path = "/aia_doc/doc_load.py";
	else
		path = "/flash" "/aia_doc/doc_load.py";
	mp_import_stat_t stat = mp_import_stat(path);
	if (stat == MP_IMPORT_STAT_FILE) {
		nlr_buf_t nlr;
		if (nlr_push(&nlr) == 0) {
			int ret = pyexec_file(path);
			if (ret & PYEXEC_FORCED_EXIT) {
				ret = 1;
			}			
			nlr_pop();
		}
		else {
            mp_printf(&mp_plat_print, "doc script rasied an except!\r\n");
		}
	} else {
        mp_printf(&mp_plat_print, "doc script does not found, please copy it to root folder\r\n");
		return -1;
    }
	return s_doc.isFound;
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
	s_doc.state = kWantKey;
	s_doc.lnNum = 0;
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

STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(s_doc_find_obj, 0, 2, DOC_DoWork);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(s_doc_doc_obj, DOC_doc);
STATIC MP_DEFINE_CONST_FUN_OBJ_1(s_doc_get_obj, DOC_get);
STATIC MP_DEFINE_CONST_FUN_OBJ_2(s_doc_fastsearch_obj, DOC_FastSearch);

STATIC const mp_rom_map_elem_t s_doc_locals_dict_table[] = {
	{ MP_ROM_QSTR(MP_QSTR_doc), MP_ROM_PTR(&s_doc_doc_obj) },
	{ MP_ROM_QSTR(MP_QSTR_find), MP_ROM_PTR(&s_doc_find_obj) },	
	{ MP_ROM_QSTR(MP_QSTR_search), MP_ROM_PTR(&s_doc_fastsearch_obj) },	
	{ MP_ROM_QSTR(MP_QSTR_get), MP_ROM_PTR(&s_doc_get_obj) },	
};
STATIC MP_DEFINE_CONST_DICT(s_doc_locals_dict, s_doc_locals_dict_table);

const mp_obj_module_t g_doc_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&s_doc_locals_dict,
};

