#### p.aipstz1.opacr4
<link=p.AIPSTZ1.OPACR4>
#### p.aipstz2.opacr
<link=p.AIPSTZ2.OPACR>
#### AIPSTZ2.OPACR3
<link=p.AIPSTZ2.OPACR3>
#### aipstz3.opacr2
<link=p.AIPSTZ3.OPACR2>
#### p.DCDC
<lang=dft>
base: 0x40080000
REG0            REG1            REG2            REG3            
输入 p.DCDC.{reg_name} 以查看寄存器的详细信息
type p.DCDC.{reg_name} to check details of registers
</lang>
#### DCDC.REG3
<link=p.DCDC.REG3>
#### p.PIT.TFLG0
<lang=dft>
 (rw)  [1;33m0x4008410c[0m (0x40084000 + 0x010c)
Timer Flag Register
 (rw) (01)  [0;32mTIF[0m  - [00:00] -  Timer Interrupt Flag
      0 - TIF_0 :
         Timeout has not yet occurred.
      0x1 - TIF_1 :
         Timeout has occurred.
</lang>
#### pit.cval1
<link=p.PIT.CVAL1>
#### PIT.TFLG1
<link=p.PIT.TFLG1>
#### p.PIT.CVAL2
<lang=dft>
 (ro)  [1;33m0x40084124[0m (0x40084000 + 0x0124)
Current Timer Value Register
 (ro) (32)  [0;32mTVL[0m  - [31:00] -  Current Timer Value
</lang>
#### p.pit.ltmr64h
<link=p.PIT.LTMR64H>
#### p.cmp1.cr0
<link=p.CMP1.CR0>
#### p.CMP1.SCR
<lang=dft>
 (rw)  [1;33m0x40094003[0m (0x40094000 + 0x0003)
CMP Status and Control Register
 (ro) (01)  [0;32mCOUT[0m  - [00:00] -  Analog Comparator Output
 (rw) (01)  [0;32mCFF[0m  - [01:01] -  Analog Comparator Flag Falling
      0 - CFF_0 :
         Falling-edge on COUT has not been detected.
      0x1 - CFF_1 :
         Falling-edge on COUT has occurred.
 (rw) (01)  [0;32mCFR[0m  - [02:02] -  Analog Comparator Flag Rising
      0 - CFR_0 :
         Rising-edge on COUT has not been detected.
      0x1 - CFR_1 :
         Rising-edge on COUT has occurred.
 (rw) (01)  [0;32mIEF[0m  - [03:03] -  Comparator Interrupt Enable Falling
      0 - IEF_0 :
         Interrupt is disabled.
      0x1 - IEF_1 :
         Interrupt is enabled.
 (rw) (01)  [0;32mIER[0m  - [04:04] -  Comparator Interrupt Enable Rising
      0 - IER_0 :
         Interrupt is disabled.
      0x1 - IER_1 :
         Interrupt is enabled.
 (rw) (01)  [0;32mDMAEN[0m  - [06:06] -  DMA Enable Control
      0 - DMAEN_0 :
         DMA is disabled.
      0x1 - DMAEN_1 :
         DMA is enabled.
</lang>
#### p.cmp1.muxcr
<link=p.CMP1.MUXCR>
#### CMP2.CR0
<link=p.CMP2.CR0>
#### p.cmp3
<link=p.CMP3>
#### CMP4.CR0
<link=p.CMP4.CR0>
#### p.CMP4.DACCR
<lang=dft>
 (rw)  [1;33m0x4009401c[0m (0x40094018 + 0x0004)
DAC Control Register
 (rw) (06)  [0;32mVOSEL[0m  - [05:00] -  DAC Output Voltage Select
 (rw) (01)  [0;32mVRSEL[0m  - [06:06] -  Supply Voltage Reference Source Select
      0 - VRSEL_0 :
         Vin1 is selected as resistor ladder network supply reference.
      0x1 - VRSEL_1 :
         Vin2 is selected as resistor ladder network supply reference.
 (rw) (01)  [0;32mDACEN[0m  - [07:07] -  DAC Enable
      0 - DACEN_0 :
         DAC is disabled.
      0x1 - DACEN_1 :
         DAC is enabled.
</lang>
#### p.CMP4.MUXCR
<lang=dft>
 (rw)  [1;33m0x4009401d[0m (0x40094018 + 0x0005)
MUX Control Register
 (rw) (03)  [0;32mMSEL[0m  - [02:00] -  Minus Input Mux Control
      0 - MSEL_0 :
         IN0
      0x1 - MSEL_1 :
         IN1
      0x2 - MSEL_2 :
         IN2
      0x3 - MSEL_3 :
         IN3
      0x4 - MSEL_4 :
         IN4
      0x5 - MSEL_5 :
         IN5
      0x6 - MSEL_6 :
         IN6
      0x7 - MSEL_7 :
         IN7
 (rw) (03)  [0;32mPSEL[0m  - [05:03] -  Plus Input Mux Control
      0 - PSEL_0 :
         IN0
      0x1 - PSEL_1 :
         IN1
      0x2 - PSEL_2 :
         IN2
      0x3 - PSEL_3 :
         IN3
      0x4 - PSEL_4 :
         IN4
      0x5 - PSEL_5 :
         IN5
      0x6 - PSEL_6 :
         IN6
      0x7 - PSEL_7 :
         IN7
</lang>
#### iomuxc_snvs_gpr.gpr3
<link=p.IOMUXC_SNVS_GPR.GPR3>
#### p.iomuxc_snvs.sw_mux_ctl_pad_pmic_on_req
<link=p.IOMUXC_SNVS.SW_MUX_CTL_PAD_PMIC_ON_REQ>
#### p.iomuxc_gpr.gpr7
<link=p.IOMUXC_GPR.GPR7>
#### IOMUXC_GPR.GPR7
<link=p.IOMUXC_GPR.GPR7>
#### iomuxc_gpr.gpr8
<link=p.IOMUXC_GPR.GPR8>
#### IOMUXC_GPR.GPR11
<link=p.IOMUXC_GPR.GPR11>
#### p.IOMUXC_GPR.GPR13
<lang=dft>
 (rw)  [1;33m0x400ac034[0m (0x400ac000 + 0x0034)
GPR13 General Purpose Register
 (rw) (01)  [0;32mARCACHE_USDHC[0m  - [00:00] -  uSDHC block cacheable attribute value of AXI read transactions
      0 - ARCACHE_USDHC_0 :
         Cacheable attribute is off for read transactions.
      0x1 - ARCACHE_USDHC_1 :
         Cacheable attribute is on for read transactions.
 (rw) (01)  [0;32mAWCACHE_USDHC[0m  - [01:01] -  uSDHC block cacheable attribute value of AXI write transactions
      0 - AWCACHE_USDHC_0 :
         Cacheable attribute is off for write transactions.
      0x1 - AWCACHE_USDHC_1 :
         Cacheable attribute is on for write transactions.
 (rw) (01)  [0;32mCANFD_STOP_REQ[0m  - [04:04] -  CANFD stop request.
      0 - CANFD_STOP_REQ_0 :
         stop request off
      0x1 - CANFD_STOP_REQ_1 :
         stop request on
 (rw) (01)  [0;32mCACHE_ENET[0m  - [07:07] -  ENET block cacheable attribute value of AXI transactions
      0 - CACHE_ENET_0 :
         Cacheable attribute is off for read/write transactions.
      0x1 - CACHE_ENET_1 :
         Cacheable attribute is on for read/write transactions.
 (rw) (01)  [0;32mCACHE_USB[0m  - [13:13] -  USB block cacheable attribute value of AXI transactions
      0 - CACHE_USB_0 :
         Cacheable attribute is off for read/write transactions.
      0x1 - CACHE_USB_1 :
         Cacheable attribute is on for read/write transactions.
 (ro) (01)  [0;32mCANFD_STOP_ACK[0m  - [20:20] -  CANFD stop acknowledge.
      0 - CANFD_STOP_ACK_0 :
         CANFD stop acknowledge is not asserted
      0x1 - CANFD_STOP_ACK_1 :
         CANFD stop acknowledge is asserted
</lang>
#### p.iomuxc_gpr.gpr16
<link=p.IOMUXC_GPR.GPR16>
#### IOMUXC_GPR.GPR20
<link=p.IOMUXC_GPR.GPR20>
#### iomuxc_gpr.gpr23
<link=p.IOMUXC_GPR.GPR23>
#### iomuxc_gpr.gpr30
<link=p.IOMUXC_GPR.GPR30>
#### FLEXRAM.TCM_CTRL
<link=p.FLEXRAM.TCM_CTRL>
#### p.ewm.serv
<link=p.EWM.SERV>
#### p.EWM.CMPL
<lang=dft>
 (read-writeOnce)  [1;33m0x400b4002[0m (0x400b4000 + 0x0002)
Compare Low Register
 (read-writeOnce) (08)  [0;32mCOMPAREL[0m  - [07:00] -  COMPAREL
</lang>
#### WDOG1.WMCR
<link=p.WDOG1.WMCR>
#### wdog2.wicr
<link=p.WDOG2.WICR>
#### RTWDOG.TOVAL
<link=p.RTWDOG.TOVAL>
#### p.adc1.hc7
<link=p.ADC1.HC7>
#### p.adc1.r2
<link=p.ADC1.R2>
#### adc1.r2
<link=p.ADC1.R2>
#### p.ADC1.R6
<lang=dft>
 (ro)  [1;33m0x400c403c[0m (0x400c4000 + 0x003c)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### p.adc1.gc
<link=p.ADC1.GC>
#### p.adc1.cal
<link=p.ADC1.CAL>
#### p.adc2.hc3
<link=p.ADC2.HC3>
#### adc2.hc7
<link=p.ADC2.HC7>
#### p.ADC2.R0
<lang=dft>
 (ro)  [1;33m0x400c8024[0m (0x400c8000 + 0x0024)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### adc2.r6
<link=p.ADC2.R6>
#### p.trng.scr2l
<link=p.TRNG.SCR2L>
#### p.TRNG.SCR5C
<lang=dft>
 (ro)  [1;33m0x400cc034[0m (0x400cc000 + 0x0034)
Statistical Check Run Length 5 Count Register
 (ro) (11)  [0;32mR5_0_CT[0m  - [10:00] -  Runs of Zero, Length 5 Count
 (ro) (11)  [0;32mR5_1_CT[0m  - [26:16] -  Runs of One, Length 5 Count
</lang>
#### trng.scr5c
<link=p.TRNG.SCR5C>
#### p.trng.scr6pl
<link=p.TRNG.SCR6PL>
#### TRNG.SCR6PL
<link=p.TRNG.SCR6PL>
#### TRNG.STATUS
<link=p.TRNG.STATUS>
#### TRNG.ENT[9]
<link=p.TRNG.ENT[9]>
#### trng.ent[11]
<link=p.TRNG.ENT[11]>
#### p.trng.ent[14]
<link=p.TRNG.ENT[14]>
#### TRNG.ENT[14]
<link=p.TRNG.ENT[14]>
#### p.TRNG.PKRCNT98
<lang=dft>
 (ro)  [1;33m0x400cc090[0m (0x400cc000 + 0x0090)
Statistical Check Poker Count 9 and 8 Register
 (ro) (16)  [0;32mPKR_8_CT[0m  - [15:00] -  Poker 8h Count
 (ro) (16)  [0;32mPKR_9_CT[0m  - [31:16] -  Poker 9h Count
</lang>
#### p.trng.pkrcnt98
<link=p.TRNG.PKRCNT98>
#### p.trng.pkrcntfe
<link=p.TRNG.PKRCNTFE>
#### TRNG.SEC_CFG
<link=p.TRNG.SEC_CFG>
#### p.trng.vid2
<link=p.TRNG.VID2>
#### SNVS.HPRTCLR
<link=p.SNVS.HPRTCLR>
#### snvs.lpsrtclr
<link=p.SNVS.LPSRTCLR>
#### p.SNVS.LPZMKR[7]
<lang=dft>
 (rw)  [1;33m0x400d4088[0m (0x400d4000 + 0x0088)
SNVS_LP Zeroizable Master Key Register
 (rw) (32)  [0;32mZMK[0m  - [31:00] -  Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit Z
 MK value
</lang>
#### p.snvs.lpgpr_alias[3]
<link=p.SNVS.LPGPR_ALIAS[3]>
#### p.snvs.lpgpr[1]
<link=p.SNVS.LPGPR[1]>
#### p.SNVS.LPGPR[4]
<lang=dft>
 (rw)  [1;33m0x400d4110[0m (0x400d4000 + 0x0110)
SNVS_LP General Purpose Registers 0 .. 7
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### SNVS.LPGPR[7]
<link=p.SNVS.LPGPR[7]>
#### snvs.hpvidr2
<link=p.SNVS.HPVIDR2>
#### p.CCM_ANALOG.PLL_USB1
<lang=dft>
 (rw)  [1;33m0x400d8010[0m (0x400d8000 + 0x0010)
Analog USB1 480MHz PLL Control Register
 (rw) (01)  [0;32mDIV_SELECT[0m  - [01:01] -  This field controls the PLL loop divider. 0 - Fout=Fref*20; 1 - Fout=Fref*22.
 (rw) (01)  [0;32mEN_USB_CLKS[0m  - [06:06] -  Powers the 9-phase PLL outputs for USBPHYn
      0 - EN_USB_CLKS_0 :
         PLL outputs for USBPHYn off.
      0x1 - EN_USB_CLKS_1 :
         PLL outputs for USBPHYn on.
 (rw) (01)  [0;32mPOWER[0m  - [12:12] -  Powers up the PLL. This bit will be set automatically when USBPHY0 remote wakeu
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
#### ccm_analog.pll_usb1_clr
<link=p.CCM_ANALOG.PLL_USB1_CLR>
#### CCM_ANALOG.PLL_SYS_SET
<link=p.CCM_ANALOG.PLL_SYS_SET>
#### p.ccm_analog.pll_audio_set
<link=p.CCM_ANALOG.PLL_AUDIO_SET>
#### p.CCM_ANALOG.PLL_AUDIO_CLR
<lang=dft>
 (rw)  [1;33m0x400d8078[0m (0x400d8000 + 0x0078)
Analog Audio PLL control Register
 (rw) (07)  [0;32mDIV_SELECT[0m  - [06:00] -  This field controls the PLL loop divider. Valid range for DIV_SELECT divider va
 lue: 27~54.
 (rw) (01)  [0;32mPOWERDOWN[0m  - [12:12] -  Powers down the PLL.
 (rw) (01)  [0;32mENABLE[0m  - [13:13] -  Enable PLL output
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
 (ro) (01)  [0;32mLOCK[0m  - [31:31] -  1 - PLL is currently locked. 0 - PLL is not currently locked.
</lang>
#### CCM_ANALOG.PLL_VIDEO_TOG
<link=p.CCM_ANALOG.PLL_VIDEO_TOG>
#### p.CCM_ANALOG.PFD_480_TOG
<lang=dft>
 (rw)  [1;33m0x400d80fc[0m (0x400d8000 + 0x00fc)
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
#### CCM_ANALOG.MISC0
<link=p.CCM_ANALOG.MISC0>
#### p.pmu.reg_1p1_tog
<link=p.PMU.REG_1P1_TOG>
#### p.PMU.REG_2P5_TOG
<lang=dft>
 (rw)  [1;33m0x400d813c[0m (0x400d8000 + 0x013c)
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
#### p.PMU.REG_CORE_SET
<lang=dft>
 (rw)  [1;33m0x400d8144[0m (0x400d8000 + 0x0144)
Digital Regulator Core Register
 (rw) (05)  [0;32mREG0_TARG[0m  - [04:00] -  This field defines the target voltage for the ARM core power domain
      0 - REG0_TARG_0 :
         Power gated off
      0x1 - REG0_TARG_1 :
         Target core voltage = 0.725V
      0x2 - REG0_TARG_2 :
         Target core voltage = 0.750V
      0x3 - REG0_TARG_3 :
         Target core voltage = 0.775V
      0x10 - REG0_TARG_16 :
         Target core voltage = 1.100V
      0x1E - REG0_TARG_30 :
         Target core voltage = 1.450V
      0x1F - REG0_TARG_31 :
         Power FET switched full on. No regulation.
 (rw) (04)  [0;32mREG0_ADJ[0m  - [08:05] -  This bit field defines the adjustment bits to calibrate the target value of Reg
 0. The adjustment is applied on top on any adjustment applied to the global ref
 erence in the misc0 register.
      0 - REG0_ADJ_0 :
         No adjustment
      0x1 - REG0_ADJ_1 :
         + 0.25%
      0x2 - REG0_ADJ_2 :
         + 0.50%
      0x3 - REG0_ADJ_3 :
         + 0.75%
      0x4 - REG0_ADJ_4 :
         + 1.00%
      0x5 - REG0_ADJ_5 :
         + 1.25%
      0x6 - REG0_ADJ_6 :
         + 1.50%
      0x7 - REG0_ADJ_7 :
         + 1.75%
      0x8 - REG0_ADJ_8 :
         - 0.25%
      0x9 - REG0_ADJ_9 :
         - 0.50%
      0xA - REG0_ADJ_10 :
         - 0.75%
      0xB - REG0_ADJ_11 :
         - 1.00%
      0xC - REG0_ADJ_12 :
         - 1.25%
      0xD - REG0_ADJ_13 :
         - 1.50%
      0xE - REG0_ADJ_14 :
         - 1.75%
      0xF - REG0_ADJ_15 :
         - 2.00%
 (rw) (05)  [0;32mREG1_TARG[0m  - [13:09] -  This bit field defines the target voltage for the vpu/gpu power domain. Single 
 bit increments reflect 25mV core voltage steps. Not all steps will make sense t
 o use either because of input supply limitations or load operation.
      0 - REG1_TARG_0 :
         Power gated off
      0x1 - REG1_TARG_1 :
         Target core voltage = 0.725V
      0x2 - REG1_TARG_2 :
         Target core voltage = 0.750V
      0x3 - REG1_TARG_3 :
         Target core voltage = 0.775V
      0x10 - REG1_TARG_16 :
         Target core voltage = 1.100V
      0x1E - REG1_TARG_30 :
         Target core voltage = 1.450V
      0x1F - REG1_TARG_31 :
         Power FET switched full on. No regulation.
 (rw) (04)  [0;32mREG1_ADJ[0m  - [17:14] -  This bit field defines the adjustment bits to calibrate the target value of Reg
 1. The adjustment is applied on top on any adjustment applied to the global ref
 erence in the misc0 register.
      0 - REG1_ADJ_0 :
         No adjustment
      0x1 - REG1_ADJ_1 :
         + 0.25%
      0x2 - REG1_ADJ_2 :
         + 0.50%
      0x3 - REG1_ADJ_3 :
         + 0.75%
      0x4 - REG1_ADJ_4 :
         + 1.00%
      0x5 - REG1_ADJ_5 :
         + 1.25%
      0x6 - REG1_ADJ_6 :
         + 1.50%
      0x7 - REG1_ADJ_7 :
         + 1.75%
      0x8 - REG1_ADJ_8 :
         - 0.25%
      0x9 - REG1_ADJ_9 :
         - 0.50%
      0xA - REG1_ADJ_10 :
         - 0.75%
      0xB - REG1_ADJ_11 :
         - 1.00%
      0xC - REG1_ADJ_12 :
         - 1.25%
      0xD - REG1_ADJ_13 :
         - 1.50%
      0xE - REG1_ADJ_14 :
         - 1.75%
      0xF - REG1_ADJ_15 :
         - 2.00%
 (rw) (05)  [0;32mREG2_TARG[0m  - [22:18] -  This field defines the target voltage for the SOC power domain
      0 - REG2_TARG_0 :
         Power gated off
      0x1 - REG2_TARG_1 :
         Target core voltage = 0.725V
      0x2 - REG2_TARG_2 :
         Target core voltage = 0.750V
      0x3 - REG2_TARG_3 :
         Target core voltage = 0.775V
      0x10 - REG2_TARG_16 :
         Target core voltage = 1.100V
      0x1E - REG2_TARG_30 :
         Target core voltage = 1.450V
      0x1F - REG2_TARG_31 :
         Power FET switched full on. No regulation.
 (rw) (04)  [0;32mREG2_ADJ[0m  - [26:23] -  This bit field defines the adjustment bits to calibrate the target value of Reg
 2. The adjustment is applied on top on any adjustment applied to the global ref
 erence in the misc0 register.
      0 - REG2_ADJ_0 :
         No adjustment
      0x1 - REG2_ADJ_1 :
         + 0.25%
      0x2 - REG2_ADJ_2 :
         + 0.50%
      0x3 - REG2_ADJ_3 :
         + 0.75%
      0x4 - REG2_ADJ_4 :
         + 1.00%
      0x5 - REG2_ADJ_5 :
         + 1.25%
      0x6 - REG2_ADJ_6 :
         + 1.50%
      0x7 - REG2_ADJ_7 :
         + 1.75%
      0x8 - REG2_ADJ_8 :
         - 0.25%
      0x9 - REG2_ADJ_9 :
         - 0.50%
      0xA - REG2_ADJ_10 :
         - 0.75%
      0xB - REG2_ADJ_11 :
         - 1.00%
      0xC - REG2_ADJ_12 :
         - 1.25%
      0xD - REG2_ADJ_13 :
         - 1.50%
      0xE - REG2_ADJ_14 :
         - 1.75%
      0xF - REG2_ADJ_15 :
         - 2.00%
 (rw) (02)  [0;32mRAMP_RATE[0m  - [28:27] -  Regulator voltage ramp rate.
      0 - RAMP_RATE_0 :
         Fast
      0x1 - RAMP_RATE_1 :
         Medium Fast
      0x2 - RAMP_RATE_2 :
         Medium Slow
      0x3 - RAMP_RATE_3 :
         Slow
 (rw) (01)  [0;32mFET_ODRIVE[0m  - [29:29] -  If set, increases the gate drive on power gating FETs to reduce leakage in the 
 off state
</lang>
#### p.PMU.REG_CORE_TOG
<lang=dft>
 (rw)  [1;33m0x400d814c[0m (0x400d8000 + 0x014c)
Digital Regulator Core Register
 (rw) (05)  [0;32mREG0_TARG[0m  - [04:00] -  This field defines the target voltage for the ARM core power domain
      0 - REG0_TARG_0 :
         Power gated off
      0x1 - REG0_TARG_1 :
         Target core voltage = 0.725V
      0x2 - REG0_TARG_2 :
         Target core voltage = 0.750V
      0x3 - REG0_TARG_3 :
         Target core voltage = 0.775V
      0x10 - REG0_TARG_16 :
         Target core voltage = 1.100V
      0x1E - REG0_TARG_30 :
         Target core voltage = 1.450V
      0x1F - REG0_TARG_31 :
         Power FET switched full on. No regulation.
 (rw) (04)  [0;32mREG0_ADJ[0m  - [08:05] -  This bit field defines the adjustment bits to calibrate the target value of Reg
 0. The adjustment is applied on top on any adjustment applied to the global ref
 erence in the misc0 register.
      0 - REG0_ADJ_0 :
         No adjustment
      0x1 - REG0_ADJ_1 :
         + 0.25%
      0x2 - REG0_ADJ_2 :
         + 0.50%
      0x3 - REG0_ADJ_3 :
         + 0.75%
      0x4 - REG0_ADJ_4 :
         + 1.00%
      0x5 - REG0_ADJ_5 :
         + 1.25%
      0x6 - REG0_ADJ_6 :
         + 1.50%
      0x7 - REG0_ADJ_7 :
         + 1.75%
      0x8 - REG0_ADJ_8 :
         - 0.25%
      0x9 - REG0_ADJ_9 :
         - 0.50%
      0xA - REG0_ADJ_10 :
         - 0.75%
      0xB - REG0_ADJ_11 :
         - 1.00%
      0xC - REG0_ADJ_12 :
         - 1.25%
      0xD - REG0_ADJ_13 :
         - 1.50%
      0xE - REG0_ADJ_14 :
         - 1.75%
      0xF - REG0_ADJ_15 :
         - 2.00%
 (rw) (05)  [0;32mREG1_TARG[0m  - [13:09] -  This bit field defines the target voltage for the vpu/gpu power domain. Single 
 bit increments reflect 25mV core voltage steps. Not all steps will make sense t
 o use either because of input supply limitations or load operation.
      0 - REG1_TARG_0 :
         Power gated off
      0x1 - REG1_TARG_1 :
         Target core voltage = 0.725V
      0x2 - REG1_TARG_2 :
         Target core voltage = 0.750V
      0x3 - REG1_TARG_3 :
         Target core voltage = 0.775V
      0x10 - REG1_TARG_16 :
         Target core voltage = 1.100V
      0x1E - REG1_TARG_30 :
         Target core voltage = 1.450V
      0x1F - REG1_TARG_31 :
         Power FET switched full on. No regulation.
 (rw) (04)  [0;32mREG1_ADJ[0m  - [17:14] -  This bit field defines the adjustment bits to calibrate the target value of Reg
 1. The adjustment is applied on top on any adjustment applied to the global ref
 erence in the misc0 register.
      0 - REG1_ADJ_0 :
         No adjustment
      0x1 - REG1_ADJ_1 :
         + 0.25%
      0x2 - REG1_ADJ_2 :
         + 0.50%
      0x3 - REG1_ADJ_3 :
         + 0.75%
      0x4 - REG1_ADJ_4 :
         + 1.00%
      0x5 - REG1_ADJ_5 :
         + 1.25%
      0x6 - REG1_ADJ_6 :
         + 1.50%
      0x7 - REG1_ADJ_7 :
         + 1.75%
      0x8 - REG1_ADJ_8 :
         - 0.25%
      0x9 - REG1_ADJ_9 :
         - 0.50%
      0xA - REG1_ADJ_10 :
         - 0.75%
      0xB - REG1_ADJ_11 :
         - 1.00%
      0xC - REG1_ADJ_12 :
         - 1.25%
      0xD - REG1_ADJ_13 :
         - 1.50%
      0xE - REG1_ADJ_14 :
         - 1.75%
      0xF - REG1_ADJ_15 :
         - 2.00%
 (rw) (05)  [0;32mREG2_TARG[0m  - [22:18] -  This field defines the target voltage for the SOC power domain
      0 - REG2_TARG_0 :
         Power gated off
      0x1 - REG2_TARG_1 :
         Target core voltage = 0.725V
      0x2 - REG2_TARG_2 :
         Target core voltage = 0.750V
      0x3 - REG2_TARG_3 :
         Target core voltage = 0.775V
      0x10 - REG2_TARG_16 :
         Target core voltage = 1.100V
      0x1E - REG2_TARG_30 :
         Target core voltage = 1.450V
      0x1F - REG2_TARG_31 :
         Power FET switched full on. No regulation.
 (rw) (04)  [0;32mREG2_ADJ[0m  - [26:23] -  This bit field defines the adjustment bits to calibrate the target value of Reg
 2. The adjustment is applied on top on any adjustment applied to the global ref
 erence in the misc0 register.
      0 - REG2_ADJ_0 :
         No adjustment
      0x1 - REG2_ADJ_1 :
         + 0.25%
      0x2 - REG2_ADJ_2 :
         + 0.50%
      0x3 - REG2_ADJ_3 :
         + 0.75%
      0x4 - REG2_ADJ_4 :
         + 1.00%
      0x5 - REG2_ADJ_5 :
         + 1.25%
      0x6 - REG2_ADJ_6 :
         + 1.50%
      0x7 - REG2_ADJ_7 :
         + 1.75%
      0x8 - REG2_ADJ_8 :
         - 0.25%
      0x9 - REG2_ADJ_9 :
         - 0.50%
      0xA - REG2_ADJ_10 :
         - 0.75%
      0xB - REG2_ADJ_11 :
         - 1.00%
      0xC - REG2_ADJ_12 :
         - 1.25%
      0xD - REG2_ADJ_13 :
         - 1.50%
      0xE - REG2_ADJ_14 :
         - 1.75%
      0xF - REG2_ADJ_15 :
         - 2.00%
 (rw) (02)  [0;32mRAMP_RATE[0m  - [28:27] -  Regulator voltage ramp rate.
      0 - RAMP_RATE_0 :
         Fast
      0x1 - RAMP_RATE_1 :
         Medium Fast
      0x2 - RAMP_RATE_2 :
         Medium Slow
      0x3 - RAMP_RATE_3 :
         Slow
 (rw) (01)  [0;32mFET_ODRIVE[0m  - [29:29] -  If set, increases the gate drive on power gating FETs to reduce leakage in the 
 off state
</lang>
#### PMU.REG_CORE_TOG
<link=p.PMU.REG_CORE_TOG>
#### p.pmu.misc0_clr
<link=p.PMU.MISC0_CLR>
#### p.pmu.misc2_set
<link=p.PMU.MISC2_SET>
#### p.PMU.MISC2_CLR
<lang=dft>
 (rw)  [1;33m0x400d8178[0m (0x400d8000 + 0x0178)
Miscellaneous Control Register
 (ro) (03)  [0;32mREG0_BO_OFFSET[0m  - [02:00] -  This field defines the brown out voltage offset for the CORE power domain
      0x4 - REG0_BO_OFFSET_4 :
         Brownout offset = 0.100V
      0x7 - REG0_BO_OFFSET_7 :
         Brownout offset = 0.175V
 (ro) (01)  [0;32mREG0_BO_STATUS[0m  - [03:03] -  Reg0 brownout status bit.
      0x1 - REG0_BO_STATUS_1 :
         Brownout, supply is below target minus brownout offset.
 (rw) (01)  [0;32mREG0_ENABLE_BO[0m  - [05:05] -  Enables the brownout detection.
 (rw) (01)  [0;32mPLL3_disable[0m  - [07:07] -  Default value of "0"
 (ro) (03)  [0;32mREG1_BO_OFFSET[0m  - [10:08] -  This field defines the brown out voltage offset for the xPU power domain
      0x4 - REG1_BO_OFFSET_4 :
         Brownout offset = 0.100V
      0x7 - REG1_BO_OFFSET_7 :
         Brownout offset = 0.175V
 (ro) (01)  [0;32mREG1_BO_STATUS[0m  - [11:11] -  Reg1 brownout status bit.
      0x1 - REG1_BO_STATUS_1 :
         Brownout, supply is below target minus brownout offset.
 (rw) (01)  [0;32mREG1_ENABLE_BO[0m  - [13:13] -  Enables the brownout detection.
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
 (ro) (01)  [0;32mREG2_BO_STATUS[0m  - [19:19] -  Reg2 brownout status bit.
 (rw) (01)  [0;32mREG2_ENABLE_BO[0m  - [21:21] -  Enables the brownout detection.
 (ro) (01)  [0;32mREG2_OK[0m  - [22:22] -  Signals that the voltage is above the brownout level for the SOC supply
 (rw) (01)  [0;32mAUDIO_DIV_MSB[0m  - [23:23] -  MSB of Post-divider for Audio PLL
      0 - AUDIO_DIV_MSB_0 :
         divide by 1 (Default)
      0x1 - AUDIO_DIV_MSB_1 :
         divide by 2
 (rw) (02)  [0;32mREG0_STEP_TIME[0m  - [25:24] -  Number of clock periods (24MHz clock).
      0 - 64_CLOCKS :
         64
      0x1 - 128_CLOCKS :
         128
      0x2 - 256_CLOCKS :
         256
      0x3 - 512_CLOCKS :
         512
 (rw) (02)  [0;32mREG1_STEP_TIME[0m  - [27:26] -  Number of clock periods (24MHz clock).
      0 - 64_CLOCKS :
         64
      0x1 - 128_CLOCKS :
         128
      0x2 - 256_CLOCKS :
         256
      0x3 - 512_CLOCKS :
         512
 (rw) (02)  [0;32mREG2_STEP_TIME[0m  - [29:28] -  Number of clock periods (24MHz clock).
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
#### p.usb_analog.usb1_chrg_detect_tog
<link=p.USB_ANALOG.USB1_CHRG_DETECT_TOG>
#### p.usb_analog.usb1_loopback_tog
<link=p.USB_ANALOG.USB1_LOOPBACK_TOG>
#### p.usb_analog.usb1_misc_set
<link=p.USB_ANALOG.USB1_MISC_SET>
#### USB_ANALOG.USB2_VBUS_DETECT_STAT
<link=p.USB_ANALOG.USB2_VBUS_DETECT_STAT>
#### p.USB_ANALOG.USB2_CHRG_DETECT_STAT
<lang=dft>
 (ro)  [1;33m0x400d8230[0m (0x400d8000 + 0x0230)
USB Charger Detect Status Register
 (ro) (01)  [0;32mPLUG_CONTACT[0m  - [00:00] -  State of the USB plug contact detector.
      0 - NO_CONTACT :
         The USB plug has not made contact.
      0x1 - GOOD_CONTACT :
         The USB plug has made good contact.
 (ro) (01)  [0;32mCHRG_DETECTED[0m  - [01:01] -  State of charger detection. This bit is a read only version of the state of the
  analog signal.
      0 - CHARGER_NOT_PRESENT :
         The USB port is not connected to a charger.
      0x1 - CHARGER_PRESENT :
         A charger (either a dedicated charger or a host charger) is connected t
         o the USB port.
 (ro) (01)  [0;32mDM_STATE[0m  - [02:02] -  DM line state output of the charger detector.
 (ro) (01)  [0;32mDP_STATE[0m  - [03:03] -  DP line state output of the charger detector.
</lang>
#### usb_analog.usb2_chrg_detect_stat
<link=p.USB_ANALOG.USB2_CHRG_DETECT_STAT>
#### USB_ANALOG.USB2_MISC_SET
<link=p.USB_ANALOG.USB2_MISC_SET>
#### xtalosc24m.osc_config0_tog
<link=p.XTALOSC24M.OSC_CONFIG0_TOG>
#### xtalosc24m.osc_config2_set
<link=p.XTALOSC24M.OSC_CONFIG2_SET>
#### p.USBPHY1.TX_TOG
<lang=dft>
 (rw)  [1;33m0x400d901c[0m (0x400d9000 + 0x001c)
USB PHY Transmitter Control Register
 (rw) (04)  [0;32mD_CAL[0m  - [03:00] -  Resistor Trimming Code: 0000 = 0.16% 0111 = Nominal 1111 = +25%
 (rw) (04)  [0;32mRSVD0[0m  - [07:04] -  Reserved. Note: This bit should remain clear.
 (rw) (04)  [0;32mTXCAL45DN[0m  - [11:08] -  Decode to select a 45-Ohm resistance to the USB_DN output pin
 (rw) (04)  [0;32mRSVD1[0m  - [15:12] -  Reserved. Note: This bit should remain clear.
 (rw) (04)  [0;32mTXCAL45DP[0m  - [19:16] -  Decode to select a 45-Ohm resistance to the USB_DP output pin
 (ro) (06)  [0;32mRSVD2[0m  - [25:20] -  Reserved.
 (rw) (03)  [0;32mUSBPHY_TX_EDGECTRL[0m  - [28:26] -  Controls the edge-rate of the current sensing transistors used in HS transmit
 (ro) (03)  [0;32mRSVD5[0m  - [31:29] -  Reserved.
</lang>
#### usbphy1.debug_tog
<link=p.USBPHY1.DEBUG_TOG>
#### usbphy1.debug1
<link=p.USBPHY1.DEBUG1>
#### USBPHY1.DEBUG1_CLR
<link=p.USBPHY1.DEBUG1_CLR>
#### usbphy1.debug1_tog
<link=p.USBPHY1.DEBUG1_TOG>
#### USBPHY1.DEBUG1_TOG
<link=p.USBPHY1.DEBUG1_TOG>
#### usbphy1.version
<link=p.USBPHY1.VERSION>
#### usbphy2.pwd_clr
<link=p.USBPHY2.PWD_CLR>
#### usbphy2.pwd_tog
<link=p.USBPHY2.PWD_TOG>
#### USBPHY2.TX
<link=p.USBPHY2.TX>
#### p.USBPHY2.DEBUG_CLR
<lang=dft>
 (rw)  [1;33m0x400da058[0m (0x400da000 + 0x0058)
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
#### usbphy2.debug0_status
<link=p.USBPHY2.DEBUG0_STATUS>
#### usbphy2.debug1_clr
<link=p.USBPHY2.DEBUG1_CLR>
#### p.CSU.CSL10
<lang=dft>
 (rw)  [1;33m0x400dc028[0m (0x400dc000 + 0x0028)
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
#### p.csu.csl10
<link=p.CSU.CSL10>
#### csu.csl13
<link=p.CSU.CSL13>
#### CSU.CSL13
<link=p.CSU.CSL13>
#### p.CSU.CSL25
<lang=dft>
 (rw)  [1;33m0x400dc064[0m (0x400dc000 + 0x0064)
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
#### p.csu.csl25
<link=p.CSU.CSL25>
#### csu.csl27
<link=p.CSU.CSL27>
#### CSU.CSL27
<link=p.CSU.CSL27>
#### p.TSC.PRE_CHARGE_TIME
<lang=dft>
 (rw)  [1;33m0x400e0010[0m (0x400e0000 + 0x0010)
no description available
 (rw) (32)  [0;32mPRE_CHARGE_TIME[0m  - [31:00] -  Before detection, the top screen needs some time before being pulled up to a hi
 gh voltage.
</lang>
#### p.dma0.erq
<link=p.DMA0.ERQ>
#### p.DMA0.DCHPRI0
<lang=dft>
 (rw)  [1;33m0x400e8103[0m (0x400e8000 + 0x0103)
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
#### dma0.dchpri4
<link=p.DMA0.DCHPRI4>
#### p.DMA0.DCHPRI14
<lang=dft>
 (rw)  [1;33m0x400e810d[0m (0x400e8000 + 0x010d)
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
#### p.dma0.dchpri16
<link=p.DMA0.DCHPRI16>
#### DMA0.DCHPRI20
<link=p.DMA0.DCHPRI20>
#### p.DMA0.DCHPRI25
<lang=dft>
 (rw)  [1;33m0x400e811a[0m (0x400e8000 + 0x011a)
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
#### p.DMA0.TCD0_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9008[0m (0x400e8000 + 0x1008)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.dma0.tcd0_citer_elinkyes
<link=p.DMA0.TCD0_CITER_ELINKYES>
#### dma0.tcd0_csr
<link=p.DMA0.TCD0_CSR>
#### p.DMA0.TCD0_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e901e[0m (0x400e8000 + 0x101e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD1_NBYTES_MLOFFYES
<link=p.DMA0.TCD1_NBYTES_MLOFFYES>
#### p.dma0.tcd2_attr
<link=p.DMA0.TCD2_ATTR>
#### dma0.tcd3_saddr
<link=p.DMA0.TCD3_SADDR>
#### p.dma0.tcd3_soff
<link=p.DMA0.TCD3_SOFF>
#### dma0.tcd3_nbytes_mloffno
<link=p.DMA0.TCD3_NBYTES_MLOFFNO>
#### p.dma0.tcd3_nbytes_mloffyes
<link=p.DMA0.TCD3_NBYTES_MLOFFYES>
#### dma0.tcd3_nbytes_mloffyes
<link=p.DMA0.TCD3_NBYTES_MLOFFYES>
#### p.dma0.tcd3_biter_elinkno
<link=p.DMA0.TCD3_BITER_ELINKNO>
#### DMA0.TCD4_NBYTES_MLOFFYES
<link=p.DMA0.TCD4_NBYTES_MLOFFYES>
#### DMA0.TCD4_DADDR
<link=p.DMA0.TCD4_DADDR>
#### p.DMA0.TCD4_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9098[0m (0x400e8000 + 0x1098)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.dma0.tcd4_dlastsga
<link=p.DMA0.TCD4_DLASTSGA>
#### dma0.tcd4_dlastsga
<link=p.DMA0.TCD4_DLASTSGA>
#### DMA0.TCD4_CSR
<link=p.DMA0.TCD4_CSR>
#### p.DMA0.TCD5_SOFF
<lang=dft>
 (rw)  [1;33m0x400e90a4[0m (0x400e8000 + 0x10a4)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.DMA0.TCD5_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e90b8[0m (0x400e8000 + 0x10b8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### dma0.tcd5_dlastsga
<link=p.DMA0.TCD5_DLASTSGA>
#### p.DMA0.TCD5_CSR
<lang=dft>
 (rw)  [1;33m0x400e90bc[0m (0x400e8000 + 0x10bc)
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
#### p.DMA0.TCD5_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e90be[0m (0x400e8000 + 0x10be)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD5_BITER_ELINKNO
<link=p.DMA0.TCD5_BITER_ELINKNO>
#### p.DMA0.TCD6_SADDR
<lang=dft>
 (rw)  [1;33m0x400e90c0[0m (0x400e8000 + 0x10c0)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.dma0.tcd6_citer_elinkyes
<link=p.DMA0.TCD6_CITER_ELINKYES>
#### DMA0.TCD6_DLASTSGA
<link=p.DMA0.TCD6_DLASTSGA>
#### p.DMA0.TCD6_CSR
<lang=dft>
 (rw)  [1;33m0x400e90dc[0m (0x400e8000 + 0x10dc)
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
#### p.DMA0.TCD6_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e90de[0m (0x400e8000 + 0x10de)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD7_DLASTSGA
<link=p.DMA0.TCD7_DLASTSGA>
#### DMA0.TCD7_CSR
<link=p.DMA0.TCD7_CSR>
#### dma0.tcd8_nbytes_mlno
<link=p.DMA0.TCD8_NBYTES_MLNO>
#### p.DMA0.TCD9_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9120[0m (0x400e8000 + 0x1120)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### dma0.tcd9_slast
<link=p.DMA0.TCD9_SLAST>
#### p.DMA0.TCD9_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9136[0m (0x400e8000 + 0x1136)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd9_citer_elinkyes
<link=p.DMA0.TCD9_CITER_ELINKYES>
#### p.DMA0.TCD9_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e913e[0m (0x400e8000 + 0x113e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD9_BITER_ELINKNO
<link=p.DMA0.TCD9_BITER_ELINKNO>
#### p.dma0.tcd9_biter_elinkyes
<link=p.DMA0.TCD9_BITER_ELINKYES>
#### dma0.tcd10_attr
<link=p.DMA0.TCD10_ATTR>
#### p.dma0.tcd10_nbytes_mloffno
<link=p.DMA0.TCD10_NBYTES_MLOFFNO>
#### dma0.tcd10_daddr
<link=p.DMA0.TCD10_DADDR>
#### p.DMA0.TCD10_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9154[0m (0x400e8000 + 0x1154)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### DMA0.TCD11_ATTR
<link=p.DMA0.TCD11_ATTR>
#### dma0.tcd11_nbytes_mloffno
<link=p.DMA0.TCD11_NBYTES_MLOFFNO>
#### p.DMA0.TCD11_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9174[0m (0x400e8000 + 0x1174)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### DMA0.TCD11_CITER_ELINKNO
<link=p.DMA0.TCD11_CITER_ELINKNO>
#### p.dma0.tcd12_soff
<link=p.DMA0.TCD12_SOFF>
#### DMA0.TCD12_SOFF
<link=p.DMA0.TCD12_SOFF>
#### p.DMA0.TCD12_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9188[0m (0x400e8000 + 0x1188)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### DMA0.TCD12_SLAST
<link=p.DMA0.TCD12_SLAST>
#### p.DMA0.TCD12_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e919e[0m (0x400e8000 + 0x119e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd13_soff
<link=p.DMA0.TCD13_SOFF>
#### DMA0.TCD13_NBYTES_MLOFFNO
<link=p.DMA0.TCD13_NBYTES_MLOFFNO>
#### dma0.tcd13_slast
<link=p.DMA0.TCD13_SLAST>
#### DMA0.TCD13_DLASTSGA
<link=p.DMA0.TCD13_DLASTSGA>
#### p.dma0.tcd13_biter_elinkyes
<link=p.DMA0.TCD13_BITER_ELINKYES>
#### p.dma0.tcd14_saddr
<link=p.DMA0.TCD14_SADDR>
#### p.DMA0.TCD14_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e91c8[0m (0x400e8000 + 0x11c8)
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
#### p.DMA0.TCD14_DADDR
<lang=dft>
 (rw)  [1;33m0x400e91d0[0m (0x400e8000 + 0x11d0)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.DMA0.TCD14_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e91d8[0m (0x400e8000 + 0x11d8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.dma0.tcd14_biter_elinkno
<link=p.DMA0.TCD14_BITER_ELINKNO>
#### DMA0.TCD15_NBYTES_MLNO
<link=p.DMA0.TCD15_NBYTES_MLNO>
#### dma0.tcd15_citer_elinkno
<link=p.DMA0.TCD15_CITER_ELINKNO>
#### p.DMA0.TCD15_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e91f8[0m (0x400e8000 + 0x11f8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### dma0.tcd15_dlastsga
<link=p.DMA0.TCD15_DLASTSGA>
#### p.DMA0.TCD15_CSR
<lang=dft>
 (rw)  [1;33m0x400e91fc[0m (0x400e8000 + 0x11fc)
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
#### DMA0.TCD16_SADDR
<link=p.DMA0.TCD16_SADDR>
#### DMA0.TCD16_BITER_ELINKNO
<link=p.DMA0.TCD16_BITER_ELINKNO>
#### p.dma0.tcd16_biter_elinkyes
<link=p.DMA0.TCD16_BITER_ELINKYES>
#### dma0.tcd16_biter_elinkyes
<link=p.DMA0.TCD16_BITER_ELINKYES>
#### p.dma0.tcd17_csr
<link=p.DMA0.TCD17_CSR>
#### p.dma0.tcd18_biter_elinkno
<link=p.DMA0.TCD18_BITER_ELINKNO>
#### DMA0.TCD19_SADDR
<link=p.DMA0.TCD19_SADDR>
#### p.DMA0.TCD19_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9264[0m (0x400e8000 + 0x1264)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### dma0.tcd19_doff
<link=p.DMA0.TCD19_DOFF>
#### dma0.tcd19_citer_elinkno
<link=p.DMA0.TCD19_CITER_ELINKNO>
#### DMA0.TCD19_CSR
<link=p.DMA0.TCD19_CSR>
#### DMA0.TCD20_SADDR
<link=p.DMA0.TCD20_SADDR>
#### p.dma0.tcd20_attr
<link=p.DMA0.TCD20_ATTR>
#### p.dma0.tcd20_citer_elinkno
<link=p.DMA0.TCD20_CITER_ELINKNO>
#### dma0.tcd20_csr
<link=p.DMA0.TCD20_CSR>
#### p.dma0.tcd20_biter_elinkno
<link=p.DMA0.TCD20_BITER_ELINKNO>
#### DMA0.TCD21_ATTR
<link=p.DMA0.TCD21_ATTR>
#### dma0.tcd21_dlastsga
<link=p.DMA0.TCD21_DLASTSGA>
#### p.DMA0.TCD21_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e92be[0m (0x400e8000 + 0x12be)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD21_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e92be[0m (0x400e8000 + 0x12be)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD22_ATTR
<lang=dft>
 (rw)  [1;33m0x400e92c6[0m (0x400e8000 + 0x12c6)
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
#### DMA0.TCD22_DADDR
<link=p.DMA0.TCD22_DADDR>
#### dma0.tcd23_slast
<link=p.DMA0.TCD23_SLAST>
#### dma0.tcd23_dlastsga
<link=p.DMA0.TCD23_DLASTSGA>
#### dma0.tcd24_saddr
<link=p.DMA0.TCD24_SADDR>
#### p.DMA0.TCD24_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9316[0m (0x400e8000 + 0x1316)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd24_citer_elinkyes
<link=p.DMA0.TCD24_CITER_ELINKYES>
#### p.DMA0.TCD24_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9318[0m (0x400e8000 + 0x1318)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.dma0.tcd24_dlastsga
<link=p.DMA0.TCD24_DLASTSGA>
#### DMA0.TCD24_BITER_ELINKNO
<link=p.DMA0.TCD24_BITER_ELINKNO>
#### p.DMA0.TCD25_SLAST
<lang=dft>
 (rw)  [1;33m0x400e932c[0m (0x400e8000 + 0x132c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.DMA0.TCD25_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9336[0m (0x400e8000 + 0x1336)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD26_NBYTES_MLOFFYES
<link=p.DMA0.TCD26_NBYTES_MLOFFYES>
#### p.dma0.tcd26_doff
<link=p.DMA0.TCD26_DOFF>
#### dma0.tcd27_saddr
<link=p.DMA0.TCD27_SADDR>
#### p.dma0.tcd27_daddr
<link=p.DMA0.TCD27_DADDR>
#### p.DMA0.TCD28_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9380[0m (0x400e8000 + 0x1380)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.dma0.tcd28_nbytes_mloffyes
<link=p.DMA0.TCD28_NBYTES_MLOFFYES>
#### p.DMA0.TCD28_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9396[0m (0x400e8000 + 0x1396)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd28_citer_elinkyes
<link=p.DMA0.TCD28_CITER_ELINKYES>
#### DMA0.TCD28_BITER_ELINKNO
<link=p.DMA0.TCD28_BITER_ELINKNO>
#### dma0.tcd29_soff
<link=p.DMA0.TCD29_SOFF>
#### p.DMA0.TCD29_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e93a8[0m (0x400e8000 + 0x13a8)
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
#### p.DMA0.TCD29_DOFF
<lang=dft>
 (rw)  [1;33m0x400e93b4[0m (0x400e8000 + 0x13b4)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.dma0.tcd29_doff
<link=p.DMA0.TCD29_DOFF>
#### DMA0.TCD29_CSR
<link=p.DMA0.TCD29_CSR>
#### DMA0.TCD29_BITER_ELINKYES
<link=p.DMA0.TCD29_BITER_ELINKYES>
#### p.dma0.tcd30_saddr
<link=p.DMA0.TCD30_SADDR>
#### p.dma0.tcd30_nbytes_mlno
<link=p.DMA0.TCD30_NBYTES_MLNO>
#### DMA0.TCD30_NBYTES_MLOFFNO
<link=p.DMA0.TCD30_NBYTES_MLOFFNO>
#### DMA0.TCD30_DOFF
<link=p.DMA0.TCD30_DOFF>
#### DMA0.TCD31_DOFF
<link=p.DMA0.TCD31_DOFF>
#### p.dma0.tcd31_csr
<link=p.DMA0.TCD31_CSR>
#### p.DMAMUX.CHCFG[0]
<lang=dft>
 (rw)  [1;33m0x400ec000[0m (0x400ec000 + 0x0000)
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
#### dmamux.chcfg[0]
<link=p.DMAMUX.CHCFG[0]>
#### DMAMUX.CHCFG[2]
<link=p.DMAMUX.CHCFG[2]>
#### p.DMAMUX.CHCFG[7]
<lang=dft>
 (rw)  [1;33m0x400ec01c[0m (0x400ec000 + 0x001c)
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
#### DMAMUX.CHCFG[7]
<link=p.DMAMUX.CHCFG[7]>
#### DMAMUX.CHCFG[18]
<link=p.DMAMUX.CHCFG[18]>
#### DMAMUX.CHCFG[23]
<link=p.DMAMUX.CHCFG[23]>
#### DMAMUX.CHCFG[24]
<link=p.DMAMUX.CHCFG[24]>
#### DMAMUX.CHCFG[29]
<link=p.DMAMUX.CHCFG[29]>
#### gpc.imr4
<link=p.GPC.IMR4>
#### p.pgc
<link=p.PGC>
#### p.PGC.CPU_CTRL
<lang=dft>
 (rw)  [1;33m0x400f42a0[0m (0x400f4000 + 0x02a0)
PGC CPU Control Register
 (rw) (01)  [0;32mPCR[0m  - [00:00] -  Power Control PCR must not change from power-down request (pdn_req) assertion u
 ntil the target subsystem is completely powered up
      0 - PCR_0 :
         Do not switch off power even if pdn_req is asserted.
      0x1 - PCR_1 :
         Switch off power when pdn_req is asserted.
</lang>
#### p.SRC.GPR1
<lang=dft>
 (rw)  [1;33m0x400f8020[0m (0x400f8000 + 0x0020)
SRC General Purpose Register 1
 (rw) (32)  [0;32mPERSISTENT_ENTRY0[0m  - [31:00] -  Holds entry function for core0 for waking-up from low power mode
</lang>
#### SRC.GPR4
<link=p.SRC.GPR4>
#### p.src.gpr9
<link=p.SRC.GPR9>
#### p.CCM.CSR
<lang=dft>
 (ro)  [1;33m0x400fc008[0m (0x400fc000 + 0x0008)
CCM Status Register
 (ro) (01)  [0;32mREF_EN_B[0m  - [00:00] -  Status of the value of CCM_REF_EN_B output of ccm
      0 - REF_EN_B_0 :
         value of CCM_REF_EN_B is '0'
      0x1 - REF_EN_B_1 :
         value of CCM_REF_EN_B is '1'
 (ro) (01)  [0;32mCAMP2_READY[0m  - [03:03] -  Status indication of CAMP2.
      0 - CAMP2_READY_0 :
         CAMP2 is not ready.
      0x1 - CAMP2_READY_1 :
         CAMP2 is ready.
 (ro) (01)  [0;32mCOSC_READY[0m  - [05:05] -  Status indication of on board oscillator
      0 - COSC_READY_0 :
         on board oscillator is not ready.
      0x1 - COSC_READY_1 :
         on board oscillator is ready.
</lang>
#### p.ccm.csr
<link=p.CCM.CSR>
#### CCM.CCSR
<link=p.CCM.CCSR>
#### p.ccm.cscmr1
<link=p.CCM.CSCMR1>
#### CCM.CSCDR2
<link=p.CCM.CSCDR2>
#### CCM.CGPR
<link=p.CCM.CGPR>
#### ccm.ccgr4
<link=p.CCM.CCGR4>
#### ROMC.ROMPATCH5D
<link=p.ROMC.ROMPATCH5D>
#### p.ROMC.ROMPATCH2A
<lang=dft>
 (rw)  [1;33m0x40180108[0m (0x40180000 + 0x0108)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### ROMC.ROMPATCH9A
<link=p.ROMC.ROMPATCH9A>
#### ROMC.ROMPATCH10A
<link=p.ROMC.ROMPATCH10A>
#### p.ROMC.ROMPATCH12A
<lang=dft>
 (rw)  [1;33m0x40180130[0m (0x40180000 + 0x0130)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### romc.rompatch13a
<link=p.ROMC.ROMPATCH13A>
#### p.lpuart2.global
<link=p.LPUART2.GLOBAL>
#### p.lpuart3
<link=p.LPUART3>
#### p.LPUART3.VERID
<lang=dft>
 (ro)  [1;33m0x4018c000[0m (0x4018c000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Identification Number
      0x1 - FEATURE_1 :
         Standard feature set.
      0x3 - FEATURE_3 :
         Standard feature set with MODEM/IrDA support.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### LPUART3.DATA
<link=p.LPUART3.DATA>
#### lpuart3.modir
<link=p.LPUART3.MODIR>
#### p.lpuart4.param
<link=p.LPUART4.PARAM>
#### p.LPUART4.DATA
<lang=dft>
 (rw)  [1;33m0x4019001c[0m (0x40190000 + 0x001c)
LPUART Data Register
 (rw) (01)  [0;32mR0T0[0m  - [00:00] -  R0T0
 (rw) (01)  [0;32mR1T1[0m  - [01:01] -  R1T1
 (rw) (01)  [0;32mR2T2[0m  - [02:02] -  R2T2
 (rw) (01)  [0;32mR3T3[0m  - [03:03] -  R3T3
 (rw) (01)  [0;32mR4T4[0m  - [04:04] -  R4T4
 (rw) (01)  [0;32mR5T5[0m  - [05:05] -  R5T5
 (rw) (01)  [0;32mR6T6[0m  - [06:06] -  R6T6
 (rw) (01)  [0;32mR7T7[0m  - [07:07] -  R7T7
 (rw) (01)  [0;32mR8T8[0m  - [08:08] -  R8T8
 (rw) (01)  [0;32mR9T9[0m  - [09:09] -  R9T9
 (ro) (01)  [0;32mIDLINE[0m  - [11:11] -  Idle Line
      0 - IDLINE_0 :
         Receiver was not idle before receiving this character.
      0x1 - IDLINE_1 :
         Receiver was idle before receiving this character.
 (ro) (01)  [0;32mRXEMPT[0m  - [12:12] -  Receive Buffer Empty
      0 - RXEMPT_0 :
         Receive buffer contains valid data.
      0x1 - RXEMPT_1 :
         Receive buffer is empty, data returned on read is not valid.
 (rw) (01)  [0;32mFRETSC[0m  - [13:13] -  Frame Error / Transmit Special Character
      0 - FRETSC_0 :
         The dataword was received without a frame error on read, or transmit a 
         normal character on write.
      0x1 - FRETSC_1 :
         The dataword was received with a frame error, or transmit an idle or br
         eak character on transmit.
 (ro) (01)  [0;32mPARITYE[0m  - [14:14] -  PARITYE
      0 - PARITYE_0 :
         The dataword was received without a parity error.
      0x1 - PARITYE_1 :
         The dataword was received with a parity error.
 (ro) (01)  [0;32mNOISY[0m  - [15:15] -  NOISY
      0 - NOISY_0 :
         The dataword was received without noise.
      0x1 - NOISY_1 :
         The data was received with noise.
</lang>
#### lpuart4.water
<link=p.LPUART4.WATER>
#### p.LPUART5.PARAM
<lang=dft>
 (ro)  [1;33m0x40194004[0m (0x40194000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
</lang>
#### LPUART5.BAUD
<link=p.LPUART5.BAUD>
#### p.lpuart6.verid
<link=p.LPUART6.VERID>
#### p.LPUART7.GLOBAL
<lang=dft>
 (rw)  [1;33m0x4019c008[0m (0x4019c000 + 0x0008)
LPUART Global Register
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Software Reset
      0 - RST_0 :
         Module is not reset.
      0x1 - RST_1 :
         Module is reset.
</lang>
#### p.lpuart7.global
<link=p.LPUART7.GLOBAL>
#### LPUART7.PINCFG
<link=p.LPUART7.PINCFG>
#### p.lpuart7.modir
<link=p.LPUART7.MODIR>
#### p.lpuart8.global
<link=p.LPUART8.GLOBAL>
#### LPUART8.BAUD
<link=p.LPUART8.BAUD>
#### p.lpuart8.ctrl
<link=p.LPUART8.CTRL>
#### p.lpuart8.match
<link=p.LPUART8.MATCH>
#### p.LPUART8.MODIR
<lang=dft>
 (rw)  [1;33m0x401a0024[0m (0x401a0000 + 0x0024)
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
#### FLEXIO1.SHIFTERR
<link=p.FLEXIO1.SHIFTERR>
#### FLEXIO1.SHIFTSTATE
<link=p.FLEXIO1.SHIFTSTATE>
#### flexio1.shiftcfg[3]
<link=p.FLEXIO1.SHIFTCFG[3]>
#### FLEXIO1.SHIFTBUF[1]
<link=p.FLEXIO1.SHIFTBUF[1]>
#### p.FLEXIO1.SHIFTBUFBYS[3]
<lang=dft>
 (rw)  [1;33m0x401ac30c[0m (0x401ac000 + 0x030c)
Shifter Buffer N Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBYS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO1.SHIFTBUFBBS[1]
<link=p.FLEXIO1.SHIFTBUFBBS[1]>
#### flexio1.shiftbufbbs[3]
<link=p.FLEXIO1.SHIFTBUFBBS[3]>
#### p.flexio1.timcfg[1]
<link=p.FLEXIO1.TIMCFG[1]>
#### flexio1.timcmp[0]
<link=p.FLEXIO1.TIMCMP[0]>
#### p.flexio1.timcmp[2]
<link=p.FLEXIO1.TIMCMP[2]>
#### FLEXIO1.SHIFTBUFHWS[0]
<link=p.FLEXIO1.SHIFTBUFHWS[0]>
#### p.flexio1.shiftbufhws[3]
<link=p.FLEXIO1.SHIFTBUFHWS[3]>
#### p.flexio2
<link=p.FLEXIO2>
#### FLEXIO2.PIN
<link=p.FLEXIO2.PIN>
#### p.FLEXIO2.SHIFTCFG[3]
<lang=dft>
 (rw)  [1;33m0x401b010c[0m (0x401b0000 + 0x010c)
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
#### flexio2.shiftcfg[3]
<link=p.FLEXIO2.SHIFTCFG[3]>
#### p.FLEXIO2.SHIFTBUF[2]
<lang=dft>
 (rw)  [1;33m0x401b0208[0m (0x401b0000 + 0x0208)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio2.shiftbufbis[0]
<link=p.FLEXIO2.SHIFTBUFBIS[0]>
#### flexio2.timctl[0]
<link=p.FLEXIO2.TIMCTL[0]>
#### p.FLEXIO2.TIMCTL[2]
<lang=dft>
 (rw)  [1;33m0x401b0408[0m (0x401b0000 + 0x0408)
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
#### p.FLEXIO2.TIMCFG[1]
<lang=dft>
 (rw)  [1;33m0x401b0484[0m (0x401b0000 + 0x0484)
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
#### p.flexio2.timcmp[0]
<link=p.FLEXIO2.TIMCMP[0]>
#### p.flexio2.shiftbufnbs[0]
<link=p.FLEXIO2.SHIFTBUFNBS[0]>
#### p.FLEXIO2.SHIFTBUFNIS[1]
<lang=dft>
 (rw)  [1;33m0x401b0784[0m (0x401b0000 + 0x0784)
Shifter Buffer N Nibble Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNIS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio3.verid
<link=p.FLEXIO3.VERID>
#### p.flexio3.pin
<link=p.FLEXIO3.PIN>
#### flexio3.timstat
<link=p.FLEXIO3.TIMSTAT>
#### flexio3.shiftsden
<link=p.FLEXIO3.SHIFTSDEN>
#### FLEXIO3.SHIFTCFG[1]
<link=p.FLEXIO3.SHIFTCFG[1]>
#### FLEXIO3.SHIFTBUF[1]
<link=p.FLEXIO3.SHIFTBUF[1]>
#### FLEXIO3.SHIFTBUFBIS[0]
<link=p.FLEXIO3.SHIFTBUFBIS[0]>
#### p.flexio3.shiftbufbys[1]
<link=p.FLEXIO3.SHIFTBUFBYS[1]>
#### p.FLEXIO3.TIMCTL[2]
<lang=dft>
 (rw)  [1;33m0x42020408[0m (0x42020000 + 0x0408)
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
#### p.FLEXIO3.TIMCFG[1]
<lang=dft>
 (rw)  [1;33m0x42020484[0m (0x42020000 + 0x0484)
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
#### FLEXIO3.TIMCFG[1]
<link=p.FLEXIO3.TIMCFG[1]>
#### p.FLEXIO3.TIMCMP[2]
<lang=dft>
 (rw)  [1;33m0x42020508[0m (0x42020000 + 0x0508)
Timer Compare N Register
 (rw) (16)  [0;32mCMP[0m  - [15:00] -  Timer Compare Value
</lang>
#### FLEXIO3.TIMCMP[2]
<link=p.FLEXIO3.TIMCMP[2]>
#### p.flexio3.shiftbufhws[1]
<link=p.FLEXIO3.SHIFTBUFHWS[1]>
#### flexio3.shiftbufnis[1]
<link=p.FLEXIO3.SHIFTBUFNIS[1]>
#### p.flexio3.shiftbufnis[2]
<link=p.FLEXIO3.SHIFTBUFNIS[2]>
#### FLEXIO3.SHIFTBUFNIS[3]
<link=p.FLEXIO3.SHIFTBUFNIS[3]>
#### gpio1.icr1
<link=p.GPIO1.ICR1>
#### GPIO1.ISR
<link=p.GPIO1.ISR>
#### p.gpio5.gdir
<link=p.GPIO5.GDIR>
#### gpio5.psr
<link=p.GPIO5.PSR>
#### GPIO5.IMR
<link=p.GPIO5.IMR>
#### p.gpio5.isr
<link=p.GPIO5.ISR>
#### GPIO5.EDGE_SEL
<link=p.GPIO5.EDGE_SEL>
#### p.gpio2
<link=p.GPIO2>
#### p.GPIO2.ICR1
<lang=dft>
 (rw)  [1;33m0x401bc00c[0m (0x401bc000 + 0x000c)
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
#### p.GPIO4.ICR2
<lang=dft>
 (rw)  [1;33m0x401c4010[0m (0x401c4000 + 0x0010)
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
#### p.GPIO4.IMR
<lang=dft>
 (rw)  [1;33m0x401c4014[0m (0x401c4000 + 0x0014)
GPIO interrupt mask register
 (rw) (32)  [0;32mIMR[0m  - [31:00] -  IMR
</lang>
#### p.gpio4.dr_clear
<link=p.GPIO4.DR_CLEAR>
#### p.gpio6.dr
<link=p.GPIO6.DR>
#### gpio6.icr1
<link=p.GPIO6.ICR1>
#### GPIO6.IMR
<link=p.GPIO6.IMR>
#### p.gpio6.edge_sel
<link=p.GPIO6.EDGE_SEL>
#### GPIO7.PSR
<link=p.GPIO7.PSR>
#### p.gpio7.icr1
<link=p.GPIO7.ICR1>
#### p.GPIO7.IMR
<lang=dft>
 (rw)  [1;33m0x42004014[0m (0x42004000 + 0x0014)
GPIO interrupt mask register
 (rw) (32)  [0;32mIMR[0m  - [31:00] -  IMR
</lang>
#### p.GPIO7.EDGE_SEL
<lang=dft>
 (rw)  [1;33m0x4200401c[0m (0x42004000 + 0x001c)
GPIO edge select register
 (rw) (32)  [0;32mGPIO_EDGE_SEL[0m  - [31:00] -  GPIO_EDGE_SEL
</lang>
#### p.GPIO7.DR_SET
<lang=dft>
 (wo)  [1;33m0x42004084[0m (0x42004000 + 0x0084)
GPIO data register SET
 (wo) (32)  [0;32mDR_SET[0m  - [31:00] -  DR_SET
</lang>
#### p.GPIO8.ICR1
<lang=dft>
 (rw)  [1;33m0x4200800c[0m (0x42008000 + 0x000c)
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
#### p.gpio9.gdir
<link=p.GPIO9.GDIR>
#### p.gpio9.edge_sel
<link=p.GPIO9.EDGE_SEL>
#### p.can1.rx14mask
<link=p.CAN1.RX14MASK>
#### can1.rx15mask
<link=p.CAN1.RX15MASK>
#### p.can1.iflag1
<link=p.CAN1.IFLAG1>
#### p.CAN1.CRCR
<lang=dft>
 (ro)  [1;33m0x401d0044[0m (0x401d0000 + 0x0044)
CRC Register
 (ro) (15)  [0;32mTXCRC[0m  - [14:00] -  This field indicates the CRC value of the last message transmitted
 (ro) (07)  [0;32mMBCRC[0m  - [22:16] -  This field indicates the number of the Mailbox corresponding to the value in TX
 CRC field.
</lang>
#### CAN1.RXIMR1
<link=p.CAN1.RXIMR1>
#### can1.rximr2
<link=p.CAN1.RXIMR2>
#### p.CAN1.RXIMR7
<lang=dft>
 (rw)  [1;33m0x401d089c[0m (0x401d0000 + 0x089c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr14
<link=p.CAN1.RXIMR14>
#### can1.rximr19
<link=p.CAN1.RXIMR19>
#### can1.rximr21
<link=p.CAN1.RXIMR21>
#### p.can1.rximr32
<link=p.CAN1.RXIMR32>
#### CAN1.RXIMR35
<link=p.CAN1.RXIMR35>
#### p.CAN1.RXIMR36
<lang=dft>
 (rw)  [1;33m0x401d0910[0m (0x401d0000 + 0x0910)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr36
<link=p.CAN1.RXIMR36>
#### p.CAN1.RXIMR40
<lang=dft>
 (rw)  [1;33m0x401d0920[0m (0x401d0000 + 0x0920)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr44
<link=p.CAN1.RXIMR44>
#### can1.rximr55
<link=p.CAN1.RXIMR55>
#### p.CAN1.RXIMR57
<lang=dft>
 (rw)  [1;33m0x401d0964[0m (0x401d0000 + 0x0964)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR58
<link=p.CAN1.RXIMR58>
#### CAN1.RXIMR62
<link=p.CAN1.RXIMR62>
#### p.can2.timer
<link=p.CAN2.TIMER>
#### p.can2.rx15mask
<link=p.CAN2.RX15MASK>
#### p.CAN2.DBG2
<lang=dft>
 (ro)  [1;33m0x401d405c[0m (0x401d4000 + 0x005c)
Debug 2 register
 (ro) (07)  [0;32mRMP[0m  - [06:00] -  Rx Matching Pointer
 (ro) (01)  [0;32mMPP[0m  - [07:07] -  Matching Process in Progress
      0 - MPP_0 :
         No matching process ongoing.
      0x1 - MPP_1 :
         Matching process is in progress.
 (ro) (07)  [0;32mTAP[0m  - [14:08] -  Tx Arbitration Pointer
 (ro) (01)  [0;32mAPP[0m  - [15:15] -  Arbitration Process in Progress
      0 - APP_0 :
         No matching process ongoing.
      0x1 - APP_1 :
         Matching process is in progress.
</lang>
#### CAN2.RXIMR4
<link=p.CAN2.RXIMR4>
#### p.can2.rximr6
<link=p.CAN2.RXIMR6>
#### p.CAN2.RXIMR9
<lang=dft>
 (rw)  [1;33m0x401d48a4[0m (0x401d4000 + 0x08a4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR10
<link=p.CAN2.RXIMR10>
#### p.CAN2.RXIMR13
<lang=dft>
 (rw)  [1;33m0x401d48b4[0m (0x401d4000 + 0x08b4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr17
<link=p.CAN2.RXIMR17>
#### CAN2.RXIMR21
<link=p.CAN2.RXIMR21>
#### p.can2.rximr29
<link=p.CAN2.RXIMR29>
#### p.CAN2.RXIMR35
<lang=dft>
 (rw)  [1;33m0x401d490c[0m (0x401d4000 + 0x090c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR36
<link=p.CAN2.RXIMR36>
#### CAN2.RXIMR43
<link=p.CAN2.RXIMR43>
#### can2.rximr45
<link=p.CAN2.RXIMR45>
#### can2.rximr56
<link=p.CAN2.RXIMR56>
#### p.can2.rximr58
<link=p.CAN2.RXIMR58>
#### can2.rximr63
<link=p.CAN2.RXIMR63>
#### p.CAN3.IMASK1
<lang=dft>
 (rw)  [1;33m0x401d8028[0m (0x401d8000 + 0x0028)
Interrupt Masks 1 register
 (rw) (32)  [0;32mBUF31TO0M[0m  - [31:00] -  Buffer MB i Mask
</lang>
#### CAN3.IFLAG2
<link=p.CAN3.IFLAG2>
#### can3.rxfir
<link=p.CAN3.RXFIR>
#### can3.mb0_64b_cs
<link=p.CAN3.MB0_64B_CS>
#### CAN3.MB0_64B_CS
<link=p.CAN3.MB0_64B_CS>
#### can3.mb0_64b_id
<link=p.CAN3.MB0_64B_ID>
#### CAN3.WORD00
<link=p.CAN3.WORD00>
#### p.can3.mb0_16b_word1
<link=p.CAN3.MB0_16B_WORD1>
#### can3.word10
<link=p.CAN3.WORD10>
#### p.can3.cs1
<link=p.CAN3.CS1>
#### can3.cs1
<link=p.CAN3.CS1>
#### p.CAN3.MB0_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8090[0m (0x401d8000 + 0x0090)
Message Buffer 0 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb0_32b_word2
<link=p.CAN3.MB0_32B_WORD2>
#### p.can3.mb1_16b_word0
<link=p.CAN3.MB1_16B_WORD0>
#### p.CAN3.MB0_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d80a4[0m (0x401d8000 + 0x00a4)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb3_8b_cs
<link=p.CAN3.MB3_8B_CS>
#### can3.mb0_64b_word11
<link=p.CAN3.MB0_64B_WORD11>
#### can3.mb2_16b_id
<link=p.CAN3.MB2_16B_ID>
#### can3.mb3_8b_id
<link=p.CAN3.MB3_8B_ID>
#### CAN3.CS4
<link=p.CAN3.CS4>
#### can3.id4
<link=p.CAN3.ID4>
#### p.CAN3.MB0_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d80c4[0m (0x401d8000 + 0x00c4)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb1_32b_word5
<link=p.CAN3.MB1_32B_WORD5>
#### p.can3.mb2_16b_word3
<link=p.CAN3.MB2_16B_WORD3>
#### can3.mb4_8b_word0
<link=p.CAN3.MB4_8B_WORD0>
#### CAN3.MB1_32B_WORD7
<link=p.CAN3.MB1_32B_WORD7>
#### can3.mb1_64b_id
<link=p.CAN3.MB1_64B_ID>
#### p.CAN3.MB4_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80cc[0m (0x401d8000 + 0x00cc)
Message Buffer 4 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb3_16b_word0
<link=p.CAN3.MB3_16B_WORD0>
#### p.CAN3.MB1_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80d4[0m (0x401d8000 + 0x00d4)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb5_8b_word0
<link=p.CAN3.MB5_8B_WORD0>
#### CAN3.MB2_32B_WORD2
<link=p.CAN3.MB2_32B_WORD2>
#### p.CAN3.MB4_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d80e0[0m (0x401d8000 + 0x00e0)
Message Buffer 4 CS Register
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
#### p.CAN3.ID6
<lang=dft>
 (rw)  [1;33m0x401d80e4[0m (0x401d8000 + 0x00e4)
Message Buffer 6 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb1_64b_word5
<link=p.CAN3.MB1_64B_WORD5>
#### p.CAN3.MB6_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d80e4[0m (0x401d8000 + 0x00e4)
Message Buffer 6 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB2_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d80f0[0m (0x401d8000 + 0x00f0)
Message Buffer 2 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb2_32b_word6
<link=p.CAN3.MB2_32B_WORD6>
#### p.CAN3.MB7_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d80f4[0m (0x401d8000 + 0x00f4)
Message Buffer 7 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.word07
<link=p.CAN3.WORD07>
#### p.can3.mb3_32b_id
<link=p.CAN3.MB3_32B_ID>
#### p.can3.mb1_64b_word13
<link=p.CAN3.MB1_64B_WORD13>
#### p.CAN3.MB5_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8104[0m (0x401d8000 + 0x0104)
Message Buffer 5 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb8_8b_word0
<link=p.CAN3.MB8_8B_WORD0>
#### p.CAN3.MB1_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d810c[0m (0x401d8000 + 0x010c)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB5_16B_WORD3
<link=p.CAN3.MB5_16B_WORD3>
#### p.CAN3.MB8_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d810c[0m (0x401d8000 + 0x010c)
Message Buffer 8 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb3_32b_word5
<link=p.CAN3.MB3_32B_WORD5>
#### p.can3.mb9_8b_word0
<link=p.CAN3.MB9_8B_WORD0>
#### CAN3.MB2_64B_WORD1
<link=p.CAN3.MB2_64B_WORD1>
#### p.can3.mb4_32b_cs
<link=p.CAN3.MB4_32B_CS>
#### p.can3.mb4_32b_id
<link=p.CAN3.MB4_32B_ID>
#### p.can3.mb2_64b_word6
<link=p.CAN3.MB2_64B_WORD6>
#### can3.mb2_64b_word6
<link=p.CAN3.MB2_64B_WORD6>
#### p.CAN3.MB2_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d8138[0m (0x401d8000 + 0x0138)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD011
<lang=dft>
 (rw)  [1;33m0x401d8138[0m (0x401d8000 + 0x0138)
Message Buffer 11 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB7_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d813c[0m (0x401d8000 + 0x013c)
Message Buffer 7 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb2_64b_word10
<link=p.CAN3.MB2_64B_WORD10>
#### p.CAN3.MB4_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8140[0m (0x401d8000 + 0x0140)
Message Buffer 4 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb4_32b_word6
<link=p.CAN3.MB4_32B_WORD6>
#### can3.mb12_8b_id
<link=p.CAN3.MB12_8B_ID>
#### p.CAN3.MB5_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8148[0m (0x401d8000 + 0x0148)
Message Buffer 5 CS Register
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
#### p.CAN3.MB8_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8148[0m (0x401d8000 + 0x0148)
Message Buffer 8 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb8_16b_word0
<link=p.CAN3.MB8_16B_WORD0>
#### p.can3.word012
<link=p.CAN3.WORD012>
#### can3.cs13
<link=p.CAN3.CS13>
#### p.CAN3.MB13_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8154[0m (0x401d8000 + 0x0154)
Message Buffer 13 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb5_32b_word1
<link=p.CAN3.MB5_32B_WORD1>
#### p.can3.mb13_8b_word0
<link=p.CAN3.MB13_8B_WORD0>
#### can3.mb3_64b_cs
<link=p.CAN3.MB3_64B_CS>
#### can3.mb13_8b_word1
<link=p.CAN3.MB13_8B_WORD1>
#### CAN3.MB5_32B_WORD3
<link=p.CAN3.MB5_32B_WORD3>
#### p.can3.word113
<link=p.CAN3.WORD113>
#### CAN3.MB3_64B_WORD1
<link=p.CAN3.MB3_64B_WORD1>
#### can3.word114
<link=p.CAN3.WORD114>
#### p.can3.cs15
<link=p.CAN3.CS15>
#### p.CAN3.MB15_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8170[0m (0x401d8000 + 0x0170)
Message Buffer 15 CS Register
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
#### can3.mb10_16b_word0
<link=p.CAN3.MB10_16B_WORD0>
#### can3.word015
<link=p.CAN3.WORD015>
#### p.CAN3.MB10_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d817c[0m (0x401d8000 + 0x017c)
Message Buffer 10 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb16_8b_cs
<link=p.CAN3.MB16_8B_CS>
#### p.CAN3.MB6_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8180[0m (0x401d8000 + 0x0180)
Message Buffer 6 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb6_32b_word2
<link=p.CAN3.MB6_32B_WORD2>
#### CAN3.MB16_8B_ID
<link=p.CAN3.MB16_8B_ID>
#### CAN3.WORD016
<link=p.CAN3.WORD016>
#### can3.mb16_8b_word1
<link=p.CAN3.MB16_8B_WORD1>
#### can3.mb3_64b_word11
<link=p.CAN3.MB3_64B_WORD11>
#### CAN3.MB6_32B_WORD6
<link=p.CAN3.MB6_32B_WORD6>
#### p.CAN3.MB11_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8194[0m (0x401d8000 + 0x0194)
Message Buffer 11 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb11_16b_word1
<link=p.CAN3.MB11_16B_WORD1>
#### p.can3.id18
<link=p.CAN3.ID18>
#### can3.mb7_32b_word1
<link=p.CAN3.MB7_32B_WORD1>
#### p.CAN3.MB12_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81a8[0m (0x401d8000 + 0x01a8)
Message Buffer 12 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb12_16b_word1
<link=p.CAN3.MB12_16B_WORD1>
#### CAN3.MB4_64B_WORD1
<link=p.CAN3.MB4_64B_WORD1>
#### p.CAN3.MB4_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d81b8[0m (0x401d8000 + 0x01b8)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD119
<lang=dft>
 (rw)  [1;33m0x401d81bc[0m (0x401d8000 + 0x01bc)
Message Buffer 19 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB13_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d81c8[0m (0x401d8000 + 0x01c8)
Message Buffer 13 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb13_16b_word2
<link=p.CAN3.MB13_16B_WORD2>
#### can3.mb4_64b_word8
<link=p.CAN3.MB4_64B_WORD8>
#### p.can3.mb4_64b_word13
<link=p.CAN3.MB4_64B_WORD13>
#### p.CAN3.WORD121
<lang=dft>
 (rw)  [1;33m0x401d81dc[0m (0x401d8000 + 0x01dc)
Message Buffer 21 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word121
<link=p.CAN3.WORD121>
#### CAN3.ID22
<link=p.CAN3.ID22>
#### CAN3.MB4_64B_WORD15
<link=p.CAN3.MB4_64B_WORD15>
#### p.can3.mb8_32b_word7
<link=p.CAN3.MB8_32B_WORD7>
#### can3.mb15_16b_cs
<link=p.CAN3.MB15_16B_CS>
#### p.CAN3.MB22_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81e8[0m (0x401d8000 + 0x01e8)
Message Buffer 22 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb15_16b_id
<link=p.CAN3.MB15_16B_ID>
#### CAN3.MB9_32B_WORD0
<link=p.CAN3.MB9_32B_WORD0>
#### p.can3.mb23_8b_word0
<link=p.CAN3.MB23_8B_WORD0>
#### can3.mb5_64b_word2
<link=p.CAN3.MB5_64B_WORD2>
#### p.can3.word023
<link=p.CAN3.WORD023>
#### CAN3.WORD023
<link=p.CAN3.WORD023>
#### p.can3.cs24
<link=p.CAN3.CS24>
#### p.CAN3.MB5_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8200[0m (0x401d8000 + 0x0200)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb16_16b_id
<link=p.CAN3.MB16_16B_ID>
#### can3.mb24_8b_id
<link=p.CAN3.MB24_8B_ID>
#### CAN3.MB24_8B_ID
<link=p.CAN3.MB24_8B_ID>
#### p.CAN3.MB9_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d8204[0m (0x401d8000 + 0x0204)
Message Buffer 9 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb24_8b_word0
<link=p.CAN3.MB24_8B_WORD0>
#### p.can3.mb9_32b_word7
<link=p.CAN3.MB9_32B_WORD7>
#### p.can3.mb25_8b_id
<link=p.CAN3.MB25_8B_ID>
#### CAN3.MB25_8B_WORD0
<link=p.CAN3.MB25_8B_WORD0>
#### can3.mb5_64b_word10
<link=p.CAN3.MB5_64B_WORD10>
#### p.CAN3.CS26
<lang=dft>
 (rw)  [1;33m0x401d8220[0m (0x401d8000 + 0x0220)
Message Buffer 26 CS Register
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
#### p.CAN3.MB26_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8224[0m (0x401d8000 + 0x0224)
Message Buffer 26 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb10_32b_word4
<link=p.CAN3.MB10_32B_WORD4>
#### CAN3.MB5_64B_WORD15
<link=p.CAN3.MB5_64B_WORD15>
#### CAN3.MB10_32B_WORD6
<link=p.CAN3.MB10_32B_WORD6>
#### can3.mb6_64b_id
<link=p.CAN3.MB6_64B_ID>
#### p.CAN3.MB27_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d823c[0m (0x401d8000 + 0x023c)
Message Buffer 27 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb6_64b_word1
<link=p.CAN3.MB6_64B_WORD1>
#### p.can3.mb6_64b_word3
<link=p.CAN3.MB6_64B_WORD3>
#### p.CAN3.MB19_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8248[0m (0x401d8000 + 0x0248)
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
#### p.can3.mb28_8b_word0
<link=p.CAN3.MB28_8B_WORD0>
#### CAN3.MB6_64B_WORD4
<link=p.CAN3.MB6_64B_WORD4>
#### can3.mb19_16b_word0
<link=p.CAN3.MB19_16B_WORD0>
#### can3.mb11_32b_word5
<link=p.CAN3.MB11_32B_WORD5>
#### CAN3.MB11_32B_WORD5
<link=p.CAN3.MB11_32B_WORD5>
#### CAN3.MB29_8B_WORD0
<link=p.CAN3.MB29_8B_WORD0>
#### CAN3.MB6_64B_WORD10
<link=p.CAN3.MB6_64B_WORD10>
#### can3.id30
<link=p.CAN3.ID30>
#### p.can3.mb20_16b_id
<link=p.CAN3.MB20_16B_ID>
#### p.CAN3.MB20_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8268[0m (0x401d8000 + 0x0268)
Message Buffer 20 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB6_64B_WORD12
<lang=dft>
 (rw)  [1;33m0x401d8268[0m (0x401d8000 + 0x0268)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_51[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_50[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_49[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_48[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD030
<link=p.CAN3.WORD030>
#### CAN3.ID31
<link=p.CAN3.ID31>
#### can3.mb6_64b_word15
<link=p.CAN3.MB6_64B_WORD15>
#### p.can3.mb7_64b_cs
<link=p.CAN3.MB7_64B_CS>
#### p.can3.mb12_32b_word5
<link=p.CAN3.MB12_32B_WORD5>
#### CAN3.MB12_32B_WORD5
<link=p.CAN3.MB12_32B_WORD5>
#### can3.word132
<link=p.CAN3.WORD132>
#### p.can3.cs33
<link=p.CAN3.CS33>
#### can3.mb33_8b_id
<link=p.CAN3.MB33_8B_ID>
#### can3.word033
<link=p.CAN3.WORD033>
#### CAN3.MB13_32B_WORD4
<link=p.CAN3.MB13_32B_WORD4>
#### p.CAN3.MB22_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d82a0[0m (0x401d8000 + 0x02a0)
Message Buffer 22 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb7_64b_word8
<link=p.CAN3.MB7_64B_WORD8>
#### can3.mb13_32b_word6
<link=p.CAN3.MB13_32B_WORD6>
#### p.CAN3.MB34_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82ac[0m (0x401d8000 + 0x02ac)
Message Buffer 34 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb34_8b_word1
<link=p.CAN3.MB34_8B_WORD1>
#### CAN3.CS35
<link=p.CAN3.CS35>
#### CAN3.MB14_32B_CS
<link=p.CAN3.MB14_32B_CS>
#### p.can3.mb14_32b_word0
<link=p.CAN3.MB14_32B_WORD0>
#### p.CAN3.MB35_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82bc[0m (0x401d8000 + 0x02bc)
Message Buffer 35 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB14_32B_WORD2
<link=p.CAN3.MB14_32B_WORD2>
#### CAN3.MB36_8B_WORD0
<link=p.CAN3.MB36_8B_WORD0>
#### p.CAN3.WORD136
<lang=dft>
 (rw)  [1;33m0x401d82cc[0m (0x401d8000 + 0x02cc)
Message Buffer 36 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB24_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d82d4[0m (0x401d8000 + 0x02d4)
Message Buffer 24 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB8_64B_WORD3
<link=p.CAN3.MB8_64B_WORD3>
#### p.can3.mb15_32b_cs
<link=p.CAN3.MB15_32B_CS>
#### p.can3.mb38_8b_cs
<link=p.CAN3.MB38_8B_CS>
#### p.CAN3.ID38
<lang=dft>
 (rw)  [1;33m0x401d82e4[0m (0x401d8000 + 0x02e4)
Message Buffer 38 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb15_32b_word1
<link=p.CAN3.MB15_32B_WORD1>
#### CAN3.MB15_32B_WORD1
<link=p.CAN3.MB15_32B_WORD1>
#### p.can3.mb38_8b_id
<link=p.CAN3.MB38_8B_ID>
#### p.CAN3.MB38_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82ec[0m (0x401d8000 + 0x02ec)
Message Buffer 38 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb38_8b_word1
<link=p.CAN3.MB38_8B_WORD1>
#### p.can3.mb39_8b_cs
<link=p.CAN3.MB39_8B_CS>
#### CAN3.MB39_8B_ID
<link=p.CAN3.MB39_8B_ID>
#### p.can3.mb8_64b_word11
<link=p.CAN3.MB8_64B_WORD11>
#### p.CAN3.MB26_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82fc[0m (0x401d8000 + 0x02fc)
Message Buffer 26 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB39_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82fc[0m (0x401d8000 + 0x02fc)
Message Buffer 39 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB8_64B_WORD13
<link=p.CAN3.MB8_64B_WORD13>
#### CAN3.WORD139
<link=p.CAN3.WORD139>
#### can3.cs40
<link=p.CAN3.CS40>
#### CAN3.ID40
<link=p.CAN3.ID40>
#### p.CAN3.MB9_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d8308[0m (0x401d8000 + 0x0308)
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
#### CAN3.MB9_64B_CS
<link=p.CAN3.MB9_64B_CS>
#### p.can3.mb16_32b_word1
<link=p.CAN3.MB16_32B_WORD1>
#### CAN3.MB16_32B_WORD1
<link=p.CAN3.MB16_32B_WORD1>
#### CAN3.CS41
<link=p.CAN3.CS41>
#### p.can3.mb9_64b_word0
<link=p.CAN3.MB9_64B_WORD0>
#### CAN3.MB9_64B_WORD1
<link=p.CAN3.MB9_64B_WORD1>
#### CAN3.MB27_16B_WORD2
<link=p.CAN3.MB27_16B_WORD2>
#### p.CAN3.MB17_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8328[0m (0x401d8000 + 0x0328)
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
#### can3.mb28_16b_word0
<link=p.CAN3.MB28_16B_WORD0>
#### CAN3.MB42_8B_WORD0
<link=p.CAN3.MB42_8B_WORD0>
#### CAN3.MB17_32B_WORD0
<link=p.CAN3.MB17_32B_WORD0>
#### can3.mb17_32b_word2
<link=p.CAN3.MB17_32B_WORD2>
#### can3.mb43_8b_word0
<link=p.CAN3.MB43_8B_WORD0>
#### can3.mb44_8b_cs
<link=p.CAN3.MB44_8B_CS>
#### CAN3.MB44_8B_CS
<link=p.CAN3.MB44_8B_CS>
#### p.CAN3.MB29_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8344[0m (0x401d8000 + 0x0344)
Message Buffer 29 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb29_16b_word1
<link=p.CAN3.MB29_16B_WORD1>
#### p.can3.mb44_8b_id
<link=p.CAN3.MB44_8B_ID>
#### CAN3.MB9_64B_WORD13
<link=p.CAN3.MB9_64B_WORD13>
#### p.can3.mb29_16b_word2
<link=p.CAN3.MB29_16B_WORD2>
#### p.can3.mb9_64b_word14
<link=p.CAN3.MB9_64B_WORD14>
#### p.CAN3.ID45
<lang=dft>
 (rw)  [1;33m0x401d8354[0m (0x401d8000 + 0x0354)
Message Buffer 45 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb18_32b_id
<link=p.CAN3.MB18_32B_ID>
#### p.CAN3.MB45_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8354[0m (0x401d8000 + 0x0354)
Message Buffer 45 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB10_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8368[0m (0x401d8000 + 0x0368)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB10_64B_WORD4
<link=p.CAN3.MB10_64B_WORD4>
#### p.can3.mb46_8b_word1
<link=p.CAN3.MB46_8B_WORD1>
#### p.CAN3.CS47
<lang=dft>
 (rw)  [1;33m0x401d8370[0m (0x401d8000 + 0x0370)
Message Buffer 47 CS Register
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
#### can3.mb18_32b_word6
<link=p.CAN3.MB18_32B_WORD6>
#### p.can3.mb47_8b_cs
<link=p.CAN3.MB47_8B_CS>
#### p.CAN3.MB18_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8374[0m (0x401d8000 + 0x0374)
Message Buffer 18 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB47_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d837c[0m (0x401d8000 + 0x037c)
Message Buffer 47 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD048
<link=p.CAN3.WORD048>
#### p.can3.cs49
<link=p.CAN3.CS49>
#### CAN3.MB10_64B_WORD15
<link=p.CAN3.MB10_64B_WORD15>
#### p.CAN3.MB19_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8398[0m (0x401d8000 + 0x0398)
Message Buffer 19 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb33_16b_cs
<link=p.CAN3.MB33_16B_CS>
#### p.can3.mb19_32b_word7
<link=p.CAN3.MB19_32B_WORD7>
#### p.CAN3.CS50
<lang=dft>
 (rw)  [1;33m0x401d83a0[0m (0x401d8000 + 0x03a0)
Message Buffer 50 CS Register
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
#### p.CAN3.MB50_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d83a0[0m (0x401d8000 + 0x03a0)
Message Buffer 50 CS Register
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
#### CAN3.MB34_16B_CS
<link=p.CAN3.MB34_16B_CS>
#### CAN3.MB20_32B_WORD3
<link=p.CAN3.MB20_32B_WORD3>
#### can3.id52
<link=p.CAN3.ID52>
#### can3.mb20_32b_word7
<link=p.CAN3.MB20_32B_WORD7>
#### p.can3.mb35_16b_cs
<link=p.CAN3.MB35_16B_CS>
#### CAN3.MB21_32B_ID
<link=p.CAN3.MB21_32B_ID>
#### p.CAN3.MB35_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83d0[0m (0x401d8000 + 0x03d0)
Message Buffer 35 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb35_16b_word0
<link=p.CAN3.MB35_16B_WORD0>
#### CAN3.ID53
<link=p.CAN3.ID53>
#### p.can3.mb11_64b_word14
<link=p.CAN3.MB11_64B_WORD14>
#### can3.mb11_64b_word15
<link=p.CAN3.MB11_64B_WORD15>
#### CAN3.WORD153
<link=p.CAN3.WORD153>
#### p.can3.mb21_32b_word4
<link=p.CAN3.MB21_32B_WORD4>
#### p.can3.id54
<link=p.CAN3.ID54>
#### p.CAN3.MB21_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d83e8[0m (0x401d8000 + 0x03e8)
Message Buffer 21 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb21_32b_word7
<link=p.CAN3.MB21_32B_WORD7>
#### can3.mb22_32b_cs
<link=p.CAN3.MB22_32B_CS>
#### CAN3.MB22_32B_CS
<link=p.CAN3.MB22_32B_CS>
#### can3.mb36_16b_word2
<link=p.CAN3.MB36_16B_WORD2>
#### p.CAN3.MB36_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d83f4[0m (0x401d8000 + 0x03f4)
Message Buffer 36 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb12_64b_word4
<link=p.CAN3.MB12_64B_WORD4>
#### p.can3.mb12_64b_word5
<link=p.CAN3.MB12_64B_WORD5>
#### CAN3.MB55_8B_WORD1
<link=p.CAN3.MB55_8B_WORD1>
#### p.CAN3.WORD155
<lang=dft>
 (rw)  [1;33m0x401d83fc[0m (0x401d8000 + 0x03fc)
Message Buffer 55 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.CS56
<link=p.CAN3.CS56>
#### can3.mb22_32b_word3
<link=p.CAN3.MB22_32B_WORD3>
#### p.CAN3.MB56_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8408[0m (0x401d8000 + 0x0408)
Message Buffer 56 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB56_8B_WORD0
<link=p.CAN3.MB56_8B_WORD0>
#### p.CAN3.MB37_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d840c[0m (0x401d8000 + 0x040c)
Message Buffer 37 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb37_16b_word3
<link=p.CAN3.MB37_16B_WORD3>
#### p.can3.mb22_32b_word6
<link=p.CAN3.MB22_32B_WORD6>
#### p.can3.mb38_16b_cs
<link=p.CAN3.MB38_16B_CS>
#### CAN3.MB38_16B_WORD0
<link=p.CAN3.MB38_16B_WORD0>
#### p.can3.mb12_64b_word13
<link=p.CAN3.MB12_64B_WORD13>
#### p.CAN3.MB23_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8420[0m (0x401d8000 + 0x0420)
Message Buffer 23 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb12_64b_word15
<link=p.CAN3.MB12_64B_WORD15>
#### p.can3.mb13_64b_cs
<link=p.CAN3.MB13_64B_CS>
#### can3.mb23_32b_word3
<link=p.CAN3.MB23_32B_WORD3>
#### p.can3.mb23_32b_word4
<link=p.CAN3.MB23_32B_WORD4>
#### can3.mb59_8b_id
<link=p.CAN3.MB59_8B_ID>
#### CAN3.MB23_32B_WORD6
<link=p.CAN3.MB23_32B_WORD6>
#### p.can3.mb59_8b_word0
<link=p.CAN3.MB59_8B_WORD0>
#### can3.mb59_8b_word1
<link=p.CAN3.MB59_8B_WORD1>
#### p.CAN3.MB13_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8440[0m (0x401d8000 + 0x0440)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb13_64b_word4
<link=p.CAN3.MB13_64B_WORD4>
#### can3.mb60_8b_cs
<link=p.CAN3.MB60_8B_CS>
#### CAN3.MB60_8B_CS
<link=p.CAN3.MB60_8B_CS>
#### CAN3.MB40_16B_ID
<link=p.CAN3.MB40_16B_ID>
#### p.CAN3.WORD060
<lang=dft>
 (rw)  [1;33m0x401d8448[0m (0x401d8000 + 0x0448)
Message Buffer 60 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word060
<link=p.CAN3.WORD060>
#### p.can3.mb13_64b_word7
<link=p.CAN3.MB13_64B_WORD7>
#### CAN3.MB13_64B_WORD7
<link=p.CAN3.MB13_64B_WORD7>
#### p.CAN3.MB60_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d844c[0m (0x401d8000 + 0x044c)
Message Buffer 60 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb61_8b_cs
<link=p.CAN3.MB61_8B_CS>
#### p.CAN3.MB40_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8454[0m (0x401d8000 + 0x0454)
Message Buffer 40 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB61_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8454[0m (0x401d8000 + 0x0454)
Message Buffer 61 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB41_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8458[0m (0x401d8000 + 0x0458)
Message Buffer 41 CS Register
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
#### CAN3.MB41_16B_CS
<link=p.CAN3.MB41_16B_CS>
#### CAN3.MB62_8B_WORD1
<link=p.CAN3.MB62_8B_WORD1>
#### p.can3.word162
<link=p.CAN3.WORD162>
#### CAN3.WORD162
<link=p.CAN3.WORD162>
#### p.CAN3.ID63
<lang=dft>
 (rw)  [1;33m0x401d8474[0m (0x401d8000 + 0x0474)
Message Buffer 63 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.rximr[0]
<link=p.CAN3.RXIMR[0]>
#### CAN3.RXIMR[1]
<link=p.CAN3.RXIMR[1]>
#### p.can3.rximr[3]
<link=p.CAN3.RXIMR[3]>
#### p.can3.rximr[9]
<link=p.CAN3.RXIMR[9]>
#### p.CAN3.RXIMR[11]
<lang=dft>
 (rw)  [1;33m0x401d88ac[0m (0x401d8000 + 0x08ac)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.CAN3.RXIMR[27]
<lang=dft>
 (rw)  [1;33m0x401d88ec[0m (0x401d8000 + 0x08ec)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[35]
<link=p.CAN3.RXIMR[35]>
#### p.CAN3.RXIMR[42]
<lang=dft>
 (rw)  [1;33m0x401d8928[0m (0x401d8000 + 0x0928)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[51]
<link=p.CAN3.RXIMR[51]>
#### can3.rximr[53]
<link=p.CAN3.RXIMR[53]>
#### CAN3.RXIMR[61]
<link=p.CAN3.RXIMR[61]>
#### can3.rximr[62]
<link=p.CAN3.RXIMR[62]>
#### p.can3.etdc
<link=p.CAN3.ETDC>
#### p.can3.fdcbt
<link=p.CAN3.FDCBT>
#### p.CAN3.FDCRC
<lang=dft>
 (ro)  [1;33m0x401d8c08[0m (0x401d8000 + 0x0c08)
CAN FD CRC Register
 (ro) (21)  [0;32mFD_TXCRC[0m  - [20:00] -  Extended Transmitted CRC value
 (ro) (07)  [0;32mFD_MBCRC[0m  - [30:24] -  CRC Mailbox Number for FD_TXCRC
</lang>
#### CAN3.HR_TIME_STAMP[1]
<link=p.CAN3.HR_TIME_STAMP[1]>
#### can3.hr_time_stamp[4]
<link=p.CAN3.HR_TIME_STAMP[4]>
#### can3.hr_time_stamp[11]
<link=p.CAN3.HR_TIME_STAMP[11]>
#### can3.hr_time_stamp[14]
<link=p.CAN3.HR_TIME_STAMP[14]>
#### CAN3.HR_TIME_STAMP[18]
<link=p.CAN3.HR_TIME_STAMP[18]>
#### p.can3.hr_time_stamp[19]
<link=p.CAN3.HR_TIME_STAMP[19]>
#### can3.hr_time_stamp[38]
<link=p.CAN3.HR_TIME_STAMP[38]>
#### p.CAN3.HR_TIME_STAMP[40]
<lang=dft>
 (ro)  [1;33m0x401d8cd0[0m (0x401d8000 + 0x0cd0)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[40]
<link=p.CAN3.HR_TIME_STAMP[40]>
#### CAN3.HR_TIME_STAMP[52]
<link=p.CAN3.HR_TIME_STAMP[52]>
#### p.CAN3.HR_TIME_STAMP[53]
<lang=dft>
 (ro)  [1;33m0x401d8d04[0m (0x401d8000 + 0x0d04)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[53]
<link=p.CAN3.HR_TIME_STAMP[53]>
#### p.can3.hr_time_stamp[56]
<link=p.CAN3.HR_TIME_STAMP[56]>
#### CAN3.HR_TIME_STAMP[57]
<link=p.CAN3.HR_TIME_STAMP[57]>
#### p.CAN3.ERFFEL[2]
<lang=dft>
 (rw)  [1;33m0x401db008[0m (0x401d8000 + 0x3008)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[13]
<link=p.CAN3.ERFFEL[13]>
#### can3.erffel[16]
<link=p.CAN3.ERFFEL[16]>
#### p.CAN3.ERFFEL[21]
<lang=dft>
 (rw)  [1;33m0x401db054[0m (0x401d8000 + 0x3054)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[24]
<lang=dft>
 (rw)  [1;33m0x401db060[0m (0x401d8000 + 0x3060)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[38]
<link=p.CAN3.ERFFEL[38]>
#### CAN3.ERFFEL[54]
<link=p.CAN3.ERFFEL[54]>
#### can3.erffel[59]
<link=p.CAN3.ERFFEL[59]>
#### p.can3.erffel[60]
<link=p.CAN3.ERFFEL[60]>
#### CAN3.ERFFEL[65]
<link=p.CAN3.ERFFEL[65]>
#### p.can3.erffel[73]
<link=p.CAN3.ERFFEL[73]>
#### p.can3.erffel[76]
<link=p.CAN3.ERFFEL[76]>
#### CAN3.ERFFEL[78]
<link=p.CAN3.ERFFEL[78]>
#### p.can3.erffel[82]
<link=p.CAN3.ERFFEL[82]>
#### can3.erffel[85]
<link=p.CAN3.ERFFEL[85]>
#### p.can3.erffel[91]
<link=p.CAN3.ERFFEL[91]>
#### p.can3.erffel[96]
<link=p.CAN3.ERFFEL[96]>
#### p.CAN3.ERFFEL[102]
<lang=dft>
 (rw)  [1;33m0x401db198[0m (0x401d8000 + 0x3198)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[103]
<link=p.CAN3.ERFFEL[103]>
#### can3.erffel[106]
<link=p.CAN3.ERFFEL[106]>
#### CAN3.ERFFEL[106]
<link=p.CAN3.ERFFEL[106]>
#### CAN3.ERFFEL[110]
<link=p.CAN3.ERFFEL[110]>
#### p.can3.erffel[112]
<link=p.CAN3.ERFFEL[112]>
#### p.CAN3.ERFFEL[115]
<lang=dft>
 (rw)  [1;33m0x401db1cc[0m (0x401d8000 + 0x31cc)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[123]
<lang=dft>
 (rw)  [1;33m0x401db1ec[0m (0x401d8000 + 0x31ec)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[124]
<lang=dft>
 (rw)  [1;33m0x401db1f0[0m (0x401d8000 + 0x31f0)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[127]
<link=p.CAN3.ERFFEL[127]>
#### TMR1.COMP10
<link=p.TMR1.COMP10>
#### p.tmr1.comp13
<link=p.TMR1.COMP13>
#### tmr1.comp13
<link=p.TMR1.COMP13>
#### tmr1.comp22
<link=p.TMR1.COMP22>
#### TMR1.LOAD2
<link=p.TMR1.LOAD2>
#### TMR1.HOLD2
<link=p.TMR1.HOLD2>
#### p.TMR1.SCTRL2
<lang=dft>
 (rw)  [1;33m0x401dc04e[0m (0x401dc000 + 0x004e)
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
#### TMR1.SCTRL3
<link=p.TMR1.SCTRL3>
#### tmr1.cmpld11
<link=p.TMR1.CMPLD11>
#### TMR1.CMPLD21
<link=p.TMR1.CMPLD21>
#### p.TMR1.CMPLD23
<lang=dft>
 (rw)  [1;33m0x401dc072[0m (0x401dc000 + 0x0072)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### TMR1.CSCTRL1
<link=p.TMR1.CSCTRL1>
#### p.TMR1.FILT0
<lang=dft>
 (rw)  [1;33m0x401dc016[0m (0x401dc000 + 0x0016)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### p.tmr1.dma0
<link=p.TMR1.DMA0>
#### TMR2.COMP12
<link=p.TMR2.COMP12>
#### p.TMR2.COMP13
<lang=dft>
 (rw)  [1;33m0x401e0060[0m (0x401e0000 + 0x0060)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### tmr2.comp13
<link=p.TMR2.COMP13>
#### tmr2.comp22
<link=p.TMR2.COMP22>
#### TMR2.LOAD1
<link=p.TMR2.LOAD1>
#### TMR2.HOLD1
<link=p.TMR2.HOLD1>
#### p.TMR2.CNTR1
<lang=dft>
 (rw)  [1;33m0x401e002a[0m (0x401e0000 + 0x002a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### TMR2.CTRL1
<link=p.TMR2.CTRL1>
#### TMR2.SCTRL0
<link=p.TMR2.SCTRL0>
#### TMR2.CMPLD20
<link=p.TMR2.CMPLD20>
#### tmr2.csctrl0
<link=p.TMR2.CSCTRL0>
#### TMR3.LOAD0
<link=p.TMR3.LOAD0>
#### TMR3.HOLD1
<link=p.TMR3.HOLD1>
#### TMR3.CNTR2
<link=p.TMR3.CNTR2>
#### p.tmr3.cntr3
<link=p.TMR3.CNTR3>
#### tmr3.ctrl1
<link=p.TMR3.CTRL1>
#### p.TMR3.CTRL2
<lang=dft>
 (rw)  [1;33m0x401e404c[0m (0x401e4000 + 0x004c)
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
#### p.TMR3.CMPLD20
<lang=dft>
 (rw)  [1;33m0x401e4012[0m (0x401e4000 + 0x0012)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### p.tmr3.csctrl2
<link=p.TMR3.CSCTRL2>
#### tmr3.dma0
<link=p.TMR3.DMA0>
#### tmr4.comp10
<link=p.TMR4.COMP10>
#### TMR4.COMP22
<link=p.TMR4.COMP22>
#### p.tmr4.capt0
<link=p.TMR4.CAPT0>
#### p.TMR4.LOAD0
<lang=dft>
 (rw)  [1;33m0x401e8006[0m (0x401e8000 + 0x0006)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### TMR4.LOAD1
<link=p.TMR4.LOAD1>
#### p.TMR4.CTRL1
<lang=dft>
 (rw)  [1;33m0x401e802c[0m (0x401e8000 + 0x002c)
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
#### p.TMR4.CMPLD20
<lang=dft>
 (rw)  [1;33m0x401e8012[0m (0x401e8000 + 0x0012)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### p.tmr4.csctrl0
<link=p.TMR4.CSCTRL0>
#### p.tmr4.filt0
<link=p.TMR4.FILT0>
#### tmr4.filt3
<link=p.TMR4.FILT3>
#### p.tmr4.dma1
<link=p.TMR4.DMA1>
#### TMR4.DMA1
<link=p.TMR4.DMA1>
#### gpt1.ocr2
<link=p.GPT1.OCR2>
#### GPT1.OCR3
<link=p.GPT1.OCR3>
#### p.gpt1.cnt
<link=p.GPT1.CNT>
#### p.GPT2.OCR1
<lang=dft>
 (rw)  [1;33m0x401f0010[0m (0x401f0000 + 0x0010)
GPT Output Compare Register 1
 (rw) (32)  [0;32mCOMP[0m  - [31:00] -  Compare Value
</lang>
#### p.OCOTP.CTRL_SET
<lang=dft>
 (rw)  [1;33m0x401f4004[0m (0x401f4000 + 0x0004)
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
</lang>
#### OCOTP.CTRL_CLR
<link=p.OCOTP.CTRL_CLR>
#### p.ocotp.read_fuse_data
<link=p.OCOTP.READ_FUSE_DATA>
#### OCOTP.SCS
<link=p.OCOTP.SCS>
#### OCOTP.CRC_VALUE
<link=p.OCOTP.CRC_VALUE>
#### p.OCOTP.VERSION
<lang=dft>
 (ro)  [1;33m0x401f4090[0m (0x401f4000 + 0x0090)
OTP Controller Version Register
 (ro) (16)  [0;32mSTEP[0m  - [15:00] -  STEP
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  MINOR
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  MAJOR
</lang>
#### p.ocotp.version
<link=p.OCOTP.VERSION>
#### OCOTP.LOCK
<link=p.OCOTP.LOCK>
#### p.OCOTP.CFG6
<lang=dft>
 (rw)  [1;33m0x401f4470[0m (0x401f4000 + 0x0470)
Value of OTP Bank0 Word7 (Configuration and Manufacturing Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.cfg6
<link=p.OCOTP.CFG6>
#### p.ocotp.mem3
<link=p.OCOTP.MEM3>
#### OCOTP.MEM3
<link=p.OCOTP.MEM3>
#### p.OCOTP.ANA2
<lang=dft>
 (rw)  [1;33m0x401f44f0[0m (0x401f4000 + 0x04f0)
Value of OTP Bank1 Word7 (General Purpose Customer Defined Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.ana2
<link=p.OCOTP.ANA2>
#### p.OCOTP.OTPMK2
<lang=dft>
 (rw)  [1;33m0x401f4520[0m (0x401f4000 + 0x0520)
Value of OTP Bank2 Word2 (OTPMK Key)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### ocotp.otpmk3
<link=p.OCOTP.OTPMK3>
#### p.OCOTP.SRK7
<lang=dft>
 (rw)  [1;33m0x401f45f0[0m (0x401f4000 + 0x05f0)
Shadow Register for OTP Bank3 Word7 (SRK Hash)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.srk7
<link=p.OCOTP.SRK7>
#### p.ocotp.sjc_resp1
<link=p.OCOTP.SJC_RESP1>
#### p.OCOTP.MAC1
<lang=dft>
 (rw)  [1;33m0x401f4630[0m (0x401f4000 + 0x0630)
Value of OTP Bank4 Word3 (MAC Address)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### ocotp.mac1
<link=p.OCOTP.MAC1>
#### ocotp.sw_gp21
<link=p.OCOTP.SW_GP21>
#### p.ocotp.sw_gp22
<link=p.OCOTP.SW_GP22>
#### p.OCOTP.ROM_PATCH3
<lang=dft>
 (rw)  [1;33m0x401f4830[0m (0x401f4000 + 0x0830)
Value of OTP Bank6 Word3 (ROM Patch)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.gp31
<link=p.OCOTP.GP31>
#### p.OCOTP.GP32
<lang=dft>
 (rw)  [1;33m0x401f48a0[0m (0x401f4000 + 0x08a0)
Value of OTP Bank7 Word2 (GP3)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.GP32
<link=p.OCOTP.GP32>
#### p.ocotp.gp40
<link=p.OCOTP.GP40>
#### ocotp.gp41
<link=p.OCOTP.GP41>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_01>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_02>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_15>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_19
<lang=dft>
 (rw)  [1;33m0x401f8060[0m (0x401f8000 + 0x0060)
SW_MUX_CTL_PAD_GPIO_EMC_19 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR11 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM2_PWMA03 of instance: flexpwm2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART4_TX of instance: lpuart4
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_RDATA01 of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: QTIMER2_TIMER0 of instance: qtimer2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO19 of instance: gpio4
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SNVS_VIO_5 of instance: snvs_hp
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_19
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_24
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_24>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_27
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_27>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_30
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_30>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_33
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_33>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_05
<lang=dft>
 (rw)  [1;33m0x401f80d0[0m (0x401f8000 + 0x00d0)
SW_MUX_CTL_PAD_GPIO_AD_B0_05 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SRC_BOOT_MODE01 of instance: src
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: MQS_LEFT of instance: mqs
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ENET_TX_DATA02 of instance: enet
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI2_TX_BCLK of instance: sai2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA08 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO05 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: XBAR1_INOUT17 of instance: xbar1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: LPSPI3_PCS2 of instance: lpspi3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_05
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b0_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_09>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_01>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_06>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_12>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_15>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_00
<lang=dft>
 (rw)  [1;33m0x401f813c[0m (0x401f8000 + 0x013c)
SW_MUX_CTL_PAD_GPIO_B0_00 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_CLK of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER1_TIMER0 of instance: qtimer1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: MQS_RIGHT of instance: mqs
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPSPI4_PCS0 of instance: lpspi4
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO00 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO00 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SEMC_CSX01 of instance: semc
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_MDC of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_00
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_03>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_10>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_13
<lang=dft>
 (rw)  [1;33m0x401f8170[0m (0x401f8000 + 0x0170)
SW_MUX_CTL_PAD_GPIO_B0_13 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA09 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT11 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ARM_TRACE_SWO of instance: cm7_mx6rt
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_MCLK of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO13 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO13 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SRC_BOOT_CFG09 of instance: src
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TDATA01 of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_13
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_03>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_07
<lang=dft>
 (rw)  [1;33m0x401f8198[0m (0x401f8000 + 0x0198)
SW_MUX_CTL_PAD_GPIO_B1_07 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA19 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: LPSPI4_SCK of instance: lpspi4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_DATA12 of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_TX_DATA00 of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO23 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO23 of instance: gpio2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT1_COMPARE1 of instance: gpt1
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO23 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_07
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_08>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_10>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_14
<lang=dft>
 (rw)  [1;33m0x401f81b4[0m (0x401f8000 + 0x01b4)
SW_MUX_CTL_PAD_GPIO_B1_14 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: ENET_MDC of instance: enet
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMA02 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_HSYNC of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_IN02 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO30 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO30 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC1_VSELECT of instance: usdhc1
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TDATA00 of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO30 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_14
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_00
<lang=dft>
 (rw)  [1;33m0x401f81bc[0m (0x401f8000 + 0x01bc)
SW_MUX_CTL_PAD_GPIO_SD_B0_00 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC1_CMD of instance: usdhc1
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMA00 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPI2C3_SCL of instance: lpi2c3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT04 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI1_SCK of instance: lpspi1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO12 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXSPIA_SS1_B of instance: flexspi
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TX_EN of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: SEMC_DQS4 of instance: semc
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B0_00
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_07
<lang=dft>
 (rw)  [1;33m0x401f81f0[0m (0x401f8000 + 0x01f0)
SW_MUX_CTL_PAD_GPIO_SD_B1_07 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_CSX01 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIA_SCLK of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART7_RTS_B of instance: lpuart7
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_DATA00 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI2_SCK of instance: lpspi2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO07 of instance: gpio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_07
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_09>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_01>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_02>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_04
<lang=dft>
 (rw)  [1;33m0x401f8214[0m (0x401f8000 + 0x0214)
SW_PAD_CTL_PAD_GPIO_EMC_04 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_emc_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_06>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_15>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_18
<lang=dft>
 (rw)  [1;33m0x401f824c[0m (0x401f8000 + 0x024c)
SW_PAD_CTL_PAD_GPIO_EMC_18 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_emc_20
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_20>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_22
<lang=dft>
 (rw)  [1;33m0x401f825c[0m (0x401f8000 + 0x025c)
SW_PAD_CTL_PAD_GPIO_EMC_22 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_33
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_33>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_38
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_38>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_02>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_03>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_04>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_05
<lang=dft>
 (rw)  [1;33m0x401f82c0[0m (0x401f8000 + 0x02c0)
SW_PAD_CTL_PAD_GPIO_AD_B0_05 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_09
<lang=dft>
 (rw)  [1;33m0x401f8310[0m (0x401f8000 + 0x0310)
SW_PAD_CTL_PAD_GPIO_AD_B1_09 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_05
<lang=dft>
 (rw)  [1;33m0x401f8340[0m (0x401f8000 + 0x0340)
SW_PAD_CTL_PAD_GPIO_B0_05 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_05>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_06>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_08>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_11>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_02>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_02>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_11>
#### iomuxc.sw_pad_ctl_pad_gpio_b1_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_12>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_05
<lang=dft>
 (rw)  [1;33m0x401f83c0[0m (0x401f8000 + 0x03c0)
SW_PAD_CTL_PAD_GPIO_SD_B0_05 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_05>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_03>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b1_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_09>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_11
<lang=dft>
 (rw)  [1;33m0x401f83f0[0m (0x401f8000 + 0x03f0)
SW_PAD_CTL_PAD_GPIO_SD_B1_11 SW PAD Control Register
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
#### iomuxc.csi_data02_select_input
<link=p.IOMUXC.CSI_DATA02_SELECT_INPUT>
#### p.IOMUXC.CSI_DATA07_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8414[0m (0x401f8000 + 0x0414)
CSI_DATA07_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_10_ALT4 :
         Selecting Pad: GPIO_AD_B1_10 for Mode: ALT4
      0x1 - GPIO_AD_B0_06_ALT4 :
         Selecting Pad: GPIO_AD_B0_06 for Mode: ALT4
</lang>
#### IOMUXC.CSI_DATA09_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA09_SELECT_INPUT>
#### iomuxc.enet0_timer_select_input
<link=p.IOMUXC.ENET0_TIMER_SELECT_INPUT>
#### iomuxc.flexcan1_rx_select_input
<link=p.IOMUXC.FLEXCAN1_RX_SELECT_INPUT>
#### p.iomuxc.flexpwm1_pwma2_select_input
<link=p.IOMUXC.FLEXPWM1_PWMA2_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM2_PWMA3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8474[0m (0x401f8000 + 0x0474)
FLEXPWM2_PWMA3_SELECT_INPUT DAISY Register
 (rw) (03)  [0;32mDAISY[0m  - [02:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_02_ALT2 :
         Selecting Pad: GPIO_SD_B1_02 for Mode: ALT2
      0x1 - GPIO_EMC_19_ALT1 :
         Selecting Pad: GPIO_EMC_19 for Mode: ALT1
      0x2 - GPIO_AD_B0_00_ALT0 :
         Selecting Pad: GPIO_AD_B0_00 for Mode: ALT0
      0x3 - GPIO_AD_B0_09_ALT1 :
         Selecting Pad: GPIO_AD_B0_09 for Mode: ALT1
      0x4 - GPIO_B1_02_ALT6 :
         Selecting Pad: GPIO_B1_02 for Mode: ALT6
</lang>
#### p.IOMUXC.FLEXPWM2_PWMA2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8480[0m (0x401f8000 + 0x0480)
FLEXPWM2_PWMA2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_10_ALT1 :
         Selecting Pad: GPIO_EMC_10 for Mode: ALT1
      0x1 - GPIO_B0_10_ALT2 :
         Selecting Pad: GPIO_B0_10 for Mode: ALT2
</lang>
#### iomuxc.flexpwm2_pwma2_select_input
<link=p.IOMUXC.FLEXPWM2_PWMA2_SELECT_INPUT>
#### IOMUXC.FLEXPWM2_PWMB0_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMB0_SELECT_INPUT>
#### p.iomuxc.flexspia_data1_select_input
<link=p.IOMUXC.FLEXSPIA_DATA1_SELECT_INPUT>
#### IOMUXC.FLEXSPIA_DATA1_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_DATA1_SELECT_INPUT>
#### p.IOMUXC.FLEXSPIA_DATA3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84b4[0m (0x401f8000 + 0x04b4)
FLEXSPIA_DATA3_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_11_ALT1 :
         Selecting Pad: GPIO_SD_B1_11 for Mode: ALT1
      0x1 - GPIO_AD_B1_10_ALT0 :
         Selecting Pad: GPIO_AD_B1_10 for Mode: ALT0
</lang>
#### IOMUXC.LPI2C3_SDA_SELECT_INPUT
<link=p.IOMUXC.LPI2C3_SDA_SELECT_INPUT>
#### iomuxc.lpi2c4_scl_select_input
<link=p.IOMUXC.LPI2C4_SCL_SELECT_INPUT>
#### iomuxc.lpspi1_sck_select_input
<link=p.IOMUXC.LPSPI1_SCK_SELECT_INPUT>
#### p.iomuxc.lpspi2_pcs0_select_input
<link=p.IOMUXC.LPSPI2_PCS0_SELECT_INPUT>
#### IOMUXC.LPSPI2_PCS0_SELECT_INPUT
<link=p.IOMUXC.LPSPI2_PCS0_SELECT_INPUT>
#### IOMUXC.LPSPI2_SCK_SELECT_INPUT
<link=p.IOMUXC.LPSPI2_SCK_SELECT_INPUT>
#### p.iomuxc.lpspi2_sdo_select_input
<link=p.IOMUXC.LPSPI2_SDO_SELECT_INPUT>
#### IOMUXC.LPSPI3_SCK_SELECT_INPUT
<link=p.IOMUXC.LPSPI3_SCK_SELECT_INPUT>
#### p.IOMUXC.LPSPI4_SDI_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8524[0m (0x401f8000 + 0x0524)
LPSPI4_SDI_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_B0_01_ALT3 :
         Selecting Pad: GPIO_B0_01 for Mode: ALT3
      0x1 - GPIO_B1_05_ALT1 :
         Selecting Pad: GPIO_B1_05 for Mode: ALT1
</lang>
#### IOMUXC.LPUART3_CTS_B_SELECT_INPUT
<link=p.IOMUXC.LPUART3_CTS_B_SELECT_INPUT>
#### p.iomuxc.lpuart3_tx_select_input
<link=p.IOMUXC.LPUART3_TX_SELECT_INPUT>
#### IOMUXC.LPUART3_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART3_TX_SELECT_INPUT>
#### IOMUXC.LPUART5_RX_SELECT_INPUT
<link=p.IOMUXC.LPUART5_RX_SELECT_INPUT>
#### iomuxc.lpuart8_tx_select_input
<link=p.IOMUXC.LPUART8_TX_SELECT_INPUT>
#### p.iomuxc.nmi_select_input
<link=p.IOMUXC.NMI_SELECT_INPUT>
#### IOMUXC.QTIMER2_TIMER1_SELECT_INPUT
<link=p.IOMUXC.QTIMER2_TIMER1_SELECT_INPUT>
#### iomuxc.qtimer3_timer2_select_input
<link=p.IOMUXC.QTIMER3_TIMER2_SELECT_INPUT>
#### IOMUXC.SAI1_RX_SYNC_SELECT_INPUT
<link=p.IOMUXC.SAI1_RX_SYNC_SELECT_INPUT>
#### p.IOMUXC.SAI2_TX_BCLK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85c0[0m (0x401f8000 + 0x05c0)
SAI2_TX_BCLK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_06_ALT2 :
         Selecting Pad: GPIO_EMC_06 for Mode: ALT2
      0x1 - GPIO_AD_B0_05_ALT3 :
         Selecting Pad: GPIO_AD_B0_05 for Mode: ALT3
</lang>
#### p.IOMUXC.SPDIF_IN_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85c8[0m (0x401f8000 + 0x05c8)
SPDIF_IN_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_03_ALT3 :
         Selecting Pad: GPIO_AD_B1_03 for Mode: ALT3
      0x1 - GPIO_EMC_16_ALT3 :
         Selecting Pad: GPIO_EMC_16 for Mode: ALT3
</lang>
#### IOMUXC.USB_OTG1_OC_SELECT_INPUT
<link=p.IOMUXC.USB_OTG1_OC_SELECT_INPUT>
#### iomuxc.usdhc2_data0_select_input
<link=p.IOMUXC.USDHC2_DATA0_SELECT_INPUT>
#### iomuxc.usdhc2_data6_select_input
<link=p.IOMUXC.USDHC2_DATA6_SELECT_INPUT>
#### IOMUXC.XBAR1_IN02_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN02_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN03_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8610[0m (0x401f8000 + 0x0610)
XBAR1_IN03_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_01_ALT3 :
         Selecting Pad: GPIO_EMC_01 for Mode: ALT3
      0x1 - GPIO_B1_15_ALT3 :
         Selecting Pad: GPIO_B1_15 for Mode: ALT3
</lang>
#### p.IOMUXC.XBAR1_IN08_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8624[0m (0x401f8000 + 0x0624)
XBAR1_IN08_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_06_ALT3 :
         Selecting Pad: GPIO_EMC_06 for Mode: ALT3
      0x1 - GPIO_SD_B0_04_ALT3 :
         Selecting Pad: GPIO_SD_B0_04 for Mode: ALT3
</lang>
#### IOMUXC.XBAR1_IN09_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN09_SELECT_INPUT>
#### IOMUXC.XBAR1_IN17_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN17_SELECT_INPUT>
#### iomuxc.xbar1_in23_select_input
<link=p.IOMUXC.XBAR1_IN23_SELECT_INPUT>
#### IOMUXC.XBAR1_IN16_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN16_SELECT_INPUT>
#### iomuxc.xbar1_in19_select_input
<link=p.IOMUXC.XBAR1_IN19_SELECT_INPUT>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_09>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_10>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_13>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_03
<lang=dft>
 (rw)  [1;33m0x401f86a0[0m (0x401f8000 + 0x06a0)
SW_MUX_CTL_PAD_GPIO_SPI_B1_03 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_DATA01 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B1_03
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_07>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_04>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_09
<lang=dft>
 (rw)  [1;33m0x401f86d8[0m (0x401f8000 + 0x06d8)
SW_PAD_CTL_PAD_GPIO_SPI_B0_09 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_13>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_01>
#### iomuxc.enet2_ipp_ind_mac0_mdio_select_input
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_MDIO_SELECT_INPUT>
#### IOMUXC.ENET2_IPP_IND_MAC0_TIMER_SELECT_INPUT_0
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_TIMER_SELECT_INPUT_0>
#### IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT>
#### iomuxc.flexspi2_ipp_ind_io_fb_bit3_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT3_SELECT_INPUT>
#### iomuxc.flexspi2_ipp_ind_sck_fb_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_SCK_FB_SELECT_INPUT>
#### iomuxc.gpt1_ipp_ind_capin1_select_input
<link=p.IOMUXC.GPT1_IPP_IND_CAPIN1_SELECT_INPUT>
#### p.iomuxc.gpt1_ipp_ind_capin2_select_input
<link=p.IOMUXC.GPT1_IPP_IND_CAPIN2_SELECT_INPUT>
#### IOMUXC.CANFD_IPP_IND_CANRX_SELECT_INPUT
<link=p.IOMUXC.CANFD_IPP_IND_CANRX_SELECT_INPUT>
#### flexspi.mcr1
<link=p.FLEXSPI.MCR1>
#### p.flexspi.inten
<link=p.FLEXSPI.INTEN>
#### p.FLEXSPI.AHBRXBUF0CR0
<lang=dft>
 (rw)  [1;33m0x402a8020[0m (0x402a8000 + 0x0020)
AHB RX Buffer 0 Control Register 0
 (rw) (08)  [0;32mBUFSZ[0m  - [07:00] -  AHB RX Buffer Size in 64 bits.Refer AHB RX Buffer Management for more details.
 (rw) (04)  [0;32mMSTRID[0m  - [19:16] -  This AHB RX Buffer is assigned according to AHB Master with ID (MSTR_ID). Pleas
 e refer to for AHB RX Buffer allocation.
 (rw) (02)  [0;32mPRIORITY[0m  - [25:24] -  This priority for AHB Master Read which this AHB RX Buffer is assigned. Refer f
 or more details.
 (rw) (01)  [0;32mPREFETCHEN[0m  - [31:31] -  AHB Read Prefetch Enable for current AHB RX Buffer corresponding Master.
</lang>
#### FLEXSPI.AHBRXBUF0CR0
<link=p.FLEXSPI.AHBRXBUF0CR0>
#### p.FLEXSPI.AHBRXBUF3CR0
<lang=dft>
 (rw)  [1;33m0x402a802c[0m (0x402a8000 + 0x002c)
AHB RX Buffer 3 Control Register 0
 (rw) (08)  [0;32mBUFSZ[0m  - [07:00] -  AHB RX Buffer Size in 64 bits.Refer AHB RX Buffer Management for more details.
 (rw) (04)  [0;32mMSTRID[0m  - [19:16] -  This AHB RX Buffer is assigned according to AHB Master with ID (MSTR_ID). Pleas
 e refer to for AHB RX Buffer allocation.
 (rw) (02)  [0;32mPRIORITY[0m  - [25:24] -  This priority for AHB Master Read which this AHB RX Buffer is assigned. Refer f
 or more details.
 (rw) (01)  [0;32mPREFETCHEN[0m  - [31:31] -  AHB Read Prefetch Enable for current AHB RX Buffer corresponding Master.
</lang>
#### p.FLEXSPI.FLSHCR1A1
<lang=dft>
 (rw)  [1;33m0x402a8070[0m (0x402a8000 + 0x0070)
Flash A1 Control Register 1
 (rw) (05)  [0;32mTCSS[0m  - [04:00] -  Serial Flash CS setup time.
 (rw) (05)  [0;32mTCSH[0m  - [09:05] -  Serial Flash CS Hold time.
 (rw) (01)  [0;32mWA[0m  - [10:10] -  Word Addressable.
 (rw) (04)  [0;32mCAS[0m  - [14:11] -  Column Address Size.
 (rw) (01)  [0;32mCSINTERVALUNIT[0m  - [15:15] -  CS interval unit
      0 - CSINTERVALUNIT_0 :
         The CS interval unit is 1 serial clock cycle
      0x1 - CSINTERVALUNIT_1 :
         The CS interval unit is 256 serial clock cycle
 (rw) (16)  [0;32mCSINTERVAL[0m  - [31:16] -  This field is used to set the minimum interval between flash device Chip select
 ion deassertion and flash device Chip selection assertion. If external flash ha
 s a limitation on the interval between command sequences, this field should be 
 set accordingly. If there is no limitation, set this field with value 0x0.
</lang>
#### flexspi.flshcr2b1
<link=p.FLEXSPI.FLSHCR2B1>
#### FLEXSPI.FLSHCR2B1
<link=p.FLEXSPI.FLSHCR2B1>
#### flexspi.flshcr4
<link=p.FLEXSPI.FLSHCR4>
#### p.flexspi.dllcra
<link=p.FLEXSPI.DLLCRA>
#### flexspi.dllcra
<link=p.FLEXSPI.DLLCRA>
#### p.FLEXSPI.RFDR[0]
<lang=dft>
 (ro)  [1;33m0x402a8100[0m (0x402a8000 + 0x0100)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI.RFDR[7]
<link=p.FLEXSPI.RFDR[7]>
#### p.flexspi.rfdr[8]
<link=p.FLEXSPI.RFDR[8]>
#### p.flexspi.rfdr[12]
<link=p.FLEXSPI.RFDR[12]>
#### flexspi.rfdr[17]
<link=p.FLEXSPI.RFDR[17]>
#### FLEXSPI.RFDR[23]
<link=p.FLEXSPI.RFDR[23]>
#### flexspi.rfdr[26]
<link=p.FLEXSPI.RFDR[26]>
#### flexspi.rfdr[29]
<link=p.FLEXSPI.RFDR[29]>
#### p.flexspi.tfdr[1]
<link=p.FLEXSPI.TFDR[1]>
#### FLEXSPI.TFDR[2]
<link=p.FLEXSPI.TFDR[2]>
#### p.flexspi.tfdr[4]
<link=p.FLEXSPI.TFDR[4]>
#### FLEXSPI.TFDR[8]
<link=p.FLEXSPI.TFDR[8]>
#### flexspi.tfdr[9]
<link=p.FLEXSPI.TFDR[9]>
#### flexspi.tfdr[11]
<link=p.FLEXSPI.TFDR[11]>
#### p.flexspi.tfdr[14]
<link=p.FLEXSPI.TFDR[14]>
#### FLEXSPI.TFDR[20]
<link=p.FLEXSPI.TFDR[20]>
#### p.flexspi.tfdr[31]
<link=p.FLEXSPI.TFDR[31]>
#### FLEXSPI.LUT[3]
<link=p.FLEXSPI.LUT[3]>
#### flexspi.lut[17]
<link=p.FLEXSPI.LUT[17]>
#### p.flexspi.lut[23]
<link=p.FLEXSPI.LUT[23]>
#### p.FLEXSPI.LUT[25]
<lang=dft>
 (rw)  [1;33m0x402a8264[0m (0x402a8000 + 0x0264)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[29]
<link=p.FLEXSPI.LUT[29]>
#### flexspi.lut[29]
<link=p.FLEXSPI.LUT[29]>
#### p.FLEXSPI.LUT[32]
<lang=dft>
 (rw)  [1;33m0x402a8280[0m (0x402a8000 + 0x0280)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[33]
<link=p.FLEXSPI.LUT[33]>
#### p.FLEXSPI.LUT[35]
<lang=dft>
 (rw)  [1;33m0x402a828c[0m (0x402a8000 + 0x028c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[47]
<link=p.FLEXSPI.LUT[47]>
#### p.FLEXSPI.LUT[50]
<lang=dft>
 (rw)  [1;33m0x402a82c8[0m (0x402a8000 + 0x02c8)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[51]
<link=p.FLEXSPI.LUT[51]>
#### FLEXSPI.LUT[54]
<link=p.FLEXSPI.LUT[54]>
#### flexspi.lut[58]
<link=p.FLEXSPI.LUT[58]>
#### p.flexspi.lut[60]
<link=p.FLEXSPI.LUT[60]>
#### flexspi.lut[62]
<link=p.FLEXSPI.LUT[62]>
#### FLEXSPI2.MCR2
<link=p.FLEXSPI2.MCR2>
#### p.flexspi2.inten
<link=p.FLEXSPI2.INTEN>
#### flexspi2.ahbrxbuf0cr0
<link=p.FLEXSPI2.AHBRXBUF0CR0>
#### p.flexspi2.iptxfcr
<link=p.FLEXSPI2.IPTXFCR>
#### flexspi2.rfdr[0]
<link=p.FLEXSPI2.RFDR[0]>
#### p.FLEXSPI2.RFDR[3]
<lang=dft>
 (ro)  [1;33m0x402a410c[0m (0x402a4000 + 0x010c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI2.RFDR[4]
<lang=dft>
 (ro)  [1;33m0x402a4110[0m (0x402a4000 + 0x0110)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.rfdr[15]
<link=p.FLEXSPI2.RFDR[15]>
#### FLEXSPI2.RFDR[20]
<link=p.FLEXSPI2.RFDR[20]>
#### p.flexspi2.rfdr[24]
<link=p.FLEXSPI2.RFDR[24]>
#### FLEXSPI2.RFDR[27]
<link=p.FLEXSPI2.RFDR[27]>
#### p.flexspi2.rfdr[30]
<link=p.FLEXSPI2.RFDR[30]>
#### FLEXSPI2.TFDR[0]
<link=p.FLEXSPI2.TFDR[0]>
#### p.FLEXSPI2.TFDR[1]
<lang=dft>
 (wo)  [1;33m0x402a4184[0m (0x402a4000 + 0x0184)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI2.TFDR[5]
<link=p.FLEXSPI2.TFDR[5]>
#### FLEXSPI2.TFDR[24]
<link=p.FLEXSPI2.TFDR[24]>
#### flexspi2.tfdr[25]
<link=p.FLEXSPI2.TFDR[25]>
#### p.flexspi2.lut[1]
<link=p.FLEXSPI2.LUT[1]>
#### p.FLEXSPI2.LUT[2]
<lang=dft>
 (rw)  [1;33m0x402a4208[0m (0x402a4000 + 0x0208)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[7]
<link=p.FLEXSPI2.LUT[7]>
#### p.FLEXSPI2.LUT[8]
<lang=dft>
 (rw)  [1;33m0x402a4220[0m (0x402a4000 + 0x0220)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[15]
<lang=dft>
 (rw)  [1;33m0x402a423c[0m (0x402a4000 + 0x023c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[15]
<link=p.FLEXSPI2.LUT[15]>
#### FLEXSPI2.LUT[17]
<link=p.FLEXSPI2.LUT[17]>
#### p.flexspi2.lut[18]
<link=p.FLEXSPI2.LUT[18]>
#### p.flexspi2.lut[20]
<link=p.FLEXSPI2.LUT[20]>
#### flexspi2.lut[24]
<link=p.FLEXSPI2.LUT[24]>
#### p.flexspi2.lut[25]
<link=p.FLEXSPI2.LUT[25]>
#### FLEXSPI2.LUT[29]
<link=p.FLEXSPI2.LUT[29]>
#### FLEXSPI2.LUT[31]
<link=p.FLEXSPI2.LUT[31]>
#### flexspi2.lut[33]
<link=p.FLEXSPI2.LUT[33]>
#### p.flexspi2.lut[36]
<link=p.FLEXSPI2.LUT[36]>
#### flexspi2.lut[38]
<link=p.FLEXSPI2.LUT[38]>
#### FLEXSPI2.LUT[40]
<link=p.FLEXSPI2.LUT[40]>
#### p.FLEXSPI2.LUT[41]
<lang=dft>
 (rw)  [1;33m0x402a42a4[0m (0x402a4000 + 0x02a4)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[45]
<link=p.FLEXSPI2.LUT[45]>
#### p.flexspi2.lut[51]
<link=p.FLEXSPI2.LUT[51]>
#### flexspi2.lut[54]
<link=p.FLEXSPI2.LUT[54]>
#### FLEXSPI2.LUT[56]
<link=p.FLEXSPI2.LUT[56]>
#### PXP.CTRL_SET
<link=p.PXP.CTRL_SET>
#### p.pxp.ctrl_tog
<link=p.PXP.CTRL_TOG>
#### PXP.OUT_AS_LRC
<link=p.PXP.OUT_AS_LRC>
#### p.PXP.PS_CTRL
<lang=dft>
 (rw)  [1;33m0x402b40b0[0m (0x402b4000 + 0x00b0)
Processed Surface (PS) Control Register
 (rw) (05)  [0;32mFORMAT[0m  - [04:00] -  PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CS
 C1_COEF0 register.
      0x4 - RGB888 :
         32-bit pixels (unpacked 24-bit format)
      0xC - RGB555 :
         16-bit pixels
      0xD - RGB444 :
         16-bit pixels
      0xE - RGB565 :
         16-bit pixels
      0x10 - YUV1P444 :
         32-bit pixels (1-plane XYUV unpacked)
      0x12 - UYVY1P422 :
         16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
      0x13 - VYUY1P422 :
         16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
      0x14 - Y8 :
         8-bit monochrome pixels (1-plane Y luma output)
      0x15 - Y4 :
         4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
      0x18 - YUV2P422 :
         16-bit pixels (2-plane UV interleaved bytes)
      0x19 - YUV2P420 :
         16-bit pixels (2-plane UV)
      0x1A - YVU2P422 :
         16-bit pixels (2-plane VU interleaved bytes)
      0x1B - YVU2P420 :
         16-bit pixels (2-plane VU)
      0x1E - YUV422 :
         16-bit pixels (3-plane format)
      0x1F - YUV420 :
         16-bit pixels (3-plane format)
 (rw) (01)  [0;32mWB_SWAP[0m  - [05:05] -  Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
 (ro) (02)  [0;32mRSVD0[0m  - [07:06] -  Reserved, always set to zero.
 (rw) (02)  [0;32mDECY[0m  - [09:08] -  Verticle pre decimation filter control.
      0 - DISABLE :
         Disable pre-decimation filter.
      0x1 - DECY2 :
         Decimate PS by 2.
      0x2 - DECY4 :
         Decimate PS by 4.
      0x3 - DECY8 :
         Decimate PS by 8.
 (rw) (02)  [0;32mDECX[0m  - [11:10] -  Horizontal pre decimation filter control.
      0 - DISABLE :
         Disable pre-decimation filter.
      0x1 - DECX2 :
         Decimate PS by 2.
      0x2 - DECX4 :
         Decimate PS by 4.
      0x3 - DECX8 :
         Decimate PS by 8.
 (ro) (20)  [0;32mRSVD1[0m  - [31:12] -  Reserved, always set to zero.
</lang>
#### p.pxp.ps_ctrl_set
<link=p.PXP.PS_CTRL_SET>
#### PXP.PS_OFFSET
<link=p.PXP.PS_OFFSET>
#### p.PXP.AS_CLRKEYLOW
<lang=dft>
 (rw)  [1;33m0x402b4180[0m (0x402b4000 + 0x0180)
Overlay Color Key Low
 (rw) (24)  [0;32mPIXEL[0m  - [23:00] -  Low range of RGB color key applied to AS buffer. Each overlay has an independen
 t colorkey enable.
 (ro) (08)  [0;32mRSVD1[0m  - [31:24] -  Reserved, always set to zero.
</lang>
#### pxp.as_clrkeyhigh
<link=p.PXP.AS_CLRKEYHIGH>
#### PXP.AS_CLRKEYHIGH
<link=p.PXP.AS_CLRKEYHIGH>
#### p.pxp.csc1_coef2
<link=p.PXP.CSC1_COEF2>
#### p.LCDIF.CTRL1_CLR
<lang=dft>
 (rw)  [1;33m0x402b8018[0m (0x402b8000 + 0x0018)
LCDIF General Control1 Register
 (rw) (01)  [0;32mVSYNC_EDGE_IRQ[0m  - [08:08] -  This bit is set to indicate that an interrupt is requested by the LCDIF block
      0 - NO_REQUEST :
         No Interrupt Request Pending.
      0x1 - REQUEST :
         Interrupt Request Pending.
 (rw) (01)  [0;32mCUR_FRAME_DONE_IRQ[0m  - [09:09] -  This bit is set to indicate that an interrupt is requested by the LCDIF block
      0 - NO_REQUEST :
         No Interrupt Request Pending.
      0x1 - REQUEST :
         Interrupt Request Pending.
 (rw) (01)  [0;32mUNDERFLOW_IRQ[0m  - [10:10] -  This bit is set to indicate that an interrupt is requested by the LCDIF block
      0 - NO_REQUEST :
         No Interrupt Request Pending.
      0x1 - REQUEST :
         Interrupt Request Pending.
 (rw) (01)  [0;32mOVERFLOW_IRQ[0m  - [11:11] -  This bit is set to indicate that an interrupt is requested by the LCDIF block
      0 - NO_REQUEST :
         No Interrupt Request Pending.
      0x1 - REQUEST :
         Interrupt Request Pending.
 (rw) (01)  [0;32mVSYNC_EDGE_IRQ_EN[0m  - [12:12] -  This bit is set to enable an interrupt every time the hardware encounters the l
 eading VSYNC edge in the VSYNC and DOTCLK modes, or the beginning of every fiel
 d in DVI mode
 (rw) (01)  [0;32mCUR_FRAME_DONE_IRQ_EN[0m  - [13:13] -  This bit is set to 1 enable an interrupt every time the hardware enters in the 
 vertical blanking state
 (rw) (01)  [0;32mUNDERFLOW_IRQ_EN[0m  - [14:14] -  This bit is set to enable an underflow interrupt in the TXFIFO in the write mod
 e.
 (rw) (01)  [0;32mOVERFLOW_IRQ_EN[0m  - [15:15] -  This bit is set to enable an overflow interrupt in the TXFIFO in the write mode
 .
 (rw) (04)  [0;32mBYTE_PACKING_FORMAT[0m  - [19:16] -  This bitfield is used to show which data bytes in a 32-bit word are valid
 (rw) (01)  [0;32mIRQ_ON_ALTERNATE_FIELDS[0m  - [20:20] -  If this bit is set, the LCDIF block will assert the cur_frame_done interrupt on
 ly on alternate fields, otherwise it will issue the interrupt on both odd and e
 ven field
 (rw) (01)  [0;32mFIFO_CLEAR[0m  - [21:21] -  Set this bit to clear all the data in the latency FIFO (LFIFO), TXFIFO and the 
 RXFIFO.
 (rw) (01)  [0;32mSTART_INTERLACE_FROM_SECOND_FIELD[0m  - [22:22] -  The default is to grab the odd lines first and then the even lines
 (rw) (01)  [0;32mINTERLACE_FIELDS[0m  - [23:23] -  Set this bit if it is required that the LCDIF block fetches odd lines in one fi
 eld and even lines in the other field
 (rw) (01)  [0;32mRECOVER_ON_UNDERFLOW[0m  - [24:24] -  Set this bit to enable the LCDIF block to recover in the next field/frame if th
 ere was an underflow in the current field/frame
 (rw) (01)  [0;32mBM_ERROR_IRQ[0m  - [25:25] -  This bit is set to indicate that an interrupt is requested by the LCDIF block
      0 - NO_REQUEST :
         No Interrupt Request Pending.
      0x1 - REQUEST :
         Interrupt Request Pending.
 (rw) (01)  [0;32mBM_ERROR_IRQ_EN[0m  - [26:26] -  This bit is set to enable bus master error interrupt in the LCDIF master mode.
 (rw) (01)  [0;32mCS_OUT_SELECT[0m  - [30:30] -  This bit is CS0/CS1 valid select signals
 (rw) (01)  [0;32mIMAGE_DATA_SELECT[0m  - [31:31] -  Command Mode MIPI image data select bit
</lang>
#### p.LCDIF.CUR_BUF
<lang=dft>
 (rw)  [1;33m0x402b8040[0m (0x402b8000 + 0x0040)
LCD Interface Current Buffer Address Register
 (rw) (32)  [0;32mADDR[0m  - [31:00] -  Address of the current frame being transmitted by LCDIF.
</lang>
#### p.lcdif.vdctrl0_tog
<link=p.LCDIF.VDCTRL0_TOG>
#### p.lcdif.vdctrl4
<link=p.LCDIF.VDCTRL4>
#### LCDIF.STAT
<link=p.LCDIF.STAT>
#### p.lcdif.pigeonctrl1_clr
<link=p.LCDIF.PIGEONCTRL1_CLR>
#### p.lcdif.pigeon_5_0
<link=p.LCDIF.PIGEON_5_0>
#### p.lcdif.pigeon_7_2
<link=p.LCDIF.PIGEON_7_2>
#### lcdif.pigeon_8_1
<link=p.LCDIF.PIGEON_8_1>
#### LCDIF.PIGEON_9_1
<link=p.LCDIF.PIGEON_9_1>
#### p.lcdif.pigeon_9_2
<link=p.LCDIF.PIGEON_9_2>
#### p.lcdif.pigeon_11_1
<link=p.LCDIF.PIGEON_11_1>
#### p.LCDIF.LUT_CTRL
<lang=dft>
 (rw)  [1;33m0x402b8b00[0m (0x402b8000 + 0x0b00)
Lookup Table Data Register.
 (rw) (01)  [0;32mLUT_BYPASS[0m  - [00:00] -  Setting this bit will bypass the LUT memory resource completely
</lang>
#### csi.csicr1
<link=p.CSI.CSICR1>
#### CSI.CSIDMATS_STATFIFO
<link=p.CSI.CSIDMATS_STATFIFO>
#### p.csi.csicr19
<link=p.CSI.CSICR19>
#### usdhc1.ds_addr
<link=p.USDHC1.DS_ADDR>
#### usdhc1.pres_state
<link=p.USDHC1.PRES_STATE>
#### usdhc1.prot_ctrl
<link=p.USDHC1.PROT_CTRL>
#### p.usdhc1.int_status
<link=p.USDHC1.INT_STATUS>
#### usdhc1.host_ctrl_cap
<link=p.USDHC1.HOST_CTRL_CAP>
#### p.usdhc1.wtmk_lvl
<link=p.USDHC1.WTMK_LVL>
#### usdhc1.mmc_boot
<link=p.USDHC1.MMC_BOOT>
#### p.usdhc1.vend_spec2
<link=p.USDHC1.VEND_SPEC2>
#### usdhc2.cmd_arg
<link=p.USDHC2.CMD_ARG>
#### p.usdhc2.cmd_rsp1
<link=p.USDHC2.CMD_RSP1>
#### p.USDHC2.INT_SIGNAL_EN
<lang=dft>
 (rw)  [1;33m0x402c4038[0m (0x402c4000 + 0x0038)
Interrupt Signal Enable
 (rw) (01)  [0;32mCCIEN[0m  - [00:00] -  Command Complete Interrupt Enable
      0 - CCIEN_0 :
         Masked
      0x1 - CCIEN_1 :
         Enabled
 (rw) (01)  [0;32mTCIEN[0m  - [01:01] -  Transfer Complete Interrupt Enable
      0 - TCIEN_0 :
         Masked
      0x1 - TCIEN_1 :
         Enabled
 (rw) (01)  [0;32mBGEIEN[0m  - [02:02] -  Block Gap Event Interrupt Enable
      0 - BGEIEN_0 :
         Masked
      0x1 - BGEIEN_1 :
         Enabled
 (rw) (01)  [0;32mDINTIEN[0m  - [03:03] -  DMA Interrupt Enable
      0 - DINTIEN_0 :
         Masked
      0x1 - DINTIEN_1 :
         Enabled
 (rw) (01)  [0;32mBWRIEN[0m  - [04:04] -  Buffer Write Ready Interrupt Enable
      0 - BWRIEN_0 :
         Masked
      0x1 - BWRIEN_1 :
         Enabled
 (rw) (01)  [0;32mBRRIEN[0m  - [05:05] -  Buffer Read Ready Interrupt Enable
      0 - BRRIEN_0 :
         Masked
      0x1 - BRRIEN_1 :
         Enabled
 (rw) (01)  [0;32mCINSIEN[0m  - [06:06] -  Card Insertion Interrupt Enable
      0 - CINSIEN_0 :
         Masked
      0x1 - CINSIEN_1 :
         Enabled
 (rw) (01)  [0;32mCRMIEN[0m  - [07:07] -  Card Removal Interrupt Enable
      0 - CRMIEN_0 :
         Masked
      0x1 - CRMIEN_1 :
         Enabled
 (rw) (01)  [0;32mCINTIEN[0m  - [08:08] -  Card Interrupt Interrupt Enable
      0 - CINTIEN_0 :
         Masked
      0x1 - CINTIEN_1 :
         Enabled
 (rw) (01)  [0;32mRTEIEN[0m  - [12:12] -  Re-Tuning Event Interrupt Enable
      0 - RTEIEN_0 :
         Masked
      0x1 - RTEIEN_1 :
         Enabled
 (rw) (01)  [0;32mTPIEN[0m  - [14:14] -  Tuning Pass Interrupt Enable
      0 - TPIEN_0 :
         Masked
      0x1 - TPIEN_1 :
         Enabled
 (rw) (01)  [0;32mCTOEIEN[0m  - [16:16] -  Command Timeout Error Interrupt Enable
      0 - CTOEIEN_0 :
         Masked
      0x1 - CTOEIEN_1 :
         Enabled
 (rw) (01)  [0;32mCCEIEN[0m  - [17:17] -  Command CRC Error Interrupt Enable
      0 - CCEIEN_0 :
         Masked
      0x1 - CCEIEN_1 :
         Enabled
 (rw) (01)  [0;32mCEBEIEN[0m  - [18:18] -  Command End Bit Error Interrupt Enable
      0 - CEBEIEN_0 :
         Masked
      0x1 - CEBEIEN_1 :
         Enabled
 (rw) (01)  [0;32mCIEIEN[0m  - [19:19] -  Command Index Error Interrupt Enable
      0 - CIEIEN_0 :
         Masked
      0x1 - CIEIEN_1 :
         Enabled
 (rw) (01)  [0;32mDTOEIEN[0m  - [20:20] -  Data Timeout Error Interrupt Enable
      0 - DTOEIEN_0 :
         Masked
      0x1 - DTOEIEN_1 :
         Enabled
 (rw) (01)  [0;32mDCEIEN[0m  - [21:21] -  Data CRC Error Interrupt Enable
      0 - DCEIEN_0 :
         Masked
      0x1 - DCEIEN_1 :
         Enabled
 (rw) (01)  [0;32mDEBEIEN[0m  - [22:22] -  Data End Bit Error Interrupt Enable
      0 - DEBEIEN_0 :
         Masked
      0x1 - DEBEIEN_1 :
         Enabled
 (rw) (01)  [0;32mAC12EIEN[0m  - [24:24] -  Auto CMD12 Error Interrupt Enable
      0 - AC12EIEN_0 :
         Masked
      0x1 - AC12EIEN_1 :
         Enabled
 (rw) (01)  [0;32mTNEIEN[0m  - [26:26] -  Tuning Error Interrupt Enable
      0 - TNEIEN_0 :
         Masked
      0x1 - TNEIEN_1 :
         Enabled
 (rw) (01)  [0;32mDMAEIEN[0m  - [28:28] -  DMA Error Interrupt Enable
      0 - DMAEIEN_0 :
         Masked
      0x1 - DMAEIEN_1 :
         Enable
</lang>
#### p.USDHC2.ADMA_SYS_ADDR
<lang=dft>
 (rw)  [1;33m0x402c4058[0m (0x402c4000 + 0x0058)
ADMA System Address
 (rw) (30)  [0;32mADS_ADDR[0m  - [31:02] -  ADMA System Address
</lang>
#### p.usdhc2.adma_sys_addr
<link=p.USDHC2.ADMA_SYS_ADDR>
#### usdhc2.adma_sys_addr
<link=p.USDHC2.ADMA_SYS_ADDR>
#### USDHC2.ADMA_SYS_ADDR
<link=p.USDHC2.ADMA_SYS_ADDR>
#### usdhc2.dll_ctrl
<link=p.USDHC2.DLL_CTRL>
#### USDHC2.CLK_TUNE_CTRL_STATUS
<link=p.USDHC2.CLK_TUNE_CTRL_STATUS>
#### p.usdhc2.vend_spec2
<link=p.USDHC2.VEND_SPEC2>
#### enet.eir
<link=p.ENET.EIR>
#### enet.mmfr
<link=p.ENET.MMFR>
#### enet.tcr
<link=p.ENET.TCR>
#### p.enet.opd
<link=p.ENET.OPD>
#### p.enet.txic
<link=p.ENET.TXIC>
#### p.ENET.IAUR
<lang=dft>
 (rw)  [1;33m0x402d8118[0m (0x402d8000 + 0x0118)
Descriptor Individual Upper Address Register
 (rw) (32)  [0;32mIADDR1[0m  - [31:00] -  Contains the upper 32 bits of the 64-bit hash table used in the address recogni
 tion process for receive frames with a unicast address
</lang>
#### ENET.GAUR
<link=p.ENET.GAUR>
#### p.ENET.TFWR
<lang=dft>
 (rw)  [1;33m0x402d8144[0m (0x402d8000 + 0x0144)
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
#### p.enet.rsem
<link=p.ENET.RSEM>
#### ENET.FTRL
<link=p.ENET.FTRL>
#### enet.rmon_t_packets
<link=p.ENET.RMON_T_PACKETS>
#### p.enet.rmon_t_undersize
<link=p.ENET.RMON_T_UNDERSIZE>
#### p.enet.rmon_t_oversize
<link=p.ENET.RMON_T_OVERSIZE>
#### p.ENET.RMON_T_P512TO1023
<lang=dft>
 (ro)  [1;33m0x402d8238[0m (0x402d8000 + 0x0238)
Tx 512- to 1023-byte Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of 512- to 1023-byte transmit packets
</lang>
#### enet.ieee_t_drop
<link=p.ENET.IEEE_T_DROP>
#### ENET.IEEE_T_MCOL
<link=p.ENET.IEEE_T_MCOL>
#### p.ENET.IEEE_T_MACERR
<lang=dft>
 (ro)  [1;33m0x402d8264[0m (0x402d8000 + 0x0264)
Frames Transmitted with Tx FIFO Underrun Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with transmit FIFO underrun
</lang>
#### ENET.RMON_R_PACKETS
<link=p.ENET.RMON_R_PACKETS>
#### p.ENET.RMON_R_BC_PKT
<lang=dft>
 (ro)  [1;33m0x402d8288[0m (0x402d8000 + 0x0288)
Rx Broadcast Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive broadcast packets
</lang>
#### ENET.RMON_R_OVERSIZE
<link=p.ENET.RMON_R_OVERSIZE>
#### p.enet.rmon_r_p128to255
<link=p.ENET.RMON_R_P128TO255>
#### enet.ieee_r_frame_ok
<link=p.ENET.IEEE_R_FRAME_OK>
#### enet.atcor
<link=p.ENET.ATCOR>
#### enet.tcsr1
<link=p.ENET.TCSR1>
#### p.ENET.TCCR1
<lang=dft>
 (rw)  [1;33m0x402d8614[0m (0x402d8000 + 0x0614)
Timer Compare Capture Register
 (rw) (32)  [0;32mTCC[0m  - [31:00] -  Timer Capture Compare
</lang>
#### ENET.TCCR3
<link=p.ENET.TCCR3>
#### enet2.eir
<link=p.ENET2.EIR>
#### enet2.mmfr
<link=p.ENET2.MMFR>
#### p.enet2.opd
<link=p.ENET2.OPD>
#### p.ENET2.TXIC
<lang=dft>
 (rw)  [1;33m0x402d40f0[0m (0x402d4000 + 0x00f0)
Transmit Interrupt Coalescing Register
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
#### p.enet2.rxic
<link=p.ENET2.RXIC>
#### p.ENET2.IAUR
<lang=dft>
 (rw)  [1;33m0x402d4118[0m (0x402d4000 + 0x0118)
Descriptor Individual Upper Address Register
 (rw) (32)  [0;32mIADDR1[0m  - [31:00] -  Contains the upper 32 bits of the 64-bit hash table used in the address recogni
 tion process for receive frames with a unicast address
</lang>
#### p.enet2.tdsr
<link=p.ENET2.TDSR>
#### p.ENET2.RAFL
<lang=dft>
 (rw)  [1;33m0x402d419c[0m (0x402d4000 + 0x019c)
Receive FIFO Almost Full Threshold
 (rw) (08)  [0;32mRX_ALMOST_FULL[0m  - [07:00] -  Value Of The Receive FIFO Almost Full Threshold
</lang>
#### p.enet2.rafl
<link=p.ENET2.RAFL>
#### p.ENET2.RACC
<lang=dft>
 (rw)  [1;33m0x402d41c4[0m (0x402d4000 + 0x01c4)
Receive Accelerator Function Configuration
 (rw) (01)  [0;32mPADREM[0m  - [00:00] -  Enable Padding Removal For Short IP Frames
      0 - PADREM_0 :
         Padding not removed.
      0x1 - PADREM_1 :
         Any bytes following the IP payload section of the frame are removed fro
         m the frame.
 (rw) (01)  [0;32mIPDIS[0m  - [01:01] -  Enable Discard Of Frames With Wrong IPv4 Header Checksum
      0 - IPDIS_0 :
         Frames with wrong IPv4 header checksum are not discarded.
      0x1 - IPDIS_1 :
         If an IPv4 frame is received with a mismatching header checksum, the fr
         ame is discarded. IPv6 has no header checksum and is not affected by th
         is setting. Discarding is only available when the RX FIFO operates in s
         tore and forward mode (RSFL cleared).
 (rw) (01)  [0;32mPRODIS[0m  - [02:02] -  Enable Discard Of Frames With Wrong Protocol Checksum
      0 - PRODIS_0 :
         Frames with wrong checksum are not discarded.
      0x1 - PRODIS_1 :
         If a TCP/IP, UDP/IP, or ICMP/IP frame is received that has a wrong TCP,
          UDP, or ICMP checksum, the frame is discarded. Discarding is only avai
         lable when the RX FIFO operates in store and forward mode (RSFL cleared
         ).
 (rw) (01)  [0;32mLINEDIS[0m  - [06:06] -  Enable Discard Of Frames With MAC Layer Errors
      0 - LINEDIS_0 :
         Frames with errors are not discarded.
      0x1 - LINEDIS_1 :
         Any frame received with a CRC, length, or PHY error is automatically di
         scarded and not forwarded to the user application interface.
 (rw) (01)  [0;32mSHIFT16[0m  - [07:07] -  RX FIFO Shift-16
      0 - SHIFT16_0 :
         Disabled.
      0x1 - SHIFT16_1 :
         Instructs the MAC to write two additional bytes in front of each frame 
         received into the RX FIFO.
</lang>
#### ENET2.RMON_T_DROP
<link=p.ENET2.RMON_T_DROP>
#### ENET2.RMON_T_BC_PKT
<link=p.ENET2.RMON_T_BC_PKT>
#### enet2.rmon_t_p64
<link=p.ENET2.RMON_T_P64>
#### ENET2.RMON_R_CRC_ALIGN
<link=p.ENET2.RMON_R_CRC_ALIGN>
#### p.ENET2.RMON_R_JAB
<lang=dft>
 (ro)  [1;33m0x402d42a0[0m (0x402d4000 + 0x02a0)
Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive packets greater than MAX_FL and bad CRC
</lang>
#### enet2.rmon_r_p128to255
<link=p.ENET2.RMON_R_P128TO255>
#### ENET2.IEEE_R_DROP
<link=p.ENET2.IEEE_R_DROP>
#### p.ENET2.IEEE_R_FRAME_OK
<lang=dft>
 (ro)  [1;33m0x402d42cc[0m (0x402d4000 + 0x02cc)
Frames Received OK Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames received OK
</lang>
#### enet2.ieee_r_fdxfc
<link=p.ENET2.IEEE_R_FDXFC>
#### ENET2.IEEE_R_FDXFC
<link=p.ENET2.IEEE_R_FDXFC>
#### ENET2.ATPER
<link=p.ENET2.ATPER>
#### p.enet2.atcor
<link=p.ENET2.ATCOR>
#### ENET2.ATCOR
<link=p.ENET2.ATCOR>
#### p.enet2.tcsr3
<link=p.ENET2.TCSR3>
#### enet2.tccr1
<link=p.ENET2.TCCR1>
#### p.usb1.hwhost
<link=p.USB1.HWHOST>
#### usb1.hciversion
<link=p.USB1.HCIVERSION>
#### USB1.HCCPARAMS
<link=p.USB1.HCCPARAMS>
#### p.usb1.usbmode
<link=p.USB1.USBMODE>
#### USB1.USBMODE
<link=p.USB1.USBMODE>
#### p.USB1.ENDPTSETUPSTAT
<lang=dft>
 (rw)  [1;33m0x402e01ac[0m (0x402e0000 + 0x01ac)
Endpoint Setup Status
 (rw) (16)  [0;32mENDPTSETUPSTAT[0m  - [15:00] -  Setup Endpoint Status
</lang>
#### p.USB1.ENDPTFLUSH
<lang=dft>
 (rw)  [1;33m0x402e01b4[0m (0x402e0000 + 0x01b4)
Endpoint Flush
 (rw) (08)  [0;32mFERB[0m  - [07:00] -  Flush Endpoint Receive Buffer - R/WS
 (rw) (08)  [0;32mFETB[0m  - [23:16] -  Flush Endpoint Transmit Buffer - R/WS
</lang>
#### p.usb1.endptcomplete
<link=p.USB1.ENDPTCOMPLETE>
#### usb2.hwhost
<link=p.USB2.HWHOST>
#### p.usb2.gptimer0ctrl
<link=p.USB2.GPTIMER0CTRL>
#### p.usb2.hcsparams
<link=p.USB2.HCSPARAMS>
#### USB2.USBINTR
<link=p.USB2.USBINTR>
#### usb2.periodiclistbase
<link=p.USB2.PERIODICLISTBASE>
#### p.USB2.ASYNCLISTADDR
<lang=dft>
 (rw)  [1;33m0x402e0358[0m (0x402e0200 + 0x0158)
Next Asynch. Address
 (rw) (27)  [0;32mASYBASE[0m  - [31:05] -  Link Pointer Low (LPL)
</lang>
#### usb2.txfilltuning
<link=p.USB2.TXFILLTUNING>
#### usb2.otgsc
<link=p.USB2.OTGSC>
#### p.USB2.ENDPTSETUPSTAT
<lang=dft>
 (rw)  [1;33m0x402e03ac[0m (0x402e0200 + 0x01ac)
Endpoint Setup Status
 (rw) (16)  [0;32mENDPTSETUPSTAT[0m  - [15:00] -  Setup Endpoint Status
</lang>
#### usb2.endptflush
<link=p.USB2.ENDPTFLUSH>
#### USB2.ENDPTCTRL3
<link=p.USB2.ENDPTCTRL3>
#### usb2.endptctrl7
<link=p.USB2.ENDPTCTRL7>
#### p.semc.mcr
<link=p.SEMC.MCR>
#### SEMC.BR4
<link=p.SEMC.BR4>
#### p.semc.br7
<link=p.SEMC.BR7>
#### semc.norcr0
<link=p.SEMC.NORCR0>
#### p.semc.sramcr1
<link=p.SEMC.SRAMCR1>
#### p.SEMC.SRAMCR2
<lang=dft>
 (rw)  [1;33m0x402f0078[0m (0x402f0000 + 0x0078)
SRAM control register 2
 (rw) (04)  [0;32mWDS[0m  - [03:00] -  Write Data setup time (WDS+1) cycle
 (rw) (04)  [0;32mWDH[0m  - [07:04] -  Write Data hold time WDH cycle
 (rw) (04)  [0;32mTA[0m  - [11:08] -  Turnaround time cycle
 (rw) (04)  [0;32mAWDH[0m  - [15:12] -  Address to write data hold time cycle
 (rw) (04)  [0;32mLC[0m  - [19:16] -  Latency count
 (rw) (04)  [0;32mRD[0m  - [23:20] -  Read cycle time
 (rw) (04)  [0;32mCEITV[0m  - [27:24] -  CE# interval min time
 (rw) (04)  [0;32mRDH[0m  - [31:28] -  Read cycle hold time
</lang>
#### semc.ipcr2
<link=p.SEMC.IPCR2>
#### p.semc.sts1
<link=p.SEMC.STS1>
#### semc.sts11
<link=p.SEMC.STS11>
#### SEMC.STS13
<link=p.SEMC.STS13>
#### p.SEMC.STS15
<lang=dft>
 (ro)  [1;33m0x402f00fc[0m (0x402f0000 + 0x00fc)
Status register 15
</lang>
#### p.DCP.STAT_CLR
<lang=dft>
 (rw)  [1;33m0x402fc018[0m (0x402fc000 + 0x0018)
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
#### p.DCP.PACKET2
<lang=dft>
 (ro)  [1;33m0x402fc0a0[0m (0x402fc000 + 0x00a0)
DCP work packet 2 status register
 (ro) (04)  [0;32mCIPHER_SELECT[0m  - [03:00] -  Cipher selection field
      0 - AES128 :
         AES128
 (ro) (04)  [0;32mCIPHER_MODE[0m  - [07:04] -  Cipher mode selection field. Reflects the mode of operation for the cipher oper
 ations.
      0 - ECB :
         ECB
      0x1 - CBC :
         CBC
 (ro) (08)  [0;32mKEY_SELECT[0m  - [15:08] -  Key selection field
      0 - KEY0 :
         KEY0
      0x1 - KEY1 :
         KEY1
      0x2 - KEY2 :
         KEY2
      0x3 - KEY3 :
         KEY3
      0xFE - UNIQUE_KEY :
         UNIQUE_KEY
      0xFF - OTP_KEY :
         OTP_KEY
 (ro) (04)  [0;32mHASH_SELECT[0m  - [19:16] -  Hash Selection Field
      0 - SHA1 :
         SHA1
      0x1 - CRC32 :
         CRC32
      0x2 - SHA256 :
         SHA256
 (ro) (08)  [0;32mCIPHER_CFG[0m  - [31:24] -  Cipher configuration bits. Optional configuration bits are required for the cip
 hers.
</lang>
#### DCP.CH0STAT_SET
<link=p.DCP.CH0STAT_SET>
#### p.DCP.CH0STAT_TOG
<lang=dft>
 (rw)  [1;33m0x402fc12c[0m (0x402fc000 + 0x012c)
DCP channel 0 status register
 (rw) (01)  [0;32mHASH_MISMATCH[0m  - [01:01] -  This bit indicates that a hashing check operation mismatched for the control pa
 ckets that enable the HASH_CHECK bit
 (rw) (01)  [0;32mERROR_SETUP[0m  - [02:02] -  This bit indicates that the hardware detected an invalid programming configurat
 ion (such as a buffer length that is not a multiple of the natural data size fo
 r the operation)
 (rw) (01)  [0;32mERROR_PACKET[0m  - [03:03] -  This bit indicates that a bus error occurred when reading the packet or payload
 , or when writing the status back to the packet payload
 (rw) (01)  [0;32mERROR_SRC[0m  - [04:04] -  This bit indicates that a bus error occurred when reading from the source buffe
 r
 (rw) (01)  [0;32mERROR_DST[0m  - [05:05] -  This bit indicates that a bus error occurred when storing to the destination bu
 ffer
 (rw) (01)  [0;32mERROR_PAGEFAULT[0m  - [06:06] -  This bit indicates that a page fault occurred while converting a virtual addres
 s to a physical address
 (rw) (08)  [0;32mERROR_CODE[0m  - [23:16] -  Indicates the additional error codes for some of the error conditions
      0x1 - NEXT_CHAIN_IS_0 :
         Error signalled because the next pointer is 0x00000000
      0x2 - NO_CHAIN :
         Error signalled because the semaphore is non-zero and neither chain bit
          is set
      0x3 - CONTEXT_ERROR :
         Error signalled because an error is reported reading/writing the contex
         t buffer
      0x4 - PAYLOAD_ERROR :
         Error signalled because an error is reported reading/writing the payloa
         d
      0x5 - INVALID_MODE :
         Error signalled because the control packet specifies an invalid mode se
         lect (for instance, blit + hash)
 (ro) (08)  [0;32mTAG[0m  - [31:24] -  Indicates the tag from the last completed packet in the command structure
</lang>
#### p.DCP.CH0OPTS_TOG
<lang=dft>
 (rw)  [1;33m0x402fc13c[0m (0x402fc000 + 0x013c)
DCP channel 0 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### dcp.ch1cmdptr
<link=p.DCP.CH1CMDPTR>
#### p.dcp.ch1opts_tog
<link=p.DCP.CH1OPTS_TOG>
#### p.dcp.ch2stat
<link=p.DCP.CH2STAT>
#### DCP.CH2STAT
<link=p.DCP.CH2STAT>
#### p.DCP.CH2STAT_CLR
<lang=dft>
 (rw)  [1;33m0x402fc1a8[0m (0x402fc000 + 0x01a8)
DCP channel 2 status register
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
          select (for instance, blit + hash).
 (ro) (08)  [0;32mTAG[0m  - [31:24] -  Indicates the tag from the last completed packet in the command structure.
</lang>
#### p.dcp.ch2stat_clr
<link=p.DCP.CH2STAT_CLR>
#### dcp.ch3cmdptr
<link=p.DCP.CH3CMDPTR>
#### p.DCP.CH3SEMA
<lang=dft>
 (rw)  [1;33m0x402fc1d0[0m (0x402fc000 + 0x01d0)
DCP channel 3 semaphore register
 (rw) (08)  [0;32mINCREMENT[0m  - [07:00] -  The value written to this field is added to the semaphore count in an atomic wa
 y, such that the simultaneous software adds and DCP hardware substracts happeni
 ng on the same clock are protected
 (ro) (08)  [0;32mVALUE[0m  - [23:16] -  This read-only field shows the current (instantaneous) value of the semaphore c
 ounter.
</lang>
#### SPDIF.SIE
<link=p.SPDIF.SIE>
#### p.SPDIF.SRR
<lang=dft>
 (ro)  [1;33m0x40380018[0m (0x40380000 + 0x0018)
SPDIFRxRight Register
 (ro) (24)  [0;32mRxDataRight[0m  - [23:00] -  Processor receive SPDIF data right
</lang>
#### SPDIF.SRR
<link=p.SPDIF.SRR>
#### spdif.stl
<link=p.SPDIF.STL>
#### SPDIF.SRFM
<link=p.SPDIF.SRFM>
#### p.sai1
<link=p.SAI1>
#### p.sai1.tcsr
<link=p.SAI1.TCSR>
#### p.SAI1.TCR1
<lang=dft>
 (rw)  [1;33m0x4038400c[0m (0x40384000 + 0x000c)
SAI Transmit Configuration 1 Register
 (rw) (05)  [0;32mTFW[0m  - [04:00] -  Transmit FIFO Watermark
</lang>
#### SAI1.TCR4
<link=p.SAI1.TCR4>
#### p.sai1.tfr[3]
<link=p.SAI1.TFR[3]>
#### sai1.tmr
<link=p.SAI1.TMR>
#### sai1.rcsr
<link=p.SAI1.RCSR>
#### p.SAI1.RCR3
<lang=dft>
 (rw)  [1;33m0x40384094[0m (0x40384000 + 0x0094)
SAI Receive Configuration 3 Register
 (rw) (05)  [0;32mWDFL[0m  - [04:00] -  Word Flag Configuration
 (rw) (04)  [0;32mRCE[0m  - [19:16] -  Receive Channel Enable
 (rw) (04)  [0;32mCFR[0m  - [27:24] -  Channel FIFO Reset
</lang>
#### p.sai1.rdr[3]
<link=p.SAI1.RDR[3]>
#### sai1.rfr[0]
<link=p.SAI1.RFR[0]>
#### SAI2.PARAM
<link=p.SAI2.PARAM>
#### p.sai2.tcsr
<link=p.SAI2.TCSR>
#### p.SAI2.TCR4
<lang=dft>
 (rw)  [1;33m0x40388018[0m (0x40388000 + 0x0018)
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
#### p.sai2.tcr5
<link=p.SAI2.TCR5>
#### sai2.tfr[1]
<link=p.SAI2.TFR[1]>
#### p.sai2.tfr[3]
<link=p.SAI2.TFR[3]>
#### p.SAI2.TMR
<lang=dft>
 (rw)  [1;33m0x40388060[0m (0x40388000 + 0x0060)
SAI Transmit Mask Register
 (rw) (32)  [0;32mTWM[0m  - [31:00] -  Transmit Word Mask
      0 - TWM_0 :
         Word N is enabled.
      0x1 - TWM_1 :
         Word N is masked. The transmit data pins are tri-stated or drive zero w
         hen masked.
</lang>
#### p.sai2.tmr
<link=p.SAI2.TMR>
#### sai2.rfr[2]
<link=p.SAI2.RFR[2]>
#### p.SAI3
<lang=dft>
base: 0x4038c000
PARAM           RCR1            RCR2            RCR3            
RCR4            RCR5            RCSR            RDR[0]          
RDR[1]          RDR[2]          RDR[3]          RFR[0]          
RFR[1]          RFR[2]          RFR[3]          RMR             
TCR1            TCR2            TCR3            TCR4            
TCR5            TCSR            TDR[0]          TDR[1]          
TDR[2]          TDR[3]          TFR[0]          TFR[1]          
TFR[2]          TFR[3]          TMR             VERID           
输入 p.SAI3.{reg_name} 以查看寄存器的详细信息
type p.SAI3.{reg_name} to check details of registers
</lang>
#### sai3.param
<link=p.SAI3.PARAM>
#### p.sai3.tcr3
<link=p.SAI3.TCR3>
#### p.SAI3.TFR[1]
<lang=dft>
 (ro)  [1;33m0x4038c044[0m (0x4038c000 + 0x0044)
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
#### SAI3.RCR1
<link=p.SAI3.RCR1>
#### p.SAI3.RCR4
<lang=dft>
 (rw)  [1;33m0x4038c098[0m (0x4038c000 + 0x0098)
SAI Receive Configuration 4 Register
 (rw) (01)  [0;32mFSD[0m  - [00:00] -  Frame Sync Direction
      0 - FSD_0 :
         Frame Sync is generated externally in Slave mode.
      0x1 - FSD_1 :
         Frame Sync is generated internally in Master mode.
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
         LSB is received first.
      0x1 - MF_1 :
         MSB is received first.
 (rw) (05)  [0;32mSYWD[0m  - [12:08] -  Sync Width
 (rw) (05)  [0;32mFRSZ[0m  - [20:16] -  Frame Size
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
         FIFO combine mode enabled on FIFO writes (from receive shift registers)
         .
      0x2 - FCOMB_2 :
         FIFO combine mode enabled on FIFO reads (by software).
      0x3 - FCOMB_3 :
         FIFO combine mode enabled on FIFO writes (from receive shift registers)
          and reads (by software).
 (rw) (01)  [0;32mFCONT[0m  - [28:28] -  FIFO Continue on Error
      0 - FCONT_0 :
         On FIFO error, the SAI will continue from the start of the next frame a
         fter the FIFO error flag has been cleared.
      0x1 - FCONT_1 :
         On FIFO error, the SAI will continue from the same word that caused the
          FIFO error to set after the FIFO warning flag has been cleared.
</lang>
#### p.sai3.rdr[1]
<link=p.SAI3.RDR[1]>
#### SAI3.RDR[1]
<link=p.SAI3.RDR[1]>
#### p.LPSPI1.PARAM
<lang=dft>
 (ro)  [1;33m0x40394004[0m (0x40394000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
 (ro) (08)  [0;32mPCSNUM[0m  - [23:16] -  PCS Number
</lang>
#### p.LPSPI1.CFGR0
<lang=dft>
 (rw)  [1;33m0x40394020[0m (0x40394000 + 0x0020)
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
#### lpspi1.dmr0
<link=p.LPSPI1.DMR0>
#### LPSPI1.TCR
<link=p.LPSPI1.TCR>
#### p.lpspi2.fsr
<link=p.LPSPI2.FSR>
#### LPSPI2.RSR
<link=p.LPSPI2.RSR>
#### p.lpspi2.rdr
<link=p.LPSPI2.RDR>
#### p.lpspi3.cr
<link=p.LPSPI3.CR>
#### p.lpspi3.der
<link=p.LPSPI3.DER>
#### p.lpspi3.dmr1
<link=p.LPSPI3.DMR1>
#### lpspi3.dmr1
<link=p.LPSPI3.DMR1>
#### p.lpspi3.fcr
<link=p.LPSPI3.FCR>
#### lpspi3.tdr
<link=p.LPSPI3.TDR>
#### p.LPSPI3.RDR
<lang=dft>
 (ro)  [1;33m0x4039c074[0m (0x4039c000 + 0x0074)
Receive Data Register
 (ro) (32)  [0;32mDATA[0m  - [31:00] -  Receive Data
</lang>
#### p.LPSPI4.IER
<lang=dft>
 (rw)  [1;33m0x403a0018[0m (0x403a0000 + 0x0018)
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
#### p.LPSPI4.DER
<lang=dft>
 (rw)  [1;33m0x403a001c[0m (0x403a0000 + 0x001c)
DMA Enable Register
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
#### p.LPSPI4.FCR
<lang=dft>
 (rw)  [1;33m0x403a0058[0m (0x403a0000 + 0x0058)
FIFO Control Register
 (rw) (04)  [0;32mTXWATER[0m  - [03:00] -  Transmit FIFO Watermark
 (rw) (04)  [0;32mRXWATER[0m  - [19:16] -  Receive FIFO Watermark
</lang>
#### p.LPSPI4.TCR
<lang=dft>
 (rw)  [1;33m0x403a0060[0m (0x403a0000 + 0x0060)
Transmit Command Register
 (rw) (12)  [0;32mFRAMESZ[0m  - [11:00] -  Frame Size
 (rw) (02)  [0;32mWIDTH[0m  - [17:16] -  Transfer Width
      0 - WIDTH_0 :
         1 bit transfer
      0x1 - WIDTH_1 :
         2 bit transfer
      0x2 - WIDTH_2 :
         4 bit transfer
 (rw) (01)  [0;32mTXMSK[0m  - [18:18] -  Transmit Data Mask
      0 - TXMSK_0 :
         Normal transfer
      0x1 - TXMSK_1 :
         Mask transmit data
 (rw) (01)  [0;32mRXMSK[0m  - [19:19] -  Receive Data Mask
      0 - RXMSK_0 :
         Normal transfer
      0x1 - RXMSK_1 :
         Receive data is masked
 (rw) (01)  [0;32mCONTC[0m  - [20:20] -  Continuing Command
      0 - CONTC_0 :
         Command word for start of new transfer
      0x1 - CONTC_1 :
         Command word for continuing transfer
 (rw) (01)  [0;32mCONT[0m  - [21:21] -  Continuous Transfer
      0 - CONT_0 :
         Continuous transfer is disabled
      0x1 - CONT_1 :
         Continuous transfer is enabled
 (rw) (01)  [0;32mBYSW[0m  - [22:22] -  Byte Swap
      0 - BYSW_0 :
         Byte swap is disabled
      0x1 - BYSW_1 :
         Byte swap is enabled
 (rw) (01)  [0;32mLSBF[0m  - [23:23] -  LSB First
      0 - LSBF_0 :
         Data is transferred MSB first
      0x1 - LSBF_1 :
         Data is transferred LSB first
 (rw) (02)  [0;32mPCS[0m  - [25:24] -  Peripheral Chip Select
      0 - PCS_0 :
         Transfer using LPSPI_PCS[0]
      0x1 - PCS_1 :
         Transfer using LPSPI_PCS[1]
      0x2 - PCS_2 :
         Transfer using LPSPI_PCS[2]
      0x3 - PCS_3 :
         Transfer using LPSPI_PCS[3]
 (rw) (03)  [0;32mPRESCALE[0m  - [29:27] -  Prescaler Value
      0 - PRESCALE_0 :
         Divide by 1
      0x1 - PRESCALE_1 :
         Divide by 2
      0x2 - PRESCALE_2 :
         Divide by 4
      0x3 - PRESCALE_3 :
         Divide by 8
      0x4 - PRESCALE_4 :
         Divide by 16
      0x5 - PRESCALE_5 :
         Divide by 32
      0x6 - PRESCALE_6 :
         Divide by 64
      0x7 - PRESCALE_7 :
         Divide by 128
 (rw) (01)  [0;32mCPHA[0m  - [30:30] -  Clock Phase
      0 - CPHA_0 :
         Data is captured on the leading edge of SCK and changed on the followin
         g edge of SCK
      0x1 - CPHA_1 :
         Data is changed on the leading edge of SCK and captured on the followin
         g edge of SCK
 (rw) (01)  [0;32mCPOL[0m  - [31:31] -  Clock Polarity
      0 - CPOL_0 :
         The inactive state value of SCK is low
      0x1 - CPOL_1 :
         The inactive state value of SCK is high
</lang>
#### lpspi4.rdr
<link=p.LPSPI4.RDR>
#### p.adc_etc.ctrl
<link=p.ADC_ETC.CTRL>
#### ADC_ETC.CTRL
<link=p.ADC_ETC.CTRL>
#### adc_etc.trig0_counter
<link=p.ADC_ETC.TRIG0_COUNTER>
#### adc_etc.trig0_chain_5_4
<link=p.ADC_ETC.TRIG0_CHAIN_5_4>
#### adc_etc.trig0_chain_7_6
<link=p.ADC_ETC.TRIG0_CHAIN_7_6>
#### p.adc_etc.trig1_counter
<link=p.ADC_ETC.TRIG1_COUNTER>
#### p.ADC_ETC.TRIG1_CHAIN_5_4
<lang=dft>
 (rw)  [1;33m0x403b0048[0m (0x403b0000 + 0x0048)
ETC_TRIG Chain 4/5 Register
 (rw) (04)  [0;32mCSEL4[0m  - [03:00] -  CHAIN4 CSEL
 (rw) (08)  [0;32mHWTS4[0m  - [11:04] -  CHAIN4 HWTS
 (rw) (01)  [0;32mB2B4[0m  - [12:12] -  CHAIN4 B2B
 (rw) (02)  [0;32mIE4[0m  - [14:13] -  CHAIN4 IE
 (rw) (04)  [0;32mCSEL5[0m  - [19:16] -  CHAIN5 CSEL
 (rw) (08)  [0;32mHWTS5[0m  - [27:20] -  CHAIN5 HWTS
 (rw) (01)  [0;32mB2B5[0m  - [28:28] -  CHAIN5 B2B
 (rw) (02)  [0;32mIE5[0m  - [30:29] -  CHAIN5 IE
</lang>
#### ADC_ETC.TRIG1_CHAIN_5_4
<link=p.ADC_ETC.TRIG1_CHAIN_5_4>
#### p.adc_etc.trig1_result_5_4
<link=p.ADC_ETC.TRIG1_RESULT_5_4>
#### p.adc_etc.trig1_result_7_6
<link=p.ADC_ETC.TRIG1_RESULT_7_6>
#### p.adc_etc.trig3_ctrl
<link=p.ADC_ETC.TRIG3_CTRL>
#### p.ADC_ETC.TRIG5_CHAIN_7_6
<lang=dft>
 (rw)  [1;33m0x403b00ec[0m (0x403b0000 + 0x00ec)
ETC_TRIG Chain 6/7 Register
 (rw) (04)  [0;32mCSEL6[0m  - [03:00] -  CHAIN6 CSEL
 (rw) (08)  [0;32mHWTS6[0m  - [11:04] -  CHAIN6 HWTS
 (rw) (01)  [0;32mB2B6[0m  - [12:12] -  CHAIN6 B2B
 (rw) (02)  [0;32mIE6[0m  - [14:13] -  CHAIN6 IE
 (rw) (04)  [0;32mCSEL7[0m  - [19:16] -  CHAIN7 CSEL
 (rw) (08)  [0;32mHWTS7[0m  - [27:20] -  CHAIN7 HWTS
 (rw) (01)  [0;32mB2B7[0m  - [28:28] -  CHAIN7 B2B
 (rw) (02)  [0;32mIE7[0m  - [30:29] -  CHAIN7 IE
</lang>
#### ADC_ETC.TRIG5_CHAIN_7_6
<link=p.ADC_ETC.TRIG5_CHAIN_7_6>
#### ADC_ETC.TRIG6_COUNTER
<link=p.ADC_ETC.TRIG6_COUNTER>
#### p.ADC_ETC.TRIG7_CTRL
<lang=dft>
 (rw)  [1;33m0x403b0128[0m (0x403b0000 + 0x0128)
ETC_TRIG7 Control Register
 (rw) (01)  [0;32mSW_TRIG[0m  - [00:00] -  Software write 1 as the TRIGGER. This register is self-clearing.
 (rw) (01)  [0;32mTRIG_MODE[0m  - [04:04] -  TRIG mode register. 1'b0: hardware trigger. 1'b1: software trigger.
 (rw) (03)  [0;32mTRIG_CHAIN[0m  - [10:08] -  TRIG chain length to the ADC. 0: Trig length is 1; ... 7: Trig length is 8;
 (rw) (03)  [0;32mTRIG_PRIORITY[0m  - [14:12] -  External trigger priority, 7 is highest, 0 is lowest .
 (rw) (01)  [0;32mSYNC_MODE[0m  - [16:16] -  TRIG mode control . 1'b0: Disable sync mode; 1'b1: Enable sync mode
</lang>
#### p.adc_etc.trig7_result_1_0
<link=p.ADC_ETC.TRIG7_RESULT_1_0>
#### aoi1.bfcrt010
<link=p.AOI1.BFCRT010>
#### AOI1.BFCRT233
<link=p.AOI1.BFCRT233>
#### aoi2.bfcrt012
<link=p.AOI2.BFCRT012>
#### p.AOI2.BFCRT231
<lang=dft>
 (rw)  [1;33m0x403b8006[0m (0x403b8000 + 0x0006)
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
#### AOI2.BFCRT233
<link=p.AOI2.BFCRT233>
#### p.XBARA1
<lang=dft>
base: 0x403bc000
CTRL0           CTRL1           SEL0            SEL1            
SEL10           SEL11           SEL12           SEL13           
SEL14           SEL15           SEL16           SEL17           
SEL18           SEL19           SEL2            SEL20           
SEL21           SEL22           SEL23           SEL24           
SEL25           SEL26           SEL27           SEL28           
SEL29           SEL3            SEL30           SEL31           
SEL32           SEL33           SEL34           SEL35           
SEL36           SEL37           SEL38           SEL39           
SEL4            SEL40           SEL41           SEL42           
SEL43           SEL44           SEL45           SEL46           
SEL47           SEL48           SEL49           SEL5            
SEL50           SEL51           SEL52           SEL53           
SEL54           SEL55           SEL56           SEL57           
SEL58           SEL59           SEL6            SEL60           
SEL61           SEL62           SEL63           SEL64           
SEL65           SEL7            SEL8            SEL9            
输入 p.XBARA1.{reg_name} 以查看寄存器的详细信息
type p.XBARA1.{reg_name} to check details of registers
</lang>
#### p.XBARA1.SEL4
<lang=dft>
 (rw)  [1;33m0x403bc008[0m (0x403bc000 + 0x0008)
Crossbar A Select Register 4
 (rw) (07)  [0;32mSEL8[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT8 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (07)  [0;32mSEL9[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT9 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### p.xbara1.sel5
<link=p.XBARA1.SEL5>
#### xbara1.sel8
<link=p.XBARA1.SEL8>
#### XBARA1.SEL9
<link=p.XBARA1.SEL9>
#### p.XBARA1.SEL18
<lang=dft>
 (rw)  [1;33m0x403bc024[0m (0x403bc000 + 0x0024)
Crossbar A Select Register 18
 (rw) (07)  [0;32mSEL36[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT36 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL37[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT37 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL18
<link=p.XBARA1.SEL18>
#### p.xbara1.sel19
<link=p.XBARA1.SEL19>
#### xbara1.sel22
<link=p.XBARA1.SEL22>
#### p.xbara1.sel28
<link=p.XBARA1.SEL28>
#### p.XBARA1.SEL29
<lang=dft>
 (rw)  [1;33m0x403bc03a[0m (0x403bc000 + 0x003a)
Crossbar A Select Register 29
 (rw) (07)  [0;32mSEL58[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT58 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL59[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT59 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbara1.sel40
<link=p.XBARA1.SEL40>
#### XBARA1.SEL47
<link=p.XBARA1.SEL47>
#### p.XBARA1.SEL54
<lang=dft>
 (rw)  [1;33m0x403bc06c[0m (0x403bc000 + 0x006c)
Crossbar A Select Register 54
 (rw) (07)  [0;32mSEL108[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT108 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL109[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT109 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### XBARA1.SEL54
<link=p.XBARA1.SEL54>
#### p.xbara1.sel55
<link=p.XBARA1.SEL55>
#### xbara1.sel57
<link=p.XBARA1.SEL57>
#### XBARA1.SEL61
<link=p.XBARA1.SEL61>
#### p.xbara1.sel64
<link=p.XBARA1.SEL64>
#### p.XBARA1.SEL65
<lang=dft>
 (rw)  [1;33m0x403bc082[0m (0x403bc000 + 0x0082)
Crossbar A Select Register 65
 (rw) (07)  [0;32mSEL130[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT130 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL131[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT131 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### XBARA1.CTRL0
<link=p.XBARA1.CTRL0>
#### XBARB2.SEL2
<link=p.XBARB2.SEL2>
#### p.XBARB2.SEL5
<lang=dft>
 (rw)  [1;33m0x403c000a[0m (0x403c0000 + 0x000a)
Crossbar B Select Register 5
 (rw) (06)  [0;32mSEL10[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT10 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (06)  [0;32mSEL11[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT11 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbarb2.sel7
<link=p.XBARB2.SEL7>
#### XBARB3.SEL0
<link=p.XBARB3.SEL0>
#### p.XBARB3.SEL5
<lang=dft>
 (rw)  [1;33m0x403c400a[0m (0x403c4000 + 0x000a)
Crossbar B Select Register 5
 (rw) (06)  [0;32mSEL10[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT10 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (06)  [0;32mSEL11[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT11 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.ENC1.WTR
<lang=dft>
 (rw)  [1;33m0x403c8004[0m (0x403c8000 + 0x0004)
Watchdog Timeout Register
 (rw) (16)  [0;32mWDOG[0m  - [15:00] -  WDOG[15:0] is a binary representation of the number of clock cycles plus one th
 at the watchdog timer counts before timing out and optionally generating an int
 errupt
</lang>
#### enc1.rev
<link=p.ENC1.REV>
#### ENC1.UPOS
<link=p.ENC1.UPOS>
#### enc1.lpos
<link=p.ENC1.LPOS>
#### p.enc1.linit
<link=p.ENC1.LINIT>
#### p.ENC1.IMR
<lang=dft>
 (ro)  [1;33m0x403c801a[0m (0x403c8000 + 0x001a)
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
#### p.enc1.tst
<link=p.ENC1.TST>
#### p.ENC2.CTRL
<lang=dft>
 (rw)  [1;33m0x403cc000[0m (0x403cc000 + 0x0000)
Control Register
 (rw) (01)  [0;32mCMPIE[0m  - [00:00] -  Compare Interrupt Enable
      0 - CMPIE_0 :
         Compare interrupt is disabled
      0x1 - CMPIE_1 :
         Compare interrupt is enabled
 (rw) (01)  [0;32mCMPIRQ[0m  - [01:01] -  Compare Interrupt Request
      0 - CMPIRQ_0 :
         No match has occurred
      0x1 - CMPIRQ_1 :
         COMP match has occurred
 (rw) (01)  [0;32mWDE[0m  - [02:02] -  Watchdog Enable
      0 - WDE_0 :
         Watchdog timer is disabled
      0x1 - WDE_1 :
         Watchdog timer is enabled
 (rw) (01)  [0;32mDIE[0m  - [03:03] -  Watchdog Timeout Interrupt Enable
      0 - DIE_0 :
         Watchdog timer interrupt is disabled
      0x1 - DIE_1 :
         Watchdog timer interrupt is enabled
 (rw) (01)  [0;32mDIRQ[0m  - [04:04] -  Watchdog Timeout Interrupt Request
      0 - DIRQ_0 :
         No interrupt has occurred
      0x1 - DIRQ_1 :
         Watchdog timeout interrupt has occurred
 (rw) (01)  [0;32mXNE[0m  - [05:05] -  Use Negative Edge of INDEX Pulse
      0 - XNE_0 :
         Use positive transition edge of INDEX pulse
      0x1 - XNE_1 :
         Use negative transition edge of INDEX pulse
 (rw) (01)  [0;32mXIP[0m  - [06:06] -  INDEX Triggered Initialization of Position Counters UPOS and LPOS
      0 - XIP_0 :
         No action
      0x1 - XIP_1 :
         INDEX pulse initializes the position counter
 (rw) (01)  [0;32mXIE[0m  - [07:07] -  INDEX Pulse Interrupt Enable
      0 - XIE_0 :
         INDEX pulse interrupt is disabled
      0x1 - XIE_1 :
         INDEX pulse interrupt is enabled
 (rw) (01)  [0;32mXIRQ[0m  - [08:08] -  INDEX Pulse Interrupt Request
      0 - XIRQ_0 :
         No interrupt has occurred
      0x1 - XIRQ_1 :
         INDEX pulse interrupt has occurred
 (rw) (01)  [0;32mPH1[0m  - [09:09] -  Enable Signal Phase Count Mode
      0 - PH1_0 :
         Use standard quadrature decoder where PHASEA and PHASEB represent a two
          phase quadrature signal.
      0x1 - PH1_1 :
         Bypass the quadrature decoder. A positive transition of the PHASEA inpu
         t generates a count signal. The PHASEB input and the REV bit control th
         e counter direction. If CTRL[REV] = 0, PHASEB = 0, then count up If CTR
         L[REV] = 0, PHASEB = 1, then count down If CTRL[REV] = 1, PHASEB = 0, t
         hen count down If CTRL[REV] = 1, PHASEB = 1, then count up
 (rw) (01)  [0;32mREV[0m  - [10:10] -  Enable Reverse Direction Counting
      0 - REV_0 :
         Count normally
      0x1 - REV_1 :
         Count in the reverse direction
 (rw) (01)  [0;32mSWIP[0m  - [11:11] -  Software Triggered Initialization of Position Counters UPOS and LPOS
      0 - SWIP_0 :
         No action
      0x1 - SWIP_1 :
         Initialize position counter
 (rw) (01)  [0;32mHNE[0m  - [12:12] -  Use Negative Edge of HOME Input
      0 - HNE_0 :
         Use positive going edge-to-trigger initialization of position counters 
         UPOS and LPOS
      0x1 - HNE_1 :
         Use negative going edge-to-trigger initialization of position counters 
         UPOS and LPOS
 (rw) (01)  [0;32mHIP[0m  - [13:13] -  Enable HOME to Initialize Position Counters UPOS and LPOS
      0 - HIP_0 :
         No action
      0x1 - HIP_1 :
         HOME signal initializes the position counter
 (rw) (01)  [0;32mHIE[0m  - [14:14] -  HOME Interrupt Enable
      0 - HIE_0 :
         Disable HOME interrupts
      0x1 - HIE_1 :
         Enable HOME interrupts
 (rw) (01)  [0;32mHIRQ[0m  - [15:15] -  HOME Signal Transition Interrupt Request
      0 - HIRQ_0 :
         No interrupt
      0x1 - HIRQ_1 :
         HOME signal transition interrupt request
</lang>
#### p.ENC2.REV
<lang=dft>
 (rw)  [1;33m0x403cc00a[0m (0x403cc000 + 0x000a)
Revolution Counter Register
 (rw) (16)  [0;32mREV[0m  - [15:00] -  This read/write register contains the current value of the revolution counter.
</lang>
#### p.enc2.lposh
<link=p.ENC2.LPOSH>
#### p.ENC2.IMR
<lang=dft>
 (ro)  [1;33m0x403cc01a[0m (0x403cc000 + 0x001a)
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
#### p.enc3.ctrl
<link=p.ENC3.CTRL>
#### ENC3.FILT
<link=p.ENC3.FILT>
#### enc3.revh
<link=p.ENC3.REVH>
#### ENC3.LPOSH
<link=p.ENC3.LPOSH>
#### ENC3.LINIT
<link=p.ENC3.LINIT>
#### p.ENC3.UCOMP
<lang=dft>
 (rw)  [1;33m0x403d0024[0m (0x403d0000 + 0x0024)
Upper Position Compare Register
 (rw) (16)  [0;32mCOMP[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the posi
 tion compare register
</lang>
#### p.ENC4.FILT
<lang=dft>
 (rw)  [1;33m0x403d4002[0m (0x403d4000 + 0x0002)
Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### enc4.wtr
<link=p.ENC4.WTR>
#### ENC4.LPOS
<link=p.ENC4.LPOS>
#### ENC4.LPOSH
<link=p.ENC4.LPOSH>
#### ENC4.LINIT
<link=p.ENC4.LINIT>
#### p.enc4.umod
<link=p.ENC4.UMOD>
#### enc4.lmod
<link=p.ENC4.LMOD>
#### p.enc4.lcomp
<link=p.ENC4.LCOMP>
#### p.PWM1.SM0INIT
<lang=dft>
 (rw)  [1;33m0x403dc002[0m (0x403dc000 + 0x0002)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### PWM1.SM0VAL1
<link=p.PWM1.SM0VAL1>
#### pwm1.sm0fracval2
<link=p.PWM1.SM0FRACVAL2>
#### p.pwm1.sm0frctrl
<link=p.PWM1.SM0FRCTRL>
#### pwm1.sm0inten
<link=p.PWM1.SM0INTEN>
#### PWM1.SM0TCTRL
<link=p.PWM1.SM0TCTRL>
#### p.PWM1.SM0DTCNT1
<lang=dft>
 (rw)  [1;33m0x403dc032[0m (0x403dc000 + 0x0032)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### p.PWM1.SM0CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403dc036[0m (0x403dc000 + 0x0036)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### p.pwm1.sm0cval0
<link=p.PWM1.SM0CVAL0>
#### pwm1.sm0cval0
<link=p.PWM1.SM0CVAL0>
#### pwm1.sm0cval0cyc
<link=p.PWM1.SM0CVAL0CYC>
#### PWM1.SM1VAL1
<link=p.PWM1.SM1VAL1>
#### PWM1.SM1FRACVAL4
<link=p.PWM1.SM1FRACVAL4>
#### p.PWM1.SM1FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403dc07c[0m (0x403dc000 + 0x007c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### p.PWM1.SM1FRCTRL
<lang=dft>
 (rw)  [1;33m0x403dc080[0m (0x403dc000 + 0x0080)
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
#### pwm1.sm1inten
<link=p.PWM1.SM1INTEN>
#### p.pwm1.sm1captctrlb
<link=p.PWM1.SM1CAPTCTRLB>
#### PWM1.SM1CAPTCOMPB
<link=p.PWM1.SM1CAPTCOMPB>
#### pwm1.sm1cval2
<link=p.PWM1.SM1CVAL2>
#### PWM1.SM1CVAL4CYC
<link=p.PWM1.SM1CVAL4CYC>
#### p.pwm1.sm1cval5cyc
<link=p.PWM1.SM1CVAL5CYC>
#### p.PWM1.SM2FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403dc0d4[0m (0x403dc000 + 0x00d4)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### pwm1.sm2val3
<link=p.PWM1.SM2VAL3>
#### p.pwm1.sm2dismap1
<link=p.PWM1.SM2DISMAP1>
#### PWM1.SM2DTCNT0
<link=p.PWM1.SM2DTCNT0>
#### p.PWM1.SM2DTCNT1
<lang=dft>
 (rw)  [1;33m0x403dc0f2[0m (0x403dc000 + 0x00f2)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### p.PWM1.SM2CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403dc0f8[0m (0x403dc000 + 0x00f8)
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
#### PWM1.SM2CAPTCTRLX
<link=p.PWM1.SM2CAPTCTRLX>
#### PWM1.SM2CVAL0
<link=p.PWM1.SM2CVAL0>
#### PWM1.SM2CVAL2CYC
<link=p.PWM1.SM2CVAL2CYC>
#### p.pwm1.sm2cval4cyc
<link=p.PWM1.SM2CVAL4CYC>
#### p.pwm1.sm2cval5cyc
<link=p.PWM1.SM2CVAL5CYC>
#### p.PWM1.SM3CTRL2
<lang=dft>
 (rw)  [1;33m0x403dc124[0m (0x403dc000 + 0x0124)
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
#### PWM1.SM3CTRL2
<link=p.PWM1.SM3CTRL2>
#### pwm1.sm3val2
<link=p.PWM1.SM3VAL2>
#### pwm1.sm3fracval5
<link=p.PWM1.SM3FRACVAL5>
#### PWM1.SM3FRACVAL5
<link=p.PWM1.SM3FRACVAL5>
#### p.pwm1.sm3tctrl
<link=p.PWM1.SM3TCTRL>
#### p.PWM1.SM3DISMAP1
<lang=dft>
 (rw)  [1;33m0x403dc14e[0m (0x403dc000 + 0x014e)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### PWM1.SM3DISMAP1
<link=p.PWM1.SM3DISMAP1>
#### p.PWM1.SM3CVAL0
<lang=dft>
 (ro)  [1;33m0x403dc160[0m (0x403dc000 + 0x0160)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### p.PWM1.SM3CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403dc16a[0m (0x403dc000 + 0x016a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### pwm1.sm3cval3cyc
<link=p.PWM1.SM3CVAL3CYC>
#### p.pwm1.dtsrcsel
<link=p.PWM1.DTSRCSEL>
#### pwm1.mctrl
<link=p.PWM1.MCTRL>
#### PWM1.MCTRL
<link=p.PWM1.MCTRL>
#### pwm1.fctrl0
<link=p.PWM1.FCTRL0>
#### p.PWM1.FTST0
<lang=dft>
 (rw)  [1;33m0x403dc192[0m (0x403dc000 + 0x0192)
Fault Test Register
 (rw) (01)  [0;32mFTEST[0m  - [00:00] -  Fault Test
      0 - FTEST_0 :
         No fault
      0x1 - FTEST_1 :
         Cause a simulated fault
</lang>
#### p.PWM2.SM0CTRL2
<lang=dft>
 (rw)  [1;33m0x403e0004[0m (0x403e0000 + 0x0004)
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
#### p.pwm2.sm0val1
<link=p.PWM2.SM0VAL1>
#### pwm2.sm0val1
<link=p.PWM2.SM0VAL1>
#### PWM2.SM0FRACVAL4
<link=p.PWM2.SM0FRACVAL4>
#### p.pwm2.sm0fracval5
<link=p.PWM2.SM0FRACVAL5>
#### pwm2.sm0sts
<link=p.PWM2.SM0STS>
#### PWM2.SM0DISMAP0
<link=p.PWM2.SM0DISMAP0>
#### p.PWM2.SM0DISMAP1
<lang=dft>
 (rw)  [1;33m0x403e002e[0m (0x403e0000 + 0x002e)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### pwm2.sm0captctrlb
<link=p.PWM2.SM0CAPTCTRLB>
#### p.PWM2.SM0CVAL0
<lang=dft>
 (ro)  [1;33m0x403e0040[0m (0x403e0000 + 0x0040)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### p.PWM2.SM0CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e004a[0m (0x403e0000 + 0x004a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### p.pwm2.sm1ctrl2
<link=p.PWM2.SM1CTRL2>
#### pwm2.sm1ctrl2
<link=p.PWM2.SM1CTRL2>
#### p.pwm2.sm1val0
<link=p.PWM2.SM1VAL0>
#### pwm2.sm1val0
<link=p.PWM2.SM1VAL0>
#### p.PWM2.SM1FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e0074[0m (0x403e0000 + 0x0074)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### pwm2.sm1fracval4
<link=p.PWM2.SM1FRACVAL4>
#### p.PWM2.SM1DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e0092[0m (0x403e0000 + 0x0092)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### PWM2.SM1DTCNT1
<link=p.PWM2.SM1DTCNT1>
#### p.PWM2.SM1CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e0098[0m (0x403e0000 + 0x0098)
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
#### PWM2.SM1CVAL1
<link=p.PWM2.SM1CVAL1>
#### pwm2.sm1cval4cyc
<link=p.PWM2.SM1CVAL4CYC>
#### p.pwm2.sm2ctrl
<link=p.PWM2.SM2CTRL>
#### PWM2.SM2VAL0
<link=p.PWM2.SM2VAL0>
#### pwm2.sm2val4
<link=p.PWM2.SM2VAL4>
#### p.PWM2.SM2FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e00dc[0m (0x403e0000 + 0x00dc)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### p.PWM2.SM2FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e00e0[0m (0x403e0000 + 0x00e0)
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
#### p.pwm2.sm2dismap0
<link=p.PWM2.SM2DISMAP0>
#### p.pwm2.sm2cval1cyc
<link=p.PWM2.SM2CVAL1CYC>
#### p.pwm2.sm2cval2
<link=p.PWM2.SM2CVAL2>
#### p.pwm2.sm2cval2cyc
<link=p.PWM2.SM2CVAL2CYC>
#### p.PWM2.SM3INIT
<lang=dft>
 (rw)  [1;33m0x403e0122[0m (0x403e0000 + 0x0122)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### pwm2.sm3val5
<link=p.PWM2.SM3VAL5>
#### p.pwm2.sm3sts
<link=p.PWM2.SM3STS>
#### pwm2.sm3sts
<link=p.PWM2.SM3STS>
#### pwm2.sm3dismap1
<link=p.PWM2.SM3DISMAP1>
#### p.PWM2.SM3DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e0152[0m (0x403e0000 + 0x0152)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### p.PWM2.SM3CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e0156[0m (0x403e0000 + 0x0156)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### p.pwm2.sm3captcompa
<link=p.PWM2.SM3CAPTCOMPA>
#### PWM2.SM3CAPTCOMPX
<link=p.PWM2.SM3CAPTCOMPX>
#### p.pwm2.sm3cval4
<link=p.PWM2.SM3CVAL4>
#### PWM2.OUTEN
<link=p.PWM2.OUTEN>
#### p.PWM2.FCTRL0
<lang=dft>
 (rw)  [1;33m0x403e018c[0m (0x403e0000 + 0x018c)
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
#### PWM2.FSTS0
<link=p.PWM2.FSTS0>
#### p.PWM2.FFILT0
<lang=dft>
 (rw)  [1;33m0x403e0190[0m (0x403e0000 + 0x0190)
Fault Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Fault Filter Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Fault Filter Count
 (rw) (01)  [0;32mGSTR[0m  - [15:15] -  Fault Glitch Stretch Enable
      0 - GSTR_0 :
         Fault input glitch stretching is disabled.
      0x1 - GSTR_1 :
         Input fault signals will be stretched to at least 2 IPBus clock cycles.
</lang>
#### p.PWM2.FTST0
<lang=dft>
 (rw)  [1;33m0x403e0192[0m (0x403e0000 + 0x0192)
Fault Test Register
 (rw) (01)  [0;32mFTEST[0m  - [00:00] -  Fault Test
      0 - FTEST_0 :
         No fault
      0x1 - FTEST_1 :
         Cause a simulated fault
</lang>
#### pwm3.sm0fracval1
<link=p.PWM3.SM0FRACVAL1>
#### p.PWM3.SM0FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e4014[0m (0x403e4000 + 0x0014)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### pwm3.sm0val4
<link=p.PWM3.SM0VAL4>
#### p.pwm3.sm0dismap1
<link=p.PWM3.SM0DISMAP1>
#### p.PWM3.SM0DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e4032[0m (0x403e4000 + 0x0032)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### PWM3.SM0DTCNT1
<link=p.PWM3.SM0DTCNT1>
#### p.PWM3.SM0CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e4038[0m (0x403e4000 + 0x0038)
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
#### pwm3.sm0cval0cyc
<link=p.PWM3.SM0CVAL0CYC>
#### PWM3.SM0CVAL1
<link=p.PWM3.SM0CVAL1>
#### p.pwm3.sm0cval4cyc
<link=p.PWM3.SM0CVAL4CYC>
#### p.pwm3.sm0cval5cyc
<link=p.PWM3.SM0CVAL5CYC>
#### pwm3.sm1cnt
<link=p.PWM3.SM1CNT>
#### p.PWM3.SM1CTRL2
<lang=dft>
 (rw)  [1;33m0x403e4064[0m (0x403e4000 + 0x0064)
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
#### pwm3.sm1fracval4
<link=p.PWM3.SM1FRACVAL4>
#### PWM3.SM1FRACVAL4
<link=p.PWM3.SM1FRACVAL4>
#### pwm3.sm1val5
<link=p.PWM3.SM1VAL5>
#### p.pwm3.sm1tctrl
<link=p.PWM3.SM1TCTRL>
#### PWM3.SM1DISMAP0
<link=p.PWM3.SM1DISMAP0>
#### p.PWM3.SM1DISMAP1
<lang=dft>
 (rw)  [1;33m0x403e408e[0m (0x403e4000 + 0x008e)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### p.PWM3.SM1CVAL0
<lang=dft>
 (ro)  [1;33m0x403e40a0[0m (0x403e4000 + 0x00a0)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### p.PWM3.SM1CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e40aa[0m (0x403e4000 + 0x00aa)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### p.PWM3.SM2INIT
<lang=dft>
 (rw)  [1;33m0x403e40c2[0m (0x403e4000 + 0x00c2)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### pwm3.sm2fracval3
<link=p.PWM3.SM2FRACVAL3>
#### p.pwm3.sm2frctrl
<link=p.PWM3.SM2FRCTRL>
#### pwm3.sm2tctrl
<link=p.PWM3.SM2TCTRL>
#### p.PWM3.SM2DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e40f2[0m (0x403e4000 + 0x00f2)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### p.PWM3.SM2CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e40f6[0m (0x403e4000 + 0x00f6)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### PWM3.SM2CAPTCOMPX
<link=p.PWM3.SM2CAPTCOMPX>
#### p.pwm3.sm2cval0
<link=p.PWM3.SM2CVAL0>
#### pwm3.sm2cval1
<link=p.PWM3.SM2CVAL1>
#### PWM3.SM3VAL0
<link=p.PWM3.SM3VAL0>
#### p.PWM3.SM3FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e413c[0m (0x403e4000 + 0x013c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### p.PWM3.SM3FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e4140[0m (0x403e4000 + 0x0140)
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
#### pwm3.sm3dtcnt1
<link=p.PWM3.SM3DTCNT1>
#### pwm3.sm3captctrla
<link=p.PWM3.SM3CAPTCTRLA>
#### p.pwm3.sm3captctrlb
<link=p.PWM3.SM3CAPTCTRLB>
#### pwm3.sm3cval1
<link=p.PWM3.SM3CVAL1>
#### p.pwm3.sm3cval5cyc
<link=p.PWM3.SM3CVAL5CYC>
#### pwm3.mctrl2
<link=p.PWM3.MCTRL2>
#### PWM3.MCTRL2
<link=p.PWM3.MCTRL2>
#### pwm4.sm0cnt
<link=p.PWM4.SM0CNT>
#### pwm4.sm0val0
<link=p.PWM4.SM0VAL0>
#### p.PWM4.SM0FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403e800c[0m (0x403e8000 + 0x000c)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### PWM4.SM0FRACVAL2
<link=p.PWM4.SM0FRACVAL2>
#### p.pwm4.sm0fracval3
<link=p.PWM4.SM0FRACVAL3>
#### PWM4.SM0VAL4
<link=p.PWM4.SM0VAL4>
#### PWM4.SM0FRCTRL
<link=p.PWM4.SM0FRCTRL>
#### pwm4.sm0dmaen
<link=p.PWM4.SM0DMAEN>
#### PWM4.SM0DMAEN
<link=p.PWM4.SM0DMAEN>
#### pwm4.sm0captctrla
<link=p.PWM4.SM0CAPTCTRLA>
#### PWM4.SM0CAPTCOMPX
<link=p.PWM4.SM0CAPTCOMPX>
#### p.PWM4.SM0CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e8046[0m (0x403e8000 + 0x0046)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### pwm4.sm0cval2
<link=p.PWM4.SM0CVAL2>
#### p.PWM4.SM0CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e804a[0m (0x403e8000 + 0x004a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### PWM4.SM0CVAL4
<link=p.PWM4.SM0CVAL4>
#### p.PWM4.SM0CVAL5
<lang=dft>
 (ro)  [1;33m0x403e8054[0m (0x403e8000 + 0x0054)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### pwm4.sm1val1
<link=p.PWM4.SM1VAL1>
#### PWM4.SM1VAL2
<link=p.PWM4.SM1VAL2>
#### pwm4.sm1fracval3
<link=p.PWM4.SM1FRACVAL3>
#### p.PWM4.SM1FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e8078[0m (0x403e8000 + 0x0078)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### PWM4.SM1STS
<link=p.PWM4.SM1STS>
#### p.PWM4.SM1DISMAP1
<lang=dft>
 (rw)  [1;33m0x403e808e[0m (0x403e8000 + 0x008e)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### PWM4.SM1DTCNT0
<link=p.PWM4.SM1DTCNT0>
#### pwm4.sm1cval1
<link=p.PWM4.SM1CVAL1>
#### p.PWM4.SM1CVAL5CYC
<lang=dft>
 (ro)  [1;33m0x403e80b6[0m (0x403e8000 + 0x00b6)
Capture Value 5 Cycle Register
 (ro) (04)  [0;32mCVAL5CYC[0m  - [03:00] -  CVAL5CYC
</lang>
#### PWM4.SM1CVAL5CYC
<link=p.PWM4.SM1CVAL5CYC>
#### p.pwm4.sm2cnt
<link=p.PWM4.SM2CNT>
#### p.pwm4.sm2fracval1
<link=p.PWM4.SM2FRACVAL1>
#### p.PWM4.SM2VAL1
<lang=dft>
 (rw)  [1;33m0x403e80ce[0m (0x403e8000 + 0x00ce)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### p.PWM4.SM2FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e80d0[0m (0x403e8000 + 0x00d0)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### p.pwm4.sm2val4
<link=p.PWM4.SM2VAL4>
#### pwm4.sm2val5
<link=p.PWM4.SM2VAL5>
#### PWM4.SM2FRCTRL
<link=p.PWM4.SM2FRCTRL>
#### p.pwm4.sm2octrl
<link=p.PWM4.SM2OCTRL>
#### PWM4.SM2CAPTCOMPA
<link=p.PWM4.SM2CAPTCOMPA>
#### p.pwm4.sm2captcompb
<link=p.PWM4.SM2CAPTCOMPB>
#### p.pwm4.sm2cval0
<link=p.PWM4.SM2CVAL0>
#### pwm4.sm3fracval1
<link=p.PWM4.SM3FRACVAL1>
#### PWM4.SM3FRACVAL2
<link=p.PWM4.SM3FRACVAL2>
#### p.PWM4.SM3VAL3
<lang=dft>
 (rw)  [1;33m0x403e8136[0m (0x403e8000 + 0x0136)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### pwm4.sm3val4
<link=p.PWM4.SM3VAL4>
#### p.pwm4.sm3val5
<link=p.PWM4.SM3VAL5>
#### p.pwm4.sm3sts
<link=p.PWM4.SM3STS>
#### p.PWM4.SM3DMAEN
<lang=dft>
 (rw)  [1;33m0x403e8148[0m (0x403e8000 + 0x0148)
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
#### pwm4.sm3dismap1
<link=p.PWM4.SM3DISMAP1>
#### p.PWM4.SM3CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e8154[0m (0x403e8000 + 0x0154)
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
#### p.PWM4.SM3CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e815a[0m (0x403e8000 + 0x015a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.pwm4.sm3captcompb
<link=p.PWM4.SM3CAPTCOMPB>
#### pwm4.sm3captcompx
<link=p.PWM4.SM3CAPTCOMPX>
#### PWM4.SM3CVAL0CYC
<link=p.PWM4.SM3CVAL0CYC>
#### p.PWM4.SM3CVAL5CYC
<lang=dft>
 (ro)  [1;33m0x403e8176[0m (0x403e8000 + 0x0176)
Capture Value 5 Cycle Register
 (ro) (04)  [0;32mCVAL5CYC[0m  - [03:00] -  CVAL5CYC
</lang>
#### p.pwm4.mask
<link=p.PWM4.MASK>
#### pwm4.swcout
<link=p.PWM4.SWCOUT>
#### p.BEE.ADDR_OFFSET0
<lang=dft>
 (rw)  [1;33m0x403ec004[0m (0x403ec000 + 0x0004)
no description available
 (rw) (16)  [0;32mADDR_OFFSET0[0m  - [15:00] -  Signed offset for BEE region 0
 (rw) (16)  [0;32mADDR_OFFSET0_LOCK[0m  - [31:16] -  Lock bits for addr_offset0
</lang>
#### p.bee.aes_key0_w3
<link=p.BEE.AES_KEY0_W3>
#### lpi2c1.mcfgr1
<link=p.LPI2C1.MCFGR1>
#### LPI2C1.MCFGR3
<link=p.LPI2C1.MCFGR3>
#### p.LPI2C1.MFSR
<lang=dft>
 (ro)  [1;33m0x403f005c[0m (0x403f0000 + 0x005c)
Master FIFO Status Register
 (ro) (03)  [0;32mTXCOUNT[0m  - [02:00] -  Transmit FIFO Count
 (ro) (03)  [0;32mRXCOUNT[0m  - [18:16] -  Receive FIFO Count
</lang>
#### lpi2c1.mtdr
<link=p.LPI2C1.MTDR>
#### p.lpi2c1.mrdr
<link=p.LPI2C1.MRDR>
#### LPI2C1.SSR
<link=p.LPI2C1.SSR>
#### p.LPI2C2.PARAM
<lang=dft>
 (ro)  [1;33m0x403f4004[0m (0x403f4000 + 0x0004)
Parameter Register
 (ro) (04)  [0;32mMTXFIFO[0m  - [03:00] -  Master Transmit FIFO Size
 (ro) (04)  [0;32mMRXFIFO[0m  - [11:08] -  Master Receive FIFO Size
</lang>
#### LPI2C2.MCFGR3
<link=p.LPI2C2.MCFGR3>
#### LPI2C2.SCFGR2
<link=p.LPI2C2.SCFGR2>
#### p.LPI2C2.SASR
<lang=dft>
 (ro)  [1;33m0x403f4150[0m (0x403f4000 + 0x0150)
Slave Address Status Register
 (ro) (11)  [0;32mRADDR[0m  - [10:00] -  Received Address
 (ro) (01)  [0;32mANV[0m  - [14:14] -  Address Not Valid
      0 - ANV_0 :
         Received Address (RADDR) is valid
      0x1 - ANV_1 :
         Received Address (RADDR) is not valid
</lang>
#### p.LPI2C2.SRDR
<lang=dft>
 (ro)  [1;33m0x403f4170[0m (0x403f4000 + 0x0170)
Slave Receive Data Register
 (ro) (08)  [0;32mDATA[0m  - [07:00] -  Receive Data
 (ro) (01)  [0;32mRXEMPTY[0m  - [14:14] -  RX Empty
      0 - RXEMPTY_0 :
         The Receive Data Register is not empty
      0x1 - RXEMPTY_1 :
         The Receive Data Register is empty
 (ro) (01)  [0;32mSOF[0m  - [15:15] -  Start Of Frame
      0 - SOF_0 :
         Indicates this is not the first data word since a (repeated) START or S
         TOP condition
      0x1 - SOF_1 :
         Indicates this is the first data word since a (repeated) START or STOP 
         condition
</lang>
#### lpi2c2.srdr
<link=p.LPI2C2.SRDR>
#### lpi2c3.verid
<link=p.LPI2C3.VERID>
#### lpi2c3.mcr
<link=p.LPI2C3.MCR>
#### LPI2C3.MIER
<link=p.LPI2C3.MIER>
#### p.LPI2C3.MTDR
<lang=dft>
 (rw)  [1;33m0x403f8060[0m (0x403f8000 + 0x0060)
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
#### p.lpi2c3.mtdr
<link=p.LPI2C3.MTDR>
#### p.lpi2c3.sder
<link=p.LPI2C3.SDER>
#### LPI2C3.SCFGR2
<link=p.LPI2C3.SCFGR2>
#### p.LPI2C3.SASR
<lang=dft>
 (ro)  [1;33m0x403f8150[0m (0x403f8000 + 0x0150)
Slave Address Status Register
 (ro) (11)  [0;32mRADDR[0m  - [10:00] -  Received Address
 (ro) (01)  [0;32mANV[0m  - [14:14] -  Address Not Valid
      0 - ANV_0 :
         Received Address (RADDR) is valid
      0x1 - ANV_1 :
         Received Address (RADDR) is not valid
</lang>
#### p.LPI2C4.MCR
<lang=dft>
 (rw)  [1;33m0x403fc010[0m (0x403fc000 + 0x0010)
Master Control Register
 (rw) (01)  [0;32mMEN[0m  - [00:00] -  Master Enable
      0 - MEN_0 :
         Master logic is disabled
      0x1 - MEN_1 :
         Master logic is enabled
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Software Reset
      0 - RST_0 :
         Master logic is not reset
      0x1 - RST_1 :
         Master logic is reset
 (rw) (01)  [0;32mDOZEN[0m  - [02:02] -  Doze mode enable
      0 - DOZEN_0 :
         Master is enabled in Doze mode
      0x1 - DOZEN_1 :
         Master is disabled in Doze mode
 (rw) (01)  [0;32mDBGEN[0m  - [03:03] -  Debug Enable
      0 - DBGEN_0 :
         Master is disabled in debug mode
      0x1 - DBGEN_1 :
         Master is enabled in debug mode
 (rw) (01)  [0;32mRTF[0m  - [08:08] -  Reset Transmit FIFO
      0 - RTF_0 :
         No effect
      0x1 - RTF_1 :
         Transmit FIFO is reset
 (rw) (01)  [0;32mRRF[0m  - [09:09] -  Reset Receive FIFO
      0 - RRF_0 :
         No effect
      0x1 - RRF_1 :
         Receive FIFO is reset
</lang>
#### p.lpi2c4.mder
<link=p.LPI2C4.MDER>
#### LPI2C4.MCFGR1
<link=p.LPI2C4.MCFGR1>
#### lpi2c4.mccr0
<link=p.LPI2C4.MCCR0>
#### LPI2C4.SIER
<link=p.LPI2C4.SIER>
#### lpi2c4.scfgr1
<link=p.LPI2C4.SCFGR1>
#### lpi2c4.samr
<link=p.LPI2C4.SAMR>
#### SystemControl.ACTLR
<link=p.SYSTEMCONTROL.ACTLR>
#### p.SYSTEMCONTROL.AIRCR
<lang=dft>
 (rw)  [1;33m0xe000ed0c[0m (0xe000e000 + 0x0d0c)
Application Interrupt and Reset Control Register
 (wo) (01)  [0;32mVECTRESET[0m  - [00:00] -  Writing 1 to this bit causes a local system reset
      0 - VECTRESET_0 :
         No change
      0x1 - VECTRESET_1 :
         Causes a local system reset
 (wo) (01)  [0;32mVECTCLRACTIVE[0m  - [01:01] -  Writing 1 to this bit clears all active state information for fixed and configu
 rable exceptions.
      0 - VECTCLRACTIVE_0 :
         No change
      0x1 - VECTCLRACTIVE_1 :
         Clears all active state information for fixed and configurable exceptio
         ns
 (wo) (01)  [0;32mSYSRESETREQ[0m  - [02:02] -  System reset request
      0 - SYSRESETREQ_0 :
         no system reset request
      0x1 - SYSRESETREQ_1 :
         asserts a signal to the outer system that requests a reset
 (rw) (03)  [0;32mPRIGROUP[0m  - [10:08] -  Interrupt priority grouping field. This field determines the split of group pri
 ority from subpriority.
 (ro) (01)  [0;32mENDIANNESS[0m  - [15:15] -  Data endianness
      0 - ENDIANNESS_0 :
         Little-endian
      0x1 - ENDIANNESS_1 :
         Big-endian
 (rw) (16)  [0;32mVECTKEY[0m  - [31:16] -  Register key
</lang>
#### systemcontrol.id_pfr0
<link=p.SYSTEMCONTROL.ID_PFR0>
#### systemcontrol.ctr
<link=p.SYSTEMCONTROL.CTR>
#### p.SYSTEMCONTROL.CPACR
<lang=dft>
 (rw)  [1;33m0xe000ed88[0m (0xe000e000 + 0x0d88)
Coprocessor Access Control Register
 (rw) (02)  [0;32mCP0[0m  - [01:00] -  Access privileges for coprocessor 0.
      0 - CP0_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP0_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP0_3 :
         Full access.
 (rw) (02)  [0;32mCP1[0m  - [03:02] -  Access privileges for coprocessor 1.
      0 - CP1_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP1_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP1_3 :
         Full access.
 (rw) (02)  [0;32mCP2[0m  - [05:04] -  Access privileges for coprocessor 2.
      0 - CP2_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP2_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP2_3 :
         Full access.
 (rw) (02)  [0;32mCP3[0m  - [07:06] -  Access privileges for coprocessor 3.
      0 - CP3_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP3_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP3_3 :
         Full access.
 (rw) (02)  [0;32mCP4[0m  - [09:08] -  Access privileges for coprocessor 4.
      0 - CP4_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP4_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP4_3 :
         Full access.
 (rw) (02)  [0;32mCP5[0m  - [11:10] -  Access privileges for coprocessor 5.
      0 - CP5_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP5_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP5_3 :
         Full access.
 (rw) (02)  [0;32mCP6[0m  - [13:12] -  Access privileges for coprocessor 6.
      0 - CP6_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP6_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP6_3 :
         Full access.
 (rw) (02)  [0;32mCP7[0m  - [15:14] -  Access privileges for coprocessor 7.
      0 - CP7_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP7_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP7_3 :
         Full access.
 (rw) (02)  [0;32mCP10[0m  - [21:20] -  Access privileges for coprocessor 10.
      0 - CP10_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP10_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP10_3 :
         Full access.
 (rw) (02)  [0;32mCP11[0m  - [23:22] -  Access privileges for coprocessor 11.
      0 - CP11_0 :
         Access denied. Any attempted access generates a NOCP UsageFault.
      0x1 - CP11_1 :
         Privileged access only. An unprivileged access generates a NOCP UsageFa
         ult.
      0x3 - CP11_3 :
         Full access.
</lang>
#### systemcontrol.stir
<link=p.SYSTEMCONTROL.STIR>
#### SystemControl.CM7_DTCMCR
<link=p.SYSTEMCONTROL.CM7_DTCMCR>
#### p.SYSTEMCONTROL.CM7_ABFSR
<lang=dft>
 (rw)  [1;33m0xe000efa8[0m (0xe000e000 + 0x0fa8)
Auxiliary Bus Fault Status Register
 (rw) (01)  [0;32mITCM[0m  - [00:00] -  Asynchronous fault on ITCM interface.
 (rw) (01)  [0;32mDTCM[0m  - [01:01] -  Asynchronous fault on DTCM interface.
 (rw) (01)  [0;32mAHBP[0m  - [02:02] -  Asynchronous fault on AHBP interface.
 (rw) (01)  [0;32mAXIM[0m  - [03:03] -  Asynchronous fault on AXIM interface.
 (rw) (01)  [0;32mEPPB[0m  - [04:04] -  Asynchronous fault on EPPB interface.
 (rw) (02)  [0;32mAXIMTYPE[0m  - [09:08] -  Indicates the type of fault on the AXIM interface. Only valid when AXIM is 1.
      0 - AXIMTYPE_0 :
         OKAY.
      0x1 - AXIMTYPE_1 :
         EXOKAY.
      0x2 - AXIMTYPE_2 :
         SLVERR.
      0x3 - AXIMTYPE_3 :
         DECERR.
</lang>
#### p.nvic.nviciser1
<link=p.NVIC.NVICISER1>
#### nvic.nviciser4
<link=p.NVIC.NVICISER4>
#### p.nvic.nvicicer4
<link=p.NVIC.NVICICER4>
#### nvic.nvicispr1
<link=p.NVIC.NVICISPR1>
#### p.nvic.nvicicpr1
<link=p.NVIC.NVICICPR1>
#### p.NVIC.NVICICPR2
<lang=dft>
 (rw)  [1;33m0xe000e288[0m (0xe000e100 + 0x0188)
Interrupt Clear Pending Register n
 (rw) (32)  [0;32mCLRPEND[0m  - [31:00] -  Interrupt clear-pending bits
</lang>
#### p.nvic.nviciabr1
<link=p.NVIC.NVICIABR1>
#### p.NVIC.NVICIP2
<lang=dft>
 (rw)  [1;33m0xe000e402[0m (0xe000e100 + 0x0302)
Interrupt Priority Register 2
 (rw) (04)  [0;32mPRI2[0m  - [07:04] -  Priority of the INT_DMA2_DMA18 interrupt 2
</lang>
#### p.NVIC.NVICIP10
<lang=dft>
 (rw)  [1;33m0xe000e40a[0m (0xe000e100 + 0x030a)
Interrupt Priority Register 10
 (rw) (04)  [0;32mPRI10[0m  - [07:04] -  Priority of the INT_DMA10_DMA26 interrupt 10
</lang>
#### p.nvic.nvicip15
<link=p.NVIC.NVICIP15>
#### nvic.nvicip18
<link=p.NVIC.NVICIP18>
#### p.nvic.nvicip20
<link=p.NVIC.NVICIP20>
#### nvic.nvicip29
<link=p.NVIC.NVICIP29>
#### p.nvic.nvicip33
<link=p.NVIC.NVICIP33>
#### nvic.nvicip36
<link=p.NVIC.NVICIP36>
#### NVIC.NVICIP38
<link=p.NVIC.NVICIP38>
#### NVIC.NVICIP40
<link=p.NVIC.NVICIP40>
#### nvic.nvicip42
<link=p.NVIC.NVICIP42>
#### NVIC.NVICIP53
<link=p.NVIC.NVICIP53>
#### nvic.nvicip55
<link=p.NVIC.NVICIP55>
#### p.nvic.nvicip59
<link=p.NVIC.NVICIP59>
#### p.NVIC.NVICIP61
<lang=dft>
 (rw)  [1;33m0xe000e43d[0m (0xe000e100 + 0x033d)
Interrupt Priority Register 61
 (rw) (04)  [0;32mPRI61[0m  - [07:04] -  Priority of the INT_PMU_EVENT interrupt 61
</lang>
#### nvic.nvicip64
<link=p.NVIC.NVICIP64>
#### NVIC.NVICIP66
<link=p.NVIC.NVICIP66>
#### p.NVIC.NVICIP72
<lang=dft>
 (rw)  [1;33m0xe000e448[0m (0xe000e100 + 0x0348)
Interrupt Priority Register 72
 (rw) (04)  [0;32mPRI72[0m  - [07:04] -  Priority of the INT_GPIO1_INT0 interrupt 72
</lang>
#### NVIC.NVICIP75
<link=p.NVIC.NVICIP75>
#### NVIC.NVICIP84
<link=p.NVIC.NVICIP84>
#### nvic.nvicip86
<link=p.NVIC.NVICIP86>
#### nvic.nvicip91
<link=p.NVIC.NVICIP91>
#### NVIC.NVICIP97
<link=p.NVIC.NVICIP97>
#### NVIC.NVICIP108
<link=p.NVIC.NVICIP108>
#### p.nvic.nvicip109
<link=p.NVIC.NVICIP109>
#### NVIC.NVICIP126
<link=p.NVIC.NVICIP126>
#### p.nvic.nvicip127
<link=p.NVIC.NVICIP127>
#### nvic.nvicip128
<link=p.NVIC.NVICIP128>
#### p.nvic.nvicip134
<link=p.NVIC.NVICIP134>
#### NVIC.NVICIP139
<link=p.NVIC.NVICIP139>
#### p.NVIC.NVICIP141
<lang=dft>
 (rw)  [1;33m0xe000e48d[0m (0xe000e100 + 0x038d)
Interrupt Priority Register 141
 (rw) (04)  [0;32mPRI141[0m  - [07:04] -  Priority of the INT_PWM2_FAULT interrupt 141
</lang>
#### nvic.nvicip143
<link=p.NVIC.NVICIP143>
#### p.nvic.nvicip144
<link=p.NVIC.NVICIP144>
#### NVIC.NVICIP145
<link=p.NVIC.NVICIP145>
#### nvic.nvicip150
<link=p.NVIC.NVICIP150>
#### p.NVIC.NVICIP152
<lang=dft>
 (rw)  [1;33m0xe000e498[0m (0xe000e100 + 0x0398)
Interrupt Priority Register 152
 (rw) (04)  [0;32mPRI152[0m  - [07:04] -  Priority of the INT_ENET2 interrupt 152
</lang>
#### NVIC.NVICIP152
<link=p.NVIC.NVICIP152>
#### p.nvic.nvicip157
<link=p.NVIC.NVICIP157>
#### cval1
<link=CVAL1>
#### cr0
<link=CR0>
#### FPR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CMP1.FPR
   p.CMP2.FPR
   p.CMP3.FPR
   p.CMP4.FPR
#### GPR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.IOMUXC_SNVS_GPR.GPR2
   p.IOMUXC_GPR.GPR2
   p.SRC.GPR2
#### sw_pad_ctl_pad_por_b
<link=SW_PAD_CTL_PAD_POR_B>
#### GPR10
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.IOMUXC_GPR.GPR10
   p.SRC.GPR10
#### GPR25
<link=p.IOMUXC_GPR.GPR25>
#### gpr28
<link=GPR28>
#### TCM_CTRL
<link=p.FLEXRAM.TCM_CTRL>
#### cs
<link=CS>
#### TOVAL
<link=p.RTWDOG.TOVAL>
#### hc2
<link=HC2>
#### MCTL
<link=p.TRNG.MCTL>
#### SBLIM
<link=p.TRNG.SBLIM>
#### frqmin
<link=FRQMIN>
#### status
<link=STATUS>
#### PKRCNTBA
<link=p.TRNG.PKRCNTBA>
#### PKRCNTDC
<link=p.TRNG.PKRCNTDC>
#### sec_cfg
<link=SEC_CFG>
#### VID1
<link=p.TRNG.VID1>
#### hpcr
<link=HPCR>
#### LPCR
<link=p.SNVS.LPCR>
#### lpzmkr[7]
<link=LPZMKR[7]>
#### LPGPR_alias[1]
<link=p.SNVS.LPGPR_alias[1]>
#### LPGPR[0]
<link=p.SNVS.LPGPR[0]>
#### LPGPR[7]
<link=p.SNVS.LPGPR[7]>
#### PLL_USB2
<link=p.CCM_ANALOG.PLL_USB2>
#### PLL_AUDIO_CLR
<link=p.CCM_ANALOG.PLL_AUDIO_CLR>
#### pll_video_num
<link=PLL_VIDEO_NUM>
#### PLL_VIDEO_DENOM
<link=p.CCM_ANALOG.PLL_VIDEO_DENOM>
#### pll_enet_clr
<link=PLL_ENET_CLR>
#### PFD_480_SET
<link=p.CCM_ANALOG.PFD_480_SET>
#### pfd_480_set
<link=PFD_480_SET>
#### misc2_tog
<link=MISC2_TOG>
#### REG_1P1_CLR
<link=p.PMU.REG_1P1_CLR>
#### REG_1P1_TOG
<link=p.PMU.REG_1P1_TOG>
#### reg_3p0_set
<link=REG_3P0_SET>
#### reg_2p5_set
<link=REG_2P5_SET>
#### usb1_chrg_detect_tog
<link=USB1_CHRG_DETECT_TOG>
#### USB2_LOOPBACK_CLR
<link=p.USB_ANALOG.USB2_LOOPBACK_CLR>
#### usb2_loopback_tog
<link=USB2_LOOPBACK_TOG>
#### USB2_MISC_TOG
<link=p.USB_ANALOG.USB2_MISC_TOG>
#### PWD_CLR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.PWD_CLR
   p.USBPHY2.PWD_CLR
#### debug_clr
<link=DEBUG_CLR>
#### DEBUG1_CLR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.DEBUG1_CLR
   p.USBPHY2.DEBUG1_CLR
#### csl1
<link=CSL1>
#### csl13
<link=CSL13>
#### DCHPRI8
<link=p.DMA0.DCHPRI8>
#### dchpri8
<link=DCHPRI8>
#### tcd0_attr
<link=TCD0_ATTR>
#### tcd0_daddr
<link=TCD0_DADDR>
#### TCD0_DLASTSGA
<link=p.DMA0.TCD0_DLASTSGA>
#### tcd0_dlastsga
<link=TCD0_DLASTSGA>
#### TCD1_DLASTSGA
<link=p.DMA0.TCD1_DLASTSGA>
#### tcd2_nbytes_mlno
<link=TCD2_NBYTES_MLNO>
#### tcd2_daddr
<link=TCD2_DADDR>
#### tcd2_dlastsga
<link=TCD2_DLASTSGA>
#### tcd3_soff
<link=TCD3_SOFF>
#### tcd3_citer_elinkyes
<link=TCD3_CITER_ELINKYES>
#### TCD4_SOFF
<link=p.DMA0.TCD4_SOFF>
#### tcd4_soff
<link=TCD4_SOFF>
#### TCD4_BITER_ELINKNO
<link=p.DMA0.TCD4_BITER_ELINKNO>
#### TCD5_BITER_ELINKYES
<link=p.DMA0.TCD5_BITER_ELINKYES>
#### tcd8_nbytes_mlno
<link=TCD8_NBYTES_MLNO>
#### tcd8_slast
<link=TCD8_SLAST>
#### tcd9_nbytes_mlno
<link=TCD9_NBYTES_MLNO>
#### tcd9_daddr
<link=TCD9_DADDR>
#### tcd10_nbytes_mloffyes
<link=TCD10_NBYTES_MLOFFYES>
#### tcd10_daddr
<link=TCD10_DADDR>
#### tcd10_citer_elinkyes
<link=TCD10_CITER_ELINKYES>
#### TCD11_ATTR
<link=p.DMA0.TCD11_ATTR>
#### tcd11_citer_elinkno
<link=TCD11_CITER_ELINKNO>
#### tcd11_biter_elinkno
<link=TCD11_BITER_ELINKNO>
#### TCD12_NBYTES_MLNO
<link=p.DMA0.TCD12_NBYTES_MLNO>
#### TCD12_CITER_ELINKNO
<link=p.DMA0.TCD12_CITER_ELINKNO>
#### tcd12_csr
<link=TCD12_CSR>
#### TCD13_SADDR
<link=p.DMA0.TCD13_SADDR>
#### TCD15_BITER_ELINKYES
<link=p.DMA0.TCD15_BITER_ELINKYES>
#### TCD16_DOFF
<link=p.DMA0.TCD16_DOFF>
#### tcd17_attr
<link=TCD17_ATTR>
#### TCD17_SLAST
<link=p.DMA0.TCD17_SLAST>
#### TCD18_NBYTES_MLNO
<link=p.DMA0.TCD18_NBYTES_MLNO>
#### tcd18_citer_elinkno
<link=TCD18_CITER_ELINKNO>
#### tcd18_biter_elinkno
<link=TCD18_BITER_ELINKNO>
#### tcd19_dlastsga
<link=TCD19_DLASTSGA>
#### tcd20_saddr
<link=TCD20_SADDR>
#### TCD20_ATTR
<link=p.DMA0.TCD20_ATTR>
#### tcd20_nbytes_mlno
<link=TCD20_NBYTES_MLNO>
#### tcd20_nbytes_mloffno
<link=TCD20_NBYTES_MLOFFNO>
#### tcd20_dlastsga
<link=TCD20_DLASTSGA>
#### TCD21_CITER_ELINKNO
<link=p.DMA0.TCD21_CITER_ELINKNO>
#### TCD22_SADDR
<link=p.DMA0.TCD22_SADDR>
#### tcd22_citer_elinkyes
<link=TCD22_CITER_ELINKYES>
#### TCD22_CSR
<link=p.DMA0.TCD22_CSR>
#### TCD23_DLASTSGA
<link=p.DMA0.TCD23_DLASTSGA>
#### TCD23_BITER_ELINKNO
<link=p.DMA0.TCD23_BITER_ELINKNO>
#### tcd24_slast
<link=TCD24_SLAST>
#### TCD24_DOFF
<link=p.DMA0.TCD24_DOFF>
#### tcd24_citer_elinkno
<link=TCD24_CITER_ELINKNO>
#### TCD24_CITER_ELINKYES
<link=p.DMA0.TCD24_CITER_ELINKYES>
#### tcd24_citer_elinkyes
<link=TCD24_CITER_ELINKYES>
#### TCD24_BITER_ELINKNO
<link=p.DMA0.TCD24_BITER_ELINKNO>
#### TCD25_SOFF
<link=p.DMA0.TCD25_SOFF>
#### tcd25_attr
<link=TCD25_ATTR>
#### TCD25_NBYTES_MLOFFNO
<link=p.DMA0.TCD25_NBYTES_MLOFFNO>
#### tcd25_slast
<link=TCD25_SLAST>
#### TCD26_CITER_ELINKNO
<link=p.DMA0.TCD26_CITER_ELINKNO>
#### TCD30_NBYTES_MLOFFNO
<link=p.DMA0.TCD30_NBYTES_MLOFFNO>
#### TCD31_DLASTSGA
<link=p.DMA0.TCD31_DLASTSGA>
#### chcfg[3]
<link=CHCFG[3]>
#### CHCFG[9]
<link=p.DMAMUX.CHCFG[9]>
#### CHCFG[17]
<link=p.DMAMUX.CHCFG[17]>
#### CHCFG[23]
<link=p.DMAMUX.CHCFG[23]>
#### CHCFG[26]
<link=p.DMAMUX.CHCFG[26]>
#### chcfg[27]
<link=CHCFG[27]>
#### CNTR
<link=p.GPC.CNTR>
#### ISR3
<link=p.GPC.ISR3>
#### CBCDR
<link=p.CCM.CBCDR>
#### cs2cdr
<link=CS2CDR>
#### cmeor
<link=CMEOR>
#### ROMPATCH7A
<link=p.ROMC.ROMPATCH7A>
#### ROMPATCH14A
<link=p.ROMC.ROMPATCH14A>
#### DATA
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.DATA
   p.LPUART2.DATA
   p.LPUART3.DATA
   p.LPUART4.DATA
   p.LPUART5.DATA
   p.LPUART6.DATA
   p.LPUART7.DATA
   p.LPUART8.DATA
   p.OCOTP.DATA
#### fifo
<link=FIFO>
#### TIMSTAT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMSTAT
   p.FLEXIO2.TIMSTAT
   p.FLEXIO3.TIMSTAT
#### SHIFTSDEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTSDEN
   p.FLEXIO2.SHIFTSDEN
   p.FLEXIO3.SHIFTSDEN
#### shiftcfg[2]
<link=SHIFTCFG[2]>
#### TIMCTL[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCTL[2]
   p.FLEXIO2.TIMCTL[2]
   p.FLEXIO3.TIMCTL[2]
#### TIMCFG[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCFG[2]
   p.FLEXIO2.TIMCFG[2]
   p.FLEXIO3.TIMCFG[2]
#### timcmp[0]
<link=TIMCMP[0]>
#### SHIFTBUFNBS[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFNBS[3]
   p.FLEXIO2.SHIFTBUFNBS[3]
   p.FLEXIO3.SHIFTBUFNBS[3]
#### SHIFTBUFHWS[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFHWS[3]
   p.FLEXIO2.SHIFTBUFHWS[3]
   p.FLEXIO3.SHIFTBUFHWS[3]
#### icr2
<link=ICR2>
#### isr
<link=ISR>
#### ECR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.ECR
   p.CAN2.ECR
   p.CAN3.ECR
   p.ENET.ECR
   p.ENET2.ECR
#### RXIMR4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR4
   p.CAN2.RXIMR4
#### rximr8
<link=RXIMR8>
#### RXIMR12
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR12
   p.CAN2.RXIMR12
#### rximr19
<link=RXIMR19>
#### rximr20
<link=RXIMR20>
#### RXIMR27
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR27
   p.CAN2.RXIMR27
#### RXIMR34
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR34
   p.CAN2.RXIMR34
#### rximr42
<link=RXIMR42>
#### rximr55
<link=RXIMR55>
#### mb0_16b_word0
<link=MB0_16B_WORD0>
#### WORD00
<link=p.CAN3.WORD00>
#### MB0_32B_WORD6
<link=p.CAN3.MB0_32B_WORD6>
#### mb2_8b_id
<link=MB2_8B_ID>
#### MB1_32B_CS
<link=p.CAN3.MB1_32B_CS>
#### id3
<link=ID3>
#### mb0_64b_word12
<link=MB0_64B_WORD12>
#### mb2_16b_word1
<link=MB2_16B_WORD1>
#### mb3_8b_word1
<link=MB3_8B_WORD1>
#### mb1_32b_word5
<link=MB1_32B_WORD5>
#### MB2_32B_ID
<link=p.CAN3.MB2_32B_ID>
#### mb5_8b_id
<link=MB5_8B_ID>
#### MB1_64B_WORD5
<link=p.CAN3.MB1_64B_WORD5>
#### mb4_16b_id
<link=MB4_16B_ID>
#### MB6_8B_WORD0
<link=p.CAN3.MB6_8B_WORD0>
#### mb6_8b_word1
<link=MB6_8B_WORD1>
#### MB4_16B_WORD2
<link=p.CAN3.MB4_16B_WORD2>
#### mb7_8b_cs
<link=MB7_8B_CS>
#### ID7
<link=p.CAN3.ID7>
#### MB7_8B_ID
<link=p.CAN3.MB7_8B_ID>
#### mb5_16b_cs
<link=MB5_16B_CS>
#### mb1_64b_word15
<link=MB1_64B_WORD15>
#### MB3_32B_WORD3
<link=p.CAN3.MB3_32B_WORD3>
#### mb3_32b_word4
<link=MB3_32B_WORD4>
#### mb4_32b_id
<link=MB4_32B_ID>
#### mb10_8b_word0
<link=MB10_8B_WORD0>
#### MB4_32B_WORD2
<link=p.CAN3.MB4_32B_WORD2>
#### id11
<link=ID11>
#### mb2_64b_word7
<link=MB2_64B_WORD7>
#### mb12_8b_cs
<link=MB12_8B_CS>
#### mb2_64b_word14
<link=MB2_64B_WORD14>
#### mb13_8b_id
<link=MB13_8B_ID>
#### mb5_32b_word1
<link=MB5_32B_WORD1>
#### MB9_16B_CS
<link=p.CAN3.MB9_16B_CS>
#### MB3_64B_WORD0
<link=p.CAN3.MB3_64B_WORD0>
#### cs15
<link=CS15>
#### mb3_64b_word6
<link=MB3_64B_WORD6>
#### MB16_8B_CS
<link=p.CAN3.MB16_8B_CS>
#### WORD016
<link=p.CAN3.WORD016>
#### mb11_16b_word0
<link=MB11_16B_WORD0>
#### MB17_8B_CS
<link=p.CAN3.MB17_8B_CS>
#### MB11_16B_WORD1
<link=p.CAN3.MB11_16B_WORD1>
#### MB7_32B_CS
<link=p.CAN3.MB7_32B_CS>
#### mb7_32b_word0
<link=MB7_32B_WORD0>
#### MB4_64B_WORD0
<link=p.CAN3.MB4_64B_WORD0>
#### WORD118
<link=p.CAN3.WORD118>
#### MB7_32B_WORD7
<link=p.CAN3.MB7_32B_WORD7>
#### CS20
<link=p.CAN3.CS20>
#### ID20
<link=p.CAN3.ID20>
#### mb13_16b_word1
<link=MB13_16B_WORD1>
#### MB13_16B_WORD3
<link=p.CAN3.MB13_16B_WORD3>
#### mb8_32b_word5
<link=MB8_32B_WORD5>
#### MB4_64B_WORD14
<link=p.CAN3.MB4_64B_WORD14>
#### mb22_8b_id
<link=MB22_8B_ID>
#### MB5_64B_WORD0
<link=p.CAN3.MB5_64B_WORD0>
#### MB23_8B_ID
<link=p.CAN3.MB23_8B_ID>
#### mb23_8b_word1
<link=MB23_8B_WORD1>
#### id24
<link=ID24>
#### mb16_16b_id
<link=MB16_16B_ID>
#### MB10_32B_WORD4
<link=p.CAN3.MB10_32B_WORD4>
#### mb10_32b_word5
<link=MB10_32B_WORD5>
#### MB26_8B_WORD1
<link=p.CAN3.MB26_8B_WORD1>
#### mb26_8b_word1
<link=MB26_8B_WORD1>
#### MB18_16B_ID
<link=p.CAN3.MB18_16B_ID>
#### mb18_16b_word0
<link=MB18_16B_WORD0>
#### mb6_64b_word0
<link=MB6_64B_WORD0>
#### WORD027
<link=p.CAN3.WORD027>
#### MB27_8B_WORD1
<link=p.CAN3.MB27_8B_WORD1>
#### word028
<link=WORD028>
#### WORD129
<link=p.CAN3.WORD129>
#### WORD030
<link=p.CAN3.WORD030>
#### MB6_64B_WORD13
<link=p.CAN3.MB6_64B_WORD13>
#### MB12_32B_WORD4
<link=p.CAN3.MB12_32B_WORD4>
#### mb31_8b_word0
<link=MB31_8B_WORD0>
#### mb12_32b_word6
<link=MB12_32B_WORD6>
#### mb21_16b_word0
<link=MB21_16B_WORD0>
#### mb32_8b_id
<link=MB32_8B_ID>
#### mb7_64b_word1
<link=MB7_64B_WORD1>
#### cs33
<link=CS33>
#### ID33
<link=p.CAN3.ID33>
#### MB33_8B_ID
<link=p.CAN3.MB33_8B_ID>
#### word034
<link=WORD034>
#### MB7_64B_WORD11
<link=p.CAN3.MB7_64B_WORD11>
#### mb23_16b_word0
<link=MB23_16B_WORD0>
#### MB14_32B_WORD0
<link=p.CAN3.MB14_32B_WORD0>
#### mb14_32b_word1
<link=MB14_32B_WORD1>
#### MB35_8B_WORD1
<link=p.CAN3.MB35_8B_WORD1>
#### MB24_16B_ID
<link=p.CAN3.MB24_16B_ID>
#### CS37
<link=p.CAN3.CS37>
#### MB8_64B_WORD2
<link=p.CAN3.MB8_64B_WORD2>
#### id37
<link=ID37>
#### MB15_32B_CS
<link=p.CAN3.MB15_32B_CS>
#### mb8_64b_word4
<link=MB8_64B_WORD4>
#### MB15_32B_ID
<link=p.CAN3.MB15_32B_ID>
#### MB38_8B_ID
<link=p.CAN3.MB38_8B_ID>
#### MB8_64B_WORD12
<link=p.CAN3.MB8_64B_WORD12>
#### MB39_8B_WORD1
<link=p.CAN3.MB39_8B_WORD1>
#### mb16_32b_cs
<link=MB16_32B_CS>
#### MB16_32B_ID
<link=p.CAN3.MB16_32B_ID>
#### mb8_64b_word15
<link=MB8_64B_WORD15>
#### MB16_32B_WORD0
<link=p.CAN3.MB16_32B_WORD0>
#### mb27_16b_id
<link=MB27_16B_ID>
#### mb16_32b_word2
<link=MB16_32B_WORD2>
#### mb41_8b_cs
<link=MB41_8B_CS>
#### MB9_64B_WORD2
<link=p.CAN3.MB9_64B_WORD2>
#### ID42
<link=p.CAN3.ID42>
#### mb9_64b_word5
<link=MB9_64B_WORD5>
#### word042
<link=WORD042>
#### MB28_16B_WORD3
<link=p.CAN3.MB28_16B_WORD3>
#### WORD143
<link=p.CAN3.WORD143>
#### MB29_16B_WORD3
<link=p.CAN3.MB29_16B_WORD3>
#### mb18_32b_id
<link=MB18_32B_ID>
#### MB45_8B_WORD0
<link=p.CAN3.MB45_8B_WORD0>
#### MB10_64B_WORD2
<link=p.CAN3.MB10_64B_WORD2>
#### MB46_8B_CS
<link=p.CAN3.MB46_8B_CS>
#### MB46_8B_ID
<link=p.CAN3.MB46_8B_ID>
#### mb46_8b_word0
<link=MB46_8B_WORD0>
#### WORD046
<link=p.CAN3.WORD046>
#### MB46_8B_WORD1
<link=p.CAN3.MB46_8B_WORD1>
#### mb48_8b_cs
<link=MB48_8B_CS>
#### mb48_8b_id
<link=MB48_8B_ID>
#### MB10_64B_WORD12
<link=p.CAN3.MB10_64B_WORD12>
#### mb19_32b_word6
<link=MB19_32B_WORD6>
#### MB33_16B_CS
<link=p.CAN3.MB33_16B_CS>
#### mb49_8b_word1
<link=MB49_8B_WORD1>
#### mb20_32b_cs
<link=MB20_32B_CS>
#### MB33_16B_WORD2
<link=p.CAN3.MB33_16B_WORD2>
#### word150
<link=WORD150>
#### mb20_32b_word2
<link=MB20_32B_WORD2>
#### ID51
<link=p.CAN3.ID51>
#### MB51_8B_WORD0
<link=p.CAN3.MB51_8B_WORD0>
#### MB20_32B_WORD5
<link=p.CAN3.MB20_32B_WORD5>
#### MB52_8B_ID
<link=p.CAN3.MB52_8B_ID>
#### MB35_16B_CS
<link=p.CAN3.MB35_16B_CS>
#### mb52_8b_word0
<link=MB52_8B_WORD0>
#### mb11_64b_word13
<link=MB11_64B_WORD13>
#### MB35_16B_WORD1
<link=p.CAN3.MB35_16B_WORD1>
#### MB21_32B_WORD6
<link=p.CAN3.MB21_32B_WORD6>
#### WORD154
<link=p.CAN3.WORD154>
#### mb12_64b_word4
<link=MB12_64B_WORD4>
#### mb55_8b_word0
<link=MB55_8B_WORD0>
#### CS56
<link=p.CAN3.CS56>
#### MB12_64B_WORD6
<link=p.CAN3.MB12_64B_WORD6>
#### MB37_16B_WORD1
<link=p.CAN3.MB37_16B_WORD1>
#### MB22_32B_WORD4
<link=p.CAN3.MB22_32B_WORD4>
#### mb37_16b_word2
<link=MB37_16B_WORD2>
#### MB38_16B_WORD1
<link=p.CAN3.MB38_16B_WORD1>
#### mb58_8b_id
<link=MB58_8B_ID>
#### MB58_8B_WORD1
<link=p.CAN3.MB58_8B_WORD1>
#### MB59_8B_CS
<link=p.CAN3.MB59_8B_CS>
#### MB23_32B_WORD5
<link=p.CAN3.MB23_32B_WORD5>
#### word059
<link=WORD059>
#### cs60
<link=CS60>
#### mb13_64b_word4
<link=MB13_64B_WORD4>
#### MB13_64B_WORD6
<link=p.CAN3.MB13_64B_WORD6>
#### word161
<link=WORD161>
#### mb41_16b_word0
<link=MB41_16B_WORD0>
#### RXIMR[0]
<link=p.CAN3.RXIMR[0]>
#### RXIMR[16]
<link=p.CAN3.RXIMR[16]>
#### rximr[30]
<link=RXIMR[30]>
#### rximr[35]
<link=RXIMR[35]>
#### RXIMR[51]
<link=p.CAN3.RXIMR[51]>
#### RXIMR[60]
<link=p.CAN3.RXIMR[60]>
#### rximr[62]
<link=RXIMR[62]>
#### HR_TIME_STAMP[12]
<link=p.CAN3.HR_TIME_STAMP[12]>
#### hr_time_stamp[21]
<link=HR_TIME_STAMP[21]>
#### hr_time_stamp[31]
<link=HR_TIME_STAMP[31]>
#### hr_time_stamp[36]
<link=HR_TIME_STAMP[36]>
#### HR_TIME_STAMP[55]
<link=p.CAN3.HR_TIME_STAMP[55]>
#### HR_TIME_STAMP[63]
<link=p.CAN3.HR_TIME_STAMP[63]>
#### ERFFEL[0]
<link=p.CAN3.ERFFEL[0]>
#### erffel[12]
<link=ERFFEL[12]>
#### ERFFEL[20]
<link=p.CAN3.ERFFEL[20]>
#### erffel[20]
<link=ERFFEL[20]>
#### ERFFEL[34]
<link=p.CAN3.ERFFEL[34]>
#### erffel[34]
<link=ERFFEL[34]>
#### erffel[41]
<link=ERFFEL[41]>
#### ERFFEL[42]
<link=p.CAN3.ERFFEL[42]>
#### erffel[77]
<link=ERFFEL[77]>
#### ERFFEL[85]
<link=p.CAN3.ERFFEL[85]>
#### erffel[97]
<link=ERFFEL[97]>
#### erffel[120]
<link=ERFFEL[120]>
#### COMP11
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.COMP11
   p.TMR2.COMP11
   p.TMR3.COMP11
   p.TMR4.COMP11
#### comp11
<link=COMP11>
#### capt0
<link=CAPT0>
#### ctrl0
<link=CTRL0>
#### cmpld13
<link=CMPLD13>
#### cmpld22
<link=CMPLD22>
#### DMA1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.DMA1
   p.TMR2.DMA1
   p.TMR3.DMA1
   p.TMR4.DMA1
#### dma2
<link=DMA2>
#### ocr1
<link=OCR1>
#### TIMING
<link=p.OCOTP.TIMING>
#### cfg1
<link=CFG1>
#### CFG3
<link=p.OCOTP.CFG3>
#### OTPMK2
<link=p.OCOTP.OTPMK2>
#### otpmk4
<link=OTPMK4>
#### srk3
<link=SRK3>
#### SRK5
<link=p.OCOTP.SRK5>
#### ROM_PATCH3
<link=p.OCOTP.ROM_PATCH3>
#### rom_patch3
<link=ROM_PATCH3>
#### GP41
<link=p.OCOTP.GP41>
#### SW_MUX_CTL_PAD_GPIO_EMC_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_07>
#### sw_mux_ctl_pad_gpio_emc_07
<link=SW_MUX_CTL_PAD_GPIO_EMC_07>
#### SW_MUX_CTL_PAD_GPIO_EMC_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_10>
#### sw_mux_ctl_pad_gpio_emc_10
<link=SW_MUX_CTL_PAD_GPIO_EMC_10>
#### SW_MUX_CTL_PAD_GPIO_EMC_21
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_21>
#### sw_mux_ctl_pad_gpio_emc_21
<link=SW_MUX_CTL_PAD_GPIO_EMC_21>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_11>
#### sw_mux_ctl_pad_gpio_ad_b1_01
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_01>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_05>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_12>
#### sw_mux_ctl_pad_gpio_b0_01
<link=SW_MUX_CTL_PAD_GPIO_B0_01>
#### SW_MUX_CTL_PAD_GPIO_B0_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_02>
#### SW_MUX_CTL_PAD_GPIO_SD_B0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_01>
#### sw_mux_ctl_pad_gpio_sd_b1_01
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_01>
#### SW_PAD_CTL_PAD_GPIO_EMC_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_00>
#### SW_PAD_CTL_PAD_GPIO_EMC_17
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_17>
#### SW_PAD_CTL_PAD_GPIO_EMC_26
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_26>
#### sw_pad_ctl_pad_gpio_emc_30
<link=SW_PAD_CTL_PAD_GPIO_EMC_30>
#### SW_PAD_CTL_PAD_GPIO_EMC_39
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_39>
#### sw_pad_ctl_pad_gpio_ad_b0_01
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_01>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_10>
#### sw_pad_ctl_pad_gpio_b0_00
<link=SW_PAD_CTL_PAD_GPIO_B0_00>
#### SW_PAD_CTL_PAD_GPIO_B0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_01>
#### SW_PAD_CTL_PAD_GPIO_B1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_06>
#### SW_PAD_CTL_PAD_GPIO_SD_B0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_03>
#### sw_pad_ctl_pad_gpio_sd_b1_03
<link=SW_PAD_CTL_PAD_GPIO_SD_B1_03>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_08>
#### enet_ipg_clk_rmii_select_input
<link=ENET_IPG_CLK_RMII_SELECT_INPUT>
#### ENET_RXEN_SELECT_INPUT
<link=p.IOMUXC.ENET_RXEN_SELECT_INPUT>
#### FLEXSPIB_DATA1_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIB_DATA1_SELECT_INPUT>
#### FLEXSPIB_DATA3_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIB_DATA3_SELECT_INPUT>
#### lpspi2_sdi_select_input
<link=LPSPI2_SDI_SELECT_INPUT>
#### lpspi4_sdi_select_input
<link=LPSPI4_SDI_SELECT_INPUT>
#### lpuart2_rx_select_input
<link=LPUART2_RX_SELECT_INPUT>
#### lpuart7_rx_select_input
<link=LPUART7_RX_SELECT_INPUT>
#### SAI1_RX_BCLK_SELECT_INPUT
<link=p.IOMUXC.SAI1_RX_BCLK_SELECT_INPUT>
#### sai1_tx_sync_select_input
<link=SAI1_TX_SYNC_SELECT_INPUT>
#### sai2_rx_bclk_select_input
<link=SAI2_RX_BCLK_SELECT_INPUT>
#### SAI2_TX_BCLK_SELECT_INPUT
<link=p.IOMUXC.SAI2_TX_BCLK_SELECT_INPUT>
#### USDHC2_DATA1_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA1_SELECT_INPUT>
#### USDHC2_DATA3_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA3_SELECT_INPUT>
#### xbar1_in18_select_input
<link=XBAR1_IN18_SELECT_INPUT>
#### xbar1_in23_select_input
<link=XBAR1_IN23_SELECT_INPUT>
#### sw_mux_ctl_pad_gpio_spi_b0_07
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_07>
#### SW_MUX_CTL_PAD_GPIO_SPI_B1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_02>
#### sw_pad_ctl_pad_gpio_spi_b0_02
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_02>
#### sw_pad_ctl_pad_gpio_spi_b0_11
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_11>
#### SW_PAD_CTL_PAD_GPIO_SPI_B1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_00>
#### sw_pad_ctl_pad_gpio_spi_b1_05
<link=SW_PAD_CTL_PAD_GPIO_SPI_B1_05>
#### ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_0
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_0>
#### FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT>
#### FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT>
#### flexspi2_ipp_ind_sck_fa_select_input
<link=FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT>
#### GPT2_IPP_IND_CAPIN1_SELECT_INPUT
<link=p.IOMUXC.GPT2_IPP_IND_CAPIN1_SELECT_INPUT>
#### sai3_ipp_ind_sai_rxsync_select_input
<link=SAI3_IPP_IND_SAI_RXSYNC_SELECT_INPUT>
#### KPDR
<link=p.KPP.KPDR>
#### LUTKEY
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUTKEY
   p.FLEXSPI2.LUTKEY
#### FLSHCR2A2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHCR2A2
   p.FLEXSPI2.FLSHCR2A2
#### RFDR[15]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[15]
   p.FLEXSPI2.RFDR[15]
#### rfdr[28]
<link=RFDR[28]>
#### TFDR[26]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[26]
   p.FLEXSPI2.TFDR[26]
#### tfdr[26]
<link=TFDR[26]>
#### LUT[10]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[10]
   p.FLEXSPI2.LUT[10]
#### lut[10]
<link=LUT[10]>
#### lut[25]
<link=LUT[25]>
#### lut[35]
<link=LUT[35]>
#### STAT_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PXP.STAT_SET
   p.DCP.STAT_SET
#### PS_CTRL_CLR
<link=p.PXP.PS_CTRL_CLR>
#### ps_ctrl_clr
<link=PS_CTRL_CLR>
#### power
<link=POWER>
#### transfer_count
<link=TRANSFER_COUNT>
#### bm_error_stat
<link=BM_ERROR_STAT>
#### PIGEONCTRL0
<link=p.LCDIF.PIGEONCTRL0>
#### pigeonctrl2_set
<link=PIGEONCTRL2_SET>
#### pigeon_2_0
<link=PIGEON_2_0>
#### pigeon_7_2
<link=PIGEON_7_2>
#### PIGEON_8_2
<link=p.LCDIF.PIGEON_8_2>
#### PIGEON_11_1
<link=p.LCDIF.PIGEON_11_1>
#### LUT_CTRL
<link=p.LCDIF.LUT_CTRL>
#### lut_ctrl
<link=LUT_CTRL>
#### CMD_ARG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.CMD_ARG
   p.USDHC2.CMD_ARG
#### cmd_rsp3
<link=CMD_RSP3>
#### pres_state
<link=PRES_STATE>
#### ADMA_SYS_ADDR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.ADMA_SYS_ADDR
   p.USDHC2.ADMA_SYS_ADDR
#### MIBC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.MIBC
   p.ENET2.MIBC
#### RSEM
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RSEM
   p.ENET2.RSEM
#### taem
<link=TAEM>
#### TIPG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TIPG
   p.ENET2.TIPG
#### RMON_T_DROP
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_DROP
   p.ENET2.RMON_T_DROP
#### RMON_T_MC_PKT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_MC_PKT
   p.ENET2.RMON_T_MC_PKT
#### rmon_t_crc_align
<link=RMON_T_CRC_ALIGN>
#### rmon_t_undersize
<link=RMON_T_UNDERSIZE>
#### rmon_t_p128to255
<link=RMON_T_P128TO255>
#### ieee_t_1col
<link=IEEE_T_1COL>
#### IEEE_T_LCOL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_LCOL
   p.ENET2.IEEE_T_LCOL
#### IEEE_T_EXCOL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_EXCOL
   p.ENET2.IEEE_T_EXCOL
#### ieee_t_sqe
<link=IEEE_T_SQE>
#### rmon_r_crc_align
<link=RMON_R_CRC_ALIGN>
#### RMON_R_P256TO511
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_P256TO511
   p.ENET2.RMON_R_P256TO511
#### rmon_r_p256to511
<link=RMON_R_P256TO511>
#### RMON_R_P1024TO2047
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_P1024TO2047
   p.ENET2.RMON_R_P1024TO2047
#### RMON_R_P_GTE2048
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_P_GTE2048
   p.ENET2.RMON_R_P_GTE2048
#### ieee_r_align
<link=IEEE_R_ALIGN>
#### ATOFF
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.ATOFF
   p.ENET2.ATOFF
#### atstmp
<link=ATSTMP>
#### TCCR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TCCR2
   p.ENET2.TCCR2
#### tccr2
<link=TCCR2>
#### id
<link=ID>
#### gptimer0ctrl
<link=GPTIMER0CTRL>
#### HCCPARAMS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.HCCPARAMS
   p.USB2.HCCPARAMS
#### frindex
<link=FRINDEX>
#### endptctrl0
<link=ENDPTCTRL0>
#### sdramcr1
<link=SDRAMCR1>
#### NANDCR3
<link=p.SEMC.NANDCR3>
#### ipcr2
<link=IPCR2>
#### IPTXDAT
<link=p.SEMC.IPTXDAT>
#### STS8
<link=p.SEMC.STS8>
#### channelctrl_set
<link=CHANNELCTRL_SET>
#### CONTEXT
<link=p.DCP.CONTEXT>
#### keydata
<link=KEYDATA>
#### ch0opts
<link=CH0OPTS>
#### CH2CMDPTR
<link=p.DCP.CH2CMDPTR>
#### ch2stat_tog
<link=CH2STAT_TOG>
#### CH2OPTS_CLR
<link=p.DCP.CH2OPTS_CLR>
#### CH3SEMA
<link=p.DCP.CH3SEMA>
#### DBGSELECT
<link=p.DCP.DBGSELECT>
#### sic
<link=SIC>
#### SRCSH
<link=p.SPDIF.SRCSH>
#### srq
<link=SRQ>
#### STL
<link=p.SPDIF.STL>
#### TCR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TCR2
   p.SAI2.TCR2
   p.SAI3.TCR2
#### rcr1
<link=RCR1>
#### RDR[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RDR[1]
   p.SAI2.RDR[1]
   p.SAI3.RDR[1]
#### CFGR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPSPI1.CFGR0
   p.LPSPI2.CFGR0
   p.LPSPI3.CFGR0
   p.LPSPI4.CFGR0
#### DMR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPSPI1.DMR1
   p.LPSPI2.DMR1
   p.LPSPI3.DMR1
   p.LPSPI4.DMR1
#### done0_1_irq
<link=DONE0_1_IRQ>
#### trig0_ctrl
<link=TRIG0_CTRL>
#### trig0_chain_1_0
<link=TRIG0_CHAIN_1_0>
#### TRIG0_RESULT_5_4
<link=p.ADC_ETC.TRIG0_RESULT_5_4>
#### trig3_result_1_0
<link=TRIG3_RESULT_1_0>
#### TRIG3_RESULT_5_4
<link=p.ADC_ETC.TRIG3_RESULT_5_4>
#### TRIG3_RESULT_7_6
<link=p.ADC_ETC.TRIG3_RESULT_7_6>
#### TRIG4_CTRL
<link=p.ADC_ETC.TRIG4_CTRL>
#### TRIG5_RESULT_3_2
<link=p.ADC_ETC.TRIG5_RESULT_3_2>
#### TRIG5_RESULT_5_4
<link=p.ADC_ETC.TRIG5_RESULT_5_4>
#### TRIG6_CHAIN_1_0
<link=p.ADC_ETC.TRIG6_CHAIN_1_0>
#### bfcrt013
<link=BFCRT013>
#### sel2
<link=SEL2>
#### SEL8
<link=p.XBARA1.SEL8>
#### SEL15
<link=p.XBARA1.SEL15>
#### SEL28
<link=p.XBARA1.SEL28>
#### sel32
<link=SEL32>
#### sel50
<link=SEL50>
#### SEL59
<link=p.XBARA1.SEL59>
#### sel65
<link=SEL65>
#### ucomp
<link=UCOMP>
#### SM0CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CTRL
   p.PWM2.SM0CTRL
   p.PWM3.SM0CTRL
   p.PWM4.SM0CTRL
#### sm0val2
<link=SM0VAL2>
#### sm0octrl
<link=SM0OCTRL>
#### SM0DMAEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0DMAEN
   p.PWM2.SM0DMAEN
   p.PWM3.SM0DMAEN
   p.PWM4.SM0DMAEN
#### sm1ctrl
<link=SM1CTRL>
#### SM1VAL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1VAL1
   p.PWM2.SM1VAL1
   p.PWM3.SM1VAL1
   p.PWM4.SM1VAL1
#### sm1val3
<link=SM1VAL3>
#### SM1CAPTCOMPA
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CAPTCOMPA
   p.PWM2.SM1CAPTCOMPA
   p.PWM3.SM1CAPTCOMPA
   p.PWM4.SM1CAPTCOMPA
#### sm1captctrlb
<link=SM1CAPTCTRLB>
#### sm1captcompb
<link=SM1CAPTCOMPB>
#### SM2CVAL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL1
   p.PWM2.SM2CVAL1
   p.PWM3.SM2CVAL1
   p.PWM4.SM2CVAL1
#### sm3ctrl2
<link=SM3CTRL2>
#### SM3OCTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3OCTRL
   p.PWM2.SM3OCTRL
   p.PWM3.SM3OCTRL
   p.PWM4.SM3OCTRL
#### sm3captcompb
<link=SM3CAPTCOMPB>
#### sm3captctrlx
<link=SM3CAPTCTRLX>
#### sm3cval0cyc
<link=SM3CVAL0CYC>
#### SM3CVAL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL3
   p.PWM2.SM3CVAL3
   p.PWM3.SM3CVAL3
   p.PWM4.SM3CVAL3
#### mrdr
<link=MRDR>
#### actlr
<link=ACTLR>
#### hfsr
<link=HFSR>
#### BFAR
<link=p.SystemControl.BFAR>
#### ccsidr
<link=CCSIDR>
#### STIR
<link=p.SystemControl.STIR>
#### DCCSW
<link=p.SystemControl.DCCSW>
#### CM7_CACR
<link=p.SystemControl.CM7_CACR>
#### nvicispr3
<link=NVICISPR3>
#### NVICISPR4
<link=p.NVIC.NVICISPR4>
#### nviciabr0
<link=NVICIABR0>
#### NVICIABR2
<link=p.NVIC.NVICIABR2>
#### NVICIP5
<link=p.NVIC.NVICIP5>
#### nvicip11
<link=NVICIP11>
#### NVICIP18
<link=p.NVIC.NVICIP18>
#### NVICIP22
<link=p.NVIC.NVICIP22>
#### nvicip28
<link=NVICIP28>
#### nvicip37
<link=NVICIP37>
#### NVICIP40
<link=p.NVIC.NVICIP40>
#### nvicip65
<link=NVICIP65>
#### NVICIP75
<link=p.NVIC.NVICIP75>
#### NVICIP84
<link=p.NVIC.NVICIP84>
#### nvicip98
<link=NVICIP98>
#### NVICIP102
<link=p.NVIC.NVICIP102>
#### nvicip109
<link=NVICIP109>
#### NVICIP119
<link=p.NVIC.NVICIP119>
#### NVICIP124
<link=p.NVIC.NVICIP124>
#### nvicip131
<link=NVICIP131>
#### nvicip144
<link=NVICIP144>
#### nvicip153
<link=NVICIP153>
#### help
<lang=chs>
+ help(key)
  当key是字符串时，如'welcome', 'help', 查找字符串关键字对应的文档词条，如果找到则以当前语言显示；否则显示"str"类的属性和方法
  当key是其它变量时，会显示该变量所属的类的属性和方法
+ help('key', '语言名')
  类似上面，但是第1个参数必须是字符串，指定本次及**后续**显示的语言
  语言名都是3个字符，包括chs(简中), eng(英语)等。
+ help()
  ==> help('welcome')，也就是显示"welcome"词条  
<lang=dft>
+ help(key)
  If key is a string, such as "welcome", 'help', searchs the content for the key and shows in current language if found, otherwise, show the attributes and methods for the "str" class
  If key is a variable, such as help([1,2,3]), then show the attributes and methods of the class of the key variable
+ help('key', 'language')
  Similar to the above, but the 1st parameter **MUST** be a string. Specifies the language for this time and **from now on**.
  Language names are all 3 chars len, including chs (Simplified Chinese), eng (English), etc.
+ help()
  ==> a.k.a help('welcome')

