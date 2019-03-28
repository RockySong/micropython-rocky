#include "py/obj.h"
#include "fsl_qtmr.h"
#define MICROPY_HW_RPM0_NAME 'rpm0'
#define MICROPY_HW_RPM_0 pin_EMC_19
#define MICROPY_HW_RPM1_NAME 'rpm1'
#define MICROPY_HW_RPM_1 pin_EMC_20
#define MICROPY_HW_RPM2_NAME 'rpm2'
#define MICROPY_HW_RPM_2 pin_B1_09
#define MICROPY_HW_RPM3_NAME 'rpm3'
#define MICROPY_HW_RPM_3 pin_B1_08


#define MAX_RPM  4
typedef enum {
	PYB_RPM_0 = 0, // index 0 is not exist on RT10xx!
    PYB_RPM_1 = 1,
    PYB_RPM_2 = 2,
    PYB_RPM_3 = 3,
} pyb_rpm_t;
typedef struct _rpm_obj_t{
	mp_obj_base_t base;
	TMR_Type* tmr_base;
	qtmr_channel_selection_t idex;
	bool isActive;
	uint16_t pprParam;
	uint16_t interval;
	uint16_t vtInterval;
	uint16_t prevCntr;
	volatile float pps;
	const pin_obj_t *pin;
} pyb_rpm_obj_t;
void rpm_init0();
extern const mp_obj_type_t pyb_rpm_type;