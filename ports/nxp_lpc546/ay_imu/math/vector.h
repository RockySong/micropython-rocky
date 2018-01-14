#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <stdint.h>
#include <stdbool.h>

#define PI              3.1415926f
#define DegToRad        0.017453292f
#define RadToDeg        57.295779f

/* convert v3_t to float pointer format */
#define V2PTR(v)        ((float*)&v.x)     

typedef struct
{
    float x,y,z;
}v3_t;

    
v3_t v_cross(v3_t v1, v3_t v2);
float v_norm(v3_t v);
void v_normalize(v3_t *v);
void print_vector(v3_t v);
v3_t v_add(v3_t a, v3_t b);
v3_t v_scaler(v3_t v, float k);
v3_t v_scaler2(v3_t v, v3_t k);
v3_t v_subtract(v3_t a, v3_t b);
float v_dot(v3_t v1, v3_t v2);
void v_clear(v3_t *v);
void v_set(v3_t *v, float val);
v3_t v_inv(v3_t v);

float vn_sum(float *v, int cnt);
void vn_norm(float* v, int cnt);
void vn_print_vector(float *v, int size);



#endif
