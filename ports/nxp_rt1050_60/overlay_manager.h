#ifndef __OVERLAY_MANAGER_C__
#define __OVERLAY_MANAGER_C__
#include <stdint.h>
#define OVLY_NOT_MOVED	0

#define OVLY_LAB_TAB	1
#define OVLY_CODE_BLOB	OVLY_LAB_TAB

#define OVLY_HAAR		2
#define OVLY_CODE_HAAR	2

#define OVLY_FLASHPGM	3

extern int OverlaySwitch(uint8_t ovlyNdx);
extern int OverlaySetToDefault(void);

#endif
