#ifndef __EULAR_H__
#define __EULAR_H__

#include <quaternion.h>

#include <stdint.h>
#include <stdbool.h>


typedef struct
{
    float pitch;    /* in degree */
    float roll;
    float yaw;
}eular_t;


void eular_identity(eular_t *e);
void quat2angle(q_t *q, eular_t * e, const char *s);

#endif

