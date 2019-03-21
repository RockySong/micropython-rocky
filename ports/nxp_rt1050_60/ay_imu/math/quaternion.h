#ifndef __QUATERNION_H__
#define __QUATERNION_H__

#include "vector.h"


typedef struct
{
    float w, x, y, z;
}q_t;

void q_identity(q_t *q);
void q_set_rotx(q_t *q, float theta);
void q_set_roty(q_t *q, float theta);
void q_set_rotz(q_t *q, float theta);
void q_axang2quat(q_t *q, v3_t aixs, float theta);
q_t q_mul(q_t *q, q_t *r);
void q_normalize(q_t *q);
v3_t q_rot(q_t q, v3_t v);
float q_dot(q_t *a, q_t *b);
q_t q_add(q_t *q, q_t *r);
q_t q_conjugate(q_t *q);
q_t q_scaler(q_t q, float k);
q_t q_slerp(q_t *q0, q_t *q1, float t);
q_t q_sub(q_t *a, q_t *b);
float q_norm(q_t *q);

void print_quaternion(q_t q);

#endif

