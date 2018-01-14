#include <math.h>
#include <stdio.h>
#include <assert.h>
#include "quaternion.h"


void q_identity(q_t *q)
{
    q->w = 1.0F;
    q->x = q->y = q->z = 0.0F;
}

/* matlab angle2quat(90,0,0, 'XYZ') */
void q_set_rotx(q_t *q, float theta)
{
    float thetaOver2 = theta*0.5F;
    q->w = cosf(thetaOver2);
    q->x = sinf(thetaOver2);
    q->y = 0.0F;
    q->z = 0.0F;
}

void q_set_roty(q_t *q, float theta)
{
    float thetaOver2 = theta*0.5F;
    q->w = cosf(thetaOver2);
    q->x = 0.0F;
    q->y = sinf(thetaOver2);
    q->z = 0.0F;
}

void q_set_rotz(q_t *q, float theta)
{
    float thetaOver2 = theta*0.5F;
    q->w = cosf(thetaOver2);
    q->x = 0.0F;
    q->y = 0.0F;
    q->z = sinf(thetaOver2);
}

/*
    matlab: quatmultiply 
    q: base quat
    r: rotation
*/
q_t q_mul(q_t *q, q_t *r)
{
    q_t result;
    result.w = r->w*q->w - r->x*q->x - r->y*q->y - r->z*q->z;
    result.x = r->w*q->x + r->x*q->w - r->y*q->z + r->z*q->y;
    result.y = r->w*q->y + r->x*q->z + r->y*q->w - r->z*q->x;
    result.z = r->w*q->z - r->x*q->y + r->y*q->x + r->z*q->w;
    return result;
}

/*

*/
q_t q_sub(q_t *a, q_t *b)
{
    q_t tmp;
    tmp = q_conjugate(a);
    tmp = q_mul(&tmp, b);
    return tmp;
}

q_t q_add(q_t *q, q_t *r)
{
    q_t result;
    result.w = q->w + r->w;
    result.x = q->x + r->x;
    result.y = q->y + r->y;
    result.z = q->z + r->z;
    return result;
}

q_t q_scaler(q_t q, float k)
{
    q.w *= k;
    q.x *= k;
    q.y *= k;
    q.z *= k;
    return q;
}

/* matlab: axang2quat */
void q_axang2quat(q_t *q, v3_t aixs, float theta)
{
    
    if(aixs.x == 0.0F && aixs.y == 0.0F && aixs.z == 0.0F)
    {
        return;
    }
    
    v_normalize(&aixs);
    
    float thetaOver2 = theta *0.5F;
    float sinThetaOver2 = sinf(thetaOver2);
    
    q->w = cosf(thetaOver2);
    q->x = aixs.x * sinThetaOver2;
    q->y = aixs.y * sinThetaOver2;
    q->z = aixs.z * sinThetaOver2;
}

q_t q_conjugate(q_t *q)
{
    q_t result;
    result.w = q->w;
    result.x = -q->x;
    result.y = -q->y;
    result.z = -q->z;
    return result;
}

/* rotate a vector via quat, matlab: quatrotate */
v3_t q_rot(q_t q, v3_t v)
{
    v3_t new_v;
    new_v.x = v.x*(1 - 2*q.y*q.y - 2*q.z*q.z) + v.y*2*(q.x*q.y + q.w*q.z)       + v.z*2*(q.x*q.z - q.w*q.y);
    new_v.y = v.x*2*(q.x*q.y - q.w*q.z)       + v.y*(1 - 2*q.x*q.x - 2*q.z*q.z) + v.z*2*(q.y*q.z + q.w*q.x);
    new_v.z = v.x*2*(q.x*q.z + q.w*q.y)       + v.y*2*(q.y*q.z - q.w*q.x)       + v.z*(1 - 2*q.x*q.x -2*q.y*q.y);
    
    return new_v;
}

float q_norm(q_t *q)
{
    return sqrtf(q->w*q->w + q->x*q->x + q->y*q->y + q->z*q->z);
}

/* matlab: quatnormalize */
void q_normalize(q_t *q)
{
    float mag;
    mag = 1 / sqrtf(q->w*q->w + q->x*q->x + q->y*q->y + q->z*q->z);
    q->w *= mag;
    q->x *= mag;
    q->y *= mag;
    q->z *= mag;
}

/* dot prodcut */
float q_dot(q_t *a, q_t *b)
{
    return a->w * b->w + a->x * b->x + a->y * b->y + a->z * b->z;
}

void print_quaternion(q_t q)
{
    printf("w:%0.3f x:%0.3f y:%0.3f z:%0.3f\r\n", q.w, q.x, q.y, q.z);
}

q_t q_slerp(q_t *q0, q_t *q1, float t)
{
    q_t result, q1t;
    float cosOmega = q_dot(q0, q1);
    float k0, k1;
    
    if(t == 0.0F)
    {
        return *q0;
    }
    
    q1t = *q1;
    if(cosOmega < 0.0F)
    {
        q1t.w = -q1->w;
        q1t.x = -q1->x;
        q1t.y = -q1->y;
        q1t.z = -q1->z;
        cosOmega = -cosOmega;
    }
    
    if(cosOmega > 0.9999F)
    {
        /* linear slerp */
        k0 = 1.0F - t;
        k1 = t;
    }
    else
    {
        float sinOmega = sqrtf(1.0F - cosOmega*cosOmega);
        float omega = atan2f(sinOmega, cosOmega);
        float oneOverSinOmega = 1.0F / sinOmega;
        k0 = sinf((1.0F - t)*omega) * oneOverSinOmega;
        k1 = sinf(t * omega) * oneOverSinOmega;
    }
    
    result.w = k0*q0->w + k1*q1t.w;
    result.x = k0*q0->x + k1*q1t.x;
    result.y = k0*q0->y + k1*q1t.y;
    result.z = k0*q0->z + k1*q1t.z;
        
    return result;
}







