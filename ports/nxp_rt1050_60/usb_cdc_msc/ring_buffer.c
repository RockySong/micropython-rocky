/*
* @brief Common ring buffer support functions
*
* @note
* Copyright(C) NXP Semiconductors, 2012
* All rights reserved.
*
* @par
* Software that is described herein is for illustrative purposes only
* which provides customers with programming information regarding the
* LPC products.  This software is supplied "AS IS" without any warranties of
* any kind, and NXP Semiconductors and its licensor disclaim any and
* all warranties, express or implied, including all implied warranties of
* merchantability, fitness for a particular purpose and non-infringement of
* intellectual property rights.  NXP Semiconductors assumes no responsibility
* or liability for the use of the software, conveys no license or rights under any
* patent, copyright, mask work right, or any other intellectual property rights in
* or to any products. NXP Semiconductors reserves the right to make changes
* in the software without notification. NXP Semiconductors also makes no
* representation or warranty that such application will be suitable for the
* specified use without further testing or modification.
*
* @par
* Permission to use, copy, modify, and distribute this software and its
* documentation is hereby granted, under NXP Semiconductors' and its
* licensor's relevant copyrights in the software, without fee, provided that it
* is used in conjunction with NXP Semiconductors microcontrollers.  This
* copyright, permission, and disclaimer notice must appear in all copies of
* this code.
*/

#include "ring_buffer.h"
#include "fsl_common.h"
#include "py/obj.h"
#include "irq.h"
#ifdef RINGBUF_IRQ_SAFE
#define INIT_CRITICAL_RBF() uint32_t basePri = __get_BASEPRI()
#define ENTER_CRITICAL_RBF() __set_BASEPRI(IRQ_PRI_CSI + 1)
#define LEAVE_CRITICAL_RBF() __set_BASEPRI(basePri)
#else
#define INIT_CRITICAL_RBF()
#define ENTER_CRITICAL_RBF()
#define LEAVE_CRITICAL_RBF()

#endif


int32_t RingBuf_Init(ring_buffer_t* pRB, uint8_t* buffer, uint32_t size )
{
	pRB->pBuf	 = (uint8_t*)buffer;
	pRB->size		 = size;
	pRB->rNdx		 = 0;
	pRB->wNdx		 = 0;
	pRB->cnt = 0;
	return 0;
}

int32_t RingBuf_Deinit(ring_buffer_t* pRB )
{
	pRB = pRB;;
	return 0;
}

int32_t RingBuf_GetFreeBytes(ring_buffer_t* pRB )
{
	return pRB->size - pRB->cnt;
}

int32_t RingBuf_GetUsedBytes(ring_buffer_t* pRB)
{
	return pRB->cnt;
}

int32_t RingBuf_Write(ring_buffer_t* pRB, const uint8_t* data, uint32_t dataBytes)
{
	uint32_t writeToEnd, bytesToCopy;
	INIT_CRITICAL_RBF();
	ENTER_CRITICAL_RBF();
	/* Calculate the maximum amount we can copy */
	writeToEnd = pRB->size - pRB->wNdx;
	bytesToCopy = MIN(dataBytes, pRB->size - pRB->cnt);
	
	if (bytesToCopy != 0)
	{
		/* Copy as much as we can until we fall off the end of the buffer */
		memcpy(&pRB->pBuf[pRB->wNdx], data, MIN(bytesToCopy, writeToEnd));

		/* Check if we have more to copy to the front of the buffer */
		if (writeToEnd < bytesToCopy)
		{
			memcpy(pRB->pBuf, data + writeToEnd, bytesToCopy - writeToEnd);
		}

		/* Update the wNdx */
		
		pRB->wNdx = (pRB->wNdx + bytesToCopy) % pRB->size;
		pRB->cnt += bytesToCopy;
	}
	LEAVE_CRITICAL_RBF();
	return bytesToCopy;
}

int32_t RingBuf_Write1Byte(ring_buffer_t* pRB, const uint8_t *pcData)
{
	uint32_t ret = 0;
	INIT_CRITICAL_RBF();
	ENTER_CRITICAL_RBF();
	if (pRB->cnt < pRB->size)
	{
		pRB->pBuf[pRB->wNdx] = pcData[0];
		pRB->wNdx = (pRB->wNdx + 1) % pRB->size;
		pRB->cnt++;
		ret = 1;
	}
	LEAVE_CRITICAL_RBF();
	return ret;
}

int32_t _prvRingBuf_Read(ring_buffer_t* pRB, uint8_t* data, uint32_t dataBytes, uint32_t isToFree)
{
	uint32_t readToEnd, bytesToCopy;
	INIT_CRITICAL_RBF();
	ENTER_CRITICAL_RBF();
	readToEnd = pRB->size - pRB->rNdx;
	bytesToCopy = MIN(dataBytes, pRB->cnt);
	if (bytesToCopy != 0)
	{
		memcpy(data, &pRB->pBuf[pRB->rNdx], MIN(bytesToCopy, readToEnd));
		
		if (readToEnd < bytesToCopy)
			memcpy(data + readToEnd, &pRB->pBuf[0], bytesToCopy - readToEnd);

		if (isToFree)
		{
			pRB->rNdx = (pRB->rNdx + bytesToCopy) % pRB->size;
			pRB->cnt -= bytesToCopy;	
		}
	}
	LEAVE_CRITICAL_RBF();
	
	return bytesToCopy;
}

int32_t RingBuf_Read(ring_buffer_t* pRB, uint8_t* data, uint32_t dataBytes)
{
	return _prvRingBuf_Read(pRB, data, dataBytes, 1);
}

int32_t RingBuf_Copy(ring_buffer_t* pRB, uint8_t* data, uint32_t dataBytes)
{
	return _prvRingBuf_Read(pRB, data, dataBytes, 0);
}

int32_t RingBuf_Read1Byte(ring_buffer_t* pRB, uint8_t *pData)
{
	uint32_t ret = 0;
	INIT_CRITICAL_RBF();
	ENTER_CRITICAL_RBF();
	if (pRB->cnt != 0)
	{
		pData[0] = pRB->pBuf[pRB->rNdx];
		pRB->rNdx = (pRB->rNdx + 1) % pRB->size;
		pRB->cnt--;
		ret = 1;
	}
	LEAVE_CRITICAL_RBF();
	return ret;
}

int32_t RingBuf_Peek(ring_buffer_t* pRB, uint8_t **ppData)
{
	uint32_t readToEnd = pRB->size - pRB->rNdx;
	uint32_t contiguousBytes;
	*ppData = &(pRB->pBuf[pRB->rNdx]);
	contiguousBytes = MIN(readToEnd, (readToEnd + pRB->wNdx) % pRB->size);
	return contiguousBytes;
}

int32_t RingBuf_Free(ring_buffer_t* pRB, uint32_t bytesToFree)
{
	INIT_CRITICAL_RBF();
	ENTER_CRITICAL_RBF();
	pRB->rNdx = (pRB->rNdx + bytesToFree) % pRB->size;
	pRB->cnt -= bytesToFree;
	LEAVE_CRITICAL_RBF();
	return bytesToFree;
}

#ifdef RINGBLK_IRQ_SAFE
#define INIT_CRITICAL_RBK() uint32_t priMask = __get_PRIMASK()
#define ENTER_CRITICAL_RBK() __set_PRIMASK(1)
#define LEAVE_CRITICAL_RBK() __set_PRIMASK(priMask)
#else
#define INIT_CRITICAL_RBK()
#define ENTER_CRITICAL_RBK()
#define LEAVE_CRITICAL_RBK()
#endif


int32_t RingBlk_Init(ring_block_t *pRB, uint8_t *pBlksAry, uint32_t blkSize, uint32_t blkCnt)

{
	uint32_t i;
	if (blkCnt > RING_BLOCK_MAX_CNT) {
		return -1L;
	}
	pRB->pBlks	 	= (uint8_t*)pBlksAry;
	pRB->blkSize	= blkSize;
	pRB->blkCnt 	= blkCnt;
	pRB->rNdx		= 0;
	pRB->wNdx		= 0;
	pRB->blkWNdx	= 0;
	pRB->blkRNdx	= 0;
	pRB->usedCnt	= 0;
	pRB->cbTotUsed  = 0;
	for (i=0; i<blkCnt; i++) {
		pRB->cbBlkFillTos[i] = 0;
	}
	return 0;
}

int32_t RingBlk_Deinit(ring_block_t* pRB )
{
	pRB = pRB;
	return 0;
}

int32_t RingBlk_GetFreeBlks(ring_block_t* pRB )
{
	return pRB->blkCnt - pRB->usedCnt;
}

int32_t RingBlk_GetUsedBlks(ring_block_t* pRB)
{
	return pRB->usedCnt;
}

int32_t RingBlk_GetUsedBytes(ring_block_t* pRB) {
	return pRB->cbTotUsed;
}

int32_t RingBlk_GetFreeBytes(ring_block_t* pRB) {
	return pRB->blkCnt * pRB->blkSize - pRB->cbTotUsed;
}

// #define RB_DEBUG
int32_t RingBlk_ReadLimitedBlks(ring_block_t* pRB, uint8_t* pBuf, uint32_t dataBytes, uint32_t maxBlks, uint8_t isUpdt)
{
	uint32_t cb, dataBytes0;
	uint32_t blkNdx, usedCnt, byteNdx, cbBlkFill0;
	INIT_CRITICAL_RBK();
	ENTER_CRITICAL_RBK();	
#ifdef RB_DEBUG
	ring_block_t rbBkup = *pRB;
beginwork:	
#endif
	blkNdx = pRB->rNdx , byteNdx = pRB->blkRNdx;
	cbBlkFill0 = pRB->cbBlkFillTos[blkNdx];
	// if dataBytes is 0, then we read exactly one block
	if (dataBytes == 0)
		dataBytes = cbBlkFill0 - pRB->blkRNdx; // pRB->blkSize - cbBlkFill0;
	dataBytes0 = dataBytes;
	if (0 == (usedCnt = pRB->usedCnt))
		goto Cleanup;	
	/* Calculate the maximum amount we can copy */
	while (dataBytes && usedCnt) {
		
		cb = cbBlkFill0 - byteNdx;
		if (0 == cb)
			break;	// no more to read
		if (cb > dataBytes)
			cb = dataBytes;
		if (pBuf) {	// if pBuf is NULL, we simply free blocks
			if (cb == 1) {
				*pBuf = pRB->pBlks[pRB->blkSize * blkNdx + byteNdx];
			} else {
				memcpy(pBuf, pRB->pBlks + pRB->blkSize * blkNdx + byteNdx, cb);
			}
			pBuf += cb;
		}
		dataBytes -= cb , byteNdx += cb;
		if (isUpdt) {
			pRB->cbTotUsed -= cb;
			// pRB->cbBlkFillTos[blkNdx] -= cb;	// fillTos is the watermark of even max filled
		}
		if (byteNdx == cbBlkFill0) {
			// one block is totally read, go ahead to next block, even if the block is not fully filled
			byteNdx = 0 , usedCnt--;
			if (isUpdt) {
				pRB->cbBlkFillTos[blkNdx] = 0;
				if (pRB->wNdx == blkNdx && pRB->blkWNdx != 0) {	
					// current block is not yet fully filled, still go to next block to ensure alignment
					// bugfix note: judgement of pRB->blkWNdx != 0 is critical, otherwise in a corner case
					// when the RB is full that wNdx==rNdx, code will wrongly adjust wNdx
					/*
					if (++pRB->wNdx == pRB->blkCnt)
						pRB->wNdx = 0;
					
					pRB->blkWNdx = 0;
					*/
					pRB->blkRNdx = pRB->blkWNdx = 0;
					if (pRB->cbTotUsed) {
					#ifdef RB_DEBUG
					
						*pRB = rbBkup;
						goto beginwork;
					
					#endif
						while(1) {}
					}
					break;	// in this case, RB must be empty!
				}
			}
			if (++blkNdx >= pRB->blkCnt)
				blkNdx = 0;
			if (dataBytes) {				
				cbBlkFill0 = pRB->cbBlkFillTos[blkNdx];	// reload block fill bytes of next block
				if (0 == --maxBlks)
					break;	// if we've read max allowed blocks then break. if maxBlks = 0 then treat as no limit		
			}

		}
	}
	if (isUpdt)
		pRB->rNdx = blkNdx , pRB->usedCnt = usedCnt , pRB->blkRNdx = byteNdx;
Cleanup:
#ifdef RB_DEBUG	
	uint32_t i, a = 0;
	for (i=0; i<pRB->blkCnt; i++) {
		a += pRB->cbBlkFillTos[i];
		if (i == pRB->rNdx)
			a -= pRB->blkRNdx;
	}
	if (a != pRB->cbTotUsed) {
		*pRB = rbBkup;
		goto beginwork;
	}
#endif
	LEAVE_CRITICAL_RBK();
	return dataBytes0 - dataBytes;	// returns read bytes
}

int32_t RingBlk_Read(ring_block_t* pRB, uint8_t* pBuf, uint32_t dataBytes)
{
	return RingBlk_ReadLimitedBlks(pRB, pBuf, dataBytes, 0, 1);
}

int32_t RingBlk_Read1Blk(ring_block_t* pRB, uint8_t *pBuf, uint32_t bufSize)
{
	if (bufSize < pRB->blkSize)
		return -1;
	return RingBlk_ReadLimitedBlks(pRB, pBuf, 0, 1, 1);
}


int32_t RingBlk_Copy(ring_block_t* pRB, uint8_t* pBuf, uint32_t dataBytes)
{
	return RingBlk_ReadLimitedBlks(pRB, pBuf, dataBytes, 0, 0);
}

/* reading 1 block does not make sense currently, and is troublesome to implement
int32_t RingBlk_Read1Blk(ring_block_t* pRB, uint8_t *pBuf, uint32_t dataBytes)
{
	return RingBlk_ReadLimitedBlks(pRB, pBuf, dataBytes, 1, 1);
}
*/

int32_t RingBlk_Free(ring_block_t* pRB, uint32_t bytesToFree)
{
	return RingBlk_ReadLimitedBlks(pRB, NULL, bytesToFree, 0, 1);
}


int32_t RingBlk_WriteLimitedBlks(ring_block_t* pRB, const uint8_t* pBuf, uint32_t dataBytes, uint32_t maxBlks)
{
	uint32_t cb, cbFree;
	uint32_t blkNdx, byteNdx, cbBlkFill0, dataBytes0, cbRem = dataBytes;
	INIT_CRITICAL_RBK();
	ENTER_CRITICAL_RBK();
#ifdef RB_DEBUG
	ring_block_t rbBkup = *pRB;
beginwork:	
#endif	
	cbRem = dataBytes;
	blkNdx = pRB->wNdx , byteNdx = pRB->blkWNdx;
	// if dataBytes is 0 then we write exactly 1 block to full
	if (dataBytes == 0)
		cbRem = pRB->blkSize - byteNdx;
	dataBytes0 = cbRem;
	cbFree = RingBlk_GetFreeBytes(pRB);
	if (pRB->rNdx == pRB->wNdx && pRB->blkWNdx >= pRB->blkRNdx && pRB->blkRNdx != 0) {
		cbFree -= pRB->blkRNdx;	// the freed part within a block that is before blkWNdx can't be used
	}
	if (0 == cbFree)
		goto Cleanup;	// block ring is full
	if (pRB->rNdx == pRB->wNdx && pRB->cbBlkFillTos[pRB->rNdx] != 0 && pRB->blkWNdx == 0) {
		// this is a corner case when RB is from full to just one read. though there are free spaces
		// still can't write into
		goto Cleanup;
	}
	
	cbBlkFill0 = pRB->cbBlkFillTos[blkNdx];
	// if (cbBlkFill0 == 0 && pRB->usedCnt == pRB->blkCnt - 1)
	//	goto Cleanup;	// leave one free block
	/* Calculate the maximum amount we can copy */
	while (cbRem && cbFree) {
		cb = pRB->blkSize - cbBlkFill0;
		if (cbRem < cb)
			cb = cbRem;
		if (cb == 1) {
			pRB->pBlks[pRB->blkSize * blkNdx + byteNdx] = *pBuf;
		}else{
			memcpy(pRB->pBlks + pRB->blkSize * blkNdx + byteNdx, pBuf, cb);
		}
		cbRem -= cb , byteNdx += cb, cbFree -= cb;
		if (cbBlkFill0 == 0)
			pRB->usedCnt++;
		pRB->cbTotUsed += cb;
		pRB->cbBlkFillTos[blkNdx] += cb;
#ifdef RB_DEBUG			
		if (pRB->cbBlkFillTos[blkNdx] > pRB->blkSize) {
			*pRB = rbBkup;
			goto beginwork;
		}
#endif
		if (byteNdx == pRB->blkSize) {
			// a block is totally written, switch to next block
			byteNdx = 0;
			if (++blkNdx >= pRB->blkCnt)
				blkNdx = 0;
			if (blkNdx == pRB->rNdx && pRB->cbBlkFillTos[pRB->rNdx] != 0) {
				break;	// do not allow to write to partially read block
			}			
			cbBlkFill0 = 0;
			// if (pRB->usedCnt == pRB->blkCnt - 1)
			//	break;	// leave one free block
			if (--maxBlks == 0)
				break;	// if we've read max allowed blocks then break. if maxBlks = 0 then treat as no limit			
		}
	}
	pRB->wNdx = blkNdx , pRB->blkWNdx = byteNdx;
Cleanup:
#ifdef RB_DEBUG	
	uint32_t i, a = 0;
	for (i=0; i<pRB->blkCnt; i++){
		a += pRB->cbBlkFillTos[i];
		if (i == pRB->rNdx)
			a -= pRB->blkRNdx;		
	}
	if (a != pRB->cbTotUsed) {
		*pRB = rbBkup;
		goto beginwork;
	}

	if (pRB->usedCnt > pRB->blkCnt)
	{
		*pRB = rbBkup;
		goto beginwork;
	}
#endif	
	LEAVE_CRITICAL_RBK();
	return dataBytes0 - cbRem;	// returns written bytes

}

int32_t RingBlk_Write1Blk(ring_block_t* pRB, uint8_t *pBuf, uint32_t bufSize)
{
	if (bufSize < pRB->blkSize)
		return -1;
	return RingBlk_WriteLimitedBlks(pRB, pBuf, 0, 1);
}

int32_t RingBlk_Write(ring_block_t* pRB, const uint8_t* pBuf, uint32_t dataBytes)
{
	return RingBlk_WriteLimitedBlks(pRB, pBuf, dataBytes, 0);
}

// >>> APIs intended to work with peripherals that can automatically send/recv buffers
// such as USBD
// these APIs shall be called in ISR
uint8_t* RingBlk_TakeNextFreeBlk(ring_block_t *pRB)
{
	uint8_t *pBlk = 0;
	INIT_CRITICAL_RBK();
	ENTER_CRITICAL_RBK();	
	
	if (pRB->usedCnt < pRB->blkCnt) {
		pBlk = pRB->pBlks + pRB->blkSize * pRB->wNdx;
		pRB->blkWNdx = 0;
		pRB->usedCnt++;
		pRB->takenBlkNdx = pRB->wNdx;
		if (++pRB->wNdx >= pRB->blkCnt)
			pRB->wNdx = 0;
	}
	LEAVE_CRITICAL_RBK();
	return pBlk;
}

int32_t RingBlk_FixBlkFillCnt(ring_block_t *pRB, uint32_t cbFill, uint8_t **ppNextFreeBlk)
{
	if (pRB->takenBlkNdx == 0xFF)
		return -1L;	// must first take one block, then fix its filled count
	INIT_CRITICAL_RBK();
	ENTER_CRITICAL_RBK();
	pRB->cbBlkFillTos[pRB->takenBlkNdx] += cbFill;
	pRB->cbTotUsed += cbFill;
	pRB->takenBlkNdx = 0xFF;
	if (ppNextFreeBlk)
	{
		if (pRB->usedCnt < pRB->blkCnt) {
			pRB->blkWNdx = 0;
			pRB->usedCnt++;			
			if (++pRB->wNdx >= pRB->blkCnt)
				pRB->wNdx = 0;
			pRB->takenBlkNdx = pRB->wNdx;
			ppNextFreeBlk[0] = pRB->pBlks + pRB->blkSize * pRB->wNdx;
		} else {
			ppNextFreeBlk[0] = 0;
		}
	}
	LEAVE_CRITICAL_RBK();
	return 0;
}

int32_t RingBlk_ReuseTakenBlk(ring_block_t *pRB, uint8_t **ppBlk) {
	if (pRB->takenBlkNdx == 0xFF)
		return -1L;	// must first take one block, then fix its filled count
	INIT_CRITICAL_RBK();
	ENTER_CRITICAL_RBK();
	if (!(pRB->wNdx == pRB->takenBlkNdx))
	{
		while(1) {}
	}
	if (ppBlk) {
		ppBlk[0] = pRB->pBlks + pRB->blkSize * pRB->wNdx;
		pRB->cbBlkFillTos[pRB->wNdx] = 0;
	}
	LEAVE_CRITICAL_RBK();
	return 0;
}

// Get the previous taken block by 
uint8_t* RingBlk_GetTakenBlk(ring_block_t *pRB)
{
	uint8_t *pBlk = 0;
	INIT_CRITICAL_RBK();
	ENTER_CRITICAL_RBK();	
	if (pRB->takenBlkNdx == 0xFF)
		goto Cleanup;
	pBlk = pRB->pBlks + pRB->blkSize * pRB->takenBlkNdx;
Cleanup:
	LEAVE_CRITICAL_RBK();
	return pBlk;
}

int32_t RingBlk_FreeOldestBlk(ring_block_t *pRB, uint8_t **ppNewOldestBlk)
{
	int32_t rNdx, cbFill = 0;
	INIT_CRITICAL_RBK();
	ENTER_CRITICAL_RBK();	
	
	if (pRB->usedCnt != 0) {
		rNdx = pRB->rNdx;
		pRB->usedCnt--;
		pRB->cbTotUsed -= pRB->cbBlkFillTos[rNdx] - pRB->blkRNdx;
		pRB->blkRNdx = 0 , pRB->cbBlkFillTos[rNdx] = 0;
		if (++pRB->rNdx >= pRB->blkCnt)
			pRB->rNdx = 0;
		if (pRB->usedCnt) {
			// return the info of next block that contains data after this one is freed
			cbFill = pRB->cbBlkFillTos[pRB->rNdx];
			if (ppNewOldestBlk)
				ppNewOldestBlk[0] = pRB->pBlks + pRB->rNdx * pRB->blkSize;
		} else {
			pRB->blkWNdx = 0;
			pRB->wNdx = pRB->rNdx;	// in case the free'ed block is partially filled, adjust wNdx
		}

	}
	if (pRB->usedCnt == 0 && ppNewOldestBlk)
		ppNewOldestBlk[0] = 0;
	LEAVE_CRITICAL_RBK();
	return cbFill;
}

int32_t RingBlk_GetOldestBlk(ring_block_t *pRB, uint8_t **ppBlk)
{
	int32_t cbFill = 0;
	uint8_t *pBlk = 0;
	INIT_CRITICAL_RBK();
	ENTER_CRITICAL_RBK();	
	
	if (pRB->usedCnt != 0) {
		// pRB->blkRNdx = 0;
		pBlk = pRB->pBlks + pRB->rNdx * pRB->blkSize + pRB->blkRNdx;
		cbFill = pRB->cbBlkFillTos[pRB->rNdx] - pRB->blkRNdx;
		if (ppBlk) 
			ppBlk[0] = pBlk;
	}
	LEAVE_CRITICAL_RBK();
	return cbFill;
}


// <<<
