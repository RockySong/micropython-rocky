#include "py/obj.h"
#include "fsl_pwm.h"
#include "fsl_qtmr.h"
//based on flexpwm
#define MICROPY_HW_DCMC0_NAME 'dcmc0'
#define MICROPY_HW_DCMC_0 pin_EMC_27
#define MICROPY_HW_DCMC_0N pin_EMC_28

#define MICROPY_HW_DCMC1_NAME 'dcmc1'
#define MICROPY_HW_DCMC_1 pin_EMC_29
#define MICROPY_HW_DCMC_1N pin_EMC_30

#define MICROPY_HW_DCMC2_NAME 'dcmc2'
#define MICROPY_HW_DCMC_2 pin_EMC_21
#define MICROPY_HW_DCMC_2N pin_EMC_22


typedef enum {
	PYB_DCMC_0 = 0, // index 0 is not exist on RT10xx!
    PYB_DCMC_1 = 1,
    PYB_DCMC_2 = 2,
} pyb_dcmc_t;
typedef struct _dcmc_obj_t{
	mp_obj_base_t base;
	PWM_Type* pwm_base;
	pwm_submodule_t flexidex;
	pwm_module_control_t control_t;
	float pwm_width;
	uint32_t inverted;	
	uint32_t freq;
	uint32_t prescale;
	float err;
	const pin_obj_t *pin[2];
} pyb_dcmc_obj_t;
void dcmc_init0();
extern const mp_obj_type_t pyb_dcmc_type;