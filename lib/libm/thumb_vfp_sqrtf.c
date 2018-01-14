// an implementation of sqrtf for Thumb using hardware VFP instructions

#include <math.h>
#ifdef __CC_ARM
#ifdef HARD_FP
	__asm float ssqrt(float x)
	{
		VSQRT.f32 S0, S0
		BX	LR
	}
	#endif
#else
	#ifndef __ICCARM__
		float sqrtf(float x) {
			asm volatile (
					"vsqrt.f32  %[r], %[x]\n"
					: [r] "=t" (x)
					: [x] "t"  (x));
			return x;
		}
	#endif
#endif
