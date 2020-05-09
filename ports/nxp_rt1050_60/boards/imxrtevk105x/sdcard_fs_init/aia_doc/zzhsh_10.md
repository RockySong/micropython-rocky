#### aipstz1.opacr4
<link=p.AIPSTZ1.OPACR4>
#### p.aipstz3.opacr
<link=p.AIPSTZ3.OPACR>
#### p.aipstz3.opacr2
<link=p.AIPSTZ3.OPACR2>
#### p.aipstz4
<link=p.AIPSTZ4>
#### p.AIPSTZ4.OPACR
<lang=dft>
 (rw)  [1;33m0x4037c040[0m (0x4037c000 + 0x0040)
Off-Platform Peripheral Access Control Registers
 (rw) (04)  [0;32mOPAC7[0m  - [03:00] -  Off-platform Peripheral Access Control 7
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC6[0m  - [07:04] -  Off-platform Peripheral Access Control 6
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC5[0m  - [11:08] -  Off-platform Peripheral Access Control 5
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC4[0m  - [15:12] -  Off-platform Peripheral Access Control 4
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC3[0m  - [19:16] -  Off-platform Peripheral Access Control 3
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC2[0m  - [23:20] -  Off-platform Peripheral Access Control 2
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC1[0m  - [27:24] -  Off-platform Peripheral Access Control 1
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC0[0m  - [31:28] -  Off-platform Peripheral Access Control 0
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
</lang>
#### p.aipstz4.opacr3
<link=p.AIPSTZ4.OPACR3>
#### p.pit.tflg0
<link=p.PIT.TFLG0>
#### pit.tflg0
<link=p.PIT.TFLG0>
#### p.pit.mcr
<link=p.PIT.MCR>
#### p.cmp1.fpr
<link=p.CMP1.FPR>
#### cmp4.cr1
<link=p.CMP4.CR1>
#### p.iomuxc_snvs.sw_pad_ctl_pad_por_b
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_POR_B>
#### p.iomuxc_snvs.sw_pad_ctl_pad_wakeup
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_WAKEUP>
#### iomuxc_gpr.gpr1
<link=p.IOMUXC_GPR.GPR1>
#### p.IOMUXC_GPR.GPR4
<lang=dft>
 (rw)  [1;33m0x400ac010[0m (0x400ac000 + 0x0010)
GPR4 General Purpose Register
 (rw) (01)  [0;32mEDMA_STOP_REQ[0m  - [00:00] -  EDMA stop request.
      0 - EDMA_STOP_REQ_0 :
         stop request off
      0x1 - EDMA_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mCAN1_STOP_REQ[0m  - [01:01] -  CAN1 stop request.
      0 - CAN1_STOP_REQ_0 :
         stop request off
      0x1 - CAN1_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mCAN2_STOP_REQ[0m  - [02:02] -  CAN2 stop request.
      0 - CAN2_STOP_REQ_0 :
         stop request off
      0x1 - CAN2_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mTRNG_STOP_REQ[0m  - [03:03] -  TRNG stop request.
      0 - TRNG_STOP_REQ_0 :
         stop request off
      0x1 - TRNG_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mENET_STOP_REQ[0m  - [04:04] -  ENET stop request.
      0 - ENET_STOP_REQ_0 :
         stop request off
      0x1 - ENET_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mSAI1_STOP_REQ[0m  - [05:05] -  SAI1 stop request.
      0 - SAI1_STOP_REQ_0 :
         stop request off
      0x1 - SAI1_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mSAI2_STOP_REQ[0m  - [06:06] -  SAI2 stop request.
      0 - SAI2_STOP_REQ_0 :
         stop request off
      0x1 - SAI2_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mSAI3_STOP_REQ[0m  - [07:07] -  SAI3 stop request.
      0 - SAI3_STOP_REQ_0 :
         stop request off
      0x1 - SAI3_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mENET2_STOP_REQ[0m  - [08:08] -  ENET2 stop request.
      0 - ENET2_STOP_REQ_0 :
         stop request off
      0x1 - ENET2_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mSEMC_STOP_REQ[0m  - [09:09] -  SEMC stop request.
      0 - SEMC_STOP_REQ_0 :
         stop request off
      0x1 - SEMC_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mPIT_STOP_REQ[0m  - [10:10] -  PIT stop request.
      0 - PIT_STOP_REQ_0 :
         stop request off
      0x1 - PIT_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mFLEXSPI_STOP_REQ[0m  - [11:11] -  FlexSPI stop request.
      0 - FLEXSPI_STOP_REQ_0 :
         stop request off
      0x1 - FLEXSPI_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mFLEXIO1_STOP_REQ[0m  - [12:12] -  FlexIO1 stop request.
      0 - FLEXIO1_STOP_REQ_0 :
         stop request off
      0x1 - FLEXIO1_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mFLEXIO2_STOP_REQ[0m  - [13:13] -  FlexIO2 stop request.
      0 - FLEXIO2_STOP_REQ_0 :
         stop request off
      0x1 - FLEXIO2_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mFLEXIO3_STOP_REQ[0m  - [14:14] -  On-platform flexio3 stop request.
      0 - FLEXIO3_STOP_REQ_0 :
         stop request off
      0x1 - FLEXIO3_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mFLEXSPI2_STOP_REQ[0m  - [15:15] -  FlexSPI2 stop request.
      0 - FLEXSPI2_STOP_REQ_0 :
         stop request off
      0x1 - FLEXSPI2_STOP_REQ_1 :
         stop request on
 (ro) (01)  [0;32mEDMA_STOP_ACK[0m  - [16:16] -  EDMA stop acknowledge. This is a status (read-only) bit
      0 - EDMA_STOP_ACK_0 :
         EDMA stop acknowledge is not asserted
      0x1 - EDMA_STOP_ACK_1 :
         EDMA stop acknowledge is asserted (EDMA is in STOP mode).
 (ro) (01)  [0;32mCAN1_STOP_ACK[0m  - [17:17] -  CAN1 stop acknowledge.
      0 - CAN1_STOP_ACK_0 :
         CAN1 stop acknowledge is not asserted
      0x1 - CAN1_STOP_ACK_1 :
         CAN1 stop acknowledge is asserted
 (ro) (01)  [0;32mCAN2_STOP_ACK[0m  - [18:18] -  CAN2 stop acknowledge.
      0 - CAN2_STOP_ACK_0 :
         CAN2 stop acknowledge is not asserted
      0x1 - CAN2_STOP_ACK_1 :
         CAN2 stop acknowledge is asserted
 (ro) (01)  [0;32mTRNG_STOP_ACK[0m  - [19:19] -  TRNG stop acknowledge
      0 - TRNG_STOP_ACK_0 :
         TRNG stop acknowledge is not asserted
      0x1 - TRNG_STOP_ACK_1 :
         TRNG stop acknowledge is asserted
 (ro) (01)  [0;32mENET_STOP_ACK[0m  - [20:20] -  ENET stop acknowledge.
      0 - ENET_STOP_ACK_0 :
         ENET1 stop acknowledge is not asserted
      0x1 - ENET_STOP_ACK_1 :
         ENET1 stop acknowledge is asserted
 (ro) (01)  [0;32mSAI1_STOP_ACK[0m  - [21:21] -  SAI1 stop acknowledge
      0 - SAI1_STOP_ACK_0 :
         SAI1 stop acknowledge is not asserted
      0x1 - SAI1_STOP_ACK_1 :
         SAI1 stop acknowledge is asserted
 (ro) (01)  [0;32mSAI2_STOP_ACK[0m  - [22:22] -  SAI2 stop acknowledge
      0 - SAI2_STOP_ACK_0 :
         SAI2 stop acknowledge is not asserted
      0x1 - SAI2_STOP_ACK_1 :
         SAI2 stop acknowledge is asserted
 (ro) (01)  [0;32mSAI3_STOP_ACK[0m  - [23:23] -  SAI3 stop acknowledge
      0 - SAI3_STOP_ACK_0 :
         SAI3 stop acknowledge is not asserted
      0x1 - SAI3_STOP_ACK_1 :
         SAI3 stop acknowledge is asserted
 (ro) (01)  [0;32mENET2_STOP_ACK[0m  - [24:24] -  ENET2 stop acknowledge.
      0 - ENET2_STOP_ACK_0 :
         ENET2 stop acknowledge is not asserted
      0x1 - ENET2_STOP_ACK_1 :
         ENET2 stop acknowledge is asserted
 (ro) (01)  [0;32mSEMC_STOP_ACK[0m  - [25:25] -  SEMC stop acknowledge
      0 - SEMC_STOP_ACK_0 :
         SEMC stop acknowledge is not asserted
      0x1 - SEMC_STOP_ACK_1 :
         SEMC stop acknowledge is asserted
 (ro) (01)  [0;32mPIT_STOP_ACK[0m  - [26:26] -  PIT stop acknowledge
      0 - PIT_STOP_ACK_0 :
         PIT stop acknowledge is not asserted
      0x1 - PIT_STOP_ACK_1 :
         PIT stop acknowledge is asserted
 (ro) (01)  [0;32mFLEXSPI_STOP_ACK[0m  - [27:27] -  FLEXSPI stop acknowledge
      0 - FLEXSPI_STOP_ACK_0 :
         FLEXSPI stop acknowledge is not asserted
      0x1 - FLEXSPI_STOP_ACK_1 :
         FLEXSPI stop acknowledge is asserted
 (ro) (01)  [0;32mFLEXIO1_STOP_ACK[0m  - [28:28] -  FLEXIO1 stop acknowledge
      0 - FLEXIO1_STOP_ACK_0 :
         FLEXIO1 stop acknowledge is not asserted
      0x1 - FLEXIO1_STOP_ACK_1 :
         FLEXIO1 stop acknowledge is asserted
 (ro) (01)  [0;32mFLEXIO2_STOP_ACK[0m  - [29:29] -  FLEXIO2 stop acknowledge
      0 - FLEXIO2_STOP_ACK_0 :
         FLEXIO2 stop acknowledge is not asserted
      0x1 - FLEXIO2_STOP_ACK_1 :
         FLEXIO2 stop acknowledge is asserted (FLEXIO2 is in STOP mode)
 (ro) (01)  [0;32mFLEXIO3_STOP_ACK[0m  - [30:30] -  On-platform FLEXIO3 stop acknowledge
      0 - FLEXIO3_STOP_ACK_0 :
         FLEXIO3 stop acknowledge is not asserted
      0x1 - FLEXIO3_STOP_ACK_1 :
         FLEXIO3 stop acknowledge is asserted
 (ro) (01)  [0;32mFLEXSPI2_STOP_ACK[0m  - [31:31] -  FLEXSPI2 stop acknowledge
      0 - FLEXSPI2_STOP_ACK_0 :
         FLEXSPI2 stop acknowledge is not asserted
      0x1 - FLEXSPI2_STOP_ACK_1 :
         FLEXSPI2 stop acknowledge is asserted
</lang>
#### iomuxc_gpr.gpr16
<link=p.IOMUXC_GPR.GPR16>
#### IOMUXC_GPR.GPR19
<link=p.IOMUXC_GPR.GPR19>
#### p.IOMUXC_GPR.GPR22
<lang=dft>
 (rw)  [1;33m0x400ac058[0m (0x400ac000 + 0x0058)
GPR22 General Purpose Register
 (rw) (01)  [0;32mLOCK_M7_APC_AC_R2_BOT[0m  - [00:00] -  lock M7_APC_AC_R2_BOT field for changes
      0 - LOCK_M7_APC_AC_R2_BOT_0 :
         Register field [31:1] is not locked
      0x1 - LOCK_M7_APC_AC_R2_BOT_1 :
         Register field [31:1] is locked (read access only)
 (rw) (29)  [0;32mM7_APC_AC_R2_BOT[0m  - [31:03] -  APC end address of memory region-2
</lang>
#### p.iomuxc_gpr.gpr27
<link=p.IOMUXC_GPR.GPR27>
#### IOMUXC_GPR.GPR28
<link=p.IOMUXC_GPR.GPR28>
#### p.iomuxc_gpr.gpr30
<link=p.IOMUXC_GPR.GPR30>
#### p.wdog1.wsr
<link=p.WDOG1.WSR>
#### ADC1.HC7
<link=p.ADC1.HC7>
#### ADC1.R6
<link=p.ADC1.R6>
#### p.adc1.cv
<link=p.ADC1.CV>
#### ADC1.CV
<link=p.ADC1.CV>
#### p.ADC2.HC2
<lang=dft>
 (rw)  [1;33m0x400c8008[0m (0x400c8000 + 0x0008)
Control register for hardware triggers
 (rw) (05)  [0;32mADCH[0m  - [04:00] -  Input Channel Select
      0x10 - ADCH_16 :
         External channel selection from ADC_ETC
      0x19 - ADCH_25 :
         VREFSH = internal channel, for ADC self-test, hard connected to VRH int
         ernally
      0x1F - ADCH_31 :
         Conversion Disabled. Hardware Triggers will not initiate any conversion
         .
 (rw) (01)  [0;32mAIEN[0m  - [07:07] -  Conversion Complete Interrupt Enable/Disable Control
      0 - AIEN_0 :
         Conversion complete interrupt disabled
      0x1 - AIEN_1 :
         Conversion complete interrupt enabled
</lang>
#### ADC2.HC5
<link=p.ADC2.HC5>
#### p.adc2.hs
<link=p.ADC2.HS>
#### ADC2.R2
<link=p.ADC2.R2>
#### TRNG.PKRMAX
<link=p.TRNG.PKRMAX>
#### p.TRNG.PKRSQ
<lang=dft>
 (ro)  [1;33m0x400cc00c[0m (0x400cc000 + 0x000c)
Poker Square Calculation Result Register
 (ro) (24)  [0;32mPKR_SQ[0m  - [23:00] -  Poker Square Calculation Result.
</lang>
#### TRNG.SCR1L
<link=p.TRNG.SCR1L>
#### TRNG.SCR6PC
<link=p.TRNG.SCR6PC>
#### p.TRNG.SCR6PL
<lang=dft>
 (rw)  [1;33m0x400cc038[0m (0x400cc000 + 0x0038)
Statistical Check Run Length 6+ Limit Register
 (rw) (11)  [0;32mRUN6P_MAX[0m  - [10:00] -  Run Length 6+ Maximum Limit
 (rw) (11)  [0;32mRUN6P_RNG[0m  - [26:16] -  Run Length 6+ Range
</lang>
#### TRNG.ENT[2]
<link=p.TRNG.ENT[2]>
#### p.TRNG.ENT[3]
<lang=dft>
 (ro)  [1;33m0x400cc04c[0m (0x400cc000 + 0x004c)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### p.trng.ent[3]
<link=p.TRNG.ENT[3]>
#### p.trng.ent[8]
<link=p.TRNG.ENT[8]>
#### p.trng.ent[11]
<link=p.TRNG.ENT[11]>
#### p.TRNG.ENT[15]
<lang=dft>
 (ro)  [1;33m0x400cc07c[0m (0x400cc000 + 0x007c)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### p.trng.pkrcntba
<link=p.TRNG.PKRCNTBA>
#### p.trng.pkrcntdc
<link=p.TRNG.PKRCNTDC>
#### p.TRNG.SEC_CFG
<lang=dft>
 (rw)  [1;33m0x400cc0a0[0m (0x400cc000 + 0x00a0)
Security Configuration Register
 (rw) (01)  [0;32mUNUSED0[0m  - [00:00] -  This bit is unused. Ignore.
 (rw) (01)  [0;32mNO_PRGM[0m  - [01:01] -  If set, the TRNG registers cannot be programmed
      0 - NO_PRGM_0 :
         Programability of registers controlled only by the Miscellaneous Contro
         l Register's access mode bit.
      0x1 - NO_PRGM_1 :
         Overides Miscellaneous Control Register access mode and prevents TRNG r
         egister programming.
 (rw) (01)  [0;32mUNUSED2[0m  - [02:02] -  This bit is unused. Ignore.
</lang>
#### trng.int_status
<link=p.TRNG.INT_STATUS>
#### TRNG.VID2
<link=p.TRNG.VID2>
#### p.SNVS.HPCOMR
<lang=dft>
 (rw)  [1;33m0x400d4004[0m (0x400d4000 + 0x0004)
SNVS_HP Command Register
 (wo) (01)  [0;32mSSM_ST[0m  - [00:00] -  SSM State Transition Transition state of the system security monitor
 (rw) (01)  [0;32mSSM_ST_DIS[0m  - [01:01] -  SSM Secure to Trusted State Transition Disable When set, disables the SSM trans
 ition from secure to trusted state
      0 - SSM_ST_DIS_0 :
         Secure to Trusted State transition is enabled
      0x1 - SSM_ST_DIS_1 :
         Secure to Trusted State transition is disabled
 (rw) (01)  [0;32mSSM_SFNS_DIS[0m  - [02:02] -  SSM Soft Fail to Non-Secure State Transition Disable When set, it disables the 
 SSM transition from soft fail to non-secure state
      0 - SSM_SFNS_DIS_0 :
         Soft Fail to Non-Secure State transition is enabled
      0x1 - SSM_SFNS_DIS_1 :
         Soft Fail to Non-Secure State transition is disabled
 (wo) (01)  [0;32mLP_SWR[0m  - [04:04] -  LP Software Reset When set to 1, most registers in the SNVS_LP section are rese
 t, but the following registers are not reset by an LP software reset: Secure Re
 al Time Counter Time Alarm Register This bit cannot be set when the LP_SWR_DIS 
 bit is set
      0 - LP_SWR_0 :
         No Action
      0x1 - LP_SWR_1 :
         Reset LP section
 (rw) (01)  [0;32mLP_SWR_DIS[0m  - [05:05] -  LP Software Reset Disable When set, disables the LP software reset
      0 - LP_SWR_DIS_0 :
         LP software reset is enabled
      0x1 - LP_SWR_DIS_1 :
         LP software reset is disabled
 (rw) (01)  [0;32mSW_SV[0m  - [08:08] -  Software Security Violation When set, the system security monitor treats this b
 it as a non-fatal security violation
 (rw) (01)  [0;32mSW_FSV[0m  - [09:09] -  Software Fatal Security Violation When set, the system security monitor treats 
 this bit as a fatal security violation
 (rw) (01)  [0;32mSW_LPSV[0m  - [10:10] -  LP Software Security Violation When set, SNVS_LP treats this bit as a security 
 violation
 (wo) (01)  [0;32mPROG_ZMK[0m  - [12:12] -  Program Zeroizable Master Key This bit activates ZMK hardware programming mecha
 nism
      0 - PROG_ZMK_0 :
         No Action
      0x1 - PROG_ZMK_1 :
         Activate hardware key programming mechanism
 (rw) (01)  [0;32mMKS_EN[0m  - [13:13] -  Master Key Select Enable When not set, the one time programmable (OTP) master k
 ey is selected by default
      0 - MKS_EN_0 :
         OTP master key is selected as an SNVS master key
      0x1 - MKS_EN_1 :
         SNVS master key is selected according to the setting of the MASTER_KEY_
         SEL field of LPMKCR
 (rw) (01)  [0;32mHAC_EN[0m  - [16:16] -  High Assurance Counter Enable This bit controls the SSM transition from the sof
 t fail to the hard fail state
      0 - HAC_EN_0 :
         High Assurance Counter is disabled
      0x1 - HAC_EN_1 :
         High Assurance Counter is enabled
 (wo) (01)  [0;32mHAC_LOAD[0m  - [17:17] -  High Assurance Counter Load When set, it loads the High Assurance Counter Regis
 ter with the value of the High Assurance Counter Load Register
      0 - HAC_LOAD_0 :
         No Action
      0x1 - HAC_LOAD_1 :
         Load the HAC
 (wo) (01)  [0;32mHAC_CLEAR[0m  - [18:18] -  High Assurance Counter Clear When set, it clears the High Assurance Counter Reg
 ister
      0 - HAC_CLEAR_0 :
         No Action
      0x1 - HAC_CLEAR_1 :
         Clear the HAC
 (rw) (01)  [0;32mHAC_STOP[0m  - [19:19] -  High Assurance Counter Stop This bit can be set only when SSM is in soft fail s
 tate
 (rw) (01)  [0;32mNPSWA_EN[0m  - [31:31] -  Non-Privileged Software Access Enable When set, allows non-privileged software 
 to access all SNVS registers, including those that are privileged software read
 /write access only
</lang>
#### p.SNVS.HPSVSR
<lang=dft>
 (rw)  [1;33m0x400d4018[0m (0x400d4000 + 0x0018)
SNVS_HP Security Violation Status Register
 (rw) (01)  [0;32mSV0[0m  - [00:00] -  Security Violation 0 security violation was detected.
      0 - SV0_0 :
         No Security Violation 0 security violation was detected.
      0x1 - SV0_1 :
         Security Violation 0 security violation was detected.
 (rw) (01)  [0;32mSV1[0m  - [01:01] -  Security Violation 1 security violation was detected.
      0 - SV1_0 :
         No Security Violation 1 security violation was detected.
      0x1 - SV1_1 :
         Security Violation 1 security violation was detected.
 (rw) (01)  [0;32mSV2[0m  - [02:02] -  Security Violation 2 security violation was detected.
      0 - SV2_0 :
         No Security Violation 2 security violation was detected.
      0x1 - SV2_1 :
         Security Violation 2 security violation was detected.
 (rw) (01)  [0;32mSV3[0m  - [03:03] -  Security Violation 3 security violation was detected.
      0 - SV3_0 :
         No Security Violation 3 security violation was detected.
      0x1 - SV3_1 :
         Security Violation 3 security violation was detected.
 (rw) (01)  [0;32mSV4[0m  - [04:04] -  Security Violation 4 security violation was detected.
      0 - SV4_0 :
         No Security Violation 4 security violation was detected.
      0x1 - SV4_1 :
         Security Violation 4 security violation was detected.
 (rw) (01)  [0;32mSV5[0m  - [05:05] -  Security Violation 5 security violation was detected.
      0 - SV5_0 :
         No Security Violation 5 security violation was detected.
      0x1 - SV5_1 :
         Security Violation 5 security violation was detected.
 (ro) (01)  [0;32mSW_SV[0m  - [13:13] -  Software Security Violation This bit is a read-only copy of the SW_SV bit in th
 e HP Command Register
 (ro) (01)  [0;32mSW_FSV[0m  - [14:14] -  Software Fatal Security Violation This bit is a read-only copy of the SW_FSV bi
 t in the HP Command Register
 (ro) (01)  [0;32mSW_LPSV[0m  - [15:15] -  LP Software Security Violation This bit is a read-only copy of the SW_LPSV bit 
 in the HP Command Register
 (ro) (09)  [0;32mZMK_SYNDROME[0m  - [24:16] -  Zeroizable Master Key Syndrome The ZMK syndrome indicates the single-bit error 
 location and parity for the ZMK register
 (rw) (01)  [0;32mZMK_ECC_FAIL[0m  - [27:27] -  Zeroizable Master Key Error Correcting Code Check Failure When set, this bit tr
 iggers a bad key violation to the SSM and a security violation to the SNVS_LP s
 ection, which clears security sensitive data
      0 - ZMK_ECC_FAIL_0 :
         ZMK ECC Failure was not detected.
      0x1 - ZMK_ECC_FAIL_1 :
         ZMK ECC Failure was detected.
 (ro) (01)  [0;32mLP_SEC_VIO[0m  - [31:31] -  LP Security Violation A security volation was detected in the SNVS low power se
 ction.
</lang>
#### SNVS.HPTAMR
<link=p.SNVS.HPTAMR>
#### snvs.lplr
<link=p.SNVS.LPLR>
#### snvs.lpsvcr
<link=p.SNVS.LPSVCR>
#### SNVS.LPSRTCMR
<link=p.SNVS.LPSRTCMR>
#### p.snvs.lpsmclr
<link=p.SNVS.LPSMCLR>
#### p.SNVS.LPPGDR
<lang=dft>
 (rw)  [1;33m0x400d4064[0m (0x400d4000 + 0x0064)
SNVS_LP Power Glitch Detector Register
 (rw) (32)  [0;32mPGD[0m  - [31:00] -  Power Glitch Detector Value
</lang>
#### p.snvs.lpgpr0_legacy_alias
<link=p.SNVS.LPGPR0_LEGACY_ALIAS>
#### p.SNVS.LPZMKR[2]
<lang=dft>
 (rw)  [1;33m0x400d4074[0m (0x400d4000 + 0x0074)
SNVS_LP Zeroizable Master Key Register
 (rw) (32)  [0;32mZMK[0m  - [31:00] -  Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit Z
 MK value
</lang>
#### snvs.lpzmkr[5]
<link=p.SNVS.LPZMKR[5]>
#### snvs.lpgpr_alias[3]
<link=p.SNVS.LPGPR_ALIAS[3]>
#### p.SNVS.LPGPR[1]
<lang=dft>
 (rw)  [1;33m0x400d4104[0m (0x400d4000 + 0x0104)
SNVS_LP General Purpose Registers 0 .. 7
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### SNVS.HPVIDR1
<link=p.SNVS.HPVIDR1>
#### CCM_ANALOG.PLL_ARM
<link=p.CCM_ANALOG.PLL_ARM>
#### p.CCM_ANALOG.PLL_SYS_TOG
<lang=dft>
 (rw)  [1;33m0x400d803c[0m (0x400d8000 + 0x003c)
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
#### CCM_ANALOG.PLL_AUDIO_SET
<link=p.CCM_ANALOG.PLL_AUDIO_SET>
#### ccm_analog.pll_audio_num
<link=p.CCM_ANALOG.PLL_AUDIO_NUM>
#### CCM_ANALOG.PLL_AUDIO_NUM
<link=p.CCM_ANALOG.PLL_AUDIO_NUM>
#### ccm_analog.pll_video
<link=p.CCM_ANALOG.PLL_VIDEO>
#### ccm_analog.pll_video_denom
<link=p.CCM_ANALOG.PLL_VIDEO_DENOM>
#### ccm_analog.pfd_480
<link=p.CCM_ANALOG.PFD_480>
#### ccm_analog.pfd_480_set
<link=p.CCM_ANALOG.PFD_480_SET>
#### ccm_analog.pfd_528
<link=p.CCM_ANALOG.PFD_528>
#### CCM_ANALOG.PFD_528_SET
<link=p.CCM_ANALOG.PFD_528_SET>
#### p.ccm_analog.misc1
<link=p.CCM_ANALOG.MISC1>
#### p.CCM_ANALOG.MISC1_TOG
<lang=dft>
 (rw)  [1;33m0x400d816c[0m (0x400d8000 + 0x016c)
Miscellaneous Register 1
 (rw) (05)  [0;32mLVDS1_CLK_SEL[0m  - [04:00] -  This field selects the clk to be routed to anaclk1/1b.
      0 - ARM_PLL :
         Arm PLL
      0x1 - SYS_PLL :
         System PLL
      0x2 - PFD4 :
         ref_pfd4_clk == pll2_pfd0_clk
      0x3 - PFD5 :
         ref_pfd5_clk == pll2_pfd1_clk
      0x4 - PFD6 :
         ref_pfd6_clk == pll2_pfd2_clk
      0x5 - PFD7 :
         ref_pfd7_clk == pll2_pfd3_clk
      0x6 - AUDIO_PLL :
         Audio PLL
      0x7 - VIDEO_PLL :
         Video PLL
      0x9 - ETHERNET_REF :
         ethernet ref clock (ENET_PLL)
      0xC - USB1_PLL :
         USB1 PLL clock
      0xD - USB2_PLL :
         USB2 PLL clock
      0xE - PFD0 :
         ref_pfd0_clk == pll3_pfd0_clk
      0xF - PFD1 :
         ref_pfd1_clk == pll3_pfd1_clk
      0x10 - PFD2 :
         ref_pfd2_clk == pll3_pfd2_clk
      0x11 - PFD3 :
         ref_pfd3_clk == pll3_pfd3_clk
      0x12 - XTAL :
         xtal (24M)
 (rw) (01)  [0;32mLVDSCLK1_OBEN[0m  - [10:10] -  This enables the LVDS output buffer for anaclk1/1b
 (rw) (01)  [0;32mLVDSCLK1_IBEN[0m  - [12:12] -  This enables the LVDS input buffer for anaclk1/1b
 (rw) (01)  [0;32mPFD_480_AUTOGATE_EN[0m  - [16:16] -  This enables a feature that will clkgate (reset) all PFD_480 clocks anytime the
  USB1_PLL_480 is unlocked or powered off
 (rw) (01)  [0;32mPFD_528_AUTOGATE_EN[0m  - [17:17] -  This enables a feature that will clkgate (reset) all PFD_528 clocks anytime the
  PLL_528 is unlocked or powered off
 (rw) (01)  [0;32mIRQ_TEMPPANIC[0m  - [27:27] -  This status bit is set to one when the temperature sensor panic interrupt asser
 ts for a panic high temperature
 (rw) (01)  [0;32mIRQ_TEMPLOW[0m  - [28:28] -  This status bit is set to one when the temperature sensor low interrupt asserts
  for low temperature
 (rw) (01)  [0;32mIRQ_TEMPHIGH[0m  - [29:29] -  This status bit is set to one when the temperature sensor high interrupt assert
 s for high temperature
 (rw) (01)  [0;32mIRQ_ANA_BO[0m  - [30:30] -  This status bit is set to one when when any of the analog regulator brownout in
 terrupts assert
 (rw) (01)  [0;32mIRQ_DIG_BO[0m  - [31:31] -  This status bit is set to one when when any of the digital regulator brownout i
 nterrupts assert
</lang>
#### ccm_analog.misc1_tog
<link=p.CCM_ANALOG.MISC1_TOG>
#### p.pmu
<link=p.PMU>
#### p.pmu.reg_1p1_clr
<link=p.PMU.REG_1P1_CLR>
#### PMU.REG_1P1_CLR
<link=p.PMU.REG_1P1_CLR>
#### p.PMU.REG_2P5_CLR
<lang=dft>
 (rw)  [1;33m0x400d8138[0m (0x400d8000 + 0x0138)
Regulator 2P5 Register
 (rw) (01)  [0;32mENABLE_LINREG[0m  - [00:00] -  Control bit to enable the regulator output.
 (rw) (01)  [0;32mENABLE_BO[0m  - [01:01] -  Control bit to enable the brownout circuitry in the regulator.
 (rw) (01)  [0;32mENABLE_ILIMIT[0m  - [02:02] -  Control bit to enable the current-limit circuitry in the regulator.
 (rw) (01)  [0;32mENABLE_PULLDOWN[0m  - [03:03] -  Control bit to enable the pull-down circuitry in the regulator
 (rw) (03)  [0;32mBO_OFFSET[0m  - [06:04] -  Control bits to adjust the regulator brownout offset voltage in 25mV steps
 (rw) (05)  [0;32mOUTPUT_TRG[0m  - [12:08] -  Control bits to adjust the regulator output voltage
      0 - OUTPUT_TRG_0 :
         2.10V
      0x10 - OUTPUT_TRG_16 :
         2.50V
      0x1F - OUTPUT_TRG_31 :
         2.875V
 (ro) (01)  [0;32mBO_VDD2P5[0m  - [16:16] -  Status bit that signals when a brownout is detected on the regulator output.
 (ro) (01)  [0;32mOK_VDD2P5[0m  - [17:17] -  Status bit that signals when the regulator output is ok. 1 = regulator output >
  brownout target
 (rw) (01)  [0;32mENABLE_WEAK_LINREG[0m  - [18:18] -  Enables the weak 2p5 regulator
</lang>
#### PMU.REG_CORE_SET
<link=p.PMU.REG_CORE_SET>
#### pmu.reg_core_clr
<link=p.PMU.REG_CORE_CLR>
#### pmu.misc0
<link=p.PMU.MISC0>
#### p.pmu.misc0_set
<link=p.PMU.MISC0_SET>
#### PMU.MISC1
<link=p.PMU.MISC1>
#### p.PMU.MISC1_SET
<lang=dft>
 (rw)  [1;33m0x400d8164[0m (0x400d8000 + 0x0164)
Miscellaneous Register 1
 (rw) (05)  [0;32mLVDS1_CLK_SEL[0m  - [04:00] -  This field selects the clk to be routed to anaclk1/1b.Not related to PMU.
      0 - ARM_PLL :
         Arm PLL
      0x1 - SYS_PLL :
         System PLL
      0x2 - PFD4 :
         ref_pfd4_clk == pll2_pfd0_clk
      0x3 - PFD5 :
         ref_pfd5_clk == pll2_pfd1_clk
      0x4 - PFD6 :
         ref_pfd6_clk == pll2_pfd2_clk
      0x5 - PFD7 :
         ref_pfd7_clk == pll2_pfd3_clk
      0x6 - AUDIO_PLL :
         Audio PLL
      0x7 - VIDEO_PLL :
         Video PLL
      0x9 - ETHERNET_REF :
         ethernet ref clock (ENET_PLL)
      0xC - USB1_PLL :
         USB1 PLL clock
      0xD - USB2_PLL :
         USB2 PLL clock
      0xE - PFD0 :
         ref_pfd0_clk == pll3_pfd0_clk
      0xF - PFD1 :
         ref_pfd1_clk == pll3_pfd1_clk
      0x10 - PFD2 :
         ref_pfd2_clk == pll3_pfd2_clk
      0x11 - PFD3 :
         ref_pfd3_clk == pll3_pfd3_clk
      0x12 - XTAL :
         xtal (24M)
 (rw) (05)  [0;32mLVDS2_CLK_SEL[0m  - [09:05] -  This field selects the clk to be routed to anaclk2/2b.Not related to PMU.
      0 - ARM_PLL :
         Arm PLL
      0x1 - SYS_PLL :
         System PLL
      0x2 - PFD4 :
         ref_pfd4_clk == pll2_pfd0_clk
      0x3 - PFD5 :
         ref_pfd5_clk == pll2_pfd1_clk
      0x4 - PFD6 :
         ref_pfd6_clk == pll2_pfd2_clk
      0x5 - PFD7 :
         ref_pfd7_clk == pll2_pfd3_clk
      0x6 - AUDIO_PLL :
         Audio PLL
      0x7 - VIDEO_PLL :
         Video PLL
      0x8 - MLB_PLL :
         MLB PLL
      0x9 - ETHERNET_REF :
         ethernet ref clock (ENET_PLL)
      0xA - PCIE_REF :
         PCIe ref clock (125M)
      0xB - SATA_REF :
         SATA ref clock (100M)
      0xC - USB1_PLL :
         USB1 PLL clock
      0xD - USB2_PLL :
         USB2 PLL clock
      0xE - PFD0 :
         ref_pfd0_clk == pll3_pfd0_clk
      0xF - PFD1 :
         ref_pfd1_clk == pll3_pfd1_clk
      0x10 - PFD2 :
         ref_pfd2_clk == pll3_pfd2_clk
      0x11 - PFD3 :
         ref_pfd3_clk == pll3_pfd3_clk
      0x12 - XTAL :
         xtal (24M)
      0x13 - LVDS1 :
         LVDS1 (loopback)
      0x14 - LVDS2 :
         LVDS2 (not useful)
 (rw) (01)  [0;32mLVDSCLK1_OBEN[0m  - [10:10] -  This enables the LVDS output buffer for anaclk1/1b
 (rw) (01)  [0;32mLVDSCLK2_OBEN[0m  - [11:11] -  This enables the LVDS output buffer for anaclk2/2b
 (rw) (01)  [0;32mLVDSCLK1_IBEN[0m  - [12:12] -  This enables the LVDS input buffer for anaclk1/1b
 (rw) (01)  [0;32mLVDSCLK2_IBEN[0m  - [13:13] -  This enables the LVDS input buffer for anaclk2/2b
 (rw) (01)  [0;32mPFD_480_AUTOGATE_EN[0m  - [16:16] -  This enables a feature that will clkgate (reset) all PFD_480 clocks anytime the
  USB1_PLL_480 is unlocked or powered off
 (rw) (01)  [0;32mPFD_528_AUTOGATE_EN[0m  - [17:17] -  This enables a feature that will clkgate (reset) all PFD_528 clocks anytime the
  PLL_528 is unlocked or powered off
 (rw) (01)  [0;32mIRQ_TEMPPANIC[0m  - [27:27] -  This status bit is set to one when the temperature sensor panic interrupt asser
 ts for a panic high temperature
 (rw) (01)  [0;32mIRQ_TEMPLOW[0m  - [28:28] -  This status bit is set to one when the temperature sensor low interrupt asserts
  for low temperature
 (rw) (01)  [0;32mIRQ_TEMPHIGH[0m  - [29:29] -  This status bit is set to one when the temperature sensor high interrupt assert
 s for high temperature
 (rw) (01)  [0;32mIRQ_ANA_BO[0m  - [30:30] -  This status bit is set to one when when any of the analog regulator brownout in
 terrupts assert
 (rw) (01)  [0;32mIRQ_DIG_BO[0m  - [31:31] -  This status bit is set to one when when any of the digital regulator brownout i
 nterrupts assert
</lang>
#### p.pmu.misc2_tog
<link=p.PMU.MISC2_TOG>
#### p.TEMPMON.TEMPSENSE0
<lang=dft>
 (rw)  [1;33m0x400d8180[0m (0x400d8000 + 0x0180)
Tempsensor Control Register 0
 (rw) (01)  [0;32mPOWER_DOWN[0m  - [00:00] -  This bit powers down the temperature sensor.
      0 - POWER_UP :
         Enable power to the temperature sensor.
      0x1 - POWER_DOWN :
         Power down the temperature sensor.
 (rw) (01)  [0;32mMEASURE_TEMP[0m  - [01:01] -  Starts the measurement process
      0 - STOP :
         Do not start the measurement process.
      0x1 - START :
         Start the measurement process.
 (ro) (01)  [0;32mFINISHED[0m  - [02:02] -  Indicates that the latest temp is valid
      0 - INVALID :
         Last measurement is not ready yet.
      0x1 - VALID :
         Last measurement is valid.
 (ro) (12)  [0;32mTEMP_CNT[0m  - [19:08] -  This bit field contains the last measured temperature count.
 (rw) (12)  [0;32mALARM_VALUE[0m  - [31:20] -  This bit field contains the temperature count (raw sensor output) that will gen
 erate a high alarm when TEMP_CNT is smaller than this field
</lang>
#### p.tempmon.tempsense0_clr
<link=p.TEMPMON.TEMPSENSE0_CLR>
#### p.tempmon.tempsense0_tog
<link=p.TEMPMON.TEMPSENSE0_TOG>
#### tempmon.tempsense1
<link=p.TEMPMON.TEMPSENSE1>
#### TEMPMON.TEMPSENSE2_SET
<link=p.TEMPMON.TEMPSENSE2_SET>
#### p.TEMPMON.TEMPSENSE2_CLR
<lang=dft>
 (rw)  [1;33m0x400d8298[0m (0x400d8000 + 0x0298)
Tempsensor Control Register 2
 (rw) (12)  [0;32mLOW_ALARM_VALUE[0m  - [11:00] -  This bit field contains the temperature count that will generate a low alarm in
 terrupt when the field is exceeded by TEMP_CNT
 (rw) (12)  [0;32mPANIC_ALARM_VALUE[0m  - [27:16] -  This bit field contains the temperature count that will generate a panic interr
 upt when TEMP_CNT is smaller than this field
</lang>
#### USB_ANALOG.USB1_VBUS_DETECT
<link=p.USB_ANALOG.USB1_VBUS_DETECT>
#### usb_analog.usb1_vbus_detect_tog
<link=p.USB_ANALOG.USB1_VBUS_DETECT_TOG>
#### usb_analog.usb1_chrg_detect_clr
<link=p.USB_ANALOG.USB1_CHRG_DETECT_CLR>
#### p.USB_ANALOG.USB1_LOOPBACK_SET
<lang=dft>
 (rw)  [1;33m0x400d81e4[0m (0x400d8000 + 0x01e4)
USB Loopback Test Register
 (rw) (01)  [0;32mUTMI_TESTSTART[0m  - [00:00] -  Setting this bit can enable 1
</lang>
#### usb_analog.usb1_loopback_clr
<link=p.USB_ANALOG.USB1_LOOPBACK_CLR>
#### usb_analog.usb1_loopback_tog
<link=p.USB_ANALOG.USB1_LOOPBACK_TOG>
#### p.usb_analog.usb1_misc_tog
<link=p.USB_ANALOG.USB1_MISC_TOG>
#### USB_ANALOG.USB1_MISC_TOG
<link=p.USB_ANALOG.USB1_MISC_TOG>
#### USB_ANALOG.USB2_VBUS_DETECT_CLR
<link=p.USB_ANALOG.USB2_VBUS_DETECT_CLR>
#### p.usb_analog.usb2_loopback_set
<link=p.USB_ANALOG.USB2_LOOPBACK_SET>
#### USB_ANALOG.USB2_LOOPBACK_TOG
<link=p.USB_ANALOG.USB2_LOOPBACK_TOG>
#### usb_analog.usb2_misc_clr
<link=p.USB_ANALOG.USB2_MISC_CLR>
#### usb_analog.usb2_misc_tog
<link=p.USB_ANALOG.USB2_MISC_TOG>
#### p.XTALOSC24M.MISC0_SET
<lang=dft>
 (rw)  [1;33m0x400d8154[0m (0x400d8000 + 0x0154)
Miscellaneous Register 0
 (rw) (01)  [0;32mREFTOP_PWD[0m  - [00:00] -  Control bit to power-down the analog bandgap reference circuitry
 (rw) (01)  [0;32mREFTOP_SELFBIASOFF[0m  - [03:03] -  Control bit to disable the self-bias circuit in the analog bandgap
      0 - REFTOP_SELFBIASOFF_0 :
         Uses coarse bias currents for startup
      0x1 - REFTOP_SELFBIASOFF_1 :
         Uses bandgap-based bias currents for best performance.
 (rw) (03)  [0;32mREFTOP_VBGADJ[0m  - [06:04] -  Not related to oscillator.
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
 (rw) (02)  [0;32mSTOP_MODE_CONFIG[0m  - [11:10] -  Configure the analog behavior in stop mode.Not related to oscillator.
      0 - STOP_MODE_CONFIG_0 :
         All analog except rtc powered down on stop mode assertion. XtalOsc=on, 
         RCOsc=off;
      0x1 - STOP_MODE_CONFIG_1 :
         Certain analog functions such as certain regulators left up. XtalOsc=on
         , RCOsc=off;
      0x2 - STOP_MODE_CONFIG_2 :
         XtalOsc=off, RCOsc=on, Old BG=on, New BG=off.
      0x3 - STOP_MODE_CONFIG_3 :
         XtalOsc=off, RCOsc=on, Old BG=off, New BG=on.
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
  stable.
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
 (rw) (01)  [0;32mVID_PLL_PREDIV[0m  - [31:31] -  Predivider for the source clock of the PLL's. Not related to oscillator.
      0 - VID_PLL_PREDIV_0 :
         Divide by 1
      0x1 - VID_PLL_PREDIV_1 :
         Divide by 2
</lang>
#### XTALOSC24M.LOWPWR_CTRL
<link=p.XTALOSC24M.LOWPWR_CTRL>
#### p.xtalosc24m.lowpwr_ctrl_set
<link=p.XTALOSC24M.LOWPWR_CTRL_SET>
#### xtalosc24m.lowpwr_ctrl_tog
<link=p.XTALOSC24M.LOWPWR_CTRL_TOG>
#### p.xtalosc24m.osc_config1
<link=p.XTALOSC24M.OSC_CONFIG1>
#### xtalosc24m.osc_config2
<link=p.XTALOSC24M.OSC_CONFIG2>
#### usbphy1.pwd
<link=p.USBPHY1.PWD>
#### p.USBPHY1.RX
<lang=dft>
 (rw)  [1;33m0x400d9020[0m (0x400d9000 + 0x0020)
USB PHY Receiver Control Register
 (rw) (03)  [0;32mENVADJ[0m  - [02:00] -  The ENVADJ field adjusts the trip point for the envelope detector
 (ro) (01)  [0;32mRSVD0[0m  - [03:03] -  Reserved.
 (rw) (03)  [0;32mDISCONADJ[0m  - [06:04] -  The DISCONADJ field adjusts the trip point for the disconnect detector: 000 = T
 rip-Level Voltage is 0
 (ro) (15)  [0;32mRSVD1[0m  - [21:07] -  Reserved.
 (rw) (01)  [0;32mRXDBYPASS[0m  - [22:22] -  0 = Normal operation
 (ro) (09)  [0;32mRSVD2[0m  - [31:23] -  Reserved.
</lang>
#### USBPHY1.CTRL_CLR
<link=p.USBPHY1.CTRL_CLR>
#### p.USBPHY1.DEBUG
<lang=dft>
 (rw)  [1;33m0x400d9050[0m (0x400d9000 + 0x0050)
USB PHY Debug Register
 (rw) (01)  [0;32mOTGIDPIOLOCK[0m  - [00:00] -  Once OTG ID from USBPHYx_STATUS_OTGID_STATUS, use this to hold the value
 (rw) (01)  [0;32mDEBUG_INTERFACE_HOLD[0m  - [01:01] -  Use holding registers to assist in timing for external UTMI interface.
 (rw) (02)  [0;32mHSTPULLDOWN[0m  - [03:02] -  Set bit 3 to 1 to pull down 15-KOhm on USB_DP line
 (rw) (02)  [0;32mENHSTPULLDOWN[0m  - [05:04] -  Set bit 5 to 1 to override the control of the USB_DP 15-KOhm pulldown
 (ro) (02)  [0;32mRSVD0[0m  - [07:06] -  Reserved.
 (rw) (04)  [0;32mTX2RXCOUNT[0m  - [11:08] -  Delay in between the end of transmit to the beginning of receive
 (rw) (01)  [0;32mENTX2RXCOUNT[0m  - [12:12] -  Set this bit to allow a countdown to transition in between TX and RX.
 (ro) (03)  [0;32mRSVD1[0m  - [15:13] -  Reserved.
 (rw) (05)  [0;32mSQUELCHRESETCOUNT[0m  - [20:16] -  Delay in between the detection of squelch to the reset of high-speed RX.
 (ro) (03)  [0;32mRSVD2[0m  - [23:21] -  Reserved.
 (rw) (01)  [0;32mENSQUELCHRESET[0m  - [24:24] -  Set bit to allow squelch to reset high-speed receive.
 (rw) (04)  [0;32mSQUELCHRESETLENGTH[0m  - [28:25] -  Duration of RESET in terms of the number of 480-MHz cycles.
 (rw) (01)  [0;32mHOST_RESUME_DEBUG[0m  - [29:29] -  Choose to trigger the host resume SE0 with HOST_FORCE_LS_SE0 = 0 or UTMI_SUSPEN
 D = 1.
 (rw) (01)  [0;32mCLKGATE[0m  - [30:30] -  Gate Test Clocks
 (ro) (01)  [0;32mRSVD3[0m  - [31:31] -  Reserved.
</lang>
#### USBPHY1.DEBUG
<link=p.USBPHY1.DEBUG>
#### USBPHY1.DEBUG_TOG
<link=p.USBPHY1.DEBUG_TOG>
#### USBPHY1.DEBUG1_SET
<link=p.USBPHY1.DEBUG1_SET>
#### p.USBPHY1.VERSION
<lang=dft>
 (ro)  [1;33m0x400d9080[0m (0x400d9000 + 0x0080)
UTMI RTL Version
 (ro) (16)  [0;32mSTEP[0m  - [15:00] -  Fixed read-only value reflecting the stepping of the RTL version.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Fixed read-only value reflecting the MINOR field of the RTL version.
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Fixed read-only value reflecting the MAJOR field of the RTL version.
</lang>
#### USBPHY2.RX_SET
<link=p.USBPHY2.RX_SET>
#### p.USBPHY2.CTRL_TOG
<lang=dft>
 (rw)  [1;33m0x400da03c[0m (0x400da000 + 0x003c)
USB PHY General Control Register
 (rw) (01)  [0;32mENOTG_ID_CHG_IRQ[0m  - [00:00] -  Enable OTG_ID_CHG_IRQ.
 (rw) (01)  [0;32mENHOSTDISCONDETECT[0m  - [01:01] -  For host mode, enables high-speed disconnect detector
 (rw) (01)  [0;32mENIRQHOSTDISCON[0m  - [02:02] -  Enables interrupt for detection of disconnection to Device when in high-speed h
 ost mode
 (rw) (01)  [0;32mHOSTDISCONDETECT_IRQ[0m  - [03:03] -  Indicates that the device has disconnected in high-speed mode
 (rw) (01)  [0;32mENDEVPLUGINDETECT[0m  - [04:04] -  For device mode, enables 200-KOhm pullups for detecting connectivity to the hos
 t.
 (rw) (01)  [0;32mDEVPLUGIN_POLARITY[0m  - [05:05] -  For device mode, if this bit is cleared to 0, then it trips the interrupt if th
 e device is plugged in
 (rw) (01)  [0;32mOTG_ID_CHG_IRQ[0m  - [06:06] -  OTG ID change interrupt. Indicates the value of ID pin changed.
 (rw) (01)  [0;32mENOTGIDDETECT[0m  - [07:07] -  Enables circuit to detect resistance of MiniAB ID pin.
 (rw) (01)  [0;32mRESUMEIRQSTICKY[0m  - [08:08] -  Set to 1 will make RESUME_IRQ bit a sticky bit until software clear it
 (rw) (01)  [0;32mENIRQRESUMEDETECT[0m  - [09:09] -  Enables interrupt for detection of a non-J state on the USB line
 (rw) (01)  [0;32mRESUME_IRQ[0m  - [10:10] -  Indicates that the host is sending a wake-up after suspend
 (rw) (01)  [0;32mENIRQDEVPLUGIN[0m  - [11:11] -  Enables interrupt for the detection of connectivity to the USB line.
 (rw) (01)  [0;32mDEVPLUGIN_IRQ[0m  - [12:12] -  Indicates that the device is connected
 (rw) (01)  [0;32mDATA_ON_LRADC[0m  - [13:13] -  Enables the LRADC to monitor USB_DP and USB_DM. This is for use in non-USB mode
 s only.
 (rw) (01)  [0;32mENUTMILEVEL2[0m  - [14:14] -  Enables UTMI+ Level2. This should be enabled if needs to support LS device
 (rw) (01)  [0;32mENUTMILEVEL3[0m  - [15:15] -  Enables UTMI+ Level3
 (rw) (01)  [0;32mENIRQWAKEUP[0m  - [16:16] -  Enables interrupt for the wakeup events.
 (rw) (01)  [0;32mWAKEUP_IRQ[0m  - [17:17] -  Indicates that there is a wakeup event
 (rw) (01)  [0;32mENAUTO_PWRON_PLL[0m  - [18:18] -  Enables the feature to auto-enable the POWER bit of HW_CLKCTRL_PLLxCTRL0 if the
 re is wakeup event if USB is suspended
 (rw) (01)  [0;32mENAUTOCLR_CLKGATE[0m  - [19:19] -  Enables the feature to auto-clear the CLKGATE bit if there is wakeup event whil
 e USB is suspended
 (rw) (01)  [0;32mENAUTOCLR_PHY_PWD[0m  - [20:20] -  Enables the feature to auto-clear the PWD register bits in USBPHYx_PWD if there
  is wakeup event while USB is suspended
 (rw) (01)  [0;32mENDPDMCHG_WKUP[0m  - [21:21] -  Enables the feature to wakeup USB if DP/DM is toggled when USB is suspended
 (rw) (01)  [0;32mENIDCHG_WKUP[0m  - [22:22] -  Enables the feature to wakeup USB if ID is toggled when USB is suspended.
 (rw) (01)  [0;32mENVBUSCHG_WKUP[0m  - [23:23] -  Enables the feature to wakeup USB if VBUS is toggled when USB is suspended.
 (rw) (01)  [0;32mFSDLL_RST_EN[0m  - [24:24] -  Enables the feature to reset the FSDLL lock detection logic at the end of each 
 TX packet.
 (ro) (02)  [0;32mRSVD1[0m  - [26:25] -  Reserved.
 (ro) (01)  [0;32mOTG_ID_VALUE[0m  - [27:27] -  Almost same as OTGID_STATUS in USBPHYx_STATUS Register
 (rw) (01)  [0;32mHOST_FORCE_LS_SE0[0m  - [28:28] -  Forces the next FS packet that is transmitted to have a EOP with LS timing
 (ro) (01)  [0;32mUTMI_SUSPENDM[0m  - [29:29] -  Used by the PHY to indicate a powered-down state
 (rw) (01)  [0;32mCLKGATE[0m  - [30:30] -  Gate UTMI Clocks
 (rw) (01)  [0;32mSFTRST[0m  - [31:31] -  Writing a 1 to this bit will soft-reset the USBPHYx_PWD, USBPHYx_TX, USBPHYx_RX
 , and USBPHYx_CTRL registers
</lang>
#### p.USBPHY2.DEBUG_SET
<lang=dft>
 (rw)  [1;33m0x400da054[0m (0x400da000 + 0x0054)
USB PHY Debug Register
 (rw) (01)  [0;32mOTGIDPIOLOCK[0m  - [00:00] -  Once OTG ID from USBPHYx_STATUS_OTGID_STATUS, use this to hold the value
 (rw) (01)  [0;32mDEBUG_INTERFACE_HOLD[0m  - [01:01] -  Use holding registers to assist in timing for external UTMI interface.
 (rw) (02)  [0;32mHSTPULLDOWN[0m  - [03:02] -  Set bit 3 to 1 to pull down 15-KOhm on USB_DP line
 (rw) (02)  [0;32mENHSTPULLDOWN[0m  - [05:04] -  Set bit 5 to 1 to override the control of the USB_DP 15-KOhm pulldown
 (ro) (02)  [0;32mRSVD0[0m  - [07:06] -  Reserved.
 (rw) (04)  [0;32mTX2RXCOUNT[0m  - [11:08] -  Delay in between the end of transmit to the beginning of receive
 (rw) (01)  [0;32mENTX2RXCOUNT[0m  - [12:12] -  Set this bit to allow a countdown to transition in between TX and RX.
 (ro) (03)  [0;32mRSVD1[0m  - [15:13] -  Reserved.
 (rw) (05)  [0;32mSQUELCHRESETCOUNT[0m  - [20:16] -  Delay in between the detection of squelch to the reset of high-speed RX.
 (ro) (03)  [0;32mRSVD2[0m  - [23:21] -  Reserved.
 (rw) (01)  [0;32mENSQUELCHRESET[0m  - [24:24] -  Set bit to allow squelch to reset high-speed receive.
 (rw) (04)  [0;32mSQUELCHRESETLENGTH[0m  - [28:25] -  Duration of RESET in terms of the number of 480-MHz cycles.
 (rw) (01)  [0;32mHOST_RESUME_DEBUG[0m  - [29:29] -  Choose to trigger the host resume SE0 with HOST_FORCE_LS_SE0 = 0 or UTMI_SUSPEN
 D = 1.
 (rw) (01)  [0;32mCLKGATE[0m  - [30:30] -  Gate Test Clocks
 (ro) (01)  [0;32mRSVD3[0m  - [31:31] -  Reserved.
</lang>
#### usbphy2.debug_tog
<link=p.USBPHY2.DEBUG_TOG>
#### p.CSU.CSL5
<lang=dft>
 (rw)  [1;33m0x400dc014[0m (0x400dc000 + 0x0014)
Config security level register
 (rw) (01)  [0;32mSUR_S2[0m  - [00:00] -  Secure user read access control for the second slave
      0 - SUR_S2_0 :
         The secure user read access is disabled for the second slave.
      0x1 - SUR_S2_1 :
         The secure user read access is enabled for the second slave.
 (rw) (01)  [0;32mSSR_S2[0m  - [01:01] -  Secure supervisor read access control for the second slave
      0 - SSR_S2_0 :
         The secure supervisor read access is disabled for the second slave.
      0x1 - SSR_S2_1 :
         The secure supervisor read access is enabled for the second slave.
 (rw) (01)  [0;32mNUR_S2[0m  - [02:02] -  Non-secure user read access control for the second slave
      0 - NUR_S2_0 :
         The non-secure user read access is disabled for the second slave.
      0x1 - NUR_S2_1 :
         The non-secure user read access is enabled for the second slave.
 (rw) (01)  [0;32mNSR_S2[0m  - [03:03] -  Non-secure supervisor read access control for the second slave
      0 - NSR_S2_0 :
         The non-secure supervisor read access is disabled for the second slave.
      0x1 - NSR_S2_1 :
         The non-secure supervisor read access is enabled for the second slave.
 (rw) (01)  [0;32mSUW_S2[0m  - [04:04] -  Secure user write access control for the second slave
      0 - SUW_S2_0 :
         The secure user write access is disabled for the second slave.
      0x1 - SUW_S2_1 :
         The secure user write access is enabled for the second slave.
 (rw) (01)  [0;32mSSW_S2[0m  - [05:05] -  Secure supervisor write access control for the second slave
      0 - SSW_S2_0 :
         The secure supervisor write access is disabled for the second slave.
      0x1 - SSW_S2_1 :
         The secure supervisor write access is enabled for the second slave.
 (rw) (01)  [0;32mNUW_S2[0m  - [06:06] -  Non-secure user write access control for the second slave
      0 - NUW_S2_0 :
         The non-secure user write access is disabled for the second slave.
      0x1 - NUW_S2_1 :
         The non-secure user write access is enabled for the second slave.
 (rw) (01)  [0;32mNSW_S2[0m  - [07:07] -  Non-secure supervisor write access control for the second slave
      0 - NSW_S2_0 :
         The non-secure supervisor write access is disabled for the second slave
         .
      0x1 - NSW_S2_1 :
         The non-secure supervisor write access is enabled for the second slave.
 (rw) (01)  [0;32mLOCK_S2[0m  - [08:08] -  The lock bit corresponding to the second slave. It is written by the secure sof
 tware.
      0 - LOCK_S2_0 :
         Not locked. Bits 7-0 can be written by the software.
      0x1 - LOCK_S2_1 :
         Bits 7-0 are locked and cannot be written by the software
 (rw) (01)  [0;32mSUR_S1[0m  - [16:16] -  Secure user read access control for the first slave
      0 - SUR_S1_0 :
         The secure user read access is disabled for the first slave.
      0x1 - SUR_S1_1 :
         The secure user read access is enabled for the first slave.
 (rw) (01)  [0;32mSSR_S1[0m  - [17:17] -  Secure supervisor read access control for the first slave
      0 - SSR_S1_0 :
         The secure supervisor read access is disabled for the first slave.
      0x1 - SSR_S1_1 :
         The secure supervisor read access is enabled for the first slave.
 (rw) (01)  [0;32mNUR_S1[0m  - [18:18] -  Non-secure user read access control for the first slave
      0 - NUR_S1_0 :
         The non-secure user read access is disabled for the first slave.
      0x1 - NUR_S1_1 :
         The non-secure user read access is enabled for the first slave.
 (rw) (01)  [0;32mNSR_S1[0m  - [19:19] -  Non-secure supervisor read access control for the first slave
      0 - NSR_S1_0 :
         The non-secure supervisor read access is disabled for the first slave.
      0x1 - NSR_S1_1 :
         The non-secure supervisor read access is enabled for the first slave.
 (rw) (01)  [0;32mSUW_S1[0m  - [20:20] -  Secure user write access control for the first slave
      0 - SUW_S1_0 :
         The secure user write access is disabled for the first slave.
      0x1 - SUW_S1_1 :
         The secure user write access is enabled for the first slave.
 (rw) (01)  [0;32mSSW_S1[0m  - [21:21] -  Secure supervisor write access control for the first slave
      0 - SSW_S1_0 :
         The secure supervisor write access is disabled for the first slave.
      0x1 - SSW_S1_1 :
         The secure supervisor write access is enabled for the first slave.
 (rw) (01)  [0;32mNUW_S1[0m  - [22:22] -  Non-secure user write access control for the first slave
      0 - NUW_S1_0 :
         The non-secure user write access is disabled for the first slave.
      0x1 - NUW_S1_1 :
         The non-secure user write access is enabled for the first slave.
 (rw) (01)  [0;32mNSW_S1[0m  - [23:23] -  Non-secure supervisor write access control for the first slave
      0 - NSW_S1_0 :
         The non-secure supervisor write access is disabled for the first slave.
      0x1 - NSW_S1_1 :
         The non-secure supervisor write access is enabled for the first slave
 (rw) (01)  [0;32mLOCK_S1[0m  - [24:24] -  The lock bit corresponding to the first slave. It is written by the secure soft
 ware.
      0 - LOCK_S1_0 :
         Not locked. The bits 16-23 can be written by the software.
      0x1 - LOCK_S1_1 :
         The bits 16-23 are locked and can't be written by the software.
</lang>
#### p.csu.csl5
<link=p.CSU.CSL5>
#### csu.csl6
<link=p.CSU.CSL6>
#### CSU.CSL6
<link=p.CSU.CSL6>
#### p.CSU.CSL19
<lang=dft>
 (rw)  [1;33m0x400dc04c[0m (0x400dc000 + 0x004c)
Config security level register
 (rw) (01)  [0;32mSUR_S2[0m  - [00:00] -  Secure user read access control for the second slave
      0 - SUR_S2_0 :
         The secure user read access is disabled for the second slave.
      0x1 - SUR_S2_1 :
         The secure user read access is enabled for the second slave.
 (rw) (01)  [0;32mSSR_S2[0m  - [01:01] -  Secure supervisor read access control for the second slave
      0 - SSR_S2_0 :
         The secure supervisor read access is disabled for the second slave.
      0x1 - SSR_S2_1 :
         The secure supervisor read access is enabled for the second slave.
 (rw) (01)  [0;32mNUR_S2[0m  - [02:02] -  Non-secure user read access control for the second slave
      0 - NUR_S2_0 :
         The non-secure user read access is disabled for the second slave.
      0x1 - NUR_S2_1 :
         The non-secure user read access is enabled for the second slave.
 (rw) (01)  [0;32mNSR_S2[0m  - [03:03] -  Non-secure supervisor read access control for the second slave
      0 - NSR_S2_0 :
         The non-secure supervisor read access is disabled for the second slave.
      0x1 - NSR_S2_1 :
         The non-secure supervisor read access is enabled for the second slave.
 (rw) (01)  [0;32mSUW_S2[0m  - [04:04] -  Secure user write access control for the second slave
      0 - SUW_S2_0 :
         The secure user write access is disabled for the second slave.
      0x1 - SUW_S2_1 :
         The secure user write access is enabled for the second slave.
 (rw) (01)  [0;32mSSW_S2[0m  - [05:05] -  Secure supervisor write access control for the second slave
      0 - SSW_S2_0 :
         The secure supervisor write access is disabled for the second slave.
      0x1 - SSW_S2_1 :
         The secure supervisor write access is enabled for the second slave.
 (rw) (01)  [0;32mNUW_S2[0m  - [06:06] -  Non-secure user write access control for the second slave
      0 - NUW_S2_0 :
         The non-secure user write access is disabled for the second slave.
      0x1 - NUW_S2_1 :
         The non-secure user write access is enabled for the second slave.
 (rw) (01)  [0;32mNSW_S2[0m  - [07:07] -  Non-secure supervisor write access control for the second slave
      0 - NSW_S2_0 :
         The non-secure supervisor write access is disabled for the second slave
         .
      0x1 - NSW_S2_1 :
         The non-secure supervisor write access is enabled for the second slave.
 (rw) (01)  [0;32mLOCK_S2[0m  - [08:08] -  The lock bit corresponding to the second slave. It is written by the secure sof
 tware.
      0 - LOCK_S2_0 :
         Not locked. Bits 7-0 can be written by the software.
      0x1 - LOCK_S2_1 :
         Bits 7-0 are locked and cannot be written by the software
 (rw) (01)  [0;32mSUR_S1[0m  - [16:16] -  Secure user read access control for the first slave
      0 - SUR_S1_0 :
         The secure user read access is disabled for the first slave.
      0x1 - SUR_S1_1 :
         The secure user read access is enabled for the first slave.
 (rw) (01)  [0;32mSSR_S1[0m  - [17:17] -  Secure supervisor read access control for the first slave
      0 - SSR_S1_0 :
         The secure supervisor read access is disabled for the first slave.
      0x1 - SSR_S1_1 :
         The secure supervisor read access is enabled for the first slave.
 (rw) (01)  [0;32mNUR_S1[0m  - [18:18] -  Non-secure user read access control for the first slave
      0 - NUR_S1_0 :
         The non-secure user read access is disabled for the first slave.
      0x1 - NUR_S1_1 :
         The non-secure user read access is enabled for the first slave.
 (rw) (01)  [0;32mNSR_S1[0m  - [19:19] -  Non-secure supervisor read access control for the first slave
      0 - NSR_S1_0 :
         The non-secure supervisor read access is disabled for the first slave.
      0x1 - NSR_S1_1 :
         The non-secure supervisor read access is enabled for the first slave.
 (rw) (01)  [0;32mSUW_S1[0m  - [20:20] -  Secure user write access control for the first slave
      0 - SUW_S1_0 :
         The secure user write access is disabled for the first slave.
      0x1 - SUW_S1_1 :
         The secure user write access is enabled for the first slave.
 (rw) (01)  [0;32mSSW_S1[0m  - [21:21] -  Secure supervisor write access control for the first slave
      0 - SSW_S1_0 :
         The secure supervisor write access is disabled for the first slave.
      0x1 - SSW_S1_1 :
         The secure supervisor write access is enabled for the first slave.
 (rw) (01)  [0;32mNUW_S1[0m  - [22:22] -  Non-secure user write access control for the first slave
      0 - NUW_S1_0 :
         The non-secure user write access is disabled for the first slave.
      0x1 - NUW_S1_1 :
         The non-secure user write access is enabled for the first slave.
 (rw) (01)  [0;32mNSW_S1[0m  - [23:23] -  Non-secure supervisor write access control for the first slave
      0 - NSW_S1_0 :
         The non-secure supervisor write access is disabled for the first slave.
      0x1 - NSW_S1_1 :
         The non-secure supervisor write access is enabled for the first slave
 (rw) (01)  [0;32mLOCK_S1[0m  - [24:24] -  The lock bit corresponding to the first slave. It is written by the secure soft
 ware.
      0 - LOCK_S1_0 :
         Not locked. The bits 16-23 can be written by the software.
      0x1 - LOCK_S1_1 :
         The bits 16-23 are locked and can't be written by the software.
</lang>
#### p.csu.csl19
<link=p.CSU.CSL19>
#### CSU.SA
<link=p.CSU.SA>
#### p.tsc.pre_charge_time
<link=p.TSC.PRE_CHARGE_TIME>
#### dma0.eei
<link=p.DMA0.EEI>
#### dma0.seei
<link=p.DMA0.SEEI>
#### DMA0.SEEI
<link=p.DMA0.SEEI>
#### p.dma0.dchpri2
<link=p.DMA0.DCHPRI2>
#### p.DMA0.DCHPRI9
<lang=dft>
 (rw)  [1;33m0x400e810a[0m (0x400e8000 + 0x010a)
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
#### dma0.dchpri15
<link=p.DMA0.DCHPRI15>
#### DMA0.DCHPRI14
<link=p.DMA0.DCHPRI14>
#### dma0.dchpri20
<link=p.DMA0.DCHPRI20>
#### p.dma0.dchpri24
<link=p.DMA0.DCHPRI24>
#### DMA0.DCHPRI28
<link=p.DMA0.DCHPRI28>
#### DMA0.TCD0_CITER_ELINKNO
<link=p.DMA0.TCD0_CITER_ELINKNO>
#### p.dma0.tcd0_csr
<link=p.DMA0.TCD0_CSR>
#### dma0.tcd0_biter_elinkyes
<link=p.DMA0.TCD0_BITER_ELINKYES>
#### DMA0.TCD2_SOFF
<link=p.DMA0.TCD2_SOFF>
#### p.dma0.tcd2_slast
<link=p.DMA0.TCD2_SLAST>
#### p.DMA0.TCD2_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9058[0m (0x400e8000 + 0x1058)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.DMA0.TCD3_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9064[0m (0x400e8000 + 0x1064)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.DMA0.TCD3_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9066[0m (0x400e8000 + 0x1066)
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
#### p.DMA0.TCD3_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9068[0m (0x400e8000 + 0x1068)
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
#### DMA0.TCD3_CITER_ELINKNO
<link=p.DMA0.TCD3_CITER_ELINKNO>
#### p.dma0.tcd3_citer_elinkyes
<link=p.DMA0.TCD3_CITER_ELINKYES>
#### p.DMA0.TCD4_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9086[0m (0x400e8000 + 0x1086)
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
#### p.DMA0.TCD4_SLAST
<lang=dft>
 (rw)  [1;33m0x400e908c[0m (0x400e8000 + 0x108c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### DMA0.TCD4_SLAST
<link=p.DMA0.TCD4_SLAST>
#### p.dma0.tcd4_biter_elinkno
<link=p.DMA0.TCD4_BITER_ELINKNO>
#### p.DMA0.TCD5_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e90a8[0m (0x400e8000 + 0x10a8)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.dma0.tcd5_nbytes_mloffno
<link=p.DMA0.TCD5_NBYTES_MLOFFNO>
#### p.DMA0.TCD5_SLAST
<lang=dft>
 (rw)  [1;33m0x400e90ac[0m (0x400e8000 + 0x10ac)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.DMA0.TCD5_DADDR
<lang=dft>
 (rw)  [1;33m0x400e90b0[0m (0x400e8000 + 0x10b0)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.DMA0.TCD5_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e90b6[0m (0x400e8000 + 0x10b6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd5_biter_elinkyes
<link=p.DMA0.TCD5_BITER_ELINKYES>
#### p.dma0.tcd6_nbytes_mlno
<link=p.DMA0.TCD6_NBYTES_MLNO>
#### dma0.tcd6_nbytes_mlno
<link=p.DMA0.TCD6_NBYTES_MLNO>
#### p.dma0.tcd6_citer_elinkno
<link=p.DMA0.TCD6_CITER_ELINKNO>
#### DMA0.TCD7_SADDR
<link=p.DMA0.TCD7_SADDR>
#### DMA0.TCD7_ATTR
<link=p.DMA0.TCD7_ATTR>
#### DMA0.TCD8_SADDR
<link=p.DMA0.TCD8_SADDR>
#### p.dma0.tcd8_biter_elinkno
<link=p.DMA0.TCD8_BITER_ELINKNO>
#### dma0.tcd9_nbytes_mlno
<link=p.DMA0.TCD9_NBYTES_MLNO>
#### dma0.tcd9_daddr
<link=p.DMA0.TCD9_DADDR>
#### DMA0.TCD10_NBYTES_MLNO
<link=p.DMA0.TCD10_NBYTES_MLNO>
#### p.DMA0.TCD10_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9148[0m (0x400e8000 + 0x1148)
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
#### p.dma0.tcd10_nbytes_mloffyes
<link=p.DMA0.TCD10_NBYTES_MLOFFYES>
#### DMA0.TCD10_NBYTES_MLOFFYES
<link=p.DMA0.TCD10_NBYTES_MLOFFYES>
#### p.dma0.tcd10_doff
<link=p.DMA0.TCD10_DOFF>
#### DMA0.TCD10_CSR
<link=p.DMA0.TCD10_CSR>
#### dma0.tcd11_doff
<link=p.DMA0.TCD11_DOFF>
#### p.DMA0.TCD11_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e917e[0m (0x400e8000 + 0x117e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd11_biter_elinkno
<link=p.DMA0.TCD11_BITER_ELINKNO>
#### p.DMA0.TCD12_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9186[0m (0x400e8000 + 0x1186)
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
#### dma0.tcd12_dlastsga
<link=p.DMA0.TCD12_DLASTSGA>
#### dma0.tcd13_saddr
<link=p.DMA0.TCD13_SADDR>
#### DMA0.TCD13_SOFF
<link=p.DMA0.TCD13_SOFF>
#### p.dma0.tcd13_citer_elinkno
<link=p.DMA0.TCD13_CITER_ELINKNO>
#### DMA0.TCD13_CITER_ELINKNO
<link=p.DMA0.TCD13_CITER_ELINKNO>
#### p.DMA0.TCD13_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e91b8[0m (0x400e8000 + 0x11b8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.DMA0.TCD14_SOFF
<lang=dft>
 (rw)  [1;33m0x400e91c4[0m (0x400e8000 + 0x11c4)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### DMA0.TCD14_ATTR
<link=p.DMA0.TCD14_ATTR>
#### dma0.tcd14_nbytes_mloffno
<link=p.DMA0.TCD14_NBYTES_MLOFFNO>
#### dma0.tcd14_slast
<link=p.DMA0.TCD14_SLAST>
#### p.dma0.tcd14_dlastsga
<link=p.DMA0.TCD14_DLASTSGA>
#### DMA0.TCD14_DLASTSGA
<link=p.DMA0.TCD14_DLASTSGA>
#### dma0.tcd14_csr
<link=p.DMA0.TCD14_CSR>
#### DMA0.TCD14_BITER_ELINKNO
<link=p.DMA0.TCD14_BITER_ELINKNO>
#### dma0.tcd15_soff
<link=p.DMA0.TCD15_SOFF>
#### p.DMA0.TCD15_ATTR
<lang=dft>
 (rw)  [1;33m0x400e91e6[0m (0x400e8000 + 0x11e6)
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
#### p.dma0.tcd15_nbytes_mloffno
<link=p.DMA0.TCD15_NBYTES_MLOFFNO>
#### dma0.tcd15_slast
<link=p.DMA0.TCD15_SLAST>
#### p.dma0.tcd16_nbytes_mloffno
<link=p.DMA0.TCD16_NBYTES_MLOFFNO>
#### p.DMA0.TCD16_SLAST
<lang=dft>
 (rw)  [1;33m0x400e920c[0m (0x400e8000 + 0x120c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.DMA0.TCD16_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9216[0m (0x400e8000 + 0x1216)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD16_CITER_ELINKYES
<link=p.DMA0.TCD16_CITER_ELINKYES>
#### p.dma0.tcd16_biter_elinkno
<link=p.DMA0.TCD16_BITER_ELINKNO>
#### p.dma0.tcd17_slast
<link=p.DMA0.TCD17_SLAST>
#### p.DMA0.TCD18_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9254[0m (0x400e8000 + 0x1254)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### dma0.tcd18_doff
<link=p.DMA0.TCD18_DOFF>
#### p.dma0.tcd18_csr
<link=p.DMA0.TCD18_CSR>
#### DMA0.TCD18_BITER_ELINKNO
<link=p.DMA0.TCD18_BITER_ELINKNO>
#### p.DMA0.TCD19_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9268[0m (0x400e8000 + 0x1268)
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
#### p.DMA0.TCD19_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9274[0m (0x400e8000 + 0x1274)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.dma0.tcd19_citer_elinkyes
<link=p.DMA0.TCD19_CITER_ELINKYES>
#### DMA0.TCD20_SLAST
<link=p.DMA0.TCD20_SLAST>
#### dma0.tcd21_soff
<link=p.DMA0.TCD21_SOFF>
#### DMA0.TCD21_CITER_ELINKNO
<link=p.DMA0.TCD21_CITER_ELINKNO>
#### dma0.tcd21_biter_elinkyes
<link=p.DMA0.TCD21_BITER_ELINKYES>
#### dma0.tcd22_saddr
<link=p.DMA0.TCD22_SADDR>
#### p.DMA0.TCD22_SOFF
<lang=dft>
 (rw)  [1;33m0x400e92c4[0m (0x400e8000 + 0x12c4)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.dma0.tcd22_soff
<link=p.DMA0.TCD22_SOFF>
#### p.dma0.tcd22_nbytes_mloffyes
<link=p.DMA0.TCD22_NBYTES_MLOFFYES>
#### dma0.tcd22_slast
<link=p.DMA0.TCD22_SLAST>
#### dma0.tcd22_citer_elinkyes
<link=p.DMA0.TCD22_CITER_ELINKYES>
#### DMA0.TCD22_DLASTSGA
<link=p.DMA0.TCD22_DLASTSGA>
#### p.dma0.tcd23_attr
<link=p.DMA0.TCD23_ATTR>
#### p.DMA0.TCD23_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e92e8[0m (0x400e8000 + 0x12e8)
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
#### dma0.tcd23_nbytes_mloffyes
<link=p.DMA0.TCD23_NBYTES_MLOFFYES>
#### p.dma0.tcd23_citer_elinkyes
<link=p.DMA0.TCD23_CITER_ELINKYES>
#### p.DMA0.TCD24_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9306[0m (0x400e8000 + 0x1306)
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
#### p.DMA0.TCD24_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9310[0m (0x400e8000 + 0x1310)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### dma0.tcd24_citer_elinkno
<link=p.DMA0.TCD24_CITER_ELINKNO>
#### dma0.tcd25_nbytes_mloffno
<link=p.DMA0.TCD25_NBYTES_MLOFFNO>
#### p.dma0.tcd25_slast
<link=p.DMA0.TCD25_SLAST>
#### p.dma0.tcd25_citer_elinkno
<link=p.DMA0.TCD25_CITER_ELINKNO>
#### p.dma0.tcd25_dlastsga
<link=p.DMA0.TCD25_DLASTSGA>
#### p.dma0.tcd25_biter_elinkno
<link=p.DMA0.TCD25_BITER_ELINKNO>
#### dma0.tcd26_attr
<link=p.DMA0.TCD26_ATTR>
#### p.DMA0.TCD26_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9354[0m (0x400e8000 + 0x1354)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.DMA0.TCD26_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9356[0m (0x400e8000 + 0x1356)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD26_CITER_ELINKYES
<link=p.DMA0.TCD26_CITER_ELINKYES>
#### DMA0.TCD27_NBYTES_MLOFFNO
<link=p.DMA0.TCD27_NBYTES_MLOFFNO>
#### dma0.tcd28_soff
<link=p.DMA0.TCD28_SOFF>
#### p.dma0.tcd28_nbytes_mloffno
<link=p.DMA0.TCD28_NBYTES_MLOFFNO>
#### dma0.tcd28_citer_elinkno
<link=p.DMA0.TCD28_CITER_ELINKNO>
#### DMA0.TCD29_SOFF
<link=p.DMA0.TCD29_SOFF>
#### dma0.tcd29_attr
<link=p.DMA0.TCD29_ATTR>
#### DMA0.TCD29_NBYTES_MLNO
<link=p.DMA0.TCD29_NBYTES_MLNO>
#### p.dma0.tcd29_nbytes_mloffyes
<link=p.DMA0.TCD29_NBYTES_MLOFFYES>
#### p.dma0.tcd29_citer_elinkno
<link=p.DMA0.TCD29_CITER_ELINKNO>
#### p.dma0.tcd29_biter_elinkno
<link=p.DMA0.TCD29_BITER_ELINKNO>
#### p.dma0.tcd30_attr
<link=p.DMA0.TCD30_ATTR>
#### p.DMA0.TCD30_SLAST
<lang=dft>
 (rw)  [1;33m0x400e93cc[0m (0x400e8000 + 0x13cc)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### DMA0.TCD30_CITER_ELINKYES
<link=p.DMA0.TCD30_CITER_ELINKYES>
#### dma0.tcd31_attr
<link=p.DMA0.TCD31_ATTR>
#### p.dma0.tcd31_nbytes_mlno
<link=p.DMA0.TCD31_NBYTES_MLNO>
#### p.DMA0.TCD31_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e93e8[0m (0x400e8000 + 0x13e8)
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
#### p.DMA0.TCD31_SLAST
<lang=dft>
 (rw)  [1;33m0x400e93ec[0m (0x400e8000 + 0x13ec)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.dma0.tcd31_daddr
<link=p.DMA0.TCD31_DADDR>
#### dma0.tcd31_csr
<link=p.DMA0.TCD31_CSR>
#### p.dmamux.chcfg[0]
<link=p.DMAMUX.CHCFG[0]>
#### dmamux.chcfg[5]
<link=p.DMAMUX.CHCFG[5]>
#### p.DMAMUX.CHCFG[11]
<lang=dft>
 (rw)  [1;33m0x400ec02c[0m (0x400ec000 + 0x002c)
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
#### dmamux.chcfg[16]
<link=p.DMAMUX.CHCFG[16]>
#### p.dmamux.chcfg[20]
<link=p.DMAMUX.CHCFG[20]>
#### p.DMAMUX.CHCFG[27]
<lang=dft>
 (rw)  [1;33m0x400ec06c[0m (0x400ec000 + 0x006c)
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
#### p.GPC.IMR3
<lang=dft>
 (rw)  [1;33m0x400f4010[0m (0x400f4000 + 0x0010)
IRQ masking register 3
 (rw) (32)  [0;32mIMR3[0m  - [31:00] -  IRQ[95:64] masking bits: 1-irq masked, 0-irq is not masked
</lang>
#### GPC.ISR4
<link=p.GPC.ISR4>
#### pgc.cpu_ctrl
<link=p.PGC.CPU_CTRL>
#### p.PGC.CPU_SR
<lang=dft>
 (rw)  [1;33m0x400f42ac[0m (0x400f4000 + 0x02ac)
PGC CPU Power Gating Controller Status Register
 (rw) (01)  [0;32mPSR[0m  - [00:00] -  Power status
      0 - PSR_0 :
         The target subsystem was not powered down for the previous power-down r
         equest.
      0x1 - PSR_1 :
         The target subsystem was powered down for the previous power-down reque
         st.
</lang>
#### src.sbmr1
<link=p.SRC.SBMR1>
#### p.SRC.GPR9
<lang=dft>
 (ro)  [1;33m0x400f8040[0m (0x400f8000 + 0x0040)
SRC General Purpose Register 9
</lang>
#### p.ccm
<link=p.CCM>
#### p.ccm.cs1cdr
<link=p.CCM.CS1CDR>
#### ccm.cscdr2
<link=p.CCM.CSCDR2>
#### p.ccm.cimr
<link=p.CCM.CIMR>
#### p.CCM.CCGR1
<lang=dft>
 (rw)  [1;33m0x400fc06c[0m (0x400fc000 + 0x006c)
CCM Clock Gating Register 1
 (rw) (02)  [0;32mCG0[0m  - [01:00] -  lpspi1 clocks (lpspi1_clk_enable)
 (rw) (02)  [0;32mCG1[0m  - [03:02] -  lpspi2 clocks (lpspi2_clk_enable)
 (rw) (02)  [0;32mCG2[0m  - [05:04] -  lpspi3 clocks (lpspi3_clk_enable)
 (rw) (02)  [0;32mCG3[0m  - [07:06] -  lpspi4 clocks (lpspi4_clk_enable)
 (rw) (02)  [0;32mCG4[0m  - [09:08] -  adc2 clock (adc2_clk_enable)
 (rw) (02)  [0;32mCG5[0m  - [11:10] -  enet clock (enet_clk_enable)
 (rw) (02)  [0;32mCG6[0m  - [13:12] -  pit clocks (pit_clk_enable)
 (rw) (02)  [0;32mCG7[0m  - [15:14] -  aoi2 clocks (aoi2_clk_enable)
 (rw) (02)  [0;32mCG8[0m  - [17:16] -  adc1 clock (adc1_clk_enable)
 (rw) (02)  [0;32mCG9[0m  - [19:18] -  semc_exsc clock (semc_exsc_clk_enable)
 (rw) (02)  [0;32mCG10[0m  - [21:20] -  gpt1 bus clock (gpt_clk_enable)
 (rw) (02)  [0;32mCG11[0m  - [23:22] -  gpt1 serial clock (gpt_serial_clk_enable)
 (rw) (02)  [0;32mCG12[0m  - [25:24] -  lpuart4 clock (lpuart4_clk_enable)
 (rw) (02)  [0;32mCG13[0m  - [27:26] -  gpio1 clock (gpio1_clk_enable)
 (rw) (02)  [0;32mCG14[0m  - [29:28] -  csu clock (csu_clk_enable)
 (rw) (02)  [0;32mCG15[0m  - [31:30] -  Reserved
</lang>
#### CCM.CCGR3
<link=p.CCM.CCGR3>
#### p.ccm.ccgr7
<link=p.CCM.CCGR7>
#### p.ROMC
<lang=dft>
base: 0x40180000
ROMPATCH0A      ROMPATCH0D      ROMPATCH10A     ROMPATCH11A     
ROMPATCH12A     ROMPATCH13A     ROMPATCH14A     ROMPATCH15A     
ROMPATCH1A      ROMPATCH1D      ROMPATCH2A      ROMPATCH2D      
ROMPATCH3A      ROMPATCH3D      ROMPATCH4A      ROMPATCH4D      
ROMPATCH5A      ROMPATCH5D      ROMPATCH6A      ROMPATCH6D      
ROMPATCH7A      ROMPATCH7D      ROMPATCH8A      ROMPATCH9A      
ROMPATCHCNTL    ROMPATCHENH     ROMPATCHENL     ROMPATCHSR      
输入 p.ROMC.{reg_name} 以查看寄存器的详细信息
type p.ROMC.{reg_name} to check details of registers
</lang>
#### p.romc
<link=p.ROMC>
#### p.ROMC.ROMPATCH6D
<lang=dft>
 (rw)  [1;33m0x401800d8[0m (0x40180000 + 0x00d8)
ROMC Data Registers
 (rw) (32)  [0;32mDATAX[0m  - [31:00] -  Data Fix Registers - Stores the data used for 1-word data fix operations
</lang>
#### p.romc.rompatch0d
<link=p.ROMC.ROMPATCH0D>
#### p.ROMC.ROMPATCH1A
<lang=dft>
 (rw)  [1;33m0x40180104[0m (0x40180000 + 0x0104)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### ROMC.ROMPATCH1A
<link=p.ROMC.ROMPATCH1A>
#### romc.rompatch5a
<link=p.ROMC.ROMPATCH5A>
#### p.romc.rompatch6a
<link=p.ROMC.ROMPATCH6A>
#### ROMC.ROMPATCH6A
<link=p.ROMC.ROMPATCH6A>
#### romc.rompatch10a
<link=p.ROMC.ROMPATCH10A>
#### lpuart1.stat
<link=p.LPUART1.STAT>
#### LPUART1.MODIR
<link=p.LPUART1.MODIR>
#### lpuart2.verid
<link=p.LPUART2.VERID>
#### p.LPUART2.PARAM
<lang=dft>
 (ro)  [1;33m0x40188004[0m (0x40188000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
</lang>
#### lpuart2.water
<link=p.LPUART2.WATER>
#### LPUART2.WATER
<link=p.LPUART2.WATER>
#### lpuart3.data
<link=p.LPUART3.DATA>
#### p.lpuart3.match
<link=p.LPUART3.MATCH>
#### lpuart4.param
<link=p.LPUART4.PARAM>
#### lpuart4.stat
<link=p.LPUART4.STAT>
#### p.LPUART5
<lang=dft>
base: 0x40194000
BAUD            CTRL            DATA            FIFO            
GLOBAL          MATCH           MODIR           PARAM           
PINCFG          STAT            VERID           WATER           
输入 p.LPUART5.{reg_name} 以查看寄存器的详细信息
type p.LPUART5.{reg_name} to check details of registers
</lang>
#### lpuart5.global
<link=p.LPUART5.GLOBAL>
#### LPUART6.PARAM
<link=p.LPUART6.PARAM>
#### lpuart6.data
<link=p.LPUART6.DATA>
#### lpuart6.match
<link=p.LPUART6.MATCH>
#### p.lpuart7.param
<link=p.LPUART7.PARAM>
#### flexio1.ctrl
<link=p.FLEXIO1.CTRL>
#### flexio1.timstat
<link=p.FLEXIO1.TIMSTAT>
#### p.FLEXIO1.SHIFTCFG[1]
<lang=dft>
 (rw)  [1;33m0x401ac104[0m (0x401ac000 + 0x0104)
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
#### FLEXIO1.SHIFTCFG[2]
<link=p.FLEXIO1.SHIFTCFG[2]>
#### p.FLEXIO1.SHIFTBUF[3]
<lang=dft>
 (rw)  [1;33m0x401ac20c[0m (0x401ac000 + 0x020c)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### p.FLEXIO1.SHIFTBUFBBS[3]
<lang=dft>
 (rw)  [1;33m0x401ac38c[0m (0x401ac000 + 0x038c)
Shifter Buffer N Bit Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.FLEXIO1.TIMCFG[2]
<lang=dft>
 (rw)  [1;33m0x401ac488[0m (0x401ac000 + 0x0488)
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
#### p.FLEXIO1.TIMCMP[3]
<lang=dft>
 (rw)  [1;33m0x401ac50c[0m (0x401ac000 + 0x050c)
Timer Compare N Register
 (rw) (16)  [0;32mCMP[0m  - [15:00] -  Timer Compare Value
</lang>
#### p.FLEXIO1.SHIFTBUFNBS[0]
<lang=dft>
 (rw)  [1;33m0x401ac680[0m (0x401ac000 + 0x0680)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio1.shiftbufnbs[1]
<link=p.FLEXIO1.SHIFTBUFNBS[1]>
#### flexio1.shiftbufnbs[2]
<link=p.FLEXIO1.SHIFTBUFNBS[2]>
#### flexio1.shiftbufnis[3]
<link=p.FLEXIO1.SHIFTBUFNIS[3]>
#### p.flexio2.timien
<link=p.FLEXIO2.TIMIEN>
#### p.flexio2.shiftsden
<link=p.FLEXIO2.SHIFTSDEN>
#### p.flexio2.shiftctl[1]
<link=p.FLEXIO2.SHIFTCTL[1]>
#### flexio2.shiftcfg[0]
<link=p.FLEXIO2.SHIFTCFG[0]>
#### FLEXIO2.SHIFTBUF[2]
<link=p.FLEXIO2.SHIFTBUF[2]>
#### p.flexio2.shiftbufbys[0]
<link=p.FLEXIO2.SHIFTBUFBYS[0]>
#### FLEXIO2.SHIFTBUFBYS[0]
<link=p.FLEXIO2.SHIFTBUFBYS[0]>
#### FLEXIO2.TIMCFG[3]
<link=p.FLEXIO2.TIMCFG[3]>
#### p.FLEXIO2.SHIFTBUFNBS[3]
<lang=dft>
 (rw)  [1;33m0x401b068c[0m (0x401b0000 + 0x068c)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio3.shifterr
<link=p.FLEXIO3.SHIFTERR>
#### p.flexio3.timien
<link=p.FLEXIO3.TIMIEN>
#### FLEXIO3.TIMIEN
<link=p.FLEXIO3.TIMIEN>
#### p.FLEXIO3.SHIFTSDEN
<lang=dft>
 (rw)  [1;33m0x42020030[0m (0x42020000 + 0x0030)
Shifter Status DMA Enable
 (rw) (04)  [0;32mSSDE[0m  - [03:00] -  Shifter Status DMA Enable
</lang>
#### p.FLEXIO3.SHIFTCTL[2]
<lang=dft>
 (rw)  [1;33m0x42020088[0m (0x42020000 + 0x0088)
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
#### p.flexio3.shiftctl[3]
<link=p.FLEXIO3.SHIFTCTL[3]>
#### flexio3.shiftbufbys[3]
<link=p.FLEXIO3.SHIFTBUFBYS[3]>
#### p.FLEXIO3.SHIFTBUFBBS[0]
<lang=dft>
 (rw)  [1;33m0x42020380[0m (0x42020000 + 0x0380)
Shifter Buffer N Bit Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBBS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufbbs[3]
<link=p.FLEXIO3.SHIFTBUFBBS[3]>
#### p.flexio3.timctl[0]
<link=p.FLEXIO3.TIMCTL[0]>
#### flexio3.timctl[2]
<link=p.FLEXIO3.TIMCTL[2]>
#### flexio3.timcfg[2]
<link=p.FLEXIO3.TIMCFG[2]>
#### p.flexio3.shiftbufnbs[0]
<link=p.FLEXIO3.SHIFTBUFNBS[0]>
#### FLEXIO3.SHIFTBUFHWS[0]
<link=p.FLEXIO3.SHIFTBUFHWS[0]>
#### p.FLEXIO3.SHIFTBUFHWS[1]
<lang=dft>
 (rw)  [1;33m0x42020704[0m (0x42020000 + 0x0704)
Shifter Buffer N Half Word Swapped Register
 (rw) (32)  [0;32mSHIFTBUFHWS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufnis[2]
<link=p.FLEXIO3.SHIFTBUFNIS[2]>
#### gpio1.gdir
<link=p.GPIO1.GDIR>
#### p.gpio1.icr2
<link=p.GPIO1.ICR2>
#### GPIO1.DR_SET
<link=p.GPIO1.DR_SET>
#### GPIO5.ICR2
<link=p.GPIO5.ICR2>
#### GPIO5.DR_TOGGLE
<link=p.GPIO5.DR_TOGGLE>
#### p.gpio2.psr
<link=p.GPIO2.PSR>
#### p.gpio2.dr_clear
<link=p.GPIO2.DR_CLEAR>
#### gpio2.dr_clear
<link=p.GPIO2.DR_CLEAR>
#### p.gpio3.gdir
<link=p.GPIO3.GDIR>
#### GPIO3.ICR1
<link=p.GPIO3.ICR1>
#### gpio3.imr
<link=p.GPIO3.IMR>
#### gpio3.isr
<link=p.GPIO3.ISR>
#### p.GPIO6
<lang=dft>
base: 0x42000000
DR              DR_CLEAR        DR_SET          DR_TOGGLE       
EDGE_SEL        GDIR            ICR1            ICR2            
IMR             ISR             PSR             
输入 p.GPIO6.{reg_name} 以查看寄存器的详细信息
type p.GPIO6.{reg_name} to check details of registers
</lang>
#### p.gpio6.icr2
<link=p.GPIO6.ICR2>
#### p.GPIO6.DR_SET
<lang=dft>
 (wo)  [1;33m0x42000084[0m (0x42000000 + 0x0084)
GPIO data register SET
 (wo) (32)  [0;32mDR_SET[0m  - [31:00] -  DR_SET
</lang>
#### GPIO6.DR_SET
<link=p.GPIO6.DR_SET>
#### GPIO6.DR_CLEAR
<link=p.GPIO6.DR_CLEAR>
#### p.GPIO6.DR_TOGGLE
<lang=dft>
 (wo)  [1;33m0x4200008c[0m (0x42000000 + 0x008c)
GPIO data register TOGGLE
 (wo) (32)  [0;32mDR_TOGGLE[0m  - [31:00] -  DR_TOGGLE
</lang>
#### GPIO7.DR
<link=p.GPIO7.DR>
#### p.GPIO7.PSR
<lang=dft>
 (ro)  [1;33m0x42004008[0m (0x42004000 + 0x0008)
GPIO pad status register
 (ro) (32)  [0;32mPSR[0m  - [31:00] -  PSR
</lang>
#### gpio7.icr2
<link=p.GPIO7.ICR2>
#### p.GPIO7.ISR
<lang=dft>
 (rw)  [1;33m0x42004018[0m (0x42004000 + 0x0018)
GPIO interrupt status register
 (rw) (32)  [0;32mISR[0m  - [31:00] -  ISR
</lang>
#### p.gpio8.psr
<link=p.GPIO8.PSR>
#### p.GPIO8.IMR
<lang=dft>
 (rw)  [1;33m0x42008014[0m (0x42008000 + 0x0014)
GPIO interrupt mask register
 (rw) (32)  [0;32mIMR[0m  - [31:00] -  IMR
</lang>
#### GPIO8.IMR
<link=p.GPIO8.IMR>
#### p.GPIO8.EDGE_SEL
<lang=dft>
 (rw)  [1;33m0x4200801c[0m (0x42008000 + 0x001c)
GPIO edge select register
 (rw) (32)  [0;32mGPIO_EDGE_SEL[0m  - [31:00] -  GPIO_EDGE_SEL
</lang>
#### p.GPIO8.DR_CLEAR
<lang=dft>
 (wo)  [1;33m0x42008088[0m (0x42008000 + 0x0088)
GPIO data register CLEAR
 (wo) (32)  [0;32mDR_CLEAR[0m  - [31:00] -  DR_CLEAR
</lang>
#### p.gpio8.dr_toggle
<link=p.GPIO8.DR_TOGGLE>
#### GPIO8.DR_TOGGLE
<link=p.GPIO8.DR_TOGGLE>
#### GPIO9.DR
<link=p.GPIO9.DR>
#### GPIO9.ICR1
<link=p.GPIO9.ICR1>
#### gpio9.edge_sel
<link=p.GPIO9.EDGE_SEL>
#### can1.imask2
<link=p.CAN1.IMASK2>
#### can1.esr2
<link=p.CAN1.ESR2>
#### CAN1.CRCR
<link=p.CAN1.CRCR>
#### p.can1.rximr3
<link=p.CAN1.RXIMR3>
#### CAN1.RXIMR8
<link=p.CAN1.RXIMR8>
#### p.CAN1.RXIMR10
<lang=dft>
 (rw)  [1;33m0x401d08a8[0m (0x401d0000 + 0x08a8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr11
<link=p.CAN1.RXIMR11>
#### p.can1.rximr21
<link=p.CAN1.RXIMR21>
#### p.CAN1.RXIMR25
<lang=dft>
 (rw)  [1;33m0x401d08e4[0m (0x401d0000 + 0x08e4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR26
<link=p.CAN1.RXIMR26>
#### can1.rximr28
<link=p.CAN1.RXIMR28>
#### can1.rximr42
<link=p.CAN1.RXIMR42>
#### CAN1.RXIMR47
<link=p.CAN1.RXIMR47>
#### p.CAN1.RXIMR48
<lang=dft>
 (rw)  [1;33m0x401d0940[0m (0x401d0000 + 0x0940)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr50
<link=p.CAN1.RXIMR50>
#### CAN1.RXIMR50
<link=p.CAN1.RXIMR50>
#### can2.ecr
<link=p.CAN2.ECR>
#### p.CAN2.IMASK2
<lang=dft>
 (rw)  [1;33m0x401d4024[0m (0x401d4000 + 0x0024)
Interrupt Masks 2 Register
 (rw) (32)  [0;32mBUFHM[0m  - [31:00] -  Each bit enables or disables the respective FLEXCAN Message Buffer (MB32 to MB6
 3) Interrupt
      0 - BUFHM_0 :
         The corresponding buffer Interrupt is disabled
      0x1 - BUFHM_1 :
         The corresponding buffer Interrupt is enabled
</lang>
#### p.can2.esr2
<link=p.CAN2.ESR2>
#### p.CAN2.CRCR
<lang=dft>
 (ro)  [1;33m0x401d4044[0m (0x401d4000 + 0x0044)
CRC Register
 (ro) (15)  [0;32mTXCRC[0m  - [14:00] -  This field indicates the CRC value of the last message transmitted
 (ro) (07)  [0;32mMBCRC[0m  - [22:16] -  This field indicates the number of the Mailbox corresponding to the value in TX
 CRC field.
</lang>
#### p.CAN2.RXFIR
<lang=dft>
 (ro)  [1;33m0x401d404c[0m (0x401d4000 + 0x004c)
Rx FIFO Information Register
 (ro) (09)  [0;32mIDHIT[0m  - [08:00] -  This 9-bit field indicates which Identifier Acceptance Filter (see Rx FIFO Stru
 cture) was hit by the received message that is in the output of the Rx FIFO
</lang>
#### p.can2.rxfir
<link=p.CAN2.RXFIR>
#### p.can2.dbg1
<link=p.CAN2.DBG1>
#### p.CAN2.RXIMR2
<lang=dft>
 (rw)  [1;33m0x401d4888[0m (0x401d4000 + 0x0888)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr3
<link=p.CAN2.RXIMR3>
#### can2.rximr12
<link=p.CAN2.RXIMR12>
#### p.CAN2.RXIMR22
<lang=dft>
 (rw)  [1;33m0x401d48d8[0m (0x401d4000 + 0x08d8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr26
<link=p.CAN2.RXIMR26>
#### can2.rximr27
<link=p.CAN2.RXIMR27>
#### p.can2.rximr31
<link=p.CAN2.RXIMR31>
#### can2.rximr34
<link=p.CAN2.RXIMR34>
#### CAN2.RXIMR39
<link=p.CAN2.RXIMR39>
#### p.CAN2.RXIMR40
<lang=dft>
 (rw)  [1;33m0x401d4920[0m (0x401d4000 + 0x0920)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR48
<link=p.CAN2.RXIMR48>
#### p.can2.rximr53
<link=p.CAN2.RXIMR53>
#### p.CAN2.RXIMR57
<lang=dft>
 (rw)  [1;33m0x401d4964[0m (0x401d4000 + 0x0964)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can3.timer
<link=p.CAN3.TIMER>
#### CAN3.IMASK1
<link=p.CAN3.IMASK1>
#### can3.iflag2
<link=p.CAN3.IFLAG2>
#### p.CAN3.CTRL2
<lang=dft>
 (rw)  [1;33m0x401d8034[0m (0x401d8000 + 0x0034)
Control 2 register
 (rw) (02)  [0;32mTSTAMPCAP[0m  - [07:06] -  Time Stamp Capture Point
      0 - TSTAMPCAP_0 :
         The high resolution time stamp capture is disabled
      0x1 - TSTAMPCAP_1 :
         The high resolution time stamp is captured in the end of the CAN frame
      0x2 - TSTAMPCAP_2 :
         The high resolution time stamp is captured in the start of the CAN fram
         e
      0x3 - TSTAMPCAP_3 :
         The high resolution time stamp is captured in the start of frame for cl
         assical CAN frames and in res bit for CAN FD frames
 (rw) (02)  [0;32mMBTSBASE[0m  - [09:08] -  Message Buffer Time Stamp Base
      0 - MBTSBASE_0 :
         Message Buffer Time Stamp base is CAN_TIMER
      0x1 - MBTSBASE_1 :
         Message Buffer Time Stamp base is lower 16-bits of high resolution time
         r
      0x2 - MBTSBASE_2 :
         Message Buffer Time Stamp base is upper 16-bits of high resolution time
         rT
 (rw) (01)  [0;32mEDFLTDIS[0m  - [11:11] -  Edge Filter Disable
      0 - EDFLTDIS_0 :
         Edge Filter is enabled
      0x1 - EDFLTDIS_1 :
         Edge Filter is disabled
 (rw) (01)  [0;32mISOCANFDEN[0m  - [12:12] -  ISO CAN FD Enable
      0 - ISOCANFDEN_0 :
         FlexCAN operates using the non-ISO CAN FD protocol.
      0x1 - ISOCANFDEN_1 :
         FlexCAN operates using the ISO CAN FD protocol (ISO 11898-1).
 (rw) (01)  [0;32mBTE[0m  - [13:13] -  Bit Timing Expansion enable
      0 - BTE_0 :
         CAN Bit timing expansion is disabled.
      0x1 - BTE_1 :
         CAN bit timing expansion is enabled.
 (rw) (01)  [0;32mPREXCEN[0m  - [14:14] -  Protocol Exception Enable
      0 - PREXCEN_0 :
         Protocol Exception is disabled.
      0x1 - PREXCEN_1 :
         Protocol Exception is enabled.
 (rw) (01)  [0;32mTIMER_SRC[0m  - [15:15] -  Timer Source
      0 - TIMER_SRC_0 :
         The Free Running Timer is clocked by the CAN bit clock, which defines t
         he baud rate on the CAN bus.
      0x1 - TIMER_SRC_1 :
         The Free Running Timer is clocked by an external time tick. The period 
         can be either adjusted to be equal to the baud rate on the CAN bus, or 
         a different value as required. See the device specific section for deta
         ils about the external time tick.
 (rw) (01)  [0;32mEACEN[0m  - [16:16] -  Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes
      0 - EACEN_0 :
         Rx Mailbox filter's IDE bit is always compared and RTR is never compare
         d despite mask bits.
      0x1 - EACEN_1 :
         Enables the comparison of both Rx Mailbox filter's IDE and RTR bit with
          their corresponding bits within the incoming frame. Mask bits do apply
         .
 (rw) (01)  [0;32mRRS[0m  - [17:17] -  Remote Request Storing
      0 - RRS_0 :
         Remote Response Frame is generated.
      0x1 - RRS_1 :
         Remote Request Frame is stored.
 (rw) (01)  [0;32mMRP[0m  - [18:18] -  Mailboxes Reception Priority
      0 - MRP_0 :
         Matching starts from Legacy Rx FIFO or Enhanced Rx FIFO and continues o
         n Mailboxes.
      0x1 - MRP_1 :
         Matching starts from Mailboxes and continues on Legacy Rx FIFO or Enhan
         ced Rx FIFO .
 (rw) (05)  [0;32mTASD[0m  - [23:19] -  Tx Arbitration Start Delay
 (rw) (04)  [0;32mRFFN[0m  - [27:24] -  Number Of Legacy Rx FIFO Filters
 (rw) (01)  [0;32mBOFFDONEMSK[0m  - [30:30] -  Bus Off Done Interrupt Mask
      0 - BOFFDONEMSK_0 :
         Bus Off Done interrupt disabled.
      0x1 - BOFFDONEMSK_1 :
         Bus Off Done interrupt enabled.
 (rw) (01)  [0;32mERRMSK_FAST[0m  - [31:31] -  Error Interrupt Mask for errors detected in the Data Phase of fast CAN FD frame
 s
      0 - ERRMSK_FAST_0 :
         ERRINT_FAST Error interrupt disabled.
      0x1 - ERRMSK_FAST_1 :
         ERRINT_FAST Error interrupt enabled.
</lang>
#### p.can3.cbt
<link=p.CAN3.CBT>
#### CAN3.CBT
<link=p.CAN3.CBT>
#### can3.mb0_8b_cs
<link=p.CAN3.MB0_8B_CS>
#### p.can3.id0
<link=p.CAN3.ID0>
#### can3.mb0_16b_word1
<link=p.CAN3.MB0_16B_WORD1>
#### p.CAN3.MB0_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8090[0m (0x401d8000 + 0x0090)
Message Buffer 0 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB0_64B_WORD2
<link=p.CAN3.MB0_64B_WORD2>
#### p.can3.mb0_32b_word5
<link=p.CAN3.MB0_32B_WORD5>
#### p.can3.mb0_64b_word5
<link=p.CAN3.MB0_64B_WORD5>
#### CAN3.MB2_8B_CS
<link=p.CAN3.MB2_8B_CS>
#### can3.mb1_16b_word1
<link=p.CAN3.MB1_16B_WORD1>
#### can3.mb2_8b_id
<link=p.CAN3.MB2_8B_ID>
#### p.CAN3.MB0_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d80a8[0m (0x401d8000 + 0x00a8)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB0_64B_WORD11
<link=p.CAN3.MB0_64B_WORD11>
#### CAN3.MB3_8B_ID
<link=p.CAN3.MB3_8B_ID>
#### p.CAN3.MB3_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80b8[0m (0x401d8000 + 0x00b8)
Message Buffer 3 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB1_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d80bc[0m (0x401d8000 + 0x00bc)
Message Buffer 1 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb2_16b_word1
<link=p.CAN3.MB2_16B_WORD1>
#### can3.mb3_8b_word1
<link=p.CAN3.MB3_8B_WORD1>
#### p.CAN3.WORD13
<lang=dft>
 (rw)  [1;33m0x401d80bc[0m (0x401d8000 + 0x00bc)
Message Buffer 3 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb1_32b_word5
<link=p.CAN3.MB1_32B_WORD5>
#### p.CAN3.MB1_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d80c8[0m (0x401d8000 + 0x00c8)
Message Buffer 1 CS Register
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
#### can3.mb3_16b_cs
<link=p.CAN3.MB3_16B_CS>
#### p.can3.mb4_8b_word0
<link=p.CAN3.MB4_8B_WORD0>
#### p.CAN3.WORD04
<lang=dft>
 (rw)  [1;33m0x401d80c8[0m (0x401d8000 + 0x00c8)
Message Buffer 4 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB1_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d80cc[0m (0x401d8000 + 0x00cc)
Message Buffer 1 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb3_16b_id
<link=p.CAN3.MB3_16B_ID>
#### p.can3.mb2_32b_cs
<link=p.CAN3.MB2_32B_CS>
#### p.can3.mb1_64b_word2
<link=p.CAN3.MB1_64B_WORD2>
#### CAN3.MB1_64B_WORD2
<link=p.CAN3.MB1_64B_WORD2>
#### p.can3.word05
<link=p.CAN3.WORD05>
#### can3.mb3_16b_word3
<link=p.CAN3.MB3_16B_WORD3>
#### can3.mb4_16b_cs
<link=p.CAN3.MB4_16B_CS>
#### p.can3.mb2_32b_word5
<link=p.CAN3.MB2_32B_WORD5>
#### p.CAN3.MB4_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80ec[0m (0x401d8000 + 0x00ec)
Message Buffer 4 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS7
<lang=dft>
 (rw)  [1;33m0x401d80f0[0m (0x401d8000 + 0x00f0)
Message Buffer 7 CS Register
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
#### p.CAN3.MB1_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d80f0[0m (0x401d8000 + 0x00f0)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB7_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d80f0[0m (0x401d8000 + 0x00f0)
Message Buffer 7 CS Register
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
#### CAN3.MB4_16B_WORD3
<link=p.CAN3.MB4_16B_WORD3>
#### CAN3.MB1_64B_WORD11
<link=p.CAN3.MB1_64B_WORD11>
#### p.can3.mb5_16b_id
<link=p.CAN3.MB5_16B_ID>
#### p.can3.cs8
<link=p.CAN3.CS8>
#### p.CAN3.MB3_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8104[0m (0x401d8000 + 0x0104)
Message Buffer 3 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB3_32B_WORD1
<link=p.CAN3.MB3_32B_WORD1>
#### can3.mb1_64b_word14
<link=p.CAN3.MB1_64B_WORD14>
#### p.can3.mb8_8b_word0
<link=p.CAN3.MB8_8B_WORD0>
#### can3.cs9
<link=p.CAN3.CS9>
#### p.can3.mb2_64b_id
<link=p.CAN3.MB2_64B_ID>
#### p.can3.mb3_32b_word5
<link=p.CAN3.MB3_32B_WORD5>
#### p.CAN3.MB2_64B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8118[0m (0x401d8000 + 0x0118)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB6_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d811c[0m (0x401d8000 + 0x011c)
Message Buffer 6 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB6_16B_WORD1
<link=p.CAN3.MB6_16B_WORD1>
#### can3.word19
<link=p.CAN3.WORD19>
#### can3.mb4_32b_cs
<link=p.CAN3.MB4_32B_CS>
#### CAN3.MB4_32B_CS
<link=p.CAN3.MB4_32B_CS>
#### can3.mb6_16b_word2
<link=p.CAN3.MB6_16B_WORD2>
#### can3.mb10_8b_word1
<link=p.CAN3.MB10_8B_WORD1>
#### p.can3.mb4_32b_word1
<link=p.CAN3.MB4_32B_WORD1>
#### p.CAN3.WORD110
<lang=dft>
 (rw)  [1;33m0x401d812c[0m (0x401d8000 + 0x012c)
Message Buffer 10 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb11_8b_cs
<link=p.CAN3.MB11_8B_CS>
#### p.CAN3.ID11
<lang=dft>
 (rw)  [1;33m0x401d8134[0m (0x401d8000 + 0x0134)
Message Buffer 11 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB2_64B_WORD9
<link=p.CAN3.MB2_64B_WORD9>
#### can3.mb2_64b_word11
<link=p.CAN3.MB2_64B_WORD11>
#### p.CAN3.MB12_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8148[0m (0x401d8000 + 0x0148)
Message Buffer 12 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.CS13
<link=p.CAN3.CS13>
#### CAN3.MB2_64B_WORD14
<link=p.CAN3.MB2_64B_WORD14>
#### p.can3.id13
<link=p.CAN3.ID13>
#### p.CAN3.MB2_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d8154[0m (0x401d8000 + 0x0154)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb5_32b_word1
<link=p.CAN3.MB5_32B_WORD1>
#### p.CAN3.CS14
<lang=dft>
 (rw)  [1;33m0x401d8160[0m (0x401d8000 + 0x0160)
Message Buffer 14 CS Register
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
#### p.CAN3.MB14_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8164[0m (0x401d8000 + 0x0164)
Message Buffer 14 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB3_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8168[0m (0x401d8000 + 0x0168)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB9_16B_WORD2
<link=p.CAN3.MB9_16B_WORD2>
#### p.CAN3.MB5_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d816c[0m (0x401d8000 + 0x016c)
Message Buffer 5 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB9_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d816c[0m (0x401d8000 + 0x016c)
Message Buffer 9 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb3_64b_word6
<link=p.CAN3.MB3_64B_WORD6>
#### p.can3.mb10_16b_word1
<link=p.CAN3.MB10_16B_WORD1>
#### p.can3.mb3_64b_word7
<link=p.CAN3.MB3_64B_WORD7>
#### p.can3.mb6_32b_word1
<link=p.CAN3.MB6_32B_WORD1>
#### p.CAN3.MB16_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8180[0m (0x401d8000 + 0x0180)
Message Buffer 16 CS Register
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
#### can3.id16
<link=p.CAN3.ID16>
#### CAN3.MB3_64B_WORD9
<link=p.CAN3.MB3_64B_WORD9>
#### p.CAN3.MB11_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8188[0m (0x401d8000 + 0x0188)
Message Buffer 11 CS Register
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
#### CAN3.MB11_16B_WORD0
<link=p.CAN3.MB11_16B_WORD0>
#### CAN3.ID17
<link=p.CAN3.ID17>
#### can3.mb11_16b_word1
<link=p.CAN3.MB11_16B_WORD1>
#### p.can3.mb17_8b_id
<link=p.CAN3.MB17_8B_ID>
#### p.CAN3.MB3_64B_WORD13
<lang=dft>
 (rw)  [1;33m0x401d8194[0m (0x401d8000 + 0x0194)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_55[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_54[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_53[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_52[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD117
<link=p.CAN3.WORD117>
#### CAN3.MB12_16B_CS
<link=p.CAN3.MB12_16B_CS>
#### p.CAN3.MB4_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d81a4[0m (0x401d8000 + 0x01a4)
Message Buffer 4 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb7_32b_word1
<link=p.CAN3.MB7_32B_WORD1>
#### p.can3.mb12_16b_word0
<link=p.CAN3.MB12_16B_WORD0>
#### can3.mb4_64b_word1
<link=p.CAN3.MB4_64B_WORD1>
#### p.can3.mb4_64b_word2
<link=p.CAN3.MB4_64B_WORD2>
#### CAN3.MB12_16B_WORD3
<link=p.CAN3.MB12_16B_WORD3>
#### p.CAN3.MB7_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d81b4[0m (0x401d8000 + 0x01b4)
Message Buffer 7 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_32B_WORD5
<link=p.CAN3.MB7_32B_WORD5>
#### p.CAN3.WORD019
<lang=dft>
 (rw)  [1;33m0x401d81b8[0m (0x401d8000 + 0x01b8)
Message Buffer 19 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb13_16b_word0
<link=p.CAN3.MB13_16B_WORD0>
#### CAN3.MB8_32B_WORD0
<link=p.CAN3.MB8_32B_WORD0>
#### CAN3.MB13_16B_WORD3
<link=p.CAN3.MB13_16B_WORD3>
#### CAN3.MB4_64B_WORD9
<link=p.CAN3.MB4_64B_WORD9>
#### p.CAN3.MB4_64B_WORD11
<lang=dft>
 (rw)  [1;33m0x401d81d4[0m (0x401d8000 + 0x01d4)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_47[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_46[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_45[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_44[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB8_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d81d4[0m (0x401d8000 + 0x01d4)
Message Buffer 8 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb8_32b_word4
<link=p.CAN3.MB8_32B_WORD4>
#### can3.mb21_8b_word1
<link=p.CAN3.MB21_8B_WORD1>
#### CAN3.CS22
<link=p.CAN3.CS22>
#### can3.mb4_64b_word14
<link=p.CAN3.MB4_64B_WORD14>
#### p.can3.id22
<link=p.CAN3.ID22>
#### p.can3.mb22_8b_word0
<link=p.CAN3.MB22_8B_WORD0>
#### CAN3.MB23_8B_WORD0
<link=p.CAN3.MB23_8B_WORD0>
#### can3.mb24_8b_cs
<link=p.CAN3.MB24_8B_CS>
#### CAN3.MB24_8B_CS
<link=p.CAN3.MB24_8B_CS>
#### p.CAN3.ID24
<lang=dft>
 (rw)  [1;33m0x401d8204[0m (0x401d8000 + 0x0204)
Message Buffer 24 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.word024
<link=p.CAN3.WORD024>
#### p.CAN3.MB24_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d820c[0m (0x401d8000 + 0x020c)
Message Buffer 24 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB5_64B_WORD7
<link=p.CAN3.MB5_64B_WORD7>
#### can3.mb9_32b_word7
<link=p.CAN3.MB9_32B_WORD7>
#### can3.cs25
<link=p.CAN3.CS25>
#### p.can3.mb5_64b_word9
<link=p.CAN3.MB5_64B_WORD9>
#### p.CAN3.MB17_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8218[0m (0x401d8000 + 0x0218)
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
#### p.CAN3.MB5_64B_WORD11
<lang=dft>
 (rw)  [1;33m0x401d821c[0m (0x401d8000 + 0x021c)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_47[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_46[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_45[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_44[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB10_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d822c[0m (0x401d8000 + 0x022c)
Message Buffer 10 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb10_32b_word5
<link=p.CAN3.MB10_32B_WORD5>
#### CAN3.WORD126
<link=p.CAN3.WORD126>
#### p.CAN3.MB18_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8238[0m (0x401d8000 + 0x0238)
Message Buffer 18 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD027
<lang=dft>
 (rw)  [1;33m0x401d8238[0m (0x401d8000 + 0x0238)
Message Buffer 27 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb11_32b_id
<link=p.CAN3.MB11_32B_ID>
#### p.can3.word127
<link=p.CAN3.WORD127>
#### p.CAN3.MB28_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d824c[0m (0x401d8000 + 0x024c)
Message Buffer 28 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB6_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d824c[0m (0x401d8000 + 0x024c)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB11_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8250[0m (0x401d8000 + 0x0250)
Message Buffer 11 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb11_32b_word5
<link=p.CAN3.MB11_32B_WORD5>
#### p.can3.mb6_64b_word8
<link=p.CAN3.MB6_64B_WORD8>
#### can3.mb6_64b_word9
<link=p.CAN3.MB6_64B_WORD9>
#### p.CAN3.WORD129
<lang=dft>
 (rw)  [1;33m0x401d825c[0m (0x401d8000 + 0x025c)
Message Buffer 29 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb20_16b_word1
<link=p.CAN3.MB20_16B_WORD1>
#### CAN3.MB31_8B_CS
<link=p.CAN3.MB31_8B_CS>
#### p.can3.mb6_64b_word14
<link=p.CAN3.MB6_64B_WORD14>
#### p.can3.mb20_16b_word3
<link=p.CAN3.MB20_16B_WORD3>
#### p.can3.mb31_8b_id
<link=p.CAN3.MB31_8B_ID>
#### CAN3.MB31_8B_ID
<link=p.CAN3.MB31_8B_ID>
#### can3.mb12_32b_word4
<link=p.CAN3.MB12_32B_WORD4>
#### p.CAN3.MB7_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d8278[0m (0x401d8000 + 0x0278)
Message Buffer 7 CS Register
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
#### CAN3.MB7_64B_CS
<link=p.CAN3.MB7_64B_CS>
#### p.can3.mb21_16b_id
<link=p.CAN3.MB21_16B_ID>
#### CAN3.WORD131
<link=p.CAN3.WORD131>
#### p.CAN3.CS32
<lang=dft>
 (rw)  [1;33m0x401d8280[0m (0x401d8000 + 0x0280)
Message Buffer 32 CS Register
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
#### p.CAN3.MB12_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8280[0m (0x401d8000 + 0x0280)
Message Buffer 12 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb21_16b_word0
<link=p.CAN3.MB21_16B_WORD0>
#### can3.mb21_16b_word0
<link=p.CAN3.MB21_16B_WORD0>
#### can3.mb32_8b_cs
<link=p.CAN3.MB32_8B_CS>
#### p.CAN3.MB32_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8284[0m (0x401d8000 + 0x0284)
Message Buffer 32 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb13_32b_cs
<link=p.CAN3.MB13_32B_CS>
#### can3.mb13_32b_cs
<link=p.CAN3.MB13_32B_CS>
#### p.can3.mb32_8b_word0
<link=p.CAN3.MB32_8B_WORD0>
#### p.can3.mb7_64b_word2
<link=p.CAN3.MB7_64B_WORD2>
#### can3.mb13_32b_id
<link=p.CAN3.MB13_32B_ID>
#### p.CAN3.MB32_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d828c[0m (0x401d8000 + 0x028c)
Message Buffer 32 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb7_64b_word3
<link=p.CAN3.MB7_64B_WORD3>
#### p.can3.mb22_16b_cs
<link=p.CAN3.MB22_16B_CS>
#### can3.mb33_8b_cs
<link=p.CAN3.MB33_8B_CS>
#### p.CAN3.MB7_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d8294[0m (0x401d8000 + 0x0294)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb22_16b_word1
<link=p.CAN3.MB22_16B_WORD1>
#### p.can3.mb13_32b_word4
<link=p.CAN3.MB13_32B_WORD4>
#### p.CAN3.MB13_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d82a4[0m (0x401d8000 + 0x02a4)
Message Buffer 13 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb22_16b_word3
<link=p.CAN3.MB22_16B_WORD3>
#### p.CAN3.MB23_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d82a8[0m (0x401d8000 + 0x02a8)
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
#### p.can3.word134
<link=p.CAN3.WORD134>
#### p.can3.mb23_16b_word0
<link=p.CAN3.MB23_16B_WORD0>
#### can3.mb23_16b_word0
<link=p.CAN3.MB23_16B_WORD0>
#### p.can3.id35
<link=p.CAN3.ID35>
#### p.can3.mb7_64b_word13
<link=p.CAN3.MB7_64B_WORD13>
#### CAN3.MB7_64B_WORD14
<link=p.CAN3.MB7_64B_WORD14>
#### p.can3.word035
<link=p.CAN3.WORD035>
#### p.CAN3.MB14_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82bc[0m (0x401d8000 + 0x02bc)
Message Buffer 14 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb14_32b_word1
<link=p.CAN3.MB14_32B_WORD1>
#### p.CAN3.MB23_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d82bc[0m (0x401d8000 + 0x02bc)
Message Buffer 23 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.cs36
<link=p.CAN3.CS36>
#### can3.mb24_16b_cs
<link=p.CAN3.MB24_16B_CS>
#### CAN3.MB24_16B_CS
<link=p.CAN3.MB24_16B_CS>
#### p.CAN3.MB8_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d82c0[0m (0x401d8000 + 0x02c0)
Message Buffer 8 CS Register
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
#### can3.mb8_64b_cs
<link=p.CAN3.MB8_64B_CS>
#### CAN3.MB8_64B_CS
<link=p.CAN3.MB8_64B_CS>
#### p.can3.mb36_8b_id
<link=p.CAN3.MB36_8B_ID>
#### CAN3.MB8_64B_ID
<link=p.CAN3.MB8_64B_ID>
#### can3.mb24_16b_word2
<link=p.CAN3.MB24_16B_WORD2>
#### p.can3.mb37_8b_cs
<link=p.CAN3.MB37_8B_CS>
#### p.CAN3.ID37
<lang=dft>
 (rw)  [1;33m0x401d82d4[0m (0x401d8000 + 0x02d4)
Message Buffer 37 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb8_64b_word3
<link=p.CAN3.MB8_64B_WORD3>
#### p.CAN3.MB25_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d82d8[0m (0x401d8000 + 0x02d8)
Message Buffer 25 CS Register
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
#### can3.mb25_16b_id
<link=p.CAN3.MB25_16B_ID>
#### can3.mb37_8b_word1
<link=p.CAN3.MB37_8B_WORD1>
#### p.can3.cs38
<link=p.CAN3.CS38>
#### p.CAN3.MB15_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82e0[0m (0x401d8000 + 0x02e0)
Message Buffer 15 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB25_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82e0[0m (0x401d8000 + 0x02e0)
Message Buffer 25 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB38_8B_CS
<link=p.CAN3.MB38_8B_CS>
#### p.CAN3.MB8_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d82e0[0m (0x401d8000 + 0x02e0)
Message Buffer 8 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.ID38
<link=p.CAN3.ID38>
#### p.can3.mb15_32b_word1
<link=p.CAN3.MB15_32B_WORD1>
#### CAN3.MB8_64B_WORD8
<link=p.CAN3.MB8_64B_WORD8>
#### can3.word038
<link=p.CAN3.WORD038>
#### can3.mb25_16b_word3
<link=p.CAN3.MB25_16B_WORD3>
#### can3.mb26_16b_word0
<link=p.CAN3.MB26_16B_WORD0>
#### can3.mb8_64b_word12
<link=p.CAN3.MB8_64B_WORD12>
#### CAN3.WORD039
<link=p.CAN3.WORD039>
#### can3.word139
<link=p.CAN3.WORD139>
#### p.can3.id40
<link=p.CAN3.ID40>
#### can3.mb16_32b_word0
<link=p.CAN3.MB16_32B_WORD0>
#### CAN3.WORD040
<link=p.CAN3.WORD040>
#### p.CAN3.MB40_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d830c[0m (0x401d8000 + 0x030c)
Message Buffer 40 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.cs41
<link=p.CAN3.CS41>
#### p.CAN3.MB16_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8310[0m (0x401d8000 + 0x0310)
Message Buffer 16 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB27_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8310[0m (0x401d8000 + 0x0310)
Message Buffer 27 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb41_8b_word0
<link=p.CAN3.MB41_8B_WORD0>
#### p.can3.word041
<link=p.CAN3.WORD041>
#### p.can3.mb28_16b_id
<link=p.CAN3.MB28_16B_ID>
#### can3.mb42_8b_word0
<link=p.CAN3.MB42_8B_WORD0>
#### p.CAN3.MB9_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8328[0m (0x401d8000 + 0x0328)
Message Buffer 9 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB28_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d832c[0m (0x401d8000 + 0x032c)
Message Buffer 28 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb17_32b_word0
<link=p.CAN3.MB17_32B_WORD0>
#### p.can3.mb9_64b_word8
<link=p.CAN3.MB9_64B_WORD8>
#### CAN3.MB9_64B_WORD8
<link=p.CAN3.MB9_64B_WORD8>
#### p.CAN3.MB17_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8334[0m (0x401d8000 + 0x0334)
Message Buffer 17 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB29_16B_ID
<link=p.CAN3.MB29_16B_ID>
#### p.CAN3.WORD143
<lang=dft>
 (rw)  [1;33m0x401d833c[0m (0x401d8000 + 0x033c)
Message Buffer 43 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word144
<link=p.CAN3.WORD144>
#### can3.word144
<link=p.CAN3.WORD144>
#### p.can3.mb10_64b_cs
<link=p.CAN3.MB10_64B_CS>
#### p.can3.mb18_32b_cs
<link=p.CAN3.MB18_32B_CS>
#### p.can3.mb30_16b_cs
<link=p.CAN3.MB30_16B_CS>
#### can3.mb45_8b_cs
<link=p.CAN3.MB45_8B_CS>
#### p.CAN3.MB30_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8354[0m (0x401d8000 + 0x0354)
Message Buffer 30 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb30_16b_id
<link=p.CAN3.MB30_16B_ID>
#### can3.mb45_8b_word1
<link=p.CAN3.MB45_8B_WORD1>
#### CAN3.WORD145
<link=p.CAN3.WORD145>
#### p.CAN3.MB46_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8360[0m (0x401d8000 + 0x0360)
Message Buffer 46 CS Register
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
#### can3.id46
<link=p.CAN3.ID46>
#### p.can3.mb10_64b_word4
<link=p.CAN3.MB10_64B_WORD4>
#### can3.mb10_64b_word4
<link=p.CAN3.MB10_64B_WORD4>
#### p.CAN3.WORD046
<lang=dft>
 (rw)  [1;33m0x401d8368[0m (0x401d8000 + 0x0368)
Message Buffer 46 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb18_32b_word7
<link=p.CAN3.MB18_32B_WORD7>
#### p.CAN3.MB19_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8378[0m (0x401d8000 + 0x0378)
Message Buffer 19 CS Register
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
#### can3.cs48
<link=p.CAN3.CS48>
#### CAN3.MB32_16B_ID
<link=p.CAN3.MB32_16B_ID>
#### CAN3.CS49
<link=p.CAN3.CS49>
#### CAN3.MB32_16B_WORD2
<link=p.CAN3.MB32_16B_WORD2>
#### CAN3.ID49
<link=p.CAN3.ID49>
#### can3.word049
<link=p.CAN3.WORD049>
#### can3.mb11_64b_id
<link=p.CAN3.MB11_64B_ID>
#### can3.mb19_32b_word7
<link=p.CAN3.MB19_32B_WORD7>
#### CAN3.MB19_32B_WORD7
<link=p.CAN3.MB19_32B_WORD7>
#### can3.mb33_16b_id
<link=p.CAN3.MB33_16B_ID>
#### p.CAN3.MB49_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d839c[0m (0x401d8000 + 0x039c)
Message Buffer 49 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB49_8B_WORD1
<link=p.CAN3.MB49_8B_WORD1>
#### can3.mb50_8b_cs
<link=p.CAN3.MB50_8B_CS>
#### p.can3.mb11_64b_word4
<link=p.CAN3.MB11_64B_WORD4>
#### can3.mb11_64b_word4
<link=p.CAN3.MB11_64B_WORD4>
#### p.CAN3.MB51_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d83b0[0m (0x401d8000 + 0x03b0)
Message Buffer 51 CS Register
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
#### can3.mb51_8b_cs
<link=p.CAN3.MB51_8B_CS>
#### can3.mb34_16b_id
<link=p.CAN3.MB34_16B_ID>
#### can3.mb51_8b_id
<link=p.CAN3.MB51_8B_ID>
#### p.CAN3.MB11_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d83b8[0m (0x401d8000 + 0x03b8)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb34_16b_word1
<link=p.CAN3.MB34_16B_WORD1>
#### p.can3.cs52
<link=p.CAN3.CS52>
#### p.CAN3.MB20_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d83c0[0m (0x401d8000 + 0x03c0)
Message Buffer 20 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB34_16B_WORD2
<link=p.CAN3.MB34_16B_WORD2>
#### can3.word052
<link=p.CAN3.WORD052>
#### can3.mb52_8b_word1
<link=p.CAN3.MB52_8B_WORD1>
#### CAN3.MB21_32B_WORD0
<link=p.CAN3.MB21_32B_WORD0>
#### CAN3.MB35_16B_WORD0
<link=p.CAN3.MB35_16B_WORD0>
#### can3.mb35_16b_word1
<link=p.CAN3.MB35_16B_WORD1>
#### CAN3.WORD053
<link=p.CAN3.WORD053>
#### can3.word153
<link=p.CAN3.WORD153>
#### can3.mb36_16b_cs
<link=p.CAN3.MB36_16B_CS>
#### CAN3.MB36_16B_WORD1
<link=p.CAN3.MB36_16B_WORD1>
#### p.can3.mb36_16b_word2
<link=p.CAN3.MB36_16B_WORD2>
#### can3.mb22_32b_id
<link=p.CAN3.MB22_32B_ID>
#### CAN3.MB37_16B_CS
<link=p.CAN3.MB37_16B_CS>
#### p.CAN3.MB55_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83f8[0m (0x401d8000 + 0x03f8)
Message Buffer 55 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD055
<lang=dft>
 (rw)  [1;33m0x401d83f8[0m (0x401d8000 + 0x03f8)
Message Buffer 55 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB12_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d83fc[0m (0x401d8000 + 0x03fc)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB12_64B_WORD6
<link=p.CAN3.MB12_64B_WORD6>
#### p.CAN3.MB22_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8400[0m (0x401d8000 + 0x0400)
Message Buffer 22 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB37_16B_WORD1
<link=p.CAN3.MB37_16B_WORD1>
#### can3.mb37_16b_word2
<link=p.CAN3.MB37_16B_WORD2>
#### p.can3.word056
<link=p.CAN3.WORD056>
#### can3.cs57
<link=p.CAN3.CS57>
#### p.CAN3.MB12_64B_WORD10
<lang=dft>
 (rw)  [1;33m0x401d8410[0m (0x401d8000 + 0x0410)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_43[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_42[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_41[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_40[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB22_32B_WORD6
<link=p.CAN3.MB22_32B_WORD6>
#### p.CAN3.MB57_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8414[0m (0x401d8000 + 0x0414)
Message Buffer 57 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb57_8b_word1
<link=p.CAN3.MB57_8B_WORD1>
#### can3.mb57_8b_word1
<link=p.CAN3.MB57_8B_WORD1>
#### p.can3.word157
<link=p.CAN3.WORD157>
#### CAN3.MB12_64B_WORD14
<link=p.CAN3.MB12_64B_WORD14>
#### CAN3.MB58_8B_ID
<link=p.CAN3.MB58_8B_ID>
#### p.CAN3.MB13_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d8428[0m (0x401d8000 + 0x0428)
Message Buffer 13 CS Register
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
#### CAN3.MB58_8B_WORD0
<link=p.CAN3.MB58_8B_WORD0>
#### CAN3.MB13_64B_ID
<link=p.CAN3.MB13_64B_ID>
#### p.CAN3.CS59
<lang=dft>
 (rw)  [1;33m0x401d8430[0m (0x401d8000 + 0x0430)
Message Buffer 59 CS Register
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
#### can3.id59
<link=p.CAN3.ID59>
#### can3.id60
<link=p.CAN3.ID60>
#### p.can3.mb60_8b_word1
<link=p.CAN3.MB60_8B_WORD1>
#### p.CAN3.CS61
<lang=dft>
 (rw)  [1;33m0x401d8450[0m (0x401d8000 + 0x0450)
Message Buffer 61 CS Register
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
#### p.can3.mb61_8b_id
<link=p.CAN3.MB61_8B_ID>
#### CAN3.MB13_64B_WORD10
<link=p.CAN3.MB13_64B_WORD10>
#### CAN3.MB61_8B_WORD0
<link=p.CAN3.MB61_8B_WORD0>
#### p.can3.mb13_64b_word13
<link=p.CAN3.MB13_64B_WORD13>
#### p.can3.mb41_16b_word1
<link=p.CAN3.MB41_16B_WORD1>
#### p.CAN3.MB62_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8464[0m (0x401d8000 + 0x0464)
Message Buffer 62 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB13_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d8468[0m (0x401d8000 + 0x0468)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb41_16b_word2
<link=p.CAN3.MB41_16B_WORD2>
#### can3.mb13_64b_word15
<link=p.CAN3.MB13_64B_WORD15>
#### can3.mb63_8b_id
<link=p.CAN3.MB63_8B_ID>
#### p.CAN3.MB63_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8478[0m (0x401d8000 + 0x0478)
Message Buffer 63 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.rximr[5]
<link=p.CAN3.RXIMR[5]>
#### CAN3.RXIMR[10]
<link=p.CAN3.RXIMR[10]>
#### p.can3.rximr[15]
<link=p.CAN3.RXIMR[15]>
#### CAN3.RXIMR[22]
<link=p.CAN3.RXIMR[22]>
#### can3.rximr[28]
<link=p.CAN3.RXIMR[28]>
#### can3.rximr[31]
<link=p.CAN3.RXIMR[31]>
#### p.can3.rximr[33]
<link=p.CAN3.RXIMR[33]>
#### can3.rximr[34]
<link=p.CAN3.RXIMR[34]>
#### p.CAN3.RXIMR[37]
<lang=dft>
 (rw)  [1;33m0x401d8914[0m (0x401d8000 + 0x0914)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[44]
<link=p.CAN3.RXIMR[44]>
#### p.CAN3.RXIMR[47]
<lang=dft>
 (rw)  [1;33m0x401d893c[0m (0x401d8000 + 0x093c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[47]
<link=p.CAN3.RXIMR[47]>
#### p.can3.rximr[60]
<link=p.CAN3.RXIMR[60]>
#### can3.encbt
<link=p.CAN3.ENCBT>
#### CAN3.EDCBT
<link=p.CAN3.EDCBT>
#### can3.etdc
<link=p.CAN3.ETDC>
#### CAN3.FDCTRL
<link=p.CAN3.FDCTRL>
#### CAN3.ERFIER
<link=p.CAN3.ERFIER>
#### p.CAN3.HR_TIME_STAMP[9]
<lang=dft>
 (ro)  [1;33m0x401d8c54[0m (0x401d8000 + 0x0c54)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[12]
<link=p.CAN3.HR_TIME_STAMP[12]>
#### p.CAN3.HR_TIME_STAMP[17]
<lang=dft>
 (ro)  [1;33m0x401d8c74[0m (0x401d8000 + 0x0c74)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[17]
<link=p.CAN3.HR_TIME_STAMP[17]>
#### can3.hr_time_stamp[21]
<link=p.CAN3.HR_TIME_STAMP[21]>
#### p.CAN3.HR_TIME_STAMP[22]
<lang=dft>
 (ro)  [1;33m0x401d8c88[0m (0x401d8000 + 0x0c88)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### CAN3.HR_TIME_STAMP[24]
<link=p.CAN3.HR_TIME_STAMP[24]>
#### p.CAN3.HR_TIME_STAMP[28]
<lang=dft>
 (ro)  [1;33m0x401d8ca0[0m (0x401d8000 + 0x0ca0)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[28]
<link=p.CAN3.HR_TIME_STAMP[28]>
#### CAN3.HR_TIME_STAMP[30]
<link=p.CAN3.HR_TIME_STAMP[30]>
#### p.CAN3.HR_TIME_STAMP[31]
<lang=dft>
 (ro)  [1;33m0x401d8cac[0m (0x401d8000 + 0x0cac)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.CAN3.HR_TIME_STAMP[36]
<lang=dft>
 (ro)  [1;33m0x401d8cc0[0m (0x401d8000 + 0x0cc0)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### CAN3.HR_TIME_STAMP[37]
<link=p.CAN3.HR_TIME_STAMP[37]>
#### p.CAN3.HR_TIME_STAMP[45]
<lang=dft>
 (ro)  [1;33m0x401d8ce4[0m (0x401d8000 + 0x0ce4)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[45]
<link=p.CAN3.HR_TIME_STAMP[45]>
#### can3.hr_time_stamp[46]
<link=p.CAN3.HR_TIME_STAMP[46]>
#### CAN3.HR_TIME_STAMP[48]
<link=p.CAN3.HR_TIME_STAMP[48]>
#### can3.hr_time_stamp[50]
<link=p.CAN3.HR_TIME_STAMP[50]>
#### can3.hr_time_stamp[55]
<link=p.CAN3.HR_TIME_STAMP[55]>
#### can3.erffel[0]
<link=p.CAN3.ERFFEL[0]>
#### CAN3.ERFFEL[5]
<link=p.CAN3.ERFFEL[5]>
#### p.can3.erffel[6]
<link=p.CAN3.ERFFEL[6]>
#### p.CAN3.ERFFEL[9]
<lang=dft>
 (rw)  [1;33m0x401db024[0m (0x401d8000 + 0x3024)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[19]
<lang=dft>
 (rw)  [1;33m0x401db04c[0m (0x401d8000 + 0x304c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[22]
<link=p.CAN3.ERFFEL[22]>
#### p.can3.erffel[24]
<link=p.CAN3.ERFFEL[24]>
#### CAN3.ERFFEL[31]
<link=p.CAN3.ERFFEL[31]>
#### p.can3.erffel[32]
<link=p.CAN3.ERFFEL[32]>
#### p.can3.erffel[37]
<link=p.CAN3.ERFFEL[37]>
#### p.can3.erffel[38]
<link=p.CAN3.ERFFEL[38]>
#### CAN3.ERFFEL[40]
<link=p.CAN3.ERFFEL[40]>
#### can3.erffel[44]
<link=p.CAN3.ERFFEL[44]>
#### p.CAN3.ERFFEL[50]
<lang=dft>
 (rw)  [1;33m0x401db0c8[0m (0x401d8000 + 0x30c8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[52]
<link=p.CAN3.ERFFEL[52]>
#### can3.erffel[57]
<link=p.CAN3.ERFFEL[57]>
#### p.can3.erffel[65]
<link=p.CAN3.ERFFEL[65]>
#### can3.erffel[68]
<link=p.CAN3.ERFFEL[68]>
#### p.CAN3.ERFFEL[75]
<lang=dft>
 (rw)  [1;33m0x401db12c[0m (0x401d8000 + 0x312c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[88]
<lang=dft>
 (rw)  [1;33m0x401db160[0m (0x401d8000 + 0x3160)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[92]
<link=p.CAN3.ERFFEL[92]>
#### can3.erffel[95]
<link=p.CAN3.ERFFEL[95]>
#### CAN3.ERFFEL[98]
<link=p.CAN3.ERFFEL[98]>
#### p.can3.erffel[109]
<link=p.CAN3.ERFFEL[109]>
#### can3.erffel[110]
<link=p.CAN3.ERFFEL[110]>
#### can3.erffel[115]
<link=p.CAN3.ERFFEL[115]>
#### CAN3.ERFFEL[115]
<link=p.CAN3.ERFFEL[115]>
#### p.can3.erffel[119]
<link=p.CAN3.ERFFEL[119]>
#### p.can3.erffel[122]
<link=p.CAN3.ERFFEL[122]>
#### p.TMR1.COMP23
<lang=dft>
 (rw)  [1;33m0x401dc062[0m (0x401dc000 + 0x0062)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### p.tmr1.hold2
<link=p.TMR1.HOLD2>
#### TMR1.CNTR1
<link=p.TMR1.CNTR1>
#### p.tmr1.ctrl1
<link=p.TMR1.CTRL1>
#### p.TMR1.CTRL3
<lang=dft>
 (rw)  [1;33m0x401dc06c[0m (0x401dc000 + 0x006c)
Timer Channel Control Register
 (rw) (03)  [0;32mOUTMODE[0m  - [02:00] -  Output Mode
      0 - OUTMODE_0 :
         Asserted while counter is active
      0x1 - OUTMODE_1 :
         Clear OFLAG output on successful compare
      0x2 - OUTMODE_2 :
         Set OFLAG output on successful compare
      0x3 - OUTMODE_3 :
         Toggle OFLAG output on successful compare
      0x4 - OUTMODE_4 :
         Toggle OFLAG output using alternating compare registers
      0x5 - OUTMODE_5 :
         Set on compare, cleared on secondary source input edge
      0x6 - OUTMODE_6 :
         Set on compare, cleared on counter rollover
      0x7 - OUTMODE_7 :
         Enable gated clock output while counter is active
 (rw) (01)  [0;32mCOINIT[0m  - [03:03] -  Co-Channel Initialization
      0 - COINIT_0 :
         Co-channel counter/timers cannot force a re-initialization of this coun
         ter/timer
      0x1 - COINIT_1 :
         Co-channel counter/timers may force a re-initialization of this counter
         /timer
 (rw) (01)  [0;32mDIR[0m  - [04:04] -  Count Direction
      0 - DIR_0 :
         Count up.
      0x1 - DIR_1 :
         Count down.
 (rw) (01)  [0;32mLENGTH[0m  - [05:05] -  Count Length
      0 - LENGTH_0 :
         Count until roll over at $FFFF and continue from $0000.
      0x1 - LENGTH_1 :
         Count until compare, then re-initialize. If counting up, a successful c
         ompare occurs when the counter reaches a COMP1 value. If counting down,
          a successful compare occurs when the counter reaches a COMP2 value. Wh
         en output mode $4 is used, alternating values of COMP1 and COMP2 are us
         ed to generate successful comparisons. For example, the counter counts 
         until a COMP1 value is reached, re-initializes, counts until COMP2 valu
         e is reached, re-initializes, counts until COMP1 value is reached, and 
         so on.
 (rw) (01)  [0;32mONCE[0m  - [06:06] -  Count Once
      0 - ONCE_0 :
         Count repeatedly.
      0x1 - ONCE_1 :
         Count until compare and then stop. If counting up, a successful compare
          occurs when the counter reaches a COMP1 value. If counting down, a suc
         cessful compare occurs when the counter reaches a COMP2 value. When out
         put mode $4 is used, the counter re-initializes after reaching the COMP
         1 value, continues to count to the COMP2 value, and then stops.
 (rw) (02)  [0;32mSCS[0m  - [08:07] -  Secondary Count Source
      0 - SCS_0 :
         Counter 0 input pin
      0x1 - SCS_1 :
         Counter 1 input pin
      0x2 - SCS_2 :
         Counter 2 input pin
      0x3 - SCS_3 :
         Counter 3 input pin
 (rw) (04)  [0;32mPCS[0m  - [12:09] -  Primary Count Source
      0 - PCS_0 :
         Counter 0 input pin
      0x1 - PCS_1 :
         Counter 1 input pin
      0x2 - PCS_2 :
         Counter 2 input pin
      0x3 - PCS_3 :
         Counter 3 input pin
      0x4 - PCS_4 :
         Counter 0 output
      0x5 - PCS_5 :
         Counter 1 output
      0x6 - PCS_6 :
         Counter 2 output
      0x7 - PCS_7 :
         Counter 3 output
      0x8 - PCS_8 :
         IP bus clock divide by 1 prescaler
      0x9 - PCS_9 :
         IP bus clock divide by 2 prescaler
      0xA - PCS_10 :
         IP bus clock divide by 4 prescaler
      0xB - PCS_11 :
         IP bus clock divide by 8 prescaler
      0xC - PCS_12 :
         IP bus clock divide by 16 prescaler
      0xD - PCS_13 :
         IP bus clock divide by 32 prescaler
      0xE - PCS_14 :
         IP bus clock divide by 64 prescaler
      0xF - PCS_15 :
         IP bus clock divide by 128 prescaler
 (rw) (03)  [0;32mCM[0m  - [15:13] -  Count Mode
      0 - CM_0 :
         No operation
      0x1 - CM_1 :
         Count rising edges of primary sourceRising edges are counted only when 
         SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the p
         rimary count source is IP bus clock divide by 1, only rising edges are 
         counted regardless of the value of SCTRL[IPS].
      0x2 - CM_2 :
         Count rising and falling edges of primary sourceIP bus clock divide by 
         1 cannot be used as a primary count source in edge count mode.
      0x3 - CM_3 :
         Count rising edges of primary source while secondary input high active
      0x4 - CM_4 :
         Quadrature count mode, uses primary and secondary sources
      0x5 - CM_5 :
         Count rising edges of primary source; secondary source specifies direct
         ionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are
          counted when SCTRL[IPS] = 1.
      0x6 - CM_6 :
         Edge of secondary source triggers primary count until compare
      0x7 - CM_7 :
         Cascaded counter mode (up/down)The primary count source must be set to 
         one of the counter outputs.
</lang>
#### tmr1.ctrl3
<link=p.TMR1.CTRL3>
#### tmr1.sctrl0
<link=p.TMR1.SCTRL0>
#### p.tmr1.cmpld12
<link=p.TMR1.CMPLD12>
#### p.tmr1.csctrl2
<link=p.TMR1.CSCTRL2>
#### p.TMR1.DMA1
<lang=dft>
 (rw)  [1;33m0x401dc038[0m (0x401dc000 + 0x0038)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### TMR1.DMA1
<link=p.TMR1.DMA1>
#### p.TMR2
<lang=dft>
base: 0x401e0000
CAPT0           CAPT1           CAPT2           CAPT3           
CMPLD10         CMPLD11         CMPLD12         CMPLD13         
CMPLD20         CMPLD21         CMPLD22         CMPLD23         
CNTR0           CNTR1           CNTR2           CNTR3           
COMP10          COMP11          COMP12          COMP13          
COMP20          COMP21          COMP22          COMP23          
CSCTRL0         CSCTRL1         CSCTRL2         CSCTRL3         
CTRL0           CTRL1           CTRL2           CTRL3           
DMA0            DMA1            DMA2            DMA3            
ENBL            FILT0           FILT1           FILT2           
FILT3           HOLD0           HOLD1           HOLD2           
HOLD3           LOAD0           LOAD1           LOAD2           
LOAD3           SCTRL0          SCTRL1          SCTRL2          
SCTRL3          
输入 p.TMR2.{reg_name} 以查看寄存器的详细信息
type p.TMR2.{reg_name} to check details of registers
</lang>
#### TMR2.COMP23
<link=p.TMR2.COMP23>
#### p.tmr2.hold2
<link=p.TMR2.HOLD2>
#### tmr2.cntr3
<link=p.TMR2.CNTR3>
#### tmr2.sctrl1
<link=p.TMR2.SCTRL1>
#### p.TMR2.SCTRL2
<lang=dft>
 (rw)  [1;33m0x401e004e[0m (0x401e0000 + 0x004e)
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
#### p.tmr2.cmpld11
<link=p.TMR2.CMPLD11>
#### p.tmr2.cmpld20
<link=p.TMR2.CMPLD20>
#### tmr2.cmpld23
<link=p.TMR2.CMPLD23>
#### p.TMR2.DMA0
<lang=dft>
 (rw)  [1;33m0x401e0018[0m (0x401e0000 + 0x0018)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### tmr2.dma3
<link=p.TMR2.DMA3>
#### p.TMR2.ENBL
<lang=dft>
 (rw)  [1;33m0x401e001e[0m (0x401e0000 + 0x001e)
Timer Channel Enable Register
 (rw) (04)  [0;32mENBL[0m  - [03:00] -  Timer Channel Enable
      0 - ENBL_0 :
         Timer channel is disabled.
      0x1 - ENBL_1 :
         Timer channel is enabled. (default)
</lang>
#### p.TMR3.COMP10
<lang=dft>
 (rw)  [1;33m0x401e4000[0m (0x401e4000 + 0x0000)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### p.tmr3.comp12
<link=p.TMR3.COMP12>
#### p.tmr3.comp23
<link=p.TMR3.COMP23>
#### p.tmr3.hold3
<link=p.TMR3.HOLD3>
#### p.tmr3.sctrl2
<link=p.TMR3.SCTRL2>
#### tmr3.cmpld13
<link=p.TMR3.CMPLD13>
#### tmr4.comp22
<link=p.TMR4.COMP22>
#### tmr4.capt2
<link=p.TMR4.CAPT2>
#### TMR4.CAPT3
<link=p.TMR4.CAPT3>
#### p.tmr4.load2
<link=p.TMR4.LOAD2>
#### TMR4.CNTR1
<link=p.TMR4.CNTR1>
#### tmr4.ctrl3
<link=p.TMR4.CTRL3>
#### tmr4.sctrl0
<link=p.TMR4.SCTRL0>
#### TMR4.CMPLD13
<link=p.TMR4.CMPLD13>
#### p.TMR4.CSCTRL2
<lang=dft>
 (rw)  [1;33m0x401e8054[0m (0x401e8000 + 0x0054)
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
#### p.TMR4.FILT2
<lang=dft>
 (rw)  [1;33m0x401e8056[0m (0x401e8000 + 0x0056)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### TMR4.FILT3
<link=p.TMR4.FILT3>
#### tmr4.dma2
<link=p.TMR4.DMA2>
#### p.gpt1.ir
<link=p.GPT1.IR>
#### GPT1.ICR1
<link=p.GPT1.ICR1>
#### gpt2.sr
<link=p.GPT2.SR>
#### p.GPT2.IR
<lang=dft>
 (rw)  [1;33m0x401f000c[0m (0x401f0000 + 0x000c)
GPT Interrupt Register
 (rw) (01)  [0;32mOF1IE[0m  - [00:00] -  See OF3IE
 (rw) (01)  [0;32mOF2IE[0m  - [01:01] -  See OF3IE
 (rw) (01)  [0;32mOF3IE[0m  - [02:02] -  OF3IE Output Compare 3 Interrupt Enable OF2IE Output Compare 2 Interrupt Enable
  OF1IE Output Compare 1 Interrupt Enable The OFnIE bit controls the Output Comp
 are Channel n interrupt
      0 - OF3IE_0 :
         Output Compare Channel n interrupt is disabled.
      0x1 - OF3IE_1 :
         Output Compare Channel n interrupt is enabled.
 (rw) (01)  [0;32mIF1IE[0m  - [03:03] -  See IF2IE
 (rw) (01)  [0;32mIF2IE[0m  - [04:04] -  IF2IE Input capture 2 Interrupt Enable IF1IE Input capture 1 Interrupt Enable T
 he IFnIE bit controls the IFnIE Input Capture n Interrupt Enable
      0 - IF2IE_0 :
         IF2IE Input Capture n Interrupt Enable is disabled.
      0x1 - IF2IE_1 :
         IF2IE Input Capture n Interrupt Enable is enabled.
 (rw) (01)  [0;32mROVIE[0m  - [05:05] -  Rollover Interrupt Enable. The ROVIE bit controls the Rollover interrupt.
      0 - ROVIE_0 :
         Rollover interrupt is disabled.
      0x1 - ROVIE_1 :
         Rollover interrupt enabled.
</lang>
#### GPT2.IR
<link=p.GPT2.IR>
#### gpt2.ocr3
<link=p.GPT2.OCR3>
#### p.OCOTP.CTRL
<lang=dft>
 (rw)  [1;33m0x401f4000[0m (0x401f4000 + 0x0000)
OTP Controller Control Register
 (rw) (06)  [0;32mADDR[0m  - [05:00] -  ADDR
 (ro) (02)  [0;32mRSVD0[0m  - [07:06] -  RSVD0
 (ro) (01)  [0;32mBUSY[0m  - [08:08] -  BUSY
 (rw) (01)  [0;32mERROR[0m  - [09:09] -  ERROR
 (rw) (01)  [0;32mRELOAD_SHADOWS[0m  - [10:10] -  RELOAD_SHADOWS
 (rw) (01)  [0;32mCRC_TEST[0m  - [11:11] -  CRC_TEST
 (rw) (01)  [0;32mCRC_FAIL[0m  - [12:12] -  CRC_FAIL
 (ro) (03)  [0;32mRSVD1[0m  - [15:13] -  RSVD1
 (rw) (16)  [0;32mWR_UNLOCK[0m  - [31:16] -  WR_UNLOCK
      0x3E77 - KEY :
         Key needed to unlock HW_OCOTP_DATA register.
</lang>
#### p.ocotp.timing
<link=p.OCOTP.TIMING>
#### p.OCOTP.READ_CTRL
<lang=dft>
 (rw)  [1;33m0x401f4030[0m (0x401f4000 + 0x0030)
OTP Controller Write Data Register
 (rw) (01)  [0;32mREAD_FUSE[0m  - [00:00] -  READ_FUSE
 (ro) (31)  [0;32mRSVD0[0m  - [31:01] -  RSVD0
</lang>
#### OCOTP.CRC_ADDR
<link=p.OCOTP.CRC_ADDR>
#### ocotp.cfg3
<link=p.OCOTP.CFG3>
#### OCOTP.CFG3
<link=p.OCOTP.CFG3>
#### OCOTP.OTPMK4
<link=p.OCOTP.OTPMK4>
#### p.ocotp.otpmk7
<link=p.OCOTP.OTPMK7>
#### ocotp.srk2
<link=p.OCOTP.SRK2>
#### OCOTP.SRK2
<link=p.OCOTP.SRK2>
#### p.ocotp.otpmk_crc32
<link=p.OCOTP.OTPMK_CRC32>
#### p.OCOTP.GP1
<lang=dft>
 (rw)  [1;33m0x401f4660[0m (0x401f4000 + 0x0660)
Value of OTP Bank4 Word6 (General Purpose Customer Defined Info)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.SW_GP23
<link=p.OCOTP.SW_GP23>
#### p.OCOTP.MISC_CONF1
<lang=dft>
 (rw)  [1;33m0x401f46e0[0m (0x401f4000 + 0x06e0)
Value of OTP Bank5 Word6 (Misc Conf)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.SRK_REVOKE
<lang=dft>
 (rw)  [1;33m0x401f46f0[0m (0x401f4000 + 0x06f0)
Value of OTP Bank5 Word7 (SRK Revoke)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.rom_patch0
<link=p.OCOTP.ROM_PATCH0>
#### OCOTP.ROM_PATCH3
<link=p.OCOTP.ROM_PATCH3>
#### ocotp.rom_patch5
<link=p.OCOTP.ROM_PATCH5>
#### p.IOMUXC
<lang=dft>
base: 0x401f8000
ANATOP_USB_OTG1_ID_SELECT_INPUT  ANATOP_USB_OTG2_ID_SELECT_INPUT  
CANFD_IPP_IND_CANRX_SELECT_INPUT  CCM_PMIC_READY_SELECT_INPUT  CSI_DATA02_SELECT_INPUT  
CSI_DATA03_SELECT_INPUT  CSI_DATA04_SELECT_INPUT  CSI_DATA05_SELECT_INPUT  
CSI_DATA06_SELECT_INPUT  CSI_DATA07_SELECT_INPUT  CSI_DATA08_SELECT_INPUT  
CSI_DATA09_SELECT_INPUT  CSI_HSYNC_SELECT_INPUT  CSI_PIXCLK_SELECT_INPUT  
CSI_VSYNC_SELECT_INPUT  ENET0_RXDATA_SELECT_INPUT  ENET0_TIMER_SELECT_INPUT  
ENET1_RXDATA_SELECT_INPUT  ENET2_IPG_CLK_RMII_SELECT_INPUT  ENET2_IPP_IND_MAC0_MDIO_SELECT_INPUT  
ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_0  ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1  
ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT  ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT  
ENET2_IPP_IND_MAC0_TIMER_SELECT_INPUT_0  ENET2_IPP_IND_MAC0_TXCLK_SELECT_INPUT  
ENET_IPG_CLK_RMII_SELECT_INPUT  ENET_MDIO_SELECT_INPUT  ENET_RXEN_SELECT_INPUT  
ENET_RXERR_SELECT_INPUT  ENET_TXCLK_SELECT_INPUT  FLEXCAN1_RX_SELECT_INPUT  
FLEXCAN2_RX_SELECT_INPUT  FLEXPWM1_PWMA0_SELECT_INPUT  FLEXPWM1_PWMA1_SELECT_INPUT  
FLEXPWM1_PWMA2_SELECT_INPUT  FLEXPWM1_PWMA3_SELECT_INPUT  FLEXPWM1_PWMB0_SELECT_INPUT  
FLEXPWM1_PWMB1_SELECT_INPUT  FLEXPWM1_PWMB2_SELECT_INPUT  FLEXPWM1_PWMB3_SELECT_INPUT  
FLEXPWM2_PWMA0_SELECT_INPUT  FLEXPWM2_PWMA1_SELECT_INPUT  FLEXPWM2_PWMA2_SELECT_INPUT  
FLEXPWM2_PWMA3_SELECT_INPUT  FLEXPWM2_PWMB0_SELECT_INPUT  FLEXPWM2_PWMB1_SELECT_INPUT  
FLEXPWM2_PWMB2_SELECT_INPUT  FLEXPWM2_PWMB3_SELECT_INPUT  FLEXPWM4_PWMA0_SELECT_INPUT  
FLEXPWM4_PWMA1_SELECT_INPUT  FLEXPWM4_PWMA2_SELECT_INPUT  FLEXPWM4_PWMA3_SELECT_INPUT  
FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT  FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT  
FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT  FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT  
FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT  FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT  
FLEXSPI2_IPP_IND_IO_FB_BIT1_SELECT_INPUT  FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT  
FLEXSPI2_IPP_IND_IO_FB_BIT3_SELECT_INPUT  FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT  
FLEXSPI2_IPP_IND_SCK_FB_SELECT_INPUT  FLEXSPIA_DATA0_SELECT_INPUT  
FLEXSPIA_DATA1_SELECT_INPUT  FLEXSPIA_DATA2_SELECT_INPUT  FLEXSPIA_DATA3_SELECT_INPUT  
FLEXSPIA_DQS_SELECT_INPUT  FLEXSPIA_SCK_SELECT_INPUT  FLEXSPIB_DATA0_SELECT_INPUT  
FLEXSPIB_DATA1_SELECT_INPUT  FLEXSPIB_DATA2_SELECT_INPUT  FLEXSPIB_DATA3_SELECT_INPUT  
GPT1_IPP_IND_CAPIN1_SELECT_INPUT  GPT1_IPP_IND_CAPIN2_SELECT_INPUT  
GPT1_IPP_IND_CLKIN_SELECT_INPUT  GPT2_IPP_IND_CAPIN1_SELECT_INPUT  
GPT2_IPP_IND_CAPIN2_SELECT_INPUT  GPT2_IPP_IND_CLKIN_SELECT_INPUT  
LPI2C1_SCL_SELECT_INPUT  LPI2C1_SDA_SELECT_INPUT  LPI2C2_SCL_SELECT_INPUT  
LPI2C2_SDA_SELECT_INPUT  LPI2C3_SCL_SELECT_INPUT  LPI2C3_SDA_SELECT_INPUT  
LPI2C4_SCL_SELECT_INPUT  LPI2C4_SDA_SELECT_INPUT  LPSPI1_PCS0_SELECT_INPUT  
LPSPI1_SCK_SELECT_INPUT  LPSPI1_SDI_SELECT_INPUT  LPSPI1_SDO_SELECT_INPUT  
LPSPI2_PCS0_SELECT_INPUT  LPSPI2_SCK_SELECT_INPUT  LPSPI2_SDI_SELECT_INPUT  
LPSPI2_SDO_SELECT_INPUT  LPSPI3_PCS0_SELECT_INPUT  LPSPI3_SCK_SELECT_INPUT  
LPSPI3_SDI_SELECT_INPUT  LPSPI3_SDO_SELECT_INPUT  LPSPI4_PCS0_SELECT_INPUT  
LPSPI4_SCK_SELECT_INPUT  LPSPI4_SDI_SELECT_INPUT  LPSPI4_SDO_SELECT_INPUT  
LPUART2_RX_SELECT_INPUT  LPUART2_TX_SELECT_INPUT  LPUART3_CTS_B_SELECT_INPUT  
LPUART3_RX_SELECT_INPUT  LPUART3_TX_SELECT_INPUT  LPUART4_RX_SELECT_INPUT  
LPUART4_TX_SELECT_INPUT  LPUART5_RX_SELECT_INPUT  LPUART5_TX_SELECT_INPUT  
LPUART6_RX_SELECT_INPUT  LPUART6_TX_SELECT_INPUT  LPUART7_RX_SELECT_INPUT  
LPUART7_TX_SELECT_INPUT  LPUART8_RX_SELECT_INPUT  LPUART8_TX_SELECT_INPUT  
NMI_SELECT_INPUT  QTIMER2_TIMER0_SELECT_INPUT  QTIMER2_TIMER1_SELECT_INPUT  
QTIMER2_TIMER2_SELECT_INPUT  QTIMER2_TIMER3_SELECT_INPUT  QTIMER3_TIMER0_SELECT_INPUT  
QTIMER3_TIMER1_SELECT_INPUT  QTIMER3_TIMER2_SELECT_INPUT  QTIMER3_TIMER3_SELECT_INPUT  
SAI1_MCLK2_SELECT_INPUT  SAI1_RX_BCLK_SELECT_INPUT  SAI1_RX_DATA0_SELECT_INPUT  
SAI1_RX_DATA1_SELECT_INPUT  SAI1_RX_DATA2_SELECT_INPUT  SAI1_RX_DATA3_SELECT_INPUT  
SAI1_RX_SYNC_SELECT_INPUT  SAI1_TX_BCLK_SELECT_INPUT  SAI1_TX_SYNC_SELECT_INPUT  
SAI2_MCLK2_SELECT_INPUT  SAI2_RX_BCLK_SELECT_INPUT  SAI2_RX_DATA0_SELECT_INPUT  
SAI2_RX_SYNC_SELECT_INPUT  SAI2_TX_BCLK_SELECT_INPUT  SAI2_TX_SYNC_SELECT_INPUT  
SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2  SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT  
SAI3_IPP_IND_SAI_RXDATA_SELECT_INPUT_0  SAI3_IPP_IND_SAI_RXSYNC_SELECT_INPUT  
SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT  SAI3_IPP_IND_SAI_TXSYNC_SELECT_INPUT  
SEMC_I_IPP_IND_DQS4_SELECT_INPUT  SPDIF_IN_SELECT_INPUT  SW_MUX_CTL_PAD_GPIO_AD_B0_00  
SW_MUX_CTL_PAD_GPIO_AD_B0_01  SW_MUX_CTL_PAD_GPIO_AD_B0_02  SW_MUX_CTL_PAD_GPIO_AD_B0_03  
SW_MUX_CTL_PAD_GPIO_AD_B0_04  SW_MUX_CTL_PAD_GPIO_AD_B0_05  SW_MUX_CTL_PAD_GPIO_AD_B0_06  
SW_MUX_CTL_PAD_GPIO_AD_B0_07  SW_MUX_CTL_PAD_GPIO_AD_B0_08  SW_MUX_CTL_PAD_GPIO_AD_B0_09  
SW_MUX_CTL_PAD_GPIO_AD_B0_10  SW_MUX_CTL_PAD_GPIO_AD_B0_11  SW_MUX_CTL_PAD_GPIO_AD_B0_12  
SW_MUX_CTL_PAD_GPIO_AD_B0_13  SW_MUX_CTL_PAD_GPIO_AD_B0_14  SW_MUX_CTL_PAD_GPIO_AD_B0_15  
SW_MUX_CTL_PAD_GPIO_AD_B1_00  SW_MUX_CTL_PAD_GPIO_AD_B1_01  SW_MUX_CTL_PAD_GPIO_AD_B1_02  
SW_MUX_CTL_PAD_GPIO_AD_B1_03  SW_MUX_CTL_PAD_GPIO_AD_B1_04  SW_MUX_CTL_PAD_GPIO_AD_B1_05  
SW_MUX_CTL_PAD_GPIO_AD_B1_06  SW_MUX_CTL_PAD_GPIO_AD_B1_07  SW_MUX_CTL_PAD_GPIO_AD_B1_08  
SW_MUX_CTL_PAD_GPIO_AD_B1_09  SW_MUX_CTL_PAD_GPIO_AD_B1_10  SW_MUX_CTL_PAD_GPIO_AD_B1_11  
SW_MUX_CTL_PAD_GPIO_AD_B1_12  SW_MUX_CTL_PAD_GPIO_AD_B1_13  SW_MUX_CTL_PAD_GPIO_AD_B1_14  
SW_MUX_CTL_PAD_GPIO_AD_B1_15  SW_MUX_CTL_PAD_GPIO_B0_00  SW_MUX_CTL_PAD_GPIO_B0_01  
SW_MUX_CTL_PAD_GPIO_B0_02  SW_MUX_CTL_PAD_GPIO_B0_03  SW_MUX_CTL_PAD_GPIO_B0_04  
SW_MUX_CTL_PAD_GPIO_B0_05  SW_MUX_CTL_PAD_GPIO_B0_06  SW_MUX_CTL_PAD_GPIO_B0_07  
SW_MUX_CTL_PAD_GPIO_B0_08  SW_MUX_CTL_PAD_GPIO_B0_09  SW_MUX_CTL_PAD_GPIO_B0_10  
SW_MUX_CTL_PAD_GPIO_B0_11  SW_MUX_CTL_PAD_GPIO_B0_12  SW_MUX_CTL_PAD_GPIO_B0_13  
SW_MUX_CTL_PAD_GPIO_B0_14  SW_MUX_CTL_PAD_GPIO_B0_15  SW_MUX_CTL_PAD_GPIO_B1_00  
SW_MUX_CTL_PAD_GPIO_B1_01  SW_MUX_CTL_PAD_GPIO_B1_02  SW_MUX_CTL_PAD_GPIO_B1_03  
SW_MUX_CTL_PAD_GPIO_B1_04  SW_MUX_CTL_PAD_GPIO_B1_05  SW_MUX_CTL_PAD_GPIO_B1_06  
SW_MUX_CTL_PAD_GPIO_B1_07  SW_MUX_CTL_PAD_GPIO_B1_08  SW_MUX_CTL_PAD_GPIO_B1_09  
SW_MUX_CTL_PAD_GPIO_B1_10  SW_MUX_CTL_PAD_GPIO_B1_11  SW_MUX_CTL_PAD_GPIO_B1_12  
SW_MUX_CTL_PAD_GPIO_B1_13  SW_MUX_CTL_PAD_GPIO_B1_14  SW_MUX_CTL_PAD_GPIO_B1_15  
SW_MUX_CTL_PAD_GPIO_EMC_00  SW_MUX_CTL_PAD_GPIO_EMC_01  SW_MUX_CTL_PAD_GPIO_EMC_02  
SW_MUX_CTL_PAD_GPIO_EMC_03  SW_MUX_CTL_PAD_GPIO_EMC_04  SW_MUX_CTL_PAD_GPIO_EMC_05  
SW_MUX_CTL_PAD_GPIO_EMC_06  SW_MUX_CTL_PAD_GPIO_EMC_07  SW_MUX_CTL_PAD_GPIO_EMC_08  
SW_MUX_CTL_PAD_GPIO_EMC_09  SW_MUX_CTL_PAD_GPIO_EMC_10  SW_MUX_CTL_PAD_GPIO_EMC_11  
SW_MUX_CTL_PAD_GPIO_EMC_12  SW_MUX_CTL_PAD_GPIO_EMC_13  SW_MUX_CTL_PAD_GPIO_EMC_14  
SW_MUX_CTL_PAD_GPIO_EMC_15  SW_MUX_CTL_PAD_GPIO_EMC_16  SW_MUX_CTL_PAD_GPIO_EMC_17  
SW_MUX_CTL_PAD_GPIO_EMC_18  SW_MUX_CTL_PAD_GPIO_EMC_19  SW_MUX_CTL_PAD_GPIO_EMC_20  
SW_MUX_CTL_PAD_GPIO_EMC_21  SW_MUX_CTL_PAD_GPIO_EMC_22  SW_MUX_CTL_PAD_GPIO_EMC_23  
SW_MUX_CTL_PAD_GPIO_EMC_24  SW_MUX_CTL_PAD_GPIO_EMC_25  SW_MUX_CTL_PAD_GPIO_EMC_26  
SW_MUX_CTL_PAD_GPIO_EMC_27  SW_MUX_CTL_PAD_GPIO_EMC_28  SW_MUX_CTL_PAD_GPIO_EMC_29  
SW_MUX_CTL_PAD_GPIO_EMC_30  SW_MUX_CTL_PAD_GPIO_EMC_31  SW_MUX_CTL_PAD_GPIO_EMC_32  
SW_MUX_CTL_PAD_GPIO_EMC_33  SW_MUX_CTL_PAD_GPIO_EMC_34  SW_MUX_CTL_PAD_GPIO_EMC_35  
SW_MUX_CTL_PAD_GPIO_EMC_36  SW_MUX_CTL_PAD_GPIO_EMC_37  SW_MUX_CTL_PAD_GPIO_EMC_38  
SW_MUX_CTL_PAD_GPIO_EMC_39  SW_MUX_CTL_PAD_GPIO_EMC_40  SW_MUX_CTL_PAD_GPIO_EMC_41  
SW_MUX_CTL_PAD_GPIO_SD_B0_00  SW_MUX_CTL_PAD_GPIO_SD_B0_01  SW_MUX_CTL_PAD_GPIO_SD_B0_02  
SW_MUX_CTL_PAD_GPIO_SD_B0_03  SW_MUX_CTL_PAD_GPIO_SD_B0_04  SW_MUX_CTL_PAD_GPIO_SD_B0_05  
SW_MUX_CTL_PAD_GPIO_SD_B1_00  SW_MUX_CTL_PAD_GPIO_SD_B1_01  SW_MUX_CTL_PAD_GPIO_SD_B1_02  
SW_MUX_CTL_PAD_GPIO_SD_B1_03  SW_MUX_CTL_PAD_GPIO_SD_B1_04  SW_MUX_CTL_PAD_GPIO_SD_B1_05  
SW_MUX_CTL_PAD_GPIO_SD_B1_06  SW_MUX_CTL_PAD_GPIO_SD_B1_07  SW_MUX_CTL_PAD_GPIO_SD_B1_08  
SW_MUX_CTL_PAD_GPIO_SD_B1_09  SW_MUX_CTL_PAD_GPIO_SD_B1_10  SW_MUX_CTL_PAD_GPIO_SD_B1_11  
SW_MUX_CTL_PAD_GPIO_SPI_B0_00  SW_MUX_CTL_PAD_GPIO_SPI_B0_01  SW_MUX_CTL_PAD_GPIO_SPI_B0_02  
SW_MUX_CTL_PAD_GPIO_SPI_B0_03  SW_MUX_CTL_PAD_GPIO_SPI_B0_04  SW_MUX_CTL_PAD_GPIO_SPI_B0_05  
SW_MUX_CTL_PAD_GPIO_SPI_B0_06  SW_MUX_CTL_PAD_GPIO_SPI_B0_07  SW_MUX_CTL_PAD_GPIO_SPI_B0_08  
SW_MUX_CTL_PAD_GPIO_SPI_B0_09  SW_MUX_CTL_PAD_GPIO_SPI_B0_10  SW_MUX_CTL_PAD_GPIO_SPI_B0_11  
SW_MUX_CTL_PAD_GPIO_SPI_B0_12  SW_MUX_CTL_PAD_GPIO_SPI_B0_13  SW_MUX_CTL_PAD_GPIO_SPI_B1_00  
SW_MUX_CTL_PAD_GPIO_SPI_B1_01  SW_MUX_CTL_PAD_GPIO_SPI_B1_02  SW_MUX_CTL_PAD_GPIO_SPI_B1_03  
SW_MUX_CTL_PAD_GPIO_SPI_B1_04  SW_MUX_CTL_PAD_GPIO_SPI_B1_05  SW_MUX_CTL_PAD_GPIO_SPI_B1_06  
SW_MUX_CTL_PAD_GPIO_SPI_B1_07  SW_PAD_CTL_PAD_GPIO_AD_B0_00  SW_PAD_CTL_PAD_GPIO_AD_B0_01  
SW_PAD_CTL_PAD_GPIO_AD_B0_02  SW_PAD_CTL_PAD_GPIO_AD_B0_03  SW_PAD_CTL_PAD_GPIO_AD_B0_04  
SW_PAD_CTL_PAD_GPIO_AD_B0_05  SW_PAD_CTL_PAD_GPIO_AD_B0_06  SW_PAD_CTL_PAD_GPIO_AD_B0_07  
SW_PAD_CTL_PAD_GPIO_AD_B0_08  SW_PAD_CTL_PAD_GPIO_AD_B0_09  SW_PAD_CTL_PAD_GPIO_AD_B0_10  
SW_PAD_CTL_PAD_GPIO_AD_B0_11  SW_PAD_CTL_PAD_GPIO_AD_B0_12  SW_PAD_CTL_PAD_GPIO_AD_B0_13  
SW_PAD_CTL_PAD_GPIO_AD_B0_14  SW_PAD_CTL_PAD_GPIO_AD_B0_15  SW_PAD_CTL_PAD_GPIO_AD_B1_00  
SW_PAD_CTL_PAD_GPIO_AD_B1_01  SW_PAD_CTL_PAD_GPIO_AD_B1_02  SW_PAD_CTL_PAD_GPIO_AD_B1_03  
SW_PAD_CTL_PAD_GPIO_AD_B1_04  SW_PAD_CTL_PAD_GPIO_AD_B1_05  SW_PAD_CTL_PAD_GPIO_AD_B1_06  
SW_PAD_CTL_PAD_GPIO_AD_B1_07  SW_PAD_CTL_PAD_GPIO_AD_B1_08  SW_PAD_CTL_PAD_GPIO_AD_B1_09  
SW_PAD_CTL_PAD_GPIO_AD_B1_10  SW_PAD_CTL_PAD_GPIO_AD_B1_11  SW_PAD_CTL_PAD_GPIO_AD_B1_12  
SW_PAD_CTL_PAD_GPIO_AD_B1_13  SW_PAD_CTL_PAD_GPIO_AD_B1_14  SW_PAD_CTL_PAD_GPIO_AD_B1_15  
SW_PAD_CTL_PAD_GPIO_B0_00  SW_PAD_CTL_PAD_GPIO_B0_01  SW_PAD_CTL_PAD_GPIO_B0_02  
SW_PAD_CTL_PAD_GPIO_B0_03  SW_PAD_CTL_PAD_GPIO_B0_04  SW_PAD_CTL_PAD_GPIO_B0_05  
SW_PAD_CTL_PAD_GPIO_B0_06  SW_PAD_CTL_PAD_GPIO_B0_07  SW_PAD_CTL_PAD_GPIO_B0_08  
SW_PAD_CTL_PAD_GPIO_B0_09  SW_PAD_CTL_PAD_GPIO_B0_10  SW_PAD_CTL_PAD_GPIO_B0_11  
SW_PAD_CTL_PAD_GPIO_B0_12  SW_PAD_CTL_PAD_GPIO_B0_13  SW_PAD_CTL_PAD_GPIO_B0_14  
SW_PAD_CTL_PAD_GPIO_B0_15  SW_PAD_CTL_PAD_GPIO_B1_00  SW_PAD_CTL_PAD_GPIO_B1_01  
SW_PAD_CTL_PAD_GPIO_B1_02  SW_PAD_CTL_PAD_GPIO_B1_03  SW_PAD_CTL_PAD_GPIO_B1_04  
SW_PAD_CTL_PAD_GPIO_B1_05  SW_PAD_CTL_PAD_GPIO_B1_06  SW_PAD_CTL_PAD_GPIO_B1_07  
SW_PAD_CTL_PAD_GPIO_B1_08  SW_PAD_CTL_PAD_GPIO_B1_09  SW_PAD_CTL_PAD_GPIO_B1_10  
SW_PAD_CTL_PAD_GPIO_B1_11  SW_PAD_CTL_PAD_GPIO_B1_12  SW_PAD_CTL_PAD_GPIO_B1_13  
SW_PAD_CTL_PAD_GPIO_B1_14  SW_PAD_CTL_PAD_GPIO_B1_15  SW_PAD_CTL_PAD_GPIO_EMC_00  
SW_PAD_CTL_PAD_GPIO_EMC_01  SW_PAD_CTL_PAD_GPIO_EMC_02  SW_PAD_CTL_PAD_GPIO_EMC_03  
SW_PAD_CTL_PAD_GPIO_EMC_04  SW_PAD_CTL_PAD_GPIO_EMC_05  SW_PAD_CTL_PAD_GPIO_EMC_06  
SW_PAD_CTL_PAD_GPIO_EMC_07  SW_PAD_CTL_PAD_GPIO_EMC_08  SW_PAD_CTL_PAD_GPIO_EMC_09  
SW_PAD_CTL_PAD_GPIO_EMC_10  SW_PAD_CTL_PAD_GPIO_EMC_11  SW_PAD_CTL_PAD_GPIO_EMC_12  
SW_PAD_CTL_PAD_GPIO_EMC_13  SW_PAD_CTL_PAD_GPIO_EMC_14  SW_PAD_CTL_PAD_GPIO_EMC_15  
SW_PAD_CTL_PAD_GPIO_EMC_16  SW_PAD_CTL_PAD_GPIO_EMC_17  SW_PAD_CTL_PAD_GPIO_EMC_18  
SW_PAD_CTL_PAD_GPIO_EMC_19  SW_PAD_CTL_PAD_GPIO_EMC_20  SW_PAD_CTL_PAD_GPIO_EMC_21  
SW_PAD_CTL_PAD_GPIO_EMC_22  SW_PAD_CTL_PAD_GPIO_EMC_23  SW_PAD_CTL_PAD_GPIO_EMC_24  
SW_PAD_CTL_PAD_GPIO_EMC_25  SW_PAD_CTL_PAD_GPIO_EMC_26  SW_PAD_CTL_PAD_GPIO_EMC_27  
SW_PAD_CTL_PAD_GPIO_EMC_28  SW_PAD_CTL_PAD_GPIO_EMC_29  SW_PAD_CTL_PAD_GPIO_EMC_30  
SW_PAD_CTL_PAD_GPIO_EMC_31  SW_PAD_CTL_PAD_GPIO_EMC_32  SW_PAD_CTL_PAD_GPIO_EMC_33  
SW_PAD_CTL_PAD_GPIO_EMC_34  SW_PAD_CTL_PAD_GPIO_EMC_35  SW_PAD_CTL_PAD_GPIO_EMC_36  
SW_PAD_CTL_PAD_GPIO_EMC_37  SW_PAD_CTL_PAD_GPIO_EMC_38  SW_PAD_CTL_PAD_GPIO_EMC_39  
SW_PAD_CTL_PAD_GPIO_EMC_40  SW_PAD_CTL_PAD_GPIO_EMC_41  SW_PAD_CTL_PAD_GPIO_SD_B0_00  
SW_PAD_CTL_PAD_GPIO_SD_B0_01  SW_PAD_CTL_PAD_GPIO_SD_B0_02  SW_PAD_CTL_PAD_GPIO_SD_B0_03  
SW_PAD_CTL_PAD_GPIO_SD_B0_04  SW_PAD_CTL_PAD_GPIO_SD_B0_05  SW_PAD_CTL_PAD_GPIO_SD_B1_00  
SW_PAD_CTL_PAD_GPIO_SD_B1_01  SW_PAD_CTL_PAD_GPIO_SD_B1_02  SW_PAD_CTL_PAD_GPIO_SD_B1_03  
SW_PAD_CTL_PAD_GPIO_SD_B1_04  SW_PAD_CTL_PAD_GPIO_SD_B1_05  SW_PAD_CTL_PAD_GPIO_SD_B1_06  
SW_PAD_CTL_PAD_GPIO_SD_B1_07  SW_PAD_CTL_PAD_GPIO_SD_B1_08  SW_PAD_CTL_PAD_GPIO_SD_B1_09  
SW_PAD_CTL_PAD_GPIO_SD_B1_10  SW_PAD_CTL_PAD_GPIO_SD_B1_11  SW_PAD_CTL_PAD_GPIO_SPI_B0_00  
SW_PAD_CTL_PAD_GPIO_SPI_B0_01  SW_PAD_CTL_PAD_GPIO_SPI_B0_02  SW_PAD_CTL_PAD_GPIO_SPI_B0_03  
SW_PAD_CTL_PAD_GPIO_SPI_B0_04  SW_PAD_CTL_PAD_GPIO_SPI_B0_05  SW_PAD_CTL_PAD_GPIO_SPI_B0_06  
SW_PAD_CTL_PAD_GPIO_SPI_B0_07  SW_PAD_CTL_PAD_GPIO_SPI_B0_08  SW_PAD_CTL_PAD_GPIO_SPI_B0_09  
SW_PAD_CTL_PAD_GPIO_SPI_B0_10  SW_PAD_CTL_PAD_GPIO_SPI_B0_11  SW_PAD_CTL_PAD_GPIO_SPI_B0_12  
SW_PAD_CTL_PAD_GPIO_SPI_B0_13  SW_PAD_CTL_PAD_GPIO_SPI_B1_00  SW_PAD_CTL_PAD_GPIO_SPI_B1_01  
SW_PAD_CTL_PAD_GPIO_SPI_B1_02  SW_PAD_CTL_PAD_GPIO_SPI_B1_03  SW_PAD_CTL_PAD_GPIO_SPI_B1_04  
SW_PAD_CTL_PAD_GPIO_SPI_B1_05  SW_PAD_CTL_PAD_GPIO_SPI_B1_06  SW_PAD_CTL_PAD_GPIO_SPI_B1_07  
USB_OTG1_OC_SELECT_INPUT  USB_OTG2_OC_SELECT_INPUT  USDHC1_CD_B_SELECT_INPUT  
USDHC1_WP_SELECT_INPUT  USDHC2_CD_B_SELECT_INPUT  USDHC2_CLK_SELECT_INPUT  
USDHC2_CMD_SELECT_INPUT  USDHC2_DATA0_SELECT_INPUT  USDHC2_DATA1_SELECT_INPUT  
USDHC2_DATA2_SELECT_INPUT  USDHC2_DATA3_SELECT_INPUT  USDHC2_DATA4_SELECT_INPUT  
USDHC2_DATA5_SELECT_INPUT  USDHC2_DATA6_SELECT_INPUT  USDHC2_DATA7_SELECT_INPUT  
USDHC2_WP_SELECT_INPUT  XBAR1_IN02_SELECT_INPUT  XBAR1_IN03_SELECT_INPUT  
XBAR1_IN04_SELECT_INPUT  XBAR1_IN05_SELECT_INPUT  XBAR1_IN06_SELECT_INPUT  
XBAR1_IN07_SELECT_INPUT  XBAR1_IN08_SELECT_INPUT  XBAR1_IN09_SELECT_INPUT  
XBAR1_IN14_SELECT_INPUT  XBAR1_IN15_SELECT_INPUT  XBAR1_IN16_SELECT_INPUT  
XBAR1_IN17_SELECT_INPUT  XBAR1_IN18_SELECT_INPUT  XBAR1_IN19_SELECT_INPUT  
XBAR1_IN20_SELECT_INPUT  XBAR1_IN21_SELECT_INPUT  XBAR1_IN22_SELECT_INPUT  
XBAR1_IN23_SELECT_INPUT  XBAR1_IN24_SELECT_INPUT  XBAR1_IN25_SELECT_INPUT  
输入 p.IOMUXC.{reg_name} 以查看寄存器的详细信息
type p.IOMUXC.{reg_name} to check details of registers
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_01
<lang=dft>
 (rw)  [1;33m0x401f8018[0m (0x401f8000 + 0x0018)
SW_MUX_CTL_PAD_GPIO_EMC_01 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA01 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMB00 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPSPI2_PCS0 of instance: lpspi2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_IN03 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO01 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO01 of instance: gpio4
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_01
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_05>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_09>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_16
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_16>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_16
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_16>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_27
<lang=dft>
 (rw)  [1;33m0x401f8080[0m (0x401f8000 + 0x0080)
SW_MUX_CTL_PAD_GPIO_EMC_27 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_CKE of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMA02 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART5_RTS_B of instance: lpuart5
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPSPI1_SCK of instance: lpspi1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO13 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO27 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_A_DATA01 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_27
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_30
<lang=dft>
 (rw)  [1;33m0x401f808c[0m (0x401f8000 + 0x008c)
SW_MUX_CTL_PAD_GPIO_EMC_30 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA08 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM3_PWMB00 of instance: flexpwm3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART6_CTS_B of instance: lpuart6
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPSPI1_PCS0 of instance: lpspi1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA23 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO30 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TDATA00 of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_30
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_33
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_33>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_38
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_38>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_38
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_38>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_01>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_06>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_15>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_01
<lang=dft>
 (rw)  [1;33m0x401f8100[0m (0x401f8000 + 0x0100)
SW_MUX_CTL_PAD_GPIO_AD_B1_01 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USB_OTG1_PWR of instance: usb
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER3_TIMER1 of instance: qtimer3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART2_RTS_B of instance: lpuart2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPI2C1_SDA of instance: lpi2c1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CCM_PMIC_READY of instance: ccm
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO17 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC1_VSELECT of instance: usdhc1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_COL07 of instance: kpp
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_1588_EVENT0_IN of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO01 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_01
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_05>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_09>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_12
<lang=dft>
 (rw)  [1;33m0x401f812c[0m (0x401f8000 + 0x012c)
SW_MUX_CTL_PAD_GPIO_AD_B1_12 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPIA_DATA01 of instance: flexspi
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: ACMP_OUT00 of instance: acmp
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPSPI3_PCS0 of instance: lpspi3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_RX_DATA00 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA05 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO28 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_DATA4 of instance: usdhc2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_ROW01 of instance: kpp
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_1588_EVENT2_OUT of instance: enet
         2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO12 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_12
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_04>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_09
<lang=dft>
 (rw)  [1;33m0x401f8160[0m (0x401f8000 + 0x0160)
SW_MUX_CTL_PAD_GPIO_B0_09 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA05 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER4_TIMER0 of instance: qtimer4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXPWM2_PWMB01 of instance: flexpwm2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPUART3_RX of instance: lpuart3
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO09 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO09 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SRC_BOOT_CFG05 of instance: src
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RDATA02 of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_09
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_03>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_07>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_14>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_01>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_05>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_08>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_15>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_16
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_16>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_17
<lang=dft>
 (rw)  [1;33m0x401f8248[0m (0x401f8000 + 0x0248)
SW_PAD_CTL_PAD_GPIO_EMC_17 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_25
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_25>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_27
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_27>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_29
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_29>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_30
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_30>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_31
<lang=dft>
 (rw)  [1;33m0x401f8280[0m (0x401f8000 + 0x0280)
SW_PAD_CTL_PAD_GPIO_EMC_31 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_emc_33
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_33>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_40
<lang=dft>
 (rw)  [1;33m0x401f82a4[0m (0x401f8000 + 0x02a4)
SW_PAD_CTL_PAD_GPIO_EMC_40 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_09>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_10>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_15>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_00>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_02
<lang=dft>
 (rw)  [1;33m0x401f82f4[0m (0x401f8000 + 0x02f4)
SW_PAD_CTL_PAD_GPIO_AD_B1_02 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_05>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_07>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_10>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_00>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_12
<lang=dft>
 (rw)  [1;33m0x401f835c[0m (0x401f8000 + 0x035c)
SW_PAD_CTL_PAD_GPIO_B0_12 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_b1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_05>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_06
<lang=dft>
 (rw)  [1;33m0x401f8384[0m (0x401f8000 + 0x0384)
SW_PAD_CTL_PAD_GPIO_B1_06 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_11
<lang=dft>
 (rw)  [1;33m0x401f8398[0m (0x401f8000 + 0x0398)
SW_PAD_CTL_PAD_GPIO_B1_11 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_14>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_06>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_06>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_07
<lang=dft>
 (rw)  [1;33m0x401f83e0[0m (0x401f8000 + 0x03e0)
SW_PAD_CTL_PAD_GPIO_SD_B1_07 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_10>
#### p.iomuxc.csi_data04_select_input
<link=p.IOMUXC.CSI_DATA04_SELECT_INPUT>
#### IOMUXC.CSI_DATA06_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA06_SELECT_INPUT>
#### p.IOMUXC.CSI_DATA08_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8418[0m (0x401f8000 + 0x0418)
CSI_DATA08_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_09_ALT4 :
         Selecting Pad: GPIO_AD_B1_09 for Mode: ALT4
      0x1 - GPIO_AD_B0_05_ALT4 :
         Selecting Pad: GPIO_AD_B0_05 for Mode: ALT4
</lang>
#### iomuxc.enet_ipg_clk_rmii_select_input
<link=p.IOMUXC.ENET_IPG_CLK_RMII_SELECT_INPUT>
#### iomuxc.enet0_rxdata_select_input
<link=p.IOMUXC.ENET0_RXDATA_SELECT_INPUT>
#### iomuxc.flexpwm1_pwma0_select_input
<link=p.IOMUXC.FLEXPWM1_PWMA0_SELECT_INPUT>
#### IOMUXC.FLEXPWM2_PWMA0_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMA0_SELECT_INPUT>
#### IOMUXC.FLEXPWM2_PWMA1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMA1_SELECT_INPUT>
#### p.iomuxc.flexpwm2_pwma2_select_input
<link=p.IOMUXC.FLEXPWM2_PWMA2_SELECT_INPUT>
#### IOMUXC.FLEXPWM2_PWMB1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMB1_SELECT_INPUT>
#### iomuxc.flexpwm4_pwma1_select_input
<link=p.IOMUXC.FLEXPWM4_PWMA1_SELECT_INPUT>
#### p.IOMUXC.FLEXSPIB_DATA2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84c0[0m (0x401f8000 + 0x04c0)
FLEXSPIB_DATA2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_01_ALT1 :
         Selecting Pad: GPIO_SD_B1_01 for Mode: ALT1
      0x1 - GPIO_AD_B1_05_ALT0 :
         Selecting Pad: GPIO_AD_B1_05 for Mode: ALT0
</lang>
#### p.IOMUXC.FLEXSPIB_DATA3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84c4[0m (0x401f8000 + 0x04c4)
FLEXSPIB_DATA3_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_00_ALT1 :
         Selecting Pad: GPIO_SD_B1_00 for Mode: ALT1
      0x1 - GPIO_AD_B1_04_ALT0 :
         Selecting Pad: GPIO_AD_B1_04 for Mode: ALT0
</lang>
#### iomuxc.lpi2c1_scl_select_input
<link=p.IOMUXC.LPI2C1_SCL_SELECT_INPUT>
#### iomuxc.lpi2c1_sda_select_input
<link=p.IOMUXC.LPI2C1_SDA_SELECT_INPUT>
#### p.IOMUXC.LPI2C2_SDA_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84d8[0m (0x401f8000 + 0x04d8)
LPI2C2_SDA_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_10_ALT3 :
         Selecting Pad: GPIO_SD_B1_10 for Mode: ALT3
      0x1 - GPIO_B0_05_ALT2 :
         Selecting Pad: GPIO_B0_05 for Mode: ALT2
</lang>
#### iomuxc.lpi2c3_scl_select_input
<link=p.IOMUXC.LPI2C3_SCL_SELECT_INPUT>
#### p.IOMUXC.LPSPI1_PCS0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84ec[0m (0x401f8000 + 0x04ec)
LPSPI1_PCS0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B0_01_ALT4 :
         Selecting Pad: GPIO_SD_B0_01 for Mode: ALT4
      0x1 - GPIO_EMC_30_ALT3 :
         Selecting Pad: GPIO_EMC_30 for Mode: ALT3
</lang>
#### p.IOMUXC.LPSPI1_SCK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84f0[0m (0x401f8000 + 0x04f0)
LPSPI1_SCK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_27_ALT3 :
         Selecting Pad: GPIO_EMC_27 for Mode: ALT3
      0x1 - GPIO_SD_B0_00_ALT4 :
         Selecting Pad: GPIO_SD_B0_00 for Mode: ALT4
</lang>
#### p.IOMUXC.LPSPI2_SDO_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8508[0m (0x401f8000 + 0x0508)
LPSPI2_SDO_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_08_ALT4 :
         Selecting Pad: GPIO_SD_B1_08 for Mode: ALT4
      0x1 - GPIO_EMC_02_ALT2 :
         Selecting Pad: GPIO_EMC_02 for Mode: ALT2
</lang>
#### IOMUXC.LPSPI2_SDO_SELECT_INPUT
<link=p.IOMUXC.LPSPI2_SDO_SELECT_INPUT>
#### iomuxc.lpspi4_sdo_select_input
<link=p.IOMUXC.LPSPI4_SDO_SELECT_INPUT>
#### IOMUXC.LPUART4_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART4_TX_SELECT_INPUT>
#### p.IOMUXC.QTIMER2_TIMER0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f856c[0m (0x401f8000 + 0x056c)
QTIMER2_TIMER0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_19_ALT4 :
         Selecting Pad: GPIO_EMC_19 for Mode: ALT4
      0x1 - GPIO_B0_03_ALT1 :
         Selecting Pad: GPIO_B0_03 for Mode: ALT1
</lang>
#### p.IOMUXC.QTIMER2_TIMER2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8574[0m (0x401f8000 + 0x0574)
QTIMER2_TIMER2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_21_ALT4 :
         Selecting Pad: GPIO_EMC_21 for Mode: ALT4
      0x1 - GPIO_B0_05_ALT1 :
         Selecting Pad: GPIO_B0_05 for Mode: ALT1
</lang>
#### p.IOMUXC.QTIMER3_TIMER0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f857c[0m (0x401f8000 + 0x057c)
QTIMER3_TIMER0_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_15_ALT4 :
         Selecting Pad: GPIO_EMC_15 for Mode: ALT4
      0x1 - GPIO_AD_B1_00_ALT1 :
         Selecting Pad: GPIO_AD_B1_00 for Mode: ALT1
      0x2 - GPIO_B0_06_ALT1 :
         Selecting Pad: GPIO_B0_06 for Mode: ALT1
</lang>
#### p.IOMUXC.QTIMER3_TIMER1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8580[0m (0x401f8000 + 0x0580)
QTIMER3_TIMER1_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_01_ALT1 :
         Selecting Pad: GPIO_AD_B1_01 for Mode: ALT1
      0x1 - GPIO_EMC_16_ALT4 :
         Selecting Pad: GPIO_EMC_16 for Mode: ALT4
      0x2 - GPIO_B0_07_ALT1 :
         Selecting Pad: GPIO_B0_07 for Mode: ALT1
</lang>
#### iomuxc.sai1_rx_data3_select_input
<link=p.IOMUXC.SAI1_RX_DATA3_SELECT_INPUT>
#### IOMUXC.SAI2_TX_BCLK_SELECT_INPUT
<link=p.IOMUXC.SAI2_TX_BCLK_SELECT_INPUT>
#### iomuxc.sai2_tx_sync_select_input
<link=p.IOMUXC.SAI2_TX_SYNC_SELECT_INPUT>
#### p.IOMUXC.USDHC1_CD_B_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85d4[0m (0x401f8000 + 0x05d4)
USDHC1_CD_B_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_35_ALT6 :
         Selecting Pad: GPIO_EMC_35 for Mode: ALT6
      0x1 - GPIO_AD_B1_02_ALT6 :
         Selecting Pad: GPIO_AD_B1_02 for Mode: ALT6
      0x2 - GPIO_B1_12_ALT6 :
         Selecting Pad: GPIO_B1_12 for Mode: ALT6
</lang>
#### p.IOMUXC.USDHC2_DATA0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85e8[0m (0x401f8000 + 0x05e8)
USDHC2_DATA0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_03_ALT0 :
         Selecting Pad: GPIO_SD_B1_03 for Mode: ALT0
      0x1 - GPIO_AD_B1_04_ALT6 :
         Selecting Pad:GPIO_AD_B1_04 for Mode: ALT6
</lang>
#### p.IOMUXC.USDHC2_DATA1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85ec[0m (0x401f8000 + 0x05ec)
USDHC2_DATA1_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_02_ALT0 :
         Selecting Pad: GPIO_SD_B1_02 for Mode: ALT0
      0x1 - GPIO_AD_B1_05_ALT6 :
         Selecting Pad: GPIO_AD_B1_05 for Mode: ALT6
</lang>
#### IOMUXC.USDHC2_DATA4_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA4_SELECT_INPUT>
#### p.iomuxc.xbar1_in05_select_input
<link=p.IOMUXC.XBAR1_IN05_SELECT_INPUT>
#### iomuxc.xbar1_in09_select_input
<link=p.IOMUXC.XBAR1_IN09_SELECT_INPUT>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_00>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_03>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_07
<lang=dft>
 (rw)  [1;33m0x401f8678[0m (0x401f8000 + 0x0678)
SW_MUX_CTL_PAD_GPIO_SPI_B0_07 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_B_DATA01 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_07
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_04>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_01
<lang=dft>
 (rw)  [1;33m0x401f86b8[0m (0x401f8000 + 0x06b8)
SW_PAD_CTL_PAD_GPIO_SPI_B0_01 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_03>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_07>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_12
<lang=dft>
 (rw)  [1;33m0x401f86e4[0m (0x401f8000 + 0x06e4)
SW_PAD_CTL_PAD_GPIO_SPI_B0_12 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_00>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_06
<lang=dft>
 (rw)  [1;33m0x401f8704[0m (0x401f8000 + 0x0704)
SW_PAD_CTL_PAD_GPIO_SPI_B1_06 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_06>
#### p.IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1
<lang=dft>
 (rw)  [1;33m0x401f8718[0m (0x401f8000 + 0x0718)
ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1 DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_36_ALT8 :
         Selecting Pad: GPIO_EMC_36 for Mode: ALT8
      0x1 - GPIO_SD_B0_04_ALT8 :
         Selecting Pad: GPIO_SD_B0_04 for Mode: ALT8
      0x2 - GPIO_B1_02_ALT8 :
         Selecting Pad: GPIO_B1_02 for Mode: ALT8
</lang>
#### p.iomuxc.flexspi2_ipp_ind_io_fa_bit2_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT>
#### p.iomuxc.flexspi2_ipp_ind_sck_fa_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT>
#### IOMUXC.FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT>
#### p.IOMUXC.SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8774[0m (0x401f8000 + 0x0774)
SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_35_ALT3 :
         Selecting Pad: GPIO_EMC_35 for Mode: ALT3
      0x1 - GPIO_SD_B1_06_ALT8 :
         Selecting Pad: GPIO_SD_B1_06 for Mode: ALT8
</lang>
#### p.iomuxc.sai3_ipp_ind_sai_rxsync_select_input
<link=p.IOMUXC.SAI3_IPP_IND_SAI_RXSYNC_SELECT_INPUT>
#### IOMUXC.SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT
<link=p.IOMUXC.SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT>
#### iomuxc.sai3_ipp_ind_sai_txsync_select_input
<link=p.IOMUXC.SAI3_IPP_IND_SAI_TXSYNC_SELECT_INPUT>
#### p.kpp.kpcr
<link=p.KPP.KPCR>
#### KPP.KPCR
<link=p.KPP.KPCR>
#### p.KPP.KPSR
<lang=dft>
 (rw)  [1;33m0x401fc002[0m (0x401fc000 + 0x0002)
Keypad Status Register
 (rw) (01)  [0;32mKPKD[0m  - [00:00] -  Keypad Key Depress
      0 - KPKD_0 :
         No key presses detected
      0x1 - KPKD_1 :
         A key has been depressed
 (rw) (01)  [0;32mKPKR[0m  - [01:01] -  Keypad Key Release
      0 - KPKR_0 :
         No key release detected
      0x1 - KPKR_1 :
         All keys have been released
 (rw) (01)  [0;32mKDSC[0m  - [02:02] -  Key Depress Synchronizer Clear
      0 - KDSC_0 :
         No effect
      0x1 - KDSC_1 :
         Set bits that clear the keypad depress synchronizer chain
 (rw) (01)  [0;32mKRSS[0m  - [03:03] -  Key Release Synchronizer Set
      0 - KRSS_0 :
         No effect
      0x1 - KRSS_1 :
         Set bits which sets keypad release synchronizer chain
 (rw) (01)  [0;32mKDIE[0m  - [08:08] -  Keypad Key Depress Interrupt Enable
      0 - KDIE_0 :
         No interrupt request is generated when KPKD is set.
      0x1 - KDIE_1 :
         An interrupt request is generated when KPKD is set.
 (rw) (01)  [0;32mKRIE[0m  - [09:09] -  Keypad Release Interrupt Enable
      0 - KRIE_0 :
         No interrupt request is generated when KPKR is set.
      0x1 - KRIE_1 :
         An interrupt request is generated when KPKR is set.
</lang>
#### p.FLEXSPI.MCR1
<lang=dft>
 (rw)  [1;33m0x402a8004[0m (0x402a8000 + 0x0004)
Module Control Register 1
 (rw) (16)  [0;32mAHBBUSWAIT[0m  - [15:00] -  AHB Read/Write access to Serial Flash Memory space will timeout if not data rec
 eived from Flash or data not transmited after AHBBUSWAIT * 1024 ahb clock cycle
 s, AHB Bus will get an error response
 (rw) (16)  [0;32mSEQWAIT[0m  - [31:16] -  Command Sequence Execution will timeout and abort after SEQWAIT * 1024 Serial R
 oot Clock cycles
</lang>
#### FLEXSPI.MCR1
<link=p.FLEXSPI.MCR1>
#### flexspi.inten
<link=p.FLEXSPI.INTEN>
#### p.flexspi.ahbrxbuf2cr0
<link=p.FLEXSPI.AHBRXBUF2CR0>
#### flexspi.ahbrxbuf3cr0
<link=p.FLEXSPI.AHBRXBUF3CR0>
#### p.flexspi.flsha2cr0
<link=p.FLEXSPI.FLSHA2CR0>
#### FLEXSPI.FLSHCR1B2
<link=p.FLEXSPI.FLSHCR1B2>
#### p.flexspi.ipcr0
<link=p.FLEXSPI.IPCR0>
#### p.flexspi.ipcmd
<link=p.FLEXSPI.IPCMD>
#### p.flexspi.iprxfcr
<link=p.FLEXSPI.IPRXFCR>
#### p.flexspi.sts2
<link=p.FLEXSPI.STS2>
#### FLEXSPI.RFDR[0]
<link=p.FLEXSPI.RFDR[0]>
#### flexspi.rfdr[1]
<link=p.FLEXSPI.RFDR[1]>
#### p.flexspi.rfdr[3]
<link=p.FLEXSPI.RFDR[3]>
#### flexspi.rfdr[4]
<link=p.FLEXSPI.RFDR[4]>
#### p.FLEXSPI.RFDR[5]
<lang=dft>
 (ro)  [1;33m0x402a8114[0m (0x402a8000 + 0x0114)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi.rfdr[11]
<link=p.FLEXSPI.RFDR[11]>
#### flexspi.rfdr[12]
<link=p.FLEXSPI.RFDR[12]>
#### FLEXSPI.RFDR[12]
<link=p.FLEXSPI.RFDR[12]>
#### p.FLEXSPI.RFDR[13]
<lang=dft>
 (ro)  [1;33m0x402a8134[0m (0x402a8000 + 0x0134)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI.RFDR[16]
<lang=dft>
 (ro)  [1;33m0x402a8140[0m (0x402a8000 + 0x0140)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI.RFDR[20]
<link=p.FLEXSPI.RFDR[20]>
#### FLEXSPI.TFDR[7]
<link=p.FLEXSPI.TFDR[7]>
#### p.FLEXSPI.TFDR[8]
<lang=dft>
 (wo)  [1;33m0x402a81a0[0m (0x402a8000 + 0x01a0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI.TFDR[10]
<lang=dft>
 (wo)  [1;33m0x402a81a8[0m (0x402a8000 + 0x01a8)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi.tfdr[14]
<link=p.FLEXSPI.TFDR[14]>
#### FLEXSPI.TFDR[14]
<link=p.FLEXSPI.TFDR[14]>
#### p.FLEXSPI.TFDR[15]
<lang=dft>
 (wo)  [1;33m0x402a81bc[0m (0x402a8000 + 0x01bc)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi.tfdr[17]
<link=p.FLEXSPI.TFDR[17]>
#### flexspi.tfdr[20]
<link=p.FLEXSPI.TFDR[20]>
#### FLEXSPI.TFDR[25]
<link=p.FLEXSPI.TFDR[25]>
#### p.flexspi.tfdr[26]
<link=p.FLEXSPI.TFDR[26]>
#### flexspi.lut[1]
<link=p.FLEXSPI.LUT[1]>
#### p.FLEXSPI.LUT[2]
<lang=dft>
 (rw)  [1;33m0x402a8208[0m (0x402a8000 + 0x0208)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[3]
<link=p.FLEXSPI.LUT[3]>
#### p.FLEXSPI.LUT[7]
<lang=dft>
 (rw)  [1;33m0x402a821c[0m (0x402a8000 + 0x021c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[14]
<lang=dft>
 (rw)  [1;33m0x402a8238[0m (0x402a8000 + 0x0238)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[15]
<link=p.FLEXSPI.LUT[15]>
#### FLEXSPI.LUT[15]
<link=p.FLEXSPI.LUT[15]>
#### p.flexspi.lut[18]
<link=p.FLEXSPI.LUT[18]>
#### p.FLEXSPI.LUT[20]
<lang=dft>
 (rw)  [1;33m0x402a8250[0m (0x402a8000 + 0x0250)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[20]
<link=p.FLEXSPI.LUT[20]>
#### p.flexspi.lut[24]
<link=p.FLEXSPI.LUT[24]>
#### flexspi.lut[31]
<link=p.FLEXSPI.LUT[31]>
#### FLEXSPI.LUT[42]
<link=p.FLEXSPI.LUT[42]>
#### flexspi.lut[43]
<link=p.FLEXSPI.LUT[43]>
#### flexspi.lut[53]
<link=p.FLEXSPI.LUT[53]>
#### p.flexspi2.mcr0
<link=p.FLEXSPI2.MCR0>
#### p.FLEXSPI2.INTR
<lang=dft>
 (rw)  [1;33m0x402a4014[0m (0x402a4000 + 0x0014)
Interrupt Register
 (rw) (01)  [0;32mIPCMDDONE[0m  - [00:00] -  IP triggered Command Sequences Execution finished interrupt. This interrupt is 
 also generated when there is IPCMDGE or IPCMDERR interrupt generated.
 (rw) (01)  [0;32mIPCMDGE[0m  - [01:01] -  IP triggered Command Sequences Grant Timeout interrupt.
 (rw) (01)  [0;32mAHBCMDGE[0m  - [02:02] -  AHB triggered Command Sequences Grant Timeout interrupt.
 (rw) (01)  [0;32mIPCMDERR[0m  - [03:03] -  IP triggered Command Sequences Error Detected interrupt. When an error detected
  for IP command, this command will be ignored and not executed at all.
 (rw) (01)  [0;32mAHBCMDERR[0m  - [04:04] -  AHB triggered Command Sequences Error Detected interrupt. When an error detecte
 d for AHB command, this command will be ignored and not executed at all.
 (rw) (01)  [0;32mIPRXWA[0m  - [05:05] -  IP RX FIFO watermark available interrupt.
 (rw) (01)  [0;32mIPTXWE[0m  - [06:06] -  IP TX FIFO watermark empty interrupt.
 (rw) (01)  [0;32mSCKSTOPBYRD[0m  - [08:08] -  SCK is stopped during command sequence because Async RX FIFO full interrupt.
 (rw) (01)  [0;32mSCKSTOPBYWR[0m  - [09:09] -  SCK is stopped during command sequence because Async TX FIFO empty interrupt.
 (rw) (01)  [0;32mAHBBUSTIMEOUT[0m  - [10:10] -  AHB Bus timeout interrupt.Refer Interrupts chapter for more details.
 (rw) (01)  [0;32mSEQTIMEOUT[0m  - [11:11] -  Sequence execution timeout interrupt.
</lang>
#### FLEXSPI2.AHBRXBUF3CR0
<link=p.FLEXSPI2.AHBRXBUF3CR0>
#### flexspi2.flsha1cr0
<link=p.FLEXSPI2.FLSHA1CR0>
#### flexspi2.flshcr2a1
<link=p.FLEXSPI2.FLSHCR2A1>
#### p.flexspi2.flshcr2a2
<link=p.FLEXSPI2.FLSHCR2A2>
#### p.FLEXSPI2.FLSHCR2B1
<lang=dft>
 (rw)  [1;33m0x402a4088[0m (0x402a4000 + 0x0088)
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
#### FLEXSPI2.FLSHCR4
<link=p.FLEXSPI2.FLSHCR4>
#### flexspi2.ipcr0
<link=p.FLEXSPI2.IPCR0>
#### flexspi2.dllcra
<link=p.FLEXSPI2.DLLCRA>
#### p.FLEXSPI2.IPTXFSTS
<lang=dft>
 (ro)  [1;33m0x402a40f4[0m (0x402a4000 + 0x00f4)
IP TX FIFO Status Register
 (ro) (08)  [0;32mFILL[0m  - [07:00] -  Fill level of IP TX FIFO.
 (ro) (16)  [0;32mWRCNTR[0m  - [31:16] -  Total Write Data Counter: WRCNTR * 64 Bits.
</lang>
#### p.flexspi2.rfdr[11]
<link=p.FLEXSPI2.RFDR[11]>
#### p.FLEXSPI2.RFDR[17]
<lang=dft>
 (ro)  [1;33m0x402a4144[0m (0x402a4000 + 0x0144)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI2.RFDR[21]
<lang=dft>
 (ro)  [1;33m0x402a4154[0m (0x402a4000 + 0x0154)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.rfdr[24]
<link=p.FLEXSPI2.RFDR[24]>
#### p.FLEXSPI2.RFDR[26]
<lang=dft>
 (ro)  [1;33m0x402a4168[0m (0x402a4000 + 0x0168)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi2.rfdr[29]
<link=p.FLEXSPI2.RFDR[29]>
#### p.FLEXSPI2.RFDR[31]
<lang=dft>
 (ro)  [1;33m0x402a417c[0m (0x402a4000 + 0x017c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.tfdr[0]
<link=p.FLEXSPI2.TFDR[0]>
#### p.flexspi2.tfdr[9]
<link=p.FLEXSPI2.TFDR[9]>
#### p.FLEXSPI2.TFDR[11]
<lang=dft>
 (wo)  [1;33m0x402a41ac[0m (0x402a4000 + 0x01ac)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI2.TFDR[11]
<link=p.FLEXSPI2.TFDR[11]>
#### p.flexspi2.tfdr[17]
<link=p.FLEXSPI2.TFDR[17]>
#### p.flexspi2.tfdr[22]
<link=p.FLEXSPI2.TFDR[22]>
#### p.flexspi2.tfdr[28]
<link=p.FLEXSPI2.TFDR[28]>
#### p.flexspi2.tfdr[31]
<link=p.FLEXSPI2.TFDR[31]>
#### flexspi2.lut[1]
<link=p.FLEXSPI2.LUT[1]>
#### p.flexspi2.lut[15]
<link=p.FLEXSPI2.LUT[15]>
#### flexspi2.lut[16]
<link=p.FLEXSPI2.LUT[16]>
#### FLEXSPI2.LUT[22]
<link=p.FLEXSPI2.LUT[22]>
#### p.FLEXSPI2.LUT[23]
<lang=dft>
 (rw)  [1;33m0x402a425c[0m (0x402a4000 + 0x025c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi2.lut[33]
<link=p.FLEXSPI2.LUT[33]>
#### FLEXSPI2.LUT[36]
<link=p.FLEXSPI2.LUT[36]>
#### p.flexspi2.lut[42]
<link=p.FLEXSPI2.LUT[42]>
#### flexspi2.lut[51]
<link=p.FLEXSPI2.LUT[51]>
#### FLEXSPI2.LUT[53]
<link=p.FLEXSPI2.LUT[53]>
#### p.flexspi2.lut[56]
<link=p.FLEXSPI2.LUT[56]>
#### FLEXSPI2.LUT[59]
<link=p.FLEXSPI2.LUT[59]>
#### flexspi2.lut[60]
<link=p.FLEXSPI2.LUT[60]>
#### p.pxp.ctrl_set
<link=p.PXP.CTRL_SET>
#### p.PXP.CTRL_CLR
<lang=dft>
 (rw)  [1;33m0x402b4008[0m (0x402b4000 + 0x0008)
Control Register 0
 (rw) (01)  [0;32mENABLE[0m  - [00:00] -  Enables PXP operation with specified parameters
 (rw) (01)  [0;32mIRQ_ENABLE[0m  - [01:01] -  Interrupt enable
 (rw) (01)  [0;32mNEXT_IRQ_ENABLE[0m  - [02:02] -  Next command interrupt enable
 (rw) (01)  [0;32mENABLE_LCD_HANDSHAKE[0m  - [04:04] -  Enable handshake with LCD controller
 (ro) (03)  [0;32mRSVD0[0m  - [07:05] -  Reserved, always set to zero.
 (rw) (02)  [0;32mROTATE[0m  - [09:08] -  Indicates the clockwise rotation to be applied at the output buffer
      0 - ROT_0 :
         ROT_0
      0x1 - ROT_90 :
         ROT_90
      0x2 - ROT_180 :
         ROT_180
      0x3 - ROT_270 :
         ROT_270
 (rw) (01)  [0;32mHFLIP[0m  - [10:10] -  Indicates that the output buffer should be flipped horizontally (effect applied
  before rotation).
 (rw) (01)  [0;32mVFLIP[0m  - [11:11] -  Indicates that the output buffer should be flipped vertically (effect applied b
 efore rotation).
 (ro) (10)  [0;32mRSVD1[0m  - [21:12] -  Reserved, always set to zero.
 (rw) (01)  [0;32mROT_POS[0m  - [22:22] -  This bit controls where rotation will occur in the PXP datapath
 (rw) (01)  [0;32mBLOCK_SIZE[0m  - [23:23] -  Select the block size to process.
      0 - 8X8 :
         Process 8x8 pixel blocks.
      0x1 - 16X16 :
         Process 16x16 pixel blocks.
 (ro) (04)  [0;32mRSVD3[0m  - [27:24] -  Reserved, always set to zero.
 (rw) (01)  [0;32mEN_REPEAT[0m  - [28:28] -  Enable the PXP to run continuously
 (ro) (01)  [0;32mRSVD4[0m  - [29:29] -  Reserved, always set to zero.
 (rw) (01)  [0;32mCLKGATE[0m  - [30:30] -  This bit must be set to zero for normal operation
 (rw) (01)  [0;32mSFTRST[0m  - [31:31] -  Set this bit to zero to enable normal PXP operation
</lang>
#### pxp.out_pitch
<link=p.PXP.OUT_PITCH>
#### p.PXP.OUT_AS_LRC
<lang=dft>
 (rw)  [1;33m0x402b40a0[0m (0x402b4000 + 0x00a0)
Alpha Surface Lower Right Coordinate
 (rw) (14)  [0;32mY[0m  - [13:00] -  This field indicates the lower right Y-coordinate (in pixels) of the alpha surf
 ace in the output frame buffer
 (ro) (02)  [0;32mRSVD0[0m  - [15:14] -  Reserved, always set to zero.
 (rw) (14)  [0;32mX[0m  - [29:16] -  This field indicates the lower right X-coordinate (in pixels) of the alpha surf
 ace (AS) in the output frame buffer
 (ro) (02)  [0;32mRSVD1[0m  - [31:30] -  Reserved, always set to zero.
</lang>
#### pxp.csc1_coef0
<link=p.PXP.CSC1_COEF0>
#### LCDIF.VDCTRL0
<link=p.LCDIF.VDCTRL0>
#### LCDIF.VDCTRL0_SET
<link=p.LCDIF.VDCTRL0_SET>
#### p.lcdif.vdctrl0_clr
<link=p.LCDIF.VDCTRL0_CLR>
#### lcdif.vdctrl0_clr
<link=p.LCDIF.VDCTRL0_CLR>
#### p.LCDIF.VDCTRL3
<lang=dft>
 (rw)  [1;33m0x402b80a0[0m (0x402b8000 + 0x00a0)
LCDIF VSYNC Mode and Dotclk Mode Control Register3
 (rw) (16)  [0;32mVERTICAL_WAIT_CNT[0m  - [15:00] -  In the VSYNC interface mode, wait for this number of DISPLAY CLOCK (pix_clk) cy
 cles from the falling VSYNC edge (or rising if VSYNC_POL is 1) before starting 
 LCD transactions and is applicable only if WAIT_FOR_VSYNC_EDGE is set
 (rw) (12)  [0;32mHORIZONTAL_WAIT_CNT[0m  - [27:16] -  In the DOTCLK mode, wait for this number of clocks from falling edge (or rising
  if HSYNC_POL is 1) of HSYNC signal to account for horizontal back porch plus t
 he number of DOTCLKs before the moving picture information begins
 (rw) (01)  [0;32mVSYNC_ONLY[0m  - [28:28] -  This bit must be set to 1 in the VSYNC mode of operation, and 0 in the DOTCLK m
 ode of operation.
 (rw) (01)  [0;32mMUX_SYNC_SIGNALS[0m  - [29:29] -  When this bit is set, the LCDIF block will internally mux HSYNC with LCD_D14, D
 OTCLK with LCD_D13 and ENABLE with LCD_D12, otherwise these signals will go out
  on separate pins
</lang>
#### lcdif.pigeonctrl0_clr
<link=p.LCDIF.PIGEONCTRL0_CLR>
#### p.lcdif.pigeonctrl0_tog
<link=p.LCDIF.PIGEONCTRL0_TOG>
#### LCDIF.PIGEONCTRL1
<link=p.LCDIF.PIGEONCTRL1>
#### lcdif.pigeon_0_0
<link=p.LCDIF.PIGEON_0_0>
#### p.LCDIF.PIGEON_0_1
<lang=dft>
 (rw)  [1;33m0x402b8810[0m (0x402b8000 + 0x0810)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### p.lcdif.pigeon_0_1
<link=p.LCDIF.PIGEON_0_1>
#### LCDIF.PIGEON_1_2
<link=p.LCDIF.PIGEON_1_2>
#### LCDIF.PIGEON_3_0
<link=p.LCDIF.PIGEON_3_0>
#### LCDIF.PIGEON_4_2
<link=p.LCDIF.PIGEON_4_2>
#### lcdif.pigeon_5_2
<link=p.LCDIF.PIGEON_5_2>
#### LCDIF.PIGEON_6_1
<link=p.LCDIF.PIGEON_6_1>
#### p.LCDIF.PIGEON_7_2
<lang=dft>
 (rw)  [1;33m0x402b89e0[0m (0x402b8000 + 0x09e0)
Panel Interface Signal Generator Register
 (rw) (04)  [0;32mSIG_LOGIC[0m  - [03:00] -  Logic operation with another signal: DIS/AND/OR/COND
      0 - DIS :
         No logic operation
      0x1 - AND :
         sigout = sig_another AND this_sig
      0x2 - OR :
         sigout = sig_another OR this_sig
      0x3 - MASK :
         mask = sig_another AND other_masks
 (rw) (05)  [0;32mSIG_ANOTHER[0m  - [08:04] -  Select another signal for logic operation or as mask or counter tick event
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### LCDIF.PIGEON_10_0
<link=p.LCDIF.PIGEON_10_0>
#### lcdif.pigeon_10_2
<link=p.LCDIF.PIGEON_10_2>
#### lcdif.lut1_addr
<link=p.LCDIF.LUT1_ADDR>
#### p.csi.csicr3
<link=p.CSI.CSICR3>
#### csi.csistatfifo
<link=p.CSI.CSISTATFIFO>
#### csi.csidmasa_statfifo
<link=p.CSI.CSIDMASA_STATFIFO>
#### p.csi.csidmasa_fb1
<link=p.CSI.CSIDMASA_FB1>
#### p.CSI.CSIDMASA_FB2
<lang=dft>
 (rw)  [1;33m0x402bc02c[0m (0x402bc000 + 0x002c)
CSI DMA Transfer Size Register - for Frame Buffer2
 (rw) (30)  [0;32mDMA_START_ADDR_FB2[0m  - [31:02] -  DMA Start Address in Frame Buffer2
</lang>
#### p.csi.csifbuf_para
<link=p.CSI.CSIFBUF_PARA>
#### p.csi.csiimag_para
<link=p.CSI.CSIIMAG_PARA>
#### usdhc1.cmd_xfr_typ
<link=p.USDHC1.CMD_XFR_TYP>
#### p.USDHC1.CMD_RSP2
<lang=dft>
 (ro)  [1;33m0x402c0018[0m (0x402c0000 + 0x0018)
Command Response2
 (ro) (32)  [0;32mCMDRSP2[0m  - [31:00] -  Command Response 2
</lang>
#### usdhc1.cmd_rsp3
<link=p.USDHC1.CMD_RSP3>
#### usdhc1.data_buff_acc_port
<link=p.USDHC1.DATA_BUFF_ACC_PORT>
#### p.USDHC1.FORCE_EVENT
<lang=dft>
 (rw)  [1;33m0x402c0050[0m (0x402c0000 + 0x0050)
Force Event
 (rw) (01)  [0;32mFEVTAC12NE[0m  - [00:00] -  Force Event Auto Command 12 Not Executed
 (rw) (01)  [0;32mFEVTAC12TOE[0m  - [01:01] -  Force Event Auto Command 12 Time Out Error
 (rw) (01)  [0;32mFEVTAC12CE[0m  - [02:02] -  Force Event Auto Command 12 CRC Error
 (rw) (01)  [0;32mFEVTAC12EBE[0m  - [03:03] -  Force Event Auto Command 12 End Bit Error
 (rw) (01)  [0;32mFEVTAC12IE[0m  - [04:04] -  Force Event Auto Command 12 Index Error
 (rw) (01)  [0;32mFEVTCNIBAC12E[0m  - [07:07] -  Force Event Command Not Executed By Auto Command 12 Error
 (rw) (01)  [0;32mFEVTCTOE[0m  - [16:16] -  Force Event Command Time Out Error
 (rw) (01)  [0;32mFEVTCCE[0m  - [17:17] -  Force Event Command CRC Error
 (rw) (01)  [0;32mFEVTCEBE[0m  - [18:18] -  Force Event Command End Bit Error
 (rw) (01)  [0;32mFEVTCIE[0m  - [19:19] -  Force Event Command Index Error
 (rw) (01)  [0;32mFEVTDTOE[0m  - [20:20] -  Force Event Data Time Out Error
 (rw) (01)  [0;32mFEVTDCE[0m  - [21:21] -  Force Event Data CRC Error
 (rw) (01)  [0;32mFEVTDEBE[0m  - [22:22] -  Force Event Data End Bit Error
 (rw) (01)  [0;32mFEVTAC12E[0m  - [24:24] -  Force Event Auto Command 12 Error
 (rw) (01)  [0;32mFEVTTNE[0m  - [26:26] -  Force Tuning Error
 (rw) (01)  [0;32mFEVTDMAE[0m  - [28:28] -  Force Event DMA Error
 (rw) (01)  [0;32mFEVTCINT[0m  - [31:31] -  Force Event Card Interrupt
</lang>
#### p.usdhc1.vend_spec
<link=p.USDHC1.VEND_SPEC>
#### p.USDHC1.MMC_BOOT
<lang=dft>
 (rw)  [1;33m0x402c00c4[0m (0x402c0000 + 0x00c4)
MMC Boot Register
 (rw) (04)  [0;32mDTOCV_ACK[0m  - [03:00] -  DTOCV_ACK
      0 - DTOCV_ACK_0 :
         SDCLK x 2^14
      0x1 - DTOCV_ACK_1 :
         SDCLK x 2^15
      0x2 - DTOCV_ACK_2 :
         SDCLK x 2^16
      0x3 - DTOCV_ACK_3 :
         SDCLK x 2^17
      0x4 - DTOCV_ACK_4 :
         SDCLK x 2^18
      0x5 - DTOCV_ACK_5 :
         SDCLK x 2^19
      0x6 - DTOCV_ACK_6 :
         SDCLK x 2^20
      0x7 - DTOCV_ACK_7 :
         SDCLK x 2^21
      0xE - DTOCV_ACK_14 :
         SDCLK x 2^28
      0xF - DTOCV_ACK_15 :
         SDCLK x 2^29
 (rw) (01)  [0;32mBOOT_ACK[0m  - [04:04] -  BOOT_ACK
      0 - BOOT_ACK_0 :
         No ack
      0x1 - BOOT_ACK_1 :
         Ack
 (rw) (01)  [0;32mBOOT_MODE[0m  - [05:05] -  BOOT_MODE
      0 - BOOT_MODE_0 :
         Normal boot
      0x1 - BOOT_MODE_1 :
         Alternative boot
 (rw) (01)  [0;32mBOOT_EN[0m  - [06:06] -  BOOT_EN
      0 - BOOT_EN_0 :
         Fast boot disable
      0x1 - BOOT_EN_1 :
         Fast boot enable
 (rw) (01)  [0;32mAUTO_SABG_EN[0m  - [07:07] -  AUTO_SABG_EN
 (rw) (01)  [0;32mDISABLE_TIME_OUT[0m  - [08:08] -  Disable Time Out
      0 - DISABLE_TIME_OUT_0 :
         Enable time out
      0x1 - DISABLE_TIME_OUT_1 :
         Disable time out
 (rw) (16)  [0;32mBOOT_BLK_CNT[0m  - [31:16] -  BOOT_BLK_CNT
</lang>
#### p.usdhc1.mmc_boot
<link=p.USDHC1.MMC_BOOT>
#### p.USDHC2
<lang=dft>
base: 0x402c4000
ADMA_ERR_STATUS ADMA_SYS_ADDR   AUTOCMD12_ERR_STATUS  BLK_ATT         
CLK_TUNE_CTRL_STATUS  CMD_ARG         CMD_RSP0        CMD_RSP1        
CMD_RSP2        CMD_RSP3        CMD_XFR_TYP     DATA_BUFF_ACC_PORT  
DLL_CTRL        DLL_STATUS      DS_ADDR         FORCE_EVENT     
HOST_CTRL_CAP   INT_SIGNAL_EN   INT_STATUS      INT_STATUS_EN   
MIX_CTRL        MMC_BOOT        PRES_STATE      PROT_CTRL       
SYS_CTRL        TUNING_CTRL     VEND_SPEC       VEND_SPEC2      
WTMK_LVL        
输入 p.USDHC2.{reg_name} 以查看寄存器的详细信息
type p.USDHC2.{reg_name} to check details of registers
</lang>
#### p.usdhc2.ds_addr
<link=p.USDHC2.DS_ADDR>
#### p.USDHC2.MIX_CTRL
<lang=dft>
 (rw)  [1;33m0x402c4048[0m (0x402c4000 + 0x0048)
Mixer Control
 (rw) (01)  [0;32mDMAEN[0m  - [00:00] -  DMA Enable
      0 - DMAEN_0 :
         Disable
      0x1 - DMAEN_1 :
         Enable
 (rw) (01)  [0;32mBCEN[0m  - [01:01] -  Block Count Enable
      0 - BCEN_0 :
         Disable
      0x1 - BCEN_1 :
         Enable
 (rw) (01)  [0;32mAC12EN[0m  - [02:02] -  Auto CMD12 Enable
      0 - AC12EN_0 :
         Disable
      0x1 - AC12EN_1 :
         Enable
 (rw) (01)  [0;32mDDR_EN[0m  - [03:03] -  Dual Data Rate mode selection
 (rw) (01)  [0;32mDTDSEL[0m  - [04:04] -  Data Transfer Direction Select
      0 - DTDSEL_0 :
         Write (Host to Card)
      0x1 - DTDSEL_1 :
         Read (Card to Host)
 (rw) (01)  [0;32mMSBSEL[0m  - [05:05] -  Multi / Single Block Select
      0 - MSBSEL_0 :
         Single Block
      0x1 - MSBSEL_1 :
         Multiple Blocks
 (rw) (01)  [0;32mNIBBLE_POS[0m  - [06:06] -  NIBBLE_POS
 (rw) (01)  [0;32mAC23EN[0m  - [07:07] -  Auto CMD23 Enable
 (rw) (01)  [0;32mEXE_TUNE[0m  - [22:22] -  Execute Tuning: (Only used for SD3.0, SDR104 mode and EMMC HS200 mode)
      0 - EXE_TUNE_0 :
         Not Tuned or Tuning Completed
      0x1 - EXE_TUNE_1 :
         Execute Tuning
 (rw) (01)  [0;32mSMP_CLK_SEL[0m  - [23:23] -  SMP_CLK_SEL
      0 - SMP_CLK_SEL_0 :
         Fixed clock is used to sample data / cmd
      0x1 - SMP_CLK_SEL_1 :
         Tuned clock is used to sample data / cmd
 (rw) (01)  [0;32mAUTO_TUNE_EN[0m  - [24:24] -  Auto Tuning Enable (Only used for SD3.0, SDR104 mode and and EMMC HS200 mode)
      0 - AUTO_TUNE_EN_0 :
         Disable auto tuning
      0x1 - AUTO_TUNE_EN_1 :
         Enable auto tuning
 (rw) (01)  [0;32mFBCLK_SEL[0m  - [25:25] -  Feedback Clock Source Selection (Only used for SD3.0, SDR104 mode and EMMC HS20
 0 mode)
      0 - FBCLK_SEL_0 :
         Feedback clock comes from the loopback CLK
      0x1 - FBCLK_SEL_1 :
         Feedback clock comes from the ipp_card_clk_out
</lang>
#### p.usdhc2.force_event
<link=p.USDHC2.FORCE_EVENT>
#### usdhc2.adma_err_status
<link=p.USDHC2.ADMA_ERR_STATUS>
#### USDHC2.MMC_BOOT
<link=p.USDHC2.MMC_BOOT>
#### ENET.EIMR
<link=p.ENET.EIMR>
#### enet.palr
<link=p.ENET.PALR>
#### enet.tfwr
<link=p.ENET.TFWR>
#### p.enet.rsfl
<link=p.ENET.RSFL>
#### enet.tsem
<link=p.ENET.TSEM>
#### p.enet.taem
<link=p.ENET.TAEM>
#### p.ENET.TACC
<lang=dft>
 (rw)  [1;33m0x402d81c0[0m (0x402d8000 + 0x01c0)
Transmit Accelerator Function Configuration
 (rw) (01)  [0;32mSHIFT16[0m  - [00:00] -  TX FIFO Shift-16
      0 - SHIFT16_0 :
         Disabled.
      0x1 - SHIFT16_1 :
         Indicates to the transmit data FIFO that the written frames contain two
          additional octets before the frame data. This means the actual frame b
         egins at bit 16 of the first word written into the FIFO. This function 
         allows putting the frame payload on a 32-bit boundary in memory, as the
          14-byte Ethernet header is extended to a 16-byte header.
 (rw) (01)  [0;32mIPCHK[0m  - [03:03] -  Enables insertion of IP header checksum.
      0 - IPCHK_0 :
         Checksum is not inserted.
      0x1 - IPCHK_1 :
         If an IP frame is transmitted, the checksum is inserted automatically. 
         The IP header checksum field must be cleared. If a non-IP frame is tran
         smitted the frame is not modified.
 (rw) (01)  [0;32mPROCHK[0m  - [04:04] -  Enables insertion of protocol checksum.
      0 - PROCHK_0 :
         Checksum not inserted.
      0x1 - PROCHK_1 :
         If an IP frame with a known protocol is transmitted, the checksum is in
         serted automatically into the frame. The checksum field must be cleared
         . The other frames are not modified.
</lang>
#### ENET.TACC
<link=p.ENET.TACC>
#### p.enet.rmon_t_bc_pkt
<link=p.ENET.RMON_T_BC_PKT>
#### ENET.RMON_T_UNDERSIZE
<link=p.ENET.RMON_T_UNDERSIZE>
#### ENET.RMON_T_P64
<link=p.ENET.RMON_T_P64>
#### ENET.RMON_T_P128TO255
<link=p.ENET.RMON_T_P128TO255>
#### p.enet.rmon_t_p256to511
<link=p.ENET.RMON_T_P256TO511>
#### p.ENET.IEEE_T_FRAME_OK
<lang=dft>
 (ro)  [1;33m0x402d824c[0m (0x402d8000 + 0x024c)
Frames Transmitted OK Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted OK
</lang>
#### p.enet.ieee_t_cserr
<link=p.ENET.IEEE_T_CSERR>
#### enet.rmon_r_packets
<link=p.ENET.RMON_R_PACKETS>
#### p.enet.rmon_r_jab
<link=p.ENET.RMON_R_JAB>
#### p.enet.atvr
<link=p.ENET.ATVR>
#### enet.atvr
<link=p.ENET.ATVR>
#### enet.atinc
<link=p.ENET.ATINC>
#### ENET.ATINC
<link=p.ENET.ATINC>
#### ENET.ATSTMP
<link=p.ENET.ATSTMP>
#### ENET.TGSR
<link=p.ENET.TGSR>
#### p.ENET.TCSR2
<lang=dft>
 (rw)  [1;33m0x402d8618[0m (0x402d8000 + 0x0618)
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
#### p.enet.tccr2
<link=p.ENET.TCCR2>
#### ENET2.RDAR
<link=p.ENET2.RDAR>
#### ENET2.TDAR
<link=p.ENET2.TDAR>
#### ENET2.MMFR
<link=p.ENET2.MMFR>
#### ENET2.MSCR
<link=p.ENET2.MSCR>
#### enet2.mibc
<link=p.ENET2.MIBC>
#### p.ENET2.TCR
<lang=dft>
 (rw)  [1;33m0x402d40c4[0m (0x402d4000 + 0x00c4)
Transmit Control Register
 (rw) (01)  [0;32mGTS[0m  - [00:00] -  Graceful Transmit Stop
 (rw) (01)  [0;32mFDEN[0m  - [02:02] -  Full-Duplex Enable
 (rw) (01)  [0;32mTFC_PAUSE[0m  - [03:03] -  Transmit Frame Control Pause
      0 - TFC_PAUSE_0 :
         No PAUSE frame transmitted.
      0x1 - TFC_PAUSE_1 :
         The MAC stops transmission of data frames after the current transmissio
         n is complete.
 (ro) (01)  [0;32mRFC_PAUSE[0m  - [04:04] -  Receive Frame Control Pause
 (rw) (03)  [0;32mADDSEL[0m  - [07:05] -  Source MAC Address Select On Transmit
      0 - ADDSEL_0 :
         Node MAC address programmed on PADDR1/2 registers.
 (rw) (01)  [0;32mADDINS[0m  - [08:08] -  Set MAC Address On Transmit
      0 - ADDINS_0 :
         The source MAC address is not modified by the MAC.
      0x1 - ADDINS_1 :
         The MAC overwrites the source MAC address with the programmed MAC addre
         ss according to ADDSEL.
 (rw) (01)  [0;32mCRCFWD[0m  - [09:09] -  Forward Frame From Application With CRC
      0 - CRCFWD_0 :
         TxBD[TC] controls whether the frame has a CRC from the application.
      0x1 - CRCFWD_1 :
         The transmitter does not append any CRC to transmitted frames, as it is
          expecting a frame with CRC from the application.
</lang>
#### ENET2.OPD
<link=p.ENET2.OPD>
#### p.ENET2.RXIC
<lang=dft>
 (rw)  [1;33m0x402d4100[0m (0x402d4000 + 0x0100)
Receive Interrupt Coalescing Register
 (rw) (16)  [0;32mICTT[0m  - [15:00] -  Interrupt coalescing timer threshold
 (rw) (08)  [0;32mICFT[0m  - [27:20] -  Interrupt coalescing frame count threshold
 (rw) (01)  [0;32mICCS[0m  - [30:30] -  Interrupt Coalescing Timer Clock Source Select
      0 - ICCS_0 :
         Use MII/GMII TX clocks.
      0x1 - ICCS_1 :
         Use ENET system clock.
 (rw) (01)  [0;32mICEN[0m  - [31:31] -  Interrupt Coalescing Enable
      0 - ICEN_0 :
         Disable Interrupt coalescing.
      0x1 - ICEN_1 :
         Enable Interrupt coalescing.
</lang>
#### ENET2.RDSR
<link=p.ENET2.RDSR>
#### p.ENET2.TDSR
<lang=dft>
 (rw)  [1;33m0x402d4184[0m (0x402d4000 + 0x0184)
Transmit Buffer Descriptor Ring Start Register
 (rw) (29)  [0;32mX_DES_START[0m  - [31:03] -  Pointer to the beginning of the transmit buffer descriptor queue.
</lang>
#### ENET2.TAEM
<link=p.ENET2.TAEM>
#### enet2.tacc
<link=p.ENET2.TACC>
#### p.ENET2.RMON_T_DROP
<lang=dft>
 (ro)  [1;33m0x402d4200[0m (0x402d4000 + 0x0200)
Reserved Statistic Register
</lang>
#### p.enet2.rmon_t_mc_pkt
<link=p.ENET2.RMON_T_MC_PKT>
#### p.ENET2.RMON_T_OCTETS
<lang=dft>
 (ro)  [1;33m0x402d4244[0m (0x402d4000 + 0x0244)
Tx Octets Statistic Register
 (ro) (32)  [0;32mTXOCTS[0m  - [31:00] -  Number of transmit octets
</lang>
#### enet2.ieee_t_drop
<link=p.ENET2.IEEE_T_DROP>
#### ENET2.RMON_R_BC_PKT
<link=p.ENET2.RMON_R_BC_PKT>
#### ENET2.RMON_R_P65TO127
<link=p.ENET2.RMON_R_P65TO127>
#### ENET2.RMON_R_P1024TO2047
<link=p.ENET2.RMON_R_P1024TO2047>
#### ENET2.RMON_R_P_GTE2048
<link=p.ENET2.RMON_R_P_GTE2048>
#### enet2.ieee_r_macerr
<link=p.ENET2.IEEE_R_MACERR>
#### ENET2.ATVR
<link=p.ENET2.ATVR>
#### enet2.tcsr2
<link=p.ENET2.TCSR2>
#### p.enet2.tccr0
<link=p.ENET2.TCCR0>
#### usb1.hwhost
<link=p.USB1.HWHOST>
#### usb1.hwtxbuf
<link=p.USB1.HWTXBUF>
#### usb1.gptimer1ld
<link=p.USB1.GPTIMER1LD>
#### usb1.caplength
<link=p.USB1.CAPLENGTH>
#### p.USB1.HCCPARAMS
<lang=dft>
 (ro)  [1;33m0x402e0108[0m (0x402e0000 + 0x0108)
Host Controller Capability Parameters
 (ro) (01)  [0;32mADC[0m  - [00:00] -  64-bit Addressing Capability This bit is set '0b' in all controller core, no 64
 -bit addressing capability is supported
 (ro) (01)  [0;32mPFL[0m  - [01:01] -  Programmable Frame List Flag If this bit is set to zero, then the system softwa
 re must use a frame list length of 1024 elements with this host controller
 (ro) (01)  [0;32mASP[0m  - [02:02] -  Asynchronous Schedule Park Capability If this bit is set to a one, then the hos
 t controller supports the park feature for high-speed queue heads in the Asynch
 ronous Schedule
 (ro) (04)  [0;32mIST[0m  - [07:04] -  Isochronous Scheduling Threshold
 (ro) (08)  [0;32mEECP[0m  - [15:08] -  EHCI Extended Capabilities Pointer
</lang>
#### usb1.hccparams
<link=p.USB1.HCCPARAMS>
#### p.USB1.DEVICEADDR
<lang=dft>
 (rw)  [1;33m0x402e0154[0m (0x402e0000 + 0x0154)
Device Address
 (rw) (01)  [0;32mUSBADRA[0m  - [24:24] -  Device Address Advance
 (rw) (07)  [0;32mUSBADR[0m  - [31:25] -  Device Address. These bits correspond to the USB device address
</lang>
#### p.USB1.PERIODICLISTBASE
<lang=dft>
 (rw)  [1;33m0x402e0154[0m (0x402e0000 + 0x0154)
Frame List Base Address
 (rw) (20)  [0;32mBASEADR[0m  - [31:12] -  Base Address (Low)
</lang>
#### p.USB1.OTGSC
<lang=dft>
 (rw)  [1;33m0x402e01a4[0m (0x402e0000 + 0x01a4)
On-The-Go Status & control
 (rw) (01)  [0;32mVD[0m  - [00:00] -  VBUS_Discharge - Read/Write. Setting this bit causes VBus to discharge through 
 a resistor.
 (rw) (01)  [0;32mVC[0m  - [01:01] -  VBUS Charge - Read/Write
 (rw) (01)  [0;32mOT[0m  - [03:03] -  OTG Termination - Read/Write
 (rw) (01)  [0;32mDP[0m  - [04:04] -  Data Pulsing - Read/Write
 (rw) (01)  [0;32mIDPU[0m  - [05:05] -  ID Pullup - Read/Write This bit provide control over the ID pull-up resistor; 0
  = off, 1 = on [default]
 (ro) (01)  [0;32mID[0m  - [08:08] -  USB ID - Read Only. 0 = A device, 1 = B device
 (ro) (01)  [0;32mAVV[0m  - [09:09] -  A VBus Valid - Read Only. Indicates VBus is above the A VBus valid threshold.
 (ro) (01)  [0;32mASV[0m  - [10:10] -  A Session Valid - Read Only. Indicates VBus is above the A session valid thresh
 old.
 (ro) (01)  [0;32mBSV[0m  - [11:11] -  B Session Valid - Read Only. Indicates VBus is above the B session valid thresh
 old.
 (ro) (01)  [0;32mBSE[0m  - [12:12] -  B Session End - Read Only. Indicates VBus is below the B session end threshold.
 (ro) (01)  [0;32mTOG_1MS[0m  - [13:13] -  1 millisecond timer toggle - Read Only. This bit toggles once per millisecond.
 (ro) (01)  [0;32mDPS[0m  - [14:14] -  Data Bus Pulsing Status - Read Only
 (rw) (01)  [0;32mIDIS[0m  - [16:16] -  USB ID Interrupt Status - Read/Write
 (rw) (01)  [0;32mAVVIS[0m  - [17:17] -  A VBus Valid Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mASVIS[0m  - [18:18] -  A Session Valid Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mBSVIS[0m  - [19:19] -  B Session Valid Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mBSEIS[0m  - [20:20] -  B Session End Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mSTATUS_1MS[0m  - [21:21] -  1 millisecond timer Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mDPIS[0m  - [22:22] -  Data Pulse Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mIDIE[0m  - [24:24] -  USB ID Interrupt Enable - Read/Write. Setting this bit enables the USB ID inter
 rupt.
 (rw) (01)  [0;32mAVVIE[0m  - [25:25] -  A VBus Valid Interrupt Enable - Read/Write. Setting this bit enables the A VBus
  valid interrupt.
 (rw) (01)  [0;32mASVIE[0m  - [26:26] -  A Session Valid Interrupt Enable - Read/Write
 (rw) (01)  [0;32mBSVIE[0m  - [27:27] -  B Session Valid Interrupt Enable - Read/Write
 (rw) (01)  [0;32mBSEIE[0m  - [28:28] -  B Session End Interrupt Enable - Read/Write. Setting this bit enables the B ses
 sion end interrupt.
 (rw) (01)  [0;32mEN_1MS[0m  - [29:29] -  1 millisecond timer Interrupt Enable - Read/Write
 (rw) (01)  [0;32mDPIE[0m  - [30:30] -  Data Pulse Interrupt Enable
</lang>
#### p.USB1.ENDPTCTRL1
<lang=dft>
 (rw)  [1;33m0x402e01c4[0m (0x402e0000 + 0x01c4)
Endpoint Control 1
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
#### usb1.endptctrl1
<link=p.USB1.ENDPTCTRL1>
#### p.usb1.endptctrl4
<link=p.USB1.ENDPTCTRL4>
#### USB1.ENDPTCTRL6
<link=p.USB1.ENDPTCTRL6>
#### p.usb2.hciversion
<link=p.USB2.HCIVERSION>
#### usb2.usbsts
<link=p.USB2.USBSTS>
#### p.usb2.burstsize
<link=p.USB2.BURSTSIZE>
#### p.usb2.otgsc
<link=p.USB2.OTGSC>
#### p.usb2.endptflush
<link=p.USB2.ENDPTFLUSH>
#### p.usb2.endptctrl0
<link=p.USB2.ENDPTCTRL0>
#### p.USB2.ENDPTCTRL6
<lang=dft>
 (rw)  [1;33m0x402e03d8[0m (0x402e0200 + 0x01d8)
Endpoint Control 6
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
#### usbnc1.usb_otg1_ctrl
<link=p.USBNC1.USB_OTG1_CTRL>
#### p.SEMC.BR4
<lang=dft>
 (rw)  [1;33m0x402f0020[0m (0x402f0000 + 0x0020)
Base Register 4 (For NAND device)
 (rw) (01)  [0;32mVLD[0m  - [00:00] -  Valid
 (rw) (05)  [0;32mMS[0m  - [05:01] -  Memory size
      0 - MS_0 :
         4KB
      0x1 - MS_1 :
         8KB
      0x2 - MS_2 :
         16KB
      0x3 - MS_3 :
         32KB
      0x4 - MS_4 :
         64KB
      0x5 - MS_5 :
         128KB
      0x6 - MS_6 :
         256KB
      0x7 - MS_7 :
         512KB
      0x8 - MS_8 :
         1MB
      0x9 - MS_9 :
         2MB
      0xA - MS_10 :
         4MB
      0xB - MS_11 :
         8MB
      0xC - MS_12 :
         16MB
      0xD - MS_13 :
         32MB
      0xE - MS_14 :
         64MB
      0xF - MS_15 :
         128MB
      0x10 - MS_16 :
         256MB
      0x11 - MS_17 :
         512MB
      0x12 - MS_18 :
         1GB
      0x13 - MS_19 :
         2GB
      0x14 - MS_20 :
         4GB
      0x15 - MS_21 :
         4GB
      0x16 - MS_22 :
         4GB
      0x17 - MS_23 :
         4GB
      0x18 - MS_24 :
         4GB
      0x19 - MS_25 :
         4GB
      0x1A - MS_26 :
         4GB
      0x1B - MS_27 :
         4GB
      0x1C - MS_28 :
         4GB
      0x1D - MS_29 :
         4GB
      0x1E - MS_30 :
         4GB
      0x1F - MS_31 :
         4GB
 (rw) (20)  [0;32mBA[0m  - [31:12] -  Base Address
</lang>
#### semc.br4
<link=p.SEMC.BR4>
#### p.semc.inten
<link=p.SEMC.INTEN>
#### semc.nandcr3
<link=p.SEMC.NANDCR3>
#### semc.sramcr1
<link=p.SEMC.SRAMCR1>
#### p.SEMC.IPTXDAT
<lang=dft>
 (rw)  [1;33m0x402f00a0[0m (0x402f0000 + 0x00a0)
TX DATA register (for IP Command)
 (rw) (32)  [0;32mDAT[0m  - [31:00] -  no description available
</lang>
#### semc.sts6
<link=p.SEMC.STS6>
#### p.SEMC.STS7
<lang=dft>
 (ro)  [1;33m0x402f00dc[0m (0x402f0000 + 0x00dc)
Status register 7
</lang>
#### p.DCP
<lang=dft>
base: 0x402fc000
CAPABILITY0     CAPABILITY1     CH0CMDPTR       CH0OPTS         
CH0OPTS_CLR     CH0OPTS_SET     CH0OPTS_TOG     CH0SEMA         
CH0STAT         CH0STAT_CLR     CH0STAT_SET     CH0STAT_TOG     
CH1CMDPTR       CH1OPTS         CH1OPTS_CLR     CH1OPTS_SET     
CH1OPTS_TOG     CH1SEMA         CH1STAT         CH1STAT_CLR     
CH1STAT_SET     CH1STAT_TOG     CH2CMDPTR       CH2OPTS         
CH2OPTS_CLR     CH2OPTS_SET     CH2OPTS_TOG     CH2SEMA         
CH2STAT         CH2STAT_CLR     CH2STAT_SET     CH2STAT_TOG     
CH3CMDPTR       CH3OPTS         CH3OPTS_CLR     CH3OPTS_SET     
CH3OPTS_TOG     CH3SEMA         CH3STAT         CH3STAT_CLR     
CH3STAT_SET     CH3STAT_TOG     CHANNELCTRL     CHANNELCTRL_CLR 
CHANNELCTRL_SET CHANNELCTRL_TOG CONTEXT         CTRL            
CTRL_CLR        CTRL_SET        CTRL_TOG        DBGDATA         
DBGSELECT       KEY             KEYDATA         PACKET0         
PACKET1         PACKET2         PACKET3         PACKET4         
PACKET5         PACKET6         PAGETABLE       STAT            
STAT_CLR        STAT_SET        STAT_TOG        VERSION         
输入 p.DCP.{reg_name} 以查看寄存器的详细信息
type p.DCP.{reg_name} to check details of registers
</lang>
#### p.dcp.stat_tog
<link=p.DCP.STAT_TOG>
#### dcp.capability0
<link=p.DCP.CAPABILITY0>
#### p.dcp.packet4
<link=p.DCP.PACKET4>
#### dcp.packet4
<link=p.DCP.PACKET4>
#### DCP.PACKET5
<link=p.DCP.PACKET5>
#### p.DCP.CH0OPTS_SET
<lang=dft>
 (rw)  [1;33m0x402fc134[0m (0x402fc000 + 0x0134)
DCP channel 0 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### p.DCP.CH1STAT
<lang=dft>
 (rw)  [1;33m0x402fc160[0m (0x402fc000 + 0x0160)
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
#### dcp.ch1stat_set
<link=p.DCP.CH1STAT_SET>
#### DCP.CH2CMDPTR
<link=p.DCP.CH2CMDPTR>
#### p.dcp.ch2sema
<link=p.DCP.CH2SEMA>
#### dcp.ch2stat_clr
<link=p.DCP.CH2STAT_CLR>
#### p.DCP.CH2OPTS_SET
<lang=dft>
 (rw)  [1;33m0x402fc1b4[0m (0x402fc000 + 0x01b4)
DCP channel 2 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### DCP.CH3OPTS
<link=p.DCP.CH3OPTS>
#### DCP.CH3OPTS_TOG
<link=p.DCP.CH3OPTS_TOG>
#### p.dcp.pagetable
<link=p.DCP.PAGETABLE>
#### p.SPDIF
<lang=dft>
base: 0x40380000
SCR             SIC             SIE             SIS             
SRCD            SRCSH           SRCSL           SRFM            
SRL             SRPC            SRQ             SRR             
SRU             STC             STCSCH          STCSCL          
STL             STR             
输入 p.SPDIF.{reg_name} 以查看寄存器的详细信息
type p.SPDIF.{reg_name} to check details of registers
</lang>
#### p.sai1.tcr5
<link=p.SAI1.TCR5>
#### SAI1.TDR[0]
<link=p.SAI1.TDR[0]>
#### p.SAI1.TFR[3]
<lang=dft>
 (ro)  [1;33m0x4038404c[0m (0x40384000 + 0x004c)
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
#### SAI1.RCR1
<link=p.SAI1.RCR1>
#### sai1.rdr[3]
<link=p.SAI1.RDR[3]>
#### SAI1.RFR[0]
<link=p.SAI1.RFR[0]>
#### p.sai1.rfr[2]
<link=p.SAI1.RFR[2]>
#### sai2.tdr[2]
<link=p.SAI2.TDR[2]>
#### p.SAI2.RDR[0]
<lang=dft>
 (ro)  [1;33m0x403880a0[0m (0x40388000 + 0x00a0)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### SAI3.TCR5
<link=p.SAI3.TCR5>
#### p.SAI3.TDR[2]
<lang=dft>
 (rw)  [1;33m0x4038c028[0m (0x4038c000 + 0x0028)
SAI Transmit Data Register
 (rw) (32)  [0;32mTDR[0m  - [31:00] -  Transmit Data Register
</lang>
#### SAI3.TDR[2]
<link=p.SAI3.TDR[2]>
#### p.sai3.tfr[1]
<link=p.SAI3.TFR[1]>
#### sai3.rcr5
<link=p.SAI3.RCR5>
#### p.SAI3.RDR[1]
<lang=dft>
 (ro)  [1;33m0x4038c0a4[0m (0x4038c000 + 0x00a4)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### sai3.rdr[1]
<link=p.SAI3.RDR[1]>
#### p.sai3.rfr[2]
<link=p.SAI3.RFR[2]>
#### p.lpspi1
<link=p.LPSPI1>
#### LPSPI1.PARAM
<link=p.LPSPI1.PARAM>
#### p.lpspi1.cfgr0
<link=p.LPSPI1.CFGR0>
#### LPSPI1.CCR
<link=p.LPSPI1.CCR>
#### p.lpspi1.fcr
<link=p.LPSPI1.FCR>
#### p.lpspi1.tcr
<link=p.LPSPI1.TCR>
#### lpspi2.cr
<link=p.LPSPI2.CR>
#### LPSPI2.SR
<link=p.LPSPI2.SR>
#### p.LPSPI2.CFGR1
<lang=dft>
 (rw)  [1;33m0x40398024[0m (0x40398000 + 0x0024)
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
#### lpspi2.rsr
<link=p.LPSPI2.RSR>
#### LPSPI3.CR
<link=p.LPSPI3.CR>
#### LPSPI3.DER
<link=p.LPSPI3.DER>
#### lpspi3.cfgr0
<link=p.LPSPI3.CFGR0>
#### LPSPI3.FCR
<link=p.LPSPI3.FCR>
#### p.LPSPI4
<lang=dft>
base: 0x403a0000
CCR             CFGR0           CFGR1           CR              
DER             DMR0            DMR1            FCR             
FSR             IER             PARAM           RDR             
RSR             SR              TCR             TDR             
VERID           
输入 p.LPSPI4.{reg_name} 以查看寄存器的详细信息
type p.LPSPI4.{reg_name} to check details of registers
</lang>
#### lpspi4.ier
<link=p.LPSPI4.IER>
#### p.lpspi4.der
<link=p.LPSPI4.DER>
#### p.LPSPI4.CFGR0
<lang=dft>
 (rw)  [1;33m0x403a0020[0m (0x403a0000 + 0x0020)
Configuration Register 0
 (rw) (01)  [0;32mHREN[0m  - [00:00] -  Host Request Enable
      0 - HREN_0 :
         Host request is disabled
      0x1 - HREN_1 :
         Host request is enabled
 (rw) (01)  [0;32mHRPOL[0m  - [01:01] -  Host Request Polarity
      0 - HRPOL_0 :
         Active low
      0x1 - HRPOL_1 :
         Active high
 (rw) (01)  [0;32mHRSEL[0m  - [02:02] -  Host Request Select
      0 - HRSEL_0 :
         Host request input is the LPSPI_HREQ pin
      0x1 - HRSEL_1 :
         Host request input is the input trigger
 (rw) (01)  [0;32mCIRFIFO[0m  - [08:08] -  Circular FIFO Enable
      0 - CIRFIFO_0 :
         Circular FIFO is disabled
      0x1 - CIRFIFO_1 :
         Circular FIFO is enabled
 (rw) (01)  [0;32mRDMO[0m  - [09:09] -  Receive Data Match Only
      0 - RDMO_0 :
         Received data is stored in the receive FIFO as in normal operations
      0x1 - RDMO_1 :
         Received data is discarded unless the Data Match Flag (DMF) is set
</lang>
#### p.lpspi4.cfgr1
<link=p.LPSPI4.CFGR1>
#### lpspi4.dmr1
<link=p.LPSPI4.DMR1>
#### p.lpspi4.fcr
<link=p.LPSPI4.FCR>
#### p.lpspi4.tcr
<link=p.LPSPI4.TCR>
#### p.adc_etc.trig0_counter
<link=p.ADC_ETC.TRIG0_COUNTER>
#### ADC_ETC.TRIG0_CHAIN_5_4
<link=p.ADC_ETC.TRIG0_CHAIN_5_4>
#### p.adc_etc.trig2_chain_1_0
<link=p.ADC_ETC.TRIG2_CHAIN_1_0>
#### p.adc_etc.trig2_chain_3_2
<link=p.ADC_ETC.TRIG2_CHAIN_3_2>
#### p.adc_etc.trig2_result_1_0
<link=p.ADC_ETC.TRIG2_RESULT_1_0>
#### p.adc_etc.trig2_result_3_2
<link=p.ADC_ETC.TRIG2_RESULT_3_2>
#### ADC_ETC.TRIG3_RESULT_5_4
<link=p.ADC_ETC.TRIG3_RESULT_5_4>
#### ADC_ETC.TRIG3_RESULT_7_6
<link=p.ADC_ETC.TRIG3_RESULT_7_6>
#### p.ADC_ETC.TRIG4_CHAIN_1_0
<lang=dft>
 (rw)  [1;33m0x403b00b8[0m (0x403b0000 + 0x00b8)
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
#### ADC_ETC.TRIG4_CHAIN_7_6
<link=p.ADC_ETC.TRIG4_CHAIN_7_6>
#### adc_etc.trig5_ctrl
<link=p.ADC_ETC.TRIG5_CTRL>
#### adc_etc.trig5_chain_3_2
<link=p.ADC_ETC.TRIG5_CHAIN_3_2>
#### adc_etc.trig5_chain_5_4
<link=p.ADC_ETC.TRIG5_CHAIN_5_4>
#### ADC_ETC.TRIG6_CHAIN_1_0
<link=p.ADC_ETC.TRIG6_CHAIN_1_0>
#### ADC_ETC.TRIG6_CHAIN_7_6
<link=p.ADC_ETC.TRIG6_CHAIN_7_6>
#### adc_etc.trig6_result_1_0
<link=p.ADC_ETC.TRIG6_RESULT_1_0>
#### adc_etc.trig7_chain_3_2
<link=p.ADC_ETC.TRIG7_CHAIN_3_2>
#### p.AOI1.BFCRT013
<lang=dft>
 (rw)  [1;33m0x403b400c[0m (0x403b4000 + 0x000c)
Boolean Function Term 0 and 1 Configuration Register for EVENTn
 (rw) (02)  [0;32mPT1_DC[0m  - [01:00] -  Product term 1, D input configuration
      0 - PT1_DC_0 :
         Force the D input in this product term to a logical zero
      0x1 - PT1_DC_1 :
         Pass the D input in this product term
      0x2 - PT1_DC_2 :
         Complement the D input in this product term
      0x3 - PT1_DC_3 :
         Force the D input in this product term to a logical one
 (rw) (02)  [0;32mPT1_CC[0m  - [03:02] -  Product term 1, C input configuration
      0 - PT1_CC_0 :
         Force the C input in this product term to a logical zero
      0x1 - PT1_CC_1 :
         Pass the C input in this product term
      0x2 - PT1_CC_2 :
         Complement the C input in this product term
      0x3 - PT1_CC_3 :
         Force the C input in this product term to a logical one
 (rw) (02)  [0;32mPT1_BC[0m  - [05:04] -  Product term 1, B input configuration
      0 - PT1_BC_0 :
         Force the B input in this product term to a logical zero
      0x1 - PT1_BC_1 :
         Pass the B input in this product term
      0x2 - PT1_BC_2 :
         Complement the B input in this product term
      0x3 - PT1_BC_3 :
         Force the B input in this product term to a logical one
 (rw) (02)  [0;32mPT1_AC[0m  - [07:06] -  Product term 1, A input configuration
      0 - PT1_AC_0 :
         Force the A input in this product term to a logical zero
      0x1 - PT1_AC_1 :
         Pass the A input in this product term
      0x2 - PT1_AC_2 :
         Complement the A input in this product term
      0x3 - PT1_AC_3 :
         Force the A input in this product term to a logical one
 (rw) (02)  [0;32mPT0_DC[0m  - [09:08] -  Product term 0, D input configuration
      0 - PT0_DC_0 :
         Force the D input in this product term to a logical zero
      0x1 - PT0_DC_1 :
         Pass the D input in this product term
      0x2 - PT0_DC_2 :
         Complement the D input in this product term
      0x3 - PT0_DC_3 :
         Force the D input in this product term to a logical one
 (rw) (02)  [0;32mPT0_CC[0m  - [11:10] -  Product term 0, C input configuration
      0 - PT0_CC_0 :
         Force the C input in this product term to a logical zero
      0x1 - PT0_CC_1 :
         Pass the C input in this product term
      0x2 - PT0_CC_2 :
         Complement the C input in this product term
      0x3 - PT0_CC_3 :
         Force the C input in this product term to a logical one
 (rw) (02)  [0;32mPT0_BC[0m  - [13:12] -  Product term 0, B input configuration
      0 - PT0_BC_0 :
         Force the B input in this product term to a logical zero
      0x1 - PT0_BC_1 :
         Pass the B input in this product term
      0x2 - PT0_BC_2 :
         Complement the B input in this product term
      0x3 - PT0_BC_3 :
         Force the B input in this product term to a logical one
 (rw) (02)  [0;32mPT0_AC[0m  - [15:14] -  Product term 0, A input configuration
      0 - PT0_AC_0 :
         Force the A input in this product term to a logical zero
      0x1 - PT0_AC_1 :
         Pass the A input in this product term
      0x2 - PT0_AC_2 :
         Complement the A input in this product term
      0x3 - PT0_AC_3 :
         Force the A input in this product term to a logical one
</lang>
#### p.aoi2.bfcrt010
<link=p.AOI2.BFCRT010>
#### xbara1.sel0
<link=p.XBARA1.SEL0>
#### XBARA1.SEL1
<link=p.XBARA1.SEL1>
#### XBARA1.SEL10
<link=p.XBARA1.SEL10>
#### p.XBARA1.SEL11
<lang=dft>
 (rw)  [1;33m0x403bc016[0m (0x403bc000 + 0x0016)
Crossbar A Select Register 11
 (rw) (07)  [0;32mSEL22[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT22 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL23[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT23 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel12
<link=p.XBARA1.SEL12>
#### xbara1.sel13
<link=p.XBARA1.SEL13>
#### p.XBARA1.SEL20
<lang=dft>
 (rw)  [1;33m0x403bc028[0m (0x403bc000 + 0x0028)
Crossbar A Select Register 20
 (rw) (07)  [0;32mSEL40[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT40 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL41[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT41 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL25
<link=p.XBARA1.SEL25>
#### p.xbara1.sel27
<link=p.XBARA1.SEL27>
#### p.xbara1.sel34
<link=p.XBARA1.SEL34>
#### xbara1.sel35
<link=p.XBARA1.SEL35>
#### XBARA1.SEL36
<link=p.XBARA1.SEL36>
#### p.XBARA1.SEL37
<lang=dft>
 (rw)  [1;33m0x403bc04a[0m (0x403bc000 + 0x004a)
Crossbar A Select Register 37
 (rw) (07)  [0;32mSEL74[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT74 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL75[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT75 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.XBARA1.SEL42
<lang=dft>
 (rw)  [1;33m0x403bc054[0m (0x403bc000 + 0x0054)
Crossbar A Select Register 42
 (rw) (07)  [0;32mSEL84[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT84 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL85[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT85 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbarb2.sel6
<link=p.XBARB2.SEL6>
#### p.xbarb3.sel4
<link=p.XBARB3.SEL4>
#### enc1.posdh
<link=p.ENC1.POSDH>
#### ENC1.POSDH
<link=p.ENC1.POSDH>
#### p.ENC1.REV
<lang=dft>
 (rw)  [1;33m0x403c800a[0m (0x403c8000 + 0x000a)
Revolution Counter Register
 (rw) (16)  [0;32mREV[0m  - [15:00] -  This read/write register contains the current value of the revolution counter.
</lang>
#### p.enc1.uposh
<link=p.ENC1.UPOSH>
#### p.enc1.uinit
<link=p.ENC1.UINIT>
#### p.ENC1.LINIT
<lang=dft>
 (rw)  [1;33m0x403c8018[0m (0x403c8000 + 0x0018)
Lower Initialization Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  This read/write register contains the value to be used to initialize the lower 
 half of the position counter (LPOS)
</lang>
#### enc1.umod
<link=p.ENC1.UMOD>
#### ENC1.UCOMP
<link=p.ENC1.UCOMP>
#### p.ENC2
<lang=dft>
base: 0x403cc000
CTRL            CTRL2           FILT            IMR             
LCOMP           LINIT           LMOD            LPOS            
LPOSH           POSD            POSDH           REV             
REVH            TST             UCOMP           UINIT           
UMOD            UPOS            UPOSH           WTR             
输入 p.ENC2.{reg_name} 以查看寄存器的详细信息
type p.ENC2.{reg_name} to check details of registers
</lang>
#### enc2.imr
<link=p.ENC2.IMR>
#### p.ENC2.CTRL2
<lang=dft>
 (rw)  [1;33m0x403cc01e[0m (0x403cc000 + 0x001e)
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
#### enc2.lcomp
<link=p.ENC2.LCOMP>
#### p.ENC3.REVH
<lang=dft>
 (ro)  [1;33m0x403d000c[0m (0x403d0000 + 0x000c)
Revolution Hold Register
 (ro) (16)  [0;32mREVH[0m  - [15:00] -  This read-only register contains a snapshot of the value of the REV register.
</lang>
#### ENC3.LPOS
<link=p.ENC3.LPOS>
#### p.enc3.imr
<link=p.ENC3.IMR>
#### ENC3.LMOD
<link=p.ENC3.LMOD>
#### ENC4.REV
<link=p.ENC4.REV>
#### p.ENC4.LINIT
<lang=dft>
 (rw)  [1;33m0x403d4018[0m (0x403d4000 + 0x0018)
Lower Initialization Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  This read/write register contains the value to be used to initialize the lower 
 half of the position counter (LPOS)
</lang>
#### enc4.linit
<link=p.ENC4.LINIT>
#### p.enc4.lmod
<link=p.ENC4.LMOD>
#### p.PWM1
<lang=dft>
base: 0x403dc000
DTSRCSEL        FCTRL0          FCTRL20         FFILT0          
FSTS0           FTST0           MASK            MCTRL           
MCTRL2          OUTEN           SM0CAPTCOMPA    SM0CAPTCOMPB    
SM0CAPTCOMPX    SM0CAPTCTRLA    SM0CAPTCTRLB    SM0CAPTCTRLX    
SM0CNT          SM0CTRL         SM0CTRL2        SM0CVAL0        
SM0CVAL0CYC     SM0CVAL1        SM0CVAL1CYC     SM0CVAL2        
SM0CVAL2CYC     SM0CVAL3        SM0CVAL3CYC     SM0CVAL4        
SM0CVAL4CYC     SM0CVAL5        SM0CVAL5CYC     SM0DISMAP0      
SM0DISMAP1      SM0DMAEN        SM0DTCNT0       SM0DTCNT1       
SM0FRACVAL1     SM0FRACVAL2     SM0FRACVAL3     SM0FRACVAL4     
SM0FRACVAL5     SM0FRCTRL       SM0INIT         SM0INTEN        
SM0OCTRL        SM0STS          SM0TCTRL        SM0VAL0         
SM0VAL1         SM0VAL2         SM0VAL3         SM0VAL4         
SM0VAL5         SM1CAPTCOMPA    SM1CAPTCOMPB    SM1CAPTCOMPX    
SM1CAPTCTRLA    SM1CAPTCTRLB    SM1CAPTCTRLX    SM1CNT          
SM1CTRL         SM1CTRL2        SM1CVAL0        SM1CVAL0CYC     
SM1CVAL1        SM1CVAL1CYC     SM1CVAL2        SM1CVAL2CYC     
SM1CVAL3        SM1CVAL3CYC     SM1CVAL4        SM1CVAL4CYC     
SM1CVAL5        SM1CVAL5CYC     SM1DISMAP0      SM1DISMAP1      
SM1DMAEN        SM1DTCNT0       SM1DTCNT1       SM1FRACVAL1     
SM1FRACVAL2     SM1FRACVAL3     SM1FRACVAL4     SM1FRACVAL5     
SM1FRCTRL       SM1INIT         SM1INTEN        SM1OCTRL        
SM1STS          SM1TCTRL        SM1VAL0         SM1VAL1         
SM1VAL2         SM1VAL3         SM1VAL4         SM1VAL5         
SM2CAPTCOMPA    SM2CAPTCOMPB    SM2CAPTCOMPX    SM2CAPTCTRLA    
SM2CAPTCTRLB    SM2CAPTCTRLX    SM2CNT          SM2CTRL         
SM2CTRL2        SM2CVAL0        SM2CVAL0CYC     SM2CVAL1        
SM2CVAL1CYC     SM2CVAL2        SM2CVAL2CYC     SM2CVAL3        
SM2CVAL3CYC     SM2CVAL4        SM2CVAL4CYC     SM2CVAL5        
SM2CVAL5CYC     SM2DISMAP0      SM2DISMAP1      SM2DMAEN        
SM2DTCNT0       SM2DTCNT1       SM2FRACVAL1     SM2FRACVAL2     
SM2FRACVAL3     SM2FRACVAL4     SM2FRACVAL5     SM2FRCTRL       
SM2INIT         SM2INTEN        SM2OCTRL        SM2STS          
SM2TCTRL        SM2VAL0         SM2VAL1         SM2VAL2         
SM2VAL3         SM2VAL4         SM2VAL5         SM3CAPTCOMPA    
SM3CAPTCOMPB    SM3CAPTCOMPX    SM3CAPTCTRLA    SM3CAPTCTRLB    
SM3CAPTCTRLX    SM3CNT          SM3CTRL         SM3CTRL2        
SM3CVAL0        SM3CVAL0CYC     SM3CVAL1        SM3CVAL1CYC     
SM3CVAL2        SM3CVAL2CYC     SM3CVAL3        SM3CVAL3CYC     
SM3CVAL4        SM3CVAL4CYC     SM3CVAL5        SM3CVAL5CYC     
SM3DISMAP0      SM3DISMAP1      SM3DMAEN        SM3DTCNT0       
SM3DTCNT1       SM3FRACVAL1     SM3FRACVAL2     SM3FRACVAL3     
SM3FRACVAL4     SM3FRACVAL5     SM3FRCTRL       SM3INIT         
SM3INTEN        SM3OCTRL        SM3STS          SM3TCTRL        
SM3VAL0         SM3VAL1         SM3VAL2         SM3VAL3         
SM3VAL4         SM3VAL5         SWCOUT          
输入 p.PWM1.{reg_name} 以查看寄存器的详细信息
type p.PWM1.{reg_name} to check details of registers
</lang>
#### PWM1.SM0FRACVAL2
<link=p.PWM1.SM0FRACVAL2>
#### p.PWM1.SM0VAL5
<lang=dft>
 (rw)  [1;33m0x403dc01e[0m (0x403dc000 + 0x001e)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### p.PWM1.SM0OCTRL
<lang=dft>
 (rw)  [1;33m0x403dc022[0m (0x403dc000 + 0x0022)
Output Control Register
 (rw) (02)  [0;32mPWMXFS[0m  - [01:00] -  PWM_X Fault State
      0 - PWMXFS_0 :
         Output is forced to logic 0 state prior to consideration of output pola
         rity control.
      0x1 - PWMXFS_1 :
         Output is forced to logic 1 state prior to consideration of output pola
         rity control.
      0x2 - PWMXFS_2 :
         Output is tristated.
      0x3 - PWMXFS_3 :
         Output is tristated.
 (rw) (02)  [0;32mPWMBFS[0m  - [03:02] -  PWM_B Fault State
      0 - PWMBFS_0 :
         Output is forced to logic 0 state prior to consideration of output pola
         rity control.
      0x1 - PWMBFS_1 :
         Output is forced to logic 1 state prior to consideration of output pola
         rity control.
      0x2 - PWMBFS_2 :
         Output is tristated.
      0x3 - PWMBFS_3 :
         Output is tristated.
 (rw) (02)  [0;32mPWMAFS[0m  - [05:04] -  PWM_A Fault State
      0 - PWMAFS_0 :
         Output is forced to logic 0 state prior to consideration of output pola
         rity control.
      0x1 - PWMAFS_1 :
         Output is forced to logic 1 state prior to consideration of output pola
         rity control.
      0x2 - PWMAFS_2 :
         Output is tristated.
      0x3 - PWMAFS_3 :
         Output is tristated.
 (rw) (01)  [0;32mPOLX[0m  - [08:08] -  PWM_X Output Polarity
      0 - POLX_0 :
         PWM_X output not inverted. A high level on the PWM_X pin represents the
          "on" or "active" state.
      0x1 - POLX_1 :
         PWM_X output inverted. A low level on the PWM_X pin represents the "on"
          or "active" state.
 (rw) (01)  [0;32mPOLB[0m  - [09:09] -  PWM_B Output Polarity
      0 - POLB_0 :
         PWM_B output not inverted. A high level on the PWM_B pin represents the
          "on" or "active" state.
      0x1 - POLB_1 :
         PWM_B output inverted. A low level on the PWM_B pin represents the "on"
          or "active" state.
 (rw) (01)  [0;32mPOLA[0m  - [10:10] -  PWM_A Output Polarity
      0 - POLA_0 :
         PWM_A output not inverted. A high level on the PWM_A pin represents the
          "on" or "active" state.
      0x1 - POLA_1 :
         PWM_A output inverted. A low level on the PWM_A pin represents the "on"
          or "active" state.
 (ro) (01)  [0;32mPWMX_IN[0m  - [13:13] -  PWM_X Input
 (ro) (01)  [0;32mPWMB_IN[0m  - [14:14] -  PWM_B Input
 (ro) (01)  [0;32mPWMA_IN[0m  - [15:15] -  PWM_A Input
</lang>
#### p.PWM1.SM0CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403dc046[0m (0x403dc000 + 0x0046)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### p.PWM1.SM0CVAL2
<lang=dft>
 (ro)  [1;33m0x403dc048[0m (0x403dc000 + 0x0048)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### pwm1.sm1cnt
<link=p.PWM1.SM1CNT>
#### pwm1.sm1ctrl2
<link=p.PWM1.SM1CTRL2>
#### p.pwm1.sm1fracval3
<link=p.PWM1.SM1FRACVAL3>
#### p.PWM1.SM1VAL4
<lang=dft>
 (rw)  [1;33m0x403dc07a[0m (0x403dc000 + 0x007a)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### p.pwm1.sm1frctrl
<link=p.PWM1.SM1FRCTRL>
#### PWM1.SM1INTEN
<link=p.PWM1.SM1INTEN>
#### p.PWM1.SM1DMAEN
<lang=dft>
 (rw)  [1;33m0x403dc088[0m (0x403dc000 + 0x0088)
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
#### p.PWM1.SM1TCTRL
<lang=dft>
 (rw)  [1;33m0x403dc08a[0m (0x403dc000 + 0x008a)
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
#### p.PWM1.SM1CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403dc096[0m (0x403dc000 + 0x0096)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### PWM1.SM1CVAL2
<link=p.PWM1.SM1CVAL2>
#### p.PWM1.SM1CVAL5CYC
<lang=dft>
 (ro)  [1;33m0x403dc0b6[0m (0x403dc000 + 0x00b6)
Capture Value 5 Cycle Register
 (ro) (04)  [0;32mCVAL5CYC[0m  - [03:00] -  CVAL5CYC
</lang>
#### pwm1.sm1cval5cyc
<link=p.PWM1.SM1CVAL5CYC>
#### PWM1.SM2CTRL2
<link=p.PWM1.SM2CTRL2>
#### pwm1.sm2ctrl
<link=p.PWM1.SM2CTRL>
#### PWM1.SM2FRACVAL1
<link=p.PWM1.SM2FRACVAL1>
#### p.pwm1.sm2fracval4
<link=p.PWM1.SM2FRACVAL4>
#### PWM1.SM2VAL4
<link=p.PWM1.SM2VAL4>
#### PWM1.SM2FRCTRL
<link=p.PWM1.SM2FRCTRL>
#### PWM1.SM2INTEN
<link=p.PWM1.SM2INTEN>
#### PWM1.SM2DISMAP0
<link=p.PWM1.SM2DISMAP0>
#### p.pwm1.sm2captcompb
<link=p.PWM1.SM2CAPTCOMPB>
#### pwm1.sm2captctrlx
<link=p.PWM1.SM2CAPTCTRLX>
#### p.pwm1.sm2cval1
<link=p.PWM1.SM2CVAL1>
#### p.PWM1.SM2CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403dc106[0m (0x403dc000 + 0x0106)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### PWM1.SM2CVAL5CYC
<link=p.PWM1.SM2CVAL5CYC>
#### p.PWM1.SM3CTRL
<lang=dft>
 (rw)  [1;33m0x403dc126[0m (0x403dc000 + 0x0126)
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
#### p.pwm1.sm3fracval1
<link=p.PWM1.SM3FRACVAL1>
#### PWM1.SM3VAL5
<link=p.PWM1.SM3VAL5>
#### pwm1.sm3dismap1
<link=p.PWM1.SM3DISMAP1>
#### PWM1.SM3CAPTCTRLB
<link=p.PWM1.SM3CAPTCTRLB>
#### p.PWM1.SM3CAPTCTRLX
<lang=dft>
 (rw)  [1;33m0x403dc15c[0m (0x403dc000 + 0x015c)
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
#### p.pwm1.sm3cval2
<link=p.PWM1.SM3CVAL2>
#### PWM1.SM3CVAL2CYC
<link=p.PWM1.SM3CVAL2CYC>
#### pwm1.sm3cval4
<link=p.PWM1.SM3CVAL4>
#### pwm1.sm3cval4cyc
<link=p.PWM1.SM3CVAL4CYC>
#### p.PWM1.OUTEN
<lang=dft>
 (rw)  [1;33m0x403dc180[0m (0x403dc000 + 0x0180)
Output Enable Register
 (rw) (04)  [0;32mPWMX_EN[0m  - [03:00] -  PWM_X Output Enables
      0 - PWMX_EN_0 :
         PWM_X output disabled.
      0x1 - PWMX_EN_1 :
         PWM_X output enabled.
 (rw) (04)  [0;32mPWMB_EN[0m  - [07:04] -  PWM_B Output Enables
      0 - PWMB_EN_0 :
         PWM_B output disabled.
      0x1 - PWMB_EN_1 :
         PWM_B output enabled.
 (rw) (04)  [0;32mPWMA_EN[0m  - [11:08] -  PWM_A Output Enables
      0 - PWMA_EN_0 :
         PWM_A output disabled.
      0x1 - PWMA_EN_1 :
         PWM_A output enabled.
</lang>
#### pwm1.dtsrcsel
<link=p.PWM1.DTSRCSEL>
#### pwm1.fsts0
<link=p.PWM1.FSTS0>
#### pwm1.ffilt0
<link=p.PWM1.FFILT0>
#### p.PWM2.SM0CTRL
<lang=dft>
 (rw)  [1;33m0x403e0006[0m (0x403e0000 + 0x0006)
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
#### PWM2.SM0VAL4
<link=p.PWM2.SM0VAL4>
#### p.PWM2.SM0CAPTCTRLX
<lang=dft>
 (rw)  [1;33m0x403e003c[0m (0x403e0000 + 0x003c)
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
#### pwm2.sm0captcompx
<link=p.PWM2.SM0CAPTCOMPX>
#### pwm2.sm0cval0
<link=p.PWM2.SM0CVAL0>
#### PWM2.SM0CVAL3CYC
<link=p.PWM2.SM0CVAL3CYC>
#### p.pwm2.sm0cval5
<link=p.PWM2.SM0CVAL5>
#### pwm2.sm1cnt
<link=p.PWM2.SM1CNT>
#### p.pwm2.sm1ctrl
<link=p.PWM2.SM1CTRL>
#### PWM2.SM1VAL5
<link=p.PWM2.SM1VAL5>
#### p.pwm2.sm1tctrl
<link=p.PWM2.SM1TCTRL>
#### PWM2.SM1DISMAP1
<link=p.PWM2.SM1DISMAP1>
#### p.PWM2.SM1CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e00a6[0m (0x403e0000 + 0x00a6)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### pwm2.sm1cval3
<link=p.PWM2.SM1CVAL3>
#### PWM2.SM1CVAL4CYC
<link=p.PWM2.SM1CVAL4CYC>
#### p.pwm2.sm1cval5
<link=p.PWM2.SM1CVAL5>
#### PWM2.SM2CNT
<link=p.PWM2.SM2CNT>
#### p.pwm2.sm2init
<link=p.PWM2.SM2INIT>
#### pwm2.sm2fracval2
<link=p.PWM2.SM2FRACVAL2>
#### p.pwm2.sm2val3
<link=p.PWM2.SM2VAL3>
#### p.PWM2.SM2VAL4
<lang=dft>
 (rw)  [1;33m0x403e00da[0m (0x403e0000 + 0x00da)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### p.PWM2.SM2DMAEN
<lang=dft>
 (rw)  [1;33m0x403e00e8[0m (0x403e0000 + 0x00e8)
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
#### p.PWM2.SM2TCTRL
<lang=dft>
 (rw)  [1;33m0x403e00ea[0m (0x403e0000 + 0x00ea)
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
#### p.pwm2.sm2dtcnt0
<link=p.PWM2.SM2DTCNT0>
#### PWM2.SM2DTCNT1
<link=p.PWM2.SM2DTCNT1>
#### p.PWM2.SM2CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e00f6[0m (0x403e0000 + 0x00f6)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### PWM2.SM2CVAL1
<link=p.PWM2.SM2CVAL1>
#### p.PWM2.SM2CVAL5CYC
<lang=dft>
 (ro)  [1;33m0x403e0116[0m (0x403e0000 + 0x0116)
Capture Value 5 Cycle Register
 (ro) (04)  [0;32mCVAL5CYC[0m  - [03:00] -  CVAL5CYC
</lang>
#### p.pwm2.sm3fracval2
<link=p.PWM2.SM3FRACVAL2>
#### p.pwm2.sm3val2
<link=p.PWM2.SM3VAL2>
#### PWM2.SM3FRACVAL3
<link=p.PWM2.SM3FRACVAL3>
#### p.PWM2.SM3VAL5
<lang=dft>
 (rw)  [1;33m0x403e013e[0m (0x403e0000 + 0x013e)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### p.PWM2.SM3OCTRL
<lang=dft>
 (rw)  [1;33m0x403e0142[0m (0x403e0000 + 0x0142)
Output Control Register
 (rw) (02)  [0;32mPWMXFS[0m  - [01:00] -  PWM_X Fault State
      0 - PWMXFS_0 :
         Output is forced to logic 0 state prior to consideration of output pola
         rity control.
      0x1 - PWMXFS_1 :
         Output is forced to logic 1 state prior to consideration of output pola
         rity control.
      0x2 - PWMXFS_2 :
         Output is tristated.
      0x3 - PWMXFS_3 :
         Output is tristated.
 (rw) (02)  [0;32mPWMBFS[0m  - [03:02] -  PWM_B Fault State
      0 - PWMBFS_0 :
         Output is forced to logic 0 state prior to consideration of output pola
         rity control.
      0x1 - PWMBFS_1 :
         Output is forced to logic 1 state prior to consideration of output pola
         rity control.
      0x2 - PWMBFS_2 :
         Output is tristated.
      0x3 - PWMBFS_3 :
         Output is tristated.
 (rw) (02)  [0;32mPWMAFS[0m  - [05:04] -  PWM_A Fault State
      0 - PWMAFS_0 :
         Output is forced to logic 0 state prior to consideration of output pola
         rity control.
      0x1 - PWMAFS_1 :
         Output is forced to logic 1 state prior to consideration of output pola
         rity control.
      0x2 - PWMAFS_2 :
         Output is tristated.
      0x3 - PWMAFS_3 :
         Output is tristated.
 (rw) (01)  [0;32mPOLX[0m  - [08:08] -  PWM_X Output Polarity
      0 - POLX_0 :
         PWM_X output not inverted. A high level on the PWM_X pin represents the
          "on" or "active" state.
      0x1 - POLX_1 :
         PWM_X output inverted. A low level on the PWM_X pin represents the "on"
          or "active" state.
 (rw) (01)  [0;32mPOLB[0m  - [09:09] -  PWM_B Output Polarity
      0 - POLB_0 :
         PWM_B output not inverted. A high level on the PWM_B pin represents the
          "on" or "active" state.
      0x1 - POLB_1 :
         PWM_B output inverted. A low level on the PWM_B pin represents the "on"
          or "active" state.
 (rw) (01)  [0;32mPOLA[0m  - [10:10] -  PWM_A Output Polarity
      0 - POLA_0 :
         PWM_A output not inverted. A high level on the PWM_A pin represents the
          "on" or "active" state.
      0x1 - POLA_1 :
         PWM_A output inverted. A low level on the PWM_A pin represents the "on"
          or "active" state.
 (ro) (01)  [0;32mPWMX_IN[0m  - [13:13] -  PWM_X Input
 (ro) (01)  [0;32mPWMB_IN[0m  - [14:14] -  PWM_B Input
 (ro) (01)  [0;32mPWMA_IN[0m  - [15:15] -  PWM_A Input
</lang>
#### PWM2.SM3DMAEN
<link=p.PWM2.SM3DMAEN>
#### p.pwm2.sm3dtcnt0
<link=p.PWM2.SM3DTCNT0>
#### PWM2.SM3CAPTCOMPA
<link=p.PWM2.SM3CAPTCOMPA>
#### p.PWM2.SM3CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e0166[0m (0x403e0000 + 0x0166)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### PWM2.SM3CVAL1CYC
<link=p.PWM2.SM3CVAL1CYC>
#### p.PWM2.SM3CVAL2
<lang=dft>
 (ro)  [1;33m0x403e0168[0m (0x403e0000 + 0x0168)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### PWM2.SM3CVAL2CYC
<link=p.PWM2.SM3CVAL2CYC>
#### pwm2.sm3cval4
<link=p.PWM2.SM3CVAL4>
#### p.pwm2.swcout
<link=p.PWM2.SWCOUT>
#### p.pwm2.fctrl0
<link=p.PWM2.FCTRL0>
#### pwm2.fctrl0
<link=p.PWM2.FCTRL0>
#### p.PWM2.FSTS0
<lang=dft>
 (rw)  [1;33m0x403e018e[0m (0x403e0000 + 0x018e)
Fault Status Register
 (rw) (04)  [0;32mFFLAG[0m  - [03:00] -  Fault Flags
      0 - FFLAG_0 :
         No fault on the FAULTx pin.
      0x1 - FFLAG_1 :
         Fault on the FAULTx pin.
 (rw) (04)  [0;32mFFULL[0m  - [07:04] -  Full Cycle
      0 - FFULL_0 :
         PWM outputs are not re-enabled at the start of a full cycle
      0x1 - FFULL_1 :
         PWM outputs are re-enabled at the start of a full cycle
 (ro) (04)  [0;32mFFPIN[0m  - [11:08] -  Filtered Fault Pins
 (rw) (04)  [0;32mFHALF[0m  - [15:12] -  Half Cycle Fault Recovery
      0 - FHALF_0 :
         PWM outputs are not re-enabled at the start of a half cycle.
      0x1 - FHALF_1 :
         PWM outputs are re-enabled at the start of a half cycle (as defined by 
         VAL0).
</lang>
#### p.pwm3.sm0fracval4
<link=p.PWM3.SM0FRACVAL4>
#### PWM3.SM0VAL5
<link=p.PWM3.SM0VAL5>
#### PWM3.SM0DISMAP1
<link=p.PWM3.SM0DISMAP1>
#### p.pwm3.sm0captcompb
<link=p.PWM3.SM0CAPTCOMPB>
#### p.pwm3.sm0cval1
<link=p.PWM3.SM0CVAL1>
#### p.PWM3.SM0CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e4046[0m (0x403e4000 + 0x0046)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### PWM3.SM0CVAL4CYC
<link=p.PWM3.SM0CVAL4CYC>
#### p.PWM3.SM1CTRL
<lang=dft>
 (rw)  [1;33m0x403e4066[0m (0x403e4000 + 0x0066)
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
#### p.pwm3.sm1fracval1
<link=p.PWM3.SM1FRACVAL1>
#### PWM3.SM1VAL4
<link=p.PWM3.SM1VAL4>
#### pwm3.sm1octrl
<link=p.PWM3.SM1OCTRL>
#### pwm3.sm1tctrl
<link=p.PWM3.SM1TCTRL>
#### pwm3.sm1dismap0
<link=p.PWM3.SM1DISMAP0>
#### p.PWM3.SM1CAPTCTRLX
<lang=dft>
 (rw)  [1;33m0x403e409c[0m (0x403e4000 + 0x009c)
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
#### p.pwm3.sm1cval2
<link=p.PWM3.SM1CVAL2>
#### PWM3.SM1CVAL3CYC
<link=p.PWM3.SM1CVAL3CYC>
#### PWM3.SM2FRACVAL3
<link=p.PWM3.SM2FRACVAL3>
#### p.PWM3.SM2VAL5
<lang=dft>
 (rw)  [1;33m0x403e40de[0m (0x403e4000 + 0x00de)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### p.PWM3.SM2OCTRL
<lang=dft>
 (rw)  [1;33m0x403e40e2[0m (0x403e4000 + 0x00e2)
Output Control Register
 (rw) (02)  [0;32mPWMXFS[0m  - [01:00] -  PWM_X Fault State
      0 - PWMXFS_0 :
         Output is forced to logic 0 state prior to consideration of output pola
         rity control.
      0x1 - PWMXFS_1 :
         Output is forced to logic 1 state prior to consideration of output pola
         rity control.
      0x2 - PWMXFS_2 :
         Output is tristated.
      0x3 - PWMXFS_3 :
         Output is tristated.
 (rw) (02)  [0;32mPWMBFS[0m  - [03:02] -  PWM_B Fault State
      0 - PWMBFS_0 :
         Output is forced to logic 0 state prior to consideration of output pola
         rity control.
      0x1 - PWMBFS_1 :
         Output is forced to logic 1 state prior to consideration of output pola
         rity control.
      0x2 - PWMBFS_2 :
         Output is tristated.
      0x3 - PWMBFS_3 :
         Output is tristated.
 (rw) (02)  [0;32mPWMAFS[0m  - [05:04] -  PWM_A Fault State
      0 - PWMAFS_0 :
         Output is forced to logic 0 state prior to consideration of output pola
         rity control.
      0x1 - PWMAFS_1 :
         Output is forced to logic 1 state prior to consideration of output pola
         rity control.
      0x2 - PWMAFS_2 :
         Output is tristated.
      0x3 - PWMAFS_3 :
         Output is tristated.
 (rw) (01)  [0;32mPOLX[0m  - [08:08] -  PWM_X Output Polarity
      0 - POLX_0 :
         PWM_X output not inverted. A high level on the PWM_X pin represents the
          "on" or "active" state.
      0x1 - POLX_1 :
         PWM_X output inverted. A low level on the PWM_X pin represents the "on"
          or "active" state.
 (rw) (01)  [0;32mPOLB[0m  - [09:09] -  PWM_B Output Polarity
      0 - POLB_0 :
         PWM_B output not inverted. A high level on the PWM_B pin represents the
          "on" or "active" state.
      0x1 - POLB_1 :
         PWM_B output inverted. A low level on the PWM_B pin represents the "on"
          or "active" state.
 (rw) (01)  [0;32mPOLA[0m  - [10:10] -  PWM_A Output Polarity
      0 - POLA_0 :
         PWM_A output not inverted. A high level on the PWM_A pin represents the
          "on" or "active" state.
      0x1 - POLA_1 :
         PWM_A output inverted. A low level on the PWM_A pin represents the "on"
          or "active" state.
 (ro) (01)  [0;32mPWMX_IN[0m  - [13:13] -  PWM_X Input
 (ro) (01)  [0;32mPWMB_IN[0m  - [14:14] -  PWM_B Input
 (ro) (01)  [0;32mPWMA_IN[0m  - [15:15] -  PWM_A Input
</lang>
#### pwm3.sm2dmaen
<link=p.PWM3.SM2DMAEN>
#### PWM3.SM2DMAEN
<link=p.PWM3.SM2DMAEN>
#### PWM3.SM2CAPTCOMPA
<link=p.PWM3.SM2CAPTCOMPA>
#### p.PWM3.SM2CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e4106[0m (0x403e4000 + 0x0106)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### PWM3.SM2CVAL1CYC
<link=p.PWM3.SM2CVAL1CYC>
#### p.PWM3.SM2CVAL2
<lang=dft>
 (ro)  [1;33m0x403e4108[0m (0x403e4000 + 0x0108)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### PWM3.SM2CVAL2CYC
<link=p.PWM3.SM2CVAL2CYC>
#### pwm3.sm2cval5cyc
<link=p.PWM3.SM2CVAL5CYC>
#### PWM3.SM3CNT
<link=p.PWM3.SM3CNT>
#### p.pwm3.sm3fracval3
<link=p.PWM3.SM3FRACVAL3>
#### p.PWM3.SM3VAL4
<lang=dft>
 (rw)  [1;33m0x403e413a[0m (0x403e4000 + 0x013a)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### p.pwm3.sm3frctrl
<link=p.PWM3.SM3FRCTRL>
#### p.PWM3.SM3DMAEN
<lang=dft>
 (rw)  [1;33m0x403e4148[0m (0x403e4000 + 0x0148)
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
#### pwm3.sm3dmaen
<link=p.PWM3.SM3DMAEN>
#### p.PWM3.SM3TCTRL
<lang=dft>
 (rw)  [1;33m0x403e414a[0m (0x403e4000 + 0x014a)
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
#### PWM3.SM3DTCNT1
<link=p.PWM3.SM3DTCNT1>
#### p.PWM3.SM3CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e4156[0m (0x403e4000 + 0x0156)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### pwm3.sm3captctrlx
<link=p.PWM3.SM3CAPTCTRLX>
#### PWM3.SM3CVAL1
<link=p.PWM3.SM3CVAL1>
#### pwm3.sm3cval2cyc
<link=p.PWM3.SM3CVAL2CYC>
#### p.PWM3.SM3CVAL5CYC
<lang=dft>
 (ro)  [1;33m0x403e4176[0m (0x403e4000 + 0x0176)
Capture Value 5 Cycle Register
 (ro) (04)  [0;32mCVAL5CYC[0m  - [03:00] -  CVAL5CYC
</lang>
#### pwm3.mask
<link=p.PWM3.MASK>
#### pwm4.sm0ctrl2
<link=p.PWM4.SM0CTRL2>
#### p.PWM4.SM0VAL3
<lang=dft>
 (rw)  [1;33m0x403e8016[0m (0x403e8000 + 0x0016)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### PWM4.SM0STS
<link=p.PWM4.SM0STS>
#### p.pwm4.sm0inten
<link=p.PWM4.SM0INTEN>
#### pwm4.sm0dismap0
<link=p.PWM4.SM0DISMAP0>
#### p.PWM4.SM0DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e8032[0m (0x403e8000 + 0x0032)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### pwm4.sm0dtcnt1
<link=p.PWM4.SM0DTCNT1>
#### p.pwm4.sm0captctrla
<link=p.PWM4.SM0CAPTCTRLA>
#### PWM4.SM0CAPTCTRLA
<link=p.PWM4.SM0CAPTCTRLA>
#### pwm4.sm0captcompb
<link=p.PWM4.SM0CAPTCOMPB>
#### p.PWM4.SM0CAPTCTRLX
<lang=dft>
 (rw)  [1;33m0x403e803c[0m (0x403e8000 + 0x003c)
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
#### pwm4.sm0captctrlx
<link=p.PWM4.SM0CAPTCTRLX>
#### PWM4.SM0CVAL1CYC
<link=p.PWM4.SM0CVAL1CYC>
#### pwm4.sm0cval5cyc
<link=p.PWM4.SM0CVAL5CYC>
#### p.PWM4.SM1CTRL2
<lang=dft>
 (rw)  [1;33m0x403e8064[0m (0x403e8000 + 0x0064)
Control 2 Register
 (rw) (02)  [0;32mCLK_SEL[0m  - [01:00] -  Clock Source Select
      0 - CLK_SEL_0 :
         The IPBus clock is used as the clock for the local prescaler and counte
         r.
      0x1 - CLK_SEL_1 :
         EXT_CLK is used as the clock for the local prescaler and counter.
      0x2 - CLK_SEL_2 :
         Submodule 0's clock (AUX_CLK) is used as the source clock for the local
          prescaler and counter. This setting should not be used in submodule 0 
         as it will force the clock to logic 0.
 (rw) (01)  [0;32mRELOAD_SEL[0m  - [02:02] -  Reload Source Select
      0 - RELOAD_SEL_0 :
         The local RELOAD signal is used to reload registers.
      0x1 - RELOAD_SEL_1 :
         The master RELOAD signal (from submodule 0) is used to reload registers
         . This setting should not be used in submodule 0 as it will force the R
         ELOAD signal to logic 0.
 (rw) (03)  [0;32mFORCE_SEL[0m  - [05:03] -  This read/write bit determines the source of the FORCE OUTPUT signal for this s
 ubmodule.
      0 - FORCE_SEL_0 :
         The local force signal, CTRL2[FORCE], from this submodule is used to fo
         rce updates.
      0x1 - FORCE_SEL_1 :
         The master force signal from submodule 0 is used to force updates. This
          setting should not be used in submodule 0 as it will hold the FORCE OU
         TPUT signal to logic 0.
      0x2 - FORCE_SEL_2 :
         The local reload signal from this submodule is used to force updates wi
         thout regard to the state of LDOK.
      0x3 - FORCE_SEL_3 :
         The master reload signal from submodule0 is used to force updates if LD
         OK is set. This setting should not be used in submodule0 as it will hol
         d the FORCE OUTPUT signal to logic 0.
      0x4 - FORCE_SEL_4 :
         The local sync signal from this submodule is used to force updates.
      0x5 - FORCE_SEL_5 :
         The master sync signal from submodule0 is used to force updates. This s
         etting should not be used in submodule0 as it will hold the FORCE OUTPU
         T signal to logic 0.
      0x6 - FORCE_SEL_6 :
         The external force signal, EXT_FORCE, from outside the PWM module cause
         s updates.
      0x7 - FORCE_SEL_7 :
         The external sync signal, EXT_SYNC, from outside the PWM module causes 
         updates.
 (rw) (01)  [0;32mFORCE[0m  - [06:06] -  Force Initialization
 (rw) (01)  [0;32mFRCEN[0m  - [07:07] -  FRCEN
      0 - FRCEN_0 :
         Initialization from a FORCE_OUT is disabled.
      0x1 - FRCEN_1 :
         Initialization from a FORCE_OUT is enabled.
 (rw) (02)  [0;32mINIT_SEL[0m  - [09:08] -  Initialization Control Select
      0 - INIT_SEL_0 :
         Local sync (PWM_X) causes initialization.
      0x1 - INIT_SEL_1 :
         Master reload from submodule 0 causes initialization. This setting shou
         ld not be used in submodule 0 as it will force the INIT signal to logic
          0. The submodule counter will only reinitialize when a master reload o
         ccurs.
      0x2 - INIT_SEL_2 :
         Master sync from submodule 0 causes initialization. This setting should
          not be used in submodule 0 as it will force the INIT signal to logic 0
         .
      0x3 - INIT_SEL_3 :
         EXT_SYNC causes initialization.
 (rw) (01)  [0;32mPWMX_INIT[0m  - [10:10] -  PWM_X Initial Value
 (rw) (01)  [0;32mPWM45_INIT[0m  - [11:11] -  PWM45 Initial Value
 (rw) (01)  [0;32mPWM23_INIT[0m  - [12:12] -  PWM23 Initial Value
 (rw) (01)  [0;32mINDEP[0m  - [13:13] -  Independent or Complementary Pair Operation
      0 - INDEP_0 :
         PWM_A and PWM_B form a complementary PWM pair.
      0x1 - INDEP_1 :
         PWM_A and PWM_B outputs are independent PWMs.
 (rw) (01)  [0;32mWAITEN[0m  - [14:14] -  WAIT Enable
 (rw) (01)  [0;32mDBGEN[0m  - [15:15] -  Debug Enable
</lang>
#### p.PWM4.SM1CTRL
<lang=dft>
 (rw)  [1;33m0x403e8066[0m (0x403e8000 + 0x0066)
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
#### p.PWM4.SM1VAL2
<lang=dft>
 (rw)  [1;33m0x403e8072[0m (0x403e8000 + 0x0072)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### p.pwm4.sm1octrl
<link=p.PWM4.SM1OCTRL>
#### p.pwm4.sm1inten
<link=p.PWM4.SM1INTEN>
#### pwm4.sm1dtcnt0
<link=p.PWM4.SM1DTCNT0>
#### p.pwm4.sm1captctrlb
<link=p.PWM4.SM1CAPTCTRLB>
#### PWM4.SM1CAPTCTRLB
<link=p.PWM4.SM1CAPTCTRLB>
#### p.pwm4.sm1cval0
<link=p.PWM4.SM1CVAL0>
#### PWM4.SM1CVAL3
<link=p.PWM4.SM1CVAL3>
#### p.pwm4.sm1cval5cyc
<link=p.PWM4.SM1CVAL5CYC>
#### p.pwm4.sm2ctrl
<link=p.PWM4.SM2CTRL>
#### PWM4.SM2VAL0
<link=p.PWM4.SM2VAL0>
#### pwm4.sm2octrl
<link=p.PWM4.SM2OCTRL>
#### PWM4.SM2OCTRL
<link=p.PWM4.SM2OCTRL>
#### p.pwm4.sm2cval0cyc
<link=p.PWM4.SM2CVAL0CYC>
#### PWM4.SM2CVAL0CYC
<link=p.PWM4.SM2CVAL0CYC>
#### PWM4.SM2CVAL2
<link=p.PWM4.SM2CVAL2>
#### p.PWM4.SM2CVAL4
<lang=dft>
 (ro)  [1;33m0x403e8110[0m (0x403e8000 + 0x0110)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### pwm4.sm2cval4cyc
<link=p.PWM4.SM2CVAL4CYC>
#### PWM4.SM3VAL1
<link=p.PWM4.SM3VAL1>
#### p.pwm4.sm3fracval4
<link=p.PWM4.SM3FRACVAL4>
#### p.pwm4.sm3dismap0
<link=p.PWM4.SM3DISMAP0>
#### pwm4.sm3captcompa
<link=p.PWM4.SM3CAPTCOMPA>
#### PWM4.SM3CAPTCOMPB
<link=p.PWM4.SM3CAPTCOMPB>
#### pwm4.sm3captctrlx
<link=p.PWM4.SM3CAPTCTRLX>
#### p.PWM4.SM3CVAL3
<lang=dft>
 (ro)  [1;33m0x403e816c[0m (0x403e8000 + 0x016c)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### PWM4.SM3CVAL5
<link=p.PWM4.SM3CVAL5>
#### p.PWM4.SWCOUT
<lang=dft>
 (rw)  [1;33m0x403e8184[0m (0x403e8000 + 0x0184)
Software Controlled Output Register
 (rw) (01)  [0;32mSM0OUT45[0m  - [00:00] -  Submodule 0 Software Controlled Output 45
      0 - SM0OUT45_0 :
         A logic 0 is supplied to the deadtime generator of submodule 0 instead 
         of PWM45.
      0x1 - SM0OUT45_1 :
         A logic 1 is supplied to the deadtime generator of submodule 0 instead 
         of PWM45.
 (rw) (01)  [0;32mSM0OUT23[0m  - [01:01] -  Submodule 0 Software Controlled Output 23
      0 - SM0OUT23_0 :
         A logic 0 is supplied to the deadtime generator of submodule 0 instead 
         of PWM23.
      0x1 - SM0OUT23_1 :
         A logic 1 is supplied to the deadtime generator of submodule 0 instead 
         of PWM23.
 (rw) (01)  [0;32mSM1OUT45[0m  - [02:02] -  Submodule 1 Software Controlled Output 45
      0 - SM1OUT45_0 :
         A logic 0 is supplied to the deadtime generator of submodule 1 instead 
         of PWM45.
      0x1 - SM1OUT45_1 :
         A logic 1 is supplied to the deadtime generator of submodule 1 instead 
         of PWM45.
 (rw) (01)  [0;32mSM1OUT23[0m  - [03:03] -  Submodule 1 Software Controlled Output 23
      0 - SM1OUT23_0 :
         A logic 0 is supplied to the deadtime generator of submodule 1 instead 
         of PWM23.
      0x1 - SM1OUT23_1 :
         A logic 1 is supplied to the deadtime generator of submodule 1 instead 
         of PWM23.
 (rw) (01)  [0;32mSM2OUT45[0m  - [04:04] -  Submodule 2 Software Controlled Output 45
      0 - SM2OUT45_0 :
         A logic 0 is supplied to the deadtime generator of submodule 2 instead 
         of PWM45.
      0x1 - SM2OUT45_1 :
         A logic 1 is supplied to the deadtime generator of submodule 2 instead 
         of PWM45.
 (rw) (01)  [0;32mSM2OUT23[0m  - [05:05] -  Submodule 2 Software Controlled Output 23
      0 - SM2OUT23_0 :
         A logic 0 is supplied to the deadtime generator of submodule 2 instead 
         of PWM23.
      0x1 - SM2OUT23_1 :
         A logic 1 is supplied to the deadtime generator of submodule 2 instead 
         of PWM23.
 (rw) (01)  [0;32mSM3OUT45[0m  - [06:06] -  Submodule 3 Software Controlled Output 45
      0 - SM3OUT45_0 :
         A logic 0 is supplied to the deadtime generator of submodule 3 instead 
         of PWM45.
      0x1 - SM3OUT45_1 :
         A logic 1 is supplied to the deadtime generator of submodule 3 instead 
         of PWM45.
 (rw) (01)  [0;32mSM3OUT23[0m  - [07:07] -  Submodule 3 Software Controlled Output 23
      0 - SM3OUT23_0 :
         A logic 0 is supplied to the deadtime generator of submodule 3 instead 
         of PWM23.
      0x1 - SM3OUT23_1 :
         A logic 1 is supplied to the deadtime generator of submodule 3 instead 
         of PWM23.
</lang>
#### p.PWM4.FCTRL0
<lang=dft>
 (rw)  [1;33m0x403e818c[0m (0x403e8000 + 0x018c)
Fault Control Register
 (rw) (04)  [0;32mFIE[0m  - [03:00] -  Fault Interrupt Enables
      0 - FIE_0 :
         FAULTx CPU interrupt requests disabled.
      0x1 - FIE_1 :
         FAULTx CPU interrupt requests enabled.
 (rw) (04)  [0;32mFSAFE[0m  - [07:04] -  Fault Safety Mode
      0 - FSAFE_0 :
         Normal mode. PWM outputs disabled by this fault are not enabled until F
         STS[FFLAGx] is clear at the start of a half cycle or full cycle dependi
         ng on the state of FSTS[FFULL] without regard to the state of FSTS[FFPI
         Nx]. The PWM outputs disabled by this fault input will not be re-enable
         d until the actual FAULTx input signal de-asserts since the fault input
          will combinationally disable the PWM outputs (as programmed in DISMAPn
         ).
      0x1 - FSAFE_1 :
         Safe mode. PWM outputs disabled by this fault are not enabled until FST
         S[FFLAGx] is clear and FSTS[FFPINx] is clear at the start of a half cyc
         le or full cycle depending on the state of FSTS[FFULL].
 (rw) (04)  [0;32mFAUTO[0m  - [11:08] -  Automatic Fault Clearing
      0 - FAUTO_0 :
         Manual fault clearing. PWM outputs disabled by this fault are not enabl
         ed until FSTS[FFLAGx] is clear at the start of a half cycle or full cyc
         le depending the state of FSTS[FFULL]. This is further controlled by FC
         TRL[FSAFE].
      0x1 - FAUTO_1 :
         Automatic fault clearing. PWM outputs disabled by this fault are enable
         d when FSTS[FFPINx] is clear at the start of a half cycle or full cycle
          depending on the state of FSTS[FFULL] without regard to the state of F
         STS[FFLAGx].
 (rw) (04)  [0;32mFLVL[0m  - [15:12] -  Fault Level
      0 - FLVL_0 :
         A logic 0 on the fault input indicates a fault condition.
      0x1 - FLVL_1 :
         A logic 1 on the fault input indicates a fault condition.
</lang>
#### PWM4.FTST0
<link=p.PWM4.FTST0>
#### p.BEE
<lang=dft>
base: 0x403ec000
ADDR_OFFSET0    ADDR_OFFSET1    AES_KEY0_W0     AES_KEY0_W1     
AES_KEY0_W2     AES_KEY0_W3     CTRL            CTR_NONCE0_W0   
CTR_NONCE0_W1   CTR_NONCE0_W2   CTR_NONCE0_W3   CTR_NONCE1_W0   
CTR_NONCE1_W1   CTR_NONCE1_W2   CTR_NONCE1_W3   REGION1_BOT     
REGION1_TOP     STATUS          
输入 p.BEE.{reg_name} 以查看寄存器的详细信息
type p.BEE.{reg_name} to check details of registers
</lang>
#### p.BEE.CTRL
<lang=dft>
 (rw)  [1;33m0x403ec000[0m (0x403ec000 + 0x0000)
BEE Control Register
 (rw) (01)  [0;32mBEE_ENABLE[0m  - [00:00] -  BEE enable bit
      0 - BEE_ENABLE_0 :
         Disable BEE
      0x1 - BEE_ENABLE_1 :
         Enable BEE
 (rw) (01)  [0;32mCTRL_CLK_EN[0m  - [01:01] -  Clock enable input, low inactive
 (rw) (01)  [0;32mCTRL_SFTRST_N[0m  - [02:02] -  Soft reset input, low active
 (rw) (01)  [0;32mKEY_VALID[0m  - [04:04] -  AES-128 key is ready
 (rw) (01)  [0;32mKEY_REGION_SEL[0m  - [05:05] -  AES key region select
      0 - KEY_REGION_SEL_0 :
         Load AES key for region0
      0x1 - KEY_REGION_SEL_1 :
         Load AES key for region1
 (rw) (01)  [0;32mAC_PROT_EN[0m  - [06:06] -  Enable access permission control When AC_PROT_EN is asserted, all encrypted reg
 ions are limited to be ARM core access only
 (rw) (01)  [0;32mLITTLE_ENDIAN[0m  - [07:07] -  Endian swap control for the 16 bytes input and output data of AES core.
      0 - LITTLE_ENDIAN_0 :
         The input and output data of the AES core is swapped as below: {B15,B14
         ,B13,B12,B11,B10,B9,B8, B7,B6,B5,B4,B3,B2,B1,B0} swap to {B0,B1,B2,B3,B
         4,B5,B6,B7, B8,B9,B10,B11,B12,B13,B14,B15}, where B0~B15 refers to Byte
         0 to Byte15.
      0x1 - LITTLE_ENDIAN_1 :
         The input and output data of AES core is not swapped.
 (rw) (02)  [0;32mSECURITY_LEVEL_R0[0m  - [09:08] -  Security level of the allowed access for memory region0
 (rw) (01)  [0;32mCTRL_AES_MODE_R0[0m  - [10:10] -  AES mode of region0
      0 - CTRL_AES_MODE_R0_0 :
         ECB
      0x1 - CTRL_AES_MODE_R0_1 :
         CTR
 (rw) (02)  [0;32mSECURITY_LEVEL_R1[0m  - [13:12] -  Security level of the allowed access for memory region1
 (rw) (01)  [0;32mCTRL_AES_MODE_R1[0m  - [14:14] -  AES mode of region1
      0 - CTRL_AES_MODE_R1_0 :
         ECB
      0x1 - CTRL_AES_MODE_R1_1 :
         CTR
 (rw) (01)  [0;32mBEE_ENABLE_LOCK[0m  - [16:16] -  Lock bit for bee_enable
 (rw) (01)  [0;32mCTRL_CLK_EN_LOCK[0m  - [17:17] -  Lock bit for ctrl_clk_en
 (rw) (01)  [0;32mCTRL_SFTRST_N_LOCK[0m  - [18:18] -  Lock bit for ctrl_sftrst
 (rw) (01)  [0;32mREGION1_ADDR_LOCK[0m  - [19:19] -  Lock bit for region1 address boundary
 (rw) (01)  [0;32mKEY_VALID_LOCK[0m  - [20:20] -  Lock bit for key_valid
 (rw) (01)  [0;32mKEY_REGION_SEL_LOCK[0m  - [21:21] -  Lock bit for key_region_sel
 (rw) (01)  [0;32mAC_PROT_EN_LOCK[0m  - [22:22] -  Lock bit for ac_prot
 (rw) (01)  [0;32mLITTLE_ENDIAN_LOCK[0m  - [23:23] -  Lock bit for little_endian
 (rw) (02)  [0;32mSECURITY_LEVEL_R0_LOCK[0m  - [25:24] -  Lock bits for security_level_r0
 (rw) (01)  [0;32mCTRL_AES_MODE_R0_LOCK[0m  - [26:26] -  Lock bit for region0 ctrl_aes_mode
 (rw) (01)  [0;32mREGION0_KEY_LOCK[0m  - [27:27] -  Lock bit for region0 AES key
 (rw) (02)  [0;32mSECURITY_LEVEL_R1_LOCK[0m  - [29:28] -  Lock bits for security_level_r1
 (rw) (01)  [0;32mCTRL_AES_MODE_R1_LOCK[0m  - [30:30] -  Lock bit for region1 ctrl_aes_mode
 (rw) (01)  [0;32mREGION1_KEY_LOCK[0m  - [31:31] -  Lock bit for region1 AES key
</lang>
#### bee.ctrl
<link=p.BEE.CTRL>
#### BEE.ADDR_OFFSET1
<link=p.BEE.ADDR_OFFSET1>
#### p.BEE.AES_KEY0_W0
<lang=dft>
 (rw)  [1;33m0x403ec00c[0m (0x403ec000 + 0x000c)
no description available
 (rw) (32)  [0;32mKEY0[0m  - [31:00] -  AES 128 key from software
</lang>
#### BEE.AES_KEY0_W0
<link=p.BEE.AES_KEY0_W0>
#### p.bee.ctr_nonce0_w2
<link=p.BEE.CTR_NONCE0_W2>
#### bee.region1_bot
<link=p.BEE.REGION1_BOT>
#### p.LPI2C1.MIER
<lang=dft>
 (rw)  [1;33m0x403f0018[0m (0x403f0000 + 0x0018)
Master Interrupt Enable Register
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
 (rw) (01)  [0;32mEPIE[0m  - [08:08] -  End Packet Interrupt Enable
      0 - EPIE_0 :
         Disabled
      0x1 - EPIE_1 :
         Enabled
 (rw) (01)  [0;32mSDIE[0m  - [09:09] -  STOP Detect Interrupt Enable
      0 - SDIE_0 :
         Disabled
      0x1 - SDIE_1 :
         Enabled
 (rw) (01)  [0;32mNDIE[0m  - [10:10] -  NACK Detect Interrupt Enable
      0 - NDIE_0 :
         Disabled
      0x1 - NDIE_1 :
         Enabled
 (rw) (01)  [0;32mALIE[0m  - [11:11] -  Arbitration Lost Interrupt Enable
      0 - ALIE_0 :
         Disabled
      0x1 - ALIE_1 :
         Enabled
 (rw) (01)  [0;32mFEIE[0m  - [12:12] -  FIFO Error Interrupt Enable
      0 - FEIE_0 :
         Enabled
      0x1 - FEIE_1 :
         Disabled
 (rw) (01)  [0;32mPLTIE[0m  - [13:13] -  Pin Low Timeout Interrupt Enable
      0 - PLTIE_0 :
         Disabled
      0x1 - PLTIE_1 :
         Enabled
 (rw) (01)  [0;32mDMIE[0m  - [14:14] -  Data Match Interrupt Enable
      0 - DMIE_0 :
         Disabled
      0x1 - DMIE_1 :
         Enabled
</lang>
#### p.lpi2c1.mier
<link=p.LPI2C1.MIER>
#### p.LPI2C1.MCFGR3
<lang=dft>
 (rw)  [1;33m0x403f002c[0m (0x403f0000 + 0x002c)
Master Configuration Register 3
 (rw) (12)  [0;32mPINLOW[0m  - [19:08] -  Pin Low Timeout
</lang>
#### p.lpi2c1.sier
<link=p.LPI2C1.SIER>
#### lpi2c1.scfgr1
<link=p.LPI2C1.SCFGR1>
#### p.LPI2C1.SAMR
<lang=dft>
 (rw)  [1;33m0x403f0140[0m (0x403f0000 + 0x0140)
Slave Address Match Register
 (rw) (10)  [0;32mADDR0[0m  - [10:01] -  Address 0 Value
 (rw) (10)  [0;32mADDR1[0m  - [26:17] -  Address 1 Value
</lang>
#### lpi2c2.param
<link=p.LPI2C2.PARAM>
#### LPI2C2.MCCR0
<link=p.LPI2C2.MCCR0>
#### LPI2C2.MFSR
<link=p.LPI2C2.MFSR>
#### LPI2C2.SCR
<link=p.LPI2C2.SCR>
#### LPI2C2.SDER
<link=p.LPI2C2.SDER>
#### LPI2C3.MSR
<link=p.LPI2C3.MSR>
#### p.LPI2C3.MDER
<lang=dft>
 (rw)  [1;33m0x403f801c[0m (0x403f8000 + 0x001c)
Master DMA Enable Register
 (rw) (01)  [0;32mTDDE[0m  - [00:00] -  Transmit Data DMA Enable
      0 - TDDE_0 :
         DMA request is disabled
      0x1 - TDDE_1 :
         DMA request is enabled
 (rw) (01)  [0;32mRDDE[0m  - [01:01] -  Receive Data DMA Enable
      0 - RDDE_0 :
         DMA request is disabled
      0x1 - RDDE_1 :
         DMA request is enabled
</lang>
#### lpi2c3.mccr1
<link=p.LPI2C3.MCCR1>
#### LPI2C3.MCCR1
<link=p.LPI2C3.MCCR1>
#### p.LPI2C3.MFCR
<lang=dft>
 (rw)  [1;33m0x403f8058[0m (0x403f8000 + 0x0058)
Master FIFO Control Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit FIFO Watermark
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive FIFO Watermark
</lang>
#### LPI2C3.MFCR
<link=p.LPI2C3.MFCR>
#### p.lpi2c3.scfgr2
<link=p.LPI2C3.SCFGR2>
#### LPI2C4.MIER
<link=p.LPI2C4.MIER>
#### p.lpi2c4.mdmr
<link=p.LPI2C4.MDMR>
#### lpi2c4.mdmr
<link=p.LPI2C4.MDMR>
#### p.lpi2c4.scr
<link=p.LPI2C4.SCR>
#### p.lpi2c4.scfgr2
<link=p.LPI2C4.SCFGR2>
#### p.systemcontrol.icsr
<link=p.SYSTEMCONTROL.ICSR>
#### p.systemcontrol.scr
<link=p.SYSTEMCONTROL.SCR>
#### p.SYSTEMCONTROL.CCR
<lang=dft>
 (rw)  [1;33m0xe000ed14[0m (0xe000e000 + 0x0d14)
Configuration and Control Register
 (rw) (01)  [0;32mNONBASETHRDENA[0m  - [00:00] -  Indicates how the processor enters Thread mode
      0 - NONBASETHRDENA_0 :
         processor can enter Thread mode only when no exception is active
      0x1 - NONBASETHRDENA_1 :
         processor can enter Thread mode from any level under the control of an 
         EXC_RETURN value
 (rw) (01)  [0;32mUSERSETMPEND[0m  - [01:01] -  Enables unprivileged software access to the STIR
      0 - USERSETMPEND_0 :
         disable
      0x1 - USERSETMPEND_1 :
         enable
 (rw) (01)  [0;32mUNALIGN_TRP[0m  - [03:03] -  Enables unaligned access traps
      0 - UNALIGN_TRP_0 :
         do not trap unaligned halfword and word accesses
      0x1 - UNALIGN_TRP_1 :
         trap unaligned halfword and word accesses
 (rw) (01)  [0;32mDIV_0_TRP[0m  - [04:04] -  Enables faulting or halting when the processor executes an SDIV or UDIV instruc
 tion with a divisor of 0
      0 - DIV_0_TRP_0 :
         do not trap divide by 0
      0x1 - DIV_0_TRP_1 :
         trap divide by 0
 (rw) (01)  [0;32mBFHFNMIGN[0m  - [08:08] -  Enables handlers with priority -1 or -2 to ignore data BusFaults caused by load
  and store instructions.
      0 - BFHFNMIGN_0 :
         data bus faults caused by load and store instructions cause a lock-up
      0x1 - BFHFNMIGN_1 :
         handlers running at priority -1 and -2 ignore data bus faults caused by
          load and store instructions
 (rw) (01)  [0;32mSTKALIGN[0m  - [09:09] -  Indicates stack alignment on exception entry
      0 - STKALIGN_0 :
         4-byte aligned
      0x1 - STKALIGN_1 :
         8-byte aligned
 (rw) (01)  [0;32mDC[0m  - [16:16] -  Enables L1 data cache.
      0 - DC_0 :
         L1 data cache disabled
      0x1 - DC_1 :
         L1 data cache enabled
 (rw) (01)  [0;32mIC[0m  - [17:17] -  Enables L1 instruction cache.
      0 - IC_0 :
         L1 instruction cache disabled
      0x1 - IC_1 :
         L1 instruction cache enabled
 (ro) (01)  [0;32mBP[0m  - [18:18] -  Always reads-as-one. It indicates branch prediction is enabled.
</lang>
#### systemcontrol.shpr1
<link=p.SYSTEMCONTROL.SHPR1>
#### p.systemcontrol.bfar
<link=p.SYSTEMCONTROL.BFAR>
#### SystemControl.ID_PFR0
<link=p.SYSTEMCONTROL.ID_PFR0>
#### SystemControl.ID_MMFR3
<link=p.SYSTEMCONTROL.ID_MMFR3>
#### p.systemcontrol.id_isar4
<link=p.SYSTEMCONTROL.ID_ISAR4>
#### p.SYSTEMCONTROL.CTR
<lang=dft>
 (ro)  [1;33m0xe000ed7c[0m (0xe000e000 + 0x0d7c)
Cache Type register
 (ro) (04)  [0;32mIMINLINE[0m  - [03:00] -  Log2 of the number of words in the smallest cache line of all the instruction c
 aches that are controlled by the processor.
 (ro) (04)  [0;32mDMINLINE[0m  - [19:16] -  Log2 of the number of words in the smallest cache line of all the data caches a
 nd unified caches that are controlled by the processor.
 (ro) (04)  [0;32mERG[0m  - [23:20] -  Exclusives Reservation Granule. The maximum size of the reservation granule tha
 t has been implemented for the Load-Exclusive and Store-Exclusive instructions,
  encoded as Log2 of the number of words.
 (ro) (04)  [0;32mCWG[0m  - [27:24] -  Cache Write-back Granule. The maximum size of memory that can be overwritten as
  a result of the eviction of a cache entry that has had a memory location in it
  modified, encoded as Log2 of the number of words.
 (ro) (03)  [0;32mFORMAT[0m  - [31:29] -  Indicates the implemented CTR format.
      0x4 - FORMAT_4 :
         ARMv7 format.
</lang>
#### SystemControl.CPACR
<link=p.SYSTEMCONTROL.CPACR>
#### p.SYSTEMCONTROL.ICIALLU
<lang=dft>
 (wo)  [1;33m0xe000ef50[0m (0xe000e000 + 0x0f50)
Instruction cache invalidate all to Point of Unification (PoU)
 (wo) (32)  [0;32mICIALLU[0m  - [31:00] -  I-cache invalidate all to PoU
</lang>
#### p.systemcontrol.dccimvac
<link=p.SYSTEMCONTROL.DCCIMVAC>
#### p.systemcontrol.cm7_cacr
<link=p.SYSTEMCONTROL.CM7_CACR>
#### systemcontrol.cm7_cacr
<link=p.SYSTEMCONTROL.CM7_CACR>
#### p.NVIC.NVICISER0
<lang=dft>
 (rw)  [1;33m0xe000e100[0m (0xe000e100 + 0x0000)
Interrupt Set Enable Register n
 (rw) (32)  [0;32mSETENA[0m  - [31:00] -  Interrupt set enable bits
</lang>
#### NVIC.NVICISER2
<link=p.NVIC.NVICISER2>
#### nvic.nvicicer1
<link=p.NVIC.NVICICER1>
#### p.NVIC.NVICICER3
<lang=dft>
 (rw)  [1;33m0xe000e18c[0m (0xe000e100 + 0x008c)
Interrupt Clear Enable Register n
 (rw) (32)  [0;32mCLRENA[0m  - [31:00] -  Interrupt clear-enable bits
</lang>
#### p.NVIC.NVICISPR0
<lang=dft>
 (rw)  [1;33m0xe000e200[0m (0xe000e100 + 0x0100)
Interrupt Set Pending Register n
 (rw) (32)  [0;32mSETPEND[0m  - [31:00] -  Interrupt set-pending bits
</lang>
#### nvic.nvicicpr3
<link=p.NVIC.NVICICPR3>
#### nvic.nvicip4
<link=p.NVIC.NVICIP4>
#### p.nvic.nvicip6
<link=p.NVIC.NVICIP6>
#### NVIC.NVICIP6
<link=p.NVIC.NVICIP6>
#### p.NVIC.NVICIP9
<lang=dft>
 (rw)  [1;33m0xe000e409[0m (0xe000e100 + 0x0309)
Interrupt Priority Register 9
 (rw) (04)  [0;32mPRI9[0m  - [07:04] -  Priority of the INT_DMA9_DMA25 interrupt 9
</lang>
#### nvic.nvicip11
<link=p.NVIC.NVICIP11>
#### NVIC.NVICIP17
<link=p.NVIC.NVICIP17>
#### p.NVIC.NVICIP19
<lang=dft>
 (rw)  [1;33m0xe000e413[0m (0xe000e100 + 0x0313)
Interrupt Priority Register 19
 (rw) (04)  [0;32mPRI19[0m  - [07:04] -  Priority of the INT_CORE interrupt 19
</lang>
#### nvic.nvicip20
<link=p.NVIC.NVICIP20>
#### NVIC.NVICIP22
<link=p.NVIC.NVICIP22>
#### p.NVIC.NVICIP24
<lang=dft>
 (rw)  [1;33m0xe000e418[0m (0xe000e100 + 0x0318)
Interrupt Priority Register 24
 (rw) (04)  [0;32mPRI24[0m  - [07:04] -  Priority of the INT_LPUART5 interrupt 24
</lang>
#### NVIC.NVICIP31
<link=p.NVIC.NVICIP31>
#### p.NVIC.NVICIP37
<lang=dft>
 (rw)  [1;33m0xe000e425[0m (0xe000e100 + 0x0325)
Interrupt Priority Register 37
 (rw) (04)  [0;32mPRI37[0m  - [07:04] -  Priority of the INT_CAN2 interrupt 37
</lang>
#### p.nvic.nvicip42
<link=p.NVIC.NVICIP42>
#### p.NVIC.NVICIP47
<lang=dft>
 (rw)  [1;33m0xe000e42f[0m (0xe000e100 + 0x032f)
Interrupt Priority Register 47
 (rw) (04)  [0;32mPRI47[0m  - [07:04] -  Priority of the INT_SNVS_HP_WRAPPER_TZ interrupt 47
</lang>
#### NVIC.NVICIP48
<link=p.NVIC.NVICIP48>
#### p.nvic.nvicip51
<link=p.NVIC.NVICIP51>
#### p.NVIC.NVICIP54
<lang=dft>
 (rw)  [1;33m0xe000e436[0m (0xe000e100 + 0x0336)
Interrupt Priority Register 54
 (rw) (04)  [0;32mPRI54[0m  - [07:04] -  Priority of the INT_SJC interrupt 54
</lang>
#### p.nvic.nvicip64
<link=p.NVIC.NVICIP64>
#### p.NVIC.NVICIP68
<lang=dft>
 (rw)  [1;33m0xe000e444[0m (0xe000e100 + 0x0344)
Interrupt Priority Register 68
 (rw) (04)  [0;32mPRI68[0m  - [07:04] -  Priority of the INT_ADC2 interrupt 68
</lang>
#### nvic.nvicip73
<link=p.NVIC.NVICIP73>
#### p.nvic.nvicip77
<link=p.NVIC.NVICIP77>
#### p.NVIC.NVICIP83
<lang=dft>
 (rw)  [1;33m0xe000e453[0m (0xe000e100 + 0x0353)
Interrupt Priority Register 83
 (rw) (04)  [0;32mPRI83[0m  - [07:04] -  Priority of the INT_GPIO2_Combined_16_31 interrupt 83
</lang>
#### p.nvic.nvicip86
<link=p.NVIC.NVICIP86>
#### nvic.nvicip89
<link=p.NVIC.NVICIP89>
#### p.NVIC.NVICIP90
<lang=dft>
 (rw)  [1;33m0xe000e45a[0m (0xe000e100 + 0x035a)
Interrupt Priority Register 90
 (rw) (04)  [0;32mPRI90[0m  - [07:04] -  Priority of the INT_FLEXIO1 interrupt 90
</lang>
#### p.nvic.nvicip95
<link=p.NVIC.NVICIP95>
#### NVIC.NVICIP98
<link=p.NVIC.NVICIP98>
#### p.nvic.nvicip101
<link=p.NVIC.NVICIP101>
#### NVIC.NVICIP101
<link=p.NVIC.NVICIP101>
#### nvic.nvicip107
<link=p.NVIC.NVICIP107>
#### p.nvic.nvicip112
<link=p.NVIC.NVICIP112>
#### nvic.nvicip114
<link=p.NVIC.NVICIP114>
#### p.NVIC.NVICIP115
<lang=dft>
 (rw)  [1;33m0xe000e473[0m (0xe000e100 + 0x0373)
Interrupt Priority Register 115
 (rw) (04)  [0;32mPRI115[0m  - [07:04] -  Priority of the INT_ENET_1588_Timer interrupt 115
</lang>
#### NVIC.NVICIP116
<link=p.NVIC.NVICIP116>
#### nvic.nvicip121
<link=p.NVIC.NVICIP121>
#### p.NVIC.NVICIP124
<lang=dft>
 (rw)  [1;33m0xe000e47c[0m (0xe000e100 + 0x037c)
Interrupt Priority Register 124
 (rw) (04)  [0;32mPRI124[0m  - [07:04] -  Priority of the INT_ACMP2 interrupt 124
</lang>
#### NVIC.NVICIP130
<link=p.NVIC.NVICIP130>
#### nvic.nvicip132
<link=p.NVIC.NVICIP132>
#### p.NVIC.NVICIP133
<lang=dft>
 (rw)  [1;33m0xe000e485[0m (0xe000e100 + 0x0385)
Interrupt Priority Register 133
 (rw) (04)  [0;32mPRI133[0m  - [07:04] -  Priority of the INT_TMR1 interrupt 133
</lang>
#### opacr
<link=OPACR>
#### LDVAL0
<link=p.PIT.LDVAL0>
#### CVAL2
<link=p.PIT.CVAL2>
#### TFLG2
<link=p.PIT.TFLG2>
#### tflg2
<link=TFLG2>
#### tctrl3
<link=TCTRL3>
#### MCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PIT.MCR
   p.CAN1.MCR
   p.CAN2.MCR
   p.CAN3.MCR
   p.SEMC.MCR
   p.LPI2C1.MCR
   p.LPI2C2.MCR
   p.LPI2C3.MCR
   p.LPI2C4.MCR
#### scr
<link=SCR>
#### gpr3
<link=GPR3>
#### SW_MUX_CTL_PAD_PMIC_ON_REQ
<link=p.IOMUXC_SNVS.SW_MUX_CTL_PAD_PMIC_ON_REQ>
#### gpr12
<link=GPR12>
#### GPR18
<link=p.IOMUXC_GPR.GPR18>
#### gpr23
<link=GPR23>
#### gpr34
<link=GPR34>
#### INT_SIG_EN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXRAM.INT_SIG_EN
   p.TSC.INT_SIG_EN
#### CMPL
<link=p.EWM.CMPL>
#### WIN
<link=p.RTWDOG.WIN>
#### HC2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.HC2
   p.ADC2.HC2
#### R1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.R1
   p.ADC2.R1
#### r3
<link=R3>
#### GS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.GS
   p.ADC2.GS
#### FRQMIN
<link=p.TRNG.FRQMIN>
#### scr2c
<link=SCR2C>
#### SCR3L
<link=p.TRNG.SCR3L>
#### SCR4L
<link=p.TRNG.SCR4L>
#### ENT[0]
<link=p.TRNG.ENT[0]>
#### ent[8]
<link=ENT[8]>
#### ENT[10]
<link=p.TRNG.ENT[10]>
#### PKRCNT98
<link=p.TRNG.PKRCNT98>
#### PKRCNTFE
<link=p.TRNG.PKRCNTFE>
#### hphacr
<link=HPHACR>
#### lplr
<link=LPLR>
#### LPMKCR
<link=p.SNVS.LPMKCR>
#### lpgpr0_legacy_alias
<link=LPGPR0_legacy_alias>
#### LPZMKR[2]
<link=p.SNVS.LPZMKR[2]>
#### LPZMKR[7]
<link=p.SNVS.LPZMKR[7]>
#### pll_arm
<link=PLL_ARM>
#### PLL_ARM_SET
<link=p.CCM_ANALOG.PLL_ARM_SET>
#### pll_usb2_clr
<link=PLL_USB2_CLR>
#### PFD_528
<link=p.CCM_ANALOG.PFD_528>
#### misc0_clr
<link=MISC0_CLR>
#### misc2_set
<link=MISC2_SET>
#### reg_core
<link=REG_CORE>
#### tempsense0
<link=TEMPSENSE0>
#### tempsense0_tog
<link=TEMPSENSE0_TOG>
#### usb1_vbus_detect_tog
<link=USB1_VBUS_DETECT_TOG>
#### USB1_CHRG_DETECT_TOG
<link=p.USB_ANALOG.USB1_CHRG_DETECT_TOG>
#### USB1_LOOPBACK
<link=p.USB_ANALOG.USB1_LOOPBACK>
#### usb1_loopback
<link=USB1_LOOPBACK>
#### USB2_CHRG_DETECT
<link=p.USB_ANALOG.USB2_CHRG_DETECT>
#### USB2_LOOPBACK_SET
<link=p.USB_ANALOG.USB2_LOOPBACK_SET>
#### LOWPWR_CTRL
<link=p.XTALOSC24M.LOWPWR_CTRL>
#### osc_config1_tog
<link=OSC_CONFIG1_TOG>
#### OSC_CONFIG2_TOG
<link=p.XTALOSC24M.OSC_CONFIG2_TOG>
#### TX_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.TX_SET
   p.USBPHY2.TX_SET
#### tx_clr
<link=TX_CLR>
#### TX_TOG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.TX_TOG
   p.USBPHY2.TX_TOG
#### debug_set
<link=DEBUG_SET>
#### version
<link=VERSION>
#### CSL3
<link=p.CSU.CSL3>
#### CSL14
<link=p.CSU.CSL14>
#### CSL25
<link=p.CSU.CSL25>
#### csl27
<link=CSL27>
#### SA
<link=p.CSU.SA>
#### MEASEURE_VALUE
<link=p.TSC.MEASEURE_VALUE>
#### DCHPRI1
<link=p.DMA0.DCHPRI1>
#### dchpri1
<link=DCHPRI1>
#### DCHPRI14
<link=p.DMA0.DCHPRI14>
#### dchpri14
<link=DCHPRI14>
#### DCHPRI25
<link=p.DMA0.DCHPRI25>
#### dchpri25
<link=DCHPRI25>
#### tcd0_biter_elinkyes
<link=TCD0_BITER_ELINKYES>
#### TCD1_ATTR
<link=p.DMA0.TCD1_ATTR>
#### TCD1_CITER_ELINKNO
<link=p.DMA0.TCD1_CITER_ELINKNO>
#### tcd2_soff
<link=TCD2_SOFF>
#### TCD2_NBYTES_MLOFFNO
<link=p.DMA0.TCD2_NBYTES_MLOFFNO>
#### TCD2_DADDR
<link=p.DMA0.TCD2_DADDR>
#### TCD2_DOFF
<link=p.DMA0.TCD2_DOFF>
#### TCD2_CITER_ELINKNO
<link=p.DMA0.TCD2_CITER_ELINKNO>
#### tcd4_nbytes_mloffno
<link=TCD4_NBYTES_MLOFFNO>
#### tcd7_attr
<link=TCD7_ATTR>
#### TCD7_BITER_ELINKNO
<link=p.DMA0.TCD7_BITER_ELINKNO>
#### TCD9_NBYTES_MLOFFNO
<link=p.DMA0.TCD9_NBYTES_MLOFFNO>
#### tcd9_nbytes_mloffno
<link=TCD9_NBYTES_MLOFFNO>
#### TCD9_CITER_ELINKYES
<link=p.DMA0.TCD9_CITER_ELINKYES>
#### TCD10_NBYTES_MLOFFYES
<link=p.DMA0.TCD10_NBYTES_MLOFFYES>
#### TCD11_NBYTES_MLOFFNO
<link=p.DMA0.TCD11_NBYTES_MLOFFNO>
#### TCD11_CITER_ELINKYES
<link=p.DMA0.TCD11_CITER_ELINKYES>
#### tcd11_citer_elinkyes
<link=TCD11_CITER_ELINKYES>
#### tcd11_dlastsga
<link=TCD11_DLASTSGA>
#### tcd13_nbytes_mlno
<link=TCD13_NBYTES_MLNO>
#### tcd14_attr
<link=TCD14_ATTR>
#### tcd14_slast
<link=TCD14_SLAST>
#### tcd14_citer_elinkno
<link=TCD14_CITER_ELINKNO>
#### tcd14_biter_elinkno
<link=TCD14_BITER_ELINKNO>
#### tcd15_nbytes_mloffno
<link=TCD15_NBYTES_MLOFFNO>
#### tcd16_soff
<link=TCD16_SOFF>
#### tcd17_doff
<link=TCD17_DOFF>
#### TCD17_DLASTSGA
<link=p.DMA0.TCD17_DLASTSGA>
#### TCD17_BITER_ELINKNO
<link=p.DMA0.TCD17_BITER_ELINKNO>
#### tcd18_dlastsga
<link=TCD18_DLASTSGA>
#### tcd18_csr
<link=TCD18_CSR>
#### tcd19_nbytes_mlno
<link=TCD19_NBYTES_MLNO>
#### TCD20_NBYTES_MLOFFNO
<link=p.DMA0.TCD20_NBYTES_MLOFFNO>
#### TCD21_SADDR
<link=p.DMA0.TCD21_SADDR>
#### TCD21_DADDR
<link=p.DMA0.TCD21_DADDR>
#### tcd21_citer_elinkyes
<link=TCD21_CITER_ELINKYES>
#### tcd21_biter_elinkno
<link=TCD21_BITER_ELINKNO>
#### TCD22_DADDR
<link=p.DMA0.TCD22_DADDR>
#### TCD22_BITER_ELINKNO
<link=p.DMA0.TCD22_BITER_ELINKNO>
#### tcd23_nbytes_mlno
<link=TCD23_NBYTES_MLNO>
#### TCD23_CITER_ELINKYES
<link=p.DMA0.TCD23_CITER_ELINKYES>
#### tcd23_csr
<link=TCD23_CSR>
#### TCD24_SADDR
<link=p.DMA0.TCD24_SADDR>
#### tcd24_daddr
<link=TCD24_DADDR>
#### TCD25_ATTR
<link=p.DMA0.TCD25_ATTR>
#### TCD25_DOFF
<link=p.DMA0.TCD25_DOFF>
#### tcd26_soff
<link=TCD26_SOFF>
#### TCD26_NBYTES_MLOFFNO
<link=p.DMA0.TCD26_NBYTES_MLOFFNO>
#### tcd26_daddr
<link=TCD26_DADDR>
#### tcd27_dlastsga
<link=TCD27_DLASTSGA>
#### tcd28_soff
<link=TCD28_SOFF>
#### tcd28_biter_elinkyes
<link=TCD28_BITER_ELINKYES>
#### TCD30_CSR
<link=p.DMA0.TCD30_CSR>
#### tcd31_attr
<link=TCD31_ATTR>
#### TCD31_NBYTES_MLOFFYES
<link=p.DMA0.TCD31_NBYTES_MLOFFYES>
#### TCD31_CITER_ELINKYES
<link=p.DMA0.TCD31_CITER_ELINKYES>
#### CHCFG[4]
<link=p.DMAMUX.CHCFG[4]>
#### chcfg[11]
<link=CHCFG[11]>
#### CHCFG[12]
<link=p.DMAMUX.CHCFG[12]>
#### chcfg[16]
<link=CHCFG[16]>
#### CHCFG[18]
<link=p.DMAMUX.CHCFG[18]>
#### chcfg[24]
<link=CHCFG[24]>
#### CPU_CTRL
<link=p.PGC.CPU_CTRL>
#### CSR
<link=p.CCM.CSR>
#### cscdr1
<link=CSCDR1>
#### clpcr
<link=CLPCR>
#### CIMR
<link=p.CCM.CIMR>
#### cimr
<link=CIMR>
#### CCGR1
<link=p.CCM.CCGR1>
#### ccgr1
<link=CCGR1>
#### rompatch13a
<link=ROMPATCH13A>
#### pin
<link=PIN>
#### SHIFTCTL[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTCTL[1]
   p.FLEXIO2.SHIFTCTL[1]
   p.FLEXIO3.SHIFTCTL[1]
#### shiftcfg[1]
<link=SHIFTCFG[1]>
#### shiftbufbbs[2]
<link=SHIFTBUFBBS[2]>
#### TIMCMP[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCMP[0]
   p.FLEXIO2.TIMCMP[0]
   p.FLEXIO3.TIMCMP[0]
#### CRCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.CRCR
   p.CAN2.CRCR
   p.CAN3.CRCR
#### rximr0
<link=RXIMR0>
#### rximr11
<link=RXIMR11>
#### RXIMR19
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR19
   p.CAN2.RXIMR19
#### RXIMR28
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR28
   p.CAN2.RXIMR28
#### rximr29
<link=RXIMR29>
#### rximr37
<link=RXIMR37>
#### RXIMR55
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR55
   p.CAN2.RXIMR55
#### CBT
<link=p.CAN3.CBT>
#### CS0
<link=p.CAN3.CS0>
#### MB0_8B_WORD0
<link=p.CAN3.MB0_8B_WORD0>
#### mb0_8b_word1
<link=MB0_8B_WORD1>
#### MB0_64B_WORD3
<link=p.CAN3.MB0_64B_WORD3>
#### mb0_32b_word4
<link=MB0_32B_WORD4>
#### mb0_64b_word5
<link=MB0_64B_WORD5>
#### mb1_16b_word0
<link=MB1_16B_WORD0>
#### MB0_64B_WORD10
<link=p.CAN3.MB0_64B_WORD10>
#### word13
<link=WORD13>
#### cs4
<link=CS4>
#### MB1_32B_WORD6
<link=p.CAN3.MB1_32B_WORD6>
#### word04
<link=WORD04>
#### MB2_32B_WORD0
<link=p.CAN3.MB2_32B_WORD0>
#### mb3_16b_word3
<link=MB3_16B_WORD3>
#### mb1_64b_word4
<link=MB1_64B_WORD4>
#### mb2_32b_word5
<link=MB2_32B_WORD5>
#### MB7_8B_CS
<link=p.CAN3.MB7_8B_CS>
#### WORD17
<link=p.CAN3.WORD17>
#### MB1_64B_WORD12
<link=p.CAN3.MB1_64B_WORD12>
#### mb2_64b_id
<link=MB2_64B_ID>
#### WORD09
<link=p.CAN3.WORD09>
#### mb4_32b_word0
<link=MB4_32B_WORD0>
#### MB7_16B_CS
<link=p.CAN3.MB7_16B_CS>
#### WORD110
<link=p.CAN3.WORD110>
#### CS11
<link=p.CAN3.CS11>
#### MB5_32B_WORD2
<link=p.CAN3.MB5_32B_WORD2>
#### word114
<link=WORD114>
#### mb10_16b_cs
<link=MB10_16B_CS>
#### ID15
<link=p.CAN3.ID15>
#### MB10_16B_ID
<link=p.CAN3.MB10_16B_ID>
#### mb10_16b_word1
<link=MB10_16B_WORD1>
#### mb6_32b_word1
<link=MB6_32B_WORD1>
#### MB3_64B_WORD8
<link=p.CAN3.MB3_64B_WORD8>
#### MB16_8B_ID
<link=p.CAN3.MB16_8B_ID>
#### MB16_8B_WORD0
<link=p.CAN3.MB16_8B_WORD0>
#### MB6_32B_WORD4
<link=p.CAN3.MB6_32B_WORD4>
#### mb16_8b_word1
<link=MB16_8B_WORD1>
#### mb3_64b_word13
<link=MB3_64B_WORD13>
#### MB3_64B_WORD15
<link=p.CAN3.MB3_64B_WORD15>
#### mb18_8b_cs
<link=MB18_8B_CS>
#### mb12_16b_word0
<link=MB12_16B_WORD0>
#### mb19_8b_cs
<link=MB19_8B_CS>
#### mb4_64b_word2
<link=MB4_64B_WORD2>
#### MB12_16B_WORD3
<link=p.CAN3.MB12_16B_WORD3>
#### MB13_16B_CS
<link=p.CAN3.MB13_16B_CS>
#### WORD019
<link=p.CAN3.WORD019>
#### MB13_16B_ID
<link=p.CAN3.MB13_16B_ID>
#### MB4_64B_WORD8
<link=p.CAN3.MB4_64B_WORD8>
#### word020
<link=WORD020>
#### WORD121
<link=p.CAN3.WORD121>
#### mb5_64b_cs
<link=MB5_64B_CS>
#### MB9_32B_CS
<link=p.CAN3.MB9_32B_CS>
#### MB5_64B_ID
<link=p.CAN3.MB5_64B_ID>
#### mb23_8b_id
<link=MB23_8B_ID>
#### MB9_32B_WORD1
<link=p.CAN3.MB9_32B_WORD1>
#### mb5_64b_word3
<link=MB5_64B_WORD3>
#### mb16_16b_cs
<link=MB16_16B_CS>
#### MB16_16B_ID
<link=p.CAN3.MB16_16B_ID>
#### mb9_32b_word7
<link=MB9_32B_WORD7>
#### cs25
<link=CS25>
#### MB5_64B_WORD8
<link=p.CAN3.MB5_64B_WORD8>
#### mb10_32b_id
<link=MB10_32B_ID>
#### mb5_64b_word10
<link=MB5_64B_WORD10>
#### word125
<link=WORD125>
#### CS28
<link=p.CAN3.CS28>
#### MB6_64B_WORD2
<link=p.CAN3.MB6_64B_WORD2>
#### mb11_32b_word5
<link=MB11_32B_WORD5>
#### mb6_64b_word8
<link=MB6_64B_WORD8>
#### MB11_32B_WORD7
<link=p.CAN3.MB11_32B_WORD7>
#### MB30_8B_ID
<link=p.CAN3.MB30_8B_ID>
#### mb6_64b_word11
<link=MB6_64B_WORD11>
#### mb30_8b_word0
<link=MB30_8B_WORD0>
#### MB20_16B_WORD2
<link=p.CAN3.MB20_16B_WORD2>
#### MB21_16B_WORD0
<link=p.CAN3.MB21_16B_WORD0>
#### MB32_8B_CS
<link=p.CAN3.MB32_8B_CS>
#### word132
<link=WORD132>
#### MB33_8B_CS
<link=p.CAN3.MB33_8B_CS>
#### MB22_16B_WORD1
<link=p.CAN3.MB22_16B_WORD1>
#### MB33_8B_WORD1
<link=p.CAN3.MB33_8B_WORD1>
#### mb13_32b_word4
<link=MB13_32B_WORD4>
#### MB13_32B_WORD5
<link=p.CAN3.MB13_32B_WORD5>
#### mb7_64b_word9
<link=MB7_64B_WORD9>
#### MB23_16B_WORD1
<link=p.CAN3.MB23_16B_WORD1>
#### mb8_64b_id
<link=MB8_64B_ID>
#### MB36_8B_WORD1
<link=p.CAN3.MB36_8B_WORD1>
#### id38
<link=ID38>
#### mb15_32b_word1
<link=MB15_32B_WORD1>
#### MB15_32B_WORD3
<link=p.CAN3.MB15_32B_WORD3>
#### MB8_64B_WORD9
<link=p.CAN3.MB8_64B_WORD9>
#### mb40_8b_id
<link=MB40_8B_ID>
#### CS42
<link=p.CAN3.CS42>
#### mb17_32b_word0
<link=MB17_32B_WORD0>
#### MB17_32B_WORD1
<link=p.CAN3.MB17_32B_WORD1>
#### MB43_8B_WORD1
<link=p.CAN3.MB43_8B_WORD1>
#### mb29_16b_word2
<link=MB29_16B_WORD2>
#### MB10_64B_CS
<link=p.CAN3.MB10_64B_CS>
#### id45
<link=ID45>
#### MB10_64B_ID
<link=p.CAN3.MB10_64B_ID>
#### MB18_32B_ID
<link=p.CAN3.MB18_32B_ID>
#### cs46
<link=CS46>
#### mb10_64b_word4
<link=MB10_64B_WORD4>
#### word146
<link=WORD146>
#### MB18_32B_WORD6
<link=p.CAN3.MB18_32B_WORD6>
#### MB47_8B_CS
<link=p.CAN3.MB47_8B_CS>
#### mb18_32b_word7
<link=MB18_32B_WORD7>
#### mb47_8b_word0
<link=MB47_8B_WORD0>
#### MB19_32B_WORD0
<link=p.CAN3.MB19_32B_WORD0>
#### mb10_64b_word13
<link=MB10_64B_WORD13>
#### MB48_8B_WORD1
<link=p.CAN3.MB48_8B_WORD1>
#### ID49
<link=p.CAN3.ID49>
#### MB50_8B_CS
<link=p.CAN3.MB50_8B_CS>
#### mb50_8b_id
<link=MB50_8B_ID>
#### cs51
<link=CS51>
#### mb11_64b_word4
<link=MB11_64B_WORD4>
#### word051
<link=WORD051>
#### mb34_16b_word1
<link=MB34_16B_WORD1>
#### MB34_16B_WORD3
<link=p.CAN3.MB34_16B_WORD3>
#### mb21_32b_id
<link=MB21_32B_ID>
#### mb21_32b_word4
<link=MB21_32B_WORD4>
#### mb54_8b_word0
<link=MB54_8B_WORD0>
#### MB36_16B_WORD1
<link=p.CAN3.MB36_16B_WORD1>
#### mb36_16b_word2
<link=MB36_16B_WORD2>
#### WORD055
<link=p.CAN3.WORD055>
#### mb57_8b_cs
<link=MB57_8B_CS>
#### MB12_64B_WORD11
<link=p.CAN3.MB12_64B_WORD11>
#### mb22_32b_word7
<link=MB22_32B_WORD7>
#### mb13_64b_id
<link=MB13_64B_ID>
#### mb23_32b_word4
<link=MB23_32B_WORD4>
#### MB39_16B_WORD0
<link=p.CAN3.MB39_16B_WORD0>
#### word159
<link=WORD159>
#### MB60_8B_ID
<link=p.CAN3.MB60_8B_ID>
#### MB40_16B_WORD0
<link=p.CAN3.MB40_16B_WORD0>
#### WORD060
<link=p.CAN3.WORD060>
#### MB61_8B_CS
<link=p.CAN3.MB61_8B_CS>
#### MB13_64B_WORD11
<link=p.CAN3.MB13_64B_WORD11>
#### MB41_16B_WORD2
<link=p.CAN3.MB41_16B_WORD2>
#### MB62_8B_WORD1
<link=p.CAN3.MB62_8B_WORD1>
#### mb62_8b_word1
<link=MB62_8B_WORD1>
#### id63
<link=ID63>
#### MB63_8B_WORD1
<link=p.CAN3.MB63_8B_WORD1>
#### rximr[1]
<link=RXIMR[1]>
#### rximr[4]
<link=RXIMR[4]>
#### RXIMR[41]
<link=p.CAN3.RXIMR[41]>
#### RXIMR[46]
<link=p.CAN3.RXIMR[46]>
#### RXIMR[52]
<link=p.CAN3.RXIMR[52]>
#### rximr[58]
<link=RXIMR[58]>
#### FDCRC
<link=p.CAN3.FDCRC>
#### erfcr
<link=ERFCR>
#### hr_time_stamp[10]
<link=HR_TIME_STAMP[10]>
#### HR_TIME_STAMP[17]
<link=p.CAN3.HR_TIME_STAMP[17]>
#### hr_time_stamp[24]
<link=HR_TIME_STAMP[24]>
#### hr_time_stamp[43]
<link=HR_TIME_STAMP[43]>
#### HR_TIME_STAMP[45]
<link=p.CAN3.HR_TIME_STAMP[45]>
#### hr_time_stamp[48]
<link=HR_TIME_STAMP[48]>
#### HR_TIME_STAMP[56]
<link=p.CAN3.HR_TIME_STAMP[56]>
#### ERFFEL[7]
<link=p.CAN3.ERFFEL[7]>
#### erffel[7]
<link=ERFFEL[7]>
#### erffel[17]
<link=ERFFEL[17]>
#### ERFFEL[33]
<link=p.CAN3.ERFFEL[33]>
#### ERFFEL[39]
<link=p.CAN3.ERFFEL[39]>
#### erffel[39]
<link=ERFFEL[39]>
#### erffel[56]
<link=ERFFEL[56]>
#### ERFFEL[64]
<link=p.CAN3.ERFFEL[64]>
#### erffel[64]
<link=ERFFEL[64]>
#### ERFFEL[70]
<link=p.CAN3.ERFFEL[70]>
#### erffel[70]
<link=ERFFEL[70]>
#### ERFFEL[92]
<link=p.CAN3.ERFFEL[92]>
#### ERFFEL[103]
<link=p.CAN3.ERFFEL[103]>
#### erffel[103]
<link=ERFFEL[103]>
#### erffel[108]
<link=ERFFEL[108]>
#### erffel[114]
<link=ERFFEL[114]>
#### erffel[125]
<link=ERFFEL[125]>
#### hold3
<link=HOLD3>
#### sctrl0
<link=SCTRL0>
#### CMPLD13
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CMPLD13
   p.TMR2.CMPLD13
   p.TMR3.CMPLD13
   p.TMR4.CMPLD13
#### CSCTRL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CSCTRL2
   p.TMR2.CSCTRL2
   p.TMR3.CSCTRL2
   p.TMR4.CSCTRL2
#### filt2
<link=FILT2>
#### enbl
<link=ENBL>
#### CRC_VALUE
<link=p.OCOTP.CRC_VALUE>
#### mem0
<link=MEM0>
#### MEM2
<link=p.OCOTP.MEM2>
#### sjc_resp0
<link=SJC_RESP0>
#### mac1
<link=MAC1>
#### GP1
<link=p.OCOTP.GP1>
#### sw_gp23
<link=SW_GP23>
#### GP30
<link=p.OCOTP.GP30>
#### SW_MUX_CTL_PAD_GPIO_EMC_18
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_18>
#### sw_mux_ctl_pad_gpio_emc_18
<link=SW_MUX_CTL_PAD_GPIO_EMC_18>
#### SW_MUX_CTL_PAD_GPIO_EMC_29
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_29>
#### sw_mux_ctl_pad_gpio_emc_29
<link=SW_MUX_CTL_PAD_GPIO_EMC_29>
#### sw_mux_ctl_pad_gpio_ad_b0_05
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_05>
#### sw_mux_ctl_pad_gpio_ad_b1_09
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_09>
#### sw_mux_ctl_pad_gpio_b0_08
<link=SW_MUX_CTL_PAD_GPIO_B0_08>
#### SW_MUX_CTL_PAD_GPIO_B0_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_09>
#### SW_MUX_CTL_PAD_GPIO_B1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_02>
#### sw_mux_ctl_pad_gpio_b1_02
<link=SW_MUX_CTL_PAD_GPIO_B1_02>
#### SW_MUX_CTL_PAD_GPIO_B1_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_15>
#### sw_mux_ctl_pad_gpio_b1_15
<link=SW_MUX_CTL_PAD_GPIO_B1_15>
#### sw_mux_ctl_pad_gpio_sd_b0_05
<link=SW_MUX_CTL_PAD_GPIO_SD_B0_05>
#### SW_MUX_CTL_PAD_GPIO_SD_B1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_02>
#### sw_mux_ctl_pad_gpio_sd_b1_09
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_09>
#### sw_pad_ctl_pad_gpio_emc_01
<link=SW_PAD_CTL_PAD_GPIO_EMC_01>
#### SW_PAD_CTL_PAD_GPIO_EMC_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_08>
#### sw_pad_ctl_pad_gpio_emc_16
<link=SW_PAD_CTL_PAD_GPIO_EMC_16>
#### sw_pad_ctl_pad_gpio_emc_27
<link=SW_PAD_CTL_PAD_GPIO_EMC_27>
#### SW_PAD_CTL_PAD_GPIO_EMC_32
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_32>
#### sw_pad_ctl_pad_gpio_emc_38
<link=SW_PAD_CTL_PAD_GPIO_EMC_38>
#### sw_pad_ctl_pad_gpio_ad_b0_09
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_09>
#### sw_pad_ctl_pad_gpio_ad_b1_02
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_02>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_04>
#### sw_pad_ctl_pad_gpio_ad_b1_15
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_15>
#### sw_pad_ctl_pad_gpio_b0_09
<link=SW_PAD_CTL_PAD_GPIO_B0_09>
#### SW_PAD_CTL_PAD_GPIO_B0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_12>
#### sw_pad_ctl_pad_gpio_b0_13
<link=SW_PAD_CTL_PAD_GPIO_B0_13>
#### SW_PAD_CTL_PAD_GPIO_B1_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_12>
#### sw_pad_ctl_pad_gpio_b1_14
<link=SW_PAD_CTL_PAD_GPIO_B1_14>
#### sw_pad_ctl_pad_gpio_sd_b0_04
<link=SW_PAD_CTL_PAD_GPIO_SD_B0_04>
#### sw_pad_ctl_pad_gpio_sd_b1_11
<link=SW_PAD_CTL_PAD_GPIO_SD_B1_11>
#### csi_data06_select_input
<link=CSI_DATA06_SELECT_INPUT>
#### csi_hsync_select_input
<link=CSI_HSYNC_SELECT_INPUT>
#### flexpwm1_pwma3_select_input
<link=FLEXPWM1_PWMA3_SELECT_INPUT>
#### FLEXPWM1_PWMB3_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMB3_SELECT_INPUT>
#### FLEXSPIB_DATA2_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIB_DATA2_SELECT_INPUT>
#### lpspi2_sdo_select_input
<link=LPSPI2_SDO_SELECT_INPUT>
#### lpspi3_sdi_select_input
<link=LPSPI3_SDI_SELECT_INPUT>
#### lpuart5_rx_select_input
<link=LPUART5_RX_SELECT_INPUT>
#### qtimer2_timer0_select_input
<link=QTIMER2_TIMER0_SELECT_INPUT>
#### sai2_mclk2_select_input
<link=SAI2_MCLK2_SELECT_INPUT>
#### USDHC2_DATA2_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA2_SELECT_INPUT>
#### USDHC2_WP_SELECT_INPUT
<link=p.IOMUXC.USDHC2_WP_SELECT_INPUT>
#### xbar1_in22_select_input
<link=XBAR1_IN22_SELECT_INPUT>
#### XBAR1_IN25_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN25_SELECT_INPUT>
#### XBAR1_IN19_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN19_SELECT_INPUT>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_05>
#### sw_mux_ctl_pad_gpio_spi_b1_03
<link=SW_MUX_CTL_PAD_GPIO_SPI_B1_03>
#### SW_PAD_CTL_PAD_GPIO_SPI_B0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_07>
#### sw_pad_ctl_pad_gpio_spi_b0_09
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_09>
#### enet2_ipp_ind_mac0_rxdata_select_input_0
<link=ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_0>
#### ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT>
#### enet2_ipp_ind_mac0_rxen_select_input
<link=ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT>
#### flexspi2_ipp_ind_io_fa_bit2_select_input
<link=FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT>
#### FLEXSPI2_IPP_IND_IO_FB_BIT1_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT1_SELECT_INPUT>
#### GPT1_IPP_IND_CLKIN_SELECT_INPUT
<link=p.IOMUXC.GPT1_IPP_IND_CLKIN_SELECT_INPUT>
#### gpt2_ipp_ind_capin1_select_input
<link=GPT2_IPP_IND_CAPIN1_SELECT_INPUT>
#### SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT
<link=p.IOMUXC.SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT>
#### sai3_ipp_ind_sai_txbclk_select_input
<link=SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT>
#### MCR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.MCR0
   p.FLEXSPI2.MCR0
#### ahbrxbuf1cr0
<link=AHBRXBUF1CR0>
#### flshcr1a1
<link=FLSHCR1A1>
#### FLSHCR1A2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHCR1A2
   p.FLEXSPI2.FLSHCR1A2
#### flshcr2b2
<link=FLSHCR2B2>
#### STS1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.STS1
   p.FLEXSPI2.STS1
   p.SEMC.STS1
#### IPRXFSTS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.IPRXFSTS
   p.FLEXSPI2.IPRXFSTS
#### rfdr[1]
<link=RFDR[1]>
#### rfdr[17]
<link=RFDR[17]>
#### RFDR[23]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[23]
   p.FLEXSPI2.RFDR[23]
#### rfdr[31]
<link=RFDR[31]>
#### TFDR[14]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[14]
   p.FLEXSPI2.TFDR[14]
#### tfdr[14]
<link=TFDR[14]>
#### LUT[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[1]
   p.FLEXSPI2.LUT[1]
#### lut[6]
<link=LUT[6]>
#### LUT[35]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[35]
   p.FLEXSPI2.LUT[35]
#### LUT[38]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[38]
   p.FLEXSPI2.LUT[38]
#### lut[38]
<link=LUT[38]>
#### LUT[40]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[40]
   p.FLEXSPI2.LUT[40]
#### LUT[54]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[54]
   p.FLEXSPI2.LUT[54]
#### lut[54]
<link=LUT[54]>
#### lut[61]
<link=LUT[61]>
#### STAT_CLR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PXP.STAT_CLR
   p.DCP.STAT_CLR
#### OUT_LRC
<link=p.PXP.OUT_LRC>
#### PS_BUF
<link=p.PXP.PS_BUF>
#### PS_OFFSET
<link=p.PXP.PS_OFFSET>
#### CTRL1_TOG
<link=p.LCDIF.CTRL1_TOG>
#### ctrl2_set
<link=CTRL2_SET>
#### CUR_BUF
<link=p.LCDIF.CUR_BUF>
#### NEXT_BUF
<link=p.LCDIF.NEXT_BUF>
#### VDCTRL0
<link=p.LCDIF.VDCTRL0>
#### vdctrl0
<link=VDCTRL0>
#### vdctrl0_clr
<link=VDCTRL0_CLR>
#### crc_stat
<link=CRC_STAT>
#### PIGEONCTRL0_TOG
<link=p.LCDIF.PIGEONCTRL0_TOG>
#### pigeonctrl0_tog
<link=PIGEONCTRL0_TOG>
#### PIGEON_5_2
<link=p.LCDIF.PIGEON_5_2>
#### PIGEON_7_0
<link=p.LCDIF.PIGEON_7_0>
#### pigeon_8_2
<link=PIGEON_8_2>
#### CSICR19
<link=p.CSI.CSICR19>
#### cmd_arg
<link=CMD_ARG>
#### CMD_RSP3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.CMD_RSP3
   p.USDHC2.CMD_RSP3
#### DATA_BUFF_ACC_PORT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.DATA_BUFF_ACC_PORT
   p.USDHC2.DATA_BUFF_ACC_PORT
#### mix_ctrl
<link=MIX_CTRL>
#### eir
<link=EIR>
#### MMFR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.MMFR
   p.ENET2.MMFR
#### TXIC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TXIC
   p.ENET2.TXIC
#### GAUR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.GAUR
   p.ENET2.GAUR
#### gaur
<link=GAUR>
#### FTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.FTRL
   p.ENET2.FTRL
#### ftrl
<link=FTRL>
#### RMON_T_PACKETS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_PACKETS
   p.ENET2.RMON_T_PACKETS
#### ieee_t_drop
<link=IEEE_T_DROP>
#### ieee_t_def
<link=IEEE_T_DEF>
#### rmon_r_undersize
<link=RMON_R_UNDERSIZE>
#### rmon_r_frag
<link=RMON_R_FRAG>
#### rmon_r_jab
<link=RMON_R_JAB>
#### ieee_r_fdxfc
<link=IEEE_R_FDXFC>
#### GPTIMER1CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.GPTIMER1CTRL
   p.USB2.GPTIMER1CTRL
#### ENDPTCTRL7
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTCTRL7
   p.USB2.ENDPTCTRL7
#### BR2
<link=p.SEMC.BR2>
#### sts3
<link=STS3>
#### STS12
<link=p.SEMC.STS12>
#### sts14
<link=STS14>
#### capability1
<link=CAPABILITY1>
#### packet3
<link=PACKET3>
#### CH0STAT_CLR
<link=p.DCP.CH0STAT_CLR>
#### CH1OPTS_CLR
<link=p.DCP.CH1OPTS_CLR>
#### CH3STAT_SET
<link=p.DCP.CH3STAT_SET>
#### CH3OPTS
<link=p.DCP.CH3OPTS>
#### SRCD
<link=p.SPDIF.SRCD>
#### str
<link=STR>
#### tcr4
<link=TCR4>
#### TDR[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TDR[1]
   p.SAI2.TDR[1]
   p.SAI3.TDR[1]
#### tfr[2]
<link=TFR[2]>
#### RCR3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RCR3
   p.SAI2.RCR3
   p.SAI3.RCR3
#### rfr[3]
<link=RFR[3]>
#### rdr
<link=RDR>
#### TRIG1_RESULT_5_4
<link=p.ADC_ETC.TRIG1_RESULT_5_4>
#### TRIG4_RESULT_7_6
<link=p.ADC_ETC.TRIG4_RESULT_7_6>
#### TRIG5_COUNTER
<link=p.ADC_ETC.TRIG5_COUNTER>
#### trig5_counter
<link=TRIG5_COUNTER>
#### trig5_chain_5_4
<link=TRIG5_CHAIN_5_4>
#### trig5_chain_7_6
<link=TRIG5_CHAIN_7_6>
#### BFCRT011
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AOI1.BFCRT011
   p.AOI2.BFCRT011
#### SEL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.XBARA1.SEL0
   p.XBARB2.SEL0
   p.XBARB3.SEL0
#### sel17
<link=SEL17>
#### SEL20
<link=p.XBARA1.SEL20>
#### sel26
<link=SEL26>
#### SEL33
<link=p.XBARA1.SEL33>
#### sel39
<link=SEL39>
#### SEL42
<link=p.XBARA1.SEL42>
#### SEL51
<link=p.XBARA1.SEL51>
#### POSD
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.POSD
   p.ENC2.POSD
   p.ENC3.POSD
   p.ENC4.POSD
#### posd
<link=POSD>
#### uposh
<link=UPOSH>
#### SM0CTRL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CTRL2
   p.PWM2.SM0CTRL2
   p.PWM3.SM0CTRL2
   p.PWM4.SM0CTRL2
#### sm0fracval2
<link=SM0FRACVAL2>
#### sm0sts
<link=SM0STS>
#### sm0tctrl
<link=SM0TCTRL>
#### SM0CVAL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CVAL0
   p.PWM2.SM0CVAL0
   p.PWM3.SM0CVAL0
   p.PWM4.SM0CVAL0
#### sm0cval1
<link=SM0CVAL1>
#### SM0CVAL3CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CVAL3CYC
   p.PWM2.SM0CVAL3CYC
   p.PWM3.SM0CVAL3CYC
   p.PWM4.SM0CVAL3CYC
#### SM1FRACVAL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1FRACVAL2
   p.PWM2.SM1FRACVAL2
   p.PWM3.SM1FRACVAL2
   p.PWM4.SM1FRACVAL2
#### sm1frctrl
<link=SM1FRCTRL>
#### SM1CAPTCTRLB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CAPTCTRLB
   p.PWM2.SM1CAPTCTRLB
   p.PWM3.SM1CAPTCTRLB
   p.PWM4.SM1CAPTCTRLB
#### sm1captcompx
<link=SM1CAPTCOMPX>
#### sm2fracval1
<link=SM2FRACVAL1>
#### sm2val3
<link=SM2VAL3>
#### sm2dmaen
<link=SM2DMAEN>
#### SM2DISMAP0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2DISMAP0
   p.PWM2.SM2DISMAP0
   p.PWM3.SM2DISMAP0
   p.PWM4.SM2DISMAP0
#### sm2cval4cyc
<link=SM2CVAL4CYC>
#### sm3val2
<link=SM3VAL2>
#### SM3FRACVAL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3FRACVAL3
   p.PWM2.SM3FRACVAL3
   p.PWM3.SM3FRACVAL3
   p.PWM4.SM3FRACVAL3
#### sm3octrl
<link=SM3OCTRL>
#### sm3dmaen
<link=SM3DMAEN>
#### sm3captctrlb
<link=SM3CAPTCTRLB>
#### sm3cval1
<link=SM3CVAL1>
#### OUTEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.OUTEN
   p.PWM2.OUTEN
   p.PWM3.OUTEN
   p.PWM4.OUTEN
#### addr_offset1
<link=ADDR_OFFSET1>
#### ctr_nonce0_w1
<link=CTR_NONCE0_W1>
#### REGION1_BOT
<link=p.BEE.REGION1_BOT>
#### mfcr
<link=MFCR>
#### MRDR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MRDR
   p.LPI2C2.MRDR
   p.LPI2C3.MRDR
   p.LPI2C4.MRDR
#### STAR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.STAR
   p.LPI2C2.STAR
   p.LPI2C3.STAR
   p.LPI2C4.STAR
#### AIRCR
<link=p.SystemControl.AIRCR>
#### SHPR3
<link=p.SystemControl.SHPR3>
#### ID_MMFR0
<link=p.SystemControl.ID_MMFR0>
#### id_mmfr0
<link=ID_MMFR0>
#### ID_ISAR2
<link=p.SystemControl.ID_ISAR2>
#### clidr
<link=CLIDR>
#### CCSIDR
<link=p.SystemControl.CCSIDR>
#### icimvau
<link=ICIMVAU>
#### nviciser1
<link=NVICISER1>
#### NVICICER3
<link=p.NVIC.NVICICER3>
#### nvicicer4
<link=NVICICER4>
#### nvicicpr2
<link=NVICICPR2>
#### NVICICPR3
<link=p.NVIC.NVICICPR3>
#### nvicip2
<link=NVICIP2>
#### NVICIP10
<link=p.NVIC.NVICIP10>
#### nvicip20
<link=NVICIP20>
#### NVICIP29
<link=p.NVIC.NVICIP29>
#### NVICIP36
<link=p.NVIC.NVICIP36>
#### nvicip42
<link=NVICIP42>
#### nvicip55
<link=NVICIP55>
#### NVICIP66
<link=p.NVIC.NVICIP66>
#### nvicip73
<link=NVICIP73>
#### nvicip86
<link=NVICIP86>
#### nvicip91
<link=NVICIP91>
#### nvicip101
<link=NVICIP101>
#### NVICIP111
<link=p.NVIC.NVICIP111>
#### nvicip116
<link=NVICIP116>
#### nvicip127
<link=NVICIP127>
#### NVICIP137
<link=p.NVIC.NVICIP137>
#### nvicip138
<link=NVICIP138>
#### NVICIP146
<link=p.NVIC.NVICIP146>
#### OUT
<link=pyb.Pin.OUT>

#### Pin.OUT
<link=pyb.Pin.OUT>

