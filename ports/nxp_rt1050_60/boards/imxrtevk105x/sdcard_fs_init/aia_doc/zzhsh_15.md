#### naz
<link=nazrikom>

#### fuck you
<lang=chs>
讲文明，懂礼貌
</lang>
<lang=dft>
please be polite
#### p.aipstz1
<link=p.AIPSTZ1>
#### p.AIPSTZ1.MPR
<lang=dft>
 (rw)  [1;33m0x4007c000[0m (0x4007c000 + 0x0000)
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
#### AIPSTZ1.MPR
<link=p.AIPSTZ1.MPR>
#### AIPSTZ1.OPACR4
<link=p.AIPSTZ1.OPACR4>
#### AIPSTZ2.OPACR
<link=p.AIPSTZ2.OPACR>
#### p.AIPSTZ3
<lang=dft>
base: 0x4027c000
MPR             OPACR           OPACR1          OPACR2          
OPACR3          OPACR4          
输入 p.AIPSTZ3.{reg_name} 以查看寄存器的详细信息
type p.AIPSTZ3.{reg_name} to check details of registers
</lang>
#### dcdc.reg2
<link=p.DCDC.REG2>
#### p.DCDC.REG3
<lang=dft>
 (rw)  [1;33m0x4008000c[0m (0x40080000 + 0x000c)
DCDC Register 3
 (rw) (05)  [0;32mTRG[0m  - [04:00] -  Target value of VDD_SOC, 25 mV each step 0x0: 0.8V 0xE: 1.15V 0x1F:1.575V
 (rw) (03)  [0;32mTARGET_LP[0m  - [10:08] -  Target value of standby (low power) mode 0x0: 0
 (rw) (01)  [0;32mMINPWR_DC_HALFCLK[0m  - [24:24] -  Set DCDC clock to half freqeuncy for continuous mode
 (rw) (01)  [0;32mMISC_DELAY_TIMING[0m  - [27:27] -  Ajust delay to reduce ground noise
 (rw) (01)  [0;32mMISC_DISABLEFET_LOGIC[0m  - [28:28] -  Reserved
 (rw) (01)  [0;32mDISABLE_STEP[0m  - [30:30] -  Disable stepping for the output VDD_SOC of DCDC
</lang>
#### p.PIT.LDVAL0
<lang=dft>
 (rw)  [1;33m0x40084100[0m (0x40084000 + 0x0100)
Timer Load Value Register
 (rw) (32)  [0;32mTSV[0m  - [31:00] -  Timer Start Value
</lang>
#### pit.ldval1
<link=p.PIT.LDVAL1>
#### PIT.CVAL1
<link=p.PIT.CVAL1>
#### PIT.TCTRL1
<link=p.PIT.TCTRL1>
#### p.pit.ltmr64l
<link=p.PIT.LTMR64L>
#### p.CMP1.CR1
<lang=dft>
 (rw)  [1;33m0x40094001[0m (0x40094000 + 0x0001)
CMP Control Register 1
 (rw) (01)  [0;32mEN[0m  - [00:00] -  Comparator Module Enable
      0 - EN_0 :
         Analog Comparator is disabled.
      0x1 - EN_1 :
         Analog Comparator is enabled.
 (rw) (01)  [0;32mOPE[0m  - [01:01] -  Comparator Output Pin Enable
      0 - OPE_0 :
         CMPO is not available on the associated CMPO output pin. If the compara
         tor does not own the pin, this field has no effect.
      0x1 - OPE_1 :
         CMPO is available on the associated CMPO output pin. The comparator out
         put (CMPO) is driven out on the associated CMPO output pin if the compa
         rator owns the pin. If the comparator does not own the field, this bit 
         has no effect.
 (rw) (01)  [0;32mCOS[0m  - [02:02] -  Comparator Output Select
      0 - COS_0 :
         Set the filtered comparator output (CMPO) to equal COUT.
      0x1 - COS_1 :
         Set the unfiltered comparator output (CMPO) to equal COUTA.
 (rw) (01)  [0;32mINV[0m  - [03:03] -  Comparator INVERT
      0 - INV_0 :
         Does not invert the comparator output.
      0x1 - INV_1 :
         Inverts the comparator output.
 (rw) (01)  [0;32mPMODE[0m  - [04:04] -  Power Mode Select
      0 - PMODE_0 :
         Low-Speed (LS) Comparison mode selected. In this mode, CMP has slower o
         utput propagation delay and lower current consumption.
      0x1 - PMODE_1 :
         High-Speed (HS) Comparison mode selected. In this mode, CMP has faster 
         output propagation delay and higher current consumption.
 (rw) (01)  [0;32mWE[0m  - [06:06] -  Windowing Enable
      0 - WE_0 :
         Windowing mode is not selected.
      0x1 - WE_1 :
         Windowing mode is selected.
 (rw) (01)  [0;32mSE[0m  - [07:07] -  Sample Enable
      0 - SE_0 :
         Sampling mode is not selected.
      0x1 - SE_1 :
         Sampling mode is selected.
</lang>
#### cmp1.scr
<link=p.CMP1.SCR>
#### p.cmp2.cr0
<link=p.CMP2.CR0>
#### CMP3.CR0
<link=p.CMP3.CR0>
#### p.cmp4.cr0
<link=p.CMP4.CR0>
#### IOMUXC_SNVS.SW_MUX_CTL_PAD_PMIC_STBY_REQ
<link=p.IOMUXC_SNVS.SW_MUX_CTL_PAD_PMIC_STBY_REQ>
#### IOMUXC_SNVS.SW_PAD_CTL_PAD_POR_B
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_POR_B>
#### IOMUXC_GPR.GPR3
<link=p.IOMUXC_GPR.GPR3>
#### iomuxc_gpr.gpr4
<link=p.IOMUXC_GPR.GPR4>
#### p.IOMUXC_GPR.GPR17
<lang=dft>
 (rw)  [1;33m0x400ac044[0m (0x400ac000 + 0x0044)
GPR17 General Purpose Register
 (rw) (32)  [0;32mFLEXRAM_BANK_CFG[0m  - [31:00] -  FlexRAM bank config value
</lang>
#### p.iomuxc_gpr.gpr22
<link=p.IOMUXC_GPR.GPR22>
#### IOMUXC_GPR.GPR33
<link=p.IOMUXC_GPR.GPR33>
#### flexram.int_status
<link=p.FLEXRAM.INT_STATUS>
#### WDOG1.WSR
<link=p.WDOG1.WSR>
#### wdog2.wmcr
<link=p.WDOG2.WMCR>
#### ADC1.HC2
<link=p.ADC1.HC2>
#### p.adc1.hc3
<link=p.ADC1.HC3>
#### adc1.hc3
<link=p.ADC1.HC3>
#### p.ADC1.HC5
<lang=dft>
 (rw)  [1;33m0x400c4014[0m (0x400c4000 + 0x0014)
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
#### p.ADC1.R2
<lang=dft>
 (ro)  [1;33m0x400c402c[0m (0x400c4000 + 0x002c)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### ADC1.R3
<link=p.ADC1.R3>
#### adc1.r6
<link=p.ADC1.R6>
#### adc1.gs
<link=p.ADC1.GS>
#### ADC2.HC2
<link=p.ADC2.HC2>
#### p.ADC2.HC7
<lang=dft>
 (rw)  [1;33m0x400c801c[0m (0x400c8000 + 0x001c)
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
#### p.adc2.r7
<link=p.ADC2.R7>
#### p.adc2.cfg
<link=p.ADC2.CFG>
#### p.ADC2.GC
<lang=dft>
 (rw)  [1;33m0x400c8048[0m (0x400c8000 + 0x0048)
General control register
 (rw) (01)  [0;32mADACKEN[0m  - [00:00] -  Asynchronous clock output enable
      0 - ADACKEN_0 :
         Asynchronous clock output disabled; Asynchronous clock only enabled if 
         selected by ADICLK and a conversion is active.
      0x1 - ADACKEN_1 :
         Asynchronous clock and clock output enabled regardless of the state of 
         the ADC
 (rw) (01)  [0;32mDMAEN[0m  - [01:01] -  DMA Enable
      0 - DMAEN_0 :
         DMA disabled (default)
      0x1 - DMAEN_1 :
         DMA enabled
 (rw) (01)  [0;32mACREN[0m  - [02:02] -  Compare Function Range Enable
      0 - ACREN_0 :
         Range function disabled. Only the compare value 1 of ADC_CV register (C
         V1) is compared.
      0x1 - ACREN_1 :
         Range function enabled. Both compare values of ADC_CV registers (CV1 an
         d CV2) are compared.
 (rw) (01)  [0;32mACFGT[0m  - [03:03] -  Compare Function Greater Than Enable
      0 - ACFGT_0 :
         Configures "Less Than Threshold, Outside Range Not Inclusive and Inside
          Range Not Inclusive" functionality based on the values placed in the A
         DC_CV register.
      0x1 - ACFGT_1 :
         Configures "Greater Than Or Equal To Threshold, Outside Range Inclusive
          and Inside Range Inclusive" functionality based on the values placed i
         n the ADC_CV registers.
 (rw) (01)  [0;32mACFE[0m  - [04:04] -  Compare Function Enable
      0 - ACFE_0 :
         Compare function disabled
      0x1 - ACFE_1 :
         Compare function enabled
 (rw) (01)  [0;32mAVGE[0m  - [05:05] -  Hardware average enable
      0 - AVGE_0 :
         Hardware average function disabled
      0x1 - AVGE_1 :
         Hardware average function enabled
 (rw) (01)  [0;32mADCO[0m  - [06:06] -  Continuous Conversion Enable
      0 - ADCO_0 :
         One conversion or one set of conversions if the hardware average functi
         on is enabled (AVGE=1) after initiating a conversion.
      0x1 - ADCO_1 :
         Continuous conversions or sets of conversions if the hardware average f
         unction is enabled (AVGE=1) after initiating a conversion.
 (rw) (01)  [0;32mCAL[0m  - [07:07] -  Calibration
</lang>
#### adc2.cv
<link=p.ADC2.CV>
#### adc2.ofs
<link=p.ADC2.OFS>
#### p.TRNG.MCTL
<lang=dft>
 (rw)  [1;33m0x400cc000[0m (0x400cc000 + 0x0000)
Miscellaneous Control Register
 (rw) (02)  [0;32mSAMP_MODE[0m  - [01:00] -  Sample Mode
      0 - SAMP_MODE_0 :
         use Von Neumann data into both Entropy shifter and Statistical Checker
      0x1 - SAMP_MODE_1 :
         use raw data into both Entropy shifter and Statistical Checker
      0x2 - SAMP_MODE_2 :
         use Von Neumann data into Entropy shifter. Use raw data into Statistica
         l Checker
      0x3 - SAMP_MODE_3 :
         undefined/reserved.
 (rw) (02)  [0;32mOSC_DIV[0m  - [03:02] -  Oscillator Divide
      0 - OSC_DIV_0 :
         use ring oscillator with no divide
      0x1 - OSC_DIV_1 :
         use ring oscillator divided-by-2
      0x2 - OSC_DIV_2 :
         use ring oscillator divided-by-4
      0x3 - OSC_DIV_3 :
         use ring oscillator divided-by-8
 (ro) (01)  [0;32mUNUSED4[0m  - [04:04] -  This bit is unused. Always reads zero.
 (ro) (01)  [0;32mUNUSED5[0m  - [05:05] -  This bit is unused. Always reads zero.
 (wo) (01)  [0;32mRST_DEF[0m  - [06:06] -  Reset Defaults
 (rw) (01)  [0;32mFOR_SCLK[0m  - [07:07] -  Force System Clock
 (ro) (01)  [0;32mFCT_FAIL[0m  - [08:08] -  Read only: Frequency Count Fail
 (ro) (01)  [0;32mFCT_VAL[0m  - [09:09] -  Read only: Frequency Count Valid. Indicates that a valid frequency count may be
  read from FRQCNT.
 (ro) (01)  [0;32mENT_VAL[0m  - [10:10] -  Read only: Entropy Valid
 (ro) (01)  [0;32mTST_OUT[0m  - [11:11] -  Read only: Test point inside ring oscillator.
 (rw) (01)  [0;32mERR[0m  - [12:12] -  Read: Error status
 (ro) (01)  [0;32mTSTOP_OK[0m  - [13:13] -  TRNG_OK_TO_STOP
 (rw) (01)  [0;32mLRUN_CONT[0m  - [14:14] -  Long run count continues between entropy generations
 (rw) (01)  [0;32mPRGM[0m  - [16:16] -  Programming Mode Select
</lang>
#### trng.mctl
<link=p.TRNG.MCTL>
#### p.TRNG.SBLIM
<lang=dft>
 (rw)  [1;33m0x400cc014[0m (0x400cc000 + 0x0014)
Sparse Bit Limit Register
 (rw) (10)  [0;32mSB_LIM[0m  - [09:00] -  Sparse Bit Limit
</lang>
#### trng.scr1c
<link=p.TRNG.SCR1C>
#### p.trng.scr1l
<link=p.TRNG.SCR1L>
#### trng.scr3l
<link=p.TRNG.SCR3L>
#### p.trng.scr4c
<link=p.TRNG.SCR4C>
#### trng.status
<link=p.TRNG.STATUS>
#### trng.ent[0]
<link=p.TRNG.ENT[0]>
#### p.trng.ent[4]
<link=p.TRNG.ENT[4]>
#### TRNG.ENT[6]
<link=p.TRNG.ENT[6]>
#### p.TRNG.ENT[11]
<lang=dft>
 (ro)  [1;33m0x400cc06c[0m (0x400cc000 + 0x006c)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### TRNG.ENT[13]
<link=p.TRNG.ENT[13]>
#### p.TRNG.ENT[14]
<lang=dft>
 (ro)  [1;33m0x400cc078[0m (0x400cc000 + 0x0078)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### trng.pkrcnt54
<link=p.TRNG.PKRCNT54>
#### TRNG.PKRCNT54
<link=p.TRNG.PKRCNT54>
#### p.trng.sec_cfg
<link=p.TRNG.SEC_CFG>
#### p.snvs.hprtcmr
<link=p.SNVS.HPRTCMR>
#### p.snvs.lpcr
<link=p.SNVS.LPCR>
#### SNVS.LPSMCMR
<link=p.SNVS.LPSMCMR>
#### p.SNVS.LPSMCLR
<lang=dft>
 (ro)  [1;33m0x400d4060[0m (0x400d4000 + 0x0060)
SNVS_LP Secure Monotonic Counter LSB Register
 (ro) (32)  [0;32mMON_COUNTER[0m  - [31:00] -  Monotonic Counter bits The MC is incremented by one when: A write transaction t
 o the LPSMCMR or LPSMCLR Register is detected
</lang>
#### snvs.lpzmkr[3]
<link=p.SNVS.LPZMKR[3]>
#### p.SNVS.LPGPR_ALIAS[2]
<lang=dft>
 (rw)  [1;33m0x400d4098[0m (0x400d4000 + 0x0098)
SNVS_LP General Purpose Registers 0 .. 3
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### p.ccm_analog
<link=p.CCM_ANALOG>
#### p.CCM_ANALOG.PLL_ARM_CLR
<lang=dft>
 (rw)  [1;33m0x400d8008[0m (0x400d8000 + 0x0008)
Analog ARM PLL control Register
 (rw) (07)  [0;32mDIV_SELECT[0m  - [06:00] -  This field controls the PLL loop divider
 (rw) (01)  [0;32mPOWERDOWN[0m  - [12:12] -  Powers down the PLL.
 (rw) (01)  [0;32mENABLE[0m  - [13:13] -  Enable the clock output.
 (rw) (02)  [0;32mBYPASS_CLK_SRC[0m  - [15:14] -  Determines the bypass source
      0 - REF_CLK_24M :
         Select the 24MHz oscillator as source.
      0x1 - CLK1 :
         Select the CLK1_N / CLK1_P as source.
 (rw) (01)  [0;32mBYPASS[0m  - [16:16] -  Bypass the PLL.
 (rw) (01)  [0;32mPLL_SEL[0m  - [19:19] -  Reserved
 (ro) (01)  [0;32mLOCK[0m  - [31:31] -  1 - PLL is currently locked. 0 - PLL is not currently locked.
</lang>
#### CCM_ANALOG.PLL_USB1_CLR
<link=p.CCM_ANALOG.PLL_USB1_CLR>
#### p.ccm_analog.pll_usb2_tog
<link=p.CCM_ANALOG.PLL_USB2_TOG>
#### CCM_ANALOG.PLL_AUDIO_CLR
<link=p.CCM_ANALOG.PLL_AUDIO_CLR>
#### ccm_analog.pll_audio_tog
<link=p.CCM_ANALOG.PLL_AUDIO_TOG>
#### CCM_ANALOG.PLL_AUDIO_TOG
<link=p.CCM_ANALOG.PLL_AUDIO_TOG>
#### p.ccm_analog.pll_audio_num
<link=p.CCM_ANALOG.PLL_AUDIO_NUM>
#### p.ccm_analog.pll_video_tog
<link=p.CCM_ANALOG.PLL_VIDEO_TOG>
#### p.CCM_ANALOG.PLL_ENET_CLR
<lang=dft>
 (rw)  [1;33m0x400d80e8[0m (0x400d8000 + 0x00e8)
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
#### p.ccm_analog.pfd_480
<link=p.CCM_ANALOG.PFD_480>
#### ccm_analog.misc1_set
<link=p.CCM_ANALOG.MISC1_SET>
#### ccm_analog.misc2_clr
<link=p.CCM_ANALOG.MISC2_CLR>
#### CCM_ANALOG.MISC2_CLR
<link=p.CCM_ANALOG.MISC2_CLR>
#### p.CCM_ANALOG.MISC2_TOG
<lang=dft>
 (rw)  [1;33m0x400d817c[0m (0x400d8000 + 0x017c)
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
#### PMU.REG_1P1
<link=p.PMU.REG_1P1>
#### p.PMU.REG_1P1_CLR
<lang=dft>
 (rw)  [1;33m0x400d8118[0m (0x400d8000 + 0x0118)
Regulator 1P1 Register
 (rw) (01)  [0;32mENABLE_LINREG[0m  - [00:00] -  Control bit to enable the regulator output.
 (rw) (01)  [0;32mENABLE_BO[0m  - [01:01] -  Control bit to enable the brownout circuitry in the regulator.
 (rw) (01)  [0;32mENABLE_ILIMIT[0m  - [02:02] -  Control bit to enable the current-limit circuitry in the regulator.
 (rw) (01)  [0;32mENABLE_PULLDOWN[0m  - [03:03] -  Control bit to enable the pull-down circuitry in the regulator
 (rw) (03)  [0;32mBO_OFFSET[0m  - [06:04] -  Control bits to adjust the regulator brownout offset voltage in 25mV steps
 (rw) (05)  [0;32mOUTPUT_TRG[0m  - [12:08] -  Control bits to adjust the regulator output voltage
      0x4 - OUTPUT_TRG_4 :
         0.8V
      0x10 - OUTPUT_TRG_16 :
         1.1V
 (ro) (01)  [0;32mBO_VDD1P1[0m  - [16:16] -  Status bit that signals when a brownout is detected on the regulator output.
 (ro) (01)  [0;32mOK_VDD1P1[0m  - [17:17] -  Status bit that signals when the regulator output is ok. 1 = regulator output >
  brownout target
 (rw) (01)  [0;32mENABLE_WEAK_LINREG[0m  - [18:18] -  Enables the weak 1p1 regulator
 (rw) (01)  [0;32mSELREF_WEAK_LINREG[0m  - [19:19] -  Selects the source for the reference voltage of the weak 1p1 regulator.
      0 - SELREF_WEAK_LINREG_0 :
         Weak-linreg output tracks low-power-bandgap voltage
      0x1 - SELREF_WEAK_LINREG_1 :
         Weak-linreg output tracks VDD_SOC_IN voltage
</lang>
#### p.PMU.REG_1P1_TOG
<lang=dft>
 (rw)  [1;33m0x400d811c[0m (0x400d8000 + 0x011c)
Regulator 1P1 Register
 (rw) (01)  [0;32mENABLE_LINREG[0m  - [00:00] -  Control bit to enable the regulator output.
 (rw) (01)  [0;32mENABLE_BO[0m  - [01:01] -  Control bit to enable the brownout circuitry in the regulator.
 (rw) (01)  [0;32mENABLE_ILIMIT[0m  - [02:02] -  Control bit to enable the current-limit circuitry in the regulator.
 (rw) (01)  [0;32mENABLE_PULLDOWN[0m  - [03:03] -  Control bit to enable the pull-down circuitry in the regulator
 (rw) (03)  [0;32mBO_OFFSET[0m  - [06:04] -  Control bits to adjust the regulator brownout offset voltage in 25mV steps
 (rw) (05)  [0;32mOUTPUT_TRG[0m  - [12:08] -  Control bits to adjust the regulator output voltage
      0x4 - OUTPUT_TRG_4 :
         0.8V
      0x10 - OUTPUT_TRG_16 :
         1.1V
 (ro) (01)  [0;32mBO_VDD1P1[0m  - [16:16] -  Status bit that signals when a brownout is detected on the regulator output.
 (ro) (01)  [0;32mOK_VDD1P1[0m  - [17:17] -  Status bit that signals when the regulator output is ok. 1 = regulator output >
  brownout target
 (rw) (01)  [0;32mENABLE_WEAK_LINREG[0m  - [18:18] -  Enables the weak 1p1 regulator
 (rw) (01)  [0;32mSELREF_WEAK_LINREG[0m  - [19:19] -  Selects the source for the reference voltage of the weak 1p1 regulator.
      0 - SELREF_WEAK_LINREG_0 :
         Weak-linreg output tracks low-power-bandgap voltage
      0x1 - SELREF_WEAK_LINREG_1 :
         Weak-linreg output tracks VDD_SOC_IN voltage
</lang>
#### PMU.REG_1P1_TOG
<link=p.PMU.REG_1P1_TOG>
#### pmu.reg_2p5_set
<link=p.PMU.REG_2P5_SET>
#### p.PMU.REG_CORE
<lang=dft>
 (rw)  [1;33m0x400d8140[0m (0x400d8000 + 0x0140)
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
#### pmu.reg_core_set
<link=p.PMU.REG_CORE_SET>
#### PMU.MISC0_SET
<link=p.PMU.MISC0_SET>
#### p.TEMPMON
<lang=dft>
base: 0x400d8000
TEMPSENSE0      TEMPSENSE0_CLR  TEMPSENSE0_SET  TEMPSENSE0_TOG  
TEMPSENSE1      TEMPSENSE1_CLR  TEMPSENSE1_SET  TEMPSENSE1_TOG  
TEMPSENSE2      TEMPSENSE2_CLR  TEMPSENSE2_SET  TEMPSENSE2_TOG  
输入 p.TEMPMON.{reg_name} 以查看寄存器的详细信息
type p.TEMPMON.{reg_name} to check details of registers
</lang>
#### p.TEMPMON.TEMPSENSE0_SET
<lang=dft>
 (rw)  [1;33m0x400d8184[0m (0x400d8000 + 0x0184)
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
#### tempmon.tempsense0_set
<link=p.TEMPMON.TEMPSENSE0_SET>
#### TEMPMON.TEMPSENSE1
<link=p.TEMPMON.TEMPSENSE1>
#### tempmon.tempsense2_tog
<link=p.TEMPMON.TEMPSENSE2_TOG>
#### p.usb_analog.usb1_chrg_detect_set
<link=p.USB_ANALOG.USB1_CHRG_DETECT_SET>
#### usb_analog.usb1_vbus_detect_stat
<link=p.USB_ANALOG.USB1_VBUS_DETECT_STAT>
#### p.USB_ANALOG.USB1_LOOPBACK_CLR
<lang=dft>
 (rw)  [1;33m0x400d81e8[0m (0x400d8000 + 0x01e8)
USB Loopback Test Register
 (rw) (01)  [0;32mUTMI_TESTSTART[0m  - [00:00] -  Setting this bit can enable 1
</lang>
#### USB_ANALOG.USB1_MISC
<link=p.USB_ANALOG.USB1_MISC>
#### usb_analog.usb2_chrg_detect
<link=p.USB_ANALOG.USB2_CHRG_DETECT>
#### usb_analog.usb2_chrg_detect_tog
<link=p.USB_ANALOG.USB2_CHRG_DETECT_TOG>
#### p.usb_analog.usb2_misc_set
<link=p.USB_ANALOG.USB2_MISC_SET>
#### usb_analog.digprog
<link=p.USB_ANALOG.DIGPROG>
#### p.xtalosc24m.misc0
<link=p.XTALOSC24M.MISC0>
#### p.XTALOSC24M.LOWPWR_CTRL_SET
<lang=dft>
 (rw)  [1;33m0x400d8274[0m (0x400d8000 + 0x0274)
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
#### p.XTALOSC24M.OSC_CONFIG0_SET
<lang=dft>
 (rw)  [1;33m0x400d82a4[0m (0x400d8000 + 0x02a4)
XTAL OSC Configuration 0 Register
 (rw) (01)  [0;32mSTART[0m  - [00:00] -  Start/stop bit for the RC tuning calculation logic. If stopped the tuning logic
  is reset.
 (rw) (01)  [0;32mENABLE[0m  - [01:01] -  Enables the tuning logic to calculate new RC tuning values
 (rw) (01)  [0;32mBYPASS[0m  - [02:02] -  Bypasses any calculated RC tuning value and uses the programmed register value.
 (rw) (01)  [0;32mINVERT[0m  - [03:03] -  Invert the stepping of the calculated RC tuning value.
 (rw) (08)  [0;32mRC_OSC_PROG[0m  - [11:04] -  RC osc. tuning values.
 (rw) (04)  [0;32mHYST_PLUS[0m  - [15:12] -  Positive hysteresis value
 (rw) (04)  [0;32mHYST_MINUS[0m  - [19:16] -  Negative hysteresis value
 (rw) (08)  [0;32mRC_OSC_PROG_CUR[0m  - [31:24] -  The current tuning value in use.
</lang>
#### XTALOSC24M.OSC_CONFIG1_TOG
<link=p.XTALOSC24M.OSC_CONFIG1_TOG>
#### p.xtalosc24m.osc_config2_tog
<link=p.XTALOSC24M.OSC_CONFIG2_TOG>
#### p.usbphy1.pwd_tog
<link=p.USBPHY1.PWD_TOG>
#### usbphy1.rx_set
<link=p.USBPHY1.RX_SET>
#### p.usbphy1.rx_tog
<link=p.USBPHY1.RX_TOG>
#### p.USBPHY1.CTRL_TOG
<lang=dft>
 (rw)  [1;33m0x400d903c[0m (0x400d9000 + 0x003c)
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
#### usbphy1.ctrl_tog
<link=p.USBPHY1.CTRL_TOG>
#### usbphy1.status
<link=p.USBPHY1.STATUS>
#### p.USBPHY1.DEBUG1_SET
<lang=dft>
 (rw)  [1;33m0x400d9074[0m (0x400d9000 + 0x0074)
UTMI Debug Status Register 1
 (rw) (13)  [0;32mRSVD0[0m  - [12:00] -  Reserved. Note: This bit should remain clear.
 (rw) (02)  [0;32mENTAILADJVD[0m  - [14:13] -  Delay increment of the rise of squelch: 00 = Delay is nominal 01 = Delay is +20
 % 10 = Delay is -20% 11 = Delay is -40%
 (ro) (17)  [0;32mRSVD1[0m  - [31:15] -  Reserved.
</lang>
#### p.USBPHY1.DEBUG1_TOG
<lang=dft>
 (rw)  [1;33m0x400d907c[0m (0x400d9000 + 0x007c)
UTMI Debug Status Register 1
 (rw) (13)  [0;32mRSVD0[0m  - [12:00] -  Reserved. Note: This bit should remain clear.
 (rw) (02)  [0;32mENTAILADJVD[0m  - [14:13] -  Delay increment of the rise of squelch: 00 = Delay is nominal 01 = Delay is +20
 % 10 = Delay is -20% 11 = Delay is -40%
 (ro) (17)  [0;32mRSVD1[0m  - [31:15] -  Reserved.
</lang>
#### p.usbphy2.tx_set
<link=p.USBPHY2.TX_SET>
#### usbphy2.tx_clr
<link=p.USBPHY2.TX_CLR>
#### p.usbphy2.rx_tog
<link=p.USBPHY2.RX_TOG>
#### USBPHY2.DEBUG_CLR
<link=p.USBPHY2.DEBUG_CLR>
#### p.USBPHY2.DEBUG1
<lang=dft>
 (rw)  [1;33m0x400da070[0m (0x400da000 + 0x0070)
UTMI Debug Status Register 1
 (rw) (13)  [0;32mRSVD0[0m  - [12:00] -  Reserved. Note: This bit should remain clear.
 (rw) (02)  [0;32mENTAILADJVD[0m  - [14:13] -  Delay increment of the rise of squelch: 00 = Delay is nominal 01 = Delay is +20
 % 10 = Delay is -20% 11 = Delay is -40%
 (ro) (17)  [0;32mRSVD1[0m  - [31:15] -  Reserved.
</lang>
#### usbphy2.version
<link=p.USBPHY2.VERSION>
#### p.CSU.CSL2
<lang=dft>
 (rw)  [1;33m0x400dc008[0m (0x400dc000 + 0x0008)
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
#### p.csu.csl2
<link=p.CSU.CSL2>
#### p.CSU.CSL14
<lang=dft>
 (rw)  [1;33m0x400dc038[0m (0x400dc000 + 0x0038)
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
#### p.csu.csl14
<link=p.CSU.CSL14>
#### csu.csl23
<link=p.CSU.CSL23>
#### CSU.CSL23
<link=p.CSU.CSL23>
#### p.CSU.CSL29
<lang=dft>
 (rw)  [1;33m0x400dc074[0m (0x400dc000 + 0x0074)
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
#### p.csu.csl29
<link=p.CSU.CSL29>
#### p.CSU.HPCONTROL0
<lang=dft>
 (rw)  [1;33m0x400dc358[0m (0x400dc000 + 0x0358)
HPCONTROL0 register
 (rw) (01)  [0;32mHPC_DMA[0m  - [02:02] -  Indicates the privilege/user mode for the eDMA
      0 - HPC_DMA_0 :
         User mode for the corresponding master
      0x1 - HPC_DMA_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_DMA[0m  - [03:03] -  Lock bit set by the TZ software for the eDMA
      0 - L_DMA_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_DMA_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHPC_LCDIF[0m  - [04:04] -  Indicates the privilege/user mode for the LCDIF
      0 - HPC_LCDIF_0 :
         User mode for the corresponding master
      0x1 - HPC_LCDIF_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_LCDIF[0m  - [05:05] -  Lock bit set by the TZ software for the LCDIF
      0 - L_LCDIF_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_LCDIF_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHPC_CSI[0m  - [06:06] -  Indicates the privilege/user mode for the CSI
      0 - HPC_CSI_0 :
         User mode for the corresponding master
      0x1 - HPC_CSI_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_CSI[0m  - [07:07] -  Lock bit set by the TZ software for the CSI
      0 - L_CSI_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_CSI_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHPC_PXP[0m  - [08:08] -  Indicates the privilege/user mode for the PXP
      0 - HPC_PXP_0 :
         User mode for the corresponding master
      0x1 - HPC_PXP_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_PXP[0m  - [09:09] -  Lock bit set by the TZ software for the PXP
      0 - L_PXP_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_PXP_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHPC_DCP[0m  - [10:10] -  Indicates the privilege/user mode for the DCP
      0 - HPC_DCP_0 :
         User mode for the corresponding master
      0x1 - HPC_DCP_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_DCP[0m  - [11:11] -  Lock bit set by the TZ software for the DCP
      0 - L_DCP_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_DCP_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHPC_ENET[0m  - [14:14] -  Indicates the privilege/user mode for the ENET
      0 - HPC_ENET_0 :
         User mode for the corresponding master
      0x1 - HPC_ENET_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_ENET[0m  - [15:15] -  Lock bit set by the TZ software for the ENET
      0 - L_ENET_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_ENET_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHPC_USDHC1[0m  - [16:16] -  Indicates the privilege/user mode for the USDHC1
      0 - HPC_USDHC1_0 :
         User mode for the corresponding master
      0x1 - HPC_USDHC1_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_USDHC1[0m  - [17:17] -  Lock bit set by the TZ software for the USDHC1
      0 - L_USDHC1_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_USDHC1_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHPC_USDHC2[0m  - [18:18] -  Indicates the privilege/user mode for the USDHC2
      0 - HPC_USDHC2_0 :
         User mode for the corresponding master
      0x1 - HPC_USDHC2_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_USDHC2[0m  - [19:19] -  Lock bit set by the TZ software for the USDHC2.
      0 - L_USDHC2_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_USDHC2_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHPC_TPSMP[0m  - [20:20] -  Indicates the privilege/user mode for the TPSMP
      0 - HPC_TPSMP_0 :
         User mode for the corresponding master
      0x1 - HPC_TPSMP_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_TPSMP[0m  - [21:21] -  Lock bit set by the TZ software for the TPSMP.
      0 - L_TPSMP_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_TPSMP_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHPC_USB[0m  - [22:22] -  Indicates the privilege/user mode for the USB
      0 - HPC_USB_0 :
         User mode for the corresponding master
      0x1 - HPC_USB_1 :
         Supervisor mode for the corresponding master
 (rw) (01)  [0;32mL_USB[0m  - [23:23] -  Lock bit set by the TZ software for the USB.
      0 - L_USB_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_USB_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
</lang>
#### p.TSC.MEASEURE_VALUE
<lang=dft>
 (ro)  [1;33m0x400e0030[0m (0x400e0000 + 0x0030)
Measure Value
 (ro) (12)  [0;32mY_VALUE[0m  - [11:00] -  Y Value
 (ro) (12)  [0;32mX_VALUE[0m  - [27:16] -  X Value
</lang>
#### p.tsc.measeure_value
<link=p.TSC.MEASEURE_VALUE>
#### p.TSC.INT_EN
<lang=dft>
 (rw)  [1;33m0x400e0040[0m (0x400e0000 + 0x0040)
Interrupt Enable
 (rw) (01)  [0;32mMEASURE_INT_EN[0m  - [00:00] -  Measure Interrupt Enable
      0 - MEASURE_INT_EN_0 :
         Disable measure interrupt
      0x1 - MEASURE_INT_EN_1 :
         Enable measure interrupt
 (rw) (01)  [0;32mDETECT_INT_EN[0m  - [04:04] -  Detect Interrupt Enable
      0 - DETECT_INT_EN_0 :
         Disable detect interrupt
      0x1 - DETECT_INT_EN_1 :
         Enable detect interrupt
 (rw) (01)  [0;32mIDLE_SW_INT_EN[0m  - [12:12] -  Idle Software Interrupt Enable
      0 - IDLE_SW_INT_EN_0 :
         Disable idle software interrupt
      0x1 - IDLE_SW_INT_EN_1 :
         Enable idle software interrupt
</lang>
#### p.dma0.cdne
<link=p.DMA0.CDNE>
#### DMA0.SSRT
<link=p.DMA0.SSRT>
#### p.dma0.cerr
<link=p.DMA0.CERR>
#### p.DMA0.INT
<lang=dft>
 (rw)  [1;33m0x400e8024[0m (0x400e8000 + 0x0024)
Interrupt Request Register
 (rw) (01)  [0;32mINT0[0m  - [00:00] -  Interrupt Request 0
      0 - INT0_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT0_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT1[0m  - [01:01] -  Interrupt Request 1
      0 - INT1_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT1_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT2[0m  - [02:02] -  Interrupt Request 2
      0 - INT2_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT2_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT3[0m  - [03:03] -  Interrupt Request 3
      0 - INT3_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT3_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT4[0m  - [04:04] -  Interrupt Request 4
      0 - INT4_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT4_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT5[0m  - [05:05] -  Interrupt Request 5
      0 - INT5_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT5_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT6[0m  - [06:06] -  Interrupt Request 6
      0 - INT6_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT6_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT7[0m  - [07:07] -  Interrupt Request 7
      0 - INT7_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT7_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT8[0m  - [08:08] -  Interrupt Request 8
      0 - INT8_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT8_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT9[0m  - [09:09] -  Interrupt Request 9
      0 - INT9_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT9_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT10[0m  - [10:10] -  Interrupt Request 10
      0 - INT10_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT10_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT11[0m  - [11:11] -  Interrupt Request 11
      0 - INT11_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT11_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT12[0m  - [12:12] -  Interrupt Request 12
      0 - INT12_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT12_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT13[0m  - [13:13] -  Interrupt Request 13
      0 - INT13_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT13_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT14[0m  - [14:14] -  Interrupt Request 14
      0 - INT14_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT14_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT15[0m  - [15:15] -  Interrupt Request 15
      0 - INT15_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT15_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT16[0m  - [16:16] -  Interrupt Request 16
      0 - INT16_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT16_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT17[0m  - [17:17] -  Interrupt Request 17
      0 - INT17_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT17_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT18[0m  - [18:18] -  Interrupt Request 18
      0 - INT18_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT18_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT19[0m  - [19:19] -  Interrupt Request 19
      0 - INT19_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT19_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT20[0m  - [20:20] -  Interrupt Request 20
      0 - INT20_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT20_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT21[0m  - [21:21] -  Interrupt Request 21
      0 - INT21_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT21_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT22[0m  - [22:22] -  Interrupt Request 22
      0 - INT22_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT22_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT23[0m  - [23:23] -  Interrupt Request 23
      0 - INT23_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT23_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT24[0m  - [24:24] -  Interrupt Request 24
      0 - INT24_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT24_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT25[0m  - [25:25] -  Interrupt Request 25
      0 - INT25_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT25_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT26[0m  - [26:26] -  Interrupt Request 26
      0 - INT26_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT26_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT27[0m  - [27:27] -  Interrupt Request 27
      0 - INT27_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT27_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT28[0m  - [28:28] -  Interrupt Request 28
      0 - INT28_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT28_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT29[0m  - [29:29] -  Interrupt Request 29
      0 - INT29_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT29_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT30[0m  - [30:30] -  Interrupt Request 30
      0 - INT30_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT30_1 :
         The interrupt request for corresponding channel is active
 (rw) (01)  [0;32mINT31[0m  - [31:31] -  Interrupt Request 31
      0 - INT31_0 :
         The interrupt request for corresponding channel is cleared
      0x1 - INT31_1 :
         The interrupt request for corresponding channel is active
</lang>
#### DMA0.HRS
<link=p.DMA0.HRS>
#### DMA0.DCHPRI3
<link=p.DMA0.DCHPRI3>
#### DMA0.DCHPRI11
<link=p.DMA0.DCHPRI11>
#### p.DMA0.DCHPRI10
<lang=dft>
 (rw)  [1;33m0x400e8109[0m (0x400e8000 + 0x0109)
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
#### p.dma0.dchpri12
<link=p.DMA0.DCHPRI12>
#### p.DMA0.DCHPRI21
<lang=dft>
 (rw)  [1;33m0x400e8116[0m (0x400e8000 + 0x0116)
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
#### DMA0.DCHPRI24
<link=p.DMA0.DCHPRI24>
#### dma0.dchpri30
<link=p.DMA0.DCHPRI30>
#### p.dma0.dchpri28
<link=p.DMA0.DCHPRI28>
#### DMA0.TCD0_NBYTES_MLNO
<link=p.DMA0.TCD0_NBYTES_MLNO>
#### DMA0.TCD0_DADDR
<link=p.DMA0.TCD0_DADDR>
#### DMA0.TCD0_DLASTSGA
<link=p.DMA0.TCD0_DLASTSGA>
#### dma0.tcd0_biter_elinkno
<link=p.DMA0.TCD0_BITER_ELINKNO>
#### p.DMA0.TCD1_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e903e[0m (0x400e8000 + 0x103e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd2_slast
<link=p.DMA0.TCD2_SLAST>
#### DMA0.TCD2_BITER_ELINKNO
<link=p.DMA0.TCD2_BITER_ELINKNO>
#### p.dma0.tcd3_saddr
<link=p.DMA0.TCD3_SADDR>
#### p.dma0.tcd3_attr
<link=p.DMA0.TCD3_ATTR>
#### p.DMA0.TCD3_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e907e[0m (0x400e8000 + 0x107e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd4_doff
<link=p.DMA0.TCD4_DOFF>
#### p.dma0.tcd4_csr
<link=p.DMA0.TCD4_CSR>
#### p.DMA0.TCD5_SADDR
<lang=dft>
 (rw)  [1;33m0x400e90a0[0m (0x400e8000 + 0x10a0)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.dma0.tcd5_nbytes_mlno
<link=p.DMA0.TCD5_NBYTES_MLNO>
#### dma0.tcd5_nbytes_mloffno
<link=p.DMA0.TCD5_NBYTES_MLOFFNO>
#### DMA0.TCD5_NBYTES_MLOFFYES
<link=p.DMA0.TCD5_NBYTES_MLOFFYES>
#### p.dma0.tcd5_biter_elinkno
<link=p.DMA0.TCD5_BITER_ELINKNO>
#### p.dma0.tcd6_attr
<link=p.DMA0.TCD6_ATTR>
#### dma0.tcd6_nbytes_mloffno
<link=p.DMA0.TCD6_NBYTES_MLOFFNO>
#### DMA0.TCD6_NBYTES_MLOFFNO
<link=p.DMA0.TCD6_NBYTES_MLOFFNO>
#### DMA0.TCD6_CITER_ELINKYES
<link=p.DMA0.TCD6_CITER_ELINKYES>
#### p.DMA0.TCD7_SOFF
<lang=dft>
 (rw)  [1;33m0x400e90e4[0m (0x400e8000 + 0x10e4)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### dma0.tcd7_nbytes_mloffyes
<link=p.DMA0.TCD7_NBYTES_MLOFFYES>
#### p.dma0.tcd8_saddr
<link=p.DMA0.TCD8_SADDR>
#### dma0.tcd8_soff
<link=p.DMA0.TCD8_SOFF>
#### p.DMA0.TCD8_SLAST
<lang=dft>
 (rw)  [1;33m0x400e910c[0m (0x400e8000 + 0x110c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### dma0.tcd8_biter_elinkyes
<link=p.DMA0.TCD8_BITER_ELINKYES>
#### dma0.tcd9_nbytes_mloffyes
<link=p.DMA0.TCD9_NBYTES_MLOFFYES>
#### p.DMA0.TCD9_SLAST
<lang=dft>
 (rw)  [1;33m0x400e912c[0m (0x400e8000 + 0x112c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### DMA0.TCD9_DADDR
<link=p.DMA0.TCD9_DADDR>
#### dma0.tcd9_doff
<link=p.DMA0.TCD9_DOFF>
#### p.dma0.tcd9_dlastsga
<link=p.DMA0.TCD9_DLASTSGA>
#### p.dma0.tcd9_biter_elinkno
<link=p.DMA0.TCD9_BITER_ELINKNO>
#### dma0.tcd10_csr
<link=p.DMA0.TCD10_CSR>
#### p.dma0.tcd10_biter_elinkno
<link=p.DMA0.TCD10_BITER_ELINKNO>
#### dma0.tcd11_soff
<link=p.DMA0.TCD11_SOFF>
#### p.dma0.tcd11_citer_elinkyes
<link=p.DMA0.TCD11_CITER_ELINKYES>
#### dma0.tcd11_citer_elinkyes
<link=p.DMA0.TCD11_CITER_ELINKYES>
#### dma0.tcd12_doff
<link=p.DMA0.TCD12_DOFF>
#### dma0.tcd13_nbytes_mloffno
<link=p.DMA0.TCD13_NBYTES_MLOFFNO>
#### dma0.tcd13_nbytes_mloffyes
<link=p.DMA0.TCD13_NBYTES_MLOFFYES>
#### dma0.tcd13_citer_elinkno
<link=p.DMA0.TCD13_CITER_ELINKNO>
#### p.DMA0.TCD13_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e91b6[0m (0x400e8000 + 0x11b6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD14_SLAST
<lang=dft>
 (rw)  [1;33m0x400e91cc[0m (0x400e8000 + 0x11cc)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.DMA0.TCD14_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e91de[0m (0x400e8000 + 0x11de)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD15_SLAST
<lang=dft>
 (rw)  [1;33m0x400e91ec[0m (0x400e8000 + 0x11ec)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### DMA0.TCD15_CITER_ELINKNO
<link=p.DMA0.TCD15_CITER_ELINKNO>
#### dma0.tcd16_soff
<link=p.DMA0.TCD16_SOFF>
#### DMA0.TCD16_SLAST
<link=p.DMA0.TCD16_SLAST>
#### dma0.tcd17_slast
<link=p.DMA0.TCD17_SLAST>
#### DMA0.TCD17_DADDR
<link=p.DMA0.TCD17_DADDR>
#### p.DMA0.TCD17_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9234[0m (0x400e8000 + 0x1234)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### dma0.tcd17_doff
<link=p.DMA0.TCD17_DOFF>
#### p.dma0.tcd17_citer_elinkyes
<link=p.DMA0.TCD17_CITER_ELINKYES>
#### dma0.tcd17_citer_elinkyes
<link=p.DMA0.TCD17_CITER_ELINKYES>
#### p.DMA0.TCD18_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9248[0m (0x400e8000 + 0x1248)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### dma0.tcd18_nbytes_mloffno
<link=p.DMA0.TCD18_NBYTES_MLOFFNO>
#### p.DMA0.TCD18_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e925e[0m (0x400e8000 + 0x125e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd18_biter_elinkyes
<link=p.DMA0.TCD18_BITER_ELINKYES>
#### p.DMA0.TCD19_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9260[0m (0x400e8000 + 0x1260)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### DMA0.TCD19_NBYTES_MLOFFYES
<link=p.DMA0.TCD19_NBYTES_MLOFFYES>
#### DMA0.TCD19_CITER_ELINKNO
<link=p.DMA0.TCD19_CITER_ELINKNO>
#### p.dma0.tcd20_saddr
<link=p.DMA0.TCD20_SADDR>
#### p.DMA0.TCD20_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9296[0m (0x400e8000 + 0x1296)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD21_SADDR
<lang=dft>
 (rw)  [1;33m0x400e92a0[0m (0x400e8000 + 0x12a0)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.dma0.tcd21_saddr
<link=p.DMA0.TCD21_SADDR>
#### p.DMA0.TCD21_SLAST
<lang=dft>
 (rw)  [1;33m0x400e92ac[0m (0x400e8000 + 0x12ac)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.DMA0.TCD21_DADDR
<lang=dft>
 (rw)  [1;33m0x400e92b0[0m (0x400e8000 + 0x12b0)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.DMA0.TCD21_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e92b8[0m (0x400e8000 + 0x12b8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.DMA0.TCD22_DADDR
<lang=dft>
 (rw)  [1;33m0x400e92d0[0m (0x400e8000 + 0x12d0)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.dma0.tcd22_daddr
<link=p.DMA0.TCD22_DADDR>
#### p.DMA0.TCD23_ATTR
<lang=dft>
 (rw)  [1;33m0x400e92e6[0m (0x400e8000 + 0x12e6)
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
#### p.DMA0.TCD24_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9300[0m (0x400e8000 + 0x1300)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.dma0.tcd24_attr
<link=p.DMA0.TCD24_ATTR>
#### p.dma0.tcd24_nbytes_mloffno
<link=p.DMA0.TCD24_NBYTES_MLOFFNO>
#### DMA0.TCD24_CITER_ELINKYES
<link=p.DMA0.TCD24_CITER_ELINKYES>
#### DMA0.TCD24_DLASTSGA
<link=p.DMA0.TCD24_DLASTSGA>
#### p.dma0.tcd24_biter_elinkyes
<link=p.DMA0.TCD24_BITER_ELINKYES>
#### p.dma0.tcd25_biter_elinkyes
<link=p.DMA0.TCD25_BITER_ELINKYES>
#### p.DMA0.TCD26_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9344[0m (0x400e8000 + 0x1344)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.dma0.tcd26_soff
<link=p.DMA0.TCD26_SOFF>
#### p.DMA0.TCD26_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9346[0m (0x400e8000 + 0x1346)
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
#### dma0.tcd26_doff
<link=p.DMA0.TCD26_DOFF>
#### dma0.tcd27_nbytes_mloffno
<link=p.DMA0.TCD27_NBYTES_MLOFFNO>
#### p.dma0.tcd27_slast
<link=p.DMA0.TCD27_SLAST>
#### dma0.tcd27_slast
<link=p.DMA0.TCD27_SLAST>
#### dma0.tcd27_doff
<link=p.DMA0.TCD27_DOFF>
#### dma0.tcd28_saddr
<link=p.DMA0.TCD28_SADDR>
#### p.dma0.tcd28_soff
<link=p.DMA0.TCD28_SOFF>
#### dma0.tcd28_doff
<link=p.DMA0.TCD28_DOFF>
#### p.DMA0.TCD28_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e939e[0m (0x400e8000 + 0x139e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD29_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e93a8[0m (0x400e8000 + 0x13a8)
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
#### dma0.tcd29_nbytes_mloffno
<link=p.DMA0.TCD29_NBYTES_MLOFFNO>
#### p.dma0.tcd29_slast
<link=p.DMA0.TCD29_SLAST>
#### dma0.tcd29_doff
<link=p.DMA0.TCD29_DOFF>
#### dma0.tcd29_biter_elinkyes
<link=p.DMA0.TCD29_BITER_ELINKYES>
#### DMA0.TCD30_SOFF
<link=p.DMA0.TCD30_SOFF>
#### p.DMA0.TCD30_ATTR
<lang=dft>
 (rw)  [1;33m0x400e93c6[0m (0x400e8000 + 0x13c6)
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
#### dma0.tcd30_nbytes_mlno
<link=p.DMA0.TCD30_NBYTES_MLNO>
#### dma0.tcd30_slast
<link=p.DMA0.TCD30_SLAST>
#### dma0.tcd30_daddr
<link=p.DMA0.TCD30_DADDR>
#### DMA0.TCD30_DADDR
<link=p.DMA0.TCD30_DADDR>
#### DMA0.TCD30_DLASTSGA
<link=p.DMA0.TCD30_DLASTSGA>
#### p.DMA0.TCD30_CSR
<lang=dft>
 (rw)  [1;33m0x400e93dc[0m (0x400e8000 + 0x13dc)
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
#### p.dma0.tcd31_saddr
<link=p.DMA0.TCD31_SADDR>
#### p.dma0.tcd31_attr
<link=p.DMA0.TCD31_ATTR>
#### DMA0.TCD31_NBYTES_MLOFFYES
<link=p.DMA0.TCD31_NBYTES_MLOFFYES>
#### p.dma0.tcd31_citer_elinkyes
<link=p.DMA0.TCD31_CITER_ELINKYES>
#### dma0.tcd31_citer_elinkyes
<link=p.DMA0.TCD31_CITER_ELINKYES>
#### DMA0.TCD31_DLASTSGA
<link=p.DMA0.TCD31_DLASTSGA>
#### p.dmamux.chcfg[6]
<link=p.DMAMUX.CHCFG[6]>
#### dmamux.chcfg[9]
<link=p.DMAMUX.CHCFG[9]>
#### p.DMAMUX.CHCFG[17]
<lang=dft>
 (rw)  [1;33m0x400ec044[0m (0x400ec000 + 0x0044)
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
#### p.DMAMUX.CHCFG[23]
<lang=dft>
 (rw)  [1;33m0x400ec05c[0m (0x400ec000 + 0x005c)
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
#### p.DMAMUX.CHCFG[26]
<lang=dft>
 (rw)  [1;33m0x400ec068[0m (0x400ec000 + 0x0068)
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
#### p.dmamux.chcfg[27]
<link=p.DMAMUX.CHCFG[27]>
#### p.DMAMUX.CHCFG[29]
<lang=dft>
 (rw)  [1;33m0x400ec074[0m (0x400ec000 + 0x0074)
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
#### p.dmamux.chcfg[30]
<link=p.DMAMUX.CHCFG[30]>
#### p.gpc.imr3
<link=p.GPC.IMR3>
#### p.gpc.isr3
<link=p.GPC.ISR3>
#### gpc.isr3
<link=p.GPC.ISR3>
#### p.PGC.MEGA_CTRL
<lang=dft>
 (rw)  [1;33m0x400f4220[0m (0x400f4000 + 0x0220)
PGC Mega Control Register
 (rw) (01)  [0;32mPCR[0m  - [00:00] -  Power Control PCR must not change from power-down request (pdn_req) assertion u
 ntil the target subsystem is completely powered up
      0 - PCR_0 :
         Do not switch off power even if pdn_req is asserted.
      0x1 - PCR_1 :
         Switch off power when pdn_req is asserted.
</lang>
#### pgc.mega_pdnscr
<link=p.PGC.MEGA_PDNSCR>
#### p.src.gpr5
<link=p.SRC.GPR5>
#### SRC.GPR8
<link=p.SRC.GPR8>
#### p.CCM.CSCMR1
<lang=dft>
 (rw)  [1;33m0x400fc01c[0m (0x400fc000 + 0x001c)
CCM Serial Clock Multiplexer Register 1
 (rw) (06)  [0;32mPERCLK_PODF[0m  - [05:00] -  Divider for perclk podf.
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
 (rw) (01)  [0;32mPERCLK_CLK_SEL[0m  - [06:06] -  Selector for the perclk clock multiplexor
      0 - PERCLK_CLK_SEL_0 :
         derive clock from ipg clk root
      0x1 - PERCLK_CLK_SEL_1 :
         derive clock from osc_clk
 (rw) (02)  [0;32mSAI1_CLK_SEL[0m  - [11:10] -  Selector for sai1 clock multiplexer
      0 - SAI1_CLK_SEL_0 :
         derive clock from PLL3 PFD2
      0x1 - SAI1_CLK_SEL_1 :
         derive clock from PLL5
      0x2 - SAI1_CLK_SEL_2 :
         derive clock from PLL4
 (rw) (02)  [0;32mSAI2_CLK_SEL[0m  - [13:12] -  Selector for sai2 clock multiplexer
      0 - SAI2_CLK_SEL_0 :
         derive clock from PLL3 PFD2
      0x1 - SAI2_CLK_SEL_1 :
         derive clock from PLL5
      0x2 - SAI2_CLK_SEL_2 :
         derive clock from PLL4
 (rw) (02)  [0;32mSAI3_CLK_SEL[0m  - [15:14] -  Selector for sai3/adc1/adc2 clock multiplexer
      0 - SAI3_CLK_SEL_0 :
         derive clock from PLL3 PFD2
      0x1 - SAI3_CLK_SEL_1 :
         derive clock from PLL5
      0x2 - SAI3_CLK_SEL_2 :
         derive clock from PLL4
 (rw) (01)  [0;32mUSDHC1_CLK_SEL[0m  - [16:16] -  Selector for usdhc1 clock multiplexer
      0 - USDHC1_CLK_SEL_0 :
         derive clock from PLL2 PFD2
      0x1 - USDHC1_CLK_SEL_1 :
         derive clock from PLL2 PFD0
 (rw) (01)  [0;32mUSDHC2_CLK_SEL[0m  - [17:17] -  Selector for usdhc2 clock multiplexer
      0 - USDHC2_CLK_SEL_0 :
         derive clock from PLL2 PFD2
      0x1 - USDHC2_CLK_SEL_1 :
         derive clock from PLL2 PFD0
 (rw) (03)  [0;32mFLEXSPI_PODF[0m  - [25:23] -  Divider for flexspi clock root.
      0 - FLEXSPI_PODF_0 :
         divide by 1
      0x1 - FLEXSPI_PODF_1 :
         divide by 2
      0x2 - FLEXSPI_PODF_2 :
         divide by 3
      0x3 - FLEXSPI_PODF_3 :
         divide by 4
      0x4 - FLEXSPI_PODF_4 :
         divide by 5
      0x5 - FLEXSPI_PODF_5 :
         divide by 6
      0x6 - FLEXSPI_PODF_6 :
         divide by 7
      0x7 - FLEXSPI_PODF_7 :
         divide by 8
 (rw) (02)  [0;32mFLEXSPI_CLK_SEL[0m  - [30:29] -  Selector for flexspi clock multiplexer
      0 - FLEXSPI_CLK_SEL_0 :
         derive clock from semc_clk_root_pre
      0x1 - FLEXSPI_CLK_SEL_1 :
         derive clock from pll3_sw_clk
      0x2 - FLEXSPI_CLK_SEL_2 :
         derive clock from PLL2 PFD2
      0x3 - FLEXSPI_CLK_SEL_3 :
         derive clock from PLL3 PFD0
</lang>
#### p.CCM.CDCDR
<lang=dft>
 (rw)  [1;33m0x400fc030[0m (0x400fc000 + 0x0030)
CCM D1 Clock Divider Register
 (rw) (02)  [0;32mFLEXIO1_CLK_SEL[0m  - [08:07] -  Selector for flexio1 clock multiplexer
      0 - FLEXIO1_CLK_SEL_0 :
         derive clock from PLL4
      0x1 - FLEXIO1_CLK_SEL_1 :
         derive clock from PLL3 PFD2
      0x2 - FLEXIO1_CLK_SEL_2 :
         derive clock from PLL5
      0x3 - FLEXIO1_CLK_SEL_3 :
         derive clock from pll3_sw_clk
 (rw) (03)  [0;32mFLEXIO1_CLK_PODF[0m  - [11:09] -  Divider for flexio1 clock podf. Divider should be updated when output clock is 
 gated.
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
 (rw) (03)  [0;32mFLEXIO1_CLK_PRED[0m  - [14:12] -  Divider for flexio1 clock pred. Divider should be updated when output clock is 
 gated.
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
 (rw) (02)  [0;32mSPDIF0_CLK_SEL[0m  - [21:20] -  Selector for spdif0 clock multiplexer
      0 - SPDIF0_CLK_SEL_0 :
         derive clock from PLL4
      0x1 - SPDIF0_CLK_SEL_1 :
         derive clock from PLL3 PFD2
      0x2 - SPDIF0_CLK_SEL_2 :
         derive clock from PLL5
      0x3 - SPDIF0_CLK_SEL_3 :
         derive clock from pll3_sw_clk
 (rw) (03)  [0;32mSPDIF0_CLK_PODF[0m  - [24:22] -  Divider for spdif0 clock podf. Divider should be updated when output clock is g
 ated.
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
 (rw) (03)  [0;32mSPDIF0_CLK_PRED[0m  - [27:25] -  Divider for spdif0 clock pred. Divider should be updated when output clock is g
 ated.
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
</lang>
#### ccm.cdcdr
<link=p.CCM.CDCDR>
#### p.CCM.CISR
<lang=dft>
 (rw)  [1;33m0x400fc058[0m (0x400fc000 + 0x0058)
CCM Interrupt Status Register
 (rw) (01)  [0;32mLRF_PLL[0m  - [00:00] -  CCM interrupt request 2 generated due to lock of all enabled and not bypaseed P
 LLs
      0 - LRF_PLL_0 :
         interrupt is not generated due to lock ready of all enabled and not byp
         aseed PLLs
      0x1 - LRF_PLL_1 :
         interrupt generated due to lock ready of all enabled and not bypaseed P
         LLs
 (rw) (01)  [0;32mCOSC_READY[0m  - [06:06] -  CCM interrupt request 2 generated due to on board oscillator ready, i
      0 - COSC_READY_0 :
         interrupt is not generated due to on board oscillator ready
      0x1 - COSC_READY_1 :
         interrupt generated due to on board oscillator ready
 (rw) (01)  [0;32mSEMC_PODF_LOADED[0m  - [17:17] -  CCM interrupt request 1 generated due to frequency change of semc_podf
      0 - SEMC_PODF_LOADED_0 :
         interrupt is not generated due to frequency change of semc_podf
      0x1 - SEMC_PODF_LOADED_1 :
         interrupt generated due to frequency change of semc_podf
 (rw) (01)  [0;32mPERIPH2_CLK_SEL_LOADED[0m  - [19:19] -  CCM interrupt request 1 generated due to frequency change of periph2_clk_sel
      0 - PERIPH2_CLK_SEL_LOADED_0 :
         interrupt is not generated due to frequency change of periph2_clk_sel
      0x1 - PERIPH2_CLK_SEL_LOADED_1 :
         interrupt generated due to frequency change of periph2_clk_sel
 (rw) (01)  [0;32mAHB_PODF_LOADED[0m  - [20:20] -  CCM interrupt request 1 generated due to frequency change of ahb_podf
      0 - AHB_PODF_LOADED_0 :
         interrupt is not generated due to frequency change of ahb_podf
      0x1 - AHB_PODF_LOADED_1 :
         interrupt generated due to frequency change of ahb_podf
 (rw) (01)  [0;32mPERIPH_CLK_SEL_LOADED[0m  - [22:22] -  CCM interrupt request 1 generated due to update of periph_clk_sel.
      0 - PERIPH_CLK_SEL_LOADED_0 :
         interrupt is not generated due to update of periph_clk_sel.
      0x1 - PERIPH_CLK_SEL_LOADED_1 :
         interrupt generated due to update of periph_clk_sel.
 (rw) (01)  [0;32mARM_PODF_LOADED[0m  - [26:26] -  CCM interrupt request 1 generated due to frequency change of arm_podf
      0 - ARM_PODF_LOADED_0 :
         interrupt is not generated due to frequency change of arm_podf
      0x1 - ARM_PODF_LOADED_1 :
         interrupt generated due to frequency change of arm_podf
</lang>
#### ccm.ccgr0
<link=p.CCM.CCGR0>
#### p.ccm.ccgr2
<link=p.CCM.CCGR2>
#### CCM.CCGR6
<link=p.CCM.CCGR6>
#### romc.rompatch5d
<link=p.ROMC.ROMPATCH5D>
#### p.romc.rompatch4d
<link=p.ROMC.ROMPATCH4D>
#### p.ROMC.ROMPATCH1D
<lang=dft>
 (rw)  [1;33m0x401800ec[0m (0x40180000 + 0x00ec)
ROMC Data Registers
 (rw) (32)  [0;32mDATAX[0m  - [31:00] -  Data Fix Registers - Stores the data used for 1-word data fix operations
</lang>
#### p.romc.rompatch3a
<link=p.ROMC.ROMPATCH3A>
#### p.ROMC.ROMPATCH6A
<lang=dft>
 (rw)  [1;33m0x40180118[0m (0x40180000 + 0x0118)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### p.romc.rompatch8a
<link=p.ROMC.ROMPATCH8A>
#### romc.rompatch9a
<link=p.ROMC.ROMPATCH9A>
#### p.lpuart2.param
<link=p.LPUART2.PARAM>
#### lpuart2.stat
<link=p.LPUART2.STAT>
#### p.lpuart2.match
<link=p.LPUART2.MATCH>
#### lpuart2.match
<link=p.LPUART2.MATCH>
#### p.LPUART3.BAUD
<lang=dft>
 (rw)  [1;33m0x4018c010[0m (0x4018c000 + 0x0010)
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
#### p.lpuart5.baud
<link=p.LPUART5.BAUD>
#### lpuart5.stat
<link=p.LPUART5.STAT>
#### p.LPUART5.DATA
<lang=dft>
 (rw)  [1;33m0x4019401c[0m (0x40194000 + 0x001c)
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
#### p.LPUART6.GLOBAL
<lang=dft>
 (rw)  [1;33m0x40198008[0m (0x40198000 + 0x0008)
LPUART Global Register
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Software Reset
      0 - RST_0 :
         Module is not reset.
      0x1 - RST_1 :
         Module is reset.
</lang>
#### p.lpuart6.data
<link=p.LPUART6.DATA>
#### p.lpuart7
<link=p.LPUART7>
#### p.lpuart7.verid
<link=p.LPUART7.VERID>
#### lpuart7.param
<link=p.LPUART7.PARAM>
#### LPUART7.PARAM
<link=p.LPUART7.PARAM>
#### p.LPUART7.CTRL
<lang=dft>
 (rw)  [1;33m0x4019c018[0m (0x4019c000 + 0x0018)
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
#### lpuart7.data
<link=p.LPUART7.DATA>
#### p.lpuart7.match
<link=p.LPUART7.MATCH>
#### p.LPUART7.MODIR
<lang=dft>
 (rw)  [1;33m0x4019c024[0m (0x4019c000 + 0x0024)
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
#### p.LPUART7.FIFO
<lang=dft>
 (rw)  [1;33m0x4019c028[0m (0x4019c000 + 0x0028)
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
#### p.lpuart8.baud
<link=p.LPUART8.BAUD>
#### p.lpuart8.modir
<link=p.LPUART8.MODIR>
#### LPUART8.MODIR
<link=p.LPUART8.MODIR>
#### flexio1.verid
<link=p.FLEXIO1.VERID>
#### p.FLEXIO1.TIMSTAT
<lang=dft>
 (rw)  [1;33m0x401ac018[0m (0x401ac000 + 0x0018)
Timer Status Register
 (rw) (04)  [0;32mTSF[0m  - [03:00] -  Timer Status Flags
</lang>
#### flexio1.shiftctl[1]
<link=p.FLEXIO1.SHIFTCTL[1]>
#### p.flexio1.shiftbuf[1]
<link=p.FLEXIO1.SHIFTBUF[1]>
#### flexio1.shiftbufbis[3]
<link=p.FLEXIO1.SHIFTBUFBIS[3]>
#### flexio1.shiftbufbys[0]
<link=p.FLEXIO1.SHIFTBUFBYS[0]>
#### FLEXIO1.SHIFTBUFBBS[2]
<link=p.FLEXIO1.SHIFTBUFBBS[2]>
#### p.flexio1.timctl[0]
<link=p.FLEXIO1.TIMCTL[0]>
#### flexio1.timctl[0]
<link=p.FLEXIO1.TIMCTL[0]>
#### FLEXIO1.TIMCTL[0]
<link=p.FLEXIO1.TIMCTL[0]>
#### p.FLEXIO1.TIMCMP[0]
<lang=dft>
 (rw)  [1;33m0x401ac500[0m (0x401ac000 + 0x0500)
Timer Compare N Register
 (rw) (16)  [0;32mCMP[0m  - [15:00] -  Timer Compare Value
</lang>
#### FLEXIO1.SHIFTBUFNBS[1]
<link=p.FLEXIO1.SHIFTBUFNBS[1]>
#### flexio1.shiftbufnbs[3]
<link=p.FLEXIO1.SHIFTBUFNBS[3]>
#### flexio1.shiftbufhws[3]
<link=p.FLEXIO1.SHIFTBUFHWS[3]>
#### FLEXIO1.SHIFTBUFNIS[0]
<link=p.FLEXIO1.SHIFTBUFNIS[0]>
#### p.FLEXIO2.VERID
<lang=dft>
 (ro)  [1;33m0x401b0000[0m (0x401b0000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Specification Number
      0 - FEATURE_0 :
         Standard features implemented.
      0x1 - FEATURE_1 :
         Supports state, logic and parallel modes.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### p.flexio2.verid
<link=p.FLEXIO2.VERID>
#### FLEXIO2.PARAM
<link=p.FLEXIO2.PARAM>
#### p.flexio2.ctrl
<link=p.FLEXIO2.CTRL>
#### p.FLEXIO2.SHIFTSTAT
<lang=dft>
 (rw)  [1;33m0x401b0010[0m (0x401b0000 + 0x0010)
Shifter Status Register
 (rw) (04)  [0;32mSSF[0m  - [03:00] -  Shifter Status Flag
</lang>
#### p.FLEXIO2.SHIFTERR
<lang=dft>
 (rw)  [1;33m0x401b0014[0m (0x401b0000 + 0x0014)
Shifter Error Register
 (rw) (04)  [0;32mSEF[0m  - [03:00] -  Shifter Error Flags
</lang>
#### p.flexio2.shiftcfg[2]
<link=p.FLEXIO2.SHIFTCFG[2]>
#### p.FLEXIO2.SHIFTBUFBIS[2]
<lang=dft>
 (rw)  [1;33m0x401b0288[0m (0x401b0000 + 0x0288)
Shifter Buffer N Bit Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBIS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO2.SHIFTBUFBYS[1]
<link=p.FLEXIO2.SHIFTBUFBYS[1]>
#### flexio2.shiftbufbys[3]
<link=p.FLEXIO2.SHIFTBUFBYS[3]>
#### p.flexio2.shiftbufbbs[0]
<link=p.FLEXIO2.SHIFTBUFBBS[0]>
#### FLEXIO2.SHIFTBUFBBS[0]
<link=p.FLEXIO2.SHIFTBUFBBS[0]>
#### flexio2.shiftbufbbs[2]
<link=p.FLEXIO2.SHIFTBUFBBS[2]>
#### FLEXIO2.TIMCFG[2]
<link=p.FLEXIO2.TIMCFG[2]>
#### flexio2.timcmp[3]
<link=p.FLEXIO2.TIMCMP[3]>
#### FLEXIO2.TIMCMP[3]
<link=p.FLEXIO2.TIMCMP[3]>
#### FLEXIO2.SHIFTBUFHWS[1]
<link=p.FLEXIO2.SHIFTBUFHWS[1]>
#### p.flexio2.shiftbufhws[3]
<link=p.FLEXIO2.SHIFTBUFHWS[3]>
#### flexio2.shiftbufhws[3]
<link=p.FLEXIO2.SHIFTBUFHWS[3]>
#### FLEXIO3.VERID
<link=p.FLEXIO3.VERID>
#### p.FLEXIO3.PARAM
<lang=dft>
 (ro)  [1;33m0x42020004[0m (0x42020000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mSHIFTER[0m  - [07:00] -  Shifter Number
 (ro) (08)  [0;32mTIMER[0m  - [15:08] -  Timer Number
 (ro) (08)  [0;32mPIN[0m  - [23:16] -  Pin Number
 (ro) (08)  [0;32mTRIGGER[0m  - [31:24] -  Trigger Number
</lang>
#### flexio3.param
<link=p.FLEXIO3.PARAM>
#### p.flexio3.shiftstat
<link=p.FLEXIO3.SHIFTSTAT>
#### FLEXIO3.SHIFTSTAT
<link=p.FLEXIO3.SHIFTSTAT>
#### p.FLEXIO3.SHIFTERR
<lang=dft>
 (rw)  [1;33m0x42020014[0m (0x42020000 + 0x0014)
Shifter Error Register
 (rw) (04)  [0;32mSEF[0m  - [03:00] -  Shifter Error Flags
</lang>
#### FLEXIO3.SHIFTERR
<link=p.FLEXIO3.SHIFTERR>
#### p.flexio3.shiftsien
<link=p.FLEXIO3.SHIFTSIEN>
#### flexio3.shifteien
<link=p.FLEXIO3.SHIFTEIEN>
#### flexio3.timien
<link=p.FLEXIO3.TIMIEN>
#### p.flexio3.shiftctl[2]
<link=p.FLEXIO3.SHIFTCTL[2]>
#### flexio3.shiftbuf[1]
<link=p.FLEXIO3.SHIFTBUF[1]>
#### flexio3.shiftbufbis[2]
<link=p.FLEXIO3.SHIFTBUFBIS[2]>
#### p.FLEXIO3.SHIFTBUFBYS[0]
<lang=dft>
 (rw)  [1;33m0x42020300[0m (0x42020000 + 0x0300)
Shifter Buffer N Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBYS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufbbs[0]
<link=p.FLEXIO3.SHIFTBUFBBS[0]>
#### FLEXIO3.SHIFTBUFBBS[1]
<link=p.FLEXIO3.SHIFTBUFBBS[1]>
#### p.FLEXIO3.TIMCFG[2]
<lang=dft>
 (rw)  [1;33m0x42020488[0m (0x42020000 + 0x0488)
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
#### flexio3.timcmp[2]
<link=p.FLEXIO3.TIMCMP[2]>
#### p.FLEXIO3.SHIFTBUFHWS[0]
<lang=dft>
 (rw)  [1;33m0x42020700[0m (0x42020000 + 0x0700)
Shifter Buffer N Half Word Swapped Register
 (rw) (32)  [0;32mSHIFTBUFHWS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufhws[1]
<link=p.FLEXIO3.SHIFTBUFHWS[1]>
#### FLEXIO3.SHIFTBUFHWS[3]
<link=p.FLEXIO3.SHIFTBUFHWS[3]>
#### GPIO1.ICR2
<link=p.GPIO1.ICR2>
#### gpio1.edge_sel
<link=p.GPIO1.EDGE_SEL>
#### p.gpio5.icr2
<link=p.GPIO5.ICR2>
#### p.gpio5.dr_set
<link=p.GPIO5.DR_SET>
#### p.gpio2.gdir
<link=p.GPIO2.GDIR>
#### p.GPIO3.PSR
<lang=dft>
 (ro)  [1;33m0x401c0008[0m (0x401c0000 + 0x0008)
GPIO pad status register
 (ro) (32)  [0;32mPSR[0m  - [31:00] -  PSR
</lang>
#### gpio3.icr2
<link=p.GPIO3.ICR2>
#### p.GPIO3.IMR
<lang=dft>
 (rw)  [1;33m0x401c0014[0m (0x401c0000 + 0x0014)
GPIO interrupt mask register
 (rw) (32)  [0;32mIMR[0m  - [31:00] -  IMR
</lang>
#### p.GPIO3.ISR
<lang=dft>
 (rw)  [1;33m0x401c0018[0m (0x401c0000 + 0x0018)
GPIO interrupt status register
 (rw) (32)  [0;32mISR[0m  - [31:00] -  ISR
</lang>
#### gpio3.dr_clear
<link=p.GPIO3.DR_CLEAR>
#### p.gpio3.dr_toggle
<link=p.GPIO3.DR_TOGGLE>
#### GPIO4.ICR2
<link=p.GPIO4.ICR2>
#### p.GPIO4.ISR
<lang=dft>
 (rw)  [1;33m0x401c4018[0m (0x401c4000 + 0x0018)
GPIO interrupt status register
 (rw) (32)  [0;32mISR[0m  - [31:00] -  ISR
</lang>
#### gpio4.dr_toggle
<link=p.GPIO4.DR_TOGGLE>
#### GPIO6.DR
<link=p.GPIO6.DR>
#### gpio7.isr
<link=p.GPIO7.ISR>
#### GPIO8.DR
<link=p.GPIO8.DR>
#### GPIO9.PSR
<link=p.GPIO9.PSR>
#### p.GPIO9.ICR2
<lang=dft>
 (rw)  [1;33m0x4200c010[0m (0x4200c000 + 0x0010)
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
#### p.gpio9.imr
<link=p.GPIO9.IMR>
#### p.GPIO9.ISR
<lang=dft>
 (rw)  [1;33m0x4200c018[0m (0x4200c000 + 0x0018)
GPIO interrupt status register
 (rw) (32)  [0;32mISR[0m  - [31:00] -  ISR
</lang>
#### p.gpio9.dr_set
<link=p.GPIO9.DR_SET>
#### p.CAN1
<lang=dft>
base: 0x401d0000
CRCR            CTRL1           CTRL2           DBG1            
DBG2            ECR             ESR1            ESR2            
GFWR            IFLAG1          IFLAG2          IMASK1          
IMASK2          MCR             RX14MASK        RX15MASK        
RXFGMASK        RXFIR           RXIMR0          RXIMR1          
RXIMR10         RXIMR11         RXIMR12         RXIMR13         
RXIMR14         RXIMR15         RXIMR16         RXIMR17         
RXIMR18         RXIMR19         RXIMR2          RXIMR20         
RXIMR21         RXIMR22         RXIMR23         RXIMR24         
RXIMR25         RXIMR26         RXIMR27         RXIMR28         
RXIMR29         RXIMR3          RXIMR30         RXIMR31         
RXIMR32         RXIMR33         RXIMR34         RXIMR35         
RXIMR36         RXIMR37         RXIMR38         RXIMR39         
RXIMR4          RXIMR40         RXIMR41         RXIMR42         
RXIMR43         RXIMR44         RXIMR45         RXIMR46         
RXIMR47         RXIMR48         RXIMR49         RXIMR5          
RXIMR50         RXIMR51         RXIMR52         RXIMR53         
RXIMR54         RXIMR55         RXIMR56         RXIMR57         
RXIMR58         RXIMR59         RXIMR6          RXIMR60         
RXIMR61         RXIMR62         RXIMR63         RXIMR7          
RXIMR8          RXIMR9          RXMGMASK        TIMER           
输入 p.CAN1.{reg_name} 以查看寄存器的详细信息
type p.CAN1.{reg_name} to check details of registers
</lang>
#### can1.mcr
<link=p.CAN1.MCR>
#### CAN1.ESR1
<link=p.CAN1.ESR1>
#### can1.dbg1
<link=p.CAN1.DBG1>
#### p.can1.rximr8
<link=p.CAN1.RXIMR8>
#### can1.rximr14
<link=p.CAN1.RXIMR14>
#### CAN1.RXIMR17
<link=p.CAN1.RXIMR17>
#### CAN1.RXIMR31
<link=p.CAN1.RXIMR31>
#### can1.rximr32
<link=p.CAN1.RXIMR32>
#### p.can1.rximr36
<link=p.CAN1.RXIMR36>
#### p.CAN1.RXIMR39
<lang=dft>
 (rw)  [1;33m0x401d091c[0m (0x401d0000 + 0x091c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr40
<link=p.CAN1.RXIMR40>
#### CAN1.RXIMR40
<link=p.CAN1.RXIMR40>
#### p.CAN1.RXIMR53
<lang=dft>
 (rw)  [1;33m0x401d0954[0m (0x401d0000 + 0x0954)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr57
<link=p.CAN1.RXIMR57>
#### can1.rximr59
<link=p.CAN1.RXIMR59>
#### can1.rximr61
<link=p.CAN1.RXIMR61>
#### p.CAN1.RXIMR62
<lang=dft>
 (rw)  [1;33m0x401d0978[0m (0x401d0000 + 0x0978)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.ctrl1
<link=p.CAN2.CTRL1>
#### p.CAN2.TIMER
<lang=dft>
 (rw)  [1;33m0x401d4008[0m (0x401d4000 + 0x0008)
Free Running Timer Register
 (rw) (16)  [0;32mTIMER[0m  - [15:00] -  TIMER
</lang>
#### can2.rx15mask
<link=p.CAN2.RX15MASK>
#### can2.imask1
<link=p.CAN2.IMASK1>
#### p.can2.iflag1
<link=p.CAN2.IFLAG1>
#### CAN2.IFLAG1
<link=p.CAN2.IFLAG1>
#### can2.esr2
<link=p.CAN2.ESR2>
#### CAN2.RXIMR0
<link=p.CAN2.RXIMR0>
#### can2.rximr6
<link=p.CAN2.RXIMR6>
#### p.can2.rximr9
<link=p.CAN2.RXIMR9>
#### p.CAN2.RXIMR17
<lang=dft>
 (rw)  [1;33m0x401d48c4[0m (0x401d4000 + 0x08c4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr17
<link=p.CAN2.RXIMR17>
#### p.can2.rximr18
<link=p.CAN2.RXIMR18>
#### p.CAN2.RXIMR29
<lang=dft>
 (rw)  [1;33m0x401d48f4[0m (0x401d4000 + 0x08f4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR32
<link=p.CAN2.RXIMR32>
#### can2.rximr38
<link=p.CAN2.RXIMR38>
#### p.can2.rximr47
<link=p.CAN2.RXIMR47>
#### CAN2.RXIMR47
<link=p.CAN2.RXIMR47>
#### can2.rximr49
<link=p.CAN2.RXIMR49>
#### CAN2.RXIMR50
<link=p.CAN2.RXIMR50>
#### p.can2.rximr54
<link=p.CAN2.RXIMR54>
#### p.CAN2.RXIMR58
<lang=dft>
 (rw)  [1;33m0x401d4968[0m (0x401d4000 + 0x0968)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr61
<link=p.CAN2.RXIMR61>
#### CAN2.RXIMR61
<link=p.CAN2.RXIMR61>
#### p.CAN3.MCR
<lang=dft>
 (rw)  [1;33m0x401d8000[0m (0x401d8000 + 0x0000)
Module Configuration Register
 (rw) (07)  [0;32mMAXMB[0m  - [06:00] -  Number Of The Last Message Buffer
 (rw) (02)  [0;32mIDAM[0m  - [09:08] -  ID Acceptance Mode
      0 - IDAM_0 :
         Format A: One full ID (standard and extended) per ID Filter Table eleme
         nt.
      0x1 - IDAM_1 :
         Format B: Two full standard IDs or two partial 14-bit (standard and ext
         ended) IDs per ID Filter Table element.
      0x2 - IDAM_2 :
         Format C: Four partial 8-bit Standard IDs per ID Filter Table element.
      0x3 - IDAM_3 :
         Format D: All frames rejected.
 (rw) (01)  [0;32mFDEN[0m  - [11:11] -  CAN FD operation enable
      0 - FDEN_0 :
         CAN FD is disabled. FlexCAN is able to receive and transmit messages in
          CAN 2.0 format.
      0x1 - FDEN_1 :
         CAN FD is enabled. FlexCAN is able to receive and transmit messages in 
         both CAN FD and CAN 2.0 formats.
 (rw) (01)  [0;32mAEN[0m  - [12:12] -  Abort Enable
      0 - AEN_0 :
         Abort disabled.
      0x1 - AEN_1 :
         Abort enabled.
 (rw) (01)  [0;32mLPRIOEN[0m  - [13:13] -  Local Priority Enable
      0 - LPRIOEN_0 :
         Local Priority disabled.
      0x1 - LPRIOEN_1 :
         Local Priority enabled.
 (rw) (01)  [0;32mDMA[0m  - [15:15] -  DMA Enable
      0 - DMA_0 :
         DMA feature for Legacy RX FIFO or Enhanced Rx FIFO are disabled.
      0x1 - DMA_1 :
         DMA feature for Legacy RX FIFO or Enhanced Rx FIFO are enabled.
 (rw) (01)  [0;32mIRMQ[0m  - [16:16] -  Individual Rx Masking And Queue Enable
      0 - IRMQ_0 :
         Individual Rx masking and queue feature are disabled. For backward comp
         atibility with legacy applications, the reading of C/S word locks the M
         B even if it is EMPTY.
      0x1 - IRMQ_1 :
         Individual Rx masking and queue feature are enabled.
 (rw) (01)  [0;32mSRXDIS[0m  - [17:17] -  Self Reception Disable
      0 - SRXDIS_0 :
         Self reception enabled.
      0x1 - SRXDIS_1 :
         Self reception disabled.
 (rw) (01)  [0;32mDOZE[0m  - [18:18] -  Doze Mode Enable
      0 - DOZE_0 :
         FlexCAN is not enabled to enter low-power mode when Doze mode is reques
         ted.
      0x1 - DOZE_1 :
         FlexCAN is enabled to enter low-power mode when Doze mode is requested.
 (rw) (01)  [0;32mWAKSRC[0m  - [19:19] -  Wake Up Source
      0 - WAKSRC_0 :
         FlexCAN uses the unfiltered Rx input to detect recessive to dominant ed
         ges on the CAN bus.
      0x1 - WAKSRC_1 :
         FlexCAN uses the filtered Rx input to detect recessive to dominant edge
         s on the CAN bus.
 (ro) (01)  [0;32mLPMACK[0m  - [20:20] -  Low-Power Mode Acknowledge
      0 - LPMACK_0 :
         FlexCAN is not in a low-power mode.
      0x1 - LPMACK_1 :
         FlexCAN is in a low-power mode.
 (rw) (01)  [0;32mWRNEN[0m  - [21:21] -  Warning Interrupt Enable
      0 - WRNEN_0 :
         TWRNINT and RWRNINT bits are zero, independent of the values in the err
         or counters.
      0x1 - WRNEN_1 :
         TWRNINT and RWRNINT bits are set when the respective error counter tran
         sitions from less than 96 to greater than or equal to 96.
 (rw) (01)  [0;32mSLFWAK[0m  - [22:22] -  Self Wake Up
      0 - SLFWAK_0 :
         FlexCAN Self Wake Up feature is disabled.
      0x1 - SLFWAK_1 :
         FlexCAN Self Wake Up feature is enabled.
 (rw) (01)  [0;32mSUPV[0m  - [23:23] -  Supervisor Mode
      0 - SUPV_0 :
         FlexCAN is in User mode. Affected registers allow both Supervisor and U
         nrestricted accesses.
      0x1 - SUPV_1 :
         FlexCAN is in Supervisor mode. Affected registers allow only Supervisor
          access. Unrestricted access behaves as though the access was done to a
         n unimplemented register location.
 (ro) (01)  [0;32mFRZACK[0m  - [24:24] -  Freeze Mode Acknowledge
      0 - FRZACK_0 :
         FlexCAN not in Freeze mode, prescaler running.
      0x1 - FRZACK_1 :
         FlexCAN in Freeze mode, prescaler stopped.
 (rw) (01)  [0;32mSOFTRST[0m  - [25:25] -  Soft Reset
      0 - SOFTRST_0 :
         No reset request.
      0x1 - SOFTRST_1 :
         Resets the registers affected by soft reset.
 (rw) (01)  [0;32mWAKMSK[0m  - [26:26] -  Wake Up Interrupt Mask
      0 - WAKMSK_0 :
         Wake Up Interrupt is disabled.
      0x1 - WAKMSK_1 :
         Wake Up Interrupt is enabled.
 (ro) (01)  [0;32mNOTRDY[0m  - [27:27] -  FlexCAN Not Ready
      0 - NOTRDY_0 :
         FlexCAN module is either in Normal mode, Listen-Only mode or Loop-Back 
         mode.
      0x1 - NOTRDY_1 :
         FlexCAN module is either in Disable mode, Doze mode , Stop mode or Free
         ze mode.
 (rw) (01)  [0;32mHALT[0m  - [28:28] -  Halt FlexCAN
      0 - HALT_0 :
         No Freeze mode request.
      0x1 - HALT_1 :
         Enters Freeze mode if the FRZ bit is asserted.
 (rw) (01)  [0;32mRFEN[0m  - [29:29] -  Legacy Rx FIFO Enable
      0 - RFEN_0 :
         Legacy Rx FIFO not enabled.
      0x1 - RFEN_1 :
         Legacy Rx FIFO enabled.
 (rw) (01)  [0;32mFRZ[0m  - [30:30] -  Freeze Enable
      0 - FRZ_0 :
         Not enabled to enter Freeze mode.
      0x1 - FRZ_1 :
         Enabled to enter Freeze mode.
 (rw) (01)  [0;32mMDIS[0m  - [31:31] -  Module Disable
      0 - MDIS_0 :
         Enable the FlexCAN module.
      0x1 - MDIS_1 :
         Disable the FlexCAN module.
</lang>
#### CAN3.RXFGMASK
<link=p.CAN3.RXFGMASK>
#### p.can3.mb0_32b_cs
<link=p.CAN3.MB0_32B_CS>
#### p.CAN3.MB0_8B_CS
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
#### can3.id0
<link=p.CAN3.ID0>
#### can3.mb0_64b_word1
<link=p.CAN3.MB0_64B_WORD1>
#### p.can3.mb0_8b_word1
<link=p.CAN3.MB0_8B_WORD1>
#### CAN3.MB0_32B_WORD2
<link=p.CAN3.MB0_32B_WORD2>
#### p.CAN3.MB1_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8090[0m (0x401d8000 + 0x0090)
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
#### p.CAN3.MB0_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8094[0m (0x401d8000 + 0x0094)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD01
<lang=dft>
 (rw)  [1;33m0x401d8098[0m (0x401d8000 + 0x0098)
Message Buffer 1 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word11
<link=p.CAN3.WORD11>
#### can3.mb0_32b_word6
<link=p.CAN3.MB0_32B_WORD6>
#### CAN3.MB1_16B_WORD0
<link=p.CAN3.MB1_16B_WORD0>
#### p.CAN3.MB1_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d80a8[0m (0x401d8000 + 0x00a8)
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
#### p.can3.word02
<link=p.CAN3.WORD02>
#### p.can3.mb0_64b_word9
<link=p.CAN3.MB0_64B_WORD9>
#### CAN3.MB0_64B_WORD9
<link=p.CAN3.MB0_64B_WORD9>
#### can3.mb1_32b_id
<link=p.CAN3.MB1_32B_ID>
#### p.CAN3.MB0_64B_WORD11
<lang=dft>
 (rw)  [1;33m0x401d80b4[0m (0x401d8000 + 0x00b4)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_47[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_46[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_45[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_44[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word03
<link=p.CAN3.WORD03>
#### CAN3.MB3_8B_WORD1
<link=p.CAN3.MB3_8B_WORD1>
#### can3.mb0_64b_word15
<link=p.CAN3.MB0_64B_WORD15>
#### p.CAN3.MB2_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d80c4[0m (0x401d8000 + 0x00c4)
Message Buffer 2 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB1_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d80c8[0m (0x401d8000 + 0x00c8)
Message Buffer 1 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB3_16B_ID
<link=p.CAN3.MB3_16B_ID>
#### can3.cs5
<link=p.CAN3.CS5>
#### CAN3.MB3_16B_WORD0
<link=p.CAN3.MB3_16B_WORD0>
#### CAN3.ID5
<link=p.CAN3.ID5>
#### p.CAN3.MB2_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d80e0[0m (0x401d8000 + 0x00e0)
Message Buffer 2 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb4_16b_word0
<link=p.CAN3.MB4_16B_WORD0>
#### CAN3.MB6_8B_WORD0
<link=p.CAN3.MB6_8B_WORD0>
#### p.can3.mb1_64b_word7
<link=p.CAN3.MB1_64B_WORD7>
#### p.CAN3.MB6_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80ec[0m (0x401d8000 + 0x00ec)
Message Buffer 6 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB2_32B_WORD6
<link=p.CAN3.MB2_32B_WORD6>
#### can3.mb4_16b_word3
<link=p.CAN3.MB4_16B_WORD3>
#### can3.mb7_8b_word0
<link=p.CAN3.MB7_8B_WORD0>
#### p.CAN3.MB1_64B_WORD11
<lang=dft>
 (rw)  [1;33m0x401d80fc[0m (0x401d8000 + 0x00fc)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_47[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_46[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_45[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_44[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD17
<link=p.CAN3.WORD17>
#### can3.mb1_64b_word13
<link=p.CAN3.MB1_64B_WORD13>
#### p.can3.mb5_16b_word1
<link=p.CAN3.MB5_16B_WORD1>
#### p.CAN3.MB8_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8104[0m (0x401d8000 + 0x0104)
Message Buffer 8 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb8_8b_id
<link=p.CAN3.MB8_8B_ID>
#### can3.mb5_16b_word3
<link=p.CAN3.MB5_16B_WORD3>
#### CAN3.CS9
<link=p.CAN3.CS9>
#### p.CAN3.MB3_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8110[0m (0x401d8000 + 0x0110)
Message Buffer 3 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.ID9
<lang=dft>
 (rw)  [1;33m0x401d8114[0m (0x401d8000 + 0x0114)
Message Buffer 9 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb6_16b_id
<link=p.CAN3.MB6_16B_ID>
#### can3.mb10_8b_cs
<link=p.CAN3.MB10_8B_CS>
#### p.can3.mb2_64b_word2
<link=p.CAN3.MB2_64B_WORD2>
#### p.can3.mb6_16b_word2
<link=p.CAN3.MB6_16B_WORD2>
#### can3.mb7_16b_cs
<link=p.CAN3.MB7_16B_CS>
#### p.CAN3.MB10_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d812c[0m (0x401d8000 + 0x012c)
Message Buffer 10 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb10_8b_word1
<link=p.CAN3.MB10_8B_WORD1>
#### CAN3.MB2_64B_WORD5
<link=p.CAN3.MB2_64B_WORD5>
#### can3.word110
<link=p.CAN3.WORD110>
#### p.can3.cs11
<link=p.CAN3.CS11>
#### can3.mb11_8b_cs
<link=p.CAN3.MB11_8B_CS>
#### can3.mb4_32b_word2
<link=p.CAN3.MB4_32B_WORD2>
#### p.CAN3.MB2_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8134[0m (0x401d8000 + 0x0134)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb7_16b_word1
<link=p.CAN3.MB7_16B_WORD1>
#### can3.mb7_16b_word1
<link=p.CAN3.MB7_16B_WORD1>
#### can3.word011
<link=p.CAN3.WORD011>
#### can3.mb2_64b_word9
<link=p.CAN3.MB2_64B_WORD9>
#### CAN3.MB7_16B_WORD3
<link=p.CAN3.MB7_16B_WORD3>
#### CAN3.MB4_32B_WORD6
<link=p.CAN3.MB4_32B_WORD6>
#### CAN3.MB2_64B_WORD11
<link=p.CAN3.MB2_64B_WORD11>
#### CAN3.WORD012
<link=p.CAN3.WORD012>
#### CAN3.MB8_16B_WORD1
<link=p.CAN3.MB8_16B_WORD1>
#### p.CAN3.MB13_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8158[0m (0x401d8000 + 0x0158)
Message Buffer 13 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB13_8B_WORD0
<link=p.CAN3.MB13_8B_WORD0>
#### p.CAN3.MB5_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8158[0m (0x401d8000 + 0x0158)
Message Buffer 5 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb14_8b_word0
<link=p.CAN3.MB14_8B_WORD0>
#### can3.mb3_64b_word3
<link=p.CAN3.MB3_64B_WORD3>
#### CAN3.MB10_16B_CS
<link=p.CAN3.MB10_16B_CS>
#### CAN3.MB15_8B_CS
<link=p.CAN3.MB15_8B_CS>
#### p.CAN3.MB6_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8170[0m (0x401d8000 + 0x0170)
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
#### CAN3.MB3_64B_WORD5
<link=p.CAN3.MB3_64B_WORD5>
#### p.CAN3.WORD015
<lang=dft>
 (rw)  [1;33m0x401d8178[0m (0x401d8000 + 0x0178)
Message Buffer 15 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb15_8b_word1
<link=p.CAN3.MB15_8B_WORD1>
#### p.CAN3.MB3_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d817c[0m (0x401d8000 + 0x017c)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB6_32B_WORD2
<link=p.CAN3.MB6_32B_WORD2>
#### p.can3.word016
<link=p.CAN3.WORD016>
#### can3.cs17
<link=p.CAN3.CS17>
#### p.CAN3.MB6_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8190[0m (0x401d8000 + 0x0190)
Message Buffer 6 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb3_64b_word13
<link=p.CAN3.MB3_64B_WORD13>
#### CAN3.MB3_64B_WORD13
<link=p.CAN3.MB3_64B_WORD13>
#### can3.mb3_64b_word15
<link=p.CAN3.MB3_64B_WORD15>
#### p.can3.word117
<link=p.CAN3.WORD117>
#### p.CAN3.CS18
<lang=dft>
 (rw)  [1;33m0x401d81a0[0m (0x401d8000 + 0x01a0)
Message Buffer 18 CS Register
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
#### p.CAN3.MB7_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81a0[0m (0x401d8000 + 0x01a0)
Message Buffer 7 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb12_16b_id
<link=p.CAN3.MB12_16B_ID>
#### can3.mb18_8b_word0
<link=p.CAN3.MB18_8B_WORD0>
#### can3.mb19_8b_id
<link=p.CAN3.MB19_8B_ID>
#### p.CAN3.MB13_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d81b8[0m (0x401d8000 + 0x01b8)
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
#### can3.mb4_64b_word4
<link=p.CAN3.MB4_64B_WORD4>
#### p.can3.mb19_8b_word1
<link=p.CAN3.MB19_8B_WORD1>
#### p.can3.cs20
<link=p.CAN3.CS20>
#### p.can3.mb8_32b_id
<link=p.CAN3.MB8_32B_ID>
#### can3.mb8_32b_id
<link=p.CAN3.MB8_32B_ID>
#### CAN3.MB8_32B_ID
<link=p.CAN3.MB8_32B_ID>
#### p.CAN3.MB4_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d81c8[0m (0x401d8000 + 0x01c8)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD020
<lang=dft>
 (rw)  [1;33m0x401d81c8[0m (0x401d8000 + 0x01c8)
Message Buffer 20 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb8_32b_word1
<link=p.CAN3.MB8_32B_WORD1>
#### CAN3.MB4_64B_WORD11
<link=p.CAN3.MB4_64B_WORD11>
#### p.can3.mb8_32b_word3
<link=p.CAN3.MB8_32B_WORD3>
#### CAN3.MB14_16B_WORD0
<link=p.CAN3.MB14_16B_WORD0>
#### p.CAN3.CS22
<lang=dft>
 (rw)  [1;33m0x401d81e0[0m (0x401d8000 + 0x01e0)
Message Buffer 22 CS Register
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
#### p.CAN3.MB14_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d81e0[0m (0x401d8000 + 0x01e0)
Message Buffer 14 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb22_8b_id
<link=p.CAN3.MB22_8B_ID>
#### can3.mb22_8b_word0
<link=p.CAN3.MB22_8B_WORD0>
#### can3.mb5_64b_cs
<link=p.CAN3.MB5_64B_CS>
#### can3.mb9_32b_cs
<link=p.CAN3.MB9_32B_CS>
#### p.can3.word122
<link=p.CAN3.WORD122>
#### p.CAN3.MB15_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81f0[0m (0x401d8000 + 0x01f0)
Message Buffer 15 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb15_16b_word0
<link=p.CAN3.MB15_16B_WORD0>
#### p.CAN3.ID23
<lang=dft>
 (rw)  [1;33m0x401d81f4[0m (0x401d8000 + 0x01f4)
Message Buffer 23 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB9_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81f4[0m (0x401d8000 + 0x01f4)
Message Buffer 9 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB15_16B_WORD2
<link=p.CAN3.MB15_16B_WORD2>
#### p.can3.mb5_64b_word2
<link=p.CAN3.MB5_64B_WORD2>
#### can3.mb9_32b_word2
<link=p.CAN3.MB9_32B_WORD2>
#### can3.mb15_16b_word3
<link=p.CAN3.MB15_16B_WORD3>
#### p.can3.mb9_32b_word3
<link=p.CAN3.MB9_32B_WORD3>
#### CAN3.MB16_16B_CS
<link=p.CAN3.MB16_16B_CS>
#### CAN3.MB9_32B_WORD4
<link=p.CAN3.MB9_32B_WORD4>
#### p.CAN3.MB16_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d820c[0m (0x401d8000 + 0x020c)
Message Buffer 16 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB16_16B_WORD1
<link=p.CAN3.MB16_16B_WORD1>
#### p.CAN3.MB5_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d8210[0m (0x401d8000 + 0x0210)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb10_32b_word0
<link=p.CAN3.MB10_32B_WORD0>
#### can3.mb10_32b_word0
<link=p.CAN3.MB10_32B_WORD0>
#### p.CAN3.MB25_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8218[0m (0x401d8000 + 0x0218)
Message Buffer 25 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb25_8b_word0
<link=p.CAN3.MB25_8B_WORD0>
#### CAN3.MB5_64B_WORD11
<link=p.CAN3.MB5_64B_WORD11>
#### p.CAN3.WORD125
<lang=dft>
 (rw)  [1;33m0x401d821c[0m (0x401d8000 + 0x021c)
Message Buffer 25 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb5_64b_word12
<link=p.CAN3.MB5_64B_WORD12>
#### p.CAN3.MB17_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8224[0m (0x401d8000 + 0x0224)
Message Buffer 17 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb17_16b_word1
<link=p.CAN3.MB17_16B_WORD1>
#### CAN3.MB17_16B_WORD1
<link=p.CAN3.MB17_16B_WORD1>
#### can3.mb27_8b_cs
<link=p.CAN3.MB27_8B_CS>
#### can3.id27
<link=p.CAN3.ID27>
#### p.can3.mb11_32b_cs
<link=p.CAN3.MB11_32B_CS>
#### p.CAN3.MB6_64B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8238[0m (0x401d8000 + 0x0238)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB6_64B_WORD0
<link=p.CAN3.MB6_64B_WORD0>
#### p.can3.word027
<link=p.CAN3.WORD027>
#### p.can3.mb18_16b_word3
<link=p.CAN3.MB18_16B_WORD3>
#### p.can3.mb19_16b_cs
<link=p.CAN3.MB19_16B_CS>
#### can3.word028
<link=p.CAN3.WORD028>
#### can3.mb19_16b_id
<link=p.CAN3.MB19_16B_ID>
#### p.can3.id29
<link=p.CAN3.ID29>
#### p.can3.mb6_64b_word7
<link=p.CAN3.MB6_64B_WORD7>
#### p.CAN3.MB29_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8258[0m (0x401d8000 + 0x0258)
Message Buffer 29 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb29_8b_word0
<link=p.CAN3.MB29_8B_WORD0>
#### p.can3.mb6_64b_word11
<link=p.CAN3.MB6_64B_WORD11>
#### can3.mb6_64b_word11
<link=p.CAN3.MB6_64B_WORD11>
#### CAN3.MB30_8B_WORD0
<link=p.CAN3.MB30_8B_WORD0>
#### p.can3.word030
<link=p.CAN3.WORD030>
#### p.can3.mb12_32b_word1
<link=p.CAN3.MB12_32B_WORD1>
#### can3.cs31
<link=p.CAN3.CS31>
#### can3.mb12_32b_word3
<link=p.CAN3.MB12_32B_WORD3>
#### p.CAN3.MB21_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8278[0m (0x401d8000 + 0x0278)
Message Buffer 21 CS Register
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
#### p.can3.mb31_8b_word0
<link=p.CAN3.MB31_8B_WORD0>
#### p.can3.word131
<link=p.CAN3.WORD131>
#### CAN3.MB32_8B_CS
<link=p.CAN3.MB32_8B_CS>
#### p.can3.id32
<link=p.CAN3.ID32>
#### p.CAN3.MB13_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8288[0m (0x401d8000 + 0x0288)
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
#### p.CAN3.MB21_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8288[0m (0x401d8000 + 0x0288)
Message Buffer 21 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB7_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8288[0m (0x401d8000 + 0x0288)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb32_8b_word1
<link=p.CAN3.MB32_8B_WORD1>
#### can3.mb7_64b_word4
<link=p.CAN3.MB7_64B_WORD4>
#### CAN3.MB33_8B_WORD0
<link=p.CAN3.MB33_8B_WORD0>
#### CAN3.MB7_64B_WORD6
<link=p.CAN3.MB7_64B_WORD6>
#### p.CAN3.WORD033
<lang=dft>
 (rw)  [1;33m0x401d8298[0m (0x401d8000 + 0x0298)
Message Buffer 33 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb34_8b_cs
<link=p.CAN3.MB34_8B_CS>
#### CAN3.MB34_8B_ID
<link=p.CAN3.MB34_8B_ID>
#### p.can3.mb35_8b_id
<link=p.CAN3.MB35_8B_ID>
#### CAN3.MB23_16B_WORD3
<link=p.CAN3.MB23_16B_WORD3>
#### p.CAN3.MB36_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d82c0[0m (0x401d8000 + 0x02c0)
Message Buffer 36 CS Register
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
#### p.CAN3.MB36_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d82c4[0m (0x401d8000 + 0x02c4)
Message Buffer 36 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb36_8b_id
<link=p.CAN3.MB36_8B_ID>
#### p.can3.mb14_32b_word4
<link=p.CAN3.MB14_32B_WORD4>
#### can3.mb14_32b_word4
<link=p.CAN3.MB14_32B_WORD4>
#### CAN3.WORD136
<link=p.CAN3.WORD136>
#### CAN3.CS38
<link=p.CAN3.CS38>
#### p.can3.mb8_64b_word7
<link=p.CAN3.MB8_64B_WORD7>
#### CAN3.MB8_64B_WORD7
<link=p.CAN3.MB8_64B_WORD7>
#### CAN3.MB25_16B_WORD2
<link=p.CAN3.MB25_16B_WORD2>
#### p.CAN3.MB8_64B_WORD9
<lang=dft>
 (rw)  [1;33m0x401d82ec[0m (0x401d8000 + 0x02ec)
Message Buffer 8 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_39[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_38[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_37[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_36[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB40_8B_WORD0
<link=p.CAN3.MB40_8B_WORD0>
#### CAN3.WORD140
<link=p.CAN3.WORD140>
#### can3.mb9_64b_word0
<link=p.CAN3.MB9_64B_WORD0>
#### p.CAN3.ID41
<lang=dft>
 (rw)  [1;33m0x401d8314[0m (0x401d8000 + 0x0314)
Message Buffer 41 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb41_8b_id
<link=p.CAN3.MB41_8B_ID>
#### can3.mb27_16b_word2
<link=p.CAN3.MB27_16B_WORD2>
#### p.CAN3.MB41_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8318[0m (0x401d8000 + 0x0318)
Message Buffer 41 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb41_8b_word0
<link=p.CAN3.MB41_8B_WORD0>
#### p.can3.mb16_32b_word5
<link=p.CAN3.MB16_32B_WORD5>
#### can3.mb16_32b_word7
<link=p.CAN3.MB16_32B_WORD7>
#### CAN3.MB9_64B_WORD5
<link=p.CAN3.MB9_64B_WORD5>
#### CAN3.MB28_16B_WORD0
<link=p.CAN3.MB28_16B_WORD0>
#### can3.word042
<link=p.CAN3.WORD042>
#### can3.mb17_32b_id
<link=p.CAN3.MB17_32B_ID>
#### p.can3.mb28_16b_word1
<link=p.CAN3.MB28_16B_WORD1>
#### p.can3.mb9_64b_word10
<link=p.CAN3.MB9_64B_WORD10>
#### CAN3.ID44
<link=p.CAN3.ID44>
#### p.CAN3.MB10_64B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8358[0m (0x401d8000 + 0x0358)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb30_16b_word0
<link=p.CAN3.MB30_16B_WORD0>
#### can3.mb10_64b_word1
<link=p.CAN3.MB10_64B_WORD1>
#### CAN3.MB45_8B_WORD1
<link=p.CAN3.MB45_8B_WORD1>
#### p.CAN3.MB18_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8364[0m (0x401d8000 + 0x0364)
Message Buffer 18 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB18_32B_WORD3
<link=p.CAN3.MB18_32B_WORD3>
#### p.can3.mb30_16b_word3
<link=p.CAN3.MB30_16B_WORD3>
#### p.can3.word046
<link=p.CAN3.WORD046>
#### p.CAN3.WORD146
<lang=dft>
 (rw)  [1;33m0x401d836c[0m (0x401d8000 + 0x036c)
Message Buffer 46 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb10_64b_word8
<link=p.CAN3.MB10_64B_WORD8>
#### CAN3.MB10_64B_WORD9
<link=p.CAN3.MB10_64B_WORD9>
#### can3.mb19_32b_word0
<link=p.CAN3.MB19_32B_WORD0>
#### CAN3.MB19_32B_WORD0
<link=p.CAN3.MB19_32B_WORD0>
#### p.CAN3.MB48_8B_CS
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
#### can3.mb48_8b_cs
<link=p.CAN3.MB48_8B_CS>
#### CAN3.MB48_8B_CS
<link=p.CAN3.MB48_8B_CS>
#### can3.mb10_64b_word11
<link=p.CAN3.MB10_64B_WORD11>
#### p.can3.mb48_8b_id
<link=p.CAN3.MB48_8B_ID>
#### can3.mb48_8b_id
<link=p.CAN3.MB48_8B_ID>
#### CAN3.MB48_8B_ID
<link=p.CAN3.MB48_8B_ID>
#### p.CAN3.MB10_64B_WORD12
<lang=dft>
 (rw)  [1;33m0x401d8388[0m (0x401d8000 + 0x0388)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_51[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_50[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_49[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_48[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB19_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8388[0m (0x401d8000 + 0x0388)
Message Buffer 19 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb32_16b_word0
<link=p.CAN3.MB32_16B_WORD0>
#### p.can3.mb19_32b_word3
<link=p.CAN3.MB19_32B_WORD3>
#### p.CAN3.MB49_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8390[0m (0x401d8000 + 0x0390)
Message Buffer 49 CS Register
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
#### can3.mb32_16b_word3
<link=p.CAN3.MB32_16B_WORD3>
#### p.CAN3.MB49_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8394[0m (0x401d8000 + 0x0394)
Message Buffer 49 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB49_8B_ID
<link=p.CAN3.MB49_8B_ID>
#### p.can3.mb20_32b_cs
<link=p.CAN3.MB20_32B_CS>
#### p.can3.id50
<link=p.CAN3.ID50>
#### CAN3.MB11_64B_WORD1
<link=p.CAN3.MB11_64B_WORD1>
#### can3.mb11_64b_word3
<link=p.CAN3.MB11_64B_WORD3>
#### p.can3.mb51_8b_cs
<link=p.CAN3.MB51_8B_CS>
#### p.CAN3.WORD151
<lang=dft>
 (rw)  [1;33m0x401d83bc[0m (0x401d8000 + 0x03bc)
Message Buffer 51 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.CS52
<link=p.CAN3.CS52>
#### p.can3.mb11_64b_word8
<link=p.CAN3.MB11_64B_WORD8>
#### p.can3.mb20_32b_word6
<link=p.CAN3.MB20_32B_WORD6>
#### CAN3.MB20_32B_WORD7
<link=p.CAN3.MB20_32B_WORD7>
#### can3.mb34_16b_word3
<link=p.CAN3.MB34_16B_WORD3>
#### p.can3.mb11_64b_word10
<link=p.CAN3.MB11_64B_WORD10>
#### p.CAN3.MB21_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d83c8[0m (0x401d8000 + 0x03c8)
Message Buffer 21 CS Register
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
#### p.CAN3.MB21_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d83cc[0m (0x401d8000 + 0x03cc)
Message Buffer 21 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb21_32b_id
<link=p.CAN3.MB21_32B_ID>
#### p.can3.mb52_8b_word1
<link=p.CAN3.MB52_8B_WORD1>
#### p.can3.mb21_32b_word0
<link=p.CAN3.MB21_32B_WORD0>
#### p.CAN3.MB53_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d83d4[0m (0x401d8000 + 0x03d4)
Message Buffer 53 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB21_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d83d8[0m (0x401d8000 + 0x03d8)
Message Buffer 21 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS54
<lang=dft>
 (rw)  [1;33m0x401d83e0[0m (0x401d8000 + 0x03e0)
Message Buffer 54 CS Register
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
#### CAN3.MB12_64B_CS
<link=p.CAN3.MB12_64B_CS>
#### p.CAN3.MB36_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d83e0[0m (0x401d8000 + 0x03e0)
Message Buffer 36 CS Register
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
#### p.CAN3.MB36_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d83e4[0m (0x401d8000 + 0x03e4)
Message Buffer 36 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB54_8B_WORD0
<link=p.CAN3.MB54_8B_WORD0>
#### p.can3.mb12_64b_word1
<link=p.CAN3.MB12_64B_WORD1>
#### CAN3.MB12_64B_WORD3
<link=p.CAN3.MB12_64B_WORD3>
#### p.CAN3.MB22_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d83f4[0m (0x401d8000 + 0x03f4)
Message Buffer 22 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb55_8b_id
<link=p.CAN3.MB55_8B_ID>
#### p.can3.mb22_32b_word2
<link=p.CAN3.MB22_32B_WORD2>
#### p.CAN3.ID56
<lang=dft>
 (rw)  [1;33m0x401d8404[0m (0x401d8000 + 0x0404)
Message Buffer 56 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.id56
<link=p.CAN3.ID56>
#### CAN3.MB22_32B_WORD3
<link=p.CAN3.MB22_32B_WORD3>
#### p.CAN3.MB12_64B_WORD9
<lang=dft>
 (rw)  [1;33m0x401d840c[0m (0x401d8000 + 0x040c)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_39[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_38[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_37[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_36[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb12_64b_word9
<link=p.CAN3.MB12_64B_WORD9>
#### CAN3.ID57
<link=p.CAN3.ID57>
#### p.CAN3.MB22_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8414[0m (0x401d8000 + 0x0414)
Message Buffer 22 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb22_32b_word7
<link=p.CAN3.MB22_32B_WORD7>
#### CAN3.WORD157
<link=p.CAN3.WORD157>
#### p.can3.mb23_32b_word0
<link=p.CAN3.MB23_32B_WORD0>
#### p.CAN3.MB38_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8424[0m (0x401d8000 + 0x0424)
Message Buffer 38 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD058
<lang=dft>
 (rw)  [1;33m0x401d8428[0m (0x401d8000 + 0x0428)
Message Buffer 58 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB13_64B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8430[0m (0x401d8000 + 0x0430)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB39_16B_WORD2
<link=p.CAN3.MB39_16B_WORD2>
#### p.CAN3.MB59_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8438[0m (0x401d8000 + 0x0438)
Message Buffer 59 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB59_8B_WORD0
<link=p.CAN3.MB59_8B_WORD0>
#### p.can3.mb13_64b_word3
<link=p.CAN3.MB13_64B_WORD3>
#### can3.mb23_32b_word7
<link=p.CAN3.MB23_32B_WORD7>
#### p.CAN3.MB39_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d843c[0m (0x401d8000 + 0x043c)
Message Buffer 39 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb39_16b_word3
<link=p.CAN3.MB39_16B_WORD3>
#### can3.mb39_16b_word3
<link=p.CAN3.MB39_16B_WORD3>
#### can3.mb41_16b_cs
<link=p.CAN3.MB41_16B_CS>
#### can3.word161
<link=p.CAN3.WORD161>
#### can3.cs62
<link=p.CAN3.CS62>
#### CAN3.ID62
<link=p.CAN3.ID62>
#### CAN3.CS63
<link=p.CAN3.CS63>
#### CAN3.WORD063
<link=p.CAN3.WORD063>
#### p.CAN3.RXIMR[9]
<lang=dft>
 (rw)  [1;33m0x401d88a4[0m (0x401d8000 + 0x08a4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[9]
<link=p.CAN3.RXIMR[9]>
#### p.can3.rximr[11]
<link=p.CAN3.RXIMR[11]>
#### CAN3.RXIMR[14]
<link=p.CAN3.RXIMR[14]>
#### p.CAN3.RXIMR[16]
<lang=dft>
 (rw)  [1;33m0x401d88c0[0m (0x401d8000 + 0x08c0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[26]
<link=p.CAN3.RXIMR[26]>
#### p.can3.rximr[27]
<link=p.CAN3.RXIMR[27]>
#### CAN3.RXIMR[32]
<link=p.CAN3.RXIMR[32]>
#### p.CAN3.RXIMR[33]
<lang=dft>
 (rw)  [1;33m0x401d8904[0m (0x401d8000 + 0x0904)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[35]
<link=p.CAN3.RXIMR[35]>
#### can3.rximr[38]
<link=p.CAN3.RXIMR[38]>
#### can3.rximr[40]
<link=p.CAN3.RXIMR[40]>
#### p.can3.rximr[42]
<link=p.CAN3.RXIMR[42]>
#### CAN3.RXIMR[43]
<link=p.CAN3.RXIMR[43]>
#### p.can3.rximr[48]
<link=p.CAN3.RXIMR[48]>
#### can3.rximr[54]
<link=p.CAN3.RXIMR[54]>
#### p.CAN3.RXIMR[60]
<lang=dft>
 (rw)  [1;33m0x401d8970[0m (0x401d8000 + 0x0970)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.CAN3.ERFSR
<lang=dft>
 (rw)  [1;33m0x401d8c14[0m (0x401d8000 + 0x0c14)
Enhanced Rx FIFO Status Register
 (ro) (06)  [0;32mERFEL[0m  - [05:00] -  Enhanced Rx FIFO Elements
 (ro) (01)  [0;32mERFF[0m  - [16:16] -  Enhanced Rx FIFO full
      0 - ERFF_0 :
         Enhanced Rx FIFO is not full
      0x1 - ERFF_1 :
         Enhanced Rx FIFO is full
 (ro) (01)  [0;32mERFE[0m  - [17:17] -  Enhanced Rx FIFO empty
      0 - ERFE_0 :
         Enhanced Rx FIFO is not empty
      0x1 - ERFE_1 :
         Enhanced Rx FIFO is empty
 (rw) (01)  [0;32mERFCLR[0m  - [27:27] -  Enhanced Rx FIFO Clear
      0 - ERFCLR_0 :
         No effect
      0x1 - ERFCLR_1 :
         Clear Enhanced Rx FIFO content
 (rw) (01)  [0;32mERFDA[0m  - [28:28] -  Enhanced Rx FIFO Data Available
      0 - ERFDA_0 :
         No such occurrence
      0x1 - ERFDA_1 :
         There is at least one message stored in Enhanced Rx FIFO
 (rw) (01)  [0;32mERFWMI[0m  - [29:29] -  Enhanced Rx FIFO Watermark Indication
      0 - ERFWMI_0 :
         No such occurrence
      0x1 - ERFWMI_1 :
         The number of messages in FIFO is greater than the watermark
 (rw) (01)  [0;32mERFOVF[0m  - [30:30] -  Enhanced Rx FIFO Overflow
      0 - ERFOVF_0 :
         No such occurrence
      0x1 - ERFOVF_1 :
         Enhanced Rx FIFO overflow
 (rw) (01)  [0;32mERFUFW[0m  - [31:31] -  Enhanced Rx FIFO Underflow
      0 - ERFUFW_0 :
         No such occurrence
      0x1 - ERFUFW_1 :
         Enhanced Rx FIFO underflow
</lang>
#### p.CAN3.HR_TIME_STAMP[6]
<lang=dft>
 (ro)  [1;33m0x401d8c48[0m (0x401d8000 + 0x0c48)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[6]
<link=p.CAN3.HR_TIME_STAMP[6]>
#### p.CAN3.HR_TIME_STAMP[13]
<lang=dft>
 (ro)  [1;33m0x401d8c64[0m (0x401d8000 + 0x0c64)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[13]
<link=p.CAN3.HR_TIME_STAMP[13]>
#### p.CAN3.HR_TIME_STAMP[14]
<lang=dft>
 (ro)  [1;33m0x401d8c68[0m (0x401d8000 + 0x0c68)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[14]
<link=p.CAN3.HR_TIME_STAMP[14]>
#### CAN3.HR_TIME_STAMP[23]
<link=p.CAN3.HR_TIME_STAMP[23]>
#### p.CAN3.HR_TIME_STAMP[25]
<lang=dft>
 (ro)  [1;33m0x401d8c94[0m (0x401d8000 + 0x0c94)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[25]
<link=p.CAN3.HR_TIME_STAMP[25]>
#### can3.hr_time_stamp[25]
<link=p.CAN3.HR_TIME_STAMP[25]>
#### CAN3.HR_TIME_STAMP[29]
<link=p.CAN3.HR_TIME_STAMP[29]>
#### p.CAN3.HR_TIME_STAMP[32]
<lang=dft>
 (ro)  [1;33m0x401d8cb0[0m (0x401d8000 + 0x0cb0)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### CAN3.HR_TIME_STAMP[34]
<link=p.CAN3.HR_TIME_STAMP[34]>
#### p.CAN3.HR_TIME_STAMP[38]
<lang=dft>
 (ro)  [1;33m0x401d8cc8[0m (0x401d8000 + 0x0cc8)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[38]
<link=p.CAN3.HR_TIME_STAMP[38]>
#### can3.hr_time_stamp[42]
<link=p.CAN3.HR_TIME_STAMP[42]>
#### CAN3.HR_TIME_STAMP[44]
<link=p.CAN3.HR_TIME_STAMP[44]>
#### p.CAN3.HR_TIME_STAMP[49]
<lang=dft>
 (ro)  [1;33m0x401d8cf4[0m (0x401d8000 + 0x0cf4)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[49]
<link=p.CAN3.HR_TIME_STAMP[49]>
#### can3.hr_time_stamp[49]
<link=p.CAN3.HR_TIME_STAMP[49]>
#### can3.hr_time_stamp[51]
<link=p.CAN3.HR_TIME_STAMP[51]>
#### can3.hr_time_stamp[56]
<link=p.CAN3.HR_TIME_STAMP[56]>
#### CAN3.HR_TIME_STAMP[58]
<link=p.CAN3.HR_TIME_STAMP[58]>
#### p.can3.hr_time_stamp[62]
<link=p.CAN3.HR_TIME_STAMP[62]>
#### p.can3.erffel[2]
<link=p.CAN3.ERFFEL[2]>
#### can3.erffel[4]
<link=p.CAN3.ERFFEL[4]>
#### p.CAN3.ERFFEL[5]
<lang=dft>
 (rw)  [1;33m0x401db014[0m (0x401d8000 + 0x3014)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[8]
<lang=dft>
 (rw)  [1;33m0x401db020[0m (0x401d8000 + 0x3020)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[9]
<link=p.CAN3.ERFFEL[9]>
#### CAN3.ERFFEL[9]
<link=p.CAN3.ERFFEL[9]>
#### CAN3.ERFFEL[13]
<link=p.CAN3.ERFFEL[13]>
#### p.CAN3.ERFFEL[15]
<lang=dft>
 (rw)  [1;33m0x401db03c[0m (0x401d8000 + 0x303c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[20]
<link=p.CAN3.ERFFEL[20]>
#### can3.erffel[22]
<link=p.CAN3.ERFFEL[22]>
#### CAN3.ERFFEL[26]
<link=p.CAN3.ERFFEL[26]>
#### can3.erffel[31]
<link=p.CAN3.ERFFEL[31]>
#### p.can3.erffel[33]
<link=p.CAN3.ERFFEL[33]>
#### p.can3.erffel[34]
<link=p.CAN3.ERFFEL[34]>
#### CAN3.ERFFEL[35]
<link=p.CAN3.ERFFEL[35]>
#### can3.erffel[40]
<link=p.CAN3.ERFFEL[40]>
#### p.can3.erffel[42]
<link=p.CAN3.ERFFEL[42]>
#### p.CAN3.ERFFEL[49]
<lang=dft>
 (rw)  [1;33m0x401db0c4[0m (0x401d8000 + 0x30c4)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[49]
<link=p.CAN3.ERFFEL[49]>
#### p.can3.erffel[51]
<link=p.CAN3.ERFFEL[51]>
#### can3.erffel[53]
<link=p.CAN3.ERFFEL[53]>
#### p.CAN3.ERFFEL[54]
<lang=dft>
 (rw)  [1;33m0x401db0d8[0m (0x401d8000 + 0x30d8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[54]
<link=p.CAN3.ERFFEL[54]>
#### can3.erffel[65]
<link=p.CAN3.ERFFEL[65]>
#### p.CAN3.ERFFEL[72]
<lang=dft>
 (rw)  [1;33m0x401db120[0m (0x401d8000 + 0x3120)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[76]
<link=p.CAN3.ERFFEL[76]>
#### p.CAN3.ERFFEL[78]
<lang=dft>
 (rw)  [1;33m0x401db138[0m (0x401d8000 + 0x3138)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[78]
<link=p.CAN3.ERFFEL[78]>
#### CAN3.ERFFEL[96]
<link=p.CAN3.ERFFEL[96]>
#### p.can3.erffel[105]
<link=p.CAN3.ERFFEL[105]>
#### can3.erffel[114]
<link=p.CAN3.ERFFEL[114]>
#### p.can3.erffel[115]
<link=p.CAN3.ERFFEL[115]>
#### can3.erffel[119]
<link=p.CAN3.ERFFEL[119]>
#### CAN3.ERFFEL[119]
<link=p.CAN3.ERFFEL[119]>
#### CAN3.ERFFEL[121]
<link=p.CAN3.ERFFEL[121]>
#### p.tmr1
<link=p.TMR1>
#### TMR1.COMP21
<link=p.TMR1.COMP21>
#### p.tmr1.comp23
<link=p.TMR1.COMP23>
#### p.TMR1.LOAD1
<lang=dft>
 (rw)  [1;33m0x401dc026[0m (0x401dc000 + 0x0026)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.tmr1.load3
<link=p.TMR1.LOAD3>
#### tmr1.load3
<link=p.TMR1.LOAD3>
#### p.TMR1.HOLD0
<lang=dft>
 (rw)  [1;33m0x401dc008[0m (0x401dc000 + 0x0008)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.TMR1.CNTR2
<lang=dft>
 (rw)  [1;33m0x401dc04a[0m (0x401dc000 + 0x004a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### TMR1.CTRL3
<link=p.TMR1.CTRL3>
#### p.TMR1.CMPLD13
<lang=dft>
 (rw)  [1;33m0x401dc070[0m (0x401dc000 + 0x0070)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### tmr1.cmpld20
<link=p.TMR1.CMPLD20>
#### p.tmr1.cmpld23
<link=p.TMR1.CMPLD23>
#### p.TMR1.CSCTRL2
<lang=dft>
 (rw)  [1;33m0x401dc054[0m (0x401dc000 + 0x0054)
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
#### p.tmr1.filt0
<link=p.TMR1.FILT0>
#### TMR1.FILT0
<link=p.TMR1.FILT0>
#### p.tmr2.comp11
<link=p.TMR2.COMP11>
#### p.TMR2.COMP22
<lang=dft>
 (rw)  [1;33m0x401e0042[0m (0x401e0000 + 0x0042)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### p.TMR2.LOAD2
<lang=dft>
 (rw)  [1;33m0x401e0046[0m (0x401e0000 + 0x0046)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.TMR2.HOLD3
<lang=dft>
 (rw)  [1;33m0x401e0068[0m (0x401e0000 + 0x0068)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.tmr2.cntr2
<link=p.TMR2.CNTR2>
#### TMR2.CNTR3
<link=p.TMR2.CNTR3>
#### p.TMR2.CTRL0
<lang=dft>
 (rw)  [1;33m0x401e000c[0m (0x401e0000 + 0x000c)
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
#### tmr2.ctrl0
<link=p.TMR2.CTRL0>
#### p.tmr2.sctrl2
<link=p.TMR2.SCTRL2>
#### p.TMR2.CMPLD10
<lang=dft>
 (rw)  [1;33m0x401e0010[0m (0x401e0000 + 0x0010)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### tmr2.cmpld11
<link=p.TMR2.CMPLD11>
#### p.TMR2.CMPLD21
<lang=dft>
 (rw)  [1;33m0x401e0032[0m (0x401e0000 + 0x0032)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### TMR2.CSCTRL0
<link=p.TMR2.CSCTRL0>
#### tmr2.filt0
<link=p.TMR2.FILT0>
#### p.tmr2.dma1
<link=p.TMR2.DMA1>
#### tmr3.comp10
<link=p.TMR3.COMP10>
#### TMR3.COMP10
<link=p.TMR3.COMP10>
#### TMR3.COMP21
<link=p.TMR3.COMP21>
#### tmr3.capt0
<link=p.TMR3.CAPT0>
#### TMR3.CAPT0
<link=p.TMR3.CAPT0>
#### p.tmr3.capt1
<link=p.TMR3.CAPT1>
#### p.tmr3.load1
<link=p.TMR3.LOAD1>
#### tmr3.load1
<link=p.TMR3.LOAD1>
#### p.TMR3.LOAD3
<lang=dft>
 (rw)  [1;33m0x401e4066[0m (0x401e4000 + 0x0066)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.TMR3.HOLD3
<lang=dft>
 (rw)  [1;33m0x401e4068[0m (0x401e4000 + 0x0068)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### tmr3.hold3
<link=p.TMR3.HOLD3>
#### tmr3.cntr3
<link=p.TMR3.CNTR3>
#### p.tmr3.ctrl0
<link=p.TMR3.CTRL0>
#### TMR3.SCTRL0
<link=p.TMR3.SCTRL0>
#### p.tmr3.cmpld12
<link=p.TMR3.CMPLD12>
#### TMR3.CMPLD12
<link=p.TMR3.CMPLD12>
#### tmr3.cmpld22
<link=p.TMR3.CMPLD22>
#### p.tmr3.cmpld23
<link=p.TMR3.CMPLD23>
#### tmr3.filt1
<link=p.TMR3.FILT1>
#### p.TMR3.DMA3
<lang=dft>
 (rw)  [1;33m0x401e4078[0m (0x401e4000 + 0x0078)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### p.tmr4.comp10
<link=p.TMR4.COMP10>
#### p.TMR4.COMP12
<lang=dft>
 (rw)  [1;33m0x401e8040[0m (0x401e8000 + 0x0040)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### p.TMR4.CAPT0
<lang=dft>
 (rw)  [1;33m0x401e8004[0m (0x401e8000 + 0x0004)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### TMR4.HOLD2
<link=p.TMR4.HOLD2>
#### p.tmr4.hold3
<link=p.TMR4.HOLD3>
#### TMR4.CTRL2
<link=p.TMR4.CTRL2>
#### p.tmr4.ctrl3
<link=p.TMR4.CTRL3>
#### p.tmr4.sctrl1
<link=p.TMR4.SCTRL1>
#### p.tmr4.cmpld22
<link=p.TMR4.CMPLD22>
#### TMR4.CMPLD23
<link=p.TMR4.CMPLD23>
#### tmr4.csctrl2
<link=p.TMR4.CSCTRL2>
#### p.gpt1.cr
<link=p.GPT1.CR>
#### gpt1.pr
<link=p.GPT1.PR>
#### p.GPT1.OCR2
<lang=dft>
 (rw)  [1;33m0x401ec014[0m (0x401ec000 + 0x0014)
GPT Output Compare Register 2
 (rw) (32)  [0;32mCOMP[0m  - [31:00] -  Compare Value
</lang>
#### p.gpt1.ocr2
<link=p.GPT1.OCR2>
#### p.gpt2
<link=p.GPT2>
#### GPT2.OCR3
<link=p.GPT2.OCR3>
#### p.ocotp.ctrl
<link=p.OCOTP.CTRL>
#### ocotp.ctrl
<link=p.OCOTP.CTRL>
#### ocotp.ctrl_clr
<link=p.OCOTP.CTRL_CLR>
#### p.ocotp.sw_sticky
<link=p.OCOTP.SW_STICKY>
#### ocotp.scs
<link=p.OCOTP.SCS>
#### p.OCOTP.CFG2
<lang=dft>
 (rw)  [1;33m0x401f4430[0m (0x401f4000 + 0x0430)
Value of OTP Bank0 Word3 (Configuration and Manufacturing Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.cfg2
<link=p.OCOTP.CFG2>
#### p.OCOTP.MEM3
<lang=dft>
 (rw)  [1;33m0x401f44b0[0m (0x401f4000 + 0x04b0)
Value of OTP Bank1 Word3 (Memory Related Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.otpmk2
<link=p.OCOTP.OTPMK2>
#### p.OCOTP.OTPMK6
<lang=dft>
 (rw)  [1;33m0x401f4560[0m (0x401f4000 + 0x0560)
Value of OTP Bank2 Word6 (OTPMK Key)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.SRK3
<lang=dft>
 (rw)  [1;33m0x401f45b0[0m (0x401f4000 + 0x05b0)
Shadow Register for OTP Bank3 Word3 (SRK Hash)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.srk3
<link=p.OCOTP.SRK3>
#### OCOTP.MAC1
<link=p.OCOTP.MAC1>
#### OCOTP.GP2
<link=p.OCOTP.GP2>
#### ocotp.rom_patch0
<link=p.OCOTP.ROM_PATCH0>
#### ocotp.gp31
<link=p.OCOTP.GP31>
#### p.OCOTP.GP42
<lang=dft>
 (rw)  [1;33m0x401f48e0[0m (0x401f4000 + 0x08e0)
Value of OTP Bank7 Word6 (GP4)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_06
<lang=dft>
 (rw)  [1;33m0x401f802c[0m (0x401f8000 + 0x002c)
SW_MUX_CTL_PAD_GPIO_EMC_06 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA06 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM2_PWMA00 of instance: flexpwm2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: SAI2_TX_BCLK of instance: sai2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT08 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO06 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO06 of instance: gpio4
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_06
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_06>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_11>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_15
<lang=dft>
 (rw)  [1;33m0x401f8050[0m (0x401f8000 + 0x0050)
SW_MUX_CTL_PAD_GPIO_EMC_15 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR06 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_IN20 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART3_CTS_B of instance: lpuart3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SPDIF_OUT of instance: spdif
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: QTIMER3_TIMER0 of instance: qtimer3
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO15 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_B_DATA02 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_15
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_19
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_19>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_20
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_20>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_23
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_23>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_28
<lang=dft>
 (rw)  [1;33m0x401f8084[0m (0x401f8000 + 0x0084)
SW_MUX_CTL_PAD_GPIO_EMC_28 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_WE of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMB02 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART5_CTS_B of instance: lpuart5
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPSPI1_SDO of instance: lpspi1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO14 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO28 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_A_DATA02 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_28
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_28
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_28>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_37
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_37>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_41
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_41>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_01
<lang=dft>
 (rw)  [1;33m0x401f80c0[0m (0x401f8000 + 0x00c0)
SW_MUX_CTL_PAD_GPIO_AD_B0_01 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXPWM2_PWMB03 of instance: flexpwm2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT15 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: REF_CLK_24M of instance: anatop
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: USB_OTG1_ID of instance: anatop
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPI2C1_SDAS of instance: lpi2c1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO01 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: EWM_OUT_B of instance: ewm
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: LPSPI3_SDO of instance: lpspi3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_01
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_05>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_09>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_02>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_11>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_15
<lang=dft>
 (rw)  [1;33m0x401f8138[0m (0x401f8000 + 0x0138)
SW_MUX_CTL_PAD_GPIO_AD_B1_15 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPIA_SS0_B of instance: flexspi
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: ACMP_OUT03 of instance: acmp
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPSPI3_SCK of instance: lpspi3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_SYNC of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA02 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO31 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_DATA7 of instance: usdhc2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_COL00 of instance: kpp
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_1588_EVENT3_IN of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO15 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_15
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_03>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_07>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_08>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_10>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_14>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_03
<lang=dft>
 (rw)  [1;33m0x401f8188[0m (0x401f8000 + 0x0188)
SW_MUX_CTL_PAD_GPIO_B1_03 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA15 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT17 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPSPI4_PCS1 of instance: lpspi4
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_SYNC of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO19 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO19 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXPWM2_PWMB03 of instance: flexpwm2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RX_EN of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO19 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_03
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_10
<lang=dft>
 (rw)  [1;33m0x401f81a4[0m (0x401f8000 + 0x01a4)
SW_MUX_CTL_PAD_GPIO_B1_10 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA22 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER3_TIMER3 of instance: qtimer3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_DATA00 of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_TX_CLK of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO26 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO26 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: ENET_REF_CLK of instance: enet
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO26 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_10
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_13>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_01>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_05>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_03
<lang=dft>
 (rw)  [1;33m0x401f81e0[0m (0x401f8000 + 0x01e0)
SW_MUX_CTL_PAD_GPIO_SD_B1_03 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_DATA0 of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIB_DATA00 of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXPWM2_PWMB03 of instance: flexpwm2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_MCLK of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXCAN1_RX of instance: flexcan1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO03 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: CCM_PMIC_READY of instance: ccm
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: SAI3_TX_BCLK of instance: sai3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_03
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_05>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_10
<lang=dft>
 (rw)  [1;33m0x401f81fc[0m (0x401f8000 + 0x01fc)
SW_MUX_CTL_PAD_GPIO_SD_B1_10 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_DATA6 of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIA_DATA02 of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART2_RX of instance: lpuart2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPI2C2_SDA of instance: lpi2c2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI2_PCS2 of instance: lpspi2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO10 of instance: gpio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_10
</lang>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_02>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_06>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_19
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_19>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_20
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_20>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_26
<lang=dft>
 (rw)  [1;33m0x401f826c[0m (0x401f8000 + 0x026c)
SW_PAD_CTL_PAD_GPIO_EMC_26 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_35
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_35>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_37
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_37>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_41
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_41>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_00>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_07>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_10>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_12
<lang=dft>
 (rw)  [1;33m0x401f82dc[0m (0x401f8000 + 0x02dc)
SW_PAD_CTL_PAD_GPIO_AD_B0_12 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_15>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_09>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_10>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_12
<lang=dft>
 (rw)  [1;33m0x401f831c[0m (0x401f8000 + 0x031c)
SW_PAD_CTL_PAD_GPIO_AD_B1_12 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_13>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_15>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_01>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_02>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_09
<lang=dft>
 (rw)  [1;33m0x401f8350[0m (0x401f8000 + 0x0350)
SW_PAD_CTL_PAD_GPIO_B0_09 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_12>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_12>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_06>
#### iomuxc.sw_pad_ctl_pad_gpio_b1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_08>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_11>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_01>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_02>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_02
<lang=dft>
 (rw)  [1;33m0x401f83cc[0m (0x401f8000 + 0x03cc)
SW_PAD_CTL_PAD_GPIO_SD_B1_02 SW PAD Control Register
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
#### IOMUXC.CSI_DATA05_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA05_SELECT_INPUT>
#### p.iomuxc.csi_data07_select_input
<link=p.IOMUXC.CSI_DATA07_SELECT_INPUT>
#### p.iomuxc.csi_pixclk_select_input
<link=p.IOMUXC.CSI_PIXCLK_SELECT_INPUT>
#### p.IOMUXC.ENET_RXERR_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8440[0m (0x401f8000 + 0x0440)
ENET_RXERR_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_26_ALT3 :
         Selecting Pad: GPIO_EMC_26 for Mode: ALT3
      0x1 - GPIO_B1_11_ALT3 :
         Selecting Pad: GPIO_B1_11 for Mode: ALT3
</lang>
#### p.IOMUXC.FLEXPWM1_PWMA0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8458[0m (0x401f8000 + 0x0458)
FLEXPWM1_PWMA0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_23_ALT1 :
         Selecting Pad: GPIO_EMC_23 for Mode: ALT1
      0x1 - GPIO_SD_B0_00_ALT1 :
         Selecting Pad: GPIO_SD_B0_00 for Mode: ALT1
</lang>
#### p.IOMUXC.FLEXPWM1_PWMA1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f845c[0m (0x401f8000 + 0x045c)
FLEXPWM1_PWMA1_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_25_ALT1 :
         Selecting Pad: GPIO_EMC_25 for Mode: ALT1
      0x1 - GPIO_SD_B0_02_ALT1 :
         Selecting Pad: GPIO_SD_B0_02 for Mode: ALT1
</lang>
#### p.iomuxc.flexpwm1_pwma1_select_input
<link=p.IOMUXC.FLEXPWM1_PWMA1_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM2_PWMB0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8488[0m (0x401f8000 + 0x0488)
FLEXPWM2_PWMB0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_07_ALT1 :
         Selecting Pad: GPIO_EMC_07 for Mode: ALT1
      0x1 - GPIO_B0_07_ALT2 :
         Selecting Pad: GPIO_B0_07 for Mode: ALT2
</lang>
#### p.iomuxc.flexpwm2_pwmb0_select_input
<link=p.IOMUXC.FLEXPWM2_PWMB0_SELECT_INPUT>
#### IOMUXC.FLEXPWM4_PWMA1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM4_PWMA1_SELECT_INPUT>
#### iomuxc.lpi2c2_scl_select_input
<link=p.IOMUXC.LPI2C2_SCL_SELECT_INPUT>
#### p.iomuxc.lpspi3_sdi_select_input
<link=p.IOMUXC.LPSPI3_SDI_SELECT_INPUT>
#### p.iomuxc.lpspi3_sdo_select_input
<link=p.IOMUXC.LPSPI3_SDO_SELECT_INPUT>
#### IOMUXC.LPSPI4_SDO_SELECT_INPUT
<link=p.IOMUXC.LPSPI4_SDO_SELECT_INPUT>
#### p.iomuxc.lpuart3_rx_select_input
<link=p.IOMUXC.LPUART3_RX_SELECT_INPUT>
#### iomuxc.lpuart7_rx_select_input
<link=p.IOMUXC.LPUART7_RX_SELECT_INPUT>
#### iomuxc.qtimer2_timer3_select_input
<link=p.IOMUXC.QTIMER2_TIMER3_SELECT_INPUT>
#### p.iomuxc.qtimer3_timer1_select_input
<link=p.IOMUXC.QTIMER3_TIMER1_SELECT_INPUT>
#### iomuxc.sai1_rx_sync_select_input
<link=p.IOMUXC.SAI1_RX_SYNC_SELECT_INPUT>
#### IOMUXC.SAI1_TX_BCLK_SELECT_INPUT
<link=p.IOMUXC.SAI1_TX_BCLK_SELECT_INPUT>
#### p.iomuxc.sai2_tx_sync_select_input
<link=p.IOMUXC.SAI2_TX_SYNC_SELECT_INPUT>
#### iomuxc.usdhc2_clk_select_input
<link=p.IOMUXC.USDHC2_CLK_SELECT_INPUT>
#### iomuxc.usdhc2_data3_select_input
<link=p.IOMUXC.USDHC2_DATA3_SELECT_INPUT>
#### p.iomuxc.usdhc2_data4_select_input
<link=p.IOMUXC.USDHC2_DATA4_SELECT_INPUT>
#### p.iomuxc.xbar1_in08_select_input
<link=p.IOMUXC.XBAR1_IN08_SELECT_INPUT>
#### p.iomuxc.xbar1_in18_select_input
<link=p.IOMUXC.XBAR1_IN18_SELECT_INPUT>
#### IOMUXC.XBAR1_IN24_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN24_SELECT_INPUT>
#### p.iomuxc.xbar1_in16_select_input
<link=p.IOMUXC.XBAR1_IN16_SELECT_INPUT>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_05>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_06>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_11>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_13
<lang=dft>
 (rw)  [1;33m0x401f8690[0m (0x401f8000 + 0x0690)
SW_MUX_CTL_PAD_GPIO_SPI_B0_13 SW MUX Control Register
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_13
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_03>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_03>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_07
<lang=dft>
 (rw)  [1;33m0x401f86b0[0m (0x401f8000 + 0x06b0)
SW_MUX_CTL_PAD_GPIO_SPI_B1_07 SW MUX Control Register
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B1_07
</lang>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_02>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_04
<lang=dft>
 (rw)  [1;33m0x401f86c4[0m (0x401f8000 + 0x06c4)
SW_PAD_CTL_PAD_GPIO_SPI_B0_04 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_06>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_11>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_03>
#### p.iomuxc.enet2_ipp_ind_mac0_rxdata_select_input_1
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1>
#### p.iomuxc.enet2_ipp_ind_mac0_txclk_select_input
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_TXCLK_SELECT_INPUT>
#### IOMUXC.ENET2_IPP_IND_MAC0_TXCLK_SELECT_INPUT
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_TXCLK_SELECT_INPUT>
#### IOMUXC.FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT>
#### p.iomuxc.flexspi2_ipp_ind_io_fa_bit1_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT>
#### p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8740[0m (0x401f8000 + 0x0740)
FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_13_ALT8 :
         Selecting Pad: GPIO_EMC_13 for Mode: ALT8
      0x1 - GPIO_SPI_B0_11_ALT0 :
         Selecting Pad: GPIO_SPI_B0_11 for Mode: ALT0
</lang>
#### iomuxc.flexspi2_ipp_ind_io_fb_bit0_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT>
#### iomuxc.gpt1_ipp_ind_clkin_select_input
<link=p.IOMUXC.GPT1_IPP_IND_CLKIN_SELECT_INPUT>
#### p.iomuxc.gpt2_ipp_ind_capin1_select_input
<link=p.IOMUXC.GPT2_IPP_IND_CAPIN1_SELECT_INPUT>
#### IOMUXC.GPT2_IPP_IND_CLKIN_SELECT_INPUT
<link=p.IOMUXC.GPT2_IPP_IND_CLKIN_SELECT_INPUT>
#### FLEXSPI.LUTCR
<link=p.FLEXSPI.LUTCR>
#### p.FLEXSPI.FLSHB1CR0
<lang=dft>
 (rw)  [1;33m0x402a8068[0m (0x402a8000 + 0x0068)
Flash B1 Control Register 0
 (rw) (23)  [0;32mFLSHSZ[0m  - [22:00] -  Flash Size in KByte.
</lang>
#### p.FLEXSPI.FLSHCR2A2
<lang=dft>
 (rw)  [1;33m0x402a8084[0m (0x402a8000 + 0x0084)
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
#### p.flexspi.flshcr2a2
<link=p.FLEXSPI.FLSHCR2A2>
#### p.flexspi.flshcr4
<link=p.FLEXSPI.FLSHCR4>
#### FLEXSPI.IPTXFCR
<link=p.FLEXSPI.IPTXFCR>
#### p.FLEXSPI.STS1
<lang=dft>
 (ro)  [1;33m0x402a80e4[0m (0x402a8000 + 0x00e4)
Status Register 1
 (ro) (04)  [0;32mAHBCMDERRID[0m  - [03:00] -  Indicates the sequence index when an AHB command error is detected. This field 
 will be cleared when INTR[AHBCMDERR] is write-1-clear(w1c).
 (ro) (04)  [0;32mAHBCMDERRCODE[0m  - [11:08] -  Indicates the Error Code when AHB command Error detected. This field will be cl
 eared when INTR[AHBCMDERR] is write-1-clear(w1c).
      0 - AHBCMDERRCODE_0 :
         No error.
      0x2 - AHBCMDERRCODE_2 :
         AHB Write command with JMP_ON_CS instruction used in the sequence.
      0x3 - AHBCMDERRCODE_3 :
         There is unknown instruction opcode in the sequence.
      0x4 - AHBCMDERRCODE_4 :
         Instruction DUMMY_SDR/DUMMY_RWDS_SDR used in DDR sequence.
      0x5 - AHBCMDERRCODE_5 :
         Instruction DUMMY_DDR/DUMMY_RWDS_DDR used in SDR sequence.
      0xE - AHBCMDERRCODE_14 :
         Sequence execution timeout.
 (ro) (04)  [0;32mIPCMDERRID[0m  - [19:16] -  Indicates the sequence Index when IP command error detected. This field will be
  cleared when INTR[IPCMDERR] is write-1-clear(w1c).
 (ro) (04)  [0;32mIPCMDERRCODE[0m  - [27:24] -  Indicates the Error Code when IP command Error detected. This field will be cle
 ared when INTR[IPCMDERR] is write-1-clear(w1c).
      0 - IPCMDERRCODE_0 :
         No error.
      0x2 - IPCMDERRCODE_2 :
         IP command with JMP_ON_CS instruction used in the sequence.
      0x3 - IPCMDERRCODE_3 :
         There is unknown instruction opcode in the sequence.
      0x4 - IPCMDERRCODE_4 :
         Instruction DUMMY_SDR/DUMMY_RWDS_SDR used in DDR sequence.
      0x5 - IPCMDERRCODE_5 :
         Instruction DUMMY_DDR/DUMMY_RWDS_DDR used in SDR sequence.
      0x6 - IPCMDERRCODE_6 :
         Flash access start address exceed the whole flash address range (A1/A2/
         B1/B2).
      0xE - IPCMDERRCODE_14 :
         Sequence execution timeout.
      0xF - IPCMDERRCODE_15 :
         Flash boundary crossed.
</lang>
#### FLEXSPI.STS2
<link=p.FLEXSPI.STS2>
#### p.FLEXSPI.AHBSPNDSTS
<lang=dft>
 (ro)  [1;33m0x402a80ec[0m (0x402a8000 + 0x00ec)
AHB Suspend Status Register
 (ro) (01)  [0;32mACTIVE[0m  - [00:00] -  Indicates if an AHB read prefetch command sequence has been suspended.
 (ro) (03)  [0;32mBUFID[0m  - [03:01] -  AHB RX BUF ID for suspended command sequence.
 (ro) (16)  [0;32mDATLFT[0m  - [31:16] -  Left Data size for suspended command sequence (in byte).
</lang>
#### flexspi.rfdr[0]
<link=p.FLEXSPI.RFDR[0]>
#### p.flexspi.rfdr[7]
<link=p.FLEXSPI.RFDR[7]>
#### flexspi.rfdr[7]
<link=p.FLEXSPI.RFDR[7]>
#### p.FLEXSPI.RFDR[9]
<lang=dft>
 (ro)  [1;33m0x402a8124[0m (0x402a8000 + 0x0124)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI.RFDR[10]
<lang=dft>
 (ro)  [1;33m0x402a8128[0m (0x402a8000 + 0x0128)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi.rfdr[15]
<link=p.FLEXSPI.RFDR[15]>
#### p.FLEXSPI.RFDR[17]
<lang=dft>
 (ro)  [1;33m0x402a8144[0m (0x402a8000 + 0x0144)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI.RFDR[21]
<lang=dft>
 (ro)  [1;33m0x402a8154[0m (0x402a8000 + 0x0154)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi.rfdr[30]
<link=p.FLEXSPI.RFDR[30]>
#### FLEXSPI.RFDR[30]
<link=p.FLEXSPI.RFDR[30]>
#### FLEXSPI.TFDR[1]
<link=p.FLEXSPI.TFDR[1]>
#### p.FLEXSPI.TFDR[5]
<lang=dft>
 (wo)  [1;33m0x402a8194[0m (0x402a8000 + 0x0194)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI.TFDR[11]
<lang=dft>
 (wo)  [1;33m0x402a81ac[0m (0x402a8000 + 0x01ac)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi.tfdr[13]
<link=p.FLEXSPI.TFDR[13]>
#### p.FLEXSPI.TFDR[16]
<lang=dft>
 (wo)  [1;33m0x402a81c0[0m (0x402a8000 + 0x01c0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi.tfdr[22]
<link=p.FLEXSPI.TFDR[22]>
#### flexspi.tfdr[23]
<link=p.FLEXSPI.TFDR[23]>
#### p.FLEXSPI.TFDR[24]
<lang=dft>
 (wo)  [1;33m0x402a81e0[0m (0x402a8000 + 0x01e0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi.tfdr[24]
<link=p.FLEXSPI.TFDR[24]>
#### p.flexspi.tfdr[25]
<link=p.FLEXSPI.TFDR[25]>
#### p.FLEXSPI.LUT[3]
<lang=dft>
 (rw)  [1;33m0x402a820c[0m (0x402a8000 + 0x020c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi.lut[5]
<link=p.FLEXSPI.LUT[5]>
#### p.FLEXSPI.LUT[10]
<lang=dft>
 (rw)  [1;33m0x402a8228[0m (0x402a8000 + 0x0228)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[11]
<link=p.FLEXSPI.LUT[11]>
#### p.flexspi.lut[14]
<link=p.FLEXSPI.LUT[14]>
#### p.FLEXSPI.LUT[17]
<lang=dft>
 (rw)  [1;33m0x402a8244[0m (0x402a8000 + 0x0244)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[19]
<link=p.FLEXSPI.LUT[19]>
#### p.flexspi.lut[20]
<link=p.FLEXSPI.LUT[20]>
#### FLEXSPI.LUT[24]
<link=p.FLEXSPI.LUT[24]>
#### flexspi.lut[30]
<link=p.FLEXSPI.LUT[30]>
#### flexspi.lut[35]
<link=p.FLEXSPI.LUT[35]>
#### p.flexspi.lut[42]
<link=p.FLEXSPI.LUT[42]>
#### flexspi.lut[45]
<link=p.FLEXSPI.LUT[45]>
#### flexspi2.intr
<link=p.FLEXSPI2.INTR>
#### p.flexspi2.ahbrxbuf0cr0
<link=p.FLEXSPI2.AHBRXBUF0CR0>
#### p.flexspi2.flshcr1a2
<link=p.FLEXSPI2.FLSHCR1A2>
#### FLEXSPI2.FLSHCR1B1
<link=p.FLEXSPI2.FLSHCR1B1>
#### FLEXSPI2.FLSHCR2B2
<link=p.FLEXSPI2.FLSHCR2B2>
#### FLEXSPI2.IPCR0
<link=p.FLEXSPI2.IPCR0>
#### p.FLEXSPI2.DLLCRA
<lang=dft>
 (rw)  [1;33m0x402a40c0[0m (0x402a4000 + 0x00c0)
DLL Control Register 0
 (rw) (01)  [0;32mDLLEN[0m  - [00:00] -  DLL calibration enable.
 (rw) (01)  [0;32mDLLRESET[0m  - [01:01] -  Software could force a reset on DLL by setting this field to 0x1. This will cau
 se the DLL to lose lock and re-calibrate to detect an ref_clock half period pha
 se shift. The reset action is edge triggered, so software need to clear this bi
 t after set this bit (no delay limitation).
 (rw) (04)  [0;32mSLVDLYTARGET[0m  - [06:03] -  The delay target for slave delay line is: ((SLVDLYTARGET+1) * 1/32 * clock cycl
 e of reference clock (serial clock).
 (rw) (01)  [0;32mOVRDEN[0m  - [08:08] -  Slave clock delay line delay cell number selection override enable.
 (rw) (06)  [0;32mOVRDVAL[0m  - [14:09] -  Slave clock delay line delay cell number selection override value.
</lang>
#### p.FLEXSPI2.AHBSPNDSTS
<lang=dft>
 (ro)  [1;33m0x402a40ec[0m (0x402a4000 + 0x00ec)
AHB Suspend Status Register
 (ro) (01)  [0;32mACTIVE[0m  - [00:00] -  Indicates if an AHB read prefetch command sequence has been suspended.
 (ro) (03)  [0;32mBUFID[0m  - [03:01] -  AHB RX BUF ID for suspended command sequence.
 (ro) (16)  [0;32mDATLFT[0m  - [31:16] -  Left Data size for suspended command sequence (in byte).
</lang>
#### p.FLEXSPI2.RFDR[10]
<lang=dft>
 (ro)  [1;33m0x402a4128[0m (0x402a4000 + 0x0128)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi2.rfdr[12]
<link=p.FLEXSPI2.RFDR[12]>
#### p.flexspi2.rfdr[15]
<link=p.FLEXSPI2.RFDR[15]>
#### FLEXSPI2.RFDR[16]
<link=p.FLEXSPI2.RFDR[16]>
#### flexspi2.rfdr[20]
<link=p.FLEXSPI2.RFDR[20]>
#### p.FLEXSPI2.RFDR[25]
<lang=dft>
 (ro)  [1;33m0x402a4164[0m (0x402a4000 + 0x0164)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.tfdr[4]
<link=p.FLEXSPI2.TFDR[4]>
#### p.flexspi2.tfdr[6]
<link=p.FLEXSPI2.TFDR[6]>
#### p.flexspi2.tfdr[13]
<link=p.FLEXSPI2.TFDR[13]>
#### p.flexspi2.tfdr[14]
<link=p.FLEXSPI2.TFDR[14]>
#### FLEXSPI2.TFDR[15]
<link=p.FLEXSPI2.TFDR[15]>
#### p.FLEXSPI2.TFDR[16]
<lang=dft>
 (wo)  [1;33m0x402a41c0[0m (0x402a4000 + 0x01c0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI2.TFDR[23]
<link=p.FLEXSPI2.TFDR[23]>
#### p.flexspi2.tfdr[25]
<link=p.FLEXSPI2.TFDR[25]>
#### p.FLEXSPI2.TFDR[30]
<lang=dft>
 (wo)  [1;33m0x402a41f8[0m (0x402a4000 + 0x01f8)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi2.lut[5]
<link=p.FLEXSPI2.LUT[5]>
#### p.flexspi2.lut[11]
<link=p.FLEXSPI2.LUT[11]>
#### FLEXSPI2.LUT[26]
<link=p.FLEXSPI2.LUT[26]>
#### p.FLEXSPI2.LUT[37]
<lang=dft>
 (rw)  [1;33m0x402a4294[0m (0x402a4000 + 0x0294)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi2.lut[46]
<link=p.FLEXSPI2.LUT[46]>
#### p.FLEXSPI2.LUT[52]
<lang=dft>
 (rw)  [1;33m0x402a42d0[0m (0x402a4000 + 0x02d0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[58]
<lang=dft>
 (rw)  [1;33m0x402a42e8[0m (0x402a4000 + 0x02e8)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[60]
<lang=dft>
 (rw)  [1;33m0x402a42f0[0m (0x402a4000 + 0x02f0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### pxp.out_ctrl_set
<link=p.PXP.OUT_CTRL_SET>
#### PXP.OUT_CTRL_SET
<link=p.PXP.OUT_CTRL_SET>
#### pxp.out_buf
<link=p.PXP.OUT_BUF>
#### PXP.OUT_BUF
<link=p.PXP.OUT_BUF>
#### pxp.out_ps_ulc
<link=p.PXP.OUT_PS_ULC>
#### p.pxp.ps_ubuf
<link=p.PXP.PS_UBUF>
#### p.pxp.ps_vbuf
<link=p.PXP.PS_VBUF>
#### pxp.ps_clrkeylow
<link=p.PXP.PS_CLRKEYLOW>
#### p.PXP.PS_CLRKEYHIGH
<lang=dft>
 (rw)  [1;33m0x402b4140[0m (0x402b4000 + 0x0140)
PS Color Key High
 (rw) (24)  [0;32mPIXEL[0m  - [23:00] -  High range of color key applied to PS buffer
 (ro) (08)  [0;32mRSVD1[0m  - [31:24] -  Reserved, always set to zero.
</lang>
#### pxp.ps_clrkeyhigh
<link=p.PXP.PS_CLRKEYHIGH>
#### lcdif.ctrl
<link=p.LCDIF.CTRL>
#### p.lcdif.ctrl1_clr
<link=p.LCDIF.CTRL1_CLR>
#### p.LCDIF.CTRL2_SET
<lang=dft>
 (rw)  [1;33m0x402b8024[0m (0x402b8000 + 0x0024)
LCDIF General Control2 Register
 (rw) (03)  [0;32mEVEN_LINE_PATTERN[0m  - [14:12] -  This field determines the order of the RGB components of each pixel in EVEN lin
 es (line numbers 2,4,6,
      0 - RGB :
         RGB
      0x1 - RBG :
         RBG
      0x2 - GBR :
         GBR
      0x3 - GRB :
         GRB
      0x4 - BRG :
         BRG
      0x5 - BGR :
         BGR
 (rw) (03)  [0;32mODD_LINE_PATTERN[0m  - [18:16] -  This field determines the order of the RGB components of each pixel in ODD line
 s (line numbers 1,3,5,
      0 - RGB :
         RGB
      0x1 - RBG :
         RBG
      0x2 - GBR :
         GBR
      0x3 - GRB :
         GRB
      0x4 - BRG :
         BRG
      0x5 - BGR :
         BGR
 (rw) (01)  [0;32mBURST_LEN_8[0m  - [20:20] -  By default, when the LCDIF is in the bus master mode, it will issue AXI bursts 
 of length 16 (except when in packed 24 bpp mode, it will issue bursts of length
  15)
 (rw) (03)  [0;32mOUTSTANDING_REQS[0m  - [23:21] -  This bitfield indicates the maximum number of outstanding transactions that LCD
 IF should request when it is acting as a bus master
      0 - REQ_1 :
         REQ_1
      0x1 - REQ_2 :
         REQ_2
      0x2 - REQ_4 :
         REQ_4
      0x3 - REQ_8 :
         REQ_8
      0x4 - REQ_16 :
         REQ_16
</lang>
#### LCDIF.CUR_BUF
<link=p.LCDIF.CUR_BUF>
#### p.lcdif.next_buf
<link=p.LCDIF.NEXT_BUF>
#### LCDIF.NEXT_BUF
<link=p.LCDIF.NEXT_BUF>
#### p.lcdif.vdctrl0
<link=p.LCDIF.VDCTRL0>
#### lcdif.vdctrl0
<link=p.LCDIF.VDCTRL0>
#### p.LCDIF.VDCTRL4
<lang=dft>
 (rw)  [1;33m0x402b80b0[0m (0x402b8000 + 0x00b0)
LCDIF VSYNC Mode and Dotclk Mode Control Register4
 (rw) (18)  [0;32mDOTCLK_H_VALID_DATA_CNT[0m  - [17:00] -  Total number of DISPLAY CLOCK (pix_clk) cycles on each horizontal line that car
 ry valid data in DOTCLK mode
 (rw) (01)  [0;32mSYNC_SIGNALS_ON[0m  - [18:18] -  Set this field to 1 if the LCD controller requires that the VSYNC or VSYNC/HSYN
 C/DOTCLK control signals should be active at least one frame before the data tr
 ansfers actually start and remain active at least one frame after the data tran
 sfers end
 (rw) (03)  [0;32mDOTCLK_DLY_SEL[0m  - [31:29] -  This bitfield selects the amount of time by which the DOTCLK signal should be d
 elayed before coming out of the LCD_DOTCK pin
</lang>
#### lcdif.pigeonctrl0
<link=p.LCDIF.PIGEONCTRL0>
#### lcdif.pigeonctrl0_set
<link=p.LCDIF.PIGEONCTRL0_SET>
#### p.LCDIF.PIGEONCTRL1_SET
<lang=dft>
 (rw)  [1;33m0x402b8394[0m (0x402b8000 + 0x0394)
LCDIF Pigeon Mode Control1 Register
 (rw) (12)  [0;32mFRAME_CNT_PERIOD[0m  - [11:00] -  Period of frame counter
 (rw) (12)  [0;32mFRAME_CNT_CYCLES[0m  - [27:16] -  Max cycles of frame counter
</lang>
#### p.lcdif.pigeonctrl1_set
<link=p.LCDIF.PIGEONCTRL1_SET>
#### LCDIF.PIGEON_0_2
<link=p.LCDIF.PIGEON_0_2>
#### p.lcdif.pigeon_1_1
<link=p.LCDIF.PIGEON_1_1>
#### lcdif.pigeon_1_2
<link=p.LCDIF.PIGEON_1_2>
#### LCDIF.PIGEON_2_1
<link=p.LCDIF.PIGEON_2_1>
#### p.LCDIF.PIGEON_4_1
<lang=dft>
 (rw)  [1;33m0x402b8910[0m (0x402b8000 + 0x0910)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### p.lcdif.pigeon_4_1
<link=p.LCDIF.PIGEON_4_1>
#### LCDIF.PIGEON_11_0
<link=p.LCDIF.PIGEON_11_0>
#### p.LCDIF.PIGEON_11_2
<lang=dft>
 (rw)  [1;33m0x402b8ae0[0m (0x402b8000 + 0x0ae0)
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
#### CSI.CSICR1
<link=p.CSI.CSICR1>
#### csi.csirxcnt
<link=p.CSI.CSIRXCNT>
#### p.usdhc1
<link=p.USDHC1>
#### p.usdhc1.cmd_rsp3
<link=p.USDHC1.CMD_RSP3>
#### p.usdhc1.int_status_en
<link=p.USDHC1.INT_STATUS_EN>
#### USDHC1.DLL_CTRL
<link=p.USDHC1.DLL_CTRL>
#### p.usdhc1.dll_status
<link=p.USDHC1.DLL_STATUS>
#### usdhc1.clk_tune_ctrl_status
<link=p.USDHC1.CLK_TUNE_CTRL_STATUS>
#### USDHC2.BLK_ATT
<link=p.USDHC2.BLK_ATT>
#### p.USDHC2.CMD_RSP2
<lang=dft>
 (ro)  [1;33m0x402c4018[0m (0x402c4000 + 0x0018)
Command Response2
 (ro) (32)  [0;32mCMDRSP2[0m  - [31:00] -  Command Response 2
</lang>
#### p.USDHC2.INT_STATUS
<lang=dft>
 (rw)  [1;33m0x402c4030[0m (0x402c4000 + 0x0030)
Interrupt Status
 (rw) (01)  [0;32mCC[0m  - [00:00] -  Command Complete
      0 - CC_0 :
         Command not complete
      0x1 - CC_1 :
         Command complete
 (rw) (01)  [0;32mTC[0m  - [01:01] -  Transfer Complete
      0 - TC_0 :
         Transfer not complete
      0x1 - TC_1 :
         Transfer complete
 (rw) (01)  [0;32mBGE[0m  - [02:02] -  Block Gap Event
      0 - BGE_0 :
         No block gap event
      0x1 - BGE_1 :
         Transaction stopped at block gap
 (rw) (01)  [0;32mDINT[0m  - [03:03] -  DMA Interrupt
      0 - DINT_0 :
         No DMA Interrupt
      0x1 - DINT_1 :
         DMA Interrupt is generated
 (rw) (01)  [0;32mBWR[0m  - [04:04] -  Buffer Write Ready
      0 - BWR_0 :
         Not ready to write buffer
      0x1 - BWR_1 :
         Ready to write buffer:
 (rw) (01)  [0;32mBRR[0m  - [05:05] -  Buffer Read Ready
      0 - BRR_0 :
         Not ready to read buffer
      0x1 - BRR_1 :
         Ready to read buffer
 (rw) (01)  [0;32mCINS[0m  - [06:06] -  Card Insertion
      0 - CINS_0 :
         Card state unstable or removed
      0x1 - CINS_1 :
         Card inserted
 (rw) (01)  [0;32mCRM[0m  - [07:07] -  Card Removal
      0 - CRM_0 :
         Card state unstable or inserted
      0x1 - CRM_1 :
         Card removed
 (rw) (01)  [0;32mCINT[0m  - [08:08] -  Card Interrupt
      0 - CINT_0 :
         No Card Interrupt
      0x1 - CINT_1 :
         Generate Card Interrupt
 (rw) (01)  [0;32mRTE[0m  - [12:12] -  Re-Tuning Event: (only for SD3.0 SDR104 mode and EMMC HS200 mode)
      0 - RTE_0 :
         Re-Tuning is not required
      0x1 - RTE_1 :
         Re-Tuning should be performed
 (rw) (01)  [0;32mTP[0m  - [14:14] -  Tuning Pass:(only for SD3.0 SDR104 mode and EMMC HS200 mode)
 (rw) (01)  [0;32mCTOE[0m  - [16:16] -  Command Timeout Error
      0 - CTOE_0 :
         No Error
      0x1 - CTOE_1 :
         Time out
 (rw) (01)  [0;32mCCE[0m  - [17:17] -  Command CRC Error
      0 - CCE_0 :
         No Error
      0x1 - CCE_1 :
         CRC Error Generated.
 (rw) (01)  [0;32mCEBE[0m  - [18:18] -  Command End Bit Error
      0 - CEBE_0 :
         No Error
      0x1 - CEBE_1 :
         End Bit Error Generated
 (rw) (01)  [0;32mCIE[0m  - [19:19] -  Command Index Error
      0 - CIE_0 :
         No Error
      0x1 - CIE_1 :
         Error
 (rw) (01)  [0;32mDTOE[0m  - [20:20] -  Data Timeout Error
      0 - DTOE_0 :
         No Error
      0x1 - DTOE_1 :
         Time out
 (rw) (01)  [0;32mDCE[0m  - [21:21] -  Data CRC Error
      0 - DCE_0 :
         No Error
      0x1 - DCE_1 :
         Error
 (rw) (01)  [0;32mDEBE[0m  - [22:22] -  Data End Bit Error
      0 - DEBE_0 :
         No Error
      0x1 - DEBE_1 :
         Error
 (rw) (01)  [0;32mAC12E[0m  - [24:24] -  Auto CMD12 Error
      0 - AC12E_0 :
         No Error
      0x1 - AC12E_1 :
         Error
 (rw) (01)  [0;32mTNE[0m  - [26:26] -  Tuning Error: (only for SD3.0 SDR104 mode and EMMC HS200 mode)
 (rw) (01)  [0;32mDMAE[0m  - [28:28] -  DMA Error
      0 - DMAE_0 :
         No Error
      0x1 - DMAE_1 :
         Error
</lang>
#### p.USDHC2.INT_STATUS_EN
<lang=dft>
 (rw)  [1;33m0x402c4034[0m (0x402c4000 + 0x0034)
Interrupt Status Enable
 (rw) (01)  [0;32mCCSEN[0m  - [00:00] -  Command Complete Status Enable
      0 - CCSEN_0 :
         Masked
      0x1 - CCSEN_1 :
         Enabled
 (rw) (01)  [0;32mTCSEN[0m  - [01:01] -  Transfer Complete Status Enable
      0 - TCSEN_0 :
         Masked
      0x1 - TCSEN_1 :
         Enabled
 (rw) (01)  [0;32mBGESEN[0m  - [02:02] -  Block Gap Event Status Enable
      0 - BGESEN_0 :
         Masked
      0x1 - BGESEN_1 :
         Enabled
 (rw) (01)  [0;32mDINTSEN[0m  - [03:03] -  DMA Interrupt Status Enable
      0 - DINTSEN_0 :
         Masked
      0x1 - DINTSEN_1 :
         Enabled
 (rw) (01)  [0;32mBWRSEN[0m  - [04:04] -  Buffer Write Ready Status Enable
      0 - BWRSEN_0 :
         Masked
      0x1 - BWRSEN_1 :
         Enabled
 (rw) (01)  [0;32mBRRSEN[0m  - [05:05] -  Buffer Read Ready Status Enable
      0 - BRRSEN_0 :
         Masked
      0x1 - BRRSEN_1 :
         Enabled
 (rw) (01)  [0;32mCINSSEN[0m  - [06:06] -  Card Insertion Status Enable
      0 - CINSSEN_0 :
         Masked
      0x1 - CINSSEN_1 :
         Enabled
 (rw) (01)  [0;32mCRMSEN[0m  - [07:07] -  Card Removal Status Enable
      0 - CRMSEN_0 :
         Masked
      0x1 - CRMSEN_1 :
         Enabled
 (rw) (01)  [0;32mCINTSEN[0m  - [08:08] -  Card Interrupt Status Enable
      0 - CINTSEN_0 :
         Masked
      0x1 - CINTSEN_1 :
         Enabled
 (rw) (01)  [0;32mRTESEN[0m  - [12:12] -  Re-Tuning Event Status Enable
      0 - RTESEN_0 :
         Masked
      0x1 - RTESEN_1 :
         Enabled
 (rw) (01)  [0;32mTPSEN[0m  - [14:14] -  Tuning Pass Status Enable
      0 - TPSEN_0 :
         Masked
      0x1 - TPSEN_1 :
         Enabled
 (rw) (01)  [0;32mCTOESEN[0m  - [16:16] -  Command Timeout Error Status Enable
      0 - CTOESEN_0 :
         Masked
      0x1 - CTOESEN_1 :
         Enabled
 (rw) (01)  [0;32mCCESEN[0m  - [17:17] -  Command CRC Error Status Enable
      0 - CCESEN_0 :
         Masked
      0x1 - CCESEN_1 :
         Enabled
 (rw) (01)  [0;32mCEBESEN[0m  - [18:18] -  Command End Bit Error Status Enable
      0 - CEBESEN_0 :
         Masked
      0x1 - CEBESEN_1 :
         Enabled
 (rw) (01)  [0;32mCIESEN[0m  - [19:19] -  Command Index Error Status Enable
      0 - CIESEN_0 :
         Masked
      0x1 - CIESEN_1 :
         Enabled
 (rw) (01)  [0;32mDTOESEN[0m  - [20:20] -  Data Timeout Error Status Enable
      0 - DTOESEN_0 :
         Masked
      0x1 - DTOESEN_1 :
         Enabled
 (rw) (01)  [0;32mDCESEN[0m  - [21:21] -  Data CRC Error Status Enable
      0 - DCESEN_0 :
         Masked
      0x1 - DCESEN_1 :
         Enabled
 (rw) (01)  [0;32mDEBESEN[0m  - [22:22] -  Data End Bit Error Status Enable
      0 - DEBESEN_0 :
         Masked
      0x1 - DEBESEN_1 :
         Enabled
 (rw) (01)  [0;32mAC12ESEN[0m  - [24:24] -  Auto CMD12 Error Status Enable
      0 - AC12ESEN_0 :
         Masked
      0x1 - AC12ESEN_1 :
         Enabled
 (rw) (01)  [0;32mTNESEN[0m  - [26:26] -  Tuning Error Status Enable
      0 - TNESEN_0 :
         Masked
      0x1 - TNESEN_1 :
         Enabled
 (rw) (01)  [0;32mDMAESEN[0m  - [28:28] -  DMA Error Status Enable
      0 - DMAESEN_0 :
         Masked
      0x1 - DMAESEN_1 :
         Enabled
</lang>
#### p.usdhc2.mix_ctrl
<link=p.USDHC2.MIX_CTRL>
#### p.ENET.RDAR
<lang=dft>
 (rw)  [1;33m0x402d8010[0m (0x402d8000 + 0x0010)
Receive Descriptor Active Register
 (rw) (01)  [0;32mRDAR[0m  - [24:24] -  Receive Descriptor Active
</lang>
#### p.ENET.OPD
<lang=dft>
 (rw)  [1;33m0x402d80ec[0m (0x402d8000 + 0x00ec)
Opcode/Pause Duration Register
 (rw) (16)  [0;32mPAUSE_DUR[0m  - [15:00] -  Pause Duration
 (ro) (16)  [0;32mOPCODE[0m  - [31:16] -  Opcode Field In PAUSE Frames
</lang>
#### enet.gaur
<link=p.ENET.GAUR>
#### p.ENET.RDSR
<lang=dft>
 (rw)  [1;33m0x402d8180[0m (0x402d8000 + 0x0180)
Receive Descriptor Ring Start Register
 (rw) (29)  [0;32mR_DES_START[0m  - [31:03] -  Pointer to the beginning of the receive buffer descriptor queue.
</lang>
#### p.enet.tdsr
<link=p.ENET.TDSR>
#### p.enet.mrbr
<link=p.ENET.MRBR>
#### p.enet.rmon_t_packets
<link=p.ENET.RMON_T_PACKETS>
#### p.enet.rmon_t_crc_align
<link=p.ENET.RMON_T_CRC_ALIGN>
#### ENET.RMON_T_JAB
<link=p.ENET.RMON_T_JAB>
#### p.ENET.RMON_T_P256TO511
<lang=dft>
 (ro)  [1;33m0x402d8234[0m (0x402d8000 + 0x0234)
Tx 256- to 511-byte Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of 256- to 511-byte transmit packets
</lang>
#### p.ENET.IEEE_T_1COL
<lang=dft>
 (ro)  [1;33m0x402d8250[0m (0x402d8000 + 0x0250)
Frames Transmitted with Single Collision Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with one collision
</lang>
#### p.ENET.IEEE_T_DEF
<lang=dft>
 (ro)  [1;33m0x402d8258[0m (0x402d8000 + 0x0258)
Frames Transmitted after Deferral Delay Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with deferral delay
</lang>
#### enet.ieee_t_def
<link=p.ENET.IEEE_T_DEF>
#### ENET.IEEE_T_EXCOL
<link=p.ENET.IEEE_T_EXCOL>
#### p.enet.ieee_t_octets_ok
<link=p.ENET.IEEE_T_OCTETS_OK>
#### p.ENET.RMON_R_P64
<lang=dft>
 (ro)  [1;33m0x402d82a8[0m (0x402d8000 + 0x02a8)
Rx 64-Byte Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of 64-byte receive packets
</lang>
#### p.ENET.RMON_R_P_GTE2048
<lang=dft>
 (ro)  [1;33m0x402d82c0[0m (0x402d8000 + 0x02c0)
Rx Packets Greater than 2048 Bytes Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of greater-than-2048-byte recieve packets
</lang>
#### p.ENET.IEEE_R_DROP
<lang=dft>
 (ro)  [1;33m0x402d82c8[0m (0x402d8000 + 0x02c8)
Frames not Counted Correctly Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Frame count
</lang>
#### p.enet.tcsr2
<link=p.ENET.TCSR2>
#### ENET.TCSR2
<link=p.ENET.TCSR2>
#### p.enet2.mmfr
<link=p.ENET2.MMFR>
#### p.ENET2.RCR
<lang=dft>
 (rw)  [1;33m0x402d4084[0m (0x402d4000 + 0x0084)
Receive Control Register
 (rw) (01)  [0;32mLOOP[0m  - [00:00] -  Internal Loopback
      0 - LOOP_0 :
         Loopback disabled.
      0x1 - LOOP_1 :
         Transmitted frames are looped back internal to the device and transmit 
         MII output signals are not asserted. DRT must be cleared.
 (rw) (01)  [0;32mDRT[0m  - [01:01] -  Disable Receive On Transmit
      0 - DRT_0 :
         Receive path operates independently of transmit (i.e., full-duplex mode
         ). Can also be used to monitor transmit activity in half-duplex mode.
      0x1 - DRT_1 :
         Disable reception of frames while transmitting. (Normally used for half
         -duplex mode.)
 (rw) (01)  [0;32mMII_MODE[0m  - [02:02] -  Media Independent Interface Mode
      0x1 - MII_MODE_1 :
         MII or RMII mode, as indicated by the RMII_MODE field.
 (rw) (01)  [0;32mPROM[0m  - [03:03] -  Promiscuous Mode
      0 - PROM_0 :
         Disabled.
      0x1 - PROM_1 :
         Enabled.
 (rw) (01)  [0;32mBC_REJ[0m  - [04:04] -  Broadcast Frame Reject
 (rw) (01)  [0;32mFCE[0m  - [05:05] -  Flow Control Enable
 (rw) (01)  [0;32mRMII_MODE[0m  - [08:08] -  RMII Mode Enable
      0 - RMII_MODE_0 :
         MAC configured for MII mode.
      0x1 - RMII_MODE_1 :
         MAC configured for RMII operation.
 (rw) (01)  [0;32mRMII_10T[0m  - [09:09] -  Enables 10-Mbit/s mode of the RMII .
      0 - RMII_10T_0 :
         100-Mbit/s operation.
      0x1 - RMII_10T_1 :
         10-Mbit/s operation.
 (rw) (01)  [0;32mPADEN[0m  - [12:12] -  Enable Frame Padding Remove On Receive
      0 - PADEN_0 :
         No padding is removed on receive by the MAC.
      0x1 - PADEN_1 :
         Padding is removed from received frames.
 (rw) (01)  [0;32mPAUFWD[0m  - [13:13] -  Terminate/Forward Pause Frames
      0 - PAUFWD_0 :
         Pause frames are terminated and discarded in the MAC.
      0x1 - PAUFWD_1 :
         Pause frames are forwarded to the user application.
 (rw) (01)  [0;32mCRCFWD[0m  - [14:14] -  Terminate/Forward Received CRC
      0 - CRCFWD_0 :
         The CRC field of received frames is transmitted to the user application
         .
      0x1 - CRCFWD_1 :
         The CRC field is stripped from the frame.
 (rw) (01)  [0;32mCFEN[0m  - [15:15] -  MAC Control Frame Enable
      0 - CFEN_0 :
         MAC control frames with any opcode other than 0x0001 (pause frame) are 
         accepted and forwarded to the client interface.
      0x1 - CFEN_1 :
         MAC control frames with any opcode other than 0x0001 (pause frame) are 
         silently discarded.
 (rw) (14)  [0;32mMAX_FL[0m  - [29:16] -  Maximum Frame Length
 (rw) (01)  [0;32mNLC[0m  - [30:30] -  Payload Length Check Disable
      0 - NLC_0 :
         The payload length check is disabled.
      0x1 - NLC_1 :
         The core checks the frame's payload length with the frame length/type f
         ield. Errors are indicated in the EIR[PLR] field.
 (ro) (01)  [0;32mGRS[0m  - [31:31] -  Graceful Receive Stopped
</lang>
#### enet2.rsem
<link=p.ENET2.RSEM>
#### ENET2.TIPG
<link=p.ENET2.TIPG>
#### p.enet2.ftrl
<link=p.ENET2.FTRL>
#### ENET2.RMON_T_MC_PKT
<link=p.ENET2.RMON_T_MC_PKT>
#### p.enet2.rmon_t_jab
<link=p.ENET2.RMON_T_JAB>
#### p.ENET2.RMON_T_P128TO255
<lang=dft>
 (ro)  [1;33m0x402d4230[0m (0x402d4000 + 0x0230)
Tx 128- to 255-byte Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of 128- to 255-byte transmit packets
</lang>
#### p.ENET2.IEEE_T_MACERR
<lang=dft>
 (ro)  [1;33m0x402d4264[0m (0x402d4000 + 0x0264)
Frames Transmitted with Tx FIFO Underrun Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with transmit FIFO underrun
</lang>
#### enet2.ieee_t_sqe
<link=p.ENET2.IEEE_T_SQE>
#### p.enet2.rmon_r_packets
<link=p.ENET2.RMON_R_PACKETS>
#### ENET2.RMON_R_P256TO511
<link=p.ENET2.RMON_R_P256TO511>
#### enet2.rmon_r_p512to1023
<link=p.ENET2.RMON_R_P512TO1023>
#### enet2.rmon_r_p_gte2048
<link=p.ENET2.RMON_R_P_GTE2048>
#### p.ENET2.IEEE_R_DROP
<lang=dft>
 (ro)  [1;33m0x402d42c8[0m (0x402d4000 + 0x02c8)
Frames not Counted Correctly Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Frame count
</lang>
#### usb1.hwgeneral
<link=p.USB1.HWGENERAL>
#### USB1.HWRXBUF
<link=p.USB1.HWRXBUF>
#### USB1.SBUSCFG
<link=p.USB1.SBUSCFG>
#### p.USB1.CAPLENGTH
<lang=dft>
 (ro)  [1;33m0x402e0100[0m (0x402e0000 + 0x0100)
Capability Registers Length
 (ro) (08)  [0;32mCAPLENGTH[0m  - [07:00] -  These bits are used as an offset to add to register base to find the beginning 
 of the Operational Register
</lang>
#### p.USB1.DCCPARAMS
<lang=dft>
 (ro)  [1;33m0x402e0124[0m (0x402e0000 + 0x0124)
Device Controller Capability Parameters
 (ro) (05)  [0;32mDEN[0m  - [04:00] -  Device Endpoint Number This field indicates the number of endpoints built into 
 the device controller
 (ro) (01)  [0;32mDC[0m  - [07:07] -  Device Capable When this bit is 1, this controller is capable of operating as a
  USB 2.0 device.
 (ro) (01)  [0;32mHC[0m  - [08:08] -  Host Capable When this bit is 1, this controller is capable of operating as an 
 EHCI compatible USB 2
</lang>
#### usb1.asynclistaddr
<link=p.USB1.ASYNCLISTADDR>
#### USB1.ENDPTSETUPSTAT
<link=p.USB1.ENDPTSETUPSTAT>
#### USB1.ENDPTPRIME
<link=p.USB1.ENDPTPRIME>
#### USB1.ENDPTSTAT
<link=p.USB1.ENDPTSTAT>
#### USB1.ENDPTCTRL3
<link=p.USB1.ENDPTCTRL3>
#### usb2.hwgeneral
<link=p.USB2.HWGENERAL>
#### p.USB2.HWTXBUF
<lang=dft>
 (ro)  [1;33m0x402e0210[0m (0x402e0200 + 0x0010)
TX Buffer Hardware Parameters
 (ro) (08)  [0;32mTXBURST[0m  - [07:00] -  Default burst size for memory to TX buffer transfer
 (ro) (08)  [0;32mTXCHANADD[0m  - [23:16] -  TX FIFO Buffer size is: (2^TXCHANADD) * 4 Bytes
</lang>
#### usb2.gptimer0ld
<link=p.USB2.GPTIMER0LD>
#### p.USB2.GPTIMER1LD
<lang=dft>
 (rw)  [1;33m0x402e0288[0m (0x402e0200 + 0x0088)
General Purpose Timer #1 Load
 (rw) (24)  [0;32mGPTLD[0m  - [23:00] -  General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits whe
 n GPTRST bit is set '1b'
</lang>
#### usb2.asynclistaddr
<link=p.USB2.ASYNCLISTADDR>
#### p.usb2.txfilltuning
<link=p.USB2.TXFILLTUNING>
#### usb2.endptnak
<link=p.USB2.ENDPTNAK>
#### USB2.OTGSC
<link=p.USB2.OTGSC>
#### p.usb2.endptctrl7
<link=p.USB2.ENDPTCTRL7>
#### USB2.ENDPTCTRL7
<link=p.USB2.ENDPTCTRL7>
#### p.USBNC1.USB_OTG1_CTRL
<lang=dft>
 (rw)  [1;33m0x402e0800[0m (0x402e0000 + 0x0800)
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
#### p.USBNC2
<lang=dft>
base: 0x402e0004
USB_OTG1_CTRL   USB_OTG1_PHY_CTRL_0  
输入 p.USBNC2.{reg_name} 以查看寄存器的详细信息
type p.USBNC2.{reg_name} to check details of registers
</lang>
#### SEMC.BR0
<link=p.SEMC.BR0>
#### p.SEMC.BR3
<lang=dft>
 (rw)  [1;33m0x402f001c[0m (0x402f0000 + 0x001c)
Base Register 3 (For SDRAM CS3 device)
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
#### semc.dllcr
<link=p.SEMC.DLLCR>
#### semc.inten
<link=p.SEMC.INTEN>
#### p.SEMC.SDRAMCR0
<lang=dft>
 (rw)  [1;33m0x402f0040[0m (0x402f0000 + 0x0040)
SDRAM control register 0
 (rw) (01)  [0;32mPS[0m  - [00:00] -  Port Size
      0 - PS_0 :
         8bit
      0x1 - PS_1 :
         16bit
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
         8
      0x5 - BL_5 :
         8
      0x6 - BL_6 :
         8
      0x7 - BL_7 :
         8
 (rw) (01)  [0;32mCOL8[0m  - [07:07] -  Column 8 selection bit
      0 - COL8_0 :
         Column address bit number is decided by COL field.
      0x1 - COL8_1 :
         Column address bit number is 8. COL field is ignored.
 (rw) (02)  [0;32mCOL[0m  - [09:08] -  Column address bit number
      0 - COL_0 :
         12 bit
      0x1 - COL_1 :
         11 bit
      0x2 - COL_2 :
         10 bit
      0x3 - COL_3 :
         9 bit
 (rw) (02)  [0;32mCL[0m  - [11:10] -  CAS Latency
      0 - CL_0 :
         1
      0x1 - CL_1 :
         1
      0x2 - CL_2 :
         2
      0x3 - CL_3 :
         3
 (rw) (01)  [0;32mBANK2[0m  - [14:14] -  2 Bank selection bit
      0 - BANK2_0 :
         SDRAM device has 4 banks.
      0x1 - BANK2_1 :
         SDRAM device has 2 banks.
</lang>
#### SEMC.SDRAMCR1
<link=p.SEMC.SDRAMCR1>
#### p.semc.sdramcr2
<link=p.SEMC.SDRAMCR2>
#### SEMC.NANDCR3
<link=p.SEMC.NANDCR3>
#### SEMC.NORCR2
<link=p.SEMC.NORCR2>
#### p.SEMC.NORCR3
<lang=dft>
 (rw)  [1;33m0x402f006c[0m (0x402f0000 + 0x006c)
NOR control register 3
 (rw) (04)  [0;32mASSR[0m  - [03:00] -  Address setup time for synchronous read
 (rw) (04)  [0;32mAHSR[0m  - [07:04] -  Address hold time for synchronous read
</lang>
#### p.SEMC.IPCMD
<lang=dft>
 (rw)  [1;33m0x402f009c[0m (0x402f0000 + 0x009c)
IP Command register
 (rw) (16)  [0;32mCMD[0m  - [15:00] -  SDRAM Commands: 0x8: READ 0x9: WRITE 0xA: MODESET 0xB: ACTIVE 0xC: AUTO REFRESH
  0xD: SELF REFRESH 0xE: PRECHARGE 0xF: PRECHARGE ALL Others: RSVD SELF REFRESH 
 will be sent to all SDRAM devices because they shared same SEMC_CLK pin
 (wo) (16)  [0;32mKEY[0m  - [31:16] -  This field should be written with 0xA55A when trigging an IP command for all de
 vice types
</lang>
#### p.SEMC.IPRXDAT
<lang=dft>
 (ro)  [1;33m0x402f00b0[0m (0x402f0000 + 0x00b0)
RX DATA register (for IP Command)
 (ro) (32)  [0;32mDAT[0m  - [31:00] -  no description available
</lang>
#### semc.iprxdat
<link=p.SEMC.IPRXDAT>
#### semc.sts1
<link=p.SEMC.STS1>
#### SEMC.STS3
<link=p.SEMC.STS3>
#### p.SEMC.STS11
<lang=dft>
 (ro)  [1;33m0x402f00ec[0m (0x402f0000 + 0x00ec)
Status register 11
</lang>
#### p.semc.sts13
<link=p.SEMC.STS13>
#### semc.sts15
<link=p.SEMC.STS15>
#### dcp.ctrl_set
<link=p.DCP.CTRL_SET>
#### DCP.STAT
<link=p.DCP.STAT>
#### DCP.STAT_TOG
<link=p.DCP.STAT_TOG>
#### dcp.channelctrl
<link=p.DCP.CHANNELCTRL>
#### p.DCP.CHANNELCTRL_CLR
<lang=dft>
 (rw)  [1;33m0x402fc028[0m (0x402fc000 + 0x0028)
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
#### DCP.CONTEXT
<link=p.DCP.CONTEXT>
#### dcp.packet1
<link=p.DCP.PACKET1>
#### DCP.PACKET2
<link=p.DCP.PACKET2>
#### dcp.ch0stat_set
<link=p.DCP.CH0STAT_SET>
#### p.dcp.ch0stat_clr
<link=p.DCP.CH0STAT_CLR>
#### p.dcp.ch0opts_clr
<link=p.DCP.CH0OPTS_CLR>
#### DCP.CH1STAT
<link=p.DCP.CH1STAT>
#### DCP.CH2SEMA
<link=p.DCP.CH2SEMA>
#### dcp.ch2stat_set
<link=p.DCP.CH2STAT_SET>
#### p.DCP.CH2OPTS
<lang=dft>
 (rw)  [1;33m0x402fc1b0[0m (0x402fc000 + 0x01b0)
DCP channel 2 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### DCP.CH2OPTS
<link=p.DCP.CH2OPTS>
#### p.dcp.ch2opts_tog
<link=p.DCP.CH2OPTS_TOG>
#### DCP.CH3SEMA
<link=p.DCP.CH3SEMA>
#### DCP.CH3STAT_CLR
<link=p.DCP.CH3STAT_CLR>
#### dcp.dbgselect
<link=p.DCP.DBGSELECT>
#### DCP.DBGSELECT
<link=p.DCP.DBGSELECT>
#### p.DCP.DBGDATA
<lang=dft>
 (ro)  [1;33m0x402fc410[0m (0x402fc000 + 0x0410)
DCP debug data register
 (ro) (32)  [0;32mDATA[0m  - [31:00] -  Debug data
</lang>
#### p.SPDIF.SRCD
<lang=dft>
 (rw)  [1;33m0x40380004[0m (0x40380000 + 0x0004)
CDText Control Register
 (rw) (01)  [0;32mUSyncMode[0m  - [01:01] -  no description available
      0 - USyncMode_0 :
         Non-CD data
      0x1 - USyncMode_1 :
         CD user channel subcode
</lang>
#### p.SPDIF.SIE
<lang=dft>
 (rw)  [1;33m0x4038000c[0m (0x40380000 + 0x000c)
InterruptEn Register
 (rw) (01)  [0;32mRxFIFOFul[0m  - [00:00] -  SPDIF Rx FIFO full, can't be cleared with reg. IntClear. To clear it, read from
  Rx FIFO.
 (rw) (01)  [0;32mTxEm[0m  - [01:01] -  SPDIF Tx FIFO empty, can't be cleared with reg. IntClear. To clear it, write to
 Tx FIFO.
 (rw) (01)  [0;32mLockLoss[0m  - [02:02] -  SPDIF receiver loss of lock
 (rw) (01)  [0;32mRxFIFOResyn[0m  - [03:03] -  Rx FIFO resync
 (rw) (01)  [0;32mRxFIFOUnOv[0m  - [04:04] -  Rx FIFO underrun/overrun
 (rw) (01)  [0;32mUQErr[0m  - [05:05] -  U/Q Channel framing error
 (rw) (01)  [0;32mUQSync[0m  - [06:06] -  U/Q Channel sync found
 (rw) (01)  [0;32mQRxOv[0m  - [07:07] -  Q Channel receive register overrun
 (rw) (01)  [0;32mQRxFul[0m  - [08:08] -  Q Channel receive register full, can't be cleared with reg
 (rw) (01)  [0;32mURxOv[0m  - [09:09] -  U Channel receive register overrun
 (rw) (01)  [0;32mURxFul[0m  - [10:10] -  U Channel receive register full, can't be cleared with reg
 (rw) (01)  [0;32mBitErr[0m  - [14:14] -  SPDIF receiver found parity bit error
 (rw) (01)  [0;32mSymErr[0m  - [15:15] -  SPDIF receiver found illegal symbol
 (rw) (01)  [0;32mValNoGood[0m  - [16:16] -  SPDIF validity flag no good
 (rw) (01)  [0;32mCNew[0m  - [17:17] -  SPDIF receive change in value of control channel
 (rw) (01)  [0;32mTxResyn[0m  - [18:18] -  SPDIF Tx FIFO resync
 (rw) (01)  [0;32mTxUnOv[0m  - [19:19] -  SPDIF Tx FIFO under/overrun
 (rw) (01)  [0;32mLock[0m  - [20:20] -  SPDIF receiver's DPLL is locked
</lang>
#### p.spdif.sis
<link=p.SPDIF.SIS>
#### SPDIF.STL
<link=p.SPDIF.STL>
#### p.spdif.stcscl
<link=p.SPDIF.STCSCL>
#### SAI1.VERID
<link=p.SAI1.VERID>
#### p.sai1.param
<link=p.SAI1.PARAM>
#### sai1.tdr[1]
<link=p.SAI1.TDR[1]>
#### p.SAI1.TDR[3]
<lang=dft>
 (rw)  [1;33m0x4038402c[0m (0x40384000 + 0x002c)
SAI Transmit Data Register
 (rw) (32)  [0;32mTDR[0m  - [31:00] -  Transmit Data Register
</lang>
#### p.sai1.tfr[0]
<link=p.SAI1.TFR[0]>
#### p.SAI2.VERID
<lang=dft>
 (ro)  [1;33m0x40388000[0m (0x40388000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Specification Number
      0 - FEATURE_0 :
         Standard feature set.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### sai2.tcsr
<link=p.SAI2.TCSR>
#### p.sai2.tcr1
<link=p.SAI2.TCR1>
#### sai2.tcr1
<link=p.SAI2.TCR1>
#### SAI2.TCR1
<link=p.SAI2.TCR1>
#### SAI2.TDR[1]
<link=p.SAI2.TDR[1]>
#### sai2.rcsr
<link=p.SAI2.RCSR>
#### p.sai2.rdr[0]
<link=p.SAI2.RDR[0]>
#### p.SAI2.RFR[2]
<lang=dft>
 (ro)  [1;33m0x403880c8[0m (0x40388000 + 0x00c8)
SAI Receive FIFO Register
 (ro) (06)  [0;32mRFP[0m  - [05:00] -  Read FIFO Pointer
 (ro) (01)  [0;32mRCP[0m  - [15:15] -  Receive Channel Pointer
      0 - RCP_0 :
         No effect.
      0x1 - RCP_1 :
         FIFO combine is enabled for FIFO reads and this FIFO will be read on th
         e next FIFO read.
 (ro) (06)  [0;32mWFP[0m  - [21:16] -  Write FIFO Pointer
</lang>
#### p.sai3.verid
<link=p.SAI3.VERID>
#### sai3.tcr2
<link=p.SAI3.TCR2>
#### p.SAI3.TCR3
<lang=dft>
 (rw)  [1;33m0x4038c014[0m (0x4038c000 + 0x0014)
SAI Transmit Configuration 3 Register
 (rw) (05)  [0;32mWDFL[0m  - [04:00] -  Word Flag Configuration
 (rw) (04)  [0;32mTCE[0m  - [19:16] -  Transmit Channel Enable
 (rw) (04)  [0;32mCFR[0m  - [27:24] -  Channel FIFO Reset
</lang>
#### p.sai3.tdr[3]
<link=p.SAI3.TDR[3]>
#### sai3.rfr[0]
<link=p.SAI3.RFR[0]>
#### p.SAI3.RFR[3]
<lang=dft>
 (ro)  [1;33m0x4038c0cc[0m (0x4038c000 + 0x00cc)
SAI Receive FIFO Register
 (ro) (06)  [0;32mRFP[0m  - [05:00] -  Read FIFO Pointer
 (ro) (01)  [0;32mRCP[0m  - [15:15] -  Receive Channel Pointer
      0 - RCP_0 :
         No effect.
      0x1 - RCP_1 :
         FIFO combine is enabled for FIFO reads and this FIFO will be read on th
         e next FIFO read.
 (ro) (06)  [0;32mWFP[0m  - [21:16] -  Write FIFO Pointer
</lang>
#### lpspi1.cfgr0
<link=p.LPSPI1.CFGR0>
#### p.LPSPI1.DMR1
<lang=dft>
 (rw)  [1;33m0x40394034[0m (0x40394000 + 0x0034)
Data Match Register 1
 (rw) (32)  [0;32mMATCH1[0m  - [31:00] -  Match 1 Value
</lang>
#### p.LPSPI1.FCR
<lang=dft>
 (rw)  [1;33m0x40394058[0m (0x40394000 + 0x0058)
FIFO Control Register
 (rw) (04)  [0;32mTXWATER[0m  - [03:00] -  Transmit FIFO Watermark
 (rw) (04)  [0;32mRXWATER[0m  - [19:16] -  Receive FIFO Watermark
</lang>
#### p.LPSPI1.TCR
<lang=dft>
 (rw)  [1;33m0x40394060[0m (0x40394000 + 0x0060)
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
#### LPSPI1.RDR
<link=p.LPSPI1.RDR>
#### p.LPSPI2.VERID
<lang=dft>
 (ro)  [1;33m0x40398000[0m (0x40398000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Module Identification Number
      0x4 - FEATURE_4 :
         Standard feature set supporting a 32-bit shift register.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### p.lpspi2.verid
<link=p.LPSPI2.VERID>
#### p.LPSPI2.DER
<lang=dft>
 (rw)  [1;33m0x4039801c[0m (0x40398000 + 0x001c)
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
#### p.LPSPI2.RDR
<lang=dft>
 (ro)  [1;33m0x40398074[0m (0x40398000 + 0x0074)
Receive Data Register
 (ro) (32)  [0;32mDATA[0m  - [31:00] -  Receive Data
</lang>
#### p.LPSPI3
<lang=dft>
base: 0x4039c000
CCR             CFGR0           CFGR1           CR              
DER             DMR0            DMR1            FCR             
FSR             IER             PARAM           RDR             
RSR             SR              TCR             TDR             
VERID           
输入 p.LPSPI3.{reg_name} 以查看寄存器的详细信息
type p.LPSPI3.{reg_name} to check details of registers
</lang>
#### p.lpspi3.cfgr0
<link=p.LPSPI3.CFGR0>
#### LPSPI3.DMR0
<link=p.LPSPI3.DMR0>
#### p.lpspi3.tdr
<link=p.LPSPI3.TDR>
#### lpspi4.rsr
<link=p.LPSPI4.RSR>
#### p.adc_etc.done2_err_irq
<link=p.ADC_ETC.DONE2_ERR_IRQ>
#### adc_etc.dma_ctrl
<link=p.ADC_ETC.DMA_CTRL>
#### p.adc_etc.trig1_chain_1_0
<link=p.ADC_ETC.TRIG1_CHAIN_1_0>
#### p.adc_etc.trig1_chain_7_6
<link=p.ADC_ETC.TRIG1_CHAIN_7_6>
#### p.ADC_ETC.TRIG1_RESULT_1_0
<lang=dft>
 (ro)  [1;33m0x403b0050[0m (0x403b0000 + 0x0050)
ETC_TRIG Result Data 1/0 Register
 (ro) (12)  [0;32mDATA0[0m  - [11:00] -  Result DATA0
 (ro) (12)  [0;32mDATA1[0m  - [27:16] -  Result DATA1
</lang>
#### p.ADC_ETC.TRIG1_RESULT_3_2
<lang=dft>
 (ro)  [1;33m0x403b0054[0m (0x403b0000 + 0x0054)
ETC_TRIG Result Data 3/2 Register
 (ro) (12)  [0;32mDATA2[0m  - [11:00] -  Result DATA2
 (ro) (12)  [0;32mDATA3[0m  - [27:16] -  Result DATA3
</lang>
#### ADC_ETC.TRIG1_RESULT_7_6
<link=p.ADC_ETC.TRIG1_RESULT_7_6>
#### p.ADC_ETC.TRIG2_CHAIN_1_0
<lang=dft>
 (rw)  [1;33m0x403b0068[0m (0x403b0000 + 0x0068)
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
#### adc_etc.trig2_chain_1_0
<link=p.ADC_ETC.TRIG2_CHAIN_1_0>
#### adc_etc.trig2_chain_3_2
<link=p.ADC_ETC.TRIG2_CHAIN_3_2>
#### adc_etc.trig3_counter
<link=p.ADC_ETC.TRIG3_COUNTER>
#### ADC_ETC.TRIG3_CHAIN_3_2
<link=p.ADC_ETC.TRIG3_CHAIN_3_2>
#### ADC_ETC.TRIG3_CHAIN_5_4
<link=p.ADC_ETC.TRIG3_CHAIN_5_4>
#### p.adc_etc.trig3_chain_7_6
<link=p.ADC_ETC.TRIG3_CHAIN_7_6>
#### p.ADC_ETC.TRIG4_RESULT_1_0
<lang=dft>
 (ro)  [1;33m0x403b00c8[0m (0x403b0000 + 0x00c8)
ETC_TRIG Result Data 1/0 Register
 (ro) (12)  [0;32mDATA0[0m  - [11:00] -  Result DATA0
 (ro) (12)  [0;32mDATA1[0m  - [27:16] -  Result DATA1
</lang>
#### adc_etc.trig4_result_1_0
<link=p.ADC_ETC.TRIG4_RESULT_1_0>
#### p.ADC_ETC.TRIG4_RESULT_3_2
<lang=dft>
 (ro)  [1;33m0x403b00cc[0m (0x403b0000 + 0x00cc)
ETC_TRIG Result Data 3/2 Register
 (ro) (12)  [0;32mDATA2[0m  - [11:00] -  Result DATA2
 (ro) (12)  [0;32mDATA3[0m  - [27:16] -  Result DATA3
</lang>
#### adc_etc.trig4_result_3_2
<link=p.ADC_ETC.TRIG4_RESULT_3_2>
#### p.adc_etc.trig4_result_5_4
<link=p.ADC_ETC.TRIG4_RESULT_5_4>
#### ADC_ETC.TRIG4_RESULT_5_4
<link=p.ADC_ETC.TRIG4_RESULT_5_4>
#### p.adc_etc.trig7_chain_5_4
<link=p.ADC_ETC.TRIG7_CHAIN_5_4>
#### p.ADC_ETC.TRIG7_RESULT_1_0
<lang=dft>
 (ro)  [1;33m0x403b0140[0m (0x403b0000 + 0x0140)
ETC_TRIG Result Data 1/0 Register
 (ro) (12)  [0;32mDATA0[0m  - [11:00] -  Result DATA0
 (ro) (12)  [0;32mDATA1[0m  - [27:16] -  Result DATA1
</lang>
#### p.aoi1
<link=p.AOI1>
#### p.aoi1.bfcrt013
<link=p.AOI1.BFCRT013>
#### AOI1.BFCRT013
<link=p.AOI1.BFCRT013>
#### p.AOI2.BFCRT011
<lang=dft>
 (rw)  [1;33m0x403b8004[0m (0x403b8000 + 0x0004)
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
#### p.aoi2.bfcrt231
<link=p.AOI2.BFCRT231>
#### aoi2.bfcrt232
<link=p.AOI2.BFCRT232>
#### xbara1.sel5
<link=p.XBARA1.SEL5>
#### XBARA1.SEL6
<link=p.XBARA1.SEL6>
#### p.XBARA1.SEL9
<lang=dft>
 (rw)  [1;33m0x403bc012[0m (0x403bc000 + 0x0012)
Crossbar A Select Register 9
 (rw) (07)  [0;32mSEL18[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT18 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL19[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT19 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbara1.sel16
<link=p.XBARA1.SEL16>
#### XBARA1.SEL17
<link=p.XBARA1.SEL17>
#### XBARA1.SEL29
<link=p.XBARA1.SEL29>
#### p.XBARA1.SEL32
<lang=dft>
 (rw)  [1;33m0x403bc040[0m (0x403bc000 + 0x0040)
Crossbar A Select Register 32
 (rw) (07)  [0;32mSEL64[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT64 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL65[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT65 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel33
<link=p.XBARA1.SEL33>
#### xbara1.sel39
<link=p.XBARA1.SEL39>
#### xbara1.sel44
<link=p.XBARA1.SEL44>
#### p.xbara1.sel46
<link=p.XBARA1.SEL46>
#### p.XBARA1.SEL47
<lang=dft>
 (rw)  [1;33m0x403bc05e[0m (0x403bc000 + 0x005e)
Crossbar A Select Register 47
 (rw) (07)  [0;32mSEL94[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT94 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL95[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT95 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.XBARA1.SEL50
<lang=dft>
 (rw)  [1;33m0x403bc064[0m (0x403bc000 + 0x0064)
Crossbar A Select Register 50
 (rw) (07)  [0;32mSEL100[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT100 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL101[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT101 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### p.xbara1.sel51
<link=p.XBARA1.SEL51>
#### XBARA1.SEL58
<link=p.XBARA1.SEL58>
#### p.xbara1.sel60
<link=p.XBARA1.SEL60>
#### p.XBARA1.SEL61
<lang=dft>
 (rw)  [1;33m0x403bc07a[0m (0x403bc000 + 0x007a)
Crossbar A Select Register 61
 (rw) (07)  [0;32mSEL122[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT122 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL123[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT123 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### xbara1.sel62
<link=p.XBARA1.SEL62>
#### XBARA1.SEL65
<link=p.XBARA1.SEL65>
#### xbarb3.sel5
<link=p.XBARB3.SEL5>
#### p.ENC1.CTRL
<lang=dft>
 (rw)  [1;33m0x403c8000[0m (0x403c8000 + 0x0000)
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
#### enc1.uposh
<link=p.ENC1.UPOSH>
#### enc1.tst
<link=p.ENC1.TST>
#### p.ENC1.UMOD
<lang=dft>
 (rw)  [1;33m0x403c8020[0m (0x403c8000 + 0x0020)
Upper Modulus Register
 (rw) (16)  [0;32mMOD[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the modu
 lus register
</lang>
#### p.ENC2.WTR
<lang=dft>
 (rw)  [1;33m0x403cc004[0m (0x403cc000 + 0x0004)
Watchdog Timeout Register
 (rw) (16)  [0;32mWDOG[0m  - [15:00] -  WDOG[15:0] is a binary representation of the number of clock cycles plus one th
 at the watchdog timer counts before timing out and optionally generating an int
 errupt
</lang>
#### p.ENC2.UPOSH
<lang=dft>
 (ro)  [1;33m0x403cc012[0m (0x403cc000 + 0x0012)
Upper Position Hold Register
 (ro) (16)  [0;32mPOSH[0m  - [15:00] -  This read-only register contains a snapshot of the UPOS register.
</lang>
#### enc2.lposh
<link=p.ENC2.LPOSH>
#### ENC2.LINIT
<link=p.ENC2.LINIT>
#### p.enc2.imr
<link=p.ENC2.IMR>
#### ENC2.IMR
<link=p.ENC2.IMR>
#### p.ENC3.FILT
<lang=dft>
 (rw)  [1;33m0x403d0002[0m (0x403d0000 + 0x0002)
Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### enc3.ctrl2
<link=p.ENC3.CTRL2>
#### enc3.lcomp
<link=p.ENC3.LCOMP>
#### p.enc4.ctrl
<link=p.ENC4.CTRL>
#### ENC4.POSD
<link=p.ENC4.POSD>
#### p.enc4.upos
<link=p.ENC4.UPOS>
#### p.ENC4.CTRL2
<lang=dft>
 (rw)  [1;33m0x403d401e[0m (0x403d4000 + 0x001e)
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
#### p.enc4.ucomp
<link=p.ENC4.UCOMP>
#### p.PWM1.SM0CTRL2
<lang=dft>
 (rw)  [1;33m0x403dc004[0m (0x403dc000 + 0x0004)
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
#### p.pwm1.sm0val2
<link=p.PWM1.SM0VAL2>
#### p.PWM1.SM0FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403dc018[0m (0x403dc000 + 0x0018)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### PWM1.SM0FRACVAL5
<link=p.PWM1.SM0FRACVAL5>
#### PWM1.SM0VAL5
<link=p.PWM1.SM0VAL5>
#### PWM1.SM0OCTRL
<link=p.PWM1.SM0OCTRL>
#### pwm1.sm0sts
<link=p.PWM1.SM0STS>
#### p.pwm1.sm0tctrl
<link=p.PWM1.SM0TCTRL>
#### p.pwm1.sm0dismap0
<link=p.PWM1.SM0DISMAP0>
#### p.pwm1.sm0dtcnt1
<link=p.PWM1.SM0DTCNT1>
#### PWM1.SM0CAPTCTRLB
<link=p.PWM1.SM0CAPTCTRLB>
#### pwm1.sm0captcompx
<link=p.PWM1.SM0CAPTCOMPX>
#### pwm1.sm0cval4
<link=p.PWM1.SM0CVAL4>
#### p.PWM1.SM1CNT
<lang=dft>
 (ro)  [1;33m0x403dc060[0m (0x403dc000 + 0x0060)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### pwm1.sm1fracval3
<link=p.PWM1.SM1FRACVAL3>
#### p.pwm1.sm1val3
<link=p.PWM1.SM1VAL3>
#### PWM1.SM1VAL5
<link=p.PWM1.SM1VAL5>
#### PWM1.SM1STS
<link=p.PWM1.SM1STS>
#### p.pwm1.sm1dtcnt0
<link=p.PWM1.SM1DTCNT0>
#### PWM1.SM1CAPTCTRLA
<link=p.PWM1.SM1CAPTCTRLA>
#### p.pwm1.sm1captcompb
<link=p.PWM1.SM1CAPTCOMPB>
#### pwm1.sm1captcompx
<link=p.PWM1.SM1CAPTCOMPX>
#### p.PWM1.SM1CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403dc0a2[0m (0x403dc000 + 0x00a2)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### PWM1.SM1CVAL0CYC
<link=p.PWM1.SM1CVAL0CYC>
#### PWM1.SM1CVAL3CYC
<link=p.PWM1.SM1CVAL3CYC>
#### p.PWM1.SM1CVAL5
<lang=dft>
 (ro)  [1;33m0x403dc0b4[0m (0x403dc000 + 0x00b4)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### p.PWM1.SM2VAL2
<lang=dft>
 (rw)  [1;33m0x403dc0d2[0m (0x403dc000 + 0x00d2)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### PWM1.SM2FRACVAL4
<link=p.PWM1.SM2FRACVAL4>
#### pwm1.sm2dtcnt0
<link=p.PWM1.SM2DTCNT0>
#### p.PWM1.SM2CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403dc0fa[0m (0x403dc000 + 0x00fa)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.PWM1.SM2CVAL3
<lang=dft>
 (ro)  [1;33m0x403dc10c[0m (0x403dc000 + 0x010c)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### pwm1.sm2cval3
<link=p.PWM1.SM2CVAL3>
#### PWM1.SM2CVAL4
<link=p.PWM1.SM2CVAL4>
#### pwm1.sm3fracval1
<link=p.PWM1.SM3FRACVAL1>
#### PWM1.SM3FRACVAL1
<link=p.PWM1.SM3FRACVAL1>
#### p.PWM1.SM3VAL2
<lang=dft>
 (rw)  [1;33m0x403dc132[0m (0x403dc000 + 0x0132)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### pwm1.sm3dtcnt0
<link=p.PWM1.SM3DTCNT0>
#### pwm1.sm3captcompa
<link=p.PWM1.SM3CAPTCOMPA>
#### PWM1.SM3CAPTCOMPX
<link=p.PWM1.SM3CAPTCOMPX>
#### p.PWM1.SM3CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403dc166[0m (0x403dc000 + 0x0166)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### pwm1.sm3cval3
<link=p.PWM1.SM3CVAL3>
#### p.pwm1.sm3cval5
<link=p.PWM1.SM3CVAL5>
#### PWM1.SM3CVAL5CYC
<link=p.PWM1.SM3CVAL5CYC>
#### p.PWM1.FCTRL0
<lang=dft>
 (rw)  [1;33m0x403dc18c[0m (0x403dc000 + 0x018c)
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
#### p.pwm1.fsts0
<link=p.PWM1.FSTS0>
#### PWM2.SM0INIT
<link=p.PWM2.SM0INIT>
#### PWM2.SM0VAL1
<link=p.PWM2.SM0VAL1>
#### p.PWM2.SM0VAL2
<lang=dft>
 (rw)  [1;33m0x403e0012[0m (0x403e0000 + 0x0012)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### pwm2.sm0fracval5
<link=p.PWM2.SM0FRACVAL5>
#### pwm2.sm0val5
<link=p.PWM2.SM0VAL5>
#### p.pwm2.sm0octrl
<link=p.PWM2.SM0OCTRL>
#### pwm2.sm0octrl
<link=p.PWM2.SM0OCTRL>
#### PWM2.SM0OCTRL
<link=p.PWM2.SM0OCTRL>
#### PWM2.SM0STS
<link=p.PWM2.SM0STS>
#### p.pwm2.sm0captcompb
<link=p.PWM2.SM0CAPTCOMPB>
#### p.PWM2.SM0CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e0046[0m (0x403e0000 + 0x0046)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### pwm2.sm0cval3cyc
<link=p.PWM2.SM0CVAL3CYC>
#### PWM2.SM1CNT
<link=p.PWM2.SM1CNT>
#### PWM2.SM1VAL0
<link=p.PWM2.SM1VAL0>
#### p.PWM2.SM1VAL2
<lang=dft>
 (rw)  [1;33m0x403e0072[0m (0x403e0000 + 0x0072)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### pwm2.sm1val4
<link=p.PWM2.SM1VAL4>
#### PWM2.SM1FRACVAL5
<link=p.PWM2.SM1FRACVAL5>
#### pwm2.sm1dismap0
<link=p.PWM2.SM1DISMAP0>
#### p.pwm2.sm1dismap1
<link=p.PWM2.SM1DISMAP1>
#### pwm2.sm1captcompa
<link=p.PWM2.SM1CAPTCOMPA>
#### p.pwm2.sm1captctrlb
<link=p.PWM2.SM1CAPTCTRLB>
#### p.PWM2.SM1CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e009a[0m (0x403e0000 + 0x009a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.pwm2.sm1captcompb
<link=p.PWM2.SM1CAPTCOMPB>
#### PWM2.SM1CAPTCOMPB
<link=p.PWM2.SM1CAPTCOMPB>
#### pwm2.sm1cval0cyc
<link=p.PWM2.SM1CVAL0CYC>
#### p.PWM2.SM1CVAL3
<lang=dft>
 (ro)  [1;33m0x403e00ac[0m (0x403e0000 + 0x00ac)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### pwm2.sm1cval3cyc
<link=p.PWM2.SM1CVAL3CYC>
#### PWM2.SM1CVAL5
<link=p.PWM2.SM1CVAL5>
#### p.PWM2.SM2CNT
<lang=dft>
 (ro)  [1;33m0x403e00c0[0m (0x403e0000 + 0x00c0)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### PWM2.SM2FRACVAL3
<link=p.PWM2.SM2FRACVAL3>
#### p.pwm2.sm2val4
<link=p.PWM2.SM2VAL4>
#### PWM2.SM2VAL4
<link=p.PWM2.SM2VAL4>
#### p.pwm2.sm2frctrl
<link=p.PWM2.SM2FRCTRL>
#### pwm2.sm2dmaen
<link=p.PWM2.SM2DMAEN>
#### PWM2.SM2DMAEN
<link=p.PWM2.SM2DMAEN>
#### PWM2.SM2CAPTCTRLB
<link=p.PWM2.SM2CAPTCTRLB>
#### pwm2.sm2captcompb
<link=p.PWM2.SM2CAPTCOMPB>
#### p.PWM2.SM2CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403e0102[0m (0x403e0000 + 0x0102)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### pwm2.sm2cval2
<link=p.PWM2.SM2CVAL2>
#### p.PWM2.SM2CVAL5
<lang=dft>
 (ro)  [1;33m0x403e0114[0m (0x403e0000 + 0x0114)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### p.pwm2.sm2cval5cyc
<link=p.PWM2.SM2CVAL5CYC>
#### p.PWM2.SM3CTRL2
<lang=dft>
 (rw)  [1;33m0x403e0124[0m (0x403e0000 + 0x0124)
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
#### PWM2.SM3CTRL
<link=p.PWM2.SM3CTRL>
#### pwm2.sm3fracval2
<link=p.PWM2.SM3FRACVAL2>
#### p.PWM2.SM3FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e0138[0m (0x403e0000 + 0x0138)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### p.pwm2.sm3val5
<link=p.PWM2.SM3VAL5>
#### pwm2.sm3captctrlx
<link=p.PWM2.SM3CAPTCTRLX>
#### p.pwm2.sm3cval0
<link=p.PWM2.SM3CVAL0>
#### pwm2.sm3cval1
<link=p.PWM2.SM3CVAL1>
#### p.pwm2.sm3cval2cyc
<link=p.PWM2.SM3CVAL2CYC>
#### p.pwm2.sm3cval3cyc
<link=p.PWM2.SM3CVAL3CYC>
#### p.PWM2.MCTRL
<lang=dft>
 (rw)  [1;33m0x403e0188[0m (0x403e0000 + 0x0188)
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
#### p.pwm2.ffilt0
<link=p.PWM2.FFILT0>
#### p.pwm2.ftst0
<link=p.PWM2.FTST0>
#### PWM2.FCTRL20
<link=p.PWM2.FCTRL20>
#### PWM3.SM0CNT
<link=p.PWM3.SM0CNT>
#### PWM3.SM0VAL0
<link=p.PWM3.SM0VAL0>
#### p.PWM3.SM0VAL2
<lang=dft>
 (rw)  [1;33m0x403e4012[0m (0x403e4000 + 0x0012)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### PWM3.SM0FRACVAL5
<link=p.PWM3.SM0FRACVAL5>
#### pwm3.sm0dtcnt1
<link=p.PWM3.SM0DTCNT1>
#### pwm3.sm0captctrlb
<link=p.PWM3.SM0CAPTCTRLB>
#### p.PWM3.SM0CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e403a[0m (0x403e4000 + 0x003a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### PWM3.SM0CAPTCOMPB
<link=p.PWM3.SM0CAPTCOMPB>
#### p.PWM3.SM0CVAL3
<lang=dft>
 (ro)  [1;33m0x403e404c[0m (0x403e4000 + 0x004c)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### PWM3.SM0CVAL5
<link=p.PWM3.SM0CVAL5>
#### PWM3.SM1INIT
<link=p.PWM3.SM1INIT>
#### PWM3.SM1VAL1
<link=p.PWM3.SM1VAL1>
#### p.PWM3.SM1VAL2
<lang=dft>
 (rw)  [1;33m0x403e4072[0m (0x403e4000 + 0x0072)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### PWM3.SM1OCTRL
<link=p.PWM3.SM1OCTRL>
#### pwm3.sm1sts
<link=p.PWM3.SM1STS>
#### PWM3.SM1STS
<link=p.PWM3.SM1STS>
#### pwm3.sm1captctrla
<link=p.PWM3.SM1CAPTCTRLA>
#### p.PWM3.SM1CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e40a6[0m (0x403e4000 + 0x00a6)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### pwm3.sm1cval2
<link=p.PWM3.SM1CVAL2>
#### p.pwm3.sm1cval5
<link=p.PWM3.SM1CVAL5>
#### p.PWM3.SM2CTRL2
<lang=dft>
 (rw)  [1;33m0x403e40c4[0m (0x403e4000 + 0x00c4)
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
#### PWM3.SM2CTRL
<link=p.PWM3.SM2CTRL>
#### p.pwm3.sm2val2
<link=p.PWM3.SM2VAL2>
#### pwm3.sm2val2
<link=p.PWM3.SM2VAL2>
#### p.PWM3.SM2FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e40d8[0m (0x403e4000 + 0x00d8)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### p.pwm3.sm2tctrl
<link=p.PWM3.SM2TCTRL>
#### p.pwm3.sm2dismap0
<link=p.PWM3.SM2DISMAP0>
#### p.pwm3.sm2dtcnt1
<link=p.PWM3.SM2DTCNT1>
#### pwm3.sm2cval5
<link=p.PWM3.SM2CVAL5>
#### p.PWM3.SM3CNT
<lang=dft>
 (ro)  [1;33m0x403e4120[0m (0x403e4000 + 0x0120)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### pwm3.sm3fracval2
<link=p.PWM3.SM3FRACVAL2>
#### PWM3.SM3FRACVAL3
<link=p.PWM3.SM3FRACVAL3>
#### p.pwm3.sm3val3
<link=p.PWM3.SM3VAL3>
#### pwm3.sm3val3
<link=p.PWM3.SM3VAL3>
#### PWM3.SM3VAL4
<link=p.PWM3.SM3VAL4>
#### PWM3.SM3DMAEN
<link=p.PWM3.SM3DMAEN>
#### p.pwm3.sm3dtcnt0
<link=p.PWM3.SM3DTCNT0>
#### PWM3.SM3CAPTCTRLB
<link=p.PWM3.SM3CAPTCTRLB>
#### p.pwm3.sm3captcompb
<link=p.PWM3.SM3CAPTCOMPB>
#### p.PWM3.SM3CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403e4162[0m (0x403e4000 + 0x0162)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### p.PWM3.SM3CVAL5
<lang=dft>
 (ro)  [1;33m0x403e4174[0m (0x403e4000 + 0x0174)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### pwm3.sm3cval5
<link=p.PWM3.SM3CVAL5>
#### p.PWM4
<lang=dft>
base: 0x403e8000
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
输入 p.PWM4.{reg_name} 以查看寄存器的详细信息
type p.PWM4.{reg_name} to check details of registers
</lang>
#### PWM4.SM0CNT
<link=p.PWM4.SM0CNT>
#### p.pwm4.sm0init
<link=p.PWM4.SM0INIT>
#### PWM4.SM0VAL0
<link=p.PWM4.SM0VAL0>
#### pwm4.sm0fracval2
<link=p.PWM4.SM0FRACVAL2>
#### p.pwm4.sm0val3
<link=p.PWM4.SM0VAL3>
#### p.PWM4.SM0FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e8020[0m (0x403e8000 + 0x0020)
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
#### p.PWM4.SM0INTEN
<lang=dft>
 (rw)  [1;33m0x403e8026[0m (0x403e8000 + 0x0026)
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
#### PWM4.SM0INTEN
<link=p.PWM4.SM0INTEN>
#### pwm4.sm0tctrl
<link=p.PWM4.SM0TCTRL>
#### p.pwm4.sm0dismap0
<link=p.PWM4.SM0DISMAP0>
#### p.pwm4.sm0dtcnt0
<link=p.PWM4.SM0DTCNT0>
#### PWM4.SM0CVAL0
<link=p.PWM4.SM0CVAL0>
#### p.pwm4.sm1val2
<link=p.PWM4.SM1VAL2>
#### PWM4.SM1FRACVAL3
<link=p.PWM4.SM1FRACVAL3>
#### pwm4.sm1sts
<link=p.PWM4.SM1STS>
#### PWM4.SM1DISMAP0
<link=p.PWM4.SM1DISMAP0>
#### p.pwm4.sm1dtcnt0
<link=p.PWM4.SM1DTCNT0>
#### p.PWM4.SM1CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e80a6[0m (0x403e8000 + 0x00a6)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### PWM4.SM1CVAL4
<link=p.PWM4.SM1CVAL4>
#### pwm4.sm2ctrl2
<link=p.PWM4.SM2CTRL2>
#### p.PWM4.SM2CTRL
<lang=dft>
 (rw)  [1;33m0x403e80c6[0m (0x403e8000 + 0x00c6)
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
#### pwm4.sm2val1
<link=p.PWM4.SM2VAL1>
#### p.PWM4.SM2VAL5
<lang=dft>
 (rw)  [1;33m0x403e80de[0m (0x403e8000 + 0x00de)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### PWM4.SM2VAL5
<link=p.PWM4.SM2VAL5>
#### pwm4.sm2sts
<link=p.PWM4.SM2STS>
#### p.PWM4.SM2DISMAP1
<lang=dft>
 (rw)  [1;33m0x403e80ee[0m (0x403e8000 + 0x00ee)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### pwm4.sm2captcompa
<link=p.PWM4.SM2CAPTCOMPA>
#### p.pwm4.sm2captctrlb
<link=p.PWM4.SM2CAPTCTRLB>
#### pwm4.sm2captctrlb
<link=p.PWM4.SM2CAPTCTRLB>
#### pwm4.sm2cval3
<link=p.PWM4.SM2CVAL3>
#### p.pwm4.sm2cval4
<link=p.PWM4.SM2CVAL4>
#### pwm4.sm3cnt
<link=p.PWM4.SM3CNT>
#### p.pwm4.sm3ctrl
<link=p.PWM4.SM3CTRL>
#### pwm4.sm3val0
<link=p.PWM4.SM3VAL0>
#### p.PWM4.SM3FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e8134[0m (0x403e8000 + 0x0134)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### PWM4.SM3VAL4
<link=p.PWM4.SM3VAL4>
#### pwm4.sm3fracval5
<link=p.PWM4.SM3FRACVAL5>
#### pwm4.sm3inten
<link=p.PWM4.SM3INTEN>
#### PWM4.SM3INTEN
<link=p.PWM4.SM3INTEN>
#### pwm4.sm3dmaen
<link=p.PWM4.SM3DMAEN>
#### PWM4.SM3DTCNT1
<link=p.PWM4.SM3DTCNT1>
#### p.pwm4.sm3captctrla
<link=p.PWM4.SM3CAPTCTRLA>
#### p.PWM4.SM3CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e8166[0m (0x403e8000 + 0x0166)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### p.pwm4.sm3cval2
<link=p.PWM4.SM3CVAL2>
#### pwm4.sm3cval4
<link=p.PWM4.SM3CVAL4>
#### PWM4.SM3CVAL4CYC
<link=p.PWM4.SM3CVAL4CYC>
#### p.PWM4.OUTEN
<lang=dft>
 (rw)  [1;33m0x403e8180[0m (0x403e8000 + 0x0180)
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
#### bee.aes_key0_w0
<link=p.BEE.AES_KEY0_W0>
#### p.BEE.CTR_NONCE0_W2
<lang=dft>
 (wo)  [1;33m0x403ec028[0m (0x403ec000 + 0x0028)
no description available
 (wo) (32)  [0;32mNONCE02[0m  - [31:00] -  Nonce0 from software for CTR, for region0. Nonce0={Nonce03,Nonce02,Nonce01,Nonc
 e00}
</lang>
#### bee.ctr_nonce0_w3
<link=p.BEE.CTR_NONCE0_W3>
#### bee.ctr_nonce1_w0
<link=p.BEE.CTR_NONCE1_W0>
#### p.lpi2c1.mccr0
<link=p.LPI2C1.MCCR0>
#### p.LPI2C1.MCCR1
<lang=dft>
 (rw)  [1;33m0x403f0050[0m (0x403f0000 + 0x0050)
Master Clock Configuration Register 1
 (rw) (06)  [0;32mCLKLO[0m  - [05:00] -  Clock Low Period
 (rw) (06)  [0;32mCLKHI[0m  - [13:08] -  Clock High Period
 (rw) (06)  [0;32mSETHOLD[0m  - [21:16] -  Setup Hold Delay
 (rw) (06)  [0;32mDATAVD[0m  - [29:24] -  Data Valid Delay
</lang>
#### lpi2c1.mccr1
<link=p.LPI2C1.MCCR1>
#### p.lpi2c1.scfgr1
<link=p.LPI2C1.SCFGR1>
#### LPI2C1.SCFGR2
<link=p.LPI2C1.SCFGR2>
#### p.LPI2C2
<lang=dft>
base: 0x403f4000
MCCR0           MCCR1           MCFGR0          MCFGR1          
MCFGR2          MCFGR3          MCR             MDER            
MDMR            MFCR            MFSR            MIER            
MRDR            MSR             MTDR            PARAM           
SAMR            SASR            SCFGR1          SCFGR2          
SCR             SDER            SIER            SRDR            
SSR             STAR            STDR            VERID           
输入 p.LPI2C2.{reg_name} 以查看寄存器的详细信息
type p.LPI2C2.{reg_name} to check details of registers
</lang>
#### p.lpi2c2
<link=p.LPI2C2>
#### p.LPI2C2.MCR
<lang=dft>
 (rw)  [1;33m0x403f4010[0m (0x403f4000 + 0x0010)
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
#### lpi2c2.mcfgr1
<link=p.LPI2C2.MCFGR1>
#### p.LPI2C2.MCFGR2
<lang=dft>
 (rw)  [1;33m0x403f4028[0m (0x403f4000 + 0x0028)
Master Configuration Register 2
 (rw) (12)  [0;32mBUSIDLE[0m  - [11:00] -  Bus Idle Timeout
 (rw) (04)  [0;32mFILTSCL[0m  - [19:16] -  Glitch Filter SCL
 (rw) (04)  [0;32mFILTSDA[0m  - [27:24] -  Glitch Filter SDA
</lang>
#### p.lpi2c2.mcfgr3
<link=p.LPI2C2.MCFGR3>
#### lpi2c2.mfsr
<link=p.LPI2C2.MFSR>
#### lpi2c2.sder
<link=p.LPI2C2.SDER>
#### LPI2C2.STAR
<link=p.LPI2C2.STAR>
#### p.LPI2C3.PARAM
<lang=dft>
 (ro)  [1;33m0x403f8004[0m (0x403f8000 + 0x0004)
Parameter Register
 (ro) (04)  [0;32mMTXFIFO[0m  - [03:00] -  Master Transmit FIFO Size
 (ro) (04)  [0;32mMRXFIFO[0m  - [11:08] -  Master Receive FIFO Size
</lang>
#### p.lpi2c3.mder
<link=p.LPI2C3.MDER>
#### LPI2C3.MCFGR0
<link=p.LPI2C3.MCFGR0>
#### p.LPI2C3.MCFGR1
<lang=dft>
 (rw)  [1;33m0x403f8024[0m (0x403f8000 + 0x0024)
Master Configuration Register 1
 (rw) (03)  [0;32mPRESCALE[0m  - [02:00] -  Prescaler
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
 (rw) (01)  [0;32mAUTOSTOP[0m  - [08:08] -  Automatic STOP Generation
      0 - AUTOSTOP_0 :
         No effect
      0x1 - AUTOSTOP_1 :
         STOP condition is automatically generated whenever the transmit FIFO is
          empty and the LPI2C master is busy
 (rw) (01)  [0;32mIGNACK[0m  - [09:09] -  IGNACK
      0 - IGNACK_0 :
         LPI2C Master will receive ACK and NACK normally
      0x1 - IGNACK_1 :
         LPI2C Master will treat a received NACK as if it (NACK) was an ACK
 (rw) (01)  [0;32mTIMECFG[0m  - [10:10] -  Timeout Configuration
      0 - TIMECFG_0 :
         Pin Low Timeout Flag will set if SCL is low for longer than the configu
         red timeout
      0x1 - TIMECFG_1 :
         Pin Low Timeout Flag will set if either SCL or SDA is low for longer th
         an the configured timeout
 (rw) (03)  [0;32mMATCFG[0m  - [18:16] -  Match Configuration
      0 - MATCFG_0 :
         Match is disabled
      0x2 - MATCFG_2 :
         Match is enabled (1st data word equals MATCH0 OR MATCH1)
      0x3 - MATCFG_3 :
         Match is enabled (any data word equals MATCH0 OR MATCH1)
      0x4 - MATCFG_4 :
         Match is enabled (1st data word equals MATCH0 AND 2nd data word equals 
         MATCH1)
      0x5 - MATCFG_5 :
         Match is enabled (any data word equals MATCH0 AND next data word equals
          MATCH1)
      0x6 - MATCFG_6 :
         Match is enabled (1st data word AND MATCH1 equals MATCH0 AND MATCH1)
      0x7 - MATCFG_7 :
         Match is enabled (any data word AND MATCH1 equals MATCH0 AND MATCH1)
 (rw) (03)  [0;32mPINCFG[0m  - [26:24] -  Pin Configuration
      0 - PINCFG_0 :
         2-pin open drain mode
      0x1 - PINCFG_1 :
         2-pin output only mode (ultra-fast mode)
      0x2 - PINCFG_2 :
         2-pin push-pull mode
      0x3 - PINCFG_3 :
         4-pin push-pull mode
      0x4 - PINCFG_4 :
         2-pin open drain mode with separate LPI2C slave
      0x5 - PINCFG_5 :
         2-pin output only mode (ultra-fast mode) with separate LPI2C slave
      0x6 - PINCFG_6 :
         2-pin push-pull mode with separate LPI2C slave
      0x7 - PINCFG_7 :
         4-pin push-pull mode (inverted outputs)
</lang>
#### lpi2c3.mcfgr2
<link=p.LPI2C3.MCFGR2>
#### p.lpi2c3.mfcr
<link=p.LPI2C3.MFCR>
#### lpi2c3.mfcr
<link=p.LPI2C3.MFCR>
#### p.LPI2C3.SSR
<lang=dft>
 (rw)  [1;33m0x403f8114[0m (0x403f8000 + 0x0114)
Slave Status Register
 (ro) (01)  [0;32mTDF[0m  - [00:00] -  Transmit Data Flag
      0 - TDF_0 :
         Transmit data not requested
      0x1 - TDF_1 :
         Transmit data is requested
 (ro) (01)  [0;32mRDF[0m  - [01:01] -  Receive Data Flag
      0 - RDF_0 :
         Receive data is not ready
      0x1 - RDF_1 :
         Receive data is ready
 (ro) (01)  [0;32mAVF[0m  - [02:02] -  Address Valid Flag
      0 - AVF_0 :
         Address Status Register is not valid
      0x1 - AVF_1 :
         Address Status Register is valid
 (ro) (01)  [0;32mTAF[0m  - [03:03] -  Transmit ACK Flag
      0 - TAF_0 :
         Transmit ACK/NACK is not required
      0x1 - TAF_1 :
         Transmit ACK/NACK is required
 (rw) (01)  [0;32mRSF[0m  - [08:08] -  Repeated Start Flag
      0 - RSF_0 :
         Slave has not detected a Repeated START condition
      0x1 - RSF_1 :
         Slave has detected a Repeated START condition
 (rw) (01)  [0;32mSDF[0m  - [09:09] -  STOP Detect Flag
      0 - SDF_0 :
         Slave has not detected a STOP condition
      0x1 - SDF_1 :
         Slave has detected a STOP condition
 (rw) (01)  [0;32mBEF[0m  - [10:10] -  Bit Error Flag
      0 - BEF_0 :
         Slave has not detected a bit error
      0x1 - BEF_1 :
         Slave has detected a bit error
 (rw) (01)  [0;32mFEF[0m  - [11:11] -  FIFO Error Flag
      0 - FEF_0 :
         FIFO underflow or overflow was not detected
      0x1 - FEF_1 :
         FIFO underflow or overflow was detected
 (ro) (01)  [0;32mAM0F[0m  - [12:12] -  Address Match 0 Flag
      0 - AM0F_0 :
         Have not received an ADDR0 matching address
      0x1 - AM0F_1 :
         Have received an ADDR0 matching address
 (ro) (01)  [0;32mAM1F[0m  - [13:13] -  Address Match 1 Flag
      0 - AM1F_0 :
         Have not received an ADDR1 or ADDR0/ADDR1 range matching address
      0x1 - AM1F_1 :
         Have received an ADDR1 or ADDR0/ADDR1 range matching address
 (ro) (01)  [0;32mGCF[0m  - [14:14] -  General Call Flag
      0 - GCF_0 :
         Slave has not detected the General Call Address or the General Call Add
         ress is disabled
      0x1 - GCF_1 :
         Slave has detected the General Call Address
 (ro) (01)  [0;32mSARF[0m  - [15:15] -  SMBus Alert Response Flag
      0 - SARF_0 :
         SMBus Alert Response is disabled or not detected
      0x1 - SARF_1 :
         SMBus Alert Response is enabled and detected
 (ro) (01)  [0;32mSBF[0m  - [24:24] -  Slave Busy Flag
      0 - SBF_0 :
         I2C Slave is idle
      0x1 - SBF_1 :
         I2C Slave is busy
 (ro) (01)  [0;32mBBF[0m  - [25:25] -  Bus Busy Flag
      0 - BBF_0 :
         I2C Bus is idle
      0x1 - BBF_1 :
         I2C Bus is busy
</lang>
#### LPI2C3.STDR
<link=p.LPI2C3.STDR>
#### p.lpi2c3.srdr
<link=p.LPI2C3.SRDR>
#### p.lpi2c4.param
<link=p.LPI2C4.PARAM>
#### p.LPI2C4.MCFGR2
<lang=dft>
 (rw)  [1;33m0x403fc028[0m (0x403fc000 + 0x0028)
Master Configuration Register 2
 (rw) (12)  [0;32mBUSIDLE[0m  - [11:00] -  Bus Idle Timeout
 (rw) (04)  [0;32mFILTSCL[0m  - [19:16] -  Glitch Filter SCL
 (rw) (04)  [0;32mFILTSDA[0m  - [27:24] -  Glitch Filter SDA
</lang>
#### p.lpi2c4.mcfgr2
<link=p.LPI2C4.MCFGR2>
#### lpi2c4.mcfgr2
<link=p.LPI2C4.MCFGR2>
#### lpi2c4.mfsr
<link=p.LPI2C4.MFSR>
#### LPI2C4.SSR
<link=p.LPI2C4.SSR>
#### p.LPI2C4.SDER
<lang=dft>
 (rw)  [1;33m0x403fc11c[0m (0x403fc000 + 0x011c)
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
#### lpi2c4.sder
<link=p.LPI2C4.SDER>
#### systemcontrol.icsr
<link=p.SYSTEMCONTROL.ICSR>
#### p.SYSTEMCONTROL.CFSR
<lang=dft>
 (rw)  [1;33m0xe000ed28[0m (0xe000e000 + 0x0d28)
Configurable Fault Status Register
 (rw) (01)  [0;32mIACCVIOL[0m  - [00:00] -  Instruction access violation flag
      0 - IACCVIOL_0 :
         no instruction access violation fault
      0x1 - IACCVIOL_1 :
         the processor attempted an instruction fetch from a location that does 
         not permit execution
 (rw) (01)  [0;32mDACCVIOL[0m  - [01:01] -  Data access violation flag
      0 - DACCVIOL_0 :
         no data access violation fault
      0x1 - DACCVIOL_1 :
         the processor attempted a load or store at a location that does not per
         mit the operation
 (rw) (01)  [0;32mMUNSTKERR[0m  - [03:03] -  MemManage fault on unstacking for a return from exception
      0 - MUNSTKERR_0 :
         no unstacking fault
      0x1 - MUNSTKERR_1 :
         unstack for an exception return has caused one or more access violation
         s
 (rw) (01)  [0;32mMSTKERR[0m  - [04:04] -  MemManage fault on stacking for exception entry
      0 - MSTKERR_0 :
         no stacking fault
      0x1 - MSTKERR_1 :
         stacking for an exception entry has caused one or more access violation
         s
 (rw) (01)  [0;32mMLSPERR[0m  - [05:05] -  MemManage fault occurred during floating-point lazy state preservation
      0 - MLSPERR_0 :
         No MemManage fault occurred during floating-point lazy state preservati
         on
      0x1 - MLSPERR_1 :
         A MemManage fault occurred during floating-point lazy state preservatio
         n
 (rw) (01)  [0;32mMMARVALID[0m  - [07:07] -  MemManage Fault Address Register (MMFAR) valid flag
      0 - MMARVALID_0 :
         value in MMAR is not a valid fault address
      0x1 - MMARVALID_1 :
         MMAR holds a valid fault address
 (rw) (01)  [0;32mIBUSERR[0m  - [08:08] -  Instruction bus error
      0 - IBUSERR_0 :
         no instruction bus error
      0x1 - IBUSERR_1 :
         instruction bus error
 (rw) (01)  [0;32mPRECISERR[0m  - [09:09] -  Precise data bus error
      0 - PRECISERR_0 :
         no precise data bus error
      0x1 - PRECISERR_1 :
         a data bus error has occurred, and the PC value stacked for the excepti
         on return points to the instruction that caused the fault
 (rw) (01)  [0;32mIMPRECISERR[0m  - [10:10] -  Imprecise data bus error
      0 - IMPRECISERR_0 :
         no imprecise data bus error
      0x1 - IMPRECISERR_1 :
         a data bus error has occurred, but the return address in the stack fram
         e is not related to the instruction that caused the error
 (rw) (01)  [0;32mUNSTKERR[0m  - [11:11] -  BusFault on unstacking for a return from exception
      0 - UNSTKERR_0 :
         no unstacking fault
      0x1 - UNSTKERR_1 :
         unstack for an exception return has caused one or more BusFaults
 (rw) (01)  [0;32mSTKERR[0m  - [12:12] -  BusFault on stacking for exception entry
      0 - STKERR_0 :
         no stacking fault
      0x1 - STKERR_1 :
         stacking for an exception entry has caused one or more BusFaults
 (rw) (01)  [0;32mLSPERR[0m  - [13:13] -  Bus fault occurred during floating-point lazy state preservation
      0 - LSPERR_0 :
         No bus fault occurred during floating-point lazy state preservation
      0x1 - LSPERR_1 :
         A bus fault occurred during floating-point lazy state preservation
 (rw) (01)  [0;32mBFARVALID[0m  - [15:15] -  BusFault Address Register (BFAR) valid flag
      0 - BFARVALID_0 :
         value in BFAR is not a valid fault address
      0x1 - BFARVALID_1 :
         BFAR holds a valid fault address
 (rw) (01)  [0;32mUNDEFINSTR[0m  - [16:16] -  Undefined instruction UsageFault
      0 - UNDEFINSTR_0 :
         no undefined instruction UsageFault
      0x1 - UNDEFINSTR_1 :
         the processor has attempted to execute an undefined instruction
 (rw) (01)  [0;32mINVSTATE[0m  - [17:17] -  Invalid state UsageFault
      0 - INVSTATE_0 :
         no invalid state UsageFault
      0x1 - INVSTATE_1 :
         the processor has attempted to execute an instruction that makes illega
         l use of the EPSR
 (rw) (01)  [0;32mINVPC[0m  - [18:18] -  Invalid PC load UsageFault, caused by an invalid PC load by EXC_RETURN
      0 - INVPC_0 :
         no invalid PC load UsageFault
      0x1 - INVPC_1 :
         the processor has attempted an illegal load of EXC_RETURN to the PC
 (rw) (01)  [0;32mNOCP[0m  - [19:19] -  No coprocessor UsageFault
      0 - NOCP_0 :
         no UsageFault caused by attempting to access a coprocessor
      0x1 - NOCP_1 :
         the processor has attempted to access a coprocessor
 (rw) (01)  [0;32mUNALIGNED[0m  - [24:24] -  Unaligned access UsageFault
      0 - UNALIGNED_0 :
         no unaligned access fault, or unaligned access trapping not enabled
      0x1 - UNALIGNED_1 :
         the processor has made an unaligned memory access
 (rw) (01)  [0;32mDIVBYZERO[0m  - [25:25] -  Divide by zero UsageFault
      0 - DIVBYZERO_0 :
         no divide by zero fault, or divide by zero trapping not enabled
      0x1 - DIVBYZERO_1 :
         the processor has executed an SDIV or UDIV instruction with a divisor o
         f 0
</lang>
#### p.SYSTEMCONTROL.ID_DFR0
<lang=dft>
 (ro)  [1;33m0xe000ed48[0m (0xe000e000 + 0x0d48)
Debug Feature Register
 (ro) (04)  [0;32mDEBUGMODEL[0m  - [23:20] -  Support for memory-mapped debug model for M profile processors
      0 - DEBUGMODEL_0 :
         Not supported
      0x1 - DEBUGMODEL_1 :
         Support for M profile Debug architecture, with memory-mapped access.
</lang>
#### p.systemcontrol.id_mmfr3
<link=p.SYSTEMCONTROL.ID_MMFR3>
#### p.systemcontrol.id_isar1
<link=p.SYSTEMCONTROL.ID_ISAR1>
#### SystemControl.CCSIDR
<link=p.SYSTEMCONTROL.CCSIDR>
#### systemcontrol.iciallu
<link=p.SYSTEMCONTROL.ICIALLU>
#### systemcontrol.dccimvac
<link=p.SYSTEMCONTROL.DCCIMVAC>
#### p.systemcontrol.dccisw
<link=p.SYSTEMCONTROL.DCCISW>
#### systemcontrol.cm7_dtcmcr
<link=p.SYSTEMCONTROL.CM7_DTCMCR>
#### p.nvic.nvicicer0
<link=p.NVIC.NVICICER0>
#### NVIC.NVICICER0
<link=p.NVIC.NVICICER0>
#### p.nvic.nvicispr2
<link=p.NVIC.NVICISPR2>
#### p.NVIC.NVICIABR1
<lang=dft>
 (rw)  [1;33m0xe000e304[0m (0xe000e100 + 0x0204)
Interrupt Active bit Register n
 (rw) (32)  [0;32mACTIVE[0m  - [31:00] -  Interrupt active flags
</lang>
#### p.nvic.nvicip3
<link=p.NVIC.NVICIP3>
#### p.NVIC.NVICIP6
<lang=dft>
 (rw)  [1;33m0xe000e406[0m (0xe000e100 + 0x0306)
Interrupt Priority Register 6
 (rw) (04)  [0;32mPRI6[0m  - [07:04] -  Priority of the INT_DMA6_DMA22 interrupt 6
</lang>
#### nvic.nvicip9
<link=p.NVIC.NVICIP9>
#### p.NVIC.NVICIP14
<lang=dft>
 (rw)  [1;33m0xe000e40e[0m (0xe000e100 + 0x030e)
Interrupt Priority Register 14
 (rw) (04)  [0;32mPRI14[0m  - [07:04] -  Priority of the INT_DMA14_DMA30 interrupt 14
</lang>
#### nvic.nvicip14
<link=p.NVIC.NVICIP14>
#### p.nvic.nvicip19
<link=p.NVIC.NVICIP19>
#### p.NVIC.NVICIP21
<lang=dft>
 (rw)  [1;33m0xe000e415[0m (0xe000e100 + 0x0315)
Interrupt Priority Register 21
 (rw) (04)  [0;32mPRI21[0m  - [07:04] -  Priority of the INT_LPUART2 interrupt 21
</lang>
#### p.nvic.nvicip24
<link=p.NVIC.NVICIP24>
#### nvic.nvicip25
<link=p.NVIC.NVICIP25>
#### NVIC.NVICIP27
<link=p.NVIC.NVICIP27>
#### p.NVIC.NVICIP32
<lang=dft>
 (rw)  [1;33m0xe000e420[0m (0xe000e100 + 0x0320)
Interrupt Priority Register 32
 (rw) (04)  [0;32mPRI32[0m  - [07:04] -  Priority of the INT_LPSPI1 interrupt 32
</lang>
#### nvic.nvicip32
<link=p.NVIC.NVICIP32>
#### NVIC.NVICIP34
<link=p.NVIC.NVICIP34>
#### p.nvic.nvicip37
<link=p.NVIC.NVICIP37>
#### NVIC.NVICIP44
<link=p.NVIC.NVICIP44>
#### nvic.nvicip46
<link=p.NVIC.NVICIP46>
#### p.nvic.nvicip47
<link=p.NVIC.NVICIP47>
#### p.nvic.nvicip54
<link=p.NVIC.NVICIP54>
#### NVIC.NVICIP57
<link=p.NVIC.NVICIP57>
#### p.NVIC.NVICIP58
<lang=dft>
 (rw)  [1;33m0xe000e43a[0m (0xe000e100 + 0x033a)
Interrupt Priority Register 58
 (rw) (04)  [0;32mPRI58[0m  - [07:04] -  Priority of the INT_SAI3_RX interrupt 58
</lang>
#### nvic.nvicip58
<link=p.NVIC.NVICIP58>
#### p.nvic.nvicip68
<link=p.NVIC.NVICIP68>
#### nvic.nvicip69
<link=p.NVIC.NVICIP69>
#### NVIC.NVICIP78
<link=p.NVIC.NVICIP78>
#### NVIC.NVICIP80
<link=p.NVIC.NVICIP80>
#### nvic.nvicip82
<link=p.NVIC.NVICIP82>
#### p.nvic.nvicip83
<link=p.NVIC.NVICIP83>
#### p.NVIC.NVICIP88
<lang=dft>
 (rw)  [1;33m0xe000e458[0m (0xe000e100 + 0x0358)
Interrupt Priority Register 88
 (rw) (04)  [0;32mPRI88[0m  - [07:04] -  Priority of the INT_GPIO5_Combined_0_15 interrupt 88
</lang>
#### p.nvic.nvicip90
<link=p.NVIC.NVICIP90>
#### NVIC.NVICIP93
<link=p.NVIC.NVICIP93>
#### p.NVIC.NVICIP101
<lang=dft>
 (rw)  [1;33m0xe000e465[0m (0xe000e100 + 0x0365)
Interrupt Priority Register 101
 (rw) (04)  [0;32mPRI101[0m  - [07:04] -  Priority of the INT_GPT2 interrupt 101
</lang>
#### NVIC.NVICIP104
<link=p.NVIC.NVICIP104>
#### p.NVIC.NVICIP112
<lang=dft>
 (rw)  [1;33m0xe000e470[0m (0xe000e100 + 0x0370)
Interrupt Priority Register 112
 (rw) (04)  [0;32mPRI112[0m  - [07:04] -  Priority of the INT_USB_OTG2 interrupt 112
</lang>
#### nvic.nvicip119
<link=p.NVIC.NVICIP119>
#### NVIC.NVICIP122
<link=p.NVIC.NVICIP122>
#### nvic.nvicip124
<link=p.NVIC.NVICIP124>
#### NVIC.NVICIP135
<link=p.NVIC.NVICIP135>
#### nvic.nvicip137
<link=p.NVIC.NVICIP137>
#### p.nvic.nvicip138
<link=p.NVIC.NVICIP138>
#### p.nvic.nvicip140
<link=p.NVIC.NVICIP140>
#### nvic.nvicip147
<link=p.NVIC.NVICIP147>
#### NVIC.NVICIP148
<link=p.NVIC.NVICIP148>
#### p.nvic.nvicip153
<link=p.NVIC.NVICIP153>
#### nvic.nvicip154
<link=p.NVIC.NVICIP154>
#### NVIC.NVICIP156
<link=p.NVIC.NVICIP156>
#### ldval0
<link=LDVAL0>
#### TCTRL0
<link=p.PIT.TCTRL0>
#### CR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CMP1.CR0
   p.CMP2.CR0
   p.CMP3.CR0
   p.CMP4.CR0
#### muxcr
<link=MUXCR>
#### gpr8
<link=GPR8>
#### gpr19
<link=GPR19>
#### GPR21
<link=p.IOMUXC_GPR.GPR21>
#### gpr24
<link=GPR24>
#### GPR32
<link=p.IOMUXC_GPR.GPR32>
#### cmpl
<link=CMPL>
#### hc6
<link=HC6>
#### cfg
<link=CFG>
#### SCR5C
<link=p.TRNG.SCR5C>
#### scr5c
<link=SCR5C>
#### scr6pc
<link=SCR6PC>
#### SCR6PL
<link=p.TRNG.SCR6PL>
#### ENT[4]
<link=p.TRNG.ENT[4]>
#### ENT[14]
<link=p.TRNG.ENT[14]>
#### pkrcntba
<link=PKRCNTBA>
#### SEC_CFG
<link=p.TRNG.SEC_CFG>
#### HPLR
<link=p.SNVS.HPLR>
#### HPCR
<link=p.SNVS.HPCR>
#### HPRTCMR
<link=p.SNVS.HPRTCMR>
#### hprtclr
<link=HPRTCLR>
#### HPTALR
<link=p.SNVS.HPTALR>
#### LPSRTCMR
<link=p.SNVS.LPSRTCMR>
#### lptar
<link=LPTAR>
#### LPZMKR[3]
<link=p.SNVS.LPZMKR[3]>
#### LPZMKR[4]
<link=p.SNVS.LPZMKR[4]>
#### LPGPR_alias[2]
<link=p.SNVS.LPGPR_alias[2]>
#### PLL_USB2_SET
<link=p.CCM_ANALOG.PLL_USB2_SET>
#### PLL_SYS_CLR
<link=p.CCM_ANALOG.PLL_SYS_CLR>
#### pll_audio_tog
<link=PLL_AUDIO_TOG>
#### PLL_VIDEO_CLR
<link=p.CCM_ANALOG.PLL_VIDEO_CLR>
#### pll_enet
<link=PLL_ENET>
#### REG_2P5
<link=p.PMU.REG_2P5>
#### reg_core_set
<link=REG_CORE_SET>
#### TEMPSENSE1_CLR
<link=p.TEMPMON.TEMPSENSE1_CLR>
#### usb1_chrg_detect_set
<link=USB1_CHRG_DETECT_SET>
#### usb1_loopback_tog
<link=USB1_LOOPBACK_TOG>
#### usb2_misc_tog
<link=USB2_MISC_TOG>
#### lowpwr_ctrl
<link=LOWPWR_CTRL>
#### lowpwr_ctrl_tog
<link=LOWPWR_CTRL_TOG>
#### debug0_status
<link=DEBUG0_STATUS>
#### CSL6
<link=p.CSU.CSL6>
#### CSL18
<link=p.CSU.CSL18>
#### CSL29
<link=p.CSU.CSL29>
#### csl31
<link=CSL31>
#### basic_setting
<link=BASIC_SETTING>
#### pre_charge_time
<link=PRE_CHARGE_TIME>
#### FLOW_CONTROL
<link=p.TSC.FLOW_CONTROL>
#### measeure_value
<link=MEASEURE_VALUE>
#### DCHPRI4
<link=p.DMA0.DCHPRI4>
#### dchpri4
<link=DCHPRI4>
#### DCHPRI19
<link=p.DMA0.DCHPRI19>
#### dchpri19
<link=DCHPRI19>
#### DCHPRI28
<link=p.DMA0.DCHPRI28>
#### dchpri28
<link=DCHPRI28>
#### TCD0_BITER_ELINKNO
<link=p.DMA0.TCD0_BITER_ELINKNO>
#### tcd4_attr
<link=TCD4_ATTR>
#### TCD4_NBYTES_MLOFFNO
<link=p.DMA0.TCD4_NBYTES_MLOFFNO>
#### tcd4_slast
<link=TCD4_SLAST>
#### tcd4_daddr
<link=TCD4_DADDR>
#### tcd4_citer_elinkyes
<link=TCD4_CITER_ELINKYES>
#### TCD5_NBYTES_MLOFFYES
<link=p.DMA0.TCD5_NBYTES_MLOFFYES>
#### tcd6_soff
<link=TCD6_SOFF>
#### tcd6_daddr
<link=TCD6_DADDR>
#### TCD6_DLASTSGA
<link=p.DMA0.TCD6_DLASTSGA>
#### TCD8_NBYTES_MLOFFYES
<link=p.DMA0.TCD8_NBYTES_MLOFFYES>
#### tcd8_biter_elinkyes
<link=TCD8_BITER_ELINKYES>
#### tcd9_soff
<link=TCD9_SOFF>
#### tcd9_attr
<link=TCD9_ATTR>
#### tcd9_nbytes_mloffyes
<link=TCD9_NBYTES_MLOFFYES>
#### tcd9_csr
<link=TCD9_CSR>
#### TCD10_SADDR
<link=p.DMA0.TCD10_SADDR>
#### TCD10_BITER_ELINKYES
<link=p.DMA0.TCD10_BITER_ELINKYES>
#### tcd11_soff
<link=TCD11_SOFF>
#### TCD12_ATTR
<link=p.DMA0.TCD12_ATTR>
#### TCD12_NBYTES_MLOFFNO
<link=p.DMA0.TCD12_NBYTES_MLOFFNO>
#### tcd12_nbytes_mloffno
<link=TCD12_NBYTES_MLOFFNO>
#### TCD13_SOFF
<link=p.DMA0.TCD13_SOFF>
#### TCD13_SLAST
<link=p.DMA0.TCD13_SLAST>
#### tcd14_daddr
<link=TCD14_DADDR>
#### TCD14_CITER_ELINKNO
<link=p.DMA0.TCD14_CITER_ELINKNO>
#### TCD15_ATTR
<link=p.DMA0.TCD15_ATTR>
#### tcd15_nbytes_mloffyes
<link=TCD15_NBYTES_MLOFFYES>
#### tcd16_dlastsga
<link=TCD16_DLASTSGA>
#### TCD16_BITER_ELINKYES
<link=p.DMA0.TCD16_BITER_ELINKYES>
#### TCD17_CITER_ELINKNO
<link=p.DMA0.TCD17_CITER_ELINKNO>
#### tcd18_saddr
<link=TCD18_SADDR>
#### TCD18_ATTR
<link=p.DMA0.TCD18_ATTR>
#### tcd19_saddr
<link=TCD19_SADDR>
#### TCD19_NBYTES_MLNO
<link=p.DMA0.TCD19_NBYTES_MLNO>
#### TCD19_DADDR
<link=p.DMA0.TCD19_DADDR>
#### tcd19_citer_elinkno
<link=TCD19_CITER_ELINKNO>
#### TCD19_CITER_ELINKYES
<link=p.DMA0.TCD19_CITER_ELINKYES>
#### tcd19_citer_elinkyes
<link=TCD19_CITER_ELINKYES>
#### tcd19_biter_elinkno
<link=TCD19_BITER_ELINKNO>
#### tcd20_slast
<link=TCD20_SLAST>
#### tcd20_citer_elinkno
<link=TCD20_CITER_ELINKNO>
#### TCD20_BITER_ELINKNO
<link=p.DMA0.TCD20_BITER_ELINKNO>
#### tcd21_slast
<link=TCD21_SLAST>
#### tcd21_daddr
<link=TCD21_DADDR>
#### tcd22_saddr
<link=TCD22_SADDR>
#### tcd22_nbytes_mloffno
<link=TCD22_NBYTES_MLOFFNO>
#### TCD22_CITER_ELINKNO
<link=p.DMA0.TCD22_CITER_ELINKNO>
#### TCD24_ATTR
<link=p.DMA0.TCD24_ATTR>
#### tcd25_nbytes_mlno
<link=TCD25_NBYTES_MLNO>
#### TCD25_DLASTSGA
<link=p.DMA0.TCD25_DLASTSGA>
#### TCD25_BITER_ELINKYES
<link=p.DMA0.TCD25_BITER_ELINKYES>
#### TCD27_SADDR
<link=p.DMA0.TCD27_SADDR>
#### TCD27_NBYTES_MLOFFNO
<link=p.DMA0.TCD27_NBYTES_MLOFFNO>
#### tcd27_csr
<link=TCD27_CSR>
#### tcd28_doff
<link=TCD28_DOFF>
#### TCD29_NBYTES_MLNO
<link=p.DMA0.TCD29_NBYTES_MLNO>
#### tcd29_nbytes_mloffno
<link=TCD29_NBYTES_MLOFFNO>
#### TCD29_CITER_ELINKNO
<link=p.DMA0.TCD29_CITER_ELINKNO>
#### tcd29_citer_elinkyes
<link=TCD29_CITER_ELINKYES>
#### tcd29_csr
<link=TCD29_CSR>
#### TCD30_DOFF
<link=p.DMA0.TCD30_DOFF>
#### TCD30_BITER_ELINKYES
<link=p.DMA0.TCD30_BITER_ELINKYES>
#### tcd31_saddr
<link=TCD31_SADDR>
#### TCD31_DOFF
<link=p.DMA0.TCD31_DOFF>
#### CHCFG[0]
<link=p.DMAMUX.CHCFG[0]>
#### CHCFG[7]
<link=p.DMAMUX.CHCFG[7]>
#### chcfg[8]
<link=CHCFG[8]>
#### chcfg[12]
<link=CHCFG[12]>
#### chcfg[18]
<link=CHCFG[18]>
#### chcfg[20]
<link=CHCFG[20]>
#### CHCFG[30]
<link=p.DMAMUX.CHCFG[30]>
#### CGPR
<link=p.CCM.CGPR>
#### CCGR6
<link=p.CCM.CCGR6>
#### ccgr6
<link=CCGR6>
#### ROMPATCH1D
<link=p.ROMC.ROMPATCH1D>
#### rompatch2a
<link=ROMPATCH2A>
#### rompatch10a
<link=ROMPATCH10A>
#### shifterr
<link=SHIFTERR>
#### shifteien
<link=SHIFTEIEN>
#### timien
<link=TIMIEN>
#### shiftbufbis[0]
<link=SHIFTBUFBIS[0]>
#### SHIFTBUFBYS[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFBYS[1]
   p.FLEXIO2.SHIFTBUFBYS[1]
   p.FLEXIO3.SHIFTBUFBYS[1]
#### SHIFTBUFBBS[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFBBS[3]
   p.FLEXIO2.SHIFTBUFBBS[3]
   p.FLEXIO3.SHIFTBUFBBS[3]
#### PSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPIO1.PSR
   p.GPIO5.PSR
   p.GPIO2.PSR
   p.GPIO3.PSR
   p.GPIO4.PSR
   p.GPIO6.PSR
   p.GPIO7.PSR
   p.GPIO8.PSR
   p.GPIO9.PSR
#### IMASK2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.IMASK2
   p.CAN2.IMASK2
   p.CAN3.IMASK2
#### ESR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.ESR2
   p.CAN2.ESR2
   p.CAN3.ESR2
#### dbg2
<link=DBG2>
#### RXIMR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR0
   p.CAN2.RXIMR0
#### rximr7
<link=RXIMR7>
#### rximr16
<link=RXIMR16>
#### RXIMR23
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR23
   p.CAN2.RXIMR23
#### RXIMR30
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR30
   p.CAN2.RXIMR30
#### RXIMR41
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR41
   p.CAN2.RXIMR41
#### rximr46
<link=RXIMR46>
#### RXIMR52
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR52
   p.CAN2.RXIMR52
#### rximr59
<link=RXIMR59>
#### rximr60
<link=RXIMR60>
#### mb0_8b_cs
<link=MB0_8B_CS>
#### MB0_64B_ID
<link=p.CAN3.MB0_64B_ID>
#### mb0_64b_word2
<link=MB0_64B_WORD2>
#### mb1_8b_cs
<link=MB1_8B_CS>
#### MB0_16B_WORD3
<link=p.CAN3.MB0_16B_WORD3>
#### MB0_64B_WORD8
<link=p.CAN3.MB0_64B_WORD8>
#### cs3
<link=CS3>
#### ID3
<link=p.CAN3.ID3>
#### MB1_32B_WORD3
<link=p.CAN3.MB1_32B_WORD3>
#### mb4_8b_word0
<link=MB4_8B_WORD0>
#### word14
<link=WORD14>
#### mb2_32b_word0
<link=MB2_32B_WORD0>
#### mb1_64b_word3
<link=MB1_64B_WORD3>
#### MB1_64B_WORD8
<link=p.CAN3.MB1_64B_WORD8>
#### MB8_8B_CS
<link=p.CAN3.MB8_8B_CS>
#### mb5_16b_word2
<link=MB5_16B_WORD2>
#### mb8_8b_word0
<link=MB8_8B_WORD0>
#### word08
<link=WORD08>
#### MB9_8B_CS
<link=p.CAN3.MB9_8B_CS>
#### MB3_32B_WORD7
<link=p.CAN3.MB3_32B_WORD7>
#### MB10_8B_CS
<link=p.CAN3.MB10_8B_CS>
#### MB2_64B_WORD2
<link=p.CAN3.MB2_64B_WORD2>
#### MB6_16B_WORD2
<link=p.CAN3.MB6_16B_WORD2>
#### mb7_16b_word1
<link=MB7_16B_WORD1>
#### mb2_64b_word8
<link=MB2_64B_WORD8>
#### MB12_8B_ID
<link=p.CAN3.MB12_8B_ID>
#### mb8_16b_id
<link=MB8_16B_ID>
#### MB2_64B_WORD12
<link=p.CAN3.MB2_64B_WORD12>
#### MB5_32B_CS
<link=p.CAN3.MB5_32B_CS>
#### WORD012
<link=p.CAN3.WORD012>
#### mb3_64b_cs
<link=MB3_64B_CS>
#### mb13_8b_word1
<link=MB13_8B_WORD1>
#### MB9_16B_WORD2
<link=p.CAN3.MB9_16B_WORD2>
#### MB5_32B_WORD7
<link=p.CAN3.MB5_32B_WORD7>
#### MB3_64B_WORD4
<link=p.CAN3.MB3_64B_WORD4>
#### mb3_64b_word9
<link=MB3_64B_WORD9>
#### mb6_32b_word4
<link=MB6_32B_WORD4>
#### word016
<link=WORD016>
#### MB17_8B_WORD1
<link=p.CAN3.MB17_8B_WORD1>
#### mb4_64b_cs
<link=MB4_64B_CS>
#### mb18_8b_id
<link=MB18_8B_ID>
#### MB7_32B_WORD3
<link=p.CAN3.MB7_32B_WORD3>
#### word118
<link=WORD118>
#### ID19
<link=p.CAN3.ID19>
#### cs20
<link=CS20>
#### id20
<link=ID20>
#### mb4_64b_word7
<link=MB4_64B_WORD7>
#### MB8_32B_ID
<link=p.CAN3.MB8_32B_ID>
#### MB20_8B_WORD1
<link=p.CAN3.MB20_8B_WORD1>
#### mb14_16b_cs
<link=MB14_16B_CS>
#### MB21_8B_CS
<link=p.CAN3.MB21_8B_CS>
#### MB4_64B_WORD10
<link=p.CAN3.MB4_64B_WORD10>
#### MB8_32B_WORD3
<link=p.CAN3.MB8_32B_WORD3>
#### MB14_16B_WORD1
<link=p.CAN3.MB14_16B_WORD1>
#### mb14_16b_word3
<link=MB14_16B_WORD3>
#### mb9_32b_word0
<link=MB9_32B_WORD0>
#### WORD023
<link=p.CAN3.WORD023>
#### CS24
<link=p.CAN3.CS24>
#### mb24_8b_cs
<link=MB24_8B_CS>
#### mb5_64b_word6
<link=MB5_64B_WORD6>
#### MB16_16B_WORD1
<link=p.CAN3.MB16_16B_WORD1>
#### mb25_8b_id
<link=MB25_8B_ID>
#### MB17_16B_CS
<link=p.CAN3.MB17_16B_CS>
#### MB5_64B_WORD12
<link=p.CAN3.MB5_64B_WORD12>
#### mb5_64b_word15
<link=MB5_64B_WORD15>
#### WORD126
<link=p.CAN3.WORD126>
#### MB6_64B_CS
<link=p.CAN3.MB6_64B_CS>
#### MB6_64B_ID
<link=p.CAN3.MB6_64B_ID>
#### word027
<link=WORD027>
#### mb11_32b_word0
<link=MB11_32B_WORD0>
#### MB28_8B_CS
<link=p.CAN3.MB28_8B_CS>
#### MB28_8B_ID
<link=p.CAN3.MB28_8B_ID>
#### MB11_32B_WORD2
<link=p.CAN3.MB11_32B_WORD2>
#### MB6_64B_WORD7
<link=p.CAN3.MB6_64B_WORD7>
#### MB19_16B_WORD2
<link=p.CAN3.MB19_16B_WORD2>
#### word129
<link=WORD129>
#### word030
<link=WORD030>
#### mb6_64b_word14
<link=MB6_64B_WORD14>
#### MB13_32B_WORD0
<link=p.CAN3.MB13_32B_WORD0>
#### id33
<link=ID33>
#### mb22_16b_id
<link=MB22_16B_ID>
#### mb13_32b_word3
<link=MB13_32B_WORD3>
#### MB7_64B_WORD7
<link=p.CAN3.MB7_64B_WORD7>
#### MB34_8B_CS
<link=p.CAN3.MB34_8B_CS>
#### MB23_16B_CS
<link=p.CAN3.MB23_16B_CS>
#### mb34_8b_word1
<link=MB34_8B_WORD1>
#### mb14_32b_id
<link=MB14_32B_ID>
#### mb7_64b_word13
<link=MB7_64B_WORD13>
#### WORD135
<link=p.CAN3.WORD135>
#### mb36_8b_cs
<link=MB36_8B_CS>
#### MB24_16B_WORD0
<link=p.CAN3.MB24_16B_WORD0>
#### cs37
<link=CS37>
#### mb37_8b_cs
<link=MB37_8B_CS>
#### mb37_8b_id
<link=MB37_8B_ID>
#### MB37_8B_WORD0
<link=p.CAN3.MB37_8B_WORD0>
#### CS38
<link=p.CAN3.CS38>
#### MB8_64B_WORD6
<link=p.CAN3.MB8_64B_WORD6>
#### mb8_64b_word8
<link=MB8_64B_WORD8>
#### mb38_8b_word1
<link=MB38_8B_WORD1>
#### mb15_32b_word4
<link=MB15_32B_WORD4>
#### MB15_32B_WORD6
<link=p.CAN3.MB15_32B_WORD6>
#### MB26_16B_WORD3
<link=p.CAN3.MB26_16B_WORD3>
#### MB9_64B_CS
<link=p.CAN3.MB9_64B_CS>
#### MB27_16B_WORD3
<link=p.CAN3.MB27_16B_WORD3>
#### MB28_16B_CS
<link=p.CAN3.MB28_16B_CS>
#### id42
<link=ID42>
#### MB28_16B_ID
<link=p.CAN3.MB28_16B_ID>
#### MB9_64B_WORD6
<link=p.CAN3.MB9_64B_WORD6>
#### mb28_16b_word1
<link=MB28_16B_WORD1>
#### mb9_64b_word9
<link=MB9_64B_WORD9>
#### MB9_64B_WORD10
<link=p.CAN3.MB9_64B_WORD10>
#### mb43_8b_word1
<link=MB43_8B_WORD1>
#### word143
<link=WORD143>
#### MB17_32B_WORD4
<link=p.CAN3.MB17_32B_WORD4>
#### mb44_8b_id
<link=MB44_8B_ID>
#### mb9_64b_word13
<link=MB9_64B_WORD13>
#### mb17_32b_word7
<link=MB17_32B_WORD7>
#### MB44_8B_WORD1
<link=p.CAN3.MB44_8B_WORD1>
#### MB30_16B_CS
<link=p.CAN3.MB30_16B_CS>
#### mb18_32b_word0
<link=MB18_32B_WORD0>
#### ID46
<link=p.CAN3.ID46>
#### mb10_64b_word3
<link=MB10_64B_WORD3>
#### MB18_32B_WORD3
<link=p.CAN3.MB18_32B_WORD3>
#### word046
<link=WORD046>
#### MB10_64B_WORD6
<link=p.CAN3.MB10_64B_WORD6>
#### mb31_16b_word0
<link=MB31_16B_WORD0>
#### MB31_16B_WORD2
<link=p.CAN3.MB31_16B_WORD2>
#### WORD147
<link=p.CAN3.WORD147>
#### mb32_16b_cs
<link=MB32_16B_CS>
#### MB32_16B_ID
<link=p.CAN3.MB32_16B_ID>
#### CS49
<link=p.CAN3.CS49>
#### mb11_64b_id
<link=MB11_64B_ID>
#### MB11_64B_WORD0
<link=p.CAN3.MB11_64B_WORD0>
#### mb11_64b_word1
<link=MB11_64B_WORD1>
#### mb33_16b_word3
<link=MB33_16B_WORD3>
#### mb50_8b_word1
<link=MB50_8B_WORD1>
#### id51
<link=ID51>
#### CS52
<link=p.CAN3.CS52>
#### mb20_32b_word6
<link=MB20_32B_WORD6>
#### mb21_32b_word1
<link=MB21_32B_WORD1>
#### mb35_16b_word3
<link=MB35_16B_WORD3>
#### mb54_8b_id
<link=MB54_8B_ID>
#### word154
<link=WORD154>
#### ID55
<link=p.CAN3.ID55>
#### cs56
<link=CS56>
#### mb22_32b_word2
<link=MB22_32B_WORD2>
#### MB12_64B_WORD9
<link=p.CAN3.MB12_64B_WORD9>
#### mb12_64b_word10
<link=MB12_64B_WORD10>
#### MB23_32B_ID
<link=p.CAN3.MB23_32B_ID>
#### mb23_32b_word1
<link=MB23_32B_WORD1>
#### mb38_16b_word3
<link=MB38_16B_WORD3>
#### MB13_64B_ID
<link=p.CAN3.MB13_64B_ID>
#### WORD158
<link=p.CAN3.WORD158>
#### mb59_8b_word1
<link=MB59_8B_WORD1>
#### ID60
<link=p.CAN3.ID60>
#### mb13_64b_word9
<link=MB13_64B_WORD9>
#### MB62_8B_CS
<link=p.CAN3.MB62_8B_CS>
#### mb63_8b_cs
<link=MB63_8B_CS>
#### rximr[2]
<link=RXIMR[2]>
#### rximr[5]
<link=RXIMR[5]>
#### rximr[8]
<link=RXIMR[8]>
#### rximr[12]
<link=RXIMR[12]>
#### RXIMR[42]
<link=p.CAN3.RXIMR[42]>
#### RXIMR[47]
<link=p.CAN3.RXIMR[47]>
#### etdc
<link=ETDC>
#### hr_time_stamp[13]
<link=HR_TIME_STAMP[13]>
#### hr_time_stamp[14]
<link=HR_TIME_STAMP[14]>
#### HR_TIME_STAMP[18]
<link=p.CAN3.HR_TIME_STAMP[18]>
#### hr_time_stamp[38]
<link=HR_TIME_STAMP[38]>
#### HR_TIME_STAMP[41]
<link=p.CAN3.HR_TIME_STAMP[41]>
#### hr_time_stamp[44]
<link=HR_TIME_STAMP[44]>
#### HR_TIME_STAMP[46]
<link=p.CAN3.HR_TIME_STAMP[46]>
#### HR_TIME_STAMP[52]
<link=p.CAN3.HR_TIME_STAMP[52]>
#### hr_time_stamp[61]
<link=HR_TIME_STAMP[61]>
#### erffel[1]
<link=ERFFEL[1]>
#### ERFFEL[11]
<link=p.CAN3.ERFFEL[11]>
#### erffel[11]
<link=ERFFEL[11]>
#### ERFFEL[37]
<link=p.CAN3.ERFFEL[37]>
#### erffel[46]
<link=ERFFEL[46]>
#### erffel[52]
<link=ERFFEL[52]>
#### ERFFEL[60]
<link=p.CAN3.ERFFEL[60]>
#### erffel[60]
<link=ERFFEL[60]>
#### ERFFEL[65]
<link=p.CAN3.ERFFEL[65]>
#### ERFFEL[76]
<link=p.CAN3.ERFFEL[76]>
#### erffel[81]
<link=ERFFEL[81]>
#### ERFFEL[82]
<link=p.CAN3.ERFFEL[82]>
#### ERFFEL[96]
<link=p.CAN3.ERFFEL[96]>
#### ERFFEL[107]
<link=p.CAN3.ERFFEL[107]>
#### erffel[107]
<link=ERFFEL[107]>
#### erffel[118]
<link=ERFFEL[118]>
#### LOAD2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.LOAD2
   p.TMR2.LOAD2
   p.TMR3.LOAD2
   p.TMR4.LOAD2
#### load2
<link=LOAD2>
#### CNTR3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CNTR3
   p.TMR2.CNTR3
   p.TMR3.CNTR3
   p.TMR4.CNTR3
#### SCTRL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.SCTRL0
   p.TMR2.SCTRL0
   p.TMR3.SCTRL0
   p.TMR4.SCTRL0
#### CMPLD21
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CMPLD21
   p.TMR2.CMPLD21
   p.TMR3.CMPLD21
   p.TMR4.CMPLD21
#### READ_CTRL
<link=p.OCOTP.READ_CTRL>
#### SCS_TOG
<link=p.OCOTP.SCS_TOG>
#### cfg5
<link=CFG5>
#### ANA1
<link=p.OCOTP.ANA1>
#### otpmk0
<link=OTPMK0>
#### srk7
<link=SRK7>
#### SW_GP22
<link=p.OCOTP.SW_GP22>
#### ROM_PATCH7
<link=p.OCOTP.ROM_PATCH7>
#### rom_patch7
<link=ROM_PATCH7>
#### gp41
<link=GP41>
#### SW_MUX_CTL_PAD_GPIO_EMC_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_14>
#### sw_mux_ctl_pad_gpio_emc_14
<link=SW_MUX_CTL_PAD_GPIO_EMC_14>
#### SW_MUX_CTL_PAD_GPIO_EMC_25
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_25>
#### sw_mux_ctl_pad_gpio_emc_25
<link=SW_MUX_CTL_PAD_GPIO_EMC_25>
#### SW_MUX_CTL_PAD_GPIO_EMC_32
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_32>
#### sw_mux_ctl_pad_gpio_emc_32
<link=SW_MUX_CTL_PAD_GPIO_EMC_32>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_02>
#### sw_mux_ctl_pad_gpio_ad_b0_11
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_11>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_15>
#### sw_mux_ctl_pad_gpio_ad_b1_05
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_05>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_08>
#### sw_mux_ctl_pad_gpio_ad_b1_12
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_12>
#### sw_mux_ctl_pad_gpio_b0_05
<link=SW_MUX_CTL_PAD_GPIO_B0_05>
#### SW_MUX_CTL_PAD_GPIO_B0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_06>
#### sw_mux_ctl_pad_gpio_b0_12
<link=SW_MUX_CTL_PAD_GPIO_B0_12>
#### SW_MUX_CTL_PAD_GPIO_B1_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_12>
#### sw_mux_ctl_pad_gpio_b1_12
<link=SW_MUX_CTL_PAD_GPIO_B1_12>
#### sw_mux_ctl_pad_gpio_sd_b0_02
<link=SW_MUX_CTL_PAD_GPIO_SD_B0_02>
#### SW_MUX_CTL_PAD_GPIO_SD_B0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_05>
#### sw_mux_ctl_pad_gpio_sd_b1_05
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_05>
#### SW_MUX_CTL_PAD_GPIO_SD_B1_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_09>
#### sw_pad_ctl_pad_gpio_emc_06
<link=SW_PAD_CTL_PAD_GPIO_EMC_06>
#### SW_PAD_CTL_PAD_GPIO_EMC_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_13>
#### SW_PAD_CTL_PAD_GPIO_EMC_22
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_22>
#### sw_pad_ctl_pad_gpio_emc_28
<link=SW_PAD_CTL_PAD_GPIO_EMC_28>
#### SW_PAD_CTL_PAD_GPIO_EMC_35
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_35>
#### SW_PAD_CTL_PAD_GPIO_EMC_40
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_40>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_07>
#### sw_pad_ctl_pad_gpio_ad_b1_07
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_07>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_09>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_13>
#### SW_PAD_CTL_PAD_GPIO_B1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_02>
#### sw_pad_ctl_pad_gpio_b1_04
<link=SW_PAD_CTL_PAD_GPIO_B1_04>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_04>
#### csi_data09_select_input
<link=CSI_DATA09_SELECT_INPUT>
#### enet_mdio_select_input
<link=ENET_MDIO_SELECT_INPUT>
#### enet_rxen_select_input
<link=ENET_RXEN_SELECT_INPUT>
#### flexpwm1_pwma0_select_input
<link=FLEXPWM1_PWMA0_SELECT_INPUT>
#### LPI2C2_SCL_SELECT_INPUT
<link=p.IOMUXC.LPI2C2_SCL_SELECT_INPUT>
#### lpi2c2_scl_select_input
<link=LPI2C2_SCL_SELECT_INPUT>
#### LPI2C2_SDA_SELECT_INPUT
<link=p.IOMUXC.LPI2C2_SDA_SELECT_INPUT>
#### lpspi1_sck_select_input
<link=LPSPI1_SCK_SELECT_INPUT>
#### LPSPI2_SDI_SELECT_INPUT
<link=p.IOMUXC.LPSPI2_SDI_SELECT_INPUT>
#### LPSPI4_SDI_SELECT_INPUT
<link=p.IOMUXC.LPSPI4_SDI_SELECT_INPUT>
#### QTIMER2_TIMER0_SELECT_INPUT
<link=p.IOMUXC.QTIMER2_TIMER0_SELECT_INPUT>
#### QTIMER2_TIMER1_SELECT_INPUT
<link=p.IOMUXC.QTIMER2_TIMER1_SELECT_INPUT>
#### QTIMER3_TIMER0_SELECT_INPUT
<link=p.IOMUXC.QTIMER3_TIMER0_SELECT_INPUT>
#### QTIMER3_TIMER2_SELECT_INPUT
<link=p.IOMUXC.QTIMER3_TIMER2_SELECT_INPUT>
#### sai1_rx_data1_select_input
<link=SAI1_RX_DATA1_SELECT_INPUT>
#### SAI2_MCLK2_SELECT_INPUT
<link=p.IOMUXC.SAI2_MCLK2_SELECT_INPUT>
#### USDHC2_DATA6_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA6_SELECT_INPUT>
#### XBAR1_IN06_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN06_SELECT_INPUT>
#### XBAR1_IN07_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN07_SELECT_INPUT>
#### XBAR1_IN21_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN21_SELECT_INPUT>
#### sw_mux_ctl_pad_gpio_spi_b0_03
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_03>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_09>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_13>
#### sw_pad_ctl_pad_gpio_spi_b0_06
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_06>
#### SW_PAD_CTL_PAD_GPIO_SPI_B1_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_04>
#### enet2_ipp_ind_mac0_timer_select_input_0
<link=ENET2_IPP_IND_MAC0_TIMER_SELECT_INPUT_0>
#### FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT>
#### FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT>
#### flexspi2_ipp_ind_io_fb_bit0_select_input
<link=FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT>
#### flexspi2_ipp_ind_io_fb_bit2_select_input
<link=FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT>
#### kddr
<link=KDDR>
#### flshcr1b1
<link=FLSHCR1B1>
#### IPRXFCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.IPRXFCR
   p.FLEXSPI2.IPRXFCR
#### rfdr[6]
<link=RFDR[6]>
#### rfdr[13]
<link=RFDR[13]>
#### rfdr[19]
<link=RFDR[19]>
#### TFDR[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[2]
   p.FLEXSPI2.TFDR[2]
#### tfdr[2]
<link=TFDR[2]>
#### TFDR[12]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[12]
   p.FLEXSPI2.TFDR[12]
#### tfdr[12]
<link=TFDR[12]>
#### TFDR[19]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[19]
   p.FLEXSPI2.TFDR[19]
#### tfdr[19]
<link=TFDR[19]>
#### TFDR[28]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[28]
   p.FLEXSPI2.TFDR[28]
#### tfdr[28]
<link=TFDR[28]>
#### LUT[5]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[5]
   p.FLEXSPI2.LUT[5]
#### LUT[21]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[21]
   p.FLEXSPI2.LUT[21]
#### LUT[39]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[39]
   p.FLEXSPI2.LUT[39]
#### LUT[46]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[46]
   p.FLEXSPI2.LUT[46]
#### LUT[50]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[50]
   p.FLEXSPI2.LUT[50]
#### lut[50]
<link=LUT[50]>
#### LUT[55]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[55]
   p.FLEXSPI2.LUT[55]
#### out_buf
<link=OUT_BUF>
#### ps_ctrl
<link=PS_CTRL>
#### ps_background
<link=PS_BACKGROUND>
#### as_clrkeylow
<link=AS_CLRKEYLOW>
#### CSC1_COEF2
<link=p.PXP.CSC1_COEF2>
#### porter_duff_ctrl
<link=PORTER_DUFF_CTRL>
#### PIGEON_1_2
<link=p.LCDIF.PIGEON_1_2>
#### PIGEON_3_0
<link=p.LCDIF.PIGEON_3_0>
#### pigeon_4_2
<link=PIGEON_4_2>
#### pigeon_9_0
<link=PIGEON_9_0>
#### lut1_addr
<link=LUT1_ADDR>
#### lut1_data
<link=LUT1_DATA>
#### CSIDMASA_FB2
<link=p.CSI.CSIDMASA_FB2>
#### csiimag_para
<link=CSIIMAG_PARA>
#### PROT_CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.PROT_CTRL
   p.USDHC2.PROT_CTRL
#### mmfr
<link=MMFR>
#### GALR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.GALR
   p.ENET2.GALR
#### rmon_t_oversize
<link=RMON_T_OVERSIZE>
#### IEEE_T_MCOL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_MCOL
   p.ENET2.IEEE_T_MCOL
#### ieee_t_excol
<link=IEEE_T_EXCOL>
#### IEEE_T_SQE
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_SQE
   p.ENET2.IEEE_T_SQE
#### IEEE_T_OCTETS_OK
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_OCTETS_OK
   p.ENET2.IEEE_T_OCTETS_OK
#### ieee_t_octets_ok
<link=IEEE_T_OCTETS_OK>
#### RMON_R_P65TO127
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_P65TO127
   p.ENET2.RMON_R_P65TO127
#### rmon_r_p512to1023
<link=RMON_R_P512TO1023>
#### IEEE_R_FRAME_OK
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_R_FRAME_OK
   p.ENET2.IEEE_R_FRAME_OK
#### IEEE_R_MACERR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_R_MACERR
   p.ENET2.IEEE_R_MACERR
#### caplength
<link=CAPLENGTH>
#### dccparams
<link=DCCPARAMS>
#### FRINDEX
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.FRINDEX
   p.USB2.FRINDEX
#### ASYNCLISTADDR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ASYNCLISTADDR
   p.USB2.ASYNCLISTADDR
#### OTGSC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.OTGSC
   p.USB2.OTGSC
#### USBMODE
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.USBMODE
   p.USB2.USBMODE
#### ENDPTSTAT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTSTAT
   p.USB2.ENDPTSTAT
#### ENDPTCTRL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTCTRL2
   p.USB2.ENDPTCTRL2
#### endptctrl4
<link=ENDPTCTRL4>
#### br1
<link=BR1>
#### nandcr0
<link=NANDCR0>
#### norcr0
<link=NORCR0>
#### sramcr0
<link=SRAMCR0>
#### STS4
<link=p.SEMC.STS4>
#### sts6
<link=STS6>
#### CAPABILITY1
<link=p.DCP.CAPABILITY1>
#### PACKET1
<link=p.DCP.PACKET1>
#### ch0stat_clr
<link=CH0STAT_CLR>
#### CH0OPTS
<link=p.DCP.CH0OPTS>
#### ch0opts_clr
<link=CH0OPTS_CLR>
#### CH0OPTS_TOG
<link=p.DCP.CH0OPTS_TOG>
#### ch1stat_set
<link=CH1STAT_SET>
#### CH1STAT_TOG
<link=p.DCP.CH1STAT_TOG>
#### ch3stat
<link=CH3STAT>
#### SIE
<link=p.SPDIF.SIE>
#### SRCSL
<link=p.SPDIF.SRCSL>
#### sru
<link=SRU>
#### srfm
<link=SRFM>
#### tmr
<link=TMR>
#### rcr5
<link=RCR5>
#### rdr[3]
<link=RDR[3]>
#### IER
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPSPI1.IER
   p.LPSPI2.IER
   p.LPSPI3.IER
   p.LPSPI4.IER
#### cfgr0
<link=CFGR0>
#### FCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPSPI1.FCR
   p.LPSPI2.FCR
   p.LPSPI3.FCR
   p.LPSPI4.FCR
#### fsr
<link=FSR>
#### TRIG1_CHAIN_7_6
<link=p.ADC_ETC.TRIG1_CHAIN_7_6>
#### trig2_result_1_0
<link=TRIG2_RESULT_1_0>
#### trig2_result_3_2
<link=TRIG2_RESULT_3_2>
#### TRIG3_CHAIN_1_0
<link=p.ADC_ETC.TRIG3_CHAIN_1_0>
#### TRIG3_CHAIN_7_6
<link=p.ADC_ETC.TRIG3_CHAIN_7_6>
#### trig4_counter
<link=TRIG4_COUNTER>
#### trig4_chain_3_2
<link=TRIG4_CHAIN_3_2>
#### trig4_result_3_2
<link=TRIG4_RESULT_3_2>
#### trig4_result_5_4
<link=TRIG4_RESULT_5_4>
#### TRIG5_CHAIN_5_4
<link=p.ADC_ETC.TRIG5_CHAIN_5_4>
#### trig6_chain_3_2
<link=TRIG6_CHAIN_3_2>
#### trig6_chain_5_4
<link=TRIG6_CHAIN_5_4>
#### BFCRT230
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AOI1.BFCRT230
   p.AOI2.BFCRT230
#### sel6
<link=SEL6>
#### sel10
<link=SEL10>
#### SEL19
<link=p.XBARA1.SEL19>
#### sel36
<link=SEL36>
#### SEL45
<link=p.XBARA1.SEL45>
#### sel47
<link=SEL47>
#### sel61
<link=SEL61>
#### SEL63
<link=p.XBARA1.SEL63>
#### wtr
<link=WTR>
#### tst
<link=TST>
#### sm0ctrl2
<link=SM0CTRL2>
#### SM0INTEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0INTEN
   p.PWM2.SM0INTEN
   p.PWM3.SM0INTEN
   p.PWM4.SM0INTEN
#### sm0dismap1
<link=SM0DISMAP1>
#### SM0DTCNT0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0DTCNT0
   p.PWM2.SM0DTCNT0
   p.PWM3.SM0DTCNT0
   p.PWM4.SM0DTCNT0
#### sm0cval4
<link=SM0CVAL4>
#### sm1fracval2
<link=SM1FRACVAL2>
#### SM1CAPTCTRLX
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CAPTCTRLX
   p.PWM2.SM1CAPTCTRLX
   p.PWM3.SM1CAPTCTRLX
   p.PWM4.SM1CAPTCTRLX
#### sm1cval3
<link=SM1CVAL3>
#### SM2FRACVAL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2FRACVAL3
   p.PWM2.SM2FRACVAL3
   p.PWM3.SM2FRACVAL3
   p.PWM4.SM2FRACVAL3
#### sm2val4
<link=SM2VAL4>
#### sm2frctrl
<link=SM2FRCTRL>
#### sm3fracval1
<link=SM3FRACVAL1>
#### sm3val5
<link=SM3VAL5>
#### SM3STS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3STS
   p.PWM2.SM3STS
   p.PWM3.SM3STS
   p.PWM4.SM3STS
#### SM3DISMAP1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3DISMAP1
   p.PWM2.SM3DISMAP1
   p.PWM3.SM3DISMAP1
   p.PWM4.SM3DISMAP1
#### sm3dismap1
<link=SM3DISMAP1>
#### sm3cval4cyc
<link=SM3CVAL4CYC>
#### MCTRL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.MCTRL2
   p.PWM2.MCTRL2
   p.PWM3.MCTRL2
   p.PWM4.MCTRL2
#### CTR_NONCE0_W3
<link=p.BEE.CTR_NONCE0_W3>
#### msr
<link=MSR>
#### mcfgr3
<link=MCFGR3>
#### MTDR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MTDR
   p.LPI2C2.MTDR
   p.LPI2C3.MTDR
   p.LPI2C4.MTDR
#### star
<link=STAR>
#### aircr
<link=AIRCR>
#### id_pfr0
<link=ID_PFR0>
#### ID_AFR0
<link=p.SystemControl.ID_AFR0>
#### ctr
<link=CTR>
#### cm7_cacr
<link=CM7_CACR>
#### NVICISER1
<link=p.NVIC.NVICISER1>
#### NVICICER4
<link=p.NVIC.NVICICER4>
#### nviciabr4
<link=NVICIABR4>
#### NVICIP9
<link=p.NVIC.NVICIP9>
#### nvicip15
<link=NVICIP15>
#### NVICIP26
<link=p.NVIC.NVICIP26>
#### nvicip47
<link=NVICIP47>
#### NVICIP57
<link=p.NVIC.NVICIP57>
#### nvicip59
<link=NVICIP59>
#### nvicip61
<link=NVICIP61>
#### NVICIP71
<link=p.NVIC.NVICIP71>
#### nvicip76
<link=NVICIP76>
#### nvicip83
<link=NVICIP83>
#### NVICIP89
<link=p.NVIC.NVICIP89>
#### NVICIP93
<link=p.NVIC.NVICIP93>
#### NVICIP106
<link=p.NVIC.NVICIP106>
#### nvicip113
<link=NVICIP113>
#### nvicip122
<link=NVICIP122>
#### NVICIP128
<link=p.NVIC.NVICIP128>
#### nvicip135
<link=NVICIP135>
#### nvicip140
<link=NVICIP140>
#### NVICIP156
<link=p.NVIC.NVICIP156>
