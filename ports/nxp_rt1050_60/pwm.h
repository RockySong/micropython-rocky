#include "py/obj.h"
#include "fsl_pwm.h"
#include "fsl_qtmr.h"
//based on qtimer
#define MICROPY_HW_PWM0_NAME 'pwm0'
#define MICROPY_HW_PWM_0 pin_EMC_19
#define MICROPY_HW_PWM1_NAME 'pwm1'
#define MICROPY_HW_PWM_1 pin_EMC_20
#define MICROPY_HW_PWM2_NAME 'pwm2'
#define MICROPY_HW_PWM_2 pin_B1_09
#define MICROPY_HW_PWM3_NAME 'pwm3'
#define MICROPY_HW_PWM_3 pin_B1_08
//based on flexpwm
#define MICROPY_HW_PWM4_NAME 'pwm4'
#define MICROPY_HW_PWM_4 pin_EMC_21
#define MICROPY_HW_PWM5_NAME 'pwm5'
#define MICROPY_HW_PWM_5 pin_EMC_22
#define MICROPY_HW_PWM6_NAME 'pwm6'
#define MICROPY_HW_PWM_6 pin_EMC_30
#define MICROPY_HW_PWM7_NAME 'pwm7'
#define MICROPY_HW_PWM_7 pin_EMC_27
#define MICROPY_HW_PWM8_NAME 'pwm8'
#define MICROPY_HW_PWM_8 pin_EMC_29
#define MICROPY_HW_PWM9_NAME 'pwm9'
#define MICROPY_HW_PWM_9 pin_EMC_28


typedef enum {
	PYB_PWM_0 = 0, // index 0 is not exist on RT10xx!
    PYB_PWM_1 = 1,
    PYB_PWM_2 = 2,
    PYB_PWM_3 = 3,
	PYB_PWM_4 = 4,
	PYB_PWM_5 = 5,
	PYB_PWM_6 = 6,
	PYB_PWM_7 = 7,
	PYB_PWM_8 = 8,
	PYB_PWM_9 = 9,
} pyb_pwm_t;
typedef struct _pwm_obj_t{
	mp_obj_base_t base;
	TMR_Type* tmr_base;
	PWM_Type* pwm_base;
	qtmr_channel_selection_t idex;
	pwm_submodule_t flexidex;
	pwm_channels_t channel;
	pwm_module_control_t control_t;
	float pwm_width;
	uint32_t inverted;	
	uint32_t freq;
	uint32_t prescale;
	float angle;
	float err;
	const pin_obj_t *pin;
} pyb_pwm_obj_t;
void pwm_init0();
extern const mp_obj_type_t pyb_pwm_type;