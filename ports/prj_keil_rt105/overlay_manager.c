#include "overlay_manager.h"

#ifdef __CC_ARM
extern uint32_t Load$$OVERLAY_YUV_TAB$$Base;
extern uint32_t Load$$OVERLAY_LAB_TAB$$Base;
extern uint32_t Load$$OVERLAY_YUV_TAB$$Length;
extern uint32_t Load$$OVERLAY_LAB_TAB$$Length;
extern uint32_t Image$$OVERLAY_YUV_TAB$$Base;
extern uint32_t Image$$OVERLAY_LAB_TAB$$Base;

extern uint32_t Load$$OVERLAY_CODE_JPEG$$Base;
extern uint32_t Load$$OVERLAY_CODE_JPEG$$Length;
extern uint32_t Load$$OVERLAY_CODE_BLOB$$Base;
extern uint32_t Load$$OVERLAY_CODE_BLOB$$Length;
extern uint32_t Image$$OVERLAY_CODE_JPEG$$Base;
extern uint32_t Image$$OVERLAY_CODE_BLOB$$Base;

#else
#error "not supported toolchain!"
#endif

uint8_t s_curOvly;


int OverlaySwitch(uint8_t ovlyNdx) {
	if (s_curOvly == ovlyNdx)
		return ovlyNdx;
	uint8_t ovlyNdxBkup = ovlyNdx;
	const uint32_t *pSrc;
	uint32_t *pDst;
	uint32_t cb;
	switch (ovlyNdx) {
	case OVLY_YUV_TAB:
		pSrc = (const uint32_t*) &Load$$OVERLAY_YUV_TAB$$Base;
		pDst = (uint32_t*) &Image$$OVERLAY_YUV_TAB$$Base;
		cb = (uint32_t) &Load$$OVERLAY_YUV_TAB$$Length;
		break;
	case OVLY_LAB_TAB:
		pSrc = (const uint32_t*) &Load$$OVERLAY_LAB_TAB$$Base;
		pDst = (uint32_t*) &Image$$OVERLAY_LAB_TAB$$Base;
		cb = (uint32_t) &Load$$OVERLAY_LAB_TAB$$Length;
		break;
	default:
		return -1L;
	}

	s_curOvly = ovlyNdx;
	memcpy(pDst, pSrc, cb);		
	// >>> copy code
	switch (ovlyNdx) {
	case OVLY_YUV_TAB:
		pSrc = (const uint32_t*) &Load$$OVERLAY_CODE_JPEG$$Base;
		pDst = (uint32_t*) &Image$$OVERLAY_CODE_JPEG$$Base;
		cb = (uint32_t) &Load$$OVERLAY_CODE_JPEG$$Length;
		break;
	case OVLY_LAB_TAB:
		pSrc = (const uint32_t*) &Load$$OVERLAY_CODE_BLOB$$Base;
		pDst = (uint32_t*) &Image$$OVERLAY_CODE_BLOB$$Base;
		cb = (uint32_t) &Load$$OVERLAY_CODE_BLOB$$Length;
		break;
	default:
		return -1L;
	}	
	memcpy(pDst, pSrc, cb);	
	// <<<
	
	return ovlyNdxBkup;
}

int OverlaySetToDefault(void) {
	return OverlaySwitch(OVLY_YUV_TAB);
}

