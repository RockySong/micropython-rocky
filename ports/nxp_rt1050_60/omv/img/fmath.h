/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * Fast approximate math functions.
 *
 */
#ifndef __FMATH_H__
#define __FMATH_H__
#include <stdint.h>
#include "common.h"
#ifdef __CC_ARM
#include <math.h>
// #define fast_sqrtf sqrtf
static inline float fast_sqrtf(float x)
{
	__asm {
		VSQRT.F32	x,	x
	}
    return x;
}

typedef union 
{
	float f32;
	int s32;
}U32Combo;

typedef union 
{
	double f64;
	long long s64;
}U64Combo;

__asm static int fast_roundf(float x)
{
	vcvtr.s32.f32	s0, s0
	vmov	r0, s0
	bx		lr
	ALIGN
}


__asm static int  fast_floorf(float x)
{
	vcvt.s32.f32	s0, s0
	vmov	r0, s0
	bx		lr
	ALIGN
}

__asm static int fast_ceilf(float x)
{	
	vldr.f32	s1,=0.99999
	vadd.f32	s0,	s0,	s1
	vcvt.s32.f32	s0, s0
	vmov	r0, s0
	bx		lr
	ALIGN
	/*
    float i;
    x += 0.9999f;
    __asm{
		vcvt.s32.f32 i, x
    }
    return (int)i;
    */
}

#define fast_fabsf fabsf
#define isnanf __ARM_isnanf
#define isinff __ARM_isinff
#else
float fast_sqrtf(float x);
int fast_floorf(float x);
int fast_ceilf(float x);

#endif
int fast_roundf(float x);


float fast_atanf(float x);
float fast_atan2f(float y, float x);
float fast_expf(float x);
float fast_cbrtf(float d);
float fast_fabsf(float d);
float fast_log(float x);
float fast_log2(float x);
extern const float cos_table[360];
extern const float sin_table[360];
#endif // __FMATH_H__
