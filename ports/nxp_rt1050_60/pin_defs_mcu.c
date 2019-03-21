#include "py/obj.h"
#include "pin.h"
#include "mphalport.h"
// Returns the pin mode. This value returned by this macro should be one of:
// GPIO_MODE_INPUT, GPIO_MODE_OUTPUT_PP, GPIO_MODE_OUTPUT_OD,
// GPIO_MODE_AF_PP, GPIO_MODE_AF_OD, or GPIO_MODE_DIGITAL.


uint32_t pin_get_mode(const pin_obj_t *pin) {
	McuPinCfgReg_t t;
	t.v32 = REG_READ32(pin->cfgReg);
	return t.v32;
}

// Returns the pin pullup/pulldown. The value returned by this macro should
// be one of GPIO_NOPULL, GPIO_PULLUP, or GPIO_PULLDOWN.

uint32_t pin_get_pull(const pin_obj_t *pin) {
	uint32_t t = REG_READ32(pin->cfgReg) & (0x1F << 12);
	return t;
}

// Returns the af (alternate function) index currently set for a pin.

uint32_t pin_get_af(const pin_obj_t *pin) {
	uint32_t t = REG_READ32(pin->afReg);
	uint32_t afNdx = t & 7;
	uint32_t i;
	for (i=0; i<pin->num_af; i++) {
		if (pin->af[i].idx == afNdx) {
			if (0 != pin->af[i].inSelReg) {
				if (REG_READ32(pin->af[i].inSelReg) != pin->af[i].inSelVal) {
					afNdx |= 0x10;	// this means the AF is not selected by 2nd level of muxing (INSEL/DAISY)
				}
			}
			break;
		}
	}
	return afNdx;
}

