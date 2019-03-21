#ifndef __DCM_H__
#define __DCM_H__

#include <stdint.h>
#include <stdbool.h>

#include "vector.h"

typedef struct
{
    /* 
        dcm in format:
        | m11 m12 m13 |
        | m21 m22 m23 |
        | m31 m32 m33 |
    */
    
    float m11, m12, m13;
    float m21, m22, m23;
    float m31, m32, m33;
}dcm_t;

void print_dcm(dcm_t *dcm);
v3_t dcm_mul_v(dcm_t *dcm, v3_t *v);
void dcm_identity(dcm_t *dcm);
dcm_t dcm_mul(dcm_t *d1, dcm_t *d2);
dcm_t dcm_add(dcm_t *d1, dcm_t *d2);
dcm_t dcm_transpose(dcm_t *d);
float dcm_det(dcm_t *d);
int dcm_inv(dcm_t *s, dcm_t *r);
dcm_t dcm_scaler(dcm_t *d, float k);


#endif

