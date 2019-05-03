#include "py/obj.h"
#include "fsl_qtmr.h"

//based on qtimer
#define MICROPY_HW_SERVO0_NAME 'servo0'
#define MICROPY_HW_SERVO_0 pin_EMC_19
#define MICROPY_HW_SERVO1_NAME 'servo1'
#define MICROPY_HW_SERVO_1 pin_EMC_20
#define MICROPY_HW_SERVO2_NAME 'servo2'
#define MICROPY_HW_SERVO_2 pin_B1_09
#define MICROPY_HW_SERVO3_NAME 'servo3'
#define MICROPY_HW_SERVO_3 pin_B1_08
#define MICROPY_HW_SERVO_NAME 'servo4'
#define MICROPY_HW_SERVO_4 pin_EMC_21

#define SERVO_NUM  (4)

typedef enum {
	PYB_SERVO_0 = 0, // index 0 is not exist on RT10xx!
    PYB_SERVO_1 = 1,
    PYB_SERVO_2 = 2,
    PYB_SERVO_3 = 3,
	PYB_SERVO_4 = 4,
} pyb_servo_t;

typedef struct _servo_config_obj_t {
	// calibration data, input form
	uint16_t us_min;		// min allowed pulse width. Note: may greater than min pulse width for the servo
	uint16_t us_max;		// max allowed pulse width
	union {
		uint16_t us_centre;	// for non-free-rotate servos: pulse width of center position 
		uint16_t us_stop;	// for free-rotate servos: pulse width to stop
	};
	uint16_t us_angle_90;	// only for non-free-rotate servos: delta pulse width, in 10us, needed for make a 90 degree turn
	uint16_t angle_range;	// only for non-free-rotate servos: the rotate range, defaults to 180
	uint16_t us_speed_100;	// only for free-rotate (360degree) servos, pulse width for 100degree/second. 0=not a free-rotate servo
	// ------------------
	// ------------------
	// generated data from calibration and timer clock, converted to more units
	int32_t qtmrPeriodCnt;		// how many ticks should qtimer run until we elapse a period (20ms)
	int32_t tmrHighRealMin;   // "real" min high cnt for servo.
	int32_t tmrHighRealRange; // "real" range of qtmr cnt for servo.
	int32_t tmrHighAllowedMin;
	int32_t tmrHighAllowedMax;
	float dgrAllowedMin;
	float dgrAllowedMax;
	// ------------------
	// config data for one move
	union {
		float dpsConfig;	// for non-free-rotate servos: default degree per second; for free rotate servos: destination degree per second
		float dpsAccConfig;	// for free-rotate servos: the dps acceleration cconfig
	};
	// ------------------
	// context during moving
	volatile float dps;	// only for non-free-rotate: dps for current move
	volatile int32_t tmrHighFrom;
	volatile int32_t tmrHighNow;
	volatile int32_t tmrHighTo;
	volatile int32_t periodCnt;	// how many periods to complete this move
	volatile int32_t periodNdx;	// how many periods already elapsed	
} servo_config_obj_t;

typedef struct _servo_obj_t{
	mp_obj_base_t base;
	TMR_Type* tmr_base;
	qtmr_channel_selection_t idex;
	IRQn_Type IRQn;
	bool isActive;
	uint32_t inverted;	
	uint32_t freq;
	uint32_t prescale;
	float angle;
	float err;
	const pin_obj_t *pin;
	servo_config_obj_t servo_obj;
} pyb_servo_obj_t;
void servo_init0();
extern const mp_obj_type_t pyb_servo_type;
MP_DECLARE_CONST_FUN_OBJ_2(pyb_servo_set_obj);