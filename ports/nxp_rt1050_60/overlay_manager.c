#include "overlay_manager.h"

#ifdef __CC_ARM


extern uint32_t Load$$OVERLAY_YUV_TAB$$Base;
extern uint32_t Load$$OVERLAY_YUV_TAB$$Length;
extern uint32_t Image$$OVERLAY_YUV_TAB$$Base;
extern uint32_t Load$$OVERLAY_CODE_JPEG$$Base;
extern uint32_t Load$$OVERLAY_CODE_JPEG$$Length;
extern uint32_t Image$$OVERLAY_CODE_JPEG$$Base;


extern uint32_t Load$$OVERLAY_LAB_TAB$$Base;
extern uint32_t Load$$OVERLAY_LAB_TAB$$Length;
extern uint32_t Image$$OVERLAY_LAB_TAB$$Base;

extern uint32_t Load$$OVERLAY_HAAR$$Base;
extern uint32_t Load$$OVERLAY_HAAR$$Length;
extern uint32_t Image$$OVERLAY_HAAR$$Base;

extern uint32_t Load$$OVERLAY_FLASHPGM$$Base;
extern uint32_t Load$$OVERLAY_FLASHPGM$$Length;
extern uint32_t Image$$OVERLAY_FLASHPGM$$Base;


extern uint32_t Load$$OVERLAY_CODE_BLOB$$Base;
extern uint32_t Load$$OVERLAY_CODE_BLOB$$Length;
extern uint32_t Image$$OVERLAY_CODE_BLOB$$Base;

#define OVERLAY_CASE(n) \
	case OVLY_##n: \
		pSrc = (const uint32_t*) &Load$$OVERLAY_##n##$$Base; \
		pDst = (uint32_t*) &Image$$OVERLAY_##n##$$Base; \
		cb = (uint32_t) &Load$$OVERLAY_##n##$$Length; \
		break; \

#else
extern uint32_t _overlay_dtcm_base;	// 0x20002000
extern uint32_t _overlay_itcm_base;	// 0x6000
extern uint32_t __load_start_OVERLAY_YUV_TAB;
extern uint32_t __load_stop_OVERLAY_YUV_TAB;

#define OVERLAY_CASE(n) \
	case OVLY_##n: \
		pSrc = (const uint32_t*) &__load_start_OVERLAY_##n;\
		cb = (uint32_t)&__load_stop_OVERLAY_##n - (uint32_t)&__load_start_OVERLAY_##n; \
		break; \
	
extern uint32_t __load_start_OVERLAY_YUV_TAB;
extern uint32_t __load_stop_OVERLAY_YUV_TAB;
extern uint32_t __load_start_OVERLAY_LAB_TAB;
extern uint32_t __load_stop_OVERLAY_LAB_TAB;
extern uint32_t __load_start_OVERLAY_HAAR;
extern uint32_t __load_stop_OVERLAY_HAAR;
extern uint32_t __load_start_OVERLAY_FLASHPGM;
extern uint32_t __load_stop_OVERLAY_FLASHPGM;
extern uint32_t __load_start_OVERLAY_CODE_JPEG;
extern uint32_t __load_stop_OVERLAY_CODE_JPEG;
extern uint32_t __load_start_OVERLAY_CODE_BLOB;
extern uint32_t __load_stop_OVERLAY_CODE_BLOB;
#endif

uint8_t s_curOvly;
#ifdef __CC_ARM
__asm void OverlayMemCpy(void *pvDst, const void*pvSrc, uint32_t cb) {

	push	{r4-r10, lr}
	
	ands	r4,	r0,	#3
	bne		.
	ands	r4,	r1,	#3
	bne		.
	ands	r4,	r2,	#3
	bne		.
	
	ands	r4,	r2,	#31
	beq		%f20
10	
	ldr		r3,	[r1], #4
	str 	r3, [r0], #4
	subs	r4,	r4,	#4
	bne		%b10
	
20	
	bics	r2,	r2,	#31
	beq		%f40
30
	ldrd	r3, r4, [r1], #8
	subs	r2,	r2, #8
	strd	r3, r4, [r0], #8
	// str		r3,	[r0], #4
	//ldm		r1!, {r3-r6}
	//stm		r0!, {r3-r6}
	//ldm		r1!, {r3-r6}
	//stm		r0!, {r3-r6}	
	bne		%b30
40
	pop		{r4-r10, pc}
	
}
#if 0
int OverlaySwitch(uint8_t ovlyNdx) {return 0;}
#else
int OverlaySwitch(uint8_t ovlyNdx) {
	if (s_curOvly == ovlyNdx)
		return ovlyNdx;
	uint8_t ovlyNdxBkup = ovlyNdx;
	const uint32_t *pSrc;
	uint32_t *pDst;
	uint32_t cb;
	
	switch (ovlyNdx) {
		OVERLAY_CASE(YUV_TAB)
		OVERLAY_CASE(LAB_TAB)
		OVERLAY_CASE(HAAR)
		#ifdef XIP_EXTERNAL_FLASH
		//OVERLAY_CASE(FLASHPGM)
		#endif
	default:
		return -1L;
	}

	s_curOvly = ovlyNdx;
	memcpy(pDst, pSrc, cb);		
	// >>> copy code
	switch (ovlyNdx) {
		OVERLAY_CASE(CODE_JPEG)
		OVERLAY_CASE(CODE_BLOB)
	default:
		return -1L;
	}	
	memcpy(pDst, pSrc, cb);	
	// <<<
Cleanup:	
	return ovlyNdxBkup;
}
#endif
#else
int OverlaySwitch(uint8_t ovlyNdx) {return 0;}

#if 0
int OverlaySwitch(uint8_t ovlyNdx) {
	if (s_curOvly == ovlyNdx)
		return ovlyNdx;
	uint8_t ovlyNdxBkup = ovlyNdx;
	const uint32_t *pSrc;
	uint32_t *pDst;
	uint32_t cb;
	
	switch (ovlyNdx) {
		OVERLAY_CASE(YUV_TAB)
		OVERLAY_CASE(LAB_TAB)
		OVERLAY_CASE(HAAR)
		#if defined(XIP_EXTERNAL_FLASH) && defined(EVK1050_60_HYPER) 
		OVERLAY_CASE(FLASHPGM)
		#endif
	default:
		return -1L;
	}
	pDst = &_overlay_dtcm_base;
	s_curOvly = ovlyNdx;
	memcpy(pDst, pSrc, cb);		
	// >>> copy code
	switch (ovlyNdx) {
		OVERLAY_CASE(CODE_JPEG)
		OVERLAY_CASE(CODE_BLOB)
	default:
		return -1L;
	}
	
	pDst = &_overlay_dtcm_base;
	memcpy(pDst, pSrc, cb);	
	// <<<
	
	return ovlyNdxBkup;
}
#endif
#endif
int OverlaySetToDefault(void) {
	return OverlaySwitch(OVLY_YUV_TAB);
}

