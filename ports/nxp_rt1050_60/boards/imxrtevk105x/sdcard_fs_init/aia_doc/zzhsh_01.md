#### p.AIPSTZ2.MPR
<lang=dft>
 (rw)  [1;33m0x4017c000[0m (0x4017c000 + 0x0000)
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
#### p.aipstz4.opacr
<link=p.AIPSTZ4.OPACR>
#### pit.cval0
<link=p.PIT.CVAL0>
#### p.PIT.CVAL1
<lang=dft>
 (ro)  [1;33m0x40084114[0m (0x40084000 + 0x0114)
Current Timer Value Register
 (ro) (32)  [0;32mTVL[0m  - [31:00] -  Current Timer Value
</lang>
#### p.PIT.TFLG1
<lang=dft>
 (rw)  [1;33m0x4008411c[0m (0x40084000 + 0x011c)
Timer Flag Register
 (rw) (01)  [0;32mTIF[0m  - [00:00] -  Timer Interrupt Flag
      0 - TIF_0 :
         Timeout has not yet occurred.
      0x1 - TIF_1 :
         Timeout has occurred.
</lang>
#### pit.ldval2
<link=p.PIT.LDVAL2>
#### PIT.TFLG2
<link=p.PIT.TFLG2>
#### pit.ltmr64l
<link=p.PIT.LTMR64L>
#### p.cmp1.cr1
<link=p.CMP1.CR1>
#### cmp1.daccr
<link=p.CMP1.DACCR>
#### cmp3.cr0
<link=p.CMP3.CR0>
#### p.IOMUXC_SNVS_GPR
<lang=dft>
base: 0x400a4000
GPR0            GPR1            GPR2            GPR3            
输入 p.IOMUXC_SNVS_GPR.{reg_name} 以查看寄存器的详细信息
type p.IOMUXC_SNVS_GPR.{reg_name} to check details of registers
</lang>
#### iomuxc_snvs_gpr.gpr2
<link=p.IOMUXC_SNVS_GPR.GPR2>
#### p.IOMUXC_SNVS.SW_MUX_CTL_PAD_WAKEUP
<lang=dft>
 (rw)  [1;33m0x400a8000[0m (0x400a8000 + 0x0000)
SW_MUX_CTL_PAD_WAKEUP SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO5_IO00 of instance: gpio5
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: NMI_GLUE_NMI of instance: nmi_glue
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad WAKEUP
</lang>
#### p.iomuxc_snvs.sw_mux_ctl_pad_wakeup
<link=p.IOMUXC_SNVS.SW_MUX_CTL_PAD_WAKEUP>
#### p.IOMUXC_GPR
<lang=dft>
base: 0x400ac000
GPR0            GPR1            GPR10           GPR11           
GPR12           GPR13           GPR14           GPR15           
GPR16           GPR17           GPR18           GPR19           
GPR2            GPR20           GPR21           GPR22           
GPR23           GPR24           GPR25           GPR26           
GPR27           GPR28           GPR29           GPR3            
GPR30           GPR31           GPR32           GPR33           
GPR34           GPR4            GPR5            GPR6            
GPR7            GPR8            GPR9            
输入 p.IOMUXC_GPR.{reg_name} 以查看寄存器的详细信息
type p.IOMUXC_GPR.{reg_name} to check details of registers
</lang>
#### IOMUXC_GPR.GPR4
<link=p.IOMUXC_GPR.GPR4>
#### p.iomuxc_gpr.gpr8
<link=p.IOMUXC_GPR.GPR8>
#### iomuxc_gpr.gpr9
<link=p.IOMUXC_GPR.GPR9>
#### IOMUXC_GPR.GPR10
<link=p.IOMUXC_GPR.GPR10>
#### p.IOMUXC_GPR.GPR12
<lang=dft>
 (rw)  [1;33m0x400ac030[0m (0x400ac000 + 0x0030)
GPR12 General Purpose Register
 (rw) (01)  [0;32mFLEXIO1_IPG_STOP_MODE[0m  - [00:00] -  FlexIO1 stop mode selection. Cannot change when ipg_stop is asserted.
      0 - FLEXIO1_IPG_STOP_MODE_0 :
         FlexIO1 is functional in Stop mode.
      0x1 - FLEXIO1_IPG_STOP_MODE_1 :
         When this bit is equal to 1'b1 and ipg_stop is asserted, FlexIO1 is not
          functional in Stop mode.
 (rw) (01)  [0;32mFLEXIO1_IPG_DOZE[0m  - [01:01] -  FLEXIO1 ipg_doze mode
      0 - FLEXIO1_IPG_DOZE_0 :
         FLEXIO1 is not in doze mode
      0x1 - FLEXIO1_IPG_DOZE_1 :
         FLEXIO1 is in doze mode
 (rw) (01)  [0;32mFLEXIO2_IPG_STOP_MODE[0m  - [02:02] -  FlexIO2 stop mode selection. Cannot change when ipg_stop is asserted.
      0 - FLEXIO2_IPG_STOP_MODE_0 :
         FlexIO2 is functional in Stop mode.
      0x1 - FLEXIO2_IPG_STOP_MODE_1 :
         When this bit is equal to 1'b1 and ipg_stop is asserted, FlexIO2 is not
          functional in Stop mode.
 (rw) (01)  [0;32mFLEXIO2_IPG_DOZE[0m  - [03:03] -  FLEXIO2 ipg_doze mode
      0 - FLEXIO2_IPG_DOZE_0 :
         FLEXIO2 is not in doze mode
      0x1 - FLEXIO2_IPG_DOZE_1 :
         FLEXIO2 is in doze mode
 (rw) (01)  [0;32mACMP_IPG_STOP_MODE[0m  - [04:04] -  ACMP stop mode selection. Cannot change when ipg_stop is asserted.
      0 - ACMP_IPG_STOP_MODE_0 :
         ACMP is functional in Stop mode.
      0x1 - ACMP_IPG_STOP_MODE_1 :
         When this bit is equal to 1'b1 and ipg_stop is asserted, ACMP is not fu
         nctional in Stop mode.
 (rw) (01)  [0;32mFLEXIO3_IPG_STOP_MODE[0m  - [05:05] -  FlexIO3 stop mode selection. Cannot change when ipg_stop is asserted.
      0 - FLEXIO3_IPG_STOP_MODE_0 :
         FlexIO3 is functional in Stop mode.
      0x1 - FLEXIO3_IPG_STOP_MODE_1 :
         When this bit is equal to 1'b1 and ipg_stop is asserted, FlexIO3 is not
          functional in Stop mode.
 (rw) (01)  [0;32mFLEXIO3_IPG_DOZE[0m  - [06:06] -  FLEXIO3 ipg_doze mode
      0 - FLEXIO3_IPG_DOZE_0 :
         FLEXIO3 is not in doze mode
      0x1 - FLEXIO3_IPG_DOZE_1 :
         FLEXIO3 is in doze mode
</lang>
#### p.iomuxc_gpr.gpr19
<link=p.IOMUXC_GPR.GPR19>
#### IOMUXC_GPR.GPR21
<link=p.IOMUXC_GPR.GPR21>
#### iomuxc_gpr.gpr33
<link=p.IOMUXC_GPR.GPR33>
#### p.IOMUXC_GPR.GPR34
<lang=dft>
 (rw)  [1;33m0x400ac088[0m (0x400ac000 + 0x0088)
GPR34 General Purpose Register
 (rw) (08)  [0;32mSIP_TEST_MUX_BOOT_PIN_SEL[0m  - [07:00] -  Boot Pin select in SIP_TEST_MUX
 (rw) (01)  [0;32mSIP_TEST_MUX_QSPI_SIP_EN[0m  - [08:08] -  Enable SIP_TEST_MUX
      0 - SIP_TEST_MUX_QSPI_SIP_EN_0 :
         SIP_TEST_MUX is disabled
      0x1 - SIP_TEST_MUX_QSPI_SIP_EN_1 :
         SIP_TEST_MUX is enabled
</lang>
#### ewm.cmph
<link=p.EWM.CMPH>
#### WDOG1.WCR
<link=p.WDOG1.WCR>
#### p.wdog2.wicr
<link=p.WDOG2.WICR>
#### p.rtwdog.cs
<link=p.RTWDOG.CS>
#### p.RTWDOG.WIN
<lang=dft>
 (rw)  [1;33m0x400bc00c[0m (0x400bc000 + 0x000c)
Watchdog Window Register
 (rw) (08)  [0;32mWINLOW[0m  - [07:00] -  Low byte of Watchdog Window
 (rw) (08)  [0;32mWINHIGH[0m  - [15:08] -  High byte of Watchdog Window
</lang>
#### adc1.hc0
<link=p.ADC1.HC0>
#### p.adc1.hc4
<link=p.ADC1.HC4>
#### p.ADC1.HC6
<lang=dft>
 (rw)  [1;33m0x400c4018[0m (0x400c4000 + 0x0018)
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
#### p.adc1.r1
<link=p.ADC1.R1>
#### p.ADC1.R5
<lang=dft>
 (ro)  [1;33m0x400c4038[0m (0x400c4000 + 0x0038)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### adc1.r5
<link=p.ADC1.R5>
#### p.adc1.gs
<link=p.ADC1.GS>
#### p.adc2.hc2
<link=p.ADC2.HC2>
#### adc2.hc6
<link=p.ADC2.HC6>
#### p.ADC2.R1
<lang=dft>
 (ro)  [1;33m0x400c8028[0m (0x400c8000 + 0x0028)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### p.adc2.r4
<link=p.ADC2.R4>
#### adc2.r7
<link=p.ADC2.R7>
#### p.trng.sdctl
<link=p.TRNG.SDCTL>
#### TRNG.SDCTL
<link=p.TRNG.SDCTL>
#### trng.sblim
<link=p.TRNG.SBLIM>
#### p.trng.frqmin
<link=p.TRNG.FRQMIN>
#### p.TRNG.SCR1L
<lang=dft>
 (rw)  [1;33m0x400cc024[0m (0x400cc000 + 0x0024)
Statistical Check Run Length 1 Limit Register
 (rw) (15)  [0;32mRUN1_MAX[0m  - [14:00] -  Run Length 1 Maximum Limit
 (rw) (15)  [0;32mRUN1_RNG[0m  - [30:16] -  Run Length 1 Range
</lang>
#### trng.scr4c
<link=p.TRNG.SCR4C>
#### TRNG.SCR4C
<link=p.TRNG.SCR4C>
#### trng.ent[3]
<link=p.TRNG.ENT[3]>
#### p.TRNG.ENT[8]
<lang=dft>
 (ro)  [1;33m0x400cc060[0m (0x400cc000 + 0x0060)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### p.trng.ent[12]
<link=p.TRNG.ENT[12]>
#### snvs.hpcomr
<link=p.SNVS.HPCOMR>
#### SNVS.HPRTCMR
<link=p.SNVS.HPRTCMR>
#### p.SNVS.HPTALR
<lang=dft>
 (rw)  [1;33m0x400d4030[0m (0x400d4000 + 0x0030)
SNVS_HP Time Alarm LSB Register
 (rw) (32)  [0;32mHPTA_LS[0m  - [31:00] -  HP Time Alarm, 32 least-significant bits
</lang>
#### SNVS.LPLR
<link=p.SNVS.LPLR>
#### SNVS.LPSRTCLR
<link=p.SNVS.LPSRTCLR>
#### p.SNVS.LPZMKR[1]
<lang=dft>
 (rw)  [1;33m0x400d4070[0m (0x400d4000 + 0x0070)
SNVS_LP Zeroizable Master Key Register
 (rw) (32)  [0;32mZMK[0m  - [31:00] -  Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit Z
 MK value
</lang>
#### p.snvs.lpzmkr[1]
<link=p.SNVS.LPZMKR[1]>
#### snvs.lpzmkr[2]
<link=p.SNVS.LPZMKR[2]>
#### p.SNVS.LPGPR_ALIAS[1]
<lang=dft>
 (rw)  [1;33m0x400d4094[0m (0x400d4000 + 0x0094)
SNVS_LP General Purpose Registers 0 .. 3
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### snvs.lpgpr[1]
<link=p.SNVS.LPGPR[1]>
#### p.SNVS.LPGPR[2]
<lang=dft>
 (rw)  [1;33m0x400d4108[0m (0x400d4000 + 0x0108)
SNVS_LP General Purpose Registers 0 .. 7
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### p.snvs.lpgpr[2]
<link=p.SNVS.LPGPR[2]>
#### snvs.lpgpr[6]
<link=p.SNVS.LPGPR[6]>
#### p.ccm_analog.pll_arm
<link=p.CCM_ANALOG.PLL_ARM>
#### p.ccm_analog.pll_usb2_clr
<link=p.CCM_ANALOG.PLL_USB2_CLR>
#### p.ccm_analog.pll_sys_set
<link=p.CCM_ANALOG.PLL_SYS_SET>
#### ccm_analog.pll_sys_ss
<link=p.CCM_ANALOG.PLL_SYS_SS>
#### p.ccm_analog.pll_audio_denom
<link=p.CCM_ANALOG.PLL_AUDIO_DENOM>
#### CCM_ANALOG.PLL_AUDIO_DENOM
<link=p.CCM_ANALOG.PLL_AUDIO_DENOM>
#### p.CCM_ANALOG.PLL_VIDEO_TOG
<lang=dft>
 (rw)  [1;33m0x400d80ac[0m (0x400d8000 + 0x00ac)
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
#### p.CCM_ANALOG.PLL_VIDEO_NUM
<lang=dft>
 (rw)  [1;33m0x400d80b0[0m (0x400d8000 + 0x00b0)
Numerator of Video PLL Fractional Loop Divider Register
 (rw) (30)  [0;32mA[0m  - [29:00] -  30 bit numerator of fractional loop divider(Signed number), absolute value shou
 ld be less than denominator
</lang>
#### ccm_analog.pfd_480_tog
<link=p.CCM_ANALOG.PFD_480_TOG>
#### p.CCM_ANALOG.MISC0_TOG
<lang=dft>
 (rw)  [1;33m0x400d815c[0m (0x400d8000 + 0x015c)
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
#### CCM_ANALOG.MISC1
<link=p.CCM_ANALOG.MISC1>
#### p.ccm_analog.misc1_set
<link=p.CCM_ANALOG.MISC1_SET>
#### p.CCM_ANALOG.MISC1_CLR
<lang=dft>
 (rw)  [1;33m0x400d8168[0m (0x400d8000 + 0x0168)
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
#### p.CCM_ANALOG.MISC2_SET
<lang=dft>
 (rw)  [1;33m0x400d8174[0m (0x400d8000 + 0x0174)
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
#### p.pmu.reg_3p0
<link=p.PMU.REG_3P0>
#### p.pmu.reg_core_clr
<link=p.PMU.REG_CORE_CLR>
#### PMU.REG_CORE_CLR
<link=p.PMU.REG_CORE_CLR>
#### PMU.MISC1_TOG
<link=p.PMU.MISC1_TOG>
#### p.PMU.MISC2_SET
<lang=dft>
 (rw)  [1;33m0x400d8174[0m (0x400d8000 + 0x0174)
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
#### tempmon.tempsense0_tog
<link=p.TEMPMON.TEMPSENSE0_TOG>
#### TEMPMON.TEMPSENSE1_SET
<link=p.TEMPMON.TEMPSENSE1_SET>
#### TEMPMON.TEMPSENSE2
<link=p.TEMPMON.TEMPSENSE2>
#### p.tempmon.tempsense2_set
<link=p.TEMPMON.TEMPSENSE2_SET>
#### p.TEMPMON.TEMPSENSE2_TOG
<lang=dft>
 (rw)  [1;33m0x400d829c[0m (0x400d8000 + 0x029c)
Tempsensor Control Register 2
 (rw) (12)  [0;32mLOW_ALARM_VALUE[0m  - [11:00] -  This bit field contains the temperature count that will generate a low alarm in
 terrupt when the field is exceeded by TEMP_CNT
 (rw) (12)  [0;32mPANIC_ALARM_VALUE[0m  - [27:16] -  This bit field contains the temperature count that will generate a panic interr
 upt when TEMP_CNT is smaller than this field
</lang>
#### usb_analog.usb1_vbus_detect_clr
<link=p.USB_ANALOG.USB1_VBUS_DETECT_CLR>
#### p.usb_analog.usb1_misc_clr
<link=p.USB_ANALOG.USB1_MISC_CLR>
#### p.USB_ANALOG.USB2_VBUS_DETECT_SET
<lang=dft>
 (rw)  [1;33m0x400d8204[0m (0x400d8000 + 0x0204)
USB VBUS Detect Register
 (rw) (03)  [0;32mVBUSVALID_THRESH[0m  - [02:00] -  Set the threshold for the VBUSVALID comparator
      0 - 4V0 :
         4.0V
      0x1 - 4V1 :
         4.1V
      0x2 - 4V2 :
         4.2V
      0x3 - 4V3 :
         4.3V
      0x4 - 4V4 :
         4.4V (default)
      0x5 - 4V5 :
         4.5V
      0x6 - 4V6 :
         4.6V
      0x7 - 4V7 :
         4.7V
 (rw) (01)  [0;32mVBUSVALID_PWRUP_CMPS[0m  - [20:20] -  Powers up comparators for vbus_valid detector.
 (rw) (01)  [0;32mDISCHARGE_VBUS[0m  - [26:26] -  USB OTG discharge VBUS.
 (rw) (01)  [0;32mCHARGE_VBUS[0m  - [27:27] -  USB OTG charge VBUS.
</lang>
#### USB_ANALOG.USB2_CHRG_DETECT
<link=p.USB_ANALOG.USB2_CHRG_DETECT>
#### p.USB_ANALOG.USB2_MISC_CLR
<lang=dft>
 (rw)  [1;33m0x400d8258[0m (0x400d8000 + 0x0258)
USB Misc Register
 (rw) (01)  [0;32mHS_USE_EXTERNAL_R[0m  - [00:00] -  Use external resistor to generate the current bias for the high speed transmitt
 er
 (rw) (01)  [0;32mEN_DEGLITCH[0m  - [01:01] -  Enable the deglitching circuit of the USB PLL output.
 (rw) (01)  [0;32mEN_CLK_UTMI[0m  - [30:30] -  Enables the clk to the UTMI block.
</lang>
#### p.usb_analog.usb2_misc_tog
<link=p.USB_ANALOG.USB2_MISC_TOG>
#### XTALOSC24M.OSC_CONFIG0_SET
<link=p.XTALOSC24M.OSC_CONFIG0_SET>
#### p.XTALOSC24M.OSC_CONFIG0_CLR
<lang=dft>
 (rw)  [1;33m0x400d82a8[0m (0x400d8000 + 0x02a8)
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
#### p.XTALOSC24M.OSC_CONFIG0_TOG
<lang=dft>
 (rw)  [1;33m0x400d82ac[0m (0x400d8000 + 0x02ac)
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
#### p.xtalosc24m.osc_config1_set
<link=p.XTALOSC24M.OSC_CONFIG1_SET>
#### p.XTALOSC24M.OSC_CONFIG2
<lang=dft>
 (rw)  [1;33m0x400d82c0[0m (0x400d8000 + 0x02c0)
XTAL OSC Configuration 2 Register
 (rw) (12)  [0;32mCOUNT_1M_TRG[0m  - [11:00] -  The target count used to tune the 1MHz clock frequency
 (rw) (01)  [0;32mENABLE_1M[0m  - [16:16] -  Enable the 1MHz clock output. 0 - disabled; 1 - enabled.
 (rw) (01)  [0;32mMUX_1M[0m  - [17:17] -  Mux the corrected or uncorrected 1MHz clock to the output
 (rw) (01)  [0;32mCLK_1M_ERR_FL[0m  - [31:31] -  Flag indicates that the count_1m count wasn't reached within 1 32kHz period
</lang>
#### p.USBPHY1.PWD_CLR
<lang=dft>
 (rw)  [1;33m0x400d9008[0m (0x400d9000 + 0x0008)
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
#### p.USBPHY1.PWD_TOG
<lang=dft>
 (rw)  [1;33m0x400d900c[0m (0x400d9000 + 0x000c)
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
#### USBPHY1.RX
<link=p.USBPHY1.RX>
#### usbphy1.debug0_status
<link=p.USBPHY1.DEBUG0_STATUS>
#### usbphy1.debug1_clr
<link=p.USBPHY1.DEBUG1_CLR>
#### USBPHY1.VERSION
<link=p.USBPHY1.VERSION>
#### usbphy2.pwd
<link=p.USBPHY2.PWD>
#### p.USBPHY2.PWD_CLR
<lang=dft>
 (rw)  [1;33m0x400da008[0m (0x400da000 + 0x0008)
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
#### USBPHY2.RX_TOG
<link=p.USBPHY2.RX_TOG>
#### USBPHY2.CTRL
<link=p.USBPHY2.CTRL>
#### usbphy2.debug_clr
<link=p.USBPHY2.DEBUG_CLR>
#### usbphy2.debug1_tog
<link=p.USBPHY2.DEBUG1_TOG>
#### p.CSU.CSL11
<lang=dft>
 (rw)  [1;33m0x400dc02c[0m (0x400dc000 + 0x002c)
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
#### p.csu.csl11
<link=p.CSU.CSL11>
#### p.CSU.CSL24
<lang=dft>
 (rw)  [1;33m0x400dc060[0m (0x400dc000 + 0x0060)
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
#### p.csu.csl24
<link=p.CSU.CSL24>
#### csu.csl26
<link=p.CSU.CSL26>
#### CSU.CSL26
<link=p.CSU.CSL26>
#### tsc.int_en
<link=p.TSC.INT_EN>
#### p.dma0.cr
<link=p.DMA0.CR>
#### p.DMA0.ES
<lang=dft>
 (ro)  [1;33m0x400e8004[0m (0x400e8000 + 0x0004)
Error Status Register
 (ro) (01)  [0;32mDBE[0m  - [00:00] -  Destination Bus Error
      0 - DBE_0 :
         No destination bus error
      0x1 - DBE_1 :
         The last recorded error was a bus error on a destination write
 (ro) (01)  [0;32mSBE[0m  - [01:01] -  Source Bus Error
      0 - SBE_0 :
         No source bus error
      0x1 - SBE_1 :
         The last recorded error was a bus error on a source read
 (ro) (01)  [0;32mSGE[0m  - [02:02] -  Scatter/Gather Configuration Error
      0 - SGE_0 :
         No scatter/gather configuration error
      0x1 - SGE_1 :
         The last recorded error was a configuration error detected in the TCDn_
         DLASTSGA field. This field is checked at the beginning of a scatter/gat
         her operation after major loop completion if TCDn_CSR[ESG] is enabled. 
         TCDn_DLASTSGA is not on a 32 byte boundary.
 (ro) (01)  [0;32mNCE[0m  - [03:03] -  NBYTES/CITER Configuration Error
      0 - NCE_0 :
         No NBYTES/CITER configuration error
      0x1 - NCE_1 :
         The last recorded error was a configuration error detected in the TCDn_
         NBYTES or TCDn_CITER fields. TCDn_NBYTES is not a multiple of TCDn_ATTR
         [SSIZE] and TCDn_ATTR[DSIZE], or TCDn_CITER[CITER] is equal to zero, or
          TCDn_CITER[ELINK] is not equal to TCDn_BITER[ELINK]
 (ro) (01)  [0;32mDOE[0m  - [04:04] -  Destination Offset Error
      0 - DOE_0 :
         No destination offset configuration error
      0x1 - DOE_1 :
         The last recorded error was a configuration error detected in the TCDn_
         DOFF field. TCDn_DOFF is inconsistent with TCDn_ATTR[DSIZE].
 (ro) (01)  [0;32mDAE[0m  - [05:05] -  Destination Address Error
      0 - DAE_0 :
         No destination address configuration error
      0x1 - DAE_1 :
         The last recorded error was a configuration error detected in the TCDn_
         DADDR field. TCDn_DADDR is inconsistent with TCDn_ATTR[DSIZE].
 (ro) (01)  [0;32mSOE[0m  - [06:06] -  Source Offset Error
      0 - SOE_0 :
         No source offset configuration error
      0x1 - SOE_1 :
         The last recorded error was a configuration error detected in the TCDn_
         SOFF field. TCDn_SOFF is inconsistent with TCDn_ATTR[SSIZE].
 (ro) (01)  [0;32mSAE[0m  - [07:07] -  Source Address Error
      0 - SAE_0 :
         No source address configuration error.
      0x1 - SAE_1 :
         The last recorded error was a configuration error detected in the TCDn_
         SADDR field. TCDn_SADDR is inconsistent with TCDn_ATTR[SSIZE].
 (ro) (05)  [0;32mERRCHN[0m  - [12:08] -  Error Channel Number or Canceled Channel Number
 (ro) (01)  [0;32mCPE[0m  - [14:14] -  Channel Priority Error
      0 - CPE_0 :
         No channel priority error
      0x1 - CPE_1 :
         The last recorded error was a configuration error in the channel priori
         ties within a group. Channel priorities within a group are not unique.
 (ro) (01)  [0;32mGPE[0m  - [15:15] -  Group Priority Error
      0 - GPE_0 :
         No group priority error
      0x1 - GPE_1 :
         The last recorded error was a configuration error among the group prior
         ities. All group priorities are not unique.
 (ro) (01)  [0;32mECX[0m  - [16:16] -  Transfer Canceled
      0 - ECX_0 :
         No canceled transfers
      0x1 - ECX_1 :
         The last recorded entry was a canceled transfer by the error cancel tra
         nsfer input
 (ro) (01)  [0;32mVLD[0m  - [31:31] -  VLD
      0 - VLD_0 :
         No ERR bits are set.
      0x1 - VLD_1 :
         At least one ERR bit is set indicating a valid error exists that has no
         t been cleared.
</lang>
#### DMA0.CERQ
<link=p.DMA0.CERQ>
#### p.dma0.ssrt
<link=p.DMA0.SSRT>
#### p.DMA0.DCHPRI1
<lang=dft>
 (rw)  [1;33m0x400e8102[0m (0x400e8000 + 0x0102)
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
#### DMA0.DCHPRI0
<link=p.DMA0.DCHPRI0>
#### dma0.dchpri5
<link=p.DMA0.DCHPRI5>
#### p.dma0.dchpri15
<link=p.DMA0.DCHPRI15>
#### p.DMA0.DCHPRI13
<lang=dft>
 (rw)  [1;33m0x400e810e[0m (0x400e8000 + 0x010e)
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
#### DMA0.DCHPRI21
<link=p.DMA0.DCHPRI21>
#### p.DMA0.DCHPRI26
<lang=dft>
 (rw)  [1;33m0x400e8119[0m (0x400e8000 + 0x0119)
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
#### dma0.dchpri28
<link=p.DMA0.DCHPRI28>
#### p.DMA0.TCD0_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9008[0m (0x400e8000 + 0x1008)
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
#### dma0.tcd0_daddr
<link=p.DMA0.TCD0_DADDR>
#### DMA0.TCD1_SADDR
<link=p.DMA0.TCD1_SADDR>
#### DMA0.TCD1_NBYTES_MLNO
<link=p.DMA0.TCD1_NBYTES_MLNO>
#### p.dma0.tcd1_citer_elinkno
<link=p.DMA0.TCD1_CITER_ELINKNO>
#### DMA0.TCD1_CITER_ELINKNO
<link=p.DMA0.TCD1_CITER_ELINKNO>
#### p.DMA0.TCD1_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e903e[0m (0x400e8000 + 0x103e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD2_SADDR
<link=p.DMA0.TCD2_SADDR>
#### p.DMA0.TCD2_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9044[0m (0x400e8000 + 0x1044)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.dma0.tcd2_nbytes_mloffyes
<link=p.DMA0.TCD2_NBYTES_MLOFFYES>
#### dma0.tcd2_nbytes_mloffyes
<link=p.DMA0.TCD2_NBYTES_MLOFFYES>
#### dma0.tcd2_citer_elinkno
<link=p.DMA0.TCD2_CITER_ELINKNO>
#### DMA0.TCD2_CITER_ELINKYES
<link=p.DMA0.TCD2_CITER_ELINKYES>
#### p.DMA0.TCD3_SLAST
<lang=dft>
 (rw)  [1;33m0x400e906c[0m (0x400e8000 + 0x106c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### dma0.tcd4_soff
<link=p.DMA0.TCD4_SOFF>
#### p.DMA0.TCD4_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e909e[0m (0x400e8000 + 0x109e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD4_BITER_ELINKNO
<link=p.DMA0.TCD4_BITER_ELINKNO>
#### DMA0.TCD4_BITER_ELINKYES
<link=p.DMA0.TCD4_BITER_ELINKYES>
#### p.dma0.tcd5_dlastsga
<link=p.DMA0.TCD5_DLASTSGA>
#### DMA0.TCD5_DLASTSGA
<link=p.DMA0.TCD5_DLASTSGA>
#### DMA0.TCD5_CSR
<link=p.DMA0.TCD5_CSR>
#### dma0.tcd6_attr
<link=p.DMA0.TCD6_ATTR>
#### p.dma0.tcd6_daddr
<link=p.DMA0.TCD6_DADDR>
#### p.dma0.tcd6_doff
<link=p.DMA0.TCD6_DOFF>
#### dma0.tcd6_dlastsga
<link=p.DMA0.TCD6_DLASTSGA>
#### p.dma0.tcd7_nbytes_mlno
<link=p.DMA0.TCD7_NBYTES_MLNO>
#### dma0.tcd7_nbytes_mlno
<link=p.DMA0.TCD7_NBYTES_MLNO>
#### p.DMA0.TCD7_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e90f8[0m (0x400e8000 + 0x10f8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.DMA0.TCD7_CSR
<lang=dft>
 (rw)  [1;33m0x400e90fc[0m (0x400e8000 + 0x10fc)
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
#### p.DMA0.TCD7_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e90fe[0m (0x400e8000 + 0x10fe)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd8_nbytes_mlno
<link=p.DMA0.TCD8_NBYTES_MLNO>
#### p.dma0.tcd8_daddr
<link=p.DMA0.TCD8_DADDR>
#### DMA0.TCD8_DOFF
<link=p.DMA0.TCD8_DOFF>
#### p.DMA0.TCD8_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e911e[0m (0x400e8000 + 0x111e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD8_BITER_ELINKNO
<link=p.DMA0.TCD8_BITER_ELINKNO>
#### dma0.tcd10_saddr
<link=p.DMA0.TCD10_SADDR>
#### DMA0.TCD10_DADDR
<link=p.DMA0.TCD10_DADDR>
#### dma0.tcd10_doff
<link=p.DMA0.TCD10_DOFF>
#### dma0.tcd10_biter_elinkno
<link=p.DMA0.TCD10_BITER_ELINKNO>
#### p.dma0.tcd11_attr
<link=p.DMA0.TCD11_ATTR>
#### dma0.tcd11_daddr
<link=p.DMA0.TCD11_DADDR>
#### p.DMA0.TCD12_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9184[0m (0x400e8000 + 0x1184)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### DMA0.TCD12_CITER_ELINKNO
<link=p.DMA0.TCD12_CITER_ELINKNO>
#### p.dma0.tcd12_dlastsga
<link=p.DMA0.TCD12_DLASTSGA>
#### p.DMA0.TCD12_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e919e[0m (0x400e8000 + 0x119e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd13_daddr
<link=p.DMA0.TCD13_DADDR>
#### dma0.tcd13_citer_elinkyes
<link=p.DMA0.TCD13_CITER_ELINKYES>
#### p.dma0.tcd13_dlastsga
<link=p.DMA0.TCD13_DLASTSGA>
#### DMA0.TCD14_BITER_ELINKYES
<link=p.DMA0.TCD14_BITER_ELINKYES>
#### DMA0.TCD15_NBYTES_MLOFFNO
<link=p.DMA0.TCD15_NBYTES_MLOFFNO>
#### p.dma0.tcd15_citer_elinkyes
<link=p.DMA0.TCD15_CITER_ELINKYES>
#### dma0.tcd15_biter_elinkyes
<link=p.DMA0.TCD15_BITER_ELINKYES>
#### p.DMA0.TCD16_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9210[0m (0x400e8000 + 0x1210)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.DMA0.TCD16_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9218[0m (0x400e8000 + 0x1218)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### DMA0.TCD17_NBYTES_MLNO
<link=p.DMA0.TCD17_NBYTES_MLNO>
#### p.DMA0.TCD17_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9228[0m (0x400e8000 + 0x1228)
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
#### DMA0.TCD17_NBYTES_MLOFFYES
<link=p.DMA0.TCD17_NBYTES_MLOFFYES>
#### p.dma0.tcd17_daddr
<link=p.DMA0.TCD17_DADDR>
#### p.DMA0.TCD17_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9236[0m (0x400e8000 + 0x1236)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD17_BITER_ELINKNO
<link=p.DMA0.TCD17_BITER_ELINKNO>
#### DMA0.TCD18_SADDR
<link=p.DMA0.TCD18_SADDR>
#### p.dma0.tcd18_doff
<link=p.DMA0.TCD18_DOFF>
#### DMA0.TCD18_DOFF
<link=p.DMA0.TCD18_DOFF>
#### dma0.tcd19_nbytes_mloffno
<link=p.DMA0.TCD19_NBYTES_MLOFFNO>
#### p.dma0.tcd19_daddr
<link=p.DMA0.TCD19_DADDR>
#### DMA0.TCD19_DOFF
<link=p.DMA0.TCD19_DOFF>
#### p.DMA0.TCD19_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e927e[0m (0x400e8000 + 0x127e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd20_soff
<link=p.DMA0.TCD20_SOFF>
#### DMA0.TCD20_CITER_ELINKYES
<link=p.DMA0.TCD20_CITER_ELINKYES>
#### DMA0.TCD21_SOFF
<link=p.DMA0.TCD21_SOFF>
#### dma0.tcd21_nbytes_mloffyes
<link=p.DMA0.TCD21_NBYTES_MLOFFYES>
#### dma0.tcd21_biter_elinkno
<link=p.DMA0.TCD21_BITER_ELINKNO>
#### p.DMA0.TCD22_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e92c8[0m (0x400e8000 + 0x12c8)
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
#### dma0.tcd22_nbytes_mloffyes
<link=p.DMA0.TCD22_NBYTES_MLOFFYES>
#### p.dma0.tcd22_slast
<link=p.DMA0.TCD22_SLAST>
#### p.dma0.tcd22_citer_elinkyes
<link=p.DMA0.TCD22_CITER_ELINKYES>
#### dma0.tcd22_csr
<link=p.DMA0.TCD22_CSR>
#### p.dma0.tcd23_nbytes_mloffyes
<link=p.DMA0.TCD23_NBYTES_MLOFFYES>
#### DMA0.TCD23_DLASTSGA
<link=p.DMA0.TCD23_DLASTSGA>
#### dma0.tcd24_attr
<link=p.DMA0.TCD24_ATTR>
#### dma0.tcd24_nbytes_mlno
<link=p.DMA0.TCD24_NBYTES_MLNO>
#### dma0.tcd24_dlastsga
<link=p.DMA0.TCD24_DLASTSGA>
#### p.dma0.tcd25_attr
<link=p.DMA0.TCD25_ATTR>
#### dma0.tcd25_nbytes_mlno
<link=p.DMA0.TCD25_NBYTES_MLNO>
#### p.dma0.tcd26_saddr
<link=p.DMA0.TCD26_SADDR>
#### DMA0.TCD26_SLAST
<link=p.DMA0.TCD26_SLAST>
#### dma0.tcd26_citer_elinkno
<link=p.DMA0.TCD26_CITER_ELINKNO>
#### dma0.tcd26_dlastsga
<link=p.DMA0.TCD26_DLASTSGA>
#### p.dma0.tcd26_csr
<link=p.DMA0.TCD26_CSR>
#### p.dma0.tcd27_saddr
<link=p.DMA0.TCD27_SADDR>
#### dma0.tcd27_soff
<link=p.DMA0.TCD27_SOFF>
#### dma0.tcd27_nbytes_mlno
<link=p.DMA0.TCD27_NBYTES_MLNO>
#### p.dma0.tcd27_doff
<link=p.DMA0.TCD27_DOFF>
#### dma0.tcd27_citer_elinkyes
<link=p.DMA0.TCD27_CITER_ELINKYES>
#### DMA0.TCD28_ATTR
<link=p.DMA0.TCD28_ATTR>
#### DMA0.TCD28_SLAST
<link=p.DMA0.TCD28_SLAST>
#### p.DMA0.TCD28_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9396[0m (0x400e8000 + 0x1396)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD28_DLASTSGA
<link=p.DMA0.TCD28_DLASTSGA>
#### p.dma0.tcd29_nbytes_mloffno
<link=p.DMA0.TCD29_NBYTES_MLOFFNO>
#### p.DMA0.TCD30_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e93d6[0m (0x400e8000 + 0x13d6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd30_citer_elinkno
<link=p.DMA0.TCD30_CITER_ELINKNO>
#### DMA0.TCD30_BITER_ELINKNO
<link=p.DMA0.TCD30_BITER_ELINKNO>
#### p.DMA0.TCD31_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e93e8[0m (0x400e8000 + 0x13e8)
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
#### DMAMUX.CHCFG[4]
<link=p.DMAMUX.CHCFG[4]>
#### p.dmamux.chcfg[7]
<link=p.DMAMUX.CHCFG[7]>
#### p.dmamux.chcfg[15]
<link=p.DMAMUX.CHCFG[15]>
#### p.DMAMUX.CHCFG[16]
<lang=dft>
 (rw)  [1;33m0x400ec040[0m (0x400ec000 + 0x0040)
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
#### DMAMUX.CHCFG[17]
<link=p.DMAMUX.CHCFG[17]>
#### dmamux.chcfg[24]
<link=p.DMAMUX.CHCFG[24]>
#### dmamux.chcfg[30]
<link=p.DMAMUX.CHCFG[30]>
#### p.gpc.isr4
<link=p.GPC.ISR4>
#### gpc.imr5
<link=p.GPC.IMR5>
#### p.pgc.mega_pupscr
<link=p.PGC.MEGA_PUPSCR>
#### PGC.MEGA_PDNSCR
<link=p.PGC.MEGA_PDNSCR>
#### pgc.cpu_sr
<link=p.PGC.CPU_SR>
#### p.src.scr
<link=p.SRC.SCR>
#### src.gpr3
<link=p.SRC.GPR3>
#### p.src.gpr8
<link=p.SRC.GPR8>
#### p.ccm.cacrr
<link=p.CCM.CACRR>
#### ccm.cacrr
<link=p.CCM.CACRR>
#### CCM.CSCDR3
<link=p.CCM.CSCDR3>
#### p.ccm.cdhipr
<link=p.CCM.CDHIPR>
#### ccm.clpcr
<link=p.CCM.CLPCR>
#### ccm.cimr
<link=p.CCM.CIMR>
#### ccm.ccgr5
<link=p.CCM.CCGR5>
#### p.romc.rompatch5d
<link=p.ROMC.ROMPATCH5D>
#### ROMC.ROMPATCH2D
<link=p.ROMC.ROMPATCH2D>
#### ROMC.ROMPATCHCNTL
<link=p.ROMC.ROMPATCHCNTL>
#### p.ROMC.ROMPATCH9A
<lang=dft>
 (rw)  [1;33m0x40180124[0m (0x40180000 + 0x0124)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### p.romc.rompatch10a
<link=p.ROMC.ROMPATCH10A>
#### p.LPUART1.GLOBAL
<lang=dft>
 (rw)  [1;33m0x40184008[0m (0x40184000 + 0x0008)
LPUART Global Register
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Software Reset
      0 - RST_0 :
         Module is not reset.
      0x1 - RST_1 :
         Module is reset.
</lang>
#### lpuart1.ctrl
<link=p.LPUART1.CTRL>
#### p.LPUART1.MODIR
<lang=dft>
 (rw)  [1;33m0x40184024[0m (0x40184000 + 0x0024)
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
#### lpuart2.baud
<link=p.LPUART2.BAUD>
#### p.LPUART2.MATCH
<lang=dft>
 (rw)  [1;33m0x40188020[0m (0x40188000 + 0x0020)
LPUART Match Address Register
 (rw) (10)  [0;32mMA1[0m  - [09:00] -  Match Address 1
 (rw) (10)  [0;32mMA2[0m  - [25:16] -  Match Address 2
</lang>
#### lpuart3.pincfg
<link=p.LPUART3.PINCFG>
#### p.lpuart3.water
<link=p.LPUART3.WATER>
#### lpuart4.verid
<link=p.LPUART4.VERID>
#### p.LPUART4.BAUD
<lang=dft>
 (rw)  [1;33m0x40190010[0m (0x40190000 + 0x0010)
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
#### LPUART4.BAUD
<link=p.LPUART4.BAUD>
#### p.lpuart5.pincfg
<link=p.LPUART5.PINCFG>
#### p.LPUART5.BAUD
<lang=dft>
 (rw)  [1;33m0x40194010[0m (0x40194000 + 0x0010)
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
#### p.lpuart5.stat
<link=p.LPUART5.STAT>
#### LPUART5.DATA
<link=p.LPUART5.DATA>
#### lpuart5.modir
<link=p.LPUART5.MODIR>
#### LPUART6.GLOBAL
<link=p.LPUART6.GLOBAL>
#### p.LPUART6.FIFO
<lang=dft>
 (rw)  [1;33m0x40198028[0m (0x40198000 + 0x0028)
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
#### LPUART7.STAT
<link=p.LPUART7.STAT>
#### p.lpuart7.data
<link=p.LPUART7.DATA>
#### LPUART7.FIFO
<link=p.LPUART7.FIFO>
#### p.LPUART8.VERID
<lang=dft>
 (ro)  [1;33m0x401a0000[0m (0x401a0000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Identification Number
      0x1 - FEATURE_1 :
         Standard feature set.
      0x3 - FEATURE_3 :
         Standard feature set with MODEM/IrDA support.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### LPUART8.VERID
<link=p.LPUART8.VERID>
#### lpuart8.param
<link=p.LPUART8.PARAM>
#### p.LPUART8.STAT
<lang=dft>
 (rw)  [1;33m0x401a0014[0m (0x401a0000 + 0x0014)
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
#### p.lpuart8.data
<link=p.LPUART8.DATA>
#### p.flexio1.timstat
<link=p.FLEXIO1.TIMSTAT>
#### p.flexio1.shifteien
<link=p.FLEXIO1.SHIFTEIEN>
#### FLEXIO1.SHIFTCTL[0]
<link=p.FLEXIO1.SHIFTCTL[0]>
#### p.flexio1.shiftctl[2]
<link=p.FLEXIO1.SHIFTCTL[2]>
#### p.FLEXIO1.SHIFTBUFBIS[1]
<lang=dft>
 (rw)  [1;33m0x401ac284[0m (0x401ac000 + 0x0284)
Shifter Buffer N Bit Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBIS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio1.shiftbufbys[1]
<link=p.FLEXIO1.SHIFTBUFBYS[1]>
#### FLEXIO1.SHIFTBUFBYS[2]
<link=p.FLEXIO1.SHIFTBUFBYS[2]>
#### p.flexio1.shiftbufbbs[0]
<link=p.FLEXIO1.SHIFTBUFBBS[0]>
#### p.flexio1.timctl[1]
<link=p.FLEXIO1.TIMCTL[1]>
#### flexio1.timctl[1]
<link=p.FLEXIO1.TIMCTL[1]>
#### FLEXIO1.TIMCTL[1]
<link=p.FLEXIO1.TIMCTL[1]>
#### p.FLEXIO1.TIMCFG[1]
<lang=dft>
 (rw)  [1;33m0x401ac484[0m (0x401ac000 + 0x0484)
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
#### p.flexio1.timcmp[1]
<link=p.FLEXIO1.TIMCMP[1]>
#### flexio1.timcmp[3]
<link=p.FLEXIO1.TIMCMP[3]>
#### FLEXIO1.SHIFTBUFNBS[0]
<link=p.FLEXIO1.SHIFTBUFNBS[0]>
#### flexio1.shiftbufnis[0]
<link=p.FLEXIO1.SHIFTBUFNIS[0]>
#### FLEXIO2.VERID
<link=p.FLEXIO2.VERID>
#### FLEXIO2.SHIFTSTAT
<link=p.FLEXIO2.SHIFTSTAT>
#### flexio2.shifterr
<link=p.FLEXIO2.SHIFTERR>
#### FLEXIO2.TIMSTAT
<link=p.FLEXIO2.TIMSTAT>
#### FLEXIO2.SHIFTCTL[1]
<link=p.FLEXIO2.SHIFTCTL[1]>
#### p.flexio2.shiftcfg[3]
<link=p.FLEXIO2.SHIFTCFG[3]>
#### p.FLEXIO2.SHIFTBUF[1]
<lang=dft>
 (rw)  [1;33m0x401b0204[0m (0x401b0000 + 0x0204)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio2.shiftbuf[1]
<link=p.FLEXIO2.SHIFTBUF[1]>
#### p.flexio2.shiftbuf[2]
<link=p.FLEXIO2.SHIFTBUF[2]>
#### FLEXIO2.SHIFTBUFBIS[0]
<link=p.FLEXIO2.SHIFTBUFBIS[0]>
#### flexio2.shiftbufbys[2]
<link=p.FLEXIO2.SHIFTBUFBYS[2]>
#### FLEXIO2.SHIFTBUFBBS[1]
<link=p.FLEXIO2.SHIFTBUFBBS[1]>
#### FLEXIO2.TIMCTL[3]
<link=p.FLEXIO2.TIMCTL[3]>
#### p.flexio2.timcfg[1]
<link=p.FLEXIO2.TIMCFG[1]>
#### p.FLEXIO2.TIMCFG[2]
<lang=dft>
 (rw)  [1;33m0x401b0488[0m (0x401b0000 + 0x0488)
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
#### p.flexio2.shiftbufhws[2]
<link=p.FLEXIO2.SHIFTBUFHWS[2]>
#### flexio2.shiftbufhws[2]
<link=p.FLEXIO2.SHIFTBUFHWS[2]>
#### FLEXIO2.SHIFTBUFNIS[1]
<link=p.FLEXIO2.SHIFTBUFNIS[1]>
#### flexio2.shiftbufnis[3]
<link=p.FLEXIO2.SHIFTBUFNIS[3]>
#### p.FLEXIO3.CTRL
<lang=dft>
 (rw)  [1;33m0x42020008[0m (0x42020000 + 0x0008)
FlexIO Control Register
 (rw) (01)  [0;32mFLEXEN[0m  - [00:00] -  FlexIO Enable
      0 - FLEXEN_0 :
         FlexIO module is disabled.
      0x1 - FLEXEN_1 :
         FlexIO module is enabled.
 (rw) (01)  [0;32mSWRST[0m  - [01:01] -  Software Reset
      0 - SWRST_0 :
         Software reset is disabled
      0x1 - SWRST_1 :
         Software reset is enabled, all FlexIO registers except the Control Regi
         ster are reset.
 (rw) (01)  [0;32mFASTACC[0m  - [02:02] -  Fast Access
      0 - FASTACC_0 :
         Configures for normal register accesses to FlexIO
      0x1 - FASTACC_1 :
         Configures for fast register accesses to FlexIO
 (rw) (01)  [0;32mDBGE[0m  - [30:30] -  Debug Enable
      0 - DBGE_0 :
         FlexIO is disabled in debug modes.
      0x1 - DBGE_1 :
         FlexIO is enabled in debug modes
 (rw) (01)  [0;32mDOZEN[0m  - [31:31] -  Doze Enable
      0 - DOZEN_0 :
         FlexIO enabled in Doze modes.
      0x1 - DOZEN_1 :
         FlexIO disabled in Doze modes.
</lang>
#### FLEXIO3.TIMSTAT
<link=p.FLEXIO3.TIMSTAT>
#### FLEXIO3.SHIFTSTATE
<link=p.FLEXIO3.SHIFTSTATE>
#### FLEXIO3.SHIFTCTL[1]
<link=p.FLEXIO3.SHIFTCTL[1]>
#### flexio3.shiftcfg[0]
<link=p.FLEXIO3.SHIFTCFG[0]>
#### p.flexio3.shiftcfg[1]
<link=p.FLEXIO3.SHIFTCFG[1]>
#### p.FLEXIO3.SHIFTCFG[2]
<lang=dft>
 (rw)  [1;33m0x42020108[0m (0x42020000 + 0x0108)
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
#### p.FLEXIO3.SHIFTBUFBIS[1]
<lang=dft>
 (rw)  [1;33m0x42020284[0m (0x42020000 + 0x0284)
Shifter Buffer N Bit Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBIS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufbis[3]
<link=p.FLEXIO3.SHIFTBUFBIS[3]>
#### FLEXIO3.SHIFTBUFBBS[0]
<link=p.FLEXIO3.SHIFTBUFBBS[0]>
#### flexio3.timcfg[1]
<link=p.FLEXIO3.TIMCFG[1]>
#### FLEXIO3.TIMCMP[1]
<link=p.FLEXIO3.TIMCMP[1]>
#### FLEXIO3.SHIFTBUFNBS[3]
<link=p.FLEXIO3.SHIFTBUFNBS[3]>
#### p.FLEXIO3.SHIFTBUFNIS[2]
<lang=dft>
 (rw)  [1;33m0x42020788[0m (0x42020000 + 0x0788)
Shifter Buffer N Nibble Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNIS[0m  - [31:00] -  Shift Buffer
</lang>
#### gpio1.icr2
<link=p.GPIO1.ICR2>
#### p.GPIO1.EDGE_SEL
<lang=dft>
 (rw)  [1;33m0x401b801c[0m (0x401b8000 + 0x001c)
GPIO edge select register
 (rw) (32)  [0;32mGPIO_EDGE_SEL[0m  - [31:00] -  GPIO_EDGE_SEL
</lang>
#### p.gpio1.dr_clear
<link=p.GPIO1.DR_CLEAR>
#### GPIO1.DR_CLEAR
<link=p.GPIO1.DR_CLEAR>
#### p.GPIO5.DR_SET
<lang=dft>
 (wo)  [1;33m0x400c0084[0m (0x400c0000 + 0x0084)
GPIO data register SET
 (wo) (32)  [0;32mDR_SET[0m  - [31:00] -  DR_SET
</lang>
#### gpio2.gdir
<link=p.GPIO2.GDIR>
#### GPIO2.GDIR
<link=p.GPIO2.GDIR>
#### GPIO2.ICR2
<link=p.GPIO2.ICR2>
#### GPIO2.EDGE_SEL
<link=p.GPIO2.EDGE_SEL>
#### p.GPIO2.DR_CLEAR
<lang=dft>
 (wo)  [1;33m0x401bc088[0m (0x401bc000 + 0x0088)
GPIO data register CLEAR
 (wo) (32)  [0;32mDR_CLEAR[0m  - [31:00] -  DR_CLEAR
</lang>
#### p.gpio3.imr
<link=p.GPIO3.IMR>
#### p.gpio3.edge_sel
<link=p.GPIO3.EDGE_SEL>
#### p.GPIO3.DR_TOGGLE
<lang=dft>
 (wo)  [1;33m0x401c008c[0m (0x401c0000 + 0x008c)
GPIO data register TOGGLE
 (wo) (32)  [0;32mDR_TOGGLE[0m  - [31:00] -  DR_TOGGLE
</lang>
#### GPIO3.DR_TOGGLE
<link=p.GPIO3.DR_TOGGLE>
#### p.GPIO4.DR
<lang=dft>
 (rw)  [1;33m0x401c4000[0m (0x401c4000 + 0x0000)
GPIO data register
 (rw) (32)  [0;32mDR[0m  - [31:00] -  DR
</lang>
#### p.GPIO4.ICR1
<lang=dft>
 (rw)  [1;33m0x401c400c[0m (0x401c4000 + 0x000c)
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
#### GPIO4.ICR1
<link=p.GPIO4.ICR1>
#### GPIO4.IMR
<link=p.GPIO4.IMR>
#### gpio4.dr_clear
<link=p.GPIO4.DR_CLEAR>
#### p.GPIO6.IMR
<lang=dft>
 (rw)  [1;33m0x42000014[0m (0x42000000 + 0x0014)
GPIO interrupt mask register
 (rw) (32)  [0;32mIMR[0m  - [31:00] -  IMR
</lang>
#### gpio6.isr
<link=p.GPIO6.ISR>
#### gpio6.edge_sel
<link=p.GPIO6.EDGE_SEL>
#### p.gpio7.dr
<link=p.GPIO7.DR>
#### p.GPIO7.GDIR
<lang=dft>
 (rw)  [1;33m0x42004004[0m (0x42004000 + 0x0004)
GPIO direction register
 (rw) (32)  [0;32mGDIR[0m  - [31:00] -  GDIR
</lang>
#### p.gpio7.icr2
<link=p.GPIO7.ICR2>
#### gpio7.dr_set
<link=p.GPIO7.DR_SET>
#### p.gpio8.dr
<link=p.GPIO8.DR>
#### p.GPIO9
<lang=dft>
base: 0x4200c000
DR              DR_CLEAR        DR_SET          DR_TOGGLE       
EDGE_SEL        GDIR            ICR1            ICR2            
IMR             ISR             PSR             
输入 p.GPIO9.{reg_name} 以查看寄存器的详细信息
type p.GPIO9.{reg_name} to check details of registers
</lang>
#### p.gpio9.dr
<link=p.GPIO9.DR>
#### p.gpio9.isr
<link=p.GPIO9.ISR>
#### p.GPIO9.DR_SET
<lang=dft>
 (wo)  [1;33m0x4200c084[0m (0x4200c000 + 0x0084)
GPIO data register SET
 (wo) (32)  [0;32mDR_SET[0m  - [31:00] -  DR_SET
</lang>
#### p.CAN1.CTRL1
<lang=dft>
 (rw)  [1;33m0x401d0004[0m (0x401d0000 + 0x0004)
Control 1 Register
 (rw) (03)  [0;32mPROPSEG[0m  - [02:00] -  This 3-bit field defines the length of the Propagation Segment in the bit time
 (rw) (01)  [0;32mLOM[0m  - [03:03] -  This bit configures FLEXCAN to operate in Listen Only Mode
      0 - LOM_0 :
         Listen Only Mode is deactivated
      0x1 - LOM_1 :
         FLEXCAN module operates in Listen Only Mode
 (rw) (01)  [0;32mLBUF[0m  - [04:04] -  This bit defines the ordering mechanism for Message Buffer transmission
      0 - LBUF_0 :
         Buffer with highest priority is transmitted first
      0x1 - LBUF_1 :
         Lowest number buffer is transmitted first
 (rw) (01)  [0;32mTSYN[0m  - [05:05] -  This bit enables a mechanism that resets the free-running timer each time a mes
 sage is received in Message Buffer 0
      0 - TSYN_0 :
         Timer Sync feature disabled
      0x1 - TSYN_1 :
         Timer Sync feature enabled
 (rw) (01)  [0;32mBOFFREC[0m  - [06:06] -  This bit defines how FLEXCAN recovers from Bus Off state
      0 - BOFFREC_0 :
         Automatic recovering from Bus Off state enabled, according to CAN Spec 
         2.0 part B
      0x1 - BOFFREC_1 :
         Automatic recovering from Bus Off state disabled
 (rw) (01)  [0;32mSMP[0m  - [07:07] -  This bit defines the sampling mode of CAN bits at the FLEXCAN_RX
      0 - SMP_0 :
         Just one sample is used to determine the bit value
      0x1 - SMP_1 :
         Three samples are used to determine the value of the received bit: the 
         regular one (sample point) and 2 preceding samples, a majority rule is 
         used
 (rw) (01)  [0;32mRWRNMSK[0m  - [10:10] -  This bit provides a mask for the Rx Warning Interrupt associated with the RWRN_
 INT flag in the Error and Status Register
      0 - RWRNMSK_0 :
         Rx Warning Interrupt disabled
      0x1 - RWRNMSK_1 :
         Rx Warning Interrupt enabled
 (rw) (01)  [0;32mTWRNMSK[0m  - [11:11] -  This bit provides a mask for the Tx Warning Interrupt associated with the TWRN_
 INT flag in the Error and Status Register
      0 - TWRNMSK_0 :
         Tx Warning Interrupt disabled
      0x1 - TWRNMSK_1 :
         Tx Warning Interrupt enabled
 (rw) (01)  [0;32mLPB[0m  - [12:12] -  This bit configures FlexCAN to operate in Loop-Back Mode
      0 - LPB_0 :
         Loop Back disabled
      0x1 - LPB_1 :
         Loop Back enabled
 (rw) (01)  [0;32mERRMSK[0m  - [14:14] -  This bit provides a mask for the Error Interrupt.
      0 - ERRMSK_0 :
         Error interrupt disabled
      0x1 - ERRMSK_1 :
         Error interrupt enabled
 (rw) (01)  [0;32mBOFFMSK[0m  - [15:15] -  This bit provides a mask for the Bus Off Interrupt.
      0 - BOFFMSK_0 :
         Bus Off interrupt disabled
      0x1 - BOFFMSK_1 :
         Bus Off interrupt enabled
 (rw) (03)  [0;32mPSEG2[0m  - [18:16] -  This 3-bit field defines the length of Phase Buffer Segment 2 in the bit time
 (rw) (03)  [0;32mPSEG1[0m  - [21:19] -  This 3-bit field defines the length of Phase Buffer Segment 1 in the bit time
 (rw) (02)  [0;32mRJW[0m  - [23:22] -  This 2-bit field defines the maximum number of time quanta One time quantum is 
 equal to the Sclock period
 (rw) (08)  [0;32mPRESDIV[0m  - [31:24] -  This 8-bit field defines the ratio between the PE clock frequency and the Seria
 l Clock (Sclock) frequency
</lang>
#### can1.rx14mask
<link=p.CAN1.RX14MASK>
#### p.can1.rx15mask
<link=p.CAN1.RX15MASK>
#### p.CAN1.ESR2
<lang=dft>
 (ro)  [1;33m0x401d0038[0m (0x401d0000 + 0x0038)
Error and Status 2 Register
 (ro) (01)  [0;32mIMB[0m  - [13:13] -  If ESR2[VPS] is asserted, this bit indicates whether there is any inactive Mail
 box (CODE field is either 0b1000 or 0b0000)
      0 - IMB_0 :
         If ESR2[VPS] is asserted, the ESR2[LPTM] is not an inactive Mailbox.
      0x1 - IMB_1 :
         If ESR2[VPS] is asserted, there is at least one inactive Mailbox. LPTM 
         content is the number of the first one.
 (ro) (01)  [0;32mVPS[0m  - [14:14] -  This bit indicates whether IMB and LPTM contents are currently valid or not
      0 - VPS_0 :
         Contents of IMB and LPTM are invalid
      0x1 - VPS_1 :
         Contents of IMB and LPTM are valid
 (ro) (07)  [0;32mLPTM[0m  - [22:16] -  If ESR2[VPS] is asserted, his 7-bit field indicates the lowest number inactive 
 Mailbox (refer to IMB bit description)
</lang>
#### p.can1.esr2
<link=p.CAN1.ESR2>
#### CAN1.RXIMR0
<link=p.CAN1.RXIMR0>
#### p.CAN1.RXIMR6
<lang=dft>
 (rw)  [1;33m0x401d0898[0m (0x401d0000 + 0x0898)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR14
<link=p.CAN1.RXIMR14>
#### p.can1.rximr15
<link=p.CAN1.RXIMR15>
#### p.CAN1.RXIMR18
<lang=dft>
 (rw)  [1;33m0x401d08c8[0m (0x401d0000 + 0x08c8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr20
<link=p.CAN1.RXIMR20>
#### p.can1.rximr29
<link=p.CAN1.RXIMR29>
#### CAN1.RXIMR32
<link=p.CAN1.RXIMR32>
#### p.can1.rximr33
<link=p.CAN1.RXIMR33>
#### p.CAN1.RXIMR37
<lang=dft>
 (rw)  [1;33m0x401d0914[0m (0x401d0000 + 0x0914)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr37
<link=p.CAN1.RXIMR37>
#### p.can1.rximr43
<link=p.CAN1.RXIMR43>
#### p.CAN1.RXIMR54
<lang=dft>
 (rw)  [1;33m0x401d0958[0m (0x401d0000 + 0x0958)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr56
<link=p.CAN1.RXIMR56>
#### p.can1.rximr58
<link=p.CAN1.RXIMR58>
#### CAN1.RXIMR59
<link=p.CAN1.RXIMR59>
#### p.CAN1.RXIMR61
<lang=dft>
 (rw)  [1;33m0x401d0974[0m (0x401d0000 + 0x0974)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR61
<link=p.CAN1.RXIMR61>
#### can2.mcr
<link=p.CAN2.MCR>
#### p.can2.rx14mask
<link=p.CAN2.RX14MASK>
#### CAN2.RXIMR5
<link=p.CAN2.RXIMR5>
#### p.can2.rximr7
<link=p.CAN2.RXIMR7>
#### can2.rximr8
<link=p.CAN2.RXIMR8>
#### p.CAN2.RXIMR12
<lang=dft>
 (rw)  [1;33m0x401d48b0[0m (0x401d4000 + 0x08b0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr16
<link=p.CAN2.RXIMR16>
#### can2.rximr19
<link=p.CAN2.RXIMR19>
#### CAN2.RXIMR22
<link=p.CAN2.RXIMR22>
#### can2.rximr28
<link=p.CAN2.RXIMR28>
#### CAN2.RXIMR31
<link=p.CAN2.RXIMR31>
#### p.CAN2.RXIMR34
<lang=dft>
 (rw)  [1;33m0x401d4908[0m (0x401d4000 + 0x0908)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr39
<link=p.CAN2.RXIMR39>
#### CAN2.RXIMR40
<link=p.CAN2.RXIMR40>
#### p.can2.rximr44
<link=p.CAN2.RXIMR44>
#### p.CAN2.RXIMR48
<lang=dft>
 (rw)  [1;33m0x401d4940[0m (0x401d4000 + 0x0940)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR53
<link=p.CAN2.RXIMR53>
#### can2.rximr55
<link=p.CAN2.RXIMR55>
#### p.can2.rximr62
<link=p.CAN2.RXIMR62>
#### can3.ctrl1
<link=p.CAN3.CTRL1>
#### p.CAN3.IMASK2
<lang=dft>
 (rw)  [1;33m0x401d8024[0m (0x401d8000 + 0x0024)
Interrupt Masks 2 register
 (rw) (32)  [0;32mBUF63TO32M[0m  - [31:00] -  Buffer MB i Mask
</lang>
#### p.can3.iflag1
<link=p.CAN3.IFLAG1>
#### can3.crcr
<link=p.CAN3.CRCR>
#### p.can3.cs0
<link=p.CAN3.CS0>
#### can3.cs0
<link=p.CAN3.CS0>
#### p.CAN3.MB0_64B_CS
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
#### CAN3.MB0_64B_ID
<link=p.CAN3.MB0_64B_ID>
#### p.can3.mb0_16b_word0
<link=p.CAN3.MB0_16B_WORD0>
#### p.CAN3.MB0_64B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8088[0m (0x401d8000 + 0x0088)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB0_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d808c[0m (0x401d8000 + 0x008c)
Message Buffer 0 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB0_32B_WORD1
<link=p.CAN3.MB0_32B_WORD1>
#### can3.mb0_64b_word2
<link=p.CAN3.MB0_64B_WORD2>
#### can3.mb1_8b_cs
<link=p.CAN3.MB1_8B_CS>
#### can3.mb0_32b_word5
<link=p.CAN3.MB0_32B_WORD5>
#### can3.word11
<link=p.CAN3.WORD11>
#### p.can3.mb1_16b_word1
<link=p.CAN3.MB1_16B_WORD1>
#### p.can3.word12
<link=p.CAN3.WORD12>
#### can3.mb0_64b_word10
<link=p.CAN3.MB0_64B_WORD10>
#### can3.mb2_16b_cs
<link=p.CAN3.MB2_16B_CS>
#### CAN3.MB2_16B_ID
<link=p.CAN3.MB2_16B_ID>
#### CAN3.WORD03
<link=p.CAN3.WORD03>
#### p.CAN3.MB0_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d80c0[0m (0x401d8000 + 0x00c0)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb2_16b_word2
<link=p.CAN3.MB2_16B_WORD2>
#### can3.mb1_32b_word6
<link=p.CAN3.MB1_32B_WORD6>
#### can3.mb1_64b_cs
<link=p.CAN3.MB1_64B_CS>
#### can3.mb4_8b_word1
<link=p.CAN3.MB4_8B_WORD1>
#### CAN3.WORD14
<link=p.CAN3.WORD14>
#### p.CAN3.MB1_64B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80d0[0m (0x401d8000 + 0x00d0)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb2_32b_cs
<link=p.CAN3.MB2_32B_CS>
#### CAN3.MB2_32B_CS
<link=p.CAN3.MB2_32B_CS>
#### can3.id5
<link=p.CAN3.ID5>
#### p.can3.mb3_16b_word1
<link=p.CAN3.MB3_16B_WORD1>
#### p.CAN3.MB2_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80dc[0m (0x401d8000 + 0x00dc)
Message Buffer 2 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB2_32B_WORD1
<link=p.CAN3.MB2_32B_WORD1>
#### CAN3.MB5_8B_WORD1
<link=p.CAN3.MB5_8B_WORD1>
#### can3.mb1_64b_word4
<link=p.CAN3.MB1_64B_WORD4>
#### CAN3.ID6
<link=p.CAN3.ID6>
#### p.can3.mb4_16b_id
<link=p.CAN3.MB4_16B_ID>
#### p.can3.mb6_8b_id
<link=p.CAN3.MB6_8B_ID>
#### can3.word06
<link=p.CAN3.WORD06>
#### can3.mb2_32b_word5
<link=p.CAN3.MB2_32B_WORD5>
#### p.can3.mb7_8b_cs
<link=p.CAN3.MB7_8B_CS>
#### p.CAN3.ID7
<lang=dft>
 (rw)  [1;33m0x401d80f4[0m (0x401d8000 + 0x00f4)
Message Buffer 7 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb7_8b_word1
<link=p.CAN3.MB7_8B_WORD1>
#### CAN3.MB5_16B_WORD0
<link=p.CAN3.MB5_16B_WORD0>
#### CAN3.MB8_8B_CS
<link=p.CAN3.MB8_8B_CS>
#### p.can3.id8
<link=p.CAN3.ID8>
#### p.CAN3.MB5_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8108[0m (0x401d8000 + 0x0108)
Message Buffer 5 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb8_8b_word1
<link=p.CAN3.MB8_8B_WORD1>
#### CAN3.MB9_8B_CS
<link=p.CAN3.MB9_8B_CS>
#### can3.mb9_8b_id
<link=p.CAN3.MB9_8B_ID>
#### CAN3.MB9_8B_WORD1
<link=p.CAN3.MB9_8B_WORD1>
#### can3.cs10
<link=p.CAN3.CS10>
#### CAN3.MB2_64B_WORD2
<link=p.CAN3.MB2_64B_WORD2>
#### p.can3.mb10_8b_id
<link=p.CAN3.MB10_8B_ID>
#### can3.mb4_32b_word1
<link=p.CAN3.MB4_32B_WORD1>
#### p.CAN3.MB7_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8130[0m (0x401d8000 + 0x0130)
Message Buffer 7 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_16B_WORD0
<link=p.CAN3.MB7_16B_WORD0>
#### p.can3.mb2_64b_word7
<link=p.CAN3.MB2_64B_WORD7>
#### can3.mb2_64b_word7
<link=p.CAN3.MB2_64B_WORD7>
#### p.CAN3.MB11_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8138[0m (0x401d8000 + 0x0138)
Message Buffer 11 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb7_16b_word2
<link=p.CAN3.MB7_16B_WORD2>
#### p.CAN3.MB2_64B_WORD9
<lang=dft>
 (rw)  [1;33m0x401d813c[0m (0x401d8000 + 0x013c)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_39[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_38[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_37[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_36[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB4_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d813c[0m (0x401d8000 + 0x013c)
Message Buffer 4 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB4_32B_WORD5
<link=p.CAN3.MB4_32B_WORD5>
#### p.can3.word112
<link=p.CAN3.WORD112>
#### p.CAN3.MB8_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8154[0m (0x401d8000 + 0x0154)
Message Buffer 8 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb5_32b_word2
<link=p.CAN3.MB5_32B_WORD2>
#### p.can3.word013
<link=p.CAN3.WORD013>
#### p.can3.mb13_8b_word1
<link=p.CAN3.MB13_8B_WORD1>
#### can3.mb14_8b_cs
<link=p.CAN3.MB14_8B_CS>
#### CAN3.MB3_64B_WORD0
<link=p.CAN3.MB3_64B_WORD0>
#### can3.mb15_8b_cs
<link=p.CAN3.MB15_8B_CS>
#### can3.mb15_8b_id
<link=p.CAN3.MB15_8B_ID>
#### CAN3.MB15_8B_WORD0
<link=p.CAN3.MB15_8B_WORD0>
#### can3.mb10_16b_word1
<link=p.CAN3.MB10_16B_WORD1>
#### can3.mb6_32b_word1
<link=p.CAN3.MB6_32B_WORD1>
#### p.can3.cs16
<link=p.CAN3.CS16>
#### p.CAN3.MB10_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8180[0m (0x401d8000 + 0x0180)
Message Buffer 10 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB3_64B_WORD9
<lang=dft>
 (rw)  [1;33m0x401d8184[0m (0x401d8000 + 0x0184)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_39[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_38[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_37[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_36[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb16_8b_word0
<link=p.CAN3.MB16_8B_WORD0>
#### CAN3.MB3_64B_WORD10
<link=p.CAN3.MB3_64B_WORD10>
#### p.CAN3.WORD016
<lang=dft>
 (rw)  [1;33m0x401d8188[0m (0x401d8000 + 0x0188)
Message Buffer 16 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word016
<link=p.CAN3.WORD016>
#### CAN3.MB16_8B_WORD1
<link=p.CAN3.MB16_8B_WORD1>
#### p.CAN3.MB6_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d818c[0m (0x401d8000 + 0x018c)
Message Buffer 6 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB6_32B_WORD5
<link=p.CAN3.MB6_32B_WORD5>
#### p.CAN3.MB11_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8190[0m (0x401d8000 + 0x0190)
Message Buffer 11 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb11_16b_word0
<link=p.CAN3.MB11_16B_WORD0>
#### p.CAN3.MB17_8B_CS
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
#### can3.mb3_64b_word12
<link=p.CAN3.MB3_64B_WORD12>
#### p.can3.mb3_64b_word14
<link=p.CAN3.MB3_64B_WORD14>
#### CAN3.WORD017
<link=p.CAN3.WORD017>
#### can3.word117
<link=p.CAN3.WORD117>
#### can3.mb18_8b_id
<link=p.CAN3.MB18_8B_ID>
#### p.CAN3.MB12_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81ac[0m (0x401d8000 + 0x01ac)
Message Buffer 12 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD118
<lang=dft>
 (rw)  [1;33m0x401d81ac[0m (0x401d8000 + 0x01ac)
Message Buffer 18 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb12_16b_word2
<link=p.CAN3.MB12_16B_WORD2>
#### p.CAN3.ID19
<lang=dft>
 (rw)  [1;33m0x401d81b4[0m (0x401d8000 + 0x01b4)
Message Buffer 19 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB19_8B_WORD0
<link=p.CAN3.MB19_8B_WORD0>
#### p.CAN3.MB13_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d81bc[0m (0x401d8000 + 0x01bc)
Message Buffer 13 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB4_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d81bc[0m (0x401d8000 + 0x01bc)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB13_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81c4[0m (0x401d8000 + 0x01c4)
Message Buffer 13 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb13_16b_word1
<link=p.CAN3.MB13_16B_WORD1>
#### can3.mb4_64b_word9
<link=p.CAN3.MB4_64B_WORD9>
#### p.can3.mb4_64b_word12
<link=p.CAN3.MB4_64B_WORD12>
#### p.can3.mb21_8b_word1
<link=p.CAN3.MB21_8B_WORD1>
#### CAN3.MB4_64B_WORD14
<link=p.CAN3.MB4_64B_WORD14>
#### p.can3.mb8_32b_word6
<link=p.CAN3.MB8_32B_WORD6>
#### p.can3.mb15_16b_cs
<link=p.CAN3.MB15_16B_CS>
#### p.can3.word022
<link=p.CAN3.WORD022>
#### CAN3.WORD022
<link=p.CAN3.WORD022>
#### p.CAN3.MB22_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81ec[0m (0x401d8000 + 0x01ec)
Message Buffer 22 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB5_64B_ID
<link=p.CAN3.MB5_64B_ID>
#### p.CAN3.WORD122
<lang=dft>
 (rw)  [1;33m0x401d81ec[0m (0x401d8000 + 0x01ec)
Message Buffer 22 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.cs23
<link=p.CAN3.CS23>
#### CAN3.ID23
<link=p.CAN3.ID23>
#### p.can3.mb5_64b_word1
<link=p.CAN3.MB5_64B_WORD1>
#### can3.mb5_64b_word1
<link=p.CAN3.MB5_64B_WORD1>
#### CAN3.MB9_32B_WORD1
<link=p.CAN3.MB9_32B_WORD1>
#### p.CAN3.MB9_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d81f8[0m (0x401d8000 + 0x01f8)
Message Buffer 9 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb9_32b_word4
<link=p.CAN3.MB9_32B_WORD4>
#### can3.id24
<link=p.CAN3.ID24>
#### p.can3.mb24_8b_word1
<link=p.CAN3.MB24_8B_WORD1>
#### p.CAN3.MB5_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d820c[0m (0x401d8000 + 0x020c)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS25
<lang=dft>
 (rw)  [1;33m0x401d8210[0m (0x401d8000 + 0x0210)
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
#### p.can3.mb10_32b_cs
<link=p.CAN3.MB10_32B_CS>
#### p.CAN3.MB16_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8210[0m (0x401d8000 + 0x0210)
Message Buffer 16 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb17_16b_id
<link=p.CAN3.MB17_16B_ID>
#### can3.mb5_64b_word11
<link=p.CAN3.MB5_64B_WORD11>
#### CAN3.MB5_64B_WORD12
<link=p.CAN3.MB5_64B_WORD12>
#### p.can3.mb10_32b_word5
<link=p.CAN3.MB10_32B_WORD5>
#### p.can3.mb18_16b_cs
<link=p.CAN3.MB18_16B_CS>
#### CAN3.MB10_32B_WORD7
<link=p.CAN3.MB10_32B_WORD7>
#### can3.mb27_8b_id
<link=p.CAN3.MB27_8B_ID>
#### p.CAN3.MB11_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8238[0m (0x401d8000 + 0x0238)
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
#### p.can3.mb18_16b_word0
<link=p.CAN3.MB18_16B_WORD0>
#### p.CAN3.MB27_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8238[0m (0x401d8000 + 0x0238)
Message Buffer 27 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb6_64b_word0
<link=p.CAN3.MB6_64B_WORD0>
#### can3.mb6_64b_word2
<link=p.CAN3.MB6_64B_WORD2>
#### CAN3.MB19_16B_ID
<link=p.CAN3.MB19_16B_ID>
#### p.can3.mb28_8b_word1
<link=p.CAN3.MB28_8B_WORD1>
#### CAN3.MB6_64B_WORD5
<link=p.CAN3.MB6_64B_WORD5>
#### can3.mb11_32b_word4
<link=p.CAN3.MB11_32B_WORD4>
#### CAN3.MB11_32B_WORD4
<link=p.CAN3.MB11_32B_WORD4>
#### CAN3.MB29_8B_ID
<link=p.CAN3.MB29_8B_ID>
#### p.can3.cs30
<link=p.CAN3.CS30>
#### CAN3.ID30
<link=p.CAN3.ID30>
#### p.CAN3.MB6_64B_WORD11
<lang=dft>
 (rw)  [1;33m0x401d8264[0m (0x401d8000 + 0x0264)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_47[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_46[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_45[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_44[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD030
<lang=dft>
 (rw)  [1;33m0x401d8268[0m (0x401d8000 + 0x0268)
Message Buffer 30 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word030
<link=p.CAN3.WORD030>
#### can3.mb30_8b_word1
<link=p.CAN3.MB30_8B_WORD1>
#### CAN3.MB6_64B_WORD13
<link=p.CAN3.MB6_64B_WORD13>
#### can3.mb6_64b_word14
<link=p.CAN3.MB6_64B_WORD14>
#### CAN3.MB31_8B_WORD0
<link=p.CAN3.MB31_8B_WORD0>
#### CAN3.WORD031
<link=p.CAN3.WORD031>
#### CAN3.MB21_16B_ID
<link=p.CAN3.MB21_16B_ID>
#### can3.mb7_64b_id
<link=p.CAN3.MB7_64B_ID>
#### can3.word131
<link=p.CAN3.WORD131>
#### p.can3.mb12_32b_word6
<link=p.CAN3.MB12_32B_WORD6>
#### p.CAN3.MB32_8B_CS
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
#### can3.id33
<link=p.CAN3.ID33>
#### CAN3.MB7_64B_WORD5
<link=p.CAN3.MB7_64B_WORD5>
#### p.can3.mb33_8b_word0
<link=p.CAN3.MB33_8B_WORD0>
#### can3.mb13_32b_word5
<link=p.CAN3.MB13_32B_WORD5>
#### p.can3.mb7_64b_word9
<link=p.CAN3.MB7_64B_WORD9>
#### p.CAN3.MB34_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82a8[0m (0x401d8000 + 0x02a8)
Message Buffer 34 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb34_8b_word0
<link=p.CAN3.MB34_8B_WORD0>
#### p.CAN3.MB23_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d82ac[0m (0x401d8000 + 0x02ac)
Message Buffer 23 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb14_32b_id
<link=p.CAN3.MB14_32B_ID>
#### p.can3.mb14_32b_word1
<link=p.CAN3.MB14_32B_WORD1>
#### CAN3.CS36
<link=p.CAN3.CS36>
#### CAN3.MB36_8B_CS
<link=p.CAN3.MB36_8B_CS>
#### CAN3.MB14_32B_WORD3
<link=p.CAN3.MB14_32B_WORD3>
#### can3.mb24_16b_id
<link=p.CAN3.MB24_16B_ID>
#### CAN3.MB8_64B_WORD0
<link=p.CAN3.MB8_64B_WORD0>
#### p.CAN3.MB24_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d82d0[0m (0x401d8000 + 0x02d0)
Message Buffer 24 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb15_32b_cs
<link=p.CAN3.MB15_32B_CS>
#### p.can3.mb8_64b_word4
<link=p.CAN3.MB8_64B_WORD4>
#### can3.mb15_32b_word0
<link=p.CAN3.MB15_32B_WORD0>
#### CAN3.MB15_32B_WORD0
<link=p.CAN3.MB15_32B_WORD0>
#### p.CAN3.MB38_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82e8[0m (0x401d8000 + 0x02e8)
Message Buffer 38 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb38_8b_word0
<link=p.CAN3.MB38_8B_WORD0>
#### can3.mb8_64b_word8
<link=p.CAN3.MB8_64B_WORD8>
#### CAN3.WORD138
<link=p.CAN3.WORD138>
#### p.can3.mb8_64b_word10
<link=p.CAN3.MB8_64B_WORD10>
#### p.can3.mb39_8b_id
<link=p.CAN3.MB39_8B_ID>
#### p.CAN3.MB26_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82f8[0m (0x401d8000 + 0x02f8)
Message Buffer 26 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB8_64B_WORD12
<link=p.CAN3.MB8_64B_WORD12>
#### CAN3.CS40
<link=p.CAN3.CS40>
#### p.can3.mb40_8b_word0
<link=p.CAN3.MB40_8B_WORD0>
#### p.CAN3.MB9_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d830c[0m (0x401d8000 + 0x030c)
Message Buffer 9 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb16_32b_word2
<link=p.CAN3.MB16_32B_WORD2>
#### CAN3.MB9_64B_WORD0
<link=p.CAN3.MB9_64B_WORD0>
#### CAN3.ID41
<link=p.CAN3.ID41>
#### can3.word041
<link=p.CAN3.WORD041>
#### CAN3.MB27_16B_WORD3
<link=p.CAN3.MB27_16B_WORD3>
#### p.can3.mb9_64b_word3
<link=p.CAN3.MB9_64B_WORD3>
#### can3.mb9_64b_word3
<link=p.CAN3.MB9_64B_WORD3>
#### CAN3.MB42_8B_WORD1
<link=p.CAN3.MB42_8B_WORD1>
#### can3.mb17_32b_word1
<link=p.CAN3.MB17_32B_WORD1>
#### can3.mb28_16b_word3
<link=p.CAN3.MB28_16B_WORD3>
#### p.can3.mb29_16b_cs
<link=p.CAN3.MB29_16B_CS>
#### CAN3.MB9_64B_WORD10
<link=p.CAN3.MB9_64B_WORD10>
#### p.can3.mb29_16b_id
<link=p.CAN3.MB29_16B_ID>
#### p.CAN3.MB44_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8344[0m (0x401d8000 + 0x0344)
Message Buffer 44 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb29_16b_word2
<link=p.CAN3.MB29_16B_WORD2>
#### p.can3.mb29_16b_word3
<link=p.CAN3.MB29_16B_WORD3>
#### p.can3.mb9_64b_word15
<link=p.CAN3.MB9_64B_WORD15>
#### can3.mb10_64b_cs
<link=p.CAN3.MB10_64B_CS>
#### CAN3.MB45_8B_CS
<link=p.CAN3.MB45_8B_CS>
#### CAN3.MB18_32B_WORD0
<link=p.CAN3.MB18_32B_WORD0>
#### p.CAN3.CS46
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
#### p.CAN3.ID46
<lang=dft>
 (rw)  [1;33m0x401d8364[0m (0x401d8000 + 0x0364)
Message Buffer 46 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB18_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8368[0m (0x401d8000 + 0x0368)
Message Buffer 18 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB10_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8374[0m (0x401d8000 + 0x0374)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb18_32b_word7
<link=p.CAN3.MB18_32B_WORD7>
#### p.can3.mb47_8b_id
<link=p.CAN3.MB47_8B_ID>
#### p.CAN3.MB47_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8378[0m (0x401d8000 + 0x0378)
Message Buffer 47 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb19_32b_id
<link=p.CAN3.MB19_32B_ID>
#### CAN3.MB47_8B_WORD1
<link=p.CAN3.MB47_8B_WORD1>
#### p.can3.cs48
<link=p.CAN3.CS48>
#### p.can3.id48
<link=p.CAN3.ID48>
#### can3.mb10_64b_word12
<link=p.CAN3.MB10_64B_WORD12>
#### p.CAN3.MB19_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d8394[0m (0x401d8000 + 0x0394)
Message Buffer 19 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb19_32b_word6
<link=p.CAN3.MB19_32B_WORD6>
#### p.can3.mb33_16b_cs
<link=p.CAN3.MB33_16B_CS>
#### p.can3.word049
<link=p.CAN3.WORD049>
#### CAN3.MB11_64B_ID
<link=p.CAN3.MB11_64B_ID>
#### p.CAN3.MB20_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d83a4[0m (0x401d8000 + 0x03a4)
Message Buffer 20 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb20_32b_id
<link=p.CAN3.MB20_32B_ID>
#### p.CAN3.MB50_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d83a4[0m (0x401d8000 + 0x03a4)
Message Buffer 50 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB50_8B_ID
<link=p.CAN3.MB50_8B_ID>
#### CAN3.MB11_64B_WORD2
<link=p.CAN3.MB11_64B_WORD2>
#### p.CAN3.MB50_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83ac[0m (0x401d8000 + 0x03ac)
Message Buffer 50 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb50_8b_word1
<link=p.CAN3.MB50_8B_WORD1>
#### p.CAN3.CS51
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
#### CAN3.MB20_32B_WORD2
<link=p.CAN3.MB20_32B_WORD2>
#### can3.id51
<link=p.CAN3.ID51>
#### can3.mb34_16b_word0
<link=p.CAN3.MB34_16B_WORD0>
#### p.can3.mb20_32b_word5
<link=p.CAN3.MB20_32B_WORD5>
#### can3.mb20_32b_word6
<link=p.CAN3.MB20_32B_WORD6>
#### p.CAN3.MB52_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d83c0[0m (0x401d8000 + 0x03c0)
Message Buffer 52 CS Register
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
#### CAN3.ID52
<link=p.CAN3.ID52>
#### can3.mb35_16b_cs
<link=p.CAN3.MB35_16B_CS>
#### CAN3.WORD152
<link=p.CAN3.WORD152>
#### p.can3.mb53_8b_id
<link=p.CAN3.MB53_8B_ID>
#### CAN3.MB53_8B_ID
<link=p.CAN3.MB53_8B_ID>
#### can3.mb11_64b_word14
<link=p.CAN3.MB11_64B_WORD14>
#### p.CAN3.MB53_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83d8[0m (0x401d8000 + 0x03d8)
Message Buffer 53 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB11_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d83dc[0m (0x401d8000 + 0x03dc)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb21_32b_word4
<link=p.CAN3.MB21_32B_WORD4>
#### p.can3.mb12_64b_id
<link=p.CAN3.MB12_64B_ID>
#### p.can3.mb21_32b_word5
<link=p.CAN3.MB21_32B_WORD5>
#### can3.mb54_8b_id
<link=p.CAN3.MB54_8B_ID>
#### p.CAN3.MB21_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d83ec[0m (0x401d8000 + 0x03ec)
Message Buffer 21 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb54_8b_word1
<link=p.CAN3.MB54_8B_WORD1>
#### p.CAN3.WORD154
<lang=dft>
 (rw)  [1;33m0x401d83ec[0m (0x401d8000 + 0x03ec)
Message Buffer 54 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb55_8b_cs
<link=p.CAN3.MB55_8B_CS>
#### p.CAN3.ID55
<lang=dft>
 (rw)  [1;33m0x401d83f4[0m (0x401d8000 + 0x03f4)
Message Buffer 55 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb36_16b_word3
<link=p.CAN3.MB36_16B_WORD3>
#### p.can3.mb12_64b_word4
<link=p.CAN3.MB12_64B_WORD4>
#### can3.mb22_32b_word2
<link=p.CAN3.MB22_32B_WORD2>
#### can3.mb12_64b_word7
<link=p.CAN3.MB12_64B_WORD7>
#### p.CAN3.MB37_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8408[0m (0x401d8000 + 0x0408)
Message Buffer 37 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb37_16b_word2
<link=p.CAN3.MB37_16B_WORD2>
#### p.can3.mb22_32b_word5
<link=p.CAN3.MB22_32B_WORD5>
#### CAN3.CS57
<link=p.CAN3.CS57>
#### p.can3.mb12_64b_word10
<link=p.CAN3.MB12_64B_WORD10>
#### p.CAN3.MB38_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8410[0m (0x401d8000 + 0x0410)
Message Buffer 38 CS Register
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
#### p.can3.id57
<link=p.CAN3.ID57>
#### p.CAN3.MB38_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8414[0m (0x401d8000 + 0x0414)
Message Buffer 38 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb38_16b_id
<link=p.CAN3.MB38_16B_ID>
#### p.CAN3.MB23_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8418[0m (0x401d8000 + 0x0418)
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
#### CAN3.MB23_32B_CS
<link=p.CAN3.MB23_32B_CS>
#### can3.mb23_32b_id
<link=p.CAN3.MB23_32B_ID>
#### CAN3.MB38_16B_WORD1
<link=p.CAN3.MB38_16B_WORD1>
#### p.CAN3.MB23_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8424[0m (0x401d8000 + 0x0424)
Message Buffer 23 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb23_32b_word4
<link=p.CAN3.MB23_32B_WORD4>
#### p.can3.mb23_32b_word5
<link=p.CAN3.MB23_32B_WORD5>
#### CAN3.MB39_16B_WORD1
<link=p.CAN3.MB39_16B_WORD1>
#### CAN3.MB23_32B_WORD7
<link=p.CAN3.MB23_32B_WORD7>
#### p.can3.mb59_8b_word1
<link=p.CAN3.MB59_8B_WORD1>
#### p.can3.mb13_64b_word4
<link=p.CAN3.MB13_64B_WORD4>
#### p.CAN3.ID60
<lang=dft>
 (rw)  [1;33m0x401d8444[0m (0x401d8000 + 0x0444)
Message Buffer 60 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB13_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d8444[0m (0x401d8000 + 0x0444)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb13_64b_word5
<link=p.CAN3.MB13_64B_WORD5>
#### can3.cs61
<link=p.CAN3.CS61>
#### p.CAN3.MB40_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8450[0m (0x401d8000 + 0x0450)
Message Buffer 40 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB61_8B_CS
<link=p.CAN3.MB61_8B_CS>
#### can3.word162
<link=p.CAN3.WORD162>
#### p.CAN3.WORD063
<lang=dft>
 (rw)  [1;33m0x401d8478[0m (0x401d8000 + 0x0478)
Message Buffer 63 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word163
<link=p.CAN3.WORD163>
#### CAN3.WORD163
<link=p.CAN3.WORD163>
#### can3.rximr[6]
<link=p.CAN3.RXIMR[6]>
#### p.can3.rximr[24]
<link=p.CAN3.RXIMR[24]>
#### CAN3.RXIMR[27]
<link=p.CAN3.RXIMR[27]>
#### p.CAN3.RXIMR[28]
<lang=dft>
 (rw)  [1;33m0x401d88f0[0m (0x401d8000 + 0x08f0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[38]
<link=p.CAN3.RXIMR[38]>
#### CAN3.RXIMR[38]
<link=p.CAN3.RXIMR[38]>
#### CAN3.RXIMR[40]
<link=p.CAN3.RXIMR[40]>
#### can3.rximr[41]
<link=p.CAN3.RXIMR[41]>
#### p.can3.rximr[43]
<link=p.CAN3.RXIMR[43]>
#### p.CAN3.RXIMR[44]
<lang=dft>
 (rw)  [1;33m0x401d8930[0m (0x401d8000 + 0x0930)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[49]
<link=p.CAN3.RXIMR[49]>
#### p.CAN3.RXIMR[50]
<lang=dft>
 (rw)  [1;33m0x401d8948[0m (0x401d8000 + 0x0948)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[54]
<link=p.CAN3.RXIMR[54]>
#### CAN3.RXIMR[54]
<link=p.CAN3.RXIMR[54]>
#### p.CAN3.RXIMR[57]
<lang=dft>
 (rw)  [1;33m0x401d8964[0m (0x401d8000 + 0x0964)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[59]
<link=p.CAN3.RXIMR[59]>
#### p.CAN3.RXIMR[61]
<lang=dft>
 (rw)  [1;33m0x401d8974[0m (0x401d8000 + 0x0974)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.fdcrc
<link=p.CAN3.FDCRC>
#### p.CAN3.ERFCR
<lang=dft>
 (rw)  [1;33m0x401d8c0c[0m (0x401d8000 + 0x0c0c)
Enhanced Rx FIFO Control Register
 (rw) (05)  [0;32mERFWM[0m  - [04:00] -  Enhanced Rx FIFO Watermark
 (rw) (06)  [0;32mNFE[0m  - [13:08] -  Number of Enhanced Rx FIFO Filter Elements
 (rw) (07)  [0;32mNEXIF[0m  - [22:16] -  Number of Extended ID Filter Elements
 (rw) (05)  [0;32mDMALW[0m  - [30:26] -  DMA Last Word
 (rw) (01)  [0;32mERFEN[0m  - [31:31] -  Enhanced Rx FIFO enable
      0 - ERFEN_0 :
         Enhanced Rx FIFO is disabled
      0x1 - ERFEN_1 :
         Enhanced Rx FIFO is enabled
</lang>
#### can3.erfcr
<link=p.CAN3.ERFCR>
#### p.CAN3.HR_TIME_STAMP[7]
<lang=dft>
 (ro)  [1;33m0x401d8c4c[0m (0x401d8000 + 0x0c4c)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[7]
<link=p.CAN3.HR_TIME_STAMP[7]>
#### CAN3.HR_TIME_STAMP[11]
<link=p.CAN3.HR_TIME_STAMP[11]>
#### can3.hr_time_stamp[17]
<link=p.CAN3.HR_TIME_STAMP[17]>
#### p.CAN3.HR_TIME_STAMP[19]
<lang=dft>
 (ro)  [1;33m0x401d8c7c[0m (0x401d8000 + 0x0c7c)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.hr_time_stamp[26]
<link=p.CAN3.HR_TIME_STAMP[26]>
#### can3.hr_time_stamp[32]
<link=p.CAN3.HR_TIME_STAMP[32]>
#### can3.hr_time_stamp[43]
<link=p.CAN3.HR_TIME_STAMP[43]>
#### CAN3.HR_TIME_STAMP[45]
<link=p.CAN3.HR_TIME_STAMP[45]>
#### p.can3.hr_time_stamp[55]
<link=p.CAN3.HR_TIME_STAMP[55]>
#### p.CAN3.HR_TIME_STAMP[56]
<lang=dft>
 (ro)  [1;33m0x401d8d10[0m (0x401d8000 + 0x0d10)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### CAN3.HR_TIME_STAMP[60]
<link=p.CAN3.HR_TIME_STAMP[60]>
#### p.can3.hr_time_stamp[63]
<link=p.CAN3.HR_TIME_STAMP[63]>
#### p.can3.erffel[3]
<link=p.CAN3.ERFFEL[3]>
#### can3.erffel[5]
<link=p.CAN3.ERFFEL[5]>
#### CAN3.ERFFEL[12]
<link=p.CAN3.ERFFEL[12]>
#### p.CAN3.ERFFEL[14]
<lang=dft>
 (rw)  [1;33m0x401db038[0m (0x401d8000 + 0x3038)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[15]
<link=p.CAN3.ERFFEL[15]>
#### p.can3.erffel[19]
<link=p.CAN3.ERFFEL[19]>
#### CAN3.ERFFEL[19]
<link=p.CAN3.ERFFEL[19]>
#### p.can3.erffel[21]
<link=p.CAN3.ERFFEL[21]>
#### can3.erffel[23]
<link=p.CAN3.ERFFEL[23]>
#### p.CAN3.ERFFEL[31]
<lang=dft>
 (rw)  [1;33m0x401db07c[0m (0x401d8000 + 0x307c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[34]
<link=p.CAN3.ERFFEL[34]>
#### can3.erffel[41]
<link=p.CAN3.ERFFEL[41]>
#### p.CAN3.ERFFEL[43]
<lang=dft>
 (rw)  [1;33m0x401db0ac[0m (0x401d8000 + 0x30ac)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[43]
<link=p.CAN3.ERFFEL[43]>
#### p.CAN3.ERFFEL[44]
<lang=dft>
 (rw)  [1;33m0x401db0b0[0m (0x401d8000 + 0x30b0)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[53]
<lang=dft>
 (rw)  [1;33m0x401db0d4[0m (0x401d8000 + 0x30d4)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[62]
<lang=dft>
 (rw)  [1;33m0x401db0f8[0m (0x401d8000 + 0x30f8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[66]
<link=p.CAN3.ERFFEL[66]>
#### p.CAN3.ERFFEL[68]
<lang=dft>
 (rw)  [1;33m0x401db110[0m (0x401d8000 + 0x3110)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[75]
<link=p.CAN3.ERFFEL[75]>
#### CAN3.ERFFEL[75]
<link=p.CAN3.ERFFEL[75]>
#### CAN3.ERFFEL[81]
<link=p.CAN3.ERFFEL[81]>
#### can3.erffel[82]
<link=p.CAN3.ERFFEL[82]>
#### CAN3.ERFFEL[86]
<link=p.CAN3.ERFFEL[86]>
#### p.can3.erffel[88]
<link=p.CAN3.ERFFEL[88]>
#### can3.erffel[88]
<link=p.CAN3.ERFFEL[88]>
#### p.can3.erffel[104]
<link=p.CAN3.ERFFEL[104]>
#### CAN3.ERFFEL[105]
<link=p.CAN3.ERFFEL[105]>
#### p.can3.erffel[121]
<link=p.CAN3.ERFFEL[121]>
#### tmr1.comp10
<link=p.TMR1.COMP10>
#### TMR1.COMP11
<link=p.TMR1.COMP11>
#### tmr1.load0
<link=p.TMR1.LOAD0>
#### p.TMR1.LOAD2
<lang=dft>
 (rw)  [1;33m0x401dc046[0m (0x401dc000 + 0x0046)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### TMR1.LOAD3
<link=p.TMR1.LOAD3>
#### p.TMR1.HOLD3
<lang=dft>
 (rw)  [1;33m0x401dc068[0m (0x401dc000 + 0x0068)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.TMR1.SCTRL3
<lang=dft>
 (rw)  [1;33m0x401dc06e[0m (0x401dc000 + 0x006e)
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
#### tmr1.cmpld10
<link=p.TMR1.CMPLD10>
#### p.tmr1.cmpld20
<link=p.TMR1.CMPLD20>
#### TMR1.CSCTRL0
<link=p.TMR1.CSCTRL0>
#### p.TMR1.CSCTRL1
<lang=dft>
 (rw)  [1;33m0x401dc034[0m (0x401dc000 + 0x0034)
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
#### p.tmr1.filt3
<link=p.TMR1.FILT3>
#### p.tmr1.dma1
<link=p.TMR1.DMA1>
#### p.TMR2.COMP12
<lang=dft>
 (rw)  [1;33m0x401e0040[0m (0x401e0000 + 0x0040)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### tmr2.comp12
<link=p.TMR2.COMP12>
#### tmr2.comp23
<link=p.TMR2.COMP23>
#### TMR2.LOAD0
<link=p.TMR2.LOAD0>
#### p.TMR2.LOAD1
<lang=dft>
 (rw)  [1;33m0x401e0026[0m (0x401e0000 + 0x0026)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.TMR2.HOLD0
<lang=dft>
 (rw)  [1;33m0x401e0008[0m (0x401e0000 + 0x0008)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.TMR2.CNTR2
<lang=dft>
 (rw)  [1;33m0x401e004a[0m (0x401e0000 + 0x004a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### TMR2.CTRL2
<link=p.TMR2.CTRL2>
#### p.tmr2.sctrl1
<link=p.TMR2.SCTRL1>
#### tmr2.cmpld12
<link=p.TMR2.CMPLD12>
#### TMR2.CMPLD23
<link=p.TMR2.CMPLD23>
#### tmr2.csctrl1
<link=p.TMR2.CSCTRL1>
#### p.TMR3.LOAD0
<lang=dft>
 (rw)  [1;33m0x401e4006[0m (0x401e4000 + 0x0006)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### TMR3.LOAD1
<link=p.TMR3.LOAD1>
#### tmr3.load2
<link=p.TMR3.LOAD2>
#### TMR3.HOLD0
<link=p.TMR3.HOLD0>
#### TMR3.CNTR1
<link=p.TMR3.CNTR1>
#### p.tmr3.cntr2
<link=p.TMR3.CNTR2>
#### tmr3.ctrl0
<link=p.TMR3.CTRL0>
#### p.TMR3.CTRL1
<lang=dft>
 (rw)  [1;33m0x401e402c[0m (0x401e4000 + 0x002c)
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
#### p.tmr3.ctrl3
<link=p.TMR3.CTRL3>
#### p.tmr3.cmpld11
<link=p.TMR3.CMPLD11>
#### p.TMR3.CMPLD21
<lang=dft>
 (rw)  [1;33m0x401e4032[0m (0x401e4000 + 0x0032)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### p.tmr3.csctrl1
<link=p.TMR3.CSCTRL1>
#### tmr3.dma1
<link=p.TMR3.DMA1>
#### TMR3.ENBL
<link=p.TMR3.ENBL>
#### p.tmr4
<link=p.TMR4>
#### p.TMR4.COMP11
<lang=dft>
 (rw)  [1;33m0x401e8020[0m (0x401e8000 + 0x0020)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### TMR4.COMP23
<link=p.TMR4.COMP23>
#### p.TMR4.CAPT3
<lang=dft>
 (rw)  [1;33m0x401e8064[0m (0x401e8000 + 0x0064)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### TMR4.LOAD0
<link=p.TMR4.LOAD0>
#### p.tmr4.ctrl0
<link=p.TMR4.CTRL0>
#### p.TMR4.CTRL2
<lang=dft>
 (rw)  [1;33m0x401e804c[0m (0x401e8000 + 0x004c)
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
#### p.tmr4.cmpld21
<link=p.TMR4.CMPLD21>
#### p.TMR4.CMPLD23
<lang=dft>
 (rw)  [1;33m0x401e8072[0m (0x401e8000 + 0x0072)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### p.tmr4.csctrl1
<link=p.TMR4.CSCTRL1>
#### p.tmr4.filt1
<link=p.TMR4.FILT1>
#### p.tmr4.dma0
<link=p.TMR4.DMA0>
#### TMR4.DMA0
<link=p.TMR4.DMA0>
#### p.GPT1.PR
<lang=dft>
 (rw)  [1;33m0x401ec004[0m (0x401ec000 + 0x0004)
GPT Prescaler Register
 (rw) (12)  [0;32mPRESCALER[0m  - [11:00] -  Prescaler bits
      0 - PRESCALER_0 :
         Divide by 1
      0x1 - PRESCALER_1 :
         Divide by 2
      0xFFF - PRESCALER_4095 :
         Divide by 4096
 (rw) (04)  [0;32mPRESCALER24M[0m  - [15:12] -  Prescaler bits
      0 - PRESCALER24M_0 :
         Divide by 1
      0x1 - PRESCALER24M_1 :
         Divide by 2
      0xF - PRESCALER24M_15 :
         Divide by 16
</lang>
#### p.gpt1.sr
<link=p.GPT1.SR>
#### gpt1.ocr3
<link=p.GPT1.OCR3>
#### p.GPT2.ICR2
<lang=dft>
 (ro)  [1;33m0x401f0020[0m (0x401f0000 + 0x0020)
GPT Input Capture Register 2
 (ro) (32)  [0;32mCAPT[0m  - [31:00] -  Capture Value
</lang>
#### ocotp.timing
<link=p.OCOTP.TIMING>
#### p.ocotp.data
<link=p.OCOTP.DATA>
#### p.OCOTP.SW_STICKY
<lang=dft>
 (rw)  [1;33m0x401f4050[0m (0x401f4000 + 0x0050)
Sticky bit Register
 (rw) (01)  [0;32mBLOCK_DTCP_KEY[0m  - [00:00] -  BLOCK_DTCP_KEY
 (rw) (01)  [0;32mSRK_REVOKE_LOCK[0m  - [01:01] -  SRK_REVOKE_LOCK
 (rw) (01)  [0;32mFIELD_RETURN_LOCK[0m  - [02:02] -  FIELD_RETURN_LOCK
 (rw) (01)  [0;32mBLOCK_ROM_PART[0m  - [03:03] -  BLOCK_ROM_PART
 (rw) (01)  [0;32mJTAG_BLOCK_RELEASE[0m  - [04:04] -  JTAG_BLOCK_RELEASE
 (ro) (27)  [0;32mRSVD0[0m  - [31:05] -  RSVD0
</lang>
#### p.OCOTP.SCS
<lang=dft>
 (rw)  [1;33m0x401f4060[0m (0x401f4000 + 0x0060)
Software Controllable Signals Register
 (rw) (01)  [0;32mHAB_JDE[0m  - [00:00] -  HAB_JDE
 (rw) (30)  [0;32mSPARE[0m  - [30:01] -  SPARE
 (rw) (01)  [0;32mLOCK[0m  - [31:31] -  LOCK
</lang>
#### p.OCOTP.SCS_TOG
<lang=dft>
 (rw)  [1;33m0x401f406c[0m (0x401f4000 + 0x006c)
Software Controllable Signals Register
 (rw) (01)  [0;32mHAB_JDE[0m  - [00:00] -  HAB_JDE
 (rw) (30)  [0;32mSPARE[0m  - [30:01] -  SPARE
 (rw) (01)  [0;32mLOCK[0m  - [31:31] -  LOCK
</lang>
#### p.ocotp.crc_value
<link=p.OCOTP.CRC_VALUE>
#### p.OCOTP.CFG5
<lang=dft>
 (rw)  [1;33m0x401f4460[0m (0x401f4000 + 0x0460)
Value of OTP Bank0 Word6 (Configuration and Manufacturing Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.cfg5
<link=p.OCOTP.CFG5>
#### p.OCOTP.MEM0
<lang=dft>
 (rw)  [1;33m0x401f4480[0m (0x401f4000 + 0x0480)
Value of OTP Bank1 Word0 (Memory Related Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.MEM0
<link=p.OCOTP.MEM0>
#### p.ocotp.mem4
<link=p.OCOTP.MEM4>
#### p.OCOTP.ANA1
<lang=dft>
 (rw)  [1;33m0x401f44e0[0m (0x401f4000 + 0x04e0)
Value of OTP Bank1 Word6 (General Purpose Customer Defined Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.ana1
<link=p.OCOTP.ANA1>
#### ocotp.otpmk0
<link=p.OCOTP.OTPMK0>
#### p.OCOTP.OTPMK3
<lang=dft>
 (rw)  [1;33m0x401f4530[0m (0x401f4000 + 0x0530)
Value of OTP Bank2 Word3 (OTPMK Key)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.SRK6
<lang=dft>
 (rw)  [1;33m0x401f45e0[0m (0x401f4000 + 0x05e0)
Shadow Register for OTP Bank3 Word6 (SRK Hash)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.srk6
<link=p.OCOTP.SRK6>
#### ocotp.mac2
<link=p.OCOTP.MAC2>
#### ocotp.sw_gp1
<link=p.OCOTP.SW_GP1>
#### ocotp.sw_gp20
<link=p.OCOTP.SW_GP20>
#### p.ocotp.sw_gp21
<link=p.OCOTP.SW_GP21>
#### p.ocotp.gp30
<link=p.OCOTP.GP30>
#### OCOTP.GP31
<link=p.OCOTP.GP31>
#### p.ocotp.gp41
<link=p.OCOTP.GP41>
#### ocotp.gp42
<link=p.OCOTP.GP42>
#### p.iomuxc
<link=p.IOMUXC>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_00>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_05>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_09
<lang=dft>
 (rw)  [1;33m0x401f8038[0m (0x401f8000 + 0x0038)
SW_MUX_CTL_PAD_GPIO_EMC_09 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR00 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM2_PWMB01 of instance: flexpwm2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: SAI2_RX_SYNC of instance: sai2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: FLEXCAN2_TX of instance: flexcan2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO09 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO09 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_B_SS1_B of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_09
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_16
<lang=dft>
 (rw)  [1;33m0x401f8054[0m (0x401f8000 + 0x0054)
SW_MUX_CTL_PAD_GPIO_EMC_16 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR07 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_IN21 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART3_RTS_B of instance: lpuart3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SPDIF_IN of instance: spdif
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: QTIMER3_TIMER1 of instance: qtimer3
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO16 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_B_DATA03 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_16
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_16
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_16>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_23
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_23>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_26
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_26>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_30
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_30>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_31
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_31>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_38
<lang=dft>
 (rw)  [1;33m0x401f80ac[0m (0x401f8000 + 0x00ac)
SW_MUX_CTL_PAD_GPIO_EMC_38 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DM01 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMA03 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART8_TX of instance: lpuart8
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI3_TX_BCLK of instance: sai3
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_FIELD of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO24 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_VSELECT of instance: usdhc2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_MDC of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_38
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_38
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_38>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_41
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_41>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_06
<lang=dft>
 (rw)  [1;33m0x401f80d4[0m (0x401f8000 + 0x00d4)
SW_MUX_CTL_PAD_GPIO_AD_B0_06 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: JTAG_TMS of instance: jtag_mux
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: GPT2_COMPARE1 of instance: gpt2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ENET_RX_CLK of instance: enet
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI2_RX_BCLK of instance: sai2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA07 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO06 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: XBAR1_INOUT18 of instance: xbar1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: LPSPI3_PCS3 of instance: lpspi3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_06
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_06>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_11>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_15
<lang=dft>
 (rw)  [1;33m0x401f80f8[0m (0x401f8000 + 0x00f8)
SW_MUX_CTL_PAD_GPIO_AD_B0_15 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USB_OTG2_PWR of instance: usb
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_IN25 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART1_RTS_B of instance: lpuart1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_1588_EVENT0_IN of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_HSYNC of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO15 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXCAN2_RX of instance: flexcan2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: WDOG1_WDOG_RST_B_DEB of instance: wdog1
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXCAN3_RX of instance: flexcan3/canfd
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_15
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_00>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_05>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_09
<lang=dft>
 (rw)  [1;33m0x401f8120[0m (0x401f8000 + 0x0120)
SW_MUX_CTL_PAD_GPIO_AD_B1_09 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPIA_DQS of instance: flexspi
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMA01 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXCAN1_RX of instance: flexcan1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_MCLK of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA08 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO25 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_CLK of instance: usdhc2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_COL03 of instance: kpp
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO09 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_09
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_13>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_01
<lang=dft>
 (rw)  [1;33m0x401f8140[0m (0x401f8000 + 0x0140)
SW_MUX_CTL_PAD_GPIO_B0_01 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_ENABLE of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER1_TIMER1 of instance: qtimer1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: MQS_LEFT of instance: mqs
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPSPI4_SDI of instance: lpspi4
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO01 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO01 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SEMC_CSX02 of instance: semc
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_MDIO of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_01
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_04>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_12
<lang=dft>
 (rw)  [1;33m0x401f816c[0m (0x401f8000 + 0x016c)
SW_MUX_CTL_PAD_GPIO_B0_12 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA08 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT10 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ARM_TRACE_CLK of instance: cm7_mx6rt
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_DATA01 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO12 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO12 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SRC_BOOT_CFG08 of instance: src
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TDATA00 of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_12
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_13>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_02>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_06
<lang=dft>
 (rw)  [1;33m0x401f8194[0m (0x401f8000 + 0x0194)
SW_MUX_CTL_PAD_GPIO_B1_06 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA18 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: LPSPI4_SDO of instance: lpspi4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_DATA13 of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_RX_EN of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO22 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO22 of instance: gpio2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT1_CAPTURE2 of instance: gpt1
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO22 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_06
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_10>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_11>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_15
<lang=dft>
 (rw)  [1;33m0x401f81b8[0m (0x401f8000 + 0x01b8)
SW_MUX_CTL_PAD_GPIO_B1_15 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: ENET_MDIO of instance: enet
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMA03 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_MCLK of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_IN03 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO31 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO31 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC1_RESET_B of instance: usdhc1
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TDATA01 of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO31 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_15
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_01
<lang=dft>
 (rw)  [1;33m0x401f81c0[0m (0x401f8000 + 0x01c0)
SW_MUX_CTL_PAD_GPIO_SD_B0_01 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC1_CLK of instance: usdhc1
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMB00 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPI2C3_SDA of instance: lpi2c3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT05 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI1_PCS0 of instance: lpspi1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO13 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXSPIB_SS1_B of instance: flexspi
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TX_CLK of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: ENET2_REF_CLK2 of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B0_01
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_06
<lang=dft>
 (rw)  [1;33m0x401f81ec[0m (0x401f8000 + 0x01ec)
SW_MUX_CTL_PAD_GPIO_SD_B1_06 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_RESET_B of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIA_SS0_B of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART7_CTS_B of instance: lpuart7
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_RX_DATA00 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI2_PCS0 of instance: lpspi2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO06 of instance: gpio3
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: SAI3_RX_BCLK of instance: sai3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_06
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_08>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_02>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_03>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_05
<lang=dft>
 (rw)  [1;33m0x401f8218[0m (0x401f8000 + 0x0218)
SW_PAD_CTL_PAD_GPIO_EMC_05 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_emc_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_07>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_14>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_19
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_19>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_21
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_21>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_23
<lang=dft>
 (rw)  [1;33m0x401f8260[0m (0x401f8000 + 0x0260)
SW_PAD_CTL_PAD_GPIO_EMC_23 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_32
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_32>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_39
<lang=dft>
 (rw)  [1;33m0x401f82a0[0m (0x401f8000 + 0x02a0)
SW_PAD_CTL_PAD_GPIO_EMC_39 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_01>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_02>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_03>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_04
<lang=dft>
 (rw)  [1;33m0x401f82bc[0m (0x401f8000 + 0x02bc)
SW_PAD_CTL_PAD_GPIO_AD_B0_04 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_08>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_11
<lang=dft>
 (rw)  [1;33m0x401f8318[0m (0x401f8000 + 0x0318)
SW_PAD_CTL_PAD_GPIO_AD_B1_11 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_b0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_01>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_04
<lang=dft>
 (rw)  [1;33m0x401f833c[0m (0x401f8000 + 0x033c)
SW_PAD_CTL_PAD_GPIO_B0_04 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_04>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_12>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_03>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_03>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_10>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_01>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_04
<lang=dft>
 (rw)  [1;33m0x401f83bc[0m (0x401f8000 + 0x03bc)
SW_PAD_CTL_PAD_GPIO_SD_B0_04 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_04>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_05>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_10
<lang=dft>
 (rw)  [1;33m0x401f83ec[0m (0x401f8000 + 0x03ec)
SW_PAD_CTL_PAD_GPIO_SD_B1_10 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_11>
#### IOMUXC.CSI_DATA07_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA07_SELECT_INPUT>
#### p.IOMUXC.CSI_DATA09_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f841c[0m (0x401f8000 + 0x041c)
CSI_DATA09_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_08_ALT4 :
         Selecting Pad: GPIO_AD_B1_08 for Mode: ALT4
      0x1 - GPIO_AD_B0_04_ALT4 :
         Selecting Pad: GPIO_AD_B0_04 for Mode: ALT4
</lang>
#### p.iomuxc.enet1_rxdata_select_input
<link=p.IOMUXC.ENET1_RXDATA_SELECT_INPUT>
#### iomuxc.enet_rxerr_select_input
<link=p.IOMUXC.ENET_RXERR_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM1_PWMB3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8464[0m (0x401f8000 + 0x0464)
FLEXPWM1_PWMB3_SELECT_INPUT DAISY Register
 (rw) (03)  [0;32mDAISY[0m  - [02:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_01_ALT2 :
         Selecting Pad: GPIO_SD_B1_01 for Mode: ALT2
      0x1 - GPIO_EMC_13_ALT4 :
         Selecting Pad: GPIO_EMC_13 for Mode: ALT4
      0x2 - GPIO_EMC_39_ALT1 :
         Selecting Pad: GPIO_EMC_39 for Mode: ALT1
      0x3 - GPIO_AD_B0_11_ALT1 :
         Selecting Pad: GPIO_AD_B0_11 for Mode: ALT1
      0x4 - GPIO_B1_01_ALT6 :
         Selecting Pad: GPIO_B1_01 for Mode: ALT6
</lang>
#### IOMUXC.FLEXPWM1_PWMB3_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMB3_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM1_PWMB1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f846c[0m (0x401f8000 + 0x046c)
FLEXPWM1_PWMB1_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_26_ALT1 :
         Selecting Pad: GPIO_EMC_26 for Mode: ALT1
      0x1 - GPIO_SD_B0_03_ALT1 :
         Selecting Pad: GPIO_SD_B0_03 for Mode: ALT1
</lang>
#### IOMUXC.FLEXPWM1_PWMB1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMB1_SELECT_INPUT>
#### iomuxc.flexpwm2_pwma0_select_input
<link=p.IOMUXC.FLEXPWM2_PWMA0_SELECT_INPUT>
#### p.iomuxc.flexpwm2_pwmb2_select_input
<link=p.IOMUXC.FLEXPWM2_PWMB2_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM4_PWMA3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84a0[0m (0x401f8000 + 0x04a0)
FLEXPWM4_PWMA3_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_17_ALT1 :
         Selecting Pad: GPIO_EMC_17 for Mode: ALT1
      0x1 - GPIO_B1_15_ALT1 :
         Selecting Pad: GPIO_B1_15 for Mode: ALT1
</lang>
#### IOMUXC.FLEXSPIA_DATA0_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_DATA0_SELECT_INPUT>
#### p.IOMUXC.FLEXSPIA_DATA2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84b0[0m (0x401f8000 + 0x04b0)
FLEXSPIA_DATA2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_10_ALT1 :
         Selecting Pad: GPIO_SD_B1_10 for Mode: ALT1
      0x1 - GPIO_AD_B1_11_ALT0 :
         Selecting Pad: GPIO_AD_B1_11 for Mode: ALT0
</lang>
#### iomuxc.lpspi1_sdi_select_input
<link=p.IOMUXC.LPSPI1_SDI_SELECT_INPUT>
#### p.iomuxc.lpspi1_sdo_select_input
<link=p.IOMUXC.LPSPI1_SDO_SELECT_INPUT>
#### p.iomuxc.lpspi4_pcs0_select_input
<link=p.IOMUXC.LPSPI4_PCS0_SELECT_INPUT>
#### IOMUXC.LPSPI4_SDI_SELECT_INPUT
<link=p.IOMUXC.LPSPI4_SDI_SELECT_INPUT>
#### p.IOMUXC.LPUART3_CTS_B_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8534[0m (0x401f8000 + 0x0534)
LPUART3_CTS_B_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_15_ALT2 :
         Selecting Pad: GPIO_EMC_15 for Mode: ALT2
      0x1 - GPIO_AD_B1_04_ALT2 :
         Selecting Pad: GPIO_AD_B1_04 for Mode: ALT2
</lang>
#### p.IOMUXC.LPUART7_TX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f855c[0m (0x401f8000 + 0x055c)
LPUART7_TX_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_08_ALT2 :
         Selecting Pad: GPIO_SD_B1_08 for Mode: ALT2
      0x1 - GPIO_EMC_31_ALT2 :
         Selecting Pad:GPIO_EMC_31 for Mode: ALT2
</lang>
#### iomuxc.qtimer2_timer1_select_input
<link=p.IOMUXC.QTIMER2_TIMER1_SELECT_INPUT>
#### p.IOMUXC.QTIMER2_TIMER3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8578[0m (0x401f8000 + 0x0578)
QTIMER2_TIMER3_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_22_ALT4 :
         Selecting Pad: GPIO_EMC_22 for Mode: ALT4
      0x1 - GPIO_B1_09_ALT1 :
         Selecting Pad: GPIO_B1_09 for Mode: ALT1
</lang>
#### iomuxc.qtimer3_timer3_select_input
<link=p.IOMUXC.QTIMER3_TIMER3_SELECT_INPUT>
#### iomuxc.sai1_tx_bclk_select_input
<link=p.IOMUXC.SAI1_TX_BCLK_SELECT_INPUT>
#### IOMUXC.SAI2_TX_SYNC_SELECT_INPUT
<link=p.IOMUXC.SAI2_TX_SYNC_SELECT_INPUT>
#### p.iomuxc.usb_otg2_oc_select_input
<link=p.IOMUXC.USB_OTG2_OC_SELECT_INPUT>
#### p.iomuxc.usdhc1_cd_b_select_input
<link=p.IOMUXC.USDHC1_CD_B_SELECT_INPUT>
#### p.iomuxc.usdhc2_clk_select_input
<link=p.IOMUXC.USDHC2_CLK_SELECT_INPUT>
#### IOMUXC.XBAR1_IN19_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN19_SELECT_INPUT>
#### p.iomuxc.xbar1_in21_select_input
<link=p.IOMUXC.XBAR1_IN21_SELECT_INPUT>
#### iomuxc.xbar1_in21_select_input
<link=p.IOMUXC.XBAR1_IN21_SELECT_INPUT>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_05>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_08>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_11>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_00
<lang=dft>
 (rw)  [1;33m0x401f8694[0m (0x401f8000 + 0x0694)
SW_MUX_CTL_PAD_GPIO_SPI_B1_00 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_DQS of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B1_00
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_00>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_02>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_05>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_08>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_12>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_00>
#### IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1>
#### p.IOMUXC.ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8720[0m (0x401f8000 + 0x0720)
ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_34_ALT8 :
         Selecting Pad: GPIO_EMC_34 for Mode: ALT8
      0x1 - GPIO_SD_B0_02_ALT8 :
         Selecting Pad: GPIO_SD_B0_02 for Mode: ALT8
      0x2 - GPIO_B1_00_ALT8 :
         Selecting Pad: GPIO_B1_00 for Mode: ALT8
</lang>
#### IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT>
#### p.iomuxc.flexspi2_ipp_ind_io_fb_bit0_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT>
#### p.iomuxc.sai3_ipg_clk_sai_mclk_select_input_2
<link=p.IOMUXC.SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2>
#### KPP.KDDR
<link=p.KPP.KDDR>
#### flexspi.mcr0
<link=p.FLEXSPI.MCR0>
#### p.flexspi.mcr2
<link=p.FLEXSPI.MCR2>
#### p.FLEXSPI.INTEN
<lang=dft>
 (rw)  [1;33m0x402a8010[0m (0x402a8000 + 0x0010)
Interrupt Enable Register
 (rw) (01)  [0;32mIPCMDDONEEN[0m  - [00:00] -  IP triggered Command Sequences Execution finished interrupt enable.
 (rw) (01)  [0;32mIPCMDGEEN[0m  - [01:01] -  IP triggered Command Sequences Grant Timeout interrupt enable.
 (rw) (01)  [0;32mAHBCMDGEEN[0m  - [02:02] -  AHB triggered Command Sequences Grant Timeout interrupt enable.
 (rw) (01)  [0;32mIPCMDERREN[0m  - [03:03] -  IP triggered Command Sequences Error Detected interrupt enable.
 (rw) (01)  [0;32mAHBCMDERREN[0m  - [04:04] -  AHB triggered Command Sequences Error Detected interrupt enable.
 (rw) (01)  [0;32mIPRXWAEN[0m  - [05:05] -  IP RX FIFO WaterMark available interrupt enable.
 (rw) (01)  [0;32mIPTXWEEN[0m  - [06:06] -  IP TX FIFO WaterMark empty interrupt enable.
 (rw) (01)  [0;32mSCKSTOPBYRDEN[0m  - [08:08] -  SCK is stopped during command sequence because Async RX FIFO full interrupt ena
 ble.
 (rw) (01)  [0;32mSCKSTOPBYWREN[0m  - [09:09] -  SCK is stopped during command sequence because Async TX FIFO empty interrupt en
 able.
 (rw) (01)  [0;32mAHBBUSTIMEOUTEN[0m  - [10:10] -  AHB Bus timeout interrupt.Refer Interrupts chapter for more details.
 (rw) (01)  [0;32mSEQTIMEOUTEN[0m  - [11:11] -  Sequence execution timeout interrupt enable.Refer Interrupts chapter for more d
 etails.
</lang>
#### p.flexspi.lutkey
<link=p.FLEXSPI.LUTKEY>
#### FLEXSPI.FLSHA1CR0
<link=p.FLEXSPI.FLSHA1CR0>
#### flexspi.flsha2cr0
<link=p.FLEXSPI.FLSHA2CR0>
#### FLEXSPI.FLSHA2CR0
<link=p.FLEXSPI.FLSHA2CR0>
#### FLEXSPI.FLSHCR1A2
<link=p.FLEXSPI.FLSHCR1A2>
#### p.FLEXSPI.FLSHCR1B1
<lang=dft>
 (rw)  [1;33m0x402a8078[0m (0x402a8000 + 0x0078)
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
#### flexspi.dllcrb
<link=p.FLEXSPI.DLLCRB>
#### FLEXSPI.STS1
<link=p.FLEXSPI.STS1>
#### p.flexspi.iprxfsts
<link=p.FLEXSPI.IPRXFSTS>
#### p.flexspi.rfdr[14]
<link=p.FLEXSPI.RFDR[14]>
#### p.flexspi.rfdr[20]
<link=p.FLEXSPI.RFDR[20]>
#### flexspi.rfdr[23]
<link=p.FLEXSPI.RFDR[23]>
#### p.flexspi.tfdr[2]
<link=p.FLEXSPI.TFDR[2]>
#### flexspi.tfdr[3]
<link=p.FLEXSPI.TFDR[3]>
#### p.flexspi.tfdr[12]
<link=p.FLEXSPI.TFDR[12]>
#### FLEXSPI.TFDR[19]
<link=p.FLEXSPI.TFDR[19]>
#### p.FLEXSPI.TFDR[25]
<lang=dft>
 (wo)  [1;33m0x402a81e4[0m (0x402a8000 + 0x01e4)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI.TFDR[26]
<link=p.FLEXSPI.TFDR[26]>
#### p.flexspi.tfdr[28]
<link=p.FLEXSPI.TFDR[28]>
#### FLEXSPI.LUT[6]
<link=p.FLEXSPI.LUT[6]>
#### p.flexspi.lut[8]
<link=p.FLEXSPI.LUT[8]>
#### flexspi.lut[14]
<link=p.FLEXSPI.LUT[14]>
#### flexspi.lut[19]
<link=p.FLEXSPI.LUT[19]>
#### p.flexspi.lut[30]
<link=p.FLEXSPI.LUT[30]>
#### FLEXSPI.LUT[33]
<link=p.FLEXSPI.LUT[33]>
#### FLEXSPI.LUT[34]
<link=p.FLEXSPI.LUT[34]>
#### p.flexspi.lut[41]
<link=p.FLEXSPI.LUT[41]>
#### FLEXSPI.LUT[41]
<link=p.FLEXSPI.LUT[41]>
#### flexspi.lut[44]
<link=p.FLEXSPI.LUT[44]>
#### p.FLEXSPI.LUT[45]
<lang=dft>
 (rw)  [1;33m0x402a82b4[0m (0x402a8000 + 0x02b4)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[51]
<link=p.FLEXSPI.LUT[51]>
#### p.flexspi.lut[52]
<link=p.FLEXSPI.LUT[52]>
#### p.FLEXSPI.LUT[55]
<lang=dft>
 (rw)  [1;33m0x402a82dc[0m (0x402a8000 + 0x02dc)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.MCR1
<link=p.FLEXSPI2.MCR1>
#### FLEXSPI2.INTEN
<link=p.FLEXSPI2.INTEN>
#### p.flexspi2.lutcr
<link=p.FLEXSPI2.LUTCR>
#### flexspi2.ahbrxbuf2cr0
<link=p.FLEXSPI2.AHBRXBUF2CR0>
#### p.flexspi2.flshb1cr0
<link=p.FLEXSPI2.FLSHB1CR0>
#### flexspi2.flshb1cr0
<link=p.FLEXSPI2.FLSHB1CR0>
#### p.flexspi2.flshcr1a1
<link=p.FLEXSPI2.FLSHCR1A1>
#### flexspi2.flshcr1a2
<link=p.FLEXSPI2.FLSHCR1A2>
#### p.flexspi2.flshcr2b2
<link=p.FLEXSPI2.FLSHCR2B2>
#### flexspi2.flshcr4
<link=p.FLEXSPI2.FLSHCR4>
#### FLEXSPI2.IPTXFCR
<link=p.FLEXSPI2.IPTXFCR>
#### p.FLEXSPI2.STS2
<lang=dft>
 (ro)  [1;33m0x402a40e8[0m (0x402a4000 + 0x00e8)
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
#### FLEXSPI2.RFDR[2]
<link=p.FLEXSPI2.RFDR[2]>
#### FLEXSPI2.RFDR[5]
<link=p.FLEXSPI2.RFDR[5]>
#### p.flexspi2.rfdr[6]
<link=p.FLEXSPI2.RFDR[6]>
#### FLEXSPI2.RFDR[8]
<link=p.FLEXSPI2.RFDR[8]>
#### p.FLEXSPI2.RFDR[9]
<lang=dft>
 (ro)  [1;33m0x402a4124[0m (0x402a4000 + 0x0124)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.rfdr[10]
<link=p.FLEXSPI2.RFDR[10]>
#### FLEXSPI2.RFDR[19]
<link=p.FLEXSPI2.RFDR[19]>
#### flexspi2.rfdr[21]
<link=p.FLEXSPI2.RFDR[21]>
#### flexspi2.tfdr[5]
<link=p.FLEXSPI2.TFDR[5]>
#### FLEXSPI2.TFDR[6]
<link=p.FLEXSPI2.TFDR[6]>
#### p.flexspi2.tfdr[7]
<link=p.FLEXSPI2.TFDR[7]>
#### p.FLEXSPI2.TFDR[8]
<lang=dft>
 (wo)  [1;33m0x402a41a0[0m (0x402a4000 + 0x01a0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi2.tfdr[10]
<link=p.FLEXSPI2.TFDR[10]>
#### FLEXSPI2.TFDR[14]
<link=p.FLEXSPI2.TFDR[14]>
#### p.flexspi2.tfdr[19]
<link=p.FLEXSPI2.TFDR[19]>
#### p.FLEXSPI2.TFDR[20]
<lang=dft>
 (wo)  [1;33m0x402a41d0[0m (0x402a4000 + 0x01d0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI2.TFDR[27]
<lang=dft>
 (wo)  [1;33m0x402a41ec[0m (0x402a4000 + 0x01ec)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi2.tfdr[28]
<link=p.FLEXSPI2.TFDR[28]>
#### flexspi2.lut[4]
<link=p.FLEXSPI2.LUT[4]>
#### FLEXSPI2.LUT[10]
<link=p.FLEXSPI2.LUT[10]>
#### p.flexspi2.lut[12]
<link=p.FLEXSPI2.LUT[12]>
#### p.flexspi2.lut[23]
<link=p.FLEXSPI2.LUT[23]>
#### p.FLEXSPI2.LUT[28]
<lang=dft>
 (rw)  [1;33m0x402a4270[0m (0x402a4000 + 0x0270)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[34]
<lang=dft>
 (rw)  [1;33m0x402a4288[0m (0x402a4000 + 0x0288)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[41]
<link=p.FLEXSPI2.LUT[41]>
#### FLEXSPI2.LUT[43]
<link=p.FLEXSPI2.LUT[43]>
#### p.FLEXSPI2.LUT[44]
<lang=dft>
 (rw)  [1;33m0x402a42b0[0m (0x402a4000 + 0x02b0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[46]
<link=p.FLEXSPI2.LUT[46]>
#### flexspi2.lut[52]
<link=p.FLEXSPI2.LUT[52]>
#### p.FLEXSPI2.LUT[53]
<lang=dft>
 (rw)  [1;33m0x402a42d4[0m (0x402a4000 + 0x02d4)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[59]
<lang=dft>
 (rw)  [1;33m0x402a42ec[0m (0x402a4000 + 0x02ec)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.pxp.stat
<link=p.PXP.STAT>
#### pxp.stat
<link=p.PXP.STAT>
#### PXP.STAT_TOG
<link=p.PXP.STAT_TOG>
#### pxp.out_ctrl
<link=p.PXP.OUT_CTRL>
#### p.pxp.out_ps_ulc
<link=p.PXP.OUT_PS_ULC>
#### p.pxp.ps_ctrl
<link=p.PXP.PS_CTRL>
#### p.pxp.ps_background
<link=p.PXP.PS_BACKGROUND>
#### p.pxp.ps_clrkeyhigh
<link=p.PXP.PS_CLRKEYHIGH>
#### p.lcdif.ctrl
<link=p.LCDIF.CTRL>
#### LCDIF.CTRL1_SET
<link=p.LCDIF.CTRL1_SET>
#### LCDIF.CTRL1_CLR
<link=p.LCDIF.CTRL1_CLR>
#### LCDIF.CTRL1_TOG
<link=p.LCDIF.CTRL1_TOG>
#### p.LCDIF.CTRL2
<lang=dft>
 (rw)  [1;33m0x402b8020[0m (0x402b8000 + 0x0020)
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
#### lcdif.ctrl2
<link=p.LCDIF.CTRL2>
#### lcdif.vdctrl3
<link=p.LCDIF.VDCTRL3>
#### p.LCDIF.PIGEONCTRL0_CLR
<lang=dft>
 (rw)  [1;33m0x402b8388[0m (0x402b8000 + 0x0388)
LCDIF Pigeon Mode Control0 Register
 (rw) (12)  [0;32mFD_PERIOD[0m  - [11:00] -  Period of line counter during FD phase
 (rw) (12)  [0;32mLD_PERIOD[0m  - [27:16] -  Period of pclk counter during LD phase
</lang>
#### p.lcdif.pigeonctrl0_clr
<link=p.LCDIF.PIGEONCTRL0_CLR>
#### p.LCDIF.PIGEONCTRL0_TOG
<lang=dft>
 (rw)  [1;33m0x402b838c[0m (0x402b8000 + 0x038c)
LCDIF Pigeon Mode Control0 Register
 (rw) (12)  [0;32mFD_PERIOD[0m  - [11:00] -  Period of line counter during FD phase
 (rw) (12)  [0;32mLD_PERIOD[0m  - [27:16] -  Period of pclk counter during LD phase
</lang>
#### p.LCDIF.PIGEONCTRL2
<lang=dft>
 (rw)  [1;33m0x402b83a0[0m (0x402b8000 + 0x03a0)
LCDIF Pigeon Mode Control2 Register
 (rw) (01)  [0;32mPIGEON_DATA_EN[0m  - [00:00] -  Pigeon mode data enable
 (rw) (01)  [0;32mPIGEON_CLK_GATE[0m  - [01:01] -  Pigeon mode dot clock gate enable
</lang>
#### p.lcdif.pigeon_7_1
<link=p.LCDIF.PIGEON_7_1>
#### p.LCDIF.PIGEON_8_0
<lang=dft>
 (rw)  [1;33m0x402b8a00[0m (0x402b8000 + 0x0a00)
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
#### p.lcdif.pigeon_8_0
<link=p.LCDIF.PIGEON_8_0>
#### LCDIF.PIGEON_9_0
<link=p.LCDIF.PIGEON_9_0>
#### p.lcdif.pigeon_11_2
<link=p.LCDIF.PIGEON_11_2>
#### p.csi.csirxcnt
<link=p.CSI.CSIRXCNT>
#### p.USDHC1.BLK_ATT
<lang=dft>
 (rw)  [1;33m0x402c0004[0m (0x402c0000 + 0x0004)
Block Attributes
 (rw) (13)  [0;32mBLKSIZE[0m  - [12:00] -  Block Size
      0 - BLKSIZE_0 :
         No data transfer
      0x1 - BLKSIZE_1 :
         1 Byte
      0x2 - BLKSIZE_2 :
         2 Bytes
      0x3 - BLKSIZE_3 :
         3 Bytes
      0x4 - BLKSIZE_4 :
         4 Bytes
      0x1FF - BLKSIZE_511 :
         511 Bytes
      0x200 - BLKSIZE_512 :
         512 Bytes
      0x800 - BLKSIZE_2048 :
         2048 Bytes
      0x1000 - BLKSIZE_4096 :
         4096 Bytes
 (rw) (16)  [0;32mBLKCNT[0m  - [31:16] -  Block Count
      0 - BLKCNT_0 :
         Stop Count
      0x1 - BLKCNT_1 :
         1 block
      0x2 - BLKCNT_2 :
         2 blocks
      0xFFFF - BLKCNT_65535 :
         65535 blocks
</lang>
#### USDHC1.CMD_ARG
<link=p.USDHC1.CMD_ARG>
#### USDHC1.WTMK_LVL
<link=p.USDHC1.WTMK_LVL>
#### USDHC1.VEND_SPEC
<link=p.USDHC1.VEND_SPEC>
#### USDHC1.MMC_BOOT
<link=p.USDHC1.MMC_BOOT>
#### usdhc1.vend_spec2
<link=p.USDHC1.VEND_SPEC2>
#### p.USDHC2.BLK_ATT
<lang=dft>
 (rw)  [1;33m0x402c4004[0m (0x402c4000 + 0x0004)
Block Attributes
 (rw) (13)  [0;32mBLKSIZE[0m  - [12:00] -  Block Size
      0 - BLKSIZE_0 :
         No data transfer
      0x1 - BLKSIZE_1 :
         1 Byte
      0x2 - BLKSIZE_2 :
         2 Bytes
      0x3 - BLKSIZE_3 :
         3 Bytes
      0x4 - BLKSIZE_4 :
         4 Bytes
      0x1FF - BLKSIZE_511 :
         511 Bytes
      0x200 - BLKSIZE_512 :
         512 Bytes
      0x800 - BLKSIZE_2048 :
         2048 Bytes
      0x1000 - BLKSIZE_4096 :
         4096 Bytes
 (rw) (16)  [0;32mBLKCNT[0m  - [31:16] -  Block Count
      0 - BLKCNT_0 :
         Stop Count
      0x1 - BLKCNT_1 :
         1 block
      0x2 - BLKCNT_2 :
         2 blocks
      0xFFFF - BLKCNT_65535 :
         65535 blocks
</lang>
#### p.usdhc2.cmd_rsp0
<link=p.USDHC2.CMD_RSP0>
#### p.USDHC2.CMD_RSP1
<lang=dft>
 (ro)  [1;33m0x402c4014[0m (0x402c4000 + 0x0014)
Command Response1
 (ro) (32)  [0;32mCMDRSP1[0m  - [31:00] -  Command Response 1
</lang>
#### USDHC2.INT_STATUS
<link=p.USDHC2.INT_STATUS>
#### p.usdhc2.int_signal_en
<link=p.USDHC2.INT_SIGNAL_EN>
#### usdhc2.autocmd12_err_status
<link=p.USDHC2.AUTOCMD12_ERR_STATUS>
#### p.usdhc2.adma_err_status
<link=p.USDHC2.ADMA_ERR_STATUS>
#### p.usdhc2.vend_spec
<link=p.USDHC2.VEND_SPEC>
#### usdhc2.tuning_ctrl
<link=p.USDHC2.TUNING_CTRL>
#### ENET.MMFR
<link=p.ENET.MMFR>
#### ENET.MSCR
<link=p.ENET.MSCR>
#### ENET.PALR
<link=p.ENET.PALR>
#### p.enet.tfwr
<link=p.ENET.TFWR>
#### p.enet.tsem
<link=p.ENET.TSEM>
#### enet.taem
<link=p.ENET.TAEM>
#### p.enet.tafl
<link=p.ENET.TAFL>
#### p.enet.tipg
<link=p.ENET.TIPG>
#### p.enet.ftrl
<link=p.ENET.FTRL>
#### p.ENET.RMON_T_DROP
<lang=dft>
 (ro)  [1;33m0x402d8200[0m (0x402d8000 + 0x0200)
Reserved Statistic Register
</lang>
#### p.enet.rmon_t_mc_pkt
<link=p.ENET.RMON_T_MC_PKT>
#### ENET.RMON_T_CRC_ALIGN
<link=p.ENET.RMON_T_CRC_ALIGN>
#### enet.rmon_t_undersize
<link=p.ENET.RMON_T_UNDERSIZE>
#### enet.rmon_t_oversize
<link=p.ENET.RMON_T_OVERSIZE>
#### p.ENET.RMON_T_JAB
<lang=dft>
 (ro)  [1;33m0x402d8220[0m (0x402d8000 + 0x0220)
Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of transmit packets greater than MAX_FL bytes and bad CRC
</lang>
#### enet.rmon_t_jab
<link=p.ENET.RMON_T_JAB>
#### enet.rmon_t_p256to511
<link=p.ENET.RMON_T_P256TO511>
#### ENET.RMON_T_P1024TO2047
<link=p.ENET.RMON_T_P1024TO2047>
#### p.enet.rmon_t_octets
<link=p.ENET.RMON_T_OCTETS>
#### enet.ieee_t_macerr
<link=p.ENET.IEEE_T_MACERR>
#### p.ENET.IEEE_T_FDXFC
<lang=dft>
 (ro)  [1;33m0x402d8270[0m (0x402d8000 + 0x0270)
Flow Control Pause Frames Transmitted Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of flow-control pause frames transmitted
</lang>
#### p.ENET.IEEE_T_OCTETS_OK
<lang=dft>
 (ro)  [1;33m0x402d8274[0m (0x402d8000 + 0x0274)
Octet Count for Frames Transmitted w/o Error Statistic Register
 (ro) (32)  [0;32mCOUNT[0m  - [31:00] -  Octet count for frames transmitted without error Counts total octets (includes 
 header and FCS fields).
</lang>
#### p.ENET.RMON_R_PACKETS
<lang=dft>
 (ro)  [1;33m0x402d8284[0m (0x402d8000 + 0x0284)
Rx Packet Count Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of packets received
</lang>
#### enet.rmon_r_bc_pkt
<link=p.ENET.RMON_R_BC_PKT>
#### p.ENET.IEEE_R_CRC
<lang=dft>
 (ro)  [1;33m0x402d82d0[0m (0x402d8000 + 0x02d0)
Frames Received with CRC Error Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames received with CRC error
</lang>
#### ENET.IEEE_R_FDXFC
<link=p.ENET.IEEE_R_FDXFC>
#### p.enet.ieee_r_octets_ok
<link=p.ENET.IEEE_R_OCTETS_OK>
#### enet.ieee_r_octets_ok
<link=p.ENET.IEEE_R_OCTETS_OK>
#### enet.tcsr2
<link=p.ENET.TCSR2>
#### enet2.rdar
<link=p.ENET2.RDAR>
#### enet2.tdar
<link=p.ENET2.TDAR>
#### ENET2.ECR
<link=p.ENET2.ECR>
#### ENET2.MIBC
<link=p.ENET2.MIBC>
#### p.ENET2.GAUR
<lang=dft>
 (rw)  [1;33m0x402d4120[0m (0x402d4000 + 0x0120)
Descriptor Group Upper Address Register
 (rw) (32)  [0;32mGADDR1[0m  - [31:00] -  Contains the upper 32 bits of the 64-bit hash table used in the address recogni
 tion process for receive frames with a multicast address
</lang>
#### enet2.rdsr
<link=p.ENET2.RDSR>
#### ENET2.TSEM
<link=p.ENET2.TSEM>
#### p.enet2.taem
<link=p.ENET2.TAEM>
#### ENET2.FTRL
<link=p.ENET2.FTRL>
#### p.enet2.rmon_t_drop
<link=p.ENET2.RMON_T_DROP>
#### p.ENET2.RMON_T_PACKETS
<lang=dft>
 (ro)  [1;33m0x402d4204[0m (0x402d4000 + 0x0204)
Tx Packet Count Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Packet count
</lang>
#### enet2.rmon_t_mc_pkt
<link=p.ENET2.RMON_T_MC_PKT>
#### p.enet2.rmon_t_p65to127
<link=p.ENET2.RMON_T_P65TO127>
#### ENET2.RMON_T_P256TO511
<link=p.ENET2.RMON_T_P256TO511>
#### ENET2.RMON_T_P1024TO2047
<link=p.ENET2.RMON_T_P1024TO2047>
#### p.enet2.rmon_t_p_gte2048
<link=p.ENET2.RMON_T_P_GTE2048>
#### ENET2.RMON_T_P_GTE2048
<link=p.ENET2.RMON_T_P_GTE2048>
#### p.enet2.ieee_t_drop
<link=p.ENET2.IEEE_T_DROP>
#### p.ENET2.IEEE_T_MCOL
<lang=dft>
 (ro)  [1;33m0x402d4254[0m (0x402d4000 + 0x0254)
Frames Transmitted with Multiple Collisions Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with multiple collisions
</lang>
#### p.enet2.ieee_t_mcol
<link=p.ENET2.IEEE_T_MCOL>
#### ENET2.IEEE_T_OCTETS_OK
<link=p.ENET2.IEEE_T_OCTETS_OK>
#### p.ENET2.RMON_R_MC_PKT
<lang=dft>
 (ro)  [1;33m0x402d428c[0m (0x402d4000 + 0x028c)
Rx Multicast Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive multicast packets
</lang>
#### p.ENET2.RMON_R_UNDERSIZE
<lang=dft>
 (ro)  [1;33m0x402d4294[0m (0x402d4000 + 0x0294)
Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive packets with less than 64 bytes and good CRC
</lang>
#### enet2.rmon_r_p256to511
<link=p.ENET2.RMON_R_P256TO511>
#### p.enet2.rmon_r_octets
<link=p.ENET2.RMON_R_OCTETS>
#### ENET2.RMON_R_OCTETS
<link=p.ENET2.RMON_R_OCTETS>
#### p.enet2.atvr
<link=p.ENET2.ATVR>
#### p.enet2.atper
<link=p.ENET2.ATPER>
#### enet2.atinc
<link=p.ENET2.ATINC>
#### p.ENET2.ATSTMP
<lang=dft>
 (ro)  [1;33m0x402d4418[0m (0x402d4000 + 0x0418)
Timestamp of Last Transmitted Frame
 (ro) (32)  [0;32mTIMESTAMP[0m  - [31:00] -  Timestamp of the last frame transmitted by the core that had TxBD[TS] set
</lang>
#### p.USB1
<lang=dft>
base: 0x402e0000
ASYNCLISTADDR   BURSTSIZE       CAPLENGTH       CONFIGFLAG      
DCCPARAMS       DCIVERSION      DEVICEADDR      ENDPTCOMPLETE   
ENDPTCTRL0      ENDPTCTRL1      ENDPTCTRL2      ENDPTCTRL3      
ENDPTCTRL4      ENDPTCTRL5      ENDPTCTRL6      ENDPTCTRL7      
ENDPTFLUSH      ENDPTLISTADDR   ENDPTNAK        ENDPTNAKEN      
ENDPTPRIME      ENDPTSETUPSTAT  ENDPTSTAT       FRINDEX         
GPTIMER0CTRL    GPTIMER0LD      GPTIMER1CTRL    GPTIMER1LD      
HCCPARAMS       HCIVERSION      HCSPARAMS       HWDEVICE        
HWGENERAL       HWHOST          HWRXBUF         HWTXBUF         
ID              OTGSC           PERIODICLISTBASE  PORTSC1         
SBUSCFG         TXFILLTUNING    USBCMD          USBINTR         
USBMODE         USBSTS          
输入 p.USB1.{reg_name} 以查看寄存器的详细信息
type p.USB1.{reg_name} to check details of registers
</lang>
#### usb1.id
<link=p.USB1.ID>
#### p.usb1.hwgeneral
<link=p.USB1.HWGENERAL>
#### p.USB1.GPTIMER1CTRL
<lang=dft>
 (rw)  [1;33m0x402e008c[0m (0x402e0000 + 0x008c)
General Purpose Timer #1 Controller
 (rw) (24)  [0;32mGPTCNT[0m  - [23:00] -  General Purpose Timer Counter. This field is the count value of the countdown t
 imer.
 (rw) (01)  [0;32mGPTMODE[0m  - [24:24] -  General Purpose Timer Mode In one shot mode, the timer will count down to zero,
  generate an interrupt, and stop until the counter is reset by software
      0 - GPTMODE_0 :
         One Shot Mode
      0x1 - GPTMODE_1 :
         Repeat Mode
 (rw) (01)  [0;32mGPTRST[0m  - [30:30] -  General Purpose Timer Reset
      0 - GPTRST_0 :
         No action
      0x1 - GPTRST_1 :
         Load counter value from GPTLD bits in USB_n_GPTIMER0LD
 (rw) (01)  [0;32mGPTRUN[0m  - [31:31] -  General Purpose Timer Run GPTCNT bits are not effected when setting or clearing
  this bit.
      0 - GPTRUN_0 :
         Stop counting
      0x1 - GPTRUN_1 :
         Run
</lang>
#### USB1.HCSPARAMS
<link=p.USB1.HCSPARAMS>
#### USB1.DCIVERSION
<link=p.USB1.DCIVERSION>
#### p.USB1.USBSTS
<lang=dft>
 (rw)  [1;33m0x402e0144[0m (0x402e0000 + 0x0144)
USB Status Register
 (rw) (01)  [0;32mUI[0m  - [00:00] -  USB Interrupt (USBINT) - R/WC
 (rw) (01)  [0;32mUEI[0m  - [01:01] -  USB Error Interrupt (USBERRINT) - R/WC
 (rw) (01)  [0;32mPCI[0m  - [02:02] -  Port Change Detect - R/WC
 (rw) (01)  [0;32mFRI[0m  - [03:03] -  Frame List Rollover - R/WC
 (rw) (01)  [0;32mSEI[0m  - [04:04] -  System Error- R/WC
 (rw) (01)  [0;32mAAI[0m  - [05:05] -  Interrupt on Async Advance - R/WC
 (rw) (01)  [0;32mURI[0m  - [06:06] -  USB Reset Received - R/WC
 (rw) (01)  [0;32mSRI[0m  - [07:07] -  SOF Received - R/WC
 (rw) (01)  [0;32mSLI[0m  - [08:08] -  DCSuspend - R/WC
 (rw) (01)  [0;32mULPII[0m  - [10:10] -  ULPI Interrupt - R/WC
 (rw) (01)  [0;32mHCH[0m  - [12:12] -  HCHaIted - Read Only
 (rw) (01)  [0;32mRCL[0m  - [13:13] -  Reclamation - Read Only
 (rw) (01)  [0;32mPS[0m  - [14:14] -  Periodic Schedule Status - Read Only
 (rw) (01)  [0;32mAS[0m  - [15:15] -  Asynchronous Schedule Status - Read Only
 (ro) (01)  [0;32mNAKI[0m  - [16:16] -  NAK Interrupt Bit--RO
 (rw) (01)  [0;32mTI0[0m  - [24:24] -  General Purpose Timer Interrupt 0(GPTINT0)--R/WC
 (rw) (01)  [0;32mTI1[0m  - [25:25] -  General Purpose Timer Interrupt 1(GPTINT1)--R/WC
</lang>
#### usb1.endptlistaddr
<link=p.USB1.ENDPTLISTADDR>
#### USB1.ENDPTNAK
<link=p.USB1.ENDPTNAK>
#### usb2.gptimer1ld
<link=p.USB2.GPTIMER1LD>
#### USB2.GPTIMER1CTRL
<link=p.USB2.GPTIMER1CTRL>
#### p.usb2.sbuscfg
<link=p.USB2.SBUSCFG>
#### p.USB2.HCSPARAMS
<lang=dft>
 (ro)  [1;33m0x402e0304[0m (0x402e0200 + 0x0104)
Host Controller Structural Parameters
 (ro) (04)  [0;32mN_PORTS[0m  - [03:00] -  Number of downstream ports
 (ro) (01)  [0;32mPPC[0m  - [04:04] -  Port Power Control This field indicates whether the host controller implementat
 ion includes port power control
 (ro) (04)  [0;32mN_PCC[0m  - [11:08] -  Number of Ports per Companion Controller This field indicates the number of por
 ts supported per internal Companion Controller
 (ro) (04)  [0;32mN_CC[0m  - [15:12] -  Number of Companion Controller (N_CC)
      0 - N_CC_0 :
         There is no internal Companion Controller and port-ownership hand-off i
         s not supported.
      0x1 - N_CC_1 :
         There are internal companion controller(s) and port-ownership hand-offs
          is supported.
 (ro) (01)  [0;32mPI[0m  - [16:16] -  Port Indicators (P INDICATOR) This bit indicates whether the ports support port
  indicator control
 (ro) (04)  [0;32mN_PTT[0m  - [23:20] -  Number of Ports per Transaction Translator (N_PTT)
 (ro) (04)  [0;32mN_TT[0m  - [27:24] -  Number of Transaction Translators (N_TT)
</lang>
#### p.usb2.hccparams
<link=p.USB2.HCCPARAMS>
#### p.usb2.dciversion
<link=p.USB2.DCIVERSION>
#### p.USB2.USBCMD
<lang=dft>
 (rw)  [1;33m0x402e0340[0m (0x402e0200 + 0x0140)
USB Command Register
 (rw) (01)  [0;32mRS[0m  - [00:00] -  Run/Stop (RS) - Read/Write
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Controller Reset (RESET) - Read/Write
 (rw) (02)  [0;32mFS_1[0m  - [03:02] -  See description at bit 15
 (rw) (01)  [0;32mPSE[0m  - [04:04] -  Periodic Schedule Enable- Read/Write
      0 - PSE_0 :
         Do not process the Periodic Schedule
      0x1 - PSE_1 :
         Use the PERIODICLISTBASE register to access the Periodic Schedule.
 (rw) (01)  [0;32mASE[0m  - [05:05] -  Asynchronous Schedule Enable - Read/Write
      0 - ASE_0 :
         Do not process the Asynchronous Schedule.
      0x1 - ASE_1 :
         Use the ASYNCLISTADDR register to access the Asynchronous Schedule.
 (rw) (01)  [0;32mIAA[0m  - [06:06] -  Interrupt on Async Advance Doorbell - Read/Write
 (rw) (02)  [0;32mASP[0m  - [09:08] -  Asynchronous Schedule Park Mode Count - Read/Write
 (rw) (01)  [0;32mASPE[0m  - [11:11] -  Asynchronous Schedule Park Mode Enable - Read/Write
 (rw) (01)  [0;32mATDTW[0m  - [12:12] -  Add dTD TripWire - Read/Write
 (rw) (01)  [0;32mSUTW[0m  - [13:13] -  Setup TripWire - Read/Write
 (rw) (01)  [0;32mFS_2[0m  - [15:15] -  See also bits 3-2 Frame List Size - (Read/Write or Read Only)
      0 - FS_2_0 :
         1024 elements (4096 bytes) Default value
      0x1 - FS_2_1 :
         512 elements (2048 bytes)
 (rw) (08)  [0;32mITC[0m  - [23:16] -  Interrupt Threshold Control -Read/Write
      0 - ITC_0 :
         Immediate (no threshold)
      0x1 - ITC_1 :
         1 micro-frame
      0x2 - ITC_2 :
         2 micro-frames
      0x4 - ITC_4 :
         4 micro-frames
      0x8 - ITC_8 :
         8 micro-frames
      0x10 - ITC_16 :
         16 micro-frames
      0x20 - ITC_32 :
         32 micro-frames
      0x40 - ITC_64 :
         64 micro-frames
</lang>
#### USB2.PERIODICLISTBASE
<link=p.USB2.PERIODICLISTBASE>
#### p.usb2.configflag
<link=p.USB2.CONFIGFLAG>
#### usb2.endptcomplete
<link=p.USB2.ENDPTCOMPLETE>
#### USB2.ENDPTCTRL4
<link=p.USB2.ENDPTCTRL4>
#### p.USBNC1
<lang=dft>
base: 0x402e0000
USB_OTG1_CTRL   USB_OTG1_PHY_CTRL_0  
输入 p.USBNC1.{reg_name} 以查看寄存器的详细信息
type p.USBNC1.{reg_name} to check details of registers
</lang>
#### semc.iocr
<link=p.SEMC.IOCR>
#### SEMC.IOCR
<link=p.SEMC.IOCR>
#### p.semc.br4
<link=p.SEMC.BR4>
#### SEMC.BR5
<link=p.SEMC.BR5>
#### p.SEMC.DLLCR
<lang=dft>
 (rw)  [1;33m0x402f0034[0m (0x402f0000 + 0x0034)
DLL Control Register
 (rw) (01)  [0;32mDLLEN[0m  - [00:00] -  DLL calibration enable.
 (rw) (01)  [0;32mDLLRESET[0m  - [01:01] -  Software could force a reset on DLL by setting this field to 0x1. This will cau
 se the DLL to lose lock and re-calibrate to detect an ref_clock half period pha
 se shift. The reset action is edge triggered, so software need to clear this bi
 t after set this bit (no delay limitation).
 (rw) (04)  [0;32mSLVDLYTARGET[0m  - [06:03] -  The delay target for slave delay line is: ((SLVDLYTARGET+1) * 1/32 * clock cycl
 e of reference clock (ipgclock).
 (rw) (01)  [0;32mOVRDEN[0m  - [08:08] -  Slave clock delay line delay cell number selection override enable.
 (rw) (06)  [0;32mOVRDVAL[0m  - [14:09] -  Slave clock delay line delay cell number selection override value.
</lang>
#### SEMC.NANDCR0
<link=p.SEMC.NANDCR0>
#### p.SEMC.NORCR0
<lang=dft>
 (rw)  [1;33m0x402f0060[0m (0x402f0000 + 0x0060)
NOR control register 0
 (rw) (01)  [0;32mPS[0m  - [00:00] -  Port Size
      0 - PS_0 :
         8bit
      0x1 - PS_1 :
         16bit
 (rw) (01)  [0;32mSYNCEN[0m  - [01:01] -  Select NOR controller mode.
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
 (rw) (02)  [0;32mAM[0m  - [09:08] -  Address Mode
      0 - AM_0 :
         Address/Data MUX mode
      0x1 - AM_1 :
         Advanced Address/Data MUX mode
      0x2 - AM_2 :
         Address/Data non-MUX mode
      0x3 - AM_3 :
         Address/Data non-MUX mode
 (rw) (01)  [0;32mADVP[0m  - [10:10] -  ADV# polarity
      0 - ADVP_0 :
         ADV# is Low Active. In ASYNC mode, device sample address with ADV# rise
          edge; In SYNC mode, device sample address when ADV# is LOW.
      0x1 - ADVP_1 :
         ADV# is High Active. In ASYNC mode, device sample address with ADV# fal
         l edge; In SYNC mode, device sample address when ADV# is HIGH.
 (rw) (01)  [0;32mADVH[0m  - [11:11] -  ADV# level control during address hold state
      0 - ADVH_0 :
         ADV# is high during address hold state.
      0x1 - ADVH_1 :
         ADV# is low during address hold state.
 (rw) (04)  [0;32mCOL[0m  - [15:12] -  Column Address bit width
      0 - COL_0 :
         12 Bits
      0x1 - COL_1 :
         11 Bits
      0x2 - COL_2 :
         10 Bits
      0x3 - COL_3 :
         9 Bits
      0x4 - COL_4 :
         8 Bits
      0x5 - COL_5 :
         7 Bits
      0x6 - COL_6 :
         6 Bits
      0x7 - COL_7 :
         5 Bits
      0x8 - COL_8 :
         4 Bits
      0x9 - COL_9 :
         3 Bits
      0xA - COL_10 :
         2 Bits
      0xB - COL_11 :
         12 Bits
      0xC - COL_12 :
         12 Bits
      0xD - COL_13 :
         12 Bits
      0xE - COL_14 :
         12 Bits
      0xF - COL_15 :
         12 Bits
</lang>
#### semc.norcr1
<link=p.SEMC.NORCR1>
#### p.SEMC.SRAMCR3
<lang=dft>
 (rw)  [1;33m0x402f007c[0m (0x402f0000 + 0x007c)
SRAM control register 3
</lang>
#### SEMC.STS0
<link=p.SEMC.STS0>
#### semc.sts10
<link=p.SEMC.STS10>
#### SEMC.STS12
<link=p.SEMC.STS12>
#### p.SEMC.STS14
<lang=dft>
 (ro)  [1;33m0x402f00f8[0m (0x402f0000 + 0x00f8)
Status register 14
</lang>
#### dcp.ctrl
<link=p.DCP.CTRL>
#### p.dcp.stat
<link=p.DCP.STAT>
#### p.DCP.CHANNELCTRL
<lang=dft>
 (rw)  [1;33m0x402fc020[0m (0x402fc000 + 0x0020)
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
#### dcp.channelctrl_set
<link=p.DCP.CHANNELCTRL_SET>
#### p.dcp.context
<link=p.DCP.CONTEXT>
#### dcp.ch0stat
<link=p.DCP.CH0STAT>
#### p.dcp.ch0stat_tog
<link=p.DCP.CH0STAT_TOG>
#### dcp.ch0opts_clr
<link=p.DCP.CH0OPTS_CLR>
#### dcp.ch0opts_tog
<link=p.DCP.CH0OPTS_TOG>
#### p.DCP.CH1OPTS
<lang=dft>
 (rw)  [1;33m0x402fc170[0m (0x402fc000 + 0x0170)
DCP channel 1 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### DCP.CH1OPTS_CLR
<link=p.DCP.CH1OPTS_CLR>
#### p.DCP.VERSION
<lang=dft>
 (ro)  [1;33m0x402fc430[0m (0x402fc000 + 0x0430)
DCP version register
 (ro) (16)  [0;32mSTEP[0m  - [15:00] -  Fixed read-only value reflecting the stepping of the version of the design impl
 ementation.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Fixed read-only value reflecting the MINOR version of the design implementation
 .
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Fixed read-only value reflecting the MAJOR version of the design implementation
 .
</lang>
#### spdif.sie
<link=p.SPDIF.SIE>
#### SPDIF.SIS
<link=p.SPDIF.SIS>
#### p.SPDIF.SRCSL
<lang=dft>
 (ro)  [1;33m0x40380020[0m (0x40380000 + 0x0020)
SPDIFRxCChannel_l Register
 (ro) (24)  [0;32mRxCChannel_l[0m  - [23:00] -  SPDIF receive C channel register, contains next 24 bits of C channel without in
 terpretation
</lang>
#### p.spdif.sru
<link=p.SPDIF.SRU>
#### p.SPDIF.SRQ
<lang=dft>
 (ro)  [1;33m0x40380028[0m (0x40380000 + 0x0028)
QchannelRx Register
 (ro) (24)  [0;32mRxQChannel[0m  - [23:00] -  SPDIF receive Q channel register, contains next 3 Q channel bytes
</lang>
#### spdif.stc
<link=p.SPDIF.STC>
#### sai1.tdr[0]
<link=p.SAI1.TDR[0]>
#### p.SAI1.TDR[2]
<lang=dft>
 (rw)  [1;33m0x40384028[0m (0x40384000 + 0x0028)
SAI Transmit Data Register
 (rw) (32)  [0;32mTDR[0m  - [31:00] -  Transmit Data Register
</lang>
#### SAI1.TFR[3]
<link=p.SAI1.TFR[3]>
#### p.SAI1.RCR2
<lang=dft>
 (rw)  [1;33m0x40384090[0m (0x40384000 + 0x0090)
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
#### sai1.rcr5
<link=p.SAI1.RCR5>
#### p.SAI2
<lang=dft>
base: 0x40388000
PARAM           RCR1            RCR2            RCR3            
RCR4            RCR5            RCSR            RDR[0]          
RDR[1]          RDR[2]          RDR[3]          RFR[0]          
RFR[1]          RFR[2]          RFR[3]          RMR             
TCR1            TCR2            TCR3            TCR4            
TCR5            TCSR            TDR[0]          TDR[1]          
TDR[2]          TDR[3]          TFR[0]          TFR[1]          
TFR[2]          TFR[3]          TMR             VERID           
输入 p.SAI2.{reg_name} 以查看寄存器的详细信息
type p.SAI2.{reg_name} to check details of registers
</lang>
#### p.sai2.verid
<link=p.SAI2.VERID>
#### p.sai2.tcr2
<link=p.SAI2.TCR2>
#### p.SAI2.TCR5
<lang=dft>
 (rw)  [1;33m0x4038801c[0m (0x40388000 + 0x001c)
SAI Transmit Configuration 5 Register
 (rw) (05)  [0;32mFBT[0m  - [12:08] -  First Bit Shifted
 (rw) (05)  [0;32mW0W[0m  - [20:16] -  Word 0 Width
 (rw) (05)  [0;32mWNW[0m  - [28:24] -  Word N Width
</lang>
#### p.SAI2.TFR[0]
<lang=dft>
 (ro)  [1;33m0x40388040[0m (0x40388000 + 0x0040)
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
#### SAI2.RDR[0]
<link=p.SAI2.RDR[0]>
#### p.sai2.rdr[1]
<link=p.SAI2.RDR[1]>
#### p.SAI2.RFR[3]
<lang=dft>
 (ro)  [1;33m0x403880cc[0m (0x40388000 + 0x00cc)
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
#### sai3.tcr1
<link=p.SAI3.TCR1>
#### p.sai3.tcr2
<link=p.SAI3.TCR2>
#### p.sai3.tdr[2]
<link=p.SAI3.TDR[2]>
#### SAI3.TFR[3]
<link=p.SAI3.TFR[3]>
#### p.SAI3.RFR[2]
<lang=dft>
 (ro)  [1;33m0x4038c0c8[0m (0x4038c000 + 0x00c8)
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
#### p.lpspi1.param
<link=p.LPSPI1.PARAM>
#### LPSPI1.IER
<link=p.LPSPI1.IER>
#### lpspi1.dmr1
<link=p.LPSPI1.DMR1>
#### LPSPI2.IER
<link=p.LPSPI2.IER>
#### LPSPI2.CCR
<link=p.LPSPI2.CCR>
#### p.LPSPI3.VERID
<lang=dft>
 (ro)  [1;33m0x4039c000[0m (0x4039c000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Module Identification Number
      0x4 - FEATURE_4 :
         Standard feature set supporting a 32-bit shift register.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### LPSPI3.PARAM
<link=p.LPSPI3.PARAM>
#### LPSPI3.CFGR1
<link=p.LPSPI3.CFGR1>
#### LPSPI4.DMR1
<link=p.LPSPI4.DMR1>
#### p.lpspi4.rdr
<link=p.LPSPI4.RDR>
#### p.ADC_ETC.CTRL
<lang=dft>
 (rw)  [1;33m0x403b0000[0m (0x403b0000 + 0x0000)
ADC_ETC Global Control Register
 (rw) (08)  [0;32mTRIG_ENABLE[0m  - [07:00] -  TRIG enable register
 (rw) (01)  [0;32mEXT0_TRIG_ENABLE[0m  - [08:08] -  TSC0 TRIG enable register. 1'b1: enable external TSC0 trigger. 1'b0: disable ex
 ternal TSC0 trigger.
 (rw) (03)  [0;32mEXT0_TRIG_PRIORITY[0m  - [11:09] -  External TSC0 trigger priority, 7 is Highest, 0 is lowest .
 (rw) (01)  [0;32mEXT1_TRIG_ENABLE[0m  - [12:12] -  TSC1 TRIG enable register. 1'b1: enable external TSC1 trigger. 1'b0: disable ex
 ternal TSC1 trigger.
 (rw) (03)  [0;32mEXT1_TRIG_PRIORITY[0m  - [15:13] -  External TSC1 trigger priority, 7 is Highest, 0 is lowest .
 (rw) (08)  [0;32mPRE_DIVIDER[0m  - [23:16] -  Pre-divider for trig delay and interval .
 (rw) (01)  [0;32mDMA_MODE_SEL[0m  - [29:29] -  1'b0: Trig DMA_REQ with latched signal, REQ will be cleared when ACK and source
  request cleared
 (rw) (01)  [0;32mTSC_BYPASS[0m  - [30:30] -  1'b1: TSC is bypassed to ADC2. 1'b0: TSC not bypassed. To use ADC2, this bit sh
 ould be cleared.
 (rw) (01)  [0;32mSOFTRST[0m  - [31:31] -  Software reset, high active. When write 1 ,all logical will be reset.
</lang>
#### adc_etc.trig0_chain_1_0
<link=p.ADC_ETC.TRIG0_CHAIN_1_0>
#### adc_etc.trig0_chain_3_2
<link=p.ADC_ETC.TRIG0_CHAIN_3_2>
#### ADC_ETC.TRIG1_CHAIN_1_0
<link=p.ADC_ETC.TRIG1_CHAIN_1_0>
#### ADC_ETC.TRIG1_CHAIN_7_6
<link=p.ADC_ETC.TRIG1_CHAIN_7_6>
#### p.adc_etc.trig1_result_1_0
<link=p.ADC_ETC.TRIG1_RESULT_1_0>
#### p.adc_etc.trig1_result_3_2
<link=p.ADC_ETC.TRIG1_RESULT_3_2>
#### p.ADC_ETC.TRIG3_COUNTER
<lang=dft>
 (rw)  [1;33m0x403b008c[0m (0x403b0000 + 0x008c)
ETC_TRIG3 Counter Register
 (rw) (16)  [0;32mINIT_DELAY[0m  - [15:00] -  TRIGGER initial delay counter
 (rw) (16)  [0;32mSAMPLE_INTERVAL[0m  - [31:16] -  TRIGGER sampling interval counter
</lang>
#### p.ADC_ETC.TRIG4_CTRL
<lang=dft>
 (rw)  [1;33m0x403b00b0[0m (0x403b0000 + 0x00b0)
ETC_TRIG4 Control Register
 (rw) (01)  [0;32mSW_TRIG[0m  - [00:00] -  Software write 1 as the TRIGGER. This register is self-clearing.
 (rw) (01)  [0;32mTRIG_MODE[0m  - [04:04] -  TRIG mode register. 1'b0: hardware trigger. 1'b1: software trigger.
 (rw) (03)  [0;32mTRIG_CHAIN[0m  - [10:08] -  TRIG chain length to the ADC. 0: Trig length is 1; ... 7: Trig length is 8;
 (rw) (03)  [0;32mTRIG_PRIORITY[0m  - [14:12] -  External trigger priority, 7 is highest, 0 is lowest .
 (rw) (01)  [0;32mSYNC_MODE[0m  - [16:16] -  TRIG mode control . 1'b0: Disable sync mode; 1'b1: Enable sync mode
</lang>
#### p.ADC_ETC.TRIG5_COUNTER
<lang=dft>
 (rw)  [1;33m0x403b00dc[0m (0x403b0000 + 0x00dc)
ETC_TRIG5 Counter Register
 (rw) (16)  [0;32mINIT_DELAY[0m  - [15:00] -  TRIGGER initial delay counter
 (rw) (16)  [0;32mSAMPLE_INTERVAL[0m  - [31:16] -  TRIGGER sampling interval counter
</lang>
#### p.ADC_ETC.TRIG5_CHAIN_3_2
<lang=dft>
 (rw)  [1;33m0x403b00e4[0m (0x403b0000 + 0x00e4)
ETC_TRIG Chain 2/3 Register
 (rw) (04)  [0;32mCSEL2[0m  - [03:00] -  CHAIN2 CSEL
 (rw) (08)  [0;32mHWTS2[0m  - [11:04] -  CHAIN2 HWTS
 (rw) (01)  [0;32mB2B2[0m  - [12:12] -  CHAIN2 B2B
 (rw) (02)  [0;32mIE2[0m  - [14:13] -  CHAIN2 IE
 (rw) (04)  [0;32mCSEL3[0m  - [19:16] -  CHAIN3 CSEL
 (rw) (08)  [0;32mHWTS3[0m  - [27:20] -  CHAIN3 HWTS
 (rw) (01)  [0;32mB2B3[0m  - [28:28] -  CHAIN3 B2B
 (rw) (02)  [0;32mIE3[0m  - [30:29] -  CHAIN3 IE
</lang>
#### p.ADC_ETC.TRIG5_CHAIN_5_4
<lang=dft>
 (rw)  [1;33m0x403b00e8[0m (0x403b0000 + 0x00e8)
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
#### p.adc_etc.trig6_ctrl
<link=p.ADC_ETC.TRIG6_CTRL>
#### adc_etc.trig6_chain_1_0
<link=p.ADC_ETC.TRIG6_CHAIN_1_0>
#### adc_etc.trig6_chain_3_2
<link=p.ADC_ETC.TRIG6_CHAIN_3_2>
#### ADC_ETC.TRIG7_CHAIN_3_2
<link=p.ADC_ETC.TRIG7_CHAIN_3_2>
#### p.adc_etc.trig7_result_3_2
<link=p.ADC_ETC.TRIG7_RESULT_3_2>
#### p.adc_etc.trig7_result_5_4
<link=p.ADC_ETC.TRIG7_RESULT_5_4>
#### ADC_ETC.TRIG7_RESULT_5_4
<link=p.ADC_ETC.TRIG7_RESULT_5_4>
#### ADC_ETC.TRIG7_RESULT_7_6
<link=p.ADC_ETC.TRIG7_RESULT_7_6>
#### p.aoi1.bfcrt010
<link=p.AOI1.BFCRT010>
#### aoi1.bfcrt011
<link=p.AOI1.BFCRT011>
#### AOI1.BFCRT230
<link=p.AOI1.BFCRT230>
#### p.AOI2.BFCRT230
<lang=dft>
 (rw)  [1;33m0x403b8002[0m (0x403b8000 + 0x0002)
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
#### aoi2.bfcrt231
<link=p.AOI2.BFCRT231>
#### AOI2.BFCRT232
<link=p.AOI2.BFCRT232>
#### p.xbara1
<link=p.XBARA1>
#### p.xbara1.sel4
<link=p.XBARA1.SEL4>
#### p.XBARA1.SEL7
<lang=dft>
 (rw)  [1;33m0x403bc00e[0m (0x403bc000 + 0x000e)
Crossbar A Select Register 7
 (rw) (07)  [0;32mSEL14[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT14 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL15[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT15 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL8
<link=p.XBARA1.SEL8>
#### xbara1.sel18
<link=p.XBARA1.SEL18>
#### p.XBARA1.SEL19
<lang=dft>
 (rw)  [1;33m0x403bc026[0m (0x403bc000 + 0x0026)
Crossbar A Select Register 19
 (rw) (07)  [0;32mSEL38[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT38 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL39[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT39 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL19
<link=p.XBARA1.SEL19>
#### p.XBARA1.SEL28
<lang=dft>
 (rw)  [1;33m0x403bc038[0m (0x403bc000 + 0x0038)
Crossbar A Select Register 28
 (rw) (07)  [0;32mSEL56[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT56 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL57[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT57 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel45
<link=p.XBARA1.SEL45>
#### XBARA1.SEL46
<link=p.XBARA1.SEL46>
#### xbara1.sel47
<link=p.XBARA1.SEL47>
#### xbara1.sel54
<link=p.XBARA1.SEL54>
#### p.XBARA1.SEL55
<lang=dft>
 (rw)  [1;33m0x403bc06e[0m (0x403bc000 + 0x006e)
Crossbar A Select Register 55
 (rw) (07)  [0;32mSEL110[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT110 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL111[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT111 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### XBARA1.SEL55
<link=p.XBARA1.SEL55>
#### p.xbara1.sel56
<link=p.XBARA1.SEL56>
#### XBARA1.SEL60
<link=p.XBARA1.SEL60>
#### xbara1.sel61
<link=p.XBARA1.SEL61>
#### p.xbara1.sel63
<link=p.XBARA1.SEL63>
#### p.XBARA1.SEL64
<lang=dft>
 (rw)  [1;33m0x403bc080[0m (0x403bc000 + 0x0080)
Crossbar A Select Register 64
 (rw) (07)  [0;32mSEL128[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT128 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL129[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT129 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### XBARA1.CTRL1
<link=p.XBARA1.CTRL1>
#### XBARB2.SEL1
<link=p.XBARB2.SEL1>
#### p.XBARB2.SEL4
<lang=dft>
 (rw)  [1;33m0x403c0008[0m (0x403c0000 + 0x0008)
Crossbar B Select Register 4
 (rw) (06)  [0;32mSEL8[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT8 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (06)  [0;32mSEL9[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT9 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### p.xbarb2.sel6
<link=p.XBARB2.SEL6>
#### XBARB3.SEL1
<link=p.XBARB3.SEL1>
#### p.XBARB3.SEL6
<lang=dft>
 (rw)  [1;33m0x403c400c[0m (0x403c4000 + 0x000c)
Crossbar B Select Register 6
 (rw) (06)  [0;32mSEL12[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT12 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (06)  [0;32mSEL13[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT13 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbarb3.sel6
<link=p.XBARB3.SEL6>
#### enc1.posd
<link=p.ENC1.POSD>
#### p.ENC1.LPOSH
<lang=dft>
 (ro)  [1;33m0x403c8014[0m (0x403c8000 + 0x0014)
Lower Position Hold Register
 (ro) (16)  [0;32mPOSH[0m  - [15:00] -  This read-only register contains a snapshot of the LPOS register.
</lang>
#### p.ENC1.CTRL2
<lang=dft>
 (rw)  [1;33m0x403c801e[0m (0x403c8000 + 0x001e)
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
#### enc1.lmod
<link=p.ENC1.LMOD>
#### enc1.lcomp
<link=p.ENC1.LCOMP>
#### ENC2.POSDH
<link=p.ENC2.POSDH>
#### p.enc2.lpos
<link=p.ENC2.LPOS>
#### enc2.ctrl2
<link=p.ENC2.CTRL2>
#### enc2.umod
<link=p.ENC2.UMOD>
#### p.ENC3.LPOS
<lang=dft>
 (rw)  [1;33m0x403d0010[0m (0x403d0000 + 0x0010)
Lower Position Counter Register
 (rw) (16)  [0;32mPOS[0m  - [15:00] -  This read/write register contains the lower (least significant) half of the pos
 ition counter
</lang>
#### ENC3.UPOSH
<link=p.ENC3.UPOSH>
#### p.ENC3.LINIT
<lang=dft>
 (rw)  [1;33m0x403d0018[0m (0x403d0000 + 0x0018)
Lower Initialization Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  This read/write register contains the value to be used to initialize the lower 
 half of the position counter (LPOS)
</lang>
#### p.ENC3.IMR
<lang=dft>
 (ro)  [1;33m0x403d001a[0m (0x403d0000 + 0x001a)
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
#### enc3.umod
<link=p.ENC3.UMOD>
#### ENC3.UMOD
<link=p.ENC3.UMOD>
#### p.ENC4.CTRL
<lang=dft>
 (rw)  [1;33m0x403d4000[0m (0x403d4000 + 0x0000)
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
#### p.enc4.posdh
<link=p.ENC4.POSDH>
#### p.enc4.revh
<link=p.ENC4.REVH>
#### pwm1.sm0ctrl2
<link=p.PWM1.SM0CTRL2>
#### p.PWM1.SM0FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403dc00c[0m (0x403dc000 + 0x000c)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### pwm1.sm0fracval3
<link=p.PWM1.SM0FRACVAL3>
#### p.PWM1.SM0INTEN
<lang=dft>
 (rw)  [1;33m0x403dc026[0m (0x403dc000 + 0x0026)
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
#### p.PWM1.SM0CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403dc03a[0m (0x403dc000 + 0x003a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.pwm1.sm0cval2cyc
<link=p.PWM1.SM0CVAL2CYC>
#### pwm1.sm0cval3
<link=p.PWM1.SM0CVAL3>
#### p.pwm1.sm0cval5cyc
<link=p.PWM1.SM0CVAL5CYC>
#### PWM1.SM1VAL0
<link=p.PWM1.SM1VAL0>
#### p.PWM1.SM1FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403dc078[0m (0x403dc000 + 0x0078)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### PWM1.SM1OCTRL
<link=p.PWM1.SM1OCTRL>
#### p.PWM1.SM1DISMAP0
<lang=dft>
 (rw)  [1;33m0x403dc08c[0m (0x403dc000 + 0x008c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### pwm1.sm1dtcnt1
<link=p.PWM1.SM1DTCNT1>
#### p.pwm1.sm1captcompa
<link=p.PWM1.SM1CAPTCOMPA>
#### PWM1.SM1CAPTCOMPA
<link=p.PWM1.SM1CAPTCOMPA>
#### p.PWM1.SM1CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403dc09e[0m (0x403dc000 + 0x009e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### pwm1.sm1cval3
<link=p.PWM1.SM1CVAL3>
#### pwm1.sm2fracval1
<link=p.PWM1.SM2FRACVAL1>
#### p.PWM1.SM2FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403dc0d8[0m (0x403dc000 + 0x00d8)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### pwm1.sm2val4
<link=p.PWM1.SM2VAL4>
#### pwm1.sm2sts
<link=p.PWM1.SM2STS>
#### p.pwm1.sm2dismap0
<link=p.PWM1.SM2DISMAP0>
#### PWM1.SM2DTCNT1
<link=p.PWM1.SM2DTCNT1>
#### pwm1.sm2cval0cyc
<link=p.PWM1.SM2CVAL0CYC>
#### pwm1.sm3fracval4
<link=p.PWM1.SM3FRACVAL4>
#### PWM1.SM3FRACVAL4
<link=p.PWM1.SM3FRACVAL4>
#### p.PWM1.SM3VAL5
<lang=dft>
 (rw)  [1;33m0x403dc13e[0m (0x403dc000 + 0x013e)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### pwm1.sm3val5
<link=p.PWM1.SM3VAL5>
#### p.PWM1.SM3CVAL1
<lang=dft>
 (ro)  [1;33m0x403dc164[0m (0x403dc000 + 0x0164)
Capture Value 1 Register
 (ro) (16)  [0;32mCAPTVAL1[0m  - [15:00] -  CAPTVAL1
</lang>
#### PWM1.SM3CVAL4
<link=p.PWM1.SM3CVAL4>
#### PWM1.FTST0
<link=p.PWM1.FTST0>
#### pwm1.fctrl20
<link=p.PWM1.FCTRL20>
#### PWM2.SM0CTRL2
<link=p.PWM2.SM0CTRL2>
#### p.pwm2.sm0val0
<link=p.PWM2.SM0VAL0>
#### pwm2.sm0val0
<link=p.PWM2.SM0VAL0>
#### PWM2.SM0FRACVAL3
<link=p.PWM2.SM0FRACVAL3>
#### p.pwm2.sm0fracval4
<link=p.PWM2.SM0FRACVAL4>
#### p.PWM2.SM0VAL5
<lang=dft>
 (rw)  [1;33m0x403e001e[0m (0x403e0000 + 0x001e)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### PWM2.SM0DISMAP1
<link=p.PWM2.SM0DISMAP1>
#### p.pwm2.sm0captctrlx
<link=p.PWM2.SM0CAPTCTRLX>
#### pwm2.sm0cval0cyc
<link=p.PWM2.SM0CVAL0CYC>
#### p.PWM2.SM0CVAL1
<lang=dft>
 (ro)  [1;33m0x403e0044[0m (0x403e0000 + 0x0044)
Capture Value 1 Register
 (ro) (16)  [0;32mCAPTVAL1[0m  - [15:00] -  CAPTVAL1
</lang>
#### p.pwm2.sm0cval4cyc
<link=p.PWM2.SM0CVAL4CYC>
#### PWM2.SM0CVAL4CYC
<link=p.PWM2.SM0CVAL4CYC>
#### p.pwm2.sm1val1
<link=p.PWM2.SM1VAL1>
#### pwm2.sm1val1
<link=p.PWM2.SM1VAL1>
#### p.PWM2.SM1FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e0078[0m (0x403e0000 + 0x0078)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### pwm2.sm1fracval5
<link=p.PWM2.SM1FRACVAL5>
#### PWM2.SM1CAPTCTRLX
<link=p.PWM2.SM1CAPTCTRLX>
#### PWM2.SM1CVAL0
<link=p.PWM2.SM1CVAL0>
#### p.pwm2.sm2cnt
<link=p.PWM2.SM2CNT>
#### p.pwm2.sm2ctrl2
<link=p.PWM2.SM2CTRL2>
#### PWM2.SM2CTRL
<link=p.PWM2.SM2CTRL>
#### p.PWM2.SM2FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e00d8[0m (0x403e0000 + 0x00d8)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### pwm2.sm2octrl
<link=p.PWM2.SM2OCTRL>
#### pwm2.sm2sts
<link=p.PWM2.SM2STS>
#### p.pwm2.sm2tctrl
<link=p.PWM2.SM2TCTRL>
#### p.PWM2.SM2DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e00ec[0m (0x403e0000 + 0x00ec)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### p.pwm2.sm2dismap1
<link=p.PWM2.SM2DISMAP1>
#### p.pwm2.sm2captcompb
<link=p.PWM2.SM2CAPTCOMPB>
#### PWM2.SM2CAPTCOMPB
<link=p.PWM2.SM2CAPTCOMPB>
#### p.PWM2.SM2CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e00fe[0m (0x403e0000 + 0x00fe)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### pwm2.sm2cval1cyc
<link=p.PWM2.SM2CVAL1CYC>
#### p.pwm2.sm2cval3
<link=p.PWM2.SM2CVAL3>
#### PWM2.SM2CVAL5CYC
<link=p.PWM2.SM2CVAL5CYC>
#### p.PWM2.SM3FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403e012c[0m (0x403e0000 + 0x012c)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### pwm2.sm3frctrl
<link=p.PWM2.SM3FRCTRL>
#### p.PWM2.SM3INTEN
<lang=dft>
 (rw)  [1;33m0x403e0146[0m (0x403e0000 + 0x0146)
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
#### PWM2.SM3TCTRL
<link=p.PWM2.SM3TCTRL>
#### pwm2.sm3dismap0
<link=p.PWM2.SM3DISMAP0>
#### p.PWM2.SM3CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e015a[0m (0x403e0000 + 0x015a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.pwm2.sm3captcompb
<link=p.PWM2.SM3CAPTCOMPB>
#### pwm2.sm3captcompx
<link=p.PWM2.SM3CAPTCOMPX>
#### p.pwm2.sm3cval1cyc
<link=p.PWM2.SM3CVAL1CYC>
#### pwm2.sm3cval2cyc
<link=p.PWM2.SM3CVAL2CYC>
#### p.pwm2.sm3cval3
<link=p.PWM2.SM3CVAL3>
#### PWM2.FCTRL0
<link=p.PWM2.FCTRL0>
#### pwm2.ftst0
<link=p.PWM2.FTST0>
#### p.PWM3.SM0FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e4018[0m (0x403e4000 + 0x0018)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### pwm3.sm0val5
<link=p.PWM3.SM0VAL5>
#### p.pwm3.sm0dismap0
<link=p.PWM3.SM0DISMAP0>
#### PWM3.SM0CAPTCTRLX
<link=p.PWM3.SM0CAPTCTRLX>
#### PWM3.SM0CVAL0
<link=p.PWM3.SM0CVAL0>
#### pwm3.sm0cval2cyc
<link=p.PWM3.SM0CVAL2CYC>
#### pwm3.sm0cval3cyc
<link=p.PWM3.SM0CVAL3CYC>
#### PWM3.SM1CTRL2
<link=p.PWM3.SM1CTRL2>
#### pwm3.sm1fracval3
<link=p.PWM3.SM1FRACVAL3>
#### PWM3.SM1FRACVAL3
<link=p.PWM3.SM1FRACVAL3>
#### pwm3.sm1val4
<link=p.PWM3.SM1VAL4>
#### p.PWM3.SM1VAL5
<lang=dft>
 (rw)  [1;33m0x403e407e[0m (0x403e4000 + 0x007e)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### PWM3.SM1DISMAP1
<link=p.PWM3.SM1DISMAP1>
#### p.PWM3.SM1CVAL1
<lang=dft>
 (ro)  [1;33m0x403e40a4[0m (0x403e4000 + 0x00a4)
Capture Value 1 Register
 (ro) (16)  [0;32mCAPTVAL1[0m  - [15:00] -  CAPTVAL1
</lang>
#### PWM3.SM1CVAL4CYC
<link=p.PWM3.SM1CVAL4CYC>
#### p.PWM3.SM2FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403e40cc[0m (0x403e4000 + 0x00cc)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### p.PWM3.SM2INTEN
<lang=dft>
 (rw)  [1;33m0x403e40e6[0m (0x403e4000 + 0x00e6)
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
#### pwm3.sm2inten
<link=p.PWM3.SM2INTEN>
#### PWM3.SM2TCTRL
<link=p.PWM3.SM2TCTRL>
#### pwm3.sm2dtcnt0
<link=p.PWM3.SM2DTCNT0>
#### p.PWM3.SM2CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e40fa[0m (0x403e4000 + 0x00fa)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### pwm3.sm2cval0
<link=p.PWM3.SM2CVAL0>
#### p.pwm3.sm2cval2cyc
<link=p.PWM3.SM2CVAL2CYC>
#### p.pwm3.sm2cval5cyc
<link=p.PWM3.SM2CVAL5CYC>
#### PWM3.SM3CTRL
<link=p.PWM3.SM3CTRL>
#### pwm3.sm3fracval1
<link=p.PWM3.SM3FRACVAL1>
#### p.PWM3.SM3FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e4138[0m (0x403e4000 + 0x0138)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### pwm3.sm3inten
<link=p.PWM3.SM3INTEN>
#### p.PWM3.SM3DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e414c[0m (0x403e4000 + 0x014c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### pwm3.sm3dtcnt0
<link=p.PWM3.SM3DTCNT0>
#### p.pwm3.sm3captcompa
<link=p.PWM3.SM3CAPTCOMPA>
#### PWM3.SM3CAPTCOMPB
<link=p.PWM3.SM3CAPTCOMPB>
#### p.PWM3.SM3CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e415e[0m (0x403e4000 + 0x015e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### pwm3.sm3cval2
<link=p.PWM3.SM3CVAL2>
#### PWM3.SM3CVAL5CYC
<link=p.PWM3.SM3CVAL5CYC>
#### pwm4.sm0fracval1
<link=p.PWM4.SM0FRACVAL1>
#### p.pwm4.sm0fracval2
<link=p.PWM4.SM0FRACVAL2>
#### PWM4.SM0VAL3
<link=p.PWM4.SM0VAL3>
#### PWM4.SM0FRACVAL5
<link=p.PWM4.SM0FRACVAL5>
#### p.PWM4.SM0OCTRL
<lang=dft>
 (rw)  [1;33m0x403e8022[0m (0x403e8000 + 0x0022)
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
#### PWM4.SM0CAPTCTRLX
<link=p.PWM4.SM0CAPTCTRLX>
#### pwm4.sm0cval2cyc
<link=p.PWM4.SM0CVAL2CYC>
#### pwm4.sm0cval3
<link=p.PWM4.SM0CVAL3>
#### PWM4.SM0CVAL5
<link=p.PWM4.SM0CVAL5>
#### pwm4.sm1ctrl2
<link=p.PWM4.SM1CTRL2>
#### PWM4.SM1VAL3
<link=p.PWM4.SM1VAL3>
#### pwm4.sm1fracval4
<link=p.PWM4.SM1FRACVAL4>
#### p.PWM4.SM1FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e807c[0m (0x403e8000 + 0x007c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### PWM4.SM1FRCTRL
<link=p.PWM4.SM1FRCTRL>
#### pwm4.sm1dmaen
<link=p.PWM4.SM1DMAEN>
#### pwm4.sm1tctrl
<link=p.PWM4.SM1TCTRL>
#### p.PWM4.SM1DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e808c[0m (0x403e8000 + 0x008c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### PWM4.SM1DTCNT1
<link=p.PWM4.SM1DTCNT1>
#### pwm4.sm1captctrla
<link=p.PWM4.SM1CAPTCTRLA>
#### pwm4.sm1cval0
<link=p.PWM4.SM1CVAL0>
#### PWM4.SM1CVAL4CYC
<link=p.PWM4.SM1CVAL4CYC>
#### p.PWM4.SM2VAL0
<lang=dft>
 (rw)  [1;33m0x403e80ca[0m (0x403e8000 + 0x00ca)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### pwm4.sm2fracval3
<link=p.PWM4.SM2FRACVAL3>
#### pwm4.sm2val4
<link=p.PWM4.SM2VAL4>
#### p.PWM4.SM2FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e80e0[0m (0x403e8000 + 0x00e0)
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
#### PWM4.SM2INTEN
<link=p.PWM4.SM2INTEN>
#### p.pwm4.sm2dtcnt1
<link=p.PWM4.SM2DTCNT1>
#### pwm4.sm2captctrla
<link=p.PWM4.SM2CAPTCTRLA>
#### p.pwm4.sm2captcompa
<link=p.PWM4.SM2CAPTCOMPA>
#### p.pwm4.sm2cval1
<link=p.PWM4.SM2CVAL1>
#### pwm4.sm2cval4
<link=p.PWM4.SM2CVAL4>
#### PWM4.SM3INIT
<link=p.PWM4.SM3INIT>
#### p.PWM4.SM3VAL0
<lang=dft>
 (rw)  [1;33m0x403e812a[0m (0x403e8000 + 0x012a)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### PWM4.SM3FRACVAL3
<link=p.PWM4.SM3FRACVAL3>
#### pwm4.sm3val5
<link=p.PWM4.SM3VAL5>
#### pwm4.sm3octrl
<link=p.PWM4.SM3OCTRL>
#### pwm4.sm3dismap0
<link=p.PWM4.SM3DISMAP0>
#### p.pwm4.sm3captctrlb
<link=p.PWM4.SM3CAPTCTRLB>
#### p.pwm4.sm3cval1
<link=p.PWM4.SM3CVAL1>
#### PWM4.SM3CVAL3CYC
<link=p.PWM4.SM3CVAL3CYC>
#### p.pwm4.fctrl0
<link=p.PWM4.FCTRL0>
#### pwm4.fsts0
<link=p.PWM4.FSTS0>
#### p.bee.aes_key0_w2
<link=p.BEE.AES_KEY0_W2>
#### p.BEE.STATUS
<lang=dft>
 (rw)  [1;33m0x403ec01c[0m (0x403ec000 + 0x001c)
no description available
 (rw) (08)  [0;32mIRQ_VEC[0m  - [07:00] -  bit 7: Protected region-3 access violation bit 6: Protected region-2 access vio
 lation bit 5: Protected region-1 access violation bit 4: Protected region-0 acc
 ess violation bit 3: Region-1 read channel security violation bit 2: Read chann
 el illegal access detected bit 1: Region-0 read channel security violation bit 
 0: Disable abort
 (ro) (01)  [0;32mBEE_IDLE[0m  - [08:08] -  1'b1: BEE is idle; 1'b0: BEE is active
</lang>
#### BEE.REGION1_TOP
<link=p.BEE.REGION1_TOP>
#### lpi2c1.mcfgr2
<link=p.LPI2C1.MCFGR2>
#### LPI2C1.MFSR
<link=p.LPI2C1.MFSR>
#### p.lpi2c1.mtdr
<link=p.LPI2C1.MTDR>
#### LPI2C1.MTDR
<link=p.LPI2C1.MTDR>
#### p.LPI2C1.MRDR
<lang=dft>
 (ro)  [1;33m0x403f0070[0m (0x403f0000 + 0x0070)
Master Receive Data Register
 (ro) (08)  [0;32mDATA[0m  - [07:00] -  Receive Data
 (ro) (01)  [0;32mRXEMPTY[0m  - [14:14] -  RX Empty
      0 - RXEMPTY_0 :
         Receive FIFO is not empty
      0x1 - RXEMPTY_1 :
         Receive FIFO is empty
</lang>
#### lpi2c1.mrdr
<link=p.LPI2C1.MRDR>
#### p.LPI2C2.MSR
<lang=dft>
 (rw)  [1;33m0x403f4014[0m (0x403f4000 + 0x0014)
Master Status Register
 (ro) (01)  [0;32mTDF[0m  - [00:00] -  Transmit Data Flag
      0 - TDF_0 :
         Transmit data is not requested
      0x1 - TDF_1 :
         Transmit data is requested
 (ro) (01)  [0;32mRDF[0m  - [01:01] -  Receive Data Flag
      0 - RDF_0 :
         Receive Data is not ready
      0x1 - RDF_1 :
         Receive data is ready
 (rw) (01)  [0;32mEPF[0m  - [08:08] -  End Packet Flag
      0 - EPF_0 :
         Master has not generated a STOP or Repeated START condition
      0x1 - EPF_1 :
         Master has generated a STOP or Repeated START condition
 (rw) (01)  [0;32mSDF[0m  - [09:09] -  STOP Detect Flag
      0 - SDF_0 :
         Master has not generated a STOP condition
      0x1 - SDF_1 :
         Master has generated a STOP condition
 (rw) (01)  [0;32mNDF[0m  - [10:10] -  NACK Detect Flag
      0 - NDF_0 :
         Unexpected NACK was not detected
      0x1 - NDF_1 :
         Unexpected NACK was detected
 (rw) (01)  [0;32mALF[0m  - [11:11] -  Arbitration Lost Flag
      0 - ALF_0 :
         Master has not lost arbitration
      0x1 - ALF_1 :
         Master has lost arbitration
 (rw) (01)  [0;32mFEF[0m  - [12:12] -  FIFO Error Flag
      0 - FEF_0 :
         No error
      0x1 - FEF_1 :
         Master sending or receiving data without a START condition
 (rw) (01)  [0;32mPLTF[0m  - [13:13] -  Pin Low Timeout Flag
      0 - PLTF_0 :
         Pin low timeout has not occurred or is disabled
      0x1 - PLTF_1 :
         Pin low timeout has occurred
 (rw) (01)  [0;32mDMF[0m  - [14:14] -  Data Match Flag
      0 - DMF_0 :
         Have not received matching data
      0x1 - DMF_1 :
         Have received matching data
 (ro) (01)  [0;32mMBF[0m  - [24:24] -  Master Busy Flag
      0 - MBF_0 :
         I2C Master is idle
      0x1 - MBF_1 :
         I2C Master is busy
 (ro) (01)  [0;32mBBF[0m  - [25:25] -  Bus Busy Flag
      0 - BBF_0 :
         I2C Bus is idle
      0x1 - BBF_1 :
         I2C Bus is busy
</lang>
#### p.lpi2c2.mder
<link=p.LPI2C2.MDER>
#### p.LPI2C2.MCFGR1
<lang=dft>
 (rw)  [1;33m0x403f4024[0m (0x403f4000 + 0x0024)
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
#### LPI2C2.MCFGR2
<link=p.LPI2C2.MCFGR2>
#### p.lpi2c2.mfcr
<link=p.LPI2C2.MFCR>
#### lpi2c2.mfcr
<link=p.LPI2C2.MFCR>
#### lpi2c2.scfgr2
<link=p.LPI2C2.SCFGR2>
#### p.lpi2c2.stdr
<link=p.LPI2C2.STDR>
#### p.LPI2C3.MDMR
<lang=dft>
 (rw)  [1;33m0x403f8040[0m (0x403f8000 + 0x0040)
Master Data Match Register
 (rw) (08)  [0;32mMATCH0[0m  - [07:00] -  Match 0 Value
 (rw) (08)  [0;32mMATCH1[0m  - [23:16] -  Match 1 Value
</lang>
#### LPI2C3.MDMR
<link=p.LPI2C3.MDMR>
#### p.lpi2c3.mfsr
<link=p.LPI2C3.MFSR>
#### p.LPI2C3.SCR
<lang=dft>
 (rw)  [1;33m0x403f8110[0m (0x403f8000 + 0x0110)
Slave Control Register
 (rw) (01)  [0;32mSEN[0m  - [00:00] -  Slave Enable
      0 - SEN_0 :
         I2C Slave mode is disabled
      0x1 - SEN_1 :
         I2C Slave mode is enabled
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Software Reset
      0 - RST_0 :
         Slave mode logic is not reset
      0x1 - RST_1 :
         Slave mode logic is reset
 (rw) (01)  [0;32mFILTEN[0m  - [04:04] -  Filter Enable
      0 - FILTEN_0 :
         Disable digital filter and output delay counter for slave mode
      0x1 - FILTEN_1 :
         Enable digital filter and output delay counter for slave mode
 (rw) (01)  [0;32mFILTDZ[0m  - [05:05] -  Filter Doze Enable
      0 - FILTDZ_0 :
         Filter remains enabled in Doze mode
      0x1 - FILTDZ_1 :
         Filter is disabled in Doze mode
 (rw) (01)  [0;32mRTF[0m  - [08:08] -  Reset Transmit FIFO
      0 - RTF_0 :
         No effect
      0x1 - RTF_1 :
         Transmit Data Register is now empty
 (rw) (01)  [0;32mRRF[0m  - [09:09] -  Reset Receive FIFO
      0 - RRF_0 :
         No effect
      0x1 - RRF_1 :
         Receive Data Register is now empty
</lang>
#### lpi2c3.scfgr1
<link=p.LPI2C3.SCFGR1>
#### p.LPI2C4.VERID
<lang=dft>
 (ro)  [1;33m0x403fc000[0m (0x403fc000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Specification Number
      0x2 - FEATURE_2 :
         Master only, with standard feature set
      0x3 - FEATURE_3 :
         Master and slave, with standard feature set
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### lpi2c4.msr
<link=p.LPI2C4.MSR>
#### lpi2c4.mder
<link=p.LPI2C4.MDER>
#### LPI2C4.MCFGR0
<link=p.LPI2C4.MCFGR0>
#### lpi2c4.mcfgr1
<link=p.LPI2C4.MCFGR1>
#### p.lpi2c4.mfcr
<link=p.LPI2C4.MFCR>
#### lpi2c4.mfcr
<link=p.LPI2C4.MFCR>
#### p.LPI2C4.MRDR
<lang=dft>
 (ro)  [1;33m0x403fc070[0m (0x403fc000 + 0x0070)
Master Receive Data Register
 (ro) (08)  [0;32mDATA[0m  - [07:00] -  Receive Data
 (ro) (01)  [0;32mRXEMPTY[0m  - [14:14] -  RX Empty
      0 - RXEMPTY_0 :
         Receive FIFO is not empty
      0x1 - RXEMPTY_1 :
         Receive FIFO is empty
</lang>
#### LPI2C4.SAMR
<link=p.LPI2C4.SAMR>
#### p.LPI2C4.STAR
<lang=dft>
 (rw)  [1;33m0x403fc154[0m (0x403fc000 + 0x0154)
Slave Transmit ACK Register
 (rw) (01)  [0;32mTXNACK[0m  - [00:00] -  Transmit NACK
      0 - TXNACK_0 :
         Write a Transmit ACK for each received word
      0x1 - TXNACK_1 :
         Write a Transmit NACK for each received word
</lang>
#### systemcontrol.vtor
<link=p.SYSTEMCONTROL.VTOR>
#### systemcontrol.id_pfr1
<link=p.SYSTEMCONTROL.ID_PFR1>
#### p.systemcontrol.ccsidr
<link=p.SYSTEMCONTROL.CCSIDR>
#### systemcontrol.cpacr
<link=p.SYSTEMCONTROL.CPACR>
#### p.systemcontrol.dccsw
<link=p.SYSTEMCONTROL.DCCSW>
#### SystemControl.DCCIMVAC
<link=p.SYSTEMCONTROL.DCCIMVAC>
#### SystemControl.DCCISW
<link=p.SYSTEMCONTROL.DCCISW>
#### systemcontrol.cm7_itcmcr
<link=p.SYSTEMCONTROL.CM7_ITCMCR>
#### p.nvic.nviciser0
<link=p.NVIC.NVICISER0>
#### p.nvic.nvicicer3
<link=p.NVIC.NVICICER3>
#### nvic.nvicispr2
<link=p.NVIC.NVICISPR2>
#### NVIC.NVICISPR4
<link=p.NVIC.NVICISPR4>
#### p.NVIC.NVICICPR3
<lang=dft>
 (rw)  [1;33m0xe000e28c[0m (0xe000e100 + 0x018c)
Interrupt Clear Pending Register n
 (rw) (32)  [0;32mCLRPEND[0m  - [31:00] -  Interrupt clear-pending bits
</lang>
#### p.NVIC.NVICIABR2
<lang=dft>
 (rw)  [1;33m0xe000e308[0m (0xe000e100 + 0x0208)
Interrupt Active bit Register n
 (rw) (32)  [0;32mACTIVE[0m  - [31:00] -  Interrupt active flags
</lang>
#### nvic.nviciabr4
<link=p.NVIC.NVICIABR4>
#### p.NVIC.NVICIP1
<lang=dft>
 (rw)  [1;33m0xe000e401[0m (0xe000e100 + 0x0301)
Interrupt Priority Register 1
 (rw) (04)  [0;32mPRI1[0m  - [07:04] -  Priority of the INT_DMA1_DMA17 interrupt 1
</lang>
#### p.NVIC.NVICIP11
<lang=dft>
 (rw)  [1;33m0xe000e40b[0m (0xe000e100 + 0x030b)
Interrupt Priority Register 11
 (rw) (04)  [0;32mPRI11[0m  - [07:04] -  Priority of the INT_DMA11_DMA27 interrupt 11
</lang>
#### nvic.nvicip19
<link=p.NVIC.NVICIP19>
#### p.nvic.nvicip23
<link=p.NVIC.NVICIP23>
#### nvic.nvicip28
<link=p.NVIC.NVICIP28>
#### p.nvic.nvicip34
<link=p.NVIC.NVICIP34>
#### nvic.nvicip37
<link=p.NVIC.NVICIP37>
#### NVIC.NVICIP39
<link=p.NVIC.NVICIP39>
#### NVIC.NVICIP43
<link=p.NVIC.NVICIP43>
#### nvic.nvicip45
<link=p.NVIC.NVICIP45>
#### p.nvic.nvicip49
<link=p.NVIC.NVICIP49>
#### NVIC.NVICIP54
<link=p.NVIC.NVICIP54>
#### nvic.nvicip56
<link=p.NVIC.NVICIP56>
#### p.NVIC.NVICIP60
<lang=dft>
 (rw)  [1;33m0xe000e43c[0m (0xe000e100 + 0x033c)
Interrupt Priority Register 60
 (rw) (04)  [0;32mPRI60[0m  - [07:04] -  Priority of the INT_SPDIF interrupt 60
</lang>
#### NVIC.NVICIP65
<link=p.NVIC.NVICIP65>
#### p.NVIC.NVICIP73
<lang=dft>
 (rw)  [1;33m0xe000e449[0m (0xe000e100 + 0x0349)
Interrupt Priority Register 73
 (rw) (04)  [0;32mPRI73[0m  - [07:04] -  Priority of the INT_GPIO1_INT1 interrupt 73
</lang>
#### p.nvic.nvicip78
<link=p.NVIC.NVICIP78>
#### nvic.nvicip81
<link=p.NVIC.NVICIP81>
#### NVIC.NVICIP87
<link=p.NVIC.NVICIP87>
#### NVIC.NVICIP90
<link=p.NVIC.NVICIP90>
#### nvic.nvicip92
<link=p.NVIC.NVICIP92>
#### p.NVIC.NVICIP98
<lang=dft>
 (rw)  [1;33m0xe000e462[0m (0xe000e100 + 0x0362)
Interrupt Priority Register 98
 (rw) (04)  [0;32mPRI98[0m  - [07:04] -  Priority of the INT_SRC interrupt 98
</lang>
#### p.NVIC.NVICIP102
<lang=dft>
 (rw)  [1;33m0xe000e466[0m (0xe000e100 + 0x0366)
Interrupt Priority Register 102
 (rw) (04)  [0;32mPRI102[0m  - [07:04] -  Priority of the INT_PWM1_0 interrupt 102
</lang>
#### NVIC.NVICIP109
<link=p.NVIC.NVICIP109>
#### p.nvic.nvicip119
<link=p.NVIC.NVICIP119>
#### NVIC.NVICIP127
<link=p.NVIC.NVICIP127>
#### p.nvic.nvicip128
<link=p.NVIC.NVICIP128>
#### nvic.nvicip129
<link=p.NVIC.NVICIP129>
#### p.nvic.nvicip137
<link=p.NVIC.NVICIP137>
#### NVIC.NVICIP138
<link=p.NVIC.NVICIP138>
#### nvic.nvicip144
<link=p.NVIC.NVICIP144>
#### p.nvic.nvicip145
<link=p.NVIC.NVICIP145>
#### NVIC.NVICIP146
<link=p.NVIC.NVICIP146>
#### p.NVIC.NVICIP151
<lang=dft>
 (rw)  [1;33m0xe000e497[0m (0xe000e100 + 0x0397)
Interrupt Priority Register 151
 (rw) (04)  [0;32mPRI151[0m  - [07:04] -  Priority of the INT_PWM4_FAULT interrupt 151
</lang>
#### nvic.nvicip153
<link=p.NVIC.NVICIP153>
#### NVIC.NVICIP155
<link=p.NVIC.NVICIP155>
#### p.nvic.nvicip156
<link=p.NVIC.NVICIP156>
#### TCTRL3
<link=p.PIT.TCTRL3>
#### GPR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.IOMUXC_SNVS_GPR.GPR1
   p.IOMUXC_GPR.GPR1
   p.SRC.GPR1
#### sw_mux_ctl_pad_pmic_on_req
<link=SW_MUX_CTL_PAD_PMIC_ON_REQ>
#### sw_pad_ctl_pad_onoff
<link=SW_PAD_CTL_PAD_ONOFF>
#### GPR11
<link=p.IOMUXC_GPR.GPR11>
#### GPR24
<link=p.IOMUXC_GPR.GPR24>
#### WSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.WDOG1.WSR
   p.WDOG2.WSR
#### WRSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.WDOG1.WRSR
   p.WDOG2.WRSR
#### hc5
<link=HC5>
#### HS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.HS
   p.ADC2.HS
#### CV
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.CV
   p.ADC2.CV
#### cal
<link=CAL>
#### TOTSAM
<link=p.TRNG.TOTSAM>
#### frqcnt
<link=FRQCNT>
#### STATUS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TRNG.STATUS
   p.USBPHY1.STATUS
   p.USBPHY2.STATUS
   p.BEE.STATUS
#### INT_CTRL
<link=p.TRNG.INT_CTRL>
#### hprtcmr
<link=HPRTCMR>
#### hptalr
<link=HPTALR>
#### lpzmkr[2]
<link=LPZMKR[2]>
#### lpgpr[2]
<link=LPGPR[2]>
#### pll_arm_clr
<link=PLL_ARM_CLR>
#### pll_usb1_tog
<link=PLL_USB1_TOG>
#### pll_usb2
<link=PLL_USB2>
#### pll_sys_denom
<link=PLL_SYS_DENOM>
#### pll_audio_clr
<link=PLL_AUDIO_CLR>
#### pll_video_clr
<link=PLL_VIDEO_CLR>
#### pll_enet_tog
<link=PLL_ENET_TOG>
#### MISC0_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC0_SET
   p.PMU.MISC0_SET
   p.XTALOSC24M.MISC0_SET
#### MISC0_TOG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC0_TOG
   p.PMU.MISC0_TOG
   p.XTALOSC24M.MISC0_TOG
#### reg_1p1_set
<link=REG_1P1_SET>
#### REG_CORE_CLR
<link=p.PMU.REG_CORE_CLR>
#### tempsense1_clr
<link=TEMPSENSE1_CLR>
#### TEMPSENSE2_SET
<link=p.TEMPMON.TEMPSENSE2_SET>
#### usb1_vbus_detect_clr
<link=USB1_VBUS_DETECT_CLR>
#### usb1_misc_set
<link=USB1_MISC_SET>
#### USB1_MISC_CLR
<link=p.USB_ANALOG.USB1_MISC_CLR>
#### USB2_VBUS_DETECT_CLR
<link=p.USB_ANALOG.USB2_VBUS_DETECT_CLR>
#### usb2_vbus_detect_stat
<link=USB2_VBUS_DETECT_STAT>
#### OSC_CONFIG1_TOG
<link=p.XTALOSC24M.OSC_CONFIG1_TOG>
#### OSC_CONFIG2_CLR
<link=p.XTALOSC24M.OSC_CONFIG2_CLR>
#### rx_set
<link=RX_SET>
#### debug_tog
<link=DEBUG_TOG>
#### CSL8
<link=p.CSU.CSL8>
#### csl12
<link=CSL12>
#### csl28
<link=CSL28>
#### cr
<link=CR>
#### EEI
<link=p.DMA0.EEI>
#### serq
<link=SERQ>
#### DCHPRI9
<link=p.DMA0.DCHPRI9>
#### dchpri9
<link=DCHPRI9>
#### TCD0_SADDR
<link=p.DMA0.TCD0_SADDR>
#### tcd0_saddr
<link=TCD0_SADDR>
#### TCD1_NBYTES_MLNO
<link=p.DMA0.TCD1_NBYTES_MLNO>
#### TCD3_SADDR
<link=p.DMA0.TCD3_SADDR>
#### tcd3_saddr
<link=TCD3_SADDR>
#### TCD3_CITER_ELINKNO
<link=p.DMA0.TCD3_CITER_ELINKNO>
#### TCD3_CITER_ELINKYES
<link=p.DMA0.TCD3_CITER_ELINKYES>
#### TCD3_DLASTSGA
<link=p.DMA0.TCD3_DLASTSGA>
#### TCD4_NBYTES_MLNO
<link=p.DMA0.TCD4_NBYTES_MLNO>
#### tcd4_csr
<link=TCD4_CSR>
#### tcd5_attr
<link=TCD5_ATTR>
#### tcd7_slast
<link=TCD7_SLAST>
#### TCD7_DOFF
<link=p.DMA0.TCD7_DOFF>
#### TCD8_DADDR
<link=p.DMA0.TCD8_DADDR>
#### tcd9_dlastsga
<link=TCD9_DLASTSGA>
#### TCD10_DADDR
<link=p.DMA0.TCD10_DADDR>
#### tcd10_dlastsga
<link=TCD10_DLASTSGA>
#### tcd12_slast
<link=TCD12_SLAST>
#### TCD14_ATTR
<link=p.DMA0.TCD14_ATTR>
#### TCD14_NBYTES_MLOFFNO
<link=p.DMA0.TCD14_NBYTES_MLOFFNO>
#### TCD14_DOFF
<link=p.DMA0.TCD14_DOFF>
#### TCD14_BITER_ELINKYES
<link=p.DMA0.TCD14_BITER_ELINKYES>
#### TCD15_DOFF
<link=p.DMA0.TCD15_DOFF>
#### tcd19_daddr
<link=TCD19_DADDR>
#### TCD19_CITER_ELINKNO
<link=p.DMA0.TCD19_CITER_ELINKNO>
#### tcd20_soff
<link=TCD20_SOFF>
#### TCD20_SLAST
<link=p.DMA0.TCD20_SLAST>
#### TCD20_CSR
<link=p.DMA0.TCD20_CSR>
#### tcd22_nbytes_mlno
<link=TCD22_NBYTES_MLNO>
#### TCD22_NBYTES_MLOFFYES
<link=p.DMA0.TCD22_NBYTES_MLOFFYES>
#### tcd23_daddr
<link=TCD23_DADDR>
#### TCD23_CSR
<link=p.DMA0.TCD23_CSR>
#### tcd24_nbytes_mloffyes
<link=TCD24_NBYTES_MLOFFYES>
#### tcd27_nbytes_mloffno
<link=TCD27_NBYTES_MLOFFNO>
#### TCD27_CITER_ELINKNO
<link=p.DMA0.TCD27_CITER_ELINKNO>
#### tcd28_nbytes_mloffno
<link=TCD28_NBYTES_MLOFFNO>
#### TCD28_DOFF
<link=p.DMA0.TCD28_DOFF>
#### TCD28_BITER_ELINKYES
<link=p.DMA0.TCD28_BITER_ELINKYES>
#### tcd29_nbytes_mloffyes
<link=TCD29_NBYTES_MLOFFYES>
#### tcd30_biter_elinkno
<link=TCD30_BITER_ELINKNO>
#### TCD31_SOFF
<link=p.DMA0.TCD31_SOFF>
#### TCD31_CITER_ELINKNO
<link=p.DMA0.TCD31_CITER_ELINKNO>
#### tcd31_dlastsga
<link=TCD31_DLASTSGA>
#### chcfg[9]
<link=CHCFG[9]>
#### CHCFG[20]
<link=p.DMAMUX.CHCFG[20]>
#### chcfg[21]
<link=CHCFG[21]>
#### IMR4
<link=p.GPC.IMR4>
#### mega_pupscr
<link=MEGA_PUPSCR>
#### CPU_SR
<link=p.PGC.CPU_SR>
#### srsr
<link=SRSR>
#### rompatchcntl
<link=ROMPATCHCNTL>
#### ROMPATCH0A
<link=p.ROMC.ROMPATCH0A>
#### rompatchsr
<link=ROMPATCHSR>
#### GLOBAL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.GLOBAL
   p.LPUART2.GLOBAL
   p.LPUART3.GLOBAL
   p.LPUART4.GLOBAL
   p.LPUART5.GLOBAL
   p.LPUART6.GLOBAL
   p.LPUART7.GLOBAL
   p.LPUART8.GLOBAL
#### global
<link=GLOBAL>
#### shiftstate
<link=SHIFTSTATE>
#### shiftbuf[3]
<link=SHIFTBUF[3]>
#### shiftbufbys[1]
<link=SHIFTBUFBYS[1]>
#### timctl[3]
<link=TIMCTL[3]>
#### TIMCFG[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCFG[1]
   p.FLEXIO2.TIMCFG[1]
   p.FLEXIO3.TIMCFG[1]
#### SHIFTBUFNIS[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFNIS[2]
   p.FLEXIO2.SHIFTBUFNIS[2]
   p.FLEXIO3.SHIFTBUFNIS[2]
#### DR_TOGGLE
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPIO1.DR_TOGGLE
   p.GPIO5.DR_TOGGLE
   p.GPIO2.DR_TOGGLE
   p.GPIO3.DR_TOGGLE
   p.GPIO4.DR_TOGGLE
   p.GPIO6.DR_TOGGLE
   p.GPIO7.DR_TOGGLE
   p.GPIO8.DR_TOGGLE
   p.GPIO9.DR_TOGGLE
#### RXIMR5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR5
   p.CAN2.RXIMR5
#### rximr9
<link=RXIMR9>
#### RXIMR11
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR11
   p.CAN2.RXIMR11
#### rximr18
<link=RXIMR18>
#### RXIMR20
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR20
   p.CAN2.RXIMR20
#### rximr21
<link=RXIMR21>
#### RXIMR37
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR37
   p.CAN2.RXIMR37
#### RXIMR42
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR42
   p.CAN2.RXIMR42
#### rximr43
<link=RXIMR43>
#### rximr54
<link=RXIMR54>
#### MB0_32B_CS
<link=p.CAN3.MB0_32B_CS>
#### mb0_64b_cs
<link=MB0_64B_CS>
#### mb0_64b_id
<link=MB0_64B_ID>
#### mb0_16b_word1
<link=MB0_16B_WORD1>
#### WORD01
<link=p.CAN3.WORD01>
#### id2
<link=ID2>
#### MB0_32B_WORD7
<link=p.CAN3.MB0_32B_WORD7>
#### MB2_16B_ID
<link=p.CAN3.MB2_16B_ID>
#### mb0_64b_word13
<link=MB0_64B_WORD13>
#### mb1_32b_word4
<link=MB1_32B_WORD4>
#### mb2_16b_word2
<link=MB2_16B_WORD2>
#### mb4_8b_cs
<link=MB4_8B_CS>
#### mb5_8b_cs
<link=MB5_8B_CS>
#### ID6
<link=p.CAN3.ID6>
#### mb6_8b_word0
<link=MB6_8B_WORD0>
#### MB4_16B_WORD3
<link=p.CAN3.MB4_16B_WORD3>
#### mb5_16b_id
<link=MB5_16B_ID>
#### CS8
<link=p.CAN3.CS8>
#### mb1_64b_word14
<link=MB1_64B_WORD14>
#### MB3_32B_WORD2
<link=p.CAN3.MB3_32B_WORD2>
#### MB2_64B_CS
<link=p.CAN3.MB2_64B_CS>
#### MB2_64B_WORD1
<link=p.CAN3.MB2_64B_WORD1>
#### mb10_8b_word1
<link=MB10_8B_WORD1>
#### mb2_64b_word6
<link=MB2_64B_WORD6>
#### MB4_32B_WORD3
<link=p.CAN3.MB4_32B_WORD3>
#### WORD011
<link=p.CAN3.WORD011>
#### mb5_32b_cs
<link=MB5_32B_CS>
#### mb5_32b_id
<link=MB5_32B_ID>
#### mb13_8b_cs
<link=MB13_8B_CS>
#### mb5_32b_word0
<link=MB5_32B_WORD0>
#### mb2_64b_word15
<link=MB2_64B_WORD15>
#### cs14
<link=CS14>
#### MB14_8B_CS
<link=p.CAN3.MB14_8B_CS>
#### mb14_8b_id
<link=MB14_8B_ID>
#### MB3_64B_WORD1
<link=p.CAN3.MB3_64B_WORD1>
#### word015
<link=WORD015>
#### mb15_8b_word1
<link=MB15_8B_WORD1>
#### mb3_64b_word7
<link=MB3_64B_WORD7>
#### mb11_16b_word1
<link=MB11_16B_WORD1>
#### CS19
<link=p.CAN3.CS19>
#### mb19_8b_id
<link=MB19_8B_ID>
#### MB7_32B_WORD6
<link=p.CAN3.MB7_32B_WORD6>
#### mb19_8b_word1
<link=MB19_8B_WORD1>
#### WORD119
<link=p.CAN3.WORD119>
#### mb13_16b_word2
<link=MB13_16B_WORD2>
#### MB8_32B_WORD0
<link=p.CAN3.MB8_32B_WORD0>
#### CS21
<link=p.CAN3.CS21>
#### mb8_32b_word6
<link=MB8_32B_WORD6>
#### MB4_64B_WORD15
<link=p.CAN3.MB4_64B_WORD15>
#### mb15_16b_cs
<link=MB15_16B_CS>
#### mb15_16b_id
<link=MB15_16B_ID>
#### MB9_32B_ID
<link=p.CAN3.MB9_32B_ID>
#### ID23
<link=p.CAN3.ID23>
#### MB5_64B_WORD1
<link=p.CAN3.MB5_64B_WORD1>
#### MB24_8B_ID
<link=p.CAN3.MB24_8B_ID>
#### WORD024
<link=p.CAN3.WORD024>
#### mb10_32b_cs
<link=MB10_32B_CS>
#### MB25_8B_CS
<link=p.CAN3.MB25_8B_CS>
#### MB10_32B_ID
<link=p.CAN3.MB10_32B_ID>
#### mb10_32b_word4
<link=MB10_32B_WORD4>
#### MB26_8B_WORD0
<link=p.CAN3.MB26_8B_WORD0>
#### mb26_8b_word0
<link=MB26_8B_WORD0>
#### MB5_64B_WORD15
<link=p.CAN3.MB5_64B_WORD15>
#### mb18_16b_cs
<link=MB18_16B_CS>
#### id27
<link=ID27>
#### MB10_32B_WORD7
<link=p.CAN3.MB10_32B_WORD7>
#### mb6_64b_word3
<link=MB6_64B_WORD3>
#### WORD128
<link=p.CAN3.WORD128>
#### word029
<link=WORD029>
#### id30
<link=ID30>
#### mb12_32b_word5
<link=MB12_32B_WORD5>
#### cs32
<link=CS32>
#### mb7_64b_word2
<link=MB7_64B_WORD2>
#### mb21_16b_word3
<link=MB21_16B_WORD3>
#### MB7_64B_WORD4
<link=p.CAN3.MB7_64B_WORD4>
#### word033
<link=WORD033>
#### MB7_64B_WORD10
<link=p.CAN3.MB7_64B_WORD10>
#### mb14_32b_word0
<link=MB14_32B_WORD0>
#### MB35_8B_WORD0
<link=p.CAN3.MB35_8B_WORD0>
#### CS36
<link=p.CAN3.CS36>
#### MB14_32B_WORD3
<link=p.CAN3.MB14_32B_WORD3>
#### MB8_64B_WORD1
<link=p.CAN3.MB8_64B_WORD1>
#### WORD136
<link=p.CAN3.WORD136>
#### MB26_16B_CS
<link=p.CAN3.MB26_16B_CS>
#### MB26_16B_ID
<link=p.CAN3.MB26_16B_ID>
#### MB39_8B_WORD0
<link=p.CAN3.MB39_8B_WORD0>
#### MB8_64B_WORD13
<link=p.CAN3.MB8_64B_WORD13>
#### mb16_32b_word1
<link=MB16_32B_WORD1>
#### ID41
<link=p.CAN3.ID41>
#### MB9_64B_WORD3
<link=p.CAN3.MB9_64B_WORD3>
#### WORD142
<link=p.CAN3.WORD142>
#### word043
<link=WORD043>
#### mb29_16b_id
<link=MB29_16B_ID>
#### MB44_8B_CS
<link=p.CAN3.MB44_8B_CS>
#### MB9_64B_WORD13
<link=p.CAN3.MB9_64B_WORD13>
#### MB29_16B_WORD2
<link=p.CAN3.MB29_16B_WORD2>
#### mb44_8b_word1
<link=MB44_8B_WORD1>
#### MB45_8B_WORD1
<link=p.CAN3.MB45_8B_WORD1>
#### MB10_64B_WORD3
<link=p.CAN3.MB10_64B_WORD3>
#### MB46_8B_WORD0
<link=p.CAN3.MB46_8B_WORD0>
#### mb47_8b_cs
<link=MB47_8B_CS>
#### WORD047
<link=p.CAN3.WORD047>
#### MB10_64B_WORD11
<link=p.CAN3.MB10_64B_WORD11>
#### mb33_16b_cs
<link=MB33_16B_CS>
#### mb19_32b_word7
<link=MB19_32B_WORD7>
#### mb20_32b_id
<link=MB20_32B_ID>
#### MB11_64B_WORD3
<link=p.CAN3.MB11_64B_WORD3>
#### MB33_16B_WORD3
<link=p.CAN3.MB33_16B_WORD3>
#### mb20_32b_word3
<link=MB20_32B_WORD3>
#### word151
<link=WORD151>
#### id52
<link=ID52>
#### mb11_64b_word10
<link=MB11_64B_WORD10>
#### MB52_8B_WORD0
<link=p.CAN3.MB52_8B_WORD0>
#### mb52_8b_word1
<link=MB52_8B_WORD1>
#### mb35_16b_word0
<link=MB35_16B_WORD0>
#### MB35_16B_WORD2
<link=p.CAN3.MB35_16B_WORD2>
#### MB21_32B_WORD5
<link=p.CAN3.MB21_32B_WORD5>
#### CS55
<link=p.CAN3.CS55>
#### mb55_8b_id
<link=MB55_8B_ID>
#### mb12_64b_word5
<link=MB12_64B_WORD5>
#### WORD155
<link=p.CAN3.WORD155>
#### ID56
<link=p.CAN3.ID56>
#### MB12_64B_WORD7
<link=p.CAN3.MB12_64B_WORD7>
#### MB22_32B_WORD5
<link=p.CAN3.MB22_32B_WORD5>
#### mb37_16b_word3
<link=MB37_16B_WORD3>
#### MB38_16B_WORD0
<link=p.CAN3.MB38_16B_WORD0>
#### MB58_8B_ID
<link=p.CAN3.MB58_8B_ID>
#### word058
<link=WORD058>
#### cs59
<link=CS59>
#### MB23_32B_WORD4
<link=p.CAN3.MB23_32B_WORD4>
#### MB59_8B_ID
<link=p.CAN3.MB59_8B_ID>
#### mb13_64b_word7
<link=MB13_64B_WORD7>
#### word160
<link=WORD160>
#### cs61
<link=CS61>
#### RXIMR[23]
<link=p.CAN3.RXIMR[23]>
#### rximr[25]
<link=RXIMR[25]>
#### RXIMR[26]
<link=p.CAN3.RXIMR[26]>
#### RXIMR[30]
<link=p.CAN3.RXIMR[30]>
#### edcbt
<link=EDCBT>
#### ERFSR
<link=p.CAN3.ERFSR>
#### hr_time_stamp[0]
<link=HR_TIME_STAMP[0]>
#### HR_TIME_STAMP[5]
<link=p.CAN3.HR_TIME_STAMP[5]>
#### HR_TIME_STAMP[19]
<link=p.CAN3.HR_TIME_STAMP[19]>
#### HR_TIME_STAMP[22]
<link=p.CAN3.HR_TIME_STAMP[22]>
#### HR_TIME_STAMP[28]
<link=p.CAN3.HR_TIME_STAMP[28]>
#### HR_TIME_STAMP[36]
<link=p.CAN3.HR_TIME_STAMP[36]>
#### HR_TIME_STAMP[53]
<link=p.CAN3.HR_TIME_STAMP[53]>
#### hr_time_stamp[54]
<link=HR_TIME_STAMP[54]>
#### hr_time_stamp[60]
<link=HR_TIME_STAMP[60]>
#### erffel[0]
<link=ERFFEL[0]>
#### ERFFEL[12]
<link=p.CAN3.ERFFEL[12]>
#### ERFFEL[23]
<link=p.CAN3.ERFFEL[23]>
#### erffel[23]
<link=ERFFEL[23]>
#### erffel[26]
<link=ERFFEL[26]>
#### erffel[29]
<link=ERFFEL[29]>
#### ERFFEL[41]
<link=p.CAN3.ERFFEL[41]>
#### erffel[53]
<link=ERFFEL[53]>
#### ERFFEL[58]
<link=p.CAN3.ERFFEL[58]>
#### erffel[58]
<link=ERFFEL[58]>
#### ERFFEL[77]
<link=p.CAN3.ERFFEL[77]>
#### ERFFEL[97]
<link=p.CAN3.ERFFEL[97]>
#### ERFFEL[100]
<link=p.CAN3.ERFFEL[100]>
#### ERFFEL[113]
<link=p.CAN3.ERFFEL[113]>
#### ERFFEL[126]
<link=p.CAN3.ERFFEL[126]>
#### erffel[126]
<link=ERFFEL[126]>
#### capt1
<link=CAPT1>
#### cmpld12
<link=CMPLD12>
#### CMPLD22
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CMPLD22
   p.TMR2.CMPLD22
   p.TMR3.CMPLD22
   p.TMR4.CMPLD22
#### cmpld23
<link=CMPLD23>
#### dma3
<link=DMA3>
#### ENBL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.ENBL
   p.TMR2.ENBL
   p.TMR3.ENBL
   p.TMR4.ENBL
#### ocr2
<link=OCR2>
#### READ_FUSE_DATA
<link=p.OCOTP.READ_FUSE_DATA>
#### cfg2
<link=CFG2>
#### CFG4
<link=p.OCOTP.CFG4>
#### OTPMK1
<link=p.OCOTP.OTPMK1>
#### otpmk3
<link=OTPMK3>
#### srk4
<link=SRK4>
#### SRK6
<link=p.OCOTP.SRK6>
#### ROM_PATCH2
<link=p.OCOTP.ROM_PATCH2>
#### rom_patch2
<link=ROM_PATCH2>
#### GP40
<link=p.OCOTP.GP40>
#### SW_MUX_CTL_PAD_GPIO_EMC_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_04>
#### sw_mux_ctl_pad_gpio_emc_04
<link=SW_MUX_CTL_PAD_GPIO_EMC_04>
#### SW_MUX_CTL_PAD_GPIO_EMC_17
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_17>
#### sw_mux_ctl_pad_gpio_emc_17
<link=SW_MUX_CTL_PAD_GPIO_EMC_17>
#### SW_MUX_CTL_PAD_GPIO_EMC_22
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_22>
#### sw_mux_ctl_pad_gpio_emc_22
<link=SW_MUX_CTL_PAD_GPIO_EMC_22>
#### SW_MUX_CTL_PAD_GPIO_EMC_31
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_31>
#### sw_mux_ctl_pad_gpio_emc_31
<link=SW_MUX_CTL_PAD_GPIO_EMC_31>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_01>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_12>
#### sw_mux_ctl_pad_gpio_ad_b1_02
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_02>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_06>
#### sw_mux_ctl_pad_gpio_ad_b1_11
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_11>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_15>
#### sw_mux_ctl_pad_gpio_b0_00
<link=SW_MUX_CTL_PAD_GPIO_B0_00>
#### SW_MUX_CTL_PAD_GPIO_B0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_01>
#### SW_MUX_CTL_PAD_GPIO_SD_B0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_00>
#### sw_mux_ctl_pad_gpio_sd_b1_06
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_06>
#### sw_mux_ctl_pad_gpio_sd_b1_11
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_11>
#### sw_pad_ctl_pad_gpio_emc_09
<link=SW_PAD_CTL_PAD_GPIO_EMC_09>
#### SW_PAD_CTL_PAD_GPIO_EMC_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_14>
#### SW_PAD_CTL_PAD_GPIO_EMC_21
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_21>
#### sw_pad_ctl_pad_gpio_emc_31
<link=SW_PAD_CTL_PAD_GPIO_EMC_31>
#### sw_pad_ctl_pad_gpio_ad_b0_02
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_02>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_04>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_13>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_10>
#### sw_pad_ctl_pad_gpio_b0_01
<link=SW_PAD_CTL_PAD_GPIO_B0_01>
#### SW_PAD_CTL_PAD_GPIO_B1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_05>
#### sw_pad_ctl_pad_gpio_b1_07
<link=SW_PAD_CTL_PAD_GPIO_B1_07>
#### SW_PAD_CTL_PAD_GPIO_SD_B0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_00>
#### sw_pad_ctl_pad_gpio_sd_b1_02
<link=SW_PAD_CTL_PAD_GPIO_SD_B1_02>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_07>
#### CSI_PIXCLK_SELECT_INPUT
<link=p.IOMUXC.CSI_PIXCLK_SELECT_INPUT>
#### FLEXPWM2_PWMA3_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMA3_SELECT_INPUT>
#### LPSPI3_SDO_SELECT_INPUT
<link=p.IOMUXC.LPSPI3_SDO_SELECT_INPUT>
#### LPUART2_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART2_TX_SELECT_INPUT>
#### lpuart4_tx_select_input
<link=LPUART4_TX_SELECT_INPUT>
#### sai1_tx_bclk_select_input
<link=SAI1_TX_BCLK_SELECT_INPUT>
#### USDHC1_WP_SELECT_INPUT
<link=p.IOMUXC.USDHC1_WP_SELECT_INPUT>
#### usdhc2_data6_select_input
<link=USDHC2_DATA6_SELECT_INPUT>
#### xbar1_in02_select_input
<link=XBAR1_IN02_SELECT_INPUT>
#### sw_mux_ctl_pad_gpio_spi_b0_04
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_04>
#### SW_MUX_CTL_PAD_GPIO_SPI_B1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_01>
#### sw_pad_ctl_pad_gpio_spi_b0_01
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_01>
#### SW_PAD_CTL_PAD_GPIO_SPI_B1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_01>
#### ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1>
#### flexspi2_ipp_ind_io_fa_bit3_select_input
<link=FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT>
#### semc_i_ipp_ind_dqs4_select_input
<link=SEMC_I_IPP_IND_DQS4_SELECT_INPUT>
#### inten
<link=INTEN>
#### FLSHCR1B2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHCR1B2
   p.FLEXSPI2.FLSHCR1B2
#### flshcr2a2
<link=FLSHCR2A2>
#### DLLCRB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.DLLCRB
   p.FLEXSPI2.DLLCRB
#### RFDR[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[3]
   p.FLEXSPI2.RFDR[3]
#### RFDR[9]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[9]
   p.FLEXSPI2.RFDR[9]
#### rfdr[21]
<link=RFDR[21]>
#### rfdr[26]
<link=RFDR[26]>
#### RFDR[28]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[28]
   p.FLEXSPI2.RFDR[28]
#### TFDR[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[1]
   p.FLEXSPI2.TFDR[1]
#### tfdr[1]
<link=TFDR[1]>
#### TFDR[13]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[13]
   p.FLEXSPI2.TFDR[13]
#### tfdr[13]
<link=TFDR[13]>
#### TFDR[25]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[25]
   p.FLEXSPI2.TFDR[25]
#### tfdr[25]
<link=TFDR[25]>
#### LUT[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[2]
   p.FLEXSPI2.LUT[2]
#### LUT[13]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[13]
   p.FLEXSPI2.LUT[13]
#### LUT[22]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[22]
   p.FLEXSPI2.LUT[22]
#### lut[40]
<link=LUT[40]>
#### LUT[47]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[47]
   p.FLEXSPI2.LUT[47]
#### lut[47]
<link=LUT[47]>
#### OUT_CTRL_TOG
<link=p.PXP.OUT_CTRL_TOG>
#### OUT_PS_ULC
<link=p.PXP.OUT_PS_ULC>
#### ps_ctrl_tog
<link=PS_CTRL_TOG>
#### ps_pitch
<link=PS_PITCH>
#### AS_BUF
<link=p.PXP.AS_BUF>
#### AS_PITCH
<link=p.PXP.AS_PITCH>
#### CTRL1_CLR
<link=p.LCDIF.CTRL1_CLR>
#### CTRL2_TOG
<link=p.LCDIF.CTRL2_TOG>
#### cur_buf
<link=CUR_BUF>
#### vdctrl0_set
<link=VDCTRL0_SET>
#### VDCTRL0_TOG
<link=p.LCDIF.VDCTRL0_TOG>
#### pigeonctrl2
<link=PIGEONCTRL2>
#### PIGEON_1_1
<link=p.LCDIF.PIGEON_1_1>
#### pigeon_2_1
<link=PIGEON_2_1>
#### pigeon_5_2
<link=PIGEON_5_2>
#### pigeon_7_1
<link=PIGEON_7_1>
#### PIGEON_11_2
<link=p.LCDIF.PIGEON_11_2>
#### lut0_data
<link=LUT0_DATA>
#### cmd_rsp0
<link=CMD_RSP0>
#### data_buff_acc_port
<link=DATA_BUFF_ACC_PORT>
#### wtmk_lvl
<link=WTMK_LVL>
#### TFWR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TFWR
   p.ENET2.TFWR
#### rmon_t_mc_pkt
<link=RMON_T_MC_PKT>
#### RMON_T_JAB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_JAB
   p.ENET2.RMON_T_JAB
#### rmon_r_packets
<link=RMON_R_PACKETS>
#### RMON_R_BC_PKT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_BC_PKT
   p.ENET2.RMON_R_BC_PKT
#### RMON_R_JAB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_JAB
   p.ENET2.RMON_R_JAB
#### ATSTMP
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.ATSTMP
   p.ENET2.ATSTMP
#### TCCR3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TCCR3
   p.ENET2.TCCR3
#### tccr3
<link=TCCR3>
#### hwgeneral
<link=HWGENERAL>
#### hcsparams
<link=HCSPARAMS>
#### periodiclistbase
<link=PERIODICLISTBASE>
#### endptctrl1
<link=ENDPTCTRL1>
#### br2
<link=BR2>
#### NANDCR0
<link=p.SEMC.NANDCR0>
#### STS9
<link=p.SEMC.STS9>
#### channelctrl_tog
<link=CHANNELCTRL_TOG>
#### context
<link=CONTEXT>
#### PACKET2
<link=p.DCP.PACKET2>
#### CH0STAT_SET
<link=p.DCP.CH0STAT_SET>
#### CH2SEMA
<link=p.DCP.CH2SEMA>
#### SIS
<link=p.SPDIF.SIS>
#### srcsl
<link=SRCSL>
#### TCR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TCR1
   p.SAI2.TCR1
   p.SAI3.TCR1
#### tdr[3]
<link=TDR[3]>
#### rdr[2]
<link=RDR[2]>
#### RFR[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RFR[2]
   p.SAI2.RFR[2]
   p.SAI3.RFR[2]
#### RMR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RMR
   p.SAI2.RMR
   p.SAI3.RMR
#### CFGR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPSPI1.CFGR1
   p.LPSPI2.CFGR1
   p.LPSPI3.CFGR1
   p.LPSPI4.CFGR1
#### DMR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPSPI1.DMR0
   p.LPSPI2.DMR0
   p.LPSPI3.DMR0
   p.LPSPI4.DMR0
#### FSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPSPI1.FSR
   p.LPSPI2.FSR
   p.LPSPI3.FSR
   p.LPSPI4.FSR
#### trig0_chain_3_2
<link=TRIG0_CHAIN_3_2>
#### trig0_chain_5_4
<link=TRIG0_CHAIN_5_4>
#### TRIG0_RESULT_1_0
<link=p.ADC_ETC.TRIG0_RESULT_1_0>
#### TRIG0_RESULT_7_6
<link=p.ADC_ETC.TRIG0_RESULT_7_6>
#### trig2_chain_3_2
<link=TRIG2_CHAIN_3_2>
#### TRIG3_RESULT_1_0
<link=p.ADC_ETC.TRIG3_RESULT_1_0>
#### TRIG3_RESULT_3_2
<link=p.ADC_ETC.TRIG3_RESULT_3_2>
#### trig5_ctrl
<link=TRIG5_CTRL>
#### trig5_result_1_0
<link=TRIG5_RESULT_1_0>
#### trig5_result_3_2
<link=TRIG5_RESULT_3_2>
#### TRIG5_RESULT_7_6
<link=p.ADC_ETC.TRIG5_RESULT_7_6>
#### TRIG7_CTRL
<link=p.ADC_ETC.TRIG7_CTRL>
#### TRIG7_COUNTER
<link=p.ADC_ETC.TRIG7_COUNTER>
#### bfcrt010
<link=BFCRT010>
#### sel3
<link=SEL3>
#### SEL9
<link=p.XBARA1.SEL9>
#### SEL14
<link=p.XBARA1.SEL14>
#### SEL29
<link=p.XBARA1.SEL29>
#### sel31
<link=SEL31>
#### sel44
<link=SEL44>
#### sel53
<link=SEL53>
#### SEL58
<link=p.XBARA1.SEL58>
#### sel62
<link=SEL62>
#### SEL64
<link=p.XBARA1.SEL64>
#### posdh
<link=POSDH>
#### upos
<link=UPOS>
#### sm0val1
<link=SM0VAL1>
#### sm1val0
<link=SM1VAL0>
#### SM1CVAL0CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CVAL0CYC
   p.PWM2.SM1CVAL0CYC
   p.PWM3.SM1CVAL0CYC
   p.PWM4.SM1CVAL0CYC
#### sm1cval5cyc
<link=SM1CVAL5CYC>
#### SM2VAL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2VAL5
   p.PWM2.SM2VAL5
   p.PWM3.SM2VAL5
   p.PWM4.SM2VAL5
#### sm3ctrl
<link=SM3CTRL>
#### sm3fracval2
<link=SM3FRACVAL2>
#### SM3VAL4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3VAL4
   p.PWM2.SM3VAL4
   p.PWM3.SM3VAL4
   p.PWM4.SM3VAL4
#### SM3CVAL0CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL0CYC
   p.PWM2.SM3CVAL0CYC
   p.PWM3.SM3CVAL0CYC
   p.PWM4.SM3CVAL0CYC
#### SM3CVAL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL2
   p.PWM2.SM3CVAL2
   p.PWM3.SM3CVAL2
   p.PWM4.SM3CVAL2
#### SM3CVAL3CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL3CYC
   p.PWM2.SM3CVAL3CYC
   p.PWM3.SM3CVAL3CYC
   p.PWM4.SM3CVAL3CYC
#### sm3cval3cyc
<link=SM3CVAL3CYC>
#### SWCOUT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SWCOUT
   p.PWM2.SWCOUT
   p.PWM3.SWCOUT
   p.PWM4.SWCOUT
#### CPUID
<link=p.SystemControl.CPUID>
#### shpr3
<link=SHPR3>
#### NVICISER4
<link=p.NVIC.NVICISER4>
#### nvicispr4
<link=NVICISPR4>
#### nviciabr1
<link=NVICIABR1>
#### NVICIABR3
<link=p.NVIC.NVICIABR3>
#### NVICIP4
<link=p.NVIC.NVICIP4>
#### nvicip12
<link=NVICIP12>
#### NVICIP19
<link=p.NVIC.NVICIP19>
#### NVICIP21
<link=p.NVIC.NVICIP21>
#### nvicip34
<link=NVICIP34>
#### NVICIP43
<link=p.NVIC.NVICIP43>
#### NVICIP54
<link=p.NVIC.NVICIP54>
#### nvicip64
<link=NVICIP64>
#### NVICIP72
<link=p.NVIC.NVICIP72>
#### nvicip78
<link=NVICIP78>
#### NVICIP87
<link=p.NVIC.NVICIP87>
#### NVICIP90
<link=p.NVIC.NVICIP90>
#### nvicip99
<link=NVICIP99>
#### NVICIP103
<link=p.NVIC.NVICIP103>
#### NVICIP118
<link=p.NVIC.NVICIP118>
#### NVICIP125
<link=p.NVIC.NVICIP125>
#### nvicip130
<link=NVICIP130>
#### nvicip145
<link=NVICIP145>
#### nvicip152
<link=NVICIP152>
#### NVICIP155
<link=p.NVIC.NVICIP155>
