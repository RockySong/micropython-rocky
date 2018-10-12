// We use the ST Cube HAL library for most hardware peripherals
#include "fsl_common.h"
#include "pin.h"
#include "hal_wrapper.h"

extern const unsigned char mp_hal_status_to_errno_table[4];

NORETURN void mp_hal_raise(HAL_StatusTypeDef status);
void mp_hal_set_interrupt_char(int c); // -1 to disable

// timing functions

#define mp_hal_delay_us_fast(us) mp_hal_delay_us(us)

extern bool mp_hal_ticks_cpu_enabled;
void mp_hal_ticks_cpu_enable(void);
static inline mp_uint_t mp_hal_ticks_cpu(void) {
    if (!mp_hal_ticks_cpu_enabled) {
        mp_hal_ticks_cpu_enable();
    }
    return DWT->CYCCNT;
}

#include "pin.h"

#define MP_HAL_UNIQUE_ID_ADDRESS (0x1ff0f420)
#define MP_HAL_CLEANINVALIDATE_DCACHE(addr, size) (SCB_CleanInvalidateDCache_by_Addr((uint32_t*)((uint32_t)addr & ~0x1f), ((uint32_t)((uint8_t*)addr + size + 0x1f) & ~0x1f) - ((uint32_t)addr & ~0x1f)))
#define MP_HAL_CLEAN_DCACHE(addr, size)                     (SCB_CleanDCache_by_Addr((uint32_t*)((uint32_t)addr & ~0x1f), ((uint32_t)((uint8_t*)addr + size + 0x1f) & ~0x1f) - ((uint32_t)addr & ~0x1f)))


#define MP_HAL_PIN_FMT                  "%q"
#define MP_HAL_PIN_MODE_INPUT           (GPIO_MODE_INPUT)
#define MP_HAL_PIN_MODE_OUTPUT          (GPIO_MODE_OUTPUT_PP)
// #define MP_HAL_PIN_MODE_INV             (GPIO_INVERTER)
// #define MP_HAL_PIN_MODE_DIGITAL         (GPIO_MODE_DIGITAL)
#define MP_HAL_PIN_MODE_OPEN_DRAIN      (GPIO_MODE_OUTPUT_OD)
#define MP_HAL_PIN_MODE_ALT_OPEN_DRAIN  (GPIO_MODE_OUTPUT_OD)
#define MP_HAL_PIN_PULL_NONE             0 // (GPIO_NOPULL)
#define MP_HAL_PIN_PULL_UP               GPIO_PULLUP // (GPIO_PULLUP)
#define MP_HAL_PIN_PULL_DOWN             GPIO_PULLDOWN // (GPIO_PULLDOWN)
#define MP_HAL_PIN_PULL_REPEATER         GPIO_REPEATER // (GPIO_PULLDOWN)


#define mp_hal_pin_obj_t const pin_obj_t*
#define mp_hal_get_pin_obj(o)   pin_find(o)
#define mp_hal_pin_name(p)      ((p)->name)

static inline GPIO_Type * _find_gpio(const pin_obj_t *p){
	GPIO_Type *gps[] = {0, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5,};
	if (p->port > 5)
		while(1);
	return gps[p->port];
}

static inline void mp_hal_pin_high(const pin_obj_t *pPin) {
	GPIO_PinWrite(pPin->gpio, pPin->pin, 1);
	
}

static inline void mp_hal_pin_low(const pin_obj_t *pPin) {
	GPIO_PinWrite(pPin->gpio, pPin->pin, 0);
}

static inline void mp_hal_pin_toggle(const pin_obj_t *pPin)
{
	uint32_t a, pinNdx = pPin->pin;
	a = (0 == GPIO_PinRead(pPin->gpio, pinNdx) );
	GPIO_PinWrite(pPin->gpio, pinNdx, a);
	
}

#define REG_READ32(reg)  (*((volatile uint32_t *)(reg)))
#define REG_WRITE32(reg,val32)  (*((volatile uint32_t *)(reg))) = val32
#define REG_OR32(reg,val32)		(*((volatile uint32_t *)(reg))) |= val32
#define REG_AND32(reg,val32)		(*((volatile uint32_t *)(reg))) &= val32


#define mp_hal_pin_input(p)     mp_hal_pin_config_alt((p), GPIO_MODE_INPUT, AF_FN_GPIO)
#define mp_hal_pin_output(p)    mp_hal_pin_config_alt((p), GPIO_MODE_OUTPUT_PP, AF_FN_GPIO)
#define mp_hal_pin_open_drain(p) mp_hal_pin_config_alt((p), GPIO_MODE_OUTPUT_OD_PUP, AF_FN_GPIO)
#define mp_hal_pin_od_low(p)    mp_hal_pin_low(p)
#define mp_hal_pin_od_high(p)   mp_hal_pin_high(p)
#define mp_hal_pin_read(p)      (GPIO_PinRead(_find_gpio(p), (p)->pin))
#define mp_hal_pin_write(p, v)  do { if (v) { mp_hal_pin_high(p); } else { mp_hal_pin_low(p); } } while (0)

void mp_hal_gpio_clock_enable(uint32_t portNum);
void mp_hal_pin_config(const pin_obj_t *p, const pin_af_obj_t *af, uint32_t alt, uint32_t padCfgVal );
bool mp_hal_pin_config_alt(mp_hal_pin_obj_t pin, uint32_t padCfg,  uint8_t fn);

void mp_hal_ConfigGPIO(const pin_obj_t *p, uint32_t gpioMode, uint32_t isInitialHighForOutput);

