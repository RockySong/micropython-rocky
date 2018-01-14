/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <string.h>

#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "lib/oofatfs/ff.h"
#include "extmod/vfs_fat.h"
#include "fsl_debug_console.h"
#include "fsl_host.h"
#include "fsl_card.h"

#include "sdcard.h"
#include "pin.h"
#include "genhdr/pins.h"
#include "bufhelper.h"
#include "dma.h"
#include "irq.h"

#include "composite.h"	// for "USB_DEVICE_INTERRUPT_PRIORITY" macro

#undef usb_echo
#define usb_echo(...) mp_printf(MP_PYTHON_PRINTER, __VA_ARGS__)

#if MICROPY_HW_HAS_SDCARD
/*
#if defined(MCU_SERIES_F7) || defined(MCU_SERIES_L4)

// The F7 has 2 SDMMC units but at the moment we only support using one of them in
// a given build.  If a boards config file defines MICROPY_HW_SDMMC2_CK then SDMMC2
// is used, otherwise SDMMC1 is used.

#if defined(MICROPY_HW_SDMMC2_CK)
#define SDIO SDMMC2
#define SDMMC_CLK_ENABLE() __HAL_RCC_SDMMC2_CLK_ENABLE()
#define SDMMC_CLK_DISABLE() __HAL_RCC_SDMMC2_CLK_DISABLE()
#define SDMMC_IRQn SDMMC2_IRQn
#define SDMMC_TX_DMA dma_SDMMC_2_TX
#define SDMMC_RX_DMA dma_SDMMC_2_RX
#else
#define SDIO SDMMC1
#define SDMMC_CLK_ENABLE() __HAL_RCC_SDMMC1_CLK_ENABLE()
#define SDMMC_CLK_DISABLE() __HAL_RCC_SDMMC1_CLK_DISABLE()
#define SDMMC_IRQn SDMMC1_IRQn
#define SDMMC_TX_DMA dma_SDIO_0_TX
#define SDMMC_RX_DMA dma_SDIO_0_RX
#endif

// The F7 & L4 series calls the peripheral SDMMC rather than SDIO, so provide some
// #defines for backwards compatability.

#define SDIO_CLOCK_EDGE_RISING              SDMMC_CLOCK_EDGE_RISING
#define SDIO_CLOCK_EDGE_FALLING             SDMMC_CLOCK_EDGE_FALLING

#define SDIO_CLOCK_BYPASS_DISABLE           SDMMC_CLOCK_BYPASS_DISABLE
#define SDIO_CLOCK_BYPASS_ENABLE            SDMMC_CLOCK_BYPASS_ENABLE

#define SDIO_CLOCK_POWER_SAVE_DISABLE       SDMMC_CLOCK_POWER_SAVE_DISABLE
#define SDIO_CLOCK_POWER_SAVE_ENABLE        SDMMC_CLOCK_POWER_SAVE_ENABLE

#define SDIO_BUS_WIDE_1B                    SDMMC_BUS_WIDE_1B
#define SDIO_BUS_WIDE_4B                    SDMMC_BUS_WIDE_4B
#define SDIO_BUS_WIDE_8B                    SDMMC_BUS_WIDE_8B

#define SDIO_HARDWARE_FLOW_CONTROL_DISABLE  SDMMC_HARDWARE_FLOW_CONTROL_DISABLE
#define SDIO_HARDWARE_FLOW_CONTROL_ENABLE   SDMMC_HARDWARE_FLOW_CONTROL_ENABLE

#define SDIO_TRANSFER_CLK_DIV               SDMMC_TRANSFER_CLK_DIV

#else

// These are definitions for F4 MCUs so there is a common macro across all MCUs.

#define SDMMC_CLK_ENABLE() __SDIO_CLK_ENABLE()
#define SDMMC_CLK_DISABLE() __SDIO_CLK_DISABLE()
#define SDMMC_IRQn SDIO_IRQn
#define SDMMC_TX_DMA dma_SDIO_0_TX
#define SDMMC_RX_DMA dma_SDIO_0_RX

#endif
*/
// TODO: Since SDIO is fundamentally half-duplex, we really only need to
//       tie up one DMA channel. However, the HAL DMA API doesn't
// seem to provide a convenient way to change the direction. I believe that
// its as simple as changing the CR register and the Init.Direction field
// and make DMA_SetConfig public.

// TODO: I think that as an optimization, we can allocate these dynamically
//       if an sd card is detected. This will save approx 260 bytes of RAM
//       when no sdcard was being used.
// static SD_HandleTypeDef g_sd;
// static DMA_HandleTypeDef sd_rx_dma, sd_tx_dma;

/* State in Card driver. */
typedef sd_card_t SD_HandleTypeDef;
sd_card_t g_sd;

#define IOCON_PIO_DIGITAL_EN        0x0100u   /*!< Enables digital function */
#define IOCON_PIO_FUNC1               0x01u   /*!< Selects pin function 1 */
#define IOCON_PIO_FUNC2               0x02u   /*!< Selects pin function 2 */
#define IOCON_PIO_FUNC7               0x07u   /*!< Selects pin function 7 */
#define IOCON_PIO_INPFILT_OFF       0x0200u   /*!< Input filter disabled */
#define IOCON_PIO_INV_DI              0x00u   /*!< Input function is not inverted */
#define IOCON_PIO_MODE_INACT          0x00u   /*!< No addition pin function */
#define IOCON_PIO_MODE_PULLUP         0x20u   /*!< Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI        0x00u   /*!< Open drain is disabled */
#define IOCON_PIO_SLEW_FAST         0x0400u   /*!< Fast mode, slew rate control is disabled */
#define IOCON_PIO_SLEW_STANDARD       0x00u   /*!< Standard mode, output slew rate control is enabled */
#define PIN3_IDX                         3u   /*!< Pin number for pin 3 in a port 2 */
#define PIN4_IDX                         4u   /*!< Pin number for pin 4 in a port 2 */
#define PIN5_IDX                         5u   /*!< Pin number for pin 5 in a port 2 */
#define PIN6_IDX                         6u   /*!< Pin number for pin 6 in a port 2 */
#define PIN7_IDX                         7u   /*!< Pin number for pin 7 in a port 2 */
#define PIN8_IDX                         8u   /*!< Pin number for pin 8 in a port 2 */
#define PIN9_IDX                         9u   /*!< Pin number for pin 9 in a port 2 */
#define PIN10_IDX                       10u   /*!< Pin number for pin 10 in a port 2 */
#define PIN15_IDX                       15u   /*!< Pin number for pin 15 in a port 3 */
#define PIN22_IDX                       22u   /*!< Pin number for pin 22 in a port 0 */
#define PIN27_IDX                       27u   /*!< Pin number for pin 27 in a port 1 */
#define PIN28_IDX                       28u   /*!< Pin number for pin 28 in a port 1 */
#define PIN29_IDX                       29u   /*!< Pin number for pin 29 in a port 0 */
#define PIN30_IDX                       30u   /*!< Pin number for pin 30 in a port 0 */
#define PORT0_IDX                        0u   /*!< Port index */
#define PORT1_IDX                        1u   /*!< Port index */
#define PORT2_IDX                        2u   /*!< Port index */
#define PORT3_IDX                        3u   /*!< Port index */

void _sdcard_pin_init(void)
{
	const uint32_t port1_pin27_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_D(4) */
	  IOCON_PIO_MODE_PULLUP |								   /* Selects pull-up function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_STANDARD | 							   /* Standard mode, output slew rate control is enabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT1_IDX, PIN27_IDX, port1_pin27_config); /* PORT1 PIN27 (coords: F10) is configured as SD_D(4) */
	const uint32_t port1_pin28_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_D(5) */
	  IOCON_PIO_MODE_PULLUP |								   /* Selects pull-up function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_STANDARD | 							   /* Standard mode, output slew rate control is enabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT1_IDX, PIN28_IDX, port1_pin28_config); /* PORT1 PIN28 (coords: E12) is configured as SD_D(5) */
	const uint32_t port1_pin29_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_D(6) */
	  IOCON_PIO_MODE_PULLUP |								   /* Selects pull-up function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_STANDARD | 							   /* Standard mode, output slew rate control is enabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT1_IDX, PIN29_IDX, port1_pin29_config); /* PORT1 PIN29 (coords: C11) is configured as SD_D(6) */
	const uint32_t port1_pin30_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_D(7) */
	  IOCON_PIO_MODE_PULLUP |								   /* Selects pull-up function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_STANDARD | 							   /* Standard mode, output slew rate control is enabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT1_IDX, PIN30_IDX, port1_pin30_config); /* PORT1 PIN30 (coords: A8) is configured as SD_D(7) */
	const uint32_t port2_pin10_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_CARD_DET_N */
	  IOCON_PIO_MODE_INACT |								   /* No addition pin function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_STANDARD | 							   /* Standard mode, output slew rate control is enabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT2_IDX, PIN10_IDX, port2_pin10_config); /* PORT2 PIN10 (coords: P1) is configured as SD_CARD_DET_N */
	const uint32_t port2_pin3_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_CLK */
	  IOCON_PIO_MODE_INACT |								   /* No addition pin function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_FAST | 								   /* Fast mode, slew rate control is disabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT2_IDX, PIN3_IDX, port2_pin3_config); /* PORT2 PIN3 (coords: B1) is configured as SD_CLK */
	const uint32_t port2_pin4_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_CMD */
	  IOCON_PIO_MODE_INACT |								   /* No addition pin function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_FAST | 								   /* Fast mode, slew rate control is disabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT2_IDX, PIN4_IDX, port2_pin4_config); /* PORT2 PIN4 (coords: D3) is configured as SD_CMD */
	const uint32_t port2_pin5_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_POW_EN */
	  IOCON_PIO_MODE_INACT |								   /* No addition pin function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_STANDARD | 							   /* Standard mode, output slew rate control is enabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT2_IDX, PIN5_IDX, port2_pin5_config); /* PORT2 PIN5 (coords: C1) is configured as SD_POW_EN */
	const uint32_t port2_pin6_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_D(0) */
	  IOCON_PIO_MODE_INACT |								   /* No addition pin function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_FAST | 								   /* Fast mode, slew rate control is disabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT2_IDX, PIN6_IDX, port2_pin6_config); /* PORT2 PIN6 (coords: F3) is configured as SD_D(0) */
	const uint32_t port2_pin7_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_D(1) */
	  IOCON_PIO_MODE_INACT |								   /* No addition pin function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_FAST | 								   /* Fast mode, slew rate control is disabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT2_IDX, PIN7_IDX, port2_pin7_config); /* PORT2 PIN7 (coords: J2) is configured as SD_D(1) */
	const uint32_t port2_pin8_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_D(2) */
	  IOCON_PIO_MODE_INACT |								   /* No addition pin function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_FAST | 								   /* Fast mode, slew rate control is disabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT2_IDX, PIN8_IDX, port2_pin8_config); /* PORT2 PIN8 (coords: F4) is configured as SD_D(2) */
	const uint32_t port2_pin9_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_D(3) */
	  IOCON_PIO_MODE_INACT |								   /* No addition pin function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_FAST | 								   /* Fast mode, slew rate control is disabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT2_IDX, PIN9_IDX, port2_pin9_config); /* PORT2 PIN9 (coords: K2) is configured as SD_D(3) */
	const uint32_t port3_pin15_config = (
	  IOCON_PIO_FUNC2 | 									   /* Pin is configured as SD_WR_PRT */
	  IOCON_PIO_MODE_INACT |								   /* No addition pin function */
	  IOCON_PIO_INV_DI |									   /* Input function is not inverted */
	  IOCON_PIO_DIGITAL_EN |								   /* Enables digital function */
	  IOCON_PIO_INPFILT_OFF |								   /* Input filter disabled */
	  IOCON_PIO_SLEW_STANDARD | 							   /* Standard mode, output slew rate control is enabled */
	  IOCON_PIO_OPENDRAIN_DI								   /* Open drain is disabled */
	);
	IOCON_PinMuxSet(IOCON, PORT3_IDX, PIN15_IDX, port3_pin15_config); /* PORT3 PIN15 (coords: D2) is configured as SD_WR_PRT */

}

status_t sdcard_init(void) {
    // invalidate the g_sd
    g_sd.isHostReady = 0;
	_sdcard_pin_init();
        /* attach main clock to SDIF */
    CLOCK_AttachClk(BOARD_SDIF_CLK_ATTACH);

    /* need call this function to clear the halt bit in clock divider register */
    CLOCK_SetClkDiv(kCLOCK_DivSdioClk, 2U, true);


    status_t error = kStatus_Success;

    NVIC_SetPriority(SD_HOST_IRQ, (USB_DEVICE_INTERRUPT_PRIORITY - 1U));
    g_sd.host.base = SD_HOST_BASEADDR;
    g_sd.host.sourceClock_Hz = SD_HOST_CLK_FREQ;

    /* Init card. */
    if (SD_Init(&g_sd))
    {
        mp_print_str(MP_PYTHON_PRINTER, "\n SD card init failed \n");
        error = kStatus_Fail;
    } else {
		
    }

    return error;
}

status_t sdcard_deinit(void)
{
	SD_Deinit(&g_sd);
	return kStatus_Success;
}

void HAL_SD_MspInit(SD_HandleTypeDef *hsd) {
	// todo: low level init
}

void HAL_SD_MspDeInit(SD_HandleTypeDef *hsd) {
	// todo: low level deinit
}

bool sdcard_is_present(void) {
	if (CardInsertDetect(g_sd.host.base) == kStatus_Success && g_sd.isHostReady)
		return 1;
	return 0;}

bool sdcard_power_on(void) {
    if (!sdcard_is_present()) {
        return false;
    }
    if (g_sd.isHostReady) {
        return true;
    }
	if (sdcard_init() == kStatus_Success)
		return 1;
	sdcard_deinit();
    return 0;
}

void sdcard_power_off(void) {
    if (!g_sd.isHostReady) {
        return;
    }
    SD_Deinit(&g_sd);
}

uint32_t sdcard_get_lba_count(void)
{
	return g_sd.blockCount;
}

uint64_t sdcard_get_capacity_in_bytes(void) {
    if (g_sd.isHostReady == NULL) {
        return 0;
    }
	return (uint64_t)g_sd.blockCount * g_sd.blockSize;
}

__STATIC_INLINE uint32_t MyNVIC_GetEnabledIRQ(IRQn_Type IRQn)
{
  return((uint32_t)(((NVIC->ISER[(((uint32_t)(int32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
}

mp_uint_t sdcard_read_blocks(uint8_t *dest, uint32_t block_num, uint32_t num_blocks) {
    // check that SD card is initialised
    status_t ret;
    if (g_sd.isHostReady == NULL) {
        return kStatus_Fail;
    }
	uint32_t usbIrqEn = MyNVIC_GetEnabledIRQ(USB0_IRQn);
	if (usbIrqEn)
		NVIC_DisableIRQ(USB0_IRQn);
	
	ret = SD_ReadBlocks(&g_sd, dest, block_num, num_blocks);
	if (usbIrqEn)
		NVIC_EnableIRQ(USB0_IRQn);
    return ret;
}

mp_uint_t sdcard_write_blocks(const uint8_t *src, uint32_t block_num, uint32_t num_blocks) {
    // check that SD card is initialised
    // check that SD card is initialised
    status_t ret;
    if (g_sd.isHostReady == NULL) {
        return kStatus_Fail;
    }
	uint32_t usbIrqEn = MyNVIC_GetEnabledIRQ(USB0_IRQn);
	if (usbIrqEn)
		NVIC_DisableIRQ(USB0_IRQn);
	
	ret = SD_WriteBlocks(&g_sd, src, block_num, num_blocks);
	if (usbIrqEn)
		NVIC_EnableIRQ(USB0_IRQn);
    return ret;
}

/******************************************************************************/
// Micro Python bindings
//
// Expose the SD card as an object with the block protocol.

// there is a singleton SDCard object
const mp_obj_base_t pyb_sdcard_obj = {&pyb_sdcard_type};

STATIC mp_obj_t pyb_sdcard_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    // check arguments
    mp_arg_check_num(n_args, n_kw, 0, 0, false);

    // return singleton object
    return (mp_obj_t)&pyb_sdcard_obj;
}

STATIC mp_obj_t sd_present(mp_obj_t self) {
    return mp_obj_new_bool(sdcard_is_present());
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(sd_present_obj, sd_present);

STATIC mp_obj_t sd_power(mp_obj_t self, mp_obj_t state) {
    bool result;
    if (mp_obj_is_true(state)) {
        result = sdcard_power_on();
    } else {
        sdcard_power_off();
        result = true;
    }
    return mp_obj_new_bool(result);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(sd_power_obj, sd_power);

STATIC mp_obj_t sd_info(mp_obj_t self) {
    if (g_sd.isHostReady == NULL || CardInsertDetect(g_sd.host.base) == NULL) {
        return mp_const_none;
    }
    // cardinfo.SD_csd and cardinfo.SD_cid have lots of info but we don't use them
    mp_obj_t tuple[3] = {
        mp_obj_new_int_from_ull(g_sd.blockCount * g_sd.blockSize),
        mp_obj_new_int_from_uint(g_sd.blockSize),
        mp_obj_new_int(g_sd.busClock_Hz / 1000),
    };
    return mp_obj_new_tuple(3, tuple);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(sd_info_obj, sd_info);

// now obsolete, kept for backwards compatibility
STATIC mp_obj_t sd_read(mp_obj_t self, mp_obj_t block_num) {
    uint8_t *dest = m_new(uint8_t, SDCARD_BLOCK_SIZE);
    mp_uint_t ret = sdcard_read_blocks(dest, mp_obj_get_int(block_num), 1);

    if (ret != 0) {
        m_del(uint8_t, dest, SDCARD_BLOCK_SIZE);
        nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_Exception, "sdcard_read_blocks failed [%u]", ret));
    }

    return mp_obj_new_bytearray_by_ref(SDCARD_BLOCK_SIZE, dest);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(sd_read_obj, sd_read);

// now obsolete, kept for backwards compatibility
STATIC mp_obj_t sd_write(mp_obj_t self, mp_obj_t block_num, mp_obj_t data) {
    mp_buffer_info_t bufinfo;
    mp_get_buffer_raise(data, &bufinfo, MP_BUFFER_READ);
    if (bufinfo.len % SDCARD_BLOCK_SIZE != 0) {
        nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "writes must be a multiple of %d bytes", SDCARD_BLOCK_SIZE));
    }

    mp_uint_t ret = sdcard_write_blocks(bufinfo.buf, mp_obj_get_int(block_num), bufinfo.len / SDCARD_BLOCK_SIZE);

    if (ret != 0) {
        nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_Exception, "sdcard_write_blocks failed [%u]", ret));
    }

    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(sd_write_obj, sd_write);

STATIC mp_obj_t pyb_sdcard_readblocks(mp_obj_t self, mp_obj_t block_num, mp_obj_t buf) {
    mp_buffer_info_t bufinfo;
    mp_get_buffer_raise(buf, &bufinfo, MP_BUFFER_WRITE);
    mp_uint_t ret = sdcard_read_blocks(bufinfo.buf, mp_obj_get_int(block_num), bufinfo.len / SDCARD_BLOCK_SIZE);
    return mp_obj_new_bool(ret == 0);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(pyb_sdcard_readblocks_obj, pyb_sdcard_readblocks);

STATIC mp_obj_t pyb_sdcard_writeblocks(mp_obj_t self, mp_obj_t block_num, mp_obj_t buf) {
    mp_buffer_info_t bufinfo;
    mp_get_buffer_raise(buf, &bufinfo, MP_BUFFER_READ);
    mp_uint_t ret = sdcard_write_blocks(bufinfo.buf, mp_obj_get_int(block_num), bufinfo.len / SDCARD_BLOCK_SIZE);
    return mp_obj_new_bool(ret == 0);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(pyb_sdcard_writeblocks_obj, pyb_sdcard_writeblocks);

STATIC mp_obj_t pyb_sdcard_ioctl(mp_obj_t self, mp_obj_t cmd_in, mp_obj_t arg_in) {
    mp_int_t cmd = mp_obj_get_int(cmd_in);
    switch (cmd) {
        case BP_IOCTL_INIT:
            if (!sdcard_power_on()) {
                return MP_OBJ_NEW_SMALL_INT(-1); // error
            }
            return MP_OBJ_NEW_SMALL_INT(0); // success

        case BP_IOCTL_DEINIT:
            sdcard_power_off();
            return MP_OBJ_NEW_SMALL_INT(0); // success

        case BP_IOCTL_SYNC:
            // nothing to do
            return MP_OBJ_NEW_SMALL_INT(0); // success

        case BP_IOCTL_SEC_COUNT:
            return MP_OBJ_NEW_SMALL_INT(0); // TODO

        case BP_IOCTL_SEC_SIZE:
            return MP_OBJ_NEW_SMALL_INT(SDCARD_BLOCK_SIZE);

        default: // unknown command
            return MP_OBJ_NEW_SMALL_INT(-1); // error
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(pyb_sdcard_ioctl_obj, pyb_sdcard_ioctl);

STATIC const mp_rom_map_elem_t pyb_sdcard_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_present), MP_ROM_PTR(&sd_present_obj) },
    { MP_ROM_QSTR(MP_QSTR_power), MP_ROM_PTR(&sd_power_obj) },
    { MP_ROM_QSTR(MP_QSTR_info), MP_ROM_PTR(&sd_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_read), MP_ROM_PTR(&sd_read_obj) },
    { MP_ROM_QSTR(MP_QSTR_write), MP_ROM_PTR(&sd_write_obj) },
    // block device protocol
    { MP_ROM_QSTR(MP_QSTR_readblocks), MP_ROM_PTR(&pyb_sdcard_readblocks_obj) },
    { MP_ROM_QSTR(MP_QSTR_writeblocks), MP_ROM_PTR(&pyb_sdcard_writeblocks_obj) },
    { MP_ROM_QSTR(MP_QSTR_ioctl), MP_ROM_PTR(&pyb_sdcard_ioctl_obj) },
};

STATIC MP_DEFINE_CONST_DICT(pyb_sdcard_locals_dict, pyb_sdcard_locals_dict_table);

const mp_obj_type_t pyb_sdcard_type = {
    { &mp_type_type },
    .name = MP_QSTR_SDCard,
    .make_new = pyb_sdcard_make_new,
    .locals_dict = (mp_obj_dict_t*)&pyb_sdcard_locals_dict,
};

void sdcard_init_vfs(fs_user_mount_t *vfs, int part) {
    vfs->base.type = &mp_fat_vfs_type;
    vfs->flags |= FSUSER_NATIVE | FSUSER_HAVE_IOCTL;
    vfs->fatfs.drv = vfs;
    vfs->fatfs.part = part;
    vfs->readblocks[0] = (mp_obj_t)&pyb_sdcard_readblocks_obj;
    vfs->readblocks[1] = (mp_obj_t)&pyb_sdcard_obj;
    vfs->readblocks[2] = (mp_obj_t)sdcard_read_blocks; // native version
    vfs->writeblocks[0] = (mp_obj_t)&pyb_sdcard_writeblocks_obj;
    vfs->writeblocks[1] = (mp_obj_t)&pyb_sdcard_obj;
    vfs->writeblocks[2] = (mp_obj_t)sdcard_write_blocks; // native version
    vfs->u.ioctl[0] = (mp_obj_t)&pyb_sdcard_ioctl_obj;
    vfs->u.ioctl[1] = (mp_obj_t)&pyb_sdcard_obj;
}

#endif // MICROPY_HW_HAS_SDCARD
