/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * Original template from ST Cube library.  See below for header.
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

/**
  ******************************************************************************
  * @file    Templates/Src/stm32f4xx_it.c
  * @author  MCD Application Team
  * @version V1.0.1
  * @date    26-February-2014
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and
  *          peripherals interrupt service routine.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

#include <stdio.h>

#include "py/mpstate.h"
#include "py/obj.h"
#include "py/mphal.h"
#include "pendsv.h"
#include "irq.h"
#include "pybthread.h"
#include "gccollect.h"
#include "extint.h"
#include "timer.h"
#include "uart.h"
#include "storage.h"
#include "can.h"
#include "dma.h"
#include "i2c.h"
#include "usb_app.h"

extern void __fatal_error(const char*);
// extern PCD_HandleTypeDef pcd_fs_handle;
// extern PCD_HandleTypeDef pcd_hs_handle;

/******************************************************************************/
/*            Cortex-M4 Processor Exceptions Handlers                         */
/******************************************************************************/

// Set the following to 1 to get some more information on the Hard Fault
// More information about decoding the fault registers can be found here:
// http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.dui0646a/Cihdjcfc.html

STATIC char *fmt_hex(uint32_t val, char *buf) {
    const char *hexDig = "0123456789abcdef";

    buf[0] = hexDig[(val >> 28) & 0x0f];
    buf[1] = hexDig[(val >> 24) & 0x0f];
    buf[2] = hexDig[(val >> 20) & 0x0f];
    buf[3] = hexDig[(val >> 16) & 0x0f];
    buf[4] = hexDig[(val >> 12) & 0x0f];
    buf[5] = hexDig[(val >>  8) & 0x0f];
    buf[6] = hexDig[(val >>  4) & 0x0f];
    buf[7] = hexDig[(val >>  0) & 0x0f];
    buf[8] = '\0';

    return buf;
}

STATIC void print_reg(const char *label, uint32_t val) {
    char hexStr[9];

    mp_hal_stdout_tx_str(label);
    mp_hal_stdout_tx_str(fmt_hex(val, hexStr));
    mp_hal_stdout_tx_str("\r\n");
}

STATIC void print_hex_hex(const char *label, uint32_t val1, uint32_t val2) {
    char hex_str[9];
    mp_hal_stdout_tx_str(label);
    mp_hal_stdout_tx_str(fmt_hex(val1, hex_str));
    mp_hal_stdout_tx_str("  ");
    mp_hal_stdout_tx_str(fmt_hex(val2, hex_str));
    mp_hal_stdout_tx_str("\r\n");
}

// The ARMv7M Architecture manual (section B.1.5.6) says that upon entry
// to an exception, that the registers will be in the following order on the
// // stack: R0, R1, R2, R3, R12, LR, PC, XPSR

typedef struct {
    uint32_t    r0, r1, r2, r3, r12, lr, pc, xpsr;
} ExceptionRegisters_t;

int pyb_hard_fault_debug = 1;

#if defined(__CC_ARM) || defined(__ICCARM__)
#define _ESTACK _estack
#define _RAM_START _ram_start
#define _RAM_END _ram_end
#define _HEAP_END _heap_end
#else
extern uint32_t _ram_start, _ram_end, _estack, _heap_end, _heap_start;
#define _ESTACK &_estack
#define _RAM_START &_ram_start
#define _RAM_END &_ram_end
#define _HEAP_END &_heap_end
#endif

uint16_t _Fault_UnalignedLDRH(const uint8_t* pAddr) {
	uint32_t v1, v2;
	v1 = *pAddr++;
	v2 = *pAddr;
	v1 |= v2 << 8;
	return v1;
}

void _Fault_UnalignedLSTRH(uint8_t* pAddr, uint16_t val16) {
	*pAddr++ = (uint8_t)(val16 & 0xFF);
	*pAddr++ = (uint8_t)(val16 & 0xFF);
}


void HardFault_C_Handler(ExceptionRegisters_t *regs, uint32_t *pXtraRegs) {
    if (!pyb_hard_fault_debug) {
        NVIC_SystemReset();
    }

	/* rocky ignore
    // We need to disable the USB so it doesn't try to write data out on
    // the VCP and then block indefinitely waiting for the buffer to drain.
    pyb_usb_flags = 0;
	*/

    mp_hal_stdout_tx_str("HardFault\r\n");

    print_reg("R0    ", regs->r0);
    print_reg("R1    ", regs->r1);
    print_reg("R2    ", regs->r2);
    print_reg("R3    ", regs->r3);
    print_reg("R12   ", regs->r12);
    print_reg("SP    ", (uint32_t)regs);
    print_reg("LR    ", regs->lr);
    print_reg("PC    ", regs->pc);
    print_reg("XPSR  ", regs->xpsr);
	
	print_reg("R4    ", pXtraRegs[7]);
	print_reg("R5    ", pXtraRegs[6]);
	print_reg("R6    ", pXtraRegs[5]);
	print_reg("R7    ", pXtraRegs[4]);
	print_reg("R8    ", pXtraRegs[3]);
	print_reg("R9    ", pXtraRegs[2]);
	print_reg("R10   ", pXtraRegs[1]);
	print_reg("R11   ", pXtraRegs[0]);


    uint32_t cfsr = SCB->CFSR;

    print_reg("HFSR  ", SCB->HFSR);
    print_reg("CFSR  ", cfsr);
    if (cfsr & 0x80) {
        print_reg("MMFAR ", SCB->MMFAR);
    }
    if (cfsr & 0x8000) {
        print_reg("BFAR  ", SCB->BFAR);
    }

    if ((void*)_RAM_START <= (void*)regs && (void*)regs < (void*)_RAM_END) {
        mp_hal_stdout_tx_str("Stack:\r\n");
        uint32_t *stack_top = (uint32_t*) _ESTACK;
        if ((void*)regs < (void*)_HEAP_END) {
            // stack not in static stack area so limit the amount we print
            stack_top = (uint32_t*)regs + 32;
        }
        for (uint32_t *sp = (uint32_t*)regs; sp < stack_top; ++sp) {
            print_hex_hex("  ", (uint32_t)sp, *sp);
        }
    }

    /* Go to infinite loop when Hard Fault exception occurs */
    __fatal_error("HardFault");
}

// Naked functions have no compiler generated gunk, so are the best thing to
// use for asm functions.
#ifdef __CC_ARM
__asm void HardFault_Handler(void) {

    // From the ARMv7M Architecture Reference Manual, section B.1.5.6
    // on entry to the Exception, the LR register contains, amongst other
    // things, the value of CONTROL.SPSEL. This can be found in bit 3.
    //
    // If CONTROL.SPSEL is 0, then the exception was stacked up using the
    // main stack pointer (aka MSP). If CONTROL.SPSEL is 1, then the exception
    // was stacked up using the process stack pointer (aka PSP).
     IMPORT HardFault_C_Handler
     tst lr, #4             // Test Bit 3 to see which stack pointer we should use.
     ite eq                 // Tell the assembler that the nest 2 instructions are if-then-else
     mrseq r0, msp          // Make R0 point to main stack pointer
     mrsne r0, psp          // Make R0 point to process stack pointer
	 push	{r4-r11}
	 mov	r1,	sp
     b HardFault_C_Handler  // Off to C land
	 pop	{r4-r11}
	 bx		lr
}
#else
__attribute__((naked))
void HardFault_Handler(void) {

    // From the ARMv7M Architecture Reference Manual, section B.1.5.6
    // on entry to the Exception, the LR register contains, amongst other
    // things, the value of CONTROL.SPSEL. This can be found in bit 3.
    //
    // If CONTROL.SPSEL is 0, then the exception was stacked up using the
    // main stack pointer (aka MSP). If CONTROL.SPSEL is 1, then the exception
    // was stacked up using the process stack pointer (aka PSP).

    __asm volatile(
    " tst lr, #4    \n"         // Test Bit 3 to see which stack pointer we should use.
    " ite eq        \n"         // Tell the assembler that the nest 2 instructions are if-then-else
    " mrseq r0, msp \n"         // Make R0 point to main stack pointer
    " mrsne r0, psp \n"         // Make R0 point to process stack pointer
    " b HardFault_C_Handler \n" // Off to C land
    );
}
#endif
/**
  * @brief   This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void) {
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void) {
    /* Go to infinite loop when Memory Manage exception occurs */
    while (1) {
        __fatal_error("MemManage");
    }
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void) {
    /* Go to infinite loop when Bus Fault exception occurs */
    while (1) {
        __fatal_error("BusFault");
    }
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void) {
    /* Go to infinite loop when Usage Fault exception occurs */
    while (1) {
        __fatal_error("UsageFault");
    }
}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void) {
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void) {
}

/**
  * @brief  This function handles PendSVC exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void) {
    pendsv_isr_handler();
}
#include "storage.h"
/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
extern void dma_idle_handler(uint32_t tick);
extern void SDMMC_Tick_Handler(void);
void SysTick_Handler(void) {
    // Instead of calling HAL_IncTick we do the increment here of the counter.
    // This is purely for efficiency, since SysTick is called 1000 times per
    // second at the highest interrupt priority.
    // Note: we don't need uwTick to be declared volatile here because this is
    // the only place where it can be modified, and the code is more efficient
    // without the volatile specifier.
    extern uint32_t uwTick;
    uwTick += 1;
	SDMMC_Tick_Handler();
    // Read the systick control regster. This has the side effect of clearing
    // the COUNTFLAG bit, which makes the logic in mp_hal_ticks_us
    // work properly.
    SysTick->CTRL;

    // Right now we have the storage and DMA controllers to process during
    // this interrupt and we use custom dispatch handlers.  If this needs to
    // be generalised in the future then a dispatch table can be used as
    // follows: ((void(*)(void))(systick_dispatch[uwTick & 0xf]))();

    if (STORAGE_IDLE_TICK(uwTick)) {
        TRIGGER_FLASH_IRQ();   // borrow UTICK IRQ to handle flash cache flush
    }

	/* rocky ignore
    if (DMA_IDLE_ENABLED() && DMA_IDLE_TICK(uwTick)) {
        dma_idle_handler(uwTick);
    }
	*/

    #if MICROPY_PY_THREAD
    if (pyb_thread_enabled) {
        if (pyb_thread_cur->timeslice == 0) {
            if (pyb_thread_cur->run_next != pyb_thread_cur) {
                SCB->ICSR = SCB_ICSR_PENDSVSET_Msk;
            }
        } else {
            --pyb_thread_cur->timeslice;
        }
    }
    #endif
}

// Handle a flash (erase/program) interrupt.
void Reserved168_IRQHandler(void) {
    IRQ_ENTER(Reserved168_IRQn);
    // This calls the real flash IRQ handler, if needed
    /*
    uint32_t flash_cr = FLASH->CR;
    if ((flash_cr & FLASH_IT_EOP) || (flash_cr & FLASH_IT_ERR)) {
        HAL_FLASH_IRQHandler();
    }
    */
    // This call the storage IRQ handler, to check if the flash cache needs flushing
    storage_irq_handler();
    IRQ_EXIT(Reserved168_IRQn);
}


