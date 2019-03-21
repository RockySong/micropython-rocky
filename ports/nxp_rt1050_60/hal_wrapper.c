#include "fsl_common.h"
#include "hal_wrapper.h"

extern __IO uint32_t uwTick;


__weak HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)
{
  /*Configure the SysTick to have interrupt in 1ms time basis*/
    // SysTick_Config(SystemCoreClock/1000U);
	SysTick_Config(CLOCK_GetFreq(kCLOCK_CoreSysClk) / (SYSTICK_PRESCALE * 1000U));

  /*Configure the SysTick IRQ priority */
  HAL_NVIC_SetPriority(SysTick_IRQn, TickPriority ,0U);

  /* Return function status */
  return HAL_OK;
}

void HAL_WFI(void)
{
//	#ifndef MCU_SERIES_RT106
//	__WFI();
//	#else
//	#endif
}

__weak void HAL_IncTick(void)
{
  uwTick++;
}

__weak uint32_t HAL_GetTick(void) {
  return uwTick;
}

__weak void HAL_Delay(__IO uint32_t Delay)
{
    uint32_t start = HAL_GetTick();

    while (HAL_GetTick() - start <= Delay) {
      __WFI();  // enter sleep mode, waiting for interrupt
    }
}

__weak void HAL_SuspendTick(void)
{
  /* Disable SysTick Interrupt */
  SysTick->CTRL &= ~SysTick_CTRL_TICKINT_Msk;
}

__weak void HAL_ResumeTick(void)
{
  /* Enable SysTick Interrupt */
  SysTick->CTRL  |= SysTick_CTRL_TICKINT_Msk;
}

uint32_t HAL_GetHalVersion(void)
{
 return 1;
}

/**
  * @brief  Returns the device revision identifier.
  * @retval Device revision identifier
  */
uint32_t HAL_GetREVID(void)
{
   return 2;
}

/**
  * @brief  Returns the device identifier.
  * @retval Device identifier
  */
uint32_t HAL_GetDEVID(void)
{
   return 3;
}

void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority)
{ 
  uint32_t prioritygroup = 0x00U;
  
  /* Check the parameters */
  assert(IS_NVIC_SUB_PRIORITY(SubPriority));
  assert(IS_NVIC_PREEMPTION_PRIORITY(PreemptPriority));
  
  prioritygroup = NVIC_GetPriorityGrouping();
  
  NVIC_SetPriority(IRQn, NVIC_EncodePriority(prioritygroup, PreemptPriority, SubPriority));
}


