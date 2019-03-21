#include <math.h>
#include <string.h>
#include "eular.h"
#include "vector.h"

void eular_identity(eular_t *e)
{
    e->pitch = 0.0F;
    e->roll = 0.0F;
    e->yaw = 0.0F;
}

void quat2angle(q_t *q, eular_t * e, const char *s)
{
    float xz = q->x * q->z;
    float wy = q->w * q->y;
    float yz = q->y * q->z;
    float wx = q->w * q->x;
    float wz = q->w * q->z;
    float xy = q->x * q->y;
    float ww = q->w * q->w;
    float xx = q->x * q->x;
    float yy = q->y * q->y;
    float zz = q->z * q->z;
    
    if(!strcmp(s, "ZYX"))
    {
        e->roll = (float)atan2f(2.0F*(yz + wx), ww - xx - yy + zz); 
        e->pitch = (float)asinf(2*(wy -xz));
        e->yaw = (float)atan2f(2.0F*(wz + xy), ww + xx  - yy - zz);
    }

    e->roll *= RadToDeg;
    e->pitch *= RadToDeg;
    e->yaw *=  RadToDeg;
}

