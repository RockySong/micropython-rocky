#include <math.h>
#include <stdio.h>
#include "dcm.h"

v3_t dcm_mul_v(dcm_t *dcm, v3_t *v)
{
    v3_t result;
    
    result.x = dcm->m11*v->x + dcm->m12*v->y + dcm->m13*v->z;
    result.y = dcm->m21*v->x + dcm->m22*v->y + dcm->m23*v->z;
    result.z = dcm->m31*v->x + dcm->m32*v->y + dcm->m33*v->z;
    return result;
}

dcm_t dcm_mul(dcm_t *d1, dcm_t *d2)
{
    dcm_t r;
    r.m11 = d1->m11*d2->m11 + d1->m12*d2->m21 + d1->m13*d2->m31;
    r.m12 = d1->m11*d2->m12 + d1->m12*d2->m22 + d1->m13*d2->m32;
    r.m13 = d1->m11*d2->m13 + d1->m12*d2->m23 + d1->m13*d2->m33;
    
    r.m21 = d1->m21*d2->m11 + d1->m22*d2->m21 + d1->m23*d2->m31;
    r.m22 = d1->m21*d2->m12 + d1->m22*d2->m22 + d1->m23*d2->m32;
    r.m23 = d1->m21*d2->m13 + d1->m22*d2->m23 + d1->m23*d2->m33;
    
    r.m31 = d1->m31*d2->m11 + d1->m32*d2->m21 + d1->m33*d2->m31;
    r.m32 = d1->m31*d2->m12 + d1->m32*d2->m22 + d1->m33*d2->m32;
    r.m33 = d1->m31*d2->m13 + d1->m32*d2->m23 + d1->m33*d2->m33;
    return r;
}

dcm_t dcm_add(dcm_t *d1, dcm_t *d2)
{
    dcm_t r;
    r.m11 = d1->m11 + d2->m11;
    r.m12 = d1->m12 + d2->m12;
    r.m13 = d1->m13 + d2->m13;
    
    r.m21 = d1->m21 + d2->m21;
    r.m22 = d1->m22 + d2->m22;
    r.m23 = d1->m23 + d2->m23;
    
    r.m31 = d1->m31 + d2->m31;
    r.m32 = d1->m32 + d2->m32;
    r.m33 = d1->m33 + d2->m33;
    return r;
}

dcm_t dcm_scaler(dcm_t *d, float k)
{
    dcm_t r;
    r.m11 = d->m11 * k;
    r.m12 = d->m12 * k;
    r.m13 = d->m13 * k;
    
    r.m21 = d->m21 * k;
    r.m22 = d->m22 * k;
    r.m23 = d->m23 * k;
    
    r.m31 = d->m31 * k;
    r.m32 = d->m32 * k;
    r.m33 = d->m33 * k;
    return r;
}

dcm_t dcm_transpose(dcm_t *d)
{
    dcm_t r;
    r = *d;
    
    r.m21 = d->m12;
    r.m12 = d->m21;
    r.m31 = d->m13;
    r.m13 = d->m31;
    r.m32 = d->m23;
    r.m23 = d->m32;
    return r;
}

/* det A value */
float dcm_det(dcm_t *d)
{
    return (d->m11 * d->m22 * d->m33) + (d->m12 * d->m23 * d->m31) + (d->m13 * d->m21 * d->m32) -
        ((d->m13 * d->m22 * d->m31) + (d->m12 * d->m21 * d->m33) + (d->m11 * d->m23 * d->m32));
}

/* 3x3 martix inverse */
int dcm_inv(dcm_t *s, dcm_t *r)
{
    float det = dcm_det(s);
    float invdet;
    /* Arbitrary for now.  This should be something nicer... */
    if ( fabs(det) < 1e-2 )
    {
        return 1;
    }
    
    invdet = 1 / det; 
    
    // inverse of matrix m
    r->m11 = (s->m22 * s->m33 - s->m31 * s->m23) * invdet;
    r->m12 = (s->m13 * s->m32 - s->m12 * s->m33) * invdet;
    r->m13 = (s->m12 * s->m23 - s->m13 * s->m22) * invdet;
    r->m21 = (s->m23 * s->m31 - s->m21 * s->m33) * invdet;
    r->m22 = (s->m11 * s->m33 - s->m13 * s->m31) * invdet;
    r->m23 = (s->m21 * s->m13 - s->m11 * s->m23) * invdet;
    r->m31 = (s->m21 * s->m32 - s->m31 * s->m22) * invdet;
    r->m32 = (s->m31 * s->m12 - s->m11 * s->m32) * invdet;
    r->m33 = (s->m11 * s->m22 - s->m21 * s->m12) * invdet;
    
    return 0;
}


void dcm_identity(dcm_t *dcm)
{
    dcm->m11 = 1.0F; dcm->m12 = 0.0F; dcm->m13 = 0.0F;
    dcm->m21 = 0.0F; dcm->m22 = 1.0F; dcm->m23 = 0.0F;
    dcm->m31 = 0.0F; dcm->m32 = 0.0F; dcm->m33 = 1.0F;
}

void print_dcm(dcm_t *dcm)
{
    printf("m11:%0.3f m12:%0.3f m13:%0.3f\r\n", dcm->m11, dcm->m12, dcm->m13);
    printf("m21:%0.3f m22:%0.3f m23:%0.3f\r\n", dcm->m21, dcm->m22, dcm->m23);
    printf("m31:%0.3f m32:%0.3f m33:%0.3f\r\n", dcm->m31, dcm->m32, dcm->m33);
}

