#include "overlay_manager.h"

#ifdef __CC_ARM
extern uint32_t Load$$OVERLAY_YUV_TAB$$Base;
extern uint32_t Load$$OVERLAY_YUV_TAB$$Length;
extern uint32_t Image$$OVERLAY_YUV_TAB$$Base;

extern uint32_t Load$$OVERLAY_LAB_TAB$$Base;
extern uint32_t Load$$OVERLAY_LAB_TAB$$Length;
extern uint32_t Image$$OVERLAY_LAB_TAB$$Base;

extern uint32_t Load$$OVERLAY_HAAR$$Base;
extern uint32_t Load$$OVERLAY_HAAR$$Length;
extern uint32_t Image$$OVERLAY_HAAR$$Base;

extern uint32_t Load$$OVERLAY_FLASHPGM$$Base;
extern uint32_t Load$$OVERLAY_FLASHPGM$$Length;
extern uint32_t Image$$OVERLAY_FLASHPGM$$Base;

extern uint32_t Load$$OVERLAY_CODE_JPEG$$Base;
extern uint32_t Load$$OVERLAY_CODE_JPEG$$Length;
extern uint32_t Image$$OVERLAY_CODE_JPEG$$Base;

extern uint32_t Load$$OVERLAY_CODE_BLOB$$Base;
extern uint32_t Load$$OVERLAY_CODE_BLOB$$Length;
extern uint32_t Image$$OVERLAY_CODE_BLOB$$Base;

#else
#error "not supported toolchain!"
#endif

uint8_t s_curOvly;


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
	subs	r2,	r2, #16
	ldm		r1!, {r3,r4}
	ldm		r1!, {r5,r6}
	stm		r0!, {r3,r4}
	stm		r0!, {r5,r6}
	// str		r3,	[r0], #4
	//ldm		r1!, {r3-r6}
	//stm		r0!, {r3-r6}
	//ldm		r1!, {r3-r6}
	//stm		r0!, {r3-r6}	
	bne		%b30
40
	pop		{r4-r10, pc}
	
}

#define OVERLAY_CASE(n) \
	case OVLY_##n: \
		pSrc = (const uint32_t*) &Load$$OVERLAY_##n##$$Base; \
		pDst = (uint32_t*) &Image$$OVERLAY_##n##$$Base; \
		cb = (uint32_t) &Load$$OVERLAY_##n##$$Length; \
		break; \

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
		OVERLAY_CASE(FLASHPGM)
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
	
	return ovlyNdxBkup;
}

int OverlaySetToDefault(void) {
	return OverlaySwitch(OVLY_YUV_TAB);
}

