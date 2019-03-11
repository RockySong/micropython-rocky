#ifndef _AIA_CMSISNN_EXT_H_
#define _AIA_CMSISNN_EXT_H_
void aia_relu6_q7(q7_t * data, uint32_t size, uint16_t shfIn);
void aia_HWC_q7_add2(q7_t *outBuf, uint32_t cnt, uint32_t so, q7_t *in1, uint32_t si1, q7_t *in2, uint32_t si2);
void aia_relu6_q15(q15_t * data, uint32_t size, uint16_t shfIn);
void aia_HWC_q15_add2(q15_t *outBuf, uint32_t cnt, uint32_t so, q15_t *in1, uint32_t si1, q15_t *in2, uint32_t si2);
#endif
