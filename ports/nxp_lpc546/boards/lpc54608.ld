/*
    GNU linker script for STM32F405
*/

/* Specify the memory areas */
MEMORY
{
    FLASH (rx)      : ORIGIN = 0x00000000, LENGTH = 0x080000 /* entire flash, 512 kB */
    FLASH_ISR (rx)  : ORIGIN = 0x00000000, LENGTH = 0x008000 /* sector 0, 32 KB */
    FLASH_TEXT (rx) : ORIGIN = 0x00004000, LENGTH = 0x07c000 /* (512-16) kB  */
    CCMRAM (xrw)    : ORIGIN = 0x10000000, LENGTH = 0x008000 /* 32 KiB */
    RAM (xrw)       : ORIGIN = 0x20000000, LENGTH = 0x020000 /* 128 KiB */
}

/* produce a link error if there is not this amount of RAM for these sections */
_minimum_stack_size = 2K;
_minimum_heap_size = 16K;
 
/* Define tho top end of the stack.  The stack is full descending so begins just
   above last byte of RAM.  Note that EABI requires the stack to be 8-byte
   aligned for a call. */
_estack = ORIGIN(RAM) + LENGTH(RAM);

/* define common sections and symbols */
INCLUDE common.ld

/* RAM extents for the garbage collector */
_ram_start = ORIGIN(RAM);
_ram_end = ORIGIN(RAM) + LENGTH(RAM);
_heap_start = _ebss; /* heap starts just after statically allocated memory */
_heap_end = 0x2001c000; /* tunable */
