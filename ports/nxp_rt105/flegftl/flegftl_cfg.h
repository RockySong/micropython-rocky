#pragma once
#ifndef _FLEGFTL_CFG_H_
#define _FLEGFTL_CFG_H_

#if 1
// >>> user configurable maximum supported flash device

#define FLEG_EU_SIZE			(256*1024) // (256*1024) size of Erase Unit (EU)
#define FLEG_EU_CNT				220// 16

#define FLEG_LPU_PER_EU			450U //465		// Logic Page Unit per Erase Unit, should hide some for better write access performance
#define FLEG_ADDR0				0
#define FLEG_WB_THRESHOLD		100		// wear balance threshold
#define FLEG_FLASH_OFFSET		0x00800000
// <<<

// >>> below configurations are calcuated based on basic configs, user must calculate correctly!
#define FLEG_CAPACITY		(220*256) //(4096*1024) // FLEG_EU_SIZE * FLEG_EU_CNT
#define FLEG_L1BM_ITEM_CNT	7 //4 // must be >= ((FLEG_PGU_CNT + 31) / 32)
#define FLEG_L2BM_ITEM_CNT	1 // must be >= ((FLEG_L1BM_ITEM_CNT + 31) / 32)
#define FLEG_L3BM_ITEM_CNT	1 // must be >= ((FLEG_L2BM_ITEM_CNT + 31) / 32)
// <<<
#else
#endif
#endif