#ifndef _CFG_MUX_MGR_H_
#define _CFG_MUX_MGR_H_
#include "py/mpconfig.h"
#include "py/misc.h"
#include "py/obj.h"
#include "py/runtime.h"
#include "py/gc.h"
#include "py/objstr.h"
#include "pin.h"
typedef struct _CMM_DescItem 
{
    const char *pszPin;
	const char *pszHint; /* point to a location inside the szDesc */
	pin_obj_t *pPinObj;	
    mp_obj_tuple_t *pTuple;
    mp_obj_t objOldOwner;
}CMM_DescItem_t, MuxItem_t;

/* Return a pin to CMM, caller should put the pin to proper state according to the board design */
int Mux_Give(MuxItem_t *pMuxData);

/* Take a pin according to the function name (pszFn), unit (unit), and the signal name (pszSignal), 
 * if the pin is owned by others then preempt it. usually one should avoid this confliction.
 * (userObj) will become the new owner of this pin.
 * E.g., Mux_Take(self, "spi", 3, "SCLK", &muxData); 
 */
int Mux_Take(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData);

/* Like Mux_Take, but if the pin is owned by others then fail and returns a negative value */
int Mux_TryTake(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData);

/* Just query the pin, do not take */
int Mux_Query(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData);

/* below APIs are just for complementary, convenient for getting multiple signals together */

/* Return a group of pins */
int Mux_GiveMany(MuxItem_t *pMuxData, int cnt);

/* take a group of pins, the amount is signalCnt */
int Mux_TakeMany(mp_obj_t userObj, const char *pszFn, int unit, const char **ppszSignals, int signalCnt, MuxItem_t *pMuxData);

/* Try take a group of pins, the amount is signalCnt */
int Mux_TryTakeMany(mp_obj_t userObj, const char *pszFn, int unit, const char **ppszSignals, int signalCnt, MuxItem_t *pMuxData);

/* Query a group of pins*/
int Mux_QueryMany(mp_obj_t userObj, const char *pszFn, int unit, const char **ppszSignals, int signalCnt, MuxItem_t *pMuxData);
#endif
