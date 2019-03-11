#include <stdint.h>
#include <stdio.h>
#include "arm_math.h"

#include "arm_nnfunctions.h"

#ifdef _RTE_
#include "RTE_Components.h"
#ifdef RTE_Compiler_EventRecorder
#include "EventRecorder.h"
#endif
#endif

// oc: output channel
// so: shift (right) for output
// si#: shift (left) for input

void aia_HWC_q7_add2(q7_t *outBuf, uint32_t cnt, uint32_t so, q7_t *in1, uint32_t si1, q7_t *in2, uint32_t si2)
{
	uint32_t i;
	int c;
	int so2 = si1 + si2 - so;
	
	for (i=0; i<cnt; i++) {
		c = (*in1++ << si2) + (*in2++ << si1);
		if (so2 >= 0)
			c >>= so2;
		else
			c <<= -so2;
		if (c >= 127)
			c = 127;
		else if (c < -128)
			c = -128;
		*outBuf++ = (q7_t)c;
	}
}


void aia_relu_q7(q7_t * data, uint32_t size)
{

#if defined (ARM_MATH_DSP)
    /* Run the following code for Cortex-M4 and Cortex-M7 */

    uint32_t  i = size >> 2;
    q7_t     *pIn = data;
    q7_t     *pOut = data;
    q31_t     in;
    q31_t     buf;
    q31_t     mask;

    while (i)
    {
        in = *__SIMD32(pIn)++;

        /* extract the first bit */
        buf = __ROR(in & 0x80808080, 7);

        /* if MSB=1, mask will be 0xFF, 0x0 otherwise */
        mask = __QSUB8(0x00000000, buf);

        *__SIMD32(pOut)++ = in & (~mask);
        i--;
    }

    i = size & 0x3;
    while (i)
    {
        if (*pIn < 0)
        {
            *pIn = 0;
        }
        pIn++;
        i--;
    }

#else
    /* Run the following code as reference implementation for Cortex-M0 and Cortex-M3 */

    uint16_t  i;

    for (i = 0; i < size; i++)
    {
        if (data[i] < 0)
            data[i] = 0;
    }

#endif                          /* ARM_MATH_DSP */

}

void aia_relu6_q7(q7_t * data, uint32_t size, uint16_t shfIn) {
	uint32_t i;
	int a, maxVal = 6 << shfIn;
	aia_relu_q7(data, size);
	for (i=0; i< size; i++) {
		a = *data++;
		if (a > maxVal)
			data[-1] = maxVal;
	}
}

void aia_HWC_q15_add2(q15_t *outBuf, uint32_t cnt, uint32_t so, q15_t *in1, uint32_t si1, q15_t *in2, uint32_t si2)
{
	uint32_t i;
	int c;
	int so2 = si1 + si2 - so;
	
	for (i=0; i<cnt; i++) {
		c = (*in1++ << si2) + (*in2++ << si1);
		if (so2 >= 0)
			c >>= so2;
		else
			c <<= -so2;
		if (c >= 32767)
			c = 32767;
		else if (c < -32768)
			c = -32768;
		*outBuf++ = (q15_t)c;
	}
}

void aia_relu6_q15(q15_t * data, uint16_t size, uint16_t shfIn) {
	uint32_t i;
	int a, maxVal = 6 << shfIn;
	arm_relu_q15(data, size);
	for (i=0; i< size; i++) {
		a = *data++;
		if (a > maxVal)
			data[-1] = maxVal;
	}
}
