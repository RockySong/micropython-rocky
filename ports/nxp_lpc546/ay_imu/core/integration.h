#ifndef __INTERGRATION_H__
#define __INTERGRATION_H__

#include "../math/quaternion.h"

void quat_integration_eular_1st(q_t *q, v3_t vg, float t);
void quat_integration_eular_2st(q_t *q, v3_t vg, float t);
void quat_integration_bk(q_t *q, v3_t vg, float deltaT);

#endif

