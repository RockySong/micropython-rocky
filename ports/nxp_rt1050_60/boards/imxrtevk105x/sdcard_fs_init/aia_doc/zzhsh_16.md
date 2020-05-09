#### ack
<lang=chs>
亲爱的你
王月月
邵小鹏
张小岩
许小鹏
刘小潮
高小新
石小宝
</lang>

<lang=dft>
Dear you
Lucy Wang
River Shao
Tony Zhang
Crist Xu
Curry Liu
Xinyi Gao
Stone Bao
</lang>

#### jicunqi
<link=peripherals>
#### aipstz3.opacr
<link=p.AIPSTZ3.OPACR>
#### p.AIPSTZ4.MPR
<lang=dft>
 (rw)  [1;33m0x4037c000[0m (0x4037c000 + 0x0000)
Master Priviledge Registers
 (rw) (04)  [0;32mMPROT5[0m  - [11:08] -  Master 5 Priviledge, Buffer, Read, Write Control.
      #xxx0 - MPL0 :
         Accesses from this master are forced to user-mode (ips_supervisor_acces
         s is forced to zero) regardless of the hprot[1] access attribute.
      #xxx1 - MPL1 :
         Accesses from this master are not forced to user-mode. The hprot[1] acc
         ess attribute is used directly to determine ips_supervisor_access.
 (rw) (04)  [0;32mMPROT3[0m  - [19:16] -  Master 3 Priviledge, Buffer, Read, Write Control.
      #xxx0 - MPL0 :
         Accesses from this master are forced to user-mode (ips_supervisor_acces
         s is forced to zero) regardless of the hprot[1] access attribute.
      #xxx1 - MPL1 :
         Accesses from this master are not forced to user-mode. The hprot[1] acc
         ess attribute is used directly to determine ips_supervisor_access.
 (rw) (04)  [0;32mMPROT2[0m  - [23:20] -  Master 2 Priviledge, Buffer, Read, Write Control
      #xxx0 - MPL0 :
         Accesses from this master are forced to user-mode (ips_supervisor_acces
         s is forced to zero) regardless of the hprot[1] access attribute.
      #xxx1 - MPL1 :
         Accesses from this master are not forced to user-mode. The hprot[1] acc
         ess attribute is used directly to determine ips_supervisor_access.
 (rw) (04)  [0;32mMPROT1[0m  - [27:24] -  Master 1 Priviledge, Buffer, Read, Write Control
      #xxx0 - MPL0 :
         Accesses from this master are forced to user-mode (ips_supervisor_acces
         s is forced to zero) regardless of the hprot[1] access attribute.
      #xxx1 - MPL1 :
         Accesses from this master are not forced to user-mode. The hprot[1] acc
         ess attribute is used directly to determine ips_supervisor_access.
 (rw) (04)  [0;32mMPROT0[0m  - [31:28] -  Master 0 Priviledge, Buffer, Read, Write Control
      #xxx0 - MPL0 :
         Accesses from this master are forced to user-mode (ips_supervisor_acces
         s is forced to zero) regardless of the hprot[1] access attribute.
      #xxx1 - MPL1 :
         Accesses from this master are not forced to user-mode. The hprot[1] acc
         ess attribute is used directly to determine ips_supervisor_access.
</lang>
#### aipstz4.mpr
<link=p.AIPSTZ4.MPR>
#### AIPSTZ4.OPACR
<link=p.AIPSTZ4.OPACR>
#### p.dcdc
<link=p.DCDC>
#### dcdc.reg1
<link=p.DCDC.REG1>
#### p.DCDC.REG2
<lang=dft>
 (rw)  [1;33m0x40080008[0m (0x40080000 + 0x0008)
DCDC Register 2
 (rw) (02)  [0;32mLOOPCTRL_DC_C[0m  - [01:00] -  Ratio of integral control parameter to proportional control parameter in the sw
 itching DC-DC converter, and can be used to optimize efficiency and loop respon
 se
 (rw) (04)  [0;32mLOOPCTRL_DC_R[0m  - [05:02] -  Magnitude of proportional control parameter in the switching DC-DC converter co
 ntrol loop.
 (rw) (03)  [0;32mLOOPCTRL_DC_FF[0m  - [08:06] -  Two's complement feed forward step in duty cycle in the switching DC-DC convert
 er
 (rw) (03)  [0;32mLOOPCTRL_EN_RCSCALE[0m  - [11:09] -  Enable analog circuit of DC-DC converter to respond faster under transient load
  conditions.
 (rw) (01)  [0;32mLOOPCTRL_RCSCALE_THRSH[0m  - [12:12] -  Increase the threshold detection for RC scale circuit.
 (rw) (01)  [0;32mLOOPCTRL_HYST_SIGN[0m  - [13:13] -  Invert the sign of the hysteresis in DC-DC analog comparators.
 (rw) (01)  [0;32mDISABLE_PULSE_SKIP[0m  - [27:27] -  Set to "0" : stop charging if the duty cycle is lower than what set by dcdc_neg
 limit_in
 (rw) (01)  [0;32mDCM_SET_CTRL[0m  - [28:28] -  Set high to improve the transition from heavy load to light load
</lang>
#### pit.ldval0
<link=p.PIT.LDVAL0>
#### PIT.TCTRL0
<link=p.PIT.TCTRL0>
#### pit.cval2
<link=p.PIT.CVAL2>
#### pit.mcr
<link=p.PIT.MCR>
#### p.CMP1.CR0
<lang=dft>
 (rw)  [1;33m0x40094000[0m (0x40094000 + 0x0000)
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
#### p.CMP1.FPR
<lang=dft>
 (rw)  [1;33m0x40094002[0m (0x40094000 + 0x0002)
CMP Filter Period Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Filter Sample Period
</lang>
#### CMP1.SCR
<link=p.CMP1.SCR>
#### p.cmp2.cr1
<link=p.CMP2.CR1>
#### CMP2.DACCR
<link=p.CMP2.DACCR>
#### p.cmp3.muxcr
<link=p.CMP3.MUXCR>
#### p.cmp4.cr1
<link=p.CMP4.CR1>
#### p.iomuxc_gpr
<link=p.IOMUXC_GPR>
#### IOMUXC_GPR.GPR2
<link=p.IOMUXC_GPR.GPR2>
#### iomuxc_gpr.gpr7
<link=p.IOMUXC_GPR.GPR7>
#### p.IOMUXC_GPR.GPR14
<lang=dft>
 (rw)  [1;33m0x400ac038[0m (0x400ac000 + 0x0038)
GPR14 General Purpose Register
 (rw) (01)  [0;32mACMP1_CMP_IGEN_TRIM_DN[0m  - [00:00] -  reduces ACMP1 internal bias current by 30%
      0 - ACMP1_CMP_IGEN_TRIM_DN_0 :
         no reduce
      0x1 - ACMP1_CMP_IGEN_TRIM_DN_1 :
         reduces
 (rw) (01)  [0;32mACMP2_CMP_IGEN_TRIM_DN[0m  - [01:01] -  reduces ACMP2 internal bias current by 30%
      0 - ACMP2_CMP_IGEN_TRIM_DN_0 :
         no reduce
      0x1 - ACMP2_CMP_IGEN_TRIM_DN_1 :
         reduces
 (rw) (01)  [0;32mACMP3_CMP_IGEN_TRIM_DN[0m  - [02:02] -  reduces ACMP3 internal bias current by 30%
      0 - ACMP3_CMP_IGEN_TRIM_DN_0 :
         no reduce
      0x1 - ACMP3_CMP_IGEN_TRIM_DN_1 :
         reduces
 (rw) (01)  [0;32mACMP4_CMP_IGEN_TRIM_DN[0m  - [03:03] -  reduces ACMP4 internal bias current by 30%
      0 - ACMP4_CMP_IGEN_TRIM_DN_0 :
         no reduce
      0x1 - ACMP4_CMP_IGEN_TRIM_DN_1 :
         reduces
 (rw) (01)  [0;32mACMP1_CMP_IGEN_TRIM_UP[0m  - [04:04] -  increases ACMP1 internal bias current by 30%
      0 - ACMP1_CMP_IGEN_TRIM_UP_0 :
         no increase
      0x1 - ACMP1_CMP_IGEN_TRIM_UP_1 :
         increases
 (rw) (01)  [0;32mACMP2_CMP_IGEN_TRIM_UP[0m  - [05:05] -  increases ACMP2 internal bias current by 30%
      0 - ACMP2_CMP_IGEN_TRIM_UP_0 :
         no increase
      0x1 - ACMP2_CMP_IGEN_TRIM_UP_1 :
         increases
 (rw) (01)  [0;32mACMP3_CMP_IGEN_TRIM_UP[0m  - [06:06] -  increases ACMP3 internal bias current by 30%
      0 - ACMP3_CMP_IGEN_TRIM_UP_0 :
         no increase
      0x1 - ACMP3_CMP_IGEN_TRIM_UP_1 :
         increases
 (rw) (01)  [0;32mACMP4_CMP_IGEN_TRIM_UP[0m  - [07:07] -  increases ACMP4 internal bias current by 30%
      0 - ACMP4_CMP_IGEN_TRIM_UP_0 :
         no increase
      0x1 - ACMP4_CMP_IGEN_TRIM_UP_1 :
         increases
 (rw) (01)  [0;32mACMP1_SAMPLE_SYNC_EN[0m  - [08:08] -  ACMP1 sample_lv source select
      0 - ACMP1_SAMPLE_SYNC_EN_0 :
         select XBAR output
      0x1 - ACMP1_SAMPLE_SYNC_EN_1 :
         select synced sample_lv
 (rw) (01)  [0;32mACMP2_SAMPLE_SYNC_EN[0m  - [09:09] -  ACMP2 sample_lv source select
      0 - ACMP2_SAMPLE_SYNC_EN_0 :
         select XBAR output
      0x1 - ACMP2_SAMPLE_SYNC_EN_1 :
         select synced sample_lv
 (rw) (01)  [0;32mACMP3_SAMPLE_SYNC_EN[0m  - [10:10] -  ACMP3 sample_lv source select
      0 - ACMP3_SAMPLE_SYNC_EN_0 :
         select XBAR output
      0x1 - ACMP3_SAMPLE_SYNC_EN_1 :
         select synced sample_lv
 (rw) (01)  [0;32mACMP4_SAMPLE_SYNC_EN[0m  - [11:11] -  ACMP4 sample_lv source select
      0 - ACMP4_SAMPLE_SYNC_EN_0 :
         select XBAR output
      0x1 - ACMP4_SAMPLE_SYNC_EN_1 :
         select synced sample_lv
 (rw) (04)  [0;32mCM7_CFGITCMSZ[0m  - [19:16] -  ITCM total size configuration
      0 - CM7_CFGITCMSZ_0 :
         0 KB (No ITCM)
      0x3 - CM7_CFGITCMSZ_3 :
         4 KB
      0x4 - CM7_CFGITCMSZ_4 :
         8 KB
      0x5 - CM7_CFGITCMSZ_5 :
         16 KB
      0x6 - CM7_CFGITCMSZ_6 :
         32 KB
      0x7 - CM7_CFGITCMSZ_7 :
         64 KB
      0x8 - CM7_CFGITCMSZ_8 :
         128 KB
      0x9 - CM7_CFGITCMSZ_9 :
         256 KB
      0xA - CM7_CFGITCMSZ_10 :
         512 KB
 (rw) (04)  [0;32mCM7_CFGDTCMSZ[0m  - [23:20] -  DTCM total size configuration
      0 - CM7_CFGDTCMSZ_0 :
         0 KB (No DTCM)
      0x3 - CM7_CFGDTCMSZ_3 :
         4 KB
      0x4 - CM7_CFGDTCMSZ_4 :
         8 KB
      0x5 - CM7_CFGDTCMSZ_5 :
         16 KB
      0x6 - CM7_CFGDTCMSZ_6 :
         32 KB
      0x7 - CM7_CFGDTCMSZ_7 :
         64 KB
      0x8 - CM7_CFGDTCMSZ_8 :
         128 KB
      0x9 - CM7_CFGDTCMSZ_9 :
         256 KB
      0xA - CM7_CFGDTCMSZ_10 :
         512 KB
</lang>
#### IOMUXC_GPR.GPR23
<link=p.IOMUXC_GPR.GPR23>
#### p.IOMUXC_GPR.GPR29
<lang=dft>
 (rw)  [1;33m0x400ac074[0m (0x400ac000 + 0x0074)
GPR29 General Purpose Register
 (rw) (32)  [0;32mGPIO_MUX4_GPIO_SEL[0m  - [31:00] -  GPIO4 and GPIO9 share same IO MUX function, GPIO_MUX4 selects one GPIO function
 .
</lang>
#### IOMUXC_GPR.GPR30
<link=p.IOMUXC_GPR.GPR30>
#### p.FLEXRAM.INT_STAT_EN
<lang=dft>
 (rw)  [1;33m0x400b0014[0m (0x400b0000 + 0x0014)
Interrupt Status Enable Register
 (rw) (01)  [0;32mITCM_ERR_STAT_EN[0m  - [03:03] -  ITCM Access Error Status Enable
      0 - ITCM_ERR_STAT_EN_0 :
         Masked
      0x1 - ITCM_ERR_STAT_EN_1 :
         Enabled
 (rw) (01)  [0;32mDTCM_ERR_STAT_EN[0m  - [04:04] -  DTCM Access Error Status Enable
      0 - DTCM_ERR_STAT_EN_0 :
         Masked
      0x1 - DTCM_ERR_STAT_EN_1 :
         Enabled
 (rw) (01)  [0;32mOCRAM_ERR_STAT_EN[0m  - [05:05] -  OCRAM Access Error Status Enable
      0 - OCRAM_ERR_STAT_EN_0 :
         Masked
      0x1 - OCRAM_ERR_STAT_EN_1 :
         Enabled
</lang>
#### p.wdog1.wmcr
<link=p.WDOG1.WMCR>
#### WDOG2.WICR
<link=p.WDOG2.WICR>
#### ADC1.HC1
<link=p.ADC1.HC1>
#### p.adc1.hc2
<link=p.ADC1.HC2>
#### adc1.hc2
<link=p.ADC1.HC2>
#### p.ADC1.HC4
<lang=dft>
 (rw)  [1;33m0x400c4010[0m (0x400c4000 + 0x0010)
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
#### p.adc1.hs
<link=p.ADC1.HS>
#### adc1.hs
<link=p.ADC1.HS>
#### ADC1.R0
<link=p.ADC1.R0>
#### p.ADC1.R3
<lang=dft>
 (ro)  [1;33m0x400c4030[0m (0x400c4000 + 0x0030)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### adc1.r7
<link=p.ADC1.R7>
#### ADC1.GC
<link=p.ADC1.GC>
#### ADC2.HC3
<link=p.ADC2.HC3>
#### p.ADC2.HC4
<lang=dft>
 (rw)  [1;33m0x400c8010[0m (0x400c8000 + 0x0010)
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
#### adc2.hc4
<link=p.ADC2.HC4>
#### p.ADC2.R3
<lang=dft>
 (ro)  [1;33m0x400c8030[0m (0x400c8000 + 0x0030)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### adc2.r5
<link=p.ADC2.R5>
#### p.adc2.r6
<link=p.ADC2.R6>
#### p.adc2.gs
<link=p.ADC2.GS>
#### adc2.cal
<link=p.ADC2.CAL>
#### p.trng.pkrsq
<link=p.TRNG.PKRSQ>
#### p.TRNG.TOTSAM
<lang=dft>
 (ro)  [1;33m0x400cc014[0m (0x400cc000 + 0x0014)
Total Samples Register
 (ro) (20)  [0;32mTOT_SAM[0m  - [19:00] -  Total Samples
</lang>
#### p.trng.scmc
<link=p.TRNG.SCMC>
#### p.TRNG.SCR4L
<lang=dft>
 (rw)  [1;33m0x400cc030[0m (0x400cc000 + 0x0030)
Statistical Check Run Length 4 Limit Register
 (rw) (12)  [0;32mRUN4_MAX[0m  - [11:00] -  Run Length 4 Maximum Limit
 (rw) (12)  [0;32mRUN4_RNG[0m  - [27:16] -  Run Length 4 Range
</lang>
#### p.trng.scr5c
<link=p.TRNG.SCR5C>
#### p.TRNG.ENT[1]
<lang=dft>
 (ro)  [1;33m0x400cc044[0m (0x400cc000 + 0x0044)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### TRNG.ENT[3]
<link=p.TRNG.ENT[3]>
#### p.TRNG.ENT[6]
<lang=dft>
 (ro)  [1;33m0x400cc058[0m (0x400cc000 + 0x0058)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### trng.ent[10]
<link=p.TRNG.ENT[10]>
#### p.TRNG.PKRCNT76
<lang=dft>
 (ro)  [1;33m0x400cc08c[0m (0x400cc000 + 0x008c)
Statistical Check Poker Count 7 and 6 Register
 (ro) (16)  [0;32mPKR_6_CT[0m  - [15:00] -  Poker 6h Count
 (ro) (16)  [0;32mPKR_7_CT[0m  - [31:16] -  Poker 7h Count
</lang>
#### p.trng.pkrcnt76
<link=p.TRNG.PKRCNT76>
#### p.trng.int_status
<link=p.TRNG.INT_STATUS>
#### TRNG.INT_STATUS
<link=p.TRNG.INT_STATUS>
#### p.trng.vid1
<link=p.TRNG.VID1>
#### SNVS.HPSICR
<link=p.SNVS.HPSICR>
#### snvs.hpsr
<link=p.SNVS.HPSR>
#### SNVS.LPTDCR
<link=p.SNVS.LPTDCR>
#### snvs.lpsrtcmr
<link=p.SNVS.LPSRTCMR>
#### p.SNVS.LPSRTCLR
<lang=dft>
 (rw)  [1;33m0x400d4054[0m (0x400d4000 + 0x0054)
SNVS_LP Secure Real Time Counter LSB Register
 (rw) (32)  [0;32mSRTC[0m  - [31:00] -  LP Secure Real Time Counter least-significant 32 bits This register can be prog
 rammed only when SRTC is not active and not locked, meaning the SRTC_ENV, SRTC_
 SL, and SRTC_HL bits are not set
</lang>
#### p.snvs.lpsrtclr
<link=p.SNVS.LPSRTCLR>
#### SNVS.LPTAR
<link=p.SNVS.LPTAR>
#### snvs.lppgdr
<link=p.SNVS.LPPGDR>
#### p.SNVS.LPZMKR[4]
<lang=dft>
 (rw)  [1;33m0x400d407c[0m (0x400d4000 + 0x007c)
SNVS_LP Zeroizable Master Key Register
 (rw) (32)  [0;32mZMK[0m  - [31:00] -  Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit Z
 MK value
</lang>
#### p.snvs.lpzmkr[4]
<link=p.SNVS.LPZMKR[4]>
#### SNVS.LPGPR[6]
<link=p.SNVS.LPGPR[6]>
#### p.SNVS.LPGPR[7]
<lang=dft>
 (rw)  [1;33m0x400d411c[0m (0x400d4000 + 0x011c)
SNVS_LP General Purpose Registers 0 .. 7
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### p.ccm_analog.pll_arm_set
<link=p.CCM_ANALOG.PLL_ARM_SET>
#### CCM_ANALOG.PLL_USB1_SET
<link=p.CCM_ANALOG.PLL_USB1_SET>
#### p.CCM_ANALOG.PLL_USB2
<lang=dft>
 (rw)  [1;33m0x400d8020[0m (0x400d8000 + 0x0020)
Analog USB2 480MHz PLL Control Register
 (rw) (01)  [0;32mDIV_SELECT[0m  - [01:01] -  This field controls the PLL loop divider. 0 - Fout=Fref*20; 1 - Fout=Fref*22.
 (rw) (01)  [0;32mEN_USB_CLKS[0m  - [06:06] -  0: 8-phase PLL outputs for USBPHY1 are powered down
 (rw) (01)  [0;32mPOWER[0m  - [12:12] -  Powers up the PLL. This bit will be set automatically when USBPHY1 remote wakeu
 p event happens.
 (rw) (01)  [0;32mENABLE[0m  - [13:13] -  Enable the PLL clock output.
 (rw) (02)  [0;32mBYPASS_CLK_SRC[0m  - [15:14] -  Determines the bypass source.
      0 - REF_CLK_24M :
         Select the 24MHz oscillator as source.
      0x1 - CLK1 :
         Select the CLK1_N / CLK1_P as source.
 (rw) (01)  [0;32mBYPASS[0m  - [16:16] -  Bypass the PLL.
 (ro) (01)  [0;32mLOCK[0m  - [31:31] -  1 - PLL is currently locked. 0 - PLL is not currently locked.
</lang>
#### CCM_ANALOG.PLL_USB2_CLR
<link=p.CCM_ANALOG.PLL_USB2_CLR>
#### p.CCM_ANALOG.PLL_USB2_TOG
<lang=dft>
 (rw)  [1;33m0x400d802c[0m (0x400d8000 + 0x002c)
Analog USB2 480MHz PLL Control Register
 (rw) (01)  [0;32mDIV_SELECT[0m  - [01:01] -  This field controls the PLL loop divider. 0 - Fout=Fref*20; 1 - Fout=Fref*22.
 (rw) (01)  [0;32mEN_USB_CLKS[0m  - [06:06] -  0: 8-phase PLL outputs for USBPHY1 are powered down
 (rw) (01)  [0;32mPOWER[0m  - [12:12] -  Powers up the PLL. This bit will be set automatically when USBPHY1 remote wakeu
 p event happens.
 (rw) (01)  [0;32mENABLE[0m  - [13:13] -  Enable the PLL clock output.
 (rw) (02)  [0;32mBYPASS_CLK_SRC[0m  - [15:14] -  Determines the bypass source.
      0 - REF_CLK_24M :
         Select the 24MHz oscillator as source.
      0x1 - CLK1 :
         Select the CLK1_N / CLK1_P as source.
 (rw) (01)  [0;32mBYPASS[0m  - [16:16] -  Bypass the PLL.
 (ro) (01)  [0;32mLOCK[0m  - [31:31] -  1 - PLL is currently locked. 0 - PLL is not currently locked.
</lang>
#### ccm_analog.pll_usb2_tog
<link=p.CCM_ANALOG.PLL_USB2_TOG>
#### CCM_ANALOG.PLL_USB2_TOG
<link=p.CCM_ANALOG.PLL_USB2_TOG>
#### ccm_analog.pll_sys
<link=p.CCM_ANALOG.PLL_SYS>
#### ccm_analog.pll_sys_clr
<link=p.CCM_ANALOG.PLL_SYS_CLR>
#### CCM_ANALOG.PLL_SYS_CLR
<link=p.CCM_ANALOG.PLL_SYS_CLR>
#### ccm_analog.pll_sys_denom
<link=p.CCM_ANALOG.PLL_SYS_DENOM>
#### p.ccm_analog.pll_video
<link=p.CCM_ANALOG.PLL_VIDEO>
#### p.CCM_ANALOG.PLL_VIDEO_CLR
<lang=dft>
 (rw)  [1;33m0x400d80a8[0m (0x400d8000 + 0x00a8)
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
#### CCM_ANALOG.PFD_480_CLR
<link=p.CCM_ANALOG.PFD_480_CLR>
#### CCM_ANALOG.PFD_480_TOG
<link=p.CCM_ANALOG.PFD_480_TOG>
#### p.CCM_ANALOG.PFD_528_CLR
<lang=dft>
 (rw)  [1;33m0x400d8108[0m (0x400d8000 + 0x0108)
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
#### CCM_ANALOG.PFD_528_CLR
<link=p.CCM_ANALOG.PFD_528_CLR>
#### ccm_analog.pfd_528_tog
<link=p.CCM_ANALOG.PFD_528_TOG>
#### CCM_ANALOG.MISC1_CLR
<link=p.CCM_ANALOG.MISC1_CLR>
#### ccm_analog.misc2_set
<link=p.CCM_ANALOG.MISC2_SET>
#### p.ccm_analog.misc2_tog
<link=p.CCM_ANALOG.MISC2_TOG>
#### p.PMU.REG_3P0_TOG
<lang=dft>
 (rw)  [1;33m0x400d812c[0m (0x400d8000 + 0x012c)
Regulator 3P0 Register
 (rw) (01)  [0;32mENABLE_LINREG[0m  - [00:00] -  Control bit to enable the regulator output to be set by the programmed target v
 oltage setting and internal bandgap reference
 (rw) (01)  [0;32mENABLE_BO[0m  - [01:01] -  Control bit to enable the brownout circuitry in the regulator.
 (rw) (01)  [0;32mENABLE_ILIMIT[0m  - [02:02] -  Control bit to enable the current-limit circuitry in the regulator.
 (rw) (03)  [0;32mBO_OFFSET[0m  - [06:04] -  Control bits to adjust the regulator brownout offset voltage in 25mV steps
 (rw) (01)  [0;32mVBUS_SEL[0m  - [07:07] -  Select input voltage source for LDO_3P0 from either USB_OTG1_VBUS or USB_OTG2_V
 BUS
      0 - USB_OTG2_VBUS :
         Utilize VBUS OTG2 power
      0x1 - USB_OTG1_VBUS :
         Utilize VBUS OTG1 power
 (rw) (05)  [0;32mOUTPUT_TRG[0m  - [12:08] -  Control bits to adjust the regulator output voltage
      0 - OUTPUT_TRG_0 :
         2.625V
      0xF - OUTPUT_TRG_15 :
         3.000V
      0x1F - OUTPUT_TRG_31 :
         3.400V
 (ro) (01)  [0;32mBO_VDD3P0[0m  - [16:16] -  Status bit that signals when a brownout is detected on the regulator output.
 (ro) (01)  [0;32mOK_VDD3P0[0m  - [17:17] -  Status bit that signals when the regulator output is ok. 1 = regulator output >
  brownout target
</lang>
#### pmu.misc0_set
<link=p.PMU.MISC0_SET>
#### p.PMU.MISC1_TOG
<lang=dft>
 (rw)  [1;33m0x400d816c[0m (0x400d8000 + 0x016c)
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
#### TEMPMON.TEMPSENSE0
<link=p.TEMPMON.TEMPSENSE0>
#### p.TEMPMON.TEMPSENSE0_CLR
<lang=dft>
 (rw)  [1;33m0x400d8188[0m (0x400d8000 + 0x0188)
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
#### p.TEMPMON.TEMPSENSE1_SET
<lang=dft>
 (rw)  [1;33m0x400d8194[0m (0x400d8000 + 0x0194)
Tempsensor Control Register 1
 (rw) (16)  [0;32mMEASURE_FREQ[0m  - [15:00] -  This bits determines how many RTC clocks to wait before automatically repeating
  a temperature measurement
</lang>
#### USB_ANALOG.USB1_VBUS_DETECT_CLR
<link=p.USB_ANALOG.USB1_VBUS_DETECT_CLR>
#### USB_ANALOG.USB1_VBUS_DETECT_TOG
<link=p.USB_ANALOG.USB1_VBUS_DETECT_TOG>
#### USB_ANALOG.USB1_CHRG_DETECT
<link=p.USB_ANALOG.USB1_CHRG_DETECT>
#### usb_analog.usb1_misc_tog
<link=p.USB_ANALOG.USB1_MISC_TOG>
#### p.usb_analog.usb2_vbus_detect_set
<link=p.USB_ANALOG.USB2_VBUS_DETECT_SET>
#### p.USB_ANALOG.USB2_CHRG_DETECT
<lang=dft>
 (rw)  [1;33m0x400d8210[0m (0x400d8000 + 0x0210)
USB Charger Detect Register
 (rw) (01)  [0;32mCHK_CONTACT[0m  - [18:18] -  Check the contact of USB plug
      0 - NO_CHECK :
         Do not check the contact of USB plug.
      0x1 - CHECK :
         Check whether the USB plug has been in contact with each other
 (rw) (01)  [0;32mCHK_CHRG_B[0m  - [19:19] -  Check the charger connection
      0 - CHECK :
         Check whether a charger (either a dedicated charger or a host charger) 
         is connected to USB port.
      0x1 - NO_CHECK :
         Do not check whether a charger is connected to the USB port.
 (rw) (01)  [0;32mEN_B[0m  - [20:20] -  Control the charger detector.
      0 - ENABLE :
         Enable the charger detector.
      0x1 - DISABLE :
         Disable the charger detector.
</lang>
#### USB_ANALOG.USB2_CHRG_DETECT_TOG
<link=p.USB_ANALOG.USB2_CHRG_DETECT_TOG>
#### usb_analog.usb2_loopback
<link=p.USB_ANALOG.USB2_LOOPBACK>
#### xtalosc24m.misc0
<link=p.XTALOSC24M.MISC0>
#### p.XTALOSC24M.MISC0_TOG
<lang=dft>
 (rw)  [1;33m0x400d815c[0m (0x400d8000 + 0x015c)
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
#### xtalosc24m.misc0_tog
<link=p.XTALOSC24M.MISC0_TOG>
#### xtalosc24m.lowpwr_ctrl_clr
<link=p.XTALOSC24M.LOWPWR_CTRL_CLR>
#### p.xtalosc24m.osc_config2_clr
<link=p.XTALOSC24M.OSC_CONFIG2_CLR>
#### xtalosc24m.osc_config2_tog
<link=p.XTALOSC24M.OSC_CONFIG2_TOG>
#### p.usbphy1
<link=p.USBPHY1>
#### usbphy1.tx
<link=p.USBPHY1.TX>
#### p.usbphy1.tx_clr
<link=p.USBPHY1.TX_CLR>
#### USBPHY1.RX_TOG
<link=p.USBPHY1.RX_TOG>
#### p.usbphy1.ctrl_set
<link=p.USBPHY1.CTRL_SET>
#### USBPHY1.DEBUG_SET
<link=p.USBPHY1.DEBUG_SET>
#### p.usbphy2.rx_clr
<link=p.USBPHY2.RX_CLR>
#### USBPHY2.CTRL_TOG
<link=p.USBPHY2.CTRL_TOG>
#### USBPHY2.STATUS
<link=p.USBPHY2.STATUS>
#### usbphy2.debug_set
<link=p.USBPHY2.DEBUG_SET>
#### p.usbphy2.debug0_status
<link=p.USBPHY2.DEBUG0_STATUS>
#### p.usbphy2.debug1_tog
<link=p.USBPHY2.DEBUG1_TOG>
#### p.USBPHY2.VERSION
<lang=dft>
 (ro)  [1;33m0x400da080[0m (0x400da000 + 0x0080)
UTMI RTL Version
 (ro) (16)  [0;32mSTEP[0m  - [15:00] -  Fixed read-only value reflecting the stepping of the RTL version.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Fixed read-only value reflecting the MINOR field of the RTL version.
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Fixed read-only value reflecting the MAJOR field of the RTL version.
</lang>
#### p.csu
<link=p.CSU>
#### p.CSU.CSL3
<lang=dft>
 (rw)  [1;33m0x400dc00c[0m (0x400dc000 + 0x000c)
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
#### p.csu.csl3
<link=p.CSU.CSL3>
#### csu.csl8
<link=p.CSU.CSL8>
#### CSU.CSL8
<link=p.CSU.CSL8>
#### p.CSU.CSL17
<lang=dft>
 (rw)  [1;33m0x400dc044[0m (0x400dc000 + 0x0044)
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
#### p.csu.csl17
<link=p.CSU.CSL17>
#### csu.csl24
<link=p.CSU.CSL24>
#### CSU.CSL24
<link=p.CSU.CSL24>
#### p.CSU.CSL26
<lang=dft>
 (rw)  [1;33m0x400dc068[0m (0x400dc000 + 0x0068)
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
#### p.csu.csl26
<link=p.CSU.CSL26>
#### p.CSU.CSL31
<lang=dft>
 (rw)  [1;33m0x400dc07c[0m (0x400dc000 + 0x007c)
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
#### p.csu.csl31
<link=p.CSU.CSL31>
#### CSU.HPCONTROL0
<link=p.CSU.HPCONTROL0>
#### p.TSC.FLOW_CONTROL
<lang=dft>
 (rw)  [1;33m0x400e0020[0m (0x400e0000 + 0x0020)
Flow Control
 (rw) (01)  [0;32mSW_RST[0m  - [00:00] -  Soft Reset
 (rw) (01)  [0;32mSTART_MEASURE[0m  - [04:04] -  Start Measure
      0 - START_MEASURE_0 :
         Do not start measure for now
      0x1 - START_MEASURE_1 :
         Start measure the X/Y coordinate value
 (rw) (01)  [0;32mDROP_MEASURE[0m  - [08:08] -  Drop Measure
      0 - DROP_MEASURE_0 :
         Do not drop measure for now
      0x1 - DROP_MEASURE_1 :
         Drop the measure and controller return to idle status
 (rw) (01)  [0;32mSTART_SENSE[0m  - [12:12] -  Start Sense
      0 - START_SENSE_0 :
         Stay at idle status
      0x1 - START_SENSE_1 :
         Start sense detection and (if auto_measure set to 1) measure after dete
         ct a touch
 (rw) (01)  [0;32mDISABLE[0m  - [16:16] -  This bit is for SW disable registers
      0 - DISABLE_0 :
         Leave HW state machine control
      0x1 - DISABLE_1 :
         SW set to idle status
</lang>
#### TSC.DEBUG_MODE2
<link=p.TSC.DEBUG_MODE2>
#### p.DMA0.CR
<lang=dft>
 (rw)  [1;33m0x400e8000[0m (0x400e8000 + 0x0000)
Control Register
 (rw) (01)  [0;32mEDBG[0m  - [01:01] -  Enable Debug
      0 - EDBG_0 :
         When in debug mode, the DMA continues to operate.
      0x1 - EDBG_1 :
         When in debug mode, the DMA stalls the start of a new channel. Executin
         g channels are allowed to complete. Channel execution resumes when the 
         system exits debug mode or the EDBG bit is cleared.
 (rw) (01)  [0;32mERCA[0m  - [02:02] -  Enable Round Robin Channel Arbitration
      0 - ERCA_0 :
         Fixed priority arbitration is used for channel selection within each gr
         oup.
      0x1 - ERCA_1 :
         Round robin arbitration is used for channel selection within each group
         .
 (rw) (01)  [0;32mERGA[0m  - [03:03] -  Enable Round Robin Group Arbitration
      0 - ERGA_0 :
         Fixed priority arbitration is used for selection among the groups.
      0x1 - ERGA_1 :
         Round robin arbitration is used for selection among the groups.
 (rw) (01)  [0;32mHOE[0m  - [04:04] -  Halt On Error
      0 - HOE_0 :
         Normal operation
      0x1 - HOE_1 :
         Any error causes the HALT bit to set. Subsequently, all service request
         s are ignored until the HALT bit is cleared.
 (rw) (01)  [0;32mHALT[0m  - [05:05] -  Halt DMA Operations
      0 - HALT_0 :
         Normal operation
      0x1 - HALT_1 :
         Stall the start of any new channels. Executing channels are allowed to 
         complete. Channel execution resumes when this bit is cleared.
 (rw) (01)  [0;32mCLM[0m  - [06:06] -  Continuous Link Mode
      0 - CLM_0 :
         A minor loop channel link made to itself goes through channel arbitrati
         on before being activated again.
      0x1 - CLM_1 :
         A minor loop channel link made to itself does not go through channel ar
         bitration before being activated again. Upon minor loop completion, the
          channel activates again if that channel has a minor loop channel link 
         enabled and the link channel is itself. This effectively applies the mi
         nor loop offsets and restarts the next minor loop.
 (rw) (01)  [0;32mEMLM[0m  - [07:07] -  Enable Minor Loop Mapping
      0 - EMLM_0 :
         Disabled. TCDn.word2 is defined as a 32-bit NBYTES field.
      0x1 - EMLM_1 :
         Enabled. TCDn.word2 is redefined to include individual enable fields, a
         n offset field, and the NBYTES field. The individual enable fields allo
         w the minor loop offset to be applied to the source address, the destin
         ation address, or both. The NBYTES field is reduced when either offset 
         is enabled.
 (rw) (01)  [0;32mGRP0PRI[0m  - [08:08] -  Channel Group 0 Priority
 (rw) (01)  [0;32mGRP1PRI[0m  - [10:10] -  Channel Group 1 Priority
 (rw) (01)  [0;32mECX[0m  - [16:16] -  Error Cancel Transfer
      0 - ECX_0 :
         Normal operation
      0x1 - ECX_1 :
         Cancel the remaining data transfer in the same fashion as the CX bit. S
         top the executing channel and force the minor loop to finish. The cance
         l takes effect after the last write of the current read/write sequence.
          The ECX bit clears itself after the cancel is honored. In addition to 
         cancelling the transfer, ECX treats the cancel as an error condition, t
         hus updating the Error Status register (DMAx_ES) and generating an opti
         onal error interrupt.
 (rw) (01)  [0;32mCX[0m  - [17:17] -  Cancel Transfer
      0 - CX_0 :
         Normal operation
      0x1 - CX_1 :
         Cancel the remaining data transfer. Stop the executing channel and forc
         e the minor loop to finish. The cancel takes effect after the last writ
         e of the current read/write sequence. The CX bit clears itself after th
         e cancel has been honored. This cancel retires the channel normally as 
         if the minor loop was completed.
 (ro) (01)  [0;32mACTIVE[0m  - [31:31] -  DMA Active Status
      0 - ACTIVE_0 :
         eDMA is idle.
      0x1 - ACTIVE_1 :
         eDMA is executing a channel.
</lang>
#### p.DMA0.SSRT
<lang=dft>
 (rw)  [1;33m0x400e801d[0m (0x400e8000 + 0x001d)
Set START Bit Register
 (rw) (05)  [0;32mSSRT[0m  - [04:00] -  Set START Bit
 (rw) (01)  [0;32mSAST[0m  - [06:06] -  Set All START Bits (activates all channels)
      0 - SAST_0 :
         Set only the TCDn_CSR[START] bit specified in the SSRT field
      0x1 - SAST_1 :
         Set all bits in TCDn_CSR[START]
 (rw) (01)  [0;32mNOP[0m  - [07:07] -  No Op enable
      0 - NOP_0 :
         Normal operation
      0x1 - NOP_1 :
         No operation, ignore the other bits in this register
</lang>
#### p.dma0.err
<link=p.DMA0.ERR>
#### p.DMA0.HRS
<lang=dft>
 (ro)  [1;33m0x400e8034[0m (0x400e8000 + 0x0034)
Hardware Request Status Register
 (ro) (01)  [0;32mHRS0[0m  - [00:00] -  Hardware Request Status Channel 0
      0 - HRS0_0 :
         A hardware service request for channel 0 is not present
      0x1 - HRS0_1 :
         A hardware service request for channel 0 is present
 (ro) (01)  [0;32mHRS1[0m  - [01:01] -  Hardware Request Status Channel 1
      0 - HRS1_0 :
         A hardware service request for channel 1 is not present
      0x1 - HRS1_1 :
         A hardware service request for channel 1 is present
 (ro) (01)  [0;32mHRS2[0m  - [02:02] -  Hardware Request Status Channel 2
      0 - HRS2_0 :
         A hardware service request for channel 2 is not present
      0x1 - HRS2_1 :
         A hardware service request for channel 2 is present
 (ro) (01)  [0;32mHRS3[0m  - [03:03] -  Hardware Request Status Channel 3
      0 - HRS3_0 :
         A hardware service request for channel 3 is not present
      0x1 - HRS3_1 :
         A hardware service request for channel 3 is present
 (ro) (01)  [0;32mHRS4[0m  - [04:04] -  Hardware Request Status Channel 4
      0 - HRS4_0 :
         A hardware service request for channel 4 is not present
      0x1 - HRS4_1 :
         A hardware service request for channel 4 is present
 (ro) (01)  [0;32mHRS5[0m  - [05:05] -  Hardware Request Status Channel 5
      0 - HRS5_0 :
         A hardware service request for channel 5 is not present
      0x1 - HRS5_1 :
         A hardware service request for channel 5 is present
 (ro) (01)  [0;32mHRS6[0m  - [06:06] -  Hardware Request Status Channel 6
      0 - HRS6_0 :
         A hardware service request for channel 6 is not present
      0x1 - HRS6_1 :
         A hardware service request for channel 6 is present
 (ro) (01)  [0;32mHRS7[0m  - [07:07] -  Hardware Request Status Channel 7
      0 - HRS7_0 :
         A hardware service request for channel 7 is not present
      0x1 - HRS7_1 :
         A hardware service request for channel 7 is present
 (ro) (01)  [0;32mHRS8[0m  - [08:08] -  Hardware Request Status Channel 8
      0 - HRS8_0 :
         A hardware service request for channel 8 is not present
      0x1 - HRS8_1 :
         A hardware service request for channel 8 is present
 (ro) (01)  [0;32mHRS9[0m  - [09:09] -  Hardware Request Status Channel 9
      0 - HRS9_0 :
         A hardware service request for channel 9 is not present
      0x1 - HRS9_1 :
         A hardware service request for channel 9 is present
 (ro) (01)  [0;32mHRS10[0m  - [10:10] -  Hardware Request Status Channel 10
      0 - HRS10_0 :
         A hardware service request for channel 10 is not present
      0x1 - HRS10_1 :
         A hardware service request for channel 10 is present
 (ro) (01)  [0;32mHRS11[0m  - [11:11] -  Hardware Request Status Channel 11
      0 - HRS11_0 :
         A hardware service request for channel 11 is not present
      0x1 - HRS11_1 :
         A hardware service request for channel 11 is present
 (ro) (01)  [0;32mHRS12[0m  - [12:12] -  Hardware Request Status Channel 12
      0 - HRS12_0 :
         A hardware service request for channel 12 is not present
      0x1 - HRS12_1 :
         A hardware service request for channel 12 is present
 (ro) (01)  [0;32mHRS13[0m  - [13:13] -  Hardware Request Status Channel 13
      0 - HRS13_0 :
         A hardware service request for channel 13 is not present
      0x1 - HRS13_1 :
         A hardware service request for channel 13 is present
 (ro) (01)  [0;32mHRS14[0m  - [14:14] -  Hardware Request Status Channel 14
      0 - HRS14_0 :
         A hardware service request for channel 14 is not present
      0x1 - HRS14_1 :
         A hardware service request for channel 14 is present
 (ro) (01)  [0;32mHRS15[0m  - [15:15] -  Hardware Request Status Channel 15
      0 - HRS15_0 :
         A hardware service request for channel 15 is not present
      0x1 - HRS15_1 :
         A hardware service request for channel 15 is present
 (ro) (01)  [0;32mHRS16[0m  - [16:16] -  Hardware Request Status Channel 16
      0 - HRS16_0 :
         A hardware service request for channel 16 is not present
      0x1 - HRS16_1 :
         A hardware service request for channel 16 is present
 (ro) (01)  [0;32mHRS17[0m  - [17:17] -  Hardware Request Status Channel 17
      0 - HRS17_0 :
         A hardware service request for channel 17 is not present
      0x1 - HRS17_1 :
         A hardware service request for channel 17 is present
 (ro) (01)  [0;32mHRS18[0m  - [18:18] -  Hardware Request Status Channel 18
      0 - HRS18_0 :
         A hardware service request for channel 18 is not present
      0x1 - HRS18_1 :
         A hardware service request for channel 18 is present
 (ro) (01)  [0;32mHRS19[0m  - [19:19] -  Hardware Request Status Channel 19
      0 - HRS19_0 :
         A hardware service request for channel 19 is not present
      0x1 - HRS19_1 :
         A hardware service request for channel 19 is present
 (ro) (01)  [0;32mHRS20[0m  - [20:20] -  Hardware Request Status Channel 20
      0 - HRS20_0 :
         A hardware service request for channel 20 is not present
      0x1 - HRS20_1 :
         A hardware service request for channel 20 is present
 (ro) (01)  [0;32mHRS21[0m  - [21:21] -  Hardware Request Status Channel 21
      0 - HRS21_0 :
         A hardware service request for channel 21 is not present
      0x1 - HRS21_1 :
         A hardware service request for channel 21 is present
 (ro) (01)  [0;32mHRS22[0m  - [22:22] -  Hardware Request Status Channel 22
      0 - HRS22_0 :
         A hardware service request for channel 22 is not present
      0x1 - HRS22_1 :
         A hardware service request for channel 22 is present
 (ro) (01)  [0;32mHRS23[0m  - [23:23] -  Hardware Request Status Channel 23
      0 - HRS23_0 :
         A hardware service request for channel 23 is not present
      0x1 - HRS23_1 :
         A hardware service request for channel 23 is present
 (ro) (01)  [0;32mHRS24[0m  - [24:24] -  Hardware Request Status Channel 24
      0 - HRS24_0 :
         A hardware service request for channel 24 is not present
      0x1 - HRS24_1 :
         A hardware service request for channel 24 is present
 (ro) (01)  [0;32mHRS25[0m  - [25:25] -  Hardware Request Status Channel 25
      0 - HRS25_0 :
         A hardware service request for channel 25 is not present
      0x1 - HRS25_1 :
         A hardware service request for channel 25 is present
 (ro) (01)  [0;32mHRS26[0m  - [26:26] -  Hardware Request Status Channel 26
      0 - HRS26_0 :
         A hardware service request for channel 26 is not present
      0x1 - HRS26_1 :
         A hardware service request for channel 26 is present
 (ro) (01)  [0;32mHRS27[0m  - [27:27] -  Hardware Request Status Channel 27
      0 - HRS27_0 :
         A hardware service request for channel 27 is not present
      0x1 - HRS27_1 :
         A hardware service request for channel 27 is present
 (ro) (01)  [0;32mHRS28[0m  - [28:28] -  Hardware Request Status Channel 28
      0 - HRS28_0 :
         A hardware service request for channel 28 is not present
      0x1 - HRS28_1 :
         A hardware service request for channel 28 is present
 (ro) (01)  [0;32mHRS29[0m  - [29:29] -  Hardware Request Status Channel 29
      0 - HRS29_0 :
         A hardware service request for channel 29 is not preset
      0x1 - HRS29_1 :
         A hardware service request for channel 29 is present
 (ro) (01)  [0;32mHRS30[0m  - [30:30] -  Hardware Request Status Channel 30
      0 - HRS30_0 :
         A hardware service request for channel 30 is not present
      0x1 - HRS30_1 :
         A hardware service request for channel 30 is present
 (ro) (01)  [0;32mHRS31[0m  - [31:31] -  Hardware Request Status Channel 31
      0 - HRS31_0 :
         A hardware service request for channel 31 is not present
      0x1 - HRS31_1 :
         A hardware service request for channel 31 is present
</lang>
#### p.dma0.ears
<link=p.DMA0.EARS>
#### DMA0.DCHPRI2
<link=p.DMA0.DCHPRI2>
#### dma0.dchpri7
<link=p.DMA0.DCHPRI7>
#### p.DMA0.DCHPRI11
<lang=dft>
 (rw)  [1;33m0x400e8108[0m (0x400e8000 + 0x0108)
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
#### p.dma0.dchpri9
<link=p.DMA0.DCHPRI9>
#### p.dma0.dchpri13
<link=p.DMA0.DCHPRI13>
#### p.DMA0.DCHPRI20
<lang=dft>
 (rw)  [1;33m0x400e8117[0m (0x400e8000 + 0x0117)
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
#### DMA0.DCHPRI27
<link=p.DMA0.DCHPRI27>
#### dma0.dchpri31
<link=p.DMA0.DCHPRI31>
#### DMA0.DCHPRI30
<link=p.DMA0.DCHPRI30>
#### p.dma0.tcd0_slast
<link=p.DMA0.TCD0_SLAST>
#### p.dma0.tcd0_citer_elinkno
<link=p.DMA0.TCD0_CITER_ELINKNO>
#### DMA0.TCD0_CITER_ELINKYES
<link=p.DMA0.TCD0_CITER_ELINKYES>
#### p.DMA0.TCD0_CSR
<lang=dft>
 (rw)  [1;33m0x400e901c[0m (0x400e8000 + 0x101c)
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
#### DMA0.TCD1_ATTR
<link=p.DMA0.TCD1_ATTR>
#### p.DMA0.TCD1_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9028[0m (0x400e8000 + 0x1028)
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
#### DMA0.TCD1_SLAST
<link=p.DMA0.TCD1_SLAST>
#### p.DMA0.TCD2_SLAST
<lang=dft>
 (rw)  [1;33m0x400e904c[0m (0x400e8000 + 0x104c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### DMA0.TCD2_DADDR
<link=p.DMA0.TCD2_DADDR>
#### p.DMA0.TCD2_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9054[0m (0x400e8000 + 0x1054)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.dma0.tcd2_citer_elinkyes
<link=p.DMA0.TCD2_CITER_ELINKYES>
#### p.DMA0.TCD2_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e905e[0m (0x400e8000 + 0x105e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD3_SADDR
<link=p.DMA0.TCD3_SADDR>
#### DMA0.TCD3_NBYTES_MLNO
<link=p.DMA0.TCD3_NBYTES_MLNO>
#### dma0.tcd3_slast
<link=p.DMA0.TCD3_SLAST>
#### DMA0.TCD3_BITER_ELINKNO
<link=p.DMA0.TCD3_BITER_ELINKNO>
#### DMA0.TCD4_NBYTES_MLOFFNO
<link=p.DMA0.TCD4_NBYTES_MLOFFNO>
#### DMA0.TCD4_DOFF
<link=p.DMA0.TCD4_DOFF>
#### p.DMA0.TCD4_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9096[0m (0x400e8000 + 0x1096)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd5_citer_elinkyes
<link=p.DMA0.TCD5_CITER_ELINKYES>
#### p.dma0.tcd5_csr
<link=p.DMA0.TCD5_CSR>
#### p.DMA0.TCD6_DADDR
<lang=dft>
 (rw)  [1;33m0x400e90d0[0m (0x400e8000 + 0x10d0)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### dma0.tcd6_csr
<link=p.DMA0.TCD6_CSR>
#### DMA0.TCD7_SOFF
<link=p.DMA0.TCD7_SOFF>
#### p.DMA0.TCD7_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e90e8[0m (0x400e8000 + 0x10e8)
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
#### p.dma0.tcd7_slast
<link=p.DMA0.TCD7_SLAST>
#### dma0.tcd7_citer_elinkno
<link=p.DMA0.TCD7_CITER_ELINKNO>
#### p.dma0.tcd7_csr
<link=p.DMA0.TCD7_CSR>
#### p.dma0.tcd8_attr
<link=p.DMA0.TCD8_ATTR>
#### p.DMA0.TCD8_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9108[0m (0x400e8000 + 0x1108)
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
#### p.DMA0.TCD8_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9118[0m (0x400e8000 + 0x1118)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.dma0.tcd8_dlastsga
<link=p.DMA0.TCD8_DLASTSGA>
#### DMA0.TCD9_DOFF
<link=p.DMA0.TCD9_DOFF>
#### p.DMA0.TCD9_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9138[0m (0x400e8000 + 0x1138)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### DMA0.TCD10_SOFF
<link=p.DMA0.TCD10_SOFF>
#### dma0.tcd10_nbytes_mloffno
<link=p.DMA0.TCD10_NBYTES_MLOFFNO>
#### p.dma0.tcd10_dlastsga
<link=p.DMA0.TCD10_DLASTSGA>
#### p.DMA0.TCD11_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9176[0m (0x400e8000 + 0x1176)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD11_CITER_ELINKYES
<link=p.DMA0.TCD11_CITER_ELINKYES>
#### p.dma0.tcd11_csr
<link=p.DMA0.TCD11_CSR>
#### p.dma0.tcd12_nbytes_mlno
<link=p.DMA0.TCD12_NBYTES_MLNO>
#### p.DMA0.TCD12_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9188[0m (0x400e8000 + 0x1188)
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
#### p.dma0.tcd12_biter_elinkyes
<link=p.DMA0.TCD12_BITER_ELINKYES>
#### p.DMA0.TCD13_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e91a8[0m (0x400e8000 + 0x11a8)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### DMA0.TCD14_DOFF
<link=p.DMA0.TCD14_DOFF>
#### p.DMA0.TCD15_SOFF
<lang=dft>
 (rw)  [1;33m0x400e91e4[0m (0x400e8000 + 0x11e4)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.DMA0.TCD15_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e91e8[0m (0x400e8000 + 0x11e8)
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
#### p.dma0.tcd15_slast
<link=p.DMA0.TCD15_SLAST>
#### DMA0.TCD15_DOFF
<link=p.DMA0.TCD15_DOFF>
#### DMA0.TCD16_ATTR
<link=p.DMA0.TCD16_ATTR>
#### dma0.tcd16_nbytes_mlno
<link=p.DMA0.TCD16_NBYTES_MLNO>
#### dma0.tcd16_slast
<link=p.DMA0.TCD16_SLAST>
#### dma0.tcd16_dlastsga
<link=p.DMA0.TCD16_DLASTSGA>
#### p.DMA0.TCD16_CSR
<lang=dft>
 (rw)  [1;33m0x400e921c[0m (0x400e8000 + 0x121c)
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
#### p.dma0.tcd17_doff
<link=p.DMA0.TCD17_DOFF>
#### DMA0.TCD18_ATTR
<link=p.DMA0.TCD18_ATTR>
#### p.DMA0.TCD18_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9250[0m (0x400e8000 + 0x1250)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### DMA0.TCD18_CITER_ELINKYES
<link=p.DMA0.TCD18_CITER_ELINKYES>
#### p.DMA0.TCD18_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9258[0m (0x400e8000 + 0x1258)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### DMA0.TCD19_DADDR
<link=p.DMA0.TCD19_DADDR>
#### p.DMA0.TCD19_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9278[0m (0x400e8000 + 0x1278)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.dma0.tcd19_biter_elinkyes
<link=p.DMA0.TCD19_BITER_ELINKYES>
#### DMA0.TCD20_SOFF
<link=p.DMA0.TCD20_SOFF>
#### dma0.tcd20_slast
<link=p.DMA0.TCD20_SLAST>
#### dma0.tcd20_daddr
<link=p.DMA0.TCD20_DADDR>
#### p.dma0.tcd20_citer_elinkyes
<link=p.DMA0.TCD20_CITER_ELINKYES>
#### DMA0.TCD20_BITER_ELINKYES
<link=p.DMA0.TCD20_BITER_ELINKYES>
#### dma0.tcd21_nbytes_mloffno
<link=p.DMA0.TCD21_NBYTES_MLOFFNO>
#### p.DMA0.TCD21_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e92b6[0m (0x400e8000 + 0x12b6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd21_dlastsga
<link=p.DMA0.TCD21_DLASTSGA>
#### DMA0.TCD21_BITER_ELINKNO
<link=p.DMA0.TCD21_BITER_ELINKNO>
#### dma0.tcd22_daddr
<link=p.DMA0.TCD22_DADDR>
#### DMA0.TCD22_DOFF
<link=p.DMA0.TCD22_DOFF>
#### DMA0.TCD22_BITER_ELINKNO
<link=p.DMA0.TCD22_BITER_ELINKNO>
#### p.dma0.tcd23_nbytes_mloffno
<link=p.DMA0.TCD23_NBYTES_MLOFFNO>
#### DMA0.TCD23_NBYTES_MLOFFNO
<link=p.DMA0.TCD23_NBYTES_MLOFFNO>
#### DMA0.TCD23_SLAST
<link=p.DMA0.TCD23_SLAST>
#### p.dma0.tcd23_citer_elinkno
<link=p.DMA0.TCD23_CITER_ELINKNO>
#### p.dma0.tcd23_biter_elinkno
<link=p.DMA0.TCD23_BITER_ELINKNO>
#### p.dma0.tcd25_nbytes_mloffyes
<link=p.DMA0.TCD25_NBYTES_MLOFFYES>
#### DMA0.TCD25_SLAST
<link=p.DMA0.TCD25_SLAST>
#### p.dma0.tcd25_daddr
<link=p.DMA0.TCD25_DADDR>
#### DMA0.TCD26_SADDR
<link=p.DMA0.TCD26_SADDR>
#### p.dma0.tcd26_citer_elinkno
<link=p.DMA0.TCD26_CITER_ELINKNO>
#### p.dma0.tcd26_dlastsga
<link=p.DMA0.TCD26_DLASTSGA>
#### DMA0.TCD26_DLASTSGA
<link=p.DMA0.TCD26_DLASTSGA>
#### p.dma0.tcd26_biter_elinkno
<link=p.DMA0.TCD26_BITER_ELINKNO>
#### p.DMA0.TCD27_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9364[0m (0x400e8000 + 0x1364)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### DMA0.TCD27_ATTR
<link=p.DMA0.TCD27_ATTR>
#### p.DMA0.TCD27_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9368[0m (0x400e8000 + 0x1368)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.DMA0.TCD27_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9368[0m (0x400e8000 + 0x1368)
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
#### DMA0.TCD27_CITER_ELINKNO
<link=p.DMA0.TCD27_CITER_ELINKNO>
#### p.DMA0.TCD28_SLAST
<lang=dft>
 (rw)  [1;33m0x400e938c[0m (0x400e8000 + 0x138c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.DMA0.TCD28_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9398[0m (0x400e8000 + 0x1398)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.dma0.tcd28_dlastsga
<link=p.DMA0.TCD28_DLASTSGA>
#### p.DMA0.TCD28_CSR
<lang=dft>
 (rw)  [1;33m0x400e939c[0m (0x400e8000 + 0x139c)
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
#### DMA0.TCD29_SADDR
<link=p.DMA0.TCD29_SADDR>
#### p.DMA0.TCD29_SOFF
<lang=dft>
 (rw)  [1;33m0x400e93a4[0m (0x400e8000 + 0x13a4)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.DMA0.TCD29_ATTR
<lang=dft>
 (rw)  [1;33m0x400e93a6[0m (0x400e8000 + 0x13a6)
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
#### dma0.tcd29_slast
<link=p.DMA0.TCD29_SLAST>
#### dma0.tcd29_daddr
<link=p.DMA0.TCD29_DADDR>
#### p.dma0.tcd29_csr
<link=p.DMA0.TCD29_CSR>
#### DMA0.TCD31_NBYTES_MLNO
<link=p.DMA0.TCD31_NBYTES_MLNO>
#### dma0.tcd31_daddr
<link=p.DMA0.TCD31_DADDR>
#### DMA0.TCD31_CITER_ELINKYES
<link=p.DMA0.TCD31_CITER_ELINKYES>
#### dma0.tcd31_biter_elinkno
<link=p.DMA0.TCD31_BITER_ELINKNO>
#### dmamux.chcfg[7]
<link=p.DMAMUX.CHCFG[7]>
#### dmamux.chcfg[10]
<link=p.DMAMUX.CHCFG[10]>
#### DMAMUX.CHCFG[12]
<link=p.DMAMUX.CHCFG[12]>
#### p.dmamux.chcfg[13]
<link=p.DMAMUX.CHCFG[13]>
#### dmamux.chcfg[17]
<link=p.DMAMUX.CHCFG[17]>
#### DMAMUX.CHCFG[19]
<link=p.DMAMUX.CHCFG[19]>
#### dmamux.chcfg[21]
<link=p.DMAMUX.CHCFG[21]>
#### p.gpc.imr2
<link=p.GPC.IMR2>
#### gpc.imr3
<link=p.GPC.IMR3>
#### p.gpc.isr2
<link=p.GPC.ISR2>
#### gpc.isr2
<link=p.GPC.ISR2>
#### p.PGC.MEGA_PDNSCR
<lang=dft>
 (rw)  [1;33m0x400f4228[0m (0x400f4000 + 0x0228)
PGC Mega Pull Down Sequence Control Register
 (rw) (06)  [0;32mISO[0m  - [05:00] -  After a power-down request (pdn_req assertion), the PGC waits a number of IPG c
 locks equal to the value of ISO before asserting isolation
 (rw) (06)  [0;32mISO2SW[0m  - [13:08] -  After asserting isolation, the PGC waits a number of IPG clocks equal to the va
 lue of ISO2SW before negating power toggle on/off signal (switch_b)
</lang>
#### p.PGC.MEGA_SR
<lang=dft>
 (rw)  [1;33m0x400f422c[0m (0x400f4000 + 0x022c)
PGC Mega Power Gating Controller Status Register
 (rw) (01)  [0;32mPSR[0m  - [00:00] -  Power status
      0 - PSR_0 :
         The target subsystem was not powered down for the previous power-down r
         equest.
      0x1 - PSR_1 :
         The target subsystem was powered down for the previous power-down reque
         st.
</lang>
#### SRC.SCR
<link=p.SRC.SCR>
#### p.src.sbmr2
<link=p.SRC.SBMR2>
#### SRC.SBMR2
<link=p.SRC.SBMR2>
#### src.gpr1
<link=p.SRC.GPR1>
#### p.SRC.GPR2
<lang=dft>
 (rw)  [1;33m0x400f8024[0m (0x400f8000 + 0x0024)
SRC General Purpose Register 2
 (rw) (32)  [0;32mPERSISTENT_ARG0[0m  - [31:00] -  Holds argument of entry function for core0 for waking-up from low power mode
</lang>
#### SRC.GPR9
<link=p.SRC.GPR9>
#### ccm.cbcdr
<link=p.CCM.CBCDR>
#### CCM.CBCMR
<link=p.CCM.CBCMR>
#### p.CCM.CSCMR2
<lang=dft>
 (rw)  [1;33m0x400fc020[0m (0x400fc000 + 0x0020)
CCM Serial Clock Multiplexer Register 2
 (rw) (06)  [0;32mCAN_CLK_PODF[0m  - [07:02] -  Divider for CAN/CANFD clock podf.
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
 (rw) (02)  [0;32mCAN_CLK_SEL[0m  - [09:08] -  Selector for CAN/CANFD clock multiplexer
      0 - CAN_CLK_SEL_0 :
         derive clock from pll3_sw_clk divided clock (60M)
      0x1 - CAN_CLK_SEL_1 :
         derive clock from osc_clk (24M)
      0x2 - CAN_CLK_SEL_2 :
         derive clock from pll3_sw_clk divided clock (80M)
      0x3 - CAN_CLK_SEL_3 :
         Disable FlexCAN clock
 (rw) (02)  [0;32mFLEXIO2_CLK_SEL[0m  - [20:19] -  Selector for flexio2/flexio3 clock multiplexer
      0 - FLEXIO2_CLK_SEL_0 :
         derive clock from PLL4 divided clock
      0x1 - FLEXIO2_CLK_SEL_1 :
         derive clock from PLL3 PFD2 clock
      0x2 - FLEXIO2_CLK_SEL_2 :
         derive clock from PLL5 clock
      0x3 - FLEXIO2_CLK_SEL_3 :
         derive clock from pll3_sw_clk
</lang>
#### p.CCM.CSCDR3
<lang=dft>
 (rw)  [1;33m0x400fc03c[0m (0x400fc000 + 0x003c)
CCM Serial Clock Divider Register 3
 (rw) (02)  [0;32mCSI_CLK_SEL[0m  - [10:09] -  Selector for csi_mclk multiplexer
      0 - CSI_CLK_SEL_0 :
         derive clock from osc_clk (24M)
      0x1 - CSI_CLK_SEL_1 :
         derive clock from PLL2 PFD2
      0x2 - CSI_CLK_SEL_2 :
         derive clock from pll3_120M
      0x3 - CSI_CLK_SEL_3 :
         derive clock from PLL3 PFD1
 (rw) (03)  [0;32mCSI_PODF[0m  - [13:11] -  Post divider for csi_mclk. Divider should be updated when output clock is gated
 .
      0 - CSI_PODF_0 :
         divide by 1
      0x1 - CSI_PODF_1 :
         divide by 2
      0x2 - CSI_PODF_2 :
         divide by 3
      0x3 - CSI_PODF_3 :
         divide by 4
      0x4 - CSI_PODF_4 :
         divide by 5
      0x5 - CSI_PODF_5 :
         divide by 6
      0x6 - CSI_PODF_6 :
         divide by 7
      0x7 - CSI_PODF_7 :
         divide by 8
</lang>
#### CCM.CIMR
<link=p.CCM.CIMR>
#### CCM.CCGR5
<link=p.CCM.CCGR5>
#### ccm.ccgr7
<link=p.CCM.CCGR7>
#### p.ROMC.ROMPATCH0D
<lang=dft>
 (rw)  [1;33m0x401800f0[0m (0x40180000 + 0x00f0)
ROMC Data Registers
 (rw) (32)  [0;32mDATAX[0m  - [31:00] -  Data Fix Registers - Stores the data used for 1-word data fix operations
</lang>
#### p.ROMC.ROMPATCHCNTL
<lang=dft>
 (rw)  [1;33m0x401800f4[0m (0x40180000 + 0x00f4)
ROMC Control Register
 (rw) (08)  [0;32mDATAFIX[0m  - [07:00] -  Data Fix Enable - Controls the use of the first 8 address comparators for 1-wor
 d data fix or for code patch routine
      0 - DATAFIX_0 :
         Address comparator triggers a opcode patch
      0x1 - DATAFIX_1 :
         Address comparator triggers a data fix
 (rw) (01)  [0;32mDIS[0m  - [29:29] -  ROMC Disable -- This bit, when set, disables all ROMC operations
      0 - DIS_0 :
         Does not affect any ROMC functions (default)
      0x1 - DIS_1 :
         Disable all ROMC functions: data fixing, and opcode patching
</lang>
#### romc.rompatchenh
<link=p.ROMC.ROMPATCHENH>
#### romc.rompatch2a
<link=p.ROMC.ROMPATCH2A>
#### p.ROMC.ROMPATCH3A
<lang=dft>
 (rw)  [1;33m0x4018010c[0m (0x40180000 + 0x010c)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### p.romc.rompatch9a
<link=p.ROMC.ROMPATCH9A>
#### p.ROMC.ROMPATCH11A
<lang=dft>
 (rw)  [1;33m0x4018012c[0m (0x40180000 + 0x012c)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### ROMC.ROMPATCH13A
<link=p.ROMC.ROMPATCH13A>
#### romc.rompatchsr
<link=p.ROMC.ROMPATCHSR>
#### lpuart1.modir
<link=p.LPUART1.MODIR>
#### p.LPUART2.VERID
<lang=dft>
 (ro)  [1;33m0x40188000[0m (0x40188000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Identification Number
      0x1 - FEATURE_1 :
         Standard feature set.
      0x3 - FEATURE_3 :
         Standard feature set with MODEM/IrDA support.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### p.lpuart2.pincfg
<link=p.LPUART2.PINCFG>
#### lpuart2.pincfg
<link=p.LPUART2.PINCFG>
#### p.LPUART2.STAT
<lang=dft>
 (rw)  [1;33m0x40188014[0m (0x40188000 + 0x0014)
LPUART Status Register
 (rw) (01)  [0;32mMA2F[0m  - [14:14] -  Match 2 Flag
      0 - MA2F_0 :
         Received data is not equal to MA2
      0x1 - MA2F_1 :
         Received data is equal to MA2
 (rw) (01)  [0;32mMA1F[0m  - [15:15] -  Match 1 Flag
      0 - MA1F_0 :
         Received data is not equal to MA1
      0x1 - MA1F_1 :
         Received data is equal to MA1
 (rw) (01)  [0;32mPF[0m  - [16:16] -  Parity Error Flag
      0 - PF_0 :
         No parity error.
      0x1 - PF_1 :
         Parity error.
 (rw) (01)  [0;32mFE[0m  - [17:17] -  Framing Error Flag
      0 - FE_0 :
         No framing error detected. This does not guarantee the framing is corre
         ct.
      0x1 - FE_1 :
         Framing error.
 (rw) (01)  [0;32mNF[0m  - [18:18] -  Noise Flag
      0 - NF_0 :
         No noise detected.
      0x1 - NF_1 :
         Noise detected in the received character in the DATA register.
 (rw) (01)  [0;32mOR[0m  - [19:19] -  Receiver Overrun Flag
      0 - OR_0 :
         No overrun.
      0x1 - OR_1 :
         Receive overrun (new LPUART data lost).
 (rw) (01)  [0;32mIDLE[0m  - [20:20] -  Idle Line Flag
      0 - IDLE_0 :
         No idle line detected.
      0x1 - IDLE_1 :
         Idle line was detected.
 (ro) (01)  [0;32mRDRF[0m  - [21:21] -  Receive Data Register Full Flag
      0 - RDRF_0 :
         Receive data buffer empty.
      0x1 - RDRF_1 :
         Receive data buffer full.
 (ro) (01)  [0;32mTC[0m  - [22:22] -  Transmission Complete Flag
      0 - TC_0 :
         Transmitter active (sending data, a preamble, or a break).
      0x1 - TC_1 :
         Transmitter idle (transmission activity complete).
 (ro) (01)  [0;32mTDRE[0m  - [23:23] -  Transmit Data Register Empty Flag
      0 - TDRE_0 :
         Transmit data buffer full.
      0x1 - TDRE_1 :
         Transmit data buffer empty.
 (ro) (01)  [0;32mRAF[0m  - [24:24] -  Receiver Active Flag
      0 - RAF_0 :
         LPUART receiver idle waiting for a start bit.
      0x1 - RAF_1 :
         LPUART receiver active (RXD input not idle).
 (rw) (01)  [0;32mLBKDE[0m  - [25:25] -  LIN Break Detection Enable
      0 - LBKDE_0 :
         LIN break detect is disabled, normal break character can be detected.
      0x1 - LBKDE_1 :
         LIN break detect is enabled. LIN break character is detected at length 
         of 11 bit times (if M = 0) or 12 (if M = 1) or 13 (M10 = 1).
 (rw) (01)  [0;32mBRK13[0m  - [26:26] -  Break Character Generation Length
      0 - BRK13_0 :
         Break character is transmitted with length of 9 to 13 bit times.
      0x1 - BRK13_1 :
         Break character is transmitted with length of 12 to 15 bit times.
 (rw) (01)  [0;32mRWUID[0m  - [27:27] -  Receive Wake Up Idle Detect
      0 - RWUID_0 :
         During receive standby state (RWU = 1), the IDLE bit does not get set u
         pon detection of an idle character. During address match wakeup, the ID
         LE bit does not set when an address does not match.
      0x1 - RWUID_1 :
         During receive standby state (RWU = 1), the IDLE bit gets set upon dete
         ction of an idle character. During address match wakeup, the IDLE bit d
         oes set when an address does not match.
 (rw) (01)  [0;32mRXINV[0m  - [28:28] -  Receive Data Inversion
      0 - RXINV_0 :
         Receive data not inverted.
      0x1 - RXINV_1 :
         Receive data inverted.
 (rw) (01)  [0;32mMSBF[0m  - [29:29] -  MSB First
      0 - MSBF_0 :
         LSB (bit0) is the first bit that is transmitted following the start bit
         . Further, the first bit received after the start bit is identified as 
         bit0.
      0x1 - MSBF_1 :
         MSB (bit9, bit8, bit7 or bit6) is the first bit that is transmitted fol
         lowing the start bit depending on the setting of CTRL[M], CTRL[PE] and 
         BAUD[M10]. Further, the first bit received after the start bit is ident
         ified as bit9, bit8, bit7 or bit6 depending on the setting of CTRL[M] a
         nd CTRL[PE].
 (rw) (01)  [0;32mRXEDGIF[0m  - [30:30] -  RXD Pin Active Edge Interrupt Flag
      0 - RXEDGIF_0 :
         No active edge on the receive pin has occurred.
      0x1 - RXEDGIF_1 :
         An active edge on the receive pin has occurred.
 (rw) (01)  [0;32mLBKDIF[0m  - [31:31] -  LIN Break Detect Interrupt Flag
      0 - LBKDIF_0 :
         No LIN break character has been detected.
      0x1 - LBKDIF_1 :
         LIN break character has been detected.
</lang>
#### p.LPUART2.CTRL
<lang=dft>
 (rw)  [1;33m0x40188018[0m (0x40188000 + 0x0018)
LPUART Control Register
 (rw) (01)  [0;32mPT[0m  - [00:00] -  Parity Type
      0 - PT_0 :
         Even parity.
      0x1 - PT_1 :
         Odd parity.
 (rw) (01)  [0;32mPE[0m  - [01:01] -  Parity Enable
      0 - PE_0 :
         No hardware parity generation or checking.
      0x1 - PE_1 :
         Parity enabled.
 (rw) (01)  [0;32mILT[0m  - [02:02] -  Idle Line Type Select
      0 - ILT_0 :
         Idle character bit count starts after start bit.
      0x1 - ILT_1 :
         Idle character bit count starts after stop bit.
 (rw) (01)  [0;32mWAKE[0m  - [03:03] -  Receiver Wakeup Method Select
      0 - WAKE_0 :
         Configures RWU for idle-line wakeup.
      0x1 - WAKE_1 :
         Configures RWU with address-mark wakeup.
 (rw) (01)  [0;32mM[0m  - [04:04] -  9-Bit or 8-Bit Mode Select
      0 - M_0 :
         Receiver and transmitter use 8-bit data characters.
      0x1 - M_1 :
         Receiver and transmitter use 9-bit data characters.
 (rw) (01)  [0;32mRSRC[0m  - [05:05] -  Receiver Source Select
      0 - RSRC_0 :
         Provided LOOPS is set, RSRC is cleared, selects internal loop back mode
          and the LPUART does not use the RXD pin.
      0x1 - RSRC_1 :
         Single-wire LPUART mode where the TXD pin is connected to the transmitt
         er output and receiver input.
 (rw) (01)  [0;32mDOZEEN[0m  - [06:06] -  Doze Enable
      0 - DOZEEN_0 :
         LPUART is enabled in Doze mode.
      0x1 - DOZEEN_1 :
         LPUART is disabled in Doze mode.
 (rw) (01)  [0;32mLOOPS[0m  - [07:07] -  Loop Mode Select
      0 - LOOPS_0 :
         Normal operation - RXD and TXD use separate pins.
      0x1 - LOOPS_1 :
         Loop mode or single-wire mode where transmitter outputs are internally 
         connected to receiver input (see RSRC bit).
 (rw) (03)  [0;32mIDLECFG[0m  - [10:08] -  Idle Configuration
      0 - IDLECFG_0 :
         1 idle character
      0x1 - IDLECFG_1 :
         2 idle characters
      0x2 - IDLECFG_2 :
         4 idle characters
      0x3 - IDLECFG_3 :
         8 idle characters
      0x4 - IDLECFG_4 :
         16 idle characters
      0x5 - IDLECFG_5 :
         32 idle characters
      0x6 - IDLECFG_6 :
         64 idle characters
      0x7 - IDLECFG_7 :
         128 idle characters
 (rw) (01)  [0;32mM7[0m  - [11:11] -  7-Bit Mode Select
      0 - M7_0 :
         Receiver and transmitter use 8-bit to 10-bit data characters.
      0x1 - M7_1 :
         Receiver and transmitter use 7-bit data characters.
 (rw) (01)  [0;32mMA2IE[0m  - [14:14] -  Match 2 Interrupt Enable
      0 - MA2IE_0 :
         MA2F interrupt disabled
      0x1 - MA2IE_1 :
         MA2F interrupt enabled
 (rw) (01)  [0;32mMA1IE[0m  - [15:15] -  Match 1 Interrupt Enable
      0 - MA1IE_0 :
         MA1F interrupt disabled
      0x1 - MA1IE_1 :
         MA1F interrupt enabled
 (rw) (01)  [0;32mSBK[0m  - [16:16] -  Send Break
      0 - SBK_0 :
         Normal transmitter operation.
      0x1 - SBK_1 :
         Queue break character(s) to be sent.
 (rw) (01)  [0;32mRWU[0m  - [17:17] -  Receiver Wakeup Control
      0 - RWU_0 :
         Normal receiver operation.
      0x1 - RWU_1 :
         LPUART receiver in standby waiting for wakeup condition.
 (rw) (01)  [0;32mRE[0m  - [18:18] -  Receiver Enable
      0 - RE_0 :
         Receiver disabled.
      0x1 - RE_1 :
         Receiver enabled.
 (rw) (01)  [0;32mTE[0m  - [19:19] -  Transmitter Enable
      0 - TE_0 :
         Transmitter disabled.
      0x1 - TE_1 :
         Transmitter enabled.
 (rw) (01)  [0;32mILIE[0m  - [20:20] -  Idle Line Interrupt Enable
      0 - ILIE_0 :
         Hardware interrupts from IDLE disabled; use polling.
      0x1 - ILIE_1 :
         Hardware interrupt requested when IDLE flag is 1.
 (rw) (01)  [0;32mRIE[0m  - [21:21] -  Receiver Interrupt Enable
      0 - RIE_0 :
         Hardware interrupts from RDRF disabled; use polling.
      0x1 - RIE_1 :
         Hardware interrupt requested when RDRF flag is 1.
 (rw) (01)  [0;32mTCIE[0m  - [22:22] -  Transmission Complete Interrupt Enable for
      0 - TCIE_0 :
         Hardware interrupts from TC disabled; use polling.
      0x1 - TCIE_1 :
         Hardware interrupt requested when TC flag is 1.
 (rw) (01)  [0;32mTIE[0m  - [23:23] -  Transmit Interrupt Enable
      0 - TIE_0 :
         Hardware interrupts from TDRE disabled; use polling.
      0x1 - TIE_1 :
         Hardware interrupt requested when TDRE flag is 1.
 (rw) (01)  [0;32mPEIE[0m  - [24:24] -  Parity Error Interrupt Enable
      0 - PEIE_0 :
         PF interrupts disabled; use polling).
      0x1 - PEIE_1 :
         Hardware interrupt requested when PF is set.
 (rw) (01)  [0;32mFEIE[0m  - [25:25] -  Framing Error Interrupt Enable
      0 - FEIE_0 :
         FE interrupts disabled; use polling.
      0x1 - FEIE_1 :
         Hardware interrupt requested when FE is set.
 (rw) (01)  [0;32mNEIE[0m  - [26:26] -  Noise Error Interrupt Enable
      0 - NEIE_0 :
         NF interrupts disabled; use polling.
      0x1 - NEIE_1 :
         Hardware interrupt requested when NF is set.
 (rw) (01)  [0;32mORIE[0m  - [27:27] -  Overrun Interrupt Enable
      0 - ORIE_0 :
         OR interrupts disabled; use polling.
      0x1 - ORIE_1 :
         Hardware interrupt requested when OR is set.
 (rw) (01)  [0;32mTXINV[0m  - [28:28] -  Transmit Data Inversion
      0 - TXINV_0 :
         Transmit data not inverted.
      0x1 - TXINV_1 :
         Transmit data inverted.
 (rw) (01)  [0;32mTXDIR[0m  - [29:29] -  TXD Pin Direction in Single-Wire Mode
      0 - TXDIR_0 :
         TXD pin is an input in single-wire mode.
      0x1 - TXDIR_1 :
         TXD pin is an output in single-wire mode.
 (rw) (01)  [0;32mR9T8[0m  - [30:30] -  Receive Bit 9 / Transmit Bit 8
 (rw) (01)  [0;32mR8T9[0m  - [31:31] -  Receive Bit 8 / Transmit Bit 9
</lang>
#### p.lpuart2.fifo
<link=p.LPUART2.FIFO>
#### p.LPUART3
<lang=dft>
base: 0x4018c000
BAUD            CTRL            DATA            FIFO            
GLOBAL          MATCH           MODIR           PARAM           
PINCFG          STAT            VERID           WATER           
输入 p.LPUART3.{reg_name} 以查看寄存器的详细信息
type p.LPUART3.{reg_name} to check details of registers
</lang>
#### p.LPUART3.PARAM
<lang=dft>
 (ro)  [1;33m0x4018c004[0m (0x4018c000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
</lang>
#### p.lpuart3.ctrl
<link=p.LPUART3.CTRL>
#### LPUART3.WATER
<link=p.LPUART3.WATER>
#### p.lpuart4.pincfg
<link=p.LPUART4.PINCFG>
#### lpuart4.pincfg
<link=p.LPUART4.PINCFG>
#### p.lpuart4.baud
<link=p.LPUART4.BAUD>
#### p.LPUART5.MODIR
<lang=dft>
 (rw)  [1;33m0x40194024[0m (0x40194000 + 0x0024)
LPUART Modem IrDA Register
 (rw) (01)  [0;32mTXCTSE[0m  - [00:00] -  Transmitter clear-to-send enable
      0 - TXCTSE_0 :
         CTS has no effect on the transmitter.
      0x1 - TXCTSE_1 :
         Enables clear-to-send operation. The transmitter checks the state of CT
         S each time it is ready to send a character. If CTS is asserted, the ch
         aracter is sent. If CTS is deasserted, the signal TXD remains in the ma
         rk state and transmission is delayed until CTS is asserted. Changes in 
         CTS as a character is being sent do not affect its transmission.
 (rw) (01)  [0;32mTXRTSE[0m  - [01:01] -  Transmitter request-to-send enable
      0 - TXRTSE_0 :
         The transmitter has no effect on RTS.
      0x1 - TXRTSE_1 :
         When a character is placed into an empty transmitter data buffer , RTS 
         asserts one bit time before the start bit is transmitted. RTS deasserts
          one bit time after all characters in the transmitter data buffer and s
         hift register are completely sent, including the last stop bit.
 (rw) (01)  [0;32mTXRTSPOL[0m  - [02:02] -  Transmitter request-to-send polarity
      0 - TXRTSPOL_0 :
         Transmitter RTS is active low.
      0x1 - TXRTSPOL_1 :
         Transmitter RTS is active high.
 (rw) (01)  [0;32mRXRTSE[0m  - [03:03] -  Receiver request-to-send enable
      0 - RXRTSE_0 :
         The receiver has no effect on RTS.
      0x1 - RXRTSE_1 :
         RTS is deasserted if the receiver data register is full or a start bit 
         has been detected that would cause the receiver data register to become
          full. RTS is asserted if the receiver data register is not full and ha
         s not detected a start bit that would cause the receiver data register 
         to become full.
 (rw) (01)  [0;32mTXCTSC[0m  - [04:04] -  Transmit CTS Configuration
      0 - TXCTSC_0 :
         CTS input is sampled at the start of each character.
      0x1 - TXCTSC_1 :
         CTS input is sampled when the transmitter is idle.
 (rw) (01)  [0;32mTXCTSSRC[0m  - [05:05] -  Transmit CTS Source
      0 - TXCTSSRC_0 :
         CTS input is the CTS_B pin.
      0x1 - TXCTSSRC_1 :
         CTS input is the inverted Receiver Match result.
 (rw) (02)  [0;32mRTSWATER[0m  - [09:08] -  Receive RTS Configuration
 (rw) (02)  [0;32mTNP[0m  - [17:16] -  Transmitter narrow pulse
      0 - TNP_0 :
         1/OSR.
      0x1 - TNP_1 :
         2/OSR.
      0x2 - TNP_2 :
         3/OSR.
      0x3 - TNP_3 :
         4/OSR.
 (rw) (01)  [0;32mIREN[0m  - [18:18] -  Infrared enable
      0 - IREN_0 :
         IR disabled.
      0x1 - IREN_1 :
         IR enabled.
</lang>
#### p.LPUART5.FIFO
<lang=dft>
 (rw)  [1;33m0x40194028[0m (0x40194000 + 0x0028)
LPUART FIFO Register
 (ro) (03)  [0;32mRXFIFOSIZE[0m  - [02:00] -  Receive FIFO Buffer Depth
      0 - RXFIFOSIZE_0 :
         Receive FIFO/Buffer depth = 1 dataword.
      0x1 - RXFIFOSIZE_1 :
         Receive FIFO/Buffer depth = 4 datawords.
      0x2 - RXFIFOSIZE_2 :
         Receive FIFO/Buffer depth = 8 datawords.
      0x3 - RXFIFOSIZE_3 :
         Receive FIFO/Buffer depth = 16 datawords.
      0x4 - RXFIFOSIZE_4 :
         Receive FIFO/Buffer depth = 32 datawords.
      0x5 - RXFIFOSIZE_5 :
         Receive FIFO/Buffer depth = 64 datawords.
      0x6 - RXFIFOSIZE_6 :
         Receive FIFO/Buffer depth = 128 datawords.
      0x7 - RXFIFOSIZE_7 :
         Receive FIFO/Buffer depth = 256 datawords.
 (rw) (01)  [0;32mRXFE[0m  - [03:03] -  Receive FIFO Enable
      0 - RXFE_0 :
         Receive FIFO is not enabled. Buffer is depth 1.
      0x1 - RXFE_1 :
         Receive FIFO is enabled. Buffer is depth indicted by RXFIFOSIZE.
 (ro) (03)  [0;32mTXFIFOSIZE[0m  - [06:04] -  Transmit FIFO Buffer Depth
      0 - TXFIFOSIZE_0 :
         Transmit FIFO/Buffer depth = 1 dataword.
      0x1 - TXFIFOSIZE_1 :
         Transmit FIFO/Buffer depth = 4 datawords.
      0x2 - TXFIFOSIZE_2 :
         Transmit FIFO/Buffer depth = 8 datawords.
      0x3 - TXFIFOSIZE_3 :
         Transmit FIFO/Buffer depth = 16 datawords.
      0x4 - TXFIFOSIZE_4 :
         Transmit FIFO/Buffer depth = 32 datawords.
      0x5 - TXFIFOSIZE_5 :
         Transmit FIFO/Buffer depth = 64 datawords.
      0x6 - TXFIFOSIZE_6 :
         Transmit FIFO/Buffer depth = 128 datawords.
      0x7 - TXFIFOSIZE_7 :
         Transmit FIFO/Buffer depth = 256 datawords
 (rw) (01)  [0;32mTXFE[0m  - [07:07] -  Transmit FIFO Enable
      0 - TXFE_0 :
         Transmit FIFO is not enabled. Buffer is depth 1.
      0x1 - TXFE_1 :
         Transmit FIFO is enabled. Buffer is depth indicated by TXFIFOSIZE.
 (rw) (01)  [0;32mRXUFE[0m  - [08:08] -  Receive FIFO Underflow Interrupt Enable
      0 - RXUFE_0 :
         RXUF flag does not generate an interrupt to the host.
      0x1 - RXUFE_1 :
         RXUF flag generates an interrupt to the host.
 (rw) (01)  [0;32mTXOFE[0m  - [09:09] -  Transmit FIFO Overflow Interrupt Enable
      0 - TXOFE_0 :
         TXOF flag does not generate an interrupt to the host.
      0x1 - TXOFE_1 :
         TXOF flag generates an interrupt to the host.
 (rw) (03)  [0;32mRXIDEN[0m  - [12:10] -  Receiver Idle Empty Enable
      0 - RXIDEN_0 :
         Disable RDRF assertion due to partially filled FIFO when receiver is id
         le.
      0x1 - RXIDEN_1 :
         Enable RDRF assertion due to partially filled FIFO when receiver is idl
         e for 1 character.
      0x2 - RXIDEN_2 :
         Enable RDRF assertion due to partially filled FIFO when receiver is idl
         e for 2 characters.
      0x3 - RXIDEN_3 :
         Enable RDRF assertion due to partially filled FIFO when receiver is idl
         e for 4 characters.
      0x4 - RXIDEN_4 :
         Enable RDRF assertion due to partially filled FIFO when receiver is idl
         e for 8 characters.
      0x5 - RXIDEN_5 :
         Enable RDRF assertion due to partially filled FIFO when receiver is idl
         e for 16 characters.
      0x6 - RXIDEN_6 :
         Enable RDRF assertion due to partially filled FIFO when receiver is idl
         e for 32 characters.
      0x7 - RXIDEN_7 :
         Enable RDRF assertion due to partially filled FIFO when receiver is idl
         e for 64 characters.
 (rw) (01)  [0;32mRXFLUSH[0m  - [14:14] -  Receive FIFO/Buffer Flush
      0 - RXFLUSH_0 :
         No flush operation occurs.
      0x1 - RXFLUSH_1 :
         All data in the receive FIFO/buffer is cleared out.
 (rw) (01)  [0;32mTXFLUSH[0m  - [15:15] -  Transmit FIFO/Buffer Flush
      0 - TXFLUSH_0 :
         No flush operation occurs.
      0x1 - TXFLUSH_1 :
         All data in the transmit FIFO/Buffer is cleared out.
 (rw) (01)  [0;32mRXUF[0m  - [16:16] -  Receiver Buffer Underflow Flag
      0 - RXUF_0 :
         No receive buffer underflow has occurred since the last time the flag w
         as cleared.
      0x1 - RXUF_1 :
         At least one receive buffer underflow has occurred since the last time 
         the flag was cleared.
 (rw) (01)  [0;32mTXOF[0m  - [17:17] -  Transmitter Buffer Overflow Flag
      0 - TXOF_0 :
         No transmit buffer overflow has occurred since the last time the flag w
         as cleared.
      0x1 - TXOF_1 :
         At least one transmit buffer overflow has occurred since the last time 
         the flag was cleared.
 (ro) (01)  [0;32mRXEMPT[0m  - [22:22] -  Receive Buffer/FIFO Empty
      0 - RXEMPT_0 :
         Receive buffer is not empty.
      0x1 - RXEMPT_1 :
         Receive buffer is empty.
 (ro) (01)  [0;32mTXEMPT[0m  - [23:23] -  Transmit Buffer/FIFO Empty
      0 - TXEMPT_0 :
         Transmit buffer is not empty.
      0x1 - TXEMPT_1 :
         Transmit buffer is empty.
</lang>
#### lpuart5.water
<link=p.LPUART5.WATER>
#### p.lpuart6
<link=p.LPUART6>
#### p.lpuart6.ctrl
<link=p.LPUART6.CTRL>
#### p.LPUART7.STAT
<lang=dft>
 (rw)  [1;33m0x4019c014[0m (0x4019c000 + 0x0014)
LPUART Status Register
 (rw) (01)  [0;32mMA2F[0m  - [14:14] -  Match 2 Flag
      0 - MA2F_0 :
         Received data is not equal to MA2
      0x1 - MA2F_1 :
         Received data is equal to MA2
 (rw) (01)  [0;32mMA1F[0m  - [15:15] -  Match 1 Flag
      0 - MA1F_0 :
         Received data is not equal to MA1
      0x1 - MA1F_1 :
         Received data is equal to MA1
 (rw) (01)  [0;32mPF[0m  - [16:16] -  Parity Error Flag
      0 - PF_0 :
         No parity error.
      0x1 - PF_1 :
         Parity error.
 (rw) (01)  [0;32mFE[0m  - [17:17] -  Framing Error Flag
      0 - FE_0 :
         No framing error detected. This does not guarantee the framing is corre
         ct.
      0x1 - FE_1 :
         Framing error.
 (rw) (01)  [0;32mNF[0m  - [18:18] -  Noise Flag
      0 - NF_0 :
         No noise detected.
      0x1 - NF_1 :
         Noise detected in the received character in the DATA register.
 (rw) (01)  [0;32mOR[0m  - [19:19] -  Receiver Overrun Flag
      0 - OR_0 :
         No overrun.
      0x1 - OR_1 :
         Receive overrun (new LPUART data lost).
 (rw) (01)  [0;32mIDLE[0m  - [20:20] -  Idle Line Flag
      0 - IDLE_0 :
         No idle line detected.
      0x1 - IDLE_1 :
         Idle line was detected.
 (ro) (01)  [0;32mRDRF[0m  - [21:21] -  Receive Data Register Full Flag
      0 - RDRF_0 :
         Receive data buffer empty.
      0x1 - RDRF_1 :
         Receive data buffer full.
 (ro) (01)  [0;32mTC[0m  - [22:22] -  Transmission Complete Flag
      0 - TC_0 :
         Transmitter active (sending data, a preamble, or a break).
      0x1 - TC_1 :
         Transmitter idle (transmission activity complete).
 (ro) (01)  [0;32mTDRE[0m  - [23:23] -  Transmit Data Register Empty Flag
      0 - TDRE_0 :
         Transmit data buffer full.
      0x1 - TDRE_1 :
         Transmit data buffer empty.
 (ro) (01)  [0;32mRAF[0m  - [24:24] -  Receiver Active Flag
      0 - RAF_0 :
         LPUART receiver idle waiting for a start bit.
      0x1 - RAF_1 :
         LPUART receiver active (RXD input not idle).
 (rw) (01)  [0;32mLBKDE[0m  - [25:25] -  LIN Break Detection Enable
      0 - LBKDE_0 :
         LIN break detect is disabled, normal break character can be detected.
      0x1 - LBKDE_1 :
         LIN break detect is enabled. LIN break character is detected at length 
         of 11 bit times (if M = 0) or 12 (if M = 1) or 13 (M10 = 1).
 (rw) (01)  [0;32mBRK13[0m  - [26:26] -  Break Character Generation Length
      0 - BRK13_0 :
         Break character is transmitted with length of 9 to 13 bit times.
      0x1 - BRK13_1 :
         Break character is transmitted with length of 12 to 15 bit times.
 (rw) (01)  [0;32mRWUID[0m  - [27:27] -  Receive Wake Up Idle Detect
      0 - RWUID_0 :
         During receive standby state (RWU = 1), the IDLE bit does not get set u
         pon detection of an idle character. During address match wakeup, the ID
         LE bit does not set when an address does not match.
      0x1 - RWUID_1 :
         During receive standby state (RWU = 1), the IDLE bit gets set upon dete
         ction of an idle character. During address match wakeup, the IDLE bit d
         oes set when an address does not match.
 (rw) (01)  [0;32mRXINV[0m  - [28:28] -  Receive Data Inversion
      0 - RXINV_0 :
         Receive data not inverted.
      0x1 - RXINV_1 :
         Receive data inverted.
 (rw) (01)  [0;32mMSBF[0m  - [29:29] -  MSB First
      0 - MSBF_0 :
         LSB (bit0) is the first bit that is transmitted following the start bit
         . Further, the first bit received after the start bit is identified as 
         bit0.
      0x1 - MSBF_1 :
         MSB (bit9, bit8, bit7 or bit6) is the first bit that is transmitted fol
         lowing the start bit depending on the setting of CTRL[M], CTRL[PE] and 
         BAUD[M10]. Further, the first bit received after the start bit is ident
         ified as bit9, bit8, bit7 or bit6 depending on the setting of CTRL[M] a
         nd CTRL[PE].
 (rw) (01)  [0;32mRXEDGIF[0m  - [30:30] -  RXD Pin Active Edge Interrupt Flag
      0 - RXEDGIF_0 :
         No active edge on the receive pin has occurred.
      0x1 - RXEDGIF_1 :
         An active edge on the receive pin has occurred.
 (rw) (01)  [0;32mLBKDIF[0m  - [31:31] -  LIN Break Detect Interrupt Flag
      0 - LBKDIF_0 :
         No LIN break character has been detected.
      0x1 - LBKDIF_1 :
         LIN break character has been detected.
</lang>
#### p.FLEXIO1
<lang=dft>
base: 0x401ac000
CTRL            PARAM           PIN             SHIFTBUFBBS[0]  
SHIFTBUFBBS[1]  SHIFTBUFBBS[2]  SHIFTBUFBBS[3]  SHIFTBUFBIS[0]  
SHIFTBUFBIS[1]  SHIFTBUFBIS[2]  SHIFTBUFBIS[3]  SHIFTBUFBYS[0]  
SHIFTBUFBYS[1]  SHIFTBUFBYS[2]  SHIFTBUFBYS[3]  SHIFTBUFHWS[0]  
SHIFTBUFHWS[1]  SHIFTBUFHWS[2]  SHIFTBUFHWS[3]  SHIFTBUFNBS[0]  
SHIFTBUFNBS[1]  SHIFTBUFNBS[2]  SHIFTBUFNBS[3]  SHIFTBUFNIS[0]  
SHIFTBUFNIS[1]  SHIFTBUFNIS[2]  SHIFTBUFNIS[3]  SHIFTBUF[0]     
SHIFTBUF[1]     SHIFTBUF[2]     SHIFTBUF[3]     SHIFTCFG[0]     
SHIFTCFG[1]     SHIFTCFG[2]     SHIFTCFG[3]     SHIFTCTL[0]     
SHIFTCTL[1]     SHIFTCTL[2]     SHIFTCTL[3]     SHIFTEIEN       
SHIFTERR        SHIFTSDEN       SHIFTSIEN       SHIFTSTAT       
SHIFTSTATE      TIMCFG[0]       TIMCFG[1]       TIMCFG[2]       
TIMCFG[3]       TIMCMP[0]       TIMCMP[1]       TIMCMP[2]       
TIMCMP[3]       TIMCTL[0]       TIMCTL[1]       TIMCTL[2]       
TIMCTL[3]       TIMIEN          TIMSTAT         VERID           
输入 p.FLEXIO1.{reg_name} 以查看寄存器的详细信息
type p.FLEXIO1.{reg_name} to check details of registers
</lang>
#### p.flexio1.param
<link=p.FLEXIO1.PARAM>
#### FLEXIO1.PARAM
<link=p.FLEXIO1.PARAM>
#### flexio1.shifterr
<link=p.FLEXIO1.SHIFTERR>
#### FLEXIO1.SHIFTEIEN
<link=p.FLEXIO1.SHIFTEIEN>
#### p.FLEXIO1.SHIFTSDEN
<lang=dft>
 (rw)  [1;33m0x401ac030[0m (0x401ac000 + 0x0030)
Shifter Status DMA Enable
 (rw) (04)  [0;32mSSDE[0m  - [03:00] -  Shifter Status DMA Enable
</lang>
#### p.flexio1.shiftcfg[1]
<link=p.FLEXIO1.SHIFTCFG[1]>
#### FLEXIO1.SHIFTCFG[3]
<link=p.FLEXIO1.SHIFTCFG[3]>
#### FLEXIO1.SHIFTBUF[0]
<link=p.FLEXIO1.SHIFTBUF[0]>
#### flexio1.timcfg[2]
<link=p.FLEXIO1.TIMCFG[2]>
#### FLEXIO1.TIMCFG[2]
<link=p.FLEXIO1.TIMCFG[2]>
#### flexio1.shiftbufnbs[0]
<link=p.FLEXIO1.SHIFTBUFNBS[0]>
#### p.FLEXIO1.SHIFTBUFHWS[2]
<lang=dft>
 (rw)  [1;33m0x401ac708[0m (0x401ac000 + 0x0708)
Shifter Buffer N Half Word Swapped Register
 (rw) (32)  [0;32mSHIFTBUFHWS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio1.shiftbufhws[2]
<link=p.FLEXIO1.SHIFTBUFHWS[2]>
#### p.FLEXIO1.SHIFTBUFNIS[3]
<lang=dft>
 (rw)  [1;33m0x401ac78c[0m (0x401ac000 + 0x078c)
Shifter Buffer N Nibble Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNIS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO1.SHIFTBUFNIS[3]
<link=p.FLEXIO1.SHIFTBUFNIS[3]>
#### flexio2.ctrl
<link=p.FLEXIO2.CTRL>
#### p.FLEXIO2.SHIFTCFG[2]
<lang=dft>
 (rw)  [1;33m0x401b0108[0m (0x401b0000 + 0x0108)
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
#### flexio2.shiftcfg[2]
<link=p.FLEXIO2.SHIFTCFG[2]>
#### FLEXIO2.SHIFTBUF[3]
<link=p.FLEXIO2.SHIFTBUF[3]>
#### flexio2.shiftbufbis[0]
<link=p.FLEXIO2.SHIFTBUFBIS[0]>
#### p.flexio2.shiftbufbis[1]
<link=p.FLEXIO2.SHIFTBUFBIS[1]>
#### p.FLEXIO2.SHIFTBUFBYS[0]
<lang=dft>
 (rw)  [1;33m0x401b0300[0m (0x401b0000 + 0x0300)
Shifter Buffer N Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBYS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio2.timcfg[1]
<link=p.FLEXIO2.TIMCFG[1]>
#### p.flexio2.timcmp[3]
<link=p.FLEXIO2.TIMCMP[3]>
#### p.FLEXIO2.SHIFTBUFNBS[1]
<lang=dft>
 (rw)  [1;33m0x401b0684[0m (0x401b0000 + 0x0684)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio2.shiftbufnbs[1]
<link=p.FLEXIO2.SHIFTBUFNBS[1]>
#### p.FLEXIO2.SHIFTBUFHWS[0]
<lang=dft>
 (rw)  [1;33m0x401b0700[0m (0x401b0000 + 0x0700)
Shifter Buffer N Half Word Swapped Register
 (rw) (32)  [0;32mSHIFTBUFHWS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO3.SHIFTSIEN
<link=p.FLEXIO3.SHIFTSIEN>
#### p.flexio3.shifteien
<link=p.FLEXIO3.SHIFTEIEN>
#### FLEXIO3.SHIFTEIEN
<link=p.FLEXIO3.SHIFTEIEN>
#### p.flexio3.shiftctl[1]
<link=p.FLEXIO3.SHIFTCTL[1]>
#### FLEXIO3.SHIFTBUF[0]
<link=p.FLEXIO3.SHIFTBUF[0]>
#### p.flexio3.shiftbufbys[0]
<link=p.FLEXIO3.SHIFTBUFBYS[0]>
#### flexio3.shiftbufbys[1]
<link=p.FLEXIO3.SHIFTBUFBYS[1]>
#### p.FLEXIO3.SHIFTBUFBYS[3]
<lang=dft>
 (rw)  [1;33m0x4202030c[0m (0x42020000 + 0x030c)
Shifter Buffer N Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBYS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO3.SHIFTBUFBYS[3]
<link=p.FLEXIO3.SHIFTBUFBYS[3]>
#### p.flexio3.shiftbufnbs[1]
<link=p.FLEXIO3.SHIFTBUFNBS[1]>
#### flexio3.shiftbufnbs[1]
<link=p.FLEXIO3.SHIFTBUFNBS[1]>
#### p.flexio3.shiftbufhws[0]
<link=p.FLEXIO3.SHIFTBUFHWS[0]>
#### p.FLEXIO3.SHIFTBUFHWS[3]
<lang=dft>
 (rw)  [1;33m0x4202070c[0m (0x42020000 + 0x070c)
Shifter Buffer N Half Word Swapped Register
 (rw) (32)  [0;32mSHIFTBUFHWS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufnis[0]
<link=p.FLEXIO3.SHIFTBUFNIS[0]>
#### p.flexio3.shiftbufnis[1]
<link=p.FLEXIO3.SHIFTBUFNIS[1]>
#### p.GPIO1.DR
<lang=dft>
 (rw)  [1;33m0x401b8000[0m (0x401b8000 + 0x0000)
GPIO data register
 (rw) (32)  [0;32mDR[0m  - [31:00] -  DR
</lang>
#### GPIO1.ICR1
<link=p.GPIO1.ICR1>
#### p.GPIO1.IMR
<lang=dft>
 (rw)  [1;33m0x401b8014[0m (0x401b8000 + 0x0014)
GPIO interrupt mask register
 (rw) (32)  [0;32mIMR[0m  - [31:00] -  IMR
</lang>
#### gpio5.dr
<link=p.GPIO5.DR>
#### p.GPIO5.PSR
<lang=dft>
 (ro)  [1;33m0x400c0008[0m (0x400c0000 + 0x0008)
GPIO pad status register
 (ro) (32)  [0;32mPSR[0m  - [31:00] -  PSR
</lang>
#### p.GPIO5.ISR
<lang=dft>
 (rw)  [1;33m0x400c0018[0m (0x400c0000 + 0x0018)
GPIO interrupt status register
 (rw) (32)  [0;32mISR[0m  - [31:00] -  ISR
</lang>
#### p.GPIO5.EDGE_SEL
<lang=dft>
 (rw)  [1;33m0x400c001c[0m (0x400c0000 + 0x001c)
GPIO edge select register
 (rw) (32)  [0;32mGPIO_EDGE_SEL[0m  - [31:00] -  GPIO_EDGE_SEL
</lang>
#### p.GPIO2.GDIR
<lang=dft>
 (rw)  [1;33m0x401bc004[0m (0x401bc000 + 0x0004)
GPIO direction register
 (rw) (32)  [0;32mGDIR[0m  - [31:00] -  GDIR
</lang>
#### p.GPIO2.ICR2
<lang=dft>
 (rw)  [1;33m0x401bc010[0m (0x401bc000 + 0x0010)
GPIO interrupt configuration register2
 (rw) (02)  [0;32mICR16[0m  - [01:00] -  ICR16
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR17[0m  - [03:02] -  ICR17
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR18[0m  - [05:04] -  ICR18
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR19[0m  - [07:06] -  ICR19
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR20[0m  - [09:08] -  ICR20
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR21[0m  - [11:10] -  ICR21
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR22[0m  - [13:12] -  ICR22
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR23[0m  - [15:14] -  ICR23
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR24[0m  - [17:16] -  ICR24
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR25[0m  - [19:18] -  ICR25
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR26[0m  - [21:20] -  ICR26
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR27[0m  - [23:22] -  ICR27
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR28[0m  - [25:24] -  ICR28
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR29[0m  - [27:26] -  ICR29
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR30[0m  - [29:28] -  ICR30
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR31[0m  - [31:30] -  ICR31
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
</lang>
#### gpio2.edge_sel
<link=p.GPIO2.EDGE_SEL>
#### GPIO2.DR_SET
<link=p.GPIO2.DR_SET>
#### GPIO2.DR_CLEAR
<link=p.GPIO2.DR_CLEAR>
#### p.gpio4.dr_toggle
<link=p.GPIO4.DR_TOGGLE>
#### p.gpio6.isr
<link=p.GPIO6.ISR>
#### p.gpio6.dr_clear
<link=p.GPIO6.DR_CLEAR>
#### p.gpio7.gdir
<link=p.GPIO7.GDIR>
#### p.GPIO7.ICR2
<lang=dft>
 (rw)  [1;33m0x42004010[0m (0x42004000 + 0x0010)
GPIO interrupt configuration register2
 (rw) (02)  [0;32mICR16[0m  - [01:00] -  ICR16
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR17[0m  - [03:02] -  ICR17
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR18[0m  - [05:04] -  ICR18
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR19[0m  - [07:06] -  ICR19
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR20[0m  - [09:08] -  ICR20
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR21[0m  - [11:10] -  ICR21
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR22[0m  - [13:12] -  ICR22
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR23[0m  - [15:14] -  ICR23
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR24[0m  - [17:16] -  ICR24
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR25[0m  - [19:18] -  ICR25
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR26[0m  - [21:20] -  ICR26
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR27[0m  - [23:22] -  ICR27
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR28[0m  - [25:24] -  ICR28
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR29[0m  - [27:26] -  ICR29
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR30[0m  - [29:28] -  ICR30
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
 (rw) (02)  [0;32mICR31[0m  - [31:30] -  ICR31
      0 - LOW_LEVEL :
         Interrupt n is low-level sensitive.
      0x1 - HIGH_LEVEL :
         Interrupt n is high-level sensitive.
      0x2 - RISING_EDGE :
         Interrupt n is rising-edge sensitive.
      0x3 - FALLING_EDGE :
         Interrupt n is falling-edge sensitive.
</lang>
#### p.gpio7.edge_sel
<link=p.GPIO7.EDGE_SEL>
#### GPIO7.EDGE_SEL
<link=p.GPIO7.EDGE_SEL>
#### p.GPIO7.DR_TOGGLE
<lang=dft>
 (wo)  [1;33m0x4200408c[0m (0x42004000 + 0x008c)
GPIO data register TOGGLE
 (wo) (32)  [0;32mDR_TOGGLE[0m  - [31:00] -  DR_TOGGLE
</lang>
#### gpio7.dr_toggle
<link=p.GPIO7.DR_TOGGLE>
#### gpio8.imr
<link=p.GPIO8.IMR>
#### p.gpio9.icr2
<link=p.GPIO9.ICR2>
#### GPIO9.DR_TOGGLE
<link=p.GPIO9.DR_TOGGLE>
#### can1.timer
<link=p.CAN1.TIMER>
#### p.can1.rxfgmask
<link=p.CAN1.RXFGMASK>
#### p.can1.dbg2
<link=p.CAN1.DBG2>
#### CAN1.RXIMR2
<link=p.CAN1.RXIMR2>
#### p.CAN1.RXIMR4
<lang=dft>
 (rw)  [1;33m0x401d0890[0m (0x401d0000 + 0x0890)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr9
<link=p.CAN1.RXIMR9>
#### CAN1.RXIMR16
<link=p.CAN1.RXIMR16>
#### CAN1.RXIMR30
<link=p.CAN1.RXIMR30>
#### p.can1.rximr35
<link=p.CAN1.RXIMR35>
#### can1.rximr35
<link=p.CAN1.RXIMR35>
#### p.CAN1.RXIMR38
<lang=dft>
 (rw)  [1;33m0x401d0918[0m (0x401d0000 + 0x0918)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr41
<link=p.CAN1.RXIMR41>
#### CAN1.RXIMR41
<link=p.CAN1.RXIMR41>
#### p.CAN1.RXIMR52
<lang=dft>
 (rw)  [1;33m0x401d0950[0m (0x401d0000 + 0x0950)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr56
<link=p.CAN1.RXIMR56>
#### can1.rximr58
<link=p.CAN1.RXIMR58>
#### can1.rximr62
<link=p.CAN1.RXIMR62>
#### p.CAN1.RXIMR63
<lang=dft>
 (rw)  [1;33m0x401d097c[0m (0x401d0000 + 0x097c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.CAN2.MCR
<lang=dft>
 (rw)  [1;33m0x401d4000[0m (0x401d4000 + 0x0000)
Module Configuration Register
 (rw) (07)  [0;32mMAXMB[0m  - [06:00] -  This 7-bit field defines the number of the last Message Buffers that will take 
 part in the matching and arbitration processes
 (rw) (02)  [0;32mIDAM[0m  - [09:08] -  This 2-bit field identifies the format of the elements of the Rx FIFO filter ta
 ble, as shown below
      0 - IDAM_0 :
         Format A One full ID (standard or extended) per ID filter Table element
         .
      0x1 - IDAM_1 :
         Format B Two full standard IDs or two partial 14-bit extended IDs per I
         D filter Table element.
      0x2 - IDAM_2 :
         Format C Four partial 8-bit IDs (standard or extended) per ID filter Ta
         ble element.
      0x3 - IDAM_3 :
         Format D All frames rejected.
 (rw) (01)  [0;32mAEN[0m  - [12:12] -  This bit is supplied for backwards compatibility reasons
      0 - AEN_0 :
         Abort disabled
      0x1 - AEN_1 :
         Abort enabled
 (rw) (01)  [0;32mLPRIOEN[0m  - [13:13] -  This bit is provided for backwards compatibility reasons
      0 - LPRIOEN_0 :
         Local Priority disabled
      0x1 - LPRIOEN_1 :
         Local Priority enabled
 (rw) (01)  [0;32mIRMQ[0m  - [16:16] -  This bit indicates whether Rx matching process will be based either on individu
 al masking and queue or on masking scheme with RXMGMASK, RX14MASK and RX15MASK,
  RXFGMASK
      0 - IRMQ_0 :
         Individual Rx masking and queue feature are disabled.For backward compa
         tibility, the reading of C/S word locks the MB even if it is EMPTY.
      0x1 - IRMQ_1 :
         Individual Rx masking and queue feature are enabled.
 (rw) (01)  [0;32mSRXDIS[0m  - [17:17] -  This bit defines whether FlexCAN is allowed to receive frames transmitted by it
 self
      0 - SRXDIS_0 :
         Self reception enabled
      0x1 - SRXDIS_1 :
         Self reception disabled
 (rw) (01)  [0;32mWAKSRC[0m  - [19:19] -  This bit defines whether the integrated low-pass filter is applied to protect t
 he FLEXCAN_RX input from spurious wake up
      0 - WAKSRC_0 :
         FLEXCAN uses the unfiltered FLEXCAN_RX input to detect recessive to dom
         inant edges on the CAN bus.
      0x1 - WAKSRC_1 :
         FLEXCAN uses the filtered FLEXCAN_RX input to detect recessive to domin
         ant edges on the CAN bus
 (ro) (01)  [0;32mLPMACK[0m  - [20:20] -  This read-only bit indicates that FLEXCAN is either in Disable Mode or Stop Mod
 e
      0 - LPMACK_0 :
         FLEXCAN not in any of the low power modes
      0x1 - LPMACK_1 :
         FLEXCAN is either in Disable Mode, or Stop mode
 (rw) (01)  [0;32mWRNEN[0m  - [21:21] -  When asserted, this bit enables the generation of the TWRN_INT and RWRN_INT fla
 gs in the Error and Status Register
      0 - WRNEN_0 :
         TWRN_INT and RWRN_INT bits are zero, independent of the values in the e
         rror counters.
      0x1 - WRNEN_1 :
         TWRN_INT and RWRN_INT bits are set when the respective error counter tr
         ansition from <96 to >= 96.
 (rw) (01)  [0;32mSLFWAK[0m  - [22:22] -  This bit enables the Self Wake Up feature when FLEXCAN is in Stop Mode
      0 - SLFWAK_0 :
         FLEXCAN Self Wake Up feature is disabled
      0x1 - SLFWAK_1 :
         FLEXCAN Self Wake Up feature is enabled
 (rw) (01)  [0;32mSUPV[0m  - [23:23] -  This bit configures some of the FLEXCAN registers to be either in Supervisor or
  User Mode
      0 - SUPV_0 :
         FlexCAN is in User Mode. Affected registers allow both Supervisor and U
         nrestricted accesses
      0x1 - SUPV_1 :
         FlexCAN is in Supervisor Mode. Affected registers allow only Supervisor
          access. Unrestricted access behaves as though the access was done to a
         n unimplemented register location
 (ro) (01)  [0;32mFRZACK[0m  - [24:24] -  This read-only bit indicates that FLEXCAN is in Freeze Mode and its prescaler i
 s stopped
      0 - FRZACK_0 :
         FLEXCAN not in Freeze Mode, prescaler running
      0x1 - FRZACK_1 :
         FLEXCAN in Freeze Mode, prescaler stopped
 (rw) (01)  [0;32mSOFTRST[0m  - [25:25] -  When this bit is asserted, FlexCAN resets its internal state machines and some 
 of the memory mapped registers
      0 - SOFTRST_0 :
         No reset request
      0x1 - SOFTRST_1 :
         Reset the registers
 (rw) (01)  [0;32mWAKMSK[0m  - [26:26] -  This bit enables the Wake Up Interrupt generation.
      0 - WAKMSK_0 :
         Wake Up Interrupt is disabled
      0x1 - WAKMSK_1 :
         Wake Up Interrupt is enabled
 (ro) (01)  [0;32mNOTRDY[0m  - [27:27] -  This read-only bit indicates that FLEXCAN is either in Disable Mode, Stop Mode 
 or Freeze Mode
      0 - NOTRDY_0 :
         FLEXCAN module is either in Normal Mode, Listen-Only Mode or Loop-Back 
         Mode
      0x1 - NOTRDY_1 :
         FLEXCAN module is either in Disable Mode, Stop Mode or Freeze Mode
 (rw) (01)  [0;32mHALT[0m  - [28:28] -  Assertion of this bit puts the FLEXCAN module into Freeze Mode
      0 - HALT_0 :
         No Freeze Mode request.
      0x1 - HALT_1 :
         Enters Freeze Mode if the FRZ bit is asserted.
 (rw) (01)  [0;32mRFEN[0m  - [29:29] -  This bit controls whether the Rx FIFO feature is enabled or not
      0 - RFEN_0 :
         FIFO not enabled
      0x1 - RFEN_1 :
         FIFO enabled
 (rw) (01)  [0;32mFRZ[0m  - [30:30] -  The FRZ bit specifies the FLEXCAN behavior when the HALT bit in the MCR Registe
 r is set or when Debug Mode is requested at Arm level
      0 - FRZ_0 :
         Not enabled to enter Freeze Mode
      0x1 - FRZ_1 :
         Enabled to enter Freeze Mode
 (rw) (01)  [0;32mMDIS[0m  - [31:31] -  This bit controls whether FLEXCAN is enabled or not
      0 - MDIS_0 :
         Enable the FLEXCAN module
      0x1 - MDIS_1 :
         Disable the FLEXCAN module
</lang>
#### can2.imask2
<link=p.CAN2.IMASK2>
#### CAN2.IFLAG2
<link=p.CAN2.IFLAG2>
#### can2.ctrl2
<link=p.CAN2.CTRL2>
#### CAN2.RXFGMASK
<link=p.CAN2.RXFGMASK>
#### can2.dbg1
<link=p.CAN2.DBG1>
#### CAN2.RXIMR3
<link=p.CAN2.RXIMR3>
#### p.can2.rximr8
<link=p.CAN2.RXIMR8>
#### p.CAN2.RXIMR14
<lang=dft>
 (rw)  [1;33m0x401d48b8[0m (0x401d4000 + 0x08b8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr19
<link=p.CAN2.RXIMR19>
#### p.CAN2.RXIMR28
<lang=dft>
 (rw)  [1;33m0x401d48f0[0m (0x401d4000 + 0x08f0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR33
<link=p.CAN2.RXIMR33>
#### can2.rximr39
<link=p.CAN2.RXIMR39>
#### p.can2.rximr46
<link=p.CAN2.RXIMR46>
#### CAN2.RXIMR46
<link=p.CAN2.RXIMR46>
#### can2.rximr48
<link=p.CAN2.RXIMR48>
#### CAN2.RXIMR51
<link=p.CAN2.RXIMR51>
#### p.can2.rximr55
<link=p.CAN2.RXIMR55>
#### p.CAN2.RXIMR59
<lang=dft>
 (rw)  [1;33m0x401d496c[0m (0x401d4000 + 0x096c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr60
<link=p.CAN2.RXIMR60>
#### CAN2.RXIMR60
<link=p.CAN2.RXIMR60>
#### CAN3.IFLAG1
<link=p.CAN3.IFLAG1>
#### can3.cbt
<link=p.CAN3.CBT>
#### p.CAN3.MB0_32B_CS
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
#### p.can3.mb0_8b_cs
<link=p.CAN3.MB0_8B_CS>
#### p.CAN3.MB0_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8084[0m (0x401d8000 + 0x0084)
Message Buffer 0 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb0_16b_id
<link=p.CAN3.MB0_16B_ID>
#### p.CAN3.MB0_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d8084[0m (0x401d8000 + 0x0084)
Message Buffer 0 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb0_64b_word0
<link=p.CAN3.MB0_64B_WORD0>
#### p.can3.mb0_8b_word0
<link=p.CAN3.MB0_8B_WORD0>
#### can3.word00
<link=p.CAN3.WORD00>
#### p.can3.word10
<link=p.CAN3.WORD10>
#### p.can3.mb0_16b_word2
<link=p.CAN3.MB0_16B_WORD2>
#### p.CAN3.MB0_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8090[0m (0x401d8000 + 0x0090)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB0_32B_WORD3
<link=p.CAN3.MB0_32B_WORD3>
#### p.can3.cs2
<link=p.CAN3.CS2>
#### can3.mb0_32b_word7
<link=p.CAN3.MB0_32B_WORD7>
#### p.can3.mb0_64b_word8
<link=p.CAN3.MB0_64B_WORD8>
#### CAN3.MB0_64B_WORD8
<link=p.CAN3.MB0_64B_WORD8>
#### p.CAN3.WORD02
<lang=dft>
 (rw)  [1;33m0x401d80a8[0m (0x401d8000 + 0x00a8)
Message Buffer 2 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb1_16b_word3
<link=p.CAN3.MB1_16B_WORD3>
#### CAN3.MB1_16B_WORD3
<link=p.CAN3.MB1_16B_WORD3>
#### p.can3.mb1_32b_id
<link=p.CAN3.MB1_32B_ID>
#### can3.mb2_8b_word1
<link=p.CAN3.MB2_8B_WORD1>
#### can3.id3
<link=p.CAN3.ID3>
#### p.can3.mb2_16b_word0
<link=p.CAN3.MB2_16B_WORD0>
#### p.can3.word03
<link=p.CAN3.WORD03>
#### can3.word13
<link=p.CAN3.WORD13>
#### CAN3.ID4
<link=p.CAN3.ID4>
#### CAN3.MB3_16B_CS
<link=p.CAN3.MB3_16B_CS>
#### p.CAN3.MB1_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d80d8[0m (0x401d8000 + 0x00d8)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.cs6
<link=p.CAN3.CS6>
#### p.can3.mb1_64b_word4
<link=p.CAN3.MB1_64B_WORD4>
#### p.CAN3.MB2_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d80e4[0m (0x401d8000 + 0x00e4)
Message Buffer 2 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB6_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80e8[0m (0x401d8000 + 0x00e8)
Message Buffer 6 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb4_16b_word1
<link=p.CAN3.MB4_16B_WORD1>
#### CAN3.WORD16
<link=p.CAN3.WORD16>
#### CAN3.MB1_64B_WORD8
<link=p.CAN3.MB1_64B_WORD8>
#### CAN3.MB2_32B_WORD7
<link=p.CAN3.MB2_32B_WORD7>
#### p.CAN3.MB1_64B_WORD10
<lang=dft>
 (rw)  [1;33m0x401d80f8[0m (0x401d8000 + 0x00f8)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_43[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_42[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_41[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_40[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB3_32B_CS
<link=p.CAN3.MB3_32B_CS>
#### CAN3.MB3_32B_ID
<link=p.CAN3.MB3_32B_ID>
#### p.CAN3.MB5_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d80fc[0m (0x401d8000 + 0x00fc)
Message Buffer 5 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb7_8b_word1
<link=p.CAN3.MB7_8B_WORD1>
#### p.CAN3.CS8
<lang=dft>
 (rw)  [1;33m0x401d8100[0m (0x401d8000 + 0x0100)
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
#### can3.mb1_64b_word12
<link=p.CAN3.MB1_64B_WORD12>
#### p.can3.mb5_16b_word0
<link=p.CAN3.MB5_16B_WORD0>
#### p.CAN3.ID8
<lang=dft>
 (rw)  [1;33m0x401d8104[0m (0x401d8000 + 0x0104)
Message Buffer 8 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb5_16b_word2
<link=p.CAN3.MB5_16B_WORD2>
#### p.CAN3.MB6_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8114[0m (0x401d8000 + 0x0114)
Message Buffer 6 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb6_16b_id
<link=p.CAN3.MB6_16B_ID>
#### p.CAN3.MB9_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8114[0m (0x401d8000 + 0x0114)
Message Buffer 9 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.WORD19
<lang=dft>
 (rw)  [1;33m0x401d811c[0m (0x401d8000 + 0x011c)
Message Buffer 9 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.cs10
<link=p.CAN3.CS10>
#### p.can3.mb6_16b_word3
<link=p.CAN3.MB6_16B_WORD3>
#### CAN3.MB2_64B_WORD4
<link=p.CAN3.MB2_64B_WORD4>
#### p.can3.mb7_16b_cs
<link=p.CAN3.MB7_16B_CS>
#### can3.word010
<link=p.CAN3.WORD010>
#### p.can3.mb2_64b_word5
<link=p.CAN3.MB2_64B_WORD5>
#### p.can3.word110
<link=p.CAN3.WORD110>
#### p.CAN3.MB2_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8130[0m (0x401d8000 + 0x0130)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb7_16b_word0
<link=p.CAN3.MB7_16B_WORD0>
#### can3.mb7_16b_word0
<link=p.CAN3.MB7_16B_WORD0>
#### p.can3.mb11_8b_id
<link=p.CAN3.MB11_8B_ID>
#### can3.mb4_32b_word3
<link=p.CAN3.MB4_32B_WORD3>
#### can3.mb2_64b_word8
<link=p.CAN3.MB2_64B_WORD8>
#### CAN3.MB7_16B_WORD2
<link=p.CAN3.MB7_16B_WORD2>
#### p.can3.word011
<link=p.CAN3.WORD011>
#### CAN3.WORD011
<link=p.CAN3.WORD011>
#### can3.mb11_8b_word1
<link=p.CAN3.MB11_8B_WORD1>
#### can3.word111
<link=p.CAN3.WORD111>
#### can3.mb12_8b_cs
<link=p.CAN3.MB12_8B_CS>
#### p.CAN3.MB8_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8140[0m (0x401d8000 + 0x0140)
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
#### CAN3.MB4_32B_WORD7
<link=p.CAN3.MB4_32B_WORD7>
#### CAN3.MB8_16B_WORD2
<link=p.CAN3.MB8_16B_WORD2>
#### p.can3.mb3_64b_cs
<link=p.CAN3.MB3_64B_CS>
#### can3.mb3_64b_word0
<link=p.CAN3.MB3_64B_WORD0>
#### CAN3.MB3_64B_WORD2
<link=p.CAN3.MB3_64B_WORD2>
#### p.CAN3.WORD014
<lang=dft>
 (rw)  [1;33m0x401d8168[0m (0x401d8000 + 0x0168)
Message Buffer 14 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb14_8b_word1
<link=p.CAN3.MB14_8B_WORD1>
#### CAN3.MB15_8B_ID
<link=p.CAN3.MB15_8B_ID>
#### p.can3.mb15_8b_word0
<link=p.CAN3.MB15_8B_WORD0>
#### can3.cs16
<link=p.CAN3.CS16>
#### CAN3.MB6_32B_WORD3
<link=p.CAN3.MB6_32B_WORD3>
#### p.can3.mb11_16b_id
<link=p.CAN3.MB11_16B_ID>
#### CAN3.MB17_8B_CS
<link=p.CAN3.MB17_8B_CS>
#### p.can3.mb3_64b_word12
<link=p.CAN3.MB3_64B_WORD12>
#### CAN3.MB3_64B_WORD12
<link=p.CAN3.MB3_64B_WORD12>
#### p.CAN3.MB6_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8194[0m (0x401d8000 + 0x0194)
Message Buffer 6 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB11_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8198[0m (0x401d8000 + 0x0198)
Message Buffer 11 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb11_16b_word2
<link=p.CAN3.MB11_16B_WORD2>
#### can3.mb3_64b_word14
<link=p.CAN3.MB3_64B_WORD14>
#### can3.mb7_32b_id
<link=p.CAN3.MB7_32B_ID>
#### p.can3.mb18_8b_cs
<link=p.CAN3.MB18_8B_CS>
#### can3.mb4_64b_cs
<link=p.CAN3.MB4_64B_CS>
#### CAN3.MB4_64B_CS
<link=p.CAN3.MB4_64B_CS>
#### can3.mb18_8b_word1
<link=p.CAN3.MB18_8B_WORD1>
#### CAN3.WORD118
<link=p.CAN3.WORD118>
#### CAN3.CS19
<link=p.CAN3.CS19>
#### p.can3.mb19_8b_word0
<link=p.CAN3.MB19_8B_WORD0>
#### p.CAN3.MB4_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d81c4[0m (0x401d8000 + 0x01c4)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb4_64b_word7
<link=p.CAN3.MB4_64B_WORD7>
#### p.CAN3.MB8_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d81c4[0m (0x401d8000 + 0x01c4)
Message Buffer 8 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.WORD020
<link=p.CAN3.WORD020>
#### p.CAN3.MB20_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81cc[0m (0x401d8000 + 0x01cc)
Message Buffer 20 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb20_8b_word1
<link=p.CAN3.MB20_8B_WORD1>
#### p.can3.cs21
<link=p.CAN3.CS21>
#### CAN3.MB4_64B_WORD12
<link=p.CAN3.MB4_64B_WORD12>
#### p.can3.mb8_32b_word4
<link=p.CAN3.MB8_32B_WORD4>
#### p.CAN3.WORD021
<lang=dft>
 (rw)  [1;33m0x401d81d8[0m (0x401d8000 + 0x01d8)
Message Buffer 21 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB14_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81dc[0m (0x401d8000 + 0x01dc)
Message Buffer 14 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word121
<link=p.CAN3.WORD121>
#### p.can3.mb4_64b_word14
<link=p.CAN3.MB4_64B_WORD14>
#### p.CAN3.ID22
<lang=dft>
 (rw)  [1;33m0x401d81e4[0m (0x401d8000 + 0x01e4)
Message Buffer 22 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB14_16B_WORD3
<link=p.CAN3.MB14_16B_WORD3>
#### p.CAN3.CS23
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
#### p.can3.mb23_8b_cs
<link=p.CAN3.MB23_8B_CS>
#### p.CAN3.MB9_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81f0[0m (0x401d8000 + 0x01f0)
Message Buffer 9 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB15_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81f4[0m (0x401d8000 + 0x01f4)
Message Buffer 15 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb15_16b_word1
<link=p.CAN3.MB15_16B_WORD1>
#### p.CAN3.MB23_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d81f4[0m (0x401d8000 + 0x01f4)
Message Buffer 23 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB23_8B_ID
<link=p.CAN3.MB23_8B_ID>
#### can3.mb9_32b_word1
<link=p.CAN3.MB9_32B_WORD1>
#### p.can3.mb9_32b_word2
<link=p.CAN3.MB9_32B_WORD2>
#### CAN3.MB15_16B_WORD3
<link=p.CAN3.MB15_16B_WORD3>
#### p.can3.mb5_64b_word3
<link=p.CAN3.MB5_64B_WORD3>
#### CAN3.MB9_32B_WORD3
<link=p.CAN3.MB9_32B_WORD3>
#### p.CAN3.MB16_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8208[0m (0x401d8000 + 0x0208)
Message Buffer 16 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB16_16B_WORD0
<link=p.CAN3.MB16_16B_WORD0>
#### p.can3.word024
<link=p.CAN3.WORD024>
#### p.CAN3.WORD124
<lang=dft>
 (rw)  [1;33m0x401d820c[0m (0x401d8000 + 0x020c)
Message Buffer 24 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB5_64B_WORD9
<lang=dft>
 (rw)  [1;33m0x401d8214[0m (0x401d8000 + 0x0214)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_39[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_38[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_37[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_36[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB5_64B_WORD10
<link=p.CAN3.MB5_64B_WORD10>
#### p.CAN3.MB25_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d821c[0m (0x401d8000 + 0x021c)
Message Buffer 25 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb25_8b_word1
<link=p.CAN3.MB25_8B_WORD1>
#### p.can3.mb5_64b_word11
<link=p.CAN3.MB5_64B_WORD11>
#### can3.id26
<link=p.CAN3.ID26>
#### p.can3.mb10_32b_word3
<link=p.CAN3.MB10_32B_WORD3>
#### p.CAN3.MB17_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8228[0m (0x401d8000 + 0x0228)
Message Buffer 17 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb17_16b_word2
<link=p.CAN3.MB17_16B_WORD2>
#### can3.mb18_16b_id
<link=p.CAN3.MB18_16B_ID>
#### p.CAN3.MB6_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d8234[0m (0x401d8000 + 0x0234)
Message Buffer 6 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB27_8B_WORD0
<link=p.CAN3.MB27_8B_WORD0>
#### CAN3.MB11_32B_ID
<link=p.CAN3.MB11_32B_ID>
#### p.can3.mb18_16b_word2
<link=p.CAN3.MB18_16B_WORD2>
#### p.can3.id28
<link=p.CAN3.ID28>
#### can3.mb28_8b_id
<link=p.CAN3.MB28_8B_ID>
#### CAN3.MB28_8B_ID
<link=p.CAN3.MB28_8B_ID>
#### p.CAN3.MB6_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8244[0m (0x401d8000 + 0x0244)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB29_8B_CS
<link=p.CAN3.MB29_8B_CS>
#### p.can3.mb6_64b_word6
<link=p.CAN3.MB6_64B_WORD6>
#### CAN3.MB6_64B_WORD7
<link=p.CAN3.MB6_64B_WORD7>
#### can3.mb11_32b_word6
<link=p.CAN3.MB11_32B_WORD6>
#### CAN3.MB11_32B_WORD6
<link=p.CAN3.MB11_32B_WORD6>
#### can3.word029
<link=p.CAN3.WORD029>
#### p.CAN3.MB29_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d825c[0m (0x401d8000 + 0x025c)
Message Buffer 29 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb29_8b_word1
<link=p.CAN3.MB29_8B_WORD1>
#### can3.cs30
<link=p.CAN3.CS30>
#### p.CAN3.MB30_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8260[0m (0x401d8000 + 0x0260)
Message Buffer 30 CS Register
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
#### p.CAN3.MB30_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8264[0m (0x401d8000 + 0x0264)
Message Buffer 30 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb12_32b_word0
<link=p.CAN3.MB12_32B_WORD0>
#### p.can3.mb6_64b_word12
<link=p.CAN3.MB6_64B_WORD12>
#### CAN3.MB30_8B_WORD1
<link=p.CAN3.MB30_8B_WORD1>
#### can3.mb12_32b_word2
<link=p.CAN3.MB12_32B_WORD2>
#### can3.mb7_64b_cs
<link=p.CAN3.MB7_64B_CS>
#### p.CAN3.MB21_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d827c[0m (0x401d8000 + 0x027c)
Message Buffer 21 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.ID32
<link=p.CAN3.ID32>
#### p.CAN3.WORD032
<lang=dft>
 (rw)  [1;33m0x401d8288[0m (0x401d8000 + 0x0288)
Message Buffer 32 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB7_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d828c[0m (0x401d8000 + 0x028c)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.id33
<link=p.CAN3.ID33>
#### CAN3.MB33_8B_ID
<link=p.CAN3.MB33_8B_ID>
#### can3.mb7_64b_word5
<link=p.CAN3.MB7_64B_WORD5>
#### CAN3.MB7_64B_WORD7
<link=p.CAN3.MB7_64B_WORD7>
#### p.can3.mb34_8b_id
<link=p.CAN3.MB34_8B_ID>
#### CAN3.MB23_16B_ID
<link=p.CAN3.MB23_16B_ID>
#### CAN3.MB23_16B_WORD2
<link=p.CAN3.MB23_16B_WORD2>
#### p.CAN3.MB7_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d82bc[0m (0x401d8000 + 0x02bc)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB24_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82c8[0m (0x401d8000 + 0x02c8)
Message Buffer 24 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb14_32b_word7
<link=p.CAN3.MB14_32B_WORD7>
#### CAN3.WORD137
<link=p.CAN3.WORD137>
#### p.can3.mb8_64b_word6
<link=p.CAN3.MB8_64B_WORD6>
#### CAN3.MB8_64B_WORD6
<link=p.CAN3.MB8_64B_WORD6>
#### CAN3.MB25_16B_WORD1
<link=p.CAN3.MB25_16B_WORD1>
#### can3.mb15_32b_word2
<link=p.CAN3.MB15_32B_WORD2>
#### CAN3.MB15_32B_WORD2
<link=p.CAN3.MB15_32B_WORD2>
#### p.CAN3.MB8_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d82e8[0m (0x401d8000 + 0x02e8)
Message Buffer 8 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD138
<lang=dft>
 (rw)  [1;33m0x401d82ec[0m (0x401d8000 + 0x02ec)
Message Buffer 38 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS39
<lang=dft>
 (rw)  [1;33m0x401d82f0[0m (0x401d8000 + 0x02f0)
Message Buffer 39 CS Register
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
#### CAN3.MB26_16B_CS
<link=p.CAN3.MB26_16B_CS>
#### p.CAN3.MB39_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d82f0[0m (0x401d8000 + 0x02f0)
Message Buffer 39 CS Register
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
#### CAN3.MB8_64B_WORD10
<link=p.CAN3.MB8_64B_WORD10>
#### can3.mb26_16b_id
<link=p.CAN3.MB26_16B_ID>
#### CAN3.MB26_16B_ID
<link=p.CAN3.MB26_16B_ID>
#### p.can3.mb8_64b_word12
<link=p.CAN3.MB8_64B_WORD12>
#### p.CAN3.MB16_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8300[0m (0x401d8000 + 0x0300)
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
#### p.CAN3.MB26_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8300[0m (0x401d8000 + 0x0300)
Message Buffer 26 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.ID40
<lang=dft>
 (rw)  [1;33m0x401d8304[0m (0x401d8000 + 0x0304)
Message Buffer 40 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb16_32b_id
<link=p.CAN3.MB16_32B_ID>
#### CAN3.MB27_16B_WORD1
<link=p.CAN3.MB27_16B_WORD1>
#### p.can3.mb41_8b_id
<link=p.CAN3.MB41_8B_ID>
#### can3.mb9_64b_word1
<link=p.CAN3.MB9_64B_WORD1>
#### p.can3.mb16_32b_word4
<link=p.CAN3.MB16_32B_WORD4>
#### p.CAN3.MB41_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d831c[0m (0x401d8000 + 0x031c)
Message Buffer 41 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb41_8b_word1
<link=p.CAN3.MB41_8B_WORD1>
#### can3.mb16_32b_word6
<link=p.CAN3.MB16_32B_WORD6>
#### can3.mb42_8b_id
<link=p.CAN3.MB42_8B_ID>
#### CAN3.MB42_8B_ID
<link=p.CAN3.MB42_8B_ID>
#### CAN3.MB9_64B_WORD6
<link=p.CAN3.MB9_64B_WORD6>
#### CAN3.MB28_16B_WORD1
<link=p.CAN3.MB28_16B_WORD1>
#### p.can3.mb28_16b_word2
<link=p.CAN3.MB28_16B_WORD2>
#### p.can3.mb43_8b_cs
<link=p.CAN3.MB43_8B_CS>
#### p.CAN3.MB9_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d8330[0m (0x401d8000 + 0x0330)
Message Buffer 9 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word043
<link=p.CAN3.WORD043>
#### p.can3.mb29_16b_word1
<link=p.CAN3.MB29_16B_WORD1>
#### p.CAN3.MB44_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d834c[0m (0x401d8000 + 0x034c)
Message Buffer 44 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb44_8b_word1
<link=p.CAN3.MB44_8B_WORD1>
#### can3.mb9_64b_word15
<link=p.CAN3.MB9_64B_WORD15>
#### can3.mb18_32b_cs
<link=p.CAN3.MB18_32B_CS>
#### can3.mb30_16b_cs
<link=p.CAN3.MB30_16B_CS>
#### p.can3.mb45_8b_word0
<link=p.CAN3.MB45_8B_WORD0>
#### p.CAN3.MB10_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d835c[0m (0x401d8000 + 0x035c)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb10_64b_word2
<link=p.CAN3.MB10_64B_WORD2>
#### p.CAN3.MB18_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8360[0m (0x401d8000 + 0x0360)
Message Buffer 18 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB18_32B_WORD2
<link=p.CAN3.MB18_32B_WORD2>
#### p.can3.mb30_16b_word2
<link=p.CAN3.MB30_16B_WORD2>
#### CAN3.MB31_16B_CS
<link=p.CAN3.MB31_16B_CS>
#### CAN3.MB31_16B_ID
<link=p.CAN3.MB31_16B_ID>
#### CAN3.ID47
<link=p.CAN3.ID47>
#### p.can3.word047
<link=p.CAN3.WORD047>
#### p.can3.mb10_64b_word9
<link=p.CAN3.MB10_64B_WORD9>
#### p.CAN3.CS48
<lang=dft>
 (rw)  [1;33m0x401d8380[0m (0x401d8000 + 0x0380)
Message Buffer 48 CS Register
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
#### can3.mb10_64b_word10
<link=p.CAN3.MB10_64B_WORD10>
#### p.can3.mb48_8b_cs
<link=p.CAN3.MB48_8B_CS>
#### p.CAN3.MB10_64B_WORD11
<lang=dft>
 (rw)  [1;33m0x401d8384[0m (0x401d8000 + 0x0384)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_47[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_46[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_45[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_44[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb19_32b_word1
<link=p.CAN3.MB19_32B_WORD1>
#### CAN3.MB19_32B_WORD1
<link=p.CAN3.MB19_32B_WORD1>
#### p.CAN3.MB19_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d838c[0m (0x401d8000 + 0x038c)
Message Buffer 19 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb19_32b_word4
<link=p.CAN3.MB19_32B_WORD4>
#### can3.mb32_16b_word2
<link=p.CAN3.MB32_16B_WORD2>
#### p.CAN3.MB33_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d839c[0m (0x401d8000 + 0x039c)
Message Buffer 33 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.WORD149
<lang=dft>
 (rw)  [1;33m0x401d839c[0m (0x401d8000 + 0x039c)
Message Buffer 49 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB11_64B_WORD0
<link=p.CAN3.MB11_64B_WORD0>
#### p.CAN3.MB20_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d83a0[0m (0x401d8000 + 0x03a0)
Message Buffer 20 CS Register
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
#### CAN3.MB50_8B_CS
<link=p.CAN3.MB50_8B_CS>
#### CAN3.ID50
<link=p.CAN3.ID50>
#### can3.mb11_64b_word2
<link=p.CAN3.MB11_64B_WORD2>
#### CAN3.MB20_32B_WORD0
<link=p.CAN3.MB20_32B_WORD0>
#### p.can3.id51
<link=p.CAN3.ID51>
#### can3.mb20_32b_word4
<link=p.CAN3.MB20_32B_WORD4>
#### can3.mb34_16b_word2
<link=p.CAN3.MB34_16B_WORD2>
#### p.CAN3.MB11_64B_WORD9
<lang=dft>
 (rw)  [1;33m0x401d83c4[0m (0x401d8000 + 0x03c4)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_39[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_38[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_37[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_36[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb20_32b_word7
<link=p.CAN3.MB20_32B_WORD7>
#### p.can3.mb11_64b_word11
<link=p.CAN3.MB11_64B_WORD11>
#### p.CAN3.WORD152
<lang=dft>
 (rw)  [1;33m0x401d83cc[0m (0x401d8000 + 0x03cc)
Message Buffer 52 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS53
<lang=dft>
 (rw)  [1;33m0x401d83d0[0m (0x401d8000 + 0x03d0)
Message Buffer 53 CS Register
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
#### p.CAN3.MB21_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83d4[0m (0x401d8000 + 0x03d4)
Message Buffer 21 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB11_64B_WORD14
<link=p.CAN3.MB11_64B_WORD14>
#### can3.mb53_8b_word1
<link=p.CAN3.MB53_8B_WORD1>
#### p.can3.mb36_16b_cs
<link=p.CAN3.MB36_16B_CS>
#### CAN3.MB12_64B_WORD0
<link=p.CAN3.MB12_64B_WORD0>
#### p.can3.mb21_32b_word7
<link=p.CAN3.MB21_32B_WORD7>
#### can3.mb36_16b_word1
<link=p.CAN3.MB36_16B_WORD1>
#### CAN3.MB54_8B_WORD1
<link=p.CAN3.MB54_8B_WORD1>
#### CAN3.WORD154
<link=p.CAN3.WORD154>
#### CAN3.CS55
<link=p.CAN3.CS55>
#### p.can3.mb12_64b_word2
<link=p.CAN3.MB12_64B_WORD2>
#### CAN3.MB22_32B_WORD0
<link=p.CAN3.MB22_32B_WORD0>
#### p.can3.mb37_16b_id
<link=p.CAN3.MB37_16B_ID>
#### p.can3.mb56_8b_cs
<link=p.CAN3.MB56_8B_CS>
#### p.can3.mb22_32b_word3
<link=p.CAN3.MB22_32B_WORD3>
#### p.can3.mb56_8b_id
<link=p.CAN3.MB56_8B_ID>
#### CAN3.MB56_8B_ID
<link=p.CAN3.MB56_8B_ID>
#### can3.mb22_32b_word4
<link=p.CAN3.MB22_32B_WORD4>
#### p.can3.mb57_8b_cs
<link=p.CAN3.MB57_8B_CS>
#### p.CAN3.ID57
<lang=dft>
 (rw)  [1;33m0x401d8414[0m (0x401d8000 + 0x0414)
Message Buffer 57 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.id57
<link=p.CAN3.ID57>
#### p.CAN3.MB38_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8420[0m (0x401d8000 + 0x0420)
Message Buffer 38 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB38_16B_WORD3
<link=p.CAN3.MB38_16B_WORD3>
#### can3.mb13_64b_cs
<link=p.CAN3.MB13_64B_CS>
#### p.can3.mb39_16b_cs
<link=p.CAN3.MB39_16B_CS>
#### p.can3.mb23_32b_word3
<link=p.CAN3.MB23_32B_WORD3>
#### can3.mb39_16b_word0
<link=p.CAN3.MB39_16B_WORD0>
#### p.CAN3.MB59_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8434[0m (0x401d8000 + 0x0434)
Message Buffer 59 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb13_64b_word2
<link=p.CAN3.MB13_64B_WORD2>
#### can3.mb23_32b_word6
<link=p.CAN3.MB23_32B_WORD6>
#### p.CAN3.MB13_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d843c[0m (0x401d8000 + 0x043c)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB39_16B_WORD3
<link=p.CAN3.MB39_16B_WORD3>
#### CAN3.CS60
<link=p.CAN3.CS60>
#### p.CAN3.MB60_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8444[0m (0x401d8000 + 0x0444)
Message Buffer 60 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb13_64b_word7
<link=p.CAN3.MB13_64B_WORD7>
#### can3.word160
<link=p.CAN3.WORD160>
#### CAN3.ID61
<link=p.CAN3.ID61>
#### CAN3.MB13_64B_WORD9
<link=p.CAN3.MB13_64B_WORD9>
#### CAN3.MB41_16B_ID
<link=p.CAN3.MB41_16B_ID>
#### CAN3.WORD161
<link=p.CAN3.WORD161>
#### can3.cs63
<link=p.CAN3.CS63>
#### CAN3.RXIMR[0]
<link=p.CAN3.RXIMR[0]>
#### p.can3.rximr[2]
<link=p.CAN3.RXIMR[2]>
#### can3.rximr[3]
<link=p.CAN3.RXIMR[3]>
#### p.can3.rximr[8]
<link=p.CAN3.RXIMR[8]>
#### CAN3.RXIMR[11]
<link=p.CAN3.RXIMR[11]>
#### p.can3.rximr[12]
<link=p.CAN3.RXIMR[12]>
#### p.can3.rximr[17]
<link=p.CAN3.RXIMR[17]>
#### p.can3.rximr[18]
<link=p.CAN3.RXIMR[18]>
#### p.CAN3.RXIMR[26]
<lang=dft>
 (rw)  [1;33m0x401d88e8[0m (0x401d8000 + 0x08e8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[29]
<link=p.CAN3.RXIMR[29]>
#### CAN3.RXIMR[29]
<link=p.CAN3.RXIMR[29]>
#### p.CAN3.RXIMR[30]
<lang=dft>
 (rw)  [1;33m0x401d88f8[0m (0x401d8000 + 0x08f8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.CAN3.RXIMR[35]
<lang=dft>
 (rw)  [1;33m0x401d890c[0m (0x401d8000 + 0x090c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[36]
<link=p.CAN3.RXIMR[36]>
#### p.CAN3.RXIMR[41]
<lang=dft>
 (rw)  [1;33m0x401d8924[0m (0x401d8000 + 0x0924)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[45]
<link=p.CAN3.RXIMR[45]>
#### CAN3.RXIMR[45]
<link=p.CAN3.RXIMR[45]>
#### CAN3.RXIMR[58]
<link=p.CAN3.RXIMR[58]>
#### CAN3.RXIMR[60]
<link=p.CAN3.RXIMR[60]>
#### can3.rximr[61]
<link=p.CAN3.RXIMR[61]>
#### CAN3.HR_TIME_STAMP[0]
<link=p.CAN3.HR_TIME_STAMP[0]>
#### p.can3.hr_time_stamp[1]
<link=p.CAN3.HR_TIME_STAMP[1]>
#### can3.hr_time_stamp[7]
<link=p.CAN3.HR_TIME_STAMP[7]>
#### CAN3.HR_TIME_STAMP[17]
<link=p.CAN3.HR_TIME_STAMP[17]>
#### can3.hr_time_stamp[23]
<link=p.CAN3.HR_TIME_STAMP[23]>
#### CAN3.HR_TIME_STAMP[31]
<link=p.CAN3.HR_TIME_STAMP[31]>
#### p.can3.hr_time_stamp[32]
<link=p.CAN3.HR_TIME_STAMP[32]>
#### p.CAN3.HR_TIME_STAMP[37]
<lang=dft>
 (ro)  [1;33m0x401d8cc4[0m (0x401d8000 + 0x0cc4)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[37]
<link=p.CAN3.HR_TIME_STAMP[37]>
#### p.CAN3.HR_TIME_STAMP[47]
<lang=dft>
 (ro)  [1;33m0x401d8cec[0m (0x401d8000 + 0x0cec)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### CAN3.ERFFEL[4]
<link=p.CAN3.ERFFEL[4]>
#### p.can3.erffel[12]
<link=p.CAN3.ERFFEL[12]>
#### CAN3.ERFFEL[14]
<link=p.CAN3.ERFFEL[14]>
#### p.can3.erffel[17]
<link=p.CAN3.ERFFEL[17]>
#### CAN3.ERFFEL[20]
<link=p.CAN3.ERFFEL[20]>
#### CAN3.ERFFEL[25]
<link=p.CAN3.ERFFEL[25]>
#### p.CAN3.ERFFEL[34]
<lang=dft>
 (rw)  [1;33m0x401db088[0m (0x401d8000 + 0x3088)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[39]
<link=p.CAN3.ERFFEL[39]>
#### CAN3.ERFFEL[55]
<link=p.CAN3.ERFFEL[55]>
#### p.can3.erffel[58]
<link=p.CAN3.ERFFEL[58]>
#### p.CAN3.ERFFEL[64]
<lang=dft>
 (rw)  [1;33m0x401db100[0m (0x401d8000 + 0x3100)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[72]
<link=p.CAN3.ERFFEL[72]>
#### can3.erffel[77]
<link=p.CAN3.ERFFEL[77]>
#### CAN3.ERFFEL[79]
<link=p.CAN3.ERFFEL[79]>
#### can3.erffel[84]
<link=p.CAN3.ERFFEL[84]>
#### can3.erffel[90]
<link=p.CAN3.ERFFEL[90]>
#### can3.erffel[97]
<link=p.CAN3.ERFFEL[97]>
#### p.can3.erffel[102]
<link=p.CAN3.ERFFEL[102]>
#### can3.erffel[107]
<link=p.CAN3.ERFFEL[107]>
#### p.CAN3.ERFFEL[108]
<lang=dft>
 (rw)  [1;33m0x401db1b0[0m (0x401d8000 + 0x31b0)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[114]
<lang=dft>
 (rw)  [1;33m0x401db1c8[0m (0x401d8000 + 0x31c8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[117]
<link=p.CAN3.ERFFEL[117]>
#### p.can3.erffel[118]
<link=p.CAN3.ERFFEL[118]>
#### p.can3.erffel[124]
<link=p.CAN3.ERFFEL[124]>
#### p.TMR1.LOAD0
<lang=dft>
 (rw)  [1;33m0x401dc006[0m (0x401dc000 + 0x0006)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.tmr1.load2
<link=p.TMR1.LOAD2>
#### tmr1.load2
<link=p.TMR1.LOAD2>
#### p.TMR1.HOLD1
<lang=dft>
 (rw)  [1;33m0x401dc028[0m (0x401dc000 + 0x0028)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.TMR1.CNTR3
<lang=dft>
 (rw)  [1;33m0x401dc06a[0m (0x401dc000 + 0x006a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### p.TMR1.SCTRL1
<lang=dft>
 (rw)  [1;33m0x401dc02e[0m (0x401dc000 + 0x002e)
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
#### tmr1.cmpld12
<link=p.TMR1.CMPLD12>
#### p.tmr1.cmpld22
<link=p.TMR1.CMPLD22>
#### tmr1.cmpld23
<link=p.TMR1.CMPLD23>
#### p.TMR1.CSCTRL3
<lang=dft>
 (rw)  [1;33m0x401dc074[0m (0x401dc000 + 0x0074)
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
#### p.tmr1.filt1
<link=p.TMR1.FILT1>
#### TMR1.FILT1
<link=p.TMR1.FILT1>
#### p.tmr1.dma3
<link=p.TMR1.DMA3>
#### p.tmr2
<link=p.TMR2>
#### p.TMR2.COMP10
<lang=dft>
 (rw)  [1;33m0x401e0000[0m (0x401e0000 + 0x0000)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### p.tmr2.comp12
<link=p.TMR2.COMP12>
#### p.TMR2.COMP21
<lang=dft>
 (rw)  [1;33m0x401e0022[0m (0x401e0000 + 0x0022)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### tmr2.comp21
<link=p.TMR2.COMP21>
#### p.TMR2.LOAD3
<lang=dft>
 (rw)  [1;33m0x401e0066[0m (0x401e0000 + 0x0066)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.TMR2.HOLD2
<lang=dft>
 (rw)  [1;33m0x401e0048[0m (0x401e0000 + 0x0048)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.tmr2.cntr1
<link=p.TMR2.CNTR1>
#### TMR2.CNTR2
<link=p.TMR2.CNTR2>
#### p.TMR2.CTRL3
<lang=dft>
 (rw)  [1;33m0x401e006c[0m (0x401e0000 + 0x006c)
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
#### p.tmr2.sctrl3
<link=p.TMR2.SCTRL3>
#### tmr2.cmpld10
<link=p.TMR2.CMPLD10>
#### p.TMR2.CMPLD22
<lang=dft>
 (rw)  [1;33m0x401e0052[0m (0x401e0000 + 0x0052)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### tmr2.csctrl3
<link=p.TMR2.CSCTRL3>
#### tmr2.filt3
<link=p.TMR2.FILT3>
#### p.tmr2.dma2
<link=p.TMR2.DMA2>
#### p.tmr2.enbl
<link=p.TMR2.ENBL>
#### TMR3.COMP22
<link=p.TMR3.COMP22>
#### p.tmr3.capt0
<link=p.TMR3.CAPT0>
#### tmr3.capt3
<link=p.TMR3.CAPT3>
#### TMR3.CAPT3
<link=p.TMR3.CAPT3>
#### p.tmr3.load0
<link=p.TMR3.LOAD0>
#### tmr3.load0
<link=p.TMR3.LOAD0>
#### p.TMR3.LOAD2
<lang=dft>
 (rw)  [1;33m0x401e4046[0m (0x401e4000 + 0x0046)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.TMR3.HOLD0
<lang=dft>
 (rw)  [1;33m0x401e4008[0m (0x401e4000 + 0x0008)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.tmr3.ctrl1
<link=p.TMR3.CTRL1>
#### tmr3.ctrl2
<link=p.TMR3.CTRL2>
#### TMR3.SCTRL3
<link=p.TMR3.SCTRL3>
#### p.tmr3.cmpld13
<link=p.TMR3.CMPLD13>
#### TMR3.CMPLD13
<link=p.TMR3.CMPLD13>
#### tmr3.cmpld21
<link=p.TMR3.CMPLD21>
#### p.tmr3.cmpld22
<link=p.TMR3.CMPLD22>
#### tmr3.filt2
<link=p.TMR3.FILT2>
#### p.TMR3.DMA2
<lang=dft>
 (rw)  [1;33m0x401e4058[0m (0x401e4000 + 0x0058)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### tmr3.dma3
<link=p.TMR3.DMA3>
#### p.tmr4.comp11
<link=p.TMR4.COMP11>
#### p.TMR4.COMP13
<lang=dft>
 (rw)  [1;33m0x401e8060[0m (0x401e8000 + 0x0060)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### p.TMR4.CAPT1
<lang=dft>
 (rw)  [1;33m0x401e8024[0m (0x401e8000 + 0x0024)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### TMR4.LOAD2
<link=p.TMR4.LOAD2>
#### TMR4.HOLD1
<link=p.TMR4.HOLD1>
#### p.tmr4.hold2
<link=p.TMR4.HOLD2>
#### p.tmr4.ctrl2
<link=p.TMR4.CTRL2>
#### p.tmr4.sctrl2
<link=p.TMR4.SCTRL2>
#### p.tmr4.cmpld23
<link=p.TMR4.CMPLD23>
#### p.tmr4.csctrl3
<link=p.TMR4.CSCTRL3>
#### p.tmr4.dma2
<link=p.TMR4.DMA2>
#### GPT2.CR
<link=p.GPT2.CR>
#### p.GPT2.OCR2
<lang=dft>
 (rw)  [1;33m0x401f0014[0m (0x401f0000 + 0x0014)
GPT Output Compare Register 2
 (rw) (32)  [0;32mCOMP[0m  - [31:00] -  Compare Value
</lang>
#### GPT2.ICR1
<link=p.GPT2.ICR1>
#### ocotp.scs_set
<link=p.OCOTP.SCS_SET>
#### OCOTP.SCS_CLR
<link=p.OCOTP.SCS_CLR>
#### p.ocotp.scs_tog
<link=p.OCOTP.SCS_TOG>
#### OCOTP.SCS_TOG
<link=p.OCOTP.SCS_TOG>
#### ocotp.version
<link=p.OCOTP.VERSION>
#### OCOTP.VERSION
<link=p.OCOTP.VERSION>
#### p.OCOTP.CFG3
<lang=dft>
 (rw)  [1;33m0x401f4440[0m (0x401f4000 + 0x0440)
Value of OTP Bank0 Word4 (Configuration and Manufacturing Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.cfg3
<link=p.OCOTP.CFG3>
#### p.OCOTP.MEM2
<lang=dft>
 (rw)  [1;33m0x401f44a0[0m (0x401f4000 + 0x04a0)
Value of OTP Bank1 Word2 (Memory Related Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.otpmk1
<link=p.OCOTP.OTPMK1>
#### p.OCOTP.OTPMK5
<lang=dft>
 (rw)  [1;33m0x401f4550[0m (0x401f4000 + 0x0550)
Value of OTP Bank2 Word5 (OTPMK Key)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.SRK4
<lang=dft>
 (rw)  [1;33m0x401f45c0[0m (0x401f4000 + 0x05c0)
Shadow Register for OTP Bank3 Word4 (SRK Hash)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.srk4
<link=p.OCOTP.SRK4>
#### ocotp.sjc_resp1
<link=p.OCOTP.SJC_RESP1>
#### OCOTP.MAC0
<link=p.OCOTP.MAC0>
#### OCOTP.GP1
<link=p.OCOTP.GP1>
#### ocotp.sw_gp22
<link=p.OCOTP.SW_GP22>
#### p.ocotp.misc_conf1
<link=p.OCOTP.MISC_CONF1>
#### ocotp.rom_patch3
<link=p.OCOTP.ROM_PATCH3>
#### p.ocotp.gp32
<link=p.OCOTP.GP32>
#### ocotp.gp32
<link=p.OCOTP.GP32>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_07
<lang=dft>
 (rw)  [1;33m0x401f8030[0m (0x401f8000 + 0x0030)
SW_MUX_CTL_PAD_GPIO_EMC_07 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA07 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM2_PWMB00 of instance: flexpwm2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: SAI2_MCLK of instance: sai2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT09 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO07 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO07 of instance: gpio4
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_07
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_07>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_10>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_14
<lang=dft>
 (rw)  [1;33m0x401f804c[0m (0x401f8000 + 0x004c)
SW_MUX_CTL_PAD_GPIO_EMC_14 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR05 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT19 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART3_RX of instance: lpuart3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: MQS_LEFT of instance: mqs
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI2_PCS1 of instance: lpspi2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO14 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_B_DATA01 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_14
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_18
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_18>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_20
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_20>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_21
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_21>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_29
<lang=dft>
 (rw)  [1;33m0x401f8088[0m (0x401f8000 + 0x0088)
SW_MUX_CTL_PAD_GPIO_EMC_29 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_CS0 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM3_PWMA00 of instance: flexpwm3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART6_RTS_B of instance: lpuart6
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPSPI1_SDI of instance: lpspi1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO15 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO29 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_A_DATA03 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_29
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_29
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_29>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_33
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_33>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_36
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_36>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_00
<lang=dft>
 (rw)  [1;33m0x401f80bc[0m (0x401f8000 + 0x00bc)
SW_MUX_CTL_PAD_GPIO_AD_B0_00 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXPWM2_PWMA03 of instance: flexpwm2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT14 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: REF_CLK_32K of instance: xtalosc
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: USB_OTG2_ID of instance: usb
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPI2C1_SCLS of instance: lpi2c1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO00 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC1_RESET_B of instance: usdhc1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: LPSPI3_SCK of instance: lpspi3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_00
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_04>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_08>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_02>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_03>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_10>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_14
<lang=dft>
 (rw)  [1;33m0x401f8134[0m (0x401f8000 + 0x0134)
SW_MUX_CTL_PAD_GPIO_AD_B1_14 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPIA_SCLK of instance: flexspi
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: ACMP_OUT02 of instance: acmp
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPSPI3_SDO of instance: lpspi3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_BCLK of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA03 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO30 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_DATA6 of instance: usdhc2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_ROW00 of instance: kpp
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_1588_EVENT3_OUT of instance: enet
         2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO14 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_14
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_02>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_06>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_10
<lang=dft>
 (rw)  [1;33m0x401f8164[0m (0x401f8000 + 0x0164)
SW_MUX_CTL_PAD_GPIO_B0_10 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA06 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER4_TIMER1 of instance: qtimer4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXPWM2_PWMA02 of instance: flexpwm2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_DATA03 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO10 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO10 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SRC_BOOT_CFG06 of instance: src
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_CRS of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_10
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_11>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_15>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_00>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_04
<lang=dft>
 (rw)  [1;33m0x401f818c[0m (0x401f8000 + 0x018c)
SW_MUX_CTL_PAD_GPIO_B1_04 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA16 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: LPSPI4_PCS0 of instance: lpspi4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_DATA15 of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_RX_DATA00 of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO20 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO20 of instance: gpio2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT1_CLK of instance: gpt1
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO20 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_04
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_12>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_13
<lang=dft>
 (rw)  [1;33m0x401f81b0[0m (0x401f8000 + 0x01b0)
SW_MUX_CTL_PAD_GPIO_B1_13 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: WDOG1_B of instance: wdog1
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: LPUART5_RX of instance: lpuart5
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_VSYNC of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_1588_EVENT0_OUT of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO29 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO29 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC1_WP of instance: usdhc1
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: SEMC_DQS4 of instance: semc
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO29 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_13
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_00>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_04>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_02>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_04
<lang=dft>
 (rw)  [1;33m0x401f81e4[0m (0x401f8000 + 0x01e4)
SW_MUX_CTL_PAD_GPIO_SD_B1_04 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_CLK of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIB_SCLK of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPI2C1_SCL of instance: lpi2c1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_RX_SYNC of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXSPIA_SS1_B of instance: flexspi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO04 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: CCM_STOP of instance: ccm
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: SAI3_MCLK of instance: sai3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_04
</lang>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_01>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_01>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_25
<lang=dft>
 (rw)  [1;33m0x401f8268[0m (0x401f8000 + 0x0268)
SW_PAD_CTL_PAD_GPIO_EMC_25 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_34
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_34>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_36
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_36>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_38
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_38>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_40
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_40>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_01>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_04>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_06
<lang=dft>
 (rw)  [1;33m0x401f82c4[0m (0x401f8000 + 0x02c4)
SW_PAD_CTL_PAD_GPIO_AD_B0_06 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_11
<lang=dft>
 (rw)  [1;33m0x401f82d8[0m (0x401f8000 + 0x02d8)
SW_PAD_CTL_PAD_GPIO_AD_B0_11 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_14>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_08>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_11>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_13
<lang=dft>
 (rw)  [1;33m0x401f8320[0m (0x401f8000 + 0x0320)
SW_PAD_CTL_PAD_GPIO_AD_B1_13 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_14>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_03>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_06>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_11>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_01>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_12>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_12>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_03>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b1_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_09>
#### iomuxc.csi_data09_select_input
<link=p.IOMUXC.CSI_DATA09_SELECT_INPUT>
#### p.IOMUXC.CSI_PIXCLK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8424[0m (0x401f8000 + 0x0424)
CSI_PIXCLK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_04_ALT4 :
         Selecting Pad: GPIO_AD_B1_04 for Mode: ALT4
      0x1 - GPIO_B1_12_ALT2 :
         Selecting Pad: GPIO_B1_12 for Mode: ALT2
</lang>
#### p.iomuxc.enet_ipg_clk_rmii_select_input
<link=p.IOMUXC.ENET_IPG_CLK_RMII_SELECT_INPUT>
#### p.IOMUXC.ENET0_RXDATA_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8434[0m (0x401f8000 + 0x0434)
ENET0_RXDATA_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_20_ALT3 :
         Selecting Pad: GPIO_EMC_20 for Mode: ALT3
      0x1 - GPIO_B1_04_ALT3 :
         Selecting Pad: GPIO_B1_04 for Mode: ALT3
</lang>
#### IOMUXC.ENET_RXERR_SELECT_INPUT
<link=p.IOMUXC.ENET_RXERR_SELECT_INPUT>
#### p.iomuxc.flexcan1_rx_select_input
<link=p.IOMUXC.FLEXCAN1_RX_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM1_PWMA3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8454[0m (0x401f8000 + 0x0454)
FLEXPWM1_PWMA3_SELECT_INPUT DAISY Register
 (rw) (03)  [0;32mDAISY[0m  - [02:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_00_ALT2 :
         Selecting Pad: GPIO_SD_B1_00 for Mode: ALT2
      0x1 - GPIO_EMC_12_ALT4 :
         Selecting Pad: GPIO_EMC_12 for Mode: ALT4
      0x2 - GPIO_EMC_38_ALT1 :
         Selecting Pad: GPIO_EMC_38 for Mode: ALT1
      0x3 - GPIO_AD_B0_10_ALT1 :
         Selecting Pad: GPIO_AD_B0_10 for Mode: ALT1
      0x4 - GPIO_B1_00_ALT6 :
         Selecting Pad: GPIO_B1_00 for Mode: ALT6
</lang>
#### p.iomuxc.flexpwm1_pwma3_select_input
<link=p.IOMUXC.FLEXPWM1_PWMA3_SELECT_INPUT>
#### p.iomuxc.flexpwm1_pwmb0_select_input
<link=p.IOMUXC.FLEXPWM1_PWMB0_SELECT_INPUT>
#### iomuxc.flexpwm1_pwmb2_select_input
<link=p.IOMUXC.FLEXPWM1_PWMB2_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM4_PWMA0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8494[0m (0x401f8000 + 0x0494)
FLEXPWM4_PWMA0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_00_ALT1 :
         Selecting Pad: GPIO_EMC_00 for Mode: ALT1
      0x1 - GPIO_AD_B1_08_ALT1 :
         Selecting Pad: GPIO_AD_B1_08 for Mode: ALT1
</lang>
#### p.IOMUXC.FLEXPWM4_PWMA1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8498[0m (0x401f8000 + 0x0498)
FLEXPWM4_PWMA1_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_02_ALT1 :
         Selecting Pad: GPIO_EMC_02 for Mode: ALT1
      0x1 - GPIO_AD_B1_09_ALT1 :
         Selecting Pad: GPIO_AD_B1_09 for Mode: ALT1
</lang>
#### p.iomuxc.flexspia_data3_select_input
<link=p.IOMUXC.FLEXSPIA_DATA3_SELECT_INPUT>
#### p.IOMUXC.LPI2C1_SCL_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84cc[0m (0x401f8000 + 0x04cc)
LPI2C1_SCL_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_04_ALT2 :
         Selecting Pad: GPIO_SD_B1_04 for Mode: ALT2
      0x1 - GPIO_AD_B1_00_ALT3 :
         Selecting Pad: GPIO_AD_B1_00 for Mode: ALT3
</lang>
#### p.iomuxc.lpi2c2_sda_select_input
<link=p.IOMUXC.LPI2C2_SDA_SELECT_INPUT>
#### p.iomuxc.lpi2c4_sda_select_input
<link=p.IOMUXC.LPI2C4_SDA_SELECT_INPUT>
#### p.iomuxc.lpspi1_pcs0_select_input
<link=p.IOMUXC.LPSPI1_PCS0_SELECT_INPUT>
#### IOMUXC.LPSPI1_SCK_SELECT_INPUT
<link=p.IOMUXC.LPSPI1_SCK_SELECT_INPUT>
#### p.iomuxc.lpspi4_sdo_select_input
<link=p.IOMUXC.LPSPI4_SDO_SELECT_INPUT>
#### p.iomuxc.lpuart5_tx_select_input
<link=p.IOMUXC.LPUART5_TX_SELECT_INPUT>
#### p.IOMUXC.LPUART8_RX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8560[0m (0x401f8000 + 0x0560)
LPUART8_RX_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B0_05_ALT2 :
         Selecting Pad: GPIO_SD_B0_05 for Mode: ALT2
      0x1 - GPIO_AD_B1_11_ALT2 :
         Selecting Pad: GPIO_AD_B1_11 for Mode: ALT2
      0x2 - GPIO_EMC_39_ALT2 :
         Selecting Pad: GPIO_EMC_39 for Mode: ALT2
</lang>
#### p.IOMUXC.QTIMER2_TIMER1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8570[0m (0x401f8000 + 0x0570)
QTIMER2_TIMER1_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_20_ALT4 :
         Selecting Pad: GPIO_EMC_20 for Mode: ALT4
      0x1 - GPIO_B0_04_ALT1 :
         Selecting Pad: GPIO_B0_04 for Mode: ALT1
</lang>
#### p.iomuxc.qtimer3_timer0_select_input
<link=p.IOMUXC.QTIMER3_TIMER0_SELECT_INPUT>
#### p.iomuxc.sai1_mclk2_select_input
<link=p.IOMUXC.SAI1_MCLK2_SELECT_INPUT>
#### IOMUXC.SAI1_TX_SYNC_SELECT_INPUT
<link=p.IOMUXC.SAI1_TX_SYNC_SELECT_INPUT>
#### p.IOMUXC.USDHC2_CMD_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85e4[0m (0x401f8000 + 0x05e4)
USDHC2_CMD_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_05_ALT0 :
         Selecting Pad: GPIO_SD_B1_05 for Mode: ALT0
      0x1 - GPIO_AD_B1_08_ALT6 :
         Selecting Pad: GPIO_AD_B1_08 for Mode: ALT6
</lang>
#### IOMUXC.USDHC2_CMD_SELECT_INPUT
<link=p.IOMUXC.USDHC2_CMD_SELECT_INPUT>
#### iomuxc.usdhc2_data1_select_input
<link=p.IOMUXC.USDHC2_DATA1_SELECT_INPUT>
#### p.iomuxc.usdhc2_data5_select_input
<link=p.IOMUXC.USDHC2_DATA5_SELECT_INPUT>
#### iomuxc.xbar1_in02_select_input
<link=p.IOMUXC.XBAR1_IN02_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN04_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8614[0m (0x401f8000 + 0x0614)
XBAR1_IN04_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_02_ALT3 :
         Selecting Pad: GPIO_EMC_02 for Mode: ALT3
      0x1 - GPIO_SD_B0_00_ALT3 :
         Selecting Pad: GPIO_SD_B0_00 for Mode: ALT3
</lang>
#### p.IOMUXC.XBAR1_IN06_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f861c[0m (0x401f8000 + 0x061c)
XBAR1_IN06_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_04_ALT3 :
         Selecting Pad: GPIO_EMC_04 for Mode: ALT3
      0x1 - GPIO_SD_B0_02_ALT3 :
         Selecting Pad: GPIO_SD_B0_02 for Mode: ALT3
</lang>
#### p.iomuxc.xbar1_in22_select_input
<link=p.IOMUXC.XBAR1_IN22_SELECT_INPUT>
#### IOMUXC.XBAR1_IN23_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN23_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN21_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8658[0m (0x401f8000 + 0x0658)
XBAR1_IN23_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_16_ALT1 :
         Selecting Pad: GPIO_EMC_16 for Mode: ALT1
      0x1 - GPIO_AD_B0_09_ALT6 :
         Selecting Pad: GPIO_AD_B0_09 for Mode: ALT6
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_07>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_08>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_10>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_12
<lang=dft>
 (rw)  [1;33m0x401f868c[0m (0x401f8000 + 0x068c)
SW_MUX_CTL_PAD_GPIO_SPI_B0_12 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_DATA01 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_12
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_02>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_02>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_06
<lang=dft>
 (rw)  [1;33m0x401f86ac[0m (0x401f8000 + 0x06ac)
SW_MUX_CTL_PAD_GPIO_SPI_B1_06 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_SS0_B of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B1_06
</lang>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_01>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_07
<lang=dft>
 (rw)  [1;33m0x401f86d0[0m (0x401f8000 + 0x06d0)
SW_PAD_CTL_PAD_GPIO_SPI_B0_07 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_07>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_12>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_00>
#### IOMUXC.ENET2_IPG_CLK_RMII_SELECT_INPUT
<link=p.IOMUXC.ENET2_IPG_CLK_RMII_SELECT_INPUT>
#### iomuxc.enet2_ipp_ind_mac0_rxen_select_input
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT>
#### p.iomuxc.enet2_ipp_ind_mac0_rxerr_select_input
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT>
#### p.iomuxc.flexspi2_ipp_ind_dqs_fa_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT>
#### iomuxc.flexspi2_ipp_ind_dqs_fa_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT>
#### iomuxc.flexspi2_ipp_ind_io_fa_bit0_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT>
#### p.iomuxc.flexspi2_ipp_ind_io_fb_bit1_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT1_SELECT_INPUT>
#### iomuxc.flexspi2_ipp_ind_io_fb_bit2_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT>
#### p.iomuxc.flexspi2_ipp_ind_io_fb_bit3_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT3_SELECT_INPUT>
#### IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT3_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT3_SELECT_INPUT>
#### IOMUXC.GPT1_IPP_IND_CLKIN_SELECT_INPUT
<link=p.IOMUXC.GPT1_IPP_IND_CLKIN_SELECT_INPUT>
#### IOMUXC.SEMC_I_IPP_IND_DQS4_SELECT_INPUT
<link=p.IOMUXC.SEMC_I_IPP_IND_DQS4_SELECT_INPUT>
#### p.flexspi.mcr0
<link=p.FLEXSPI.MCR0>
#### flexspi.mcr2
<link=p.FLEXSPI.MCR2>
#### p.flexspi.intr
<link=p.FLEXSPI.INTR>
#### p.flexspi.flshb1cr0
<link=p.FLEXSPI.FLSHB1CR0>
#### flexspi.flshb1cr0
<link=p.FLEXSPI.FLSHB1CR0>
#### FLEXSPI.FLSHB2CR0
<link=p.FLEXSPI.FLSHB2CR0>
#### p.FLEXSPI.FLSHCR2A1
<lang=dft>
 (rw)  [1;33m0x402a8080[0m (0x402a8000 + 0x0080)
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
#### p.flexspi.flshcr2a1
<link=p.FLEXSPI.FLSHCR2A1>
#### flexspi.flshcr2b2
<link=p.FLEXSPI.FLSHCR2B2>
#### FLEXSPI.FLSHCR2B2
<link=p.FLEXSPI.FLSHCR2B2>
#### p.flexspi.iptxfcr
<link=p.FLEXSPI.IPTXFCR>
#### p.FLEXSPI.STS2
<lang=dft>
 (ro)  [1;33m0x402a80e8[0m (0x402a8000 + 0x00e8)
Status Register 2
 (ro) (01)  [0;32mASLVLOCK[0m  - [00:00] -  Flash A sample clock slave delay line locked.
 (ro) (01)  [0;32mAREFLOCK[0m  - [01:01] -  Flash A sample clock reference delay line locked.
 (ro) (06)  [0;32mASLVSEL[0m  - [07:02] -  Flash A sample clock slave delay line delay cell number selection .
 (ro) (06)  [0;32mAREFSEL[0m  - [13:08] -  Flash A sample clock reference delay line delay cell number selection.
 (ro) (01)  [0;32mBSLVLOCK[0m  - [16:16] -  Flash B sample clock slave delay line locked.
 (ro) (01)  [0;32mBREFLOCK[0m  - [17:17] -  Flash B sample clock reference delay line locked.
 (ro) (06)  [0;32mBSLVSEL[0m  - [23:18] -  Flash B sample clock slave delay line delay cell number selection.
 (ro) (06)  [0;32mBREFSEL[0m  - [29:24] -  Flash B sample clock reference delay line delay cell number selection.
</lang>
#### p.flexspi.rfdr[2]
<link=p.FLEXSPI.RFDR[2]>
#### FLEXSPI.RFDR[6]
<link=p.FLEXSPI.RFDR[6]>
#### flexspi.rfdr[10]
<link=p.FLEXSPI.RFDR[10]>
#### p.flexspi.rfdr[13]
<link=p.FLEXSPI.RFDR[13]>
#### FLEXSPI.RFDR[13]
<link=p.FLEXSPI.RFDR[13]>
#### FLEXSPI.RFDR[22]
<link=p.FLEXSPI.RFDR[22]>
#### p.flexspi.rfdr[26]
<link=p.FLEXSPI.RFDR[26]>
#### p.flexspi.tfdr[15]
<link=p.FLEXSPI.TFDR[15]>
#### FLEXSPI.TFDR[15]
<link=p.FLEXSPI.TFDR[15]>
#### flexspi.tfdr[16]
<link=p.FLEXSPI.TFDR[16]>
#### FLEXSPI.TFDR[23]
<link=p.FLEXSPI.TFDR[23]>
#### p.FLEXSPI.TFDR[29]
<lang=dft>
 (wo)  [1;33m0x402a81f4[0m (0x402a8000 + 0x01f4)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI.LUT[0]
<lang=dft>
 (rw)  [1;33m0x402a8200[0m (0x402a8000 + 0x0200)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[1]
<link=p.FLEXSPI.LUT[1]>
#### flexspi.lut[3]
<link=p.FLEXSPI.LUT[3]>
#### p.flexspi.lut[6]
<link=p.FLEXSPI.LUT[6]>
#### flexspi.lut[6]
<link=p.FLEXSPI.LUT[6]>
#### FLEXSPI.LUT[14]
<link=p.FLEXSPI.LUT[14]>
#### p.FLEXSPI.LUT[19]
<lang=dft>
 (rw)  [1;33m0x402a824c[0m (0x402a8000 + 0x024c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[22]
<lang=dft>
 (rw)  [1;33m0x402a8258[0m (0x402a8000 + 0x0258)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[40]
<lang=dft>
 (rw)  [1;33m0x402a82a0[0m (0x402a8000 + 0x02a0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[44]
<link=p.FLEXSPI.LUT[44]>
#### flexspi.lut[48]
<link=p.FLEXSPI.LUT[48]>
#### flexspi.lut[52]
<link=p.FLEXSPI.LUT[52]>
#### flexspi.lut[55]
<link=p.FLEXSPI.LUT[55]>
#### p.flexspi.lut[61]
<link=p.FLEXSPI.LUT[61]>
#### FLEXSPI.LUT[62]
<link=p.FLEXSPI.LUT[62]>
#### flexspi.lut[63]
<link=p.FLEXSPI.LUT[63]>
#### p.flexspi2.lutkey
<link=p.FLEXSPI2.LUTKEY>
#### p.flexspi2.flsha1cr0
<link=p.FLEXSPI2.FLSHA1CR0>
#### p.flexspi2.flshcr1b2
<link=p.FLEXSPI2.FLSHCR1B2>
#### p.FLEXSPI2.FLSHCR2A2
<lang=dft>
 (rw)  [1;33m0x402a4084[0m (0x402a4000 + 0x0084)
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
#### FLEXSPI2.IPCR1
<link=p.FLEXSPI2.IPCR1>
#### p.flexspi2.iprxfcr
<link=p.FLEXSPI2.IPRXFCR>
#### flexspi2.iprxfsts
<link=p.FLEXSPI2.IPRXFSTS>
#### FLEXSPI2.IPTXFSTS
<link=p.FLEXSPI2.IPTXFSTS>
#### p.flexspi2.rfdr[3]
<link=p.FLEXSPI2.RFDR[3]>
#### p.flexspi2.rfdr[9]
<link=p.FLEXSPI2.RFDR[9]>
#### p.FLEXSPI2.RFDR[20]
<lang=dft>
 (ro)  [1;33m0x402a4150[0m (0x402a4000 + 0x0150)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI2.RFDR[30]
<link=p.FLEXSPI2.RFDR[30]>
#### flexspi2.tfdr[16]
<link=p.FLEXSPI2.TFDR[16]>
#### flexspi2.tfdr[24]
<link=p.FLEXSPI2.TFDR[24]>
#### FLEXSPI2.TFDR[29]
<link=p.FLEXSPI2.TFDR[29]>
#### flexspi2.tfdr[30]
<link=p.FLEXSPI2.TFDR[30]>
#### p.FLEXSPI2.LUT[3]
<lang=dft>
 (rw)  [1;33m0x402a420c[0m (0x402a4000 + 0x020c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[8]
<link=p.FLEXSPI2.LUT[8]>
#### p.FLEXSPI2.LUT[9]
<lang=dft>
 (rw)  [1;33m0x402a4224[0m (0x402a4000 + 0x0224)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[14]
<lang=dft>
 (rw)  [1;33m0x402a4238[0m (0x402a4000 + 0x0238)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[14]
<link=p.FLEXSPI2.LUT[14]>
#### FLEXSPI2.LUT[16]
<link=p.FLEXSPI2.LUT[16]>
#### p.flexspi2.lut[17]
<link=p.FLEXSPI2.LUT[17]>
#### FLEXSPI2.LUT[23]
<link=p.FLEXSPI2.LUT[23]>
#### FLEXSPI2.LUT[30]
<link=p.FLEXSPI2.LUT[30]>
#### flexspi2.lut[32]
<link=p.FLEXSPI2.LUT[32]>
#### p.FLEXSPI2.LUT[39]
<lang=dft>
 (rw)  [1;33m0x402a429c[0m (0x402a4000 + 0x029c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi2.lut[43]
<link=p.FLEXSPI2.LUT[43]>
#### p.flexspi2.lut[49]
<link=p.FLEXSPI2.LUT[49]>
#### p.flexspi2.lut[50]
<link=p.FLEXSPI2.LUT[50]>
#### p.FLEXSPI2.LUT[55]
<lang=dft>
 (rw)  [1;33m0x402a42dc[0m (0x402a4000 + 0x02dc)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[57]
<link=p.FLEXSPI2.LUT[57]>
#### flexspi2.lut[61]
<link=p.FLEXSPI2.LUT[61]>
#### p.flexspi2.lut[62]
<link=p.FLEXSPI2.LUT[62]>
#### pxp.ctrl
<link=p.PXP.CTRL>
#### p.PXP.CTRL_TOG
<lang=dft>
 (rw)  [1;33m0x402b400c[0m (0x402b4000 + 0x000c)
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
#### pxp.ctrl_tog
<link=p.PXP.CTRL_TOG>
#### PXP.OUT_BUF2
<link=p.PXP.OUT_BUF2>
#### p.pxp.out_as_lrc
<link=p.PXP.OUT_AS_LRC>
#### p.pxp.ps_pitch
<link=p.PXP.PS_PITCH>
#### p.PXP.PS_SCALE
<lang=dft>
 (rw)  [1;33m0x402b4110[0m (0x402b4000 + 0x0110)
PS Scale Factor Register
 (rw) (15)  [0;32mXSCALE[0m  - [14:00] -  This is a two bit integer and 12 bit fractional representation (##
 (ro) (01)  [0;32mRSVD1[0m  - [15:15] -  Reserved, always set to zero.
 (rw) (15)  [0;32mYSCALE[0m  - [30:16] -  This is a two bit integer and 12 bit fractional representation (##
 (ro) (01)  [0;32mRSVD2[0m  - [31:31] -  Reserved, always set to zero.
</lang>
#### pxp.ps_scale
<link=p.PXP.PS_SCALE>
#### PXP.AS_BUF
<link=p.PXP.AS_BUF>
#### p.lcdif
<link=p.LCDIF>
#### LCDIF.CTRL
<link=p.LCDIF.CTRL>
#### LCDIF.CTRL1
<link=p.LCDIF.CTRL1>
#### lcdif.ctrl1_clr
<link=p.LCDIF.CTRL1_CLR>
#### lcdif.ctrl1_tog
<link=p.LCDIF.CTRL1_TOG>
#### lcdif.vdctrl0_set
<link=p.LCDIF.VDCTRL0_SET>
#### p.lcdif.vdctrl1
<link=p.LCDIF.VDCTRL1>
#### lcdif.vdctrl1
<link=p.LCDIF.VDCTRL1>
#### p.lcdif.stat
<link=p.LCDIF.STAT>
#### p.LCDIF.PIGEONCTRL0_SET
<lang=dft>
 (rw)  [1;33m0x402b8384[0m (0x402b8000 + 0x0384)
LCDIF Pigeon Mode Control0 Register
 (rw) (12)  [0;32mFD_PERIOD[0m  - [11:00] -  Period of line counter during FD phase
 (rw) (12)  [0;32mLD_PERIOD[0m  - [27:16] -  Period of pclk counter during LD phase
</lang>
#### lcdif.pigeonctrl1
<link=p.LCDIF.PIGEONCTRL1>
#### lcdif.pigeonctrl2_clr
<link=p.LCDIF.PIGEONCTRL2_CLR>
#### LCDIF.PIGEON_2_0
<link=p.LCDIF.PIGEON_2_0>
#### lcdif.pigeon_3_0
<link=p.LCDIF.PIGEON_3_0>
#### p.LCDIF.PIGEON_4_0
<lang=dft>
 (rw)  [1;33m0x402b8900[0m (0x402b8000 + 0x0900)
Panel Interface Signal Generator Register
 (rw) (01)  [0;32mEN[0m  - [00:00] -  Enable pigeon Mode on this signal
 (rw) (01)  [0;32mPOL[0m  - [01:01] -  Polarity of signal output
      0 - ACTIVE_HIGH :
         Normal Signal (Active high)
      0x1 - ACTIVE_LOW :
         Inverted signal (Active low)
 (rw) (02)  [0;32mINC_SEL[0m  - [03:02] -  Event to incrment local counter
      0 - PCLK :
         pclk
      0x1 - LINE :
         Line start pulse
      0x2 - FRAME :
         Frame start pulse
      0x3 - SIG_ANOTHER :
         Use another signal as tick event
 (rw) (04)  [0;32mOFFSET[0m  - [07:04] -  offset on pclk unit
 (rw) (04)  [0;32mMASK_CNT_SEL[0m  - [11:08] -  select global counters as mask condition, use together with MASK_CNT
      0 - HSTATE_CNT :
         pclk counter within one hscan state
      0x1 - HSTATE_CYCLE :
         pclk cycle within one hscan state
      0x2 - VSTATE_CNT :
         line counter within one vscan state
      0x3 - VSTATE_CYCLE :
         line cycle within one vscan state
      0x4 - FRAME_CNT :
         frame counter
      0x5 - FRAME_CYCLE :
         frame cycle
      0x6 - HCNT :
         horizontal counter (pclk counter within one line )
      0x7 - VCNT :
         vertical counter (line counter within one frame)
 (rw) (12)  [0;32mMASK_CNT[0m  - [23:12] -  When the global counter selected through MASK_CNT_SEL matches value in this reg
 , pigeon local counter start ticking
 (rw) (08)  [0;32mSTATE_MASK[0m  - [31:24] -  state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan s
 tates as reference point for local counter to start ticking
      0x1 - FS :
         FRAME SYNC
      0x2 - FB :
         FRAME BEGIN
      0x4 - FD :
         FRAME DATA
      0x8 - FE :
         FRAME END
      0x10 - LS :
         LINE SYNC
      0x20 - LB :
         LINE BEGIN
      0x40 - LD :
         LINE DATA
      0x80 - LE :
         LINE END
</lang>
#### p.lcdif.pigeon_4_0
<link=p.LCDIF.PIGEON_4_0>
#### p.LCDIF.PIGEON_6_2
<lang=dft>
 (rw)  [1;33m0x402b89a0[0m (0x402b8000 + 0x09a0)
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
#### p.lcdif.pigeon_6_2
<link=p.LCDIF.PIGEON_6_2>
#### p.LCDIF.PIGEON_8_2
<lang=dft>
 (rw)  [1;33m0x402b8a20[0m (0x402b8000 + 0x0a20)
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
#### p.lcdif.pigeon_8_2
<link=p.LCDIF.PIGEON_8_2>
#### p.LCDIF.PIGEON_11_1
<lang=dft>
 (rw)  [1;33m0x402b8ad0[0m (0x402b8000 + 0x0ad0)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### csi.csicr2
<link=p.CSI.CSICR2>
#### p.csi.csirfifo
<link=p.CSI.CSIRFIFO>
#### p.CSI.CSIDMATS_STATFIFO
<lang=dft>
 (rw)  [1;33m0x402bc024[0m (0x402bc000 + 0x0024)
CSI DMA Transfer Size Register - for STATFIFO
 (rw) (32)  [0;32mDMA_TSF_SIZE_SFF[0m  - [31:00] -  DMA Transfer Size for STATFIFO
</lang>
#### usdhc1.cmd_arg
<link=p.USDHC1.CMD_ARG>
#### p.usdhc1.cmd_xfr_typ
<link=p.USDHC1.CMD_XFR_TYP>
#### p.usdhc1.cmd_rsp2
<link=p.USDHC1.CMD_RSP2>
#### USDHC1.PRES_STATE
<link=p.USDHC1.PRES_STATE>
#### p.usdhc1.sys_ctrl
<link=p.USDHC1.SYS_CTRL>
#### usdhc1.sys_ctrl
<link=p.USDHC1.SYS_CTRL>
#### p.usdhc1.int_signal_en
<link=p.USDHC1.INT_SIGNAL_EN>
#### p.USDHC1.AUTOCMD12_ERR_STATUS
<lang=dft>
 (rw)  [1;33m0x402c003c[0m (0x402c0000 + 0x003c)
Auto CMD12 Error Status
 (ro) (01)  [0;32mAC12NE[0m  - [00:00] -  Auto CMD12 Not Executed
      0 - AC12NE_0 :
         Executed
      0x1 - AC12NE_1 :
         Not executed
 (ro) (01)  [0;32mAC12TOE[0m  - [01:01] -  Auto CMD12 / 23 Timeout Error
      0 - AC12TOE_0 :
         No error
      0x1 - AC12TOE_1 :
         Time out
 (ro) (01)  [0;32mAC12EBE[0m  - [02:02] -  Auto CMD12 / 23 End Bit Error
      0 - AC12EBE_0 :
         No error
      0x1 - AC12EBE_1 :
         End Bit Error Generated
 (ro) (01)  [0;32mAC12CE[0m  - [03:03] -  Auto CMD12 / 23 CRC Error
      0 - AC12CE_0 :
         No CRC error
      0x1 - AC12CE_1 :
         CRC Error Met in Auto CMD12/23 Response
 (ro) (01)  [0;32mAC12IE[0m  - [04:04] -  Auto CMD12 / 23 Index Error
      0 - AC12IE_0 :
         No error
      0x1 - AC12IE_1 :
         Error, the CMD index in response is not CMD12/23
 (ro) (01)  [0;32mCNIBAC12E[0m  - [07:07] -  Command Not Issued By Auto CMD12 Error
      0 - CNIBAC12E_0 :
         No error
      0x1 - CNIBAC12E_1 :
         Not Issued
 (rw) (01)  [0;32mEXECUTE_TUNING[0m  - [22:22] -  Execute Tuning
 (rw) (01)  [0;32mSMP_CLK_SEL[0m  - [23:23] -  Sample Clock Select
      0 - SMP_CLK_SEL_0 :
         Fixed clock is used to sample data
      0x1 - SMP_CLK_SEL_1 :
         Tuned clock is used to sample data
</lang>
#### usdhc1.dll_ctrl
<link=p.USDHC1.DLL_CTRL>
#### p.USDHC2.DS_ADDR
<lang=dft>
 (rw)  [1;33m0x402c4000[0m (0x402c4000 + 0x0000)
DMA System Address
 (rw) (32)  [0;32mDS_ADDR[0m  - [31:00] -  DS_ADDR
</lang>
#### p.USDHC2.CMD_ARG
<lang=dft>
 (rw)  [1;33m0x402c4008[0m (0x402c4000 + 0x0008)
Command Argument
 (rw) (32)  [0;32mCMDARG[0m  - [31:00] -  Command Argument
</lang>
#### p.usdhc2.cmd_rsp2
<link=p.USDHC2.CMD_RSP2>
#### p.USDHC2.CMD_RSP3
<lang=dft>
 (ro)  [1;33m0x402c401c[0m (0x402c4000 + 0x001c)
Command Response3
 (ro) (32)  [0;32mCMDRSP3[0m  - [31:00] -  Command Response 3
</lang>
#### USDHC2.INT_STATUS_EN
<link=p.USDHC2.INT_STATUS_EN>
#### p.USDHC2.DLL_CTRL
<lang=dft>
 (rw)  [1;33m0x402c4060[0m (0x402c4000 + 0x0060)
DLL (Delay Line) Control
 (rw) (01)  [0;32mDLL_CTRL_ENABLE[0m  - [00:00] -  DLL_CTRL_ENABLE
 (rw) (01)  [0;32mDLL_CTRL_RESET[0m  - [01:01] -  DLL_CTRL_RESET
 (rw) (01)  [0;32mDLL_CTRL_SLV_FORCE_UPD[0m  - [02:02] -  DLL_CTRL_SLV_FORCE_UPD
 (rw) (04)  [0;32mDLL_CTRL_SLV_DLY_TARGET0[0m  - [06:03] -  DLL_CTRL_SLV_DLY_TARGET0
 (rw) (01)  [0;32mDLL_CTRL_GATE_UPDATE[0m  - [07:07] -  DLL_CTRL_GATE_UPDATE
 (rw) (01)  [0;32mDLL_CTRL_SLV_OVERRIDE[0m  - [08:08] -  DLL_CTRL_SLV_OVERRIDE
 (rw) (07)  [0;32mDLL_CTRL_SLV_OVERRIDE_VAL[0m  - [15:09] -  DLL_CTRL_SLV_OVERRIDE_VAL
 (rw) (03)  [0;32mDLL_CTRL_SLV_DLY_TARGET1[0m  - [18:16] -  DLL_CTRL_SLV_DLY_TARGET1
 (rw) (08)  [0;32mDLL_CTRL_SLV_UPDATE_INT[0m  - [27:20] -  DLL_CTRL_SLV_UPDATE_INT
 (rw) (04)  [0;32mDLL_CTRL_REF_UPDATE_INT[0m  - [31:28] -  DLL_CTRL_REF_UPDATE_INT
</lang>
#### p.usdhc2.mmc_boot
<link=p.USDHC2.MMC_BOOT>
#### ENET.ECR
<link=p.ENET.ECR>
#### enet.mscr
<link=p.ENET.MSCR>
#### ENET.OPD
<link=p.ENET.OPD>
#### p.enet.galr
<link=p.ENET.GALR>
#### p.ENET.TDSR
<lang=dft>
 (rw)  [1;33m0x402d8184[0m (0x402d8000 + 0x0184)
Transmit Buffer Descriptor Ring Start Register
 (rw) (29)  [0;32mX_DES_START[0m  - [31:03] -  Pointer to the beginning of the transmit buffer descriptor queue.
</lang>
#### p.ENET.TAEM
<lang=dft>
 (rw)  [1;33m0x402d81a4[0m (0x402d8000 + 0x01a4)
Transmit FIFO Almost Empty Threshold
 (rw) (08)  [0;32mTX_ALMOST_EMPTY[0m  - [07:00] -  Value of Transmit FIFO Almost Empty Threshold
</lang>
#### ENET.TIPG
<link=p.ENET.TIPG>
#### enet.ftrl
<link=p.ENET.FTRL>
#### enet.racc
<link=p.ENET.RACC>
#### p.ENET.RMON_T_BC_PKT
<lang=dft>
 (ro)  [1;33m0x402d8208[0m (0x402d8000 + 0x0208)
Tx Broadcast Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Broadcast packets
</lang>
#### ENET.RMON_T_P65TO127
<link=p.ENET.RMON_T_P65TO127>
#### p.enet.rmon_t_p1024to2047
<link=p.ENET.RMON_T_P1024TO2047>
#### p.ENET.IEEE_T_DROP
<lang=dft>
 (ro)  [1;33m0x402d8248[0m (0x402d8000 + 0x0248)
Reserved Statistic Register
</lang>
#### p.ENET.IEEE_T_LCOL
<lang=dft>
 (ro)  [1;33m0x402d825c[0m (0x402d8000 + 0x025c)
Frames Transmitted with Late Collision Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with late collision
</lang>
#### ENET.RMON_R_FRAG
<link=p.ENET.RMON_R_FRAG>
#### p.ENET.RMON_R_RESVD_0
<lang=dft>
 (ro)  [1;33m0x402d82a4[0m (0x402d8000 + 0x02a4)
Reserved Statistic Register
</lang>
#### ENET.RMON_R_P128TO255
<link=p.ENET.RMON_R_P128TO255>
#### p.ENET.IEEE_R_FRAME_OK
<lang=dft>
 (ro)  [1;33m0x402d82cc[0m (0x402d8000 + 0x02cc)
Frames Received OK Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames received OK
</lang>
#### p.enet.ieee_r_macerr
<link=p.ENET.IEEE_R_MACERR>
#### enet.atper
<link=p.ENET.ATPER>
#### ENET.ATPER
<link=p.ENET.ATPER>
#### p.enet.atinc
<link=p.ENET.ATINC>
#### ENET.TCSR1
<link=p.ENET.TCSR1>
#### p.enet2.eimr
<link=p.ENET2.EIMR>
#### p.ENET2.ECR
<lang=dft>
 (rw)  [1;33m0x402d4024[0m (0x402d4000 + 0x0024)
Ethernet Control Register
 (rw) (01)  [0;32mRESET[0m  - [00:00] -  Ethernet MAC Reset
 (rw) (01)  [0;32mETHEREN[0m  - [01:01] -  Ethernet Enable
      0 - ETHEREN_0 :
         Reception immediately stops and transmission stops after a bad CRC is a
         ppended to any currently transmitted frame.
      0x1 - ETHEREN_1 :
         MAC is enabled, and reception and transmission are possible.
 (rw) (01)  [0;32mMAGICEN[0m  - [02:02] -  Magic Packet Detection Enable
      0 - MAGICEN_0 :
         Magic detection logic disabled.
      0x1 - MAGICEN_1 :
         The MAC core detects magic packets and asserts EIR[WAKEUP] when a frame
          is detected.
 (rw) (01)  [0;32mSLEEP[0m  - [03:03] -  Sleep Mode Enable
      0 - SLEEP_0 :
         Normal operating mode.
      0x1 - SLEEP_1 :
         Sleep mode.
 (rw) (01)  [0;32mEN1588[0m  - [04:04] -  EN1588 Enable
      0 - EN1588_0 :
         Legacy FEC buffer descriptors and functions enabled.
      0x1 - EN1588_1 :
         Enhanced frame time-stamping functions enabled.
 (rw) (01)  [0;32mDBGEN[0m  - [06:06] -  Debug Enable
      0 - DBGEN_0 :
         MAC continues operation in debug mode.
      0x1 - DBGEN_1 :
         MAC enters hardware freeze mode when the processor is in debug mode.
 (rw) (01)  [0;32mDBSWP[0m  - [08:08] -  Descriptor Byte Swapping Enable
      0 - DBSWP_0 :
         The buffer descriptor bytes are not swapped to support big-endian devic
         es.
      0x1 - DBSWP_1 :
         The buffer descriptor bytes are swapped to support little-endian device
         s.
</lang>
#### enet2.tcr
<link=p.ENET2.TCR>
#### ENET2.IAUR
<link=p.ENET2.IAUR>
#### p.ENET2.TFWR
<lang=dft>
 (rw)  [1;33m0x402d4144[0m (0x402d4000 + 0x0144)
Transmit FIFO Watermark Register
 (rw) (06)  [0;32mTFWR[0m  - [05:00] -  Transmit FIFO Write
      0 - TFWR_0 :
         64 bytes written.
      0x1 - TFWR_1 :
         64 bytes written.
      0x2 - TFWR_2 :
         128 bytes written.
      0x3 - TFWR_3 :
         192 bytes written.
      0x1F - TFWR_31 :
         1984 bytes written.
 (rw) (01)  [0;32mSTRFWD[0m  - [08:08] -  Store And Forward Enable
      0 - STRFWD_0 :
         Reset. The transmission start threshold is programmed in TFWR[TFWR].
      0x1 - STRFWD_1 :
         Enabled.
</lang>
#### ENET2.TFWR
<link=p.ENET2.TFWR>
#### ENET2.RAEM
<link=p.ENET2.RAEM>
#### p.ENET2.RMON_T_OVERSIZE
<lang=dft>
 (ro)  [1;33m0x402d4218[0m (0x402d4000 + 0x0218)
Tx Packets GT MAX_FL bytes and Good CRC Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of transmit packets greater than MAX_FL bytes with good CRC
</lang>
#### enet2.rmon_t_frag
<link=p.ENET2.RMON_T_FRAG>
#### ENET2.RMON_T_P65TO127
<link=p.ENET2.RMON_T_P65TO127>
#### enet2.rmon_t_p128to255
<link=p.ENET2.RMON_T_P128TO255>
#### p.ENET2.RMON_T_P1024TO2047
<lang=dft>
 (ro)  [1;33m0x402d423c[0m (0x402d4000 + 0x023c)
Tx 1024- to 2047-byte Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of 1024- to 2047-byte transmit packets
</lang>
#### p.enet2.ieee_t_macerr
<link=p.ENET2.IEEE_T_MACERR>
#### p.ENET2.IEEE_T_SQE
<lang=dft>
 (ro)  [1;33m0x402d426c[0m (0x402d4000 + 0x026c)
Reserved Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  This read-only field is reserved and always has the value 0
</lang>
#### p.enet2.rmon_r_jab
<link=p.ENET2.RMON_R_JAB>
#### p.ENET2.RMON_R_P_GTE2048
<lang=dft>
 (ro)  [1;33m0x402d42c0[0m (0x402d4000 + 0x02c0)
Rx Packets Greater than 2048 Bytes Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of greater-than-2048-byte recieve packets
</lang>
#### enet2.ieee_r_drop
<link=p.ENET2.IEEE_R_DROP>
#### p.ENET2.IEEE_R_CRC
<lang=dft>
 (ro)  [1;33m0x402d42d0[0m (0x402d4000 + 0x02d0)
Frames Received with CRC Error Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames received with CRC error
</lang>
#### p.ENET2.IEEE_R_FDXFC
<lang=dft>
 (ro)  [1;33m0x402d42dc[0m (0x402d4000 + 0x02dc)
Flow Control Pause Frames Received Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of flow-control pause frames received
</lang>
#### ENET2.ATCR
<link=p.ENET2.ATCR>
#### p.USB1.GPTIMER0CTRL
<lang=dft>
 (rw)  [1;33m0x402e0084[0m (0x402e0000 + 0x0084)
General Purpose Timer #0 Controller
 (rw) (24)  [0;32mGPTCNT[0m  - [23:00] -  General Purpose Timer Counter. This field is the count value of the countdown t
 imer.
 (rw) (01)  [0;32mGPTMODE[0m  - [24:24] -  General Purpose Timer Mode In one shot mode, the timer will count down to zero,
  generate an interrupt, and stop until the counter is reset by software; In rep
 eat mode, the timer will count down to zero, generate an interrupt and automati
 cally reload the counter value from GPTLD bits to start again
      0 - GPTMODE_0 :
         One Shot Mode
      0x1 - GPTMODE_1 :
         Repeat Mode
 (rw) (01)  [0;32mGPTRST[0m  - [30:30] -  General Purpose Timer Reset
      0 - GPTRST_0 :
         No action
      0x1 - GPTRST_1 :
         Load counter value from GPTLD bits in n_GPTIMER0LD
 (rw) (01)  [0;32mGPTRUN[0m  - [31:31] -  General Purpose Timer Run GPTCNT bits are not effected when setting or clearing
  this bit.
      0 - GPTRUN_0 :
         Stop counting
      0x1 - GPTRUN_1 :
         Run
</lang>
#### usb1.sbuscfg
<link=p.USB1.SBUSCFG>
#### p.usb1.caplength
<link=p.USB1.CAPLENGTH>
#### USB1.USBSTS
<link=p.USB1.USBSTS>
#### usb1.endptnak
<link=p.USB1.ENDPTNAK>
#### usb1.configflag
<link=p.USB1.CONFIGFLAG>
#### p.usb1.endptstat
<link=p.USB1.ENDPTSTAT>
#### p.USB2.GPTIMER0LD
<lang=dft>
 (rw)  [1;33m0x402e0280[0m (0x402e0200 + 0x0080)
General Purpose Timer #0 Load
 (rw) (24)  [0;32mGPTLD[0m  - [23:00] -  General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits whe
 n GPTRST bit is set '1b'
</lang>
#### usb2.gptimer1ctrl
<link=p.USB2.GPTIMER1CTRL>
#### USB2.DCIVERSION
<link=p.USB2.DCIVERSION>
#### usb2.dccparams
<link=p.USB2.DCCPARAMS>
#### usb2.usbcmd
<link=p.USB2.USBCMD>
#### USB2.USBSTS
<link=p.USB2.USBSTS>
#### usb2.burstsize
<link=p.USB2.BURSTSIZE>
#### p.USB2.ENDPTNAK
<lang=dft>
 (rw)  [1;33m0x402e0378[0m (0x402e0200 + 0x0178)
Endpoint NAK
 (rw) (08)  [0;32mEPRN[0m  - [07:00] -  RX Endpoint NAK - R/WC
 (rw) (08)  [0;32mEPTN[0m  - [23:16] -  TX Endpoint NAK - R/WC
</lang>
#### usb2.usbmode
<link=p.USB2.USBMODE>
#### USB2.USBMODE
<link=p.USB2.USBMODE>
#### p.usb2.endptctrl6
<link=p.USB2.ENDPTCTRL6>
#### USB2.ENDPTCTRL6
<link=p.USB2.ENDPTCTRL6>
#### USBNC1.USB_OTG1_CTRL
<link=p.USBNC1.USB_OTG1_CTRL>
#### p.USBNC2.USB_OTG1_CTRL
<lang=dft>
 (rw)  [1;33m0x402e0804[0m (0x402e0004 + 0x0800)
USB OTG1 Control Register
 (rw) (01)  [0;32mOVER_CUR_DIS[0m  - [07:07] -  Disable OTG1 Overcurrent Detection
      0 - OVER_CUR_DIS_0 :
         Enables overcurrent detection
      0x1 - OVER_CUR_DIS_1 :
         Disables overcurrent detection
 (rw) (01)  [0;32mOVER_CUR_POL[0m  - [08:08] -  OTG1 Polarity of Overcurrent The polarity of OTG1 port overcurrent event
      0 - OVER_CUR_POL_0 :
         High active (high on this signal represents an overcurrent condition)
      0x1 - OVER_CUR_POL_1 :
         Low active (low on this signal represents an overcurrent condition)
 (rw) (01)  [0;32mPWR_POL[0m  - [09:09] -  OTG1 Power Polarity This bit should be set according to PMIC Power Pin polarity
 .
      0 - PWR_POL_0 :
         PMIC Power Pin is Low active.
      0x1 - PWR_POL_1 :
         PMIC Power Pin is High active.
 (rw) (01)  [0;32mWIE[0m  - [10:10] -  OTG1 Wake-up Interrupt Enable This bit enables or disables the OTG1 wake-up int
 errupt
      0 - WIE_0 :
         Interrupt Disabled
      0x1 - WIE_1 :
         Interrupt Enabled
 (rw) (01)  [0;32mWKUP_SW_EN[0m  - [14:14] -  OTG1 Software Wake-up Enable
      0 - WKUP_SW_EN_0 :
         Disable
      0x1 - WKUP_SW_EN_1 :
         Enable
 (rw) (01)  [0;32mWKUP_SW[0m  - [15:15] -  OTG1 Software Wake-up
      0 - WKUP_SW_0 :
         Inactive
      0x1 - WKUP_SW_1 :
         Force wake-up
 (rw) (01)  [0;32mWKUP_ID_EN[0m  - [16:16] -  OTG1 Wake-up on ID change enable
      0 - WKUP_ID_EN_0 :
         Disable
      0x1 - WKUP_ID_EN_1 :
         Enable
 (rw) (01)  [0;32mWKUP_VBUS_EN[0m  - [17:17] -  OTG1 wake-up on VBUS change enable
      0 - WKUP_VBUS_EN_0 :
         Disable
      0x1 - WKUP_VBUS_EN_1 :
         Enable
 (rw) (01)  [0;32mWKUP_DPDM_EN[0m  - [29:29] -  Wake-up on DPDM change enable
      0 - WKUP_DPDM_EN_0 :
         DPDM changes wake-up to be disabled only when VBUS is 0.
      0x1 - WKUP_DPDM_EN_1 :
         (Default) DPDM changes wake-up to be enabled, it is for device only.
 (ro) (01)  [0;32mWIR[0m  - [31:31] -  OTG1 Wake-up Interrupt Request This bit indicates that a wake-up interrupt requ
 est is received on the OTG1 port
      0 - WIR_0 :
         No wake-up interrupt request received
      0x1 - WIR_1 :
         Wake-up Interrupt Request received
</lang>
#### p.usbnc2.usb_otg1_ctrl
<link=p.USBNC2.USB_OTG1_CTRL>
#### p.SEMC.BR2
<lang=dft>
 (rw)  [1;33m0x402f0018[0m (0x402f0000 + 0x0018)
Base Register 2 (For SDRAM CS2 device)
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
#### SEMC.BR7
<link=p.SEMC.BR7>
#### SEMC.SDRAMCR0
<link=p.SEMC.SDRAMCR0>
#### p.SEMC.SDRAMCR3
<lang=dft>
 (rw)  [1;33m0x402f004c[0m (0x402f0000 + 0x004c)
SDRAM control register 3
 (rw) (01)  [0;32mREN[0m  - [00:00] -  Refresh enable
 (rw) (03)  [0;32mREBL[0m  - [03:01] -  Refresh burst length
      0 - REBL_0 :
         1
      0x1 - REBL_1 :
         2
      0x2 - REBL_2 :
         3
      0x3 - REBL_3 :
         4
      0x4 - REBL_4 :
         5
      0x5 - REBL_5 :
         6
      0x6 - REBL_6 :
         7
      0x7 - REBL_7 :
         8
 (rw) (08)  [0;32mPRESCALE[0m  - [15:08] -  Prescaler timer period
      0 - PRESCALE_0 :
         256*16 cycle
      0x1 - PRESCALE_1 :
         PRESCALE*16 cycle
      0x2 - PRESCALE_2 :
         PRESCALE*16 cycle
      0x3 - PRESCALE_3 :
         PRESCALE*16 cycle
      0x4 - PRESCALE_4 :
         PRESCALE*16 cycle
      0x5 - PRESCALE_5 :
         PRESCALE*16 cycle
      0x6 - PRESCALE_6 :
         PRESCALE*16 cycle
      0x7 - PRESCALE_7 :
         PRESCALE*16 cycle
      0x8 - PRESCALE_8 :
         PRESCALE*16 cycle
      0x9 - PRESCALE_9 :
         PRESCALE*16 cycle
 (rw) (08)  [0;32mRT[0m  - [23:16] -  Refresh timer period
      0 - RT_0 :
         256*Prescaler period
      0x1 - RT_1 :
         RT*Prescaler period
      0x2 - RT_2 :
         RT*Prescaler period
      0x3 - RT_3 :
         RT*Prescaler period
      0x4 - RT_4 :
         RT*Prescaler period
      0x5 - RT_5 :
         RT*Prescaler period
      0x6 - RT_6 :
         RT*Prescaler period
      0x7 - RT_7 :
         RT*Prescaler period
      0x8 - RT_8 :
         RT*Prescaler period
      0x9 - RT_9 :
         RT*Prescaler period
 (rw) (08)  [0;32mUT[0m  - [31:24] -  Refresh urgent threshold
      0 - UT_0 :
         256*Prescaler period
      0x1 - UT_1 :
         UT*Prescaler period
      0x2 - UT_2 :
         UT*Prescaler period
      0x3 - UT_3 :
         UT*Prescaler period
      0x4 - UT_4 :
         UT*Prescaler period
      0x5 - UT_5 :
         UT*Prescaler period
      0x6 - UT_6 :
         UT*Prescaler period
      0x7 - UT_7 :
         UT*Prescaler period
      0x8 - UT_8 :
         UT*Prescaler period
      0x9 - UT_9 :
         UT*Prescaler period
</lang>
#### SEMC.NANDCR2
<link=p.SEMC.NANDCR2>
#### p.SEMC.NORCR2
<lang=dft>
 (rw)  [1;33m0x402f0068[0m (0x402f0000 + 0x0068)
NOR control register 2
 (rw) (04)  [0;32mTA[0m  - [11:08] -  Turnaround time cycle
 (rw) (04)  [0;32mAWDH[0m  - [15:12] -  Address to write data hold time cycle
 (rw) (04)  [0;32mLC[0m  - [19:16] -  Latency count
 (rw) (04)  [0;32mRD[0m  - [23:20] -  Read cycle time
 (rw) (04)  [0;32mCEITV[0m  - [27:24] -  CE# interval min time
 (rw) (04)  [0;32mRDH[0m  - [31:28] -  Read cycle hold time
</lang>
#### p.SEMC.SRAMCR1
<lang=dft>
 (rw)  [1;33m0x402f0074[0m (0x402f0000 + 0x0074)
SRAM control register 1
 (rw) (04)  [0;32mCES[0m  - [03:00] -  CE setup time cycle
 (rw) (04)  [0;32mCEH[0m  - [07:04] -  CE hold min time
 (rw) (04)  [0;32mAS[0m  - [11:08] -  Address setup time
 (rw) (04)  [0;32mAH[0m  - [15:12] -  Address hold time
 (rw) (04)  [0;32mWEL[0m  - [19:16] -  WE LOW time (WEL+1) cycle
 (rw) (04)  [0;32mWEH[0m  - [23:20] -  WE HIGH time (WEH+1) cycle
 (rw) (04)  [0;32mREL[0m  - [27:24] -  RE LOW time (REL+1) cycle
 (rw) (04)  [0;32mREH[0m  - [31:28] -  RE HIGH time (REH+1) cycle
</lang>
#### p.semc.dbicr1
<link=p.SEMC.DBICR1>
#### semc.sts0
<link=p.SEMC.STS0>
#### SEMC.STS2
<link=p.SEMC.STS2>
#### p.SEMC.STS12
<lang=dft>
 (ro)  [1;33m0x402f00f0[0m (0x402f0000 + 0x00f0)
Status register 12
 (ro) (32)  [0;32mNDADDR[0m  - [31:00] -  This field indicating the last write address (AXI command) to NAND device (with
 out base address in SEMC_BR4).
</lang>
#### semc.sts12
<link=p.SEMC.STS12>
#### p.semc.sts14
<link=p.SEMC.STS14>
#### SEMC.STS14
<link=p.SEMC.STS14>
#### p.dcp.ctrl
<link=p.DCP.CTRL>
#### dcp.stat_tog
<link=p.DCP.STAT_TOG>
#### DCP.CHANNELCTRL_SET
<link=p.DCP.CHANNELCTRL_SET>
#### p.dcp.channelctrl_tog
<link=p.DCP.CHANNELCTRL_TOG>
#### p.DCP.CAPABILITY0
<lang=dft>
 (rw)  [1;33m0x402fc030[0m (0x402fc000 + 0x0030)
DCP capability 0 register
 (ro) (08)  [0;32mNUM_KEYS[0m  - [07:00] -  Encoded value indicating the number of key-storage locations implemented in the
  design
 (ro) (04)  [0;32mNUM_CHANNELS[0m  - [11:08] -  Encoded value indicating the number of channels implemented in the design
 (rw) (01)  [0;32mDISABLE_UNIQUE_KEY[0m  - [29:29] -  Write to a 1 to disable the per-device unique key
 (rw) (01)  [0;32mDISABLE_DECRYPT[0m  - [31:31] -  Write to 1 to disable the decryption
</lang>
#### dcp.packet2
<link=p.DCP.PACKET2>
#### DCP.PACKET3
<link=p.DCP.PACKET3>
#### dcp.ch1stat
<link=p.DCP.CH1STAT>
#### p.dcp.ch1stat_tog
<link=p.DCP.CH1STAT_TOG>
#### p.dcp.ch1opts_set
<link=p.DCP.CH1OPTS_SET>
#### DCP.CH1OPTS_TOG
<link=p.DCP.CH1OPTS_TOG>
#### p.DCP.CH3STAT
<lang=dft>
 (rw)  [1;33m0x402fc1e0[0m (0x402fc000 + 0x01e0)
DCP channel 3 status register
 (rw) (01)  [0;32mHASH_MISMATCH[0m  - [01:01] -  This bit indicates that a hashing check operation is mismatched for the control
  packets that enable the HASH_CHECK bit
 (rw) (01)  [0;32mERROR_SETUP[0m  - [02:02] -  This bit indicates that the hardware detected an invalid programming configurat
 ion (such as a buffer length that is not a multiple of the natural data size fo
 r the operation)
 (rw) (01)  [0;32mERROR_PACKET[0m  - [03:03] -  This bit indicates that a bus error occurred when reading the packet or payload
  or when writing the status back to the packet paylaod
 (rw) (01)  [0;32mERROR_SRC[0m  - [04:04] -  This bit indicates that a bus error occurred when reading from the source buffe
 r
 (rw) (01)  [0;32mERROR_DST[0m  - [05:05] -  This bit indicates that a bus error occurred when storing to the destination bu
 ffer
 (rw) (01)  [0;32mERROR_PAGEFAULT[0m  - [06:06] -  This bit indicates that a page fault occurred while converting a virtual addres
 s to a physical address
 (rw) (08)  [0;32mERROR_CODE[0m  - [23:16] -  Indicates additional error codes for some of the error conditions.
      0x1 - NEXT_CHAIN_IS_0 :
         Error is signalled because the next pointer is 0x00000000.
      0x2 - NO_CHAIN :
         Error is signalled because the semaphore is of a non-zero value and nei
         ther of the chain bits is set.
      0x3 - CONTEXT_ERROR :
         Error is signalled because an error was reported while reading/writing 
         the context buffer.
      0x4 - PAYLOAD_ERROR :
         Error is signalled because an error was reported while reading/writing 
         the payload.
      0x5 - INVALID_MODE :
         Error is signalled because the control packet specifies an invalid mode
          select (for example, blit + hash).
 (ro) (08)  [0;32mTAG[0m  - [31:24] -  Indicates the tag from the last completed packet in the command structure.
</lang>
#### p.dcp.ch3opts
<link=p.DCP.CH3OPTS>
#### dcp.ch3opts
<link=p.DCP.CH3OPTS>
#### p.dcp.ch3opts_set
<link=p.DCP.CH3OPTS_SET>
#### p.dcp.ch3opts_clr
<link=p.DCP.CH3OPTS_CLR>
#### p.dcp.dbgdata
<link=p.DCP.DBGDATA>
#### DCP.PAGETABLE
<link=p.DCP.PAGETABLE>
#### DCP.VERSION
<link=p.DCP.VERSION>
#### p.spdif
<link=p.SPDIF>
#### p.spdif.sic
<link=p.SPDIF.SIC>
#### spdif.sic
<link=p.SPDIF.SIC>
#### p.SPDIF.SIS
<lang=dft>
 (ro)  [1;33m0x40380010[0m (0x40380000 + 0x0010)
InterruptStat Register
 (ro) (01)  [0;32mRxFIFOFul[0m  - [00:00] -  SPDIF Rx FIFO full, can't be cleared with reg. IntClear. To clear it, read from
  Rx FIFO.
 (ro) (01)  [0;32mTxEm[0m  - [01:01] -  SPDIF Tx FIFO empty, can't be cleared with reg. IntClear. To clear it, write to
 Tx FIFO.
 (ro) (01)  [0;32mLockLoss[0m  - [02:02] -  SPDIF receiver loss of lock
 (ro) (01)  [0;32mRxFIFOResyn[0m  - [03:03] -  Rx FIFO resync
 (ro) (01)  [0;32mRxFIFOUnOv[0m  - [04:04] -  Rx FIFO underrun/overrun
 (ro) (01)  [0;32mUQErr[0m  - [05:05] -  U/Q Channel framing error
 (ro) (01)  [0;32mUQSync[0m  - [06:06] -  U/Q Channel sync found
 (ro) (01)  [0;32mQRxOv[0m  - [07:07] -  Q Channel receive register overrun
 (ro) (01)  [0;32mQRxFul[0m  - [08:08] -  Q Channel receive register full, can't be cleared with reg
 (ro) (01)  [0;32mURxOv[0m  - [09:09] -  U Channel receive register overrun
 (ro) (01)  [0;32mURxFul[0m  - [10:10] -  U Channel receive register full, can't be cleared with reg
 (ro) (01)  [0;32mBitErr[0m  - [14:14] -  SPDIF receiver found parity bit error
 (ro) (01)  [0;32mSymErr[0m  - [15:15] -  SPDIF receiver found illegal symbol
 (ro) (01)  [0;32mValNoGood[0m  - [16:16] -  SPDIF validity flag no good
 (ro) (01)  [0;32mCNew[0m  - [17:17] -  SPDIF receive change in value of control channel
 (ro) (01)  [0;32mTxResyn[0m  - [18:18] -  SPDIF Tx FIFO resync
 (ro) (01)  [0;32mTxUnOv[0m  - [19:19] -  SPDIF Tx FIFO under/overrun
 (ro) (01)  [0;32mLock[0m  - [20:20] -  SPDIF receiver's DPLL is locked
</lang>
#### SPDIF.SRCSL
<link=p.SPDIF.SRCSL>
#### spdif.str
<link=p.SPDIF.STR>
#### p.SAI1.TCR2
<lang=dft>
 (rw)  [1;33m0x40384010[0m (0x40384000 + 0x0010)
SAI Transmit Configuration 2 Register
 (rw) (08)  [0;32mDIV[0m  - [07:00] -  Bit Clock Divide
 (rw) (01)  [0;32mBCD[0m  - [24:24] -  Bit Clock Direction
      0 - BCD_0 :
         Bit clock is generated externally in Slave mode.
      0x1 - BCD_1 :
         Bit clock is generated internally in Master mode.
 (rw) (01)  [0;32mBCP[0m  - [25:25] -  Bit Clock Polarity
      0 - BCP_0 :
         Bit clock is active high with drive outputs on rising edge and sample i
         nputs on falling edge.
      0x1 - BCP_1 :
         Bit clock is active low with drive outputs on falling edge and sample i
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
         Synchronous with receiver.
</lang>
#### SAI1.TDR[2]
<link=p.SAI1.TDR[2]>
#### p.sai1.rcr4
<link=p.SAI1.RCR4>
#### p.sai1.rdr[0]
<link=p.SAI1.RDR[0]>
#### sai1.rfr[1]
<link=p.SAI1.RFR[1]>
#### sai2.verid
<link=p.SAI2.VERID>
#### p.SAI2.TCR3
<lang=dft>
 (rw)  [1;33m0x40388014[0m (0x40388000 + 0x0014)
SAI Transmit Configuration 3 Register
 (rw) (05)  [0;32mWDFL[0m  - [04:00] -  Word Flag Configuration
 (rw) (04)  [0;32mTCE[0m  - [19:16] -  Transmit Channel Enable
 (rw) (04)  [0;32mCFR[0m  - [27:24] -  Channel FIFO Reset
</lang>
#### sai2.tfr[0]
<link=p.SAI2.TFR[0]>
#### p.sai2.tfr[2]
<link=p.SAI2.TFR[2]>
#### sai2.rdr[3]
<link=p.SAI2.RDR[3]>
#### p.sai2.rfr[1]
<link=p.SAI2.RFR[1]>
#### sai3.tcr3
<link=p.SAI3.TCR3>
#### p.SAI3.TCR4
<lang=dft>
 (rw)  [1;33m0x4038c018[0m (0x4038c000 + 0x0018)
SAI Transmit Configuration 4 Register
 (rw) (01)  [0;32mFSD[0m  - [00:00] -  Frame Sync Direction
      0 - FSD_0 :
         Frame sync is generated externally in Slave mode.
      0x1 - FSD_1 :
         Frame sync is generated internally in Master mode.
 (rw) (01)  [0;32mFSP[0m  - [01:01] -  Frame Sync Polarity
      0 - FSP_0 :
         Frame sync is active high.
      0x1 - FSP_1 :
         Frame sync is active low.
 (rw) (01)  [0;32mONDEM[0m  - [02:02] -  On Demand Mode
      0 - ONDEM_0 :
         Internal frame sync is generated continuously.
      0x1 - ONDEM_1 :
         Internal frame sync is generated when the FIFO warning flag is clear.
 (rw) (01)  [0;32mFSE[0m  - [03:03] -  Frame Sync Early
      0 - FSE_0 :
         Frame sync asserts with the first bit of the frame.
      0x1 - FSE_1 :
         Frame sync asserts one bit before the first bit of the frame.
 (rw) (01)  [0;32mMF[0m  - [04:04] -  MSB First
      0 - MF_0 :
         LSB is transmitted first.
      0x1 - MF_1 :
         MSB is transmitted first.
 (rw) (01)  [0;32mCHMOD[0m  - [05:05] -  Channel Mode
      0 - CHMOD_0 :
         TDM mode, transmit data pins are tri-stated when slots are masked or ch
         annels are disabled.
      0x1 - CHMOD_1 :
         Output mode, transmit data pins are never tri-stated and will output ze
         ro when slots are masked or channels are disabled.
 (rw) (05)  [0;32mSYWD[0m  - [12:08] -  Sync Width
 (rw) (05)  [0;32mFRSZ[0m  - [20:16] -  Frame size
 (rw) (02)  [0;32mFPACK[0m  - [25:24] -  FIFO Packing Mode
      0 - FPACK_0 :
         FIFO packing is disabled
      0x2 - FPACK_2 :
         8-bit FIFO packing is enabled
      0x3 - FPACK_3 :
         16-bit FIFO packing is enabled
 (rw) (02)  [0;32mFCOMB[0m  - [27:26] -  FIFO Combine Mode
      0 - FCOMB_0 :
         FIFO combine mode disabled.
      0x1 - FCOMB_1 :
         FIFO combine mode enabled on FIFO reads (from transmit shift registers)
         .
      0x2 - FCOMB_2 :
         FIFO combine mode enabled on FIFO writes (by software).
      0x3 - FCOMB_3 :
         FIFO combine mode enabled on FIFO reads (from transmit shift registers)
          and writes (by software).
 (rw) (01)  [0;32mFCONT[0m  - [28:28] -  FIFO Continue on Error
      0 - FCONT_0 :
         On FIFO error, the SAI will continue from the start of the next frame a
         fter the FIFO error flag has been cleared.
      0x1 - FCONT_1 :
         On FIFO error, the SAI will continue from the same word that caused the
          FIFO error to set after the FIFO warning flag has been cleared.
</lang>
#### SAI3.TDR[0]
<link=p.SAI3.TDR[0]>
#### p.SAI3.TFR[2]
<lang=dft>
 (ro)  [1;33m0x4038c048[0m (0x4038c000 + 0x0048)
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
#### p.sai3.rdr[2]
<link=p.SAI3.RDR[2]>
#### SAI3.RFR[2]
<link=p.SAI3.RFR[2]>
#### sai3.rmr
<link=p.SAI3.RMR>
#### LPSPI1.VERID
<link=p.LPSPI1.VERID>
#### lpspi1.cfgr1
<link=p.LPSPI1.CFGR1>
#### p.LPSPI1.DMR0
<lang=dft>
 (rw)  [1;33m0x40394030[0m (0x40394000 + 0x0030)
Data Match Register 0
 (rw) (32)  [0;32mMATCH0[0m  - [31:00] -  Match 0 Value
</lang>
#### lpspi1.rsr
<link=p.LPSPI1.RSR>
#### p.LPSPI2
<lang=dft>
base: 0x40398000
CCR             CFGR0           CFGR1           CR              
DER             DMR0            DMR1            FCR             
FSR             IER             PARAM           RDR             
RSR             SR              TCR             TDR             
VERID           
输入 p.LPSPI2.{reg_name} 以查看寄存器的详细信息
type p.LPSPI2.{reg_name} to check details of registers
</lang>
#### lpspi3.param
<link=p.LPSPI3.PARAM>
#### p.lpspi3.sr
<link=p.LPSPI3.SR>
#### lpspi3.ier
<link=p.LPSPI3.IER>
#### p.lpspi3.cfgr1
<link=p.LPSPI3.CFGR1>
#### lpspi3.ccr
<link=p.LPSPI3.CCR>
#### p.lpspi3.fsr
<link=p.LPSPI3.FSR>
#### p.lpspi4.dmr0
<link=p.LPSPI4.DMR0>
#### p.LPSPI4.FSR
<lang=dft>
 (ro)  [1;33m0x403a005c[0m (0x403a0000 + 0x005c)
FIFO Status Register
 (ro) (05)  [0;32mTXCOUNT[0m  - [04:00] -  Transmit FIFO Count
 (ro) (05)  [0;32mRXCOUNT[0m  - [20:16] -  Receive FIFO Count
</lang>
#### LPSPI4.FSR
<link=p.LPSPI4.FSR>
#### p.lpspi4.rsr
<link=p.LPSPI4.RSR>
#### LPSPI4.RDR
<link=p.LPSPI4.RDR>
#### ADC_ETC.DONE0_1_IRQ
<link=p.ADC_ETC.DONE0_1_IRQ>
#### p.adc_etc.trig1_chain_3_2
<link=p.ADC_ETC.TRIG1_CHAIN_3_2>
#### ADC_ETC.TRIG1_RESULT_3_2
<link=p.ADC_ETC.TRIG1_RESULT_3_2>
#### p.ADC_ETC.TRIG1_RESULT_5_4
<lang=dft>
 (ro)  [1;33m0x403b0058[0m (0x403b0000 + 0x0058)
ETC_TRIG Result Data 5/4 Register
 (ro) (12)  [0;32mDATA4[0m  - [11:00] -  Result DATA4
 (ro) (12)  [0;32mDATA5[0m  - [27:16] -  Result DATA5
</lang>
#### ADC_ETC.TRIG1_RESULT_5_4
<link=p.ADC_ETC.TRIG1_RESULT_5_4>
#### p.ADC_ETC.TRIG1_RESULT_7_6
<lang=dft>
 (ro)  [1;33m0x403b005c[0m (0x403b0000 + 0x005c)
ETC_TRIG Result Data 7/6 Register
 (ro) (12)  [0;32mDATA6[0m  - [11:00] -  Result DATA6
 (ro) (12)  [0;32mDATA7[0m  - [27:16] -  Result DATA7
</lang>
#### adc_etc.trig2_chain_5_4
<link=p.ADC_ETC.TRIG2_CHAIN_5_4>
#### adc_etc.trig2_chain_7_6
<link=p.ADC_ETC.TRIG2_CHAIN_7_6>
#### ADC_ETC.TRIG2_RESULT_5_4
<link=p.ADC_ETC.TRIG2_RESULT_5_4>
#### ADC_ETC.TRIG2_RESULT_7_6
<link=p.ADC_ETC.TRIG2_RESULT_7_6>
#### p.adc_etc.trig3_chain_3_2
<link=p.ADC_ETC.TRIG3_CHAIN_3_2>
#### p.adc_etc.trig3_chain_5_4
<link=p.ADC_ETC.TRIG3_CHAIN_5_4>
#### ADC_ETC.TRIG3_CHAIN_7_6
<link=p.ADC_ETC.TRIG3_CHAIN_7_6>
#### adc_etc.trig3_result_5_4
<link=p.ADC_ETC.TRIG3_RESULT_5_4>
#### adc_etc.trig3_result_7_6
<link=p.ADC_ETC.TRIG3_RESULT_7_6>
#### p.adc_etc.trig4_result_1_0
<link=p.ADC_ETC.TRIG4_RESULT_1_0>
#### adc_etc.trig4_result_5_4
<link=p.ADC_ETC.TRIG4_RESULT_5_4>
#### p.adc_etc.trig4_result_7_6
<link=p.ADC_ETC.TRIG4_RESULT_7_6>
#### adc_etc.trig4_result_7_6
<link=p.ADC_ETC.TRIG4_RESULT_7_6>
#### p.adc_etc.trig5_ctrl
<link=p.ADC_ETC.TRIG5_CTRL>
#### p.ADC_ETC.TRIG6_CTRL
<lang=dft>
 (rw)  [1;33m0x403b0100[0m (0x403b0000 + 0x0100)
ETC_TRIG6 Control Register
 (rw) (01)  [0;32mSW_TRIG[0m  - [00:00] -  Software write 1 as the TRIGGER. This register is self-clearing.
 (rw) (01)  [0;32mTRIG_MODE[0m  - [04:04] -  TRIG mode register. 1'b0: hardware trigger. 1'b1: software trigger.
 (rw) (03)  [0;32mTRIG_CHAIN[0m  - [10:08] -  TRIG chain length to the ADC. 0: Trig length is 1; ... 7: Trig length is 8;
 (rw) (03)  [0;32mTRIG_PRIORITY[0m  - [14:12] -  External trigger priority, 7 is highest, 0 is lowest .
 (rw) (01)  [0;32mSYNC_MODE[0m  - [16:16] -  TRIG mode control . 1'b0: Disable sync mode; 1'b1: Enable sync mode
</lang>
#### ADC_ETC.TRIG7_CHAIN_5_4
<link=p.ADC_ETC.TRIG7_CHAIN_5_4>
#### p.aoi1.bfcrt012
<link=p.AOI1.BFCRT012>
#### AOI1.BFCRT012
<link=p.AOI1.BFCRT012>
#### p.aoi2
<link=p.AOI2>
#### p.AOI2.BFCRT012
<lang=dft>
 (rw)  [1;33m0x403b8008[0m (0x403b8000 + 0x0008)
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
#### p.aoi2.bfcrt232
<link=p.AOI2.BFCRT232>
#### aoi2.bfcrt233
<link=p.AOI2.BFCRT233>
#### p.xbara1.sel6
<link=p.XBARA1.SEL6>
#### xbara1.sel6
<link=p.XBARA1.SEL6>
#### XBARA1.SEL7
<link=p.XBARA1.SEL7>
#### XBARA1.SEL16
<link=p.XBARA1.SEL16>
#### p.xbara1.sel32
<link=p.XBARA1.SEL32>
#### xbara1.sel38
<link=p.XBARA1.SEL38>
#### XBARA1.SEL39
<link=p.XBARA1.SEL39>
#### p.XBARA1.SEL44
<lang=dft>
 (rw)  [1;33m0x403bc058[0m (0x403bc000 + 0x0058)
Crossbar A Select Register 44
 (rw) (07)  [0;32mSEL88[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT88 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL89[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT89 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL44
<link=p.XBARA1.SEL44>
#### xbara1.sel45
<link=p.XBARA1.SEL45>
#### p.xbara1.sel47
<link=p.XBARA1.SEL47>
#### p.xbara1.sel50
<link=p.XBARA1.SEL50>
#### p.XBARA1.SEL57
<lang=dft>
 (rw)  [1;33m0x403bc072[0m (0x403bc000 + 0x0072)
Crossbar A Select Register 57
 (rw) (07)  [0;32mSEL114[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT114 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL115[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT115 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### p.xbara1.sel61
<link=p.XBARA1.SEL61>
#### p.XBARA1.SEL62
<lang=dft>
 (rw)  [1;33m0x403bc07c[0m (0x403bc000 + 0x007c)
Crossbar A Select Register 62
 (rw) (07)  [0;32mSEL124[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT124 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL125[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT125 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### XBARA1.SEL62
<link=p.XBARA1.SEL62>
#### xbara1.sel63
<link=p.XBARA1.SEL63>
#### p.XBARB2.SEL6
<lang=dft>
 (rw)  [1;33m0x403c000c[0m (0x403c0000 + 0x000c)
Crossbar B Select Register 6
 (rw) (06)  [0;32mSEL12[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT12 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (06)  [0;32mSEL13[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT13 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbarb3.sel4
<link=p.XBARB3.SEL4>
#### p.enc1.filt
<link=p.ENC1.FILT>
#### p.ENC1.POSD
<lang=dft>
 (rw)  [1;33m0x403c8006[0m (0x403c8000 + 0x0006)
Position Difference Counter Register
 (rw) (16)  [0;32mPOSD[0m  - [15:00] -  This read/write register contains the position change in value occurring betwee
 n each read of the position register
</lang>
#### ENC1.REV
<link=p.ENC1.REV>
#### p.ENC1.UPOS
<lang=dft>
 (rw)  [1;33m0x403c800e[0m (0x403c8000 + 0x000e)
Upper Position Counter Register
 (rw) (16)  [0;32mPOS[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the posi
 tion counter
</lang>
#### enc1.linit
<link=p.ENC1.LINIT>
#### p.ENC1.LMOD
<lang=dft>
 (rw)  [1;33m0x403c8022[0m (0x403c8000 + 0x0022)
Lower Modulus Register
 (rw) (16)  [0;32mMOD[0m  - [15:00] -  This read/write register contains the lower (least significant) half of the mod
 ulus register
</lang>
#### p.ENC1.UCOMP
<lang=dft>
 (rw)  [1;33m0x403c8024[0m (0x403c8000 + 0x0024)
Upper Position Compare Register
 (rw) (16)  [0;32mCOMP[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the posi
 tion compare register
</lang>
#### p.enc2.ctrl
<link=p.ENC2.CTRL>
#### p.ENC2.POSDH
<lang=dft>
 (ro)  [1;33m0x403cc008[0m (0x403cc000 + 0x0008)
Position Difference Hold Register
 (ro) (16)  [0;32mPOSDH[0m  - [15:00] -  This read-only register contains a snapshot of the value of the POSD register
</lang>
#### p.ENC2.LPOS
<lang=dft>
 (rw)  [1;33m0x403cc010[0m (0x403cc000 + 0x0010)
Lower Position Counter Register
 (rw) (16)  [0;32mPOS[0m  - [15:00] -  This read/write register contains the lower (least significant) half of the pos
 ition counter
</lang>
#### ENC2.UPOSH
<link=p.ENC2.UPOSH>
#### enc2.uinit
<link=p.ENC2.UINIT>
#### p.enc2.lcomp
<link=p.ENC2.LCOMP>
#### enc3.upos
<link=p.ENC3.UPOS>
#### p.ENC3.UINIT
<lang=dft>
 (rw)  [1;33m0x403d0016[0m (0x403d0000 + 0x0016)
Upper Initialization Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  This read/write register contains the value to be used to initialize the upper 
 half of the position counter (UPOS)
</lang>
#### p.ENC4
<lang=dft>
base: 0x403d4000
CTRL            CTRL2           FILT            IMR             
LCOMP           LINIT           LMOD            LPOS            
LPOSH           POSD            POSDH           REV             
REVH            TST             UCOMP           UINIT           
UMOD            UPOS            UPOSH           WTR             
输入 p.ENC4.{reg_name} 以查看寄存器的详细信息
type p.ENC4.{reg_name} to check details of registers
</lang>
#### p.enc4.wtr
<link=p.ENC4.WTR>
#### p.ENC4.TST
<lang=dft>
 (rw)  [1;33m0x403d401c[0m (0x403d4000 + 0x001c)
Test Register
 (rw) (08)  [0;32mTEST_COUNT[0m  - [07:00] -  These bits hold the number of quadrature advances to generate.
 (rw) (05)  [0;32mTEST_PERIOD[0m  - [12:08] -  These bits hold the period of quadrature phase in IPBus clock cycles.
 (rw) (01)  [0;32mQDN[0m  - [13:13] -  Quadrature Decoder Negative Signal
      0 - QDN_0 :
         Leaves quadrature decoder signal in a positive direction
      0x1 - QDN_1 :
         Generates a negative quadrature decoder signal
 (rw) (01)  [0;32mTCE[0m  - [14:14] -  Test Counter Enable
      0 - TCE_0 :
         Test count is not enabled
      0x1 - TCE_1 :
         Test count is enabled
 (rw) (01)  [0;32mTEN[0m  - [15:15] -  Test Mode Enable
      0 - TEN_0 :
         Test module is not enabled
      0x1 - TEN_1 :
         Test module is enabled
</lang>
#### enc4.ucomp
<link=p.ENC4.UCOMP>
#### p.pwm1.sm0val1
<link=p.PWM1.SM0VAL1>
#### PWM1.SM0FRACVAL4
<link=p.PWM1.SM0FRACVAL4>
#### PWM1.SM0VAL4
<link=p.PWM1.SM0VAL4>
#### p.PWM1.SM0FRCTRL
<lang=dft>
 (rw)  [1;33m0x403dc020[0m (0x403dc000 + 0x0020)
Fractional Control Register
 (rw) (01)  [0;32mFRAC1_EN[0m  - [01:01] -  Fractional Cycle PWM Period Enable
      0 - FRAC1_EN_0 :
         Disable fractional cycle length for the PWM period.
      0x1 - FRAC1_EN_1 :
         Enable fractional cycle length for the PWM period.
 (rw) (01)  [0;32mFRAC23_EN[0m  - [02:02] -  Fractional Cycle Placement Enable for PWM_A
      0 - FRAC23_EN_0 :
         Disable fractional cycle placement for PWM_A.
      0x1 - FRAC23_EN_1 :
         Enable fractional cycle placement for PWM_A.
 (rw) (01)  [0;32mFRAC45_EN[0m  - [04:04] -  Fractional Cycle Placement Enable for PWM_B
      0 - FRAC45_EN_0 :
         Disable fractional cycle placement for PWM_B.
      0x1 - FRAC45_EN_1 :
         Enable fractional cycle placement for PWM_B.
 (rw) (01)  [0;32mFRAC_PU[0m  - [08:08] -  Fractional Delay Circuit Power Up
      0 - FRAC_PU_0 :
         Turn off fractional delay logic.
      0x1 - FRAC_PU_1 :
         Power up fractional delay logic.
 (ro) (01)  [0;32mTEST[0m  - [15:15] -  Test Status Bit
</lang>
#### p.PWM1.SM0TCTRL
<lang=dft>
 (rw)  [1;33m0x403dc02a[0m (0x403dc000 + 0x002a)
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
#### p.pwm1.sm0dismap1
<link=p.PWM1.SM0DISMAP1>
#### p.pwm1.sm0dtcnt0
<link=p.PWM1.SM0DTCNT0>
#### pwm1.sm0dtcnt1
<link=p.PWM1.SM0DTCNT1>
#### pwm1.sm0cval5
<link=p.PWM1.SM0CVAL5>
#### p.pwm1.sm1ctrl
<link=p.PWM1.SM1CTRL>
#### p.pwm1.sm1val0
<link=p.PWM1.SM1VAL0>
#### PWM1.SM1FRACVAL1
<link=p.PWM1.SM1FRACVAL1>
#### PWM1.SM1DMAEN
<link=p.PWM1.SM1DMAEN>
#### p.pwm1.sm1dtcnt1
<link=p.PWM1.SM1DTCNT1>
#### PWM1.SM1CAPTCTRLB
<link=p.PWM1.SM1CAPTCTRLB>
#### PWM1.SM1CVAL2CYC
<link=p.PWM1.SM1CVAL2CYC>
#### p.PWM1.SM1CVAL4
<lang=dft>
 (ro)  [1;33m0x403dc0b0[0m (0x403dc000 + 0x00b0)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### pwm1.sm1cval5
<link=p.PWM1.SM1CVAL5>
#### PWM1.SM2CNT
<link=p.PWM1.SM2CNT>
#### p.PWM1.SM2INIT
<lang=dft>
 (rw)  [1;33m0x403dc0c2[0m (0x403dc000 + 0x00c2)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### p.PWM1.SM2VAL5
<lang=dft>
 (rw)  [1;33m0x403dc0de[0m (0x403dc000 + 0x00de)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### p.PWM1.SM2INTEN
<lang=dft>
 (rw)  [1;33m0x403dc0e6[0m (0x403dc000 + 0x00e6)
Interrupt Enable Register
 (rw) (06)  [0;32mCMPIE[0m  - [05:00] -  Compare Interrupt Enables
      0 - CMPIE_0 :
         The corresponding STS[CMPF] bit will not cause an interrupt request.
      0x1 - CMPIE_1 :
         The corresponding STS[CMPF] bit will cause an interrupt request.
 (rw) (01)  [0;32mCX0IE[0m  - [06:06] -  Capture X 0 Interrupt Enable
      0 - CX0IE_0 :
         Interrupt request disabled for STS[CFX0].
      0x1 - CX0IE_1 :
         Interrupt request enabled for STS[CFX0].
 (rw) (01)  [0;32mCX1IE[0m  - [07:07] -  Capture X 1 Interrupt Enable
      0 - CX1IE_0 :
         Interrupt request disabled for STS[CFX1].
      0x1 - CX1IE_1 :
         Interrupt request enabled for STS[CFX1].
 (rw) (01)  [0;32mCB0IE[0m  - [08:08] -  Capture B 0 Interrupt Enable
      0 - CB0IE_0 :
         Interrupt request disabled for STS[CFB0].
      0x1 - CB0IE_1 :
         Interrupt request enabled for STS[CFB0].
 (rw) (01)  [0;32mCB1IE[0m  - [09:09] -  Capture B 1 Interrupt Enable
      0 - CB1IE_0 :
         Interrupt request disabled for STS[CFB1].
      0x1 - CB1IE_1 :
         Interrupt request enabled for STS[CFB1].
 (rw) (01)  [0;32mCA0IE[0m  - [10:10] -  Capture A 0 Interrupt Enable
      0 - CA0IE_0 :
         Interrupt request disabled for STS[CFA0].
      0x1 - CA0IE_1 :
         Interrupt request enabled for STS[CFA0].
 (rw) (01)  [0;32mCA1IE[0m  - [11:11] -  Capture A 1 Interrupt Enable
      0 - CA1IE_0 :
         Interrupt request disabled for STS[CFA1].
      0x1 - CA1IE_1 :
         Interrupt request enabled for STS[CFA1].
 (rw) (01)  [0;32mRIE[0m  - [12:12] -  Reload Interrupt Enable
      0 - RIE_0 :
         STS[RF] CPU interrupt requests disabled
      0x1 - RIE_1 :
         STS[RF] CPU interrupt requests enabled
 (rw) (01)  [0;32mREIE[0m  - [13:13] -  Reload Error Interrupt Enable
      0 - REIE_0 :
         STS[REF] CPU interrupt requests disabled
      0x1 - REIE_1 :
         STS[REF] CPU interrupt requests enabled
</lang>
#### p.pwm1.sm2dtcnt1
<link=p.PWM1.SM2DTCNT1>
#### p.PWM1.SM2CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403dc0f4[0m (0x403dc000 + 0x00f4)
Capture Control A Register
 (rw) (01)  [0;32mARMA[0m  - [00:00] -  Arm A
      0 - ARMA_0 :
         Input capture operation is disabled.
      0x1 - ARMA_1 :
         Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
 (rw) (01)  [0;32mONESHOTA[0m  - [01:01] -  One Shot Mode A
      0 - ONESHOTA_0 :
         Free running mode is selected. If both capture circuits are enabled, th
         en capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once 
         a capture occurs, capture circuit 0 is disarmed and capture circuit 1 i
         s armed. After capture circuit 1 performs a capture, it is disarmed and
          capture circuit 0 is re-armed. The process continues indefinitely.If o
         nly one of the capture circuits is enabled, then captures continue inde
         finitely on the enabled capture circuit.
      0x1 - ONESHOTA_1 :
         One shot mode is selected. If both capture circuits are enabled, then c
         apture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a ca
         pture occurs, capture circuit 0 is disarmed and capture circuit 1 is ar
         med. After capture circuit 1 performs a capture, it is disarmed and CAP
         TCTRLA[ARMA] is cleared. No further captures will be performed until CA
         PTCTRLA[ARMA] is set again.If only one of the capture circuits is enabl
         ed, then a single capture will occur on the enabled capture circuit and
          CAPTCTRLA[ARMA] is then cleared.
 (rw) (02)  [0;32mEDGA0[0m  - [03:02] -  Edge A 0
      0 - EDGA0_0 :
         Disabled
      0x1 - EDGA0_1 :
         Capture falling edges
      0x2 - EDGA0_2 :
         Capture rising edges
      0x3 - EDGA0_3 :
         Capture any edge
 (rw) (02)  [0;32mEDGA1[0m  - [05:04] -  Edge A 1
      0 - EDGA1_0 :
         Disabled
      0x1 - EDGA1_1 :
         Capture falling edges
      0x2 - EDGA1_2 :
         Capture rising edges
      0x3 - EDGA1_3 :
         Capture any edge
 (rw) (01)  [0;32mINP_SELA[0m  - [06:06] -  Input Select A
      0 - INP_SELA_0 :
         Raw PWM_A input signal selected as source.
      0x1 - INP_SELA_1 :
         Output of edge counter/compare selected as source. Note that when this 
         bitfield is set to 1, the internal edge counter is enabled and the risi
         ng and/or falling edges specified by the CAPTCTRLA[EDGA0] and CAPTCTRLA
         [EDGA1] fields are ignored. The software must still place a value other
          than 00 in either or both of the CAPTCTLRA[EDGA0] and/or CAPTCTRLA[EDG
         A1] fields in order to enable one or both of the capture registers.
 (rw) (01)  [0;32mEDGCNTA_EN[0m  - [07:07] -  Edge Counter A Enable
      0 - EDGCNTA_EN_0 :
         Edge counter disabled and held in reset
      0x1 - EDGCNTA_EN_1 :
         Edge counter enabled
 (rw) (02)  [0;32mCFAWM[0m  - [09:08] -  Capture A FIFOs Water Mark
 (ro) (03)  [0;32mCA0CNT[0m  - [12:10] -  Capture A0 FIFO Word Count
 (ro) (03)  [0;32mCA1CNT[0m  - [15:13] -  Capture A1 FIFO Word Count
</lang>
#### pwm1.sm2captctrlb
<link=p.PWM1.SM2CAPTCTRLB>
#### PWM1.SM2CAPTCOMPB
<link=p.PWM1.SM2CAPTCOMPB>
#### p.PWM1.SM2CVAL0
<lang=dft>
 (ro)  [1;33m0x403dc100[0m (0x403dc000 + 0x0100)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### PWM1.SM2CVAL5
<link=p.PWM1.SM2CVAL5>
#### p.pwm1.sm3ctrl2
<link=p.PWM1.SM3CTRL2>
#### PWM1.SM3CTRL
<link=p.PWM1.SM3CTRL>
#### pwm1.sm3fracval2
<link=p.PWM1.SM3FRACVAL2>
#### PWM1.SM3FRACVAL2
<link=p.PWM1.SM3FRACVAL2>
#### p.PWM1.SM3VAL3
<lang=dft>
 (rw)  [1;33m0x403dc136[0m (0x403dc000 + 0x0136)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### PWM1.SM3OCTRL
<link=p.PWM1.SM3OCTRL>
#### pwm1.sm3sts
<link=p.PWM1.SM3STS>
#### PWM1.SM3STS
<link=p.PWM1.SM3STS>
#### p.PWM1.SM3TCTRL
<lang=dft>
 (rw)  [1;33m0x403dc14a[0m (0x403dc000 + 0x014a)
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
#### p.pwm1.sm3dtcnt0
<link=p.PWM1.SM3DTCNT0>
#### pwm1.sm3dtcnt1
<link=p.PWM1.SM3DTCNT1>
#### pwm1.sm3captctrla
<link=p.PWM1.SM3CAPTCTRLA>
#### p.PWM1.SM3CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403dc162[0m (0x403dc000 + 0x0162)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### pwm1.sm3cval2
<link=p.PWM1.SM3CVAL2>
#### p.PWM1.SM3CVAL3
<lang=dft>
 (ro)  [1;33m0x403dc16c[0m (0x403dc000 + 0x016c)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### p.pwm1.sm3cval4
<link=p.PWM1.SM3CVAL4>
#### p.pwm1.outen
<link=p.PWM1.OUTEN>
#### p.PWM1.MCTRL
<lang=dft>
 (rw)  [1;33m0x403dc188[0m (0x403dc000 + 0x0188)
Master Control Register
 (rw) (04)  [0;32mLDOK[0m  - [03:00] -  Load Okay
      0 - LDOK_0 :
         Do not load new values.
      0x1 - LDOK_1 :
         Load prescaler, modulus, and PWM values of the corresponding submodule.
 (rw) (04)  [0;32mCLDOK[0m  - [07:04] -  Clear Load Okay
 (rw) (04)  [0;32mRUN[0m  - [11:08] -  Run
      0 - RUN_0 :
         PWM generator is disabled in the corresponding submodule.
      0x1 - RUN_1 :
         PWM generator is enabled in the corresponding submodule.
 (rw) (04)  [0;32mIPOL[0m  - [15:12] -  Current Polarity
      0 - IPOL_0 :
         PWM23 is used to generate complementary PWM pair in the corresponding s
         ubmodule.
      0x1 - IPOL_1 :
         PWM45 is used to generate complementary PWM pair in the corresponding s
         ubmodule.
</lang>
#### pwm1.mctrl2
<link=p.PWM1.MCTRL2>
#### PWM1.MCTRL2
<link=p.PWM1.MCTRL2>
#### PWM2.SM0FRACVAL1
<link=p.PWM2.SM0FRACVAL1>
#### pwm2.sm0val2
<link=p.PWM2.SM0VAL2>
#### p.PWM2.SM0VAL3
<lang=dft>
 (rw)  [1;33m0x403e0016[0m (0x403e0000 + 0x0016)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### p.pwm2.sm0frctrl
<link=p.PWM2.SM0FRCTRL>
#### p.PWM2.SM0TCTRL
<lang=dft>
 (rw)  [1;33m0x403e002a[0m (0x403e0000 + 0x002a)
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
#### p.PWM2.SM0CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403e0042[0m (0x403e0000 + 0x0042)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### pwm2.sm0cval2cyc
<link=p.PWM2.SM0CVAL2CYC>
#### p.PWM2.SM0CVAL3
<lang=dft>
 (ro)  [1;33m0x403e004c[0m (0x403e0000 + 0x004c)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### PWM2.SM0CVAL5
<link=p.PWM2.SM0CVAL5>
#### PWM2.SM0CVAL5CYC
<link=p.PWM2.SM0CVAL5CYC>
#### p.PWM2.SM1INIT
<lang=dft>
 (rw)  [1;33m0x403e0062[0m (0x403e0000 + 0x0062)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### pwm2.sm1ctrl
<link=p.PWM2.SM1CTRL>
#### pwm2.sm1fracval3
<link=p.PWM2.SM1FRACVAL3>
#### pwm2.sm1val3
<link=p.PWM2.SM1VAL3>
#### PWM2.SM1FRACVAL4
<link=p.PWM2.SM1FRACVAL4>
#### p.PWM2.SM1VAL5
<lang=dft>
 (rw)  [1;33m0x403e007e[0m (0x403e0000 + 0x007e)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### pwm2.sm1frctrl
<link=p.PWM2.SM1FRCTRL>
#### p.pwm2.sm1sts
<link=p.PWM2.SM1STS>
#### p.PWM2.SM1INTEN
<lang=dft>
 (rw)  [1;33m0x403e0086[0m (0x403e0000 + 0x0086)
Interrupt Enable Register
 (rw) (06)  [0;32mCMPIE[0m  - [05:00] -  Compare Interrupt Enables
      0 - CMPIE_0 :
         The corresponding STS[CMPF] bit will not cause an interrupt request.
      0x1 - CMPIE_1 :
         The corresponding STS[CMPF] bit will cause an interrupt request.
 (rw) (01)  [0;32mCX0IE[0m  - [06:06] -  Capture X 0 Interrupt Enable
      0 - CX0IE_0 :
         Interrupt request disabled for STS[CFX0].
      0x1 - CX0IE_1 :
         Interrupt request enabled for STS[CFX0].
 (rw) (01)  [0;32mCX1IE[0m  - [07:07] -  Capture X 1 Interrupt Enable
      0 - CX1IE_0 :
         Interrupt request disabled for STS[CFX1].
      0x1 - CX1IE_1 :
         Interrupt request enabled for STS[CFX1].
 (rw) (01)  [0;32mCB0IE[0m  - [08:08] -  Capture B 0 Interrupt Enable
      0 - CB0IE_0 :
         Interrupt request disabled for STS[CFB0].
      0x1 - CB0IE_1 :
         Interrupt request enabled for STS[CFB0].
 (rw) (01)  [0;32mCB1IE[0m  - [09:09] -  Capture B 1 Interrupt Enable
      0 - CB1IE_0 :
         Interrupt request disabled for STS[CFB1].
      0x1 - CB1IE_1 :
         Interrupt request enabled for STS[CFB1].
 (rw) (01)  [0;32mCA0IE[0m  - [10:10] -  Capture A 0 Interrupt Enable
      0 - CA0IE_0 :
         Interrupt request disabled for STS[CFA0].
      0x1 - CA0IE_1 :
         Interrupt request enabled for STS[CFA0].
 (rw) (01)  [0;32mCA1IE[0m  - [11:11] -  Capture A 1 Interrupt Enable
      0 - CA1IE_0 :
         Interrupt request disabled for STS[CFA1].
      0x1 - CA1IE_1 :
         Interrupt request enabled for STS[CFA1].
 (rw) (01)  [0;32mRIE[0m  - [12:12] -  Reload Interrupt Enable
      0 - RIE_0 :
         STS[RF] CPU interrupt requests disabled
      0x1 - RIE_1 :
         STS[RF] CPU interrupt requests enabled
 (rw) (01)  [0;32mREIE[0m  - [13:13] -  Reload Error Interrupt Enable
      0 - REIE_0 :
         STS[REF] CPU interrupt requests disabled
      0x1 - REIE_1 :
         STS[REF] CPU interrupt requests enabled
</lang>
#### pwm2.sm1tctrl
<link=p.PWM2.SM1TCTRL>
#### pwm2.sm1dismap1
<link=p.PWM2.SM1DISMAP1>
#### p.PWM2.SM1CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e0094[0m (0x403e0000 + 0x0094)
Capture Control A Register
 (rw) (01)  [0;32mARMA[0m  - [00:00] -  Arm A
      0 - ARMA_0 :
         Input capture operation is disabled.
      0x1 - ARMA_1 :
         Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
 (rw) (01)  [0;32mONESHOTA[0m  - [01:01] -  One Shot Mode A
      0 - ONESHOTA_0 :
         Free running mode is selected. If both capture circuits are enabled, th
         en capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once 
         a capture occurs, capture circuit 0 is disarmed and capture circuit 1 i
         s armed. After capture circuit 1 performs a capture, it is disarmed and
          capture circuit 0 is re-armed. The process continues indefinitely.If o
         nly one of the capture circuits is enabled, then captures continue inde
         finitely on the enabled capture circuit.
      0x1 - ONESHOTA_1 :
         One shot mode is selected. If both capture circuits are enabled, then c
         apture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a ca
         pture occurs, capture circuit 0 is disarmed and capture circuit 1 is ar
         med. After capture circuit 1 performs a capture, it is disarmed and CAP
         TCTRLA[ARMA] is cleared. No further captures will be performed until CA
         PTCTRLA[ARMA] is set again.If only one of the capture circuits is enabl
         ed, then a single capture will occur on the enabled capture circuit and
          CAPTCTRLA[ARMA] is then cleared.
 (rw) (02)  [0;32mEDGA0[0m  - [03:02] -  Edge A 0
      0 - EDGA0_0 :
         Disabled
      0x1 - EDGA0_1 :
         Capture falling edges
      0x2 - EDGA0_2 :
         Capture rising edges
      0x3 - EDGA0_3 :
         Capture any edge
 (rw) (02)  [0;32mEDGA1[0m  - [05:04] -  Edge A 1
      0 - EDGA1_0 :
         Disabled
      0x1 - EDGA1_1 :
         Capture falling edges
      0x2 - EDGA1_2 :
         Capture rising edges
      0x3 - EDGA1_3 :
         Capture any edge
 (rw) (01)  [0;32mINP_SELA[0m  - [06:06] -  Input Select A
      0 - INP_SELA_0 :
         Raw PWM_A input signal selected as source.
      0x1 - INP_SELA_1 :
         Output of edge counter/compare selected as source. Note that when this 
         bitfield is set to 1, the internal edge counter is enabled and the risi
         ng and/or falling edges specified by the CAPTCTRLA[EDGA0] and CAPTCTRLA
         [EDGA1] fields are ignored. The software must still place a value other
          than 00 in either or both of the CAPTCTLRA[EDGA0] and/or CAPTCTRLA[EDG
         A1] fields in order to enable one or both of the capture registers.
 (rw) (01)  [0;32mEDGCNTA_EN[0m  - [07:07] -  Edge Counter A Enable
      0 - EDGCNTA_EN_0 :
         Edge counter disabled and held in reset
      0x1 - EDGCNTA_EN_1 :
         Edge counter enabled
 (rw) (02)  [0;32mCFAWM[0m  - [09:08] -  Capture A FIFOs Water Mark
 (ro) (03)  [0;32mCA0CNT[0m  - [12:10] -  Capture A0 FIFO Word Count
 (ro) (03)  [0;32mCA1CNT[0m  - [15:13] -  Capture A1 FIFO Word Count
</lang>
#### PWM2.SM1CAPTCOMPA
<link=p.PWM2.SM1CAPTCOMPA>
#### p.PWM2.SM1CVAL0
<lang=dft>
 (ro)  [1;33m0x403e00a0[0m (0x403e0000 + 0x00a0)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### pwm2.sm1cval1cyc
<link=p.PWM2.SM1CVAL1CYC>
#### p.pwm2.sm1cval5cyc
<link=p.PWM2.SM1CVAL5CYC>
#### p.pwm2.sm2fracval4
<link=p.PWM2.SM2FRACVAL4>
#### pwm2.sm2fracval4
<link=p.PWM2.SM2FRACVAL4>
#### p.pwm2.sm2val5
<link=p.PWM2.SM2VAL5>
#### PWM2.SM2VAL5
<link=p.PWM2.SM2VAL5>
#### PWM2.SM2CVAL0CYC
<link=p.PWM2.SM2CVAL0CYC>
#### p.pwm2.sm2cval1
<link=p.PWM2.SM2CVAL1>
#### pwm2.sm2cval1
<link=p.PWM2.SM2CVAL1>
#### PWM2.SM2CVAL3CYC
<link=p.PWM2.SM2CVAL3CYC>
#### p.PWM2.SM2CVAL4
<lang=dft>
 (ro)  [1;33m0x403e0110[0m (0x403e0000 + 0x0110)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### pwm2.sm3fracval1
<link=p.PWM2.SM3FRACVAL1>
#### p.pwm2.sm3val4
<link=p.PWM2.SM3VAL4>
#### PWM2.SM3FRACVAL5
<link=p.PWM2.SM3FRACVAL5>
#### PWM2.SM3VAL5
<link=p.PWM2.SM3VAL5>
#### p.PWM2.SM3FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e0140[0m (0x403e0000 + 0x0140)
Fractional Control Register
 (rw) (01)  [0;32mFRAC1_EN[0m  - [01:01] -  Fractional Cycle PWM Period Enable
      0 - FRAC1_EN_0 :
         Disable fractional cycle length for the PWM period.
      0x1 - FRAC1_EN_1 :
         Enable fractional cycle length for the PWM period.
 (rw) (01)  [0;32mFRAC23_EN[0m  - [02:02] -  Fractional Cycle Placement Enable for PWM_A
      0 - FRAC23_EN_0 :
         Disable fractional cycle placement for PWM_A.
      0x1 - FRAC23_EN_1 :
         Enable fractional cycle placement for PWM_A.
 (rw) (01)  [0;32mFRAC45_EN[0m  - [04:04] -  Fractional Cycle Placement Enable for PWM_B
      0 - FRAC45_EN_0 :
         Disable fractional cycle placement for PWM_B.
      0x1 - FRAC45_EN_1 :
         Enable fractional cycle placement for PWM_B.
 (rw) (01)  [0;32mFRAC_PU[0m  - [08:08] -  Fractional Delay Circuit Power Up
      0 - FRAC_PU_0 :
         Turn off fractional delay logic.
      0x1 - FRAC_PU_1 :
         Power up fractional delay logic.
 (ro) (01)  [0;32mTEST[0m  - [15:15] -  Test Status Bit
</lang>
#### p.PWM2.SM3TCTRL
<lang=dft>
 (rw)  [1;33m0x403e014a[0m (0x403e0000 + 0x014a)
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
#### p.pwm2.sm3cval0cyc
<link=p.PWM2.SM3CVAL0CYC>
#### p.pwm2.sm3cval1
<link=p.PWM2.SM3CVAL1>
#### p.pwm2.mctrl
<link=p.PWM2.MCTRL>
#### p.PWM3.SM0INIT
<lang=dft>
 (rw)  [1;33m0x403e4002[0m (0x403e4000 + 0x0002)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### PWM3.SM0FRACVAL4
<link=p.PWM3.SM0FRACVAL4>
#### p.PWM3.SM0VAL5
<lang=dft>
 (rw)  [1;33m0x403e401e[0m (0x403e4000 + 0x001e)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### p.PWM3.SM0INTEN
<lang=dft>
 (rw)  [1;33m0x403e4026[0m (0x403e4000 + 0x0026)
Interrupt Enable Register
 (rw) (06)  [0;32mCMPIE[0m  - [05:00] -  Compare Interrupt Enables
      0 - CMPIE_0 :
         The corresponding STS[CMPF] bit will not cause an interrupt request.
      0x1 - CMPIE_1 :
         The corresponding STS[CMPF] bit will cause an interrupt request.
 (rw) (01)  [0;32mCX0IE[0m  - [06:06] -  Capture X 0 Interrupt Enable
      0 - CX0IE_0 :
         Interrupt request disabled for STS[CFX0].
      0x1 - CX0IE_1 :
         Interrupt request enabled for STS[CFX0].
 (rw) (01)  [0;32mCX1IE[0m  - [07:07] -  Capture X 1 Interrupt Enable
      0 - CX1IE_0 :
         Interrupt request disabled for STS[CFX1].
      0x1 - CX1IE_1 :
         Interrupt request enabled for STS[CFX1].
 (rw) (01)  [0;32mCB0IE[0m  - [08:08] -  Capture B 0 Interrupt Enable
      0 - CB0IE_0 :
         Interrupt request disabled for STS[CFB0].
      0x1 - CB0IE_1 :
         Interrupt request enabled for STS[CFB0].
 (rw) (01)  [0;32mCB1IE[0m  - [09:09] -  Capture B 1 Interrupt Enable
      0 - CB1IE_0 :
         Interrupt request disabled for STS[CFB1].
      0x1 - CB1IE_1 :
         Interrupt request enabled for STS[CFB1].
 (rw) (01)  [0;32mCA0IE[0m  - [10:10] -  Capture A 0 Interrupt Enable
      0 - CA0IE_0 :
         Interrupt request disabled for STS[CFA0].
      0x1 - CA0IE_1 :
         Interrupt request enabled for STS[CFA0].
 (rw) (01)  [0;32mCA1IE[0m  - [11:11] -  Capture A 1 Interrupt Enable
      0 - CA1IE_0 :
         Interrupt request disabled for STS[CFA1].
      0x1 - CA1IE_1 :
         Interrupt request enabled for STS[CFA1].
 (rw) (01)  [0;32mRIE[0m  - [12:12] -  Reload Interrupt Enable
      0 - RIE_0 :
         STS[RF] CPU interrupt requests disabled
      0x1 - RIE_1 :
         STS[RF] CPU interrupt requests enabled
 (rw) (01)  [0;32mREIE[0m  - [13:13] -  Reload Error Interrupt Enable
      0 - REIE_0 :
         STS[REF] CPU interrupt requests disabled
      0x1 - REIE_1 :
         STS[REF] CPU interrupt requests enabled
</lang>
#### pwm3.sm0dtcnt0
<link=p.PWM3.SM0DTCNT0>
#### p.pwm3.sm0dtcnt1
<link=p.PWM3.SM0DTCNT1>
#### p.PWM3.SM0CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e4034[0m (0x403e4000 + 0x0034)
Capture Control A Register
 (rw) (01)  [0;32mARMA[0m  - [00:00] -  Arm A
      0 - ARMA_0 :
         Input capture operation is disabled.
      0x1 - ARMA_1 :
         Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
 (rw) (01)  [0;32mONESHOTA[0m  - [01:01] -  One Shot Mode A
      0 - ONESHOTA_0 :
         Free running mode is selected. If both capture circuits are enabled, th
         en capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once 
         a capture occurs, capture circuit 0 is disarmed and capture circuit 1 i
         s armed. After capture circuit 1 performs a capture, it is disarmed and
          capture circuit 0 is re-armed. The process continues indefinitely.If o
         nly one of the capture circuits is enabled, then captures continue inde
         finitely on the enabled capture circuit.
      0x1 - ONESHOTA_1 :
         One shot mode is selected. If both capture circuits are enabled, then c
         apture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a ca
         pture occurs, capture circuit 0 is disarmed and capture circuit 1 is ar
         med. After capture circuit 1 performs a capture, it is disarmed and CAP
         TCTRLA[ARMA] is cleared. No further captures will be performed until CA
         PTCTRLA[ARMA] is set again.If only one of the capture circuits is enabl
         ed, then a single capture will occur on the enabled capture circuit and
          CAPTCTRLA[ARMA] is then cleared.
 (rw) (02)  [0;32mEDGA0[0m  - [03:02] -  Edge A 0
      0 - EDGA0_0 :
         Disabled
      0x1 - EDGA0_1 :
         Capture falling edges
      0x2 - EDGA0_2 :
         Capture rising edges
      0x3 - EDGA0_3 :
         Capture any edge
 (rw) (02)  [0;32mEDGA1[0m  - [05:04] -  Edge A 1
      0 - EDGA1_0 :
         Disabled
      0x1 - EDGA1_1 :
         Capture falling edges
      0x2 - EDGA1_2 :
         Capture rising edges
      0x3 - EDGA1_3 :
         Capture any edge
 (rw) (01)  [0;32mINP_SELA[0m  - [06:06] -  Input Select A
      0 - INP_SELA_0 :
         Raw PWM_A input signal selected as source.
      0x1 - INP_SELA_1 :
         Output of edge counter/compare selected as source. Note that when this 
         bitfield is set to 1, the internal edge counter is enabled and the risi
         ng and/or falling edges specified by the CAPTCTRLA[EDGA0] and CAPTCTRLA
         [EDGA1] fields are ignored. The software must still place a value other
          than 00 in either or both of the CAPTCTLRA[EDGA0] and/or CAPTCTRLA[EDG
         A1] fields in order to enable one or both of the capture registers.
 (rw) (01)  [0;32mEDGCNTA_EN[0m  - [07:07] -  Edge Counter A Enable
      0 - EDGCNTA_EN_0 :
         Edge counter disabled and held in reset
      0x1 - EDGCNTA_EN_1 :
         Edge counter enabled
 (rw) (02)  [0;32mCFAWM[0m  - [09:08] -  Capture A FIFOs Water Mark
 (ro) (03)  [0;32mCA0CNT[0m  - [12:10] -  Capture A0 FIFO Word Count
 (ro) (03)  [0;32mCA1CNT[0m  - [15:13] -  Capture A1 FIFO Word Count
</lang>
#### pwm3.sm0captctrla
<link=p.PWM3.SM0CAPTCTRLA>
#### PWM3.SM0CAPTCOMPA
<link=p.PWM3.SM0CAPTCOMPA>
#### p.PWM3.SM0CVAL0
<lang=dft>
 (ro)  [1;33m0x403e4040[0m (0x403e4000 + 0x0040)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### p.pwm3.sm1ctrl2
<link=p.PWM3.SM1CTRL2>
#### pwm3.sm1ctrl2
<link=p.PWM3.SM1CTRL2>
#### pwm3.sm1fracval1
<link=p.PWM3.SM1FRACVAL1>
#### PWM3.SM1FRACVAL1
<link=p.PWM3.SM1FRACVAL1>
#### p.PWM3.SM1VAL3
<lang=dft>
 (rw)  [1;33m0x403e4076[0m (0x403e4000 + 0x0076)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### p.PWM3.SM1TCTRL
<lang=dft>
 (rw)  [1;33m0x403e408a[0m (0x403e4000 + 0x008a)
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
#### p.pwm3.sm1dtcnt0
<link=p.PWM3.SM1DTCNT0>
#### pwm3.sm1dtcnt0
<link=p.PWM3.SM1DTCNT0>
#### p.PWM3.SM1CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403e40a2[0m (0x403e4000 + 0x00a2)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### p.PWM3.SM1CVAL3
<lang=dft>
 (ro)  [1;33m0x403e40ac[0m (0x403e4000 + 0x00ac)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### p.pwm3.sm1cval4
<link=p.PWM3.SM1CVAL4>
#### PWM3.SM1CVAL5
<link=p.PWM3.SM1CVAL5>
#### PWM3.SM1CVAL5CYC
<link=p.PWM3.SM1CVAL5CYC>
#### p.pwm3.sm2val1
<link=p.PWM3.SM2VAL1>
#### PWM3.SM2FRACVAL5
<link=p.PWM3.SM2FRACVAL5>
#### PWM3.SM2VAL5
<link=p.PWM3.SM2VAL5>
#### p.PWM3.SM2FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e40e0[0m (0x403e4000 + 0x00e0)
Fractional Control Register
 (rw) (01)  [0;32mFRAC1_EN[0m  - [01:01] -  Fractional Cycle PWM Period Enable
      0 - FRAC1_EN_0 :
         Disable fractional cycle length for the PWM period.
      0x1 - FRAC1_EN_1 :
         Enable fractional cycle length for the PWM period.
 (rw) (01)  [0;32mFRAC23_EN[0m  - [02:02] -  Fractional Cycle Placement Enable for PWM_A
      0 - FRAC23_EN_0 :
         Disable fractional cycle placement for PWM_A.
      0x1 - FRAC23_EN_1 :
         Enable fractional cycle placement for PWM_A.
 (rw) (01)  [0;32mFRAC45_EN[0m  - [04:04] -  Fractional Cycle Placement Enable for PWM_B
      0 - FRAC45_EN_0 :
         Disable fractional cycle placement for PWM_B.
      0x1 - FRAC45_EN_1 :
         Enable fractional cycle placement for PWM_B.
 (rw) (01)  [0;32mFRAC_PU[0m  - [08:08] -  Fractional Delay Circuit Power Up
      0 - FRAC_PU_0 :
         Turn off fractional delay logic.
      0x1 - FRAC_PU_1 :
         Power up fractional delay logic.
 (ro) (01)  [0;32mTEST[0m  - [15:15] -  Test Status Bit
</lang>
#### p.PWM3.SM2TCTRL
<lang=dft>
 (rw)  [1;33m0x403e40ea[0m (0x403e4000 + 0x00ea)
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
#### p.pwm3.sm2dismap1
<link=p.PWM3.SM2DISMAP1>
#### p.pwm3.sm2dtcnt0
<link=p.PWM3.SM2DTCNT0>
#### pwm3.sm2cval2
<link=p.PWM3.SM2CVAL2>
#### p.pwm3.sm3ctrl
<link=p.PWM3.SM3CTRL>
#### p.pwm3.sm3val0
<link=p.PWM3.SM3VAL0>
#### pwm3.sm3fracval3
<link=p.PWM3.SM3FRACVAL3>
#### PWM3.SM3VAL5
<link=p.PWM3.SM3VAL5>
#### pwm3.sm3tctrl
<link=p.PWM3.SM3TCTRL>
#### p.pwm3.sm3dtcnt1
<link=p.PWM3.SM3DTCNT1>
#### PWM3.SM3CVAL0CYC
<link=p.PWM3.SM3CVAL0CYC>
#### PWM3.SM3CVAL3CYC
<link=p.PWM3.SM3CVAL3CYC>
#### p.PWM3.SM3CVAL4
<lang=dft>
 (ro)  [1;33m0x403e4170[0m (0x403e4000 + 0x0170)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### pwm3.sm3cval4
<link=p.PWM3.SM3CVAL4>
#### PWM3.OUTEN
<link=p.PWM3.OUTEN>
#### pwm3.fsts0
<link=p.PWM3.FSTS0>
#### p.PWM4.SM0INIT
<lang=dft>
 (rw)  [1;33m0x403e8002[0m (0x403e8000 + 0x0002)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### p.pwm4.sm0val0
<link=p.PWM4.SM0VAL0>
#### PWM4.SM0VAL1
<link=p.PWM4.SM0VAL1>
#### pwm4.sm0fracval3
<link=p.PWM4.SM0FRACVAL3>
#### p.pwm4.sm0dtcnt1
<link=p.PWM4.SM0DTCNT1>
#### p.pwm4.sm0captcompx
<link=p.PWM4.SM0CAPTCOMPX>
#### pwm4.sm0captcompx
<link=p.PWM4.SM0CAPTCOMPX>
#### pwm4.sm0cval0cyc
<link=p.PWM4.SM0CVAL0CYC>
#### pwm4.sm0cval3cyc
<link=p.PWM4.SM0CVAL3CYC>
#### p.pwm4.sm1cnt
<link=p.PWM4.SM1CNT>
#### p.pwm4.sm1val1
<link=p.PWM4.SM1VAL1>
#### PWM4.SM1VAL1
<link=p.PWM4.SM1VAL1>
#### PWM4.SM1FRACVAL2
<link=p.PWM4.SM1FRACVAL2>
#### p.PWM4.SM1FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e8074[0m (0x403e8000 + 0x0074)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### PWM4.SM1DISMAP1
<link=p.PWM4.SM1DISMAP1>
#### p.PWM4.SM1CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e8098[0m (0x403e8000 + 0x0098)
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
#### p.PWM4.SM1CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e809e[0m (0x403e8000 + 0x009e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### p.pwm4.sm1captcompx
<link=p.PWM4.SM1CAPTCOMPX>
#### pwm4.sm1cval2
<link=p.PWM4.SM1CVAL2>
#### pwm4.sm1cval3cyc
<link=p.PWM4.SM1CVAL3CYC>
#### p.PWM4.SM1CVAL4
<lang=dft>
 (ro)  [1;33m0x403e80b0[0m (0x403e8000 + 0x00b0)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### PWM4.SM1CVAL5
<link=p.PWM4.SM1CVAL5>
#### p.PWM4.SM2CNT
<lang=dft>
 (ro)  [1;33m0x403e80c0[0m (0x403e8000 + 0x00c0)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### pwm4.sm2fracval1
<link=p.PWM4.SM2FRACVAL1>
#### p.pwm4.sm2fracval2
<link=p.PWM4.SM2FRACVAL2>
#### PWM4.SM2FRACVAL4
<link=p.PWM4.SM2FRACVAL4>
#### pwm4.sm2dmaen
<link=p.PWM4.SM2DMAEN>
#### PWM4.SM2DMAEN
<link=p.PWM4.SM2DMAEN>
#### PWM4.SM2TCTRL
<link=p.PWM4.SM2TCTRL>
#### p.PWM4.SM2DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e80ec[0m (0x403e8000 + 0x00ec)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### p.pwm4.sm2dismap1
<link=p.PWM4.SM2DISMAP1>
#### PWM4.SM2CAPTCOMPB
<link=p.PWM4.SM2CAPTCOMPB>
#### PWM4.SM2CAPTCTRLX
<link=p.PWM4.SM2CAPTCTRLX>
#### p.PWM4.SM2CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e80fe[0m (0x403e8000 + 0x00fe)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### pwm4.sm2cval2
<link=p.PWM4.SM2CVAL2>
#### p.pwm4.sm2cval3
<link=p.PWM4.SM2CVAL3>
#### PWM4.SM3FRACVAL1
<link=p.PWM4.SM3FRACVAL1>
#### p.PWM4.SM3FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e8130[0m (0x403e8000 + 0x0130)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### pwm4.sm3fracval4
<link=p.PWM4.SM3FRACVAL4>
#### PWM4.SM3FRCTRL
<link=p.PWM4.SM3FRCTRL>
#### pwm4.sm3sts
<link=p.PWM4.SM3STS>
#### PWM4.SM3DTCNT0
<link=p.PWM4.SM3DTCNT0>
#### p.pwm4.sm3dtcnt1
<link=p.PWM4.SM3DTCNT1>
#### p.PWM4.SM3CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e8156[0m (0x403e8000 + 0x0156)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### p.pwm4.sm3captcompa
<link=p.PWM4.SM3CAPTCOMPA>
#### pwm4.sm3captctrlb
<link=p.PWM4.SM3CAPTCTRLB>
#### p.PWM4.SM3CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e816a[0m (0x403e8000 + 0x016a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### PWM4.SM3CVAL2CYC
<link=p.PWM4.SM3CVAL2CYC>
#### p.pwm4.sm3cval3
<link=p.PWM4.SM3CVAL3>
#### pwm4.sm3cval5
<link=p.PWM4.SM3CVAL5>
#### PWM4.SM3CVAL5CYC
<link=p.PWM4.SM3CVAL5CYC>
#### PWM4.FSTS0
<link=p.PWM4.FSTS0>
#### p.PWM4.FTST0
<lang=dft>
 (rw)  [1;33m0x403e8192[0m (0x403e8000 + 0x0192)
Fault Test Register
 (rw) (01)  [0;32mFTEST[0m  - [00:00] -  Fault Test
      0 - FTEST_0 :
         No fault
      0x1 - FTEST_1 :
         Cause a simulated fault
</lang>
#### pwm4.fctrl20
<link=p.PWM4.FCTRL20>
#### p.bee.addr_offset0
<link=p.BEE.ADDR_OFFSET0>
#### p.bee.aes_key0_w0
<link=p.BEE.AES_KEY0_W0>
#### bee.aes_key0_w1
<link=p.BEE.AES_KEY0_W1>
#### bee.ctr_nonce0_w0
<link=p.BEE.CTR_NONCE0_W0>
#### p.BEE.CTR_NONCE0_W3
<lang=dft>
 (wo)  [1;33m0x403ec02c[0m (0x403ec000 + 0x002c)
no description available
 (wo) (32)  [0;32mNONCE03[0m  - [31:00] -  Nonce0 from software for CTR, for region0. Nonce0={Nonce03,Nonce02,Nonce01,Nonc
 e00}
</lang>
#### p.bee.region1_top
<link=p.BEE.REGION1_TOP>
#### p.LPI2C1
<lang=dft>
base: 0x403f0000
MCCR0           MCCR1           MCFGR0          MCFGR1          
MCFGR2          MCFGR3          MCR             MDER            
MDMR            MFCR            MFSR            MIER            
MRDR            MSR             MTDR            PARAM           
SAMR            SASR            SCFGR1          SCFGR2          
SCR             SDER            SIER            SRDR            
SSR             STAR            STDR            VERID           
输入 p.LPI2C1.{reg_name} 以查看寄存器的详细信息
type p.LPI2C1.{reg_name} to check details of registers
</lang>
#### p.lpi2c1
<link=p.LPI2C1>
#### LPI2C1.VERID
<link=p.LPI2C1.VERID>
#### p.LPI2C1.MCCR0
<lang=dft>
 (rw)  [1;33m0x403f0048[0m (0x403f0000 + 0x0048)
Master Clock Configuration Register 0
 (rw) (06)  [0;32mCLKLO[0m  - [05:00] -  Clock Low Period
 (rw) (06)  [0;32mCLKHI[0m  - [13:08] -  Clock High Period
 (rw) (06)  [0;32mSETHOLD[0m  - [21:16] -  Setup Hold Delay
 (rw) (06)  [0;32mDATAVD[0m  - [29:24] -  Data Valid Delay
</lang>
#### lpi2c1.mccr0
<link=p.LPI2C1.MCCR0>
#### LPI2C1.MCCR1
<link=p.LPI2C1.MCCR1>
#### p.LPI2C1.MFCR
<lang=dft>
 (rw)  [1;33m0x403f0058[0m (0x403f0000 + 0x0058)
Master FIFO Control Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit FIFO Watermark
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive FIFO Watermark
</lang>
#### LPI2C1.SCR
<link=p.LPI2C1.SCR>
#### p.LPI2C1.SDER
<lang=dft>
 (rw)  [1;33m0x403f011c[0m (0x403f0000 + 0x011c)
Slave DMA Enable Register
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
 (rw) (01)  [0;32mAVDE[0m  - [02:02] -  Address Valid DMA Enable
      0 - AVDE_0 :
         DMA request is disabled
      0x1 - AVDE_1 :
         DMA request is enabled
</lang>
#### p.LPI2C1.SCFGR2
<lang=dft>
 (rw)  [1;33m0x403f0128[0m (0x403f0000 + 0x0128)
Slave Configuration Register 2
 (rw) (04)  [0;32mCLKHOLD[0m  - [03:00] -  Clock Hold Time
 (rw) (06)  [0;32mDATAVD[0m  - [13:08] -  Data Valid Delay
 (rw) (04)  [0;32mFILTSCL[0m  - [19:16] -  Glitch Filter SCL
 (rw) (04)  [0;32mFILTSDA[0m  - [27:24] -  Glitch Filter SDA
</lang>
#### p.lpi2c1.star
<link=p.LPI2C1.STAR>
#### p.lpi2c2.mcfgr0
<link=p.LPI2C2.MCFGR0>
#### LPI2C2.MCFGR0
<link=p.LPI2C2.MCFGR0>
#### lpi2c2.mcfgr2
<link=p.LPI2C2.MCFGR2>
#### p.LPI2C2.MCFGR3
<lang=dft>
 (rw)  [1;33m0x403f402c[0m (0x403f4000 + 0x002c)
Master Configuration Register 3
 (rw) (12)  [0;32mPINLOW[0m  - [19:08] -  Pin Low Timeout
</lang>
#### p.lpi2c2.mtdr
<link=p.LPI2C2.MTDR>
#### LPI2C2.MRDR
<link=p.LPI2C2.MRDR>
#### p.LPI2C2.SDER
<lang=dft>
 (rw)  [1;33m0x403f411c[0m (0x403f4000 + 0x011c)
Slave DMA Enable Register
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
 (rw) (01)  [0;32mAVDE[0m  - [02:02] -  Address Valid DMA Enable
      0 - AVDE_0 :
         DMA request is disabled
      0x1 - AVDE_1 :
         DMA request is enabled
</lang>
#### lpi2c3.msr
<link=p.LPI2C3.MSR>
#### p.LPI2C3.MCFGR0
<lang=dft>
 (rw)  [1;33m0x403f8020[0m (0x403f8000 + 0x0020)
Master Configuration Register 0
 (rw) (01)  [0;32mHREN[0m  - [00:00] -  Host Request Enable
      0 - HREN_0 :
         Host request input is disabled
      0x1 - HREN_1 :
         Host request input is enabled
 (rw) (01)  [0;32mHRPOL[0m  - [01:01] -  Host Request Polarity
      0 - HRPOL_0 :
         Active low
      0x1 - HRPOL_1 :
         Active high
 (rw) (01)  [0;32mHRSEL[0m  - [02:02] -  Host Request Select
      0 - HRSEL_0 :
         Host request input is pin HREQ
      0x1 - HRSEL_1 :
         Host request input is input trigger
 (rw) (01)  [0;32mCIRFIFO[0m  - [08:08] -  Circular FIFO Enable
      0 - CIRFIFO_0 :
         Circular FIFO is disabled
      0x1 - CIRFIFO_1 :
         Circular FIFO is enabled
 (rw) (01)  [0;32mRDMO[0m  - [09:09] -  Receive Data Match Only
      0 - RDMO_0 :
         Received data is stored in the receive FIFO
      0x1 - RDMO_1 :
         Received data is discarded unless the the Data Match Flag (MSR[DMF]) is
          set
</lang>
#### LPI2C3.MCFGR3
<link=p.LPI2C3.MCFGR3>
#### lpi2c3.mtdr
<link=p.LPI2C3.MTDR>
#### LPI2C3.MTDR
<link=p.LPI2C3.MTDR>
#### lpi2c3.stdr
<link=p.LPI2C3.STDR>
#### LPI2C4.MCFGR2
<link=p.LPI2C4.MCFGR2>
#### p.LPI2C4.MCFGR3
<lang=dft>
 (rw)  [1;33m0x403fc02c[0m (0x403fc000 + 0x002c)
Master Configuration Register 3
 (rw) (12)  [0;32mPINLOW[0m  - [19:08] -  Pin Low Timeout
</lang>
#### p.lpi2c4.mcfgr3
<link=p.LPI2C4.MCFGR3>
#### lpi2c4.mcfgr3
<link=p.LPI2C4.MCFGR3>
#### p.LPI2C4.MFSR
<lang=dft>
 (ro)  [1;33m0x403fc05c[0m (0x403fc000 + 0x005c)
Master FIFO Status Register
 (ro) (03)  [0;32mTXCOUNT[0m  - [02:00] -  Transmit FIFO Count
 (ro) (03)  [0;32mRXCOUNT[0m  - [18:16] -  Receive FIFO Count
</lang>
#### p.lpi2c4.stdr
<link=p.LPI2C4.STDR>
#### LPI2C4.SRDR
<link=p.LPI2C4.SRDR>
#### p.systemcontrol.cpuid
<link=p.SYSTEMCONTROL.CPUID>
#### SystemControl.HFSR
<link=p.SYSTEMCONTROL.HFSR>
#### systemcontrol.mmfar
<link=p.SYSTEMCONTROL.MMFAR>
#### p.SYSTEMCONTROL.ID_PFR1
<lang=dft>
 (ro)  [1;33m0xe000ed44[0m (0xe000e000 + 0x0d44)
Processor Feature Register 1
 (ro) (04)  [0;32mPROGMODEL[0m  - [11:08] -  M profile programmers' model
      0 - PROGMODEL_0 :
         ARMv7-M unused
      0x2 - PROGMODEL_2 :
         Two-stack programmers' model supported
</lang>
#### p.systemcontrol.id_afr0
<link=p.SYSTEMCONTROL.ID_AFR0>
#### systemcontrol.id_afr0
<link=p.SYSTEMCONTROL.ID_AFR0>
#### p.systemcontrol.id_mmfr2
<link=p.SYSTEMCONTROL.ID_MMFR2>
#### p.systemcontrol.id_isar2
<link=p.SYSTEMCONTROL.ID_ISAR2>
#### p.SYSTEMCONTROL.ID_ISAR4
<lang=dft>
 (ro)  [1;33m0xe000ed70[0m (0xe000e000 + 0x0d70)
Instruction Set Attributes Register 4
 (ro) (04)  [0;32mUNPRIV_INSTRS[0m  - [03:00] -  Indicates the supported unprivileged instructions. These are the instruction va
 riants indicated by a T suffix.
      0 - UNPRIV_INSTRS_0 :
         None supported, ARMv7-M unused.
      0x1 - UNPRIV_INSTRS_1 :
         Adds support for the LDRBT, LDRT, STRBT, and STRT instructions.
      0x2 - UNPRIV_INSTRS_2 :
         As for 1, and adds support for the LDRHT, LDRSBT, LDRSHT, and STRHT ins
         tructions.
 (ro) (04)  [0;32mWITHSHIFTS_INSTRS[0m  - [07:04] -  Indicates the support for instructions with shifts
      0 - WITHSHIFTS_INSTRS_0 :
         Nonzero shifts supported only in MOV and shift instructions.
      0x1 - WITHSHIFTS_INSTRS_1 :
         Adds support for shifts of loads and stores over the range LSL 0-3.
      0x3 - WITHSHIFTS_INSTRS_3 :
         As for 1, and adds support for other constant shift options, on loads, 
         stores, and other instructions.
      0x4 - WITHSHIFTS_INSTRS_4 :
         ARMv7-M unused.
 (ro) (04)  [0;32mWRITEBACK_INSTRS[0m  - [11:08] -  Indicates the support for Writeback addressing modes
      0 - WRITEBACK_INSTRS_0 :
         Basic support. Only the LDM, STM, PUSH, and POP instructions support wr
         iteback addressing modes. ARMv7-M unused.
      0x1 - WRITEBACK_INSTRS_1 :
         Adds support for all of the writeback addressing modes defined in the A
         RMv7-M architecture.
 (ro) (04)  [0;32mBARRIER_INSTRS[0m  - [19:16] -  Indicates the supported Barrier instructions
      0 - BARRIER_INSTRS_0 :
         None supported, ARMv7-M unused.
      0x1 - BARRIER_INSTRS_1 :
         Adds support for the DMB, DSB, and ISB barrier instructions.
 (ro) (04)  [0;32mSYNCHPRIM_INSTRS_FRAC[0m  - [23:20] -  Together with the ID_ISAR3[SYNCHPRIM_INSTRS] indicates the supported Synchroniz
 ation Primitives
 (ro) (04)  [0;32mPSR_M_INSTRS[0m  - [27:24] -  Indicates the supported M profile instructions to modify the PSRs
      0 - PSR_M_INSTRS_0 :
         None supported, ARMv7-M unused.
      0x1 - PSR_M_INSTRS_1 :
         Adds support for the M-profile forms of the CPS, MRS, and MSR instructi
         ons, to access the PSRs.
</lang>
#### p.systemcontrol.clidr
<link=p.SYSTEMCONTROL.CLIDR>
#### p.SYSTEMCONTROL.DCISW
<lang=dft>
 (wo)  [1;33m0xe000ef60[0m (0xe000e000 + 0x0f60)
Data cache invalidate by set/way
 (wo) (32)  [0;32mDCISW[0m  - [31:00] -  D-cache invalidate by set-way
</lang>
#### systemcontrol.dccmvau
<link=p.SYSTEMCONTROL.DCCMVAU>
#### systemcontrol.dccsw
<link=p.SYSTEMCONTROL.DCCSW>
#### systemcontrol.cm7_ahbpcr
<link=p.SYSTEMCONTROL.CM7_AHBPCR>
#### SystemControl.CM7_AHBSCR
<link=p.SYSTEMCONTROL.CM7_AHBSCR>
#### p.nvic.nvicicer1
<link=p.NVIC.NVICICER1>
#### NVIC.NVICICER1
<link=p.NVIC.NVICICER1>
#### p.NVIC.NVICICPR1
<lang=dft>
 (rw)  [1;33m0xe000e284[0m (0xe000e100 + 0x0184)
Interrupt Clear Pending Register n
 (rw) (32)  [0;32mCLRPEND[0m  - [31:00] -  Interrupt clear-pending bits
</lang>
#### p.nvic.nvicicpr4
<link=p.NVIC.NVICICPR4>
#### p.NVIC.NVICIABR0
<lang=dft>
 (rw)  [1;33m0xe000e300[0m (0xe000e100 + 0x0200)
Interrupt Active bit Register n
 (rw) (32)  [0;32mACTIVE[0m  - [31:00] -  Interrupt active flags
</lang>
#### p.nvic.nviciabr4
<link=p.NVIC.NVICIABR4>
#### p.NVIC.NVICIP7
<lang=dft>
 (rw)  [1;33m0xe000e407[0m (0xe000e100 + 0x0307)
Interrupt Priority Register 7
 (rw) (04)  [0;32mPRI7[0m  - [07:04] -  Priority of the INT_DMA7_DMA23 interrupt 7
</lang>
#### NVIC.NVICIP8
<link=p.NVIC.NVICIP8>
#### p.NVIC.NVICIP17
<lang=dft>
 (rw)  [1;33m0xe000e411[0m (0xe000e100 + 0x0311)
Interrupt Priority Register 17
 (rw) (04)  [0;32mPRI17[0m  - [07:04] -  Priority of the INT_CTI0_ERROR interrupt 17
</lang>
#### p.nvic.nvicip18
<link=p.NVIC.NVICIP18>
#### NVIC.NVICIP19
<link=p.NVIC.NVICIP19>
#### p.nvic.nvicip25
<link=p.NVIC.NVICIP25>
#### nvic.nvicip26
<link=p.NVIC.NVICIP26>
#### NVIC.NVICIP28
<link=p.NVIC.NVICIP28>
#### p.NVIC.NVICIP31
<lang=dft>
 (rw)  [1;33m0xe000e41f[0m (0xe000e100 + 0x031f)
Interrupt Priority Register 31
 (rw) (04)  [0;32mPRI31[0m  - [07:04] -  Priority of the INT_LPI2C4 interrupt 31
</lang>
#### nvic.nvicip35
<link=p.NVIC.NVICIP35>
#### p.nvic.nvicip36
<link=p.NVIC.NVICIP36>
#### NVIC.NVICIP37
<link=p.NVIC.NVICIP37>
#### NVIC.NVICIP45
<link=p.NVIC.NVICIP45>
#### nvic.nvicip47
<link=p.NVIC.NVICIP47>
#### NVIC.NVICIP56
<link=p.NVIC.NVICIP56>
#### p.nvic.nvicip57
<link=p.NVIC.NVICIP57>
#### p.NVIC.NVICIP62
<lang=dft>
 (rw)  [1;33m0xe000e43e[0m (0xe000e100 + 0x033e)
Interrupt Priority Register 62
 (rw) (04)  [0;32mPRI62[0m  - [07:04] -  Priority of the INT_Reserved78 interrupt 62
</lang>
#### p.nvic.nvicip69
<link=p.NVIC.NVICIP69>
#### nvic.nvicip79
<link=p.NVIC.NVICIP79>
#### NVIC.NVICIP81
<link=p.NVIC.NVICIP81>
#### nvic.nvicip83
<link=p.NVIC.NVICIP83>
#### p.NVIC.NVICIP89
<lang=dft>
 (rw)  [1;33m0xe000e459[0m (0xe000e100 + 0x0359)
Interrupt Priority Register 89
 (rw) (04)  [0;32mPRI89[0m  - [07:04] -  Priority of the INT_GPIO5_Combined_16_31 interrupt 89
</lang>
#### NVIC.NVICIP92
<link=p.NVIC.NVICIP92>
#### p.nvic.nvicip93
<link=p.NVIC.NVICIP93>
#### p.NVIC.NVICIP100
<lang=dft>
 (rw)  [1;33m0xe000e464[0m (0xe000e100 + 0x0364)
Interrupt Priority Register 100
 (rw) (04)  [0;32mPRI100[0m  - [07:04] -  Priority of the INT_GPT1 interrupt 100
</lang>
#### nvic.nvicip109
<link=p.NVIC.NVICIP109>
#### p.NVIC.NVICIP113
<lang=dft>
 (rw)  [1;33m0xe000e471[0m (0xe000e100 + 0x0371)
Interrupt Priority Register 113
 (rw) (04)  [0;32mPRI113[0m  - [07:04] -  Priority of the INT_USB_OTG1 interrupt 113
</lang>
#### NVIC.NVICIP118
<link=p.NVIC.NVICIP118>
#### NVIC.NVICIP125
<link=p.NVIC.NVICIP125>
#### nvic.nvicip127
<link=p.NVIC.NVICIP127>
#### NVIC.NVICIP136
<link=p.NVIC.NVICIP136>
#### nvic.nvicip138
<link=p.NVIC.NVICIP138>
#### p.nvic.nvicip139
<link=p.NVIC.NVICIP139>
#### p.nvic.nvicip143
<link=p.NVIC.NVICIP143>
#### nvic.nvicip146
<link=p.NVIC.NVICIP146>
#### p.nvic.nvicip154
<link=p.NVIC.NVICIP154>
#### nvic.nvicip155
<link=p.NVIC.NVICIP155>
#### NVIC.NVICIP157
<link=p.NVIC.NVICIP157>
#### ldval1
<link=LDVAL1>
#### TCTRL1
<link=p.PIT.TCTRL1>
#### CR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CMP1.CR1
   p.CMP2.CR1
   p.CMP3.CR1
   p.CMP4.CR1
#### gpr9
<link=GPR9>
#### gpr18
<link=GPR18>
#### gpr25
<link=GPR25>
#### GPR26
<link=p.IOMUXC_GPR.GPR26>
#### GPR31
<link=p.IOMUXC_GPR.GPR31>
#### INT_STAT_EN
<link=p.FLEXRAM.INT_STAT_EN>
#### ctrl
<link=CTRL>
#### toval
<link=TOVAL>
#### hc7
<link=HC7>
#### CAL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.CAL
   p.ADC2.CAL
#### scmisc
<link=SCMISC>
#### PKRMAX
<link=p.TRNG.PKRMAX>
#### SCMC
<link=p.TRNG.SCMC>
#### scmc
<link=SCMC>
#### SCR1L
<link=p.TRNG.SCR1L>
#### scr1l
<link=SCR1L>
#### scr4c
<link=SCR4C>
#### ENT[2]
<link=p.TRNG.ENT[2]>
#### ENT[7]
<link=p.TRNG.ENT[7]>
#### ent[10]
<link=ENT[10]>
#### int_mask
<link=INT_MASK>
#### VID2
<link=p.TRNG.VID2>
#### hpsr
<link=HPSR>
#### lpmkcr
<link=LPMKCR>
#### LPSR
<link=p.SNVS.LPSR>
#### LPTAR
<link=p.SNVS.LPTAR>
#### LPSMCMR
<link=p.SNVS.LPSMCMR>
#### lpgpr_alias[2]
<link=LPGPR_alias[2]>
#### lpgpr[7]
<link=LPGPR[7]>
#### PLL_ARM_CLR
<link=p.CCM_ANALOG.PLL_ARM_CLR>
#### PLL_USB1_CLR
<link=p.CCM_ANALOG.PLL_USB1_CLR>
#### pll_usb2_set
<link=PLL_USB2_SET>
#### pll_sys_tog
<link=PLL_SYS_TOG>
#### pll_sys_num
<link=PLL_SYS_NUM>
#### PLL_ENET_TOG
<link=p.CCM_ANALOG.PLL_ENET_TOG>
#### PFD_480_CLR
<link=p.CCM_ANALOG.PFD_480_CLR>
#### pfd_528
<link=PFD_528>
#### pfd_528_set
<link=PFD_528_SET>
#### MISC2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC2
   p.PMU.MISC2
#### misc2
<link=MISC2>
#### misc2_clr
<link=MISC2_CLR>
#### REG_1P1_SET
<link=p.PMU.REG_1P1_SET>
#### reg_3p0
<link=REG_3P0>
#### USB1_CHRG_DETECT_CLR
<link=p.USB_ANALOG.USB1_CHRG_DETECT_CLR>
#### usb1_loopback_clr
<link=USB1_LOOPBACK_CLR>
#### USB2_VBUS_DETECT
<link=p.USB_ANALOG.USB2_VBUS_DETECT>
#### usb2_vbus_detect_set
<link=USB2_VBUS_DETECT_SET>
#### USB2_VBUS_DETECT_TOG
<link=p.USB_ANALOG.USB2_VBUS_DETECT_TOG>
#### OSC_CONFIG0_SET
<link=p.XTALOSC24M.OSC_CONFIG0_SET>
#### osc_config0_set
<link=OSC_CONFIG0_SET>
#### osc_config2_tog
<link=OSC_CONFIG2_TOG>
#### PWD_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.PWD_SET
   p.USBPHY2.PWD_SET
#### tx_set
<link=TX_SET>
#### rx_clr
<link=RX_CLR>
#### rx_tog
<link=RX_TOG>
#### csl10
<link=CSL10>
#### CSL19
<link=p.CSU.CSL19>
#### CSL28
<link=p.CSU.CSL28>
#### CDNE
<link=p.DMA0.CDNE>
#### DCHPRI7
<link=p.DMA0.DCHPRI7>
#### dchpri7
<link=DCHPRI7>
#### TCD1_SADDR
<link=p.DMA0.TCD1_SADDR>
#### tcd1_saddr
<link=TCD1_SADDR>
#### TCD1_BITER_ELINKNO
<link=p.DMA0.TCD1_BITER_ELINKNO>
#### TCD1_BITER_ELINKYES
<link=p.DMA0.TCD1_BITER_ELINKYES>
#### tcd2_doff
<link=TCD2_DOFF>
#### tcd2_biter_elinkno
<link=TCD2_BITER_ELINKNO>
#### tcd3_nbytes_mloffno
<link=TCD3_NBYTES_MLOFFNO>
#### tcd3_doff
<link=TCD3_DOFF>
#### TCD4_SLAST
<link=p.DMA0.TCD4_SLAST>
#### TCD5_SLAST
<link=p.DMA0.TCD5_SLAST>
#### tcd5_citer_elinkno
<link=TCD5_CITER_ELINKNO>
#### TCD6_NBYTES_MLOFFNO
<link=p.DMA0.TCD6_NBYTES_MLOFFNO>
#### TCD7_ATTR
<link=p.DMA0.TCD7_ATTR>
#### TCD7_DADDR
<link=p.DMA0.TCD7_DADDR>
#### TCD7_BITER_ELINKYES
<link=p.DMA0.TCD7_BITER_ELINKYES>
#### TCD8_NBYTES_MLNO
<link=p.DMA0.TCD8_NBYTES_MLNO>
#### TCD8_DOFF
<link=p.DMA0.TCD8_DOFF>
#### TCD8_CITER_ELINKYES
<link=p.DMA0.TCD8_CITER_ELINKYES>
#### TCD9_DOFF
<link=p.DMA0.TCD9_DOFF>
#### TCD11_BITER_ELINKNO
<link=p.DMA0.TCD11_BITER_ELINKNO>
#### TCD11_BITER_ELINKYES
<link=p.DMA0.TCD11_BITER_ELINKYES>
#### tcd12_daddr
<link=TCD12_DADDR>
#### tcd12_doff
<link=TCD12_DOFF>
#### TCD13_NBYTES_MLNO
<link=p.DMA0.TCD13_NBYTES_MLNO>
#### TCD13_DLASTSGA
<link=p.DMA0.TCD13_DLASTSGA>
#### TCD14_SOFF
<link=p.DMA0.TCD14_SOFF>
#### TCD15_NBYTES_MLOFFNO
<link=p.DMA0.TCD15_NBYTES_MLOFFNO>
#### TCD15_NBYTES_MLOFFYES
<link=p.DMA0.TCD15_NBYTES_MLOFFYES>
#### TCD17_BITER_ELINKYES
<link=p.DMA0.TCD17_BITER_ELINKYES>
#### TCD19_CSR
<link=p.DMA0.TCD19_CSR>
#### tcd19_csr
<link=TCD19_CSR>
#### TCD20_CITER_ELINKYES
<link=p.DMA0.TCD20_CITER_ELINKYES>
#### tcd20_citer_elinkyes
<link=TCD20_CITER_ELINKYES>
#### tcd21_nbytes_mloffno
<link=TCD21_NBYTES_MLOFFNO>
#### tcd21_nbytes_mloffyes
<link=TCD21_NBYTES_MLOFFYES>
#### tcd21_citer_elinkno
<link=TCD21_CITER_ELINKNO>
#### TCD21_CSR
<link=p.DMA0.TCD21_CSR>
#### TCD22_SOFF
<link=p.DMA0.TCD22_SOFF>
#### TCD23_SLAST
<link=p.DMA0.TCD23_SLAST>
#### tcd23_dlastsga
<link=TCD23_DLASTSGA>
#### TCD24_NBYTES_MLOFFNO
<link=p.DMA0.TCD24_NBYTES_MLOFFNO>
#### tcd24_doff
<link=TCD24_DOFF>
#### TCD24_BITER_ELINKYES
<link=p.DMA0.TCD24_BITER_ELINKYES>
#### TCD25_SADDR
<link=p.DMA0.TCD25_SADDR>
#### TCD26_DOFF
<link=p.DMA0.TCD26_DOFF>
#### TCD27_ATTR
<link=p.DMA0.TCD27_ATTR>
#### TCD27_NBYTES_MLNO
<link=p.DMA0.TCD27_NBYTES_MLNO>
#### tcd27_citer_elinkyes
<link=TCD27_CITER_ELINKYES>
#### TCD27_BITER_ELINKYES
<link=p.DMA0.TCD27_BITER_ELINKYES>
#### tcd28_nbytes_mloffyes
<link=TCD28_NBYTES_MLOFFYES>
#### TCD28_DADDR
<link=p.DMA0.TCD28_DADDR>
#### tcd29_attr
<link=TCD29_ATTR>
#### TCD31_ATTR
<link=p.DMA0.TCD31_ATTR>
#### chcfg[2]
<link=CHCFG[2]>
#### chcfg[17]
<link=CHCFG[17]>
#### chcfg[26]
<link=CHCFG[26]>
#### cscmr2
<link=CSCMR2>
#### CISR
<link=p.CCM.CISR>
#### cisr
<link=CISR>
#### CCGR7
<link=p.CCM.CCGR7>
#### ccgr7
<link=CCGR7>
#### rompatch3d
<link=ROMPATCH3D>
#### ROMPATCH2D
<link=p.ROMC.ROMPATCH2D>
#### rompatch5a
<link=ROMPATCH5A>
#### rompatch11a
<link=ROMPATCH11A>
#### ROMPATCH12A
<link=p.ROMC.ROMPATCH12A>
#### ROMPATCH15A
<link=p.ROMC.ROMPATCH15A>
#### ROMPATCHSR
<link=p.ROMC.ROMPATCHSR>
#### param
<link=PARAM>
#### STAT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.STAT
   p.LPUART2.STAT
   p.LPUART3.STAT
   p.LPUART4.STAT
   p.LPUART5.STAT
   p.LPUART6.STAT
   p.LPUART7.STAT
   p.LPUART8.STAT
   p.PXP.STAT
   p.LCDIF.STAT
   p.DCP.STAT
#### shiftctl[3]
<link=SHIFTCTL[3]>
#### shiftcfg[3]
<link=SHIFTCFG[3]>
#### SHIFTBUF[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUF[2]
   p.FLEXIO2.SHIFTBUF[2]
   p.FLEXIO3.SHIFTBUF[2]
#### SHIFTBUFBIS[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFBIS[3]
   p.FLEXIO2.SHIFTBUFBIS[3]
   p.FLEXIO3.SHIFTBUFBIS[3]
#### timcmp[1]
<link=TIMCMP[1]>
#### TIMCMP[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCMP[2]
   p.FLEXIO2.TIMCMP[2]
   p.FLEXIO3.TIMCMP[2]
#### SHIFTBUFHWS[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFHWS[2]
   p.FLEXIO2.SHIFTBUFHWS[2]
   p.FLEXIO3.SHIFTBUFHWS[2]
#### icr1
<link=ICR1>
#### timer
<link=TIMER>
#### RX14MASK
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RX14MASK
   p.CAN2.RX14MASK
   p.CAN3.RX14MASK
#### RX15MASK
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RX15MASK
   p.CAN2.RX15MASK
   p.CAN3.RX15MASK
#### RXIMR3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR3
   p.CAN2.RXIMR3
#### rximr6
<link=RXIMR6>
#### rximr17
<link=RXIMR17>
#### RXIMR22
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR22
   p.CAN2.RXIMR22
#### rximr23
<link=RXIMR23>
#### RXIMR31
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR31
   p.CAN2.RXIMR31
#### rximr38
<link=RXIMR38>
#### RXIMR40
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR40
   p.CAN2.RXIMR40
#### rximr41
<link=RXIMR41>
#### RXIMR53
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR53
   p.CAN2.RXIMR53
#### cbt
<link=CBT>
#### MB0_64B_CS
<link=p.CAN3.MB0_64B_CS>
#### id0
<link=ID0>
#### MB0_16B_ID
<link=p.CAN3.MB0_16B_ID>
#### MB0_8B_ID
<link=p.CAN3.MB0_8B_ID>
#### MB0_16B_WORD2
<link=p.CAN3.MB0_16B_WORD2>
#### mb0_64b_word3
<link=MB0_64B_WORD3>
#### mb1_8b_word1
<link=MB1_8B_WORD1>
#### cs2
<link=CS2>
#### MB0_64B_WORD9
<link=p.CAN3.MB0_64B_WORD9>
#### MB1_32B_WORD0
<link=p.CAN3.MB1_32B_WORD0>
#### mb3_8b_cs
<link=MB3_8B_CS>
#### mb0_64b_word11
<link=MB0_64B_WORD11>
#### WORD03
<link=p.CAN3.WORD03>
#### ID4
<link=p.CAN3.ID4>
#### mb1_32b_word6
<link=MB1_32B_WORD6>
#### MB4_8B_WORD0
<link=p.CAN3.MB4_8B_WORD0>
#### mb4_8b_word1
<link=MB4_8B_WORD1>
#### mb1_64b_word2
<link=MB1_64B_WORD2>
#### word15
<link=WORD15>
#### mb2_32b_word3
<link=MB2_32B_WORD3>
#### MB4_16B_WORD1
<link=p.CAN3.MB4_16B_WORD1>
#### MB5_16B_CS
<link=p.CAN3.MB5_16B_CS>
#### MB5_16B_ID
<link=p.CAN3.MB5_16B_ID>
#### MB3_32B_WORD0
<link=p.CAN3.MB3_32B_WORD0>
#### MB8_8B_WORD0
<link=p.CAN3.MB8_8B_WORD0>
#### mb5_16b_word3
<link=MB5_16B_WORD3>
#### mb8_8b_word1
<link=MB8_8B_WORD1>
#### WORD18
<link=p.CAN3.WORD18>
#### mb6_16b_cs
<link=MB6_16B_CS>
#### mb9_8b_id
<link=MB9_8B_ID>
#### MB6_16B_WORD1
<link=p.CAN3.MB6_16B_WORD1>
#### MB2_64B_WORD3
<link=p.CAN3.MB2_64B_WORD3>
#### MB10_8B_WORD1
<link=p.CAN3.MB10_8B_WORD1>
#### mb2_64b_word9
<link=MB2_64B_WORD9>
#### MB12_8B_CS
<link=p.CAN3.MB12_8B_CS>
#### MB2_64B_WORD11
<link=p.CAN3.MB2_64B_WORD11>
#### MB13_8B_CS
<link=p.CAN3.MB13_8B_CS>
#### MB13_8B_ID
<link=p.CAN3.MB13_8B_ID>
#### mb5_32b_word2
<link=MB5_32B_WORD2>
#### WORD013
<link=p.CAN3.WORD013>
#### MB5_32B_WORD4
<link=p.CAN3.MB5_32B_WORD4>
#### MB3_64B_WORD3
<link=p.CAN3.MB3_64B_WORD3>
#### MB9_16B_WORD3
<link=p.CAN3.MB9_16B_WORD3>
#### mb3_64b_word8
<link=MB3_64B_WORD8>
#### MB11_16B_CS
<link=p.CAN3.MB11_16B_CS>
#### mb6_32b_word7
<link=MB6_32B_WORD7>
#### word017
<link=WORD017>
#### ID18
<link=p.CAN3.ID18>
#### MB7_32B_WORD4
<link=p.CAN3.MB7_32B_WORD4>
#### mb8_32b_cs
<link=MB8_32B_CS>
#### mb20_8b_word0
<link=MB20_8B_WORD0>
#### mb4_64b_word8
<link=MB4_64B_WORD8>
#### MB8_32B_WORD2
<link=p.CAN3.MB8_32B_WORD2>
#### id21
<link=ID21>
#### MB21_8B_WORD1
<link=p.CAN3.MB21_8B_WORD1>
#### MB4_64B_WORD13
<link=p.CAN3.MB4_64B_WORD13>
#### MB14_16B_WORD2
<link=p.CAN3.MB14_16B_WORD2>
#### WORD022
<link=p.CAN3.WORD022>
#### CS23
<link=p.CAN3.CS23>
#### mb9_32b_word1
<link=MB9_32B_WORD1>
#### mb5_64b_word9
<link=MB5_64B_WORD9>
#### MB5_64B_WORD13
<link=p.CAN3.MB5_64B_WORD13>
#### word026
<link=WORD026>
#### mb10_32b_word6
<link=MB10_32B_WORD6>
#### MB27_8B_CS
<link=p.CAN3.MB27_8B_CS>
#### mb6_64b_id
<link=MB6_64B_ID>
#### WORD127
<link=p.CAN3.WORD127>
#### MB11_32B_WORD1
<link=p.CAN3.MB11_32B_WORD1>
#### MB6_64B_WORD4
<link=p.CAN3.MB6_64B_WORD4>
#### MB19_16B_ID
<link=p.CAN3.MB19_16B_ID>
#### word031
<link=WORD031>
#### id32
<link=ID32>
#### MB32_8B_ID
<link=p.CAN3.MB32_8B_ID>
#### mb13_32b_word2
<link=MB13_32B_WORD2>
#### mb33_8b_word0
<link=MB33_8B_WORD0>
#### MB7_64B_WORD6
<link=p.CAN3.MB7_64B_WORD6>
#### MB13_32B_WORD3
<link=p.CAN3.MB13_32B_WORD3>
#### cs34
<link=CS34>
#### mb34_8b_cs
<link=MB34_8B_CS>
#### mb34_8b_word0
<link=MB34_8B_WORD0>
#### mb7_64b_word10
<link=MB7_64B_WORD10>
#### WORD134
<link=p.CAN3.WORD134>
#### MB7_64B_WORD12
<link=p.CAN3.MB7_64B_WORD12>
#### mb14_32b_word2
<link=MB14_32B_WORD2>
#### mb15_32b_id
<link=MB15_32B_ID>
#### MB37_8B_WORD1
<link=p.CAN3.MB37_8B_WORD1>
#### MB8_64B_WORD7
<link=p.CAN3.MB8_64B_WORD7>
#### mb38_8b_word0
<link=MB38_8B_WORD0>
#### mb8_64b_word9
<link=MB8_64B_WORD9>
#### CS39
<link=p.CAN3.CS39>
#### MB15_32B_WORD5
<link=p.CAN3.MB15_32B_WORD5>
#### MB8_64B_WORD11
<link=p.CAN3.MB8_64B_WORD11>
#### word139
<link=WORD139>
#### MB26_16B_WORD2
<link=p.CAN3.MB26_16B_WORD2>
#### word140
<link=WORD140>
#### MB9_64B_WORD1
<link=p.CAN3.MB9_64B_WORD1>
#### mb28_16b_word0
<link=MB28_16B_WORD0>
#### MB17_32B_ID
<link=p.CAN3.MB17_32B_ID>
#### mb9_64b_word8
<link=MB9_64B_WORD8>
#### id43
<link=ID43>
#### mb29_16b_cs
<link=MB29_16B_CS>
#### mb43_8b_word0
<link=MB43_8B_WORD0>
#### MB9_64B_WORD11
<link=p.CAN3.MB9_64B_WORD11>
#### mb17_32b_word6
<link=MB17_32B_WORD6>
#### MB17_32B_WORD7
<link=p.CAN3.MB17_32B_WORD7>
#### WORD144
<link=p.CAN3.WORD144>
#### MB18_32B_CS
<link=p.CAN3.MB18_32B_CS>
#### mb45_8b_cs
<link=MB45_8B_CS>
#### MB30_16B_ID
<link=p.CAN3.MB30_16B_ID>
#### MB45_8B_ID
<link=p.CAN3.MB45_8B_ID>
#### MB18_32B_WORD0
<link=p.CAN3.MB18_32B_WORD0>
#### word045
<link=WORD045>
#### MB10_64B_WORD1
<link=p.CAN3.MB10_64B_WORD1>
#### mb18_32b_word1
<link=MB18_32B_WORD1>
#### mb10_64b_word2
<link=MB10_64B_WORD2>
#### ID47
<link=p.CAN3.ID47>
#### MB31_16B_WORD1
<link=p.CAN3.MB31_16B_WORD1>
#### mb47_8b_id
<link=MB47_8B_ID>
#### CS48
<link=p.CAN3.CS48>
#### WORD049
<link=p.CAN3.WORD049>
#### id50
<link=ID50>
#### MB11_64B_WORD1
<link=p.CAN3.MB11_64B_WORD1>
#### MB33_16B_WORD1
<link=p.CAN3.MB33_16B_WORD1>
#### mb11_64b_word2
<link=MB11_64B_WORD2>
#### mb33_16b_word2
<link=MB33_16B_WORD2>
#### mb50_8b_word0
<link=MB50_8B_WORD0>
#### mb20_32b_word1
<link=MB20_32B_WORD1>
#### CS53
<link=p.CAN3.CS53>
#### mb21_32b_word2
<link=MB21_32B_WORD2>
#### mb35_16b_word2
<link=MB35_16B_WORD2>
#### MB11_64B_WORD15
<link=p.CAN3.MB11_64B_WORD15>
#### word153
<link=WORD153>
#### ID54
<link=p.CAN3.ID54>
#### mb22_32b_word1
<link=MB22_32B_WORD1>
#### mb12_64b_word7
<link=MB12_64B_WORD7>
#### mb37_16b_word1
<link=MB37_16B_WORD1>
#### MB12_64B_WORD8
<link=p.CAN3.MB12_64B_WORD8>
#### cs57
<link=CS57>
#### mb12_64b_word11
<link=MB12_64B_WORD11>
#### MB22_32B_WORD7
<link=p.CAN3.MB22_32B_WORD7>
#### mb38_16b_word0
<link=MB38_16B_WORD0>
#### MB57_8B_WORD0
<link=p.CAN3.MB57_8B_WORD0>
#### WORD157
<link=p.CAN3.WORD157>
#### MB38_16B_WORD2
<link=p.CAN3.MB38_16B_WORD2>
#### MB23_32B_WORD6
<link=p.CAN3.MB23_32B_WORD6>
#### mb60_8b_id
<link=MB60_8B_ID>
#### MB13_64B_WORD8
<link=p.CAN3.MB13_64B_WORD8>
#### mb61_8b_cs
<link=MB61_8B_CS>
#### ID61
<link=p.CAN3.ID61>
#### MB62_8B_ID
<link=p.CAN3.MB62_8B_ID>
#### cs63
<link=CS63>
#### mb63_8b_word1
<link=MB63_8B_WORD1>
#### RXIMR[1]
<link=p.CAN3.RXIMR[1]>
#### rximr[11]
<link=RXIMR[11]>
#### RXIMR[19]
<link=p.CAN3.RXIMR[19]>
#### rximr[20]
<link=RXIMR[20]>
#### RXIMR[28]
<link=p.CAN3.RXIMR[28]>
#### RXIMR[37]
<link=p.CAN3.RXIMR[37]>
#### RXIMR[44]
<link=p.CAN3.RXIMR[44]>
#### RXIMR[50]
<link=p.CAN3.RXIMR[50]>
#### rximr[63]
<link=RXIMR[63]>
#### EPRS
<link=p.CAN3.EPRS>
#### fdcrc
<link=FDCRC>
#### HR_TIME_STAMP[0]
<link=p.CAN3.HR_TIME_STAMP[0]>
#### HR_TIME_STAMP[15]
<link=p.CAN3.HR_TIME_STAMP[15]>
#### HR_TIME_STAMP[24]
<link=p.CAN3.HR_TIME_STAMP[24]>
#### hr_time_stamp[26]
<link=HR_TIME_STAMP[26]>
#### HR_TIME_STAMP[33]
<link=p.CAN3.HR_TIME_STAMP[33]>
#### HR_TIME_STAMP[39]
<link=p.CAN3.HR_TIME_STAMP[39]>
#### HR_TIME_STAMP[48]
<link=p.CAN3.HR_TIME_STAMP[48]>
#### hr_time_stamp[52]
<link=HR_TIME_STAMP[52]>
#### HR_TIME_STAMP[54]
<link=p.CAN3.HR_TIME_STAMP[54]>
#### ERFFEL[1]
<link=p.CAN3.ERFFEL[1]>
#### erffel[37]
<link=ERFFEL[37]>
#### erffel[65]
<link=ERFFEL[65]>
#### erffel[76]
<link=ERFFEL[76]>
#### erffel[82]
<link=ERFFEL[82]>
#### ERFFEL[88]
<link=p.CAN3.ERFFEL[88]>
#### erffel[88]
<link=ERFFEL[88]>
#### erffel[96]
<link=ERFFEL[96]>
#### ERFFEL[115]
<link=p.CAN3.ERFFEL[115]>
#### erffel[115]
<link=ERFFEL[115]>
#### ERFFEL[118]
<link=p.CAN3.ERFFEL[118]>
#### ERFFEL[123]
<link=p.CAN3.ERFFEL[123]>
#### erffel[123]
<link=ERFFEL[123]>
#### capt3
<link=CAPT3>
#### LOAD1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.LOAD1
   p.TMR2.LOAD1
   p.TMR3.LOAD1
   p.TMR4.LOAD1
#### load1
<link=LOAD1>
#### CNTR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CNTR0
   p.TMR2.CNTR0
   p.TMR3.CNTR0
   p.TMR4.CNTR0
#### CMPLD20
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CMPLD20
   p.TMR2.CMPLD20
   p.TMR3.CMPLD20
   p.TMR4.CMPLD20
#### cmpld21
<link=CMPLD21>
#### dma1
<link=DMA1>
#### read_ctrl
<link=READ_CTRL>
#### TIMING2
<link=p.OCOTP.TIMING2>
#### cfg4
<link=CFG4>
#### CFG6
<link=p.OCOTP.CFG6>
#### ANA0
<link=p.OCOTP.ANA0>
#### otpmk1
<link=OTPMK1>
#### srk6
<link=SRK6>
#### SJC_RESP0
<link=p.OCOTP.SJC_RESP0>
#### SW_GP21
<link=p.OCOTP.SW_GP21>
#### ROM_PATCH0
<link=p.OCOTP.ROM_PATCH0>
#### rom_patch0
<link=ROM_PATCH0>
#### GP42
<link=p.OCOTP.GP42>
#### SW_MUX_CTL_PAD_GPIO_EMC_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_15>
#### sw_mux_ctl_pad_gpio_emc_15
<link=SW_MUX_CTL_PAD_GPIO_EMC_15>
#### SW_MUX_CTL_PAD_GPIO_EMC_24
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_24>
#### sw_mux_ctl_pad_gpio_emc_24
<link=SW_MUX_CTL_PAD_GPIO_EMC_24>
#### SW_MUX_CTL_PAD_GPIO_EMC_33
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_33>
#### sw_mux_ctl_pad_gpio_emc_33
<link=SW_MUX_CTL_PAD_GPIO_EMC_33>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_03>
#### sw_mux_ctl_pad_gpio_ad_b0_10
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_10>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_14>
#### sw_mux_ctl_pad_gpio_ad_b1_04
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_04>
#### sw_mux_ctl_pad_gpio_ad_b1_13
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_13>
#### sw_mux_ctl_pad_gpio_b0_06
<link=SW_MUX_CTL_PAD_GPIO_B0_06>
#### SW_MUX_CTL_PAD_GPIO_B0_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_07>
#### SW_MUX_CTL_PAD_GPIO_B1_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_09>
#### sw_mux_ctl_pad_gpio_b1_09
<link=SW_MUX_CTL_PAD_GPIO_B1_09>
#### SW_MUX_CTL_PAD_GPIO_B1_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_13>
#### sw_mux_ctl_pad_gpio_b1_13
<link=SW_MUX_CTL_PAD_GPIO_B1_13>
#### sw_mux_ctl_pad_gpio_sd_b0_03
<link=SW_MUX_CTL_PAD_GPIO_SD_B0_03>
#### sw_mux_ctl_pad_gpio_sd_b1_04
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_04>
#### SW_MUX_CTL_PAD_GPIO_SD_B1_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_08>
#### sw_pad_ctl_pad_gpio_emc_07
<link=SW_PAD_CTL_PAD_GPIO_EMC_07>
#### SW_PAD_CTL_PAD_GPIO_EMC_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_12>
#### SW_PAD_CTL_PAD_GPIO_EMC_23
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_23>
#### sw_pad_ctl_pad_gpio_emc_29
<link=SW_PAD_CTL_PAD_GPIO_EMC_29>
#### sw_pad_ctl_pad_gpio_emc_33
<link=SW_PAD_CTL_PAD_GPIO_EMC_33>
#### SW_PAD_CTL_PAD_GPIO_EMC_34
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_34>
#### SW_PAD_CTL_PAD_GPIO_EMC_41
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_41>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_06>
#### sw_pad_ctl_pad_gpio_ad_b1_04
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_04>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_12>
#### SW_PAD_CTL_PAD_GPIO_B1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_03>
#### sw_pad_ctl_pad_gpio_b1_05
<link=SW_PAD_CTL_PAD_GPIO_B1_05>
#### sw_pad_ctl_pad_gpio_sd_b1_00
<link=SW_PAD_CTL_PAD_GPIO_SD_B1_00>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_05>
#### CSI_VSYNC_SELECT_INPUT
<link=p.IOMUXC.CSI_VSYNC_SELECT_INPUT>
#### FLEXPWM1_PWMA2_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMA2_SELECT_INPUT>
#### flexpwm4_pwma3_select_input
<link=FLEXPWM4_PWMA3_SELECT_INPUT>
#### flexspia_data0_select_input
<link=FLEXSPIA_DATA0_SELECT_INPUT>
#### lpspi3_pcs0_select_input
<link=LPSPI3_PCS0_SELECT_INPUT>
#### lpuart3_rx_select_input
<link=LPUART3_RX_SELECT_INPUT>
#### lpuart8_tx_select_input
<link=LPUART8_TX_SELECT_INPUT>
#### QTIMER2_TIMER2_SELECT_INPUT
<link=p.IOMUXC.QTIMER2_TIMER2_SELECT_INPUT>
#### qtimer3_timer2_select_input
<link=QTIMER3_TIMER2_SELECT_INPUT>
#### sai1_rx_data0_select_input
<link=SAI1_RX_DATA0_SELECT_INPUT>
#### sai2_rx_data0_select_input
<link=SAI2_RX_DATA0_SELECT_INPUT>
#### usdhc2_data4_select_input
<link=USDHC2_DATA4_SELECT_INPUT>
#### xbar1_in09_select_input
<link=XBAR1_IN09_SELECT_INPUT>
#### xbar1_in25_select_input
<link=XBAR1_IN25_SELECT_INPUT>
#### sw_mux_ctl_pad_gpio_spi_b0_02
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_02>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_08>
#### sw_pad_ctl_pad_gpio_spi_b0_07
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_07>
#### SW_PAD_CTL_PAD_GPIO_SPI_B1_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_07>
#### flexspi2_ipp_ind_dqs_fa_select_input
<link=FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT>
#### flexspi2_ipp_ind_io_fa_bit1_select_input
<link=FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT>
#### GPT1_IPP_IND_CAPIN1_SELECT_INPUT
<link=p.IOMUXC.GPT1_IPP_IND_CAPIN1_SELECT_INPUT>
#### gpt1_ipp_ind_capin2_select_input
<link=GPT1_IPP_IND_CAPIN2_SELECT_INPUT>
#### sai3_ipg_clk_sai_mclk_select_input_2
<link=SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2>
#### ipcr1
<link=IPCR1>
#### RFDR[6]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[6]
   p.FLEXSPI2.RFDR[6]
#### RFDR[14]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[14]
   p.FLEXSPI2.RFDR[14]
#### lut[9]
<link=LUT[9]>
#### lut[11]
<link=LUT[11]>
#### lut[60]
<link=LUT[60]>
#### stat_clr
<link=STAT_CLR>
#### stat_tog
<link=STAT_TOG>
#### out_ctrl_tog
<link=OUT_CTRL_TOG>
#### ps_clrkeyhigh
<link=PS_CLRKEYHIGH>
#### CSC1_COEF1
<link=p.PXP.CSC1_COEF1>
#### next
<link=NEXT>
#### VDCTRL0_SET
<link=p.LCDIF.VDCTRL0_SET>
#### PIGEONCTRL2_SET
<link=p.LCDIF.PIGEONCTRL2_SET>
#### PIGEON_3_1
<link=p.LCDIF.PIGEON_3_1>
#### pigeon_4_1
<link=PIGEON_4_1>
#### pigeon_6_2
<link=PIGEON_6_2>
#### pigeon_9_1
<link=PIGEON_9_1>
#### pigeon_10_0
<link=PIGEON_10_0>
#### csistatfifo
<link=CSISTATFIFO>
#### csidmats_statfifo
<link=CSIDMATS_STATFIFO>
#### RXIC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RXIC
   p.ENET2.RXIC
#### IALR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IALR
   p.ENET2.IALR
#### RMON_T_FRAG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_FRAG
   p.ENET2.RMON_T_FRAG
#### RMON_T_P256TO511
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_P256TO511
   p.ENET2.RMON_T_P256TO511
#### rmon_t_p_gte2048
<link=RMON_T_P_GTE2048>
#### ieee_t_lcol
<link=IEEE_T_LCOL>
#### ieee_t_fdxfc
<link=IEEE_T_FDXFC>
#### hwrxbuf
<link=HWRXBUF>
#### PORTSC1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.PORTSC1
   p.USB2.PORTSC1
#### ENDPTCTRL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTCTRL1
   p.USB2.ENDPTCTRL1
#### endptctrl3
<link=ENDPTCTRL3>
#### usb_otg1_phy_ctrl_0
<link=USB_OTG1_PHY_CTRL_0>
#### br0
<link=BR0>
#### BR8
<link=p.SEMC.BR8>
#### nandcr3
<link=NANDCR3>
#### sramcr3
<link=SRAMCR3>
#### STS7
<link=p.SEMC.STS7>
#### sts9
<link=STS9>
#### CHANNELCTRL
<link=p.DCP.CHANNELCTRL>
#### CAPABILITY0
<link=p.DCP.CAPABILITY0>
#### key
<link=KEY>
#### PACKET0
<link=p.DCP.PACKET0>
#### CH0STAT_TOG
<link=p.DCP.CH0STAT_TOG>
#### ch2opts_clr
<link=CH2OPTS_CLR>
#### ch3stat_set
<link=CH3STAT_SET>
#### TDR[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TDR[3]
   p.SAI2.TDR[3]
   p.SAI3.TDR[3]
#### tfr[0]
<link=TFR[0]>
#### TFR[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TFR[2]
   p.SAI2.TFR[2]
   p.SAI3.TFR[2]
#### TMR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TMR
   p.SAI2.TMR
   p.SAI3.TMR
#### rcr2
<link=RCR2>
#### rmr
<link=RMR>
#### TRIG1_COUNTER
<link=p.ADC_ETC.TRIG1_COUNTER>
#### trig1_counter
<link=TRIG1_COUNTER>
#### TRIG1_CHAIN_3_2
<link=p.ADC_ETC.TRIG1_CHAIN_3_2>
#### TRIG1_CHAIN_5_4
<link=p.ADC_ETC.TRIG1_CHAIN_5_4>
#### trig2_chain_5_4
<link=TRIG2_CHAIN_5_4>
#### trig2_result_5_4
<link=TRIG2_RESULT_5_4>
#### trig2_result_7_6
<link=TRIG2_RESULT_7_6>
#### TRIG3_CHAIN_3_2
<link=p.ADC_ETC.TRIG3_CHAIN_3_2>
#### trig4_chain_1_0
<link=TRIG4_CHAIN_1_0>
#### trig4_chain_7_6
<link=TRIG4_CHAIN_7_6>
#### trig4_result_1_0
<link=TRIG4_RESULT_1_0>
#### TRIG5_CTRL
<link=p.ADC_ETC.TRIG5_CTRL>
#### trig6_ctrl
<link=TRIG6_CTRL>
#### trig6_chain_7_6
<link=TRIG6_CHAIN_7_6>
#### BFCRT233
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AOI1.BFCRT233
   p.AOI2.BFCRT233
#### sel5
<link=SEL5>
#### sel11
<link=SEL11>
#### SEL16
<link=p.XBARA1.SEL16>
#### sel37
<link=SEL37>
#### SEL38
<link=p.XBARA1.SEL38>
#### SEL44
<link=p.XBARA1.SEL44>
#### sel46
<link=SEL46>
#### sel60
<link=SEL60>
#### SEL62
<link=p.XBARA1.SEL62>
#### SM0FRACVAL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0FRACVAL1
   p.PWM2.SM0FRACVAL1
   p.PWM3.SM0FRACVAL1
   p.PWM4.SM0FRACVAL1
#### sm0frctrl
<link=SM0FRCTRL>
#### sm0dismap0
<link=SM0DISMAP0>
#### SM0DTCNT1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0DTCNT1
   p.PWM2.SM0DTCNT1
   p.PWM3.SM0DTCNT1
   p.PWM4.SM0DTCNT1
#### sm0captcompa
<link=SM0CAPTCOMPA>
#### sm0cval0cyc
<link=SM0CVAL0CYC>
#### sm0cval3cyc
<link=SM0CVAL3CYC>
#### SM1CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CTRL
   p.PWM2.SM1CTRL
   p.PWM3.SM1CTRL
   p.PWM4.SM1CTRL
#### sm1fracval1
<link=SM1FRACVAL1>
#### SM1DISMAP0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1DISMAP0
   p.PWM2.SM1DISMAP0
   p.PWM3.SM1DISMAP0
   p.PWM4.SM1DISMAP0
#### sm1dismap0
<link=SM1DISMAP0>
#### sm1captctrla
<link=SM1CAPTCTRLA>
#### sm1captcompa
<link=SM1CAPTCOMPA>
#### sm1cval0
<link=SM1CVAL0>
#### sm1cval4cyc
<link=SM1CVAL4CYC>
#### SM1CVAL5CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CVAL5CYC
   p.PWM2.SM1CVAL5CYC
   p.PWM3.SM1CVAL5CYC
   p.PWM4.SM1CVAL5CYC
#### SM2INIT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2INIT
   p.PWM2.SM2INIT
   p.PWM3.SM2INIT
   p.PWM4.SM2INIT
#### sm2init
<link=SM2INIT>
#### SM2CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CTRL
   p.PWM2.SM2CTRL
   p.PWM3.SM2CTRL
   p.PWM4.SM2CTRL
#### sm2val5
<link=SM2VAL5>
#### sm3cnt
<link=SM3CNT>
#### sm3init
<link=SM3INIT>
#### sm3val4
<link=SM3VAL4>
#### SM3CVAL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL0
   p.PWM2.SM3CVAL0
   p.PWM3.SM3CVAL0
   p.PWM4.SM3CVAL0
#### SM3CVAL5CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL5CYC
   p.PWM2.SM3CVAL5CYC
   p.PWM3.SM3CVAL5CYC
   p.PWM4.SM3CVAL5CYC
#### sm3cval5cyc
<link=SM3CVAL5CYC>
#### outen
<link=OUTEN>
#### CTR_NONCE0_W0
<link=p.BEE.CTR_NONCE0_W0>
#### STDR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.STDR
   p.LPI2C2.STDR
   p.LPI2C3.STDR
   p.LPI2C4.STDR
#### ACTLR
<link=p.SystemControl.ACTLR>
#### shpr1
<link=SHPR1>
#### dccmvac
<link=DCCMVAC>
#### nviciabr3
<link=NVICIABR3>
#### NVICIP6
<link=p.NVIC.NVICIP6>
#### nvicip14
<link=NVICIP14>
#### NVICIP27
<link=p.NVIC.NVICIP27>
#### nvicip44
<link=NVICIP44>
#### NVICIP56
<link=p.NVIC.NVICIP56>
#### nvicip58
<link=NVICIP58>
#### nvicip62
<link=NVICIP62>
#### NVICIP70
<link=p.NVIC.NVICIP70>
#### nvicip80
<link=NVICIP80>
#### NVICIP92
<link=p.NVIC.NVICIP92>
#### NVICIP105
<link=p.NVIC.NVICIP105>
#### nvicip110
<link=NVICIP110>
#### nvicip136
<link=NVICIP136>
#### nvicip147
<link=NVICIP147>
#### NVICIP149
<link=p.NVIC.NVICIP149>
#### NVICIP157
<link=p.NVIC.NVICIP157>
