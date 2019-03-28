#include "py/obj.h"
#include "fsl_qtmr.h"
#define MICROPY_HW_PWM0_NAME 'pwm0'
#define MICROPY_HW_PWM_0 pin_EMC_19
#define MICROPY_HW_PWM1_NAME 'pwm1'
#define MICROPY_HW_PWM_1 pin_EMC_20
#define MICROPY_HW_PWM2_NAME 'pwm2'
#define MICROPY_HW_PWM_2 pin_B1_09
#define MICROPY_HW_PWM3_NAME 'pwm3'
#define MICROPY_HW_PWM_3 pin_B1_08
typedef enum {
	PYB_PWM_0 = 0, // index 0 is not exist on RT10xx!
    PYB_PWM_1 = 1,
    PYB_PWM_2 = 2,
    PYB_PWM_3 = 3,
} pyb_pwm_t;
typedef struct _pwm_obj_t{
	mp_obj_base_t base;
	TMR_Type* tmr_base;
	qtmr_channel_selection_t idex;
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