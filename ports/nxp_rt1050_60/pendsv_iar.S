        MODULE  gchelper_iar

        SECTION .text:CODE:NOROOT(2)
		THUMB
		PRESERVE8
        PUBLIC  pendsv_isr_handler
		IMPORT nlr_jump
		IMPORT pendsv_object
pendsv_isr_handler
#if MICROPY_PY_THREAD
        ldr r1, =pendsv_object
        ldr r0, [r1]
        cmp r0, 0
        beq no_obj
        str r0, [sp, #0]            // store to r0 on stack
        mov r0, #0
        str r0, [r1]                // clear pendsv_object
        ldr r0, =nlr_jump
        str r0, [sp, #24]           // store to pc on stack
        bx lr                       // return from interrupt; will return to nlr_jump

no_obj                    // pendsv_object==NULL
        push {r4-r11, lr}
        vpush {s16-s31}
        mrs r5, primask             // save PRIMASK in r5
        cpsid i                     // disable interrupts while we change stacks
        mov r0, sp                  // pass sp to save
        mov r4, lr                  // save lr because we are making a call
        bl pyb_thread_next          // get next thread to execute
        mov lr, r4                  // restore lr
        mov sp, r0                  // switch stacks
        msr primask, r5             // reenable interrupts
        vpop {s16-s31}
        pop {r4-r11, lr}
        bx lr                       // return from interrupt; will return to new thread
        ALIGN 2
#else
        ldr r0, =pendsv_object
        ldr r0, [r0]
#if defined(PENDSV_DEBUG)
        str r0, [sp, #8]
#else
        str r0, [sp, #0]
#endif
        ldr r0, =nlr_jump
#if defined(PENDSV_DEBUG)
        str r0, [sp, #32]
#else
        str r0, [sp, #24]
#endif
        bx lr
	END
