#include <math.h>
#include <stdio.h>
#include "vector.h"


/* cross product */
v3_t v_cross(v3_t v1, v3_t v2)
{
    v3_t result;
    result.x = v1.y*v2.z - v1.z*v2.y;
    result.y = v1.z*v2.x - v1.x*v2.z;
    result.z = v1.x*v2.y - v1.y*v2.x;
    return result;
}

float v_dot(v3_t v1, v3_t v2)
{
    return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

/* length */
float v_norm(v3_t v)
{
    return sqrt(v_dot(v, v));
}

v3_t v_add(v3_t a, v3_t b)
{
    v3_t result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

v3_t v_subtract(v3_t a, v3_t b)
{
    v3_t result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

void v_normalize(v3_t *v)
{
    float mag;
    mag = 1 / v_norm(*v);
    v->x *= mag;
    v->y *= mag;
    v->z *= mag;
}


void v_set(v3_t *v, float val)
{
    v->x = v->y = v->z = val;
}

v3_t v_scaler(v3_t v, float k)
{
    v.x *= k;
    v.y *= k;
    v.z *= k;
    return v;
}

v3_t v_scaler2(v3_t v, v3_t k)
{
    v.x *= k.x;
    v.y *= k.y;
    v.z *= k.z;
    return v;
}

v3_t v_inv(v3_t v)
{
    v.x = 1 / v.x;
    v.y = 1 / v.y;
    v.z = 1 / v.z;
    return v;
}


void print_vector(v3_t v)
{
    printf("x:%0.3f y:%0.3f z:%0.3f\r\n", v.x, v.y, v.z);
}



float vn_sum(float *v, int cnt)
{
    int i;
    float sum = 0.0F;
    for(i=0; i<cnt; i++)
    {
        sum += v[i];
    }
    return sum;
}

void vn_norm(float* v, int cnt)
{
    float sum = vn_sum(v, cnt);
    int i;
    for(i=0; i<cnt; i++)
    {
        v[i] /= sum;
    }
}

void vn_print_vector(float *v, int size)
{
    int i;
    printf("vn: ");
    for(i=0; i<size; i++)
    {
        printf("%0.3f ", v[i]);
    }
    printf("\r\n");
}
