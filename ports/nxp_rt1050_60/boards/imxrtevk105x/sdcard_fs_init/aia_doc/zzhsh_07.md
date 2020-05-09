#### p.aipstz1.opacr1
<link=p.AIPSTZ1.OPACR1>
#### aipstz1.opacr1
<link=p.AIPSTZ1.OPACR1>
#### aipstz2.opacr1
<link=p.AIPSTZ2.OPACR1>
#### p.AIPSTZ3.OPACR4
<lang=dft>
 (rw)  [1;33m0x4027c050[0m (0x4027c000 + 0x0050)
Off-Platform Peripheral Access Control Registers
 (rw) (04)  [0;32mOPAC33[0m  - [27:24] -  Off-platform Peripheral Access Control 33
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC32[0m  - [31:28] -  Off-platform Peripheral Access Control 32
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
</lang>
#### p.aipstz4.mpr
<link=p.AIPSTZ4.MPR>
#### p.AIPSTZ4.OPACR1
<lang=dft>
 (rw)  [1;33m0x4037c044[0m (0x4037c000 + 0x0044)
Off-Platform Peripheral Access Control Registers
 (rw) (04)  [0;32mOPAC15[0m  - [03:00] -  Off-platform Peripheral Access Control 15
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC14[0m  - [07:04] -  Off-platform Peripheral Access Control 14
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC13[0m  - [11:08] -  Off-platform Peripheral Access Control 13
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC12[0m  - [15:12] -  Off-platform Peripheral Access Control 12
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC11[0m  - [19:16] -  Off-platform Peripheral Access Control 11
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC10[0m  - [23:20] -  Off-platform Peripheral Access Control 10
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC9[0m  - [27:24] -  Off-platform Peripheral Access Control 9
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC8[0m  - [31:28] -  Off-platform Peripheral Access Control 8
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
</lang>
#### p.dcdc.reg3
<link=p.DCDC.REG3>
#### p.pit.ldval2
<link=p.PIT.LDVAL2>
#### PIT.LDVAL3
<link=p.PIT.LDVAL3>
#### p.pit.cval3
<link=p.PIT.CVAL3>
#### p.PIT.TCTRL3
<lang=dft>
 (rw)  [1;33m0x40084138[0m (0x40084000 + 0x0138)
Timer Control Register
 (rw) (01)  [0;32mTEN[0m  - [00:00] -  Timer Enable
      0 - TEN_0 :
         Timer n is disabled.
      0x1 - TEN_1 :
         Timer n is enabled.
 (rw) (01)  [0;32mTIE[0m  - [01:01] -  Timer Interrupt Enable
      0 - TIE_0 :
         Interrupt requests from Timer n are disabled.
      0x1 - TIE_1 :
         Interrupt will be requested whenever TIF is set.
 (rw) (01)  [0;32mCHN[0m  - [02:02] -  Chain Mode
      0 - CHN_0 :
         Timer is not chained.
      0x1 - CHN_1 :
         Timer is chained to previous timer. For example, for Channel 2, if this
          field is set, Timer 2 is chained to Timer 1.
</lang>
#### pit.tflg3
<link=p.PIT.TFLG3>
#### PIT.LTMR64H
<link=p.PIT.LTMR64H>
#### cmp1.muxcr
<link=p.CMP1.MUXCR>
#### p.cmp3.cr1
<link=p.CMP3.CR1>
#### p.cmp3.fpr
<link=p.CMP3.FPR>
#### p.CMP4.CR0
<lang=dft>
 (rw)  [1;33m0x40094018[0m (0x40094018 + 0x0000)
CMP Control Register 0
 (rw) (02)  [0;32mHYSTCTR[0m  - [01:00] -  Comparator hard block hysteresis control
      0 - HYSTCTR_0 :
         Level 0
      0x1 - HYSTCTR_1 :
         Level 1
      0x2 - HYSTCTR_2 :
         Level 2
      0x3 - HYSTCTR_3 :
         Level 3
 (rw) (03)  [0;32mFILTER_CNT[0m  - [06:04] -  Filter Sample Count
      0 - FILTER_CNT_0 :
         Filter is disabled. If SE = 1, then COUT is a logic 0. This is not a le
         gal state, and is not recommended. If SE = 0, COUT = COUTA.
      0x1 - FILTER_CNT_1 :
         One sample must agree. The comparator output is simply sampled.
      0x2 - FILTER_CNT_2 :
         2 consecutive samples must agree.
      0x3 - FILTER_CNT_3 :
         3 consecutive samples must agree.
      0x4 - FILTER_CNT_4 :
         4 consecutive samples must agree.
      0x5 - FILTER_CNT_5 :
         5 consecutive samples must agree.
      0x6 - FILTER_CNT_6 :
         6 consecutive samples must agree.
      0x7 - FILTER_CNT_7 :
         7 consecutive samples must agree.
</lang>
#### p.cmp4.fpr
<link=p.CMP4.FPR>
#### p.cmp4.daccr
<link=p.CMP4.DACCR>
#### cmp4.daccr
<link=p.CMP4.DACCR>
#### p.iomuxc_snvs_gpr.gpr1
<link=p.IOMUXC_SNVS_GPR.GPR1>
#### IOMUXC_SNVS_GPR.GPR1
<link=p.IOMUXC_SNVS_GPR.GPR1>
#### IOMUXC_SNVS.SW_MUX_CTL_PAD_PMIC_ON_REQ
<link=p.IOMUXC_SNVS.SW_MUX_CTL_PAD_PMIC_ON_REQ>
#### iomuxc_snvs.sw_pad_ctl_pad_por_b
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_POR_B>
#### p.iomuxc_gpr.gpr2
<link=p.IOMUXC_GPR.GPR2>
#### p.IOMUXC_GPR.GPR7
<lang=dft>
 (rw)  [1;33m0x400ac01c[0m (0x400ac000 + 0x001c)
GPR7 General Purpose Register
 (rw) (01)  [0;32mLPI2C1_STOP_REQ[0m  - [00:00] -  LPI2C1 stop request
      0 - LPI2C1_STOP_REQ_0 :
         stop request off
      0x1 - LPI2C1_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPI2C2_STOP_REQ[0m  - [01:01] -  LPI2C2 stop request
      0 - LPI2C2_STOP_REQ_0 :
         stop request off
      0x1 - LPI2C2_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPI2C3_STOP_REQ[0m  - [02:02] -  LPI2C3 stop request
      0 - LPI2C3_STOP_REQ_0 :
         stop request off
      0x1 - LPI2C3_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPI2C4_STOP_REQ[0m  - [03:03] -  LPI2C4 stop request
      0 - LPI2C4_STOP_REQ_0 :
         stop request off
      0x1 - LPI2C4_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPSPI1_STOP_REQ[0m  - [04:04] -  LPSPI1 stop request
      0 - LPSPI1_STOP_REQ_0 :
         stop request off
      0x1 - LPSPI1_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPSPI2_STOP_REQ[0m  - [05:05] -  LPSPI2 stop request
      0 - LPSPI2_STOP_REQ_0 :
         stop request off
      0x1 - LPSPI2_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPSPI3_STOP_REQ[0m  - [06:06] -  LPSPI3 stop request
      0 - LPSPI3_STOP_REQ_0 :
         stop request off
      0x1 - LPSPI3_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPSPI4_STOP_REQ[0m  - [07:07] -  LPSPI4 stop request
      0 - LPSPI4_STOP_REQ_0 :
         stop request off
      0x1 - LPSPI4_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPUART1_STOP_REQ[0m  - [08:08] -  LPUART1 stop request
      0 - LPUART1_STOP_REQ_0 :
         stop request off
      0x1 - LPUART1_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPUART2_STOP_REQ[0m  - [09:09] -  LPUART1 stop request
      0 - LPUART2_STOP_REQ_0 :
         stop request off
      0x1 - LPUART2_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPUART3_STOP_REQ[0m  - [10:10] -  LPUART3 stop request
      0 - LPUART3_STOP_REQ_0 :
         stop request off
      0x1 - LPUART3_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPUART4_STOP_REQ[0m  - [11:11] -  LPUART4 stop request
      0 - LPUART4_STOP_REQ_0 :
         stop request off
      0x1 - LPUART4_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPUART5_STOP_REQ[0m  - [12:12] -  LPUART5 stop request
      0 - LPUART5_STOP_REQ_0 :
         stop request off
      0x1 - LPUART5_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPUART6_STOP_REQ[0m  - [13:13] -  LPUART6 stop request
      0 - LPUART6_STOP_REQ_0 :
         stop request off
      0x1 - LPUART6_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPUART7_STOP_REQ[0m  - [14:14] -  LPUART7 stop request
      0 - LPUART7_STOP_REQ_0 :
         stop request off
      0x1 - LPUART7_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mLPUART8_STOP_REQ[0m  - [15:15] -  LPUART8 stop request
      0 - LPUART8_STOP_REQ_0 :
         stop request off
      0x1 - LPUART8_STOP_REQ_1 :
         stop request on
 (ro) (01)  [0;32mLPI2C1_STOP_ACK[0m  - [16:16] -  LPI2C1 stop acknowledge
      0 - LPI2C1_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPI2C1_STOP_ACK_1 :
         stop acknowledge is asserted (the module is in Stop mode)
 (ro) (01)  [0;32mLPI2C2_STOP_ACK[0m  - [17:17] -  LPI2C2 stop acknowledge
      0 - LPI2C2_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPI2C2_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPI2C3_STOP_ACK[0m  - [18:18] -  LPI2C3 stop acknowledge
      0 - LPI2C3_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPI2C3_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPI2C4_STOP_ACK[0m  - [19:19] -  LPI2C4 stop acknowledge
      0 - LPI2C4_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPI2C4_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPSPI1_STOP_ACK[0m  - [20:20] -  LPSPI1 stop acknowledge
      0 - LPSPI1_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPSPI1_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPSPI2_STOP_ACK[0m  - [21:21] -  LPSPI2 stop acknowledge
      0 - LPSPI2_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPSPI2_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPSPI3_STOP_ACK[0m  - [22:22] -  LPSPI3 stop acknowledge
      0 - LPSPI3_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPSPI3_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPSPI4_STOP_ACK[0m  - [23:23] -  LPSPI4 stop acknowledge
      0 - LPSPI4_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPSPI4_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPUART1_STOP_ACK[0m  - [24:24] -  LPUART1 stop acknowledge
      0 - LPUART1_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPUART1_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPUART2_STOP_ACK[0m  - [25:25] -  LPUART1 stop acknowledge
      0 - LPUART2_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPUART2_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPUART3_STOP_ACK[0m  - [26:26] -  LPUART3 stop acknowledge
      0 - LPUART3_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPUART3_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPUART4_STOP_ACK[0m  - [27:27] -  LPUART4 stop acknowledge
      0 - LPUART4_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPUART4_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPUART5_STOP_ACK[0m  - [28:28] -  LPUART5 stop acknowledge
      0 - LPUART5_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPUART5_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPUART6_STOP_ACK[0m  - [29:29] -  LPUART6 stop acknowledge
      0 - LPUART6_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPUART6_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPUART7_STOP_ACK[0m  - [30:30] -  LPUART7 stop acknowledge
      0 - LPUART7_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPUART7_STOP_ACK_1 :
         stop acknowledge is asserted
 (ro) (01)  [0;32mLPUART8_STOP_ACK[0m  - [31:31] -  LPUART8 stop acknowledge
      0 - LPUART8_STOP_ACK_0 :
         stop acknowledge is not asserted
      0x1 - LPUART8_STOP_ACK_1 :
         stop acknowledge is asserted (the module is in Stop mode)
</lang>
#### p.iomuxc_gpr.gpr13
<link=p.IOMUXC_GPR.GPR13>
#### iomuxc_gpr.gpr13
<link=p.IOMUXC_GPR.GPR13>
#### IOMUXC_GPR.GPR16
<link=p.IOMUXC_GPR.GPR16>
#### p.IOMUXC_GPR.GPR21
<lang=dft>
 (rw)  [1;33m0x400ac054[0m (0x400ac000 + 0x0054)
GPR21 General Purpose Register
 (rw) (01)  [0;32mLOCK_M7_APC_AC_R1_TOP[0m  - [00:00] -  lock M7_APC_AC_R1_TOP field for changes
      0 - LOCK_M7_APC_AC_R1_TOP_0 :
         Register field [31:1] is not locked
      0x1 - LOCK_M7_APC_AC_R1_TOP_1 :
         Register field [31:1] is locked (read access only)
 (rw) (29)  [0;32mM7_APC_AC_R1_TOP[0m  - [31:03] -  APC start address of memory region-1
</lang>
#### iomuxc_gpr.gpr26
<link=p.IOMUXC_GPR.GPR26>
#### p.IOMUXC_GPR.GPR32
<lang=dft>
 (rw)  [1;33m0x400ac080[0m (0x400ac000 + 0x0080)
GPR32 General Purpose Register
 (rw) (20)  [0;32mFLEXSPI_REMAP_ADDR_OFFSET[0m  - [31:12] -  Offset address of flexspi1 and flexspi2
</lang>
#### p.EWM.CTRL
<lang=dft>
 (rw)  [1;33m0x400b4000[0m (0x400b4000 + 0x0000)
Control Register
 (read-writeOnce) (01)  [0;32mEWMEN[0m  - [00:00] -  EWM enable.
 (read-writeOnce) (01)  [0;32mASSIN[0m  - [01:01] -  EWM_in's Assertion State Select.
 (read-writeOnce) (01)  [0;32mINEN[0m  - [02:02] -  Input Enable.
 (rw) (01)  [0;32mINTEN[0m  - [03:03] -  Interrupt Enable.
</lang>
#### EWM.CMPL
<link=p.EWM.CMPL>
#### p.wdog1.wcr
<link=p.WDOG1.WCR>
#### WDOG2.WCR
<link=p.WDOG2.WCR>
#### rtwdog.cs
<link=p.RTWDOG.CS>
#### p.adc1.r7
<link=p.ADC1.R7>
#### adc1.ofs
<link=p.ADC1.OFS>
#### p.adc2.hc4
<link=p.ADC2.HC4>
#### ADC2.R1
<link=p.ADC2.R1>
#### p.ADC2.CFG
<lang=dft>
 (rw)  [1;33m0x400c8044[0m (0x400c8000 + 0x0044)
Configuration register
 (rw) (02)  [0;32mADICLK[0m  - [01:00] -  Input Clock Select
      0 - ADICLK_0 :
         IPG clock
      0x1 - ADICLK_1 :
         IPG clock divided by 2
      0x3 - ADICLK_3 :
         Asynchronous clock (ADACK)
 (rw) (02)  [0;32mMODE[0m  - [03:02] -  Conversion Mode Selection
      0 - MODE_0 :
         8-bit conversion
      0x1 - MODE_1 :
         10-bit conversion
      0x2 - MODE_2 :
         12-bit conversion
 (rw) (01)  [0;32mADLSMP[0m  - [04:04] -  Long Sample Time Configuration
      0 - ADLSMP_0 :
         Short sample mode.
      0x1 - ADLSMP_1 :
         Long sample mode.
 (rw) (02)  [0;32mADIV[0m  - [06:05] -  Clock Divide Select
      0 - ADIV_0 :
         Input clock
      0x1 - ADIV_1 :
         Input clock / 2
      0x2 - ADIV_2 :
         Input clock / 4
      0x3 - ADIV_3 :
         Input clock / 8
 (rw) (01)  [0;32mADLPC[0m  - [07:07] -  Low-Power Configuration
      0 - ADLPC_0 :
         ADC hard block not in low power mode.
      0x1 - ADLPC_1 :
         ADC hard block in low power mode.
 (rw) (02)  [0;32mADSTS[0m  - [09:08] -  Defines the sample time duration
      0 - ADSTS_0 :
         Sample period (ADC clocks) = 2 if ADLSMP=0b Sample period (ADC clocks) 
         = 12 if ADLSMP=1b
      0x1 - ADSTS_1 :
         Sample period (ADC clocks) = 4 if ADLSMP=0b Sample period (ADC clocks) 
         = 16 if ADLSMP=1b
      0x2 - ADSTS_2 :
         Sample period (ADC clocks) = 6 if ADLSMP=0b Sample period (ADC clocks) 
         = 20 if ADLSMP=1b
      0x3 - ADSTS_3 :
         Sample period (ADC clocks) = 8 if ADLSMP=0b Sample period (ADC clocks) 
         = 24 if ADLSMP=1b
 (rw) (01)  [0;32mADHSC[0m  - [10:10] -  High Speed Configuration
      0 - ADHSC_0 :
         Normal conversion selected.
      0x1 - ADHSC_1 :
         High speed conversion selected.
 (rw) (02)  [0;32mREFSEL[0m  - [12:11] -  Voltage Reference Selection
      0 - REFSEL_0 :
         Selects VREFH/VREFL as reference voltage.
 (rw) (01)  [0;32mADTRG[0m  - [13:13] -  Conversion Trigger Select
      0 - ADTRG_0 :
         Software trigger selected
      0x1 - ADTRG_1 :
         Hardware trigger selected
 (rw) (02)  [0;32mAVGS[0m  - [15:14] -  Hardware Average select
      0 - AVGS_0 :
         4 samples averaged
      0x1 - AVGS_1 :
         8 samples averaged
      0x2 - AVGS_2 :
         16 samples averaged
      0x3 - AVGS_3 :
         32 samples averaged
 (rw) (01)  [0;32mOVWREN[0m  - [16:16] -  Data Overwrite Enable
      0 - OVWREN_0 :
         Disable the overwriting. Existing Data in Data result register will not
          be overwritten by subsequent converted data.
      0x1 - OVWREN_1 :
         Enable the overwriting.
</lang>
#### adc2.gs
<link=p.ADC2.GS>
#### ADC2.OFS
<link=p.ADC2.OFS>
#### trng.pkrmax
<link=p.TRNG.PKRMAX>
#### p.trng.frqmax
<link=p.TRNG.FRQMAX>
#### p.TRNG.SCML
<lang=dft>
 (rw)  [1;33m0x400cc020[0m (0x400cc000 + 0x0020)
Statistical Check Monobit Limit Register
 (rw) (16)  [0;32mMONO_MAX[0m  - [15:00] -  Monobit Maximum Limit
 (rw) (16)  [0;32mMONO_RNG[0m  - [31:16] -  Monobit Range
</lang>
#### TRNG.SCML
<link=p.TRNG.SCML>
#### TRNG.SCR5C
<link=p.TRNG.SCR5C>
#### p.trng.ent[9]
<link=p.TRNG.ENT[9]>
#### p.trng.ent[10]
<link=p.TRNG.ENT[10]>
#### trng.ent[15]
<link=p.TRNG.ENT[15]>
#### trng.pkrcnt10
<link=p.TRNG.PKRCNT10>
#### TRNG.PKRCNT10
<link=p.TRNG.PKRCNT10>
#### p.TRNG.PKRCNT32
<lang=dft>
 (ro)  [1;33m0x400cc084[0m (0x400cc000 + 0x0084)
Statistical Check Poker Count 3 and 2 Register
 (ro) (16)  [0;32mPKR_2_CT[0m  - [15:00] -  Poker 2h Count
 (ro) (16)  [0;32mPKR_3_CT[0m  - [31:16] -  Poker 3h Count
</lang>
#### p.trng.pkrcnt32
<link=p.TRNG.PKRCNT32>
#### p.trng.int_mask
<link=p.TRNG.INT_MASK>
#### p.SNVS.HPCR
<lang=dft>
 (rw)  [1;33m0x400d4008[0m (0x400d4000 + 0x0008)
SNVS_HP Control Register
 (rw) (01)  [0;32mRTC_EN[0m  - [00:00] -  HP Real Time Counter Enable
      0 - RTC_EN_0 :
         RTC is disabled
      0x1 - RTC_EN_1 :
         RTC is enabled
 (rw) (01)  [0;32mHPTA_EN[0m  - [01:01] -  HP Time Alarm Enable When set, the time alarm interrupt is generated if the val
 ue in the HP Time Alarm Registers is equal to the value of the HP Real Time Cou
 nter
      0 - HPTA_EN_0 :
         HP Time Alarm Interrupt is disabled
      0x1 - HPTA_EN_1 :
         HP Time Alarm Interrupt is enabled
 (rw) (01)  [0;32mDIS_PI[0m  - [02:02] -  Disable periodic interrupt in the functional interrupt
      0 - DIS_PI_0 :
         Periodic interrupt will trigger a functional interrupt
      0x1 - DIS_PI_1 :
         Disable periodic interrupt in the function interrupt
 (rw) (01)  [0;32mPI_EN[0m  - [03:03] -  HP Periodic Interrupt Enable The periodic interrupt can be generated only if th
 e HP Real Time Counter is enabled
      0 - PI_EN_0 :
         HP Periodic Interrupt is disabled
      0x1 - PI_EN_1 :
         HP Periodic Interrupt is enabled
 (rw) (04)  [0;32mPI_FREQ[0m  - [07:04] -  Periodic Interrupt Frequency Defines frequency of the periodic interrupt
      0 - PI_FREQ_0 :
         - bit 0 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0x1 - PI_FREQ_1 :
         - bit 1 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0x2 - PI_FREQ_2 :
         - bit 2 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0x3 - PI_FREQ_3 :
         - bit 3 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0x4 - PI_FREQ_4 :
         - bit 4 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0x5 - PI_FREQ_5 :
         - bit 5 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0x6 - PI_FREQ_6 :
         - bit 6 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0x7 - PI_FREQ_7 :
         - bit 7 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0x8 - PI_FREQ_8 :
         - bit 8 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0x9 - PI_FREQ_9 :
         - bit 9 of the HPRTCLR is selected as a source of the periodic interrup
         t
      0xA - PI_FREQ_10 :
         - bit 10 of the HPRTCLR is selected as a source of the periodic interru
         pt
      0xB - PI_FREQ_11 :
         - bit 11 of the HPRTCLR is selected as a source of the periodic interru
         pt
      0xC - PI_FREQ_12 :
         - bit 12 of the HPRTCLR is selected as a source of the periodic interru
         pt
      0xD - PI_FREQ_13 :
         - bit 13 of the HPRTCLR is selected as a source of the periodic interru
         pt
      0xE - PI_FREQ_14 :
         - bit 14 of the HPRTCLR is selected as a source of the periodic interru
         pt
      0xF - PI_FREQ_15 :
         - bit 15 of the HPRTCLR is selected as a source of the periodic interru
         pt
 (rw) (01)  [0;32mHPCALB_EN[0m  - [08:08] -  HP Real Time Counter Calibration Enabled Indicates that the time calibration me
 chanism is enabled.
      0 - HPCALB_EN_0 :
         HP Timer calibration disabled
      0x1 - HPCALB_EN_1 :
         HP Timer calibration enabled
 (rw) (05)  [0;32mHPCALB_VAL[0m  - [14:10] -  HP Calibration Value Defines signed calibration value for the HP Real Time Coun
 ter
      0 - HPCALB_VAL_0 :
         +0 counts per each 32768 ticks of the counter
      0x1 - HPCALB_VAL_1 :
         +1 counts per each 32768 ticks of the counter
      0x2 - HPCALB_VAL_2 :
         +2 counts per each 32768 ticks of the counter
      0xF - HPCALB_VAL_15 :
         +15 counts per each 32768 ticks of the counter
      0x10 - HPCALB_VAL_16 :
         -16 counts per each 32768 ticks of the counter
      0x11 - HPCALB_VAL_17 :
         -15 counts per each 32768 ticks of the counter
      0x1E - HPCALB_VAL_30 :
         -2 counts per each 32768 ticks of the counter
      0x1F - HPCALB_VAL_31 :
         -1 counts per each 32768 ticks of the counter
 (rw) (01)  [0;32mHP_TS[0m  - [16:16] -  HP Time Synchronize
      0 - HP_TS_0 :
         No Action
      0x1 - HP_TS_1 :
         Synchronize the HP Time Counter to the LP Time Counter
 (rw) (03)  [0;32mBTN_CONFIG[0m  - [26:24] -  Button Configuration
 (rw) (01)  [0;32mBTN_MASK[0m  - [27:27] -  Button interrupt mask
</lang>
#### p.snvs.hphacivr
<link=p.SNVS.HPHACIVR>
#### snvs.hprtcmr
<link=p.SNVS.HPRTCMR>
#### SNVS.LPSR
<link=p.SNVS.LPSR>
#### p.SNVS.LPZMKR[3]
<lang=dft>
 (rw)  [1;33m0x400d4078[0m (0x400d4000 + 0x0078)
SNVS_LP Zeroizable Master Key Register
 (rw) (32)  [0;32mZMK[0m  - [31:00] -  Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit Z
 MK value
</lang>
#### SNVS.LPGPR_alias[2]
<link=p.SNVS.LPGPR_ALIAS[2]>
#### p.SNVS.LPGPR[0]
<lang=dft>
 (rw)  [1;33m0x400d4100[0m (0x400d4000 + 0x0100)
SNVS_LP General Purpose Registers 0 .. 7
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### snvs.lpgpr[0]
<link=p.SNVS.LPGPR[0]>
#### SNVS.LPGPR[1]
<link=p.SNVS.LPGPR[1]>
#### p.snvs.hpvidr1
<link=p.SNVS.HPVIDR1>
#### SNVS.HPVIDR2
<link=p.SNVS.HPVIDR2>
#### ccm_analog.pll_usb2
<link=p.CCM_ANALOG.PLL_USB2>
#### ccm_analog.pll_usb2_clr
<link=p.CCM_ANALOG.PLL_USB2_CLR>
#### p.ccm_analog.pll_sys
<link=p.CCM_ANALOG.PLL_SYS>
#### p.CCM_ANALOG.PLL_SYS_CLR
<lang=dft>
 (rw)  [1;33m0x400d8038[0m (0x400d8000 + 0x0038)
Analog System PLL Control Register
 (rw) (01)  [0;32mDIV_SELECT[0m  - [00:00] -  This field controls the PLL loop divider. 0 - Fout=Fref*20; 1 - Fout=Fref*22.
 (rw) (01)  [0;32mPOWERDOWN[0m  - [12:12] -  Powers down the PLL.
 (rw) (01)  [0;32mENABLE[0m  - [13:13] -  Enable PLL output
 (rw) (02)  [0;32mBYPASS_CLK_SRC[0m  - [15:14] -  Determines the bypass source.
      0 - REF_CLK_24M :
         Select the 24MHz oscillator as source.
      0x1 - CLK1 :
         Select the CLK1_N / CLK1_P as source.
 (rw) (01)  [0;32mBYPASS[0m  - [16:16] -  Bypass the PLL.
 (ro) (01)  [0;32mLOCK[0m  - [31:31] -  1 - PLL is currently locked; 0 - PLL is not currently locked.
</lang>
#### ccm_analog.pll_sys_tog
<link=p.CCM_ANALOG.PLL_SYS_TOG>
#### CCM_ANALOG.PLL_SYS_TOG
<link=p.CCM_ANALOG.PLL_SYS_TOG>
#### p.ccm_analog.pll_sys_denom
<link=p.CCM_ANALOG.PLL_SYS_DENOM>
#### ccm_analog.pll_audio
<link=p.CCM_ANALOG.PLL_AUDIO>
#### p.CCM_ANALOG.PLL_VIDEO_SET
<lang=dft>
 (rw)  [1;33m0x400d80a4[0m (0x400d8000 + 0x00a4)
Analog Video PLL control Register
 (rw) (07)  [0;32mDIV_SELECT[0m  - [06:00] -  This field controls the PLL loop divider. Valid range for DIV_SELECT divider va
 lue: 27~54.
 (rw) (01)  [0;32mPOWERDOWN[0m  - [12:12] -  Powers down the PLL.
 (rw) (01)  [0;32mENABLE[0m  - [13:13] -  Enalbe PLL output
 (rw) (02)  [0;32mBYPASS_CLK_SRC[0m  - [15:14] -  Determines the bypass source.
      0 - REF_CLK_24M :
         Select the 24MHz oscillator as source.
      0x1 - CLK1 :
         Select the CLK1_N / CLK1_P as source.
 (rw) (01)  [0;32mBYPASS[0m  - [16:16] -  Bypass the PLL.
 (rw) (02)  [0;32mPOST_DIV_SELECT[0m  - [20:19] -  These bits implement a divider after the PLL, but before the enable and bypass 
 mux.
      0 - POST_DIV_SELECT_0 :
         Divide by 4.
      0x1 - POST_DIV_SELECT_1 :
         Divide by 2.
      0x2 - POST_DIV_SELECT_2 :
         Divide by 1.
 (ro) (01)  [0;32mLOCK[0m  - [31:31] -  1 - PLL is currently locked; 0 - PLL is not currently locked.
</lang>
#### p.ccm_analog.pll_video_denom
<link=p.CCM_ANALOG.PLL_VIDEO_DENOM>
#### ccm_analog.pll_enet
<link=p.CCM_ANALOG.PLL_ENET>
#### CCM_ANALOG.PLL_ENET
<link=p.CCM_ANALOG.PLL_ENET>
#### p.CCM_ANALOG.PLL_ENET_TOG
<lang=dft>
 (rw)  [1;33m0x400d80ec[0m (0x400d8000 + 0x00ec)
Analog ENET PLL Control Register
 (rw) (02)  [0;32mDIV_SELECT[0m  - [01:00] -  Controls the frequency of the ethernet reference clock
 (rw) (02)  [0;32mENET2_DIV_SELECT[0m  - [03:02] -  Controls the frequency of the ENET2 reference clock.
      0 - ENET2_DIV_SELECT_0 :
         25MHz
      0x1 - ENET2_DIV_SELECT_1 :
         50MHz
      0x2 - ENET2_DIV_SELECT_2 :
         100MHz (not 50% duty cycle)
      0x3 - ENET2_DIV_SELECT_3 :
         125MHz
 (rw) (01)  [0;32mPOWERDOWN[0m  - [12:12] -  Powers down the PLL.
 (rw) (01)  [0;32mENABLE[0m  - [13:13] -  Enable the PLL providing the ENET reference clock.
 (rw) (02)  [0;32mBYPASS_CLK_SRC[0m  - [15:14] -  Determines the bypass source.
      0 - REF_CLK_24M :
         Select the 24MHz oscillator as source.
      0x1 - CLK1 :
         Select the CLK1_N / CLK1_P as source.
 (rw) (01)  [0;32mBYPASS[0m  - [16:16] -  Bypass the PLL.
 (rw) (01)  [0;32mENET2_REF_EN[0m  - [20:20] -  Enable the PLL providing the ENET2 reference clock
 (rw) (01)  [0;32mENET_25M_REF_EN[0m  - [21:21] -  Enable the PLL providing ENET 25 MHz reference clock
 (ro) (01)  [0;32mLOCK[0m  - [31:31] -  1 - PLL is currently locked; 0 - PLL is not currently locked.
</lang>
#### CCM_ANALOG.PLL_ENET_TOG
<link=p.CCM_ANALOG.PLL_ENET_TOG>
#### p.CCM_ANALOG.PFD_480_SET
<lang=dft>
 (rw)  [1;33m0x400d80f4[0m (0x400d8000 + 0x00f4)
480MHz Clock (PLL3) Phase Fractional Divider Control Register
 (rw) (06)  [0;32mPFD0_FRAC[0m  - [05:00] -  This field controls the fractional divide value
 (ro) (01)  [0;32mPFD0_STABLE[0m  - [06:06] -  This read-only bitfield is for DIAGNOSTIC PURPOSES ONLY since the fractional di
 vider should become stable quickly enough that this field will never need to be
  used by either device driver or application code
 (rw) (01)  [0;32mPFD0_CLKGATE[0m  - [07:07] -  If set to 1, the IO fractional divider clock (reference ref_pfd0) is off (power
  savings)
 (rw) (06)  [0;32mPFD1_FRAC[0m  - [13:08] -  This field controls the fractional divide value
 (ro) (01)  [0;32mPFD1_STABLE[0m  - [14:14] -  This read-only bitfield is for DIAGNOSTIC PURPOSES ONLY since the fractional di
 vider should become stable quickly enough that this field will never need to be
  used by either device driver or application code
 (rw) (01)  [0;32mPFD1_CLKGATE[0m  - [15:15] -  IO Clock Gate
 (rw) (06)  [0;32mPFD2_FRAC[0m  - [21:16] -  This field controls the fractional divide value
 (ro) (01)  [0;32mPFD2_STABLE[0m  - [22:22] -  This read-only bitfield is for DIAGNOSTIC PURPOSES ONLY since the fractional di
 vider should become stable quickly enough that this field will never need to be
  used by either device driver or application code
 (rw) (01)  [0;32mPFD2_CLKGATE[0m  - [23:23] -  IO Clock Gate
 (rw) (06)  [0;32mPFD3_FRAC[0m  - [29:24] -  This field controls the fractional divide value
 (ro) (01)  [0;32mPFD3_STABLE[0m  - [30:30] -  This read-only bitfield is for DIAGNOSTIC PURPOSES ONLY since the fractional di
 vider should become stable quickly enough that this field will never need to be
  used by either device driver or application code
 (rw) (01)  [0;32mPFD3_CLKGATE[0m  - [31:31] -  IO Clock Gate
</lang>
#### p.ccm_analog.pfd_480_clr
<link=p.CCM_ANALOG.PFD_480_CLR>
#### p.CCM_ANALOG.PFD_528_SET
<lang=dft>
 (rw)  [1;33m0x400d8104[0m (0x400d8000 + 0x0104)
528MHz Clock (PLL2) Phase Fractional Divider Control Register
 (rw) (06)  [0;32mPFD0_FRAC[0m  - [05:00] -  This field controls the fractional divide value
 (ro) (01)  [0;32mPFD0_STABLE[0m  - [06:06] -  This read-only bitfield is for DIAGNOSTIC PURPOSES ONLY since the fractional di
 vider should become stable quickly enough that this field will never need to be
  used by either device driver or application code
 (rw) (01)  [0;32mPFD0_CLKGATE[0m  - [07:07] -  If set to 1, the IO fractional divider clock (reference ref_pfd0) is off (power
  savings)
 (rw) (06)  [0;32mPFD1_FRAC[0m  - [13:08] -  This field controls the fractional divide value
 (ro) (01)  [0;32mPFD1_STABLE[0m  - [14:14] -  This read-only bitfield is for DIAGNOSTIC PURPOSES ONLY since the fractional di
 vider should become stable quickly enough that this field will never need to be
  used by either device driver or application code
 (rw) (01)  [0;32mPFD1_CLKGATE[0m  - [15:15] -  IO Clock Gate
 (rw) (06)  [0;32mPFD2_FRAC[0m  - [21:16] -  This field controls the fractional divide value
 (ro) (01)  [0;32mPFD2_STABLE[0m  - [22:22] -  This read-only bitfield is for DIAGNOSTIC PURPOSES ONLY since the fractional di
 vider should become stable quickly enough that this field will never need to be
  used by either device driver or application code
 (rw) (01)  [0;32mPFD2_CLKGATE[0m  - [23:23] -  IO Clock Gate
 (rw) (06)  [0;32mPFD3_FRAC[0m  - [29:24] -  This field controls the fractional divide value
 (ro) (01)  [0;32mPFD3_STABLE[0m  - [30:30] -  This read-only bitfield is for DIAGNOSTIC PURPOSES ONLY since the fractional di
 vider should become stable quickly enough that this field will never need to be
  used by either device driver or application code
 (rw) (01)  [0;32mPFD3_CLKGATE[0m  - [31:31] -  IO Clock Gate
</lang>
#### p.CCM_ANALOG.MISC0_CLR
<lang=dft>
 (rw)  [1;33m0x400d8158[0m (0x400d8000 + 0x0158)
Miscellaneous Register 0
 (rw) (01)  [0;32mREFTOP_PWD[0m  - [00:00] -  Control bit to power-down the analog bandgap reference circuitry
 (rw) (01)  [0;32mREFTOP_SELFBIASOFF[0m  - [03:03] -  Control bit to disable the self-bias circuit in the analog bandgap
      0 - REFTOP_SELFBIASOFF_0 :
         Uses coarse bias currents for startup
      0x1 - REFTOP_SELFBIASOFF_1 :
         Uses bandgap-based bias currents for best performance.
 (rw) (03)  [0;32mREFTOP_VBGADJ[0m  - [06:04] -  Not related to CCM. See Power Management Unit (PMU)
      0 - REFTOP_VBGADJ_0 :
         Nominal VBG
      0x1 - REFTOP_VBGADJ_1 :
         VBG+0.78%
      0x2 - REFTOP_VBGADJ_2 :
         VBG+1.56%
      0x3 - REFTOP_VBGADJ_3 :
         VBG+2.34%
      0x4 - REFTOP_VBGADJ_4 :
         VBG-0.78%
      0x5 - REFTOP_VBGADJ_5 :
         VBG-1.56%
      0x6 - REFTOP_VBGADJ_6 :
         VBG-2.34%
      0x7 - REFTOP_VBGADJ_7 :
         VBG-3.12%
 (rw) (01)  [0;32mREFTOP_VBGUP[0m  - [07:07] -  Status bit that signals the analog bandgap voltage is up and stable
 (rw) (02)  [0;32mSTOP_MODE_CONFIG[0m  - [11:10] -  Configure the analog behavior in stop mode.
      0 - STOP_MODE_CONFIG_0 :
         All analog except RTC powered down on stop mode assertion.
      0x1 - STOP_MODE_CONFIG_1 :
         Beside RTC, analog bandgap, 1p1 and 2p5 regulators are also on.
      0x2 - STOP_MODE_CONFIG_2 :
         Beside RTC, 1p1 and 2p5 regulators are also on, low-power bandgap is se
         lected so that the normal analog bandgap together with the rest analog 
         is powered down.
      0x3 - STOP_MODE_CONFIG_3 :
         Beside RTC, low-power bandgap is selected and the rest analog is powere
         d down.
 (rw) (01)  [0;32mDISCON_HIGH_SNVS[0m  - [12:12] -  This bit controls a switch from VDD_HIGH_IN to VDD_SNVS_IN.
      0 - DISCON_HIGH_SNVS_0 :
         Turn on the switch
      0x1 - DISCON_HIGH_SNVS_1 :
         Turn off the switch
 (rw) (02)  [0;32mOSC_I[0m  - [14:13] -  This field determines the bias current in the 24MHz oscillator
      0 - NOMINAL :
         Nominal
      0x1 - MINUS_12_5_PERCENT :
         Decrease current by 12.5%
      0x2 - MINUS_25_PERCENT :
         Decrease current by 25.0%
      0x3 - MINUS_37_5_PERCENT :
         Decrease current by 37.5%
 (ro) (01)  [0;32mOSC_XTALOK[0m  - [15:15] -  Status bit that signals that the output of the 24-MHz crystal oscillator is sta
 ble
 (rw) (01)  [0;32mOSC_XTALOK_EN[0m  - [16:16] -  This bit enables the detector that signals when the 24MHz crystal oscillator is
  stable
 (rw) (01)  [0;32mCLKGATE_CTRL[0m  - [25:25] -  This bit allows disabling the clock gate (always ungated) for the xtal 24MHz cl
 ock that clocks the digital logic in the analog block
      0 - ALLOW_AUTO_GATE :
         Allow the logic to automatically gate the clock when the XTAL is powere
         d down.
      0x1 - NO_AUTO_GATE :
         Prevent the logic from ever gating off the clock.
 (rw) (03)  [0;32mCLKGATE_DELAY[0m  - [28:26] -  This field specifies the delay between powering up the XTAL 24MHz clock and rel
 easing the clock to the digital logic inside the analog block
      0 - CLKGATE_DELAY_0 :
         0.5ms
      0x1 - CLKGATE_DELAY_1 :
         1.0ms
      0x2 - CLKGATE_DELAY_2 :
         2.0ms
      0x3 - CLKGATE_DELAY_3 :
         3.0ms
      0x4 - CLKGATE_DELAY_4 :
         4.0ms
      0x5 - CLKGATE_DELAY_5 :
         5.0ms
      0x6 - CLKGATE_DELAY_6 :
         6.0ms
      0x7 - CLKGATE_DELAY_7 :
         7.0ms
 (rw) (01)  [0;32mRTC_XTAL_SOURCE[0m  - [29:29] -  This field indicates which chip source is being used for the rtc clock
      0 - RTC_XTAL_SOURCE_0 :
         Internal ring oscillator
      0x1 - RTC_XTAL_SOURCE_1 :
         RTC_XTAL
 (rw) (01)  [0;32mXTAL_24M_PWD[0m  - [30:30] -  This field powers down the 24M crystal oscillator if set true
</lang>
#### p.ccm_analog.misc0_clr
<link=p.CCM_ANALOG.MISC0_CLR>
#### p.CCM_ANALOG.MISC2
<lang=dft>
 (rw)  [1;33m0x400d8170[0m (0x400d8000 + 0x0170)
Miscellaneous Register 2
 (ro) (03)  [0;32mREG0_BO_OFFSET[0m  - [02:00] -  This field defines the brown out voltage offset for the CORE power domain
      0x4 - REG0_BO_OFFSET_4 :
         Brownout offset = 0.100V
      0x7 - REG0_BO_OFFSET_7 :
         Brownout offset = 0.175V
 (ro) (01)  [0;32mREG0_BO_STATUS[0m  - [03:03] -  Reg0 brownout status bit.Not related to CCM. See Power Management Unit (PMU)
      0x1 - REG0_BO_STATUS_1 :
         Brownout, supply is below target minus brownout offset.
 (rw) (01)  [0;32mREG0_ENABLE_BO[0m  - [05:05] -  Enables the brownout detection.Not related to CCM. See Power Management Unit (P
 MU)
 (ro) (01)  [0;32mREG0_OK[0m  - [06:06] -  ARM supply Not related to CCM. See Power Management Unit (PMU)
 (rw) (01)  [0;32mPLL3_DISABLE[0m  - [07:07] -  When USB is in low power suspend mode this Control bit is used to indicate if o
 ther system peripherals require the USB PLL3 clock when the SoC is not in low p
 ower mode
      0 - PLL3_DISABLE_0 :
         PLL3 is being used by peripherals and is enabled when SoC is not in any
          low power mode
      0x1 - PLL3_DISABLE_1 :
         PLL3 can be disabled when the SoC is not in any low power mode
 (ro) (03)  [0;32mREG1_BO_OFFSET[0m  - [10:08] -  This field defines the brown out voltage offset for the xPU power domain
      0x4 - REG1_BO_OFFSET_4 :
         Brownout offset = 0.100V
      0x7 - REG1_BO_OFFSET_7 :
         Brownout offset = 0.175V
 (ro) (01)  [0;32mREG1_BO_STATUS[0m  - [11:11] -  Reg1 brownout status bit. Not related to CCM. See Power Management Unit (PMU)
      0x1 - REG1_BO_STATUS_1 :
         Brownout, supply is below target minus brownout offset.
 (rw) (01)  [0;32mREG1_ENABLE_BO[0m  - [13:13] -  Enables the brownout detection.Not related to CCM. See Power Management Unit (P
 MU)
 (ro) (01)  [0;32mREG1_OK[0m  - [14:14] -  GPU/VPU supply Not related to CCM. See Power Management Unit (PMU)
 (rw) (01)  [0;32mAUDIO_DIV_LSB[0m  - [15:15] -  LSB of Post-divider for Audio PLL
      0 - AUDIO_DIV_LSB_0 :
         divide by 1 (Default)
      0x1 - AUDIO_DIV_LSB_1 :
         divide by 2
 (ro) (03)  [0;32mREG2_BO_OFFSET[0m  - [18:16] -  This field defines the brown out voltage offset for the xPU power domain
      0x4 - REG2_BO_OFFSET_4 :
         Brownout offset = 0.100V
      0x7 - REG2_BO_OFFSET_7 :
         Brownout offset = 0.175V
 (ro) (01)  [0;32mREG2_BO_STATUS[0m  - [19:19] -  Reg2 brownout status bit.Not related to CCM. See Power Management Unit (PMU)
 (rw) (01)  [0;32mREG2_ENABLE_BO[0m  - [21:21] -  Enables the brownout detection.Not related to CCM. See Power Management Unit (P
 MU)
 (ro) (01)  [0;32mREG2_OK[0m  - [22:22] -  Signals that the voltage is above the brownout level for the SOC supply
 (rw) (01)  [0;32mAUDIO_DIV_MSB[0m  - [23:23] -  MSB of Post-divider for Audio PLL
      0 - AUDIO_DIV_MSB_0 :
         divide by 1 (Default)
      0x1 - AUDIO_DIV_MSB_1 :
         divide by 2
 (rw) (02)  [0;32mREG0_STEP_TIME[0m  - [25:24] -  Number of clock periods (24MHz clock).Not related to CCM. See Power Management 
 Unit (PMU)
      0 - 64_CLOCKS :
         64
      0x1 - 128_CLOCKS :
         128
      0x2 - 256_CLOCKS :
         256
      0x3 - 512_CLOCKS :
         512
 (rw) (02)  [0;32mREG1_STEP_TIME[0m  - [27:26] -  Number of clock periods (24MHz clock).Not related to CCM. See Power Management 
 Unit (PMU)
      0 - 64_CLOCKS :
         64
      0x1 - 128_CLOCKS :
         128
      0x2 - 256_CLOCKS :
         256
      0x3 - 512_CLOCKS :
         512
 (rw) (02)  [0;32mREG2_STEP_TIME[0m  - [29:28] -  Number of clock periods (24MHz clock).Not related to CCM. See Power Management 
 Unit (PMU)
      0 - 64_CLOCKS :
         64
      0x1 - 128_CLOCKS :
         128
      0x2 - 256_CLOCKS :
         256
      0x3 - 512_CLOCKS :
         512
 (rw) (02)  [0;32mVIDEO_DIV[0m  - [31:30] -  Post-divider for video
      0 - VIDEO_DIV_0 :
         divide by 1 (Default)
      0x1 - VIDEO_DIV_1 :
         divide by 2
      0x2 - VIDEO_DIV_2 :
         divide by 1
      0x3 - VIDEO_DIV_3 :
         divide by 4
</lang>
#### ccm_analog.misc2
<link=p.CCM_ANALOG.MISC2>
#### ccm_analog.misc2_tog
<link=p.CCM_ANALOG.MISC2_TOG>
#### pmu.reg_3p0_set
<link=p.PMU.REG_3P0_SET>
#### p.pmu.reg_3p0_tog
<link=p.PMU.REG_3P0_TOG>
#### PMU.REG_2P5_CLR
<link=p.PMU.REG_2P5_CLR>
#### PMU.REG_CORE
<link=p.PMU.REG_CORE>
#### p.pmu.reg_core_set
<link=p.PMU.REG_CORE_SET>
#### p.PMU.MISC0
<lang=dft>
 (rw)  [1;33m0x400d8150[0m (0x400d8000 + 0x0150)
Miscellaneous Register 0
 (rw) (01)  [0;32mREFTOP_PWD[0m  - [00:00] -  Control bit to power-down the analog bandgap reference circuitry
 (rw) (01)  [0;32mREFTOP_SELFBIASOFF[0m  - [03:03] -  Control bit to disable the self-bias circuit in the analog bandgap
      0 - REFTOP_SELFBIASOFF_0 :
         Uses coarse bias currents for startup
      0x1 - REFTOP_SELFBIASOFF_1 :
         Uses bandgap-based bias currents for best performance.
 (rw) (03)  [0;32mREFTOP_VBGADJ[0m  - [06:04] -  no description available
      0 - REFTOP_VBGADJ_0 :
         Nominal VBG
      0x1 - REFTOP_VBGADJ_1 :
         VBG+0.78%
      0x2 - REFTOP_VBGADJ_2 :
         VBG+1.56%
      0x3 - REFTOP_VBGADJ_3 :
         VBG+2.34%
      0x4 - REFTOP_VBGADJ_4 :
         VBG-0.78%
      0x5 - REFTOP_VBGADJ_5 :
         VBG-1.56%
      0x6 - REFTOP_VBGADJ_6 :
         VBG-2.34%
      0x7 - REFTOP_VBGADJ_7 :
         VBG-3.12%
 (rw) (01)  [0;32mREFTOP_VBGUP[0m  - [07:07] -  Status bit that signals the analog bandgap voltage is up and stable. 1 - Stable
 .
 (rw) (02)  [0;32mSTOP_MODE_CONFIG[0m  - [11:10] -  Configure the analog behavior in stop mode.
      0 - STOP_MODE_CONFIG_0 :
         SUSPEND (DSM)
      0x1 - STANDBY :
         Analog regulators are ON.
      0x2 - STOP_MODE_CONFIG_2 :
         STOP (lower power)
      0x3 - STOP_MODE_CONFIG_3 :
         STOP (very lower power)
 (rw) (01)  [0;32mDISCON_HIGH_SNVS[0m  - [12:12] -  This bit controls a switch from VDD_HIGH_IN to VDD_SNVS_IN.
      0 - DISCON_HIGH_SNVS_0 :
         Turn on the switch
      0x1 - DISCON_HIGH_SNVS_1 :
         Turn off the switch
 (rw) (02)  [0;32mOSC_I[0m  - [14:13] -  This field determines the bias current in the 24MHz oscillator
      0 - NOMINAL :
         Nominal
      0x1 - MINUS_12_5_PERCENT :
         Decrease current by 12.5%
      0x2 - MINUS_25_PERCENT :
         Decrease current by 25.0%
      0x3 - MINUS_37_5_PERCENT :
         Decrease current by 37.5%
 (ro) (01)  [0;32mOSC_XTALOK[0m  - [15:15] -  Status bit that signals that the output of the 24-MHz crystal oscillator is sta
 ble
 (rw) (01)  [0;32mOSC_XTALOK_EN[0m  - [16:16] -  This bit enables the detector that signals when the 24MHz crystal oscillator is
  stable
 (rw) (01)  [0;32mCLKGATE_CTRL[0m  - [25:25] -  This bit allows disabling the clock gate (always ungated) for the xtal 24MHz cl
 ock that clocks the digital logic in the analog block
      0 - ALLOW_AUTO_GATE :
         Allow the logic to automatically gate the clock when the XTAL is powere
         d down.
      0x1 - NO_AUTO_GATE :
         Prevent the logic from ever gating off the clock.
 (rw) (03)  [0;32mCLKGATE_DELAY[0m  - [28:26] -  This field specifies the delay between powering up the XTAL 24MHz clock and rel
 easing the clock to the digital logic inside the analog block
      0 - CLKGATE_DELAY_0 :
         0.5ms
      0x1 - CLKGATE_DELAY_1 :
         1.0ms
      0x2 - CLKGATE_DELAY_2 :
         2.0ms
      0x3 - CLKGATE_DELAY_3 :
         3.0ms
      0x4 - CLKGATE_DELAY_4 :
         4.0ms
      0x5 - CLKGATE_DELAY_5 :
         5.0ms
      0x6 - CLKGATE_DELAY_6 :
         6.0ms
      0x7 - CLKGATE_DELAY_7 :
         7.0ms
 (ro) (01)  [0;32mRTC_XTAL_SOURCE[0m  - [29:29] -  This field indicates which chip source is being used for the rtc clock.
      0 - RTC_XTAL_SOURCE_0 :
         Internal ring oscillator
      0x1 - RTC_XTAL_SOURCE_1 :
         RTC_XTAL
 (rw) (01)  [0;32mXTAL_24M_PWD[0m  - [30:30] -  This field powers down the 24M crystal oscillator if set true.
 (rw) (01)  [0;32mVID_PLL_PREDIV[0m  - [31:31] -  Predivider for the source clock of the PLL's.
      0 - VID_PLL_PREDIV_0 :
         Divide by 1
      0x1 - VID_PLL_PREDIV_1 :
         Divide by 2
</lang>
#### p.PMU.MISC0_TOG
<lang=dft>
 (rw)  [1;33m0x400d815c[0m (0x400d8000 + 0x015c)
Miscellaneous Register 0
 (rw) (01)  [0;32mREFTOP_PWD[0m  - [00:00] -  Control bit to power-down the analog bandgap reference circuitry
 (rw) (01)  [0;32mREFTOP_SELFBIASOFF[0m  - [03:03] -  Control bit to disable the self-bias circuit in the analog bandgap
      0 - REFTOP_SELFBIASOFF_0 :
         Uses coarse bias currents for startup
      0x1 - REFTOP_SELFBIASOFF_1 :
         Uses bandgap-based bias currents for best performance.
 (rw) (03)  [0;32mREFTOP_VBGADJ[0m  - [06:04] -  no description available
      0 - REFTOP_VBGADJ_0 :
         Nominal VBG
      0x1 - REFTOP_VBGADJ_1 :
         VBG+0.78%
      0x2 - REFTOP_VBGADJ_2 :
         VBG+1.56%
      0x3 - REFTOP_VBGADJ_3 :
         VBG+2.34%
      0x4 - REFTOP_VBGADJ_4 :
         VBG-0.78%
      0x5 - REFTOP_VBGADJ_5 :
         VBG-1.56%
      0x6 - REFTOP_VBGADJ_6 :
         VBG-2.34%
      0x7 - REFTOP_VBGADJ_7 :
         VBG-3.12%
 (rw) (01)  [0;32mREFTOP_VBGUP[0m  - [07:07] -  Status bit that signals the analog bandgap voltage is up and stable. 1 - Stable
 .
 (rw) (02)  [0;32mSTOP_MODE_CONFIG[0m  - [11:10] -  Configure the analog behavior in stop mode.
      0 - STOP_MODE_CONFIG_0 :
         SUSPEND (DSM)
      0x1 - STANDBY :
         Analog regulators are ON.
      0x2 - STOP_MODE_CONFIG_2 :
         STOP (lower power)
      0x3 - STOP_MODE_CONFIG_3 :
         STOP (very lower power)
 (rw) (01)  [0;32mDISCON_HIGH_SNVS[0m  - [12:12] -  This bit controls a switch from VDD_HIGH_IN to VDD_SNVS_IN.
      0 - DISCON_HIGH_SNVS_0 :
         Turn on the switch
      0x1 - DISCON_HIGH_SNVS_1 :
         Turn off the switch
 (rw) (02)  [0;32mOSC_I[0m  - [14:13] -  This field determines the bias current in the 24MHz oscillator
      0 - NOMINAL :
         Nominal
      0x1 - MINUS_12_5_PERCENT :
         Decrease current by 12.5%
      0x2 - MINUS_25_PERCENT :
         Decrease current by 25.0%
      0x3 - MINUS_37_5_PERCENT :
         Decrease current by 37.5%
 (ro) (01)  [0;32mOSC_XTALOK[0m  - [15:15] -  Status bit that signals that the output of the 24-MHz crystal oscillator is sta
 ble
 (rw) (01)  [0;32mOSC_XTALOK_EN[0m  - [16:16] -  This bit enables the detector that signals when the 24MHz crystal oscillator is
  stable
 (rw) (01)  [0;32mCLKGATE_CTRL[0m  - [25:25] -  This bit allows disabling the clock gate (always ungated) for the xtal 24MHz cl
 ock that clocks the digital logic in the analog block
      0 - ALLOW_AUTO_GATE :
         Allow the logic to automatically gate the clock when the XTAL is powere
         d down.
      0x1 - NO_AUTO_GATE :
         Prevent the logic from ever gating off the clock.
 (rw) (03)  [0;32mCLKGATE_DELAY[0m  - [28:26] -  This field specifies the delay between powering up the XTAL 24MHz clock and rel
 easing the clock to the digital logic inside the analog block
      0 - CLKGATE_DELAY_0 :
         0.5ms
      0x1 - CLKGATE_DELAY_1 :
         1.0ms
      0x2 - CLKGATE_DELAY_2 :
         2.0ms
      0x3 - CLKGATE_DELAY_3 :
         3.0ms
      0x4 - CLKGATE_DELAY_4 :
         4.0ms
      0x5 - CLKGATE_DELAY_5 :
         5.0ms
      0x6 - CLKGATE_DELAY_6 :
         6.0ms
      0x7 - CLKGATE_DELAY_7 :
         7.0ms
 (ro) (01)  [0;32mRTC_XTAL_SOURCE[0m  - [29:29] -  This field indicates which chip source is being used for the rtc clock.
      0 - RTC_XTAL_SOURCE_0 :
         Internal ring oscillator
      0x1 - RTC_XTAL_SOURCE_1 :
         RTC_XTAL
 (rw) (01)  [0;32mXTAL_24M_PWD[0m  - [30:30] -  This field powers down the 24M crystal oscillator if set true.
 (rw) (01)  [0;32mVID_PLL_PREDIV[0m  - [31:31] -  Predivider for the source clock of the PLL's.
      0 - VID_PLL_PREDIV_0 :
         Divide by 1
      0x1 - VID_PLL_PREDIV_1 :
         Divide by 2
</lang>
#### pmu.misc2_set
<link=p.PMU.MISC2_SET>
#### p.pmu.misc2_clr
<link=p.PMU.MISC2_CLR>
#### tempmon.tempsense0_clr
<link=p.TEMPMON.TEMPSENSE0_CLR>
#### tempmon.tempsense2_set
<link=p.TEMPMON.TEMPSENSE2_SET>
#### p.usb_analog.usb1_vbus_detect_clr
<link=p.USB_ANALOG.USB1_VBUS_DETECT_CLR>
#### p.usb_analog.usb1_chrg_detect
<link=p.USB_ANALOG.USB1_CHRG_DETECT>
#### USB_ANALOG.USB1_VBUS_DETECT_STAT
<link=p.USB_ANALOG.USB1_VBUS_DETECT_STAT>
#### USB_ANALOG.USB1_LOOPBACK_SET
<link=p.USB_ANALOG.USB1_LOOPBACK_SET>
#### usb_analog.usb2_vbus_detect_tog
<link=p.USB_ANALOG.USB2_VBUS_DETECT_TOG>
#### p.usb_analog.usb2_chrg_detect_set
<link=p.USB_ANALOG.USB2_CHRG_DETECT_SET>
#### usb_analog.usb2_chrg_detect_clr
<link=p.USB_ANALOG.USB2_CHRG_DETECT_CLR>
#### USB_ANALOG.USB2_CHRG_DETECT_CLR
<link=p.USB_ANALOG.USB2_CHRG_DETECT_CLR>
#### p.USB_ANALOG.USB2_LOOPBACK_CLR
<lang=dft>
 (rw)  [1;33m0x400d8248[0m (0x400d8000 + 0x0248)
USB Loopback Test Register
 (rw) (01)  [0;32mUTMI_TESTSTART[0m  - [00:00] -  Setting this bit can enable 1
</lang>
#### p.USB_ANALOG.USB2_LOOPBACK_TOG
<lang=dft>
 (rw)  [1;33m0x400d824c[0m (0x400d8000 + 0x024c)
USB Loopback Test Register
 (rw) (01)  [0;32mUTMI_TESTSTART[0m  - [00:00] -  Setting this bit can enable 1
</lang>
#### p.usb_analog.usb2_misc_clr
<link=p.USB_ANALOG.USB2_MISC_CLR>
#### p.usb_analog.digprog
<link=p.USB_ANALOG.DIGPROG>
#### p.XTALOSC24M
<lang=dft>
base: 0x400d8000
LOWPWR_CTRL     LOWPWR_CTRL_CLR LOWPWR_CTRL_SET LOWPWR_CTRL_TOG 
MISC0           MISC0_CLR       MISC0_SET       MISC0_TOG       
OSC_CONFIG0     OSC_CONFIG0_CLR OSC_CONFIG0_SET OSC_CONFIG0_TOG 
OSC_CONFIG1     OSC_CONFIG1_CLR OSC_CONFIG1_SET OSC_CONFIG1_TOG 
OSC_CONFIG2     OSC_CONFIG2_CLR OSC_CONFIG2_SET OSC_CONFIG2_TOG 
输入 p.XTALOSC24M.{reg_name} 以查看寄存器的详细信息
type p.XTALOSC24M.{reg_name} to check details of registers
</lang>
#### p.XTALOSC24M.LOWPWR_CTRL_TOG
<lang=dft>
 (rw)  [1;33m0x400d827c[0m (0x400d8000 + 0x027c)
XTAL OSC (LP) Control Register
 (rw) (01)  [0;32mRC_OSC_EN[0m  - [00:00] -  RC Osc. enable control.
      0 - RC_OSC_EN_0 :
         Use XTAL OSC to source the 24MHz clock
      0x1 - RC_OSC_EN_1 :
         Use RC OSC
 (rw) (01)  [0;32mOSC_SEL[0m  - [04:04] -  Select the source for the 24MHz clock.
      0 - OSC_SEL_0 :
         XTAL OSC
      0x1 - OSC_SEL_1 :
         RC OSC
 (rw) (01)  [0;32mLPBG_SEL[0m  - [05:05] -  Bandgap select. Not related to oscillator.
      0 - LPBG_SEL_0 :
         Normal power bandgap
      0x1 - LPBG_SEL_1 :
         Low power bandgap
 (rw) (01)  [0;32mLPBG_TEST[0m  - [06:06] -  Low power bandgap test bit. Not related to oscillator.
 (rw) (01)  [0;32mREFTOP_IBIAS_OFF[0m  - [07:07] -  Low power reftop ibias disable. Not related to oscillator.
 (rw) (01)  [0;32mL1_PWRGATE[0m  - [08:08] -  L1 power gate control. Used as software override. Not related to oscillator.
 (rw) (01)  [0;32mL2_PWRGATE[0m  - [09:09] -  L2 power gate control. Used as software override. Not related to oscillator.
 (rw) (01)  [0;32mCPU_PWRGATE[0m  - [10:10] -  CPU power gate control. Used as software override. Test purpose only Not relate
 d to oscillator.
 (rw) (01)  [0;32mDISPLAY_PWRGATE[0m  - [11:11] -  Display logic power gate control. Used as software override. Not related to osc
 illator.
 (rw) (01)  [0;32mRCOSC_CG_OVERRIDE[0m  - [13:13] -  For debug purposes only
 (rw) (02)  [0;32mXTALOSC_PWRUP_DELAY[0m  - [15:14] -  Specifies the time delay between when the 24MHz xtal is powered up until it is 
 stable and ready to use
      0 - XTALOSC_PWRUP_DELAY_0 :
         0.25ms
      0x1 - XTALOSC_PWRUP_DELAY_1 :
         0.5ms
      0x2 - XTALOSC_PWRUP_DELAY_2 :
         1ms
      0x3 - XTALOSC_PWRUP_DELAY_3 :
         2ms
 (ro) (01)  [0;32mXTALOSC_PWRUP_STAT[0m  - [16:16] -  Status of the 24MHz xtal oscillator.
      0 - XTALOSC_PWRUP_STAT_0 :
         Not stable
      0x1 - XTALOSC_PWRUP_STAT_1 :
         Stable and ready to use
 (rw) (01)  [0;32mMIX_PWRGATE[0m  - [17:17] -  Display power gate control. Used as software mask. Set to zero to force ungated
 .
 (rw) (01)  [0;32mGPU_PWRGATE[0m  - [18:18] -  GPU power gate control. Used as software mask. Set to zero to force ungated.
</lang>
#### XTALOSC24M.OSC_CONFIG0_TOG
<link=p.XTALOSC24M.OSC_CONFIG0_TOG>
#### p.xtalosc24m.osc_config2
<link=p.XTALOSC24M.OSC_CONFIG2>
#### XTALOSC24M.OSC_CONFIG2_CLR
<link=p.XTALOSC24M.OSC_CONFIG2_CLR>
#### p.usbphy1.pwd_set
<link=p.USBPHY1.PWD_SET>
#### p.usbphy1.pwd_clr
<link=p.USBPHY1.PWD_CLR>
#### usbphy1.tx_set
<link=p.USBPHY1.TX_SET>
#### p.usbphy1.tx_tog
<link=p.USBPHY1.TX_TOG>
#### p.USBPHY2.PWD
<lang=dft>
 (rw)  [1;33m0x400da000[0m (0x400da000 + 0x0000)
USB PHY Power-Down Register
 (ro) (10)  [0;32mRSVD0[0m  - [09:00] -  Reserved.
 (rw) (01)  [0;32mTXPWDFS[0m  - [10:10] -  0 = Normal operation
 (rw) (01)  [0;32mTXPWDIBIAS[0m  - [11:11] -  0 = Normal operation
 (rw) (01)  [0;32mTXPWDV2I[0m  - [12:12] -  0 = Normal operation
 (ro) (04)  [0;32mRSVD1[0m  - [16:13] -  Reserved.
 (rw) (01)  [0;32mRXPWDENV[0m  - [17:17] -  0 = Normal operation
 (rw) (01)  [0;32mRXPWD1PT1[0m  - [18:18] -  0 = Normal operation
 (rw) (01)  [0;32mRXPWDDIFF[0m  - [19:19] -  0 = Normal operation
 (rw) (01)  [0;32mRXPWDRX[0m  - [20:20] -  0 = Normal operation
 (ro) (11)  [0;32mRSVD2[0m  - [31:21] -  Reserved.
</lang>
#### p.usbphy2.pwd_tog
<link=p.USBPHY2.PWD_TOG>
#### p.usbphy2.tx_clr
<link=p.USBPHY2.TX_CLR>
#### usbphy2.ctrl_set
<link=p.USBPHY2.CTRL_SET>
#### USBPHY2.CTRL_CLR
<link=p.USBPHY2.CTRL_CLR>
#### p.usbphy2.debug_clr
<link=p.USBPHY2.DEBUG_CLR>
#### USBPHY2.DEBUG_TOG
<link=p.USBPHY2.DEBUG_TOG>
#### p.usbphy2.debug1
<link=p.USBPHY2.DEBUG1>
#### p.usbphy2.debug1_set
<link=p.USBPHY2.DEBUG1_SET>
#### p.usbphy2.debug1_clr
<link=p.USBPHY2.DEBUG1_CLR>
#### csu.csl3
<link=p.CSU.CSL3>
#### CSU.CSL3
<link=p.CSU.CSL3>
#### csu.csl16
<link=p.CSU.CSL16>
#### CSU.CSL16
<link=p.CSU.CSL16>
#### csu.csl30
<link=p.CSU.CSL30>
#### CSU.CSL30
<link=p.CSU.CSL30>
#### p.CSU.SA
<lang=dft>
 (rw)  [1;33m0x400dc218[0m (0x400dc000 + 0x0218)
Secure access register
 (rw) (01)  [0;32mNSA_DMA[0m  - [02:02] -  Non-secure access policy indicator bit
      0 - NSA_DMA_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_DMA_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_DMA[0m  - [03:03] -  Lock bit set by the TZ software for the eDMA
      0 - L_DMA_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_DMA_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mNSA_LCDIF[0m  - [04:04] -  Non-secure access policy indicator bit
      0 - NSA_LCDIF_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_LCDIF_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_LCDIF[0m  - [05:05] -  Lock bit set by the TZ software for the LCDIF
      0 - L_LCDIF_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_LCDIF_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mNSA_CSI[0m  - [06:06] -  Non-secure access policy indicator bit
      0 - NSA_CSI_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_CSI_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_CSI[0m  - [07:07] -  Lock bit set by the TZ software for the CSI
      0 - L_CSI_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_CSI_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mNSA_PXP[0m  - [08:08] -  Non-Secure Access Policy indicator bit
      0 - NSA_PXP_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_PXP_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_PXP[0m  - [09:09] -  Lock bit set by the TZ software for the PXP
      0 - L_PXP_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_PXP_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mNSA_DCP[0m  - [10:10] -  Non-secure access policy indicator bit
      0 - NSA_DCP_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_DCP_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_DCP[0m  - [11:11] -  Lock bit set by the TZ software for the DCP
      0 - L_DCP_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_DCP_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mNSA_ENET[0m  - [14:14] -  Non-secure access policy indicator bit
      0 - NSA_ENET_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_ENET_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_ENET[0m  - [15:15] -  Lock bit set by the TZ software for the ENET1 and ENET2
      0 - L_ENET_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_ENET_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mNSA_USDHC1[0m  - [16:16] -  Non-secure access policy indicator bit
      0 - NSA_USDHC1_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_USDHC1_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_USDHC1[0m  - [17:17] -  Lock bit set by the TZ software for the USDHC1
      0 - L_USDHC1_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_USDHC1_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mNSA_USDHC2[0m  - [18:18] -  Non-secure access policy indicator bit
      0 - NSA_USDHC2_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_USDHC2_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_USDHC2[0m  - [19:19] -  Lock bit set by the TZ software for the USDHC2
      0 - L_USDHC2_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_USDHC2_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mNSA_TPSMP[0m  - [20:20] -  Non-secure access policy indicator bit
      0 - NSA_TPSMP_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_TPSMP_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_TPSMP[0m  - [21:21] -  Lock bit set by the TZ software for the TPSMP
      0 - L_TPSMP_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_TPSMP_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mNSA_USB[0m  - [22:22] -  Non-secure access policy indicator bit
      0 - NSA_USB_0 :
         Secure access for the corresponding type-1 master
      0x1 - NSA_USB_1 :
         Non-secure access for the corresponding type-1 master
 (rw) (01)  [0;32mL_USB[0m  - [23:23] -  Lock bit set by the TZ software for the USB
      0 - L_USB_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_USB_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
</lang>
#### csu.hpcontrol0
<link=p.CSU.HPCONTROL0>
#### tsc.flow_control
<link=p.TSC.FLOW_CONTROL>
#### p.tsc.int_en
<link=p.TSC.INT_EN>
#### tsc.debug_mode2
<link=p.TSC.DEBUG_MODE2>
#### p.dma0
<link=p.DMA0>
#### dma0.cr
<link=p.DMA0.CR>
#### p.DMA0.SEEI
<lang=dft>
 (rw)  [1;33m0x400e8019[0m (0x400e8000 + 0x0019)
Set Enable Error Interrupt Register
 (rw) (05)  [0;32mSEEI[0m  - [04:00] -  Set Enable Error Interrupt
 (rw) (01)  [0;32mSAEE[0m  - [06:06] -  Sets All Enable Error Interrupts
      0 - SAEE_0 :
         Set only the EEI bit specified in the SEEI field.
      0x1 - SAEE_1 :
         Sets all bits in EEI
 (rw) (01)  [0;32mNOP[0m  - [07:07] -  No Op enable
      0 - NOP_0 :
         Normal operation
      0x1 - NOP_1 :
         No operation, ignore the other bits in this register
</lang>
#### dma0.serq
<link=p.DMA0.SERQ>
#### dma0.err
<link=p.DMA0.ERR>
#### p.dma0.hrs
<link=p.DMA0.HRS>
#### p.dma0.dchpri1
<link=p.DMA0.DCHPRI1>
#### p.DMA0.DCHPRI7
<lang=dft>
 (rw)  [1;33m0x400e8104[0m (0x400e8000 + 0x0104)
Channel n Priority Register
 (rw) (04)  [0;32mCHPRI[0m  - [03:00] -  Channel n Arbitration Priority
 (ro) (02)  [0;32mGRPPRI[0m  - [05:04] -  Channel n Current Group Priority
 (rw) (01)  [0;32mDPA[0m  - [06:06] -  Disable Preempt Ability. This field resets to 0.
      0 - DPA_0 :
         Channel n can suspend a lower priority channel.
      0x1 - DPA_1 :
         Channel n cannot suspend any channel, regardless of channel priority.
 (rw) (01)  [0;32mECP[0m  - [07:07] -  Enable Channel Preemption. This field resets to 0.
      0 - ECP_0 :
         Channel n cannot be suspended by a higher priority channel's service re
         quest.
      0x1 - ECP_1 :
         Channel n can be temporarily suspended by the service request of a high
         er priority channel.
</lang>
#### p.DMA0.DCHPRI18
<lang=dft>
 (rw)  [1;33m0x400e8111[0m (0x400e8000 + 0x0111)
Channel n Priority Register
 (rw) (04)  [0;32mCHPRI[0m  - [03:00] -  Channel n Arbitration Priority
 (ro) (02)  [0;32mGRPPRI[0m  - [05:04] -  Channel n Current Group Priority
 (rw) (01)  [0;32mDPA[0m  - [06:06] -  Disable Preempt Ability. This field resets to 0.
      0 - DPA_0 :
         Channel n can suspend a lower priority channel.
      0x1 - DPA_1 :
         Channel n cannot suspend any channel, regardless of channel priority.
 (rw) (01)  [0;32mECP[0m  - [07:07] -  Enable Channel Preemption. This field resets to 0.
      0 - ECP_0 :
         Channel n cannot be suspended by a higher priority channel's service re
         quest.
      0x1 - ECP_1 :
         Channel n can be temporarily suspended by the service request of a high
         er priority channel.
</lang>
#### dma0.dchpri16
<link=p.DMA0.DCHPRI16>
#### p.dma0.dchpri27
<link=p.DMA0.DCHPRI27>
#### dma0.dchpri27
<link=p.DMA0.DCHPRI27>
#### p.DMA0.DCHPRI29
<lang=dft>
 (rw)  [1;33m0x400e811e[0m (0x400e8000 + 0x011e)
Channel n Priority Register
 (rw) (04)  [0;32mCHPRI[0m  - [03:00] -  Channel n Arbitration Priority
 (ro) (02)  [0;32mGRPPRI[0m  - [05:04] -  Channel n Current Group Priority
 (rw) (01)  [0;32mDPA[0m  - [06:06] -  Disable Preempt Ability. This field resets to 0.
      0 - DPA_0 :
         Channel n can suspend a lower priority channel.
      0x1 - DPA_1 :
         Channel n cannot suspend any channel, regardless of channel priority.
 (rw) (01)  [0;32mECP[0m  - [07:07] -  Enable Channel Preemption. This field resets to 0.
      0 - ECP_0 :
         Channel n cannot be suspended by a higher priority channel's service re
         quest.
      0x1 - ECP_1 :
         Channel n can be temporarily suspended by the service request of a high
         er priority channel.
</lang>
#### dma0.tcd0_attr
<link=p.DMA0.TCD0_ATTR>
#### p.dma0.tcd0_nbytes_mloffyes
<link=p.DMA0.TCD0_NBYTES_MLOFFYES>
#### DMA0.TCD0_CSR
<link=p.DMA0.TCD0_CSR>
#### p.DMA0.TCD1_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9028[0m (0x400e8000 + 0x1028)
TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled)
 (rw) (30)  [0;32mNBYTES[0m  - [29:00] -  Minor Byte Transfer Count
 (rw) (01)  [0;32mDMLOE[0m  - [30:30] -  Destination Minor Loop Offset enable
      0 - DMLOE_0 :
         The minor loop offset is not applied to the DADDR
      0x1 - DMLOE_1 :
         The minor loop offset is applied to the DADDR
 (rw) (01)  [0;32mSMLOE[0m  - [31:31] -  Source Minor Loop Offset Enable
      0 - SMLOE_0 :
         The minor loop offset is not applied to the SADDR
      0x1 - SMLOE_1 :
         The minor loop offset is applied to the SADDR
</lang>
#### p.dma0.tcd1_daddr
<link=p.DMA0.TCD1_DADDR>
#### DMA0.TCD1_DOFF
<link=p.DMA0.TCD1_DOFF>
#### p.DMA0.TCD1_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9036[0m (0x400e8000 + 0x1036)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd1_dlastsga
<link=p.DMA0.TCD1_DLASTSGA>
#### p.dma0.tcd1_biter_elinkyes
<link=p.DMA0.TCD1_BITER_ELINKYES>
#### dma0.tcd1_biter_elinkyes
<link=p.DMA0.TCD1_BITER_ELINKYES>
#### p.DMA0.TCD2_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9046[0m (0x400e8000 + 0x1046)
TCD Transfer Attributes
 (rw) (03)  [0;32mDSIZE[0m  - [02:00] -  Destination data transfer size
 (rw) (05)  [0;32mDMOD[0m  - [07:03] -  Destination Address Modulo
 (rw) (03)  [0;32mSSIZE[0m  - [10:08] -  Source data transfer size
      0 - SSIZE_0 :
         8-bit
      0x1 - SSIZE_1 :
         16-bit
      0x2 - SSIZE_2 :
         32-bit
      0x3 - SSIZE_3 :
         64-bit
      0x5 - SSIZE_5 :
         32-byte burst (4 beats of 64 bits)
 (rw) (05)  [0;32mSMOD[0m  - [15:11] -  Source Address Modulo
      0 - SMOD_0 :
         Source address modulo feature is disabled
      0x1 - SMOD_1 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x2 - SMOD_2 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x3 - SMOD_3 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x4 - SMOD_4 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x5 - SMOD_5 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x6 - SMOD_6 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x7 - SMOD_7 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x8 - SMOD_8 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x9 - SMOD_9 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
</lang>
#### DMA0.TCD2_BITER_ELINKYES
<link=p.DMA0.TCD2_BITER_ELINKYES>
#### p.dma0.tcd3_daddr
<link=p.DMA0.TCD3_DADDR>
#### p.DMA0.TCD3_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9078[0m (0x400e8000 + 0x1078)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### DMA0.TCD3_CSR
<link=p.DMA0.TCD3_CSR>
#### p.dma0.tcd4_nbytes_mlno
<link=p.DMA0.TCD4_NBYTES_MLNO>
#### dma0.tcd4_doff
<link=p.DMA0.TCD4_DOFF>
#### p.DMA0.TCD4_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9096[0m (0x400e8000 + 0x1096)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd4_biter_elinkyes
<link=p.DMA0.TCD4_BITER_ELINKYES>
#### dma0.tcd5_attr
<link=p.DMA0.TCD5_ATTR>
#### dma0.tcd5_slast
<link=p.DMA0.TCD5_SLAST>
#### dma0.tcd5_daddr
<link=p.DMA0.TCD5_DADDR>
#### dma0.tcd5_citer_elinkno
<link=p.DMA0.TCD5_CITER_ELINKNO>
#### dma0.tcd6_saddr
<link=p.DMA0.TCD6_SADDR>
#### DMA0.TCD6_ATTR
<link=p.DMA0.TCD6_ATTR>
#### DMA0.TCD6_NBYTES_MLOFFYES
<link=p.DMA0.TCD6_NBYTES_MLOFFYES>
#### p.dma0.tcd7_soff
<link=p.DMA0.TCD7_SOFF>
#### dma0.tcd7_soff
<link=p.DMA0.TCD7_SOFF>
#### dma0.tcd7_daddr
<link=p.DMA0.TCD7_DADDR>
#### p.DMA0.TCD7_DOFF
<lang=dft>
 (rw)  [1;33m0x400e90f4[0m (0x400e8000 + 0x10f4)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.dma0.tcd7_doff
<link=p.DMA0.TCD7_DOFF>
#### p.dma0.tcd8_nbytes_mloffno
<link=p.DMA0.TCD8_NBYTES_MLOFFNO>
#### p.DMA0.TCD8_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9116[0m (0x400e8000 + 0x1116)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD8_DLASTSGA
<link=p.DMA0.TCD8_DLASTSGA>
#### p.DMA0.TCD9_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9126[0m (0x400e8000 + 0x1126)
TCD Transfer Attributes
 (rw) (03)  [0;32mDSIZE[0m  - [02:00] -  Destination data transfer size
 (rw) (05)  [0;32mDMOD[0m  - [07:03] -  Destination Address Modulo
 (rw) (03)  [0;32mSSIZE[0m  - [10:08] -  Source data transfer size
      0 - SSIZE_0 :
         8-bit
      0x1 - SSIZE_1 :
         16-bit
      0x2 - SSIZE_2 :
         32-bit
      0x3 - SSIZE_3 :
         64-bit
      0x5 - SSIZE_5 :
         32-byte burst (4 beats of 64 bits)
 (rw) (05)  [0;32mSMOD[0m  - [15:11] -  Source Address Modulo
      0 - SMOD_0 :
         Source address modulo feature is disabled
      0x1 - SMOD_1 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x2 - SMOD_2 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x3 - SMOD_3 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x4 - SMOD_4 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x5 - SMOD_5 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x6 - SMOD_6 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x7 - SMOD_7 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x8 - SMOD_8 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x9 - SMOD_9 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
</lang>
#### DMA0.TCD9_SLAST
<link=p.DMA0.TCD9_SLAST>
#### p.DMA0.TCD9_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9130[0m (0x400e8000 + 0x1130)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### dma0.tcd9_citer_elinkno
<link=p.DMA0.TCD9_CITER_ELINKNO>
#### p.DMA0.TCD9_CSR
<lang=dft>
 (rw)  [1;33m0x400e913c[0m (0x400e8000 + 0x113c)
TCD Control and Status
 (rw) (01)  [0;32mSTART[0m  - [00:00] -  Channel Start
      0 - START_0 :
         The channel is not explicitly started.
      0x1 - START_1 :
         The channel is explicitly started via a software initiated service requ
         est.
 (rw) (01)  [0;32mINTMAJOR[0m  - [01:01] -  Enable an interrupt when major iteration count completes.
      0 - INTMAJOR_0 :
         The end-of-major loop interrupt is disabled.
      0x1 - INTMAJOR_1 :
         The end-of-major loop interrupt is enabled.
 (rw) (01)  [0;32mINTHALF[0m  - [02:02] -  Enable an interrupt when major counter is half complete.
      0 - INTHALF_0 :
         The half-point interrupt is disabled.
      0x1 - INTHALF_1 :
         The half-point interrupt is enabled.
 (rw) (01)  [0;32mDREQ[0m  - [03:03] -  Disable Request
      0 - DREQ_0 :
         The channel's ERQ bit is not affected.
      0x1 - DREQ_1 :
         The channel's ERQ bit is cleared when the major loop is complete.
 (rw) (01)  [0;32mESG[0m  - [04:04] -  Enable Scatter/Gather Processing
      0 - ESG_0 :
         The current channel's TCD is normal format.
      0x1 - ESG_1 :
         The current channel's TCD specifies a scatter gather format. The DLASTS
         GA field provides a memory pointer to the next TCD to be loaded into th
         is channel after the major loop completes its execution.
 (rw) (01)  [0;32mMAJORELINK[0m  - [05:05] -  Enable channel-to-channel linking on major loop complete
      0 - MAJORELINK_0 :
         The channel-to-channel linking is disabled.
      0x1 - MAJORELINK_1 :
         The channel-to-channel linking is enabled.
 (ro) (01)  [0;32mACTIVE[0m  - [06:06] -  Channel Active
 (rw) (01)  [0;32mDONE[0m  - [07:07] -  Channel Done
 (rw) (05)  [0;32mMAJORLINKCH[0m  - [12:08] -  Major Loop Link Channel Number
 (rw) (02)  [0;32mBWC[0m  - [15:14] -  Bandwidth Control
      0 - BWC_0 :
         No eDMA engine stalls.
      0x2 - BWC_2 :
         eDMA engine stalls for 4 cycles after each R/W.
      0x3 - BWC_3 :
         eDMA engine stalls for 8 cycles after each R/W.
</lang>
#### p.dma0.tcd10_daddr
<link=p.DMA0.TCD10_DADDR>
#### dma0.tcd10_citer_elinkno
<link=p.DMA0.TCD10_CITER_ELINKNO>
#### p.dma0.tcd11_saddr
<link=p.DMA0.TCD11_SADDR>
#### dma0.tcd11_attr
<link=p.DMA0.TCD11_ATTR>
#### DMA0.TCD11_NBYTES_MLOFFNO
<link=p.DMA0.TCD11_NBYTES_MLOFFNO>
#### dma0.tcd11_nbytes_mloffyes
<link=p.DMA0.TCD11_NBYTES_MLOFFYES>
#### p.dma0.tcd12_attr
<link=p.DMA0.TCD12_ATTR>
#### p.dma0.tcd12_daddr
<link=p.DMA0.TCD12_DADDR>
#### p.DMA0.TCD12_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9196[0m (0x400e8000 + 0x1196)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD12_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9198[0m (0x400e8000 + 0x1198)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### DMA0.TCD12_BITER_ELINKYES
<link=p.DMA0.TCD12_BITER_ELINKYES>
#### p.DMA0.TCD13_SADDR
<lang=dft>
 (rw)  [1;33m0x400e91a0[0m (0x400e8000 + 0x11a0)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.DMA0.TCD13_ATTR
<lang=dft>
 (rw)  [1;33m0x400e91a6[0m (0x400e8000 + 0x11a6)
TCD Transfer Attributes
 (rw) (03)  [0;32mDSIZE[0m  - [02:00] -  Destination data transfer size
 (rw) (05)  [0;32mDMOD[0m  - [07:03] -  Destination Address Modulo
 (rw) (03)  [0;32mSSIZE[0m  - [10:08] -  Source data transfer size
      0 - SSIZE_0 :
         8-bit
      0x1 - SSIZE_1 :
         16-bit
      0x2 - SSIZE_2 :
         32-bit
      0x3 - SSIZE_3 :
         64-bit
      0x5 - SSIZE_5 :
         32-byte burst (4 beats of 64 bits)
 (rw) (05)  [0;32mSMOD[0m  - [15:11] -  Source Address Modulo
      0 - SMOD_0 :
         Source address modulo feature is disabled
      0x1 - SMOD_1 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x2 - SMOD_2 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x3 - SMOD_3 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x4 - SMOD_4 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x5 - SMOD_5 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x6 - SMOD_6 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x7 - SMOD_7 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x8 - SMOD_8 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x9 - SMOD_9 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
</lang>
#### p.DMA0.TCD13_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e91a8[0m (0x400e8000 + 0x11a8)
TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
 (rw) (10)  [0;32mNBYTES[0m  - [09:00] -  Minor Byte Transfer Count
 (rw) (20)  [0;32mMLOFF[0m  - [29:10] -  If SMLOE or DMLOE is set, this field represents a sign-extended offset applied 
 to the source or destination address to form the next-state value after the min
 or loop completes.
 (rw) (01)  [0;32mDMLOE[0m  - [30:30] -  Destination Minor Loop Offset enable
      0 - DMLOE_0 :
         The minor loop offset is not applied to the DADDR
      0x1 - DMLOE_1 :
         The minor loop offset is applied to the DADDR
 (rw) (01)  [0;32mSMLOE[0m  - [31:31] -  Source Minor Loop Offset Enable
      0 - SMLOE_0 :
         The minor loop offset is not applied to the SADDR
      0x1 - SMLOE_1 :
         The minor loop offset is applied to the SADDR
</lang>
#### DMA0.TCD13_DOFF
<link=p.DMA0.TCD13_DOFF>
#### p.dma0.tcd15_citer_elinkno
<link=p.DMA0.TCD15_CITER_ELINKNO>
#### DMA0.TCD15_CSR
<link=p.DMA0.TCD15_CSR>
#### p.dma0.tcd15_biter_elinkyes
<link=p.DMA0.TCD15_BITER_ELINKYES>
#### p.dma0.tcd16_soff
<link=p.DMA0.TCD16_SOFF>
#### p.DMA0.TCD16_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9208[0m (0x400e8000 + 0x1208)
TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
 (rw) (10)  [0;32mNBYTES[0m  - [09:00] -  Minor Byte Transfer Count
 (rw) (20)  [0;32mMLOFF[0m  - [29:10] -  If SMLOE or DMLOE is set, this field represents a sign-extended offset applied 
 to the source or destination address to form the next-state value after the min
 or loop completes.
 (rw) (01)  [0;32mDMLOE[0m  - [30:30] -  Destination Minor Loop Offset enable
      0 - DMLOE_0 :
         The minor loop offset is not applied to the DADDR
      0x1 - DMLOE_1 :
         The minor loop offset is applied to the DADDR
 (rw) (01)  [0;32mSMLOE[0m  - [31:31] -  Source Minor Loop Offset Enable
      0 - SMLOE_0 :
         The minor loop offset is not applied to the SADDR
      0x1 - SMLOE_1 :
         The minor loop offset is applied to the SADDR
</lang>
#### DMA0.TCD16_DADDR
<link=p.DMA0.TCD16_DADDR>
#### dma0.tcd16_biter_elinkno
<link=p.DMA0.TCD16_BITER_ELINKNO>
#### p.dma0.tcd17_attr
<link=p.DMA0.TCD17_ATTR>
#### dma0.tcd17_nbytes_mlno
<link=p.DMA0.TCD17_NBYTES_MLNO>
#### p.dma0.tcd17_nbytes_mloffyes
<link=p.DMA0.TCD17_NBYTES_MLOFFYES>
#### DMA0.TCD17_CSR
<link=p.DMA0.TCD17_CSR>
#### p.DMA0.TCD18_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9246[0m (0x400e8000 + 0x1246)
TCD Transfer Attributes
 (rw) (03)  [0;32mDSIZE[0m  - [02:00] -  Destination data transfer size
 (rw) (05)  [0;32mDMOD[0m  - [07:03] -  Destination Address Modulo
 (rw) (03)  [0;32mSSIZE[0m  - [10:08] -  Source data transfer size
      0 - SSIZE_0 :
         8-bit
      0x1 - SSIZE_1 :
         16-bit
      0x2 - SSIZE_2 :
         32-bit
      0x3 - SSIZE_3 :
         64-bit
      0x5 - SSIZE_5 :
         32-byte burst (4 beats of 64 bits)
 (rw) (05)  [0;32mSMOD[0m  - [15:11] -  Source Address Modulo
      0 - SMOD_0 :
         Source address modulo feature is disabled
      0x1 - SMOD_1 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x2 - SMOD_2 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x3 - SMOD_3 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x4 - SMOD_4 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x5 - SMOD_5 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x6 - SMOD_6 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x7 - SMOD_7 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x8 - SMOD_8 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
      0x9 - SMOD_9 :
         This value defines a specific address range specified to be the value a
         fter SADDR + SOFF calculation is performed on the original register val
         ue. Setting this field provides the ability to implement a circular dat
         a queue easily. For data queues requiring power-of-2 size bytes, the qu
         eue should start at a 0-modulo-size address and the SMOD field should b
         e set to the appropriate value for the queue, freezing the desired numb
         er of upper address bits. The value programmed into this field specifie
         s the number of lower address bits allowed to change. For a circular qu
         eue application, the SOFF is typically set to the transfer size to impl
         ement post-increment addressing with the SMOD function constraining the
          addresses to a 0-modulo-size range.
</lang>
#### p.dma0.tcd18_dlastsga
<link=p.DMA0.TCD18_DLASTSGA>
#### dma0.tcd19_soff
<link=p.DMA0.TCD19_SOFF>
#### p.dma0.tcd19_nbytes_mloffyes
<link=p.DMA0.TCD19_NBYTES_MLOFFYES>
#### p.dma0.tcd19_citer_elinkno
<link=p.DMA0.TCD19_CITER_ELINKNO>
#### p.DMA0.TCD19_CSR
<lang=dft>
 (rw)  [1;33m0x400e927c[0m (0x400e8000 + 0x127c)
TCD Control and Status
 (rw) (01)  [0;32mSTART[0m  - [00:00] -  Channel Start
      0 - START_0 :
         The channel is not explicitly started.
      0x1 - START_1 :
         The channel is explicitly started via a software initiated service requ
         est.
 (rw) (01)  [0;32mINTMAJOR[0m  - [01:01] -  Enable an interrupt when major iteration count completes.
      0 - INTMAJOR_0 :
         The end-of-major loop interrupt is disabled.
      0x1 - INTMAJOR_1 :
         The end-of-major loop interrupt is enabled.
 (rw) (01)  [0;32mINTHALF[0m  - [02:02] -  Enable an interrupt when major counter is half complete.
      0 - INTHALF_0 :
         The half-point interrupt is disabled.
      0x1 - INTHALF_1 :
         The half-point interrupt is enabled.
 (rw) (01)  [0;32mDREQ[0m  - [03:03] -  Disable Request
      0 - DREQ_0 :
         The channel's ERQ bit is not affected.
      0x1 - DREQ_1 :
         The channel's ERQ bit is cleared when the major loop is complete.
 (rw) (01)  [0;32mESG[0m  - [04:04] -  Enable Scatter/Gather Processing
      0 - ESG_0 :
         The current channel's TCD is normal format.
      0x1 - ESG_1 :
         The current channel's TCD specifies a scatter gather format. The DLASTS
         GA field provides a memory pointer to the next TCD to be loaded into th
         is channel after the major loop completes its execution.
 (rw) (01)  [0;32mMAJORELINK[0m  - [05:05] -  Enable channel-to-channel linking on major loop complete
      0 - MAJORELINK_0 :
         The channel-to-channel linking is disabled.
      0x1 - MAJORELINK_1 :
         The channel-to-channel linking is enabled.
 (ro) (01)  [0;32mACTIVE[0m  - [06:06] -  Channel Active
 (rw) (01)  [0;32mDONE[0m  - [07:07] -  Channel Done
 (rw) (05)  [0;32mMAJORLINKCH[0m  - [12:08] -  Major Loop Link Channel Number
 (rw) (02)  [0;32mBWC[0m  - [15:14] -  Bandwidth Control
      0 - BWC_0 :
         No eDMA engine stalls.
      0x2 - BWC_2 :
         eDMA engine stalls for 4 cycles after each R/W.
      0x3 - BWC_3 :
         eDMA engine stalls for 8 cycles after each R/W.
</lang>
#### p.dma0.tcd20_soff
<link=p.DMA0.TCD20_SOFF>
#### p.DMA0.TCD20_SLAST
<lang=dft>
 (rw)  [1;33m0x400e928c[0m (0x400e8000 + 0x128c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.DMA0.TCD22_SADDR
<lang=dft>
 (rw)  [1;33m0x400e92c0[0m (0x400e8000 + 0x12c0)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.dma0.tcd22_attr
<link=p.DMA0.TCD22_ATTR>
#### p.dma0.tcd22_nbytes_mlno
<link=p.DMA0.TCD22_NBYTES_MLNO>
#### dma0.tcd22_nbytes_mlno
<link=p.DMA0.TCD22_NBYTES_MLNO>
#### p.DMA0.TCD22_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e92d6[0m (0x400e8000 + 0x12d6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD22_CSR
<lang=dft>
 (rw)  [1;33m0x400e92dc[0m (0x400e8000 + 0x12dc)
TCD Control and Status
 (rw) (01)  [0;32mSTART[0m  - [00:00] -  Channel Start
      0 - START_0 :
         The channel is not explicitly started.
      0x1 - START_1 :
         The channel is explicitly started via a software initiated service requ
         est.
 (rw) (01)  [0;32mINTMAJOR[0m  - [01:01] -  Enable an interrupt when major iteration count completes.
      0 - INTMAJOR_0 :
         The end-of-major loop interrupt is disabled.
      0x1 - INTMAJOR_1 :
         The end-of-major loop interrupt is enabled.
 (rw) (01)  [0;32mINTHALF[0m  - [02:02] -  Enable an interrupt when major counter is half complete.
      0 - INTHALF_0 :
         The half-point interrupt is disabled.
      0x1 - INTHALF_1 :
         The half-point interrupt is enabled.
 (rw) (01)  [0;32mDREQ[0m  - [03:03] -  Disable Request
      0 - DREQ_0 :
         The channel's ERQ bit is not affected.
      0x1 - DREQ_1 :
         The channel's ERQ bit is cleared when the major loop is complete.
 (rw) (01)  [0;32mESG[0m  - [04:04] -  Enable Scatter/Gather Processing
      0 - ESG_0 :
         The current channel's TCD is normal format.
      0x1 - ESG_1 :
         The current channel's TCD specifies a scatter gather format. The DLASTS
         GA field provides a memory pointer to the next TCD to be loaded into th
         is channel after the major loop completes its execution.
 (rw) (01)  [0;32mMAJORELINK[0m  - [05:05] -  Enable channel-to-channel linking on major loop complete
      0 - MAJORELINK_0 :
         The channel-to-channel linking is disabled.
      0x1 - MAJORELINK_1 :
         The channel-to-channel linking is enabled.
 (ro) (01)  [0;32mACTIVE[0m  - [06:06] -  Channel Active
 (rw) (01)  [0;32mDONE[0m  - [07:07] -  Channel Done
 (rw) (05)  [0;32mMAJORLINKCH[0m  - [12:08] -  Major Loop Link Channel Number
 (rw) (02)  [0;32mBWC[0m  - [15:14] -  Bandwidth Control
      0 - BWC_0 :
         No eDMA engine stalls.
      0x2 - BWC_2 :
         eDMA engine stalls for 4 cycles after each R/W.
      0x3 - BWC_3 :
         eDMA engine stalls for 8 cycles after each R/W.
</lang>
#### p.DMA0.TCD23_DOFF
<lang=dft>
 (rw)  [1;33m0x400e92f4[0m (0x400e8000 + 0x12f4)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### DMA0.TCD23_CITER_ELINKYES
<link=p.DMA0.TCD23_CITER_ELINKYES>
#### p.dma0.tcd23_csr
<link=p.DMA0.TCD23_CSR>
#### DMA0.TCD24_NBYTES_MLOFFNO
<link=p.DMA0.TCD24_NBYTES_MLOFFNO>
#### DMA0.TCD24_NBYTES_MLOFFYES
<link=p.DMA0.TCD24_NBYTES_MLOFFYES>
#### DMA0.TCD25_CSR
<link=p.DMA0.TCD25_CSR>
#### dma0.tcd25_biter_elinkyes
<link=p.DMA0.TCD25_BITER_ELINKYES>
#### DMA0.TCD26_NBYTES_MLOFFNO
<link=p.DMA0.TCD26_NBYTES_MLOFFNO>
#### dma0.tcd26_citer_elinkyes
<link=p.DMA0.TCD26_CITER_ELINKYES>
#### p.DMA0.TCD26_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e935e[0m (0x400e8000 + 0x135e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD27_SADDR
<link=p.DMA0.TCD27_SADDR>
#### DMA0.TCD27_NBYTES_MLNO
<link=p.DMA0.TCD27_NBYTES_MLNO>
#### DMA0.TCD27_DADDR
<link=p.DMA0.TCD27_DADDR>
#### p.DMA0.TCD27_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9378[0m (0x400e8000 + 0x1378)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.dma0.tcd27_dlastsga
<link=p.DMA0.TCD27_DLASTSGA>
#### DMA0.TCD27_DLASTSGA
<link=p.DMA0.TCD27_DLASTSGA>
#### DMA0.TCD27_CSR
<link=p.DMA0.TCD27_CSR>
#### dma0.tcd28_attr
<link=p.DMA0.TCD28_ATTR>
#### p.DMA0.TCD28_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9388[0m (0x400e8000 + 0x1388)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.dma0.tcd28_nbytes_mlno
<link=p.DMA0.TCD28_NBYTES_MLNO>
#### dma0.tcd28_nbytes_mlno
<link=p.DMA0.TCD28_NBYTES_MLNO>
#### p.DMA0.TCD28_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9388[0m (0x400e8000 + 0x1388)
TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
 (rw) (10)  [0;32mNBYTES[0m  - [09:00] -  Minor Byte Transfer Count
 (rw) (20)  [0;32mMLOFF[0m  - [29:10] -  If SMLOE or DMLOE is set, this field represents a sign-extended offset applied 
 to the source or destination address to form the next-state value after the min
 or loop completes.
 (rw) (01)  [0;32mDMLOE[0m  - [30:30] -  Destination Minor Loop Offset enable
      0 - DMLOE_0 :
         The minor loop offset is not applied to the DADDR
      0x1 - DMLOE_1 :
         The minor loop offset is applied to the DADDR
 (rw) (01)  [0;32mSMLOE[0m  - [31:31] -  Source Minor Loop Offset Enable
      0 - SMLOE_0 :
         The minor loop offset is not applied to the SADDR
      0x1 - SMLOE_1 :
         The minor loop offset is applied to the SADDR
</lang>
#### dma0.tcd28_slast
<link=p.DMA0.TCD28_SLAST>
#### p.DMA0.TCD28_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9390[0m (0x400e8000 + 0x1390)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.dma0.tcd28_biter_elinkyes
<link=p.DMA0.TCD28_BITER_ELINKYES>
#### dma0.tcd29_nbytes_mlno
<link=p.DMA0.TCD29_NBYTES_MLNO>
#### p.DMA0.TCD29_SLAST
<lang=dft>
 (rw)  [1;33m0x400e93ac[0m (0x400e8000 + 0x13ac)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.dma0.tcd29_dlastsga
<link=p.DMA0.TCD29_DLASTSGA>
#### p.dma0.tcd29_biter_elinkyes
<link=p.DMA0.TCD29_BITER_ELINKYES>
#### p.DMA0.TCD30_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e93c8[0m (0x400e8000 + 0x13c8)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.DMA0.TCD30_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e93c8[0m (0x400e8000 + 0x13c8)
TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled)
 (rw) (10)  [0;32mNBYTES[0m  - [09:00] -  Minor Byte Transfer Count
 (rw) (20)  [0;32mMLOFF[0m  - [29:10] -  If SMLOE or DMLOE is set, this field represents a sign-extended offset applied 
 to the source or destination address to form the next-state value after the min
 or loop completes.
 (rw) (01)  [0;32mDMLOE[0m  - [30:30] -  Destination Minor Loop Offset enable
      0 - DMLOE_0 :
         The minor loop offset is not applied to the DADDR
      0x1 - DMLOE_1 :
         The minor loop offset is applied to the DADDR
 (rw) (01)  [0;32mSMLOE[0m  - [31:31] -  Source Minor Loop Offset Enable
      0 - SMLOE_0 :
         The minor loop offset is not applied to the SADDR
      0x1 - SMLOE_1 :
         The minor loop offset is applied to the SADDR
</lang>
#### p.dma0.tcd30_nbytes_mloffyes
<link=p.DMA0.TCD30_NBYTES_MLOFFYES>
#### dma0.tcd30_dlastsga
<link=p.DMA0.TCD30_DLASTSGA>
#### DMA0.TCD30_CSR
<link=p.DMA0.TCD30_CSR>
#### p.DMA0.TCD30_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e93de[0m (0x400e8000 + 0x13de)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd31_nbytes_mlno
<link=p.DMA0.TCD31_NBYTES_MLNO>
#### p.DMA0.TCD31_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e93fe[0m (0x400e8000 + 0x13fe)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMAMUX.CHCFG[1]
<link=p.DMAMUX.CHCFG[1]>
#### p.DMAMUX.CHCFG[3]
<lang=dft>
 (rw)  [1;33m0x400ec00c[0m (0x400ec000 + 0x000c)
Channel 0 Configuration Register
 (rw) (07)  [0;32mSOURCE[0m  - [06:00] -  DMA Channel Source (Slot Number)
 (rw) (01)  [0;32mA_ON[0m  - [29:29] -  DMA Channel Always Enable
      0 - A_ON_0 :
         DMA Channel Always ON function is disabled
      0x1 - A_ON_1 :
         DMA Channel Always ON function is enabled
 (rw) (01)  [0;32mTRIG[0m  - [30:30] -  DMA Channel Trigger Enable
      0 - TRIG_0 :
         Triggering is disabled. If triggering is disabled and ENBL is set, the 
         DMA Channel will simply route the specified source to the DMA channel. 
         (Normal mode)
      0x1 - TRIG_1 :
         Triggering is enabled. If triggering is enabled and ENBL is set, the DM
         A_CH_MUX is in Periodic Trigger mode.
 (rw) (01)  [0;32mENBL[0m  - [31:31] -  DMA Mux Channel Enable
      0 - ENBL_0 :
         DMA Mux channel is disabled
      0x1 - ENBL_1 :
         DMA Mux channel is enabled
</lang>
#### dmamux.chcfg[4]
<link=p.DMAMUX.CHCFG[4]>
#### p.DMAMUX.CHCFG[6]
<lang=dft>
 (rw)  [1;33m0x400ec018[0m (0x400ec000 + 0x0018)
Channel 0 Configuration Register
 (rw) (07)  [0;32mSOURCE[0m  - [06:00] -  DMA Channel Source (Slot Number)
 (rw) (01)  [0;32mA_ON[0m  - [29:29] -  DMA Channel Always Enable
      0 - A_ON_0 :
         DMA Channel Always ON function is disabled
      0x1 - A_ON_1 :
         DMA Channel Always ON function is enabled
 (rw) (01)  [0;32mTRIG[0m  - [30:30] -  DMA Channel Trigger Enable
      0 - TRIG_0 :
         Triggering is disabled. If triggering is disabled and ENBL is set, the 
         DMA Channel will simply route the specified source to the DMA channel. 
         (Normal mode)
      0x1 - TRIG_1 :
         Triggering is enabled. If triggering is enabled and ENBL is set, the DM
         A_CH_MUX is in Periodic Trigger mode.
 (rw) (01)  [0;32mENBL[0m  - [31:31] -  DMA Mux Channel Enable
      0 - ENBL_0 :
         DMA Mux channel is disabled
      0x1 - ENBL_1 :
         DMA Mux channel is enabled
</lang>
#### DMAMUX.CHCFG[6]
<link=p.DMAMUX.CHCFG[6]>
#### p.dmamux.chcfg[18]
<link=p.DMAMUX.CHCFG[18]>
#### DMAMUX.CHCFG[27]
<link=p.DMAMUX.CHCFG[27]>
#### DMAMUX.CHCFG[28]
<link=p.DMAMUX.CHCFG[28]>
#### PGC.MEGA_PUPSCR
<link=p.PGC.MEGA_PUPSCR>
#### SRC.GPR1
<link=p.SRC.GPR1>
#### src.gpr8
<link=p.SRC.GPR8>
#### ccm.csr
<link=p.CCM.CSR>
#### CCM.CSR
<link=p.CCM.CSR>
#### ccm.cscmr1
<link=p.CCM.CSCMR1>
#### p.CCM.CS2CDR
<lang=dft>
 (rw)  [1;33m0x400fc02c[0m (0x400fc000 + 0x002c)
CCM Clock Divider Register
 (rw) (06)  [0;32mSAI2_CLK_PODF[0m  - [05:00] -  Divider for sai2 clock podf. The input clock to this divider should be lower th
 an 300Mhz, the predivider can be used to achieve this.
      0 - DIVIDE_1 :
         Divide by 1
      0x1 - DIVIDE_2 :
         Divide by 2
      0x2 - DIVIDE_3 :
         Divide by 3
      0x3 - DIVIDE_4 :
         Divide by 4
      0x4 - DIVIDE_5 :
         Divide by 5
      0x5 - DIVIDE_6 :
         Divide by 6
      0x6 - DIVIDE_7 :
         Divide by 7
      0x7 - DIVIDE_8 :
         Divide by 8
      0x8 - DIVIDE_9 :
         Divide by 9
      0x9 - DIVIDE_10 :
         Divide by 10
      0xA - DIVIDE_11 :
         Divide by 11
      0xB - DIVIDE_12 :
         Divide by 12
      0xC - DIVIDE_13 :
         Divide by 13
      0xD - DIVIDE_14 :
         Divide by 14
      0xE - DIVIDE_15 :
         Divide by 15
      0xF - DIVIDE_16 :
         Divide by 16
      0x10 - DIVIDE_17 :
         Divide by 17
      0x11 - DIVIDE_18 :
         Divide by 18
      0x12 - DIVIDE_19 :
         Divide by 19
      0x13 - DIVIDE_20 :
         Divide by 20
      0x14 - DIVIDE_21 :
         Divide by 21
      0x15 - DIVIDE_22 :
         Divide by 22
      0x16 - DIVIDE_23 :
         Divide by 23
      0x17 - DIVIDE_24 :
         Divide by 24
      0x18 - DIVIDE_25 :
         Divide by 25
      0x19 - DIVIDE_26 :
         Divide by 26
      0x1A - DIVIDE_27 :
         Divide by 27
      0x1B - DIVIDE_28 :
         Divide by 28
      0x1C - DIVIDE_29 :
         Divide by 29
      0x1D - DIVIDE_30 :
         Divide by 30
      0x1E - DIVIDE_31 :
         Divide by 31
      0x1F - DIVIDE_32 :
         Divide by 32
      0x20 - DIVIDE_33 :
         Divide by 33
      0x21 - DIVIDE_34 :
         Divide by 34
      0x22 - DIVIDE_35 :
         Divide by 35
      0x23 - DIVIDE_36 :
         Divide by 36
      0x24 - DIVIDE_37 :
         Divide by 37
      0x25 - DIVIDE_38 :
         Divide by 38
      0x26 - DIVIDE_39 :
         Divide by 39
      0x27 - DIVIDE_40 :
         Divide by 40
      0x28 - DIVIDE_41 :
         Divide by 41
      0x29 - DIVIDE_42 :
         Divide by 42
      0x2A - DIVIDE_43 :
         Divide by 43
      0x2B - DIVIDE_44 :
         Divide by 44
      0x2C - DIVIDE_45 :
         Divide by 45
      0x2D - DIVIDE_46 :
         Divide by 46
      0x2E - DIVIDE_47 :
         Divide by 47
      0x2F - DIVIDE_48 :
         Divide by 48
      0x30 - DIVIDE_49 :
         Divide by 49
      0x31 - DIVIDE_50 :
         Divide by 50
      0x32 - DIVIDE_51 :
         Divide by 51
      0x33 - DIVIDE_52 :
         Divide by 52
      0x34 - DIVIDE_53 :
         Divide by 53
      0x35 - DIVIDE_54 :
         Divide by 54
      0x36 - DIVIDE_55 :
         Divide by 55
      0x37 - DIVIDE_56 :
         Divide by 56
      0x38 - DIVIDE_57 :
         Divide by 57
      0x39 - DIVIDE_58 :
         Divide by 58
      0x3A - DIVIDE_59 :
         Divide by 59
      0x3B - DIVIDE_60 :
         Divide by 60
      0x3C - DIVIDE_61 :
         Divide by 61
      0x3D - DIVIDE_62 :
         Divide by 62
      0x3E - DIVIDE_63 :
         Divide by 63
      0x3F - DIVIDE_64 :
         Divide by 64
 (rw) (03)  [0;32mSAI2_CLK_PRED[0m  - [08:06] -  Divider for sai2 clock pred.Divider should be updated when output clock is gate
 d.
      0 - SAI2_CLK_PRED_0 :
         divide by 1
      0x1 - SAI2_CLK_PRED_1 :
         divide by 2
      0x2 - SAI2_CLK_PRED_2 :
         divide by 3
      0x3 - SAI2_CLK_PRED_3 :
         divide by 4
      0x4 - SAI2_CLK_PRED_4 :
         divide by 5
      0x5 - SAI2_CLK_PRED_5 :
         divide by 6
      0x6 - SAI2_CLK_PRED_6 :
         divide by 7
      0x7 - SAI2_CLK_PRED_7 :
         divide by 8
</lang>
#### p.ccm.cscdr3
<link=p.CCM.CSCDR3>
#### p.CCM.CLPCR
<lang=dft>
 (rw)  [1;33m0x400fc054[0m (0x400fc000 + 0x0054)
CCM Low Power Control Register
 (rw) (02)  [0;32mLPM[0m  - [01:00] -  Setting the low power mode that system will enter on next assertion of dsm_requ
 est signal.
      0 - LPM_0 :
         Remain in run mode
      0x1 - LPM_1 :
         Transfer to wait mode
      0x2 - LPM_2 :
         Transfer to stop mode
 (rw) (01)  [0;32mARM_CLK_DIS_ON_LPM[0m  - [05:05] -  Define if ARM clocks (arm_clk, soc_mxclk, soc_pclk, soc_dbg_pclk, vl_wrck) will
  be disabled on wait mode
      0 - ARM_CLK_DIS_ON_LPM_0 :
         ARM clock enabled on wait mode.
      0x1 - ARM_CLK_DIS_ON_LPM_1 :
         ARM clock disabled on wait mode. .
 (rw) (01)  [0;32mSBYOS[0m  - [06:06] -  Standby clock oscillator bit
      0 - SBYOS_0 :
         On-chip oscillator will not be powered down, after next entrance to STO
         P mode. (CCM_REF_EN_B will remain asserted - '0' and cosc_pwrdown will 
         remain de asserted - '0')
      0x1 - SBYOS_1 :
         On-chip oscillator will be powered down, after next entrance to STOP mo
         de. (CCM_REF_EN_B will be deasserted - '1' and cosc_pwrdown will be ass
         erted - '1'). When returning from STOP mode, external oscillator will b
         e enabled again, on-chip oscillator will return to oscillator mode, and
          after oscnt count, CCM will continue with the exit from the STOP mode 
         process.
 (rw) (01)  [0;32mDIS_REF_OSC[0m  - [07:07] -  dis_ref_osc - in run mode, software can manually control closing of external re
 ference oscillator clock, i
      0 - DIS_REF_OSC_0 :
         external high frequency oscillator will be enabled, i.e. CCM_REF_EN_B =
          '0'.
      0x1 - DIS_REF_OSC_1 :
         external high frequency oscillator will be disabled, i.e. CCM_REF_EN_B 
         = '1'
 (rw) (01)  [0;32mVSTBY[0m  - [08:08] -  Voltage standby request bit
      0 - VSTBY_0 :
         Voltage will not be changed to standby voltage after next entrance to S
         TOP mode. ( PMIC_STBY_REQ will remain negated - '0')
      0x1 - VSTBY_1 :
         Voltage will be requested to change to standby voltage after next entra
         nce to stop mode. ( PMIC_STBY_REQ will be asserted - '1').
 (rw) (02)  [0;32mSTBY_COUNT[0m  - [10:09] -  Standby counter definition
      0 - STBY_COUNT_0 :
         CCM will wait (1*pmic_delay_scaler)+1 ckil clock cycles
      0x1 - STBY_COUNT_1 :
         CCM will wait (3*pmic_delay_scaler)+1 ckil clock cycles
      0x2 - STBY_COUNT_2 :
         CCM will wait (7*pmic_delay_scaler)+1 ckil clock cycles
      0x3 - STBY_COUNT_3 :
         CCM will wait (15*pmic_delay_scaler)+1 ckil clock cycles
 (rw) (01)  [0;32mCOSC_PWRDOWN[0m  - [11:11] -  In run mode, software can manually control powering down of on chip oscillator,
  i
      0 - COSC_PWRDOWN_0 :
         On chip oscillator will not be powered down, i.e. cosc_pwrdown = '0'.
      0x1 - COSC_PWRDOWN_1 :
         On chip oscillator will be powered down, i.e. cosc_pwrdown = '1'.
 (rw) (01)  [0;32mBYPASS_LPM_HS1[0m  - [19:19] -  Bypass low power mode handshake. This bit should always be set to 1'b1 by softw
 are.
 (rw) (01)  [0;32mBYPASS_LPM_HS0[0m  - [21:21] -  Bypass low power mode handshake. This bit should always be set to 1'b1 by softw
 are.
 (rw) (01)  [0;32mMASK_CORE0_WFI[0m  - [22:22] -  Mask WFI of core0 for entering low power mode Assertion of all bits[27:22] will
  generate low power mode request
      0 - MASK_CORE0_WFI_0 :
         WFI of core0 is not masked
      0x1 - MASK_CORE0_WFI_1 :
         WFI of core0 is masked
 (rw) (01)  [0;32mMASK_SCU_IDLE[0m  - [26:26] -  Mask SCU IDLE for entering low power mode Assertion of all bits[27:22] will gen
 erate low power mode request
      0 - MASK_SCU_IDLE_0 :
         SCU IDLE is not masked
      0x1 - MASK_SCU_IDLE_1 :
         SCU IDLE is masked
 (rw) (01)  [0;32mMASK_L2CC_IDLE[0m  - [27:27] -  Mask L2CC IDLE for entering low power mode
      0 - MASK_L2CC_IDLE_0 :
         L2CC IDLE is not masked
      0x1 - MASK_L2CC_IDLE_1 :
         L2CC IDLE is masked
</lang>
#### p.CCM.CCGR4
<lang=dft>
 (rw)  [1;33m0x400fc078[0m (0x400fc000 + 0x0078)
CCM Clock Gating Register 4
 (rw) (02)  [0;32mCG0[0m  - [01:00] -  sim_m7 register access clock (sim_m7_mainclk_r_enable)
 (rw) (02)  [0;32mCG1[0m  - [03:02] -  iomuxc clock (iomuxc_clk_enable)
 (rw) (02)  [0;32mCG2[0m  - [05:04] -  iomuxc gpr clock (iomuxc_gpr_clk_enable)
 (rw) (02)  [0;32mCG3[0m  - [07:06] -  bee clock(bee_clk_enable)
 (rw) (02)  [0;32mCG4[0m  - [09:08] -  sim_m7 clock (sim_m7_clk_enable)
 (rw) (02)  [0;32mCG5[0m  - [11:10] -  tsc_dig clock (tsc_clk_enable)
 (rw) (02)  [0;32mCG6[0m  - [13:12] -  sim_m clocks (sim_m_clk_enable)
 (rw) (02)  [0;32mCG7[0m  - [15:14] -  sim_ems clocks (sim_ems_clk_enable)
 (rw) (02)  [0;32mCG8[0m  - [17:16] -  pwm1 clocks (pwm1_clk_enable)
 (rw) (02)  [0;32mCG9[0m  - [19:18] -  pwm2 clocks (pwm2_clk_enable)
 (rw) (02)  [0;32mCG10[0m  - [21:20] -  pwm3 clocks (pwm3_clk_enable)
 (rw) (02)  [0;32mCG11[0m  - [23:22] -  pwm4 clocks (pwm4_clk_enable)
 (rw) (02)  [0;32mCG12[0m  - [25:24] -  enc1 clocks (enc1_clk_enable)
 (rw) (02)  [0;32mCG13[0m  - [27:26] -  enc2 clocks (enc2_clk_enable)
 (rw) (02)  [0;32mCG14[0m  - [29:28] -  enc3 clocks (enc3_clk_enable)
 (rw) (02)  [0;32mCG15[0m  - [31:30] -  enc4 clocks (enc4_clk_enable)
</lang>
#### ROMC.ROMPATCH1D
<link=p.ROMC.ROMPATCH1D>
#### p.romc.rompatch0a
<link=p.ROMC.ROMPATCH0A>
#### ROMC.ROMPATCH7A
<link=p.ROMC.ROMPATCH7A>
#### p.romc.rompatch13a
<link=p.ROMC.ROMPATCH13A>
#### p.LPUART1.BAUD
<lang=dft>
 (rw)  [1;33m0x40184010[0m (0x40184000 + 0x0010)
LPUART Baud Rate Register
 (rw) (13)  [0;32mSBR[0m  - [12:00] -  Baud Rate Modulo Divisor.
 (rw) (01)  [0;32mSBNS[0m  - [13:13] -  Stop Bit Number Select
      0 - SBNS_0 :
         One stop bit.
      0x1 - SBNS_1 :
         Two stop bits.
 (rw) (01)  [0;32mRXEDGIE[0m  - [14:14] -  RX Input Active Edge Interrupt Enable
      0 - RXEDGIE_0 :
         Hardware interrupts from STAT[RXEDGIF] are disabled.
      0x1 - RXEDGIE_1 :
         Hardware interrupt is requested when STAT[RXEDGIF] flag is 1.
 (rw) (01)  [0;32mLBKDIE[0m  - [15:15] -  LIN Break Detect Interrupt Enable
      0 - LBKDIE_0 :
         Hardware interrupts from STAT[LBKDIF] flag are disabled (use polling).
      0x1 - LBKDIE_1 :
         Hardware interrupt requested when STAT[LBKDIF] flag is 1.
 (rw) (01)  [0;32mRESYNCDIS[0m  - [16:16] -  Resynchronization Disable
      0 - RESYNCDIS_0 :
         Resynchronization during received data word is supported
      0x1 - RESYNCDIS_1 :
         Resynchronization during received data word is disabled
 (rw) (01)  [0;32mBOTHEDGE[0m  - [17:17] -  Both Edge Sampling
      0 - BOTHEDGE_0 :
         Receiver samples input data using the rising edge of the baud rate cloc
         k.
      0x1 - BOTHEDGE_1 :
         Receiver samples input data using the rising and falling edge of the ba
         ud rate clock.
 (rw) (02)  [0;32mMATCFG[0m  - [19:18] -  Match Configuration
      0 - MATCFG_0 :
         Address Match Wakeup
      0x1 - MATCFG_1 :
         Idle Match Wakeup
      0x2 - MATCFG_2 :
         Match On and Match Off
      0x3 - MATCFG_3 :
         Enables RWU on Data Match and Match On/Off for transmitter CTS input
 (rw) (01)  [0;32mRIDMAE[0m  - [20:20] -  Receiver Idle DMA Enable
      0 - RIDMAE_0 :
         DMA request disabled.
      0x1 - RIDMAE_1 :
         DMA request enabled.
 (rw) (01)  [0;32mRDMAE[0m  - [21:21] -  Receiver Full DMA Enable
      0 - RDMAE_0 :
         DMA request disabled.
      0x1 - RDMAE_1 :
         DMA request enabled.
 (rw) (01)  [0;32mTDMAE[0m  - [23:23] -  Transmitter DMA Enable
      0 - TDMAE_0 :
         DMA request disabled.
      0x1 - TDMAE_1 :
         DMA request enabled.
 (rw) (05)  [0;32mOSR[0m  - [28:24] -  Oversampling Ratio
      0 - OSR_0 :
         Writing 0 to this field will result in an oversampling ratio of 16
      0x3 - OSR_3 :
         Oversampling ratio of 4, requires BOTHEDGE to be set.
      0x4 - OSR_4 :
         Oversampling ratio of 5, requires BOTHEDGE to be set.
      0x5 - OSR_5 :
         Oversampling ratio of 6, requires BOTHEDGE to be set.
      0x6 - OSR_6 :
         Oversampling ratio of 7, requires BOTHEDGE to be set.
      0x7 - OSR_7 :
         Oversampling ratio of 8.
      0x8 - OSR_8 :
         Oversampling ratio of 9.
      0x9 - OSR_9 :
         Oversampling ratio of 10.
      0xA - OSR_10 :
         Oversampling ratio of 11.
      0xB - OSR_11 :
         Oversampling ratio of 12.
      0xC - OSR_12 :
         Oversampling ratio of 13.
      0xD - OSR_13 :
         Oversampling ratio of 14.
      0xE - OSR_14 :
         Oversampling ratio of 15.
      0xF - OSR_15 :
         Oversampling ratio of 16.
      0x10 - OSR_16 :
         Oversampling ratio of 17.
      0x11 - OSR_17 :
         Oversampling ratio of 18.
      0x12 - OSR_18 :
         Oversampling ratio of 19.
      0x13 - OSR_19 :
         Oversampling ratio of 20.
      0x14 - OSR_20 :
         Oversampling ratio of 21.
      0x15 - OSR_21 :
         Oversampling ratio of 22.
      0x16 - OSR_22 :
         Oversampling ratio of 23.
      0x17 - OSR_23 :
         Oversampling ratio of 24.
      0x18 - OSR_24 :
         Oversampling ratio of 25.
      0x19 - OSR_25 :
         Oversampling ratio of 26.
      0x1A - OSR_26 :
         Oversampling ratio of 27.
      0x1B - OSR_27 :
         Oversampling ratio of 28.
      0x1C - OSR_28 :
         Oversampling ratio of 29.
      0x1D - OSR_29 :
         Oversampling ratio of 30.
      0x1E - OSR_30 :
         Oversampling ratio of 31.
      0x1F - OSR_31 :
         Oversampling ratio of 32.
 (rw) (01)  [0;32mM10[0m  - [29:29] -  10-bit Mode select
      0 - M10_0 :
         Receiver and transmitter use 7-bit to 9-bit data characters.
      0x1 - M10_1 :
         Receiver and transmitter use 10-bit data characters.
 (rw) (01)  [0;32mMAEN2[0m  - [30:30] -  Match Address Mode Enable 2
      0 - MAEN2_0 :
         Normal operation.
      0x1 - MAEN2_1 :
         Enables automatic address matching or data matching mode for MATCH[MA2]
         .
 (rw) (01)  [0;32mMAEN1[0m  - [31:31] -  Match Address Mode Enable 1
      0 - MAEN1_0 :
         Normal operation.
      0x1 - MAEN1_1 :
         Enables automatic address matching or data matching mode for MATCH[MA1]
         .
</lang>
#### LPUART1.CTRL
<link=p.LPUART1.CTRL>
#### p.lpuart1.modir
<link=p.LPUART1.MODIR>
#### p.LPUART1.WATER
<lang=dft>
 (rw)  [1;33m0x4018402c[0m (0x40184000 + 0x002c)
LPUART Watermark Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit Watermark
 (ro) (03)  [0;32mTXCOUNT[0m  - [10:08] -  Transmit Counter
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive Watermark
 (ro) (03)  [0;32mRXCOUNT[0m  - [26:24] -  Receive Counter
</lang>
#### LPUART2.PARAM
<link=p.LPUART2.PARAM>
#### LPUART2.PINCFG
<link=p.LPUART2.PINCFG>
#### LPUART2.STAT
<link=p.LPUART2.STAT>
#### p.LPUART2.WATER
<lang=dft>
 (rw)  [1;33m0x4018802c[0m (0x40188000 + 0x002c)
LPUART Watermark Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit Watermark
 (ro) (03)  [0;32mTXCOUNT[0m  - [10:08] -  Transmit Counter
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive Watermark
 (ro) (03)  [0;32mRXCOUNT[0m  - [26:24] -  Receive Counter
</lang>
#### LPUART3.VERID
<link=p.LPUART3.VERID>
#### lpuart3.ctrl
<link=p.LPUART3.CTRL>
#### p.LPUART3.MATCH
<lang=dft>
 (rw)  [1;33m0x4018c020[0m (0x4018c000 + 0x0020)
LPUART Match Address Register
 (rw) (10)  [0;32mMA1[0m  - [09:00] -  Match Address 1
 (rw) (10)  [0;32mMA2[0m  - [25:16] -  Match Address 2
</lang>
#### LPUART4.PINCFG
<link=p.LPUART4.PINCFG>
#### p.lpuart4.modir
<link=p.LPUART4.MODIR>
#### lpuart5.fifo
<link=p.LPUART5.FIFO>
#### p.lpuart5.water
<link=p.LPUART5.WATER>
#### p.LPUART6.PARAM
<lang=dft>
 (ro)  [1;33m0x40198004[0m (0x40198000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
</lang>
#### lpuart6.baud
<link=p.LPUART6.BAUD>
#### p.LPUART7.PINCFG
<lang=dft>
 (rw)  [1;33m0x4019c00c[0m (0x4019c000 + 0x000c)
LPUART Pin Configuration Register
 (rw) (02)  [0;32mTRGSEL[0m  - [01:00] -  Trigger Select
      0 - TRGSEL_0 :
         Input trigger is disabled.
      0x1 - TRGSEL_1 :
         Input trigger is used instead of RXD pin input.
      0x2 - TRGSEL_2 :
         Input trigger is used instead of CTS_B pin input.
      0x3 - TRGSEL_3 :
         Input trigger is used to modulate the TXD pin output. The TXD pin outpu
         t (after TXINV configuration) is ANDed with the input trigger.
</lang>
#### LPUART7.DATA
<link=p.LPUART7.DATA>
#### lpuart7.match
<link=p.LPUART7.MATCH>
#### p.lpuart7.fifo
<link=p.LPUART7.FIFO>
#### lpuart8.data
<link=p.LPUART8.DATA>
#### FLEXIO1.PIN
<link=p.FLEXIO1.PIN>
#### flexio1.shiftsien
<link=p.FLEXIO1.SHIFTSIEN>
#### p.FLEXIO1.SHIFTCTL[3]
<lang=dft>
 (rw)  [1;33m0x401ac08c[0m (0x401ac000 + 0x008c)
Shifter Control N Register
 (rw) (03)  [0;32mSMOD[0m  - [02:00] -  Shifter Mode
      0 - SMOD_0 :
         Disabled.
      0x1 - SMOD_1 :
         Receive mode. Captures the current Shifter content into the SHIFTBUF on
          expiration of the Timer.
      0x2 - SMOD_2 :
         Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of
          the Timer.
      0x4 - SMOD_4 :
         Match Store mode. Shifter data is compared to SHIFTBUF content on expir
         ation of the Timer.
      0x5 - SMOD_5 :
         Match Continuous mode. Shifter data is continuously compared to SHIFTBU
         F contents.
      0x6 - SMOD_6 :
         State mode. SHIFTBUF contents are used for storing programmable state a
         ttributes.
      0x7 - SMOD_7 :
         Logic mode. SHIFTBUF contents are used for implementing programmable lo
         gic look up table.
 (rw) (01)  [0;32mPINPOL[0m  - [07:07] -  Shifter Pin Polarity
      0 - PINPOL_0 :
         Pin is active high
      0x1 - PINPOL_1 :
         Pin is active low
 (rw) (04)  [0;32mPINSEL[0m  - [11:08] -  Shifter Pin Select
 (rw) (02)  [0;32mPINCFG[0m  - [17:16] -  Shifter Pin Configuration
      0 - PINCFG_0 :
         Shifter pin output disabled
      0x1 - PINCFG_1 :
         Shifter pin open drain or bidirectional output enable
      0x2 - PINCFG_2 :
         Shifter pin bidirectional output data
      0x3 - PINCFG_3 :
         Shifter pin output
 (rw) (01)  [0;32mTIMPOL[0m  - [23:23] -  Timer Polarity
      0 - TIMPOL_0 :
         Shift on posedge of Shift clock
      0x1 - TIMPOL_1 :
         Shift on negedge of Shift clock
 (rw) (02)  [0;32mTIMSEL[0m  - [25:24] -  Timer Select
</lang>
#### p.FLEXIO1.SHIFTBUF[2]
<lang=dft>
 (rw)  [1;33m0x401ac208[0m (0x401ac000 + 0x0208)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio1.shiftbufbys[3]
<link=p.FLEXIO1.SHIFTBUFBYS[3]>
#### p.flexio1.shiftbufbbs[2]
<link=p.FLEXIO1.SHIFTBUFBBS[2]>
#### p.FLEXIO1.TIMCTL[3]
<lang=dft>
 (rw)  [1;33m0x401ac40c[0m (0x401ac000 + 0x040c)
Timer Control N Register
 (rw) (02)  [0;32mTIMOD[0m  - [01:00] -  Timer Mode
      0 - TIMOD_0 :
         Timer Disabled.
      0x1 - TIMOD_1 :
         Dual 8-bit counters baud mode.
      0x2 - TIMOD_2 :
         Dual 8-bit counters PWM high mode.
      0x3 - TIMOD_3 :
         Single 16-bit counter mode.
 (rw) (01)  [0;32mPINPOL[0m  - [07:07] -  Timer Pin Polarity
      0 - PINPOL_0 :
         Pin is active high
      0x1 - PINPOL_1 :
         Pin is active low
 (rw) (04)  [0;32mPINSEL[0m  - [11:08] -  Timer Pin Select
 (rw) (02)  [0;32mPINCFG[0m  - [17:16] -  Timer Pin Configuration
      0 - PINCFG_0 :
         Timer pin output disabled
      0x1 - PINCFG_1 :
         Timer pin open drain or bidirectional output enable
      0x2 - PINCFG_2 :
         Timer pin bidirectional output data
      0x3 - PINCFG_3 :
         Timer pin output
 (rw) (01)  [0;32mTRGSRC[0m  - [22:22] -  Trigger Source
      0 - TRGSRC_0 :
         External trigger selected
      0x1 - TRGSRC_1 :
         Internal trigger selected
 (rw) (01)  [0;32mTRGPOL[0m  - [23:23] -  Trigger Polarity
      0 - TRGPOL_0 :
         Trigger active high
      0x1 - TRGPOL_1 :
         Trigger active low
 (rw) (05)  [0;32mTRGSEL[0m  - [28:24] -  Trigger Select
</lang>
#### p.FLEXIO1.TIMCFG[3]
<lang=dft>
 (rw)  [1;33m0x401ac48c[0m (0x401ac000 + 0x048c)
Timer Configuration N Register
 (rw) (01)  [0;32mTSTART[0m  - [01:01] -  Timer Start Bit
      0 - TSTART_0 :
         Start bit disabled
      0x1 - TSTART_1 :
         Start bit enabled
 (rw) (02)  [0;32mTSTOP[0m  - [05:04] -  Timer Stop Bit
      0 - TSTOP_0 :
         Stop bit disabled
      0x1 - TSTOP_1 :
         Stop bit is enabled on timer compare
      0x2 - TSTOP_2 :
         Stop bit is enabled on timer disable
      0x3 - TSTOP_3 :
         Stop bit is enabled on timer compare and timer disable
 (rw) (03)  [0;32mTIMENA[0m  - [10:08] -  Timer Enable
      0 - TIMENA_0 :
         Timer always enabled
      0x1 - TIMENA_1 :
         Timer enabled on Timer N-1 enable
      0x2 - TIMENA_2 :
         Timer enabled on Trigger high
      0x3 - TIMENA_3 :
         Timer enabled on Trigger high and Pin high
      0x4 - TIMENA_4 :
         Timer enabled on Pin rising edge
      0x5 - TIMENA_5 :
         Timer enabled on Pin rising edge and Trigger high
      0x6 - TIMENA_6 :
         Timer enabled on Trigger rising edge
      0x7 - TIMENA_7 :
         Timer enabled on Trigger rising or falling edge
 (rw) (03)  [0;32mTIMDIS[0m  - [14:12] -  Timer Disable
      0 - TIMDIS_0 :
         Timer never disabled
      0x1 - TIMDIS_1 :
         Timer disabled on Timer N-1 disable
      0x2 - TIMDIS_2 :
         Timer disabled on Timer compare (upper 8-bits match and decrement)
      0x3 - TIMDIS_3 :
         Timer disabled on Timer compare (upper 8-bits match and decrement) and 
         Trigger Low
      0x4 - TIMDIS_4 :
         Timer disabled on Pin rising or falling edge
      0x5 - TIMDIS_5 :
         Timer disabled on Pin rising or falling edge provided Trigger is high
      0x6 - TIMDIS_6 :
         Timer disabled on Trigger falling edge
 (rw) (03)  [0;32mTIMRST[0m  - [18:16] -  Timer Reset
      0 - TIMRST_0 :
         Timer never reset
      0x2 - TIMRST_2 :
         Timer reset on Timer Pin equal to Timer Output
      0x3 - TIMRST_3 :
         Timer reset on Timer Trigger equal to Timer Output
      0x4 - TIMRST_4 :
         Timer reset on Timer Pin rising edge
      0x6 - TIMRST_6 :
         Timer reset on Trigger rising edge
      0x7 - TIMRST_7 :
         Timer reset on Trigger rising or falling edge
 (rw) (02)  [0;32mTIMDEC[0m  - [21:20] -  Timer Decrement
      0 - TIMDEC_0 :
         Decrement counter on FlexIO clock, Shift clock equals Timer output.
      0x1 - TIMDEC_1 :
         Decrement counter on Trigger input (both edges), Shift clock equals Tim
         er output.
      0x2 - TIMDEC_2 :
         Decrement counter on Pin input (both edges), Shift clock equals Pin inp
         ut.
      0x3 - TIMDEC_3 :
         Decrement counter on Trigger input (both edges), Shift clock equals Tri
         gger input.
 (rw) (02)  [0;32mTIMOUT[0m  - [25:24] -  Timer Output
      0 - TIMOUT_0 :
         Timer output is logic one when enabled and is not affected by timer res
         et
      0x1 - TIMOUT_1 :
         Timer output is logic zero when enabled and is not affected by timer re
         set
      0x2 - TIMOUT_2 :
         Timer output is logic one when enabled and on timer reset
      0x3 - TIMOUT_3 :
         Timer output is logic zero when enabled and on timer reset
</lang>
#### FLEXIO1.TIMCMP[0]
<link=p.FLEXIO1.TIMCMP[0]>
#### p.flexio1.timcmp[3]
<link=p.FLEXIO1.TIMCMP[3]>
#### p.FLEXIO1.SHIFTBUFNBS[1]
<lang=dft>
 (rw)  [1;33m0x401ac684[0m (0x401ac000 + 0x0684)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio1.shiftbufnis[2]
<link=p.FLEXIO1.SHIFTBUFNIS[2]>
#### flexio2.timstat
<link=p.FLEXIO2.TIMSTAT>
#### p.flexio2.shiftctl[2]
<link=p.FLEXIO2.SHIFTCTL[2]>
#### flexio2.shiftctl[2]
<link=p.FLEXIO2.SHIFTCTL[2]>
#### p.flexio2.shiftbuf[3]
<link=p.FLEXIO2.SHIFTBUF[3]>
#### p.flexio2.shiftbufbys[1]
<link=p.FLEXIO2.SHIFTBUFBYS[1]>
#### FLEXIO2.SHIFTBUFBBS[3]
<link=p.FLEXIO2.SHIFTBUFBBS[3]>
#### p.FLEXIO2.SHIFTBUFNBS[2]
<lang=dft>
 (rw)  [1;33m0x401b0688[0m (0x401b0000 + 0x0688)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio2.shiftbufnbs[3]
<link=p.FLEXIO2.SHIFTBUFNBS[3]>
#### flexio2.shiftbufhws[0]
<link=p.FLEXIO2.SHIFTBUFHWS[0]>
#### p.flexio2.shiftbufnis[0]
<link=p.FLEXIO2.SHIFTBUFNIS[0]>
#### p.FLEXIO3.TIMIEN
<lang=dft>
 (rw)  [1;33m0x42020028[0m (0x42020000 + 0x0028)
Timer Interrupt Enable Register
 (rw) (04)  [0;32mTEIE[0m  - [03:00] -  Timer Status Interrupt Enable
</lang>
#### FLEXIO3.SHIFTCTL[0]
<link=p.FLEXIO3.SHIFTCTL[0]>
#### flexio3.shiftcfg[2]
<link=p.FLEXIO3.SHIFTCFG[2]>
#### p.FLEXIO3.SHIFTCFG[3]
<lang=dft>
 (rw)  [1;33m0x4202010c[0m (0x42020000 + 0x010c)
Shifter Configuration N Register
 (rw) (02)  [0;32mSSTART[0m  - [01:00] -  Shifter Start bit
      0 - SSTART_0 :
         Start bit disabled for transmitter/receiver/match store, transmitter lo
         ads data on enable
      0x1 - SSTART_1 :
         Start bit disabled for transmitter/receiver/match store, transmitter lo
         ads data on first shift
      0x2 - SSTART_2 :
         Transmitter outputs start bit value 0 before loading data on first shif
         t, receiver/match store sets error flag if start bit is not 0
      0x3 - SSTART_3 :
         Transmitter outputs start bit value 1 before loading data on first shif
         t, receiver/match store sets error flag if start bit is not 1
 (rw) (02)  [0;32mSSTOP[0m  - [05:04] -  Shifter Stop bit
      0 - SSTOP_0 :
         Stop bit disabled for transmitter/receiver/match store
      0x2 - SSTOP_2 :
         Transmitter outputs stop bit value 0 on store, receiver/match store set
         s error flag if stop bit is not 0
      0x3 - SSTOP_3 :
         Transmitter outputs stop bit value 1 on store, receiver/match store set
         s error flag if stop bit is not 1
 (rw) (01)  [0;32mINSRC[0m  - [08:08] -  Input Source
      0 - INSRC_0 :
         Pin
      0x1 - INSRC_1 :
         Shifter N+1 Output
 (rw) (04)  [0;32mPWIDTH[0m  - [19:16] -  Parallel Width
</lang>
#### p.FLEXIO3.SHIFTBUFBIS[0]
<lang=dft>
 (rw)  [1;33m0x42020280[0m (0x42020000 + 0x0280)
Shifter Buffer N Bit Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBIS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufbis[1]
<link=p.FLEXIO3.SHIFTBUFBIS[1]>
#### FLEXIO3.SHIFTBUFBIS[3]
<link=p.FLEXIO3.SHIFTBUFBIS[3]>
#### flexio3.shiftbufbys[2]
<link=p.FLEXIO3.SHIFTBUFBYS[2]>
#### p.FLEXIO3.SHIFTBUFBBS[1]
<lang=dft>
 (rw)  [1;33m0x42020384[0m (0x42020000 + 0x0384)
Shifter Buffer N Bit Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBBS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO3.TIMCTL[1]
<link=p.FLEXIO3.TIMCTL[1]>
#### p.flexio3.timctl[3]
<link=p.FLEXIO3.TIMCTL[3]>
#### p.flexio3.timcfg[0]
<link=p.FLEXIO3.TIMCFG[0]>
#### flexio3.timcfg[3]
<link=p.FLEXIO3.TIMCFG[3]>
#### p.FLEXIO3.SHIFTBUFNBS[2]
<lang=dft>
 (rw)  [1;33m0x42020688[0m (0x42020000 + 0x0688)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.gpio1.icr1
<link=p.GPIO1.ICR1>
#### p.gpio1.isr
<link=p.GPIO1.ISR>
#### p.GPIO1.DR_CLEAR
<lang=dft>
 (wo)  [1;33m0x401b8088[0m (0x401b8000 + 0x0088)
GPIO data register CLEAR
 (wo) (32)  [0;32mDR_CLEAR[0m  - [31:00] -  DR_CLEAR
</lang>
#### p.gpio5.imr
<link=p.GPIO5.IMR>
#### GPIO5.ISR
<link=p.GPIO5.ISR>
#### p.gpio5.dr_clear
<link=p.GPIO5.DR_CLEAR>
#### GPIO2.PSR
<link=p.GPIO2.PSR>
#### gpio2.icr1
<link=p.GPIO2.ICR1>
#### GPIO2.ISR
<link=p.GPIO2.ISR>
#### p.gpio2.dr_toggle
<link=p.GPIO2.DR_TOGGLE>
#### gpio2.dr_toggle
<link=p.GPIO2.DR_TOGGLE>
#### p.GPIO3
<lang=dft>
base: 0x401c0000
DR              DR_CLEAR        DR_SET          DR_TOGGLE       
EDGE_SEL        GDIR            ICR1            ICR2            
IMR             ISR             PSR             
输入 p.GPIO3.{reg_name} 以查看寄存器的详细信息
type p.GPIO3.{reg_name} to check details of registers
</lang>
#### GPIO3.DR
<link=p.GPIO3.DR>
#### GPIO3.IMR
<link=p.GPIO3.IMR>
#### gpio3.dr_set
<link=p.GPIO3.DR_SET>
#### p.gpio4.gdir
<link=p.GPIO4.GDIR>
#### gpio4.psr
<link=p.GPIO4.PSR>
#### p.gpio4.icr1
<link=p.GPIO4.ICR1>
#### gpio4.imr
<link=p.GPIO4.IMR>
#### p.GPIO6.ICR1
<lang=dft>
 (rw)  [1;33m0x4200000c[0m (0x42000000 + 0x000c)
GPIO interrupt configuration register1
 (rw) (02)  [0;32mICR0[0m  - [01:00] -  ICR0
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR1[0m  - [03:02] -  ICR1
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR2[0m  - [05:04] -  ICR2
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR3[0m  - [07:06] -  ICR3
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR4[0m  - [09:08] -  ICR4
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR5[0m  - [11:10] -  ICR5
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR6[0m  - [13:12] -  ICR6
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR7[0m  - [15:14] -  ICR7
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR8[0m  - [17:16] -  ICR8
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR9[0m  - [19:18] -  ICR9
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR10[0m  - [21:20] -  ICR10
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR11[0m  - [23:22] -  ICR11
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR12[0m  - [25:24] -  ICR12
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR13[0m  - [27:26] -  ICR13
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR14[0m  - [29:28] -  ICR14
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR15[0m  - [31:30] -  ICR15
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
</lang>
#### p.GPIO6.DR_CLEAR
<lang=dft>
 (wo)  [1;33m0x42000088[0m (0x42000000 + 0x0088)
GPIO data register CLEAR
 (wo) (32)  [0;32mDR_CLEAR[0m  - [31:00] -  DR_CLEAR
</lang>
#### p.gpio7
<link=p.GPIO7>
#### gpio7.gdir
<link=p.GPIO7.GDIR>
#### GPIO7.GDIR
<link=p.GPIO7.GDIR>
#### gpio7.icr1
<link=p.GPIO7.ICR1>
#### gpio8.dr
<link=p.GPIO8.DR>
#### p.gpio8.gdir
<link=p.GPIO8.GDIR>
#### p.GPIO8.PSR
<lang=dft>
 (ro)  [1;33m0x42008008[0m (0x42008000 + 0x0008)
GPIO pad status register
 (ro) (32)  [0;32mPSR[0m  - [31:00] -  PSR
</lang>
#### gpio8.icr1
<link=p.GPIO8.ICR1>
#### GPIO8.ISR
<link=p.GPIO8.ISR>
#### p.gpio8.edge_sel
<link=p.GPIO8.EDGE_SEL>
#### GPIO8.DR_CLEAR
<link=p.GPIO8.DR_CLEAR>
#### can1.ecr
<link=p.CAN1.ECR>
#### can1.crcr
<link=p.CAN1.CRCR>
#### CAN1.RXFIR
<link=p.CAN1.RXFIR>
#### CAN1.DBG1
<link=p.CAN1.DBG1>
#### p.can1.rximr0
<link=p.CAN1.RXIMR0>
#### can1.rximr7
<link=p.CAN1.RXIMR7>
#### p.can1.rximr13
<link=p.CAN1.RXIMR13>
#### p.CAN1.RXIMR17
<lang=dft>
 (rw)  [1;33m0x401d08c4[0m (0x401d0000 + 0x08c4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr22
<link=p.CAN1.RXIMR22>
#### CAN1.RXIMR23
<link=p.CAN1.RXIMR23>
#### p.CAN1.RXIMR26
<lang=dft>
 (rw)  [1;33m0x401d08e8[0m (0x401d0000 + 0x08e8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr26
<link=p.CAN1.RXIMR26>
#### p.CAN1.RXIMR31
<lang=dft>
 (rw)  [1;33m0x401d08fc[0m (0x401d0000 + 0x08fc)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR39
<link=p.CAN1.RXIMR39>
#### p.CAN1.RXIMR45
<lang=dft>
 (rw)  [1;33m0x401d0934[0m (0x401d0000 + 0x0934)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr47
<link=p.CAN1.RXIMR47>
#### CAN1.RXIMR48
<link=p.CAN1.RXIMR48>
#### p.can1.rximr49
<link=p.CAN1.RXIMR49>
#### can1.rximr50
<link=p.CAN1.RXIMR50>
#### CAN1.RXIMR53
<link=p.CAN1.RXIMR53>
#### p.can1.gfwr
<link=p.CAN1.GFWR>
#### p.CAN2.ECR
<lang=dft>
 (rw)  [1;33m0x401d401c[0m (0x401d4000 + 0x001c)
Error Counter Register
 (rw) (08)  [0;32mTX_ERR_COUNTER[0m  - [07:00] -  Tx_Err_Counter
 (rw) (08)  [0;32mRX_ERR_COUNTER[0m  - [15:08] -  Rx_Err_Counter
</lang>
#### p.CAN2.ESR1
<lang=dft>
 (rw)  [1;33m0x401d4020[0m (0x401d4000 + 0x0020)
Error and Status 1 Register
 (rw) (01)  [0;32mWAKINT[0m  - [00:00] -  When FLEXCAN is Stop Mode and a recessive to dominant transition is detected on
  the CAN bus and if the WAK_MSK bit in the MCR Register is set, an interrupt is
  generated to the Arm
      0 - WAKINT_0 :
         No such occurrence
      0x1 - WAKINT_1 :
         Indicates a recessive to dominant transition received on the CAN bus wh
         en the FLEXCAN module is in Stop Mode
 (rw) (01)  [0;32mERRINT[0m  - [01:01] -  This bit indicates that at least one of the Error Bits (bits 15-10) is set
      0 - ERRINT_0 :
         No such occurrence
      0x1 - ERRINT_1 :
         Indicates setting of any Error Bit in the Error and Status Register
 (rw) (01)  [0;32mBOFFINT[0m  - [02:02] -  This bit is set when FLEXCAN enters 'Bus Off' state
      0 - BOFFINT_0 :
         No such occurrence
      0x1 - BOFFINT_1 :
         FLEXCAN module entered 'Bus Off' state
 (ro) (01)  [0;32mRX[0m  - [03:03] -  This bit indicates if FlexCAN is receiving a message. Refer to .
      0 - RX_0 :
         FLEXCAN is receiving a message
      0x1 - RX_1 :
         FLEXCAN is transmitting a message
 (ro) (02)  [0;32mFLTCONF[0m  - [05:04] -  If the LOM bit in the Control Register is asserted, after some delay that depen
 ds on the CAN bit timing the FLT_CONF field will indicate "Error Passive"
      0 - FLTCONF_0 :
         Error Active
      0x1 - FLTCONF_1 :
         Error Passive
      #1x - FLTCONF_2 :
         Bus off
 (ro) (01)  [0;32mTX[0m  - [06:06] -  This bit indicates if FLEXCAN is transmitting a message.Refer to .
      0 - TX_0 :
         FLEXCAN is receiving a message
      0x1 - TX_1 :
         FLEXCAN is transmitting a message
 (ro) (01)  [0;32mIDLE[0m  - [07:07] -  This bit indicates when CAN bus is in IDLE state.Refer to .
      0 - IDLE_0 :
         No such occurrence
      0x1 - IDLE_1 :
         CAN bus is now IDLE
 (ro) (01)  [0;32mRXWRN[0m  - [08:08] -  This bit indicates when repetitive errors are occurring during message receptio
 n.
      0 - RXWRN_0 :
         No such occurrence
      0x1 - RXWRN_1 :
         Rx_Err_Counter >= 96
 (ro) (01)  [0;32mTXWRN[0m  - [09:09] -  This bit indicates when repetitive errors are occurring during message transmis
 sion.
      0 - TXWRN_0 :
         No such occurrence
      0x1 - TXWRN_1 :
         TX_Err_Counter >= 96
 (ro) (01)  [0;32mSTFERR[0m  - [10:10] -  This bit indicates that a Stuffing Error has been detected.
      0 - STFERR_0 :
         No such occurrence.
      0x1 - STFERR_1 :
         A Stuffing Error occurred since last read of this register.
 (ro) (01)  [0;32mFRMERR[0m  - [11:11] -  This bit indicates that a Form Error has been detected by the receiver node, i
      0 - FRMERR_0 :
         No such occurrence
      0x1 - FRMERR_1 :
         A Form Error occurred since last read of this register
 (ro) (01)  [0;32mCRCERR[0m  - [12:12] -  This bit indicates that a CRC Error has been detected by the receiver node, i
      0 - CRCERR_0 :
         No such occurrence
      0x1 - CRCERR_1 :
         A CRC error occurred since last read of this register.
 (ro) (01)  [0;32mACKERR[0m  - [13:13] -  This bit indicates that an Acknowledge Error has been detected by the transmitt
 er node, i
      0 - ACKERR_0 :
         No such occurrence
      0x1 - ACKERR_1 :
         An ACK error occurred since last read of this register
 (ro) (01)  [0;32mBIT0ERR[0m  - [14:14] -  This bit indicates when an inconsistency occurs between the transmitted and the
  received bit in a message
      0 - BIT0ERR_0 :
         No such occurrence
      0x1 - BIT0ERR_1 :
         At least one bit sent as dominant is received as recessive
 (ro) (01)  [0;32mBIT1ERR[0m  - [15:15] -  This bit indicates when an inconsistency occurs between the transmitted and the
  received bit in a message
      0 - BIT1ERR_0 :
         No such occurrence
      0x1 - BIT1ERR_1 :
         At least one bit sent as recessive is received as dominant
 (rw) (01)  [0;32mRWRNINT[0m  - [16:16] -  If the WRN_EN bit in MCR is asserted, the RWRN_INT bit is set when the RX_WRN f
 lag transition from '0' to '1', meaning that the Rx error counters reached 96
      0 - RWRNINT_0 :
         No such occurrence
      0x1 - RWRNINT_1 :
         The Rx error counter transition from < 96 to >= 96
 (rw) (01)  [0;32mTWRNINT[0m  - [17:17] -  If the WRN_EN bit in MCR is asserted, the TWRN_INT bit is set when the TX_WRN f
 lag transition from '0' to '1', meaning that the Tx error counter reached 96
      0 - TWRNINT_0 :
         No such occurrence
      0x1 - TWRNINT_1 :
         The Tx error counter transition from < 96 to >= 96
 (ro) (01)  [0;32mSYNCH[0m  - [18:18] -  This read-only flag indicates whether the FlexCAN is synchronized to the CAN bu
 s and able to participate in the communication process
      0 - SYNCH_0 :
         FlexCAN is not synchronized to the CAN bus
      0x1 - SYNCH_1 :
         FlexCAN is synchronized to the CAN bus
</lang>
#### CAN2.CRCR
<link=p.CAN2.CRCR>
#### CAN2.RXFIR
<link=p.CAN2.RXFIR>
#### p.can2.dbg2
<link=p.CAN2.DBG2>
#### p.can2.rximr1
<link=p.CAN2.RXIMR1>
#### p.CAN2.RXIMR5
<lang=dft>
 (rw)  [1;33m0x401d4894[0m (0x401d4000 + 0x0894)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR8
<link=p.CAN2.RXIMR8>
#### p.can2.rximr10
<link=p.CAN2.RXIMR10>
#### CAN2.RXIMR15
<link=p.CAN2.RXIMR15>
#### p.CAN2.RXIMR21
<lang=dft>
 (rw)  [1;33m0x401d48d4[0m (0x401d4000 + 0x08d4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr22
<link=p.CAN2.RXIMR22>
#### CAN2.RXIMR24
<link=p.CAN2.RXIMR24>
#### p.can2.rximr25
<link=p.CAN2.RXIMR25>
#### can2.rximr31
<link=p.CAN2.RXIMR31>
#### p.CAN2.RXIMR32
<lang=dft>
 (rw)  [1;33m0x401d4900[0m (0x401d4000 + 0x0900)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr36
<link=p.CAN2.RXIMR36>
#### can2.rximr40
<link=p.CAN2.RXIMR40>
#### p.CAN2.RXIMR43
<lang=dft>
 (rw)  [1;33m0x401d492c[0m (0x401d4000 + 0x092c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.CAN2.RXIMR50
<lang=dft>
 (rw)  [1;33m0x401d4948[0m (0x401d4000 + 0x0948)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr53
<link=p.CAN2.RXIMR53>
#### CAN2.RXIMR58
<link=p.CAN2.RXIMR58>
#### p.can2.gfwr
<link=p.CAN2.GFWR>
#### can2.gfwr
<link=p.CAN2.GFWR>
#### p.can3
<link=p.CAN3>
#### p.can3.rxmgmask
<link=p.CAN3.RXMGMASK>
#### p.can3.esr1
<link=p.CAN3.ESR1>
#### can3.esr1
<link=p.CAN3.ESR1>
#### p.can3.imask1
<link=p.CAN3.IMASK1>
#### can3.iflag1
<link=p.CAN3.IFLAG1>
#### p.CAN3.CRCR
<lang=dft>
 (ro)  [1;33m0x401d8044[0m (0x401d8000 + 0x0044)
CRC Register
 (ro) (15)  [0;32mTXCRC[0m  - [14:00] -  Transmitted CRC value
 (ro) (07)  [0;32mMBCRC[0m  - [22:16] -  CRC Mailbox
</lang>
#### p.CAN3.RXFGMASK
<lang=dft>
 (rw)  [1;33m0x401d8048[0m (0x401d8000 + 0x0048)
Legacy Rx FIFO Global Mask register
 (rw) (32)  [0;32mFGM[0m  - [31:00] -  Legacy Rx FIFO Global Mask Bits
</lang>
#### p.CAN3.CS0
<lang=dft>
 (rw)  [1;33m0x401d8080[0m (0x401d8000 + 0x0080)
Message Buffer 0 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### p.CAN3.MB0_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8080[0m (0x401d8000 + 0x0080)
Message Buffer 0 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### p.can3.mb0_32b_id
<link=p.CAN3.MB0_32B_ID>
#### p.CAN3.MB0_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8084[0m (0x401d8000 + 0x0084)
Message Buffer 0 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb0_8b_id
<link=p.CAN3.MB0_8B_ID>
#### p.can3.mb0_64b_word0
<link=p.CAN3.MB0_64B_WORD0>
#### CAN3.MB0_8B_WORD0
<link=p.CAN3.MB0_8B_WORD0>
#### CAN3.MB0_64B_WORD1
<link=p.CAN3.MB0_64B_WORD1>
#### CAN3.CS1
<link=p.CAN3.CS1>
#### p.can3.mb0_32b_word2
<link=p.CAN3.MB0_32B_WORD2>
#### p.CAN3.ID1
<lang=dft>
 (rw)  [1;33m0x401d8094[0m (0x401d8000 + 0x0094)
Message Buffer 1 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB0_16B_WORD3
<link=p.CAN3.MB0_16B_WORD3>
#### p.CAN3.MB0_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d80a4[0m (0x401d8000 + 0x00a4)
Message Buffer 0 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb0_64b_word8
<link=p.CAN3.MB0_64B_WORD8>
#### can3.mb1_32b_cs
<link=p.CAN3.MB1_32B_CS>
#### p.can3.mb1_32b_word0
<link=p.CAN3.MB1_32B_WORD0>
#### can3.mb1_32b_word0
<link=p.CAN3.MB1_32B_WORD0>
#### p.can3.id3
<link=p.CAN3.ID3>
#### CAN3.MB1_32B_WORD2
<link=p.CAN3.MB1_32B_WORD2>
#### p.can3.mb0_64b_word13
<link=p.CAN3.MB0_64B_WORD13>
#### CAN3.MB2_16B_WORD1
<link=p.CAN3.MB2_16B_WORD1>
#### p.can3.mb3_8b_word1
<link=p.CAN3.MB3_8B_WORD1>
#### can3.mb2_16b_word2
<link=p.CAN3.MB2_16B_WORD2>
#### can3.mb1_64b_word2
<link=p.CAN3.MB1_64B_WORD2>
#### p.CAN3.MB5_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80d8[0m (0x401d8000 + 0x00d8)
Message Buffer 5 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD05
<link=p.CAN3.WORD05>
#### can3.mb2_32b_word3
<link=p.CAN3.MB2_32B_WORD3>
#### CAN3.MB4_16B_WORD0
<link=p.CAN3.MB4_16B_WORD0>
#### CAN3.MB1_64B_WORD7
<link=p.CAN3.MB1_64B_WORD7>
#### p.can3.mb6_8b_word1
<link=p.CAN3.MB6_8B_WORD1>
#### p.CAN3.WORD16
<lang=dft>
 (rw)  [1;33m0x401d80ec[0m (0x401d8000 + 0x00ec)
Message Buffer 6 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb2_32b_word6
<link=p.CAN3.MB2_32B_WORD6>
#### p.CAN3.MB4_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d80f0[0m (0x401d8000 + 0x00f0)
Message Buffer 4 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb3_32b_word0
<link=p.CAN3.MB3_32B_WORD0>
#### can3.mb3_32b_word0
<link=p.CAN3.MB3_32B_WORD0>
#### can3.id8
<link=p.CAN3.ID8>
#### CAN3.MB1_64B_WORD14
<link=p.CAN3.MB1_64B_WORD14>
#### p.can3.word18
<link=p.CAN3.WORD18>
#### CAN3.MB3_32B_WORD4
<link=p.CAN3.MB3_32B_WORD4>
#### p.CAN3.MB6_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8110[0m (0x401d8000 + 0x0110)
Message Buffer 6 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### p.can3.mb6_16b_cs
<link=p.CAN3.MB6_16B_CS>
#### p.CAN3.MB9_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8118[0m (0x401d8000 + 0x0118)
Message Buffer 9 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb2_64b_word1
<link=p.CAN3.MB2_64B_WORD1>
#### CAN3.MB6_16B_WORD2
<link=p.CAN3.MB6_16B_WORD2>
#### CAN3.MB10_8B_WORD0
<link=p.CAN3.MB10_8B_WORD0>
#### p.can3.mb7_16b_id
<link=p.CAN3.MB7_16B_ID>
#### CAN3.WORD110
<link=p.CAN3.WORD110>
#### p.CAN3.MB4_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8134[0m (0x401d8000 + 0x0134)
Message Buffer 4 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb4_32b_word6
<link=p.CAN3.MB4_32B_WORD6>
#### p.CAN3.ID12
<lang=dft>
 (rw)  [1;33m0x401d8144[0m (0x401d8000 + 0x0144)
Message Buffer 12 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB12_8B_ID
<link=p.CAN3.MB12_8B_ID>
#### p.CAN3.MB8_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8144[0m (0x401d8000 + 0x0144)
Message Buffer 8 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB2_64B_WORD12
<lang=dft>
 (rw)  [1;33m0x401d8148[0m (0x401d8000 + 0x0148)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_51[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_50[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_49[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_48[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb2_64b_word12
<link=p.CAN3.MB2_64B_WORD12>
#### can3.id13
<link=p.CAN3.ID13>
#### p.can3.mb2_64b_word15
<link=p.CAN3.MB2_64B_WORD15>
#### p.can3.mb8_16b_word3
<link=p.CAN3.MB8_16B_WORD3>
#### p.CAN3.MB3_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d8158[0m (0x401d8000 + 0x0158)
Message Buffer 3 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### CAN3.MB14_8B_CS
<link=p.CAN3.MB14_8B_CS>
#### p.can3.mb5_32b_word4
<link=p.CAN3.MB5_32B_WORD4>
#### can3.mb5_32b_word4
<link=p.CAN3.MB5_32B_WORD4>
#### p.can3.id14
<link=p.CAN3.ID14>
#### CAN3.ID14
<link=p.CAN3.ID14>
#### CAN3.MB9_16B_WORD1
<link=p.CAN3.MB9_16B_WORD1>
#### CAN3.MB5_32B_WORD6
<link=p.CAN3.MB5_32B_WORD6>
#### p.can3.mb9_16b_word2
<link=p.CAN3.MB9_16B_WORD2>
#### p.can3.mb15_8b_cs
<link=p.CAN3.MB15_8B_CS>
#### p.can3.mb3_64b_word4
<link=p.CAN3.MB3_64B_WORD4>
#### can3.mb10_16b_id
<link=p.CAN3.MB10_16B_ID>
#### p.CAN3.MB6_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d8174[0m (0x401d8000 + 0x0174)
Message Buffer 6 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.WORD115
<lang=dft>
 (rw)  [1;33m0x401d817c[0m (0x401d8000 + 0x017c)
Message Buffer 15 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.CS16
<link=p.CAN3.CS16>
#### can3.mb3_64b_word8
<link=p.CAN3.MB3_64B_WORD8>
#### p.can3.mb6_32b_word2
<link=p.CAN3.MB6_32B_WORD2>
#### p.CAN3.CS17
<lang=dft>
 (rw)  [1;33m0x401d8190[0m (0x401d8000 + 0x0190)
Message Buffer 17 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### p.CAN3.MB17_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8194[0m (0x401d8000 + 0x0194)
Message Buffer 17 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb6_32b_word7
<link=p.CAN3.MB6_32B_WORD7>
#### p.can3.mb4_64b_cs
<link=p.CAN3.MB4_64B_CS>
#### CAN3.MB7_32B_WORD0
<link=p.CAN3.MB7_32B_WORD0>
#### CAN3.MB4_64B_ID
<link=p.CAN3.MB4_64B_ID>
#### p.can3.word118
<link=p.CAN3.WORD118>
#### can3.word118
<link=p.CAN3.WORD118>
#### p.can3.cs19
<link=p.CAN3.CS19>
#### p.can3.mb7_32b_word4
<link=p.CAN3.MB7_32B_WORD4>
#### can3.mb7_32b_word4
<link=p.CAN3.MB7_32B_WORD4>
#### p.can3.mb19_8b_id
<link=p.CAN3.MB19_8B_ID>
#### CAN3.MB4_64B_WORD4
<link=p.CAN3.MB4_64B_WORD4>
#### p.can3.word019
<link=p.CAN3.WORD019>
#### can3.word019
<link=p.CAN3.WORD019>
#### p.can3.mb4_64b_word5
<link=p.CAN3.MB4_64B_WORD5>
#### p.can3.mb20_8b_cs
<link=p.CAN3.MB20_8B_CS>
#### can3.mb20_8b_cs
<link=p.CAN3.MB20_8B_CS>
#### CAN3.MB20_8B_CS
<link=p.CAN3.MB20_8B_CS>
#### p.can3.mb8_32b_cs
<link=p.CAN3.MB8_32B_CS>
#### can3.mb20_8b_id
<link=p.CAN3.MB20_8B_ID>
#### CAN3.MB20_8B_ID
<link=p.CAN3.MB20_8B_ID>
#### p.CAN3.MB8_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81c8[0m (0x401d8000 + 0x01c8)
Message Buffer 8 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb20_8b_word1
<link=p.CAN3.MB20_8B_WORD1>
#### CAN3.MB20_8B_WORD1
<link=p.CAN3.MB20_8B_WORD1>
#### p.can3.id21
<link=p.CAN3.ID21>
#### can3.mb4_64b_word11
<link=p.CAN3.MB4_64B_WORD11>
#### p.CAN3.MB4_64B_WORD12
<lang=dft>
 (rw)  [1;33m0x401d81d8[0m (0x401d8000 + 0x01d8)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_51[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_50[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_49[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_48[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word021
<link=p.CAN3.WORD021>
#### p.can3.mb14_16b_word1
<link=p.CAN3.MB14_16B_WORD1>
#### CAN3.MB8_32B_WORD5
<link=p.CAN3.MB8_32B_WORD5>
#### can3.mb14_16b_word2
<link=p.CAN3.MB14_16B_WORD2>
#### p.CAN3.MB9_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d81e8[0m (0x401d8000 + 0x01e8)
Message Buffer 9 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### p.CAN3.MB15_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d81ec[0m (0x401d8000 + 0x01ec)
Message Buffer 15 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb9_32b_id
<link=p.CAN3.MB9_32B_ID>
#### can3.mb9_32b_id
<link=p.CAN3.MB9_32B_ID>
#### p.CAN3.MB23_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d81f0[0m (0x401d8000 + 0x01f0)
Message Buffer 23 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### p.CAN3.MB5_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81f4[0m (0x401d8000 + 0x01f4)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB23_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81f8[0m (0x401d8000 + 0x01f8)
Message Buffer 23 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb23_8b_word0
<link=p.CAN3.MB23_8B_WORD0>
#### CAN3.MB5_64B_WORD4
<link=p.CAN3.MB5_64B_WORD4>
#### p.can3.mb16_16b_word0
<link=p.CAN3.MB16_16B_WORD0>
#### can3.mb5_64b_word7
<link=p.CAN3.MB5_64B_WORD7>
#### can3.word124
<link=p.CAN3.WORD124>
#### CAN3.ID25
<link=p.CAN3.ID25>
#### p.CAN3.MB10_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8218[0m (0x401d8000 + 0x0218)
Message Buffer 10 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB10_32B_WORD1
<link=p.CAN3.MB10_32B_WORD1>
#### CAN3.MB17_16B_ID
<link=p.CAN3.MB17_16B_ID>
#### CAN3.WORD125
<link=p.CAN3.WORD125>
#### can3.cs26
<link=p.CAN3.CS26>
#### p.CAN3.MB5_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d8228[0m (0x401d8000 + 0x0228)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.CS27
<link=p.CAN3.CS27>
#### p.can3.cs28
<link=p.CAN3.CS28>
#### CAN3.MB18_16B_WORD2
<link=p.CAN3.MB18_16B_WORD2>
#### p.CAN3.MB11_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8244[0m (0x401d8000 + 0x0244)
Message Buffer 11 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB18_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8244[0m (0x401d8000 + 0x0244)
Message Buffer 18 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb11_32b_word2
<link=p.CAN3.MB11_32B_WORD2>
#### can3.mb6_64b_word4
<link=p.CAN3.MB6_64B_WORD4>
#### p.can3.mb19_16b_id
<link=p.CAN3.MB19_16B_ID>
#### can3.mb29_8b_cs
<link=p.CAN3.MB29_8B_CS>
#### p.CAN3.MB6_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d8258[0m (0x401d8000 + 0x0258)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD029
<lang=dft>
 (rw)  [1;33m0x401d8258[0m (0x401d8000 + 0x0258)
Message Buffer 29 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB19_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d825c[0m (0x401d8000 + 0x025c)
Message Buffer 19 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb19_16b_word3
<link=p.CAN3.MB19_16B_WORD3>
#### p.can3.word129
<link=p.CAN3.WORD129>
#### CAN3.CS30
<link=p.CAN3.CS30>
#### CAN3.MB12_32B_WORD0
<link=p.CAN3.MB12_32B_WORD0>
#### p.can3.mb20_16b_word0
<link=p.CAN3.MB20_16B_WORD0>
#### p.CAN3.MB30_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8268[0m (0x401d8000 + 0x0268)
Message Buffer 30 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb30_8b_word0
<link=p.CAN3.MB30_8B_WORD0>
#### p.CAN3.MB12_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d826c[0m (0x401d8000 + 0x026c)
Message Buffer 12 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS31
<lang=dft>
 (rw)  [1;33m0x401d8270[0m (0x401d8000 + 0x0270)
Message Buffer 31 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### can3.mb20_16b_word2
<link=p.CAN3.MB20_16B_WORD2>
#### CAN3.MB6_64B_WORD15
<link=p.CAN3.MB6_64B_WORD15>
#### can3.mb31_8b_word1
<link=p.CAN3.MB31_8B_WORD1>
#### can3.mb21_16b_word3
<link=p.CAN3.MB21_16B_WORD3>
#### p.can3.mb13_32b_word1
<link=p.CAN3.MB13_32B_WORD1>
#### CAN3.MB13_32B_WORD1
<link=p.CAN3.MB13_32B_WORD1>
#### can3.mb22_16b_word0
<link=p.CAN3.MB22_16B_WORD0>
#### can3.mb13_32b_word3
<link=p.CAN3.MB13_32B_WORD3>
#### p.can3.mb7_64b_word7
<link=p.CAN3.MB7_64B_WORD7>
#### p.CAN3.WORD133
<lang=dft>
 (rw)  [1;33m0x401d829c[0m (0x401d8000 + 0x029c)
Message Buffer 33 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb22_16b_word2
<link=p.CAN3.MB22_16B_WORD2>
#### p.CAN3.ID34
<lang=dft>
 (rw)  [1;33m0x401d82a4[0m (0x401d8000 + 0x02a4)
Message Buffer 34 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB13_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d82a8[0m (0x401d8000 + 0x02a8)
Message Buffer 13 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb34_8b_word1
<link=p.CAN3.MB34_8B_WORD1>
#### can3.mb7_64b_word11
<link=p.CAN3.MB7_64B_WORD11>
#### can3.id35
<link=p.CAN3.ID35>
#### can3.mb35_8b_id
<link=p.CAN3.MB35_8B_ID>
#### CAN3.MB35_8B_WORD0
<link=p.CAN3.MB35_8B_WORD0>
#### p.can3.mb23_16b_word3
<link=p.CAN3.MB23_16B_WORD3>
#### p.can3.cs36
<link=p.CAN3.CS36>
#### p.CAN3.MB24_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d82c4[0m (0x401d8000 + 0x02c4)
Message Buffer 24 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB8_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d82c4[0m (0x401d8000 + 0x02c4)
Message Buffer 8 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB14_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d82c8[0m (0x401d8000 + 0x02c8)
Message Buffer 14 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word036
<link=p.CAN3.WORD036>
#### CAN3.MB14_32B_WORD5
<link=p.CAN3.MB14_32B_WORD5>
#### p.CAN3.MB8_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82cc[0m (0x401d8000 + 0x02cc)
Message Buffer 8 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb24_16b_word3
<link=p.CAN3.MB24_16B_WORD3>
#### CAN3.MB24_16B_WORD3
<link=p.CAN3.MB24_16B_WORD3>
#### CAN3.WORD037
<link=p.CAN3.WORD037>
#### can3.word137
<link=p.CAN3.WORD137>
#### can3.cs38
<link=p.CAN3.CS38>
#### p.can3.mb25_16b_word0
<link=p.CAN3.MB25_16B_WORD0>
#### can3.mb8_64b_word6
<link=p.CAN3.MB8_64B_WORD6>
#### p.CAN3.MB38_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d82e4[0m (0x401d8000 + 0x02e4)
Message Buffer 38 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb38_8b_word1
<link=p.CAN3.MB38_8B_WORD1>
#### p.CAN3.MB8_64B_WORD10
<lang=dft>
 (rw)  [1;33m0x401d82f0[0m (0x401d8000 + 0x02f0)
Message Buffer 8 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_43[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_42[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_41[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_40[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB15_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d82f4[0m (0x401d8000 + 0x02f4)
Message Buffer 15 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb15_32b_word6
<link=p.CAN3.MB15_32B_WORD6>
#### CAN3.MB39_8B_WORD0
<link=p.CAN3.MB39_8B_WORD0>
#### p.can3.mb26_16b_word1
<link=p.CAN3.MB26_16B_WORD1>
#### CAN3.MB26_16B_WORD1
<link=p.CAN3.MB26_16B_WORD1>
#### p.CAN3.CS40
<lang=dft>
 (rw)  [1;33m0x401d8300[0m (0x401d8000 + 0x0300)
Message Buffer 40 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### CAN3.MB16_32B_CS
<link=p.CAN3.MB16_32B_CS>
#### p.can3.mb40_8b_id
<link=p.CAN3.MB40_8B_ID>
#### can3.mb27_16b_id
<link=p.CAN3.MB27_16B_ID>
#### p.can3.mb27_16b_word0
<link=p.CAN3.MB27_16B_WORD0>
#### p.CAN3.MB41_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8314[0m (0x401d8000 + 0x0314)
Message Buffer 41 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB16_32B_WORD4
<link=p.CAN3.MB16_32B_WORD4>
#### p.CAN3.MB16_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d831c[0m (0x401d8000 + 0x031c)
Message Buffer 16 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB27_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d831c[0m (0x401d8000 + 0x031c)
Message Buffer 27 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB9_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d831c[0m (0x401d8000 + 0x031c)
Message Buffer 9 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.cs42
<link=p.CAN3.CS42>
#### p.CAN3.MB42_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8320[0m (0x401d8000 + 0x0320)
Message Buffer 42 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### p.can3.mb9_64b_word5
<link=p.CAN3.MB9_64B_WORD5>
#### p.CAN3.MB42_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8328[0m (0x401d8000 + 0x0328)
Message Buffer 42 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb17_32b_id
<link=p.CAN3.MB17_32B_ID>
#### can3.mb9_64b_word8
<link=p.CAN3.MB9_64B_WORD8>
#### p.can3.id43
<link=p.CAN3.ID43>
#### p.CAN3.MB17_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8338[0m (0x401d8000 + 0x0338)
Message Buffer 17 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB29_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8338[0m (0x401d8000 + 0x0338)
Message Buffer 29 CS Register
 (rw) (16)  [0;32mTIME_STAMP[0m  - [15:00] -  Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Runnin
 g Timer, captured for Tx and Rx frames at the time when the beginning of the Id
 entifier field appears on the CAN bus.
 (rw) (04)  [0;32mDLC[0m  - [19:16] -  Length of the data to be stored/transmitted.
 (rw) (01)  [0;32mRTR[0m  - [20:20] -  Remote Transmission Request. One/zero for remote/data frame.
 (rw) (01)  [0;32mIDE[0m  - [21:21] -  ID Extended. One/zero for extended/standard format frame.
 (rw) (01)  [0;32mSRR[0m  - [22:22] -  Substitute Remote Request. Contains a fixed recessive bit.
 (rw) (04)  [0;32mCODE[0m  - [27:24] -  Message Buffer Code. This 4-bit field can be accessed (read or write) by the CP
 U and by the FlexCAN module itself, as part of the message buffer matching and 
 arbitration process.
 (rw) (01)  [0;32mESI[0m  - [29:29] -  Error State Indicator. This bit indicates if the transmitting node is error act
 ive or error passive.
 (rw) (01)  [0;32mBRS[0m  - [30:30] -  Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN
  FD format frame.
 (rw) (01)  [0;32mEDL[0m  - [31:31] -  Extended Data Length. This bit distinguishes between CAN format and CAN FD form
 at frames. The EDL bit must not be set for Message Buffers configured to RANSWE
 R with code field 0b1010.
</lang>
#### p.CAN3.WORD043
<lang=dft>
 (rw)  [1;33m0x401d8338[0m (0x401d8000 + 0x0338)
Message Buffer 43 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB29_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d833c[0m (0x401d8000 + 0x033c)
Message Buffer 29 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb43_8b_word1
<link=p.CAN3.MB43_8B_WORD1>
#### CAN3.MB43_8B_WORD1
<link=p.CAN3.MB43_8B_WORD1>
#### p.can3.word143
<link=p.CAN3.WORD143>
#### CAN3.MB29_16B_WORD0
<link=p.CAN3.MB29_16B_WORD0>
#### p.CAN3.MB9_64B_WORD12
<lang=dft>
 (rw)  [1;33m0x401d8340[0m (0x401d8000 + 0x0340)
Message Buffer 9 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_51[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_50[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_49[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_48[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb17_32b_word5
<link=p.CAN3.MB17_32B_WORD5>
#### CAN3.MB17_32B_WORD5
<link=p.CAN3.MB17_32B_WORD5>
#### p.can3.mb44_8b_word0
<link=p.CAN3.MB44_8B_WORD0>
#### can3.mb17_32b_word7
<link=p.CAN3.MB17_32B_WORD7>
#### can3.cs45
<link=p.CAN3.CS45>
#### can3.id45
<link=p.CAN3.ID45>
#### p.CAN3.MB30_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8358[0m (0x401d8000 + 0x0358)
Message Buffer 30 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD045
<link=p.CAN3.WORD045>
#### p.can3.mb10_64b_word1
<link=p.CAN3.MB10_64B_WORD1>
#### CAN3.MB10_64B_WORD1
<link=p.CAN3.MB10_64B_WORD1>
#### can3.mb18_32b_word1
<link=p.CAN3.MB18_32B_WORD1>
#### CAN3.CS46
<link=p.CAN3.CS46>
#### p.can3.mb18_32b_word2
<link=p.CAN3.MB18_32B_WORD2>
#### CAN3.MB30_16B_WORD2
<link=p.CAN3.MB30_16B_WORD2>
#### p.can3.mb31_16b_cs
<link=p.CAN3.MB31_16B_CS>
#### CAN3.MB31_16B_WORD0
<link=p.CAN3.MB31_16B_WORD0>
#### can3.mb31_16b_word1
<link=p.CAN3.MB31_16B_WORD1>
#### p.CAN3.MB10_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d8378[0m (0x401d8000 + 0x0378)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb19_32b_cs
<link=p.CAN3.MB19_32B_CS>
#### p.CAN3.MB31_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8378[0m (0x401d8000 + 0x0378)
Message Buffer 31 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb31_16b_word2
<link=p.CAN3.MB31_16B_WORD2>
#### can3.word147
<link=p.CAN3.WORD147>
#### CAN3.MB10_64B_WORD10
<link=p.CAN3.MB10_64B_WORD10>
#### p.CAN3.ID48
<lang=dft>
 (rw)  [1;33m0x401d8384[0m (0x401d8000 + 0x0384)
Message Buffer 48 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb10_64b_word12
<link=p.CAN3.MB10_64B_WORD12>
#### p.CAN3.MB32_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d838c[0m (0x401d8000 + 0x038c)
Message Buffer 32 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB32_16B_WORD1
<link=p.CAN3.MB32_16B_WORD1>
#### CAN3.WORD148
<link=p.CAN3.WORD148>
#### p.can3.mb49_8b_cs
<link=p.CAN3.MB49_8B_CS>
#### p.can3.mb49_8b_id
<link=p.CAN3.MB49_8B_ID>
#### can3.mb49_8b_id
<link=p.CAN3.MB49_8B_ID>
#### can3.mb20_32b_cs
<link=p.CAN3.MB20_32B_CS>
#### p.CAN3.MB11_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83a4[0m (0x401d8000 + 0x03a4)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB33_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83a4[0m (0x401d8000 + 0x03a4)
Message Buffer 33 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb33_16b_word1
<link=p.CAN3.MB33_16B_WORD1>
#### CAN3.MB33_16B_WORD1
<link=p.CAN3.MB33_16B_WORD1>
#### can3.mb33_16b_word2
<link=p.CAN3.MB33_16B_WORD2>
#### p.CAN3.WORD050
<lang=dft>
 (rw)  [1;33m0x401d83a8[0m (0x401d8000 + 0x03a8)
Message Buffer 50 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb50_8b_word1
<link=p.CAN3.MB50_8B_WORD1>
#### CAN3.MB51_8B_CS
<link=p.CAN3.MB51_8B_CS>
#### p.CAN3.MB20_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d83b4[0m (0x401d8000 + 0x03b4)
Message Buffer 20 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB34_16B_ID
<link=p.CAN3.MB34_16B_ID>
#### p.can3.mb11_64b_word7
<link=p.CAN3.MB11_64B_WORD7>
#### p.can3.mb51_8b_word1
<link=p.CAN3.MB51_8B_WORD1>
#### can3.cs52
<link=p.CAN3.CS52>
#### CAN3.MB11_64B_WORD8
<link=p.CAN3.MB11_64B_WORD8>
#### can3.mb11_64b_word12
<link=p.CAN3.MB11_64B_WORD12>
#### can3.mb21_32b_word2
<link=p.CAN3.MB21_32B_WORD2>
#### can3.mb35_16b_word2
<link=p.CAN3.MB35_16B_WORD2>
#### p.can3.mb12_64b_cs
<link=p.CAN3.MB12_64B_CS>
#### can3.mb54_8b_cs
<link=p.CAN3.MB54_8B_CS>
#### can3.mb36_16b_id
<link=p.CAN3.MB36_16B_ID>
#### can3.mb12_64b_word1
<link=p.CAN3.MB12_64B_WORD1>
#### CAN3.MB21_32B_WORD7
<link=p.CAN3.MB21_32B_WORD7>
#### p.CAN3.MB54_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83ec[0m (0x401d8000 + 0x03ec)
Message Buffer 54 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb54_8b_word1
<link=p.CAN3.MB54_8B_WORD1>
#### p.can3.word154
<link=p.CAN3.WORD154>
#### can3.word154
<link=p.CAN3.WORD154>
#### p.can3.cs55
<link=p.CAN3.CS55>
#### p.CAN3.MB12_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d83f0[0m (0x401d8000 + 0x03f0)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb55_8b_cs
<link=p.CAN3.MB55_8B_CS>
#### p.can3.mb55_8b_id
<link=p.CAN3.MB55_8B_ID>
#### can3.mb37_16b_cs
<link=p.CAN3.MB37_16B_CS>
#### p.can3.word055
<link=p.CAN3.WORD055>
#### can3.word055
<link=p.CAN3.WORD055>
#### can3.mb55_8b_word1
<link=p.CAN3.MB55_8B_WORD1>
#### CAN3.MB12_64B_WORD8
<link=p.CAN3.MB12_64B_WORD8>
#### CAN3.WORD056
<link=p.CAN3.WORD056>
#### p.can3.mb12_64b_word9
<link=p.CAN3.MB12_64B_WORD9>
#### can3.mb12_64b_word10
<link=p.CAN3.MB12_64B_WORD10>
#### can3.mb38_16b_cs
<link=p.CAN3.MB38_16B_CS>
#### p.CAN3.MB57_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8418[0m (0x401d8000 + 0x0418)
Message Buffer 57 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb38_16b_word1
<link=p.CAN3.MB38_16B_WORD1>
#### CAN3.MB23_32B_WORD1
<link=p.CAN3.MB23_32B_WORD1>
#### CAN3.MB39_16B_CS
<link=p.CAN3.MB39_16B_CS>
#### p.can3.id59
<link=p.CAN3.ID59>
#### CAN3.MB13_64B_WORD2
<link=p.CAN3.MB13_64B_WORD2>
#### p.CAN3.MB23_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d843c[0m (0x401d8000 + 0x043c)
Message Buffer 23 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB40_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8444[0m (0x401d8000 + 0x0444)
Message Buffer 40 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb40_16b_word0
<link=p.CAN3.MB40_16B_WORD0>
#### p.can3.word060
<link=p.CAN3.WORD060>
#### can3.mb40_16b_word1
<link=p.CAN3.MB40_16B_WORD1>
#### p.CAN3.WORD160
<lang=dft>
 (rw)  [1;33m0x401d844c[0m (0x401d8000 + 0x044c)
Message Buffer 60 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB13_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d8450[0m (0x401d8000 + 0x0450)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb13_64b_word10
<link=p.CAN3.MB13_64B_WORD10>
#### p.CAN3.MB61_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8458[0m (0x401d8000 + 0x0458)
Message Buffer 61 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB13_64B_WORD11
<lang=dft>
 (rw)  [1;33m0x401d845c[0m (0x401d8000 + 0x045c)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_47[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_46[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_45[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_44[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb61_8b_word1
<link=p.CAN3.MB61_8B_WORD1>
#### can3.mb41_16b_word1
<link=p.CAN3.MB41_16B_WORD1>
#### CAN3.MB13_64B_WORD15
<link=p.CAN3.MB13_64B_WORD15>
#### can3.mb63_8b_cs
<link=p.CAN3.MB63_8B_CS>
#### can3.id63
<link=p.CAN3.ID63>
#### CAN3.MB63_8B_WORD0
<link=p.CAN3.MB63_8B_WORD0>
#### can3.rximr[4]
<link=p.CAN3.RXIMR[4]>
#### p.can3.rximr[5]
<link=p.CAN3.RXIMR[5]>
#### CAN3.RXIMR[5]
<link=p.CAN3.RXIMR[5]>
#### can3.rximr[10]
<link=p.CAN3.RXIMR[10]>
#### p.CAN3.RXIMR[23]
<lang=dft>
 (rw)  [1;33m0x401d88dc[0m (0x401d8000 + 0x08dc)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[39]
<link=p.CAN3.RXIMR[39]>
#### CAN3.RXIMR[39]
<link=p.CAN3.RXIMR[39]>
#### p.CAN3.RXIMR[46]
<lang=dft>
 (rw)  [1;33m0x401d8938[0m (0x401d8000 + 0x0938)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[46]
<link=p.CAN3.RXIMR[46]>
#### p.CAN3.RXIMR[52]
<lang=dft>
 (rw)  [1;33m0x401d8950[0m (0x401d8000 + 0x0950)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[55]
<link=p.CAN3.RXIMR[55]>
#### CAN3.RXIMR[55]
<link=p.CAN3.RXIMR[55]>
#### p.can3.rximr[63]
<link=p.CAN3.RXIMR[63]>
#### p.CAN3.FDCTRL
<lang=dft>
 (rw)  [1;33m0x401d8c00[0m (0x401d8000 + 0x0c00)
CAN FD Control Register
 (ro) (06)  [0;32mTDCVAL[0m  - [05:00] -  Transceiver Delay Compensation Value
 (rw) (05)  [0;32mTDCOFF[0m  - [12:08] -  Transceiver Delay Compensation Offset
 (rw) (01)  [0;32mTDCFAIL[0m  - [14:14] -  Transceiver Delay Compensation Fail
      0 - TDCFAIL_0 :
         Measured loop delay is in range.
      0x1 - TDCFAIL_1 :
         Measured loop delay is out of range.
 (rw) (01)  [0;32mTDCEN[0m  - [15:15] -  Transceiver Delay Compensation Enable
      0 - TDCEN_0 :
         TDC is disabled
      0x1 - TDCEN_1 :
         TDC is enabled
 (rw) (02)  [0;32mMBDSR0[0m  - [17:16] -  Message Buffer Data Size for Region 0
      0 - MBDSR0_0 :
         Selects 8 bytes per Message Buffer.
      0x1 - MBDSR0_1 :
         Selects 16 bytes per Message Buffer.
      0x2 - MBDSR0_2 :
         Selects 32 bytes per Message Buffer.
      0x3 - MBDSR0_3 :
         Selects 64 bytes per Message Buffer.
 (rw) (02)  [0;32mMBDSR1[0m  - [20:19] -  Message Buffer Data Size for Region 1
      0 - MBDSR1_0 :
         Selects 8 bytes per Message Buffer.
      0x1 - MBDSR1_1 :
         Selects 16 bytes per Message Buffer.
      0x2 - MBDSR1_2 :
         Selects 32 bytes per Message Buffer.
      0x3 - MBDSR1_3 :
         Selects 64 bytes per Message Buffer.
 (rw) (01)  [0;32mFDRATE[0m  - [31:31] -  Bit Rate Switch Enable
      0 - FDRATE_0 :
         Transmit a frame in nominal rate. The BRS bit in the Tx MB has no effec
         t.
      0x1 - FDRATE_1 :
         Transmit a frame with bit rate switching if the BRS bit in the Tx MB is
          recessive.
</lang>
#### can3.fdctrl
<link=p.CAN3.FDCTRL>
#### CAN3.HR_TIME_STAMP[5]
<link=p.CAN3.HR_TIME_STAMP[5]>
#### p.CAN3.HR_TIME_STAMP[8]
<lang=dft>
 (ro)  [1;33m0x401d8c50[0m (0x401d8000 + 0x0c50)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.hr_time_stamp[9]
<link=p.CAN3.HR_TIME_STAMP[9]>
#### can3.hr_time_stamp[12]
<link=p.CAN3.HR_TIME_STAMP[12]>
#### can3.hr_time_stamp[15]
<link=p.CAN3.HR_TIME_STAMP[15]>
#### can3.hr_time_stamp[20]
<link=p.CAN3.HR_TIME_STAMP[20]>
#### can3.hr_time_stamp[33]
<link=p.CAN3.HR_TIME_STAMP[33]>
#### can3.hr_time_stamp[39]
<link=p.CAN3.HR_TIME_STAMP[39]>
#### p.CAN3.HR_TIME_STAMP[44]
<lang=dft>
 (ro)  [1;33m0x401d8ce0[0m (0x401d8000 + 0x0ce0)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[44]
<link=p.CAN3.HR_TIME_STAMP[44]>
#### p.CAN3.HR_TIME_STAMP[50]
<lang=dft>
 (ro)  [1;33m0x401d8cf8[0m (0x401d8000 + 0x0cf8)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[50]
<link=p.CAN3.HR_TIME_STAMP[50]>
#### CAN3.HR_TIME_STAMP[53]
<link=p.CAN3.HR_TIME_STAMP[53]>
#### p.CAN3.HR_TIME_STAMP[57]
<lang=dft>
 (ro)  [1;33m0x401d8d14[0m (0x401d8000 + 0x0d14)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[57]
<link=p.CAN3.HR_TIME_STAMP[57]>
#### p.CAN3.HR_TIME_STAMP[61]
<lang=dft>
 (ro)  [1;33m0x401d8d24[0m (0x401d8000 + 0x0d24)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[61]
<link=p.CAN3.HR_TIME_STAMP[61]>
#### can3.erffel[10]
<link=p.CAN3.ERFFEL[10]>
#### can3.erffel[17]
<link=p.CAN3.ERFFEL[17]>
#### p.CAN3.ERFFEL[20]
<lang=dft>
 (rw)  [1;33m0x401db050[0m (0x401d8000 + 0x3050)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[21]
<link=p.CAN3.ERFFEL[21]>
#### CAN3.ERFFEL[32]
<link=p.CAN3.ERFFEL[32]>
#### p.can3.erffel[41]
<link=p.CAN3.ERFFEL[41]>
#### p.CAN3.ERFFEL[42]
<lang=dft>
 (rw)  [1;33m0x401db0a8[0m (0x401d8000 + 0x30a8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[50]
<link=p.CAN3.ERFFEL[50]>
#### p.CAN3.ERFFEL[51]
<lang=dft>
 (rw)  [1;33m0x401db0cc[0m (0x401d8000 + 0x30cc)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[61]
<link=p.CAN3.ERFFEL[61]>
#### p.can3.erffel[64]
<link=p.CAN3.ERFFEL[64]>
#### CAN3.ERFFEL[64]
<link=p.CAN3.ERFFEL[64]>
#### p.can3.erffel[70]
<link=p.CAN3.ERFFEL[70]>
#### p.can3.erffel[77]
<link=p.CAN3.ERFFEL[77]>
#### CAN3.ERFFEL[83]
<link=p.CAN3.ERFFEL[83]>
#### p.CAN3.ERFFEL[85]
<lang=dft>
 (rw)  [1;33m0x401db154[0m (0x401d8000 + 0x3154)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[92]
<link=p.CAN3.ERFFEL[92]>
#### CAN3.ERFFEL[93]
<link=p.CAN3.ERFFEL[93]>
#### p.can3.erffel[97]
<link=p.CAN3.ERFFEL[97]>
#### p.CAN3.ERFFEL[98]
<lang=dft>
 (rw)  [1;33m0x401db188[0m (0x401d8000 + 0x3188)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[99]
<link=p.CAN3.ERFFEL[99]>
#### can3.erffel[100]
<link=p.CAN3.ERFFEL[100]>
#### CAN3.ERFFEL[100]
<link=p.CAN3.ERFFEL[100]>
#### CAN3.ERFFEL[107]
<link=p.CAN3.ERFFEL[107]>
#### p.CAN3.ERFFEL[111]
<lang=dft>
 (rw)  [1;33m0x401db1bc[0m (0x401d8000 + 0x31bc)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[114]
<link=p.CAN3.ERFFEL[114]>
#### p.CAN3.ERFFEL[120]
<lang=dft>
 (rw)  [1;33m0x401db1e0[0m (0x401d8000 + 0x31e0)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[123]
<link=p.CAN3.ERFFEL[123]>
#### p.CAN3.ERFFEL[125]
<lang=dft>
 (rw)  [1;33m0x401db1f4[0m (0x401d8000 + 0x31f4)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.TMR1.COMP11
<lang=dft>
 (rw)  [1;33m0x401dc020[0m (0x401dc000 + 0x0020)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### p.TMR1.COMP20
<lang=dft>
 (rw)  [1;33m0x401dc002[0m (0x401dc000 + 0x0002)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### p.tmr1.capt0
<link=p.TMR1.CAPT0>
#### TMR1.CAPT1
<link=p.TMR1.CAPT1>
#### tmr1.capt2
<link=p.TMR1.CAPT2>
#### tmr1.cntr1
<link=p.TMR1.CNTR1>
#### TMR1.CNTR2
<link=p.TMR1.CNTR2>
#### tmr1.ctrl0
<link=p.TMR1.CTRL0>
#### p.tmr1.ctrl2
<link=p.TMR1.CTRL2>
#### tmr1.sctrl3
<link=p.TMR1.SCTRL3>
#### TMR1.CMPLD11
<link=p.TMR1.CMPLD11>
#### tmr1.filt3
<link=p.TMR1.FILT3>
#### tmr1.dma2
<link=p.TMR1.DMA2>
#### p.tmr2.comp20
<link=p.TMR2.COMP20>
#### p.tmr2.capt0
<link=p.TMR2.CAPT0>
#### TMR2.CAPT1
<link=p.TMR2.CAPT1>
#### tmr2.capt2
<link=p.TMR2.CAPT2>
#### p.tmr2.load0
<link=p.TMR2.LOAD0>
#### tmr2.load1
<link=p.TMR2.LOAD1>
#### TMR2.CMPLD10
<link=p.TMR2.CMPLD10>
#### p.TMR2.CSCTRL0
<lang=dft>
 (rw)  [1;33m0x401e0014[0m (0x401e0000 + 0x0014)
Timer Channel Comparator Status and Control Register
 (rw) (02)  [0;32mCL1[0m  - [01:00] -  Compare Load Control 1
      0 - CL1_0 :
         Never preload
      0x1 - CL1_1 :
         Load upon successful compare with the value in COMP1
      0x2 - CL1_2 :
         Load upon successful compare with the value in COMP2
 (rw) (02)  [0;32mCL2[0m  - [03:02] -  Compare Load Control 2
      0 - CL2_0 :
         Never preload
      0x1 - CL2_1 :
         Load upon successful compare with the value in COMP1
      0x2 - CL2_2 :
         Load upon successful compare with the value in COMP2
 (rw) (01)  [0;32mTCF1[0m  - [04:04] -  Timer Compare 1 Interrupt Flag
 (rw) (01)  [0;32mTCF2[0m  - [05:05] -  Timer Compare 2 Interrupt Flag
 (rw) (01)  [0;32mTCF1EN[0m  - [06:06] -  Timer Compare 1 Interrupt Enable
 (rw) (01)  [0;32mTCF2EN[0m  - [07:07] -  Timer Compare 2 Interrupt Enable
 (ro) (01)  [0;32mUP[0m  - [09:09] -  Counting Direction Indicator
      0 - UP_0 :
         The last count was in the DOWN direction.
      0x1 - UP_1 :
         The last count was in the UP direction.
 (rw) (01)  [0;32mTCI[0m  - [10:10] -  Triggered Count Initialization Control
      0 - TCI_0 :
         Stop counter upon receiving a second trigger event while still counting
          from the first trigger event.
      0x1 - TCI_1 :
         Reload the counter upon receiving a second trigger event while still co
         unting from the first trigger event.
 (rw) (01)  [0;32mROC[0m  - [11:11] -  Reload on Capture
      0 - ROC_0 :
         Do not reload the counter on a capture event.
      0x1 - ROC_1 :
         Reload the counter on a capture event.
 (rw) (01)  [0;32mALT_LOAD[0m  - [12:12] -  Alternative Load Enable
      0 - ALT_LOAD_0 :
         Counter can be re-initialized only with the LOAD register.
      0x1 - ALT_LOAD_1 :
         Counter can be re-initialized with the LOAD or CMPLD2 registers dependi
         ng on count direction.
 (rw) (01)  [0;32mFAULT[0m  - [13:13] -  Fault Enable
      0 - FAULT_0 :
         Fault function disabled.
      0x1 - FAULT_1 :
         Fault function enabled.
 (rw) (02)  [0;32mDBG_EN[0m  - [15:14] -  Debug Actions Enable
      0 - DBG_EN_0 :
         Continue with normal operation during debug mode. (default)
      0x1 - DBG_EN_1 :
         Halt TMR counter during debug mode.
      0x2 - DBG_EN_2 :
         Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
      0x3 - DBG_EN_3 :
         Both halt counter and force output to 0 during debug mode.
</lang>
#### p.tmr2.filt0
<link=p.TMR2.FILT0>
#### TMR2.FILT0
<link=p.TMR2.FILT0>
#### p.tmr3.comp11
<link=p.TMR3.COMP11>
#### tmr3.comp22
<link=p.TMR3.COMP22>
#### p.TMR3.CNTR0
<lang=dft>
 (rw)  [1;33m0x401e400a[0m (0x401e4000 + 0x000a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### TMR3.CTRL1
<link=p.TMR3.CTRL1>
#### p.TMR3.SCTRL0
<lang=dft>
 (rw)  [1;33m0x401e400e[0m (0x401e4000 + 0x000e)
Timer Channel Status and Control Register
 (rw) (01)  [0;32mOEN[0m  - [00:00] -  Output Enable
      0 - OEN_0 :
         The external pin is configured as an input.
      0x1 - OEN_1 :
         The OFLAG output signal is driven on the external pin. Other timer grou
         ps using this external pin as their input see the driven value. The pol
         arity of the signal is determined by OPS.
 (rw) (01)  [0;32mOPS[0m  - [01:01] -  Output Polarity Select
      0 - OPS_0 :
         True polarity.
      0x1 - OPS_1 :
         Inverted polarity.
 (rw) (01)  [0;32mFORCE[0m  - [02:02] -  Force OFLAG Output
 (rw) (01)  [0;32mVAL[0m  - [03:03] -  Forced OFLAG Value
 (rw) (01)  [0;32mEEOF[0m  - [04:04] -  Enable External OFLAG Force
 (rw) (01)  [0;32mMSTR[0m  - [05:05] -  Master Mode
 (rw) (02)  [0;32mCAPTURE_MODE[0m  - [07:06] -  Input Capture Mode
      0 - CAPTURE_MODE_0 :
         Capture function is disabled
      0x1 - CAPTURE_MODE_1 :
         Load capture register on rising edge (when IPS=0) or falling edge (when
          IPS=1) of input
      0x2 - CAPTURE_MODE_2 :
         Load capture register on falling edge (when IPS=0) or rising edge (when
          IPS=1) of input
      0x3 - CAPTURE_MODE_3 :
         Load capture register on both edges of input
 (ro) (01)  [0;32mINPUT[0m  - [08:08] -  External Input Signal
 (rw) (01)  [0;32mIPS[0m  - [09:09] -  Input Polarity Select
 (rw) (01)  [0;32mIEFIE[0m  - [10:10] -  Input Edge Flag Interrupt Enable
 (rw) (01)  [0;32mIEF[0m  - [11:11] -  Input Edge Flag
 (rw) (01)  [0;32mTOFIE[0m  - [12:12] -  Timer Overflow Flag Interrupt Enable
 (rw) (01)  [0;32mTOF[0m  - [13:13] -  Timer Overflow Flag
 (rw) (01)  [0;32mTCFIE[0m  - [14:14] -  Timer Compare Flag Interrupt Enable
 (rw) (01)  [0;32mTCF[0m  - [15:15] -  Timer Compare Flag
</lang>
#### tmr3.cmpld10
<link=p.TMR3.CMPLD10>
#### p.TMR3.CSCTRL1
<lang=dft>
 (rw)  [1;33m0x401e4034[0m (0x401e4000 + 0x0034)
Timer Channel Comparator Status and Control Register
 (rw) (02)  [0;32mCL1[0m  - [01:00] -  Compare Load Control 1
      0 - CL1_0 :
         Never preload
      0x1 - CL1_1 :
         Load upon successful compare with the value in COMP1
      0x2 - CL1_2 :
         Load upon successful compare with the value in COMP2
 (rw) (02)  [0;32mCL2[0m  - [03:02] -  Compare Load Control 2
      0 - CL2_0 :
         Never preload
      0x1 - CL2_1 :
         Load upon successful compare with the value in COMP1
      0x2 - CL2_2 :
         Load upon successful compare with the value in COMP2
 (rw) (01)  [0;32mTCF1[0m  - [04:04] -  Timer Compare 1 Interrupt Flag
 (rw) (01)  [0;32mTCF2[0m  - [05:05] -  Timer Compare 2 Interrupt Flag
 (rw) (01)  [0;32mTCF1EN[0m  - [06:06] -  Timer Compare 1 Interrupt Enable
 (rw) (01)  [0;32mTCF2EN[0m  - [07:07] -  Timer Compare 2 Interrupt Enable
 (ro) (01)  [0;32mUP[0m  - [09:09] -  Counting Direction Indicator
      0 - UP_0 :
         The last count was in the DOWN direction.
      0x1 - UP_1 :
         The last count was in the UP direction.
 (rw) (01)  [0;32mTCI[0m  - [10:10] -  Triggered Count Initialization Control
      0 - TCI_0 :
         Stop counter upon receiving a second trigger event while still counting
          from the first trigger event.
      0x1 - TCI_1 :
         Reload the counter upon receiving a second trigger event while still co
         unting from the first trigger event.
 (rw) (01)  [0;32mROC[0m  - [11:11] -  Reload on Capture
      0 - ROC_0 :
         Do not reload the counter on a capture event.
      0x1 - ROC_1 :
         Reload the counter on a capture event.
 (rw) (01)  [0;32mALT_LOAD[0m  - [12:12] -  Alternative Load Enable
      0 - ALT_LOAD_0 :
         Counter can be re-initialized only with the LOAD register.
      0x1 - ALT_LOAD_1 :
         Counter can be re-initialized with the LOAD or CMPLD2 registers dependi
         ng on count direction.
 (rw) (01)  [0;32mFAULT[0m  - [13:13] -  Fault Enable
      0 - FAULT_0 :
         Fault function disabled.
      0x1 - FAULT_1 :
         Fault function enabled.
 (rw) (02)  [0;32mDBG_EN[0m  - [15:14] -  Debug Actions Enable
      0 - DBG_EN_0 :
         Continue with normal operation during debug mode. (default)
      0x1 - DBG_EN_1 :
         Halt TMR counter during debug mode.
      0x2 - DBG_EN_2 :
         Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
      0x3 - DBG_EN_3 :
         Both halt counter and force output to 0 during debug mode.
</lang>
#### p.tmr3.filt0
<link=p.TMR3.FILT0>
#### TMR3.FILT1
<link=p.TMR3.FILT1>
#### TMR3.DMA2
<link=p.TMR3.DMA2>
#### p.TMR4.COMP22
<lang=dft>
 (rw)  [1;33m0x401e8042[0m (0x401e8000 + 0x0042)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### tmr4.hold1
<link=p.TMR4.HOLD1>
#### tmr4.cntr0
<link=p.TMR4.CNTR0>
#### p.TMR4.CNTR3
<lang=dft>
 (rw)  [1;33m0x401e806a[0m (0x401e8000 + 0x006a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### p.TMR4.CMPLD10
<lang=dft>
 (rw)  [1;33m0x401e8010[0m (0x401e8000 + 0x0010)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### tmr4.cmpld10
<link=p.TMR4.CMPLD10>
#### p.tmr4.cmpld12
<link=p.TMR4.CMPLD12>
#### tmr4.cmpld21
<link=p.TMR4.CMPLD21>
#### TMR4.CSCTRL0
<link=p.TMR4.CSCTRL0>
#### p.TMR4.FILT1
<lang=dft>
 (rw)  [1;33m0x401e8036[0m (0x401e8000 + 0x0036)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### p.GPT1
<lang=dft>
base: 0x401ec000
CNT             CR              ICR1            ICR2            
IR              OCR1            OCR2            OCR3            
PR              SR              
输入 p.GPT1.{reg_name} 以查看寄存器的详细信息
type p.GPT1.{reg_name} to check details of registers
</lang>
#### GPT1.CR
<link=p.GPT1.CR>
#### p.gpt1.pr
<link=p.GPT1.PR>
#### p.GPT1.ICR1
<lang=dft>
 (ro)  [1;33m0x401ec01c[0m (0x401ec000 + 0x001c)
GPT Input Capture Register 1
 (ro) (32)  [0;32mCAPT[0m  - [31:00] -  Capture Value
</lang>
#### p.gpt1.icr1
<link=p.GPT1.ICR1>
#### p.gpt2.ir
<link=p.GPT2.IR>
#### gpt2.ir
<link=p.GPT2.IR>
#### GPT2.CNT
<link=p.GPT2.CNT>
#### p.OCOTP.LOCK
<lang=dft>
 (rw)  [1;33m0x401f4400[0m (0x401f4000 + 0x0400)
Value of OTP Bank0 Word0 (Lock controls)
 (ro) (02)  [0;32mTESTER[0m  - [01:00] -  TESTER
 (ro) (02)  [0;32mBOOT_CFG[0m  - [03:02] -  BOOT_CFG
 (ro) (02)  [0;32mMEM_TRIM[0m  - [05:04] -  MEM_TRIM
 (ro) (01)  [0;32mSJC_RESP[0m  - [06:06] -  SJC_RESP
 (ro) (01)  [0;32mGP4_RLOCK[0m  - [07:07] -  GP4_RLOCK
 (ro) (02)  [0;32mMAC_ADDR[0m  - [09:08] -  MAC_ADDR
 (ro) (02)  [0;32mGP1[0m  - [11:10] -  GP1
 (ro) (02)  [0;32mGP2[0m  - [13:12] -  GP2
 (ro) (01)  [0;32mROM_PATCH[0m  - [15:15] -  ROM_PATCH
 (ro) (01)  [0;32mSW_GP1[0m  - [16:16] -  SW_GP1
 (ro) (01)  [0;32mOTPMK[0m  - [17:17] -  OTPMK
 (ro) (02)  [0;32mANALOG[0m  - [19:18] -  ANALOG
 (ro) (01)  [0;32mOTPMK_CRC[0m  - [20:20] -  OTPMK_CRC
 (ro) (01)  [0;32mSW_GP2_LOCK[0m  - [21:21] -  SW_GP2_LOCK
 (ro) (01)  [0;32mMISC_CONF[0m  - [22:22] -  MISC_CONF
 (ro) (01)  [0;32mSW_GP2_RLOCK[0m  - [23:23] -  SW_GP2_RLOCK
 (ro) (02)  [0;32mGP4[0m  - [25:24] -  GP4
 (ro) (02)  [0;32mGP3[0m  - [27:26] -  GP3
 (rw) (04)  [0;32mFIELD_RETURN[0m  - [31:28] -  FIELD_RETURN
</lang>
#### ocotp.cfg4
<link=p.OCOTP.CFG4>
#### OCOTP.CFG4
<link=p.OCOTP.CFG4>
#### ocotp.mem2
<link=p.OCOTP.MEM2>
#### ocotp.ana0
<link=p.OCOTP.ANA0>
#### OCOTP.ANA0
<link=p.OCOTP.ANA0>
#### OCOTP.OTPMK3
<link=p.OCOTP.OTPMK3>
#### ocotp.otpmk6
<link=p.OCOTP.OTPMK6>
#### ocotp.srk7
<link=p.OCOTP.SRK7>
#### OCOTP.SRK7
<link=p.OCOTP.SRK7>
#### OCOTP.SJC_RESP1
<link=p.OCOTP.SJC_RESP1>
#### p.ocotp.mac0
<link=p.OCOTP.MAC0>
#### OCOTP.OTPMK_CRC32
<link=p.OCOTP.OTPMK_CRC32>
#### OCOTP.MISC_CONF0
<link=p.OCOTP.MISC_CONF0>
#### p.ocotp.rom_patch3
<link=p.OCOTP.ROM_PATCH3>
#### p.OCOTP.ROM_PATCH6
<lang=dft>
 (rw)  [1;33m0x401f4860[0m (0x401f4000 + 0x0860)
Value of OTP Bank6 Word6 (ROM Patch)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.ROM_PATCH6
<link=p.OCOTP.ROM_PATCH6>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_06>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_06>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_10>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_15>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_19
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_19>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_20
<lang=dft>
 (rw)  [1;33m0x401f8064[0m (0x401f8000 + 0x0064)
SW_MUX_CTL_PAD_GPIO_EMC_20 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR12 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM2_PWMB03 of instance: flexpwm2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART4_RX of instance: lpuart4
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_RDATA00 of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: QTIMER2_TIMER1 of instance: qtimer2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO20 of instance: gpio4
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_20
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_21
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_21>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_28
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_28>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_28
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_28>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_33
<lang=dft>
 (rw)  [1;33m0x401f8098[0m (0x401f8000 + 0x0098)
SW_MUX_CTL_PAD_GPIO_EMC_33 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA11 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM3_PWMA02 of instance: flexpwm3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: USDHC1_RESET_B of instance: usdhc1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI3_RX_DATA of instance: sai3
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA20 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO19 of instance: gpio3
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TX_CLK of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: ENET2_REF_CLK2 of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_33
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_36
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_36>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_01>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_04>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_08
<lang=dft>
 (rw)  [1;33m0x401f80dc[0m (0x401f8000 + 0x00dc)
SW_MUX_CTL_PAD_GPIO_AD_B0_08 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: JTAG_MOD of instance: jtag_mux
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: GPT2_COMPARE3 of instance: gpt2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ENET_RX_DATA03 of instance: enet
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI2_RX_DATA of instance: sai2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA05 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO08 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: XBAR1_IN20 of instance: xbar1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: ENET_1588_EVENT3_IN of instance: enet
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_08
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_02
<lang=dft>
 (rw)  [1;33m0x401f8104[0m (0x401f8000 + 0x0104)
SW_MUX_CTL_PAD_GPIO_AD_B1_02 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USB_OTG1_ID of instance: anatop
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER3_TIMER2 of instance: qtimer3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART2_TX of instance: lpuart2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SPDIF_OUT of instance: spdif
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: ENET_1588_EVENT2_OUT of instance: enet
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO18 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC1_CD_B of instance: usdhc1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_ROW06 of instance: kpp
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT2_CLK of instance: gpt2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO02 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_02
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_03>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_10>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_15>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_03>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_07
<lang=dft>
 (rw)  [1;33m0x401f8158[0m (0x401f8000 + 0x0158)
SW_MUX_CTL_PAD_GPIO_B0_07 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA03 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER3_TIMER1 of instance: qtimer3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXPWM2_PWMB00 of instance: flexpwm2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ARM_TRACE3 of instance: cm7_mx6rt
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO07 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO07 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SRC_BOOT_CFG03 of instance: src
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TX_ER of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_07
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_14>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_04>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_09>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_01>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_02>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_02>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b1_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_11>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_03
<lang=dft>
 (rw)  [1;33m0x401f8210[0m (0x401f8000 + 0x0210)
SW_PAD_CTL_PAD_GPIO_EMC_03 SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled :
         output driver disabled;
      0x1 - DSE_1_R0_150_Ohm_3_3V_260_Ohm_1_8V :
         R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
      0x2 - DSE_2_R0_2 :
         R0/2
      0x3 - DSE_3_R0_3 :
         R0/3
      0x4 - DSE_4_R0_4 :
         R0/4
      0x5 - DSE_5_R0_5 :
         R0/5
      0x6 - DSE_6_R0_6 :
         R0/6
      0x7 - DSE_7_R0_7 :
         R0/7
 (rw) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0 - SPEED_0_low_50MHz :
         low(50MHz)
      0x1 - SPEED_1_medium_100MHz :
         medium(100MHz)
      0x2 - SPEED_2_medium_100MHz :
         medium(100MHz)
      0x3 - SPEED_3_max_200MHz :
         max(200MHz)
 (rw) (01)  [0;32mODE[0m  - [11:11] -  Open Drain Enable Field
      0 - ODE_0_Open_Drain_Disabled :
         Open Drain Disabled
      0x1 - ODE_1_Open_Drain_Enabled :
         Open Drain Enabled
 (rw) (01)  [0;32mPKE[0m  - [12:12] -  Pull / Keep Enable Field
      0 - PKE_0_Pull_Keeper_Disabled :
         Pull/Keeper Disabled
      0x1 - PKE_1_Pull_Keeper_Enabled :
         Pull/Keeper Enabled
 (rw) (01)  [0;32mPUE[0m  - [13:13] -  Pull / Keep Select Field
      0 - PUE_0_Keeper :
         Keeper
      0x1 - PUE_1_Pull :
         Pull
 (rw) (02)  [0;32mPUS[0m  - [15:14] -  Pull Up / Down Config. Field
      0 - PUS_0_100K_Ohm_Pull_Down :
         100K Ohm Pull Down
      0x1 - PUS_1_47K_Ohm_Pull_Up :
         47K Ohm Pull Up
      0x2 - PUS_2_100K_Ohm_Pull_Up :
         100K Ohm Pull Up
      0x3 - PUS_3_22K_Ohm_Pull_Up :
         22K Ohm Pull Up
 (rw) (01)  [0;32mHYS[0m  - [16:16] -  Hyst. Enable Field
      0 - HYS_0_Hysteresis_Disabled :
         Hysteresis Disabled
      0x1 - HYS_1_Hysteresis_Enabled :
         Hysteresis Enabled
</lang>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_04>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_09>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_12>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_13>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_14
<lang=dft>
 (rw)  [1;33m0x401f823c[0m (0x401f8000 + 0x023c)
SW_PAD_CTL_PAD_GPIO_EMC_14 SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled :
         output driver disabled;
      0x1 - DSE_1_R0_150_Ohm_3_3V_260_Ohm_1_8V :
         R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
      0x2 - DSE_2_R0_2 :
         R0/2
      0x3 - DSE_3_R0_3 :
         R0/3
      0x4 - DSE_4_R0_4 :
         R0/4
      0x5 - DSE_5_R0_5 :
         R0/5
      0x6 - DSE_6_R0_6 :
         R0/6
      0x7 - DSE_7_R0_7 :
         R0/7
 (rw) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0 - SPEED_0_low_50MHz :
         low(50MHz)
      0x1 - SPEED_1_medium_100MHz :
         medium(100MHz)
      0x2 - SPEED_2_medium_100MHz :
         medium(100MHz)
      0x3 - SPEED_3_max_200MHz :
         max(200MHz)
 (rw) (01)  [0;32mODE[0m  - [11:11] -  Open Drain Enable Field
      0 - ODE_0_Open_Drain_Disabled :
         Open Drain Disabled
      0x1 - ODE_1_Open_Drain_Enabled :
         Open Drain Enabled
 (rw) (01)  [0;32mPKE[0m  - [12:12] -  Pull / Keep Enable Field
      0 - PKE_0_Pull_Keeper_Disabled :
         Pull/Keeper Disabled
      0x1 - PKE_1_Pull_Keeper_Enabled :
         Pull/Keeper Enabled
 (rw) (01)  [0;32mPUE[0m  - [13:13] -  Pull / Keep Select Field
      0 - PUE_0_Keeper :
         Keeper
      0x1 - PUE_1_Pull :
         Pull
 (rw) (02)  [0;32mPUS[0m  - [15:14] -  Pull Up / Down Config. Field
      0 - PUS_0_100K_Ohm_Pull_Down :
         100K Ohm Pull Down
      0x1 - PUS_1_47K_Ohm_Pull_Up :
         47K Ohm Pull Up
      0x2 - PUS_2_100K_Ohm_Pull_Up :
         100K Ohm Pull Up
      0x3 - PUS_3_22K_Ohm_Pull_Up :
         22K Ohm Pull Up
 (rw) (01)  [0;32mHYS[0m  - [16:16] -  Hyst. Enable Field
      0 - HYS_0_Hysteresis_Disabled :
         Hysteresis Disabled
      0x1 - HYS_1_Hysteresis_Enabled :
         Hysteresis Enabled
</lang>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_16
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_16>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_22
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_22>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_27
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_27>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_30
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_30>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_32
<lang=dft>
 (rw)  [1;33m0x401f8284[0m (0x401f8000 + 0x0284)
SW_PAD_CTL_PAD_GPIO_EMC_32 SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled :
         output driver disabled;
      0x1 - DSE_1_R0_150_Ohm_3_3V_260_Ohm_1_8V :
         R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
      0x2 - DSE_2_R0_2 :
         R0/2
      0x3 - DSE_3_R0_3 :
         R0/3
      0x4 - DSE_4_R0_4 :
         R0/4
      0x5 - DSE_5_R0_5 :
         R0/5
      0x6 - DSE_6_R0_6 :
         R0/6
      0x7 - DSE_7_R0_7 :
         R0/7
 (rw) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0 - SPEED_0_low_50MHz :
         low(50MHz)
      0x1 - SPEED_1_medium_100MHz :
         medium(100MHz)
      0x2 - SPEED_2_medium_100MHz :
         medium(100MHz)
      0x3 - SPEED_3_max_200MHz :
         max(200MHz)
 (rw) (01)  [0;32mODE[0m  - [11:11] -  Open Drain Enable Field
      0 - ODE_0_Open_Drain_Disabled :
         Open Drain Disabled
      0x1 - ODE_1_Open_Drain_Enabled :
         Open Drain Enabled
 (rw) (01)  [0;32mPKE[0m  - [12:12] -  Pull / Keep Enable Field
      0 - PKE_0_Pull_Keeper_Disabled :
         Pull/Keeper Disabled
      0x1 - PKE_1_Pull_Keeper_Enabled :
         Pull/Keeper Enabled
 (rw) (01)  [0;32mPUE[0m  - [13:13] -  Pull / Keep Select Field
      0 - PUE_0_Keeper :
         Keeper
      0x1 - PUE_1_Pull :
         Pull
 (rw) (02)  [0;32mPUS[0m  - [15:14] -  Pull Up / Down Config. Field
      0 - PUS_0_100K_Ohm_Pull_Down :
         100K Ohm Pull Down
      0x1 - PUS_1_47K_Ohm_Pull_Up :
         47K Ohm Pull Up
      0x2 - PUS_2_100K_Ohm_Pull_Up :
         100K Ohm Pull Up
      0x3 - PUS_3_22K_Ohm_Pull_Up :
         22K Ohm Pull Up
 (rw) (01)  [0;32mHYS[0m  - [16:16] -  Hyst. Enable Field
      0 - HYS_0_Hysteresis_Disabled :
         Hysteresis Disabled
      0x1 - HYS_1_Hysteresis_Enabled :
         Hysteresis Enabled
</lang>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_07>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_08>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_00>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_02>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_03>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_05
<lang=dft>
 (rw)  [1;33m0x401f8300[0m (0x401f8000 + 0x0300)
SW_PAD_CTL_PAD_GPIO_AD_B1_05 SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled :
         output driver disabled;
      0x1 - DSE_1_R0_150_Ohm_3_3V_260_Ohm_1_8V :
         R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
      0x2 - DSE_2_R0_2 :
         R0/2
      0x3 - DSE_3_R0_3 :
         R0/3
      0x4 - DSE_4_R0_4 :
         R0/4
      0x5 - DSE_5_R0_5 :
         R0/5
      0x6 - DSE_6_R0_6 :
         R0/6
      0x7 - DSE_7_R0_7 :
         R0/7
 (rw) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0 - SPEED_0_low_50MHz :
         low(50MHz)
      0x1 - SPEED_1_medium_100MHz :
         medium(100MHz)
      0x2 - SPEED_2_medium_100MHz :
         medium(100MHz)
      0x3 - SPEED_3_max_200MHz :
         max(200MHz)
 (rw) (01)  [0;32mODE[0m  - [11:11] -  Open Drain Enable Field
      0 - ODE_0_Open_Drain_Disabled :
         Open Drain Disabled
      0x1 - ODE_1_Open_Drain_Enabled :
         Open Drain Enabled
 (rw) (01)  [0;32mPKE[0m  - [12:12] -  Pull / Keep Enable Field
      0 - PKE_0_Pull_Keeper_Disabled :
         Pull/Keeper Disabled
      0x1 - PKE_1_Pull_Keeper_Enabled :
         Pull/Keeper Enabled
 (rw) (01)  [0;32mPUE[0m  - [13:13] -  Pull / Keep Select Field
      0 - PUE_0_Keeper :
         Keeper
      0x1 - PUE_1_Pull :
         Pull
 (rw) (02)  [0;32mPUS[0m  - [15:14] -  Pull Up / Down Config. Field
      0 - PUS_0_100K_Ohm_Pull_Down :
         100K Ohm Pull Down
      0x1 - PUS_1_47K_Ohm_Pull_Up :
         47K Ohm Pull Up
      0x2 - PUS_2_100K_Ohm_Pull_Up :
         100K Ohm Pull Up
      0x3 - PUS_3_22K_Ohm_Pull_Up :
         22K Ohm Pull Up
 (rw) (01)  [0;32mHYS[0m  - [16:16] -  Hyst. Enable Field
      0 - HYS_0_Hysteresis_Disabled :
         Hysteresis Disabled
      0x1 - HYS_1_Hysteresis_Enabled :
         Hysteresis Enabled
</lang>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_02
<lang=dft>
 (rw)  [1;33m0x401f8334[0m (0x401f8000 + 0x0334)
SW_PAD_CTL_PAD_GPIO_B0_02 SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled :
         output driver disabled;
      0x1 - DSE_1_R0_150_Ohm_3_3V_260_Ohm_1_8V :
         R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
      0x2 - DSE_2_R0_2 :
         R0/2
      0x3 - DSE_3_R0_3 :
         R0/3
      0x4 - DSE_4_R0_4 :
         R0/4
      0x5 - DSE_5_R0_5 :
         R0/5
      0x6 - DSE_6_R0_6 :
         R0/6
      0x7 - DSE_7_R0_7 :
         R0/7
 (rw) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0 - SPEED_0_low_50MHz :
         low(50MHz)
      0x1 - SPEED_1_medium_100MHz :
         medium(100MHz)
      0x2 - SPEED_2_medium_100MHz :
         medium(100MHz)
      0x3 - SPEED_3_max_200MHz :
         max(200MHz)
 (rw) (01)  [0;32mODE[0m  - [11:11] -  Open Drain Enable Field
      0 - ODE_0_Open_Drain_Disabled :
         Open Drain Disabled
      0x1 - ODE_1_Open_Drain_Enabled :
         Open Drain Enabled
 (rw) (01)  [0;32mPKE[0m  - [12:12] -  Pull / Keep Enable Field
      0 - PKE_0_Pull_Keeper_Disabled :
         Pull/Keeper Disabled
      0x1 - PKE_1_Pull_Keeper_Enabled :
         Pull/Keeper Enabled
 (rw) (01)  [0;32mPUE[0m  - [13:13] -  Pull / Keep Select Field
      0 - PUE_0_Keeper :
         Keeper
      0x1 - PUE_1_Pull :
         Pull
 (rw) (02)  [0;32mPUS[0m  - [15:14] -  Pull Up / Down Config. Field
      0 - PUS_0_100K_Ohm_Pull_Down :
         100K Ohm Pull Down
      0x1 - PUS_1_47K_Ohm_Pull_Up :
         47K Ohm Pull Up
      0x2 - PUS_2_100K_Ohm_Pull_Up :
         100K Ohm Pull Up
      0x3 - PUS_3_22K_Ohm_Pull_Up :
         22K Ohm Pull Up
 (rw) (01)  [0;32mHYS[0m  - [16:16] -  Hyst. Enable Field
      0 - HYS_0_Hysteresis_Disabled :
         Hysteresis Disabled
      0x1 - HYS_1_Hysteresis_Enabled :
         Hysteresis Enabled
</lang>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_05>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_11
<lang=dft>
 (rw)  [1;33m0x401f8358[0m (0x401f8000 + 0x0358)
SW_PAD_CTL_PAD_GPIO_B0_11 SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled :
         output driver disabled;
      0x1 - DSE_1_R0_150_Ohm_3_3V_260_Ohm_1_8V :
         R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
      0x2 - DSE_2_R0_2 :
         R0/2
      0x3 - DSE_3_R0_3 :
         R0/3
      0x4 - DSE_4_R0_4 :
         R0/4
      0x5 - DSE_5_R0_5 :
         R0/5
      0x6 - DSE_6_R0_6 :
         R0/6
      0x7 - DSE_7_R0_7 :
         R0/7
 (rw) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0 - SPEED_0_low_50MHz :
         low(50MHz)
      0x1 - SPEED_1_medium_100MHz :
         medium(100MHz)
      0x2 - SPEED_2_medium_100MHz :
         medium(100MHz)
      0x3 - SPEED_3_max_200MHz :
         max(200MHz)
 (rw) (01)  [0;32mODE[0m  - [11:11] -  Open Drain Enable Field
      0 - ODE_0_Open_Drain_Disabled :
         Open Drain Disabled
      0x1 - ODE_1_Open_Drain_Enabled :
         Open Drain Enabled
 (rw) (01)  [0;32mPKE[0m  - [12:12] -  Pull / Keep Enable Field
      0 - PKE_0_Pull_Keeper_Disabled :
         Pull/Keeper Disabled
      0x1 - PKE_1_Pull_Keeper_Enabled :
         Pull/Keeper Enabled
 (rw) (01)  [0;32mPUE[0m  - [13:13] -  Pull / Keep Select Field
      0 - PUE_0_Keeper :
         Keeper
      0x1 - PUE_1_Pull :
         Pull
 (rw) (02)  [0;32mPUS[0m  - [15:14] -  Pull Up / Down Config. Field
      0 - PUS_0_100K_Ohm_Pull_Down :
         100K Ohm Pull Down
      0x1 - PUS_1_47K_Ohm_Pull_Up :
         47K Ohm Pull Up
      0x2 - PUS_2_100K_Ohm_Pull_Up :
         100K Ohm Pull Up
      0x3 - PUS_3_22K_Ohm_Pull_Up :
         22K Ohm Pull Up
 (rw) (01)  [0;32mHYS[0m  - [16:16] -  Hyst. Enable Field
      0 - HYS_0_Hysteresis_Disabled :
         Hysteresis Disabled
      0x1 - HYS_1_Hysteresis_Enabled :
         Hysteresis Enabled
</lang>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_14>
#### iomuxc.sw_pad_ctl_pad_gpio_b1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_00>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_05
<lang=dft>
 (rw)  [1;33m0x401f8380[0m (0x401f8000 + 0x0380)
SW_PAD_CTL_PAD_GPIO_B1_05 SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled :
         output driver disabled;
      0x1 - DSE_1_R0_150_Ohm_3_3V_260_Ohm_1_8V :
         R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
      0x2 - DSE_2_R0_2 :
         R0/2
      0x3 - DSE_3_R0_3 :
         R0/3
      0x4 - DSE_4_R0_4 :
         R0/4
      0x5 - DSE_5_R0_5 :
         R0/5
      0x6 - DSE_6_R0_6 :
         R0/6
      0x7 - DSE_7_R0_7 :
         R0/7
 (rw) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0 - SPEED_0_low_50MHz :
         low(50MHz)
      0x1 - SPEED_1_medium_100MHz :
         medium(100MHz)
      0x2 - SPEED_2_medium_100MHz :
         medium(100MHz)
      0x3 - SPEED_3_max_200MHz :
         max(200MHz)
 (rw) (01)  [0;32mODE[0m  - [11:11] -  Open Drain Enable Field
      0 - ODE_0_Open_Drain_Disabled :
         Open Drain Disabled
      0x1 - ODE_1_Open_Drain_Enabled :
         Open Drain Enabled
 (rw) (01)  [0;32mPKE[0m  - [12:12] -  Pull / Keep Enable Field
      0 - PKE_0_Pull_Keeper_Disabled :
         Pull/Keeper Disabled
      0x1 - PKE_1_Pull_Keeper_Enabled :
         Pull/Keeper Enabled
 (rw) (01)  [0;32mPUE[0m  - [13:13] -  Pull / Keep Select Field
      0 - PUE_0_Keeper :
         Keeper
      0x1 - PUE_1_Pull :
         Pull
 (rw) (02)  [0;32mPUS[0m  - [15:14] -  Pull Up / Down Config. Field
      0 - PUS_0_100K_Ohm_Pull_Down :
         100K Ohm Pull Down
      0x1 - PUS_1_47K_Ohm_Pull_Up :
         47K Ohm Pull Up
      0x2 - PUS_2_100K_Ohm_Pull_Up :
         100K Ohm Pull Up
      0x3 - PUS_3_22K_Ohm_Pull_Up :
         22K Ohm Pull Up
 (rw) (01)  [0;32mHYS[0m  - [16:16] -  Hyst. Enable Field
      0 - HYS_0_Hysteresis_Disabled :
         Hysteresis Disabled
      0x1 - HYS_1_Hysteresis_Enabled :
         Hysteresis Enabled
</lang>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_05>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_02
<lang=dft>
 (rw)  [1;33m0x401f83b4[0m (0x401f8000 + 0x03b4)
SW_PAD_CTL_PAD_GPIO_SD_B0_02 SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled :
         output driver disabled;
      0x1 - DSE_1_R0_150_Ohm_3_3V_260_Ohm_1_8V :
         R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
      0x2 - DSE_2_R0_2 :
         R0/2
      0x3 - DSE_3_R0_3 :
         R0/3
      0x4 - DSE_4_R0_4 :
         R0/4
      0x5 - DSE_5_R0_5 :
         R0/5
      0x6 - DSE_6_R0_6 :
         R0/6
      0x7 - DSE_7_R0_7 :
         R0/7
 (rw) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0 - SPEED_0_low_50MHz :
         low(50MHz)
      0x1 - SPEED_1_medium_100MHz :
         medium(100MHz)
      0x2 - SPEED_2_medium_100MHz :
         medium(100MHz)
      0x3 - SPEED_3_max_200MHz :
         max(200MHz)
 (rw) (01)  [0;32mODE[0m  - [11:11] -  Open Drain Enable Field
      0 - ODE_0_Open_Drain_Disabled :
         Open Drain Disabled
      0x1 - ODE_1_Open_Drain_Enabled :
         Open Drain Enabled
 (rw) (01)  [0;32mPKE[0m  - [12:12] -  Pull / Keep Enable Field
      0 - PKE_0_Pull_Keeper_Disabled :
         Pull/Keeper Disabled
      0x1 - PKE_1_Pull_Keeper_Enabled :
         Pull/Keeper Enabled
 (rw) (01)  [0;32mPUE[0m  - [13:13] -  Pull / Keep Select Field
      0 - PUE_0_Keeper :
         Keeper
      0x1 - PUE_1_Pull :
         Pull
 (rw) (02)  [0;32mPUS[0m  - [15:14] -  Pull Up / Down Config. Field
      0 - PUS_0_100K_Ohm_Pull_Down :
         100K Ohm Pull Down
      0x1 - PUS_1_47K_Ohm_Pull_Up :
         47K Ohm Pull Up
      0x2 - PUS_2_100K_Ohm_Pull_Up :
         100K Ohm Pull Up
      0x3 - PUS_3_22K_Ohm_Pull_Up :
         22K Ohm Pull Up
 (rw) (01)  [0;32mHYS[0m  - [16:16] -  Hyst. Enable Field
      0 - HYS_0_Hysteresis_Disabled :
         Hysteresis Disabled
      0x1 - HYS_1_Hysteresis_Enabled :
         Hysteresis Enabled
</lang>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_03>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_01>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_05>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_06>
#### p.IOMUXC.ANATOP_USB_OTG1_ID_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f83f4[0m (0x401f8000 + 0x03f4)
ANATOP_USB_OTG1_ID_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_01_ALT3 :
         Selecting Pad: GPIO_AD_B0_01 for Mode: ALT3
      0x1 - GPIO_AD_B1_02_ALT0 :
         Selecting Pad: GPIO_AD_B1_02 for Mode: ALT0
</lang>
#### p.iomuxc.anatop_usb_otg2_id_select_input
<link=p.IOMUXC.ANATOP_USB_OTG2_ID_SELECT_INPUT>
#### p.IOMUXC.CCM_PMIC_READY_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f83fc[0m (0x401f8000 + 0x03fc)
CCM_PMIC_READY_SELECT_INPUT DAISY Register
 (rw) (03)  [0;32mDAISY[0m  - [02:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_03_ALT6 :
         Selecting Pad: GPIO_SD_B1_03 for Mode: ALT6
      0x1 - GPIO_AD_B0_12_ALT1 :
         Selecting Pad: GPIO_AD_B0_12 for Mode: ALT1
      0x2 - GPIO_AD_B1_01_ALT4 :
         Selecting Pad: GPIO_AD_B1_01 for Mode: ALT4
      0x3 - GPIO_AD_B1_08_ALT3 :
         Selecting Pad: GPIO_AD_B1_08 for Mode: ALT3
      0x4 - GPIO_EMC_32_ALT3 :
         Selecting Pad: GPIO_EMC_32 for Mode: ALT3
</lang>
#### p.IOMUXC.CSI_DATA03_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8404[0m (0x401f8000 + 0x0404)
CSI_DATA03_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_14_ALT4 :
         Selecting Pad: GPIO_AD_B1_14 for Mode: ALT4
      0x1 - GPIO_AD_B0_10_ALT4 :
         Selecting Pad: GPIO_AD_B0_10 for Mode: ALT4
</lang>
#### p.iomuxc.csi_data06_select_input
<link=p.IOMUXC.CSI_DATA06_SELECT_INPUT>
#### iomuxc.csi_data06_select_input
<link=p.IOMUXC.CSI_DATA06_SELECT_INPUT>
#### p.IOMUXC.ENET_RXEN_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f843c[0m (0x401f8000 + 0x043c)
ENET_RXEN_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_23_ALT3 :
         Selecting Pad: GPIO_EMC_23 for Mode: ALT3
      0x1 - GPIO_B1_06_ALT3 :
         Selecting Pad: GPIO_B1_06 for Mode: ALT3
</lang>
#### IOMUXC.FLEXCAN1_RX_SELECT_INPUT
<link=p.IOMUXC.FLEXCAN1_RX_SELECT_INPUT>
#### p.IOMUXC.FLEXCAN2_RX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8450[0m (0x401f8000 + 0x0450)
FLEXCAN2_RX_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_10_ALT3 :
         Selecting Pad: GPIO_EMC_10 for Mode: ALT3
      0x1 - GPIO_AD_B0_03_ALT0 :
         Selecting Pad: GPIO_AD_B0_03 for Mode: ALT0
      0x2 - GPIO_AD_B0_15_ALT6 :
         Selecting Pad: GPIO_AD_B0_15 for Mode: ALT6
      0x3 - GPIO_B1_09_ALT6 :
         Selecting Pad: GPIO_B1_09 for Mode: ALT6
</lang>
#### iomuxc.flexpwm1_pwma1_select_input
<link=p.IOMUXC.FLEXPWM1_PWMA1_SELECT_INPUT>
#### IOMUXC.FLEXPWM1_PWMA1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMA1_SELECT_INPUT>
#### iomuxc.flexpwm1_pwmb3_select_input
<link=p.IOMUXC.FLEXPWM1_PWMB3_SELECT_INPUT>
#### IOMUXC.FLEXPWM1_PWMB0_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMB0_SELECT_INPUT>
#### p.iomuxc.flexpwm1_pwmb1_select_input
<link=p.IOMUXC.FLEXPWM1_PWMB1_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM1_PWMB2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8470[0m (0x401f8000 + 0x0470)
FLEXPWM1_PWMB2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_28_ALT1 :
         Selecting Pad: GPIO_EMC_28 for Mode: ALT1
      0x1 - GPIO_SD_B0_05_ALT1 :
         Selecting Pad: GPIO_SD_B0_05 for Mode: ALT1
</lang>
#### IOMUXC.FLEXPWM2_PWMB3_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMB3_SELECT_INPUT>
#### iomuxc.flexpwm2_pwmb1_select_input
<link=p.IOMUXC.FLEXPWM2_PWMB1_SELECT_INPUT>
#### iomuxc.flexpwm4_pwma0_select_input
<link=p.IOMUXC.FLEXPWM4_PWMA0_SELECT_INPUT>
#### p.iomuxc.flexspia_data2_select_input
<link=p.IOMUXC.FLEXSPIA_DATA2_SELECT_INPUT>
#### p.IOMUXC.FLEXSPIB_DATA0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84b8[0m (0x401f8000 + 0x04b8)
FLEXSPIB_DATA0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_03_ALT1 :
         Selecting Pad: GPIO_SD_B1_03 for Mode: ALT1
      0x1 - GPIO_AD_B1_07_ALT0 :
         Selecting Pad: GPIO_AD_B1_07 for Mode: ALT0
</lang>
#### iomuxc.flexspib_data1_select_input
<link=p.IOMUXC.FLEXSPIB_DATA1_SELECT_INPUT>
#### p.iomuxc.flexspib_data3_select_input
<link=p.IOMUXC.FLEXSPIB_DATA3_SELECT_INPUT>
#### p.IOMUXC.FLEXSPIA_SCK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84c8[0m (0x401f8000 + 0x04c8)
FLEXSPIA_SCK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_07_ALT1 :
         Selecting Pad: GPIO_SD_B1_07 for Mode: ALT1
      0x1 - GPIO_AD_B1_14_ALT0 :
         Selecting Pad: GPIO_AD_B1_14 for Mode: ALT0
</lang>
#### IOMUXC.FLEXSPIA_SCK_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_SCK_SELECT_INPUT>
#### iomuxc.lpi2c2_sda_select_input
<link=p.IOMUXC.LPI2C2_SDA_SELECT_INPUT>
#### p.iomuxc.lpi2c3_sda_select_input
<link=p.IOMUXC.LPI2C3_SDA_SELECT_INPUT>
#### iomuxc.lpi2c4_sda_select_input
<link=p.IOMUXC.LPI2C4_SDA_SELECT_INPUT>
#### IOMUXC.LPSPI1_SDI_SELECT_INPUT
<link=p.IOMUXC.LPSPI1_SDI_SELECT_INPUT>
#### p.IOMUXC.LPSPI2_SCK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8500[0m (0x401f8000 + 0x0500)
LPSPI2_SCK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_07_ALT4 :
         Selecting Pad: GPIO_SD_B1_07 for Mode: ALT4
      0x1 - GPIO_EMC_00_ALT2 :
         Selecting Pad: GPIO_EMC_00 for Mode: ALT2
</lang>
#### IOMUXC.LPSPI2_SDI_SELECT_INPUT
<link=p.IOMUXC.LPSPI2_SDI_SELECT_INPUT>
#### iomuxc.lpspi2_sdo_select_input
<link=p.IOMUXC.LPSPI2_SDO_SELECT_INPUT>
#### p.IOMUXC.LPSPI3_SCK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8510[0m (0x401f8000 + 0x0510)
LPSPI3_SCK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_00_ALT7 :
         Selecting Pad: GPIO_AD_B0_00 for Mode: ALT7
      0x1 - GPIO_AD_B1_15 :
         Selecting Pad: GPIO_AD_B1_15 for Mode: ALT2
</lang>
#### p.iomuxc.lpspi3_sck_select_input
<link=p.IOMUXC.LPSPI3_SCK_SELECT_INPUT>
#### p.IOMUXC.LPSPI3_SDI_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8514[0m (0x401f8000 + 0x0514)
LPSPI3_SDI_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_02_ALT7 :
         Selecting Pad: GPIO_AD_B0_02 for Mode: ALT7
      0x1 - GPIO_AD_B1_13_ALT2 :
         Selecting Pad: GPIO_AD_B1_13 for Mode: ALT2
</lang>
#### p.IOMUXC.LPSPI3_SDO_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8518[0m (0x401f8000 + 0x0518)
LPSPI3_SDO_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_01_ALT7 :
         Selecting Pad: GPIO_AD_B0_01 for Mode: ALT7
      0x1 - GPIO_AD_B1_14_ALT2 :
         Selecting Pad: GPIO_AD_B1_14 for Mode: ALT2
</lang>
#### iomuxc.lpuart4_rx_select_input
<link=p.IOMUXC.LPUART4_RX_SELECT_INPUT>
#### iomuxc.lpuart4_tx_select_input
<link=p.IOMUXC.LPUART4_TX_SELECT_INPUT>
#### p.iomuxc.lpuart7_tx_select_input
<link=p.IOMUXC.LPUART7_TX_SELECT_INPUT>
#### iomuxc.qtimer2_timer2_select_input
<link=p.IOMUXC.QTIMER2_TIMER2_SELECT_INPUT>
#### IOMUXC.SAI1_RX_BCLK_SELECT_INPUT
<link=p.IOMUXC.SAI1_RX_BCLK_SELECT_INPUT>
#### p.IOMUXC.SAI1_RX_DATA3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85a0[0m (0x401f8000 + 0x05a0)
SAI1_RX_DATA3_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_02_ALT3 :
         Selecting Pad: GPIO_SD_B1_02 for Mode: ALT3
      0x1 - GPIO_B0_12_ALT3 :
         Selecting Pad: GPIO_B0_12 for Mode: ALT3
</lang>
#### p.IOMUXC.SAI1_TX_SYNC_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85ac[0m (0x401f8000 + 0x05ac)
SAI1_TX_SYNC_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_09_ALT3 :
         Selecting Pad: GPIO_SD_B1_09 for Mode: ALT3
      0x1 - GPIO_AD_B1_15_ALT3 :
         Selecting Pad: GPIO_AD_B1_15 for Mode: ALT3
      0x2 - GPIO_B1_03_ALT3 :
         Selecting Pad: GPIO_B1_03 for Mode: ALT3
</lang>
#### IOMUXC.SAI2_RX_BCLK_SELECT_INPUT
<link=p.IOMUXC.SAI2_RX_BCLK_SELECT_INPUT>
#### iomuxc.sai2_rx_data0_select_input
<link=p.IOMUXC.SAI2_RX_DATA0_SELECT_INPUT>
#### iomuxc.sai2_tx_bclk_select_input
<link=p.IOMUXC.SAI2_TX_BCLK_SELECT_INPUT>
#### iomuxc.usdhc2_data4_select_input
<link=p.IOMUXC.USDHC2_DATA4_SELECT_INPUT>
#### p.IOMUXC.USDHC2_DATA6_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8600[0m (0x401f8000 + 0x0600)
USDHC2_DATA6_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_10_ALT0 :
         Selecting Pad: GPIO_SD_B1_10 for Mode: ALT0
      0x1 - GPIO_AD_B1_14_ALT6 :
         Selecting Pad: GPIO_AD_B1_14 for Mode: ALT6
</lang>
#### p.iomuxc.xbar1_in02_select_input
<link=p.IOMUXC.XBAR1_IN02_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN07_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8620[0m (0x401f8000 + 0x0620)
XBAR1_IN07_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_05_ALT3 :
         Selecting Pad: GPIO_EMC_05 for Mode: ALT3
      0x1 - GPIO_SD_B0_03_ALT3 :
         Selecting Pad: GPIO_SD_B0_03 for Mode: ALT3
</lang>
#### p.IOMUXC.XBAR1_IN18_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8630[0m (0x401f8000 + 0x0630)
XBAR1_IN18_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_35_ALT1 :
         Selecting Pad: GPIO_EMC_35 for Mode: ALT1
      0x1 - GPIO_AD_B0_06_ALT6 :
         Selecting Pad: GPIO_AD_B0_06 for Mode: ALT6
</lang>
#### p.IOMUXC.XBAR1_IN19_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8654[0m (0x401f8000 + 0x0654)
XBAR1_IN19_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_14_ALT1 :
         Selecting Pad: GPIO_EMC_14 for Mode: ALT1
      0x1 - GPIO_AD_B0_07_ALT6 :
         Selecting Pad: GPIO_AD_B0_07 for Mode: ALT6
</lang>
#### p.iomuxc.xbar1_in19_select_input
<link=p.IOMUXC.XBAR1_IN19_SELECT_INPUT>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_04
<lang=dft>
 (rw)  [1;33m0x401f866c[0m (0x401f8000 + 0x066c)
SW_MUX_CTL_PAD_GPIO_SPI_B0_04 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_B_DATA03 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_04
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_04>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_09>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_03
<lang=dft>
 (rw)  [1;33m0x401f86f8[0m (0x401f8000 + 0x06f8)
SW_PAD_CTL_PAD_GPIO_SPI_B1_03 SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled_ :
         output driver disabled;
      0x1 - DSE_1_R0_150_Ohm___3_3V__260_Ohm_1_8V_ :
         R0(150 Ohm @ 3.3V, 260 Ohm@1.8V)
      0x2 - DSE_2_R0_2 :
         R0/2
      0x3 - DSE_3_R0_3 :
         R0/3
      0x4 - DSE_4_R0_4 :
         R0/4
      0x5 - DSE_5_R0_5 :
         R0/5
      0x6 - DSE_6_R0_6 :
         R0/6
      0x7 - DSE_7_R0_7 :
         R0/7
 (rw) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0 - SPEED_0_low_50MHz_ :
         low(50MHz)
      0x1 - SPEED_1_medium_100MHz_ :
         medium(100MHz)
      0x2 - SPEED_2_medium_100MHz_ :
         medium(100MHz)
      0x3 - SPEED_3_max_200MHz_ :
         max(200MHz)
 (rw) (01)  [0;32mODE[0m  - [11:11] -  Open Drain Enable Field
      0 - ODE_0_Open_Drain_Disabled :
         Open Drain Disabled
      0x1 - ODE_1_Open_Drain_Enabled :
         Open Drain Enabled
 (rw) (01)  [0;32mPKE[0m  - [12:12] -  Pull / Keep Enable Field
      0 - PKE_0_Pull_Keeper_Disabled :
         Pull/Keeper Disabled
      0x1 - PKE_1_Pull_Keeper_Enabled :
         Pull/Keeper Enabled
 (rw) (01)  [0;32mPUE[0m  - [13:13] -  Pull / Keep Select Field
      0 - PUE_0_Keeper :
         Keeper
      0x1 - PUE_1_Pull :
         Pull
 (rw) (02)  [0;32mPUS[0m  - [15:14] -  Pull Up / Down Config. Field
      0 - PUS_0_100K_Ohm_Pull_Down :
         100K Ohm Pull Down
      0x1 - PUS_1_47K_Ohm_Pull_Up :
         47K Ohm Pull Up
      0x2 - PUS_2_100K_Ohm_Pull_Up :
         100K Ohm Pull Up
      0x3 - PUS_3_22K_Ohm_Pull_Up :
         22K Ohm Pull Up
 (rw) (01)  [0;32mHYS[0m  - [16:16] -  Hyst. Enable Field
      0 - HYS_0_Hysteresis_Disabled :
         Hysteresis Disabled
      0x1 - HYS_1_Hysteresis_Enabled :
         Hysteresis Enabled
</lang>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_05>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_06>
#### IOMUXC.ENET2_IPP_IND_MAC0_MDIO_SELECT_INPUT
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_MDIO_SELECT_INPUT>
#### p.IOMUXC.ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f871c[0m (0x401f8000 + 0x071c)
ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_37_ALT8 :
         Selecting Pad: GPIO_EMC_37 for Mode: ALT8
      0x1 - GPIO_SD_B0_05_ALT8 :
         Selecting Pad: GPIO_SD_B0_05 for Mode: ALT8
      0x2 - GPIO_B1_03_ALT8 :
         Selecting Pad: GPIO_B1_03 for Mode: ALT8
</lang>
#### p.iomuxc.flexspi2_ipp_ind_io_fa_bit0_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT>
#### p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8744[0m (0x401f8000 + 0x0744)
FLEXSPI2_IPP_IND_IO_FB_BIT1_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_14_ALT8 :
         Selecting Pad: GPIO_EMC_14 for Mode: ALT8
      0x1 - GPIO_SPI_B0_07_ALT0 :
         Selecting Pad: GPIO_SPI_B0_07 for Mode: ALT0
</lang>
#### IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT>
#### p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f874c[0m (0x401f8000 + 0x074c)
FLEXSPI2_IPP_IND_IO_FB_BIT3_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_16_ALT8 :
         Selecting Pad: GPIO_EMC_16 for Mode: ALT8
      0x1 - GPIO_SPI_B0_04_ALT0 :
         Selecting Pad: GPIO_SPI_B0_04 for Mode: ALT0
</lang>
#### p.IOMUXC.GPT1_IPP_IND_CLKIN_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8760[0m (0x401f8000 + 0x0760)
GPT1_IPP_IND_CLKIN_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_13_ALT1 :
         Selecting Pad: GPIO_AD_B0_13 for Mode: ALT1
      0x1 - GPIO_B1_04_ALT8 :
         Selecting Pad: GPIO_B1_04 for Mode: ALT8
</lang>
#### IOMUXC.GPT2_IPP_IND_CAPIN2_SELECT_INPUT
<link=p.IOMUXC.GPT2_IPP_IND_CAPIN2_SELECT_INPUT>
#### p.IOMUXC.SAI3_IPP_IND_SAI_RXSYNC_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f877c[0m (0x401f8000 + 0x077c)
SAI3_IPP_IND_SAI_RXSYNC_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_34_ALT3 :
         Selecting Pad: GPIO_EMC_34 for Mode: ALT3
      0x1 - GPIO_SD_B1_05_ALT8 :
         Selecting Pad: GPIO_SD_B1_05 for Mode: ALT8
</lang>
#### IOMUXC.SAI3_IPP_IND_SAI_TXSYNC_SELECT_INPUT
<link=p.IOMUXC.SAI3_IPP_IND_SAI_TXSYNC_SELECT_INPUT>
#### iomuxc.canfd_ipp_ind_canrx_select_input
<link=p.IOMUXC.CANFD_IPP_IND_CANRX_SELECT_INPUT>
#### p.KPP.KPCR
<lang=dft>
 (rw)  [1;33m0x401fc000[0m (0x401fc000 + 0x0000)
Keypad Control Register
 (rw) (08)  [0;32mKRE[0m  - [07:00] -  Keypad Row Enable
      0 - KRE_0 :
         Row is not included in the keypad key press detect.
      0x1 - KRE_1 :
         Row is included in the keypad key press detect.
 (rw) (08)  [0;32mKCO[0m  - [15:08] -  Keypad Column Strobe Open-Drain Enable
      0 - TOTEM_POLE :
         Column strobe output is totem pole drive.
      0x1 - OPEN_DRAIN :
         Column strobe output is open drain.
</lang>
#### KPP.KPSR
<link=p.KPP.KPSR>
#### KPP.KPDR
<link=p.KPP.KPDR>
#### FLEXSPI.MCR2
<link=p.FLEXSPI.MCR2>
#### p.flexspi.ahbrxbuf3cr0
<link=p.FLEXSPI.AHBRXBUF3CR0>
#### p.flexspi.flshcr1a1
<link=p.FLEXSPI.FLSHCR1A1>
#### FLEXSPI.FLSHCR1B1
<link=p.FLEXSPI.FLSHCR1B1>
#### p.FLEXSPI.IPCR0
<lang=dft>
 (rw)  [1;33m0x402a80a0[0m (0x402a8000 + 0x00a0)
IP Control Register 0
 (rw) (32)  [0;32mSFAR[0m  - [31:00] -  Serial Flash Address for IP command.
</lang>
#### flexspi.ipcr0
<link=p.FLEXSPI.IPCR0>
#### FLEXSPI.IPRXFSTS
<link=p.FLEXSPI.IPRXFSTS>
#### FLEXSPI.RFDR[3]
<link=p.FLEXSPI.RFDR[3]>
#### p.FLEXSPI.RFDR[4]
<lang=dft>
 (ro)  [1;33m0x402a8110[0m (0x402a8000 + 0x0110)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi.rfdr[13]
<link=p.FLEXSPI.RFDR[13]>
#### p.flexspi.rfdr[16]
<link=p.FLEXSPI.RFDR[16]>
#### FLEXSPI.RFDR[18]
<link=p.FLEXSPI.RFDR[18]>
#### flexspi.rfdr[22]
<link=p.FLEXSPI.RFDR[22]>
#### flexspi.rfdr[25]
<link=p.FLEXSPI.RFDR[25]>
#### flexspi.rfdr[28]
<link=p.FLEXSPI.RFDR[28]>
#### p.flexspi.tfdr[0]
<link=p.FLEXSPI.TFDR[0]>
#### flexspi.tfdr[2]
<link=p.FLEXSPI.TFDR[2]>
#### FLEXSPI.TFDR[6]
<link=p.FLEXSPI.TFDR[6]>
#### p.flexspi.tfdr[7]
<link=p.FLEXSPI.TFDR[7]>
#### flexspi.tfdr[8]
<link=p.FLEXSPI.TFDR[8]>
#### p.flexspi.tfdr[10]
<link=p.FLEXSPI.TFDR[10]>
#### flexspi.tfdr[15]
<link=p.FLEXSPI.TFDR[15]>
#### FLEXSPI.TFDR[24]
<link=p.FLEXSPI.TFDR[24]>
#### p.FLEXSPI.TFDR[27]
<lang=dft>
 (wo)  [1;33m0x402a81ec[0m (0x402a8000 + 0x01ec)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi.tfdr[30]
<link=p.FLEXSPI.TFDR[30]>
#### FLEXSPI.TFDR[30]
<link=p.FLEXSPI.TFDR[30]>
#### FLEXSPI.LUT[0]
<link=p.FLEXSPI.LUT[0]>
#### FLEXSPI.LUT[7]
<link=p.FLEXSPI.LUT[7]>
#### p.FLEXSPI.LUT[21]
<lang=dft>
 (rw)  [1;33m0x402a8254[0m (0x402a8000 + 0x0254)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[21]
<link=p.FLEXSPI.LUT[21]>
#### p.flexspi.lut[25]
<link=p.FLEXSPI.LUT[25]>
#### p.FLEXSPI.LUT[31]
<lang=dft>
 (rw)  [1;33m0x402a827c[0m (0x402a8000 + 0x027c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[31]
<link=p.FLEXSPI.LUT[31]>
#### FLEXSPI.LUT[43]
<link=p.FLEXSPI.LUT[43]>
#### p.flexspi.lut[50]
<link=p.FLEXSPI.LUT[50]>
#### FLEXSPI.LUT[50]
<link=p.FLEXSPI.LUT[50]>
#### p.FLEXSPI.LUT[53]
<lang=dft>
 (rw)  [1;33m0x402a82d4[0m (0x402a8000 + 0x02d4)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[54]
<lang=dft>
 (rw)  [1;33m0x402a82d8[0m (0x402a8000 + 0x02d8)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[55]
<link=p.FLEXSPI.LUT[55]>
#### p.FLEXSPI2
<lang=dft>
base: 0x402a4000
AHBCR           AHBRXBUF0CR0    AHBRXBUF1CR0    AHBRXBUF2CR0    
AHBRXBUF3CR0    AHBSPNDSTS      DLLCRA          DLLCRB          
FLSHA1CR0       FLSHA2CR0       FLSHB1CR0       FLSHB2CR0       
FLSHCR1A1       FLSHCR1A2       FLSHCR1B1       FLSHCR1B2       
FLSHCR2A1       FLSHCR2A2       FLSHCR2B1       FLSHCR2B2       
FLSHCR4         INTEN           INTR            IPCMD           
IPCR0           IPCR1           IPRXFCR         IPRXFSTS        
IPTXFCR         IPTXFSTS        LUTCR           LUTKEY          
LUT[0]          LUT[10]         LUT[11]         LUT[12]         
LUT[13]         LUT[14]         LUT[15]         LUT[16]         
LUT[17]         LUT[18]         LUT[19]         LUT[1]          
LUT[20]         LUT[21]         LUT[22]         LUT[23]         
LUT[24]         LUT[25]         LUT[26]         LUT[27]         
LUT[28]         LUT[29]         LUT[2]          LUT[30]         
LUT[31]         LUT[32]         LUT[33]         LUT[34]         
LUT[35]         LUT[36]         LUT[37]         LUT[38]         
LUT[39]         LUT[3]          LUT[40]         LUT[41]         
LUT[42]         LUT[43]         LUT[44]         LUT[45]         
LUT[46]         LUT[47]         LUT[48]         LUT[49]         
LUT[4]          LUT[50]         LUT[51]         LUT[52]         
LUT[53]         LUT[54]         LUT[55]         LUT[56]         
LUT[57]         LUT[58]         LUT[59]         LUT[5]          
LUT[60]         LUT[61]         LUT[62]         LUT[63]         
LUT[6]          LUT[7]          LUT[8]          LUT[9]          
MCR0            MCR1            MCR2            RFDR[0]         
RFDR[10]        RFDR[11]        RFDR[12]        RFDR[13]        
RFDR[14]        RFDR[15]        RFDR[16]        RFDR[17]        
RFDR[18]        RFDR[19]        RFDR[1]         RFDR[20]        
RFDR[21]        RFDR[22]        RFDR[23]        RFDR[24]        
RFDR[25]        RFDR[26]        RFDR[27]        RFDR[28]        
RFDR[29]        RFDR[2]         RFDR[30]        RFDR[31]        
RFDR[3]         RFDR[4]         RFDR[5]         RFDR[6]         
RFDR[7]         RFDR[8]         RFDR[9]         STS0            
STS1            STS2            TFDR[0]         TFDR[10]        
TFDR[11]        TFDR[12]        TFDR[13]        TFDR[14]        
TFDR[15]        TFDR[16]        TFDR[17]        TFDR[18]        
TFDR[19]        TFDR[1]         TFDR[20]        TFDR[21]        
TFDR[22]        TFDR[23]        TFDR[24]        TFDR[25]        
TFDR[26]        TFDR[27]        TFDR[28]        TFDR[29]        
TFDR[2]         TFDR[30]        TFDR[31]        TFDR[3]         
TFDR[4]         TFDR[5]         TFDR[6]         TFDR[7]         
TFDR[8]         TFDR[9]         
输入 p.FLEXSPI2.{reg_name} 以查看寄存器的详细信息
type p.FLEXSPI2.{reg_name} to check details of registers
</lang>
#### p.FLEXSPI2.FLSHB1CR0
<lang=dft>
 (rw)  [1;33m0x402a4068[0m (0x402a4000 + 0x0068)
Flash B1 Control Register 0
 (rw) (23)  [0;32mFLSHSZ[0m  - [22:00] -  Flash Size in KByte.
</lang>
#### p.FLEXSPI2.FLSHB2CR0
<lang=dft>
 (rw)  [1;33m0x402a406c[0m (0x402a4000 + 0x006c)
Flash B2 Control Register 0
 (rw) (23)  [0;32mFLSHSZ[0m  - [22:00] -  Flash Size in KByte.
</lang>
#### FLEXSPI2.FLSHCR1A1
<link=p.FLEXSPI2.FLSHCR1A1>
#### flexspi2.flshcr1b2
<link=p.FLEXSPI2.FLSHCR1B2>
#### p.flexspi2.flshcr2a1
<link=p.FLEXSPI2.FLSHCR2A1>
#### p.FLEXSPI2.FLSHCR2B2
<lang=dft>
 (rw)  [1;33m0x402a408c[0m (0x402a4000 + 0x008c)
Flash A1 Control Register 2
 (rw) (04)  [0;32mARDSEQID[0m  - [03:00] -  Sequence Index for AHB Read triggered Command in LUT.
 (rw) (03)  [0;32mARDSEQNUM[0m  - [07:05] -  Sequence Number for AHB Read triggered Command in LUT.
 (rw) (04)  [0;32mAWRSEQID[0m  - [11:08] -  Sequence Index for AHB Write triggered Command.
 (rw) (03)  [0;32mAWRSEQNUM[0m  - [15:13] -  Sequence Number for AHB Write triggered Command.
 (rw) (12)  [0;32mAWRWAIT[0m  - [27:16] -  For certain devices (such as FPGA), it need some time to write data into intern
 al memory after the command sequences finished on FlexSPI interface
 (rw) (03)  [0;32mAWRWAITUNIT[0m  - [30:28] -  AWRWAIT unit
      0 - AWRWAITUNIT_0 :
         The AWRWAIT unit is 2 ahb clock cycle
      0x1 - AWRWAITUNIT_1 :
         The AWRWAIT unit is 8 ahb clock cycle
      0x2 - AWRWAITUNIT_2 :
         The AWRWAIT unit is 32 ahb clock cycle
      0x3 - AWRWAITUNIT_3 :
         The AWRWAIT unit is 128 ahb clock cycle
      0x4 - AWRWAITUNIT_4 :
         The AWRWAIT unit is 512 ahb clock cycle
      0x5 - AWRWAITUNIT_5 :
         The AWRWAIT unit is 2048 ahb clock cycle
      0x6 - AWRWAITUNIT_6 :
         The AWRWAIT unit is 8192 ahb clock cycle
      0x7 - AWRWAITUNIT_7 :
         The AWRWAIT unit is 32768 ahb clock cycle
 (rw) (01)  [0;32mCLRINSTRPTR[0m  - [31:31] -  Clear the instruction pointer which is internally saved pointer by JMP_ON_CS. R
 efer Programmable Sequence Engine for details.
</lang>
#### p.FLEXSPI2.FLSHCR4
<lang=dft>
 (rw)  [1;33m0x402a4094[0m (0x402a4000 + 0x0094)
Flash Control Register 4
 (rw) (01)  [0;32mWMOPT1[0m  - [00:00] -  Write mask option bit 1. This option bit could be used to remove AHB write burs
 t start address alignment limitation.
      0 - WMOPT1_0 :
         DQS pin will be used as Write Mask when writing to external device. The
         re is no limitation on AHB write burst start address alignment when fla
         sh is accessed in individual mode.
      0x1 - WMOPT1_1 :
         DQS pin will not be used as Write Mask when writing to external device.
          There is limitation on AHB write burst start address alignment when fl
         ash is accessed in individual mode.
 (rw) (01)  [0;32mWMENA[0m  - [02:02] -  Write mask enable bit for flash device on port A. When write mask function is n
 eeded for memory device on port A, this bit must be set.
      0 - WMENA_0 :
         Write mask is disabled, DQS(RWDS) pin will be un-driven when writing to
          external device.
      0x1 - WMENA_1 :
         Write mask is enabled, DQS(RWDS) pin will be driven by FlexSPI as write
          mask output when writing to external device.
 (rw) (01)  [0;32mWMENB[0m  - [03:03] -  Write mask enable bit for flash device on port B. When write mask function is n
 eeded for memory device on port B, this bit must be set.
      0 - WMENB_0 :
         Write mask is disabled, DQS(RWDS) pin will be un-driven when writing to
          external device.
      0x1 - WMENB_1 :
         Write mask is enabled, DQS(RWDS) pin will be driven by FlexSPI as write
          mask output when writing to external device.
</lang>
#### FLEXSPI2.IPCMD
<link=p.FLEXSPI2.IPCMD>
#### FLEXSPI2.DLLCRB
<link=p.FLEXSPI2.DLLCRB>
#### flexspi2.ahbspndsts
<link=p.FLEXSPI2.AHBSPNDSTS>
#### FLEXSPI2.IPRXFSTS
<link=p.FLEXSPI2.IPRXFSTS>
#### p.FLEXSPI2.RFDR[2]
<lang=dft>
 (ro)  [1;33m0x402a4108[0m (0x402a4000 + 0x0108)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI2.RFDR[7]
<lang=dft>
 (ro)  [1;33m0x402a411c[0m (0x402a4000 + 0x011c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.rfdr[7]
<link=p.FLEXSPI2.RFDR[7]>
#### FLEXSPI2.RFDR[7]
<link=p.FLEXSPI2.RFDR[7]>
#### p.FLEXSPI2.RFDR[8]
<lang=dft>
 (ro)  [1;33m0x402a4120[0m (0x402a4000 + 0x0120)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.rfdr[11]
<link=p.FLEXSPI2.RFDR[11]>
#### p.flexspi2.rfdr[23]
<link=p.FLEXSPI2.RFDR[23]>
#### FLEXSPI2.RFDR[23]
<link=p.FLEXSPI2.RFDR[23]>
#### FLEXSPI2.RFDR[26]
<link=p.FLEXSPI2.RFDR[26]>
#### flexspi2.rfdr[27]
<link=p.FLEXSPI2.RFDR[27]>
#### p.flexspi2.rfdr[28]
<link=p.FLEXSPI2.RFDR[28]>
#### flexspi2.tfdr[3]
<link=p.FLEXSPI2.TFDR[3]>
#### FLEXSPI2.TFDR[3]
<link=p.FLEXSPI2.TFDR[3]>
#### FLEXSPI2.TFDR[4]
<link=p.FLEXSPI2.TFDR[4]>
#### p.flexspi2.tfdr[8]
<link=p.FLEXSPI2.TFDR[8]>
#### FLEXSPI2.TFDR[12]
<link=p.FLEXSPI2.TFDR[12]>
#### p.FLEXSPI2.TFDR[26]
<lang=dft>
 (wo)  [1;33m0x402a41e8[0m (0x402a4000 + 0x01e8)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI2.LUT[4]
<lang=dft>
 (rw)  [1;33m0x402a4210[0m (0x402a4000 + 0x0210)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[11]
<lang=dft>
 (rw)  [1;33m0x402a422c[0m (0x402a4000 + 0x022c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi2.lut[14]
<link=p.FLEXSPI2.LUT[14]>
#### flexspi2.lut[19]
<link=p.FLEXSPI2.LUT[19]>
#### p.flexspi2.lut[21]
<link=p.FLEXSPI2.LUT[21]>
#### p.flexspi2.lut[26]
<link=p.FLEXSPI2.LUT[26]>
#### flexspi2.lut[28]
<link=p.FLEXSPI2.LUT[28]>
#### p.FLEXSPI2.LUT[29]
<lang=dft>
 (rw)  [1;33m0x402a4274[0m (0x402a4000 + 0x0274)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi2.lut[32]
<link=p.FLEXSPI2.LUT[32]>
#### FLEXSPI2.LUT[35]
<link=p.FLEXSPI2.LUT[35]>
#### flexspi2.lut[37]
<link=p.FLEXSPI2.LUT[37]>
#### p.flexspi2.lut[39]
<link=p.FLEXSPI2.LUT[39]>
#### FLEXSPI2.LUT[41]
<link=p.FLEXSPI2.LUT[41]>
#### flexspi2.lut[44]
<link=p.FLEXSPI2.LUT[44]>
#### p.FLEXSPI2.LUT[45]
<lang=dft>
 (rw)  [1;33m0x402a42b4[0m (0x402a4000 + 0x02b4)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[46]
<link=p.FLEXSPI2.LUT[46]>
#### flexspi2.lut[50]
<link=p.FLEXSPI2.LUT[50]>
#### FLEXSPI2.LUT[52]
<link=p.FLEXSPI2.LUT[52]>
#### p.flexspi2.lut[55]
<link=p.FLEXSPI2.LUT[55]>
#### FLEXSPI2.LUT[58]
<link=p.FLEXSPI2.LUT[58]>
#### PXP.CTRL
<link=p.PXP.CTRL>
#### pxp.stat_tog
<link=p.PXP.STAT_TOG>
#### p.pxp.out_ctrl
<link=p.PXP.OUT_CTRL>
#### p.PXP.OUT_AS_ULC
<lang=dft>
 (rw)  [1;33m0x402b4090[0m (0x402b4000 + 0x0090)
Alpha Surface Upper Left Coordinate
 (rw) (14)  [0;32mY[0m  - [13:00] -  This field indicates the upper left Y-coordinate (in pixels) of the alpha surfa
 ce in the output frame buffer
 (ro) (02)  [0;32mRSVD0[0m  - [15:14] -  Reserved, always set to zero.
 (rw) (14)  [0;32mX[0m  - [29:16] -  This field indicates the upper left X-coordinate (in pixels) of the alpha surfa
 ce (AS) in the output frame buffer
 (ro) (02)  [0;32mRSVD1[0m  - [31:30] -  Reserved, always set to zero.
</lang>
#### PXP.OUT_AS_ULC
<link=p.PXP.OUT_AS_ULC>
#### PXP.PS_CTRL_CLR
<link=p.PXP.PS_CTRL_CLR>
#### pxp.ps_vbuf
<link=p.PXP.PS_VBUF>
#### pxp.as_ctrl
<link=p.PXP.AS_CTRL>
#### p.PXP.AS_PITCH
<lang=dft>
 (rw)  [1;33m0x402b4170[0m (0x402b4000 + 0x0170)
Alpha Surface Pitch
 (rw) (16)  [0;32mPITCH[0m  - [15:00] -  Indicates the number of bytes in memory between two vertically adjacent pixels.
 (ro) (16)  [0;32mRSVD[0m  - [31:16] -  Reserved, always set to zero.
</lang>
#### PXP.AS_PITCH
<link=p.PXP.AS_PITCH>
#### p.PXP.NEXT
<lang=dft>
 (rw)  [1;33m0x402b4400[0m (0x402b4000 + 0x0400)
Next Frame Pointer
 (ro) (01)  [0;32mENABLED[0m  - [00:00] -  Indicates that the "next frame" functionality has been enabled
 (ro) (01)  [0;32mRSVD[0m  - [01:01] -  Reserved, always set to zero.
 (rw) (30)  [0;32mPOINTER[0m  - [31:02] -  A pointer to a data structure containing register values to be used when proces
 sing the next frame
</lang>
#### p.lcdif.ctrl_clr
<link=p.LCDIF.CTRL_CLR>
#### LCDIF.CTRL_TOG
<link=p.LCDIF.CTRL_TOG>
#### lcdif.transfer_count
<link=p.LCDIF.TRANSFER_COUNT>
#### LCDIF.CRC_STAT
<link=p.LCDIF.CRC_STAT>
#### p.lcdif.pigeonctrl1
<link=p.LCDIF.PIGEONCTRL1>
#### p.LCDIF.PIGEONCTRL2_SET
<lang=dft>
 (rw)  [1;33m0x402b83a4[0m (0x402b8000 + 0x03a4)
LCDIF Pigeon Mode Control2 Register
 (rw) (01)  [0;32mPIGEON_DATA_EN[0m  - [00:00] -  Pigeon mode data enable
 (rw) (01)  [0;32mPIGEON_CLK_GATE[0m  - [01:01] -  Pigeon mode dot clock gate enable
</lang>
#### p.LCDIF.PIGEON_1_1
<lang=dft>
 (rw)  [1;33m0x402b8850[0m (0x402b8000 + 0x0850)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### LCDIF.PIGEON_4_1
<link=p.LCDIF.PIGEON_4_1>
#### lcdif.pigeon_4_2
<link=p.LCDIF.PIGEON_4_2>
#### lcdif.pigeon_6_1
<link=p.LCDIF.PIGEON_6_1>
#### lcdif.pigeon_9_1
<link=p.LCDIF.PIGEON_9_1>
#### p.lcdif.pigeon_10_1
<link=p.LCDIF.PIGEON_10_1>
#### lcdif.pigeon_11_2
<link=p.LCDIF.PIGEON_11_2>
#### lcdif.lut0_addr
<link=p.LCDIF.LUT0_ADDR>
#### p.lcdif.lut1_data
<link=p.LCDIF.LUT1_DATA>
#### csi.csidmasa_fb1
<link=p.CSI.CSIDMASA_FB1>
#### p.CSI.CSICR18
<lang=dft>
 (rw)  [1;33m0x402bc048[0m (0x402bc000 + 0x0048)
CSI Control Register 18
 (rw) (01)  [0;32mDEINTERLACE_EN[0m  - [02:02] -  This bit is used to select the output method When input is standard CCIR656 vid
 eo.
      0 - DEINTERLACE_EN_0 :
         Deinterlace disabled
      0x1 - DEINTERLACE_EN_1 :
         Deinterlace enabled
 (rw) (01)  [0;32mPARALLEL24_EN[0m  - [03:03] -  When input is parallel rgb888/yuv444 24bit, this bit can be enabled.
 (rw) (01)  [0;32mBASEADDR_SWITCH_EN[0m  - [04:04] -  When this bit is enabled, CSI DMA will switch the base address according to BAS
 EADDR_SWITCH_SEL rather than atomically by DMA completed
 (rw) (01)  [0;32mBASEADDR_SWITCH_SEL[0m  - [05:05] -  CSI 2 base addresses switching method. When using this bit, BASEADDR_SWITCH_EN 
 is 1.
      0 - BASEADDR_SWITCH_SEL_0 :
         Switching base address at the edge of the vsync
      0x1 - BASEADDR_SWITCH_SEL_1 :
         Switching base address at the edge of the first data of each frame
 (rw) (01)  [0;32mFIELD0_DONE_IE[0m  - [06:06] -  In interlace mode, fileld 0 means interrupt enabled.
      0 - FIELD0_DONE_IE_0 :
         Interrupt disabled
      0x1 - FIELD0_DONE_IE_1 :
         Interrupt enabled
 (rw) (01)  [0;32mDMA_FIELD1_DONE_IE[0m  - [07:07] -  When in interlace mode, field 1 done interrupt enable.
      0 - DMA_FIELD1_DONE_IE_0 :
         Interrupt disabled
      0x1 - DMA_FIELD1_DONE_IE_1 :
         Interrupt enabled
 (rw) (01)  [0;32mLAST_DMA_REQ_SEL[0m  - [08:08] -  Choosing the last DMA request condition.
      0 - LAST_DMA_REQ_SEL_0 :
         fifo_full_level
      0x1 - LAST_DMA_REQ_SEL_1 :
         hburst_length
 (rw) (01)  [0;32mBASEADDR_CHANGE_ERROR_IE[0m  - [09:09] -  Base address change error interrupt enable signal.
 (rw) (01)  [0;32mRGB888A_FORMAT_SEL[0m  - [10:10] -  Output is 32-bit format.
      0 - RGB888A_FORMAT_SEL_0 :
         {8'h0, data[23:0]}
      0x1 - RGB888A_FORMAT_SEL_1 :
         {data[23:0], 8'h0}
 (rw) (04)  [0;32mAHB_HPROT[0m  - [15:12] -  Hprot value in AHB bus protocol.
 (rw) (02)  [0;32mMASK_OPTION[0m  - [19:18] -  These bits used to choose the method to mask the CSI input.
      0 - MASK_OPTION_0 :
         Writing to memory from first completely frame, when using this option, 
         the CSI_ENABLE should be 1.
      0x1 - MASK_OPTION_1 :
         Writing to memory when CSI_ENABLE is 1.
      0x2 - MASK_OPTION_2 :
         Writing to memory from second completely frame, when using this option,
          the CSI_ENABLE should be 1.
      0x3 - MASK_OPTION_3 :
         Writing to memory when data comes in, not matter the CSI_ENABLE is 1 or
          0.
 (rw) (01)  [0;32mCSI_ENABLE[0m  - [31:31] -  CSI global enable signal
</lang>
#### csi.csicr19
<link=p.CSI.CSICR19>
#### p.usdhc1.blk_att
<link=p.USDHC1.BLK_ATT>
#### USDHC1.CMD_RSP0
<link=p.USDHC1.CMD_RSP0>
#### p.USDHC1.CMD_RSP1
<lang=dft>
 (ro)  [1;33m0x402c0014[0m (0x402c0000 + 0x0014)
Command Response1
 (ro) (32)  [0;32mCMDRSP1[0m  - [31:00] -  Command Response 1
</lang>
#### p.USDHC1.DATA_BUFF_ACC_PORT
<lang=dft>
 (rw)  [1;33m0x402c0020[0m (0x402c0000 + 0x0020)
Data Buffer Access Port
 (rw) (32)  [0;32mDATCONT[0m  - [31:00] -  Data Content
</lang>
#### p.USDHC1.PRES_STATE
<lang=dft>
 (ro)  [1;33m0x402c0024[0m (0x402c0000 + 0x0024)
Present State
 (ro) (01)  [0;32mCIHB[0m  - [00:00] -  Command Inhibit (CMD)
      0 - CIHB_0 :
         Can issue command using only CMD line
      0x1 - CIHB_1 :
         Cannot issue command
 (ro) (01)  [0;32mCDIHB[0m  - [01:01] -  Command Inhibit (DATA)
      0 - CDIHB_0 :
         Can issue command which uses the DATA line
      0x1 - CDIHB_1 :
         Cannot issue command which uses the DATA line
 (ro) (01)  [0;32mDLA[0m  - [02:02] -  Data Line Active
      0 - DLA_0 :
         DATA Line Inactive
      0x1 - DLA_1 :
         DATA Line Active
 (ro) (01)  [0;32mSDSTB[0m  - [03:03] -  SD Clock Stable
      0 - SDSTB_0 :
         Clock is changing frequency and not stable.
      0x1 - SDSTB_1 :
         Clock is stable.
 (ro) (01)  [0;32mIPGOFF[0m  - [04:04] -  IPG_CLK Gated Off Internally
      0 - IPGOFF_0 :
         IPG_CLK is active.
      0x1 - IPGOFF_1 :
         IPG_CLK is gated off.
 (ro) (01)  [0;32mHCKOFF[0m  - [05:05] -  HCLK Gated Off Internally
      0 - HCKOFF_0 :
         HCLK is active.
      0x1 - HCKOFF_1 :
         HCLK is gated off.
 (ro) (01)  [0;32mPEROFF[0m  - [06:06] -  IPG_PERCLK Gated Off Internally
      0 - PEROFF_0 :
         IPG_PERCLK is active.
      0x1 - PEROFF_1 :
         IPG_PERCLK is gated off.
 (ro) (01)  [0;32mSDOFF[0m  - [07:07] -  SD Clock Gated Off Internally
      0 - SDOFF_0 :
         SD Clock is active.
      0x1 - SDOFF_1 :
         SD Clock is gated off.
 (ro) (01)  [0;32mWTA[0m  - [08:08] -  Write Transfer Active
      0 - WTA_0 :
         No valid data
      0x1 - WTA_1 :
         Transferring data
 (ro) (01)  [0;32mRTA[0m  - [09:09] -  Read Transfer Active
      0 - RTA_0 :
         No valid data
      0x1 - RTA_1 :
         Transferring data
 (ro) (01)  [0;32mBWEN[0m  - [10:10] -  Buffer Write Enable
      0 - BWEN_0 :
         Write disable
      0x1 - BWEN_1 :
         Write enable
 (ro) (01)  [0;32mBREN[0m  - [11:11] -  Buffer Read Enable
      0 - BREN_0 :
         Read disable
      0x1 - BREN_1 :
         Read enable
 (ro) (01)  [0;32mRTR[0m  - [12:12] -  Re-Tuning Request (only for SD3.0 SDR104 mode and EMMC HS200 mode)
      0 - RTR_0 :
         Fixed or well tuned sampling clock
      0x1 - RTR_1 :
         Sampling clock needs re-tuning
 (ro) (01)  [0;32mTSCD[0m  - [15:15] -  Tape Select Change Done
      0 - TSCD_0 :
         Delay cell select change is not finished.
      0x1 - TSCD_1 :
         Delay cell select change is finished.
 (ro) (01)  [0;32mCINST[0m  - [16:16] -  Card Inserted
      0 - CINST_0 :
         Power on Reset or No Card
      0x1 - CINST_1 :
         Card Inserted
 (ro) (01)  [0;32mCDPL[0m  - [18:18] -  Card Detect Pin Level
      0 - CDPL_0 :
         No card present (CD_B = 1)
      0x1 - CDPL_1 :
         Card present (CD_B = 0)
 (ro) (01)  [0;32mWPSPL[0m  - [19:19] -  Write Protect Switch Pin Level
      0 - WPSPL_0 :
         Write protected (WP = 1)
      0x1 - WPSPL_1 :
         Write enabled (WP = 0)
 (ro) (01)  [0;32mCLSL[0m  - [23:23] -  CMD Line Signal Level
 (ro) (08)  [0;32mDLSL[0m  - [31:24] -  DATA[7:0] Line Signal Level
      0 - DATA0 :
         Data 0 line signal level
      0x1 - DATA1 :
         Data 1 line signal level
      0x2 - DATA2 :
         Data 2 line signal level
      0x3 - DATA3 :
         Data 3 line signal level
      0x4 - DATA4 :
         Data 4 line signal level
      0x5 - DATA5 :
         Data 5 line signal level
      0x6 - DATA6 :
         Data 6 line signal level
      0x7 - DATA7 :
         Data 7 line signal level
</lang>
#### USDHC1.TUNING_CTRL
<link=p.USDHC1.TUNING_CTRL>
#### p.USDHC2.CMD_XFR_TYP
<lang=dft>
 (rw)  [1;33m0x402c400c[0m (0x402c4000 + 0x000c)
Command Transfer Type
 (rw) (02)  [0;32mRSPTYP[0m  - [17:16] -  Response Type Select
      0 - RSPTYP_0 :
         No Response
      0x1 - RSPTYP_1 :
         Response Length 136
      0x2 - RSPTYP_2 :
         Response Length 48
      0x3 - RSPTYP_3 :
         Response Length 48, check Busy after response
 (rw) (01)  [0;32mCCCEN[0m  - [19:19] -  Command CRC Check Enable
      0 - CCCEN_0 :
         Disable
      0x1 - CCCEN_1 :
         Enable
 (rw) (01)  [0;32mCICEN[0m  - [20:20] -  Command Index Check Enable
      0 - CICEN_0 :
         Disable
      0x1 - CICEN_1 :
         Enable
 (rw) (01)  [0;32mDPSEL[0m  - [21:21] -  Data Present Select
      0 - DPSEL_0 :
         No Data Present
      0x1 - DPSEL_1 :
         Data Present
 (rw) (02)  [0;32mCMDTYP[0m  - [23:22] -  Command Type
      0 - CMDTYP_0 :
         Normal Other commands
      0x1 - CMDTYP_1 :
         Suspend CMD52 for writing Bus Suspend in CCCR
      0x2 - CMDTYP_2 :
         Resume CMD52 for writing Function Select in CCCR
      0x3 - CMDTYP_3 :
         Abort CMD12, CMD52 for writing I/O Abort in CCCR
 (rw) (06)  [0;32mCMDINX[0m  - [29:24] -  Command Index
</lang>
#### USDHC2.CMD_RSP1
<link=p.USDHC2.CMD_RSP1>
#### usdhc2.cmd_rsp2
<link=p.USDHC2.CMD_RSP2>
#### usdhc2.int_status_en
<link=p.USDHC2.INT_STATUS_EN>
#### USDHC2.MIX_CTRL
<link=p.USDHC2.MIX_CTRL>
#### USDHC2.DLL_STATUS
<link=p.USDHC2.DLL_STATUS>
#### ENET.TDAR
<link=p.ENET.TDAR>
#### ENET.MIBC
<link=p.ENET.MIBC>
#### p.enet.rcr
<link=p.ENET.RCR>
#### ENET.RCR
<link=p.ENET.RCR>
#### p.ENET.PALR
<lang=dft>
 (rw)  [1;33m0x402d80e4[0m (0x402d8000 + 0x00e4)
Physical Address Lower Register
 (rw) (32)  [0;32mPADDR1[0m  - [31:00] -  Pause Address
</lang>
#### enet.paur
<link=p.ENET.PAUR>
#### p.ENET.IALR
<lang=dft>
 (rw)  [1;33m0x402d811c[0m (0x402d8000 + 0x011c)
Descriptor Individual Lower Address Register
 (rw) (32)  [0;32mIADDR2[0m  - [31:00] -  Contains the lower 32 bits of the 64-bit hash table used in the address recogni
 tion process for receive frames with a unicast address
</lang>
#### p.enet.ialr
<link=p.ENET.IALR>
#### enet.ialr
<link=p.ENET.IALR>
#### p.ENET.RSEM
<lang=dft>
 (rw)  [1;33m0x402d8194[0m (0x402d8000 + 0x0194)
Receive FIFO Section Empty Threshold
 (rw) (08)  [0;32mRX_SECTION_EMPTY[0m  - [07:00] -  Value Of The Receive FIFO Section Empty Threshold
 (rw) (05)  [0;32mSTAT_SECTION_EMPTY[0m  - [20:16] -  RX Status FIFO Section Empty Threshold
</lang>
#### p.enet.raem
<link=p.ENET.RAEM>
#### ENET.RAEM
<link=p.ENET.RAEM>
#### p.ENET.TSEM
<lang=dft>
 (rw)  [1;33m0x402d81a0[0m (0x402d8000 + 0x01a0)
Transmit FIFO Section Empty Threshold
 (rw) (08)  [0;32mTX_SECTION_EMPTY[0m  - [07:00] -  Value Of The Transmit FIFO Section Empty Threshold
</lang>
#### enet.tacc
<link=p.ENET.TACC>
#### enet.rmon_t_mc_pkt
<link=p.ENET.RMON_T_MC_PKT>
#### ENET.IEEE_T_MACERR
<link=p.ENET.IEEE_T_MACERR>
#### p.enet.rmon_r_packets
<link=p.ENET.RMON_R_PACKETS>
#### p.ENET.RMON_R_UNDERSIZE
<lang=dft>
 (ro)  [1;33m0x402d8294[0m (0x402d8000 + 0x0294)
Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive packets with less than 64 bytes and good CRC
</lang>
#### enet.rmon_r_p64
<link=p.ENET.RMON_R_P64>
#### ENET.RMON_R_P64
<link=p.ENET.RMON_R_P64>
#### ENET.RMON_R_P256TO511
<link=p.ENET.RMON_R_P256TO511>
#### p.ENET.RMON_R_P1024TO2047
<lang=dft>
 (ro)  [1;33m0x402d82bc[0m (0x402d8000 + 0x02bc)
Rx 1024- to 2047-Byte Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of 1024- to 2047-byte recieve packets
</lang>
#### ENET.RMON_R_P1024TO2047
<link=p.ENET.RMON_R_P1024TO2047>
#### enet.rmon_r_p_gte2048
<link=p.ENET.RMON_R_P_GTE2048>
#### ENET.IEEE_R_FRAME_OK
<link=p.ENET.IEEE_R_FRAME_OK>
#### ENET.IEEE_R_CRC
<link=p.ENET.IEEE_R_CRC>
#### p.ENET.ATVR
<lang=dft>
 (rw)  [1;33m0x402d8404[0m (0x402d8000 + 0x0404)
Timer Value Register
 (rw) (32)  [0;32mATIME[0m  - [31:00] -  A write sets the timer
</lang>
#### p.enet.tgsr
<link=p.ENET.TGSR>
#### enet.tgsr
<link=p.ENET.TGSR>
#### p.ENET.TCSR1
<lang=dft>
 (rw)  [1;33m0x402d8610[0m (0x402d8000 + 0x0610)
Timer Control Status Register
 (rw) (01)  [0;32mTDRE[0m  - [00:00] -  Timer DMA Request Enable
      0 - TDRE_0 :
         DMA request is disabled
      0x1 - TDRE_1 :
         DMA request is enabled
 (rw) (04)  [0;32mTMODE[0m  - [05:02] -  Timer Mode
      0 - TMODE_0 :
         Timer Channel is disabled.
      0x1 - TMODE_1 :
         Timer Channel is configured for Input Capture on rising edge.
      0x2 - TMODE_2 :
         Timer Channel is configured for Input Capture on falling edge.
      0x3 - TMODE_3 :
         Timer Channel is configured for Input Capture on both edges.
      0x4 - TMODE_4 :
         Timer Channel is configured for Output Compare - software only.
      0x5 - TMODE_5 :
         Timer Channel is configured for Output Compare - toggle output on compa
         re.
      0x6 - TMODE_6 :
         Timer Channel is configured for Output Compare - clear output on compar
         e.
      0x7 - TMODE_7 :
         Timer Channel is configured for Output Compare - set output on compare.
      #10x1 - TMODE_9 :
         Timer Channel is configured for Output Compare - set output on compare,
          clear output on overflow.
      0xA - TMODE_10 :
         Timer Channel is configured for Output Compare - clear output on compar
         e, set output on overflow.
      0xE - TMODE_14 :
         Timer Channel is configured for Output Compare - pulse output low on co
         mpare for 1 to 32 1588-clock cycles as specified by TPWC.
      0xF - TMODE_15 :
         Timer Channel is configured for Output Compare - pulse output high on c
         ompare for 1 to 32 1588-clock cycles as specified by TPWC.
 (rw) (01)  [0;32mTIE[0m  - [06:06] -  Timer Interrupt Enable
      0 - TIE_0 :
         Interrupt is disabled
      0x1 - TIE_1 :
         Interrupt is enabled
 (rw) (01)  [0;32mTF[0m  - [07:07] -  Timer Flag
      0 - TF_0 :
         Input Capture or Output Compare has not occurred.
      0x1 - TF_1 :
         Input Capture or Output Compare has occurred.
 (rw) (05)  [0;32mTPWC[0m  - [15:11] -  Timer PulseWidth Control
      0 - TPWC_0 :
         Pulse width is one 1588-clock cycle.
      0x1 - TPWC_1 :
         Pulse width is two 1588-clock cycles.
      0x2 - TPWC_2 :
         Pulse width is three 1588-clock cycles.
      0x3 - TPWC_3 :
         Pulse width is four 1588-clock cycles.
      0x1F - TPWC_31 :
         Pulse width is 32 1588-clock cycles.
</lang>
#### p.enet.tccr1
<link=p.ENET.TCCR1>
#### enet.tccr1
<link=p.ENET.TCCR1>
#### ENET2.EIMR
<link=p.ENET2.EIMR>
#### p.enet2.iaur
<link=p.ENET2.IAUR>
#### enet2.tfwr
<link=p.ENET2.TFWR>
#### ENET2.RSFL
<link=p.ENET2.RSFL>
#### p.ENET2.RAEM
<lang=dft>
 (rw)  [1;33m0x402d4198[0m (0x402d4000 + 0x0198)
Receive FIFO Almost Empty Threshold
 (rw) (08)  [0;32mRX_ALMOST_EMPTY[0m  - [07:00] -  Value Of The Receive FIFO Almost Empty Threshold
</lang>
#### enet2.rafl
<link=p.ENET2.RAFL>
#### p.enet2.racc
<link=p.ENET2.RACC>
#### enet2.racc
<link=p.ENET2.RACC>
#### p.enet2.rmon_t_p64
<link=p.ENET2.RMON_T_P64>
#### p.enet2.rmon_t_p512to1023
<link=p.ENET2.RMON_T_P512TO1023>
#### p.ENET2.RMON_T_P_GTE2048
<lang=dft>
 (ro)  [1;33m0x402d4240[0m (0x402d4000 + 0x0240)
Tx Packets Greater Than 2048 Bytes Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of transmit packets greater than 2048 bytes
</lang>
#### ENET2.IEEE_T_DEF
<link=p.ENET2.IEEE_T_DEF>
#### enet2.ieee_t_lcol
<link=p.ENET2.IEEE_T_LCOL>
#### enet2.ieee_t_octets_ok
<link=p.ENET2.IEEE_T_OCTETS_OK>
#### enet2.rmon_r_packets
<link=p.ENET2.RMON_R_PACKETS>
#### ENET2.RMON_R_OVERSIZE
<link=p.ENET2.RMON_R_OVERSIZE>
#### ENET2.RMON_R_RESVD_0
<link=p.ENET2.RMON_R_RESVD_0>
#### enet2.rmon_r_p65to127
<link=p.ENET2.RMON_R_P65TO127>
#### p.ENET2.RMON_R_P512TO1023
<lang=dft>
 (ro)  [1;33m0x402d42b8[0m (0x402d4000 + 0x02b8)
Rx 512- to 1023-Byte Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of 512- to 1023-byte recieve packets
</lang>
#### p.ENET2.RMON_R_P1024TO2047
<lang=dft>
 (ro)  [1;33m0x402d42bc[0m (0x402d4000 + 0x02bc)
Rx 1024- to 2047-Byte Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of 1024- to 2047-byte recieve packets
</lang>
#### enet2.atcr
<link=p.ENET2.ATCR>
#### p.ENET2.ATPER
<lang=dft>
 (rw)  [1;33m0x402d440c[0m (0x402d4000 + 0x040c)
Timer Period Register
 (rw) (32)  [0;32mPERIOD[0m  - [31:00] -  Value for generating periodic events
</lang>
#### ENET2.ATINC
<link=p.ENET2.ATINC>
#### enet2.tcsr1
<link=p.ENET2.TCSR1>
#### p.ENET2.TCSR2
<lang=dft>
 (rw)  [1;33m0x402d4618[0m (0x402d4000 + 0x0618)
Timer Control Status Register
 (rw) (01)  [0;32mTDRE[0m  - [00:00] -  Timer DMA Request Enable
      0 - TDRE_0 :
         DMA request is disabled
      0x1 - TDRE_1 :
         DMA request is enabled
 (rw) (04)  [0;32mTMODE[0m  - [05:02] -  Timer Mode
      0 - TMODE_0 :
         Timer Channel is disabled.
      0x1 - TMODE_1 :
         Timer Channel is configured for Input Capture on rising edge.
      0x2 - TMODE_2 :
         Timer Channel is configured for Input Capture on falling edge.
      0x3 - TMODE_3 :
         Timer Channel is configured for Input Capture on both edges.
      0x4 - TMODE_4 :
         Timer Channel is configured for Output Compare - software only.
      0x5 - TMODE_5 :
         Timer Channel is configured for Output Compare - toggle output on compa
         re.
      0x6 - TMODE_6 :
         Timer Channel is configured for Output Compare - clear output on compar
         e.
      0x7 - TMODE_7 :
         Timer Channel is configured for Output Compare - set output on compare.
      #10x1 - TMODE_9 :
         Timer Channel is configured for Output Compare - set output on compare,
          clear output on overflow.
      0xA - TMODE_10 :
         Timer Channel is configured for Output Compare - clear output on compar
         e, set output on overflow.
      0xE - TMODE_14 :
         Timer Channel is configured for Output Compare - pulse output low on co
         mpare for 1 to 32 1588-clock cycles as specified by TPWC.
      0xF - TMODE_15 :
         Timer Channel is configured for Output Compare - pulse output high on c
         ompare for 1 to 32 1588-clock cycles as specified by TPWC.
 (rw) (01)  [0;32mTIE[0m  - [06:06] -  Timer Interrupt Enable
      0 - TIE_0 :
         Interrupt is disabled
      0x1 - TIE_1 :
         Interrupt is enabled
 (rw) (01)  [0;32mTF[0m  - [07:07] -  Timer Flag
      0 - TF_0 :
         Input Capture or Output Compare has not occurred.
      0x1 - TF_1 :
         Input Capture or Output Compare has occurred.
 (rw) (05)  [0;32mTPWC[0m  - [15:11] -  Timer PulseWidth Control
      0 - TPWC_0 :
         Pulse width is one 1588-clock cycle.
      0x1 - TPWC_1 :
         Pulse width is two 1588-clock cycles.
      0x2 - TPWC_2 :
         Pulse width is three 1588-clock cycles.
      0x3 - TPWC_3 :
         Pulse width is four 1588-clock cycles.
      0x1F - TPWC_31 :
         Pulse width is 32 1588-clock cycles.
</lang>
#### ENET2.TCCR0
<link=p.ENET2.TCCR0>
#### p.enet2.tccr3
<link=p.ENET2.TCCR3>
#### USB1.ID
<link=p.USB1.ID>
#### USB1.GPTIMER1LD
<link=p.USB1.GPTIMER1LD>
#### usb1.gptimer1ctrl
<link=p.USB1.GPTIMER1CTRL>
#### p.usb1.usbintr
<link=p.USB1.USBINTR>
#### p.usb1.deviceaddr
<link=p.USB1.DEVICEADDR>
#### USB1.DEVICEADDR
<link=p.USB1.DEVICEADDR>
#### p.USB1.ENDPTLISTADDR
<lang=dft>
 (rw)  [1;33m0x402e0158[0m (0x402e0000 + 0x0158)
Endpoint List Address
 (rw) (21)  [0;32mEPBASE[0m  - [31:11] -  Endpoint List Pointer(Low)
</lang>
#### usb1.burstsize
<link=p.USB1.BURSTSIZE>
#### p.USB1.PORTSC1
<lang=dft>
 (rw)  [1;33m0x402e0184[0m (0x402e0000 + 0x0184)
Port Status & Control
 (ro) (01)  [0;32mCCS[0m  - [00:00] -  Current Connect Status-Read Only
 (rw) (01)  [0;32mCSC[0m  - [01:01] -  Connect Status Change-R/WC
 (rw) (01)  [0;32mPE[0m  - [02:02] -  Port Enabled/Disabled-Read/Write
 (rw) (01)  [0;32mPEC[0m  - [03:03] -  Port Enable/Disable Change-R/WC
 (ro) (01)  [0;32mOCA[0m  - [04:04] -  Over-current Active-Read Only
      0 - OCA_0 :
         This port does not have an over-current condition.
      0x1 - OCA_1 :
         This port currently has an over-current condition
 (rw) (01)  [0;32mOCC[0m  - [05:05] -  Over-current Change-R/WC
 (rw) (01)  [0;32mFPR[0m  - [06:06] -  Force Port Resume -Read/Write
 (rw) (01)  [0;32mSUSP[0m  - [07:07] -  Suspend - Read/Write or Read Only
 (rw) (01)  [0;32mPR[0m  - [08:08] -  Port Reset - Read/Write or Read Only
 (ro) (01)  [0;32mHSP[0m  - [09:09] -  High-Speed Port - Read Only
 (rw) (02)  [0;32mLS[0m  - [11:10] -  Line Status-Read Only
      0 - LS_0 :
         SE0
      0x1 - LS_1 :
         K-state
      0x2 - LS_2 :
         J-state
      0x3 - LS_3 :
         Undefined
 (rw) (01)  [0;32mPP[0m  - [12:12] -  Port Power (PP)-Read/Write or Read Only
 (rw) (01)  [0;32mPO[0m  - [13:13] -  Port Owner-Read/Write
 (rw) (02)  [0;32mPIC[0m  - [15:14] -  Port Indicator Control - Read/Write
      0 - PIC_0 :
         Port indicators are off
      0x1 - PIC_1 :
         Amber
      0x2 - PIC_2 :
         Green
      0x3 - PIC_3 :
         Undefined
 (rw) (04)  [0;32mPTC[0m  - [19:16] -  Port Test Control - Read/Write
      0 - PTC_0 :
         TEST_MODE_DISABLE
      0x1 - PTC_1 :
         J_STATE
      0x2 - PTC_2 :
         K_STATE
      0x3 - PTC_3 :
         SE0 (host) / NAK (device)
      0x4 - PTC_4 :
         Packet
      0x5 - PTC_5 :
         FORCE_ENABLE_HS
      0x6 - PTC_6 :
         FORCE_ENABLE_FS
      0x7 - PTC_7 :
         FORCE_ENABLE_LS
 (rw) (01)  [0;32mWKCN[0m  - [20:20] -  Wake on Connect Enable (WKCNNT_E) - Read/Write
 (rw) (01)  [0;32mWKDC[0m  - [21:21] -  Wake on Disconnect Enable (WKDSCNNT_E) - Read/Write
 (rw) (01)  [0;32mWKOC[0m  - [22:22] -  Wake on Over-current Enable (WKOC_E) - Read/Write
 (rw) (01)  [0;32mPHCD[0m  - [23:23] -  PHY Low Power Suspend - Clock Disable (PLPSCD) - Read/Write
      0 - PHCD_0 :
         Enable PHY clock
      0x1 - PHCD_1 :
         Disable PHY clock
 (rw) (01)  [0;32mPFSC[0m  - [24:24] -  Port Force Full Speed Connect - Read/Write
      0 - PFSC_0 :
         Normal operation
      0x1 - PFSC_1 :
         Forced to full speed
 (rw) (01)  [0;32mPTS_2[0m  - [25:25] -  See description at bits 31-30
 (rw) (02)  [0;32mPSPD[0m  - [27:26] -  Port Speed - Read Only. This register field indicates the speed at which the po
 rt is operating.
      0 - PSPD_0 :
         Full Speed
      0x1 - PSPD_1 :
         Low Speed
      0x2 - PSPD_2 :
         High Speed
      0x3 - PSPD_3 :
         Undefined
 (rw) (01)  [0;32mPTW[0m  - [28:28] -  Parallel Transceiver Width This bit has no effect if serial interface engine is
  used
      0 - PTW_0 :
         Select the 8-bit UTMI interface [60MHz]
      0x1 - PTW_1 :
         Select the 16-bit UTMI interface [30MHz]
 (rw) (01)  [0;32mSTS[0m  - [29:29] -  Serial Transceiver Select 1 Serial Interface Engine is selected 0 Parallel Inte
 rface signals is selected Serial Interface Engine can be used in combination wi
 th UTMI+/ULPI physical interface to provide FS/LS signaling instead of the para
 llel interface signals
 (rw) (02)  [0;32mPTS_1[0m  - [31:30] -  All USB port interface modes are listed in this field description, but not all 
 are supported
</lang>
#### p.usb1.otgsc
<link=p.USB1.OTGSC>
#### USB1.OTGSC
<link=p.USB1.OTGSC>
#### usb1.endptflush
<link=p.USB1.ENDPTFLUSH>
#### p.usb1.endptctrl1
<link=p.USB1.ENDPTCTRL1>
#### p.USB1.ENDPTCTRL2
<lang=dft>
 (rw)  [1;33m0x402e01c8[0m (0x402e0000 + 0x01c8)
Endpoint Control 2
 (rw) (01)  [0;32mRXS[0m  - [00:00] -  RX Endpoint Stall - Read/Write 0 End Point OK
 (rw) (01)  [0;32mRXD[0m  - [01:01] -  RX Endpoint Data Sink - Read/Write 0 Dual Port Memory Buffer/DMA Engine [Defaul
 t] Should always be written as zero
 (rw) (02)  [0;32mRXT[0m  - [03:02] -  RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 (rw) (01)  [0;32mRXI[0m  - [05:05] -  RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for
  test and should always be written as zero
 (rw) (01)  [0;32mRXR[0m  - [06:06] -  RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration
  event is received for this Endpoint, software must write a one to this bit in 
 order to synchronize the data PID's between the host and device
 (rw) (01)  [0;32mRXE[0m  - [07:07] -  RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled
  only after it has been configured
 (rw) (01)  [0;32mTXS[0m  - [16:16] -  TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit will
  be cleared automatically upon receipt of a SETUP request if this Endpoint is c
 onfigured as a Control Endpoint and this bit will continue to be cleared by har
 dware until the associated ENDPTSETUPSTAT bit is cleared
 (rw) (01)  [0;32mTXD[0m  - [17:17] -  TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFA
 ULT] Should always be written as 0
 (rw) (02)  [0;32mTXT[0m  - [19:18] -  TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 (rw) (01)  [0;32mTXI[0m  - [21:21] -  TX Data Toggle Inhibit 0 PID Sequencing Enabled
 (rw) (01)  [0;32mTXR[0m  - [22:22] -  TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration
  event is received for this Endpoint, software must write a one to this bit in 
 order to synchronize the data PID's between the Host and device
 (rw) (01)  [0;32mTXE[0m  - [23:23] -  TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled
  only after it has been configured
</lang>
#### usb1.endptctrl6
<link=p.USB1.ENDPTCTRL6>
#### p.usb2.hwgeneral
<link=p.USB2.HWGENERAL>
#### USB2.HWGENERAL
<link=p.USB2.HWGENERAL>
#### p.USB2.HWDEVICE
<lang=dft>
 (ro)  [1;33m0x402e020c[0m (0x402e0200 + 0x000c)
Device Hardware Parameters
 (ro) (01)  [0;32mDC[0m  - [00:00] -  Device Capable. Indicating whether device operation mode is supported or not.
      0 - DC_0 :
         Not supported
      0x1 - DC_1 :
         Supported
 (ro) (05)  [0;32mDEVEP[0m  - [05:01] -  Device Endpoint Number
</lang>
#### USB2.HWDEVICE
<link=p.USB2.HWDEVICE>
#### USB2.GPTIMER0LD
<link=p.USB2.GPTIMER0LD>
#### USB2.GPTIMER1LD
<link=p.USB2.GPTIMER1LD>
#### p.USB2.CAPLENGTH
<lang=dft>
 (ro)  [1;33m0x402e0300[0m (0x402e0200 + 0x0100)
Capability Registers Length
 (ro) (08)  [0;32mCAPLENGTH[0m  - [07:00] -  These bits are used as an offset to add to register base to find the beginning 
 of the Operational Register
</lang>
#### USB2.HCIVERSION
<link=p.USB2.HCIVERSION>
#### p.usb2.usbcmd
<link=p.USB2.USBCMD>
#### p.usb2.usbsts
<link=p.USB2.USBSTS>
#### p.USB2.USBMODE
<lang=dft>
 (rw)  [1;33m0x402e03a8[0m (0x402e0200 + 0x01a8)
USB Device Mode
 (rw) (02)  [0;32mCM[0m  - [01:00] -  Controller Mode - R/WO
      0 - CM_0 :
         Idle [Default for combination host/device]
      0x2 - CM_2 :
         Device Controller [Default for device only controller]
      0x3 - CM_3 :
         Host Controller [Default for host only controller]
 (rw) (01)  [0;32mES[0m  - [02:02] -  Endian Select - Read/Write
      0 - ES_0 :
         Little Endian [Default]
      0x1 - ES_1 :
         Big Endian
 (rw) (01)  [0;32mSLOM[0m  - [03:03] -  Setup Lockout Mode
      0 - SLOM_0 :
         Setup Lockouts On (default);
      0x1 - SLOM_1 :
         Setup Lockouts Off (DCD requires use of Setup Data Buffer Tripwire in U
         SBCMDUSB Command Register .
 (rw) (01)  [0;32mSDIS[0m  - [04:04] -  Stream Disable Mode
</lang>
#### p.usb2.usbmode
<link=p.USB2.USBMODE>
#### p.USB2.ENDPTSTAT
<lang=dft>
 (ro)  [1;33m0x402e03b8[0m (0x402e0200 + 0x01b8)
Endpoint Status
 (ro) (08)  [0;32mERBR[0m  - [07:00] -  Endpoint Receive Buffer Ready -- Read Only
 (ro) (08)  [0;32mETBR[0m  - [23:16] -  Endpoint Transmit Buffer Ready -- Read Only
</lang>
#### usb2.endptstat
<link=p.USB2.ENDPTSTAT>
#### USB2.ENDPTSTAT
<link=p.USB2.ENDPTSTAT>
#### p.usb2.endptcomplete
<link=p.USB2.ENDPTCOMPLETE>
#### usb2.endptctrl2
<link=p.USB2.ENDPTCTRL2>
#### p.USB2.ENDPTCTRL5
<lang=dft>
 (rw)  [1;33m0x402e03d4[0m (0x402e0200 + 0x01d4)
Endpoint Control 5
 (rw) (01)  [0;32mRXS[0m  - [00:00] -  RX Endpoint Stall - Read/Write 0 End Point OK
 (rw) (01)  [0;32mRXD[0m  - [01:01] -  RX Endpoint Data Sink - Read/Write 0 Dual Port Memory Buffer/DMA Engine [Defaul
 t] Should always be written as zero
 (rw) (02)  [0;32mRXT[0m  - [03:02] -  RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 (rw) (01)  [0;32mRXI[0m  - [05:05] -  RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for
  test and should always be written as zero
 (rw) (01)  [0;32mRXR[0m  - [06:06] -  RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration
  event is received for this Endpoint, software must write a one to this bit in 
 order to synchronize the data PID's between the host and device
 (rw) (01)  [0;32mRXE[0m  - [07:07] -  RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled
  only after it has been configured
 (rw) (01)  [0;32mTXS[0m  - [16:16] -  TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit will
  be cleared automatically upon receipt of a SETUP request if this Endpoint is c
 onfigured as a Control Endpoint and this bit will continue to be cleared by har
 dware until the associated ENDPTSETUPSTAT bit is cleared
 (rw) (01)  [0;32mTXD[0m  - [17:17] -  TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFA
 ULT] Should always be written as 0
 (rw) (02)  [0;32mTXT[0m  - [19:18] -  TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 (rw) (01)  [0;32mTXI[0m  - [21:21] -  TX Data Toggle Inhibit 0 PID Sequencing Enabled
 (rw) (01)  [0;32mTXR[0m  - [22:22] -  TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration
  event is received for this Endpoint, software must write a one to this bit in 
 order to synchronize the data PID's between the Host and device
 (rw) (01)  [0;32mTXE[0m  - [23:23] -  TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled
  only after it has been configured
</lang>
#### p.USBNC1.USB_OTG1_PHY_CTRL_0
<lang=dft>
 (rw)  [1;33m0x402e0818[0m (0x402e0000 + 0x0818)
OTG1 UTMI PHY Control 0 Register
 (rw) (01)  [0;32mUTMI_CLK_VLD[0m  - [31:31] -  Indicating whether OTG1 UTMI PHY clock is valid
      0 - UTMI_CLK_VLD_0 :
         Invalid
      0x1 - UTMI_CLK_VLD_1 :
         Valid
</lang>
#### SEMC.BMCR0
<link=p.SEMC.BMCR0>
#### p.semc.br2
<link=p.SEMC.BR2>
#### semc.br7
<link=p.SEMC.BR7>
#### p.SEMC.NANDCR0
<lang=dft>
 (rw)  [1;33m0x402f0050[0m (0x402f0000 + 0x0050)
NAND control register 0
 (rw) (01)  [0;32mPS[0m  - [00:00] -  Port Size
      0 - PS_0 :
         8bit
      0x1 - PS_1 :
         16bit
 (rw) (01)  [0;32mSYNCEN[0m  - [01:01] -  Select NAND controller mode.
      0 - SYNCEN_0 :
         Asynchronous mode is enabled.
      0x1 - SYNCEN_1 :
         Synchronous mode is enabled.
 (rw) (03)  [0;32mBL[0m  - [06:04] -  Burst Length
      0 - BL_0 :
         1
      0x1 - BL_1 :
         2
      0x2 - BL_2 :
         4
      0x3 - BL_3 :
         8
      0x4 - BL_4 :
         16
      0x5 - BL_5 :
         32
      0x6 - BL_6 :
         64
      0x7 - BL_7 :
         64
 (rw) (01)  [0;32mEDO[0m  - [07:07] -  EDO mode enabled
      0 - EDO_0 :
         EDO mode disabled
      0x1 - EDO_1 :
         EDO mode enabled
 (rw) (03)  [0;32mCOL[0m  - [10:08] -  Column address bit number
      0 - COL_0 :
         16
      0x1 - COL_1 :
         15
      0x2 - COL_2 :
         14
      0x3 - COL_3 :
         13
      0x4 - COL_4 :
         12
      0x5 - COL_5 :
         11
      0x6 - COL_6 :
         10
      0x7 - COL_7 :
         9
</lang>
#### p.semc.norcr0
<link=p.SEMC.NORCR0>
#### SEMC.SRAMCR0
<link=p.SEMC.SRAMCR0>
#### p.semc.ipcr0
<link=p.SEMC.IPCR0>
#### SEMC.IPCR2
<link=p.SEMC.IPCR2>
#### p.SEMC.STS2
<lang=dft>
 (ro)  [1;33m0x402f00c8[0m (0x402f0000 + 0x00c8)
Status register 2
 (ro) (01)  [0;32mNDWRPEND[0m  - [03:03] -  This field indicating whether there is pending AXI command (write) to NAND devi
 ce.
      0 - NDWRPEND_0 :
         No pending
      0x1 - NDWRPEND_1 :
         Pending
</lang>
#### p.semc.sts4
<link=p.SEMC.STS4>
#### semc.sts8
<link=p.SEMC.STS8>
#### p.dcp
<link=p.DCP>
#### p.DCP.STAT
<lang=dft>
 (rw)  [1;33m0x402fc010[0m (0x402fc000 + 0x0010)
DCP status register
 (rw) (04)  [0;32mIRQ[0m  - [03:00] -  Indicates which channels have pending interrupt requests
 (ro) (08)  [0;32mREADY_CHANNELS[0m  - [23:16] -  Indicates which channels are ready to proceed with a transfer (the active chann
 el is also included)
      0x1 - CH0 :
         CH0
      0x2 - CH1 :
         CH1
      0x4 - CH2 :
         CH2
      0x8 - CH3 :
         CH3
 (ro) (04)  [0;32mCUR_CHANNEL[0m  - [27:24] -  Current (active) channel (encoded)
      0 - None :
         None
      0x1 - CH0 :
         CH0
      0x2 - CH1 :
         CH1
      0x3 - CH2 :
         CH2
      0x4 - CH3 :
         CH3
 (ro) (01)  [0;32mOTP_KEY_READY[0m  - [28:28] -  When set, it indicates that the OTP key is shifted from the fuse block and is r
 eady for use.
</lang>
#### p.dcp.channelctrl
<link=p.DCP.CHANNELCTRL>
#### dcp.channelctrl_clr
<link=p.DCP.CHANNELCTRL_CLR>
#### p.DCP.CHANNELCTRL_TOG
<lang=dft>
 (rw)  [1;33m0x402fc02c[0m (0x402fc000 + 0x002c)
DCP channel control register
 (rw) (08)  [0;32mENABLE_CHANNEL[0m  - [07:00] -  Setting a bit in this field enables the DMA channel associated with it
      0x1 - CH0 :
         CH0
      0x2 - CH1 :
         CH1
      0x4 - CH2 :
         CH2
      0x8 - CH3 :
         CH3
 (rw) (08)  [0;32mHIGH_PRIORITY_CHANNEL[0m  - [15:08] -  Setting a bit in this field causes the corresponding channel to have high-prior
 ity arbitration
      0x1 - CH0 :
         CH0
      0x2 - CH1 :
         CH1
      0x4 - CH2 :
         CH2
      0x8 - CH3 :
         CH3
 (rw) (01)  [0;32mCH0_IRQ_MERGED[0m  - [16:16] -  Indicates that the interrupt for channel 0 must be merged with the other interr
 upts on the shared dcp_irq interrupt
</lang>
#### DCP.CHANNELCTRL_TOG
<link=p.DCP.CHANNELCTRL_TOG>
#### p.dcp.packet1
<link=p.DCP.PACKET1>
#### DCP.CH0STAT
<link=p.DCP.CH0STAT>
#### DCP.CH0OPTS
<link=p.DCP.CH0OPTS>
#### p.DCP.CH1STAT_SET
<lang=dft>
 (rw)  [1;33m0x402fc164[0m (0x402fc000 + 0x0164)
DCP channel 1 status register
 (rw) (01)  [0;32mHASH_MISMATCH[0m  - [01:01] -  This bit indicates that a hashing check operation is mismatched for the control
  packets that enable the HASH_CHECK bit
 (rw) (01)  [0;32mERROR_SETUP[0m  - [02:02] -  This bit indicates that the hardware detected an invalid programming configurat
 ion (such as a buffer length that is not a multiple of the natural data size fo
 r the operation)
 (rw) (01)  [0;32mERROR_PACKET[0m  - [03:03] -  This bit indicates that a bus error occurred when reading the packet or payload
 , or when writing the status back to the packet paylaod
 (rw) (01)  [0;32mERROR_SRC[0m  - [04:04] -  This bit indicates that a bus error occurred when reading from the source buffe
 r
 (rw) (01)  [0;32mERROR_DST[0m  - [05:05] -  This bit indicates that a bus error occurred when storing to the destination bu
 ffer
 (rw) (01)  [0;32mERROR_PAGEFAULT[0m  - [06:06] -  This bit indicates that a page fault occurred while converting a virtual addres
 s to a physical address
 (rw) (08)  [0;32mERROR_CODE[0m  - [23:16] -  Indicates the additional error codes for some of the error conditions.
      0x1 - NEXT_CHAIN_IS_0 :
         Error is signalled because the next pointer is 0x00000000.
      0x2 - NO_CHAIN :
         Error is signalled because the semaphore is of a non-zero value and nei
         ther of the chain bits is set.
      0x3 - CONTEXT_ERROR :
         Error is signalled because an error was reported when reading/writing t
         he context buffer.
      0x4 - PAYLOAD_ERROR :
         Error is signalled because an error was reported when reading/writing t
         he payload.
      0x5 - INVALID_MODE :
         Error is signalled because the control packet specifies an invalid mode
          select (for example, blit + hash).
 (ro) (08)  [0;32mTAG[0m  - [31:24] -  Indicates the tag from the last completed packet in the command structure.
</lang>
#### p.dcp.ch1stat_set
<link=p.DCP.CH1STAT_SET>
#### p.dcp.ch1opts
<link=p.DCP.CH1OPTS>
#### DCP.CH1OPTS_SET
<link=p.DCP.CH1OPTS_SET>
#### p.DCP.CH1OPTS_TOG
<lang=dft>
 (rw)  [1;33m0x402fc17c[0m (0x402fc000 + 0x017c)
DCP channel 1 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### p.dcp.ch2cmdptr
<link=p.DCP.CH2CMDPTR>
#### p.dcp.ch2opts_set
<link=p.DCP.CH2OPTS_SET>
#### p.dcp.ch3stat_tog
<link=p.DCP.CH3STAT_TOG>
#### DCP.CH3OPTS_SET
<link=p.DCP.CH3OPTS_SET>
#### p.DCP.DBGSELECT
<lang=dft>
 (rw)  [1;33m0x402fc400[0m (0x402fc000 + 0x0400)
DCP debug select register
 (rw) (08)  [0;32mINDEX[0m  - [07:00] -  Selects a value to read via the debug data register.
      0x1 - CONTROL :
         CONTROL
      0x10 - OTPKEY0 :
         OTPKEY0
      0x11 - OTPKEY1 :
         OTPKEY1
      0x12 - OTPKEY2 :
         OTPKEY2
      0x13 - OTPKEY3 :
         OTPKEY3
</lang>
#### spdif.srcd
<link=p.SPDIF.SRCD>
#### p.SPDIF.SRPC
<lang=dft>
 (rw)  [1;33m0x40380008[0m (0x40380000 + 0x0008)
PhaseConfig Register
 (rw) (03)  [0;32mGainSel[0m  - [05:03] -  Gain selection:
      0 - GainSel_0 :
         24*(2**10)
      0x1 - GainSel_1 :
         16*(2**10)
      0x2 - GainSel_2 :
         12*(2**10)
      0x3 - GainSel_3 :
         8*(2**10)
      0x4 - GainSel_4 :
         6*(2**10)
      0x5 - GainSel_5 :
         4*(2**10)
      0x6 - GainSel_6 :
         3*(2**10)
 (ro) (01)  [0;32mLOCK[0m  - [06:06] -  LOCK bit to show that the internal DPLL is locked, read only
 (rw) (04)  [0;32mClkSrc_Sel[0m  - [10:07] -  Clock source selection, all other settings not shown are reserved:
      0 - ClkSrc_Sel_0 :
         if (DPLL Locked) SPDIF_RxClk else REF_CLK_32K (XTALOSC)
      0x1 - ClkSrc_Sel_1 :
         if (DPLL Locked) SPDIF_RxClk else tx_clk (SPDIF0_CLK_ROOT)
      0x3 - ClkSrc_Sel_3 :
         if (DPLL Locked) SPDIF_RxClk else SPDIF_EXT_CLK
      0x5 - ClkSrc_Sel_5 :
         REF_CLK_32K (XTALOSC)
      0x6 - ClkSrc_Sel_6 :
         tx_clk (SPDIF0_CLK_ROOT)
      0x8 - ClkSrc_Sel_8 :
         SPDIF_EXT_CLK
</lang>
#### spdif.srcsl
<link=p.SPDIF.SRCSL>
#### spdif.stcscl
<link=p.SPDIF.STCSCL>
#### SAI1.PARAM
<link=p.SAI1.PARAM>
#### SAI1.TCR1
<link=p.SAI1.TCR1>
#### sai1.tcr5
<link=p.SAI1.TCR5>
#### SAI1.TDR[1]
<link=p.SAI1.TDR[1]>
#### p.SAI1.TFR[0]
<lang=dft>
 (ro)  [1;33m0x40384040[0m (0x40384000 + 0x0040)
SAI Transmit FIFO Register
 (ro) (06)  [0;32mRFP[0m  - [05:00] -  Read FIFO Pointer
 (ro) (06)  [0;32mWFP[0m  - [21:16] -  Write FIFO Pointer
 (ro) (01)  [0;32mWCP[0m  - [31:31] -  Write Channel Pointer
      0 - WCP_0 :
         No effect.
      0x1 - WCP_1 :
         FIFO combine is enabled for FIFO writes and this FIFO will be written o
         n the next FIFO write.
</lang>
#### SAI1.RCR2
<link=p.SAI1.RCR2>
#### p.SAI1.RDR[0]
<lang=dft>
 (ro)  [1;33m0x403840a0[0m (0x40384000 + 0x00a0)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### SAI1.RFR[1]
<link=p.SAI1.RFR[1]>
#### p.sai1.rfr[3]
<link=p.SAI1.RFR[3]>
#### p.SAI2.TCSR
<lang=dft>
 (rw)  [1;33m0x40388008[0m (0x40388000 + 0x0008)
SAI Transmit Control Register
 (rw) (01)  [0;32mFRDE[0m  - [00:00] -  FIFO Request DMA Enable
      0 - FRDE_0 :
         Disables the DMA request.
      0x1 - FRDE_1 :
         Enables the DMA request.
 (rw) (01)  [0;32mFWDE[0m  - [01:01] -  FIFO Warning DMA Enable
      0 - FWDE_0 :
         Disables the DMA request.
      0x1 - FWDE_1 :
         Enables the DMA request.
 (rw) (01)  [0;32mFRIE[0m  - [08:08] -  FIFO Request Interrupt Enable
      0 - FRIE_0 :
         Disables the interrupt.
      0x1 - FRIE_1 :
         Enables the interrupt.
 (rw) (01)  [0;32mFWIE[0m  - [09:09] -  FIFO Warning Interrupt Enable
      0 - FWIE_0 :
         Disables the interrupt.
      0x1 - FWIE_1 :
         Enables the interrupt.
 (rw) (01)  [0;32mFEIE[0m  - [10:10] -  FIFO Error Interrupt Enable
      0 - FEIE_0 :
         Disables the interrupt.
      0x1 - FEIE_1 :
         Enables the interrupt.
 (rw) (01)  [0;32mSEIE[0m  - [11:11] -  Sync Error Interrupt Enable
      0 - SEIE_0 :
         Disables interrupt.
      0x1 - SEIE_1 :
         Enables interrupt.
 (rw) (01)  [0;32mWSIE[0m  - [12:12] -  Word Start Interrupt Enable
      0 - WSIE_0 :
         Disables interrupt.
      0x1 - WSIE_1 :
         Enables interrupt.
 (ro) (01)  [0;32mFRF[0m  - [16:16] -  FIFO Request Flag
      0 - FRF_0 :
         Transmit FIFO watermark has not been reached.
      0x1 - FRF_1 :
         Transmit FIFO watermark has been reached.
 (ro) (01)  [0;32mFWF[0m  - [17:17] -  FIFO Warning Flag
      0 - FWF_0 :
         No enabled transmit FIFO is empty.
      0x1 - FWF_1 :
         Enabled transmit FIFO is empty.
 (rw) (01)  [0;32mFEF[0m  - [18:18] -  FIFO Error Flag
      0 - FEF_0 :
         Transmit underrun not detected.
      0x1 - FEF_1 :
         Transmit underrun detected.
 (rw) (01)  [0;32mSEF[0m  - [19:19] -  Sync Error Flag
      0 - SEF_0 :
         Sync error not detected.
      0x1 - SEF_1 :
         Frame sync error detected.
 (rw) (01)  [0;32mWSF[0m  - [20:20] -  Word Start Flag
      0 - WSF_0 :
         Start of word not detected.
      0x1 - WSF_1 :
         Start of word detected.
 (rw) (01)  [0;32mSR[0m  - [24:24] -  Software Reset
      0 - SR_0 :
         No effect.
      0x1 - SR_1 :
         Software reset.
 (rw) (01)  [0;32mFR[0m  - [25:25] -  FIFO Reset
      0 - FR_0 :
         No effect.
      0x1 - FR_1 :
         FIFO reset.
 (rw) (01)  [0;32mBCE[0m  - [28:28] -  Bit Clock Enable
      0 - BCE_0 :
         Transmit bit clock is disabled.
      0x1 - BCE_1 :
         Transmit bit clock is enabled.
 (rw) (01)  [0;32mDBGE[0m  - [29:29] -  Debug Enable
      0 - DBGE_0 :
         Transmitter is disabled in Debug mode, after completing the current fra
         me.
      0x1 - DBGE_1 :
         Transmitter is enabled in Debug mode.
 (rw) (01)  [0;32mSTOPE[0m  - [30:30] -  Stop Enable
      0 - STOPE_0 :
         Transmitter disabled in Stop mode.
      0x1 - STOPE_1 :
         Transmitter enabled in Stop mode.
 (rw) (01)  [0;32mTE[0m  - [31:31] -  Transmitter Enable
      0 - TE_0 :
         Transmitter is disabled.
      0x1 - TE_1 :
         Transmitter is enabled, or transmitter has been disabled and has not ye
         t reached end of frame.
</lang>
#### p.SAI2.RCR2
<lang=dft>
 (rw)  [1;33m0x40388090[0m (0x40388000 + 0x0090)
SAI Receive Configuration 2 Register
 (rw) (08)  [0;32mDIV[0m  - [07:00] -  Bit Clock Divide
 (rw) (01)  [0;32mBCD[0m  - [24:24] -  Bit Clock Direction
      0 - BCD_0 :
         Bit clock is generated externally in Slave mode.
      0x1 - BCD_1 :
         Bit clock is generated internally in Master mode.
 (rw) (01)  [0;32mBCP[0m  - [25:25] -  Bit Clock Polarity
      0 - BCP_0 :
         Bit Clock is active high with drive outputs on rising edge and sample i
         nputs on falling edge.
      0x1 - BCP_1 :
         Bit Clock is active low with drive outputs on falling edge and sample i
         nputs on rising edge.
 (rw) (02)  [0;32mMSEL[0m  - [27:26] -  MCLK Select
      0 - MSEL_0 :
         Bus Clock selected.
      0x1 - MSEL_1 :
         Master Clock (MCLK) 1 option selected.
      0x2 - MSEL_2 :
         Master Clock (MCLK) 2 option selected.
      0x3 - MSEL_3 :
         Master Clock (MCLK) 3 option selected.
 (rw) (01)  [0;32mBCI[0m  - [28:28] -  Bit Clock Input
      0 - BCI_0 :
         No effect.
      0x1 - BCI_1 :
         Internal logic is clocked as if bit clock was externally generated.
 (rw) (01)  [0;32mBCS[0m  - [29:29] -  Bit Clock Swap
      0 - BCS_0 :
         Use the normal bit clock source.
      0x1 - BCS_1 :
         Swap the bit clock source.
 (rw) (02)  [0;32mSYNC[0m  - [31:30] -  Synchronous Mode
      0 - SYNC_0 :
         Asynchronous mode.
      0x1 - SYNC_1 :
         Synchronous with transmitter.
</lang>
#### p.sai2.rcr3
<link=p.SAI2.RCR3>
#### sai2.rcr5
<link=p.SAI2.RCR5>
#### SAI2.RCR5
<link=p.SAI2.RCR5>
#### p.SAI2.RDR[3]
<lang=dft>
 (ro)  [1;33m0x403880ac[0m (0x40388000 + 0x00ac)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### p.SAI3.TCSR
<lang=dft>
 (rw)  [1;33m0x4038c008[0m (0x4038c000 + 0x0008)
SAI Transmit Control Register
 (rw) (01)  [0;32mFRDE[0m  - [00:00] -  FIFO Request DMA Enable
      0 - FRDE_0 :
         Disables the DMA request.
      0x1 - FRDE_1 :
         Enables the DMA request.
 (rw) (01)  [0;32mFWDE[0m  - [01:01] -  FIFO Warning DMA Enable
      0 - FWDE_0 :
         Disables the DMA request.
      0x1 - FWDE_1 :
         Enables the DMA request.
 (rw) (01)  [0;32mFRIE[0m  - [08:08] -  FIFO Request Interrupt Enable
      0 - FRIE_0 :
         Disables the interrupt.
      0x1 - FRIE_1 :
         Enables the interrupt.
 (rw) (01)  [0;32mFWIE[0m  - [09:09] -  FIFO Warning Interrupt Enable
      0 - FWIE_0 :
         Disables the interrupt.
      0x1 - FWIE_1 :
         Enables the interrupt.
 (rw) (01)  [0;32mFEIE[0m  - [10:10] -  FIFO Error Interrupt Enable
      0 - FEIE_0 :
         Disables the interrupt.
      0x1 - FEIE_1 :
         Enables the interrupt.
 (rw) (01)  [0;32mSEIE[0m  - [11:11] -  Sync Error Interrupt Enable
      0 - SEIE_0 :
         Disables interrupt.
      0x1 - SEIE_1 :
         Enables interrupt.
 (rw) (01)  [0;32mWSIE[0m  - [12:12] -  Word Start Interrupt Enable
      0 - WSIE_0 :
         Disables interrupt.
      0x1 - WSIE_1 :
         Enables interrupt.
 (ro) (01)  [0;32mFRF[0m  - [16:16] -  FIFO Request Flag
      0 - FRF_0 :
         Transmit FIFO watermark has not been reached.
      0x1 - FRF_1 :
         Transmit FIFO watermark has been reached.
 (ro) (01)  [0;32mFWF[0m  - [17:17] -  FIFO Warning Flag
      0 - FWF_0 :
         No enabled transmit FIFO is empty.
      0x1 - FWF_1 :
         Enabled transmit FIFO is empty.
 (rw) (01)  [0;32mFEF[0m  - [18:18] -  FIFO Error Flag
      0 - FEF_0 :
         Transmit underrun not detected.
      0x1 - FEF_1 :
         Transmit underrun detected.
 (rw) (01)  [0;32mSEF[0m  - [19:19] -  Sync Error Flag
      0 - SEF_0 :
         Sync error not detected.
      0x1 - SEF_1 :
         Frame sync error detected.
 (rw) (01)  [0;32mWSF[0m  - [20:20] -  Word Start Flag
      0 - WSF_0 :
         Start of word not detected.
      0x1 - WSF_1 :
         Start of word detected.
 (rw) (01)  [0;32mSR[0m  - [24:24] -  Software Reset
      0 - SR_0 :
         No effect.
      0x1 - SR_1 :
         Software reset.
 (rw) (01)  [0;32mFR[0m  - [25:25] -  FIFO Reset
      0 - FR_0 :
         No effect.
      0x1 - FR_1 :
         FIFO reset.
 (rw) (01)  [0;32mBCE[0m  - [28:28] -  Bit Clock Enable
      0 - BCE_0 :
         Transmit bit clock is disabled.
      0x1 - BCE_1 :
         Transmit bit clock is enabled.
 (rw) (01)  [0;32mDBGE[0m  - [29:29] -  Debug Enable
      0 - DBGE_0 :
         Transmitter is disabled in Debug mode, after completing the current fra
         me.
      0x1 - DBGE_1 :
         Transmitter is enabled in Debug mode.
 (rw) (01)  [0;32mSTOPE[0m  - [30:30] -  Stop Enable
      0 - STOPE_0 :
         Transmitter disabled in Stop mode.
      0x1 - STOPE_1 :
         Transmitter enabled in Stop mode.
 (rw) (01)  [0;32mTE[0m  - [31:31] -  Transmitter Enable
      0 - TE_0 :
         Transmitter is disabled.
      0x1 - TE_1 :
         Transmitter is enabled, or transmitter has been disabled and has not ye
         t reached end of frame.
</lang>
#### sai3.tdr[0]
<link=p.SAI3.TDR[0]>
#### p.SAI3.TDR[3]
<lang=dft>
 (rw)  [1;33m0x4038c02c[0m (0x4038c000 + 0x002c)
SAI Transmit Data Register
 (rw) (32)  [0;32mTDR[0m  - [31:00] -  Transmit Data Register
</lang>
#### SAI3.TDR[3]
<link=p.SAI3.TDR[3]>
#### p.sai3.rcsr
<link=p.SAI3.RCSR>
#### p.SAI3.RCR1
<lang=dft>
 (rw)  [1;33m0x4038c08c[0m (0x4038c000 + 0x008c)
SAI Receive Configuration 1 Register
 (rw) (05)  [0;32mRFW[0m  - [04:00] -  Receive FIFO Watermark
</lang>
#### sai3.rcr2
<link=p.SAI3.RCR2>
#### p.sai3.rcr5
<link=p.SAI3.RCR5>
#### p.sai3.rfr[3]
<link=p.SAI3.RFR[3]>
#### p.sai3.rmr
<link=p.SAI3.RMR>
#### p.lpspi1.cr
<link=p.LPSPI1.CR>
#### LPSPI1.SR
<link=p.LPSPI1.SR>
#### LPSPI1.CFGR1
<link=p.LPSPI1.CFGR1>
#### p.lpspi1.fsr
<link=p.LPSPI1.FSR>
#### p.LPSPI2.PARAM
<lang=dft>
 (ro)  [1;33m0x40398004[0m (0x40398000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
 (ro) (08)  [0;32mPCSNUM[0m  - [23:16] -  PCS Number
</lang>
#### p.lpspi2.param
<link=p.LPSPI2.PARAM>
#### LPSPI2.CR
<link=p.LPSPI2.CR>
#### lpspi2.cfgr0
<link=p.LPSPI2.CFGR0>
#### p.LPSPI2.CCR
<lang=dft>
 (rw)  [1;33m0x40398040[0m (0x40398000 + 0x0040)
Clock Configuration Register
 (rw) (08)  [0;32mSCKDIV[0m  - [07:00] -  SCK Divider
 (rw) (08)  [0;32mDBT[0m  - [15:08] -  Delay Between Transfers
 (rw) (08)  [0;32mPCSSCK[0m  - [23:16] -  PCS-to-SCK Delay
 (rw) (08)  [0;32mSCKPCS[0m  - [31:24] -  SCK-to-PCS Delay
</lang>
#### p.LPSPI3.IER
<lang=dft>
 (rw)  [1;33m0x4039c018[0m (0x4039c000 + 0x0018)
Interrupt Enable Register
 (rw) (01)  [0;32mTDIE[0m  - [00:00] -  Transmit Data Interrupt Enable
      0 - TDIE_0 :
         Disabled
      0x1 - TDIE_1 :
         Enabled
 (rw) (01)  [0;32mRDIE[0m  - [01:01] -  Receive Data Interrupt Enable
      0 - RDIE_0 :
         Disabled
      0x1 - RDIE_1 :
         Enabled
 (rw) (01)  [0;32mWCIE[0m  - [08:08] -  Word Complete Interrupt Enable
      0 - WCIE_0 :
         Disabled
      0x1 - WCIE_1 :
         Enabled
 (rw) (01)  [0;32mFCIE[0m  - [09:09] -  Frame Complete Interrupt Enable
      0 - FCIE_0 :
         Disabled
      0x1 - FCIE_1 :
         Enabled
 (rw) (01)  [0;32mTCIE[0m  - [10:10] -  Transfer Complete Interrupt Enable
      0 - TCIE_0 :
         Disabled
      0x1 - TCIE_1 :
         Enabled
 (rw) (01)  [0;32mTEIE[0m  - [11:11] -  Transmit Error Interrupt Enable
      0 - TEIE_0 :
         Disabled
      0x1 - TEIE_1 :
         Enabled
 (rw) (01)  [0;32mREIE[0m  - [12:12] -  Receive Error Interrupt Enable
      0 - REIE_0 :
         Disabled
      0x1 - REIE_1 :
         Enabled
 (rw) (01)  [0;32mDMIE[0m  - [13:13] -  Data Match Interrupt Enable
      0 - DMIE_0 :
         Disabled
      0x1 - DMIE_1 :
         Enabled
</lang>
#### p.LPSPI3.CFGR1
<lang=dft>
 (rw)  [1;33m0x4039c024[0m (0x4039c000 + 0x0024)
Configuration Register 1
 (rw) (01)  [0;32mMASTER[0m  - [00:00] -  Master Mode
      0 - MASTER_0 :
         Slave mode
      0x1 - MASTER_1 :
         Master mode
 (rw) (01)  [0;32mSAMPLE[0m  - [01:01] -  Sample Point
      0 - SAMPLE_0 :
         Input data is sampled on SCK edge
      0x1 - SAMPLE_1 :
         Input data is sampled on delayed SCK edge
 (rw) (01)  [0;32mAUTOPCS[0m  - [02:02] -  Automatic PCS
      0 - AUTOPCS_0 :
         Automatic PCS generation is disabled
      0x1 - AUTOPCS_1 :
         Automatic PCS generation is enabled
 (rw) (01)  [0;32mNOSTALL[0m  - [03:03] -  No Stall
      0 - NOSTALL_0 :
         Transfers will stall when the transmit FIFO is empty or the receive FIF
         O is full
      0x1 - NOSTALL_1 :
         Transfers will not stall, allowing transmit FIFO underruns or receive F
         IFO overruns to occur
 (rw) (04)  [0;32mPCSPOL[0m  - [11:08] -  Peripheral Chip Select Polarity
      0 - PCSPOL_0 :
         The Peripheral Chip Select pin PCSx is active low
      0x1 - PCSPOL_1 :
         The Peripheral Chip Select pin PCSx is active high
 (rw) (03)  [0;32mMATCFG[0m  - [18:16] -  Match Configuration
      0 - MATCFG_0 :
         Match is disabled
      0x2 - MATCFG_2 :
         010b - Match is enabled, if 1st data word equals MATCH0 OR MATCH1, i.e.
         , (1st data word = MATCH0 + MATCH1)
      0x3 - MATCFG_3 :
         011b - Match is enabled, if any data word equals MATCH0 OR MATCH1, i.e.
         , (any data word = MATCH0 + MATCH1)
      0x4 - MATCFG_4 :
         100b - Match is enabled, if 1st data word equals MATCH0 AND 2nd data wo
         rd equals MATCH1, i.e., [(1st data word = MATCH0) * (2nd data word = MA
         TCH1)]
      0x5 - MATCFG_5 :
         101b - Match is enabled, if any data word equals MATCH0 AND the next da
         ta word equals MATCH1, i.e., [(any data word = MATCH0) * (next data wor
         d = MATCH1)]
      0x6 - MATCFG_6 :
         110b - Match is enabled, if (1st data word AND MATCH1) equals (MATCH0 A
         ND MATCH1), i.e., [(1st data word * MATCH1) = (MATCH0 * MATCH1)]
      0x7 - MATCFG_7 :
         111b - Match is enabled, if (any data word AND MATCH1) equals (MATCH0 A
         ND MATCH1), i.e., [(any data word * MATCH1) = (MATCH0 * MATCH1)]
 (rw) (02)  [0;32mPINCFG[0m  - [25:24] -  Pin Configuration
      0 - PINCFG_0 :
         SIN is used for input data and SOUT is used for output data
      0x1 - PINCFG_1 :
         SIN is used for both input and output data
      0x2 - PINCFG_2 :
         SOUT is used for both input and output data
      0x3 - PINCFG_3 :
         SOUT is used for input data and SIN is used for output data
 (rw) (01)  [0;32mOUTCFG[0m  - [26:26] -  Output Config
      0 - OUTCFG_0 :
         Output data retains last value when chip select is negated
      0x1 - OUTCFG_1 :
         Output data is tristated when chip select is negated
 (rw) (01)  [0;32mPCSCFG[0m  - [27:27] -  Peripheral Chip Select Configuration
      0 - PCSCFG_0 :
         PCS[3:2] are enabled
      0x1 - PCSCFG_1 :
         PCS[3:2] are disabled
</lang>
#### p.LPSPI3.FCR
<lang=dft>
 (rw)  [1;33m0x4039c058[0m (0x4039c000 + 0x0058)
FIFO Control Register
 (rw) (04)  [0;32mTXWATER[0m  - [03:00] -  Transmit FIFO Watermark
 (rw) (04)  [0;32mRXWATER[0m  - [19:16] -  Receive FIFO Watermark
</lang>
#### lpspi3.fsr
<link=p.LPSPI3.FSR>
#### lpspi3.tcr
<link=p.LPSPI3.TCR>
#### lpspi3.rdr
<link=p.LPSPI3.RDR>
#### p.lpspi4
<link=p.LPSPI4>
#### p.LPSPI4.VERID
<lang=dft>
 (ro)  [1;33m0x403a0000[0m (0x403a0000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Module Identification Number
      0x4 - FEATURE_4 :
         Standard feature set supporting a 32-bit shift register.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### p.lpspi4.verid
<link=p.LPSPI4.VERID>
#### lpspi4.param
<link=p.LPSPI4.PARAM>
#### LPSPI4.CFGR0
<link=p.LPSPI4.CFGR0>
#### lpspi4.cfgr1
<link=p.LPSPI4.CFGR1>
#### p.LPSPI4.DMR0
<lang=dft>
 (rw)  [1;33m0x403a0030[0m (0x403a0000 + 0x0030)
Data Match Register 0
 (rw) (32)  [0;32mMATCH0[0m  - [31:00] -  Match 0 Value
</lang>
#### p.lpspi4.ccr
<link=p.LPSPI4.CCR>
#### p.lpspi4.fsr
<link=p.LPSPI4.FSR>
#### lpspi4.fsr
<link=p.LPSPI4.FSR>
#### lpspi4.tdr
<link=p.LPSPI4.TDR>
#### LPSPI4.RSR
<link=p.LPSPI4.RSR>
#### adc_etc.done2_err_irq
<link=p.ADC_ETC.DONE2_ERR_IRQ>
#### p.adc_etc.trig0_chain_1_0
<link=p.ADC_ETC.TRIG0_CHAIN_1_0>
#### p.adc_etc.trig0_chain_3_2
<link=p.ADC_ETC.TRIG0_CHAIN_3_2>
#### ADC_ETC.TRIG0_RESULT_3_2
<link=p.ADC_ETC.TRIG0_RESULT_3_2>
#### ADC_ETC.TRIG0_RESULT_5_4
<link=p.ADC_ETC.TRIG0_RESULT_5_4>
#### p.adc_etc.trig0_result_7_6
<link=p.ADC_ETC.TRIG0_RESULT_7_6>
#### ADC_ETC.TRIG1_CTRL
<link=p.ADC_ETC.TRIG1_CTRL>
#### p.ADC_ETC.TRIG1_COUNTER
<lang=dft>
 (rw)  [1;33m0x403b003c[0m (0x403b0000 + 0x003c)
ETC_TRIG1 Counter Register
 (rw) (16)  [0;32mINIT_DELAY[0m  - [15:00] -  TRIGGER initial delay counter
 (rw) (16)  [0;32mSAMPLE_INTERVAL[0m  - [31:16] -  TRIGGER sampling interval counter
</lang>
#### adc_etc.trig1_counter
<link=p.ADC_ETC.TRIG1_COUNTER>
#### adc_etc.trig1_chain_3_2
<link=p.ADC_ETC.TRIG1_CHAIN_3_2>
#### adc_etc.trig1_result_1_0
<link=p.ADC_ETC.TRIG1_RESULT_1_0>
#### ADC_ETC.TRIG2_CHAIN_1_0
<link=p.ADC_ETC.TRIG2_CHAIN_1_0>
#### p.ADC_ETC.TRIG3_CTRL
<lang=dft>
 (rw)  [1;33m0x403b0088[0m (0x403b0000 + 0x0088)
ETC_TRIG3 Control Register
 (rw) (01)  [0;32mSW_TRIG[0m  - [00:00] -  Software write 1 as the TRIGGER. This register is self-clearing.
 (rw) (01)  [0;32mTRIG_MODE[0m  - [04:04] -  TRIG mode register. 1'b0: hardware trigger. 1'b1: software trigger.
 (rw) (03)  [0;32mTRIG_CHAIN[0m  - [10:08] -  TRIG chain length to the ADC. 0: Trig length is 1; ... 7: Trig length is 8;
 (rw) (03)  [0;32mTRIG_PRIORITY[0m  - [14:12] -  External trigger priority, 7 is highest, 0 is lowest .
 (rw) (01)  [0;32mSYNC_MODE[0m  - [16:16] -  TRIG mode control . 1'b0: Disable sync mode; 1'b1: Enable sync mode
</lang>
#### adc_etc.trig3_ctrl
<link=p.ADC_ETC.TRIG3_CTRL>
#### p.ADC_ETC.TRIG3_CHAIN_1_0
<lang=dft>
 (rw)  [1;33m0x403b0090[0m (0x403b0000 + 0x0090)
ETC_TRIG Chain 0/1 Register
 (rw) (04)  [0;32mCSEL0[0m  - [03:00] -  CHAIN0 CSEL ADC channel selection
 (rw) (08)  [0;32mHWTS0[0m  - [11:04] -  CHAIN0 HWTS ADC hardware trigger selection
 (rw) (01)  [0;32mB2B0[0m  - [12:12] -  CHAIN0 B2B 1'b0: Disable B2B, wait until interval is reached 1'b1: Enable B2B, 
 back to back ADC trigger
 (rw) (02)  [0;32mIE0[0m  - [14:13] -  CHAIN0 IE 2'b00: No interrupt when finished 2'b01: Finished Interrupt on Done0 
 2'b10: Finished Interrupt on Done1 2'b11: Finished Interrupt on Done2
 (rw) (04)  [0;32mCSEL1[0m  - [19:16] -  CHAIN1 CSEL ADC channel selection
 (rw) (08)  [0;32mHWTS1[0m  - [27:20] -  CHAIN1 HWTS ADC hardware trigger selection
 (rw) (01)  [0;32mB2B1[0m  - [28:28] -  CHAIN1 B2B 1'b0: Disable B2B, wait until interval is reached 1'b1: Enable B2B, 
 back to back ADC trigger
 (rw) (02)  [0;32mIE1[0m  - [30:29] -  CHAIN1 IE 2'b00: No interrupt when finished 2'b01: Finished Interrupt on Done0 
 2'b10: Finished Interrupt on Done1 2'b11: Finished Interrupt on Done2
</lang>
#### adc_etc.trig3_chain_3_2
<link=p.ADC_ETC.TRIG3_CHAIN_3_2>
#### adc_etc.trig3_chain_5_4
<link=p.ADC_ETC.TRIG3_CHAIN_5_4>
#### p.adc_etc.trig3_result_3_2
<link=p.ADC_ETC.TRIG3_RESULT_3_2>
#### ADC_ETC.TRIG5_RESULT_5_4
<link=p.ADC_ETC.TRIG5_RESULT_5_4>
#### p.adc_etc.trig6_chain_1_0
<link=p.ADC_ETC.TRIG6_CHAIN_1_0>
#### p.adc_etc.trig6_chain_3_2
<link=p.ADC_ETC.TRIG6_CHAIN_3_2>
#### ADC_ETC.TRIG6_RESULT_5_4
<link=p.ADC_ETC.TRIG6_RESULT_5_4>
#### ADC_ETC.TRIG6_RESULT_7_6
<link=p.ADC_ETC.TRIG6_RESULT_7_6>
#### adc_etc.trig7_result_5_4
<link=p.ADC_ETC.TRIG7_RESULT_5_4>
#### adc_etc.trig7_result_7_6
<link=p.ADC_ETC.TRIG7_RESULT_7_6>
#### p.AOI1.BFCRT232
<lang=dft>
 (rw)  [1;33m0x403b400a[0m (0x403b4000 + 0x000a)
Boolean Function Term 2 and 3 Configuration Register for EVENTn
 (rw) (02)  [0;32mPT3_DC[0m  - [01:00] -  Product term 3, D input configuration
      0 - PT3_DC_0 :
         Force the D input in this product term to a logical zero
      0x1 - PT3_DC_1 :
         Pass the D input in this product term
      0x2 - PT3_DC_2 :
         Complement the D input in this product term
      0x3 - PT3_DC_3 :
         Force the D input in this product term to a logical one
 (rw) (02)  [0;32mPT3_CC[0m  - [03:02] -  Product term 3, C input configuration
      0 - PT3_CC_0 :
         Force the C input in this product term to a logical zero
      0x1 - PT3_CC_1 :
         Pass the C input in this product term
      0x2 - PT3_CC_2 :
         Complement the C input in this product term
      0x3 - PT3_CC_3 :
         Force the C input in this product term to a logical one
 (rw) (02)  [0;32mPT3_BC[0m  - [05:04] -  Product term 3, B input configuration
      0 - PT3_BC_0 :
         Force the B input in this product term to a logical zero
      0x1 - PT3_BC_1 :
         Pass the B input in this product term
      0x2 - PT3_BC_2 :
         Complement the B input in this product term
      0x3 - PT3_BC_3 :
         Force the B input in this product term to a logical one
 (rw) (02)  [0;32mPT3_AC[0m  - [07:06] -  Product term 3, A input configuration
      0 - PT3_AC_0 :
         Force the A input in this product term to a logical zero
      0x1 - PT3_AC_1 :
         Pass the A input in this product term
      0x2 - PT3_AC_2 :
         Complement the A input in this product term
      0x3 - PT3_AC_3 :
         Force the A input in this product term to a logical one
 (rw) (02)  [0;32mPT2_DC[0m  - [09:08] -  Product term 2, D input configuration
      0 - PT2_DC_0 :
         Force the D input in this product term to a logical zero
      0x1 - PT2_DC_1 :
         Pass the D input in this product term
      0x2 - PT2_DC_2 :
         Complement the D input in this product term
      0x3 - PT2_DC_3 :
         Force the D input in this product term to a logical one
 (rw) (02)  [0;32mPT2_CC[0m  - [11:10] -  Product term 2, C input configuration
      0 - PT2_CC_0 :
         Force the C input in this product term to a logical zero
      0x1 - PT2_CC_1 :
         Pass the C input in this product term
      0x2 - PT2_CC_2 :
         Complement the C input in this product term
      0x3 - PT2_CC_3 :
         Force the C input in this product term to a logical one
 (rw) (02)  [0;32mPT2_BC[0m  - [13:12] -  Product term 2, B input configuration
      0 - PT2_BC_0 :
         Force the B input in this product term to a logical zero
      0x1 - PT2_BC_1 :
         Pass the B input in this product term
      0x2 - PT2_BC_2 :
         Complement the B input in this product term
      0x3 - PT2_BC_3 :
         Force the B input in this product term to a logical one
 (rw) (02)  [0;32mPT2_AC[0m  - [15:14] -  Product term 2, A input configuration
      0 - PT2_AC_0 :
         Force the A input in this product term to a logical zero
      0x1 - PT2_AC_1 :
         Pass the A input in this product term
      0x2 - PT2_AC_2 :
         Complement the A input in this product term
      0x3 - PT2_AC_3 :
         Force the A input in this product term to a logical one
</lang>
#### aoi1.bfcrt233
<link=p.AOI1.BFCRT233>
#### AOI2.BFCRT010
<link=p.AOI2.BFCRT010>
#### p.XBARA1.SEL1
<lang=dft>
 (rw)  [1;33m0x403bc002[0m (0x403bc000 + 0x0002)
Crossbar A Select Register 1
 (rw) (07)  [0;32mSEL2[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT2 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (07)  [0;32mSEL3[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT3 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### p.XBARA1.SEL14
<lang=dft>
 (rw)  [1;33m0x403bc01c[0m (0x403bc000 + 0x001c)
Crossbar A Select Register 14
 (rw) (07)  [0;32mSEL28[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT28 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL29[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT29 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel15
<link=p.XBARA1.SEL15>
#### p.xbara1.sel24
<link=p.XBARA1.SEL24>
#### p.XBARA1.SEL25
<lang=dft>
 (rw)  [1;33m0x403bc032[0m (0x403bc000 + 0x0032)
Crossbar A Select Register 25
 (rw) (07)  [0;32mSEL50[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT50 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL51[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT51 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL26
<link=p.XBARA1.SEL26>
#### xbara1.sel27
<link=p.XBARA1.SEL27>
#### xbara1.sel30
<link=p.XBARA1.SEL30>
#### XBARA1.SEL31
<link=p.XBARA1.SEL31>
#### xbara1.sel52
<link=p.XBARA1.SEL52>
#### XBARA1.SEL53
<link=p.XBARA1.SEL53>
#### p.xbara1.sel58
<link=p.XBARA1.SEL58>
#### p.XBARA1.CTRL0
<lang=dft>
 (rw)  [1;33m0x403bc084[0m (0x403bc000 + 0x0084)
Crossbar A Control Register 0
 (rw) (01)  [0;32mDEN0[0m  - [00:00] -  DMA Enable for XBAR_OUT0
      0 - DEN0_0 :
         DMA disabled
      0x1 - DEN0_1 :
         DMA enabled
 (rw) (01)  [0;32mIEN0[0m  - [01:01] -  Interrupt Enable for XBAR_OUT0
      0 - IEN0_0 :
         Interrupt disabled
      0x1 - IEN0_1 :
         Interrupt enabled
 (rw) (02)  [0;32mEDGE0[0m  - [03:02] -  Active edge for edge detection on XBAR_OUT0
      0 - EDGE0_0 :
         STS0 never asserts
      0x1 - EDGE0_1 :
         STS0 asserts on rising edges of XBAR_OUT0
      0x2 - EDGE0_2 :
         STS0 asserts on falling edges of XBAR_OUT0
      0x3 - EDGE0_3 :
         STS0 asserts on rising and falling edges of XBAR_OUT0
 (rw) (01)  [0;32mSTS0[0m  - [04:04] -  Edge detection status for XBAR_OUT0
      0 - STS0_0 :
         Active edge not yet detected on XBAR_OUT0
      0x1 - STS0_1 :
         Active edge detected on XBAR_OUT0
 (rw) (01)  [0;32mDEN1[0m  - [08:08] -  DMA Enable for XBAR_OUT1
      0 - DEN1_0 :
         DMA disabled
      0x1 - DEN1_1 :
         DMA enabled
 (rw) (01)  [0;32mIEN1[0m  - [09:09] -  Interrupt Enable for XBAR_OUT1
      0 - IEN1_0 :
         Interrupt disabled
      0x1 - IEN1_1 :
         Interrupt enabled
 (rw) (02)  [0;32mEDGE1[0m  - [11:10] -  Active edge for edge detection on XBAR_OUT1
      0 - EDGE1_0 :
         STS1 never asserts
      0x1 - EDGE1_1 :
         STS1 asserts on rising edges of XBAR_OUT1
      0x2 - EDGE1_2 :
         STS1 asserts on falling edges of XBAR_OUT1
      0x3 - EDGE1_3 :
         STS1 asserts on rising and falling edges of XBAR_OUT1
 (rw) (01)  [0;32mSTS1[0m  - [12:12] -  Edge detection status for XBAR_OUT1
      0 - STS1_0 :
         Active edge not yet detected on XBAR_OUT1
      0x1 - STS1_1 :
         Active edge detected on XBAR_OUT1
</lang>
#### xbara1.ctrl0
<link=p.XBARA1.CTRL0>
#### p.xbarb2.sel0
<link=p.XBARB2.SEL0>
#### xbarb2.sel3
<link=p.XBARB2.SEL3>
#### XBARB2.SEL7
<link=p.XBARB2.SEL7>
#### p.XBARB3.SEL0
<lang=dft>
 (rw)  [1;33m0x403c4000[0m (0x403c4000 + 0x0000)
Crossbar B Select Register 0
 (rw) (06)  [0;32mSEL0[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT0 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (06)  [0;32mSEL1[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT1 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### p.xbarb3.sel7
<link=p.XBARB3.SEL7>
#### XBARB3.SEL7
<link=p.XBARB3.SEL7>
#### enc1.filt
<link=p.ENC1.FILT>
#### ENC1.LPOS
<link=p.ENC1.LPOS>
#### p.enc1.ctrl2
<link=p.ENC1.CTRL2>
#### p.ENC1.LCOMP
<lang=dft>
 (rw)  [1;33m0x403c8026[0m (0x403c8000 + 0x0026)
Lower Position Compare Register
 (rw) (16)  [0;32mCOMP[0m  - [15:00] -  This read/write register contains the lower (least significant) half of the pos
 ition compare register
</lang>
#### p.enc2.posdh
<link=p.ENC2.POSDH>
#### p.enc2.upos
<link=p.ENC2.UPOS>
#### p.enc2.linit
<link=p.ENC2.LINIT>
#### p.ENC2.UCOMP
<lang=dft>
 (rw)  [1;33m0x403cc024[0m (0x403cc000 + 0x0024)
Upper Position Compare Register
 (rw) (16)  [0;32mCOMP[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the posi
 tion compare register
</lang>
#### ENC2.LCOMP
<link=p.ENC2.LCOMP>
#### p.enc3
<link=p.ENC3>
#### enc3.ctrl
<link=p.ENC3.CTRL>
#### p.ENC3.POSDH
<lang=dft>
 (ro)  [1;33m0x403d0008[0m (0x403d0000 + 0x0008)
Position Difference Hold Register
 (ro) (16)  [0;32mPOSDH[0m  - [15:00] -  This read-only register contains a snapshot of the value of the POSD register
</lang>
#### p.enc3.posdh
<link=p.ENC3.POSDH>
#### enc3.posdh
<link=p.ENC3.POSDH>
#### p.ENC3.CTRL2
<lang=dft>
 (rw)  [1;33m0x403d001e[0m (0x403d0000 + 0x001e)
Control 2 Register
 (rw) (01)  [0;32mUPDHLD[0m  - [00:00] -  Update Hold Registers
      0 - UPDHLD_0 :
         Disable updates of hold registers on rising edge of TRIGGER
      0x1 - UPDHLD_1 :
         Enable updates of hold registers on rising edge of TRIGGER
 (rw) (01)  [0;32mUPDPOS[0m  - [01:01] -  Update Position Registers
      0 - UPDPOS_0 :
         No action for POSD, REV, UPOS and LPOS on rising edge of TRIGGER
      0x1 - UPDPOS_1 :
         Clear POSD, REV, UPOS and LPOS on rising edge of TRIGGER
 (rw) (01)  [0;32mMOD[0m  - [02:02] -  Enable Modulo Counting
      0 - MOD_0 :
         Disable modulo counting
      0x1 - MOD_1 :
         Enable modulo counting
 (ro) (01)  [0;32mDIR[0m  - [03:03] -  Count Direction Flag
      0 - DIR_0 :
         Last count was in the down direction
      0x1 - DIR_1 :
         Last count was in the up direction
 (rw) (01)  [0;32mRUIE[0m  - [04:04] -  Roll-under Interrupt Enable
      0 - RUIE_0 :
         Roll-under interrupt is disabled
      0x1 - RUIE_1 :
         Roll-under interrupt is enabled
 (rw) (01)  [0;32mRUIRQ[0m  - [05:05] -  Roll-under Interrupt Request
      0 - RUIRQ_0 :
         No roll-under has occurred
      0x1 - RUIRQ_1 :
         Roll-under has occurred
 (rw) (01)  [0;32mROIE[0m  - [06:06] -  Roll-over Interrupt Enable
      0 - ROIE_0 :
         Roll-over interrupt is disabled
      0x1 - ROIE_1 :
         Roll-over interrupt is enabled
 (rw) (01)  [0;32mROIRQ[0m  - [07:07] -  Roll-over Interrupt Request
      0 - ROIRQ_0 :
         No roll-over has occurred
      0x1 - ROIRQ_1 :
         Roll-over has occurred
 (rw) (01)  [0;32mREVMOD[0m  - [08:08] -  Revolution Counter Modulus Enable
      0 - REVMOD_0 :
         Use INDEX pulse to increment/decrement revolution counter (REV).
      0x1 - REVMOD_1 :
         Use modulus counting roll-over/under to increment/decrement revolution 
         counter (REV).
 (rw) (01)  [0;32mOUTCTL[0m  - [09:09] -  Output Control
      0 - OUTCTL_0 :
         POSMATCH pulses when a match occurs between the position counters (POS)
          and the compare value (COMP).
      0x1 - OUTCTL_1 :
         POSMATCH pulses when the UPOS, LPOS, REV, or POSD registers are read.
 (rw) (01)  [0;32mSABIE[0m  - [10:10] -  Simultaneous PHASEA and PHASEB Change Interrupt Enable
      0 - SABIE_0 :
         Simultaneous PHASEA and PHASEB change interrupt disabled.
      0x1 - SABIE_1 :
         Simultaneous PHASEA and PHASEB change interrupt enabled.
 (rw) (01)  [0;32mSABIRQ[0m  - [11:11] -  Simultaneous PHASEA and PHASEB Change Interrupt Request
      0 - SABIRQ_0 :
         No simultaneous change of PHASEA and PHASEB has occurred.
      0x1 - SABIRQ_1 :
         A simultaneous change of PHASEA and PHASEB has occurred.
</lang>
#### p.ENC3.UMOD
<lang=dft>
 (rw)  [1;33m0x403d0020[0m (0x403d0000 + 0x0020)
Upper Modulus Register
 (rw) (16)  [0;32mMOD[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the modu
 lus register
</lang>
#### p.enc3.lmod
<link=p.ENC3.LMOD>
#### p.ENC4.WTR
<lang=dft>
 (rw)  [1;33m0x403d4004[0m (0x403d4000 + 0x0004)
Watchdog Timeout Register
 (rw) (16)  [0;32mWDOG[0m  - [15:00] -  WDOG[15:0] is a binary representation of the number of clock cycles plus one th
 at the watchdog timer counts before timing out and optionally generating an int
 errupt
</lang>
#### ENC4.POSDH
<link=p.ENC4.POSDH>
#### p.ENC4.UPOSH
<lang=dft>
 (ro)  [1;33m0x403d4012[0m (0x403d4000 + 0x0012)
Upper Position Hold Register
 (ro) (16)  [0;32mPOSH[0m  - [15:00] -  This read-only register contains a snapshot of the UPOS register.
</lang>
#### ENC4.UPOSH
<link=p.ENC4.UPOSH>
#### p.enc4.uinit
<link=p.ENC4.UINIT>
#### p.ENC4.IMR
<lang=dft>
 (ro)  [1;33m0x403d401a[0m (0x403d4000 + 0x001a)
Input Monitor Register
 (ro) (01)  [0;32mHOME[0m  - [00:00] -  This is the raw HOME input.
 (ro) (01)  [0;32mINDEX[0m  - [01:01] -  This is the raw INDEX input.
 (ro) (01)  [0;32mPHB[0m  - [02:02] -  This is the raw PHASEB input.
 (ro) (01)  [0;32mPHA[0m  - [03:03] -  This is the raw PHASEA input.
 (ro) (01)  [0;32mFHOM[0m  - [04:04] -  This is the filtered version of HOME input.
 (ro) (01)  [0;32mFIND[0m  - [05:05] -  This is the filtered version of INDEX input.
 (ro) (01)  [0;32mFPHB[0m  - [06:06] -  This is the filtered version of PHASEB input.
 (ro) (01)  [0;32mFPHA[0m  - [07:07] -  This is the filtered version of PHASEA input.
</lang>
#### enc4.tst
<link=p.ENC4.TST>
#### p.PWM1.SM0VAL0
<lang=dft>
 (rw)  [1;33m0x403dc00a[0m (0x403dc000 + 0x000a)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### p.pwm1.sm0fracval5
<link=p.PWM1.SM0FRACVAL5>
#### pwm1.sm0fracval5
<link=p.PWM1.SM0FRACVAL5>
#### pwm1.sm0val5
<link=p.PWM1.SM0VAL5>
#### PWM1.SM0STS
<link=p.PWM1.SM0STS>
#### PWM1.SM0INTEN
<link=p.PWM1.SM0INTEN>
#### pwm1.sm0dismap1
<link=p.PWM1.SM0DISMAP1>
#### pwm1.sm0captctrlb
<link=p.PWM1.SM0CAPTCTRLB>
#### p.PWM1.SM0CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403dc04a[0m (0x403dc000 + 0x004a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### PWM1.SM0CVAL3
<link=p.PWM1.SM0CVAL3>
#### p.pwm1.sm0cval5
<link=p.PWM1.SM0CVAL5>
#### p.pwm1.sm1init
<link=p.PWM1.SM1INIT>
#### p.PWM1.SM1CTRL
<lang=dft>
 (rw)  [1;33m0x403dc066[0m (0x403dc000 + 0x0066)
Control Register
 (rw) (01)  [0;32mDBLEN[0m  - [00:00] -  Double Switching Enable
      0 - DBLEN_0 :
         Double switching disabled.
      0x1 - DBLEN_1 :
         Double switching enabled.
 (rw) (01)  [0;32mDBLX[0m  - [01:01] -  PWMX Double Switching Enable
      0 - DBLX_0 :
         PWMX double pulse disabled.
      0x1 - DBLX_1 :
         PWMX double pulse enabled.
 (rw) (01)  [0;32mLDMOD[0m  - [02:02] -  Load Mode Select
      0 - LDMOD_0 :
         Buffered registers of this submodule are loaded and take effect at the 
         next PWM reload if MCTRL[LDOK] is set.
      0x1 - LDMOD_1 :
         Buffered registers of this submodule are loaded and take effect immedia
         tely upon MCTRL[LDOK] being set. In this case it is not necessary to se
         t CTRL[FULL] or CTRL[HALF].
 (rw) (01)  [0;32mSPLIT[0m  - [03:03] -  Split the DBLPWM signal to PWMA and PWMB
      0 - SPLIT_0 :
         DBLPWM is not split. PWMA and PWMB each have double pulses.
      0x1 - SPLIT_1 :
         DBLPWM is split to PWMA and PWMB.
 (rw) (03)  [0;32mPRSC[0m  - [06:04] -  Prescaler
      0 - PRSC_0 :
         PWM clock frequency = fclk
      0x1 - PRSC_1 :
         PWM clock frequency = fclk/2
      0x2 - PRSC_2 :
         PWM clock frequency = fclk/4
      0x3 - PRSC_3 :
         PWM clock frequency = fclk/8
      0x4 - PRSC_4 :
         PWM clock frequency = fclk/16
      0x5 - PRSC_5 :
         PWM clock frequency = fclk/32
      0x6 - PRSC_6 :
         PWM clock frequency = fclk/64
      0x7 - PRSC_7 :
         PWM clock frequency = fclk/128
 (rw) (01)  [0;32mCOMPMODE[0m  - [07:07] -  Compare Mode
      0 - COMPMODE_0 :
         The VAL* registers and the PWM counter are compared using an "equal to"
          method. This means that PWM edges are only produced when the counter i
         s equal to one of the VAL* register values. This implies that a PWMA ou
         tput that is high at the end of a period will maintain this state until
          a match with VAL3 clears the output in the following period.
      0x1 - COMPMODE_1 :
         The VAL* registers and the PWM counter are compared using an "equal to 
         or greater than" method. This means that PWM edges are produced when th
         e counter is equal to or greater than one of the VAL* register values. 
         This implies that a PWMA output that is high at the end of a period cou
         ld go low at the start of the next period if the starting counter value
          is greater than (but not necessarily equal to) the new VAL3 value.
 (ro) (02)  [0;32mDT[0m  - [09:08] -  Deadtime
 (rw) (01)  [0;32mFULL[0m  - [10:10] -  Full Cycle Reload
      0 - FULL_0 :
         Full-cycle reloads disabled.
      0x1 - FULL_1 :
         Full-cycle reloads enabled.
 (rw) (01)  [0;32mHALF[0m  - [11:11] -  Half Cycle Reload
      0 - HALF_0 :
         Half-cycle reloads disabled.
      0x1 - HALF_1 :
         Half-cycle reloads enabled.
 (rw) (04)  [0;32mLDFQ[0m  - [15:12] -  Load Frequency
      0 - LDFQ_0 :
         Every PWM opportunity
      0x1 - LDFQ_1 :
         Every 2 PWM opportunities
      0x2 - LDFQ_2 :
         Every 3 PWM opportunities
      0x3 - LDFQ_3 :
         Every 4 PWM opportunities
      0x4 - LDFQ_4 :
         Every 5 PWM opportunities
      0x5 - LDFQ_5 :
         Every 6 PWM opportunities
      0x6 - LDFQ_6 :
         Every 7 PWM opportunities
      0x7 - LDFQ_7 :
         Every 8 PWM opportunities
      0x8 - LDFQ_8 :
         Every 9 PWM opportunities
      0x9 - LDFQ_9 :
         Every 10 PWM opportunities
      0xA - LDFQ_10 :
         Every 11 PWM opportunities
      0xB - LDFQ_11 :
         Every 12 PWM opportunities
      0xC - LDFQ_12 :
         Every 13 PWM opportunities
      0xD - LDFQ_13 :
         Every 14 PWM opportunities
      0xE - LDFQ_14 :
         Every 15 PWM opportunities
      0xF - LDFQ_15 :
         Every 16 PWM opportunities
</lang>
#### p.PWM1.SM1VAL1
<lang=dft>
 (rw)  [1;33m0x403dc06e[0m (0x403dc000 + 0x006e)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### p.PWM1.SM1FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403dc070[0m (0x403dc000 + 0x0070)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### pwm1.sm1val4
<link=p.PWM1.SM1VAL4>
#### p.PWM1.SM1CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403dc09a[0m (0x403dc000 + 0x009a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.PWM1.SM1CAPTCTRLX
<lang=dft>
 (rw)  [1;33m0x403dc09c[0m (0x403dc000 + 0x009c)
Capture Control X Register
 (rw) (01)  [0;32mARMX[0m  - [00:00] -  Arm X
      0 - ARMX_0 :
         Input capture operation is disabled.
      0x1 - ARMX_1 :
         Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
 (rw) (01)  [0;32mONESHOTX[0m  - [01:01] -  One Shot Mode Aux
      0 - ONESHOTX_0 :
         Free running mode is selected. If both capture circuits are enabled, th
         en capture circuit 0 is armed first after the ARMX bit is set. Once a c
         apture occurs, capture circuit 0 is disarmed and capture circuit 1 is a
         rmed. After capture circuit 1 performs a capture, it is disarmed and ca
         pture circuit 0 is re-armed. The process continues indefinitely.If only
          one of the capture circuits is enabled, then captures continue indefin
         itely on the enabled capture circuit.
      0x1 - ONESHOTX_1 :
         One shot mode is selected. If both capture circuits are enabled, then c
         apture circuit 0 is armed first after the ARMX bit is set. Once a captu
         re occurs, capture circuit 0 is disarmed and capture circuit 1 is armed
         . After capture circuit 1 performs a capture, it is disarmed and the AR
         MX bit is cleared. No further captures will be performed until the ARMX
          bit is set again.If only one of the capture circuits is enabled, then 
         a single capture will occur on the enabled capture circuit and the ARMX
          bit is then cleared.
 (rw) (02)  [0;32mEDGX0[0m  - [03:02] -  Edge X 0
      0 - EDGX0_0 :
         Disabled
      0x1 - EDGX0_1 :
         Capture falling edges
      0x2 - EDGX0_2 :
         Capture rising edges
      0x3 - EDGX0_3 :
         Capture any edge
 (rw) (02)  [0;32mEDGX1[0m  - [05:04] -  Edge X 1
      0 - EDGX1_0 :
         Disabled
      0x1 - EDGX1_1 :
         Capture falling edges
      0x2 - EDGX1_2 :
         Capture rising edges
      0x3 - EDGX1_3 :
         Capture any edge
 (rw) (01)  [0;32mINP_SELX[0m  - [06:06] -  Input Select X
      0 - INP_SELX_0 :
         Raw PWM_X input signal selected as source.
      0x1 - INP_SELX_1 :
         Output of edge counter/compare selected as source. Note that when this 
         bitfield is set to 1, the internal edge counter is enabled and the risi
         ng and/or falling edges specified by the CAPTCTRLX[EDGX0] and CAPTCTRLX
         [EDGX1] fields are ignored. The software must still place a value other
          than 00 in either or both of the CAPTCTLRX[EDGX0] and/or CAPTCTRLX[EDG
         X1] fields in order to enable one or both of the capture registers.
 (rw) (01)  [0;32mEDGCNTX_EN[0m  - [07:07] -  Edge Counter X Enable
      0 - EDGCNTX_EN_0 :
         Edge counter disabled and held in reset
      0x1 - EDGCNTX_EN_1 :
         Edge counter enabled
 (rw) (02)  [0;32mCFXWM[0m  - [09:08] -  Capture X FIFOs Water Mark
 (ro) (03)  [0;32mCX0CNT[0m  - [12:10] -  Capture X0 FIFO Word Count
 (ro) (03)  [0;32mCX1CNT[0m  - [15:13] -  Capture X1 FIFO Word Count
</lang>
#### p.pwm1.sm1cval0cyc
<link=p.PWM1.SM1CVAL0CYC>
#### pwm1.sm1cval0cyc
<link=p.PWM1.SM1CVAL0CYC>
#### p.pwm1.sm1cval2
<link=p.PWM1.SM1CVAL2>
#### PWM1.SM1CVAL5
<link=p.PWM1.SM1CVAL5>
#### p.pwm1.sm2cnt
<link=p.PWM1.SM2CNT>
#### pwm1.sm2cnt
<link=p.PWM1.SM2CNT>
#### p.pwm1.sm2ctrl2
<link=p.PWM1.SM2CTRL2>
#### p.PWM1.SM2CTRL
<lang=dft>
 (rw)  [1;33m0x403dc0c6[0m (0x403dc000 + 0x00c6)
Control Register
 (rw) (01)  [0;32mDBLEN[0m  - [00:00] -  Double Switching Enable
      0 - DBLEN_0 :
         Double switching disabled.
      0x1 - DBLEN_1 :
         Double switching enabled.
 (rw) (01)  [0;32mDBLX[0m  - [01:01] -  PWMX Double Switching Enable
      0 - DBLX_0 :
         PWMX double pulse disabled.
      0x1 - DBLX_1 :
         PWMX double pulse enabled.
 (rw) (01)  [0;32mLDMOD[0m  - [02:02] -  Load Mode Select
      0 - LDMOD_0 :
         Buffered registers of this submodule are loaded and take effect at the 
         next PWM reload if MCTRL[LDOK] is set.
      0x1 - LDMOD_1 :
         Buffered registers of this submodule are loaded and take effect immedia
         tely upon MCTRL[LDOK] being set. In this case it is not necessary to se
         t CTRL[FULL] or CTRL[HALF].
 (rw) (01)  [0;32mSPLIT[0m  - [03:03] -  Split the DBLPWM signal to PWMA and PWMB
      0 - SPLIT_0 :
         DBLPWM is not split. PWMA and PWMB each have double pulses.
      0x1 - SPLIT_1 :
         DBLPWM is split to PWMA and PWMB.
 (rw) (03)  [0;32mPRSC[0m  - [06:04] -  Prescaler
      0 - PRSC_0 :
         PWM clock frequency = fclk
      0x1 - PRSC_1 :
         PWM clock frequency = fclk/2
      0x2 - PRSC_2 :
         PWM clock frequency = fclk/4
      0x3 - PRSC_3 :
         PWM clock frequency = fclk/8
      0x4 - PRSC_4 :
         PWM clock frequency = fclk/16
      0x5 - PRSC_5 :
         PWM clock frequency = fclk/32
      0x6 - PRSC_6 :
         PWM clock frequency = fclk/64
      0x7 - PRSC_7 :
         PWM clock frequency = fclk/128
 (rw) (01)  [0;32mCOMPMODE[0m  - [07:07] -  Compare Mode
      0 - COMPMODE_0 :
         The VAL* registers and the PWM counter are compared using an "equal to"
          method. This means that PWM edges are only produced when the counter i
         s equal to one of the VAL* register values. This implies that a PWMA ou
         tput that is high at the end of a period will maintain this state until
          a match with VAL3 clears the output in the following period.
      0x1 - COMPMODE_1 :
         The VAL* registers and the PWM counter are compared using an "equal to 
         or greater than" method. This means that PWM edges are produced when th
         e counter is equal to or greater than one of the VAL* register values. 
         This implies that a PWMA output that is high at the end of a period cou
         ld go low at the start of the next period if the starting counter value
          is greater than (but not necessarily equal to) the new VAL3 value.
 (ro) (02)  [0;32mDT[0m  - [09:08] -  Deadtime
 (rw) (01)  [0;32mFULL[0m  - [10:10] -  Full Cycle Reload
      0 - FULL_0 :
         Full-cycle reloads disabled.
      0x1 - FULL_1 :
         Full-cycle reloads enabled.
 (rw) (01)  [0;32mHALF[0m  - [11:11] -  Half Cycle Reload
      0 - HALF_0 :
         Half-cycle reloads disabled.
      0x1 - HALF_1 :
         Half-cycle reloads enabled.
 (rw) (04)  [0;32mLDFQ[0m  - [15:12] -  Load Frequency
      0 - LDFQ_0 :
         Every PWM opportunity
      0x1 - LDFQ_1 :
         Every 2 PWM opportunities
      0x2 - LDFQ_2 :
         Every 3 PWM opportunities
      0x3 - LDFQ_3 :
         Every 4 PWM opportunities
      0x4 - LDFQ_4 :
         Every 5 PWM opportunities
      0x5 - LDFQ_5 :
         Every 6 PWM opportunities
      0x6 - LDFQ_6 :
         Every 7 PWM opportunities
      0x7 - LDFQ_7 :
         Every 8 PWM opportunities
      0x8 - LDFQ_8 :
         Every 9 PWM opportunities
      0x9 - LDFQ_9 :
         Every 10 PWM opportunities
      0xA - LDFQ_10 :
         Every 11 PWM opportunities
      0xB - LDFQ_11 :
         Every 12 PWM opportunities
      0xC - LDFQ_12 :
         Every 13 PWM opportunities
      0xD - LDFQ_13 :
         Every 14 PWM opportunities
      0xE - LDFQ_14 :
         Every 15 PWM opportunities
      0xF - LDFQ_15 :
         Every 16 PWM opportunities
</lang>
#### p.pwm1.sm2val2
<link=p.PWM1.SM2VAL2>
#### p.PWM1.SM2DMAEN
<lang=dft>
 (rw)  [1;33m0x403dc0e8[0m (0x403dc000 + 0x00e8)
DMA Enable Register
 (rw) (01)  [0;32mCX0DE[0m  - [00:00] -  Capture X0 FIFO DMA Enable
 (rw) (01)  [0;32mCX1DE[0m  - [01:01] -  Capture X1 FIFO DMA Enable
 (rw) (01)  [0;32mCB0DE[0m  - [02:02] -  Capture B0 FIFO DMA Enable
 (rw) (01)  [0;32mCB1DE[0m  - [03:03] -  Capture B1 FIFO DMA Enable
 (rw) (01)  [0;32mCA0DE[0m  - [04:04] -  Capture A0 FIFO DMA Enable
 (rw) (01)  [0;32mCA1DE[0m  - [05:05] -  Capture A1 FIFO DMA Enable
 (rw) (02)  [0;32mCAPTDE[0m  - [07:06] -  Capture DMA Enable Source Select
      0 - CAPTDE_0 :
         Read DMA requests disabled.
      0x1 - CAPTDE_1 :
         Exceeding a FIFO watermark sets the DMA read request. This requires at 
         least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DM
         AEN[CX1DE], or DMAEN[CX0DE] to also be set in order to determine to whi
         ch watermark(s) the DMA request is sensitive.
      0x2 - CAPTDE_2 :
         A local sync (VAL1 matches counter) sets the read DMA request.
      0x3 - CAPTDE_3 :
         A local reload (STS[RF] being set) sets the read DMA request.
 (rw) (01)  [0;32mFAND[0m  - [08:08] -  FIFO Watermark AND Control
      0 - FAND_0 :
         Selected FIFO watermarks are OR'ed together.
      0x1 - FAND_1 :
         Selected FIFO watermarks are AND'ed together.
 (rw) (01)  [0;32mVALDE[0m  - [09:09] -  Value Registers DMA Enable
      0 - VALDE_0 :
         DMA write requests disabled
      0x1 - VALDE_1 :
         DMA write requests for the VALx and FRACVALx registers enabled
</lang>
#### p.PWM1.SM2TCTRL
<lang=dft>
 (rw)  [1;33m0x403dc0ea[0m (0x403dc000 + 0x00ea)
Output Trigger Control Register
 (rw) (06)  [0;32mOUT_TRIG_EN[0m  - [05:00] -  Output Trigger Enables
      0 - OUT_TRIG_EN_0 :
         PWM_OUT_TRIGx will not set when the counter value matches the VALx valu
         e.
      0x1 - OUT_TRIG_EN_1 :
         PWM_OUT_TRIGx will set when the counter value matches the VALx value.
 (rw) (01)  [0;32mTRGFRQ[0m  - [12:12] -  Trigger frequency
      0 - TRGFRQ_0 :
         Trigger outputs are generated during every PWM period even if the PWM i
         s not reloaded every period due to CTRL[LDFQ] being non-zero.
      0x1 - TRGFRQ_1 :
         Trigger outputs are generated only during the final PWM period prior to
          a reload opportunity when the PWM is not reloaded every period due to 
         CTRL[LDFQ] being non-zero.
 (rw) (01)  [0;32mPWBOT1[0m  - [14:14] -  Output Trigger 1 Source Select
      0 - PWBOT1_0 :
         Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
      0x1 - PWBOT1_1 :
         Route the PWMB output to the PWM_OUT_TRIG1 port.
 (rw) (01)  [0;32mPWAOT0[0m  - [15:15] -  Output Trigger 0 Source Select
      0 - PWAOT0_0 :
         Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
      0x1 - PWAOT0_1 :
         Route the PWMA output to the PWM_OUT_TRIG0 port.
</lang>
#### p.PWM1.SM2DISMAP0
<lang=dft>
 (rw)  [1;33m0x403dc0ec[0m (0x403dc000 + 0x00ec)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### p.pwm1.sm2captcompa
<link=p.PWM1.SM2CAPTCOMPA>
#### p.pwm1.sm2cval2
<link=p.PWM1.SM2CVAL2>
#### p.pwm1.sm2cval2cyc
<link=p.PWM1.SM2CVAL2CYC>
#### pwm1.sm2cval5cyc
<link=p.PWM1.SM2CVAL5CYC>
#### pwm1.sm3init
<link=p.PWM1.SM3INIT>
#### p.pwm1.sm3fracval2
<link=p.PWM1.SM3FRACVAL2>
#### p.PWM1.SM3FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403dc134[0m (0x403dc000 + 0x0134)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### p.pwm1.sm3val3
<link=p.PWM1.SM3VAL3>
#### p.pwm1.sm3dmaen
<link=p.PWM1.SM3DMAEN>
#### p.pwm1.sm3dismap0
<link=p.PWM1.SM3DISMAP0>
#### PWM1.SM3DTCNT0
<link=p.PWM1.SM3DTCNT0>
#### p.PWM1.SM3DTCNT1
<lang=dft>
 (rw)  [1;33m0x403dc152[0m (0x403dc000 + 0x0152)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### p.pwm1.sm3captctrlb
<link=p.PWM1.SM3CAPTCTRLB>
#### pwm1.sm3captctrlx
<link=p.PWM1.SM3CAPTCTRLX>
#### p.pwm1.sm3cval1cyc
<link=p.PWM1.SM3CVAL1CYC>
#### PWM1.SM3CVAL2
<link=p.PWM1.SM3CVAL2>
#### PWM1.MASK
<link=p.PWM1.MASK>
#### PWM1.FFILT0
<link=p.PWM1.FFILT0>
#### pwm2.sm0cnt
<link=p.PWM2.SM0CNT>
#### p.PWM2.SM0FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e0014[0m (0x403e0000 + 0x0014)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### pwm2.sm0frctrl
<link=p.PWM2.SM0FRCTRL>
#### pwm2.sm0inten
<link=p.PWM2.SM0INTEN>
#### p.pwm2.sm0tctrl
<link=p.PWM2.SM0TCTRL>
#### p.PWM2.SM0DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e0032[0m (0x403e0000 + 0x0032)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### PWM2.SM0CAPTCOMPA
<link=p.PWM2.SM0CAPTCOMPA>
#### p.pwm2.sm0cval0
<link=p.PWM2.SM0CVAL0>
#### p.pwm2.sm0cval2cyc
<link=p.PWM2.SM0CVAL2CYC>
#### p.pwm2.sm1init
<link=p.PWM2.SM1INIT>
#### p.PWM2.SM1CTRL
<lang=dft>
 (rw)  [1;33m0x403e0066[0m (0x403e0000 + 0x0066)
Control Register
 (rw) (01)  [0;32mDBLEN[0m  - [00:00] -  Double Switching Enable
      0 - DBLEN_0 :
         Double switching disabled.
      0x1 - DBLEN_1 :
         Double switching enabled.
 (rw) (01)  [0;32mDBLX[0m  - [01:01] -  PWMX Double Switching Enable
      0 - DBLX_0 :
         PWMX double pulse disabled.
      0x1 - DBLX_1 :
         PWMX double pulse enabled.
 (rw) (01)  [0;32mLDMOD[0m  - [02:02] -  Load Mode Select
      0 - LDMOD_0 :
         Buffered registers of this submodule are loaded and take effect at the 
         next PWM reload if MCTRL[LDOK] is set.
      0x1 - LDMOD_1 :
         Buffered registers of this submodule are loaded and take effect immedia
         tely upon MCTRL[LDOK] being set. In this case it is not necessary to se
         t CTRL[FULL] or CTRL[HALF].
 (rw) (01)  [0;32mSPLIT[0m  - [03:03] -  Split the DBLPWM signal to PWMA and PWMB
      0 - SPLIT_0 :
         DBLPWM is not split. PWMA and PWMB each have double pulses.
      0x1 - SPLIT_1 :
         DBLPWM is split to PWMA and PWMB.
 (rw) (03)  [0;32mPRSC[0m  - [06:04] -  Prescaler
      0 - PRSC_0 :
         PWM clock frequency = fclk
      0x1 - PRSC_1 :
         PWM clock frequency = fclk/2
      0x2 - PRSC_2 :
         PWM clock frequency = fclk/4
      0x3 - PRSC_3 :
         PWM clock frequency = fclk/8
      0x4 - PRSC_4 :
         PWM clock frequency = fclk/16
      0x5 - PRSC_5 :
         PWM clock frequency = fclk/32
      0x6 - PRSC_6 :
         PWM clock frequency = fclk/64
      0x7 - PRSC_7 :
         PWM clock frequency = fclk/128
 (rw) (01)  [0;32mCOMPMODE[0m  - [07:07] -  Compare Mode
      0 - COMPMODE_0 :
         The VAL* registers and the PWM counter are compared using an "equal to"
          method. This means that PWM edges are only produced when the counter i
         s equal to one of the VAL* register values. This implies that a PWMA ou
         tput that is high at the end of a period will maintain this state until
          a match with VAL3 clears the output in the following period.
      0x1 - COMPMODE_1 :
         The VAL* registers and the PWM counter are compared using an "equal to 
         or greater than" method. This means that PWM edges are produced when th
         e counter is equal to or greater than one of the VAL* register values. 
         This implies that a PWMA output that is high at the end of a period cou
         ld go low at the start of the next period if the starting counter value
          is greater than (but not necessarily equal to) the new VAL3 value.
 (ro) (02)  [0;32mDT[0m  - [09:08] -  Deadtime
 (rw) (01)  [0;32mFULL[0m  - [10:10] -  Full Cycle Reload
      0 - FULL_0 :
         Full-cycle reloads disabled.
      0x1 - FULL_1 :
         Full-cycle reloads enabled.
 (rw) (01)  [0;32mHALF[0m  - [11:11] -  Half Cycle Reload
      0 - HALF_0 :
         Half-cycle reloads disabled.
      0x1 - HALF_1 :
         Half-cycle reloads enabled.
 (rw) (04)  [0;32mLDFQ[0m  - [15:12] -  Load Frequency
      0 - LDFQ_0 :
         Every PWM opportunity
      0x1 - LDFQ_1 :
         Every 2 PWM opportunities
      0x2 - LDFQ_2 :
         Every 3 PWM opportunities
      0x3 - LDFQ_3 :
         Every 4 PWM opportunities
      0x4 - LDFQ_4 :
         Every 5 PWM opportunities
      0x5 - LDFQ_5 :
         Every 6 PWM opportunities
      0x6 - LDFQ_6 :
         Every 7 PWM opportunities
      0x7 - LDFQ_7 :
         Every 8 PWM opportunities
      0x8 - LDFQ_8 :
         Every 9 PWM opportunities
      0x9 - LDFQ_9 :
         Every 10 PWM opportunities
      0xA - LDFQ_10 :
         Every 11 PWM opportunities
      0xB - LDFQ_11 :
         Every 12 PWM opportunities
      0xC - LDFQ_12 :
         Every 13 PWM opportunities
      0xD - LDFQ_13 :
         Every 14 PWM opportunities
      0xE - LDFQ_14 :
         Every 15 PWM opportunities
      0xF - LDFQ_15 :
         Every 16 PWM opportunities
</lang>
#### p.pwm2.sm1fracval3
<link=p.PWM2.SM1FRACVAL3>
#### p.PWM2.SM1DMAEN
<lang=dft>
 (rw)  [1;33m0x403e0088[0m (0x403e0000 + 0x0088)
DMA Enable Register
 (rw) (01)  [0;32mCX0DE[0m  - [00:00] -  Capture X0 FIFO DMA Enable
 (rw) (01)  [0;32mCX1DE[0m  - [01:01] -  Capture X1 FIFO DMA Enable
 (rw) (01)  [0;32mCB0DE[0m  - [02:02] -  Capture B0 FIFO DMA Enable
 (rw) (01)  [0;32mCB1DE[0m  - [03:03] -  Capture B1 FIFO DMA Enable
 (rw) (01)  [0;32mCA0DE[0m  - [04:04] -  Capture A0 FIFO DMA Enable
 (rw) (01)  [0;32mCA1DE[0m  - [05:05] -  Capture A1 FIFO DMA Enable
 (rw) (02)  [0;32mCAPTDE[0m  - [07:06] -  Capture DMA Enable Source Select
      0 - CAPTDE_0 :
         Read DMA requests disabled.
      0x1 - CAPTDE_1 :
         Exceeding a FIFO watermark sets the DMA read request. This requires at 
         least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DM
         AEN[CX1DE], or DMAEN[CX0DE] to also be set in order to determine to whi
         ch watermark(s) the DMA request is sensitive.
      0x2 - CAPTDE_2 :
         A local sync (VAL1 matches counter) sets the read DMA request.
      0x3 - CAPTDE_3 :
         A local reload (STS[RF] being set) sets the read DMA request.
 (rw) (01)  [0;32mFAND[0m  - [08:08] -  FIFO Watermark AND Control
      0 - FAND_0 :
         Selected FIFO watermarks are OR'ed together.
      0x1 - FAND_1 :
         Selected FIFO watermarks are AND'ed together.
 (rw) (01)  [0;32mVALDE[0m  - [09:09] -  Value Registers DMA Enable
      0 - VALDE_0 :
         DMA write requests disabled
      0x1 - VALDE_1 :
         DMA write requests for the VALx and FRACVALx registers enabled
</lang>
#### PWM2.SM1DMAEN
<link=p.PWM2.SM1DMAEN>
#### p.PWM2.SM1TCTRL
<lang=dft>
 (rw)  [1;33m0x403e008a[0m (0x403e0000 + 0x008a)
Output Trigger Control Register
 (rw) (06)  [0;32mOUT_TRIG_EN[0m  - [05:00] -  Output Trigger Enables
      0 - OUT_TRIG_EN_0 :
         PWM_OUT_TRIGx will not set when the counter value matches the VALx valu
         e.
      0x1 - OUT_TRIG_EN_1 :
         PWM_OUT_TRIGx will set when the counter value matches the VALx value.
 (rw) (01)  [0;32mTRGFRQ[0m  - [12:12] -  Trigger frequency
      0 - TRGFRQ_0 :
         Trigger outputs are generated during every PWM period even if the PWM i
         s not reloaded every period due to CTRL[LDFQ] being non-zero.
      0x1 - TRGFRQ_1 :
         Trigger outputs are generated only during the final PWM period prior to
          a reload opportunity when the PWM is not reloaded every period due to 
         CTRL[LDFQ] being non-zero.
 (rw) (01)  [0;32mPWBOT1[0m  - [14:14] -  Output Trigger 1 Source Select
      0 - PWBOT1_0 :
         Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
      0x1 - PWBOT1_1 :
         Route the PWMB output to the PWM_OUT_TRIG1 port.
 (rw) (01)  [0;32mPWAOT0[0m  - [15:15] -  Output Trigger 0 Source Select
      0 - PWAOT0_0 :
         Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
      0x1 - PWAOT0_1 :
         Route the PWMA output to the PWM_OUT_TRIG0 port.
</lang>
#### p.PWM2.SM1DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e008c[0m (0x403e0000 + 0x008c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### PWM2.SM1CAPTCTRLB
<link=p.PWM2.SM1CAPTCTRLB>
#### pwm2.sm1captcompx
<link=p.PWM2.SM1CAPTCOMPX>
#### pwm2.sm1cval0
<link=p.PWM2.SM1CVAL0>
#### PWM2.SM1CVAL1CYC
<link=p.PWM2.SM1CVAL1CYC>
#### p.PWM2.SM2CTRL
<lang=dft>
 (rw)  [1;33m0x403e00c6[0m (0x403e0000 + 0x00c6)
Control Register
 (rw) (01)  [0;32mDBLEN[0m  - [00:00] -  Double Switching Enable
      0 - DBLEN_0 :
         Double switching disabled.
      0x1 - DBLEN_1 :
         Double switching enabled.
 (rw) (01)  [0;32mDBLX[0m  - [01:01] -  PWMX Double Switching Enable
      0 - DBLX_0 :
         PWMX double pulse disabled.
      0x1 - DBLX_1 :
         PWMX double pulse enabled.
 (rw) (01)  [0;32mLDMOD[0m  - [02:02] -  Load Mode Select
      0 - LDMOD_0 :
         Buffered registers of this submodule are loaded and take effect at the 
         next PWM reload if MCTRL[LDOK] is set.
      0x1 - LDMOD_1 :
         Buffered registers of this submodule are loaded and take effect immedia
         tely upon MCTRL[LDOK] being set. In this case it is not necessary to se
         t CTRL[FULL] or CTRL[HALF].
 (rw) (01)  [0;32mSPLIT[0m  - [03:03] -  Split the DBLPWM signal to PWMA and PWMB
      0 - SPLIT_0 :
         DBLPWM is not split. PWMA and PWMB each have double pulses.
      0x1 - SPLIT_1 :
         DBLPWM is split to PWMA and PWMB.
 (rw) (03)  [0;32mPRSC[0m  - [06:04] -  Prescaler
      0 - PRSC_0 :
         PWM clock frequency = fclk
      0x1 - PRSC_1 :
         PWM clock frequency = fclk/2
      0x2 - PRSC_2 :
         PWM clock frequency = fclk/4
      0x3 - PRSC_3 :
         PWM clock frequency = fclk/8
      0x4 - PRSC_4 :
         PWM clock frequency = fclk/16
      0x5 - PRSC_5 :
         PWM clock frequency = fclk/32
      0x6 - PRSC_6 :
         PWM clock frequency = fclk/64
      0x7 - PRSC_7 :
         PWM clock frequency = fclk/128
 (rw) (01)  [0;32mCOMPMODE[0m  - [07:07] -  Compare Mode
      0 - COMPMODE_0 :
         The VAL* registers and the PWM counter are compared using an "equal to"
          method. This means that PWM edges are only produced when the counter i
         s equal to one of the VAL* register values. This implies that a PWMA ou
         tput that is high at the end of a period will maintain this state until
          a match with VAL3 clears the output in the following period.
      0x1 - COMPMODE_1 :
         The VAL* registers and the PWM counter are compared using an "equal to 
         or greater than" method. This means that PWM edges are produced when th
         e counter is equal to or greater than one of the VAL* register values. 
         This implies that a PWMA output that is high at the end of a period cou
         ld go low at the start of the next period if the starting counter value
          is greater than (but not necessarily equal to) the new VAL3 value.
 (ro) (02)  [0;32mDT[0m  - [09:08] -  Deadtime
 (rw) (01)  [0;32mFULL[0m  - [10:10] -  Full Cycle Reload
      0 - FULL_0 :
         Full-cycle reloads disabled.
      0x1 - FULL_1 :
         Full-cycle reloads enabled.
 (rw) (01)  [0;32mHALF[0m  - [11:11] -  Half Cycle Reload
      0 - HALF_0 :
         Half-cycle reloads disabled.
      0x1 - HALF_1 :
         Half-cycle reloads enabled.
 (rw) (04)  [0;32mLDFQ[0m  - [15:12] -  Load Frequency
      0 - LDFQ_0 :
         Every PWM opportunity
      0x1 - LDFQ_1 :
         Every 2 PWM opportunities
      0x2 - LDFQ_2 :
         Every 3 PWM opportunities
      0x3 - LDFQ_3 :
         Every 4 PWM opportunities
      0x4 - LDFQ_4 :
         Every 5 PWM opportunities
      0x5 - LDFQ_5 :
         Every 6 PWM opportunities
      0x6 - LDFQ_6 :
         Every 7 PWM opportunities
      0x7 - LDFQ_7 :
         Every 8 PWM opportunities
      0x8 - LDFQ_8 :
         Every 9 PWM opportunities
      0x9 - LDFQ_9 :
         Every 10 PWM opportunities
      0xA - LDFQ_10 :
         Every 11 PWM opportunities
      0xB - LDFQ_11 :
         Every 12 PWM opportunities
      0xC - LDFQ_12 :
         Every 13 PWM opportunities
      0xD - LDFQ_13 :
         Every 14 PWM opportunities
      0xE - LDFQ_14 :
         Every 15 PWM opportunities
      0xF - LDFQ_15 :
         Every 16 PWM opportunities
</lang>
#### p.PWM2.SM2VAL1
<lang=dft>
 (rw)  [1;33m0x403e00ce[0m (0x403e0000 + 0x00ce)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### pwm2.sm2val1
<link=p.PWM2.SM2VAL1>
#### p.PWM2.SM2FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e00d0[0m (0x403e0000 + 0x00d0)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### pwm2.sm2dismap0
<link=p.PWM2.SM2DISMAP0>
#### p.pwm2.sm2captctrla
<link=p.PWM2.SM2CAPTCTRLA>
#### pwm2.sm2captctrlb
<link=p.PWM2.SM2CAPTCTRLB>
#### p.PWM2.SM2CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e00fa[0m (0x403e0000 + 0x00fa)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.PWM2.SM2CAPTCTRLX
<lang=dft>
 (rw)  [1;33m0x403e00fc[0m (0x403e0000 + 0x00fc)
Capture Control X Register
 (rw) (01)  [0;32mARMX[0m  - [00:00] -  Arm X
      0 - ARMX_0 :
         Input capture operation is disabled.
      0x1 - ARMX_1 :
         Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
 (rw) (01)  [0;32mONESHOTX[0m  - [01:01] -  One Shot Mode Aux
      0 - ONESHOTX_0 :
         Free running mode is selected. If both capture circuits are enabled, th
         en capture circuit 0 is armed first after the ARMX bit is set. Once a c
         apture occurs, capture circuit 0 is disarmed and capture circuit 1 is a
         rmed. After capture circuit 1 performs a capture, it is disarmed and ca
         pture circuit 0 is re-armed. The process continues indefinitely.If only
          one of the capture circuits is enabled, then captures continue indefin
         itely on the enabled capture circuit.
      0x1 - ONESHOTX_1 :
         One shot mode is selected. If both capture circuits are enabled, then c
         apture circuit 0 is armed first after the ARMX bit is set. Once a captu
         re occurs, capture circuit 0 is disarmed and capture circuit 1 is armed
         . After capture circuit 1 performs a capture, it is disarmed and the AR
         MX bit is cleared. No further captures will be performed until the ARMX
          bit is set again.If only one of the capture circuits is enabled, then 
         a single capture will occur on the enabled capture circuit and the ARMX
          bit is then cleared.
 (rw) (02)  [0;32mEDGX0[0m  - [03:02] -  Edge X 0
      0 - EDGX0_0 :
         Disabled
      0x1 - EDGX0_1 :
         Capture falling edges
      0x2 - EDGX0_2 :
         Capture rising edges
      0x3 - EDGX0_3 :
         Capture any edge
 (rw) (02)  [0;32mEDGX1[0m  - [05:04] -  Edge X 1
      0 - EDGX1_0 :
         Disabled
      0x1 - EDGX1_1 :
         Capture falling edges
      0x2 - EDGX1_2 :
         Capture rising edges
      0x3 - EDGX1_3 :
         Capture any edge
 (rw) (01)  [0;32mINP_SELX[0m  - [06:06] -  Input Select X
      0 - INP_SELX_0 :
         Raw PWM_X input signal selected as source.
      0x1 - INP_SELX_1 :
         Output of edge counter/compare selected as source. Note that when this 
         bitfield is set to 1, the internal edge counter is enabled and the risi
         ng and/or falling edges specified by the CAPTCTRLX[EDGX0] and CAPTCTRLX
         [EDGX1] fields are ignored. The software must still place a value other
          than 00 in either or both of the CAPTCTLRX[EDGX0] and/or CAPTCTRLX[EDG
         X1] fields in order to enable one or both of the capture registers.
 (rw) (01)  [0;32mEDGCNTX_EN[0m  - [07:07] -  Edge Counter X Enable
      0 - EDGCNTX_EN_0 :
         Edge counter disabled and held in reset
      0x1 - EDGCNTX_EN_1 :
         Edge counter enabled
 (rw) (02)  [0;32mCFXWM[0m  - [09:08] -  Capture X FIFOs Water Mark
 (ro) (03)  [0;32mCX0CNT[0m  - [12:10] -  Capture X0 FIFO Word Count
 (ro) (03)  [0;32mCX1CNT[0m  - [15:13] -  Capture X1 FIFO Word Count
</lang>
#### PWM2.SM2CAPTCOMPX
<link=p.PWM2.SM2CAPTCOMPX>
#### PWM2.SM2CVAL4
<link=p.PWM2.SM2CVAL4>
#### pwm2.sm2cval4cyc
<link=p.PWM2.SM2CVAL4CYC>
#### p.pwm2.sm3ctrl
<link=p.PWM2.SM3CTRL>
#### p.PWM2.SM3VAL0
<lang=dft>
 (rw)  [1;33m0x403e012a[0m (0x403e0000 + 0x012a)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### pwm2.sm3val0
<link=p.PWM2.SM3VAL0>
#### p.pwm2.sm3fracval1
<link=p.PWM2.SM3FRACVAL1>
#### p.pwm2.sm3frctrl
<link=p.PWM2.SM3FRCTRL>
#### pwm2.sm3inten
<link=p.PWM2.SM3INTEN>
#### p.pwm2.sm3captctrlb
<link=p.PWM2.SM3CAPTCTRLB>
#### PWM2.SM3CVAL0
<link=p.PWM2.SM3CVAL0>
#### p.PWM2.SM3CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e016a[0m (0x403e0000 + 0x016a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### PWM2.FTST0
<link=p.PWM2.FTST0>
#### p.pwm3.sm0cnt
<link=p.PWM3.SM0CNT>
#### pwm3.sm0init
<link=p.PWM3.SM0INIT>
#### p.pwm3.sm0ctrl2
<link=p.PWM3.SM0CTRL2>
#### pwm3.sm0ctrl2
<link=p.PWM3.SM0CTRL2>
#### p.PWM3.SM0CTRL
<lang=dft>
 (rw)  [1;33m0x403e4006[0m (0x403e4000 + 0x0006)
Control Register
 (rw) (01)  [0;32mDBLEN[0m  - [00:00] -  Double Switching Enable
      0 - DBLEN_0 :
         Double switching disabled.
      0x1 - DBLEN_1 :
         Double switching enabled.
 (rw) (01)  [0;32mDBLX[0m  - [01:01] -  PWMX Double Switching Enable
      0 - DBLX_0 :
         PWMX double pulse disabled.
      0x1 - DBLX_1 :
         PWMX double pulse enabled.
 (rw) (01)  [0;32mLDMOD[0m  - [02:02] -  Load Mode Select
      0 - LDMOD_0 :
         Buffered registers of this submodule are loaded and take effect at the 
         next PWM reload if MCTRL[LDOK] is set.
      0x1 - LDMOD_1 :
         Buffered registers of this submodule are loaded and take effect immedia
         tely upon MCTRL[LDOK] being set. In this case it is not necessary to se
         t CTRL[FULL] or CTRL[HALF].
 (rw) (01)  [0;32mSPLIT[0m  - [03:03] -  Split the DBLPWM signal to PWMA and PWMB
      0 - SPLIT_0 :
         DBLPWM is not split. PWMA and PWMB each have double pulses.
      0x1 - SPLIT_1 :
         DBLPWM is split to PWMA and PWMB.
 (rw) (03)  [0;32mPRSC[0m  - [06:04] -  Prescaler
      0 - PRSC_0 :
         PWM clock frequency = fclk
      0x1 - PRSC_1 :
         PWM clock frequency = fclk/2
      0x2 - PRSC_2 :
         PWM clock frequency = fclk/4
      0x3 - PRSC_3 :
         PWM clock frequency = fclk/8
      0x4 - PRSC_4 :
         PWM clock frequency = fclk/16
      0x5 - PRSC_5 :
         PWM clock frequency = fclk/32
      0x6 - PRSC_6 :
         PWM clock frequency = fclk/64
      0x7 - PRSC_7 :
         PWM clock frequency = fclk/128
 (rw) (01)  [0;32mCOMPMODE[0m  - [07:07] -  Compare Mode
      0 - COMPMODE_0 :
         The VAL* registers and the PWM counter are compared using an "equal to"
          method. This means that PWM edges are only produced when the counter i
         s equal to one of the VAL* register values. This implies that a PWMA ou
         tput that is high at the end of a period will maintain this state until
          a match with VAL3 clears the output in the following period.
      0x1 - COMPMODE_1 :
         The VAL* registers and the PWM counter are compared using an "equal to 
         or greater than" method. This means that PWM edges are produced when th
         e counter is equal to or greater than one of the VAL* register values. 
         This implies that a PWMA output that is high at the end of a period cou
         ld go low at the start of the next period if the starting counter value
          is greater than (but not necessarily equal to) the new VAL3 value.
 (ro) (02)  [0;32mDT[0m  - [09:08] -  Deadtime
 (rw) (01)  [0;32mFULL[0m  - [10:10] -  Full Cycle Reload
      0 - FULL_0 :
         Full-cycle reloads disabled.
      0x1 - FULL_1 :
         Full-cycle reloads enabled.
 (rw) (01)  [0;32mHALF[0m  - [11:11] -  Half Cycle Reload
      0 - HALF_0 :
         Half-cycle reloads disabled.
      0x1 - HALF_1 :
         Half-cycle reloads enabled.
 (rw) (04)  [0;32mLDFQ[0m  - [15:12] -  Load Frequency
      0 - LDFQ_0 :
         Every PWM opportunity
      0x1 - LDFQ_1 :
         Every 2 PWM opportunities
      0x2 - LDFQ_2 :
         Every 3 PWM opportunities
      0x3 - LDFQ_3 :
         Every 4 PWM opportunities
      0x4 - LDFQ_4 :
         Every 5 PWM opportunities
      0x5 - LDFQ_5 :
         Every 6 PWM opportunities
      0x6 - LDFQ_6 :
         Every 7 PWM opportunities
      0x7 - LDFQ_7 :
         Every 8 PWM opportunities
      0x8 - LDFQ_8 :
         Every 9 PWM opportunities
      0x9 - LDFQ_9 :
         Every 10 PWM opportunities
      0xA - LDFQ_10 :
         Every 11 PWM opportunities
      0xB - LDFQ_11 :
         Every 12 PWM opportunities
      0xC - LDFQ_12 :
         Every 13 PWM opportunities
      0xD - LDFQ_13 :
         Every 14 PWM opportunities
      0xE - LDFQ_14 :
         Every 15 PWM opportunities
      0xF - LDFQ_15 :
         Every 16 PWM opportunities
</lang>
#### p.pwm3.sm0val2
<link=p.PWM3.SM0VAL2>
#### pwm3.sm0fracval4
<link=p.PWM3.SM0FRACVAL4>
#### p.PWM3.SM0DMAEN
<lang=dft>
 (rw)  [1;33m0x403e4028[0m (0x403e4000 + 0x0028)
DMA Enable Register
 (rw) (01)  [0;32mCX0DE[0m  - [00:00] -  Capture X0 FIFO DMA Enable
 (rw) (01)  [0;32mCX1DE[0m  - [01:01] -  Capture X1 FIFO DMA Enable
 (rw) (01)  [0;32mCB0DE[0m  - [02:02] -  Capture B0 FIFO DMA Enable
 (rw) (01)  [0;32mCB1DE[0m  - [03:03] -  Capture B1 FIFO DMA Enable
 (rw) (01)  [0;32mCA0DE[0m  - [04:04] -  Capture A0 FIFO DMA Enable
 (rw) (01)  [0;32mCA1DE[0m  - [05:05] -  Capture A1 FIFO DMA Enable
 (rw) (02)  [0;32mCAPTDE[0m  - [07:06] -  Capture DMA Enable Source Select
      0 - CAPTDE_0 :
         Read DMA requests disabled.
      0x1 - CAPTDE_1 :
         Exceeding a FIFO watermark sets the DMA read request. This requires at 
         least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DM
         AEN[CX1DE], or DMAEN[CX0DE] to also be set in order to determine to whi
         ch watermark(s) the DMA request is sensitive.
      0x2 - CAPTDE_2 :
         A local sync (VAL1 matches counter) sets the read DMA request.
      0x3 - CAPTDE_3 :
         A local reload (STS[RF] being set) sets the read DMA request.
 (rw) (01)  [0;32mFAND[0m  - [08:08] -  FIFO Watermark AND Control
      0 - FAND_0 :
         Selected FIFO watermarks are OR'ed together.
      0x1 - FAND_1 :
         Selected FIFO watermarks are AND'ed together.
 (rw) (01)  [0;32mVALDE[0m  - [09:09] -  Value Registers DMA Enable
      0 - VALDE_0 :
         DMA write requests disabled
      0x1 - VALDE_1 :
         DMA write requests for the VALx and FRACVALx registers enabled
</lang>
#### PWM3.SM0DMAEN
<link=p.PWM3.SM0DMAEN>
#### p.PWM3.SM0TCTRL
<lang=dft>
 (rw)  [1;33m0x403e402a[0m (0x403e4000 + 0x002a)
Output Trigger Control Register
 (rw) (06)  [0;32mOUT_TRIG_EN[0m  - [05:00] -  Output Trigger Enables
      0 - OUT_TRIG_EN_0 :
         PWM_OUT_TRIGx will not set when the counter value matches the VALx valu
         e.
      0x1 - OUT_TRIG_EN_1 :
         PWM_OUT_TRIGx will set when the counter value matches the VALx value.
 (rw) (01)  [0;32mTRGFRQ[0m  - [12:12] -  Trigger frequency
      0 - TRGFRQ_0 :
         Trigger outputs are generated during every PWM period even if the PWM i
         s not reloaded every period due to CTRL[LDFQ] being non-zero.
      0x1 - TRGFRQ_1 :
         Trigger outputs are generated only during the final PWM period prior to
          a reload opportunity when the PWM is not reloaded every period due to 
         CTRL[LDFQ] being non-zero.
 (rw) (01)  [0;32mPWBOT1[0m  - [14:14] -  Output Trigger 1 Source Select
      0 - PWBOT1_0 :
         Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
      0x1 - PWBOT1_1 :
         Route the PWMB output to the PWM_OUT_TRIG1 port.
 (rw) (01)  [0;32mPWAOT0[0m  - [15:15] -  Output Trigger 0 Source Select
      0 - PWAOT0_0 :
         Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
      0x1 - PWAOT0_1 :
         Route the PWMA output to the PWM_OUT_TRIG0 port.
</lang>
#### p.PWM3.SM0DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e402c[0m (0x403e4000 + 0x002c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### p.pwm3.sm0captcompa
<link=p.PWM3.SM0CAPTCOMPA>
#### PWM3.SM0CAPTCTRLB
<link=p.PWM3.SM0CAPTCTRLB>
#### PWM3.SM0CVAL1CYC
<link=p.PWM3.SM0CVAL1CYC>
#### p.pwm3.sm0cval2
<link=p.PWM3.SM0CVAL2>
#### p.pwm3.sm0cval2cyc
<link=p.PWM3.SM0CVAL2CYC>
#### pwm3.sm0cval4
<link=p.PWM3.SM0CVAL4>
#### p.pwm3.sm1fracval2
<link=p.PWM3.SM1FRACVAL2>
#### p.PWM3.SM1FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e4074[0m (0x403e4000 + 0x0074)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### p.pwm3.sm1val3
<link=p.PWM3.SM1VAL3>
#### p.pwm3.sm1dmaen
<link=p.PWM3.SM1DMAEN>
#### p.pwm3.sm1dismap0
<link=p.PWM3.SM1DISMAP0>
#### p.PWM3.SM1DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e4092[0m (0x403e4000 + 0x0092)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### PWM3.SM1CAPTCOMPA
<link=p.PWM3.SM1CAPTCOMPA>
#### p.pwm3.sm1captctrlb
<link=p.PWM3.SM1CAPTCTRLB>
#### pwm3.sm1cval0cyc
<link=p.PWM3.SM1CVAL0CYC>
#### p.pwm3.sm1cval1cyc
<link=p.PWM3.SM1CVAL1CYC>
#### p.PWM3.SM2VAL0
<lang=dft>
 (rw)  [1;33m0x403e40ca[0m (0x403e4000 + 0x00ca)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### p.pwm3.sm2fracval5
<link=p.PWM3.SM2FRACVAL5>
#### PWM3.SM2CVAL0
<link=p.PWM3.SM2CVAL0>
#### p.PWM3.SM2CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e410a[0m (0x403e4000 + 0x010a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### pwm3.sm2cval3cyc
<link=p.PWM3.SM2CVAL3CYC>
#### pwm3.sm2cval4cyc
<link=p.PWM3.SM2CVAL4CYC>
#### p.pwm3.sm2cval5
<link=p.PWM3.SM2CVAL5>
#### p.pwm3.sm3init
<link=p.PWM3.SM3INIT>
#### p.PWM3.SM3CTRL
<lang=dft>
 (rw)  [1;33m0x403e4126[0m (0x403e4000 + 0x0126)
Control Register
 (rw) (01)  [0;32mDBLEN[0m  - [00:00] -  Double Switching Enable
      0 - DBLEN_0 :
         Double switching disabled.
      0x1 - DBLEN_1 :
         Double switching enabled.
 (rw) (01)  [0;32mDBLX[0m  - [01:01] -  PWMX Double Switching Enable
      0 - DBLX_0 :
         PWMX double pulse disabled.
      0x1 - DBLX_1 :
         PWMX double pulse enabled.
 (rw) (01)  [0;32mLDMOD[0m  - [02:02] -  Load Mode Select
      0 - LDMOD_0 :
         Buffered registers of this submodule are loaded and take effect at the 
         next PWM reload if MCTRL[LDOK] is set.
      0x1 - LDMOD_1 :
         Buffered registers of this submodule are loaded and take effect immedia
         tely upon MCTRL[LDOK] being set. In this case it is not necessary to se
         t CTRL[FULL] or CTRL[HALF].
 (rw) (01)  [0;32mSPLIT[0m  - [03:03] -  Split the DBLPWM signal to PWMA and PWMB
      0 - SPLIT_0 :
         DBLPWM is not split. PWMA and PWMB each have double pulses.
      0x1 - SPLIT_1 :
         DBLPWM is split to PWMA and PWMB.
 (rw) (03)  [0;32mPRSC[0m  - [06:04] -  Prescaler
      0 - PRSC_0 :
         PWM clock frequency = fclk
      0x1 - PRSC_1 :
         PWM clock frequency = fclk/2
      0x2 - PRSC_2 :
         PWM clock frequency = fclk/4
      0x3 - PRSC_3 :
         PWM clock frequency = fclk/8
      0x4 - PRSC_4 :
         PWM clock frequency = fclk/16
      0x5 - PRSC_5 :
         PWM clock frequency = fclk/32
      0x6 - PRSC_6 :
         PWM clock frequency = fclk/64
      0x7 - PRSC_7 :
         PWM clock frequency = fclk/128
 (rw) (01)  [0;32mCOMPMODE[0m  - [07:07] -  Compare Mode
      0 - COMPMODE_0 :
         The VAL* registers and the PWM counter are compared using an "equal to"
          method. This means that PWM edges are only produced when the counter i
         s equal to one of the VAL* register values. This implies that a PWMA ou
         tput that is high at the end of a period will maintain this state until
          a match with VAL3 clears the output in the following period.
      0x1 - COMPMODE_1 :
         The VAL* registers and the PWM counter are compared using an "equal to 
         or greater than" method. This means that PWM edges are produced when th
         e counter is equal to or greater than one of the VAL* register values. 
         This implies that a PWMA output that is high at the end of a period cou
         ld go low at the start of the next period if the starting counter value
          is greater than (but not necessarily equal to) the new VAL3 value.
 (ro) (02)  [0;32mDT[0m  - [09:08] -  Deadtime
 (rw) (01)  [0;32mFULL[0m  - [10:10] -  Full Cycle Reload
      0 - FULL_0 :
         Full-cycle reloads disabled.
      0x1 - FULL_1 :
         Full-cycle reloads enabled.
 (rw) (01)  [0;32mHALF[0m  - [11:11] -  Half Cycle Reload
      0 - HALF_0 :
         Half-cycle reloads disabled.
      0x1 - HALF_1 :
         Half-cycle reloads enabled.
 (rw) (04)  [0;32mLDFQ[0m  - [15:12] -  Load Frequency
      0 - LDFQ_0 :
         Every PWM opportunity
      0x1 - LDFQ_1 :
         Every 2 PWM opportunities
      0x2 - LDFQ_2 :
         Every 3 PWM opportunities
      0x3 - LDFQ_3 :
         Every 4 PWM opportunities
      0x4 - LDFQ_4 :
         Every 5 PWM opportunities
      0x5 - LDFQ_5 :
         Every 6 PWM opportunities
      0x6 - LDFQ_6 :
         Every 7 PWM opportunities
      0x7 - LDFQ_7 :
         Every 8 PWM opportunities
      0x8 - LDFQ_8 :
         Every 9 PWM opportunities
      0x9 - LDFQ_9 :
         Every 10 PWM opportunities
      0xA - LDFQ_10 :
         Every 11 PWM opportunities
      0xB - LDFQ_11 :
         Every 12 PWM opportunities
      0xC - LDFQ_12 :
         Every 13 PWM opportunities
      0xD - LDFQ_13 :
         Every 14 PWM opportunities
      0xE - LDFQ_14 :
         Every 15 PWM opportunities
      0xF - LDFQ_15 :
         Every 16 PWM opportunities
</lang>
#### p.PWM3.SM3VAL1
<lang=dft>
 (rw)  [1;33m0x403e412e[0m (0x403e4000 + 0x012e)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### p.PWM3.SM3FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e4130[0m (0x403e4000 + 0x0130)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### pwm3.sm3captcompa
<link=p.PWM3.SM3CAPTCOMPA>
#### p.PWM3.SM3CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e415a[0m (0x403e4000 + 0x015a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.PWM3.SM3CAPTCTRLX
<lang=dft>
 (rw)  [1;33m0x403e415c[0m (0x403e4000 + 0x015c)
Capture Control X Register
 (rw) (01)  [0;32mARMX[0m  - [00:00] -  Arm X
      0 - ARMX_0 :
         Input capture operation is disabled.
      0x1 - ARMX_1 :
         Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
 (rw) (01)  [0;32mONESHOTX[0m  - [01:01] -  One Shot Mode Aux
      0 - ONESHOTX_0 :
         Free running mode is selected. If both capture circuits are enabled, th
         en capture circuit 0 is armed first after the ARMX bit is set. Once a c
         apture occurs, capture circuit 0 is disarmed and capture circuit 1 is a
         rmed. After capture circuit 1 performs a capture, it is disarmed and ca
         pture circuit 0 is re-armed. The process continues indefinitely.If only
          one of the capture circuits is enabled, then captures continue indefin
         itely on the enabled capture circuit.
      0x1 - ONESHOTX_1 :
         One shot mode is selected. If both capture circuits are enabled, then c
         apture circuit 0 is armed first after the ARMX bit is set. Once a captu
         re occurs, capture circuit 0 is disarmed and capture circuit 1 is armed
         . After capture circuit 1 performs a capture, it is disarmed and the AR
         MX bit is cleared. No further captures will be performed until the ARMX
          bit is set again.If only one of the capture circuits is enabled, then 
         a single capture will occur on the enabled capture circuit and the ARMX
          bit is then cleared.
 (rw) (02)  [0;32mEDGX0[0m  - [03:02] -  Edge X 0
      0 - EDGX0_0 :
         Disabled
      0x1 - EDGX0_1 :
         Capture falling edges
      0x2 - EDGX0_2 :
         Capture rising edges
      0x3 - EDGX0_3 :
         Capture any edge
 (rw) (02)  [0;32mEDGX1[0m  - [05:04] -  Edge X 1
      0 - EDGX1_0 :
         Disabled
      0x1 - EDGX1_1 :
         Capture falling edges
      0x2 - EDGX1_2 :
         Capture rising edges
      0x3 - EDGX1_3 :
         Capture any edge
 (rw) (01)  [0;32mINP_SELX[0m  - [06:06] -  Input Select X
      0 - INP_SELX_0 :
         Raw PWM_X input signal selected as source.
      0x1 - INP_SELX_1 :
         Output of edge counter/compare selected as source. Note that when this 
         bitfield is set to 1, the internal edge counter is enabled and the risi
         ng and/or falling edges specified by the CAPTCTRLX[EDGX0] and CAPTCTRLX
         [EDGX1] fields are ignored. The software must still place a value other
          than 00 in either or both of the CAPTCTLRX[EDGX0] and/or CAPTCTRLX[EDG
         X1] fields in order to enable one or both of the capture registers.
 (rw) (01)  [0;32mEDGCNTX_EN[0m  - [07:07] -  Edge Counter X Enable
      0 - EDGCNTX_EN_0 :
         Edge counter disabled and held in reset
      0x1 - EDGCNTX_EN_1 :
         Edge counter enabled
 (rw) (02)  [0;32mCFXWM[0m  - [09:08] -  Capture X FIFOs Water Mark
 (ro) (03)  [0;32mCX0CNT[0m  - [12:10] -  Capture X0 FIFO Word Count
 (ro) (03)  [0;32mCX1CNT[0m  - [15:13] -  Capture X1 FIFO Word Count
</lang>
#### PWM3.SM3CAPTCOMPX
<link=p.PWM3.SM3CAPTCOMPX>
#### p.pwm3.sm3cval0cyc
<link=p.PWM3.SM3CVAL0CYC>
#### pwm3.sm3cval1cyc
<link=p.PWM3.SM3CVAL1CYC>
#### p.pwm3.sm3cval2
<link=p.PWM3.SM3CVAL2>
#### PWM3.SM3CVAL4
<link=p.PWM3.SM3CVAL4>
#### PWM3.SWCOUT
<link=p.PWM3.SWCOUT>
#### p.pwm3.fsts0
<link=p.PWM3.FSTS0>
#### pwm3.ffilt0
<link=p.PWM3.FFILT0>
#### p.PWM3.FTST0
<lang=dft>
 (rw)  [1;33m0x403e4192[0m (0x403e4000 + 0x0192)
Fault Test Register
 (rw) (01)  [0;32mFTEST[0m  - [00:00] -  Fault Test
      0 - FTEST_0 :
         No fault
      0x1 - FTEST_1 :
         Cause a simulated fault
</lang>
#### pwm4.sm0init
<link=p.PWM4.SM0INIT>
#### p.pwm4.sm0ctrl
<link=p.PWM4.SM0CTRL>
#### p.PWM4.SM0VAL4
<lang=dft>
 (rw)  [1;33m0x403e801a[0m (0x403e8000 + 0x001a)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### pwm4.sm0val5
<link=p.PWM4.SM0VAL5>
#### PWM4.SM0DISMAP1
<link=p.PWM4.SM0DISMAP1>
#### p.pwm4.sm0captctrlb
<link=p.PWM4.SM0CAPTCTRLB>
#### p.PWM4.SM0CVAL0
<lang=dft>
 (ro)  [1;33m0x403e8040[0m (0x403e8000 + 0x0040)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### p.pwm4.sm0cval1cyc
<link=p.PWM4.SM0CVAL1CYC>
#### p.pwm4.sm0cval2cyc
<link=p.PWM4.SM0CVAL2CYC>
#### p.PWM4.SM0CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403e8052[0m (0x403e8000 + 0x0052)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### p.pwm4.sm0cval5
<link=p.PWM4.SM0CVAL5>
#### pwm4.sm0cval5
<link=p.PWM4.SM0CVAL5>
#### p.PWM4.SM1INIT
<lang=dft>
 (rw)  [1;33m0x403e8062[0m (0x403e8000 + 0x0062)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### PWM4.SM1CTRL2
<link=p.PWM4.SM1CTRL2>
#### pwm4.sm1val4
<link=p.PWM4.SM1VAL4>
#### p.pwm4.sm1fracval5
<link=p.PWM4.SM1FRACVAL5>
#### p.PWM4.SM1VAL5
<lang=dft>
 (rw)  [1;33m0x403e807e[0m (0x403e8000 + 0x007e)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### p.PWM4.SM1DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e8092[0m (0x403e8000 + 0x0092)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### PWM4.SM1CAPTCTRLA
<link=p.PWM4.SM1CAPTCTRLA>
#### pwm4.sm1captcompb
<link=p.PWM4.SM1CAPTCOMPB>
#### p.pwm4.sm1cval5
<link=p.PWM4.SM1CVAL5>
#### pwm4.sm2ctrl
<link=p.PWM4.SM2CTRL>
#### p.pwm4.sm2val1
<link=p.PWM4.SM2VAL1>
#### p.pwm4.sm2inten
<link=p.PWM4.SM2INTEN>
#### p.PWM4.SM2DMAEN
<lang=dft>
 (rw)  [1;33m0x403e80e8[0m (0x403e8000 + 0x00e8)
DMA Enable Register
 (rw) (01)  [0;32mCX0DE[0m  - [00:00] -  Capture X0 FIFO DMA Enable
 (rw) (01)  [0;32mCX1DE[0m  - [01:01] -  Capture X1 FIFO DMA Enable
 (rw) (01)  [0;32mCB0DE[0m  - [02:02] -  Capture B0 FIFO DMA Enable
 (rw) (01)  [0;32mCB1DE[0m  - [03:03] -  Capture B1 FIFO DMA Enable
 (rw) (01)  [0;32mCA0DE[0m  - [04:04] -  Capture A0 FIFO DMA Enable
 (rw) (01)  [0;32mCA1DE[0m  - [05:05] -  Capture A1 FIFO DMA Enable
 (rw) (02)  [0;32mCAPTDE[0m  - [07:06] -  Capture DMA Enable Source Select
      0 - CAPTDE_0 :
         Read DMA requests disabled.
      0x1 - CAPTDE_1 :
         Exceeding a FIFO watermark sets the DMA read request. This requires at 
         least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DM
         AEN[CX1DE], or DMAEN[CX0DE] to also be set in order to determine to whi
         ch watermark(s) the DMA request is sensitive.
      0x2 - CAPTDE_2 :
         A local sync (VAL1 matches counter) sets the read DMA request.
      0x3 - CAPTDE_3 :
         A local reload (STS[RF] being set) sets the read DMA request.
 (rw) (01)  [0;32mFAND[0m  - [08:08] -  FIFO Watermark AND Control
      0 - FAND_0 :
         Selected FIFO watermarks are OR'ed together.
      0x1 - FAND_1 :
         Selected FIFO watermarks are AND'ed together.
 (rw) (01)  [0;32mVALDE[0m  - [09:09] -  Value Registers DMA Enable
      0 - VALDE_0 :
         DMA write requests disabled
      0x1 - VALDE_1 :
         DMA write requests for the VALx and FRACVALx registers enabled
</lang>
#### pwm4.sm2dismap0
<link=p.PWM4.SM2DISMAP0>
#### p.PWM4.SM2CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e80f8[0m (0x403e8000 + 0x00f8)
Capture Control B Register
 (rw) (01)  [0;32mARMB[0m  - [00:00] -  Arm B
      0 - ARMB_0 :
         Input capture operation is disabled.
      0x1 - ARMB_1 :
         Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
 (rw) (01)  [0;32mONESHOTB[0m  - [01:01] -  One Shot Mode B
      0 - ONESHOTB_0 :
         Free running mode is selected. If both capture circuits are enabled, th
         en capture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once 
         a capture occurs, capture circuit 0 is disarmed and capture circuit 1 i
         s armed. After capture circuit 1 performs a capture, it is disarmed and
          capture circuit 0 is re-armed. The process continues indefinitely.If o
         nly one of the capture circuits is enabled, then captures continue inde
         finitely on the enabled capture circuit.
      0x1 - ONESHOTB_1 :
         One shot mode is selected. If both capture circuits are enabled, then c
         apture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once a ca
         pture occurs, capture circuit 0 is disarmed and capture circuit 1 is ar
         med. After capture circuit 1 performs a capture, it is disarmed and CAP
         TCTRLB[ARMB] is cleared. No further captures will be performed until CA
         PTCTRLB[ARMB] is set again.If only one of the capture circuits is enabl
         ed, then a single capture will occur on the enabled capture circuit and
          CAPTCTRLB[ARMB] is then cleared.
 (rw) (02)  [0;32mEDGB0[0m  - [03:02] -  Edge B 0
      0 - EDGB0_0 :
         Disabled
      0x1 - EDGB0_1 :
         Capture falling edges
      0x2 - EDGB0_2 :
         Capture rising edges
      0x3 - EDGB0_3 :
         Capture any edge
 (rw) (02)  [0;32mEDGB1[0m  - [05:04] -  Edge B 1
      0 - EDGB1_0 :
         Disabled
      0x1 - EDGB1_1 :
         Capture falling edges
      0x2 - EDGB1_2 :
         Capture rising edges
      0x3 - EDGB1_3 :
         Capture any edge
 (rw) (01)  [0;32mINP_SELB[0m  - [06:06] -  Input Select B
      0 - INP_SELB_0 :
         Raw PWM_B input signal selected as source.
      0x1 - INP_SELB_1 :
         Output of edge counter/compare selected as source. Note that when this 
         bitfield is set to 1, the internal edge counter is enabled and the risi
         ng and/or falling edges specified by the CAPTCTRLB[EDGB0] and CAPTCTRLB
         [EDGB1] fields are ignored. The software must still place a value other
          than 00 in either or both of the CAPTCTLRB[EDGB0] and/or CAPTCTRLB[EDG
         B1] fields in order to enable one or both of the capture registers.
 (rw) (01)  [0;32mEDGCNTB_EN[0m  - [07:07] -  Edge Counter B Enable
      0 - EDGCNTB_EN_0 :
         Edge counter disabled and held in reset
      0x1 - EDGCNTB_EN_1 :
         Edge counter enabled
 (rw) (02)  [0;32mCFBWM[0m  - [09:08] -  Capture B FIFOs Water Mark
 (ro) (03)  [0;32mCB0CNT[0m  - [12:10] -  Capture B0 FIFO Word Count
 (ro) (03)  [0;32mCB1CNT[0m  - [15:13] -  Capture B1 FIFO Word Count
</lang>
#### PWM4.SM2CVAL1
<link=p.PWM4.SM2CVAL1>
#### p.PWM4.SM2CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e810a[0m (0x403e8000 + 0x010a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### PWM4.SM2CVAL2CYC
<link=p.PWM4.SM2CVAL2CYC>
#### p.PWM4.SM2CVAL5CYC
<lang=dft>
 (ro)  [1;33m0x403e8116[0m (0x403e8000 + 0x0116)
Capture Value 5 Cycle Register
 (ro) (04)  [0;32mCVAL5CYC[0m  - [03:00] -  CVAL5CYC
</lang>
#### pwm4.sm3init
<link=p.PWM4.SM3INIT>
#### p.pwm4.sm3val0
<link=p.PWM4.SM3VAL0>
#### PWM4.SM3OCTRL
<link=p.PWM4.SM3OCTRL>
#### p.PWM4.SM3STS
<lang=dft>
 (rw)  [1;33m0x403e8144[0m (0x403e8000 + 0x0144)
Status Register
 (rw) (06)  [0;32mCMPF[0m  - [05:00] -  Compare Flags
      0 - CMPF_0 :
         No compare event has occurred for a particular VALx value.
      0x1 - CMPF_1 :
         A compare event has occurred for a particular VALx value.
 (rw) (01)  [0;32mCFX0[0m  - [06:06] -  Capture Flag X0
 (rw) (01)  [0;32mCFX1[0m  - [07:07] -  Capture Flag X1
 (rw) (01)  [0;32mCFB0[0m  - [08:08] -  Capture Flag B0
 (rw) (01)  [0;32mCFB1[0m  - [09:09] -  Capture Flag B1
 (rw) (01)  [0;32mCFA0[0m  - [10:10] -  Capture Flag A0
 (rw) (01)  [0;32mCFA1[0m  - [11:11] -  Capture Flag A1
 (rw) (01)  [0;32mRF[0m  - [12:12] -  Reload Flag
      0 - RF_0 :
         No new reload cycle since last STS[RF] clearing
      0x1 - RF_1 :
         New reload cycle since last STS[RF] clearing
 (rw) (01)  [0;32mREF[0m  - [13:13] -  Reload Error Flag
      0 - REF_0 :
         No reload error occurred.
      0x1 - REF_1 :
         Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
 (ro) (01)  [0;32mRUF[0m  - [14:14] -  Registers Updated Flag
      0 - RUF_0 :
         No register update has occurred since last reload.
      0x1 - RUF_1 :
         At least one of the double buffered registers has been updated since th
         e last reload.
</lang>
#### p.pwm4.sm3inten
<link=p.PWM4.SM3INTEN>
#### p.PWM4.SM3DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e8152[0m (0x403e8000 + 0x0152)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### p.pwm4.sm3captctrlx
<link=p.PWM4.SM3CAPTCTRLX>
#### PWM4.SM3CVAL2
<link=p.PWM4.SM3CVAL2>
#### p.PWM4.SM3CVAL4
<lang=dft>
 (ro)  [1;33m0x403e8170[0m (0x403e8000 + 0x0170)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### pwm4.sm3cval4cyc
<link=p.PWM4.SM3CVAL4CYC>
#### PWM4.OUTEN
<link=p.PWM4.OUTEN>
#### p.PWM4.DTSRCSEL
<lang=dft>
 (rw)  [1;33m0x403e8186[0m (0x403e8000 + 0x0186)
PWM Source Select Register
 (rw) (02)  [0;32mSM0SEL45[0m  - [01:00] -  Submodule 0 PWM45 Control Select
      0 - SM0SEL45_0 :
         Generated SM0PWM45 signal is used by the deadtime logic.
      0x1 - SM0SEL45_1 :
         Inverted generated SM0PWM45 signal is used by the deadtime logic.
      0x2 - SM0SEL45_2 :
         SWCOUT[SM0OUT45] is used by the deadtime logic.
      0x3 - SM0SEL45_3 :
         PWM0_EXTB signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM0SEL23[0m  - [03:02] -  Submodule 0 PWM23 Control Select
      0 - SM0SEL23_0 :
         Generated SM0PWM23 signal is used by the deadtime logic.
      0x1 - SM0SEL23_1 :
         Inverted generated SM0PWM23 signal is used by the deadtime logic.
      0x2 - SM0SEL23_2 :
         SWCOUT[SM0OUT23] is used by the deadtime logic.
      0x3 - SM0SEL23_3 :
         PWM0_EXTA signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM1SEL45[0m  - [05:04] -  Submodule 1 PWM45 Control Select
      0 - SM1SEL45_0 :
         Generated SM1PWM45 signal is used by the deadtime logic.
      0x1 - SM1SEL45_1 :
         Inverted generated SM1PWM45 signal is used by the deadtime logic.
      0x2 - SM1SEL45_2 :
         SWCOUT[SM1OUT45] is used by the deadtime logic.
      0x3 - SM1SEL45_3 :
         PWM1_EXTB signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM1SEL23[0m  - [07:06] -  Submodule 1 PWM23 Control Select
      0 - SM1SEL23_0 :
         Generated SM1PWM23 signal is used by the deadtime logic.
      0x1 - SM1SEL23_1 :
         Inverted generated SM1PWM23 signal is used by the deadtime logic.
      0x2 - SM1SEL23_2 :
         SWCOUT[SM1OUT23] is used by the deadtime logic.
      0x3 - SM1SEL23_3 :
         PWM1_EXTA signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM2SEL45[0m  - [09:08] -  Submodule 2 PWM45 Control Select
      0 - SM2SEL45_0 :
         Generated SM2PWM45 signal is used by the deadtime logic.
      0x1 - SM2SEL45_1 :
         Inverted generated SM2PWM45 signal is used by the deadtime logic.
      0x2 - SM2SEL45_2 :
         SWCOUT[SM2OUT45] is used by the deadtime logic.
      0x3 - SM2SEL45_3 :
         PWM2_EXTB signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM2SEL23[0m  - [11:10] -  Submodule 2 PWM23 Control Select
      0 - SM2SEL23_0 :
         Generated SM2PWM23 signal is used by the deadtime logic.
      0x1 - SM2SEL23_1 :
         Inverted generated SM2PWM23 signal is used by the deadtime logic.
      0x2 - SM2SEL23_2 :
         SWCOUT[SM2OUT23] is used by the deadtime logic.
      0x3 - SM2SEL23_3 :
         PWM2_EXTA signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM3SEL45[0m  - [13:12] -  Submodule 3 PWM45 Control Select
      0 - SM3SEL45_0 :
         Generated SM3PWM45 signal is used by the deadtime logic.
      0x1 - SM3SEL45_1 :
         Inverted generated SM3PWM45 signal is used by the deadtime logic.
      0x2 - SM3SEL45_2 :
         SWCOUT[SM3OUT45] is used by the deadtime logic.
      0x3 - SM3SEL45_3 :
         PWM3_EXTB signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM3SEL23[0m  - [15:14] -  Submodule 3 PWM23 Control Select
      0 - SM3SEL23_0 :
         Generated SM3PWM23 signal is used by the deadtime logic.
      0x1 - SM3SEL23_1 :
         Inverted generated SM3PWM23 signal is used by the deadtime logic.
      0x2 - SM3SEL23_2 :
         SWCOUT[SM3OUT23] is used by the deadtime logic.
      0x3 - SM3SEL23_3 :
         PWM3_EXTA signal is used by the deadtime logic.
</lang>
#### p.pwm4.dtsrcsel
<link=p.PWM4.DTSRCSEL>
#### BEE.STATUS
<link=p.BEE.STATUS>
#### BEE.CTR_NONCE0_W1
<link=p.BEE.CTR_NONCE0_W1>
#### p.bee.ctr_nonce1_w0
<link=p.BEE.CTR_NONCE1_W0>
#### p.BEE.REGION1_TOP
<lang=dft>
 (rw)  [1;33m0x403ec040[0m (0x403ec000 + 0x0040)
no description available
 (rw) (32)  [0;32mREGION1_TOP[0m  - [31:00] -  Address upper limit of region1
</lang>
#### bee.region1_top
<link=p.BEE.REGION1_TOP>
#### p.lpi2c1.mcfgr0
<link=p.LPI2C1.MCFGR0>
#### p.lpi2c1.mfsr
<link=p.LPI2C1.MFSR>
#### p.LPI2C2.MTDR
<lang=dft>
 (rw)  [1;33m0x403f4060[0m (0x403f4000 + 0x0060)
Master Transmit Data Register
 (wo) (08)  [0;32mDATA[0m  - [07:00] -  Transmit Data
 (wo) (03)  [0;32mCMD[0m  - [10:08] -  Command Data
      0 - CMD_0 :
         Transmit DATA[7:0]
      0x1 - CMD_1 :
         Receive (DATA[7:0] + 1) bytes
      0x2 - CMD_2 :
         Generate STOP condition
      0x3 - CMD_3 :
         Receive and discard (DATA[7:0] + 1) bytes
      0x4 - CMD_4 :
         Generate (repeated) START and transmit address in DATA[7:0]
      0x5 - CMD_5 :
         Generate (repeated) START and transmit address in DATA[7:0]. This trans
         fer expects a NACK to be returned.
      0x6 - CMD_6 :
         Generate (repeated) START and transmit address in DATA[7:0] using high 
         speed mode
      0x7 - CMD_7 :
         Generate (repeated) START and transmit address in DATA[7:0] using high 
         speed mode. This transfer expects a NACK to be returned.
</lang>
#### p.LPI2C2.SIER
<lang=dft>
 (rw)  [1;33m0x403f4118[0m (0x403f4000 + 0x0118)
Slave Interrupt Enable Register
 (rw) (01)  [0;32mTDIE[0m  - [00:00] -  Transmit Data Interrupt Enable
      0 - TDIE_0 :
         Disabled
      0x1 - TDIE_1 :
         Enabled
 (rw) (01)  [0;32mRDIE[0m  - [01:01] -  Receive Data Interrupt Enable
      0 - RDIE_0 :
         Disabled
      0x1 - RDIE_1 :
         Enabled
 (rw) (01)  [0;32mAVIE[0m  - [02:02] -  Address Valid Interrupt Enable
      0 - AVIE_0 :
         Disabled
      0x1 - AVIE_1 :
         Enabled
 (rw) (01)  [0;32mTAIE[0m  - [03:03] -  Transmit ACK Interrupt Enable
      0 - TAIE_0 :
         Disabled
      0x1 - TAIE_1 :
         Enabled
 (rw) (01)  [0;32mRSIE[0m  - [08:08] -  Repeated Start Interrupt Enable
      0 - RSIE_0 :
         Disabled
      0x1 - RSIE_1 :
         Enabled
 (rw) (01)  [0;32mSDIE[0m  - [09:09] -  STOP Detect Interrupt Enable
      0 - SDIE_0 :
         Disabled
      0x1 - SDIE_1 :
         Enabled
 (rw) (01)  [0;32mBEIE[0m  - [10:10] -  Bit Error Interrupt Enable
      0 - BEIE_0 :
         Disabled
      0x1 - BEIE_1 :
         Enabled
 (rw) (01)  [0;32mFEIE[0m  - [11:11] -  FIFO Error Interrupt Enable
      0 - FEIE_0 :
         Disabled
      0x1 - FEIE_1 :
         Enabled
 (rw) (01)  [0;32mAM0IE[0m  - [12:12] -  Address Match 0 Interrupt Enable
      0 - AM0IE_0 :
         Enabled
      0x1 - AM0IE_1 :
         Disabled
 (rw) (01)  [0;32mAM1F[0m  - [13:13] -  Address Match 1 Interrupt Enable
      0 - AM1F_0 :
         Disabled
      0x1 - AM1F_1 :
         Enabled
 (rw) (01)  [0;32mGCIE[0m  - [14:14] -  General Call Interrupt Enable
      0 - GCIE_0 :
         Disabled
      0x1 - GCIE_1 :
         Enabled
 (rw) (01)  [0;32mSARIE[0m  - [15:15] -  SMBus Alert Response Interrupt Enable
      0 - SARIE_0 :
         Disabled
      0x1 - SARIE_1 :
         Enabled
</lang>
#### p.lpi2c2.sier
<link=p.LPI2C2.SIER>
#### LPI2C2.SAMR
<link=p.LPI2C2.SAMR>
#### p.LPI2C2.STDR
<lang=dft>
 (rw)  [1;33m0x403f4160[0m (0x403f4000 + 0x0160)
Slave Transmit Data Register
 (wo) (08)  [0;32mDATA[0m  - [07:00] -  Transmit Data
</lang>
#### LPI2C3.MFSR
<link=p.LPI2C3.MFSR>
#### p.LPI2C3.MRDR
<lang=dft>
 (ro)  [1;33m0x403f8070[0m (0x403f8000 + 0x0070)
Master Receive Data Register
 (ro) (08)  [0;32mDATA[0m  - [07:00] -  Receive Data
 (ro) (01)  [0;32mRXEMPTY[0m  - [14:14] -  RX Empty
      0 - RXEMPTY_0 :
         Receive FIFO is not empty
      0x1 - RXEMPTY_1 :
         Receive FIFO is empty
</lang>
#### p.lpi2c3.mrdr
<link=p.LPI2C3.MRDR>
#### p.lpi2c3.scr
<link=p.LPI2C3.SCR>
#### p.LPI2C3.SIER
<lang=dft>
 (rw)  [1;33m0x403f8118[0m (0x403f8000 + 0x0118)
Slave Interrupt Enable Register
 (rw) (01)  [0;32mTDIE[0m  - [00:00] -  Transmit Data Interrupt Enable
      0 - TDIE_0 :
         Disabled
      0x1 - TDIE_1 :
         Enabled
 (rw) (01)  [0;32mRDIE[0m  - [01:01] -  Receive Data Interrupt Enable
      0 - RDIE_0 :
         Disabled
      0x1 - RDIE_1 :
         Enabled
 (rw) (01)  [0;32mAVIE[0m  - [02:02] -  Address Valid Interrupt Enable
      0 - AVIE_0 :
         Disabled
      0x1 - AVIE_1 :
         Enabled
 (rw) (01)  [0;32mTAIE[0m  - [03:03] -  Transmit ACK Interrupt Enable
      0 - TAIE_0 :
         Disabled
      0x1 - TAIE_1 :
         Enabled
 (rw) (01)  [0;32mRSIE[0m  - [08:08] -  Repeated Start Interrupt Enable
      0 - RSIE_0 :
         Disabled
      0x1 - RSIE_1 :
         Enabled
 (rw) (01)  [0;32mSDIE[0m  - [09:09] -  STOP Detect Interrupt Enable
      0 - SDIE_0 :
         Disabled
      0x1 - SDIE_1 :
         Enabled
 (rw) (01)  [0;32mBEIE[0m  - [10:10] -  Bit Error Interrupt Enable
      0 - BEIE_0 :
         Disabled
      0x1 - BEIE_1 :
         Enabled
 (rw) (01)  [0;32mFEIE[0m  - [11:11] -  FIFO Error Interrupt Enable
      0 - FEIE_0 :
         Disabled
      0x1 - FEIE_1 :
         Enabled
 (rw) (01)  [0;32mAM0IE[0m  - [12:12] -  Address Match 0 Interrupt Enable
      0 - AM0IE_0 :
         Enabled
      0x1 - AM0IE_1 :
         Disabled
 (rw) (01)  [0;32mAM1F[0m  - [13:13] -  Address Match 1 Interrupt Enable
      0 - AM1F_0 :
         Disabled
      0x1 - AM1F_1 :
         Enabled
 (rw) (01)  [0;32mGCIE[0m  - [14:14] -  General Call Interrupt Enable
      0 - GCIE_0 :
         Disabled
      0x1 - GCIE_1 :
         Enabled
 (rw) (01)  [0;32mSARIE[0m  - [15:15] -  SMBus Alert Response Interrupt Enable
      0 - SARIE_0 :
         Disabled
      0x1 - SARIE_1 :
         Enabled
</lang>
#### p.lpi2c3.sier
<link=p.LPI2C3.SIER>
#### LPI2C3.SDER
<link=p.LPI2C3.SDER>
#### p.lpi2c3.scfgr1
<link=p.LPI2C3.SCFGR1>
#### lpi2c3.samr
<link=p.LPI2C3.SAMR>
#### LPI2C3.SAMR
<link=p.LPI2C3.SAMR>
#### p.lpi2c4.verid
<link=p.LPI2C4.VERID>
#### LPI2C4.VERID
<link=p.LPI2C4.VERID>
#### p.lpi2c4.ssr
<link=p.LPI2C4.SSR>
#### p.LPI2C4.STDR
<lang=dft>
 (rw)  [1;33m0x403fc160[0m (0x403fc000 + 0x0160)
Slave Transmit Data Register
 (wo) (08)  [0;32mDATA[0m  - [07:00] -  Transmit Data
</lang>
#### p.SYSTEMCONTROL.CPUID
<lang=dft>
 (ro)  [1;33m0xe000ed00[0m (0xe000e000 + 0x0d00)
CPUID Base Register
 (ro) (04)  [0;32mREVISION[0m  - [03:00] -  Indicates patch release: 0x0 = Patch 0
 (ro) (12)  [0;32mPARTNO[0m  - [15:04] -  Indicates part number
 (ro) (04)  [0;32mARCHITECTURE[0m  - [19:16] -  ARCHITECTURE
 (ro) (04)  [0;32mVARIANT[0m  - [23:20] -  Indicates processor revision: 0x2 = Revision 2
 (ro) (08)  [0;32mIMPLEMENTER[0m  - [31:24] -  Implementer code
</lang>
#### p.SYSTEMCONTROL.ID_MMFR0
<lang=dft>
 (ro)  [1;33m0xe000ed50[0m (0xe000e000 + 0x0d50)
Memory Model Feature Register 0
 (ro) (04)  [0;32mPMSASUPPORT[0m  - [07:04] -  Indicates support for a PMSA
      0 - PMSASUPPORT_0 :
         Not supported
      0x1 - PMSASUPPORT_1 :
         ARMv7-M unused
      0x2 - PMSASUPPORT_2 :
         ARMv7-M unused
      0x3 - PMSASUPPORT_3 :
         PMSAv7, providing support for a base region and subregions.
 (ro) (04)  [0;32mOUTERMOST_SHAREABILITY[0m  - [11:08] -  Indicates the outermost shareability domain implemented
      0 - OUTERMOST_SHAREABILITY_0 :
         Implemented as Non-cacheable
      0x1 - OUTERMOST_SHAREABILITY_1 :
         ARMv7-M unused
      0x2 - OUTERMOST_SHAREABILITY_2 :
         ARMv7-M unused
      0x3 - OUTERMOST_SHAREABILITY_3 :
         ARMv7-M unused
      0x4 - OUTERMOST_SHAREABILITY_4 :
         ARMv7-M unused
      0x5 - OUTERMOST_SHAREABILITY_5 :
         ARMv7-M unused
      0x6 - OUTERMOST_SHAREABILITY_6 :
         ARMv7-M unused
      0x7 - OUTERMOST_SHAREABILITY_7 :
         ARMv7-M unused
      0x8 - OUTERMOST_SHAREABILITY_8 :
         ARMv7-M unused
      0x9 - OUTERMOST_SHAREABILITY_9 :
         ARMv7-M unused
      0xA - OUTERMOST_SHAREABILITY_10 :
         ARMv7-M unused
      0xB - OUTERMOST_SHAREABILITY_11 :
         ARMv7-M unused
      0xC - OUTERMOST_SHAREABILITY_12 :
         ARMv7-M unused
      0xD - OUTERMOST_SHAREABILITY_13 :
         ARMv7-M unused
      0xE - OUTERMOST_SHAREABILITY_14 :
         ARMv7-M unused
      0xF - OUTERMOST_SHAREABILITY_15 :
         Shareability ignored.
 (ro) (04)  [0;32mSHAREABILITY_LEVELS[0m  - [15:12] -  Indicates the number of shareability levels implemented
      0 - SHAREABILITY_LEVELS_0 :
         One level of shareability implemented
      0x1 - SHAREABILITY_LEVELS_1 :
         ARMv7-M unused
 (ro) (04)  [0;32mTCM_SUPPORT[0m  - [19:16] -  Indicates the support for Tightly Coupled Memory
      0 - TCM_SUPPORT_0 :
         No tightly coupled memories implemented.
      0x1 - TCM_SUPPORT_1 :
         Tightly coupled memories implemented with IMPLEMENTATION DEFINED contro
         l.
      0x2 - TCM_SUPPORT_2 :
         ARMv7-M unused
 (ro) (04)  [0;32mAUXILIARY_REGISTERS[0m  - [23:20] -  Indicates the support for Auxiliary registers
      0 - AUXILIARY_REGISTERS_0 :
         Not supported
      0x1 - AUXILIARY_REGISTERS_1 :
         Support for Auxiliary Control Register only.
      0x2 - AUXILIARY_REGISTERS_2 :
         ARMv7-M unused
</lang>
#### SystemControl.ID_ISAR0
<link=p.SYSTEMCONTROL.ID_ISAR0>
#### SystemControl.CLIDR
<link=p.SYSTEMCONTROL.CLIDR>
#### SystemControl.ICIMVAU
<link=p.SYSTEMCONTROL.ICIMVAU>
#### SystemControl.DCCMVAU
<link=p.SYSTEMCONTROL.DCCMVAU>
#### SystemControl.DCCSW
<link=p.SYSTEMCONTROL.DCCSW>
#### SystemControl.CM7_ITCMCR
<link=p.SYSTEMCONTROL.CM7_ITCMCR>
#### nvic.nviciser1
<link=p.NVIC.NVICISER1>
#### p.NVIC.NVICICER0
<lang=dft>
 (rw)  [1;33m0xe000e180[0m (0xe000e100 + 0x0080)
Interrupt Clear Enable Register n
 (rw) (32)  [0;32mCLRENA[0m  - [31:00] -  Interrupt clear-enable bits
</lang>
#### nvic.nvicicer2
<link=p.NVIC.NVICICER2>
#### nvic.nvicispr4
<link=p.NVIC.NVICISPR4>
#### NVIC.NVICICPR0
<link=p.NVIC.NVICICPR0>
#### NVIC.NVICIABR0
<link=p.NVIC.NVICIABR0>
#### nvic.nvicip1
<link=p.NVIC.NVICIP1>
#### NVIC.NVICIP3
<link=p.NVIC.NVICIP3>
#### p.nvic.nvicip10
<link=p.NVIC.NVICIP10>
#### NVIC.NVICIP12
<link=p.NVIC.NVICIP12>
#### p.NVIC.NVICIP29
<lang=dft>
 (rw)  [1;33m0xe000e41d[0m (0xe000e100 + 0x031d)
Interrupt Priority Register 29
 (rw) (04)  [0;32mPRI29[0m  - [07:04] -  Priority of the INT_LPI2C2 interrupt 29
</lang>
#### p.NVIC.NVICIP44
<lang=dft>
 (rw)  [1;33m0xe000e42c[0m (0xe000e100 + 0x032c)
Interrupt Priority Register 44
 (rw) (04)  [0;32mPRI44[0m  - [07:04] -  Priority of the INT_PXP interrupt 44
</lang>
#### nvic.nvicip50
<link=p.NVIC.NVICIP50>
#### p.NVIC.NVICIP53
<lang=dft>
 (rw)  [1;33m0xe000e435[0m (0xe000e100 + 0x0335)
Interrupt Priority Register 53
 (rw) (04)  [0;32mPRI53[0m  - [07:04] -  Priority of the INT_TRNG interrupt 53
</lang>
#### p.nvic.nvicip61
<link=p.NVIC.NVICIP61>
#### nvic.nvicip61
<link=p.NVIC.NVICIP61>
#### NVIC.NVICIP63
<link=p.NVIC.NVICIP63>
#### NVIC.NVICIP70
<link=p.NVIC.NVICIP70>
#### p.nvic.nvicip72
<link=p.NVIC.NVICIP72>
#### p.NVIC.NVICIP75
<lang=dft>
 (rw)  [1;33m0xe000e44b[0m (0xe000e100 + 0x034b)
Interrupt Priority Register 75
 (rw) (04)  [0;32mPRI75[0m  - [07:04] -  Priority of the INT_GPIO1_INT3 interrupt 75
</lang>
#### nvic.nvicip76
<link=p.NVIC.NVICIP76>
#### p.NVIC.NVICIP80
<lang=dft>
 (rw)  [1;33m0xe000e450[0m (0xe000e100 + 0x0350)
Interrupt Priority Register 80
 (rw) (04)  [0;32mPRI80[0m  - [07:04] -  Priority of the INT_GPIO1_Combined_0_15 interrupt 80
</lang>
#### NVIC.NVICIP88
<link=p.NVIC.NVICIP88>
#### nvic.nvicip94
<link=p.NVIC.NVICIP94>
#### p.NVIC.NVICIP97
<lang=dft>
 (rw)  [1;33m0xe000e461[0m (0xe000e100 + 0x0361)
Interrupt Priority Register 97
 (rw) (04)  [0;32mPRI97[0m  - [07:04] -  Priority of the INT_GPC interrupt 97
</lang>
#### nvic.nvicip102
<link=p.NVIC.NVICIP102>
#### p.nvic.nvicip104
<link=p.NVIC.NVICIP104>
#### p.NVIC.NVICIP109
<lang=dft>
 (rw)  [1;33m0xe000e46d[0m (0xe000e100 + 0x036d)
Interrupt Priority Register 109
 (rw) (04)  [0;32mPRI109[0m  - [07:04] -  Priority of the INT_SEMC interrupt 109
</lang>
#### nvic.nvicip111
<link=p.NVIC.NVICIP111>
#### NVIC.NVICIP113
<link=p.NVIC.NVICIP113>
#### p.nvic.nvicip117
<link=p.NVIC.NVICIP117>
#### p.nvic.nvicip122
<link=p.NVIC.NVICIP122>
#### p.NVIC.NVICIP127
<lang=dft>
 (rw)  [1;33m0xe000e47f[0m (0xe000e100 + 0x037f)
Interrupt Priority Register 127
 (rw) (04)  [0;32mPRI127[0m  - [07:04] -  Priority of the INT_Reserved143 interrupt 127
</lang>
#### p.nvic.nvicip131
<link=p.NVIC.NVICIP131>
#### p.NVIC.NVICIP134
<lang=dft>
 (rw)  [1;33m0xe000e486[0m (0xe000e100 + 0x0386)
Interrupt Priority Register 134
 (rw) (04)  [0;32mPRI134[0m  - [07:04] -  Priority of the INT_TMR2 interrupt 134
</lang>
#### NVIC.NVICIP140
<link=p.NVIC.NVICIP140>
#### p.NVIC.NVICIP144
<lang=dft>
 (rw)  [1;33m0xe000e490[0m (0xe000e100 + 0x0390)
Interrupt Priority Register 144
 (rw) (04)  [0;32mPRI144[0m  - [07:04] -  Priority of the INT_PWM3_2 interrupt 144
</lang>
#### p.nvic.nvicip148
<link=p.NVIC.NVICIP148>
#### p.NVIC.NVICIP157
<lang=dft>
 (rw)  [1;33m0xe000e49d[0m (0xe000e100 + 0x039d)
Interrupt Priority Register 157
 (rw) (04)  [0;32mPRI157[0m  - [07:04] -  Priority of the INT_GPIO6_7_8_9 interrupt 157
</lang>
#### p.NVIC.NVICSTIR
<lang=dft>
 (rw)  [1;33m0xe000ef00[0m (0xe000e100 + 0x0e00)
Software Trigger Interrupt Register
 (rw) (09)  [0;32mINTID[0m  - [08:00] -  Interrupt ID of the interrupt to trigger, in the range 0-239. For example, a va
 lue of 0x03 specifies interrupt IRQ3.
</lang>
#### opacr3
<link=OPACR3>
#### REG0
<link=p.DCDC.REG0>
#### reg2
<link=REG2>
#### tctrl0
<link=TCTRL0>
#### CVAL1
<link=p.PIT.CVAL1>
#### ltmr64l
<link=LTMR64L>
#### gpr0
<link=GPR0>
#### GPR7
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.IOMUXC_GPR.GPR7
   p.SRC.GPR7
#### gpr11
<link=GPR11>
#### GPR17
<link=p.IOMUXC_GPR.GPR17>
#### CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.EWM.CTRL
   p.USBPHY1.CTRL
   p.USBPHY2.CTRL
   p.LPUART1.CTRL
   p.LPUART2.CTRL
   p.LPUART3.CTRL
   p.LPUART4.CTRL
   p.LPUART5.CTRL
   p.LPUART6.CTRL
   p.LPUART7.CTRL
   p.LPUART8.CTRL
   p.FLEXIO1.CTRL
   p.FLEXIO2.CTRL
   p.FLEXIO3.CTRL
   p.OCOTP.CTRL
   p.PXP.CTRL
   p.LCDIF.CTRL
   p.DCP.CTRL
   p.ADC_ETC.CTRL
   p.ENC1.CTRL
   p.ENC2.CTRL
   p.ENC3.CTRL
   p.ENC4.CTRL
   p.BEE.CTRL
#### CLKCTRL
<link=p.EWM.CLKCTRL>
#### WMCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.WDOG1.WMCR
   p.WDOG2.WMCR
#### wmcr
<link=WMCR>
#### HC7
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.HC7
   p.ADC2.HC7
#### R4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.R4
   p.ADC2.R4
#### r6
<link=R6>
#### gc
<link=GC>
#### pkrrng
<link=PKRRNG>
#### ENT[11]
<link=p.TRNG.ENT[11]>
#### LPSVCR
<link=p.SNVS.LPSVCR>
#### lpsrtclr
<link=LPSRTCLR>
#### lpzmkr[3]
<link=LPZMKR[3]>
#### lpzmkr[4]
<link=LPZMKR[4]>
#### LPGPR[3]
<link=p.SNVS.LPGPR[3]>
#### HPVIDR2
<link=p.SNVS.HPVIDR2>
#### PLL_USB1_SET
<link=p.CCM_ANALOG.PLL_USB1_SET>
#### pll_usb2_tog
<link=PLL_USB2_TOG>
#### pll_audio_set
<link=PLL_AUDIO_SET>
#### MISC0_CLR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC0_CLR
   p.PMU.MISC0_CLR
   p.XTALOSC24M.MISC0_CLR
#### reg_2p5
<link=REG_2P5>
#### tempsense1_tog
<link=TEMPSENSE1_TOG>
#### TEMPSENSE2
<link=p.TEMPMON.TEMPSENSE2>
#### USB1_MISC
<link=p.USB_ANALOG.USB1_MISC>
#### usb1_misc_clr
<link=USB1_MISC_CLR>
#### usb2_vbus_detect
<link=USB2_VBUS_DETECT>
#### USB2_CHRG_DETECT_SET
<link=p.USB_ANALOG.USB2_CHRG_DETECT_SET>
#### lowpwr_ctrl_clr
<link=LOWPWR_CTRL_CLR>
#### osc_config2_set
<link=OSC_CONFIG2_SET>
#### osc_config2_clr
<link=OSC_CONFIG2_CLR>
#### pwd
<link=PWD>
#### RX_TOG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.RX_TOG
   p.USBPHY2.RX_TOG
#### ctrl_clr
<link=CTRL_CLR>
#### csl4
<link=CSL4>
#### CSL11
<link=p.CSU.CSL11>
#### CSL20
<link=p.CSU.CSL20>
#### csl22
<link=CSL22>
#### flow_control
<link=FLOW_CONTROL>
#### debug_mode2
<link=DEBUG_MODE2>
#### ES
<link=p.DMA0.ES>
#### cerr
<link=CERR>
#### INT
<link=p.DMA0.INT>
#### DCHPRI11
<link=p.DMA0.DCHPRI11>
#### dchpri11
<link=DCHPRI11>
#### DCHPRI20
<link=p.DMA0.DCHPRI20>
#### dchpri20
<link=DCHPRI20>
#### TCD0_ATTR
<link=p.DMA0.TCD0_ATTR>
#### TCD0_DOFF
<link=p.DMA0.TCD0_DOFF>
#### TCD1_DOFF
<link=p.DMA0.TCD1_DOFF>
#### tcd2_nbytes_mloffno
<link=TCD2_NBYTES_MLOFFNO>
#### TCD3_SLAST
<link=p.DMA0.TCD3_SLAST>
#### tcd3_csr
<link=TCD3_CSR>
#### TCD4_SADDR
<link=p.DMA0.TCD4_SADDR>
#### tcd4_saddr
<link=TCD4_SADDR>
#### TCD4_DADDR
<link=p.DMA0.TCD4_DADDR>
#### tcd4_doff
<link=TCD4_DOFF>
#### tcd5_slast
<link=TCD5_SLAST>
#### tcd5_doff
<link=TCD5_DOFF>
#### tcd6_attr
<link=TCD6_ATTR>
#### TCD7_SADDR
<link=p.DMA0.TCD7_SADDR>
#### tcd7_saddr
<link=TCD7_SADDR>
#### tcd7_soff
<link=TCD7_SOFF>
#### TCD7_NBYTES_MLNO
<link=p.DMA0.TCD7_NBYTES_MLNO>
#### tcd7_citer_elinkno
<link=TCD7_CITER_ELINKNO>
#### tcd7_biter_elinkyes
<link=TCD7_BITER_ELINKYES>
#### TCD10_CSR
<link=p.DMA0.TCD10_CSR>
#### TCD12_SOFF
<link=p.DMA0.TCD12_SOFF>
#### TCD12_BITER_ELINKNO
<link=p.DMA0.TCD12_BITER_ELINKNO>
#### tcd13_nbytes_mloffno
<link=TCD13_NBYTES_MLOFFNO>
#### TCD13_NBYTES_MLOFFYES
<link=p.DMA0.TCD13_NBYTES_MLOFFYES>
#### TCD13_DADDR
<link=p.DMA0.TCD13_DADDR>
#### TCD13_CSR
<link=p.DMA0.TCD13_CSR>
#### TCD14_CITER_ELINKYES
<link=p.DMA0.TCD14_CITER_ELINKYES>
#### tcd15_attr
<link=TCD15_ATTR>
#### tcd15_daddr
<link=TCD15_DADDR>
#### tcd15_doff
<link=TCD15_DOFF>
#### TCD16_NBYTES_MLOFFYES
<link=p.DMA0.TCD16_NBYTES_MLOFFYES>
#### TCD16_DLASTSGA
<link=p.DMA0.TCD16_DLASTSGA>
#### tcd16_csr
<link=TCD16_CSR>
#### tcd16_biter_elinkyes
<link=TCD16_BITER_ELINKYES>
#### tcd17_dlastsga
<link=TCD17_DLASTSGA>
#### tcd17_biter_elinkyes
<link=TCD17_BITER_ELINKYES>
#### tcd18_attr
<link=TCD18_ATTR>
#### tcd18_nbytes_mlno
<link=TCD18_NBYTES_MLNO>
#### TCD18_CITER_ELINKNO
<link=p.DMA0.TCD18_CITER_ELINKNO>
#### tcd18_citer_elinkyes
<link=TCD18_CITER_ELINKYES>
#### TCD19_SADDR
<link=p.DMA0.TCD19_SADDR>
#### tcd19_soff
<link=TCD19_SOFF>
#### TCD22_ATTR
<link=p.DMA0.TCD22_ATTR>
#### TCD22_SLAST
<link=p.DMA0.TCD22_SLAST>
#### tcd22_citer_elinkno
<link=TCD22_CITER_ELINKNO>
#### tcd23_nbytes_mloffyes
<link=TCD23_NBYTES_MLOFFYES>
#### tcd24_attr
<link=TCD24_ATTR>
#### tcd25_doff
<link=TCD25_DOFF>
#### tcd25_biter_elinkyes
<link=TCD25_BITER_ELINKYES>
#### tcd26_slast
<link=TCD26_SLAST>
#### TCD26_CSR
<link=p.DMA0.TCD26_CSR>
#### tcd27_biter_elinkno
<link=TCD27_BITER_ELINKNO>
#### TCD29_ATTR
<link=p.DMA0.TCD29_ATTR>
#### TCD30_NBYTES_MLNO
<link=p.DMA0.TCD30_NBYTES_MLNO>
#### TCD30_NBYTES_MLOFFYES
<link=p.DMA0.TCD30_NBYTES_MLOFFYES>
#### TCD30_CITER_ELINKNO
<link=p.DMA0.TCD30_CITER_ELINKNO>
#### tcd30_biter_elinkyes
<link=TCD30_BITER_ELINKYES>
#### TCD31_SADDR
<link=p.DMA0.TCD31_SADDR>
#### CHCFG[13]
<link=p.DMAMUX.CHCFG[13]>
#### CHCFG[19]
<link=p.DMAMUX.CHCFG[19]>
#### CHCFG[22]
<link=p.DMAMUX.CHCFG[22]>
#### chcfg[23]
<link=CHCFG[23]>
#### CHCFG[25]
<link=p.DMAMUX.CHCFG[25]>
#### imr1
<link=IMR1>
#### isr5
<link=ISR5>
#### MEGA_CTRL
<link=p.PGC.MEGA_CTRL>
#### mega_ctrl
<link=MEGA_CTRL>
#### sbmr1
<link=SBMR1>
#### CCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM.CCR
   p.LPSPI1.CCR
   p.LPSPI2.CCR
   p.LPSPI3.CCR
   p.LPSPI4.CCR
   p.SystemControl.CCR
#### CACRR
<link=p.CCM.CACRR>
#### cdhipr
<link=CDHIPR>
#### CCOSR
<link=p.CCM.CCOSR>
#### ROMPATCHENH
<link=p.ROMC.ROMPATCHENH>
#### ROMPATCH6A
<link=p.ROMC.ROMPATCH6A>
#### FIFO
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.FIFO
   p.LPUART2.FIFO
   p.LPUART3.FIFO
   p.LPUART4.FIFO
   p.LPUART5.FIFO
   p.LPUART6.FIFO
   p.LPUART7.FIFO
   p.LPUART8.FIFO
#### TIMIEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMIEN
   p.FLEXIO2.TIMIEN
   p.FLEXIO3.TIMIEN
#### SHIFTCTL[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTCTL[0]
   p.FLEXIO2.SHIFTCTL[0]
   p.FLEXIO3.SHIFTCTL[0]
#### shiftbuf[1]
<link=SHIFTBUF[1]>
#### shiftbufbys[0]
<link=SHIFTBUFBYS[0]>
#### shiftbufbbs[3]
<link=SHIFTBUFBBS[3]>
#### TIMCTL[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCTL[1]
   p.FLEXIO2.TIMCTL[1]
   p.FLEXIO3.TIMCTL[1]
#### timctl[2]
<link=TIMCTL[2]>
#### timcfg[2]
<link=TIMCFG[2]>
#### TIMCFG[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCFG[3]
   p.FLEXIO2.TIMCFG[3]
   p.FLEXIO3.TIMCFG[3]
#### TIMCMP[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCMP[1]
   p.FLEXIO2.TIMCMP[1]
   p.FLEXIO3.TIMCMP[1]
#### SHIFTBUFNBS[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFNBS[0]
   p.FLEXIO2.SHIFTBUFNBS[0]
   p.FLEXIO3.SHIFTBUFNBS[0]
#### shiftbufnbs[0]
<link=SHIFTBUFNBS[0]>
#### DR_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPIO1.DR_SET
   p.GPIO5.DR_SET
   p.GPIO2.DR_SET
   p.GPIO3.DR_SET
   p.GPIO4.DR_SET
   p.GPIO6.DR_SET
   p.GPIO7.DR_SET
   p.GPIO8.DR_SET
   p.GPIO9.DR_SET
#### rxfir
<link=RXFIR>
#### RXIMR8
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR8
   p.CAN2.RXIMR8
#### RXIMR17
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR17
   p.CAN2.RXIMR17
#### rximr30
<link=RXIMR30>
#### RXIMR38
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR38
   p.CAN2.RXIMR38
#### RXIMR49
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR49
   p.CAN2.RXIMR49
#### rximr52
<link=RXIMR52>
#### GFWR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.GFWR
   p.CAN2.GFWR
#### MB0_64B_WORD0
<link=p.CAN3.MB0_64B_WORD0>
#### MB0_32B_WORD1
<link=p.CAN3.MB0_32B_WORD1>
#### WORD10
<link=p.CAN3.WORD10>
#### mb1_8b_id
<link=MB1_8B_ID>
#### mb0_32b_word7
<link=MB0_32B_WORD7>
#### MB3_8B_CS
<link=p.CAN3.MB3_8B_CS>
#### MB3_8B_ID
<link=p.CAN3.MB3_8B_ID>
#### MB3_8B_WORD1
<link=p.CAN3.MB3_8B_WORD1>
#### MB1_64B_CS
<link=p.CAN3.MB1_64B_CS>
#### MB1_64B_WORD0
<link=p.CAN3.MB1_64B_WORD0>
#### CS7
<link=p.CAN3.CS7>
#### mb4_16b_word2
<link=MB4_16B_WORD2>
#### MB2_32B_WORD7
<link=p.CAN3.MB2_32B_WORD7>
#### word07
<link=WORD07>
#### mb1_64b_word12
<link=MB1_64B_WORD12>
#### mb3_32b_word1
<link=MB3_32B_WORD1>
#### MB5_16B_WORD1
<link=p.CAN3.MB5_16B_WORD1>
#### mb2_64b_word0
<link=MB2_64B_WORD0>
#### ID10
<link=p.CAN3.ID10>
#### mb4_32b_word3
<link=MB4_32B_WORD3>
#### MB4_32B_WORD5
<link=p.CAN3.MB4_32B_WORD5>
#### MB7_16B_WORD3
<link=p.CAN3.MB7_16B_WORD3>
#### cs12
<link=CS12>
#### MB8_16B_WORD0
<link=p.CAN3.MB8_16B_WORD0>
#### WORD113
<link=p.CAN3.WORD113>
#### id14
<link=ID14>
#### mb3_64b_word1
<link=MB3_64B_WORD1>
#### mb14_8b_word1
<link=MB14_8B_WORD1>
#### MB6_32B_ID
<link=p.CAN3.MB6_32B_ID>
#### CS16
<link=p.CAN3.CS16>
#### MB6_32B_WORD3
<link=p.CAN3.MB6_32B_WORD3>
#### MB11_16B_ID
<link=p.CAN3.MB11_16B_ID>
#### mb3_64b_word14
<link=MB3_64B_WORD14>
#### word117
<link=WORD117>
#### mb4_64b_id
<link=MB4_64B_ID>
#### mb18_8b_word1
<link=MB18_8B_WORD1>
#### MB19_8B_CS
<link=p.CAN3.MB19_8B_CS>
#### mb7_32b_word5
<link=MB7_32B_WORD5>
#### mb13_16b_id
<link=MB13_16B_ID>
#### MB4_64B_WORD5
<link=p.CAN3.MB4_64B_WORD5>
#### mb8_32b_word0
<link=MB8_32B_WORD0>
#### mb21_8b_word0
<link=MB21_8B_WORD0>
#### mb4_64b_word12
<link=MB4_64B_WORD12>
#### word122
<link=WORD122>
#### mb15_16b_word2
<link=MB15_16B_WORD2>
#### MB9_32B_WORD2
<link=p.CAN3.MB9_32B_WORD2>
#### MB15_16B_WORD3
<link=p.CAN3.MB15_16B_WORD3>
#### mb24_8b_id
<link=MB24_8B_ID>
#### MB5_64B_WORD7
<link=p.CAN3.MB5_64B_WORD7>
#### mb25_8b_cs
<link=MB25_8B_CS>
#### ID25
<link=p.CAN3.ID25>
#### MB10_32B_WORD1
<link=p.CAN3.MB10_32B_WORD1>
#### MB17_16B_WORD1
<link=p.CAN3.MB17_16B_WORD1>
#### MB26_8B_ID
<link=p.CAN3.MB26_8B_ID>
#### id28
<link=ID28>
#### MB18_16B_WORD3
<link=p.CAN3.MB18_16B_WORD3>
#### MB19_16B_CS
<link=p.CAN3.MB19_16B_CS>
#### mb6_64b_word5
<link=MB6_64B_WORD5>
#### CS30
<link=p.CAN3.CS30>
#### MB20_16B_CS
<link=p.CAN3.MB20_16B_CS>
#### MB30_8B_WORD0
<link=p.CAN3.MB30_8B_WORD0>
#### MB12_32B_WORD1
<link=p.CAN3.MB12_32B_WORD1>
#### mb12_32b_word3
<link=MB12_32B_WORD3>
#### word131
<link=WORD131>
#### mb32_8b_word0
<link=MB32_8B_WORD0>
#### mb22_16b_cs
<link=MB22_16B_CS>
#### mb7_64b_word4
<link=MB7_64B_WORD4>
#### mb34_8b_id
<link=MB34_8B_ID>
#### MB35_8B_ID
<link=p.CAN3.MB35_8B_ID>
#### WORD035
<link=p.CAN3.WORD035>
#### MB8_64B_CS
<link=p.CAN3.MB8_64B_CS>
#### ID36
<link=p.CAN3.ID36>
#### MB8_64B_ID
<link=p.CAN3.MB8_64B_ID>
#### MB14_32B_WORD5
<link=p.CAN3.MB14_32B_WORD5>
#### mb8_64b_word1
<link=MB8_64B_WORD1>
#### mb24_16b_word2
<link=MB24_16B_WORD2>
#### MB25_16B_ID
<link=p.CAN3.MB25_16B_ID>
#### word038
<link=WORD038>
#### mb39_8b_cs
<link=MB39_8B_CS>
#### mb8_64b_word10
<link=MB8_64B_WORD10>
#### mb26_16b_word0
<link=MB26_16B_WORD0>
#### mb40_8b_word1
<link=MB40_8B_WORD1>
#### CS41
<link=p.CAN3.CS41>
#### mb9_64b_word0
<link=MB9_64B_WORD0>
#### mb27_16b_word2
<link=MB27_16B_WORD2>
#### WORD041
<link=p.CAN3.WORD041>
#### MB16_32B_WORD5
<link=p.CAN3.MB16_32B_WORD5>
#### MB41_8B_WORD1
<link=p.CAN3.MB41_8B_WORD1>
#### mb16_32b_word7
<link=MB16_32B_WORD7>
#### MB42_8B_WORD0
<link=p.CAN3.MB42_8B_WORD0>
#### cs45
<link=CS45>
#### mb30_16b_word1
<link=MB30_16B_WORD1>
#### mb45_8b_word1
<link=MB45_8B_WORD1>
#### MB30_16B_WORD3
<link=p.CAN3.MB30_16B_WORD3>
#### MB10_64B_WORD9
<link=p.CAN3.MB10_64B_WORD9>
#### mb10_64b_word10
<link=MB10_64B_WORD10>
#### mb19_32b_word1
<link=MB19_32B_WORD1>
#### MB19_32B_WORD3
<link=p.CAN3.MB19_32B_WORD3>
#### MB32_16B_WORD1
<link=p.CAN3.MB32_16B_WORD1>
#### mb32_16b_word2
<link=MB32_16B_WORD2>
#### MB20_32B_WORD0
<link=p.CAN3.MB20_32B_WORD0>
#### mb34_16b_id
<link=MB34_16B_ID>
#### mb34_16b_word2
<link=MB34_16B_WORD2>
#### MB11_64B_WORD9
<link=p.CAN3.MB11_64B_WORD9>
#### word052
<link=WORD052>
#### MB21_32B_WORD3
<link=p.CAN3.MB21_32B_WORD3>
#### MB54_8B_CS
<link=p.CAN3.MB54_8B_CS>
#### MB12_64B_WORD1
<link=p.CAN3.MB12_64B_WORD1>
#### MB54_8B_WORD1
<link=p.CAN3.MB54_8B_WORD1>
#### MB37_16B_CS
<link=p.CAN3.MB37_16B_CS>
#### MB37_16B_ID
<link=p.CAN3.MB37_16B_ID>
#### MB56_8B_ID
<link=p.CAN3.MB56_8B_ID>
#### WORD056
<link=p.CAN3.WORD056>
#### MB12_64B_WORD12
<link=p.CAN3.MB12_64B_WORD12>
#### id59
<link=ID59>
#### mb13_64b_word1
<link=MB13_64B_WORD1>
#### mb39_16b_word1
<link=MB39_16B_WORD1>
#### MB13_64B_WORD3
<link=p.CAN3.MB13_64B_WORD3>
#### MB39_16B_WORD3
<link=p.CAN3.MB39_16B_WORD3>
#### mb60_8b_cs
<link=MB60_8B_CS>
#### mb40_16b_word2
<link=MB40_16B_WORD2>
#### mb61_8b_id
<link=MB61_8B_ID>
#### mb13_64b_word12
<link=MB13_64B_WORD12>
#### MB13_64B_WORD14
<link=p.CAN3.MB13_64B_WORD14>
#### WORD162
<link=p.CAN3.WORD162>
#### word063
<link=WORD063>
#### RXIMR[4]
<link=p.CAN3.RXIMR[4]>
#### rximr[34]
<link=RXIMR[34]>
#### rximr[39]
<link=RXIMR[39]>
#### rximr[48]
<link=RXIMR[48]>
#### rximr[55]
<link=RXIMR[55]>
#### erfsr
<link=ERFSR>
#### hr_time_stamp[1]
<link=HR_TIME_STAMP[1]>
#### HR_TIME_STAMP[16]
<link=p.CAN3.HR_TIME_STAMP[16]>
#### hr_time_stamp[25]
<link=HR_TIME_STAMP[25]>
#### HR_TIME_STAMP[29]
<link=p.CAN3.HR_TIME_STAMP[29]>
#### hr_time_stamp[35]
<link=HR_TIME_STAMP[35]>
#### hr_time_stamp[49]
<link=HR_TIME_STAMP[49]>
#### HR_TIME_STAMP[51]
<link=p.CAN3.HR_TIME_STAMP[51]>
#### hr_time_stamp[59]
<link=HR_TIME_STAMP[59]>
#### HR_TIME_STAMP[60]
<link=p.CAN3.HR_TIME_STAMP[60]>
#### hr_time_stamp[62]
<link=HR_TIME_STAMP[62]>
#### ERFFEL[4]
<link=p.CAN3.ERFFEL[4]>
#### erffel[16]
<link=ERFFEL[16]>
#### ERFFEL[21]
<link=p.CAN3.ERFFEL[21]>
#### ERFFEL[24]
<link=p.CAN3.ERFFEL[24]>
#### erffel[24]
<link=ERFFEL[24]>
#### ERFFEL[32]
<link=p.CAN3.ERFFEL[32]>
#### ERFFEL[38]
<link=p.CAN3.ERFFEL[38]>
#### erffel[38]
<link=ERFFEL[38]>
#### erffel[73]
<link=ERFFEL[73]>
#### ERFFEL[91]
<link=p.CAN3.ERFFEL[91]>
#### erffel[91]
<link=ERFFEL[91]>
#### ERFFEL[102]
<link=p.CAN3.ERFFEL[102]>
#### erffel[102]
<link=ERFFEL[102]>
#### erffel[124]
<link=ERFFEL[124]>
#### COMP21
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.COMP21
   p.TMR2.COMP21
   p.TMR3.COMP21
   p.TMR4.COMP21
#### comp21
<link=COMP21>
#### CAPT0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CAPT0
   p.TMR2.CAPT0
   p.TMR3.CAPT0
   p.TMR4.CAPT0
#### HOLD1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.HOLD1
   p.TMR2.HOLD1
   p.TMR3.HOLD1
   p.TMR4.HOLD1
#### cntr0
<link=CNTR0>
#### sctrl3
<link=SCTRL3>
#### csctrl3
<link=CSCTRL3>
#### FILT3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.FILT3
   p.TMR2.FILT3
   p.TMR3.FILT3
   p.TMR4.FILT3
#### ir
<link=IR>
#### OCR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPT1.OCR2
   p.GPT2.OCR2
#### SW_STICKY
<link=p.OCOTP.SW_STICKY>
#### SCS
<link=p.OCOTP.SCS>
#### OTPMK7
<link=p.OCOTP.OTPMK7>
#### SRK0
<link=p.OCOTP.SRK0>
#### MAC0
<link=p.OCOTP.MAC0>
#### mac2
<link=MAC2>
#### GP2
<link=p.OCOTP.GP2>
#### MISC_CONF0
<link=p.OCOTP.MISC_CONF0>
#### gp33
<link=GP33>
#### SW_MUX_CTL_PAD_GPIO_EMC_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_02>
#### sw_mux_ctl_pad_gpio_emc_02
<link=SW_MUX_CTL_PAD_GPIO_EMC_02>
#### sw_mux_ctl_pad_gpio_ad_b0_06
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_06>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_00>
#### SW_MUX_CTL_PAD_GPIO_B0_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_15>
#### SW_MUX_CTL_PAD_GPIO_B1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_01>
#### sw_mux_ctl_pad_gpio_b1_01
<link=SW_MUX_CTL_PAD_GPIO_B1_01>
#### SW_MUX_CTL_PAD_GPIO_SD_B1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_01>
#### SW_PAD_CTL_PAD_GPIO_EMC_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_05>
#### sw_pad_ctl_pad_gpio_emc_15
<link=SW_PAD_CTL_PAD_GPIO_EMC_15>
#### sw_pad_ctl_pad_gpio_emc_20
<link=SW_PAD_CTL_PAD_GPIO_EMC_20>
#### sw_pad_ctl_pad_gpio_ad_b0_04
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_04>
#### sw_pad_ctl_pad_gpio_ad_b0_13
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_13>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_15>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_01>
#### sw_pad_ctl_pad_gpio_ad_b1_10
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_10>
#### SW_PAD_CTL_PAD_GPIO_B0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_04>
#### sw_pad_ctl_pad_gpio_b0_07
<link=SW_PAD_CTL_PAD_GPIO_B0_07>
#### sw_pad_ctl_pad_gpio_b0_10
<link=SW_PAD_CTL_PAD_GPIO_B0_10>
#### SW_PAD_CTL_PAD_GPIO_B1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_11>
#### sw_pad_ctl_pad_gpio_b1_13
<link=SW_PAD_CTL_PAD_GPIO_B1_13>
#### sw_pad_ctl_pad_gpio_sd_b0_03
<link=SW_PAD_CTL_PAD_GPIO_SD_B0_03>
#### sw_pad_ctl_pad_gpio_sd_b1_08
<link=SW_PAD_CTL_PAD_GPIO_SD_B1_08>
#### ANATOP_USB_OTG1_ID_SELECT_INPUT
<link=p.IOMUXC.ANATOP_USB_OTG1_ID_SELECT_INPUT>
#### csi_data03_select_input
<link=CSI_DATA03_SELECT_INPUT>
#### enet0_rxdata_select_input
<link=ENET0_RXDATA_SELECT_INPUT>
#### FLEXCAN1_RX_SELECT_INPUT
<link=p.IOMUXC.FLEXCAN1_RX_SELECT_INPUT>
#### FLEXCAN2_RX_SELECT_INPUT
<link=p.IOMUXC.FLEXCAN2_RX_SELECT_INPUT>
#### flexpwm1_pwma1_select_input
<link=FLEXPWM1_PWMA1_SELECT_INPUT>
#### flexpwm1_pwmb3_select_input
<link=FLEXPWM1_PWMB3_SELECT_INPUT>
#### flexpwm2_pwmb0_select_input
<link=FLEXPWM2_PWMB0_SELECT_INPUT>
#### flexspib_data1_select_input
<link=FLEXSPIB_DATA1_SELECT_INPUT>
#### lpi2c1_scl_select_input
<link=LPI2C1_SCL_SELECT_INPUT>
#### LPI2C4_SCL_SELECT_INPUT
<link=p.IOMUXC.LPI2C4_SCL_SELECT_INPUT>
#### LPSPI1_PCS0_SELECT_INPUT
<link=p.IOMUXC.LPSPI1_PCS0_SELECT_INPUT>
#### lpspi1_sdo_select_input
<link=LPSPI1_SDO_SELECT_INPUT>
#### lpspi2_sck_select_input
<link=LPSPI2_SCK_SELECT_INPUT>
#### LPSPI4_SDO_SELECT_INPUT
<link=p.IOMUXC.LPSPI4_SDO_SELECT_INPUT>
#### LPUART4_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART4_TX_SELECT_INPUT>
#### lpuart7_tx_select_input
<link=LPUART7_TX_SELECT_INPUT>
#### LPUART8_RX_SELECT_INPUT
<link=p.IOMUXC.LPUART8_RX_SELECT_INPUT>
#### SAI1_MCLK2_SELECT_INPUT
<link=p.IOMUXC.SAI1_MCLK2_SELECT_INPUT>
#### SAI1_RX_DATA2_SELECT_INPUT
<link=p.IOMUXC.SAI1_RX_DATA2_SELECT_INPUT>
#### USDHC2_DATA5_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA5_SELECT_INPUT>
#### USDHC2_DATA7_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA7_SELECT_INPUT>
#### XBAR1_IN08_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN08_SELECT_INPUT>
#### xbar1_in08_select_input
<link=XBAR1_IN08_SELECT_INPUT>
#### xbar1_in15_select_input
<link=XBAR1_IN15_SELECT_INPUT>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_00>
#### sw_mux_ctl_pad_gpio_spi_b1_00
<link=SW_MUX_CTL_PAD_GPIO_SPI_B1_00>
#### SW_MUX_CTL_PAD_GPIO_SPI_B1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_07>
#### SW_PAD_CTL_PAD_GPIO_SPI_B0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_04>
#### SW_PAD_CTL_PAD_GPIO_SPI_B0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_13>
#### sw_pad_ctl_pad_gpio_spi_b1_00
<link=SW_PAD_CTL_PAD_GPIO_SPI_B1_00>
#### ENET2_IPG_CLK_RMII_SELECT_INPUT
<link=p.IOMUXC.ENET2_IPG_CLK_RMII_SELECT_INPUT>
#### enet2_ipg_clk_rmii_select_input
<link=ENET2_IPG_CLK_RMII_SELECT_INPUT>
#### flexspi2_ipp_ind_io_fa_bit0_select_input
<link=FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT>
#### FLEXSPI2_IPP_IND_SCK_FB_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_SCK_FB_SELECT_INPUT>
#### SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT
<link=p.IOMUXC.SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT>
#### kpcr
<link=KPCR>
#### ahbrxbuf0cr0
<link=AHBRXBUF0CR0>
#### FLSHCR1A1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHCR1A1
   p.FLEXSPI2.FLSHCR1A1
#### flshcr2b1
<link=FLSHCR2B1>
#### FLSHCR4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHCR4
   p.FLEXSPI2.FLSHCR4
#### IPCMD
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.IPCMD
   p.FLEXSPI2.IPCMD
   p.SEMC.IPCMD
#### RFDR[11]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[11]
   p.FLEXSPI2.RFDR[11]
#### rfdr[16]
<link=RFDR[16]>
#### rfdr[24]
<link=RFDR[24]>
#### RFDR[29]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[29]
   p.FLEXSPI2.RFDR[29]
#### rfdr[30]
<link=RFDR[30]>
#### LUT[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[0]
   p.FLEXSPI2.LUT[0]
#### LUT[11]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[11]
   p.FLEXSPI2.LUT[11]
#### LUT[14]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[14]
   p.FLEXSPI2.LUT[14]
#### lut[14]
<link=LUT[14]>
#### lut[29]
<link=LUT[29]>
#### lut[39]
<link=LUT[39]>
#### lut[45]
<link=LUT[45]>
#### lut[55]
<link=LUT[55]>
#### out_ctrl_set
<link=OUT_CTRL_SET>
#### out_ctrl_clr
<link=OUT_CTRL_CLR>
#### OUT_BUF
<link=p.PXP.OUT_BUF>
#### PS_CTRL
<link=p.PXP.PS_CTRL>
#### PS_UBUF
<link=p.PXP.PS_UBUF>
#### PS_VBUF
<link=p.PXP.PS_VBUF>
#### ps_offset
<link=PS_OFFSET>
#### csc1_coef0
<link=CSC1_COEF0>
#### ctrl2_tog
<link=CTRL2_TOG>
#### PIGEONCTRL1_SET
<link=p.LCDIF.PIGEONCTRL1_SET>
#### pigeonctrl1_set
<link=PIGEONCTRL1_SET>
#### pigeon_3_2
<link=PIGEON_3_2>
#### PIGEON_4_2
<link=p.LCDIF.PIGEON_4_2>
#### PIGEON_6_0
<link=p.LCDIF.PIGEON_6_0>
#### PIGEON_9_0
<link=p.LCDIF.PIGEON_9_0>
#### PIGEON_10_1
<link=p.LCDIF.PIGEON_10_1>
#### csicr3
<link=CSICR3>
#### CSISR
<link=p.CSI.CSISR>
#### csidmasa_fb2
<link=CSIDMASA_FB2>
#### CSIFBUF_PARA
<link=p.CSI.CSIFBUF_PARA>
#### DS_ADDR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.DS_ADDR
   p.USDHC2.DS_ADDR
#### BLK_ATT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.BLK_ATT
   p.USDHC2.BLK_ATT
#### blk_att
<link=BLK_ATT>
#### HOST_CTRL_CAP
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.HOST_CTRL_CAP
   p.USDHC2.HOST_CTRL_CAP
#### FORCE_EVENT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.FORCE_EVENT
   p.USDHC2.FORCE_EVENT
#### mibc
<link=MIBC>
#### RDSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RDSR
   p.ENET2.RDSR
#### rsfl
<link=RSFL>
#### TACC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TACC
   p.ENET2.TACC
#### rmon_t_drop
<link=RMON_T_DROP>
#### rmon_t_packets
<link=RMON_T_PACKETS>
#### RMON_T_UNDERSIZE
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_UNDERSIZE
   p.ENET2.RMON_T_UNDERSIZE
#### RMON_R_RESVD_0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_RESVD_0
   p.ENET2.RMON_R_RESVD_0
#### rmon_r_resvd_0
<link=RMON_R_RESVD_0>
#### IEEE_R_ALIGN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_R_ALIGN
   p.ENET2.IEEE_R_ALIGN
#### atoff
<link=ATOFF>
#### atcor
<link=ATCOR>
#### TCSR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TCSR2
   p.ENET2.TCSR2
#### tcsr2
<link=TCSR2>
#### gptimer1ctrl
<link=GPTIMER1CTRL>
#### dciversion
<link=DCIVERSION>
#### TXFILLTUNING
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.TXFILLTUNING
   p.USB2.TXFILLTUNING
#### endptnak
<link=ENDPTNAK>
#### BR1
<link=p.SEMC.BR1>
#### br8
<link=BR8>
#### SDRAMCR2
<link=p.SEMC.SDRAMCR2>
#### NORCR2
<link=p.SEMC.NORCR2>
#### dbicr0
<link=DBICR0>
#### IPCR2
<link=p.SEMC.IPCR2>
#### IPRXDAT
<link=p.SEMC.IPRXDAT>
#### sts11
<link=STS11>
#### packet6
<link=PACKET6>
#### ch0cmdptr
<link=CH0CMDPTR>
#### ch0opts_set
<link=CH0OPTS_SET>
#### ch1opts_set
<link=CH1OPTS_SET>
#### CH3CMDPTR
<link=p.DCP.CH3CMDPTR>
#### CH3OPTS_SET
<link=p.DCP.CH3OPTS_SET>
#### STCSCH
<link=p.SPDIF.STCSCH>
#### stcscl
<link=STCSCL>
#### TCSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TCSR
   p.SAI2.TCSR
   p.SAI3.TCSR
#### tcsr
<link=TCSR>
#### tcr1
<link=TCR1>
#### tfr[3]
<link=TFR[3]>
#### rcsr
<link=RCSR>
#### RCR4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RCR4
   p.SAI2.RCR4
   p.SAI3.RCR4
#### RDR[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RDR[2]
   p.SAI2.RDR[2]
   p.SAI3.RDR[2]
#### rfr[0]
<link=RFR[0]>
#### RFR[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RFR[3]
   p.SAI2.RFR[3]
   p.SAI3.RFR[3]
#### dmr1
<link=DMR1>
#### TRIG0_CTRL
<link=p.ADC_ETC.TRIG0_CTRL>
#### TRIG0_CHAIN_7_6
<link=p.ADC_ETC.TRIG0_CHAIN_7_6>
#### trig1_result_1_0
<link=TRIG1_RESULT_1_0>
#### trig1_result_3_2
<link=TRIG1_RESULT_3_2>
#### TRIG3_COUNTER
<link=p.ADC_ETC.TRIG3_COUNTER>
#### TRIG4_CHAIN_5_4
<link=p.ADC_ETC.TRIG4_CHAIN_5_4>
#### trig7_chain_5_4
<link=TRIG7_CHAIN_5_4>
#### trig7_chain_7_6
<link=TRIG7_CHAIN_7_6>
#### bfcrt232
<link=BFCRT232>
#### SEL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.XBARA1.SEL3
   p.XBARB2.SEL3
   p.XBARB3.SEL3
#### sel18
<link=SEL18>
#### sel25
<link=SEL25>
#### SEL27
<link=p.XBARA1.SEL27>
#### SEL30
<link=p.XBARA1.SEL30>
#### SEL52
<link=p.XBARA1.SEL52>
#### sel55
<link=SEL55>
#### LPOS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.LPOS
   p.ENC2.LPOS
   p.ENC3.LPOS
   p.ENC4.LPOS
#### LINIT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.LINIT
   p.ENC2.LINIT
   p.ENC3.LINIT
   p.ENC4.LINIT
#### LCOMP
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.LCOMP
   p.ENC2.LCOMP
   p.ENC3.LCOMP
   p.ENC4.LCOMP
#### SM0VAL4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0VAL4
   p.PWM2.SM0VAL4
   p.PWM3.SM0VAL4
   p.PWM4.SM0VAL4
#### SM0CVAL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CVAL3
   p.PWM2.SM0CVAL3
   p.PWM3.SM0CVAL3
   p.PWM4.SM0CVAL3
#### SM1VAL4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1VAL4
   p.PWM2.SM1VAL4
   p.PWM3.SM1VAL4
   p.PWM4.SM1VAL4
#### SM1FRACVAL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1FRACVAL5
   p.PWM2.SM1FRACVAL5
   p.PWM3.SM1FRACVAL5
   p.PWM4.SM1FRACVAL5
#### SM1CAPTCTRLA
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CAPTCTRLA
   p.PWM2.SM1CAPTCTRLA
   p.PWM3.SM1CAPTCTRLA
   p.PWM4.SM1CAPTCTRLA
#### sm1captctrlx
<link=SM1CAPTCTRLX>
#### SM1CVAL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CVAL0
   p.PWM2.SM1CVAL0
   p.PWM3.SM1CVAL0
   p.PWM4.SM1CVAL0
#### sm1cval3cyc
<link=SM1CVAL3CYC>
#### sm2inten
<link=SM2INTEN>
#### SM2CVAL1CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL1CYC
   p.PWM2.SM2CVAL1CYC
   p.PWM3.SM2CVAL1CYC
   p.PWM4.SM2CVAL1CYC
#### SM2CVAL2CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL2CYC
   p.PWM2.SM2CVAL2CYC
   p.PWM3.SM2CVAL2CYC
   p.PWM4.SM2CVAL2CYC
#### SM2CVAL4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL4
   p.PWM2.SM2CVAL4
   p.PWM3.SM2CVAL4
   p.PWM4.SM2CVAL4
#### sm2cval5
<link=SM2CVAL5>
#### SM3INIT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3INIT
   p.PWM2.SM3INIT
   p.PWM3.SM3INIT
   p.PWM4.SM3INIT
#### sm3inten
<link=SM3INTEN>
#### sm3tctrl
<link=SM3TCTRL>
#### mctrl
<link=MCTRL>
#### fctrl0
<link=FCTRL0>
#### AES_KEY0_W0
<link=p.BEE.AES_KEY0_W0>
#### ctr_nonce0_w2
<link=CTR_NONCE0_W2>
#### ctr_nonce1_w1
<link=CTR_NONCE1_W1>
#### MCFGR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MCFGR2
   p.LPI2C2.MCFGR2
   p.LPI2C3.MCFGR2
   p.LPI2C4.MCFGR2
#### mtdr
<link=MTDR>
#### ssr
<link=SSR>
#### SDER
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.SDER
   p.LPI2C2.SDER
   p.LPI2C3.SDER
   p.LPI2C4.SDER
#### SHCSR
<link=p.SystemControl.SHCSR>
#### id_dfr0
<link=ID_DFR0>
#### ID_MMFR3
<link=p.SystemControl.ID_MMFR3>
#### id_mmfr3
<link=ID_MMFR3>
#### id_isar3
<link=ID_ISAR3>
#### stir
<link=STIR>
#### CM7_ITCMCR
<link=p.SystemControl.CM7_ITCMCR>
#### nviciser2
<link=NVICISER2>
#### nvicicer1
<link=NVICICER1>
#### nvicip7
<link=NVICIP7>
#### NVICIP13
<link=p.NVIC.NVICIP13>
#### nvicip25
<link=NVICIP25>
#### nvicip32
<link=NVICIP32>
#### NVICIP35
<link=p.NVIC.NVICIP35>
#### NVICIP45
<link=p.NVIC.NVICIP45>
#### nvicip50
<link=NVICIP50>
#### NVICIP63
<link=p.NVIC.NVICIP63>
#### nvicip69
<link=NVICIP69>
#### NVICIP79
<link=p.NVIC.NVICIP79>
#### NVICIP81
<link=p.NVIC.NVICIP81>
#### nvicip88
<link=NVICIP88>
#### nvicip94
<link=NVICIP94>
#### nvicip104
<link=NVICIP104>
#### NVICIP112
<link=p.NVIC.NVICIP112>
#### NVICIP123
<link=p.NVIC.NVICIP123>
#### NVICIP134
<link=p.NVIC.NVICIP134>
#### NVICIP141
<link=p.NVIC.NVICIP141>
#### nvicip148
<link=NVICIP148>
#### nvicip154
<link=NVICIP154>
