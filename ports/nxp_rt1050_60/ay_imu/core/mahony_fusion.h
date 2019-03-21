#ifndef __MAHONY_FUSION_H__
#define __MAHONY_FUSION_H__

#include "vector.h"

void mahony_ahrs_update(q_t *q, v3_t g, v3_t a, v3_t m, float deltaT);

#endif
