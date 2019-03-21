/*
** ###################################################################
**     Processors:          MIMXRT1052CVL5A
**                          MIMXRT1052DVL6A
**
**     Compiler:            GNU C Compiler
**     Reference manual:    IMXRT1050RM Rev.C, 08/2017
**     Version:             rev. 0.1, 2017-01-10
**     Build:               b171208
**
**     Abstract:
**         Linker file for the GNU C Compiler
**
**     The Clear BSD License
**     Copyright 2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2017 NXP
**     All rights reserved.
**
**     Redistribution and use in source and binary forms, with or without
**     modification, are permitted (subject to the limitations in the
**     disclaimer below) provided that the following conditions are met:
**
**     * Redistributions of source code must retain the above copyright
**       notice, this list of conditions and the following disclaimer.
**
**     * Redistributions in binary form must reproduce the above copyright
**       notice, this list of conditions and the following disclaimer in the
**       documentation and/or other materials provided with the distribution.
**
**     * Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from
**       this software without specific prior written permission.
**
**     NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE
**     GRANTED BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT
**     HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
**     WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
**     MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
**     LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
**     CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
**     SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
**     BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
**     WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
**     OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
**     IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** ###################################################################
*/

/* Entry Point */
ENTRY(Reset_Handler)

HEAP_SIZE  = DEFINED(__heap_size__)  ? __heap_size__  : 0x0000;
STACK_SIZE = DEFINED(__stack_size__) ? __stack_size__ : 0x2000;

ITCM_SIZE = 0x8000;
DTCM_SIZE = 0x78000;
OCRAM_SIZE = 0;
LOAD_BASE = 0x80000000;
IVT_BASE = LOAD_BASE + 0x1000;
/* Specify the memory areas */
MEMORY
{
  m_vectors             (RX)  : ORIGIN = 0x80000000, LENGTH = 1K
  m_text                (RX)  : ORIGIN = 0x80000400, LENGTH = 0x01000000
  m_ncache              (RW)  : ORIGIN = 0x81C00000, LENGTH = 0x00200000
  m_itcm_vectors        (RW)  : ORIGIN = 0x00000000, LENGTH = 1K	
  m_itcm                (RW)  : ORIGIN = 0x00000400, LENGTH = ITCM_SIZE - 1K
  m_dtcm                (RW)  : ORIGIN = 0x20000000, LENGTH = DTCM_SIZE
  m_ocram               (RW)  : ORIGIN = 0x20200000, LENGTH = OCRAM_SIZE
}

PROVIDE(_overlay_itcm_base = 0x6000);
PROVIDE(_overlay_dtcm_base = 0x20002000);

/* Define output sections */
SECTIONS
{
  /* The startup code goes first into internal RAM */
  .interrupts :
  {
    __VECTOR_TABLE = .;
    . = ALIGN(4);
    KEEP(*(.isr_vector))     /* Startup code */
    . = ALIGN(4);
  } > m_vectors

  __VECTOR_RAM = __VECTOR_TABLE;
  __RAM_VECTOR_TABLE_SIZE_BYTES = 0x0;

  /* The program code and other data goes into internal RAM */
  .text :
  {
    . = ALIGN(4);
    *(.text)                 /* .text sections (code) */
    *(.text*)                /* .text* sections (code) */
    *(.rodata)               /* .rodata sections (constants, strings, etc.) */
    *(.rodata*)              /* .rodata* sections (constants, strings, etc.) */
    *(.glue_7)               /* glue arm to thumb code */
    *(.glue_7t)              /* glue thumb to arm code */
    *(.eh_frame)
    KEEP (*(.init))
    KEEP (*(.fini))
    . = ALIGN(4);
  } > m_text

  .ARM.extab :
  {
    *(.ARM.extab* .gnu.linkonce.armextab.*)
  } > m_text

  .ARM :
  {
    __exidx_start = .;
    *(.ARM.exidx*)
    __exidx_end = .;
  } > m_text

 .ctors :
  {
    __CTOR_LIST__ = .;
    /* gcc uses crtbegin.o to find the start of
       the constructors, so we make sure it is
       first.  Because this is a wildcard, it
       doesn't matter if the user does not
       actually link against crtbegin.o; the
       linker won't look for a file to match a
       wildcard.  The wildcard also means that it
       doesn't matter which directory crtbegin.o
       is in.  */
    KEEP (*crtbegin.o(.ctors))
    KEEP (*crtbegin?.o(.ctors))
    /* We don't want to include the .ctor section from
       from the crtend.o file until after the sorted ctors.
       The .ctor section from the crtend file contains the
       end of ctors marker and it must be last */
    KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors))
    KEEP (*(SORT(.ctors.*)))
    KEEP (*(.ctors))
    __CTOR_END__ = .;
  } > m_text

  .dtors :
  {
    __DTOR_LIST__ = .;
    KEEP (*crtbegin.o(.dtors))
    KEEP (*crtbegin?.o(.dtors))
    KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors))
    KEEP (*(SORT(.dtors.*)))
    KEEP (*(.dtors))
    __DTOR_END__ = .;
  } > m_text

  .preinit_array :
  {
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP (*(.preinit_array*))
    PROVIDE_HIDDEN (__preinit_array_end = .);
  } > m_text

  .init_array :
  {
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP (*(SORT(.init_array.*)))
    KEEP (*(.init_array*))
    PROVIDE_HIDDEN (__init_array_end = .);
  } > m_text

  .fini_array :
  {
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP (*(SORT(.fini_array.*)))
    KEEP (*(.fini_array*))
    PROVIDE_HIDDEN (__fini_array_end = .);
  } > m_text

  load_itcm = .;
  
  .itcm_code :
  {
	itcm_code_begin = .;
	*collections.o *array.o (.text)
	itcm_code_end = .;
  } >m_itcm AT > m_text
  
  load_itcm_overlay = load_itcm + SIZEOF(.itcm_code);
  
  OVERLAY 0x6000 : AT (load_itcm_overlay)
  {
	.OVERLAY_CODE_JPEG 
	{
		*jpeg.o (.text) 
	}
	.OVERLAY_CODE_BLOB
	{
		*blob.o (.text)
	}
  } > m_itcm 
  
  load_dtcm_overlay = load_itcm_overlay + SIZEOF(.OVERLAY_CODE_JPEG) + SIZEOF(.OVERLAY_CODE_BLOB);
  
  _stack_top = ORIGIN(m_dtcm) + STACK_SIZE;

  OVERLAY _stack_top : AT (load_dtcm_overlay)
  {
	.OVERLAY_YUV_TAB 
	{
		*yuv_tab.o (.rodata) 
		*.o (.jpeg_tab)
	}
	.OVERLAY_LAB_TAB 
	{
		*lab_tab.o (.rodata)
	}
	.OVERLAY_HAAR 
	{
		*haar.o (.text)
	}
	
  } > m_dtcm

  __DATA_ROM = load_dtcm_overlay + SIZEOF(.OVERLAY_YUV_TAB) + SIZEOF(.OVERLAY_LAB_TAB) + SIZEOF(.OVERLAY_HAAR);
  __etext = _etext;
  PROVIDE(_etext = __DATA_ROM);
  PROVIDE(_sidata = __DATA_ROM);

  .data : AT(__DATA_ROM)
  {
    . = ALIGN(4);
    __DATA_RAM = .;
    __data_start__ = .;      /* create a global symbol at data start */
    *(m_usb_dma_init_data)
    *(.data)                 /* .data sections */
    *(.data*)                /* .data* sections */
    KEEP(*(.jcr*))
    . = ALIGN(4);
    __data_end__ = .;        /* define a global symbol at data end */
  } > m_dtcm  

  PROVIDE(_sdata = __data_start__);
  PROVIDE(_edata = __data_end__);
  
  text_end = ORIGIN(m_text) + LENGTH(m_text);

  FB_SIZE  = 160*1024;
  FB_ALLOC_SIZE = 13*1024;
  JPEG_SIZE  = 23*1024;  
  .dtcm_fbs : 
  {
    . = ALIGN(8);
    _ld_main_fb = .;
	. += FB_SIZE + FB_ALLOC_SIZE;
	/* fb_alloc is at the end of FB (with margin) */
	_ld_fballoc = .;
	_ld_jpeg_buf = .;
	. += JPEG_SIZE;
	. = ALIGN(4);
  } > m_dtcm
  PROVIDE(_jpeg_buf = _ld_jpeg_buf);
  PROVIDE(_fb_base = _ld_main_fb);
  PROVIDE(_fballoc = _ld_fballoc);
  /* Uninitialized data section */
  .bss :
  {
    /* This is used by the startup in order to initialize the .bss section */
    . = ALIGN(4);
    __START_BSS = .;
    __bss_start__ = .;
    *(m_usb_dma_noninit_data)
    *(.bss)
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    __bss_end__ = .;
    __END_BSS = .;
  } > m_dtcm
  PROVIDE(_sbss = __START_BSS);
  PROVIDE(_ebss = __END_BSS);
  .heap :
  {
    . = ALIGN(8);
    __end__ = .;
    PROVIDE(end = .);
    __HeapBase = .;
    . += HEAP_SIZE;
    __HeapLimit = .;
    __heap_limit = .; /* Add for _sbrk */
    _heap = .;
  } > m_dtcm

  PROVIDE(_estack = _stack_top);
  .ARM.attributes 0 : { *(.ARM.attributes) }
  
  .ncache : 
  {
	*.o (.lcd_fb)
  } > m_ncache
}

__StackTop = _estack;

/* RAM extents for the garbage collector */
_ram_start = ORIGIN(m_dtcm);
_sidata = _ram_start;
_ram_end = ORIGIN(m_dtcm) + LENGTH(m_dtcm);
_heap_start = _ebss; /* heap starts just after statically allocated memory */
_heap_end = _ram_end;
