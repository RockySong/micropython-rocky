#include "py/obj.h"
#include "fsl_qtmr.h"
#define MICROPY_HW_SRPM0_NAME 'srpm0'
#define MICROPY_HW_SRPM_0 pin_EMC_19    //EMC_19
#define MICROPY_HW_SRPM_0_N pin_EMC_20  //EMC_20

#define MAX_SRPM  1
typedef enum {
	PYB_SRPM_0 = 0, // index 0 is not exist on RT10xx!
} pyb_srpm_t;

typedef struct _srpm_obj_t{
	mp_obj_base_t base;
	TMR_Type* tmr_base;
	qtmr_channel_selection_t idex[2];
	qtmr_primary_count_source_t prisrc;
	qtmr_input_source_t secsrc;
	bool isActive;
	uint16_t pprParam;
	uint16_t interval;
	uint16_t vtInterval;
	int16_t prevCntr;
	volatile float spps;
	const pin_obj_t *pin[2];
} pyb_srpm_obj_t;
void srpm_init0();
extern const mp_obj_type_t pyb_srpm_type;