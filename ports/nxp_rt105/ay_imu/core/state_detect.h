#ifndef __STATE_DETECT_H__
#define __STATE_DETECT_H__

#include <stdint.h>
#include "vector.h"


#define SD_DETECT_LINEAR            (1<<0)
#define SD_DETECT_ROTATION          (1<<1)
#define SD_DETECT_QUASISTATIC       (1<<2)

void sd_proc(v3_t a, v3_t g, v3_t m);
int thr_detect(v3_t a, v3_t b, float thr);
int sd_detect(uint32_t opt);
float sd_get_inclination(void);
float sd_cal_inclination(v3_t a, v3_t m);

float sd_disturb_result(void);


#endif


