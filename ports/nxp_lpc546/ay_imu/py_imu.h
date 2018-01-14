#ifndef _PY_IMU_H_
#define _PY_IMU_H_
// python bindings for AlexYang's sensor fusion lib "IMU"

#include "core/fusion.h"
#include "core/integration.h"

typedef enum _enum_fusion_out_t
{
	fusion_out_euler = 0,
	fusion_out_quat = 1,
}enum_fusion_out_t;

typedef union _agm_data_t
{
	struct {
		int16_t v[3];
	};
	struct {
		signed int x;
		signed int y;
		signed int z;
	};
	uint8_t buf[6];
}agm_data_t;

typedef struct _pyb_imu_obj_t {
    mp_obj_base_t base;
	enum_fusion_out_t outMode;
	mp_float_t args[4]; // 0 = scale_a, 1 = scale_g, 2 = scale_m, 3 = delta_ms
}pyb_imu_obj_t;


extern const mp_obj_type_t pyb_imu_type;


#endif

