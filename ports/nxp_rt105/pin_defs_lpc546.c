#include "py/obj.h"
#include "pin.h"

// Returns the pin mode. This value returned by this macro should be one of:
// GPIO_MODE_INPUT, GPIO_MODE_OUTPUT_PP, GPIO_MODE_OUTPUT_OD,
// GPIO_MODE_AF_PP, GPIO_MODE_AF_OD, or GPIO_MODE_DIGITAL.

uint32_t pin_get_mode(const pin_obj_t *pin) {
	IOCON_Type *pIOCON = IOCON;
	uint32_t t = pIOCON->PIO[pin->port][pin->pin];

	if (0 == (t & 7)) {
		if (pin->gpio->DIR[pin->port] & 1<<(pin->pin)) {
			t |= GPIO_MODE_OUTPUT_PP;
		}
	}
	return t;
}

// Returns the pin pullup/pulldown. The value returned by this macro should
// be one of GPIO_NOPULL, GPIO_PULLUP, or GPIO_PULLDOWN.

uint32_t pin_get_pull(const pin_obj_t *pin) {
	return pin_get_mode(pin) & (3 << 4);
}

// Returns the af (alternate function) index currently set for a pin.

uint32_t pin_get_af(const pin_obj_t *pin) {
	return pin_get_mode(pin) & (0xF << 0);
}

