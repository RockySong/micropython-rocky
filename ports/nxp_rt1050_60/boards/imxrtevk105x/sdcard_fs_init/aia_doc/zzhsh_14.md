#### aipstz1.opacr
<link=p.AIPSTZ1.OPACR>
#### AIPSTZ1.OPACR3
<link=p.AIPSTZ1.OPACR3>
#### p.AIPSTZ2
<lang=dft>
base: 0x4017c000
MPR             OPACR           OPACR1          OPACR2          
OPACR3          OPACR4          
输入 p.AIPSTZ2.{reg_name} 以查看寄存器的详细信息
type p.AIPSTZ2.{reg_name} to check details of registers
</lang>
#### aipstz2.mpr
<link=p.AIPSTZ2.MPR>
#### p.aipstz2.opacr2
<link=p.AIPSTZ2.OPACR2>
#### p.AIPSTZ3.OPACR3
<lang=dft>
 (rw)  [1;33m0x4027c04c[0m (0x4027c000 + 0x004c)
Off-Platform Peripheral Access Control Registers
 (rw) (04)  [0;32mOPAC31[0m  - [03:00] -  Off-platform Peripheral Access Control 31
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC30[0m  - [07:04] -  Off-platform Peripheral Access Control 30
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC29[0m  - [11:08] -  Off-platform Peripheral Access Control 29
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC28[0m  - [15:12] -  Off-platform Peripheral Access Control 28
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC27[0m  - [19:16] -  Off-platform Peripheral Access Control 27
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC26[0m  - [23:20] -  Off-platform Peripheral Access Control 26
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC25[0m  - [27:24] -  Off-platform Peripheral Access Control 25
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC24[0m  - [31:28] -  Off-platform Peripheral Access Control 24
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
</lang>
#### AIPSTZ3.OPACR4
<link=p.AIPSTZ3.OPACR4>
#### p.DCDC.REG0
<lang=dft>
 (rw)  [1;33m0x40080000[0m (0x40080000 + 0x0000)
DCDC Register 0
 (rw) (01)  [0;32mPWD_ZCD[0m  - [00:00] -  power down the zero cross detection function for discontinuous conductor mode
 (rw) (01)  [0;32mDISABLE_AUTO_CLK_SWITCH[0m  - [01:01] -  Disable automatic clock switch from internal osc to xtal clock.
 (rw) (01)  [0;32mSEL_CLK[0m  - [02:02] -  select 24 MHz Crystal clock for DCDC, when dcdc_disable_auto_clk_switch is set.
 (rw) (01)  [0;32mPWD_OSC_INT[0m  - [03:03] -  Power down internal osc. Only set this bit, when 24 MHz crystal osc is availabl
 e
 (rw) (01)  [0;32mPWD_CUR_SNS_CMP[0m  - [04:04] -  The power down signal of the current detector.
 (rw) (03)  [0;32mCUR_SNS_THRSH[0m  - [07:05] -  Set the threshold of current detector, if the peak current of the inductor exce
 eds the threshold, the current detector will assert
 (rw) (01)  [0;32mPWD_OVERCUR_DET[0m  - [08:08] -  power down overcurrent detection comparator
 (rw) (02)  [0;32mOVERCUR_TRIG_ADJ[0m  - [10:09] -  The threshold of over current detection in run mode and power save mode: run mo
 de power save mode 0x0 1 A 0
 (rw) (01)  [0;32mPWD_CMP_BATT_DET[0m  - [11:11] -  set to "1" to power down the low voltage detection comparator
 (rw) (04)  [0;32mADJ_POSLIMIT_BUCK[0m  - [15:12] -  adjust value to poslimit_buck register
 (rw) (01)  [0;32mEN_LP_OVERLOAD_SNS[0m  - [16:16] -  enable the overload detection in power save mode, if current is larger than the
  overloading threshold (typical value is 50 mA), DCDC will switch to the run mo
 de automatically
 (rw) (01)  [0;32mPWD_HIGH_VOLT_DET[0m  - [17:17] -  power down overvoltage detection comparator
 (rw) (02)  [0;32mLP_OVERLOAD_THRSH[0m  - [19:18] -  the threshold of the counting number of charging times during the period that l
 p_overload_freq_sel sets in power save mode
 (rw) (01)  [0;32mLP_OVERLOAD_FREQ_SEL[0m  - [20:20] -  the period of counting the charging times in power save mode 0: eight 32k cycle
  1: sixteen 32k cycle
 (rw) (01)  [0;32mLP_HIGH_HYS[0m  - [21:21] -  Adjust hysteretic value in low power from 12.5mV to 25mV
 (rw) (01)  [0;32mPWD_CMP_OFFSET[0m  - [26:26] -  power down output range comparator
 (rw) (01)  [0;32mXTALOK_DISABLE[0m  - [27:27] -  1'b1: Disable xtalok detection circuit 1'b0: Enable xtalok detection circuit
 (rw) (01)  [0;32mCURRENT_ALERT_RESET[0m  - [28:28] -  reset current alert signal
 (rw) (01)  [0;32mXTAL_24M_OK[0m  - [29:29] -  set to 1 to switch internal ring osc to xtal 24M
 (ro) (01)  [0;32mSTS_DC_OK[0m  - [31:31] -  Status register to indicate DCDC status. 1'b1: DCDC already settled 1'b0: DCDC 
 is settling
</lang>
#### dcdc.reg3
<link=p.DCDC.REG3>
#### PIT.CVAL0
<link=p.PIT.CVAL0>
#### pit.tctrl0
<link=p.PIT.TCTRL0>
#### p.PIT.LDVAL1
<lang=dft>
 (rw)  [1;33m0x40084110[0m (0x40084000 + 0x0110)
Timer Load Value Register
 (rw) (32)  [0;32mTSV[0m  - [31:00] -  Timer Start Value
</lang>
#### PIT.TCTRL2
<link=p.PIT.TCTRL2>
#### pit.ltmr64h
<link=p.PIT.LTMR64H>
#### CMP1.FPR
<link=p.CMP1.FPR>
#### CMP1.MUXCR
<link=p.CMP1.MUXCR>
#### CMP3.CR1
<link=p.CMP3.CR1>
#### p.CMP3.FPR
<lang=dft>
 (rw)  [1;33m0x40094012[0m (0x40094010 + 0x0002)
CMP Filter Period Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Filter Sample Period
</lang>
#### p.cmp4
<link=p.CMP4>
#### CMP4.FPR
<link=p.CMP4.FPR>
#### p.IOMUXC_SNVS_GPR.GPR3
<lang=dft>
 (rw)  [1;33m0x400a400c[0m (0x400a4000 + 0x000c)
GPR3 General Purpose Register
 (rw) (01)  [0;32mLPSR_MODE_ENABLE[0m  - [00:00] -  Set to enable LPSR mode.
 (rw) (01)  [0;32mDCDC_STATUS_CAPT_CLR[0m  - [01:01] -  DCDC captured status clear
 (rw) (02)  [0;32mPOR_PULL_TYPE[0m  - [03:02] -  POR_B pad control
 (ro) (01)  [0;32mDCDC_IN_LOW_VOL[0m  - [16:16] -  DCDC_IN low voltage detect.
 (ro) (01)  [0;32mDCDC_OVER_CUR[0m  - [17:17] -  DCDC output over current alert
 (ro) (01)  [0;32mDCDC_OVER_VOL[0m  - [18:18] -  DCDC output over voltage alert
 (ro) (01)  [0;32mDCDC_STS_DC_OK[0m  - [19:19] -  DCDC status OK
</lang>
#### p.iomuxc_snvs.sw_pad_ctl_pad_pmic_stby_req
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_PMIC_STBY_REQ>
#### p.IOMUXC_GPR.GPR0
<lang=dft>
 (ro)  [1;33m0x400ac000[0m (0x400ac000 + 0x0000)
GPR0 General Purpose Register
</lang>
#### IOMUXC_GPR.GPR0
<link=p.IOMUXC_GPR.GPR0>
#### iomuxc_gpr.gpr5
<link=p.IOMUXC_GPR.GPR5>
#### p.IOMUXC_GPR.GPR16
<lang=dft>
 (rw)  [1;33m0x400ac040[0m (0x400ac000 + 0x0040)
GPR16 General Purpose Register
 (rw) (01)  [0;32mINIT_ITCM_EN[0m  - [00:00] -  ITCM enable initialization out of reset
      0 - INIT_ITCM_EN_0 :
         ITCM is disabled
      0x1 - INIT_ITCM_EN_1 :
         ITCM is enabled
 (rw) (01)  [0;32mINIT_DTCM_EN[0m  - [01:01] -  DTCM enable initialization out of reset
      0 - INIT_DTCM_EN_0 :
         DTCM is disabled
      0x1 - INIT_DTCM_EN_1 :
         DTCM is enabled
 (rw) (01)  [0;32mFLEXRAM_BANK_CFG_SEL[0m  - [02:02] -  FlexRAM bank config source select
      0 - FLEXRAM_BANK_CFG_SEL_0 :
         use fuse value to config
      0x1 - FLEXRAM_BANK_CFG_SEL_1 :
         use FLEXRAM_BANK_CFG to config
</lang>
#### p.iomuxc_gpr.gpr23
<link=p.IOMUXC_GPR.GPR23>
#### IOMUXC_GPR.GPR32
<link=p.IOMUXC_GPR.GPR32>
#### p.FLEXRAM.INT_SIG_EN
<lang=dft>
 (rw)  [1;33m0x400b0018[0m (0x400b0000 + 0x0018)
Interrupt Enable Register
 (rw) (01)  [0;32mITCM_ERR_SIG_EN[0m  - [03:03] -  ITCM Access Error Interrupt Enable
      0 - ITCM_ERR_SIG_EN_0 :
         Masked
      0x1 - ITCM_ERR_SIG_EN_1 :
         Enabled
 (rw) (01)  [0;32mDTCM_ERR_SIG_EN[0m  - [04:04] -  DTCM Access Error Interrupt Enable
      0 - DTCM_ERR_SIG_EN_0 :
         Masked
      0x1 - DTCM_ERR_SIG_EN_1 :
         Enabled
 (rw) (01)  [0;32mOCRAM_ERR_SIG_EN[0m  - [05:05] -  OCRAM Access Error Interrupt Enable
      0 - OCRAM_ERR_SIG_EN_0 :
         Masked
      0x1 - OCRAM_ERR_SIG_EN_1 :
         Enabled
</lang>
#### p.ewm
<link=p.EWM>
#### EWM.CLKCTRL
<link=p.EWM.CLKCTRL>
#### p.EWM.CLKPRESCALER
<lang=dft>
 (read-writeOnce)  [1;33m0x400b4005[0m (0x400b4000 + 0x0005)
Clock Prescaler Register
 (read-writeOnce) (08)  [0;32mCLK_DIV[0m  - [07:00] -  CLK_DIV
</lang>
#### ewm.clkprescaler
<link=p.EWM.CLKPRESCALER>
#### p.WDOG2.WCR
<lang=dft>
 (rw)  [1;33m0x400d0000[0m (0x400d0000 + 0x0000)
Watchdog Control Register
 (rw) (01)  [0;32mWDZST[0m  - [00:00] -  WDZST
      0 - WDZST_0 :
         Continue timer operation (Default).
      0x1 - WDZST_1 :
         Suspend the watchdog timer.
 (rw) (01)  [0;32mWDBG[0m  - [01:01] -  WDBG
      0 - WDBG_0 :
         Continue WDOG timer operation (Default).
      0x1 - WDBG_1 :
         Suspend the watchdog timer.
 (rw) (01)  [0;32mWDE[0m  - [02:02] -  WDE
      0 - WDE_0 :
         Disable the Watchdog (Default).
      0x1 - WDE_1 :
         Enable the Watchdog.
 (rw) (01)  [0;32mWDT[0m  - [03:03] -  WDT
      0 - WDT_0 :
         No effect on WDOG_B (Default).
      0x1 - WDT_1 :
         Assert WDOG_B upon a Watchdog Time-out event.
 (rw) (01)  [0;32mSRS[0m  - [04:04] -  SRS
      0 - SRS_0 :
         Assert system reset signal.
      0x1 - SRS_1 :
         No effect on the system (Default).
 (rw) (01)  [0;32mWDA[0m  - [05:05] -  WDA
      0 - WDA_0 :
         Assert WDOG_B output.
      0x1 - WDA_1 :
         No effect on system (Default).
 (rw) (01)  [0;32mSRE[0m  - [06:06] -  software reset extension, an option way to generate software reset
      0 - SRE_0 :
         using original way to generate software reset (default)
      0x1 - SRE_1 :
         using new way to generate software reset.
 (rw) (01)  [0;32mWDW[0m  - [07:07] -  WDW
      0 - WDW_0 :
         Continue WDOG timer operation (Default).
      0x1 - WDW_1 :
         Suspend WDOG timer operation.
 (rw) (08)  [0;32mWT[0m  - [15:08] -  WT
      0 - WT_0 :
         - 0.5 Seconds (Default).
      0x1 - WT_1 :
         - 1.0 Seconds.
      0x2 - WT_2 :
         - 1.5 Seconds.
      0x3 - WT_3 :
         - 2.0 Seconds.
      0xFF - WT_255 :
         - 128 Seconds.
</lang>
#### wdog2.wcr
<link=p.WDOG2.WCR>
#### p.RTWDOG
<lang=dft>
base: 0x400bc000
CNT             CS              TOVAL           WIN             
输入 p.RTWDOG.{reg_name} 以查看寄存器的详细信息
type p.RTWDOG.{reg_name} to check details of registers
</lang>
#### p.adc1.hc0
<link=p.ADC1.HC0>
#### p.ADC1.HC2
<lang=dft>
 (rw)  [1;33m0x400c4008[0m (0x400c4000 + 0x0008)
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
#### ADC1.HC3
<link=p.ADC1.HC3>
#### adc1.hc4
<link=p.ADC1.HC4>
#### p.ADC1.R1
<lang=dft>
 (ro)  [1;33m0x400c4028[0m (0x400c4000 + 0x0028)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### ADC1.R2
<link=p.ADC1.R2>
#### adc1.gc
<link=p.ADC1.GC>
#### p.ADC2
<lang=dft>
base: 0x400c8000
CAL             CFG             CV              GC              
GS              HC0             HC1             HC2             
HC3             HC4             HC5             HC6             
HC7             HS              OFS             R0              
R1              R2              R3              R4              
R5              R6              R7              
输入 p.ADC2.{reg_name} 以查看寄存器的详细信息
type p.ADC2.{reg_name} to check details of registers
</lang>
#### ADC2.HC1
<link=p.ADC2.HC1>
#### p.ADC2.HC6
<lang=dft>
 (rw)  [1;33m0x400c8018[0m (0x400c8000 + 0x0018)
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
#### adc2.hs
<link=p.ADC2.HS>
#### p.adc2.r0
<link=p.ADC2.R0>
#### p.ADC2.GS
<lang=dft>
 (rw)  [1;33m0x400c804c[0m (0x400c8000 + 0x004c)
General status register
 (ro) (01)  [0;32mADACT[0m  - [00:00] -  Conversion Active
      0 - ADACT_0 :
         Conversion not in progress.
      0x1 - ADACT_1 :
         Conversion in progress.
 (rw) (01)  [0;32mCALF[0m  - [01:01] -  Calibration Failed Flag
      0 - CALF_0 :
         Calibration completed normally.
      0x1 - CALF_1 :
         Calibration failed. ADC accuracy specifications are not guaranteed.
 (rw) (01)  [0;32mAWKST[0m  - [02:02] -  Asynchronous wakeup interrupt status
      0 - AWKST_0 :
         No asynchronous interrupt.
      0x1 - AWKST_1 :
         Asynchronous wake up interrupt occurred in stop mode.
</lang>
#### p.trng.sblim
<link=p.TRNG.SBLIM>
#### trng.frqmin
<link=p.TRNG.FRQMIN>
#### TRNG.FRQCNT
<link=p.TRNG.FRQCNT>
#### p.TRNG.SCR4C
<lang=dft>
 (ro)  [1;33m0x400cc030[0m (0x400cc000 + 0x0030)
Statistical Check Run Length 4 Count Register
 (ro) (12)  [0;32mR4_0_CT[0m  - [11:00] -  Runs of Zero, Length 4 Count
 (ro) (12)  [0;32mR4_1_CT[0m  - [27:16] -  Runs of One, Length 4 Count
</lang>
#### trng.scr4l
<link=p.TRNG.SCR4L>
#### TRNG.SCR4L
<link=p.TRNG.SCR4L>
#### trng.scr6pl
<link=p.TRNG.SCR6PL>
#### TRNG.ENT[5]
<link=p.TRNG.ENT[5]>
#### TRNG.ENT[8]
<link=p.TRNG.ENT[8]>
#### TRNG.ENT[10]
<link=p.TRNG.ENT[10]>
#### p.TRNG.ENT[12]
<lang=dft>
 (ro)  [1;33m0x400cc070[0m (0x400cc000 + 0x0070)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### p.TRNG.PKRCNTDC
<lang=dft>
 (ro)  [1;33m0x400cc098[0m (0x400cc000 + 0x0098)
Statistical Check Poker Count D and C Register
 (ro) (16)  [0;32mPKR_C_CT[0m  - [15:00] -  Poker Ch Count
 (ro) (16)  [0;32mPKR_D_CT[0m  - [31:16] -  Poker Dh Count
</lang>
#### TRNG.INT_MASK
<link=p.TRNG.INT_MASK>
#### p.SNVS
<lang=dft>
base: 0x400d4000
HPCOMR          HPCR            HPHACIVR        HPHACR          
HPLR            HPRTCLR         HPRTCMR         HPSICR          
HPSR            HPSVCR          HPSVSR          HPTALR          
HPTAMR          HPVIDR1         HPVIDR2         LPCR            
LPGPR0_legacy_alias  LPGPR[0]        LPGPR[1]        LPGPR[2]        
LPGPR[3]        LPGPR[4]        LPGPR[5]        LPGPR[6]        
LPGPR[7]        LPGPR_alias[0]  LPGPR_alias[1]  LPGPR_alias[2]  
LPGPR_alias[3]  LPLR            LPMKCR          LPPGDR          
LPSMCLR         LPSMCMR         LPSR            LPSRTCLR        
LPSRTCMR        LPSVCR          LPTAR           LPTDCR          
LPZMKR[0]       LPZMKR[1]       LPZMKR[2]       LPZMKR[3]       
LPZMKR[4]       LPZMKR[5]       LPZMKR[6]       LPZMKR[7]       
输入 p.SNVS.{reg_name} 以查看寄存器的详细信息
type p.SNVS.{reg_name} to check details of registers
</lang>
#### SNVS.HPLR
<link=p.SNVS.HPLR>
#### p.SNVS.HPHACR
<lang=dft>
 (ro)  [1;33m0x400d4020[0m (0x400d4000 + 0x0020)
SNVS_HP High Assurance Counter Register
 (ro) (32)  [0;32mHAC_COUNTER[0m  - [31:00] -  High Assurance Counter When the HAC_EN bit is set and the SSM is in the soft fa
 il state, this counter starts to count down with the system clock
</lang>
#### SNVS.LPSVCR
<link=p.SNVS.LPSVCR>
#### p.snvs.lppgdr
<link=p.SNVS.LPPGDR>
#### SNVS.LPZMKR[4]
<link=p.SNVS.LPZMKR[4]>
#### SNVS.LPGPR[3]
<link=p.SNVS.LPGPR[3]>
#### p.snvs.lpgpr[5]
<link=p.SNVS.LPGPR[5]>
#### CCM_ANALOG.PLL_USB2
<link=p.CCM_ANALOG.PLL_USB2>
#### ccm_analog.pll_sys_set
<link=p.CCM_ANALOG.PLL_SYS_SET>
#### p.CCM_ANALOG.PLL_VIDEO
<lang=dft>
 (rw)  [1;33m0x400d80a0[0m (0x400d8000 + 0x00a0)
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
#### ccm_analog.pll_video_tog
<link=p.CCM_ANALOG.PLL_VIDEO_TOG>
#### p.ccm_analog.pll_video_num
<link=p.CCM_ANALOG.PLL_VIDEO_NUM>
#### ccm_analog.pll_video_num
<link=p.CCM_ANALOG.PLL_VIDEO_NUM>
#### CCM_ANALOG.PLL_ENET_SET
<link=p.CCM_ANALOG.PLL_ENET_SET>
#### CCM_ANALOG.MISC1_TOG
<link=p.CCM_ANALOG.MISC1_TOG>
#### PMU.REG_2P5_SET
<link=p.PMU.REG_2P5_SET>
#### pmu.reg_core
<link=p.PMU.REG_CORE>
#### p.PMU.MISC0_CLR
<lang=dft>
 (rw)  [1;33m0x400d8158[0m (0x400d8000 + 0x0158)
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
#### pmu.misc0_tog
<link=p.PMU.MISC0_TOG>
#### pmu.misc1_set
<link=p.PMU.MISC1_SET>
#### TEMPMON.TEMPSENSE0_CLR
<link=p.TEMPMON.TEMPSENSE0_CLR>
#### tempmon.tempsense1_clr
<link=p.TEMPMON.TEMPSENSE1_CLR>
#### p.USB_ANALOG.USB1_VBUS_DETECT
<lang=dft>
 (rw)  [1;33m0x400d81a0[0m (0x400d8000 + 0x01a0)
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
#### usb_analog.usb1_chrg_detect
<link=p.USB_ANALOG.USB1_CHRG_DETECT>
#### p.USB_ANALOG.USB1_CHRG_DETECT_SET
<lang=dft>
 (rw)  [1;33m0x400d81b4[0m (0x400d8000 + 0x01b4)
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
#### p.USB_ANALOG.USB1_CHRG_DETECT_CLR
<lang=dft>
 (rw)  [1;33m0x400d81b8[0m (0x400d8000 + 0x01b8)
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
#### p.USB_ANALOG.USB1_MISC
<lang=dft>
 (rw)  [1;33m0x400d81f0[0m (0x400d8000 + 0x01f0)
USB Misc Register
 (rw) (01)  [0;32mHS_USE_EXTERNAL_R[0m  - [00:00] -  Use external resistor to generate the current bias for the high speed transmitt
 er
 (rw) (01)  [0;32mEN_DEGLITCH[0m  - [01:01] -  Enable the deglitching circuit of the USB PLL output.
 (rw) (01)  [0;32mEN_CLK_UTMI[0m  - [30:30] -  Enables the clk to the UTMI block.
</lang>
#### USB_ANALOG.USB1_MISC_SET
<link=p.USB_ANALOG.USB1_MISC_SET>
#### p.usb_analog.usb2_vbus_detect
<link=p.USB_ANALOG.USB2_VBUS_DETECT>
#### p.usb_analog.usb2_chrg_detect
<link=p.USB_ANALOG.USB2_CHRG_DETECT>
#### p.USB_ANALOG.USB2_CHRG_DETECT_CLR
<lang=dft>
 (rw)  [1;33m0x400d8218[0m (0x400d8000 + 0x0218)
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
#### p.usb_analog.usb2_chrg_detect_clr
<link=p.USB_ANALOG.USB2_CHRG_DETECT_CLR>
#### usb_analog.usb2_vbus_detect_stat
<link=p.USB_ANALOG.USB2_VBUS_DETECT_STAT>
#### usb_analog.usb2_loopback_set
<link=p.USB_ANALOG.USB2_LOOPBACK_SET>
#### USB_ANALOG.USB2_MISC
<link=p.USB_ANALOG.USB2_MISC>
#### XTALOSC24M.LOWPWR_CTRL_SET
<link=p.XTALOSC24M.LOWPWR_CTRL_SET>
#### XTALOSC24M.LOWPWR_CTRL_TOG
<link=p.XTALOSC24M.LOWPWR_CTRL_TOG>
#### p.xtalosc24m.osc_config0_tog
<link=p.XTALOSC24M.OSC_CONFIG0_TOG>
#### p.XTALOSC24M.OSC_CONFIG1_SET
<lang=dft>
 (rw)  [1;33m0x400d82b4[0m (0x400d8000 + 0x02b4)
XTAL OSC Configuration 1 Register
 (rw) (12)  [0;32mCOUNT_RC_TRG[0m  - [11:00] -  The target count used to tune the RC OSC frequency
 (rw) (12)  [0;32mCOUNT_RC_CUR[0m  - [31:20] -  The current tuning value in use.
</lang>
#### usbphy1.pwd_clr
<link=p.USBPHY1.PWD_CLR>
#### p.usbphy1.tx_set
<link=p.USBPHY1.TX_SET>
#### p.usbphy1.rx
<link=p.USBPHY1.RX>
#### usbphy1.rx_clr
<link=p.USBPHY1.RX_CLR>
#### p.USBPHY1.CTRL_SET
<lang=dft>
 (rw)  [1;33m0x400d9034[0m (0x400d9000 + 0x0034)
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
#### p.usbphy1.debug
<link=p.USBPHY1.DEBUG>
#### p.USBPHY1.DEBUG_SET
<lang=dft>
 (rw)  [1;33m0x400d9054[0m (0x400d9000 + 0x0054)
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
#### p.usbphy2.pwd
<link=p.USBPHY2.PWD>
#### p.usbphy2.pwd_clr
<link=p.USBPHY2.PWD_CLR>
#### usbphy2.tx_tog
<link=p.USBPHY2.TX_TOG>
#### usbphy2.rx
<link=p.USBPHY2.RX>
#### p.USBPHY2.RX_CLR
<lang=dft>
 (rw)  [1;33m0x400da028[0m (0x400da000 + 0x0028)
USB PHY Receiver Control Register
 (rw) (03)  [0;32mENVADJ[0m  - [02:00] -  The ENVADJ field adjusts the trip point for the envelope detector
 (ro) (01)  [0;32mRSVD0[0m  - [03:03] -  Reserved.
 (rw) (03)  [0;32mDISCONADJ[0m  - [06:04] -  The DISCONADJ field adjusts the trip point for the disconnect detector: 000 = T
 rip-Level Voltage is 0
 (ro) (15)  [0;32mRSVD1[0m  - [21:07] -  Reserved.
 (rw) (01)  [0;32mRXDBYPASS[0m  - [22:22] -  0 = Normal operation
 (ro) (09)  [0;32mRSVD2[0m  - [31:23] -  Reserved.
</lang>
#### usbphy2.ctrl
<link=p.USBPHY2.CTRL>
#### p.usbphy2.ctrl_set
<link=p.USBPHY2.CTRL_SET>
#### usbphy2.ctrl_tog
<link=p.USBPHY2.CTRL_TOG>
#### USBPHY2.DEBUG1_SET
<link=p.USBPHY2.DEBUG1_SET>
#### p.CSU
<lang=dft>
base: 0x400dc000
CSL0            CSL1            CSL10           CSL11           
CSL12           CSL13           CSL14           CSL15           
CSL16           CSL17           CSL18           CSL19           
CSL2            CSL20           CSL21           CSL22           
CSL23           CSL24           CSL25           CSL26           
CSL27           CSL28           CSL29           CSL3            
CSL30           CSL31           CSL4            CSL5            
CSL6            CSL7            CSL8            CSL9            
HP0             HPCONTROL0      SA              
输入 p.CSU.{reg_name} 以查看寄存器的详细信息
type p.CSU.{reg_name} to check details of registers
</lang>
#### p.CSU.CSL1
<lang=dft>
 (rw)  [1;33m0x400dc004[0m (0x400dc000 + 0x0004)
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
#### p.csu.csl1
<link=p.CSU.CSL1>
#### p.CSU.CSL15
<lang=dft>
 (rw)  [1;33m0x400dc03c[0m (0x400dc000 + 0x003c)
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
#### p.csu.csl15
<link=p.CSU.CSL15>
#### csu.csl22
<link=p.CSU.CSL22>
#### CSU.CSL22
<link=p.CSU.CSL22>
#### p.CSU.CSL28
<lang=dft>
 (rw)  [1;33m0x400dc070[0m (0x400dc000 + 0x0070)
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
#### p.csu.csl28
<link=p.CSU.CSL28>
#### p.TSC
<lang=dft>
base: 0x400e0000
BASIC_SETTING   DEBUG_MODE      DEBUG_MODE2     FLOW_CONTROL    
INT_EN          INT_SIG_EN      INT_STATUS      MEASEURE_VALUE  
PRE_CHARGE_TIME 
输入 p.TSC.{reg_name} 以查看寄存器的详细信息
type p.TSC.{reg_name} to check details of registers
</lang>
#### TSC.BASIC_SETTING
<link=p.TSC.BASIC_SETTING>
#### p.DMA0.CERR
<lang=dft>
 (rw)  [1;33m0x400e801e[0m (0x400e8000 + 0x001e)
Clear Error Register
 (rw) (05)  [0;32mCERR[0m  - [04:00] -  Clear Error Indicator
 (rw) (01)  [0;32mCAEI[0m  - [06:06] -  Clear All Error Indicators
      0 - CAEI_0 :
         Clear only the ERR bit specified in the CERR field
      0x1 - CAEI_1 :
         Clear all bits in ERR
 (rw) (01)  [0;32mNOP[0m  - [07:07] -  No Op enable
      0 - NOP_0 :
         Normal operation
      0x1 - NOP_1 :
         No operation, ignore the other bits in this register
</lang>
#### p.DMA0.EARS
<lang=dft>
 (rw)  [1;33m0x400e8044[0m (0x400e8000 + 0x0044)
Enable Asynchronous Request in Stop Register
 (rw) (01)  [0;32mEDREQ_0[0m  - [00:00] -  Enable asynchronous DMA request in stop mode for channel 0.
      0 - EDREQ_0_0 :
         Disable asynchronous DMA request for channel 0.
      0x1 - EDREQ_0_1 :
         Enable asynchronous DMA request for channel 0.
 (rw) (01)  [0;32mEDREQ_1[0m  - [01:01] -  Enable asynchronous DMA request in stop mode for channel 1.
      0 - EDREQ_1_0 :
         Disable asynchronous DMA request for channel 1
      0x1 - EDREQ_1_1 :
         Enable asynchronous DMA request for channel 1.
 (rw) (01)  [0;32mEDREQ_2[0m  - [02:02] -  Enable asynchronous DMA request in stop mode for channel 2.
      0 - EDREQ_2_0 :
         Disable asynchronous DMA request for channel 2.
      0x1 - EDREQ_2_1 :
         Enable asynchronous DMA request for channel 2.
 (rw) (01)  [0;32mEDREQ_3[0m  - [03:03] -  Enable asynchronous DMA request in stop mode for channel 3.
      0 - EDREQ_3_0 :
         Disable asynchronous DMA request for channel 3.
      0x1 - EDREQ_3_1 :
         Enable asynchronous DMA request for channel 3.
 (rw) (01)  [0;32mEDREQ_4[0m  - [04:04] -  Enable asynchronous DMA request in stop mode for channel 4
      0 - EDREQ_4_0 :
         Disable asynchronous DMA request for channel 4.
      0x1 - EDREQ_4_1 :
         Enable asynchronous DMA request for channel 4.
 (rw) (01)  [0;32mEDREQ_5[0m  - [05:05] -  Enable asynchronous DMA request in stop mode for channel 5
      0 - EDREQ_5_0 :
         Disable asynchronous DMA request for channel 5.
      0x1 - EDREQ_5_1 :
         Enable asynchronous DMA request for channel 5.
 (rw) (01)  [0;32mEDREQ_6[0m  - [06:06] -  Enable asynchronous DMA request in stop mode for channel 6
      0 - EDREQ_6_0 :
         Disable asynchronous DMA request for channel 6.
      0x1 - EDREQ_6_1 :
         Enable asynchronous DMA request for channel 6.
 (rw) (01)  [0;32mEDREQ_7[0m  - [07:07] -  Enable asynchronous DMA request in stop mode for channel 7
      0 - EDREQ_7_0 :
         Disable asynchronous DMA request for channel 7.
      0x1 - EDREQ_7_1 :
         Enable asynchronous DMA request for channel 7.
 (rw) (01)  [0;32mEDREQ_8[0m  - [08:08] -  Enable asynchronous DMA request in stop mode for channel 8
      0 - EDREQ_8_0 :
         Disable asynchronous DMA request for channel 8.
      0x1 - EDREQ_8_1 :
         Enable asynchronous DMA request for channel 8.
 (rw) (01)  [0;32mEDREQ_9[0m  - [09:09] -  Enable asynchronous DMA request in stop mode for channel 9
      0 - EDREQ_9_0 :
         Disable asynchronous DMA request for channel 9.
      0x1 - EDREQ_9_1 :
         Enable asynchronous DMA request for channel 9.
 (rw) (01)  [0;32mEDREQ_10[0m  - [10:10] -  Enable asynchronous DMA request in stop mode for channel 10
      0 - EDREQ_10_0 :
         Disable asynchronous DMA request for channel 10.
      0x1 - EDREQ_10_1 :
         Enable asynchronous DMA request for channel 10.
 (rw) (01)  [0;32mEDREQ_11[0m  - [11:11] -  Enable asynchronous DMA request in stop mode for channel 11
      0 - EDREQ_11_0 :
         Disable asynchronous DMA request for channel 11.
      0x1 - EDREQ_11_1 :
         Enable asynchronous DMA request for channel 11.
 (rw) (01)  [0;32mEDREQ_12[0m  - [12:12] -  Enable asynchronous DMA request in stop mode for channel 12
      0 - EDREQ_12_0 :
         Disable asynchronous DMA request for channel 12.
      0x1 - EDREQ_12_1 :
         Enable asynchronous DMA request for channel 12.
 (rw) (01)  [0;32mEDREQ_13[0m  - [13:13] -  Enable asynchronous DMA request in stop mode for channel 13
      0 - EDREQ_13_0 :
         Disable asynchronous DMA request for channel 13.
      0x1 - EDREQ_13_1 :
         Enable asynchronous DMA request for channel 13.
 (rw) (01)  [0;32mEDREQ_14[0m  - [14:14] -  Enable asynchronous DMA request in stop mode for channel 14
      0 - EDREQ_14_0 :
         Disable asynchronous DMA request for channel 14.
      0x1 - EDREQ_14_1 :
         Enable asynchronous DMA request for channel 14.
 (rw) (01)  [0;32mEDREQ_15[0m  - [15:15] -  Enable asynchronous DMA request in stop mode for channel 15
      0 - EDREQ_15_0 :
         Disable asynchronous DMA request for channel 15.
      0x1 - EDREQ_15_1 :
         Enable asynchronous DMA request for channel 15.
 (rw) (01)  [0;32mEDREQ_16[0m  - [16:16] -  Enable asynchronous DMA request in stop mode for channel 16
      0 - EDREQ_16_0 :
         Disable asynchronous DMA request for channel 16
      0x1 - EDREQ_16_1 :
         Enable asynchronous DMA request for channel 16
 (rw) (01)  [0;32mEDREQ_17[0m  - [17:17] -  Enable asynchronous DMA request in stop mode for channel 17
      0 - EDREQ_17_0 :
         Disable asynchronous DMA request for channel 17
      0x1 - EDREQ_17_1 :
         Enable asynchronous DMA request for channel 17
 (rw) (01)  [0;32mEDREQ_18[0m  - [18:18] -  Enable asynchronous DMA request in stop mode for channel 18
      0 - EDREQ_18_0 :
         Disable asynchronous DMA request for channel 18
      0x1 - EDREQ_18_1 :
         Enable asynchronous DMA request for channel 18
 (rw) (01)  [0;32mEDREQ_19[0m  - [19:19] -  Enable asynchronous DMA request in stop mode for channel 19
      0 - EDREQ_19_0 :
         Disable asynchronous DMA request for channel 19
      0x1 - EDREQ_19_1 :
         Enable asynchronous DMA request for channel 19
 (rw) (01)  [0;32mEDREQ_20[0m  - [20:20] -  Enable asynchronous DMA request in stop mode for channel 20
      0 - EDREQ_20_0 :
         Disable asynchronous DMA request for channel 20
      0x1 - EDREQ_20_1 :
         Enable asynchronous DMA request for channel 20
 (rw) (01)  [0;32mEDREQ_21[0m  - [21:21] -  Enable asynchronous DMA request in stop mode for channel 21
      0 - EDREQ_21_0 :
         Disable asynchronous DMA request for channel 21
      0x1 - EDREQ_21_1 :
         Enable asynchronous DMA request for channel 21
 (rw) (01)  [0;32mEDREQ_22[0m  - [22:22] -  Enable asynchronous DMA request in stop mode for channel 22
      0 - EDREQ_22_0 :
         Disable asynchronous DMA request for channel 22
      0x1 - EDREQ_22_1 :
         Enable asynchronous DMA request for channel 22
 (rw) (01)  [0;32mEDREQ_23[0m  - [23:23] -  Enable asynchronous DMA request in stop mode for channel 23
      0 - EDREQ_23_0 :
         Disable asynchronous DMA request for channel 23
      0x1 - EDREQ_23_1 :
         Enable asynchronous DMA request for channel 23
 (rw) (01)  [0;32mEDREQ_24[0m  - [24:24] -  Enable asynchronous DMA request in stop mode for channel 24
      0 - EDREQ_24_0 :
         Disable asynchronous DMA request for channel 24
      0x1 - EDREQ_24_1 :
         Enable asynchronous DMA request for channel 24
 (rw) (01)  [0;32mEDREQ_25[0m  - [25:25] -  Enable asynchronous DMA request in stop mode for channel 25
      0 - EDREQ_25_0 :
         Disable asynchronous DMA request for channel 25
      0x1 - EDREQ_25_1 :
         Enable asynchronous DMA request for channel 25
 (rw) (01)  [0;32mEDREQ_26[0m  - [26:26] -  Enable asynchronous DMA request in stop mode for channel 26
      0 - EDREQ_26_0 :
         Disable asynchronous DMA request for channel 26
      0x1 - EDREQ_26_1 :
         Enable asynchronous DMA request for channel 26
 (rw) (01)  [0;32mEDREQ_27[0m  - [27:27] -  Enable asynchronous DMA request in stop mode for channel 27
      0 - EDREQ_27_0 :
         Disable asynchronous DMA request for channel 27
      0x1 - EDREQ_27_1 :
         Enable asynchronous DMA request for channel 27
 (rw) (01)  [0;32mEDREQ_28[0m  - [28:28] -  Enable asynchronous DMA request in stop mode for channel 28
      0 - EDREQ_28_0 :
         Disable asynchronous DMA request for channel 28
      0x1 - EDREQ_28_1 :
         Enable asynchronous DMA request for channel 28
 (rw) (01)  [0;32mEDREQ_29[0m  - [29:29] -  Enable asynchronous DMA request in stop mode for channel 29
      0 - EDREQ_29_0 :
         Disable asynchronous DMA request for channel 29
      0x1 - EDREQ_29_1 :
         Enable asynchronous DMA request for channel 29
 (rw) (01)  [0;32mEDREQ_30[0m  - [30:30] -  Enable asynchronous DMA request in stop mode for channel 30
      0 - EDREQ_30_0 :
         Disable asynchronous DMA request for channel 30
      0x1 - EDREQ_30_1 :
         Enable asynchronous DMA request for channel 30
 (rw) (01)  [0;32mEDREQ_31[0m  - [31:31] -  Enable asynchronous DMA request in stop mode for channel 31
      0 - EDREQ_31_0 :
         Disable asynchronous DMA request for channel 31
      0x1 - EDREQ_31_1 :
         Enable asynchronous DMA request for channel 31
</lang>
#### p.dma0.dchpri6
<link=p.DMA0.DCHPRI6>
#### DMA0.DCHPRI4
<link=p.DMA0.DCHPRI4>
#### p.dma0.dchpri11
<link=p.DMA0.DCHPRI11>
#### dma0.dchpri11
<link=p.DMA0.DCHPRI11>
#### DMA0.DCHPRI10
<link=p.DMA0.DCHPRI10>
#### dma0.dchpri8
<link=p.DMA0.DCHPRI8>
#### p.DMA0.DCHPRI22
<lang=dft>
 (rw)  [1;33m0x400e8115[0m (0x400e8000 + 0x0115)
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
#### DMA0.DCHPRI25
<link=p.DMA0.DCHPRI25>
#### p.DMA0.DCHPRI31
<lang=dft>
 (rw)  [1;33m0x400e811c[0m (0x400e8000 + 0x011c)
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
#### p.dma0.dchpri29
<link=p.DMA0.DCHPRI29>
#### dma0.tcd0_saddr
<link=p.DMA0.TCD0_SADDR>
#### p.DMA0.TCD0_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9006[0m (0x400e8000 + 0x1006)
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
#### DMA0.TCD0_SLAST
<link=p.DMA0.TCD0_SLAST>
#### p.DMA0.TCD0_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e901e[0m (0x400e8000 + 0x101e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD1_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9024[0m (0x400e8000 + 0x1024)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.DMA0.TCD1_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9030[0m (0x400e8000 + 0x1030)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### dma0.tcd1_citer_elinkyes
<link=p.DMA0.TCD1_CITER_ELINKYES>
#### p.DMA0.TCD1_CSR
<lang=dft>
 (rw)  [1;33m0x400e903c[0m (0x400e8000 + 0x103c)
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
#### dma0.tcd2_attr
<link=p.DMA0.TCD2_ATTR>
#### dma0.tcd2_nbytes_mlno
<link=p.DMA0.TCD2_NBYTES_MLNO>
#### dma0.tcd2_doff
<link=p.DMA0.TCD2_DOFF>
#### p.DMA0.TCD2_CSR
<lang=dft>
 (rw)  [1;33m0x400e905c[0m (0x400e8000 + 0x105c)
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
#### p.dma0.tcd3_nbytes_mlno
<link=p.DMA0.TCD3_NBYTES_MLNO>
#### p.DMA0.TCD3_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9074[0m (0x400e8000 + 0x1074)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.dma0.tcd3_doff
<link=p.DMA0.TCD3_DOFF>
#### DMA0.TCD4_SADDR
<link=p.DMA0.TCD4_SADDR>
#### dma0.tcd4_csr
<link=p.DMA0.TCD4_CSR>
#### DMA0.TCD5_NBYTES_MLNO
<link=p.DMA0.TCD5_NBYTES_MLNO>
#### DMA0.TCD5_DOFF
<link=p.DMA0.TCD5_DOFF>
#### DMA0.TCD5_CITER_ELINKNO
<link=p.DMA0.TCD5_CITER_ELINKNO>
#### p.dma0.tcd6_nbytes_mloffno
<link=p.DMA0.TCD6_NBYTES_MLOFFNO>
#### dma0.tcd6_nbytes_mloffyes
<link=p.DMA0.TCD6_NBYTES_MLOFFYES>
#### p.dma0.tcd6_slast
<link=p.DMA0.TCD6_SLAST>
#### dma0.tcd6_citer_elinkno
<link=p.DMA0.TCD6_CITER_ELINKNO>
#### p.DMA0.TCD6_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e90d6[0m (0x400e8000 + 0x10d6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd7_citer_elinkyes
<link=p.DMA0.TCD7_CITER_ELINKYES>
#### dma0.tcd8_nbytes_mloffyes
<link=p.DMA0.TCD8_NBYTES_MLOFFYES>
#### p.DMA0.TCD8_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9110[0m (0x400e8000 + 0x1110)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.dma0.tcd8_citer_elinkyes
<link=p.DMA0.TCD8_CITER_ELINKYES>
#### DMA0.TCD8_CSR
<link=p.DMA0.TCD8_CSR>
#### p.DMA0.TCD8_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e911e[0m (0x400e8000 + 0x111e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd9_soff
<link=p.DMA0.TCD9_SOFF>
#### p.DMA0.TCD9_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9128[0m (0x400e8000 + 0x1128)
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
#### DMA0.TCD9_CITER_ELINKNO
<link=p.DMA0.TCD9_CITER_ELINKNO>
#### dma0.tcd10_slast
<link=p.DMA0.TCD10_SLAST>
#### DMA0.TCD10_BITER_ELINKNO
<link=p.DMA0.TCD10_BITER_ELINKNO>
#### dma0.tcd11_saddr
<link=p.DMA0.TCD11_SADDR>
#### p.DMA0.TCD11_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9166[0m (0x400e8000 + 0x1166)
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
#### dma0.tcd11_slast
<link=p.DMA0.TCD11_SLAST>
#### p.DMA0.TCD11_CSR
<lang=dft>
 (rw)  [1;33m0x400e917c[0m (0x400e8000 + 0x117c)
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
#### p.dma0.tcd13_csr
<link=p.DMA0.TCD13_CSR>
#### p.DMA0.TCD14_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e91c8[0m (0x400e8000 + 0x11c8)
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
#### p.dma0.tcd14_nbytes_mloffyes
<link=p.DMA0.TCD14_NBYTES_MLOFFYES>
#### p.DMA0.TCD14_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e91d6[0m (0x400e8000 + 0x11d6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd14_biter_elinkno
<link=p.DMA0.TCD14_BITER_ELINKNO>
#### p.dma0.tcd15_attr
<link=p.DMA0.TCD15_ATTR>
#### p.DMA0.TCD15_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e91fe[0m (0x400e8000 + 0x11fe)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd15_biter_elinkno
<link=p.DMA0.TCD15_BITER_ELINKNO>
#### DMA0.TCD16_SOFF
<link=p.DMA0.TCD16_SOFF>
#### DMA0.TCD16_CITER_ELINKNO
<link=p.DMA0.TCD16_CITER_ELINKNO>
#### p.dma0.tcd17_saddr
<link=p.DMA0.TCD17_SADDR>
#### p.DMA0.TCD17_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9224[0m (0x400e8000 + 0x1224)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### dma0.tcd17_soff
<link=p.DMA0.TCD17_SOFF>
#### DMA0.TCD17_DOFF
<link=p.DMA0.TCD17_DOFF>
#### p.dma0.tcd17_citer_elinkno
<link=p.DMA0.TCD17_CITER_ELINKNO>
#### p.dma0.tcd18_soff
<link=p.DMA0.TCD18_SOFF>
#### p.DMA0.TCD18_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9248[0m (0x400e8000 + 0x1248)
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
#### dma0.tcd18_citer_elinkyes
<link=p.DMA0.TCD18_CITER_ELINKYES>
#### dma0.tcd18_biter_elinkno
<link=p.DMA0.TCD18_BITER_ELINKNO>
#### DMA0.TCD19_SOFF
<link=p.DMA0.TCD19_SOFF>
#### dma0.tcd19_nbytes_mlno
<link=p.DMA0.TCD19_NBYTES_MLNO>
#### p.DMA0.TCD19_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e927e[0m (0x400e8000 + 0x127e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd19_biter_elinkno
<link=p.DMA0.TCD19_BITER_ELINKNO>
#### p.DMA0.TCD20_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9286[0m (0x400e8000 + 0x1286)
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
#### dma0.tcd20_attr
<link=p.DMA0.TCD20_ATTR>
#### p.DMA0.TCD20_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9290[0m (0x400e8000 + 0x1290)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### DMA0.TCD20_DOFF
<link=p.DMA0.TCD20_DOFF>
#### dma0.tcd20_citer_elinkno
<link=p.DMA0.TCD20_CITER_ELINKNO>
#### dma0.tcd20_citer_elinkyes
<link=p.DMA0.TCD20_CITER_ELINKYES>
#### DMA0.TCD20_CSR
<link=p.DMA0.TCD20_CSR>
#### p.DMA0.TCD21_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e92a8[0m (0x400e8000 + 0x12a8)
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
#### DMA0.TCD21_NBYTES_MLOFFNO
<link=p.DMA0.TCD21_NBYTES_MLOFFNO>
#### dma0.tcd21_csr
<link=p.DMA0.TCD21_CSR>
#### DMA0.TCD21_BITER_ELINKYES
<link=p.DMA0.TCD21_BITER_ELINKYES>
#### dma0.tcd22_soff
<link=p.DMA0.TCD22_SOFF>
#### p.dma0.tcd22_biter_elinkyes
<link=p.DMA0.TCD22_BITER_ELINKYES>
#### p.DMA0.TCD23_SADDR
<lang=dft>
 (rw)  [1;33m0x400e92e0[0m (0x400e8000 + 0x12e0)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### DMA0.TCD23_SOFF
<link=p.DMA0.TCD23_SOFF>
#### p.dma0.tcd23_biter_elinkyes
<link=p.DMA0.TCD23_BITER_ELINKYES>
#### dma0.tcd24_csr
<link=p.DMA0.TCD24_CSR>
#### dma0.tcd25_nbytes_mloffyes
<link=p.DMA0.TCD25_NBYTES_MLOFFYES>
#### dma0.tcd25_biter_elinkno
<link=p.DMA0.TCD25_BITER_ELINKNO>
#### p.dma0.tcd26_nbytes_mloffyes
<link=p.DMA0.TCD26_NBYTES_MLOFFYES>
#### dma0.tcd26_nbytes_mloffyes
<link=p.DMA0.TCD26_NBYTES_MLOFFYES>
#### p.DMA0.TCD28_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9384[0m (0x400e8000 + 0x1384)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### DMA0.TCD29_DOFF
<link=p.DMA0.TCD29_DOFF>
#### p.DMA0.TCD29_CSR
<lang=dft>
 (rw)  [1;33m0x400e93bc[0m (0x400e8000 + 0x13bc)
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
#### dma0.tcd29_biter_elinkno
<link=p.DMA0.TCD29_BITER_ELINKNO>
#### p.DMA0.TCD29_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e93be[0m (0x400e8000 + 0x13be)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD30_SLAST
<link=p.DMA0.TCD30_SLAST>
#### p.DMA0.TCD30_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e93d8[0m (0x400e8000 + 0x13d8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### dma0.tcd31_soff
<link=p.DMA0.TCD31_SOFF>
#### dma0.tcd31_slast
<link=p.DMA0.TCD31_SLAST>
#### DMA0.TCD31_SLAST
<link=p.DMA0.TCD31_SLAST>
#### p.dmamux
<link=p.DMAMUX>
#### DMAMUX.CHCFG[3]
<link=p.DMAMUX.CHCFG[3]>
#### p.DMAMUX.CHCFG[4]
<lang=dft>
 (rw)  [1;33m0x400ec010[0m (0x400ec000 + 0x0010)
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
#### DMAMUX.CHCFG[14]
<link=p.DMAMUX.CHCFG[14]>
#### dmamux.chcfg[19]
<link=p.DMAMUX.CHCFG[19]>
#### p.DMAMUX.CHCFG[20]
<lang=dft>
 (rw)  [1;33m0x400ec050[0m (0x400ec000 + 0x0050)
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
#### DMAMUX.CHCFG[20]
<link=p.DMAMUX.CHCFG[20]>
#### DMAMUX.CHCFG[25]
<link=p.DMAMUX.CHCFG[25]>
#### dmamux.chcfg[27]
<link=p.DMAMUX.CHCFG[27]>
#### gpc.imr1
<link=p.GPC.IMR1>
#### p.gpc.imr4
<link=p.GPC.IMR4>
#### GPC.IMR4
<link=p.GPC.IMR4>
#### p.GPC.ISR4
<lang=dft>
 (ro)  [1;33m0x400f4024[0m (0x400f4000 + 0x0024)
IRQ status resister 4
 (ro) (32)  [0;32mISR4[0m  - [31:00] -  IRQ[127:96] status, read only
</lang>
#### gpc.isr4
<link=p.GPC.ISR4>
#### pgc.mega_ctrl
<link=p.PGC.MEGA_CTRL>
#### SRC.SRSR
<link=p.SRC.SRSR>
#### p.src.gpr4
<link=p.SRC.GPR4>
#### src.gpr7
<link=p.SRC.GPR7>
#### p.CCM.CBCDR
<lang=dft>
 (rw)  [1;33m0x400fc014[0m (0x400fc000 + 0x0014)
CCM Bus Clock Divider Register
 (rw) (01)  [0;32mSEMC_CLK_SEL[0m  - [06:06] -  SEMC clock source select
      0 - SEMC_CLK_SEL_0 :
         Periph_clk output will be used as SEMC clock root
      0x1 - SEMC_CLK_SEL_1 :
         SEMC alternative clock will be used as SEMC clock root
 (rw) (01)  [0;32mSEMC_ALT_CLK_SEL[0m  - [07:07] -  SEMC alternative clock select
      0 - SEMC_ALT_CLK_SEL_0 :
         PLL2 PFD2 will be selected as alternative clock for SEMC root clock
      0x1 - SEMC_ALT_CLK_SEL_1 :
         PLL3 PFD1 will be selected as alternative clock for SEMC root clock
 (rw) (02)  [0;32mIPG_PODF[0m  - [09:08] -  Divider for ipg podf.
      0 - IPG_PODF_0 :
         divide by 1
      0x1 - IPG_PODF_1 :
         divide by 2
      0x2 - IPG_PODF_2 :
         divide by 3
      0x3 - IPG_PODF_3 :
         divide by 4
 (rw) (03)  [0;32mAHB_PODF[0m  - [12:10] -  Divider for AHB PODF
      0 - AHB_PODF_0 :
         divide by 1
      0x1 - AHB_PODF_1 :
         divide by 2
      0x2 - AHB_PODF_2 :
         divide by 3
      0x3 - AHB_PODF_3 :
         divide by 4
      0x4 - AHB_PODF_4 :
         divide by 5
      0x5 - AHB_PODF_5 :
         divide by 6
      0x6 - AHB_PODF_6 :
         divide by 7
      0x7 - AHB_PODF_7 :
         divide by 8
 (rw) (03)  [0;32mSEMC_PODF[0m  - [18:16] -  Post divider for SEMC clock
      0 - SEMC_PODF_0 :
         divide by 1
      0x1 - SEMC_PODF_1 :
         divide by 2
      0x2 - SEMC_PODF_2 :
         divide by 3
      0x3 - SEMC_PODF_3 :
         divide by 4
      0x4 - SEMC_PODF_4 :
         divide by 5
      0x5 - SEMC_PODF_5 :
         divide by 6
      0x6 - SEMC_PODF_6 :
         divide by 7
      0x7 - SEMC_PODF_7 :
         divide by 8
 (rw) (01)  [0;32mPERIPH_CLK_SEL[0m  - [25:25] -  Selector for peripheral main clock
      0 - PERIPH_CLK_SEL_0 :
         derive clock from pre_periph_clk_sel
      0x1 - PERIPH_CLK_SEL_1 :
         derive clock from periph_clk2_clk_divided
 (rw) (03)  [0;32mPERIPH_CLK2_PODF[0m  - [29:27] -  Divider for periph_clk2_podf.
      0 - PERIPH_CLK2_PODF_0 :
         divide by 1
      0x1 - PERIPH_CLK2_PODF_1 :
         divide by 2
      0x2 - PERIPH_CLK2_PODF_2 :
         divide by 3
      0x3 - PERIPH_CLK2_PODF_3 :
         divide by 4
      0x4 - PERIPH_CLK2_PODF_4 :
         divide by 5
      0x5 - PERIPH_CLK2_PODF_5 :
         divide by 6
      0x6 - PERIPH_CLK2_PODF_6 :
         divide by 7
      0x7 - PERIPH_CLK2_PODF_7 :
         divide by 8
</lang>
#### p.ccm.cbcdr
<link=p.CCM.CBCDR>
#### p.CCM.CSCDR1
<lang=dft>
 (rw)  [1;33m0x400fc024[0m (0x400fc000 + 0x0024)
CCM Serial Clock Divider Register 1
 (rw) (06)  [0;32mUART_CLK_PODF[0m  - [05:00] -  Divider for uart clock podf.
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
 (rw) (01)  [0;32mUART_CLK_SEL[0m  - [06:06] -  Selector for the UART clock multiplexor
      0 - UART_CLK_SEL_0 :
         derive clock from pll3_80m
      0x1 - UART_CLK_SEL_1 :
         derive clock from osc_clk
 (rw) (03)  [0;32mUSDHC1_PODF[0m  - [13:11] -  Divider for usdhc1 clock podf. Divider should be updated when output clock is g
 ated.
      0 - USDHC1_PODF_0 :
         divide by 1
      0x1 - USDHC1_PODF_1 :
         divide by 2
      0x2 - USDHC1_PODF_2 :
         divide by 3
      0x3 - USDHC1_PODF_3 :
         divide by 4
      0x4 - USDHC1_PODF_4 :
         divide by 5
      0x5 - USDHC1_PODF_5 :
         divide by 6
      0x6 - USDHC1_PODF_6 :
         divide by 7
      0x7 - USDHC1_PODF_7 :
         divide by 8
 (rw) (03)  [0;32mUSDHC2_PODF[0m  - [18:16] -  Divider for usdhc2 clock. Divider should be updated when output clock is gated.
      0 - USDHC2_PODF_0 :
         divide by 1
      0x1 - USDHC2_PODF_1 :
         divide by 2
      0x2 - USDHC2_PODF_2 :
         divide by 3
      0x3 - USDHC2_PODF_3 :
         divide by 4
      0x4 - USDHC2_PODF_4 :
         divide by 5
      0x5 - USDHC2_PODF_5 :
         divide by 6
      0x6 - USDHC2_PODF_6 :
         divide by 7
      0x7 - USDHC2_PODF_7 :
         divide by 8
 (rw) (02)  [0;32mTRACE_PODF[0m  - [26:25] -  Divider for trace clock. Divider should be updated when output clock is gated.
      0 - TRACE_PODF_0 :
         divide by 1
      0x1 - TRACE_PODF_1 :
         divide by 2
      0x2 - TRACE_PODF_2 :
         divide by 3
      0x3 - TRACE_PODF_3 :
         divide by 4
</lang>
#### p.CCM.CS1CDR
<lang=dft>
 (rw)  [1;33m0x400fc028[0m (0x400fc000 + 0x0028)
CCM Clock Divider Register
 (rw) (06)  [0;32mSAI1_CLK_PODF[0m  - [05:00] -  Divider for sai1 clock podf. The input clock to this divider should be lower th
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
 (rw) (03)  [0;32mSAI1_CLK_PRED[0m  - [08:06] -  Divider for sai1 clock pred.
      0 - SAI1_CLK_PRED_0 :
         divide by 1
      0x1 - SAI1_CLK_PRED_1 :
         divide by 2
      0x2 - SAI1_CLK_PRED_2 :
         divide by 3
      0x3 - SAI1_CLK_PRED_3 :
         divide by 4
      0x4 - SAI1_CLK_PRED_4 :
         divide by 5
      0x5 - SAI1_CLK_PRED_5 :
         divide by 6
      0x6 - SAI1_CLK_PRED_6 :
         divide by 7
      0x7 - SAI1_CLK_PRED_7 :
         divide by 8
 (rw) (03)  [0;32mFLEXIO2_CLK_PRED[0m  - [11:09] -  Divider for flexio2/flexio3 clock.
      0 - FLEXIO2_CLK_PRED_0 :
         divide by 1
      0x1 - FLEXIO2_CLK_PRED_1 :
         divide by 2
      0x2 - FLEXIO2_CLK_PRED_2 :
         divide by 3
      0x3 - FLEXIO2_CLK_PRED_3 :
         divide by 4
      0x4 - FLEXIO2_CLK_PRED_4 :
         divide by 5
      0x5 - FLEXIO2_CLK_PRED_5 :
         divide by 6
      0x6 - FLEXIO2_CLK_PRED_6 :
         divide by 7
      0x7 - FLEXIO2_CLK_PRED_7 :
         divide by 8
 (rw) (06)  [0;32mSAI3_CLK_PODF[0m  - [21:16] -  Divider for sai3 clock podf. The input clock to this divider should be lower th
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
 (rw) (03)  [0;32mSAI3_CLK_PRED[0m  - [24:22] -  Divider for sai3/adc1/adc2 clock pred.
      0 - SAI3_CLK_PRED_0 :
         divide by 1
      0x1 - SAI3_CLK_PRED_1 :
         divide by 2
      0x2 - SAI3_CLK_PRED_2 :
         divide by 3
      0x3 - SAI3_CLK_PRED_3 :
         divide by 4
      0x4 - SAI3_CLK_PRED_4 :
         divide by 5
      0x5 - SAI3_CLK_PRED_5 :
         divide by 6
      0x6 - SAI3_CLK_PRED_6 :
         divide by 7
      0x7 - SAI3_CLK_PRED_7 :
         divide by 8
 (rw) (03)  [0;32mFLEXIO2_CLK_PODF[0m  - [27:25] -  Divider for flexio2/flexio3 clock. Divider should be updated when output clock 
 is gated.
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
#### CCM.CDCDR
<link=p.CCM.CDCDR>
#### ccm.ccgr1
<link=p.CCM.CCGR1>
#### p.ccm.ccgr3
<link=p.CCM.CCGR3>
#### CCM.CCGR7
<link=p.CCM.CCGR7>
#### romc.rompatch3d
<link=p.ROMC.ROMPATCH3D>
#### p.romc.rompatch2a
<link=p.ROMC.ROMPATCH2A>
#### ROMC.ROMPATCH5A
<link=p.ROMC.ROMPATCH5A>
#### romc.rompatch8a
<link=p.ROMC.ROMPATCH8A>
#### p.romc.rompatch14a
<link=p.ROMC.ROMPATCH14A>
#### romc.rompatch14a
<link=p.ROMC.ROMPATCH14A>
#### p.LPUART1
<lang=dft>
base: 0x40184000
BAUD            CTRL            DATA            FIFO            
GLOBAL          MATCH           MODIR           PARAM           
PINCFG          STAT            VERID           WATER           
输入 p.LPUART1.{reg_name} 以查看寄存器的详细信息
type p.LPUART1.{reg_name} to check details of registers
</lang>
#### p.LPUART1.VERID
<lang=dft>
 (ro)  [1;33m0x40184000[0m (0x40184000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Identification Number
      0x1 - FEATURE_1 :
         Standard feature set.
      0x3 - FEATURE_3 :
         Standard feature set with MODEM/IrDA support.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### p.lpuart1.pincfg
<link=p.LPUART1.PINCFG>
#### p.LPUART1.STAT
<lang=dft>
 (rw)  [1;33m0x40184014[0m (0x40184000 + 0x0014)
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
#### lpuart2.param
<link=p.LPUART2.PARAM>
#### p.LPUART2.BAUD
<lang=dft>
 (rw)  [1;33m0x40188010[0m (0x40188000 + 0x0010)
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
#### p.LPUART2.FIFO
<lang=dft>
 (rw)  [1;33m0x40188028[0m (0x40188000 + 0x0028)
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
#### lpuart3.global
<link=p.LPUART3.GLOBAL>
#### LPUART3.GLOBAL
<link=p.LPUART3.GLOBAL>
#### p.LPUART3.DATA
<lang=dft>
 (rw)  [1;33m0x4018c01c[0m (0x4018c000 + 0x001c)
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
#### p.lpuart4
<link=p.LPUART4>
#### p.LPUART4.PARAM
<lang=dft>
 (ro)  [1;33m0x40190004[0m (0x40190000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
</lang>
#### LPUART4.MATCH
<link=p.LPUART4.MATCH>
#### p.LPUART4.WATER
<lang=dft>
 (rw)  [1;33m0x4019002c[0m (0x40190000 + 0x002c)
LPUART Watermark Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit Watermark
 (ro) (03)  [0;32mTXCOUNT[0m  - [10:08] -  Transmit Counter
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive Watermark
 (ro) (03)  [0;32mRXCOUNT[0m  - [26:24] -  Receive Counter
</lang>
#### lpuart5.verid
<link=p.LPUART5.VERID>
#### LPUART5.VERID
<link=p.LPUART5.VERID>
#### lpuart5.baud
<link=p.LPUART5.BAUD>
#### p.lpuart5.match
<link=p.LPUART5.MATCH>
#### p.LPUART6.VERID
<lang=dft>
 (ro)  [1;33m0x40198000[0m (0x40198000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Identification Number
      0x1 - FEATURE_1 :
         Standard feature set.
      0x3 - FEATURE_3 :
         Standard feature set with MODEM/IrDA support.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### LPUART6.CTRL
<link=p.LPUART6.CTRL>
#### lpuart6.water
<link=p.LPUART6.WATER>
#### LPUART6.WATER
<link=p.LPUART6.WATER>
#### lpuart7.pincfg
<link=p.LPUART7.PINCFG>
#### p.lpuart7.water
<link=p.LPUART7.WATER>
#### lpuart8.baud
<link=p.LPUART8.BAUD>
#### p.LPUART8.CTRL
<lang=dft>
 (rw)  [1;33m0x401a0018[0m (0x401a0000 + 0x0018)
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
#### lpuart8.ctrl
<link=p.LPUART8.CTRL>
#### lpuart8.modir
<link=p.LPUART8.MODIR>
#### lpuart8.fifo
<link=p.LPUART8.FIFO>
#### LPUART8.FIFO
<link=p.LPUART8.FIFO>
#### p.flexio1.ctrl
<link=p.FLEXIO1.CTRL>
#### p.FLEXIO1.TIMIEN
<lang=dft>
 (rw)  [1;33m0x401ac028[0m (0x401ac000 + 0x0028)
Timer Interrupt Enable Register
 (rw) (04)  [0;32mTEIE[0m  - [03:00] -  Timer Status Interrupt Enable
</lang>
#### flexio1.shiftctl[2]
<link=p.FLEXIO1.SHIFTCTL[2]>
#### p.FLEXIO1.SHIFTBUF[0]
<lang=dft>
 (rw)  [1;33m0x401ac200[0m (0x401ac000 + 0x0200)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio1.shiftbuf[1]
<link=p.FLEXIO1.SHIFTBUF[1]>
#### FLEXIO1.SHIFTBUFBIS[1]
<link=p.FLEXIO1.SHIFTBUFBIS[1]>
#### p.FLEXIO1.SHIFTBUFBYS[0]
<lang=dft>
 (rw)  [1;33m0x401ac300[0m (0x401ac000 + 0x0300)
Shifter Buffer N Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBYS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio1.shiftbufbys[0]
<link=p.FLEXIO1.SHIFTBUFBYS[0]>
#### flexio1.shiftbufbbs[2]
<link=p.FLEXIO1.SHIFTBUFBBS[2]>
#### p.FLEXIO1.TIMCTL[0]
<lang=dft>
 (rw)  [1;33m0x401ac400[0m (0x401ac000 + 0x0400)
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
#### p.FLEXIO1.SHIFTBUFNBS[3]
<lang=dft>
 (rw)  [1;33m0x401ac68c[0m (0x401ac000 + 0x068c)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO1.SHIFTBUFHWS[1]
<link=p.FLEXIO1.SHIFTBUFHWS[1]>
#### p.flexio1.shiftbufnis[1]
<link=p.FLEXIO1.SHIFTBUFNIS[1]>
#### p.flexio2.shiftsien
<link=p.FLEXIO2.SHIFTSIEN>
#### FLEXIO2.SHIFTSIEN
<link=p.FLEXIO2.SHIFTSIEN>
#### p.flexio2.shifteien
<link=p.FLEXIO2.SHIFTEIEN>
#### FLEXIO2.SHIFTEIEN
<link=p.FLEXIO2.SHIFTEIEN>
#### flexio2.timien
<link=p.FLEXIO2.TIMIEN>
#### FLEXIO2.TIMIEN
<link=p.FLEXIO2.TIMIEN>
#### flexio2.shiftsden
<link=p.FLEXIO2.SHIFTSDEN>
#### p.FLEXIO2.SHIFTCTL[0]
<lang=dft>
 (rw)  [1;33m0x401b0080[0m (0x401b0000 + 0x0080)
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
#### flexio2.shiftctl[1]
<link=p.FLEXIO2.SHIFTCTL[1]>
#### FLEXIO2.SHIFTCFG[0]
<link=p.FLEXIO2.SHIFTCFG[0]>
#### p.FLEXIO2.SHIFTBUFBIS[1]
<lang=dft>
 (rw)  [1;33m0x401b0284[0m (0x401b0000 + 0x0284)
Shifter Buffer N Bit Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBIS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio2.shiftbufbys[3]
<link=p.FLEXIO2.SHIFTBUFBYS[3]>
#### p.FLEXIO2.TIMCTL[1]
<lang=dft>
 (rw)  [1;33m0x401b0404[0m (0x401b0000 + 0x0404)
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
#### flexio2.timctl[3]
<link=p.FLEXIO2.TIMCTL[3]>
#### p.FLEXIO2.TIMCMP[3]
<lang=dft>
 (rw)  [1;33m0x401b050c[0m (0x401b0000 + 0x050c)
Timer Compare N Register
 (rw) (16)  [0;32mCMP[0m  - [15:00] -  Timer Compare Value
</lang>
#### FLEXIO2.SHIFTBUFNBS[1]
<link=p.FLEXIO2.SHIFTBUFNBS[1]>
#### p.flexio2.shiftbufnis[2]
<link=p.FLEXIO2.SHIFTBUFNIS[2]>
#### p.FLEXIO3
<lang=dft>
base: 0x42020000
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
输入 p.FLEXIO3.{reg_name} 以查看寄存器的详细信息
type p.FLEXIO3.{reg_name} to check details of registers
</lang>
#### flexio3.pin
<link=p.FLEXIO3.PIN>
#### flexio3.shiftsien
<link=p.FLEXIO3.SHIFTSIEN>
#### FLEXIO3.SHIFTCFG[0]
<link=p.FLEXIO3.SHIFTCFG[0]>
#### p.FLEXIO3.SHIFTBUF[0]
<lang=dft>
 (rw)  [1;33m0x42020200[0m (0x42020000 + 0x0200)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio3.shiftbuf[1]
<link=p.FLEXIO3.SHIFTBUF[1]>
#### FLEXIO3.SHIFTBUFBIS[1]
<link=p.FLEXIO3.SHIFTBUFBIS[1]>
#### p.flexio3.shiftbufbis[2]
<link=p.FLEXIO3.SHIFTBUFBIS[2]>
#### FLEXIO3.TIMCTL[3]
<link=p.FLEXIO3.TIMCTL[3]>
#### p.flexio3.timcfg[3]
<link=p.FLEXIO3.TIMCFG[3]>
#### p.FLEXIO3.TIMCMP[1]
<lang=dft>
 (rw)  [1;33m0x42020504[0m (0x42020000 + 0x0504)
Timer Compare N Register
 (rw) (16)  [0;32mCMP[0m  - [15:00] -  Timer Compare Value
</lang>
#### flexio3.timcmp[1]
<link=p.FLEXIO3.TIMCMP[1]>
#### p.FLEXIO3.SHIFTBUFNBS[0]
<lang=dft>
 (rw)  [1;33m0x42020680[0m (0x42020000 + 0x0680)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO3.SHIFTBUFNBS[0]
<link=p.FLEXIO3.SHIFTBUFNBS[0]>
#### FLEXIO3.SHIFTBUFNIS[0]
<link=p.FLEXIO3.SHIFTBUFNIS[0]>
#### p.GPIO1.GDIR
<lang=dft>
 (rw)  [1;33m0x401b8004[0m (0x401b8000 + 0x0004)
GPIO direction register
 (rw) (32)  [0;32mGDIR[0m  - [31:00] -  GDIR
</lang>
#### gpio1.psr
<link=p.GPIO1.PSR>
#### p.gpio1.edge_sel
<link=p.GPIO1.EDGE_SEL>
#### gpio5.icr1
<link=p.GPIO5.ICR1>
#### p.GPIO5.ICR2
<lang=dft>
 (rw)  [1;33m0x400c0010[0m (0x400c0000 + 0x0010)
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
#### p.GPIO2.DR
<lang=dft>
 (rw)  [1;33m0x401bc000[0m (0x401bc000 + 0x0000)
GPIO data register
 (rw) (32)  [0;32mDR[0m  - [31:00] -  DR
</lang>
#### p.GPIO2.IMR
<lang=dft>
 (rw)  [1;33m0x401bc014[0m (0x401bc000 + 0x0014)
GPIO interrupt mask register
 (rw) (32)  [0;32mIMR[0m  - [31:00] -  IMR
</lang>
#### p.GPIO2.ISR
<lang=dft>
 (rw)  [1;33m0x401bc018[0m (0x401bc000 + 0x0018)
GPIO interrupt status register
 (rw) (32)  [0;32mISR[0m  - [31:00] -  ISR
</lang>
#### p.gpio2.dr_set
<link=p.GPIO2.DR_SET>
#### GPIO3.PSR
<link=p.GPIO3.PSR>
#### p.gpio3.icr1
<link=p.GPIO3.ICR1>
#### GPIO3.EDGE_SEL
<link=p.GPIO3.EDGE_SEL>
#### p.gpio3.dr_clear
<link=p.GPIO3.DR_CLEAR>
#### gpio3.dr_toggle
<link=p.GPIO3.DR_TOGGLE>
#### gpio6.psr
<link=p.GPIO6.PSR>
#### GPIO6.DR_TOGGLE
<link=p.GPIO6.DR_TOGGLE>
#### GPIO7.DR_CLEAR
<link=p.GPIO7.DR_CLEAR>
#### GPIO8.ICR2
<link=p.GPIO8.ICR2>
#### p.GPIO8.ISR
<lang=dft>
 (rw)  [1;33m0x42008018[0m (0x42008000 + 0x0018)
GPIO interrupt status register
 (rw) (32)  [0;32mISR[0m  - [31:00] -  ISR
</lang>
#### GPIO8.EDGE_SEL
<link=p.GPIO8.EDGE_SEL>
#### p.GPIO8.DR_TOGGLE
<lang=dft>
 (wo)  [1;33m0x4200808c[0m (0x42008000 + 0x008c)
GPIO data register TOGGLE
 (wo) (32)  [0;32mDR_TOGGLE[0m  - [31:00] -  DR_TOGGLE
</lang>
#### p.gpio9
<link=p.GPIO9>
#### p.GPIO9.PSR
<lang=dft>
 (ro)  [1;33m0x4200c008[0m (0x4200c000 + 0x0008)
GPIO pad status register
 (ro) (32)  [0;32mPSR[0m  - [31:00] -  PSR
</lang>
#### p.GPIO9.DR_CLEAR
<lang=dft>
 (wo)  [1;33m0x4200c088[0m (0x4200c000 + 0x0088)
GPIO data register CLEAR
 (wo) (32)  [0;32mDR_CLEAR[0m  - [31:00] -  DR_CLEAR
</lang>
#### p.CAN1.IFLAG2
<lang=dft>
 (rw)  [1;33m0x401d002c[0m (0x401d0000 + 0x002c)
Interrupt Flags 2 Register
 (rw) (32)  [0;32mBUFHI[0m  - [31:00] -  Each bit flags the respective FLEXCAN Message Buffer (MB32 to MB63) interrupt.
      0 - BUFHI_0 :
         No such occurrence
      0x1 - BUFHI_1 :
         The corresponding buffer has successfully completed transmission or rec
         eption
</lang>
#### CAN1.IFLAG1
<link=p.CAN1.IFLAG1>
#### can1.dbg2
<link=p.CAN1.DBG2>
#### can1.rximr9
<link=p.CAN1.RXIMR9>
#### CAN1.RXIMR10
<link=p.CAN1.RXIMR10>
#### can1.rximr15
<link=p.CAN1.RXIMR15>
#### p.can1.rximr18
<link=p.CAN1.RXIMR18>
#### p.CAN1.RXIMR21
<lang=dft>
 (rw)  [1;33m0x401d08d4[0m (0x401d0000 + 0x08d4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR29
<link=p.CAN1.RXIMR29>
#### can1.rximr33
<link=p.CAN1.RXIMR33>
#### p.can1.rximr37
<link=p.CAN1.RXIMR37>
#### CAN1.RXIMR43
<link=p.CAN1.RXIMR43>
#### p.CAN1.RXIMR50
<lang=dft>
 (rw)  [1;33m0x401d0948[0m (0x401d0000 + 0x0948)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr54
<link=p.CAN1.RXIMR54>
#### can1.rximr60
<link=p.CAN1.RXIMR60>
#### p.can1.rximr61
<link=p.CAN1.RXIMR61>
#### p.CAN2
<lang=dft>
base: 0x401d4000
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
输入 p.CAN2.{reg_name} 以查看寄存器的详细信息
type p.CAN2.{reg_name} to check details of registers
</lang>
#### CAN2.RXMGMASK
<link=p.CAN2.RXMGMASK>
#### can2.rx14mask
<link=p.CAN2.RX14MASK>
#### can2.crcr
<link=p.CAN2.CRCR>
#### CAN2.RXIMR1
<link=p.CAN2.RXIMR1>
#### can2.rximr7
<link=p.CAN2.RXIMR7>
#### p.CAN2.RXIMR16
<lang=dft>
 (rw)  [1;33m0x401d48c0[0m (0x401d4000 + 0x08c0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr16
<link=p.CAN2.RXIMR16>
#### p.can2.rximr22
<link=p.CAN2.RXIMR22>
#### p.CAN2.RXIMR39
<lang=dft>
 (rw)  [1;33m0x401d491c[0m (0x401d4000 + 0x091c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr40
<link=p.CAN2.RXIMR40>
#### p.CAN2.RXIMR44
<lang=dft>
 (rw)  [1;33m0x401d4930[0m (0x401d4000 + 0x0930)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR44
<link=p.CAN2.RXIMR44>
#### p.can2.rximr57
<link=p.CAN2.RXIMR57>
#### CAN2.RXIMR57
<link=p.CAN2.RXIMR57>
#### can2.rximr59
<link=p.CAN2.RXIMR59>
#### p.CAN2.RXIMR62
<lang=dft>
 (rw)  [1;33m0x401d4978[0m (0x401d4000 + 0x0978)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR62
<link=p.CAN2.RXIMR62>
#### p.can3.mcr
<link=p.CAN3.MCR>
#### p.can3.ctrl1
<link=p.CAN3.CTRL1>
#### CAN3.CTRL1
<link=p.CAN3.CTRL1>
#### p.CAN3.RX14MASK
<lang=dft>
 (rw)  [1;33m0x401d8014[0m (0x401d8000 + 0x0014)
Rx 14 Mask register
 (rw) (32)  [0;32mRX14M[0m  - [31:00] -  Rx Buffer 14 Mask Bits
</lang>
#### can3.imask1
<link=p.CAN3.IMASK1>
#### can3.rxfgmask
<link=p.CAN3.RXFGMASK>
#### can3.mb0_32b_cs
<link=p.CAN3.MB0_32B_CS>
#### CAN3.MB0_32B_CS
<link=p.CAN3.MB0_32B_CS>
#### p.can3.mb0_16b_id
<link=p.CAN3.MB0_16B_ID>
#### CAN3.MB0_8B_ID
<link=p.CAN3.MB0_8B_ID>
#### p.CAN3.WORD00
<lang=dft>
 (rw)  [1;33m0x401d8088[0m (0x401d8000 + 0x0088)
Message Buffer 0 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD10
<link=p.CAN3.WORD10>
#### can3.id1
<link=p.CAN3.ID1>
#### p.can3.word01
<link=p.CAN3.WORD01>
#### CAN3.MB0_32B_WORD5
<link=p.CAN3.MB0_32B_WORD5>
#### p.CAN3.MB1_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d809c[0m (0x401d8000 + 0x009c)
Message Buffer 1 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb0_64b_word6
<link=p.CAN3.MB0_64B_WORD6>
#### p.CAN3.MB2_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d80a0[0m (0x401d8000 + 0x00a0)
Message Buffer 2 CS Register
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
#### p.can3.mb2_8b_cs
<link=p.CAN3.MB2_8B_CS>
#### CAN3.ID2
<link=p.CAN3.ID2>
#### CAN3.MB1_16B_WORD1
<link=p.CAN3.MB1_16B_WORD1>
#### p.CAN3.MB2_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d80a4[0m (0x401d8000 + 0x00a4)
Message Buffer 2 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb2_8b_word0
<link=p.CAN3.MB2_8B_WORD0>
#### can3.word02
<link=p.CAN3.WORD02>
#### p.CAN3.MB0_64B_WORD10
<lang=dft>
 (rw)  [1;33m0x401d80b0[0m (0x401d8000 + 0x00b0)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_43[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_42[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_41[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_40[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB3_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d80b4[0m (0x401d8000 + 0x00b4)
Message Buffer 3 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB3_8B_WORD0
<link=p.CAN3.MB3_8B_WORD0>
#### can3.cs4
<link=p.CAN3.CS4>
#### can3.mb0_64b_word14
<link=p.CAN3.MB0_64B_WORD14>
#### p.CAN3.MB2_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d80c0[0m (0x401d8000 + 0x00c0)
Message Buffer 2 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB1_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d80cc[0m (0x401d8000 + 0x00cc)
Message Buffer 1 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB3_16B_WORD1
<link=p.CAN3.MB3_16B_WORD1>
#### can3.mb6_8b_cs
<link=p.CAN3.MB6_8B_CS>
#### p.can3.mb1_64b_word6
<link=p.CAN3.MB1_64B_WORD6>
#### CAN3.MB2_32B_WORD5
<link=p.CAN3.MB2_32B_WORD5>
#### CAN3.MB6_8B_WORD1
<link=p.CAN3.MB6_8B_WORD1>
#### p.can3.word16
<link=p.CAN3.WORD16>
#### can3.mb4_16b_word2
<link=p.CAN3.MB4_16B_WORD2>
#### can3.mb1_64b_word9
<link=p.CAN3.MB1_64B_WORD9>
#### p.can3.mb4_16b_word3
<link=p.CAN3.MB4_16B_WORD3>
#### can3.mb7_8b_id
<link=p.CAN3.MB7_8B_ID>
#### can3.mb1_64b_word10
<link=p.CAN3.MB1_64B_WORD10>
#### CAN3.CS8
<link=p.CAN3.CS8>
#### p.CAN3.MB1_64B_WORD12
<lang=dft>
 (rw)  [1;33m0x401d8100[0m (0x401d8000 + 0x0100)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_51[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_50[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_49[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_48[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb5_16b_word0
<link=p.CAN3.MB5_16B_WORD0>
#### p.can3.mb5_16b_word2
<link=p.CAN3.MB5_16B_WORD2>
#### p.CAN3.MB2_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d8110[0m (0x401d8000 + 0x0110)
Message Buffer 2 CS Register
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
#### p.CAN3.MB3_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d8114[0m (0x401d8000 + 0x0114)
Message Buffer 3 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB6_16B_ID
<link=p.CAN3.MB6_16B_ID>
#### p.can3.mb6_16b_word1
<link=p.CAN3.MB6_16B_WORD1>
#### p.CAN3.MB10_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8120[0m (0x401d8000 + 0x0120)
Message Buffer 10 CS Register
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
#### CAN3.MB10_8B_ID
<link=p.CAN3.MB10_8B_ID>
#### p.can3.mb2_64b_word3
<link=p.CAN3.MB2_64B_WORD3>
#### p.CAN3.MB10_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8128[0m (0x401d8000 + 0x0128)
Message Buffer 10 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb10_8b_word0
<link=p.CAN3.MB10_8B_WORD0>
#### p.CAN3.MB2_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8128[0m (0x401d8000 + 0x0128)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB4_32B_WORD1
<link=p.CAN3.MB4_32B_WORD1>
#### CAN3.MB2_64B_WORD6
<link=p.CAN3.MB2_64B_WORD6>
#### can3.mb7_16b_word2
<link=p.CAN3.MB7_16B_WORD2>
#### p.can3.cs12
<link=p.CAN3.CS12>
#### CAN3.MB2_64B_WORD10
<link=p.CAN3.MB2_64B_WORD10>
#### p.can3.mb8_16b_cs
<link=p.CAN3.MB8_16B_CS>
#### CAN3.MB8_16B_CS
<link=p.CAN3.MB8_16B_CS>
#### CAN3.MB8_16B_WORD0
<link=p.CAN3.MB8_16B_WORD0>
#### can3.word012
<link=p.CAN3.WORD012>
#### CAN3.MB13_8B_ID
<link=p.CAN3.MB13_8B_ID>
#### p.CAN3.MB9_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8158[0m (0x401d8000 + 0x0158)
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
#### CAN3.WORD013
<link=p.CAN3.WORD013>
#### p.CAN3.MB13_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d815c[0m (0x401d8000 + 0x015c)
Message Buffer 13 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB13_8B_WORD1
<link=p.CAN3.MB13_8B_WORD1>
#### p.CAN3.MB5_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d815c[0m (0x401d8000 + 0x015c)
Message Buffer 5 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb9_16b_id
<link=p.CAN3.MB9_16B_ID>
#### can3.word113
<link=p.CAN3.WORD113>
#### can3.cs14
<link=p.CAN3.CS14>
#### can3.mb3_64b_word2
<link=p.CAN3.MB3_64B_WORD2>
#### CAN3.MB14_8B_WORD1
<link=p.CAN3.MB14_8B_WORD1>
#### CAN3.MB3_64B_WORD4
<link=p.CAN3.MB3_64B_WORD4>
#### p.can3.mb6_32b_cs
<link=p.CAN3.MB6_32B_CS>
#### can3.mb6_32b_cs
<link=p.CAN3.MB6_32B_CS>
#### CAN3.MB6_32B_CS
<link=p.CAN3.MB6_32B_CS>
#### p.CAN3.MB3_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8178[0m (0x401d8000 + 0x0178)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB6_32B_WORD1
<link=p.CAN3.MB6_32B_WORD1>
#### CAN3.MB10_16B_WORD2
<link=p.CAN3.MB10_16B_WORD2>
#### can3.mb16_8b_id
<link=p.CAN3.MB16_8B_ID>
#### can3.mb11_16b_cs
<link=p.CAN3.MB11_16B_CS>
#### p.can3.mb3_64b_word10
<link=p.CAN3.MB3_64B_WORD10>
#### p.can3.word116
<link=p.CAN3.WORD116>
#### CAN3.MB3_64B_WORD14
<link=p.CAN3.MB3_64B_WORD14>
#### p.can3.word017
<link=p.CAN3.WORD017>
#### p.can3.mb7_32b_id
<link=p.CAN3.MB7_32B_ID>
#### p.can3.mb12_16b_cs
<link=p.CAN3.MB12_16B_CS>
#### CAN3.MB18_8B_CS
<link=p.CAN3.MB18_8B_CS>
#### p.can3.mb4_64b_id
<link=p.CAN3.MB4_64B_ID>
#### p.CAN3.MB7_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81a4[0m (0x401d8000 + 0x01a4)
Message Buffer 7 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB18_8B_WORD1
<link=p.CAN3.MB18_8B_WORD1>
#### p.CAN3.CS19
<lang=dft>
 (rw)  [1;33m0x401d81b0[0m (0x401d8000 + 0x01b0)
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
#### can3.id19
<link=p.CAN3.ID19>
#### p.can3.mb13_16b_id
<link=p.CAN3.MB13_16B_ID>
#### can3.mb4_64b_word5
<link=p.CAN3.MB4_64B_WORD5>
#### p.CAN3.ID20
<lang=dft>
 (rw)  [1;33m0x401d81c4[0m (0x401d8000 + 0x01c4)
Message Buffer 20 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.id20
<link=p.CAN3.ID20>
#### can3.mb8_32b_word0
<link=p.CAN3.MB8_32B_WORD0>
#### p.CAN3.MB4_64B_WORD9
<lang=dft>
 (rw)  [1;33m0x401d81cc[0m (0x401d8000 + 0x01cc)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_39[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_38[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_37[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_36[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS21
<lang=dft>
 (rw)  [1;33m0x401d81d0[0m (0x401d8000 + 0x01d0)
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
#### can3.cs21
<link=p.CAN3.CS21>
#### p.can3.mb21_8b_cs
<link=p.CAN3.MB21_8B_CS>
#### can3.mb21_8b_cs
<link=p.CAN3.MB21_8B_CS>
#### CAN3.MB4_64B_WORD10
<link=p.CAN3.MB4_64B_WORD10>
#### p.can3.mb8_32b_word2
<link=p.CAN3.MB8_32B_WORD2>
#### p.can3.mb21_8b_id
<link=p.CAN3.MB21_8B_ID>
#### CAN3.MB14_16B_WORD1
<link=p.CAN3.MB14_16B_WORD1>
#### CAN3.MB21_8B_WORD1
<link=p.CAN3.MB21_8B_WORD1>
#### p.CAN3.MB14_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d81e4[0m (0x401d8000 + 0x01e4)
Message Buffer 14 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB22_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d81e4[0m (0x401d8000 + 0x01e4)
Message Buffer 22 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB8_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d81e4[0m (0x401d8000 + 0x01e4)
Message Buffer 8 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb22_8b_word1
<link=p.CAN3.MB22_8B_WORD1>
#### p.can3.mb5_64b_id
<link=p.CAN3.MB5_64B_ID>
#### p.can3.mb9_32b_word0
<link=p.CAN3.MB9_32B_WORD0>
#### CAN3.MB15_16B_WORD1
<link=p.CAN3.MB15_16B_WORD1>
#### can3.mb15_16b_word2
<link=p.CAN3.MB15_16B_WORD2>
#### p.CAN3.WORD023
<lang=dft>
 (rw)  [1;33m0x401d81f8[0m (0x401d8000 + 0x01f8)
Message Buffer 23 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB15_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d81fc[0m (0x401d8000 + 0x01fc)
Message Buffer 15 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb15_16b_word3
<link=p.CAN3.MB15_16B_WORD3>
#### can3.mb9_32b_word3
<link=p.CAN3.MB9_32B_WORD3>
#### p.can3.word123
<link=p.CAN3.WORD123>
#### p.can3.mb5_64b_word5
<link=p.CAN3.MB5_64B_WORD5>
#### CAN3.MB9_32B_WORD5
<link=p.CAN3.MB9_32B_WORD5>
#### CAN3.MB24_8B_WORD0
<link=p.CAN3.MB24_8B_WORD0>
#### CAN3.MB16_16B_WORD2
<link=p.CAN3.MB16_16B_WORD2>
#### can3.mb17_16b_cs
<link=p.CAN3.MB17_16B_CS>
#### p.can3.mb10_32b_word1
<link=p.CAN3.MB10_32B_WORD1>
#### can3.mb10_32b_word1
<link=p.CAN3.MB10_32B_WORD1>
#### p.CAN3.MB17_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8220[0m (0x401d8000 + 0x0220)
Message Buffer 17 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb17_16b_word0
<link=p.CAN3.MB17_16B_WORD0>
#### CAN3.MB17_16B_WORD0
<link=p.CAN3.MB17_16B_WORD0>
#### can3.mb17_16b_word1
<link=p.CAN3.MB17_16B_WORD1>
#### p.can3.mb5_64b_word13
<link=p.CAN3.MB5_64B_WORD13>
#### p.can3.word026
<link=p.CAN3.WORD026>
#### p.CAN3.WORD126
<lang=dft>
 (rw)  [1;33m0x401d822c[0m (0x401d8000 + 0x022c)
Message Buffer 26 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb27_8b_word1
<link=p.CAN3.MB27_8B_WORD1>
#### can3.mb27_8b_word1
<link=p.CAN3.MB27_8B_WORD1>
#### p.CAN3.MB6_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d823c[0m (0x401d8000 + 0x023c)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB6_64B_WORD1
<link=p.CAN3.MB6_64B_WORD1>
#### can3.mb18_16b_word2
<link=p.CAN3.MB18_16B_WORD2>
#### p.can3.mb28_8b_cs
<link=p.CAN3.MB28_8B_CS>
#### CAN3.MB28_8B_WORD0
<link=p.CAN3.MB28_8B_WORD0>
#### p.can3.mb6_64b_word4
<link=p.CAN3.MB6_64B_WORD4>
#### p.CAN3.MB29_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8254[0m (0x401d8000 + 0x0254)
Message Buffer 29 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb6_64b_word10
<link=p.CAN3.MB6_64B_WORD10>
#### can3.mb6_64b_word10
<link=p.CAN3.MB6_64B_WORD10>
#### can3.mb30_8b_id
<link=p.CAN3.MB30_8B_ID>
#### can3.mb12_32b_word0
<link=p.CAN3.MB12_32B_WORD0>
#### p.can3.word130
<link=p.CAN3.WORD130>
#### p.can3.mb12_32b_word2
<link=p.CAN3.MB12_32B_WORD2>
#### p.can3.id31
<link=p.CAN3.ID31>
#### p.CAN3.MB6_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d8274[0m (0x401d8000 + 0x0274)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word031
<link=p.CAN3.WORD031>
#### can3.mb21_16b_id
<link=p.CAN3.MB21_16B_ID>
#### p.can3.mb31_8b_word1
<link=p.CAN3.MB31_8B_WORD1>
#### can3.cs32
<link=p.CAN3.CS32>
#### CAN3.MB21_16B_WORD0
<link=p.CAN3.MB21_16B_WORD0>
#### p.can3.mb32_8b_cs
<link=p.CAN3.MB32_8B_CS>
#### p.CAN3.MB7_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8284[0m (0x401d8000 + 0x0284)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_64B_WORD1
<link=p.CAN3.MB7_64B_WORD1>
#### can3.mb32_8b_word0
<link=p.CAN3.MB32_8B_WORD0>
#### p.CAN3.MB21_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d828c[0m (0x401d8000 + 0x028c)
Message Buffer 21 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB32_8B_WORD1
<link=p.CAN3.MB32_8B_WORD1>
#### p.CAN3.ID33
<lang=dft>
 (rw)  [1;33m0x401d8294[0m (0x401d8000 + 0x0294)
Message Buffer 33 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB33_8B_WORD1
<link=p.CAN3.MB33_8B_WORD1>
#### can3.mb7_64b_word7
<link=p.CAN3.MB7_64B_WORD7>
#### p.CAN3.WORD034
<lang=dft>
 (rw)  [1;33m0x401d82a8[0m (0x401d8000 + 0x02a8)
Message Buffer 34 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB23_16B_WORD0
<link=p.CAN3.MB23_16B_WORD0>
#### can3.mb35_8b_cs
<link=p.CAN3.MB35_8B_CS>
#### can3.mb35_8b_word0
<link=p.CAN3.MB35_8B_WORD0>
#### CAN3.WORD135
<link=p.CAN3.WORD135>
#### p.CAN3.CS36
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
#### p.can3.mb8_64b_word0
<link=p.CAN3.MB8_64B_WORD0>
#### p.can3.mb14_32b_word5
<link=p.CAN3.MB14_32B_WORD5>
#### can3.mb14_32b_word5
<link=p.CAN3.MB14_32B_WORD5>
#### can3.mb37_8b_id
<link=p.CAN3.MB37_8B_ID>
#### CAN3.MB8_64B_WORD4
<link=p.CAN3.MB8_64B_WORD4>
#### p.can3.mb25_16b_id
<link=p.CAN3.MB25_16B_ID>
#### CAN3.MB25_16B_ID
<link=p.CAN3.MB25_16B_ID>
#### CAN3.MB25_16B_WORD3
<link=p.CAN3.MB25_16B_WORD3>
#### CAN3.CS39
<link=p.CAN3.CS39>
#### p.CAN3.MB39_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d82f4[0m (0x401d8000 + 0x02f4)
Message Buffer 39 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb39_8b_word0
<link=p.CAN3.MB39_8B_WORD0>
#### CAN3.MB27_16B_CS
<link=p.CAN3.MB27_16B_CS>
#### CAN3.MB40_8B_WORD1
<link=p.CAN3.MB40_8B_WORD1>
#### can3.word140
<link=p.CAN3.WORD140>
#### can3.mb16_32b_word4
<link=p.CAN3.MB16_32B_WORD4>
#### can3.mb27_16b_word3
<link=p.CAN3.MB27_16B_WORD3>
#### CAN3.WORD141
<link=p.CAN3.WORD141>
#### p.can3.mb16_32b_word6
<link=p.CAN3.MB16_32B_WORD6>
#### CAN3.MB9_64B_WORD4
<link=p.CAN3.MB9_64B_WORD4>
#### p.CAN3.ID42
<lang=dft>
 (rw)  [1;33m0x401d8324[0m (0x401d8000 + 0x0324)
Message Buffer 42 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.id42
<link=p.CAN3.ID42>
#### can3.mb28_16b_id
<link=p.CAN3.MB28_16B_ID>
#### p.can3.mb42_8b_id
<link=p.CAN3.MB42_8B_ID>
#### p.can3.mb17_32b_cs
<link=p.CAN3.MB17_32B_CS>
#### p.can3.mb28_16b_word0
<link=p.CAN3.MB28_16B_WORD0>
#### p.can3.mb42_8b_word0
<link=p.CAN3.MB42_8B_WORD0>
#### can3.mb9_64b_word7
<link=p.CAN3.MB9_64B_WORD7>
#### can3.mb43_8b_cs
<link=p.CAN3.MB43_8B_CS>
#### CAN3.MB28_16B_WORD3
<link=p.CAN3.MB28_16B_WORD3>
#### p.can3.mb9_64b_word11
<link=p.CAN3.MB9_64B_WORD11>
#### p.can3.id44
<link=p.CAN3.ID44>
#### CAN3.MB9_64B_WORD14
<link=p.CAN3.MB9_64B_WORD14>
#### CAN3.MB18_32B_CS
<link=p.CAN3.MB18_32B_CS>
#### CAN3.MB30_16B_CS
<link=p.CAN3.MB30_16B_CS>
#### CAN3.ID45
<link=p.CAN3.ID45>
#### can3.mb30_16b_id
<link=p.CAN3.MB30_16B_ID>
#### can3.mb10_64b_word0
<link=p.CAN3.MB10_64B_WORD0>
#### p.CAN3.MB18_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8358[0m (0x401d8000 + 0x0358)
Message Buffer 18 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb30_16b_word0
<link=p.CAN3.MB30_16B_WORD0>
#### CAN3.MB45_8B_WORD0
<link=p.CAN3.MB45_8B_WORD0>
#### p.can3.word045
<link=p.CAN3.WORD045>
#### can3.word045
<link=p.CAN3.WORD045>
#### can3.mb30_16b_word1
<link=p.CAN3.MB30_16B_WORD1>
#### p.CAN3.MB10_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8364[0m (0x401d8000 + 0x0364)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB18_32B_WORD4
<link=p.CAN3.MB18_32B_WORD4>
#### CAN3.MB10_64B_WORD8
<link=p.CAN3.MB10_64B_WORD8>
#### can3.mb47_8b_word1
<link=p.CAN3.MB47_8B_WORD1>
#### p.CAN3.WORD147
<lang=dft>
 (rw)  [1;33m0x401d837c[0m (0x401d8000 + 0x037c)
Message Buffer 47 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB19_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8384[0m (0x401d8000 + 0x0384)
Message Buffer 19 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB48_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8384[0m (0x401d8000 + 0x0384)
Message Buffer 48 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb19_32b_word2
<link=p.CAN3.MB19_32B_WORD2>
#### can3.mb32_16b_word0
<link=p.CAN3.MB32_16B_WORD0>
#### p.CAN3.MB10_64B_WORD13
<lang=dft>
 (rw)  [1;33m0x401d838c[0m (0x401d8000 + 0x038c)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_55[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_54[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_53[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_52[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb19_32b_word3
<link=p.CAN3.MB19_32B_WORD3>
#### CAN3.MB19_32B_WORD3
<link=p.CAN3.MB19_32B_WORD3>
#### p.can3.mb32_16b_word1
<link=p.CAN3.MB32_16B_WORD1>
#### p.can3.word148
<link=p.CAN3.WORD148>
#### CAN3.MB49_8B_CS
<link=p.CAN3.MB49_8B_CS>
#### can3.mb11_64b_word0
<link=p.CAN3.MB11_64B_WORD0>
#### p.can3.mb50_8b_cs
<link=p.CAN3.MB50_8B_CS>
#### p.can3.mb50_8b_id
<link=p.CAN3.MB50_8B_ID>
#### p.can3.mb20_32b_word1
<link=p.CAN3.MB20_32B_WORD1>
#### p.CAN3.WORD150
<lang=dft>
 (rw)  [1;33m0x401d83ac[0m (0x401d8000 + 0x03ac)
Message Buffer 50 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.ID51
<lang=dft>
 (rw)  [1;33m0x401d83b4[0m (0x401d8000 + 0x03b4)
Message Buffer 51 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB34_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d83b4[0m (0x401d8000 + 0x03b4)
Message Buffer 34 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb34_16b_id
<link=p.CAN3.MB34_16B_ID>
#### CAN3.MB11_64B_WORD6
<link=p.CAN3.MB11_64B_WORD6>
#### can3.mb51_8b_word0
<link=p.CAN3.MB51_8B_WORD0>
#### CAN3.MB20_32B_WORD6
<link=p.CAN3.MB20_32B_WORD6>
#### p.can3.mb11_64b_word9
<link=p.CAN3.MB11_64B_WORD9>
#### p.can3.mb52_8b_word0
<link=p.CAN3.MB52_8B_WORD0>
#### p.CAN3.MB11_64B_WORD11
<lang=dft>
 (rw)  [1;33m0x401d83cc[0m (0x401d8000 + 0x03cc)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_47[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_46[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_45[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_44[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB52_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83cc[0m (0x401d8000 + 0x03cc)
Message Buffer 52 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.CS53
<link=p.CAN3.CS53>
#### p.can3.id53
<link=p.CAN3.ID53>
#### p.can3.mb11_64b_word13
<link=p.CAN3.MB11_64B_WORD13>
#### p.can3.mb21_32b_word1
<link=p.CAN3.MB21_32B_WORD1>
#### p.CAN3.MB21_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d83dc[0m (0x401d8000 + 0x03dc)
Message Buffer 21 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB12_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d83e4[0m (0x401d8000 + 0x03e4)
Message Buffer 12 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb12_64b_word0
<link=p.CAN3.MB12_64B_WORD0>
#### p.CAN3.CS55
<lang=dft>
 (rw)  [1;33m0x401d83f0[0m (0x401d8000 + 0x03f0)
Message Buffer 55 CS Register
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
#### CAN3.MB12_64B_WORD2
<link=p.CAN3.MB12_64B_WORD2>
#### can3.id55
<link=p.CAN3.ID55>
#### p.can3.mb22_32b_id
<link=p.CAN3.MB22_32B_ID>
#### p.can3.mb55_8b_word0
<link=p.CAN3.MB55_8B_WORD0>
#### p.can3.mb22_32b_word1
<link=p.CAN3.MB22_32B_WORD1>
#### CAN3.MB22_32B_WORD2
<link=p.CAN3.MB22_32B_WORD2>
#### CAN3.MB56_8B_CS
<link=p.CAN3.MB56_8B_CS>
#### CAN3.ID56
<link=p.CAN3.ID56>
#### p.CAN3.MB12_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d8408[0m (0x401d8000 + 0x0408)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb12_64b_word8
<link=p.CAN3.MB12_64B_WORD8>
#### CAN3.WORD156
<link=p.CAN3.WORD156>
#### CAN3.MB12_64B_WORD10
<link=p.CAN3.MB12_64B_WORD10>
#### p.CAN3.MB22_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8410[0m (0x401d8000 + 0x0410)
Message Buffer 22 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb22_32b_word6
<link=p.CAN3.MB22_32B_WORD6>
#### p.CAN3.MB38_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8418[0m (0x401d8000 + 0x0418)
Message Buffer 38 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB12_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d8420[0m (0x401d8000 + 0x0420)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb23_32b_word1
<link=p.CAN3.MB23_32B_WORD1>
#### p.can3.mb13_64b_word0
<link=p.CAN3.MB13_64B_WORD0>
#### p.CAN3.MB13_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8434[0m (0x401d8000 + 0x0434)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB39_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8438[0m (0x401d8000 + 0x0438)
Message Buffer 39 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb39_16b_word2
<link=p.CAN3.MB39_16B_WORD2>
#### can3.mb39_16b_word2
<link=p.CAN3.MB39_16B_WORD2>
#### p.CAN3.WORD059
<lang=dft>
 (rw)  [1;33m0x401d8438[0m (0x401d8000 + 0x0438)
Message Buffer 59 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB59_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d843c[0m (0x401d8000 + 0x043c)
Message Buffer 59 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB59_8B_WORD1
<link=p.CAN3.MB59_8B_WORD1>
#### can3.mb60_8b_word0
<link=p.CAN3.MB60_8B_WORD0>
#### can3.mb13_64b_word8
<link=p.CAN3.MB13_64B_WORD8>
#### can3.mb13_64b_word11
<link=p.CAN3.MB13_64B_WORD11>
#### p.can3.mb41_16b_id
<link=p.CAN3.MB41_16B_ID>
#### CAN3.CS62
<link=p.CAN3.CS62>
#### p.CAN3.MB41_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8460[0m (0x401d8000 + 0x0460)
Message Buffer 41 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb62_8b_cs
<link=p.CAN3.MB62_8B_CS>
#### p.can3.id62
<link=p.CAN3.ID62>
#### CAN3.MB41_16B_WORD2
<link=p.CAN3.MB41_16B_WORD2>
#### CAN3.WORD062
<link=p.CAN3.WORD062>
#### p.can3.cs63
<link=p.CAN3.CS63>
#### CAN3.ID63
<link=p.CAN3.ID63>
#### p.CAN3.RXIMR[3]
<lang=dft>
 (rw)  [1;33m0x401d888c[0m (0x401d8000 + 0x088c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[6]
<link=p.CAN3.RXIMR[6]>
#### p.can3.rximr[7]
<link=p.CAN3.RXIMR[7]>
#### p.CAN3.RXIMR[10]
<lang=dft>
 (rw)  [1;33m0x401d88a8[0m (0x401d8000 + 0x08a8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.CAN3.RXIMR[15]
<lang=dft>
 (rw)  [1;33m0x401d88bc[0m (0x401d8000 + 0x08bc)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[17]
<link=p.CAN3.RXIMR[17]>
#### p.CAN3.RXIMR[21]
<lang=dft>
 (rw)  [1;33m0x401d88d4[0m (0x401d8000 + 0x08d4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[27]
<link=p.CAN3.RXIMR[27]>
#### CAN3.RXIMR[31]
<link=p.CAN3.RXIMR[31]>
#### CAN3.RXIMR[49]
<link=p.CAN3.RXIMR[49]>
#### can3.rximr[57]
<link=p.CAN3.RXIMR[57]>
#### p.can3.erfier
<link=p.CAN3.ERFIER>
#### p.CAN3.HR_TIME_STAMP[0]
<lang=dft>
 (ro)  [1;33m0x401d8c30[0m (0x401d8000 + 0x0c30)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.hr_time_stamp[0]
<link=p.CAN3.HR_TIME_STAMP[0]>
#### CAN3.HR_TIME_STAMP[6]
<link=p.CAN3.HR_TIME_STAMP[6]>
#### can3.hr_time_stamp[10]
<link=p.CAN3.HR_TIME_STAMP[10]>
#### p.can3.hr_time_stamp[23]
<link=p.CAN3.HR_TIME_STAMP[23]>
#### can3.hr_time_stamp[28]
<link=p.CAN3.HR_TIME_STAMP[28]>
#### CAN3.HR_TIME_STAMP[42]
<link=p.CAN3.HR_TIME_STAMP[42]>
#### p.can3.hr_time_stamp[46]
<link=p.CAN3.HR_TIME_STAMP[46]>
#### CAN3.HR_TIME_STAMP[51]
<link=p.CAN3.HR_TIME_STAMP[51]>
#### p.can3.hr_time_stamp[52]
<link=p.CAN3.HR_TIME_STAMP[52]>
#### CAN3.HR_TIME_STAMP[56]
<link=p.CAN3.HR_TIME_STAMP[56]>
#### p.CAN3.HR_TIME_STAMP[62]
<lang=dft>
 (ro)  [1;33m0x401d8d28[0m (0x401d8000 + 0x0d28)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.CAN3.ERFFEL[6]
<lang=dft>
 (rw)  [1;33m0x401db018[0m (0x401d8000 + 0x3018)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[12]
<link=p.CAN3.ERFFEL[12]>
#### p.CAN3.ERFFEL[13]
<lang=dft>
 (rw)  [1;33m0x401db034[0m (0x401d8000 + 0x3034)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[22]
<lang=dft>
 (rw)  [1;33m0x401db058[0m (0x401d8000 + 0x3058)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[25]
<lang=dft>
 (rw)  [1;33m0x401db064[0m (0x401d8000 + 0x3064)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[28]
<lang=dft>
 (rw)  [1;33m0x401db070[0m (0x401d8000 + 0x3070)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[28]
<link=p.CAN3.ERFFEL[28]>
#### can3.erffel[34]
<link=p.CAN3.ERFFEL[34]>
#### p.can3.erffel[49]
<link=p.CAN3.ERFFEL[49]>
#### CAN3.ERFFEL[52]
<link=p.CAN3.ERFFEL[52]>
#### p.can3.erffel[54]
<link=p.CAN3.ERFFEL[54]>
#### p.CAN3.ERFFEL[59]
<lang=dft>
 (rw)  [1;33m0x401db0ec[0m (0x401d8000 + 0x30ec)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[59]
<link=p.CAN3.ERFFEL[59]>
#### can3.erffel[63]
<link=p.CAN3.ERFFEL[63]>
#### p.can3.erffel[66]
<link=p.CAN3.ERFFEL[66]>
#### p.can3.erffel[72]
<link=p.CAN3.ERFFEL[72]>
#### p.can3.erffel[78]
<link=p.CAN3.ERFFEL[78]>
#### can3.erffel[81]
<link=p.CAN3.ERFFEL[81]>
#### p.can3.erffel[86]
<link=p.CAN3.ERFFEL[86]>
#### p.CAN3.ERFFEL[90]
<lang=dft>
 (rw)  [1;33m0x401db168[0m (0x401d8000 + 0x3168)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[95]
<link=p.CAN3.ERFFEL[95]>
#### p.CAN3.ERFFEL[101]
<lang=dft>
 (rw)  [1;33m0x401db194[0m (0x401d8000 + 0x3194)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[102]
<link=p.CAN3.ERFFEL[102]>
#### CAN3.ERFFEL[102]
<link=p.CAN3.ERFFEL[102]>
#### p.CAN3.ERFFEL[106]
<lang=dft>
 (rw)  [1;33m0x401db1a8[0m (0x401d8000 + 0x31a8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[109]
<link=p.CAN3.ERFFEL[109]>
#### p.CAN3.ERFFEL[112]
<lang=dft>
 (rw)  [1;33m0x401db1c0[0m (0x401d8000 + 0x31c0)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[113]
<link=p.CAN3.ERFFEL[113]>
#### p.can3.erffel[116]
<link=p.CAN3.ERFFEL[116]>
#### CAN3.ERFFEL[116]
<link=p.CAN3.ERFFEL[116]>
#### p.CAN3.ERFFEL[119]
<lang=dft>
 (rw)  [1;33m0x401db1dc[0m (0x401d8000 + 0x31dc)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[124]
<link=p.CAN3.ERFFEL[124]>
#### CAN3.ERFFEL[124]
<link=p.CAN3.ERFFEL[124]>
#### p.CAN3.ERFFEL[127]
<lang=dft>
 (rw)  [1;33m0x401db1fc[0m (0x401d8000 + 0x31fc)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### TMR1.COMP20
<link=p.TMR1.COMP20>
#### p.tmr1.comp22
<link=p.TMR1.COMP22>
#### p.tmr1.load0
<link=p.TMR1.LOAD0>
#### tmr1.hold1
<link=p.TMR1.HOLD1>
#### p.TMR1.CNTR1
<lang=dft>
 (rw)  [1;33m0x401dc02a[0m (0x401dc000 + 0x002a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### p.tmr1.cntr3
<link=p.TMR1.CNTR3>
#### TMR1.CTRL2
<link=p.TMR1.CTRL2>
#### p.TMR1.CMPLD12
<lang=dft>
 (rw)  [1;33m0x401dc050[0m (0x401dc000 + 0x0050)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### tmr1.cmpld21
<link=p.TMR1.CMPLD21>
#### tmr1.csctrl3
<link=p.TMR1.CSCTRL3>
#### TMR1.FILT3
<link=p.TMR1.FILT3>
#### p.tmr2.comp10
<link=p.TMR2.COMP10>
#### p.TMR2.COMP23
<lang=dft>
 (rw)  [1;33m0x401e0062[0m (0x401e0000 + 0x0062)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### tmr2.hold2
<link=p.TMR2.HOLD2>
#### TMR2.CNTR0
<link=p.TMR2.CNTR0>
#### p.tmr2.cntr3
<link=p.TMR2.CNTR3>
#### p.TMR2.CTRL1
<lang=dft>
 (rw)  [1;33m0x401e002c[0m (0x401e0000 + 0x002c)
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
#### tmr2.ctrl1
<link=p.TMR2.CTRL1>
#### p.tmr2.ctrl2
<link=p.TMR2.CTRL2>
#### p.TMR2.CMPLD11
<lang=dft>
 (rw)  [1;33m0x401e0030[0m (0x401e0000 + 0x0030)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### p.TMR2.CMPLD20
<lang=dft>
 (rw)  [1;33m0x401e0012[0m (0x401e0000 + 0x0012)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### TMR2.CSCTRL1
<link=p.TMR2.CSCTRL1>
#### p.tmr2.csctrl2
<link=p.TMR2.CSCTRL2>
#### p.TMR2.FILT0
<lang=dft>
 (rw)  [1;33m0x401e0016[0m (0x401e0000 + 0x0016)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### tmr2.filt1
<link=p.TMR2.FILT1>
#### p.tmr2.dma0
<link=p.TMR2.DMA0>
#### tmr3.comp11
<link=p.TMR3.COMP11>
#### TMR3.COMP11
<link=p.TMR3.COMP11>
#### TMR3.COMP20
<link=p.TMR3.COMP20>
#### p.TMR3.CAPT0
<lang=dft>
 (rw)  [1;33m0x401e4004[0m (0x401e4000 + 0x0004)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### tmr3.capt1
<link=p.TMR3.CAPT1>
#### TMR3.CAPT1
<link=p.TMR3.CAPT1>
#### p.tmr3.capt2
<link=p.TMR3.CAPT2>
#### p.tmr3.load2
<link=p.TMR3.LOAD2>
#### p.TMR3.HOLD2
<lang=dft>
 (rw)  [1;33m0x401e4048[0m (0x401e4000 + 0x0048)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### tmr3.hold2
<link=p.TMR3.HOLD2>
#### tmr3.cntr2
<link=p.TMR3.CNTR2>
#### TMR3.SCTRL1
<link=p.TMR3.SCTRL1>
#### TMR3.CMPLD11
<link=p.TMR3.CMPLD11>
#### p.tmr3.cmpld20
<link=p.TMR3.CMPLD20>
#### tmr3.cmpld23
<link=p.TMR3.CMPLD23>
#### TMR3.CSCTRL1
<link=p.TMR3.CSCTRL1>
#### tmr3.filt0
<link=p.TMR3.FILT0>
#### p.TMR3.FILT1
<lang=dft>
 (rw)  [1;33m0x401e4036[0m (0x401e4000 + 0x0036)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### p.TMR3.DMA0
<lang=dft>
 (rw)  [1;33m0x401e4018[0m (0x401e4000 + 0x0018)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### p.tmr4.comp13
<link=p.TMR4.COMP13>
#### p.tmr4.comp22
<link=p.TMR4.COMP22>
#### p.tmr4.hold0
<link=p.TMR4.HOLD0>
#### TMR4.HOLD3
<link=p.TMR4.HOLD3>
#### TMR4.CTRL3
<link=p.TMR4.CTRL3>
#### p.tmr4.sctrl0
<link=p.TMR4.SCTRL0>
#### p.TMR4.SCTRL3
<lang=dft>
 (rw)  [1;33m0x401e806e[0m (0x401e8000 + 0x006e)
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
#### TMR4.CMPLD22
<link=p.TMR4.CMPLD22>
#### tmr4.csctrl3
<link=p.TMR4.CSCTRL3>
#### p.TMR4.DMA1
<lang=dft>
 (rw)  [1;33m0x401e8038[0m (0x401e8000 + 0x0038)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### p.gpt1
<link=p.GPT1>
#### gpt1.sr
<link=p.GPT1.SR>
#### p.GPT1.OCR3
<lang=dft>
 (rw)  [1;33m0x401ec018[0m (0x401ec000 + 0x0018)
GPT Output Compare Register 3
 (rw) (32)  [0;32mCOMP[0m  - [31:00] -  Compare Value
</lang>
#### p.gpt1.ocr3
<link=p.GPT1.OCR3>
#### p.GPT1.CNT
<lang=dft>
 (ro)  [1;33m0x401ec024[0m (0x401ec000 + 0x0024)
GPT Counter Register
 (ro) (32)  [0;32mCOUNT[0m  - [31:00] -  Counter Value. The COUNT bits show the current count value of the GPT counter.
</lang>
#### p.gpt2.pr
<link=p.GPT2.PR>
#### p.gpt2.ocr1
<link=p.GPT2.OCR1>
#### GPT2.OCR2
<link=p.GPT2.OCR2>
#### p.ocotp.ctrl_clr
<link=p.OCOTP.CTRL_CLR>
#### p.ocotp.scs
<link=p.OCOTP.SCS>
#### p.ocotp.scs_set
<link=p.OCOTP.SCS_SET>
#### ocotp.scs_clr
<link=p.OCOTP.SCS_CLR>
#### ocotp.scs_tog
<link=p.OCOTP.SCS_TOG>
#### p.OCOTP.CFG1
<lang=dft>
 (rw)  [1;33m0x401f4420[0m (0x401f4000 + 0x0420)
Value of OTP Bank0 Word2 (Configuration and Manufacturing Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.cfg1
<link=p.OCOTP.CFG1>
#### p.OCOTP.MEM4
<lang=dft>
 (rw)  [1;33m0x401f44c0[0m (0x401f4000 + 0x04c0)
Value of OTP Bank1 Word4 (Memory Related Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.otpmk3
<link=p.OCOTP.OTPMK3>
#### p.OCOTP.OTPMK7
<lang=dft>
 (rw)  [1;33m0x401f4570[0m (0x401f4000 + 0x0570)
Value of OTP Bank2 Word7 (OTPMK Key)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.SRK2
<lang=dft>
 (rw)  [1;33m0x401f45a0[0m (0x401f4000 + 0x05a0)
Shadow Register for OTP Bank3 Word2 (SRK Hash)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.srk2
<link=p.OCOTP.SRK2>
#### OCOTP.MAC2
<link=p.OCOTP.MAC2>
#### ocotp.otpmk_crc32
<link=p.OCOTP.OTPMK_CRC32>
#### p.OCOTP.SW_GP23
<lang=dft>
 (rw)  [1;33m0x401f46c0[0m (0x401f4000 + 0x06c0)
Value of OTP Bank5 Word4 (SW GP2)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### ocotp.misc_conf0
<link=p.OCOTP.MISC_CONF0>
#### ocotp.rom_patch1
<link=p.OCOTP.ROM_PATCH1>
#### p.ocotp.rom_patch4
<link=p.OCOTP.ROM_PATCH4>
#### ocotp.gp30
<link=p.OCOTP.GP30>
#### OCOTP.GP40
<link=p.OCOTP.GP40>
#### p.OCOTP.GP43
<lang=dft>
 (rw)  [1;33m0x401f48f0[0m (0x401f4000 + 0x08f0)
Value of OTP Bank7 Word7 (GP4)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_05
<lang=dft>
 (rw)  [1;33m0x401f8028[0m (0x401f8000 + 0x0028)
SW_MUX_CTL_PAD_GPIO_EMC_05 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA05 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMB02 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: SAI2_TX_SYNC of instance: sai2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT07 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO05 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO05 of instance: gpio4
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_05
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_09>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_12
<lang=dft>
 (rw)  [1;33m0x401f8044[0m (0x401f8000 + 0x0044)
SW_MUX_CTL_PAD_GPIO_EMC_12 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR03 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_IN24 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPI2C4_SCL of instance: lpi2c4
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: USDHC1_WP of instance: usdhc1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXPWM1_PWMA03 of instance: flexpwm1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO12 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_B_SCLK of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_12
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_22
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_22>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_27
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_27>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_34
<lang=dft>
 (rw)  [1;33m0x401f809c[0m (0x401f8000 + 0x009c)
SW_MUX_CTL_PAD_GPIO_EMC_34 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA12 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM3_PWMB02 of instance: flexpwm3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: USDHC1_VSELECT of instance: usdhc1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI3_RX_SYNC of instance: sai3
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA19 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO20 of instance: gpio3
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RX_ER of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_34
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_34
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_34>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_40
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_40>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_02
<lang=dft>
 (rw)  [1;33m0x401f80c4[0m (0x401f8000 + 0x00c4)
SW_MUX_CTL_PAD_GPIO_AD_B0_02 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXCAN2_TX of instance: flexcan2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT16 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART6_TX of instance: lpuart6
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: USB_OTG1_PWR of instance: usb
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXPWM1_PWMX00 of instance: flexpwm1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO02 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: LPI2C1_HREQ of instance: lpi2c1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: LPSPI3_SDI of instance: lpspi3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_02
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_11
<lang=dft>
 (rw)  [1;33m0x401f80e8[0m (0x401f8000 + 0x00e8)
SW_MUX_CTL_PAD_GPIO_AD_B0_11 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: JTAG_TRSTB of instance: jtag_mux
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMB03 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ENET_COL of instance: enet
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: WDOG1_WDOG_B of instance: wdog1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA02 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO11 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: XBAR1_IN23 of instance: xbar1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: ENET_1588_EVENT0_IN of instance: enet
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXCAN3_RX of instance: flexcan3/canfd
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: SEMC_CLK6 of instance: semc
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_11
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_15>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_05
<lang=dft>
 (rw)  [1;33m0x401f8110[0m (0x401f8000 + 0x0110)
SW_MUX_CTL_PAD_GPIO_AD_B1_05 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPIB_DATA02 of instance: flexspi
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: ENET_MDIO of instance: enet
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART3_RTS_B of instance: lpuart3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SPDIF_OUT of instance: spdif
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_MCLK of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO21 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_DATA1 of instance: usdhc2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_COL05 of instance: kpp
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT2_COMPARE1 of instance: gpt2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO05 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_05
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_09>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_04>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_09>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_13>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_02
<lang=dft>
 (rw)  [1;33m0x401f8184[0m (0x401f8000 + 0x0184)
SW_MUX_CTL_PAD_GPIO_B1_02 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA14 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT16 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPSPI4_PCS2 of instance: lpspi4
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_BCLK of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO18 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO18 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXPWM2_PWMA03 of instance: flexpwm2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RDATA01 of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO18 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_02
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_03>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_10>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_11
<lang=dft>
 (rw)  [1;33m0x401f81a8[0m (0x401f8000 + 0x01a8)
SW_MUX_CTL_PAD_GPIO_B1_11 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA23 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER4_TIMER3 of instance: qtimer4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_DATA01 of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_RX_ER of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO27 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO27 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: LPSPI4_PCS3 of instance: lpspi4
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO27 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_11
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_14>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b0_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_02>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_02>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_02
<lang=dft>
 (rw)  [1;33m0x401f81dc[0m (0x401f8000 + 0x01dc)
SW_MUX_CTL_PAD_GPIO_SD_B1_02 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_DATA1 of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIB_DATA01 of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXPWM2_PWMA03 of instance: flexpwm2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_DATA01 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXCAN1_TX of instance: flexcan1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO02 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: CCM_WAIT of instance: ccm
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: SAI3_TX_SYNC of instance: sai3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_02
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_04>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b1_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_09>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_11
<lang=dft>
 (rw)  [1;33m0x401f8200[0m (0x401f8000 + 0x0200)
SW_MUX_CTL_PAD_GPIO_SD_B1_11 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_DATA7 of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIA_DATA03 of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART2_TX of instance: lpuart2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPI2C2_SCL of instance: lpi2c2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI2_PCS3 of instance: lpspi2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO11 of instance: gpio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_11
</lang>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_03>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_07>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_08
<lang=dft>
 (rw)  [1;33m0x401f8224[0m (0x401f8000 + 0x0224)
SW_PAD_CTL_PAD_GPIO_EMC_08 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_13
<lang=dft>
 (rw)  [1;33m0x401f8238[0m (0x401f8000 + 0x0238)
SW_PAD_CTL_PAD_GPIO_EMC_13 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_emc_18
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_18>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_19
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_19>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_21
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_21>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_27
<lang=dft>
 (rw)  [1;33m0x401f8270[0m (0x401f8000 + 0x0270)
SW_PAD_CTL_PAD_GPIO_EMC_27 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_28
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_28>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_34
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_34>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_36
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_36>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_37
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_37>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_06>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_09
<lang=dft>
 (rw)  [1;33m0x401f82d0[0m (0x401f8000 + 0x02d0)
SW_PAD_CTL_PAD_GPIO_AD_B0_09 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_11>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_12>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_13
<lang=dft>
 (rw)  [1;33m0x401f82e0[0m (0x401f8000 + 0x02e0)
SW_PAD_CTL_PAD_GPIO_AD_B0_13 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_14>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_08>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_12>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_13>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_14>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_15
<lang=dft>
 (rw)  [1;33m0x401f8328[0m (0x401f8000 + 0x0328)
SW_PAD_CTL_PAD_GPIO_AD_B1_15 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_00>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_08
<lang=dft>
 (rw)  [1;33m0x401f834c[0m (0x401f8000 + 0x034c)
SW_PAD_CTL_PAD_GPIO_B0_08 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_13>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_13>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_02
<lang=dft>
 (rw)  [1;33m0x401f8374[0m (0x401f8000 + 0x0374)
SW_PAD_CTL_PAD_GPIO_B1_02 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_07>
#### iomuxc.sw_pad_ctl_pad_gpio_b1_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_09>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_10>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_00>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_02>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_03
<lang=dft>
 (rw)  [1;33m0x401f83d0[0m (0x401f8000 + 0x03d0)
SW_PAD_CTL_PAD_GPIO_SD_B1_03 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_08>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_11>
#### p.IOMUXC.ANATOP_USB_OTG2_ID_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f83f8[0m (0x401f8000 + 0x03f8)
ANATOP_USB_OTG2_ID_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_00_ALT3 :
         Selecting Pad: GPIO_AD_B0_00 for Mode: ALT3
      0x1 - GPIO_AD_B1_00_ALT0 :
         Selecting Pad: GPIO_AD_B1_00 for Mode: ALT0
</lang>
#### p.IOMUXC.CSI_DATA02_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8400[0m (0x401f8000 + 0x0400)
CSI_DATA02_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_15_ALT4 :
         Selecting Pad: GPIO_AD_B1_15 for Mode: ALT4
      0x1 - GPIO_AD_B0_11_ALT4 :
         Selecting Pad: GPIO_AD_B0_11 for Mode: ALT4
</lang>
#### p.IOMUXC.CSI_DATA04_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8408[0m (0x401f8000 + 0x0408)
CSI_DATA04_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_13_ALT4 :
         Selecting Pad: GPIO_AD_B1_13 for Mode: ALT4
      0x1 - GPIO_AD_B0_09_ALT4 :
         Selecting Pad: GPIO_AD_B0_09 for Mode: ALT4
</lang>
#### iomuxc.csi_data07_select_input
<link=p.IOMUXC.CSI_DATA07_SELECT_INPUT>
#### p.iomuxc.flexpwm1_pwma0_select_input
<link=p.IOMUXC.FLEXPWM1_PWMA0_SELECT_INPUT>
#### p.iomuxc.flexpwm2_pwma1_select_input
<link=p.IOMUXC.FLEXPWM2_PWMA1_SELECT_INPUT>
#### iomuxc.flexpwm2_pwmb2_select_input
<link=p.IOMUXC.FLEXPWM2_PWMB2_SELECT_INPUT>
#### IOMUXC.FLEXPWM2_PWMB2_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMB2_SELECT_INPUT>
#### IOMUXC.FLEXPWM4_PWMA0_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM4_PWMA0_SELECT_INPUT>
#### p.IOMUXC.FLEXSPIA_DQS_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84a4[0m (0x401f8000 + 0x04a4)
FLEXSPIA_DQS_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_05_ALT1 :
         Selecting Pad: GPIO_SD_B1_05 for Mode: ALT1
      0x1 - GPIO_AD_B1_09_ALT0 :
         Selecting Pad: GPIO_AD_B1_09 for Mode: ALT0
</lang>
#### p.iomuxc.flexspib_data0_select_input
<link=p.IOMUXC.FLEXSPIB_DATA0_SELECT_INPUT>
#### iomuxc.flexspib_data2_select_input
<link=p.IOMUXC.FLEXSPIB_DATA2_SELECT_INPUT>
#### IOMUXC.LPI2C1_SCL_SELECT_INPUT
<link=p.IOMUXC.LPI2C1_SCL_SELECT_INPUT>
#### p.iomuxc.lpi2c1_sda_select_input
<link=p.IOMUXC.LPI2C1_SDA_SELECT_INPUT>
#### p.IOMUXC.LPI2C3_SDA_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84e0[0m (0x401f8000 + 0x04e0)
LPI2C3_SDA_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_21_ALT2 :
         Selecting Pad: GPIO_EMC_21 for Mode: ALT2
      0x1 - GPIO_SD_B0_01_ALT2 :
         Selecting Pad: GPIO_SD_B0_01 for Mode: ALT2
      0x2 - GPIO_AD_B1_06_ALT1 :
         Selecting Pad: GPIO_AD_B1_06 for Mode: ALT1
</lang>
#### IOMUXC.LPI2C4_SDA_SELECT_INPUT
<link=p.IOMUXC.LPI2C4_SDA_SELECT_INPUT>
#### iomuxc.lpspi3_sdi_select_input
<link=p.IOMUXC.LPSPI3_SDI_SELECT_INPUT>
#### iomuxc.lpspi3_sdo_select_input
<link=p.IOMUXC.LPSPI3_SDO_SELECT_INPUT>
#### iomuxc.lpspi4_pcs0_select_input
<link=p.IOMUXC.LPSPI4_PCS0_SELECT_INPUT>
#### p.IOMUXC.LPSPI4_SCK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8520[0m (0x401f8000 + 0x0520)
LPSPI4_SCK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_B0_03_ALT3 :
         Selecting Pad: GPIO_B0_03 for Mode: ALT3
      0x1 - GPIO_B1_07_ALT1 :
         Selecting Pad: GPIO_B1_07 for Mode: ALT1
</lang>
#### iomuxc.lpspi4_sdi_select_input
<link=p.IOMUXC.LPSPI4_SDI_SELECT_INPUT>
#### p.IOMUXC.LPUART5_RX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8548[0m (0x401f8000 + 0x0548)
LPUART5_RX_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_24_ALT2 :
         Selecting Pad: GPIO_EMC_24 for Mode: ALT2
      0x1 - GPIO_B1_13_ALT1 :
         Selecting Pad: GPIO_B1_13 for Mode: ALT1
</lang>
#### p.IOMUXC.LPUART6_RX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8550[0m (0x401f8000 + 0x0550)
LPUART6_RX_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_26_ALT2 :
         Selecting Pad: GPIO_EMC_26 for Mode: ALT2
      0x1 - GPIO_AD_B0_03_ALT2 :
         Selecting Pad: GPIO_AD_B0_03 for Mode: ALT2
</lang>
#### IOMUXC.LPUART6_RX_SELECT_INPUT
<link=p.IOMUXC.LPUART6_RX_SELECT_INPUT>
#### IOMUXC.LPUART7_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART7_TX_SELECT_INPUT>
#### p.IOMUXC.NMI_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8568[0m (0x401f8000 + 0x0568)
NMI_GLUE_NMI_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_12_ALT7 :
         Selecting Pad: GPIO_AD_B0_12 for Mode: ALT7
      0x1 - WAKEUP_ALT7 :
         Selecting Pad: WAKEUP for Mode: ALT7
</lang>
#### p.iomuxc.qtimer2_timer3_select_input
<link=p.IOMUXC.QTIMER2_TIMER3_SELECT_INPUT>
#### iomuxc.sai1_mclk2_select_input
<link=p.IOMUXC.SAI1_MCLK2_SELECT_INPUT>
#### iomuxc.sai1_rx_data0_select_input
<link=p.IOMUXC.SAI1_RX_DATA0_SELECT_INPUT>
#### p.iomuxc.sai1_rx_sync_select_input
<link=p.IOMUXC.SAI1_RX_SYNC_SELECT_INPUT>
#### IOMUXC.SAI2_MCLK2_SELECT_INPUT
<link=p.IOMUXC.SAI2_MCLK2_SELECT_INPUT>
#### IOMUXC.SAI2_RX_DATA0_SELECT_INPUT
<link=p.IOMUXC.SAI2_RX_DATA0_SELECT_INPUT>
#### iomuxc.sai2_rx_sync_select_input
<link=p.IOMUXC.SAI2_RX_SYNC_SELECT_INPUT>
#### p.iomuxc.sai2_tx_bclk_select_input
<link=p.IOMUXC.SAI2_TX_BCLK_SELECT_INPUT>
#### p.iomuxc.usdhc2_cd_b_select_input
<link=p.IOMUXC.USDHC2_CD_B_SELECT_INPUT>
#### iomuxc.usdhc2_data2_select_input
<link=p.IOMUXC.USDHC2_DATA2_SELECT_INPUT>
#### iomuxc.xbar1_in03_select_input
<link=p.IOMUXC.XBAR1_IN03_SELECT_INPUT>
#### IOMUXC.XBAR1_IN04_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN04_SELECT_INPUT>
#### IOMUXC.XBAR1_IN06_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN06_SELECT_INPUT>
#### p.iomuxc.xbar1_in07_select_input
<link=p.IOMUXC.XBAR1_IN07_SELECT_INPUT>
#### iomuxc.xbar1_in14_select_input
<link=p.IOMUXC.XBAR1_IN14_SELECT_INPUT>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_03
<lang=dft>
 (rw)  [1;33m0x401f8668[0m (0x401f8000 + 0x0668)
SW_MUX_CTL_PAD_GPIO_SPI_B0_03 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_B_DATA02 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_03
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_04>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_10
<lang=dft>
 (rw)  [1;33m0x401f8684[0m (0x401f8000 + 0x0684)
SW_MUX_CTL_PAD_GPIO_SPI_B0_10 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_DATA03 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_10
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_04
<lang=dft>
 (rw)  [1;33m0x401f86a4[0m (0x401f8000 + 0x06a4)
SW_MUX_CTL_PAD_GPIO_SPI_B1_04 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_DATA00 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B1_04
</lang>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_03>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_05
<lang=dft>
 (rw)  [1;33m0x401f86c8[0m (0x401f8000 + 0x06c8)
SW_PAD_CTL_PAD_GPIO_SPI_B0_05 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_07>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_08>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_10>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_02>
#### p.iomuxc.enet2_ipp_ind_mac0_rxdata_select_input_0
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_0>
#### iomuxc.flexspi2_ipp_ind_io_fa_bit2_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT>
#### iomuxc.flexspi2_ipp_ind_io_fb_bit1_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT1_SELECT_INPUT>
#### p.iomuxc.flexspi2_ipp_ind_io_fb_bit2_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT>
#### p.IOMUXC.GPT2_IPP_IND_CAPIN1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8764[0m (0x401f8000 + 0x0764)
GPT2_IPP_IND_CAPIN1_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_41_ALT1 :
         Selecting Pad: GPIO_EMC_41 for Mode: ALT1
      0x1 - GPIO_AD_B1_03_ALT8 :
         Selecting Pad: GPIO_AD_B1_03 for Mode: ALT8
</lang>
#### p.KPP.KDDR
<lang=dft>
 (rw)  [1;33m0x401fc004[0m (0x401fc000 + 0x0004)
Keypad Data Direction Register
 (rw) (08)  [0;32mKRDD[0m  - [07:00] -  Keypad Row Data Direction
      0 - INPUT :
         ROWn pin configured as an input.
      0x1 - OUTPUT :
         ROWn pin configured as an output.
 (rw) (08)  [0;32mKCDD[0m  - [15:08] -  Keypad Column Data Direction Register
      0 - INPUT :
         COLn pin is configured as an input.
      0x1 - OUTPUT :
         COLn pin is configured as an output.
</lang>
#### p.kpp.kpdr
<link=p.KPP.KPDR>
#### kpp.kpdr
<link=p.KPP.KPDR>
#### p.flexspi.flshb2cr0
<link=p.FLEXSPI.FLSHB2CR0>
#### flexspi.flshcr1b2
<link=p.FLEXSPI.FLSHCR1B2>
#### flexspi.flshcr2a1
<link=p.FLEXSPI.FLSHCR2A1>
#### FLEXSPI.FLSHCR2A1
<link=p.FLEXSPI.FLSHCR2A1>
#### p.FLEXSPI.STS0
<lang=dft>
 (ro)  [1;33m0x402a80e0[0m (0x402a8000 + 0x00e0)
Status Register 0
 (ro) (01)  [0;32mSEQIDLE[0m  - [00:00] -  This status bit indicates the state machine in SEQ_CTL is idle and there is com
 mand sequence executing on FlexSPI interface.
 (ro) (01)  [0;32mARBIDLE[0m  - [01:01] -  This status bit indicates the state machine in ARB_CTL is busy and there is com
 mand sequence granted by arbitrator and not finished yet on FlexSPI interface. 
 When ARB_CTL state (ARBIDLE=0x1) is idle, there will be no transaction on FlexS
 PI interface also (SEQIDLE=0x1). So this bit should be polled to wait for FlexS
 PI controller become idle instead of SEQIDLE.
 (ro) (02)  [0;32mARBCMDSRC[0m  - [03:02] -  This status field indicates the trigger source of current command sequence gran
 ted by arbitrator. This field value is meaningless when ARB_CTL is not busy (ST
 S0[ARBIDLE]=0x1).
      0 - ARBCMDSRC_0 :
         Triggered by AHB read command (triggered by AHB read).
      0x1 - ARBCMDSRC_1 :
         Triggered by AHB write command (triggered by AHB Write).
      0x2 - ARBCMDSRC_2 :
         Triggered by IP command (triggered by setting register bit IPCMD.TRG).
      0x3 - ARBCMDSRC_3 :
         Triggered by suspended command (resumed).
</lang>
#### flexspi.sts1
<link=p.FLEXSPI.STS1>
#### flexspi.iptxfsts
<link=p.FLEXSPI.IPTXFSTS>
#### p.flexspi.rfdr[4]
<link=p.FLEXSPI.RFDR[4]>
#### p.FLEXSPI.RFDR[6]
<lang=dft>
 (ro)  [1;33m0x402a8118[0m (0x402a8000 + 0x0118)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi.rfdr[9]
<link=p.FLEXSPI.RFDR[9]>
#### p.FLEXSPI.RFDR[19]
<lang=dft>
 (ro)  [1;33m0x402a814c[0m (0x402a8000 + 0x014c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI.RFDR[27]
<lang=dft>
 (ro)  [1;33m0x402a816c[0m (0x402a8000 + 0x016c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI.RFDR[27]
<link=p.FLEXSPI.RFDR[27]>
#### flexspi.rfdr[30]
<link=p.FLEXSPI.RFDR[30]>
#### p.FLEXSPI.TFDR[3]
<lang=dft>
 (wo)  [1;33m0x402a818c[0m (0x402a8000 + 0x018c)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi.tfdr[5]
<link=p.FLEXSPI.TFDR[5]>
#### p.flexspi.tfdr[19]
<link=p.FLEXSPI.TFDR[19]>
#### flexspi.lut[8]
<link=p.FLEXSPI.LUT[8]>
#### p.flexspi.lut[12]
<link=p.FLEXSPI.LUT[12]>
#### flexspi.lut[13]
<link=p.FLEXSPI.LUT[13]>
#### flexspi.lut[25]
<link=p.FLEXSPI.LUT[25]>
#### p.flexspi.lut[27]
<link=p.FLEXSPI.LUT[27]>
#### p.FLEXSPI.LUT[29]
<lang=dft>
 (rw)  [1;33m0x402a8274[0m (0x402a8000 + 0x0274)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[33]
<lang=dft>
 (rw)  [1;33m0x402a8284[0m (0x402a8000 + 0x0284)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[36]
<lang=dft>
 (rw)  [1;33m0x402a8290[0m (0x402a8000 + 0x0290)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi.lut[36]
<link=p.FLEXSPI.LUT[36]>
#### p.flexspi.lut[37]
<link=p.FLEXSPI.LUT[37]>
#### p.FLEXSPI.LUT[39]
<lang=dft>
 (rw)  [1;33m0x402a829c[0m (0x402a8000 + 0x029c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[46]
<lang=dft>
 (rw)  [1;33m0x402a82b8[0m (0x402a8000 + 0x02b8)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[48]
<link=p.FLEXSPI.LUT[48]>
#### p.flexspi.lut[58]
<link=p.FLEXSPI.LUT[58]>
#### flexspi.lut[59]
<link=p.FLEXSPI.LUT[59]>
#### p.FLEXSPI.LUT[60]
<lang=dft>
 (rw)  [1;33m0x402a82f0[0m (0x402a8000 + 0x02f0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.MCR1
<lang=dft>
 (rw)  [1;33m0x402a4004[0m (0x402a4000 + 0x0004)
Module Control Register 1
 (rw) (16)  [0;32mAHBBUSWAIT[0m  - [15:00] -  AHB Read/Write access to Serial Flash Memory space will timeout if not data rec
 eived from Flash or data not transmited after AHBBUSWAIT * 1024 ahb clock cycle
 s, AHB Bus will get an error response
 (rw) (16)  [0;32mSEQWAIT[0m  - [31:16] -  Command Sequence Execution will timeout and abort after SEQWAIT * 1024 Serial R
 oot Clock cycles
</lang>
#### flexspi2.mcr2
<link=p.FLEXSPI2.MCR2>
#### flexspi2.inten
<link=p.FLEXSPI2.INTEN>
#### p.FLEXSPI2.LUTCR
<lang=dft>
 (rw)  [1;33m0x402a401c[0m (0x402a4000 + 0x001c)
LUT Control Register
 (rw) (01)  [0;32mLOCK[0m  - [00:00] -  Lock LUT
 (rw) (01)  [0;32mUNLOCK[0m  - [01:01] -  Unlock LUT
</lang>
#### flexspi2.lutcr
<link=p.FLEXSPI2.LUTCR>
#### FLEXSPI2.FLSHA2CR0
<link=p.FLEXSPI2.FLSHA2CR0>
#### FLEXSPI2.FLSHCR1B2
<link=p.FLEXSPI2.FLSHCR1B2>
#### FLEXSPI2.FLSHCR2B1
<link=p.FLEXSPI2.FLSHCR2B1>
#### p.FLEXSPI2.DLLCRB
<lang=dft>
 (rw)  [1;33m0x402a40c4[0m (0x402a4000 + 0x00c4)
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
#### p.flexspi2.sts1
<link=p.FLEXSPI2.STS1>
#### p.FLEXSPI2.RFDR[0]
<lang=dft>
 (ro)  [1;33m0x402a4100[0m (0x402a4000 + 0x0100)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.rfdr[4]
<link=p.FLEXSPI2.RFDR[4]>
#### FLEXSPI2.RFDR[10]
<link=p.FLEXSPI2.RFDR[10]>
#### p.flexspi2.rfdr[18]
<link=p.FLEXSPI2.RFDR[18]>
#### flexspi2.rfdr[19]
<link=p.FLEXSPI2.RFDR[19]>
#### p.flexspi2.rfdr[20]
<link=p.FLEXSPI2.RFDR[20]>
#### FLEXSPI2.RFDR[24]
<link=p.FLEXSPI2.RFDR[24]>
#### p.flexspi2.tfdr[0]
<link=p.FLEXSPI2.TFDR[0]>
#### FLEXSPI2.TFDR[1]
<link=p.FLEXSPI2.TFDR[1]>
#### p.FLEXSPI2.TFDR[2]
<lang=dft>
 (wo)  [1;33m0x402a4188[0m (0x402a4000 + 0x0188)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI2.TFDR[5]
<lang=dft>
 (wo)  [1;33m0x402a4194[0m (0x402a4000 + 0x0194)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI2.TFDR[20]
<link=p.FLEXSPI2.TFDR[20]>
#### flexspi2.tfdr[21]
<link=p.FLEXSPI2.TFDR[21]>
#### FLEXSPI2.TFDR[25]
<link=p.FLEXSPI2.TFDR[25]>
#### FLEXSPI2.LUT[3]
<link=p.FLEXSPI2.LUT[3]>
#### p.flexspi2.lut[5]
<link=p.FLEXSPI2.LUT[5]>
#### p.FLEXSPI2.LUT[6]
<lang=dft>
 (rw)  [1;33m0x402a4218[0m (0x402a4000 + 0x0218)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[11]
<link=p.FLEXSPI2.LUT[11]>
#### p.FLEXSPI2.LUT[13]
<lang=dft>
 (rw)  [1;33m0x402a4234[0m (0x402a4000 + 0x0234)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[13]
<link=p.FLEXSPI2.LUT[13]>
#### p.FLEXSPI2.LUT[19]
<lang=dft>
 (rw)  [1;33m0x402a424c[0m (0x402a4000 + 0x024c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[19]
<link=p.FLEXSPI2.LUT[19]>
#### flexspi2.lut[20]
<link=p.FLEXSPI2.LUT[20]>
#### p.flexspi2.lut[24]
<link=p.FLEXSPI2.LUT[24]>
#### FLEXSPI2.LUT[25]
<link=p.FLEXSPI2.LUT[25]>
#### flexspi2.lut[27]
<link=p.FLEXSPI2.LUT[27]>
#### FLEXSPI2.LUT[28]
<link=p.FLEXSPI2.LUT[28]>
#### p.flexspi2.lut[29]
<link=p.FLEXSPI2.LUT[29]>
#### p.flexspi2.lut[30]
<link=p.FLEXSPI2.LUT[30]>
#### flexspi2.lut[34]
<link=p.FLEXSPI2.LUT[34]>
#### FLEXSPI2.LUT[44]
<link=p.FLEXSPI2.LUT[44]>
#### p.flexspi2.lut[45]
<link=p.FLEXSPI2.LUT[45]>
#### FLEXSPI2.LUT[50]
<link=p.FLEXSPI2.LUT[50]>
#### p.FLEXSPI2.LUT[63]
<lang=dft>
 (rw)  [1;33m0x402a42fc[0m (0x402a4000 + 0x02fc)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.pxp.ctrl
<link=p.PXP.CTRL>
#### PXP.CTRL_CLR
<link=p.PXP.CTRL_CLR>
#### PXP.CTRL_TOG
<link=p.PXP.CTRL_TOG>
#### pxp.stat_clr
<link=p.PXP.STAT_CLR>
#### pxp.ps_ctrl_tog
<link=p.PXP.PS_CTRL_TOG>
#### p.PXP.PS_BACKGROUND
<lang=dft>
 (rw)  [1;33m0x402b4100[0m (0x402b4000 + 0x0100)
PS Background Color
 (rw) (24)  [0;32mCOLOR[0m  - [23:00] -  Background color (in 24bpp format) for any pixels not within the buffer range s
 pecified by the PS ULC/LRC
 (ro) (08)  [0;32mRSVD[0m  - [31:24] -  Reserved, always set to zero.
</lang>
#### p.PXP.AS_CTRL
<lang=dft>
 (rw)  [1;33m0x402b4150[0m (0x402b4000 + 0x0150)
Alpha Surface Control
 (ro) (01)  [0;32mRSVD0[0m  - [00:00] -  Reserved, always set to zero.
 (rw) (02)  [0;32mALPHA_CTRL[0m  - [02:01] -  Determines how the alpha value is constructed for this alpha surface
      0 - Embedded :
         Indicates that the AS pixel alpha value will be used to blend the AS wi
         th PS. The ALPHA field is ignored.
      0x1 - Override :
         Indicates that the value in the ALPHA field should be used instead of t
         he alpha values present in the input pixels.
      0x2 - Multiply :
         Indicates that the value in the ALPHA field should be used to scale all
          pixel alpha values. Each pixel alpha is multiplied by the value in the
          ALPHA field.
      0x3 - ROPs :
         Enable ROPs. The ROP field indicates an operation to be performed on th
         e alpha surface and PS pixels.
 (rw) (01)  [0;32mENABLE_COLORKEY[0m  - [03:03] -  Indicates that colorkey functionality is enabled for this alpha surface
 (rw) (04)  [0;32mFORMAT[0m  - [07:04] -  Indicates the input buffer format for AS.
      0 - ARGB8888 :
         32-bit pixels with alpha
      0x4 - RGB888 :
         32-bit pixels without alpha (unpacked 24-bit format)
      0x8 - ARGB1555 :
         16-bit pixels with alpha
      0x9 - ARGB4444 :
         16-bit pixels with alpha
      0xC - RGB555 :
         16-bit pixels without alpha
      0xD - RGB444 :
         16-bit pixels without alpha
      0xE - RGB565 :
         16-bit pixels without alpha
 (rw) (08)  [0;32mALPHA[0m  - [15:08] -  Alpha modifier used when the ALPHA_MULTIPLY or ALPHA_OVERRIDE values are progra
 mmed in PXP_AS_CTRL[ALPHA_CTRL]
 (rw) (04)  [0;32mROP[0m  - [19:16] -  Indicates a raster operation to perform when enabled
      0 - MASKAS :
         AS AND PS
      0x1 - MASKNOTAS :
         nAS AND PS
      0x2 - MASKASNOT :
         AS AND nPS
      0x3 - MERGEAS :
         AS OR PS
      0x4 - MERGENOTAS :
         nAS OR PS
      0x5 - MERGEASNOT :
         AS OR nPS
      0x6 - NOTCOPYAS :
         nAS
      0x7 - NOT :
         nPS
      0x8 - NOTMASKAS :
         AS NAND PS
      0x9 - NOTMERGEAS :
         AS NOR PS
      0xA - XORAS :
         AS XOR PS
      0xB - NOTXORAS :
         AS XNOR PS
 (rw) (01)  [0;32mALPHA_INVERT[0m  - [20:20] -  Setting this bit to logic 0 will not alter the alpha value
 (ro) (11)  [0;32mRSVD1[0m  - [31:21] -  Reserved, always set to zero.
</lang>
#### p.pxp.as_clrkeylow
<link=p.PXP.AS_CLRKEYLOW>
#### PXP.AS_CLRKEYLOW
<link=p.PXP.AS_CLRKEYLOW>
#### PXP.CSC1_COEF2
<link=p.PXP.CSC1_COEF2>
#### p.pxp.porter_duff_ctrl
<link=p.PXP.PORTER_DUFF_CTRL>
#### p.lcdif.transfer_count
<link=p.LCDIF.TRANSFER_COUNT>
#### LCDIF.VDCTRL0_TOG
<link=p.LCDIF.VDCTRL0_TOG>
#### p.lcdif.vdctrl3
<link=p.LCDIF.VDCTRL3>
#### LCDIF.BM_ERROR_STAT
<link=p.LCDIF.BM_ERROR_STAT>
#### p.lcdif.pigeon_1_0
<link=p.LCDIF.PIGEON_1_0>
#### lcdif.pigeon_1_1
<link=p.LCDIF.PIGEON_1_1>
#### LCDIF.PIGEON_2_2
<link=p.LCDIF.PIGEON_2_2>
#### p.lcdif.pigeon_3_2
<link=p.LCDIF.PIGEON_3_2>
#### lcdif.pigeon_3_2
<link=p.LCDIF.PIGEON_3_2>
#### p.LCDIF.PIGEON_4_2
<lang=dft>
 (rw)  [1;33m0x402b8920[0m (0x402b8000 + 0x0920)
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
#### p.lcdif.pigeon_4_2
<link=p.LCDIF.PIGEON_4_2>
#### p.LCDIF.PIGEON_6_0
<lang=dft>
 (rw)  [1;33m0x402b8980[0m (0x402b8000 + 0x0980)
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
#### p.lcdif.pigeon_6_0
<link=p.LCDIF.PIGEON_6_0>
#### p.LCDIF.PIGEON_9_1
<lang=dft>
 (rw)  [1;33m0x402b8a50[0m (0x402b8000 + 0x0a50)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### LCDIF.PIGEON_11_1
<link=p.LCDIF.PIGEON_11_1>
#### p.CSI.CSIDMASA_STATFIFO
<lang=dft>
 (rw)  [1;33m0x402bc020[0m (0x402bc000 + 0x0020)
CSI DMA Start Address Register - for STATFIFO
 (rw) (30)  [0;32mDMA_START_ADDR_SFF[0m  - [31:02] -  DMA Start Address for STATFIFO
</lang>
#### p.csi.csidmasa_statfifo
<link=p.CSI.CSIDMASA_STATFIFO>
#### csi.csifbuf_para
<link=p.CSI.CSIFBUF_PARA>
#### p.usdhc1.cmd_arg
<link=p.USDHC1.CMD_ARG>
#### p.usdhc1.cmd_rsp0
<link=p.USDHC1.CMD_RSP0>
#### p.usdhc1.prot_ctrl
<link=p.USDHC1.PROT_CTRL>
#### usdhc1.int_status
<link=p.USDHC1.INT_STATUS>
#### USDHC1.INT_STATUS_EN
<link=p.USDHC1.INT_STATUS_EN>
#### usdhc2.ds_addr
<link=p.USDHC2.DS_ADDR>
#### usdhc2.prot_ctrl
<link=p.USDHC2.PROT_CTRL>
#### p.USDHC2.SYS_CTRL
<lang=dft>
 (rw)  [1;33m0x402c402c[0m (0x402c4000 + 0x002c)
System Control
 (rw) (04)  [0;32mDVS[0m  - [07:04] -  Divisor
      0 - DVS_0 :
         Divide-by-1
      0x1 - DVS_1 :
         Divide-by-2
      0xE - DVS_14 :
         Divide-by-15
      0xF - DVS_15 :
         Divide-by-16
 (rw) (08)  [0;32mSDCLKFS[0m  - [15:08] -  SDCLK Frequency Select
 (rw) (04)  [0;32mDTOCV[0m  - [19:16] -  Data Timeout Counter Value
      0 - DTOCV_0 :
         SDCLK x 2 14
      0x1 - DTOCV_1 :
         SDCLK x 2 15
      0xD - DTOCV_13 :
         SDCLK x 2 27
      0xE - DTOCV_14 :
         SDCLK x 2 28
      0xF - DTOCV_15 :
         SDCLK x 2 29
 (rw) (01)  [0;32mIPP_RST_N[0m  - [23:23] -  IPP_RST_N
 (rw) (01)  [0;32mRSTA[0m  - [24:24] -  Software Reset For ALL
      0 - RSTA_0 :
         No Reset
      0x1 - RSTA_1 :
         Reset
 (rw) (01)  [0;32mRSTC[0m  - [25:25] -  Software Reset For CMD Line
      0 - RSTC_0 :
         No Reset
      0x1 - RSTC_1 :
         Reset
 (rw) (01)  [0;32mRSTD[0m  - [26:26] -  Software Reset For DATA Line
      0 - RSTD_0 :
         No Reset
      0x1 - RSTD_1 :
         Reset
 (rw) (01)  [0;32mINITA[0m  - [27:27] -  Initialization Active
 (rw) (01)  [0;32mRSTT[0m  - [28:28] -  Reset Tuning
</lang>
#### p.USDHC2.CLK_TUNE_CTRL_STATUS
<lang=dft>
 (rw)  [1;33m0x402c4068[0m (0x402c4000 + 0x0068)
CLK Tuning Control and Status
 (rw) (04)  [0;32mDLY_CELL_SET_POST[0m  - [03:00] -  DLY_CELL_SET_POST
 (rw) (04)  [0;32mDLY_CELL_SET_OUT[0m  - [07:04] -  DLY_CELL_SET_OUT
 (rw) (07)  [0;32mDLY_CELL_SET_PRE[0m  - [14:08] -  DLY_CELL_SET_PRE
 (ro) (01)  [0;32mNXT_ERR[0m  - [15:15] -  NXT_ERR
 (ro) (04)  [0;32mTAP_SEL_POST[0m  - [19:16] -  TAP_SEL_POST
 (ro) (04)  [0;32mTAP_SEL_OUT[0m  - [23:20] -  TAP_SEL_OUT
 (ro) (07)  [0;32mTAP_SEL_PRE[0m  - [30:24] -  TAP_SEL_PRE
 (ro) (01)  [0;32mPRE_ERR[0m  - [31:31] -  PRE_ERR
</lang>
#### p.usdhc2.clk_tune_ctrl_status
<link=p.USDHC2.CLK_TUNE_CTRL_STATUS>
#### p.usdhc2.tuning_ctrl
<link=p.USDHC2.TUNING_CTRL>
#### p.enet.rdar
<link=p.ENET.RDAR>
#### p.ENET.ECR
<lang=dft>
 (rw)  [1;33m0x402d8024[0m (0x402d8000 + 0x0024)
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
#### p.enet.palr
<link=p.ENET.PALR>
#### p.enet.iaur
<link=p.ENET.IAUR>
#### p.enet.rdsr
<link=p.ENET.RDSR>
#### enet.rdsr
<link=p.ENET.RDSR>
#### ENET.TSEM
<link=p.ENET.TSEM>
#### enet.rmon_t_col
<link=p.ENET.RMON_T_COL>
#### p.enet.rmon_t_p65to127
<link=p.ENET.RMON_T_P65TO127>
#### enet.ieee_t_mcol
<link=p.ENET.IEEE_T_MCOL>
#### ENET.IEEE_T_CSERR
<link=p.ENET.IEEE_T_CSERR>
#### ENET.IEEE_T_FDXFC
<link=p.ENET.IEEE_T_FDXFC>
#### ENET.RMON_R_MC_PKT
<link=p.ENET.RMON_R_MC_PKT>
#### p.enet.rmon_r_undersize
<link=p.ENET.RMON_R_UNDERSIZE>
#### ENET.RMON_R_UNDERSIZE
<link=p.ENET.RMON_R_UNDERSIZE>
#### p.enet.rmon_r_p65to127
<link=p.ENET.RMON_R_P65TO127>
#### p.ENET.RMON_R_P256TO511
<lang=dft>
 (ro)  [1;33m0x402d82b4[0m (0x402d8000 + 0x02b4)
Rx 256- to 511-Byte Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of 256- to 511-byte recieve packets
</lang>
#### ENET.IEEE_R_DROP
<link=p.ENET.IEEE_R_DROP>
#### p.ENET.IEEE_R_FDXFC
<lang=dft>
 (ro)  [1;33m0x402d82dc[0m (0x402d8000 + 0x02dc)
Flow Control Pause Frames Received Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of flow-control pause frames received
</lang>
#### p.enet.tcsr3
<link=p.ENET.TCSR3>
#### ENET.TCSR3
<link=p.ENET.TCSR3>
#### enet2.mscr
<link=p.ENET2.MSCR>
#### ENET2.TXIC
<link=p.ENET2.TXIC>
#### enet2.rxic
<link=p.ENET2.RXIC>
#### p.ENET2.TIPG
<lang=dft>
 (rw)  [1;33m0x402d41ac[0m (0x402d4000 + 0x01ac)
Transmit Inter-Packet Gap
 (rw) (05)  [0;32mIPG[0m  - [04:00] -  Transmit Inter-Packet Gap
</lang>
#### p.enet2.tipg
<link=p.ENET2.TIPG>
#### enet2.tipg
<link=p.ENET2.TIPG>
#### p.ENET2.RMON_T_BC_PKT
<lang=dft>
 (ro)  [1;33m0x402d4208[0m (0x402d4000 + 0x0208)
Tx Broadcast Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Broadcast packets
</lang>
#### p.enet2.rmon_t_col
<link=p.ENET2.RMON_T_COL>
#### p.enet2.rmon_t_p1024to2047
<link=p.ENET2.RMON_T_P1024TO2047>
#### p.ENET2.IEEE_T_1COL
<lang=dft>
 (ro)  [1;33m0x402d4250[0m (0x402d4000 + 0x0250)
Frames Transmitted with Single Collision Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with one collision
</lang>
#### enet2.ieee_t_excol
<link=p.ENET2.IEEE_T_EXCOL>
#### p.enet2.ieee_t_octets_ok
<link=p.ENET2.IEEE_T_OCTETS_OK>
#### p.enet2.rmon_r_p256to511
<link=p.ENET2.RMON_R_P256TO511>
#### ENET2.RMON_R_P512TO1023
<link=p.ENET2.RMON_R_P512TO1023>
#### p.ENET2.IEEE_R_OCTETS_OK
<lang=dft>
 (ro)  [1;33m0x402d42e0[0m (0x402d4000 + 0x02e0)
Octet Count for Frames Received without Error Statistic Register
 (ro) (32)  [0;32mCOUNT[0m  - [31:00] -  Number of octets for frames received without error
</lang>
#### p.ENET2.ATCR
<lang=dft>
 (rw)  [1;33m0x402d4400[0m (0x402d4000 + 0x0400)
Adjustable Timer Control Register
 (rw) (01)  [0;32mEN[0m  - [00:00] -  Enable Timer
      0 - EN_0 :
         The timer stops at the current value.
      0x1 - EN_1 :
         The timer starts incrementing.
 (rw) (01)  [0;32mOFFEN[0m  - [02:02] -  Enable One-Shot Offset Event
      0 - OFFEN_0 :
         Disable.
      0x1 - OFFEN_1 :
         The timer can be reset to zero when the given offset time is reached (o
         ffset event). The field is cleared when the offset event is reached, so
          no further event occurs until the field is set again. The timer offset
          value must be set before setting this field.
 (rw) (01)  [0;32mOFFRST[0m  - [03:03] -  Reset Timer On Offset Event
      0 - OFFRST_0 :
         The timer is not affected and no action occurs, besides clearing OFFEN,
          when the offset is reached.
      0x1 - OFFRST_1 :
         If OFFEN is set, the timer resets to zero when the offset setting is re
         ached. The offset event does not cause a timer interrupt.
 (rw) (01)  [0;32mPEREN[0m  - [04:04] -  Enable Periodical Event
      0 - PEREN_0 :
         Disable.
      0x1 - PEREN_1 :
         A period event interrupt can be generated (EIR[TS_TIMER]) and the event
          signal output is asserted when the timer wraps around according to the
          periodic setting ATPER. The timer period value must be set before sett
         ing this bit. Not all devices contain the event signal output. See the 
         chip configuration details.
 (rw) (01)  [0;32mPINPER[0m  - [07:07] -  Enables event signal output assertion on period event
      0 - PINPER_0 :
         Disable.
      0x1 - PINPER_1 :
         Enable.
 (rw) (01)  [0;32mRESTART[0m  - [09:09] -  Reset Timer
 (rw) (01)  [0;32mCAPTURE[0m  - [11:11] -  Capture Timer Value
      0 - CAPTURE_0 :
         No effect.
      0x1 - CAPTURE_1 :
         The current time is captured and can be read from the ATVR register.
 (rw) (01)  [0;32mSLAVE[0m  - [13:13] -  Enable Timer Slave Mode
      0 - SLAVE_0 :
         The timer is active and all configuration fields in this register are r
         elevant.
      0x1 - SLAVE_1 :
         The internal timer is disabled and the externally provided timer value 
         is used. All other fields, except CAPTURE, in this register have no eff
         ect. CAPTURE can still be used to capture the current timer value.
</lang>
#### p.enet2.atinc
<link=p.ENET2.ATINC>
#### ENET2.TCSR2
<link=p.ENET2.TCSR2>
#### p.ENET2.TCCR0
<lang=dft>
 (rw)  [1;33m0x402d460c[0m (0x402d4000 + 0x060c)
Timer Compare Capture Register
 (rw) (32)  [0;32mTCC[0m  - [31:00] -  Timer Capture Compare
</lang>
#### USB1.GPTIMER0LD
<link=p.USB1.GPTIMER0LD>
#### USB1.DCCPARAMS
<link=p.USB1.DCCPARAMS>
#### usb1.frindex
<link=p.USB1.FRINDEX>
#### usb1.periodiclistbase
<link=p.USB1.PERIODICLISTBASE>
#### p.usb1.asynclistaddr
<link=p.USB1.ASYNCLISTADDR>
#### p.usb1.endptlistaddr
<link=p.USB1.ENDPTLISTADDR>
#### USB1.ENDPTLISTADDR
<link=p.USB1.ENDPTLISTADDR>
#### USB1.TXFILLTUNING
<link=p.USB1.TXFILLTUNING>
#### p.usb1.configflag
<link=p.USB1.CONFIGFLAG>
#### p.USB1.ENDPTPRIME
<lang=dft>
 (rw)  [1;33m0x402e01b0[0m (0x402e0000 + 0x01b0)
Endpoint Prime
 (rw) (08)  [0;32mPERB[0m  - [07:00] -  Prime Endpoint Receive Buffer - R/WS
 (rw) (08)  [0;32mPETB[0m  - [23:16] -  Prime Endpoint Transmit Buffer - R/WS
</lang>
#### USB1.ENDPTCTRL2
<link=p.USB1.ENDPTCTRL2>
#### p.USB1.ENDPTCTRL5
<lang=dft>
 (rw)  [1;33m0x402e01d4[0m (0x402e0000 + 0x01d4)
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
#### p.USB2.GPTIMER0CTRL
<lang=dft>
 (rw)  [1;33m0x402e0284[0m (0x402e0200 + 0x0084)
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
#### p.USB2.HCIVERSION
<lang=dft>
 (ro)  [1;33m0x402e0302[0m (0x402e0200 + 0x0102)
Host Controller Interface Version
 (ro) (16)  [0;32mHCIVERSION[0m  - [15:00] -  Host Controller Interface Version Number Default value is '10h', which means EH
 CI rev1.0.
</lang>
#### usb2.dciversion
<link=p.USB2.DCIVERSION>
#### p.USB2.USBSTS
<lang=dft>
 (rw)  [1;33m0x402e0344[0m (0x402e0200 + 0x0144)
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
#### p.USB2.BURSTSIZE
<lang=dft>
 (rw)  [1;33m0x402e0360[0m (0x402e0200 + 0x0160)
Programmable Burst Size
 (rw) (08)  [0;32mRXPBURST[0m  - [07:00] -  Programmable RX Burst Size
 (rw) (09)  [0;32mTXPBURST[0m  - [16:08] -  Programmable TX Burst Size
</lang>
#### p.usb2.endptnak
<link=p.USB2.ENDPTNAK>
#### USB2.ENDPTNAKEN
<link=p.USB2.ENDPTNAKEN>
#### p.USB2.ENDPTPRIME
<lang=dft>
 (rw)  [1;33m0x402e03b0[0m (0x402e0200 + 0x01b0)
Endpoint Prime
 (rw) (08)  [0;32mPERB[0m  - [07:00] -  Prime Endpoint Receive Buffer - R/WS
 (rw) (08)  [0;32mPETB[0m  - [23:16] -  Prime Endpoint Transmit Buffer - R/WS
</lang>
#### p.usb2.endptctrl4
<link=p.USB2.ENDPTCTRL4>
#### p.usbnc1.usb_otg1_phy_ctrl_0
<link=p.USBNC1.USB_OTG1_PHY_CTRL_0>
#### USBNC2.USB_OTG1_CTRL
<link=p.USBNC2.USB_OTG1_CTRL>
#### p.SEMC.BR0
<lang=dft>
 (rw)  [1;33m0x402f0010[0m (0x402f0000 + 0x0010)
Base Register 0 (For SDRAM CS0 device)
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
#### SEMC.BR1
<link=p.SEMC.BR1>
#### p.semc.br8
<link=p.SEMC.BR8>
#### semc.br8
<link=p.SEMC.BR8>
#### p.semc.intr
<link=p.SEMC.INTR>
#### SEMC.INTR
<link=p.SEMC.INTR>
#### semc.sdramcr0
<link=p.SEMC.SDRAMCR0>
#### p.SEMC.SDRAMCR1
<lang=dft>
 (rw)  [1;33m0x402f0044[0m (0x402f0000 + 0x0044)
SDRAM control register 1
 (rw) (04)  [0;32mPRE2ACT[0m  - [03:00] -  PRECHARGE to ACT/Refresh wait time
 (rw) (04)  [0;32mACT2RW[0m  - [07:04] -  ACT to Read/Write wait time
 (rw) (05)  [0;32mRFRC[0m  - [12:08] -  Refresh recovery time
 (rw) (03)  [0;32mWRC[0m  - [15:13] -  Write recovery time
 (rw) (04)  [0;32mCKEOFF[0m  - [19:16] -  CKE OFF minimum time
 (rw) (04)  [0;32mACT2PRE[0m  - [23:20] -  ACT to Precharge minimum time
</lang>
#### SEMC.SDRAMCR2
<link=p.SEMC.SDRAMCR2>
#### p.semc.sdramcr3
<link=p.SEMC.SDRAMCR3>
#### SEMC.NORCR3
<link=p.SEMC.NORCR3>
#### p.SEMC.IPCR2
<lang=dft>
 (rw)  [1;33m0x402f0098[0m (0x402f0000 + 0x0098)
IP Command control register 2
 (rw) (01)  [0;32mBM0[0m  - [00:00] -  Byte Mask for Byte 0 (IPTXD bit 7:0)
      0 - BM0_0 :
         Byte Unmasked
      0x1 - BM0_1 :
         Byte Masked
 (rw) (01)  [0;32mBM1[0m  - [01:01] -  Byte Mask for Byte 1 (IPTXD bit 15:8)
      0 - BM1_0 :
         Byte Unmasked
      0x1 - BM1_1 :
         Byte Masked
 (rw) (01)  [0;32mBM2[0m  - [02:02] -  Byte Mask for Byte 2 (IPTXD bit 23:16)
      0 - BM2_0 :
         Byte Unmasked
      0x1 - BM2_1 :
         Byte Masked
 (rw) (01)  [0;32mBM3[0m  - [03:03] -  Byte Mask for Byte 3 (IPTXD bit 31:24)
      0 - BM3_0 :
         Byte Unmasked
      0x1 - BM3_1 :
         Byte Masked
</lang>
#### semc.sts2
<link=p.SEMC.STS2>
#### SEMC.STS4
<link=p.SEMC.STS4>
#### p.SEMC.STS8
<lang=dft>
 (ro)  [1;33m0x402f00e0[0m (0x402f0000 + 0x00e0)
Status register 8
</lang>
#### p.SEMC.STS10
<lang=dft>
 (ro)  [1;33m0x402f00e8[0m (0x402f0000 + 0x00e8)
Status register 10
</lang>
#### p.semc.sts12
<link=p.SEMC.STS12>
#### semc.sts14
<link=p.SEMC.STS14>
#### dcp.ctrl_clr
<link=p.DCP.CTRL_CLR>
#### dcp.context
<link=p.DCP.CONTEXT>
#### dcp.packet0
<link=p.DCP.PACKET0>
#### DCP.PACKET1
<link=p.DCP.PACKET1>
#### p.DCP.CH0SEMA
<lang=dft>
 (rw)  [1;33m0x402fc110[0m (0x402fc000 + 0x0110)
DCP channel 0 semaphore register
 (rw) (08)  [0;32mINCREMENT[0m  - [07:00] -  The value written to this field is added to the semaphore count in an atomic wa
 y such that the simultaneous software adds and DCP hardware substracts happenin
 g on the same clock are protected
 (ro) (08)  [0;32mVALUE[0m  - [23:16] -  This read-only field shows the current (instantaneous) value of the semaphore c
 ounter.
</lang>
#### p.DCP.CH0STAT_SET
<lang=dft>
 (rw)  [1;33m0x402fc124[0m (0x402fc000 + 0x0124)
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
#### dcp.ch0stat_clr
<link=p.DCP.CH0STAT_CLR>
#### DCP.CH0STAT_CLR
<link=p.DCP.CH0STAT_CLR>
#### p.DCP.CH1SEMA
<lang=dft>
 (rw)  [1;33m0x402fc150[0m (0x402fc000 + 0x0150)
DCP channel 1 semaphore register
 (rw) (08)  [0;32mINCREMENT[0m  - [07:00] -  The value written to this field is added to the semaphore count in an atomic wa
 y, such that the simultaneous software adds and the DCP hardware substracts hap
 pening on the same clock are protected
 (ro) (08)  [0;32mVALUE[0m  - [23:16] -  This read-only field shows the current (instantaneous) value of the semaphore c
 ounter.
</lang>
#### dcp.ch1opts_set
<link=p.DCP.CH1OPTS_SET>
#### p.dcp.ch2opts
<link=p.DCP.CH2OPTS>
#### dcp.ch3stat_set
<link=p.DCP.CH3STAT_SET>
#### DCP.CH3STAT_SET
<link=p.DCP.CH3STAT_SET>
#### dcp.ch3opts_set
<link=p.DCP.CH3OPTS_SET>
#### p.spdif.sie
<link=p.SPDIF.SIE>
#### p.SPDIF.SRU
<lang=dft>
 (ro)  [1;33m0x40380024[0m (0x40380000 + 0x0024)
UchannelRx Register
 (ro) (24)  [0;32mRxUChannel[0m  - [23:00] -  SPDIF receive U channel register, contains next 3 U channel bytes
</lang>
#### SPDIF.STC
<link=p.SPDIF.STC>
#### p.sai1.tdr[1]
<link=p.SAI1.TDR[1]>
#### sai1.tfr[2]
<link=p.SAI1.TFR[2]>
#### sai1.rcr1
<link=p.SAI1.RCR1>
#### SAI1.RCR5
<link=p.SAI1.RCR5>
#### p.SAI1.RDR[2]
<lang=dft>
 (ro)  [1;33m0x403840a8[0m (0x40384000 + 0x00a8)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### p.sai1.rfr[1]
<link=p.SAI1.RFR[1]>
#### SAI1.RFR[3]
<link=p.SAI1.RFR[3]>
#### p.SAI2.TCR1
<lang=dft>
 (rw)  [1;33m0x4038800c[0m (0x40388000 + 0x000c)
SAI Transmit Configuration 1 Register
 (rw) (05)  [0;32mTFW[0m  - [04:00] -  Transmit FIFO Watermark
</lang>
#### sai2.tcr2
<link=p.SAI2.TCR2>
#### SAI2.TCR2
<link=p.SAI2.TCR2>
#### p.sai2.tdr[3]
<link=p.SAI2.TDR[3]>
#### SAI2.TFR[1]
<link=p.SAI2.TFR[1]>
#### p.SAI2.TFR[3]
<lang=dft>
 (ro)  [1;33m0x4038804c[0m (0x40388000 + 0x004c)
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
#### SAI2.TMR
<link=p.SAI2.TMR>
#### SAI2.RFR[2]
<link=p.SAI2.RFR[2]>
#### sai3.verid
<link=p.SAI3.VERID>
#### SAI3.PARAM
<link=p.SAI3.PARAM>
#### SAI3.TCR1
<link=p.SAI3.TCR1>
#### p.SAI3.TCR2
<lang=dft>
 (rw)  [1;33m0x4038c010[0m (0x4038c000 + 0x0010)
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
#### sai3.tcr5
<link=p.SAI3.TCR5>
#### sai3.tdr[3]
<link=p.SAI3.TDR[3]>
#### SAI3.TFR[0]
<link=p.SAI3.TFR[0]>
#### lpspi1.verid
<link=p.LPSPI1.VERID>
#### LPSPI1.DMR0
<link=p.LPSPI1.DMR0>
#### p.LPSPI1.CCR
<lang=dft>
 (rw)  [1;33m0x40394040[0m (0x40394000 + 0x0040)
Clock Configuration Register
 (rw) (08)  [0;32mSCKDIV[0m  - [07:00] -  SCK Divider
 (rw) (08)  [0;32mDBT[0m  - [15:08] -  Delay Between Transfers
 (rw) (08)  [0;32mPCSSCK[0m  - [23:16] -  PCS-to-SCK Delay
 (rw) (08)  [0;32mSCKPCS[0m  - [31:24] -  SCK-to-PCS Delay
</lang>
#### lpspi1.fcr
<link=p.LPSPI1.FCR>
#### p.LPSPI2.SR
<lang=dft>
 (rw)  [1;33m0x40398014[0m (0x40398000 + 0x0014)
Status Register
 (ro) (01)  [0;32mTDF[0m  - [00:00] -  Transmit Data Flag
      0 - TDF_0 :
         Transmit data not requested
      0x1 - TDF_1 :
         Transmit data is requested
 (ro) (01)  [0;32mRDF[0m  - [01:01] -  Receive Data Flag
      0 - RDF_0 :
         Receive Data is not ready
      0x1 - RDF_1 :
         Receive data is ready
 (rw) (01)  [0;32mWCF[0m  - [08:08] -  Word Complete Flag
      0 - WCF_0 :
         Transfer of a received word has not yet completed
      0x1 - WCF_1 :
         Transfer of a received word has completed
 (rw) (01)  [0;32mFCF[0m  - [09:09] -  Frame Complete Flag
      0 - FCF_0 :
         Frame transfer has not completed
      0x1 - FCF_1 :
         Frame transfer has completed
 (rw) (01)  [0;32mTCF[0m  - [10:10] -  Transfer Complete Flag
      0 - TCF_0 :
         All transfers have not completed
      0x1 - TCF_1 :
         All transfers have completed
 (rw) (01)  [0;32mTEF[0m  - [11:11] -  Transmit Error Flag
      0 - TEF_0 :
         Transmit FIFO underrun has not occurred
      0x1 - TEF_1 :
         Transmit FIFO underrun has occurred
 (rw) (01)  [0;32mREF[0m  - [12:12] -  Receive Error Flag
      0 - REF_0 :
         Receive FIFO has not overflowed
      0x1 - REF_1 :
         Receive FIFO has overflowed
 (rw) (01)  [0;32mDMF[0m  - [13:13] -  Data Match Flag
      0 - DMF_0 :
         Have not received matching data
      0x1 - DMF_1 :
         Have received matching data
 (ro) (01)  [0;32mMBF[0m  - [24:24] -  Module Busy Flag
      0 - MBF_0 :
         LPSPI is idle
      0x1 - MBF_1 :
         LPSPI is busy
</lang>
#### p.LPSPI2.FCR
<lang=dft>
 (rw)  [1;33m0x40398058[0m (0x40398000 + 0x0058)
FIFO Control Register
 (rw) (04)  [0;32mTXWATER[0m  - [03:00] -  Transmit FIFO Watermark
 (rw) (04)  [0;32mRXWATER[0m  - [19:16] -  Receive FIFO Watermark
</lang>
#### LPSPI2.RDR
<link=p.LPSPI2.RDR>
#### p.LPSPI3.DMR0
<lang=dft>
 (rw)  [1;33m0x4039c030[0m (0x4039c000 + 0x0030)
Data Match Register 0
 (rw) (32)  [0;32mMATCH0[0m  - [31:00] -  Match 0 Value
</lang>
#### LPSPI3.DMR1
<link=p.LPSPI3.DMR1>
#### LPSPI4.VERID
<link=p.LPSPI4.VERID>
#### p.LPSPI4.SR
<lang=dft>
 (rw)  [1;33m0x403a0014[0m (0x403a0000 + 0x0014)
Status Register
 (ro) (01)  [0;32mTDF[0m  - [00:00] -  Transmit Data Flag
      0 - TDF_0 :
         Transmit data not requested
      0x1 - TDF_1 :
         Transmit data is requested
 (ro) (01)  [0;32mRDF[0m  - [01:01] -  Receive Data Flag
      0 - RDF_0 :
         Receive Data is not ready
      0x1 - RDF_1 :
         Receive data is ready
 (rw) (01)  [0;32mWCF[0m  - [08:08] -  Word Complete Flag
      0 - WCF_0 :
         Transfer of a received word has not yet completed
      0x1 - WCF_1 :
         Transfer of a received word has completed
 (rw) (01)  [0;32mFCF[0m  - [09:09] -  Frame Complete Flag
      0 - FCF_0 :
         Frame transfer has not completed
      0x1 - FCF_1 :
         Frame transfer has completed
 (rw) (01)  [0;32mTCF[0m  - [10:10] -  Transfer Complete Flag
      0 - TCF_0 :
         All transfers have not completed
      0x1 - TCF_1 :
         All transfers have completed
 (rw) (01)  [0;32mTEF[0m  - [11:11] -  Transmit Error Flag
      0 - TEF_0 :
         Transmit FIFO underrun has not occurred
      0x1 - TEF_1 :
         Transmit FIFO underrun has occurred
 (rw) (01)  [0;32mREF[0m  - [12:12] -  Receive Error Flag
      0 - REF_0 :
         Receive FIFO has not overflowed
      0x1 - REF_1 :
         Receive FIFO has overflowed
 (rw) (01)  [0;32mDMF[0m  - [13:13] -  Data Match Flag
      0 - DMF_0 :
         Have not received matching data
      0x1 - DMF_1 :
         Have received matching data
 (ro) (01)  [0;32mMBF[0m  - [24:24] -  Module Busy Flag
      0 - MBF_0 :
         LPSPI is idle
      0x1 - MBF_1 :
         LPSPI is busy
</lang>
#### p.LPSPI4.RDR
<lang=dft>
 (ro)  [1;33m0x403a0074[0m (0x403a0000 + 0x0074)
Receive Data Register
 (ro) (32)  [0;32mDATA[0m  - [31:00] -  Receive Data
</lang>
#### p.ADC_ETC.DONE0_1_IRQ
<lang=dft>
 (rw)  [1;33m0x403b0004[0m (0x403b0000 + 0x0004)
ETC DONE0 and DONE1 IRQ State Register
 (rw) (01)  [0;32mTRIG0_DONE0[0m  - [00:00] -  TRIG0 done0 interrupt detection
 (rw) (01)  [0;32mTRIG1_DONE0[0m  - [01:01] -  TRIG1 done0 interrupt detection
 (rw) (01)  [0;32mTRIG2_DONE0[0m  - [02:02] -  TRIG2 done0 interrupt detection
 (rw) (01)  [0;32mTRIG3_DONE0[0m  - [03:03] -  TRIG3 done0 interrupt detection
 (rw) (01)  [0;32mTRIG4_DONE0[0m  - [04:04] -  TRIG4 done0 interrupt detection
 (rw) (01)  [0;32mTRIG5_DONE0[0m  - [05:05] -  TRIG5 done0 interrupt detection
 (rw) (01)  [0;32mTRIG6_DONE0[0m  - [06:06] -  TRIG6 done0 interrupt detection
 (rw) (01)  [0;32mTRIG7_DONE0[0m  - [07:07] -  TRIG7 done0 interrupt detection
 (rw) (01)  [0;32mTRIG0_DONE1[0m  - [16:16] -  TRIG0 done1 interrupt detection
 (rw) (01)  [0;32mTRIG1_DONE1[0m  - [17:17] -  TRIG1 done1 interrupt detection
 (rw) (01)  [0;32mTRIG2_DONE1[0m  - [18:18] -  TRIG2 done1 interrupt detection
 (rw) (01)  [0;32mTRIG3_DONE1[0m  - [19:19] -  TRIG3 done1 interrupt detection
 (rw) (01)  [0;32mTRIG4_DONE1[0m  - [20:20] -  TRIG4 done1 interrupt detection
 (rw) (01)  [0;32mTRIG5_DONE1[0m  - [21:21] -  TRIG5 done1 interrupt detection
 (rw) (01)  [0;32mTRIG6_DONE1[0m  - [22:22] -  TRIG6 done1 interrupt detection
 (rw) (01)  [0;32mTRIG7_DONE1[0m  - [23:23] -  TRIG7 done1 interrupt detection
</lang>
#### p.ADC_ETC.TRIG0_COUNTER
<lang=dft>
 (rw)  [1;33m0x403b0014[0m (0x403b0000 + 0x0014)
ETC_TRIG0 Counter Register
 (rw) (16)  [0;32mINIT_DELAY[0m  - [15:00] -  TRIGGER initial delay counter
 (rw) (16)  [0;32mSAMPLE_INTERVAL[0m  - [31:16] -  TRIGGER sampling interval counter
</lang>
#### p.ADC_ETC.TRIG0_CHAIN_3_2
<lang=dft>
 (rw)  [1;33m0x403b001c[0m (0x403b0000 + 0x001c)
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
#### p.adc_etc.trig1_chain_5_4
<link=p.ADC_ETC.TRIG1_CHAIN_5_4>
#### p.ADC_ETC.TRIG2_CHAIN_3_2
<lang=dft>
 (rw)  [1;33m0x403b006c[0m (0x403b0000 + 0x006c)
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
#### p.ADC_ETC.TRIG2_CHAIN_5_4
<lang=dft>
 (rw)  [1;33m0x403b0070[0m (0x403b0000 + 0x0070)
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
#### ADC_ETC.TRIG3_CHAIN_1_0
<link=p.ADC_ETC.TRIG3_CHAIN_1_0>
#### adc_etc.trig4_ctrl
<link=p.ADC_ETC.TRIG4_CTRL>
#### ADC_ETC.TRIG4_RESULT_1_0
<link=p.ADC_ETC.TRIG4_RESULT_1_0>
#### p.ADC_ETC.TRIG4_RESULT_5_4
<lang=dft>
 (ro)  [1;33m0x403b00d0[0m (0x403b0000 + 0x00d0)
ETC_TRIG Result Data 5/4 Register
 (ro) (12)  [0;32mDATA4[0m  - [11:00] -  Result DATA4
 (ro) (12)  [0;32mDATA5[0m  - [27:16] -  Result DATA5
</lang>
#### p.ADC_ETC.TRIG4_RESULT_7_6
<lang=dft>
 (ro)  [1;33m0x403b00d4[0m (0x403b0000 + 0x00d4)
ETC_TRIG Result Data 7/6 Register
 (ro) (12)  [0;32mDATA6[0m  - [11:00] -  Result DATA6
 (ro) (12)  [0;32mDATA7[0m  - [27:16] -  Result DATA7
</lang>
#### ADC_ETC.TRIG4_RESULT_7_6
<link=p.ADC_ETC.TRIG4_RESULT_7_6>
#### p.adc_etc.trig5_chain_7_6
<link=p.ADC_ETC.TRIG5_CHAIN_7_6>
#### adc_etc.trig5_result_5_4
<link=p.ADC_ETC.TRIG5_RESULT_5_4>
#### p.adc_etc.trig7_ctrl
<link=p.ADC_ETC.TRIG7_CTRL>
#### ADC_ETC.TRIG7_CTRL
<link=p.ADC_ETC.TRIG7_CTRL>
#### p.adc_etc.trig7_chain_1_0
<link=p.ADC_ETC.TRIG7_CHAIN_1_0>
#### p.adc_etc.trig7_chain_7_6
<link=p.ADC_ETC.TRIG7_CHAIN_7_6>
#### p.ADC_ETC.TRIG7_RESULT_3_2
<lang=dft>
 (ro)  [1;33m0x403b0144[0m (0x403b0000 + 0x0144)
ETC_TRIG Result Data 3/2 Register
 (ro) (12)  [0;32mDATA2[0m  - [11:00] -  Result DATA2
 (ro) (12)  [0;32mDATA3[0m  - [27:16] -  Result DATA3
</lang>
#### p.ADC_ETC.TRIG7_RESULT_5_4
<lang=dft>
 (ro)  [1;33m0x403b0148[0m (0x403b0000 + 0x0148)
ETC_TRIG Result Data 5/4 Register
 (ro) (12)  [0;32mDATA4[0m  - [11:00] -  Result DATA4
 (ro) (12)  [0;32mDATA5[0m  - [27:16] -  Result DATA5
</lang>
#### AOI1.BFCRT010
<link=p.AOI1.BFCRT010>
#### p.aoi1.bfcrt230
<link=p.AOI1.BFCRT230>
#### p.AOI2
<lang=dft>
base: 0x403b8000
BFCRT010        BFCRT011        BFCRT012        BFCRT013        
BFCRT230        BFCRT231        BFCRT232        BFCRT233        
输入 p.AOI2.{reg_name} 以查看寄存器的详细信息
type p.AOI2.{reg_name} to check details of registers
</lang>
#### p.AOI2.BFCRT010
<lang=dft>
 (rw)  [1;33m0x403b8000[0m (0x403b8000 + 0x0000)
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
#### p.aoi2.bfcrt230
<link=p.AOI2.BFCRT230>
#### xbara1.sel4
<link=p.XBARA1.SEL4>
#### XBARA1.SEL5
<link=p.XBARA1.SEL5>
#### p.XBARA1.SEL8
<lang=dft>
 (rw)  [1;33m0x403bc010[0m (0x403bc000 + 0x0010)
Crossbar A Select Register 8
 (rw) (07)  [0;32mSEL16[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT16 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL17[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT17 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel9
<link=p.XBARA1.SEL9>
#### XBARA1.SEL14
<link=p.XBARA1.SEL14>
#### xbara1.sel17
<link=p.XBARA1.SEL17>
#### p.xbara1.sel23
<link=p.XBARA1.SEL23>
#### XBARA1.SEL28
<link=p.XBARA1.SEL28>
#### xbara1.sel29
<link=p.XBARA1.SEL29>
#### p.xbara1.sel30
<link=p.XBARA1.SEL30>
#### p.XBARA1.SEL33
<lang=dft>
 (rw)  [1;33m0x403bc042[0m (0x403bc000 + 0x0042)
Crossbar A Select Register 33
 (rw) (07)  [0;32mSEL66[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT66 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL67[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT67 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel41
<link=p.XBARA1.SEL41>
#### p.XBARA1.SEL46
<lang=dft>
 (rw)  [1;33m0x403bc05c[0m (0x403bc000 + 0x005c)
Crossbar A Select Register 46
 (rw) (07)  [0;32mSEL92[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT92 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL93[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT93 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.XBARA1.SEL51
<lang=dft>
 (rw)  [1;33m0x403bc066[0m (0x403bc000 + 0x0066)
Crossbar A Select Register 51
 (rw) (07)  [0;32mSEL102[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT102 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL103[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT103 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### p.xbara1.sel52
<link=p.XBARA1.SEL52>
#### xbara1.sel58
<link=p.XBARA1.SEL58>
#### XBARA1.SEL59
<link=p.XBARA1.SEL59>
#### p.XBARA1.SEL60
<lang=dft>
 (rw)  [1;33m0x403bc078[0m (0x403bc000 + 0x0078)
Crossbar A Select Register 60
 (rw) (07)  [0;32mSEL120[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT120 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL121[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT121 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### XBARA1.SEL64
<link=p.XBARA1.SEL64>
#### xbara1.sel65
<link=p.XBARA1.SEL65>
#### p.xbarb3.sel0
<link=p.XBARB3.SEL0>
#### xbarb3.sel2
<link=p.XBARB3.SEL2>
#### ENC1.CTRL
<link=p.ENC1.CTRL>
#### enc1.wtr
<link=p.ENC1.WTR>
#### p.enc1.rev
<link=p.ENC1.REV>
#### p.enc1.revh
<link=p.ENC1.REVH>
#### p.enc1.lpos
<link=p.ENC1.LPOS>
#### p.enc1.lposh
<link=p.ENC1.LPOSH>
#### p.ENC1.TST
<lang=dft>
 (rw)  [1;33m0x403c801c[0m (0x403c8000 + 0x001c)
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
#### enc2.filt
<link=p.ENC2.FILT>
#### ENC2.UPOS
<link=p.ENC2.UPOS>
#### p.ENC2.LPOSH
<lang=dft>
 (ro)  [1;33m0x403cc014[0m (0x403cc000 + 0x0014)
Lower Position Hold Register
 (ro) (16)  [0;32mPOSH[0m  - [15:00] -  This read-only register contains a snapshot of the LPOS register.
</lang>
#### p.ENC2.LINIT
<lang=dft>
 (rw)  [1;33m0x403cc018[0m (0x403cc000 + 0x0018)
Lower Initialization Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  This read/write register contains the value to be used to initialize the lower 
 half of the position counter (LPOS)
</lang>
#### p.enc2.lmod
<link=p.ENC2.LMOD>
#### ENC2.UCOMP
<link=p.ENC2.UCOMP>
#### p.ENC3.POSD
<lang=dft>
 (rw)  [1;33m0x403d0006[0m (0x403d0000 + 0x0006)
Position Difference Counter Register
 (rw) (16)  [0;32mPOSD[0m  - [15:00] -  This read/write register contains the position change in value occurring betwee
 n each read of the position register
</lang>
#### enc3.lposh
<link=p.ENC3.LPOSH>
#### ENC3.IMR
<link=p.ENC3.IMR>
#### p.enc3.ctrl2
<link=p.ENC3.CTRL2>
#### p.enc3.ucomp
<link=p.ENC3.UCOMP>
#### p.enc4
<link=p.ENC4>
#### p.enc4.rev
<link=p.ENC4.REV>
#### p.ENC4.UPOS
<lang=dft>
 (rw)  [1;33m0x403d400e[0m (0x403d4000 + 0x000e)
Upper Position Counter Register
 (rw) (16)  [0;32mPOS[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the posi
 tion counter
</lang>
#### p.ENC4.UMOD
<lang=dft>
 (rw)  [1;33m0x403d4020[0m (0x403d4000 + 0x0020)
Upper Modulus Register
 (rw) (16)  [0;32mMOD[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the modu
 lus register
</lang>
#### ENC4.UMOD
<link=p.ENC4.UMOD>
#### pwm1.sm0cnt
<link=p.PWM1.SM0CNT>
#### PWM1.SM0CTRL
<link=p.PWM1.SM0CTRL>
#### p.pwm1.sm0fracval2
<link=p.PWM1.SM0FRACVAL2>
#### pwm1.sm0val2
<link=p.PWM1.SM0VAL2>
#### p.pwm1.sm0val3
<link=p.PWM1.SM0VAL3>
#### p.PWM1.SM0FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403dc01c[0m (0x403dc000 + 0x001c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### PWM1.SM0DISMAP1
<link=p.PWM1.SM0DISMAP1>
#### p.PWM1.SM0CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403dc034[0m (0x403dc000 + 0x0034)
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
#### PWM1.SM0CAPTCOMPB
<link=p.PWM1.SM0CAPTCOMPB>
#### pwm1.sm0captctrlx
<link=p.PWM1.SM0CAPTCTRLX>
#### p.pwm1.sm1cnt
<link=p.PWM1.SM1CNT>
#### PWM1.SM1CTRL2
<link=p.PWM1.SM1CTRL2>
#### pwm1.sm1fracval2
<link=p.PWM1.SM1FRACVAL2>
#### p.pwm1.sm1val2
<link=p.PWM1.SM1VAL2>
#### PWM1.SM1FRACVAL3
<link=p.PWM1.SM1FRACVAL3>
#### pwm1.sm1val3
<link=p.PWM1.SM1VAL3>
#### PWM1.SM1VAL4
<link=p.PWM1.SM1VAL4>
#### p.PWM1.SM1OCTRL
<lang=dft>
 (rw)  [1;33m0x403dc082[0m (0x403dc000 + 0x0082)
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
#### p.PWM1.SM1STS
<lang=dft>
 (rw)  [1;33m0x403dc084[0m (0x403dc000 + 0x0084)
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
#### p.PWM1.SM1CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403dc098[0m (0x403dc000 + 0x0098)
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
#### p.PWM1.SM1CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403dc0a6[0m (0x403dc000 + 0x00a6)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### p.PWM1.SM1CVAL2
<lang=dft>
 (ro)  [1;33m0x403dc0a8[0m (0x403dc000 + 0x00a8)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### p.PWM1.SM1CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403dc0aa[0m (0x403dc000 + 0x00aa)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### PWM1.SM2VAL0
<link=p.PWM1.SM2VAL0>
#### p.PWM1.SM2VAL3
<lang=dft>
 (rw)  [1;33m0x403dc0d6[0m (0x403dc000 + 0x00d6)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### PWM1.SM2FRACVAL5
<link=p.PWM1.SM2FRACVAL5>
#### pwm1.sm2tctrl
<link=p.PWM1.SM2TCTRL>
#### PWM1.SM2TCTRL
<link=p.PWM1.SM2TCTRL>
#### pwm1.sm2dtcnt1
<link=p.PWM1.SM2DTCNT1>
#### p.pwm1.sm2captctrlx
<link=p.PWM1.SM2CAPTCTRLX>
#### p.PWM1.SM2CVAL2
<lang=dft>
 (ro)  [1;33m0x403dc108[0m (0x403dc000 + 0x0108)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### pwm1.sm2cval2
<link=p.PWM1.SM2CVAL2>
#### p.pwm1.sm2cval5
<link=p.PWM1.SM2CVAL5>
#### PWM1.SM3INIT
<link=p.PWM1.SM3INIT>
#### p.PWM1.SM3VAL1
<lang=dft>
 (rw)  [1;33m0x403dc12e[0m (0x403dc000 + 0x012e)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### PWM1.SM3VAL1
<link=p.PWM1.SM3VAL1>
#### pwm1.sm3cval0
<link=p.PWM1.SM3CVAL0>
#### p.pwm1.swcout
<link=p.PWM1.SWCOUT>
#### PWM2.SM0VAL0
<link=p.PWM2.SM0VAL0>
#### p.PWM2.SM0VAL1
<lang=dft>
 (rw)  [1;33m0x403e000e[0m (0x403e0000 + 0x000e)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### pwm2.sm0fracval4
<link=p.PWM2.SM0FRACVAL4>
#### pwm2.sm0val4
<link=p.PWM2.SM0VAL4>
#### PWM2.SM0FRCTRL
<link=p.PWM2.SM0FRCTRL>
#### p.pwm2.sm0sts
<link=p.PWM2.SM0STS>
#### p.pwm2.sm0inten
<link=p.PWM2.SM0INTEN>
#### p.pwm2.sm0captcompa
<link=p.PWM2.SM0CAPTCOMPA>
#### PWM2.SM0CAPTCOMPX
<link=p.PWM2.SM0CAPTCOMPX>
#### PWM2.SM0CVAL0CYC
<link=p.PWM2.SM0CVAL0CYC>
#### pwm2.sm1fracval1
<link=p.PWM2.SM1FRACVAL1>
#### PWM2.SM1VAL1
<link=p.PWM2.SM1VAL1>
#### PWM2.SM1FRACVAL2
<link=p.PWM2.SM1FRACVAL2>
#### p.PWM2.SM1VAL3
<lang=dft>
 (rw)  [1;33m0x403e0076[0m (0x403e0000 + 0x0076)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### pwm2.sm1val5
<link=p.PWM2.SM1VAL5>
#### p.pwm2.sm1inten
<link=p.PWM2.SM1INTEN>
#### p.pwm2.sm1dismap0
<link=p.PWM2.SM1DISMAP0>
#### pwm2.sm1captcompb
<link=p.PWM2.SM1CAPTCOMPB>
#### pwm2.sm1captctrlx
<link=p.PWM2.SM1CAPTCTRLX>
#### p.PWM2.SM1CVAL2
<lang=dft>
 (ro)  [1;33m0x403e00a8[0m (0x403e0000 + 0x00a8)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### PWM2.SM1CVAL4
<link=p.PWM2.SM1CVAL4>
#### pwm2.sm2cnt
<link=p.PWM2.SM2CNT>
#### PWM2.SM2FRACVAL2
<link=p.PWM2.SM2FRACVAL2>
#### PWM2.SM2FRCTRL
<link=p.PWM2.SM2FRCTRL>
#### p.PWM2.SM2OCTRL
<lang=dft>
 (rw)  [1;33m0x403e00e2[0m (0x403e0000 + 0x00e2)
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
#### p.PWM2.SM2STS
<lang=dft>
 (rw)  [1;33m0x403e00e4[0m (0x403e0000 + 0x00e4)
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
#### PWM2.SM2STS
<link=p.PWM2.SM2STS>
#### pwm2.sm2dtcnt1
<link=p.PWM2.SM2DTCNT1>
#### PWM2.SM2CAPTCTRLA
<link=p.PWM2.SM2CAPTCTRLA>
#### pwm2.sm2captcompa
<link=p.PWM2.SM2CAPTCOMPA>
#### p.PWM2.SM2CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e00f8[0m (0x403e0000 + 0x00f8)
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
#### p.pwm2.sm2captctrlx
<link=p.PWM2.SM2CAPTCTRLX>
#### pwm2.sm2captctrlx
<link=p.PWM2.SM2CAPTCTRLX>
#### p.PWM2.SM2CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e0106[0m (0x403e0000 + 0x0106)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### PWM2.SM2CVAL1CYC
<link=p.PWM2.SM2CVAL1CYC>
#### p.PWM2.SM2CVAL2
<lang=dft>
 (ro)  [1;33m0x403e0108[0m (0x403e0000 + 0x0108)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### p.PWM2.SM2CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e010a[0m (0x403e0000 + 0x010a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### pwm2.sm2cval3
<link=p.PWM2.SM2CVAL3>
#### pwm2.sm3ctrl2
<link=p.PWM2.SM3CTRL2>
#### pwm2.sm3fracval3
<link=p.PWM2.SM3FRACVAL3>
#### p.PWM2.SM3FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e013c[0m (0x403e0000 + 0x013c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### PWM2.SM3OCTRL
<link=p.PWM2.SM3OCTRL>
#### pwm2.sm3dmaen
<link=p.PWM2.SM3DMAEN>
#### pwm2.sm3dtcnt0
<link=p.PWM2.SM3DTCNT0>
#### p.PWM2.SM3CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e0154[0m (0x403e0000 + 0x0154)
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
#### PWM2.SM3CAPTCTRLB
<link=p.PWM2.SM3CAPTCTRLB>
#### pwm2.sm3cval0
<link=p.PWM2.SM3CVAL0>
#### p.pwm2.sm3cval5cyc
<link=p.PWM2.SM3CVAL5CYC>
#### PWM2.SM3CVAL5CYC
<link=p.PWM2.SM3CVAL5CYC>
#### p.pwm2.dtsrcsel
<link=p.PWM2.DTSRCSEL>
#### pwm2.dtsrcsel
<link=p.PWM2.DTSRCSEL>
#### PWM3.SM0VAL1
<link=p.PWM3.SM0VAL1>
#### PWM3.SM0FRACVAL2
<link=p.PWM3.SM0FRACVAL2>
#### p.PWM3.SM0VAL3
<lang=dft>
 (rw)  [1;33m0x403e4016[0m (0x403e4000 + 0x0016)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### p.pwm3.sm0captctrlx
<link=p.PWM3.SM0CAPTCTRLX>
#### p.PWM3.SM0CVAL2
<lang=dft>
 (ro)  [1;33m0x403e4048[0m (0x403e4000 + 0x0048)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### pwm3.sm0cval3
<link=p.PWM3.SM0CVAL3>
#### PWM3.SM0CVAL4
<link=p.PWM3.SM0CVAL4>
#### p.pwm3.sm0cval5
<link=p.PWM3.SM0CVAL5>
#### PWM3.SM1VAL0
<link=p.PWM3.SM1VAL0>
#### p.PWM3.SM1VAL1
<lang=dft>
 (rw)  [1;33m0x403e406e[0m (0x403e4000 + 0x006e)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### PWM3.SM1FRCTRL
<link=p.PWM3.SM1FRCTRL>
#### pwm3.sm1captcompa
<link=p.PWM3.SM1CAPTCOMPA>
#### PWM3.SM1CAPTCOMPX
<link=p.PWM3.SM1CAPTCOMPX>
#### PWM3.SM1CVAL0CYC
<link=p.PWM3.SM1CVAL0CYC>
#### pwm3.sm1cval3
<link=p.PWM3.SM1CVAL3>
#### pwm3.sm2ctrl
<link=p.PWM3.SM2CTRL>
#### p.pwm3.sm2fracval2
<link=p.PWM3.SM2FRACVAL2>
#### p.pwm3.sm2val3
<link=p.PWM3.SM2VAL3>
#### pwm3.sm2val3
<link=p.PWM3.SM2VAL3>
#### p.PWM3.SM2FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e40dc[0m (0x403e4000 + 0x00dc)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### pwm3.sm2frctrl
<link=p.PWM3.SM2FRCTRL>
#### PWM3.SM2OCTRL
<link=p.PWM3.SM2OCTRL>
#### pwm3.sm2sts
<link=p.PWM3.SM2STS>
#### p.PWM3.SM2CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e40f4[0m (0x403e4000 + 0x00f4)
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
#### PWM3.SM2CAPTCTRLB
<link=p.PWM3.SM2CAPTCTRLB>
#### pwm3.sm2captcompx
<link=p.PWM3.SM2CAPTCOMPX>
#### pwm3.sm2cval4
<link=p.PWM3.SM2CVAL4>
#### PWM3.SM2CVAL5CYC
<link=p.PWM3.SM2CVAL5CYC>
#### p.pwm3.sm3cnt
<link=p.PWM3.SM3CNT>
#### PWM3.SM3FRACVAL2
<link=p.PWM3.SM3FRACVAL2>
#### p.pwm3.sm3val2
<link=p.PWM3.SM3VAL2>
#### pwm3.sm3val2
<link=p.PWM3.SM3VAL2>
#### PWM3.SM3FRCTRL
<link=p.PWM3.SM3FRCTRL>
#### p.PWM3.SM3OCTRL
<lang=dft>
 (rw)  [1;33m0x403e4142[0m (0x403e4000 + 0x0142)
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
#### p.PWM3.SM3STS
<lang=dft>
 (rw)  [1;33m0x403e4144[0m (0x403e4000 + 0x0144)
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
#### PWM3.SM3STS
<link=p.PWM3.SM3STS>
#### PWM3.SM3CAPTCTRLA
<link=p.PWM3.SM3CAPTCTRLA>
#### p.PWM3.SM3CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e4158[0m (0x403e4000 + 0x0158)
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
#### pwm3.sm3captcompx
<link=p.PWM3.SM3CAPTCOMPX>
#### p.PWM3.SM3CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e4166[0m (0x403e4000 + 0x0166)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### PWM3.SM3CVAL1CYC
<link=p.PWM3.SM3CVAL1CYC>
#### p.PWM3.SM3CVAL2
<lang=dft>
 (ro)  [1;33m0x403e4168[0m (0x403e4000 + 0x0168)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### p.PWM3.SM3CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e416a[0m (0x403e4000 + 0x016a)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### p.pwm3.mask
<link=p.PWM3.MASK>
#### p.pwm3.ffilt0
<link=p.PWM3.FFILT0>
#### pwm3.ftst0
<link=p.PWM3.FTST0>
#### p.pwm4
<link=p.PWM4>
#### PWM4.SM0CTRL
<link=p.PWM4.SM0CTRL>
#### p.pwm4.sm0val2
<link=p.PWM4.SM0VAL2>
#### pwm4.sm0fracval5
<link=p.PWM4.SM0FRACVAL5>
#### pwm4.sm0frctrl
<link=p.PWM4.SM0FRCTRL>
#### pwm4.sm0sts
<link=p.PWM4.SM0STS>
#### p.PWM4.SM0TCTRL
<lang=dft>
 (rw)  [1;33m0x403e802a[0m (0x403e8000 + 0x002a)
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
#### p.PWM4.SM0DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e802c[0m (0x403e8000 + 0x002c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### p.pwm4.sm0dismap1
<link=p.PWM4.SM0DISMAP1>
#### p.PWM4.SM0CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e8036[0m (0x403e8000 + 0x0036)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### PWM4.SM0CVAL1
<link=p.PWM4.SM0CVAL1>
#### pwm4.sm0cval1cyc
<link=p.PWM4.SM0CVAL1CYC>
#### p.pwm4.sm0cval2
<link=p.PWM4.SM0CVAL2>
#### p.pwm4.sm1init
<link=p.PWM4.SM1INIT>
#### p.PWM4.SM1FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403e806c[0m (0x403e8000 + 0x006c)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### p.pwm4.sm1val3
<link=p.PWM4.SM1VAL3>
#### PWM4.SM1FRACVAL4
<link=p.PWM4.SM1FRACVAL4>
#### p.PWM4.SM1OCTRL
<lang=dft>
 (rw)  [1;33m0x403e8082[0m (0x403e8000 + 0x0082)
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
#### PWM4.SM1DMAEN
<link=p.PWM4.SM1DMAEN>
#### p.pwm4.sm1dtcnt1
<link=p.PWM4.SM1DTCNT1>
#### PWM4.SM1CAPTCOMPX
<link=p.PWM4.SM1CAPTCOMPX>
#### pwm4.sm1cval2cyc
<link=p.PWM4.SM1CVAL2CYC>
#### p.PWM4.SM2INIT
<lang=dft>
 (rw)  [1;33m0x403e80c2[0m (0x403e8000 + 0x00c2)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### p.PWM4.SM2CTRL2
<lang=dft>
 (rw)  [1;33m0x403e80c4[0m (0x403e8000 + 0x00c4)
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
#### pwm4.sm2val0
<link=p.PWM4.SM2VAL0>
#### p.PWM4.SM2VAL4
<lang=dft>
 (rw)  [1;33m0x403e80da[0m (0x403e8000 + 0x00da)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### PWM4.SM2VAL4
<link=p.PWM4.SM2VAL4>
#### p.PWM4.SM2STS
<lang=dft>
 (rw)  [1;33m0x403e80e4[0m (0x403e8000 + 0x00e4)
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
#### p.pwm4.sm2captctrla
<link=p.PWM4.SM2CAPTCTRLA>
#### p.PWM4.SM2CVAL0
<lang=dft>
 (ro)  [1;33m0x403e8100[0m (0x403e8000 + 0x0100)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### pwm4.sm2cval0
<link=p.PWM4.SM2CVAL0>
#### pwm4.sm2cval0cyc
<link=p.PWM4.SM2CVAL0CYC>
#### p.pwm4.sm2cval4cyc
<link=p.PWM4.SM2CVAL4CYC>
#### p.pwm4.sm2cval5
<link=p.PWM4.SM2CVAL5>
#### p.pwm4.sm3ctrl2
<link=p.PWM4.SM3CTRL2>
#### pwm4.sm3val1
<link=p.PWM4.SM3VAL1>
#### p.PWM4.SM3VAL4
<lang=dft>
 (rw)  [1;33m0x403e813a[0m (0x403e8000 + 0x013a)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### PWM4.SM3VAL5
<link=p.PWM4.SM3VAL5>
#### p.pwm4.sm3tctrl
<link=p.PWM4.SM3TCTRL>
#### PWM4.SM3CAPTCTRLX
<link=p.PWM4.SM3CAPTCTRLX>
#### pwm4.sm3cval3
<link=p.PWM4.SM3CVAL3>
#### p.pwm4.sm3cval5
<link=p.PWM4.SM3CVAL5>
#### pwm4.mctrl2
<link=p.PWM4.MCTRL2>
#### PWM4.MCTRL2
<link=p.PWM4.MCTRL2>
#### p.pwm4.fsts0
<link=p.PWM4.FSTS0>
#### p.bee.ctrl
<link=p.BEE.CTRL>
#### bee.aes_key0_w3
<link=p.BEE.AES_KEY0_W3>
#### p.BEE.CTR_NONCE0_W1
<lang=dft>
 (wo)  [1;33m0x403ec024[0m (0x403ec000 + 0x0024)
no description available
 (wo) (32)  [0;32mNONCE01[0m  - [31:00] -  Nonce0 from software for CTR, for region0. Nonce0={Nonce03,Nonce02,Nonce01,Nonc
 e00}
</lang>
#### bee.ctr_nonce0_w2
<link=p.BEE.CTR_NONCE0_W2>
#### BEE.CTR_NONCE1_W0
<link=p.BEE.CTR_NONCE1_W0>
#### bee.ctr_nonce1_w1
<link=p.BEE.CTR_NONCE1_W1>
#### p.LPI2C1.VERID
<lang=dft>
 (ro)  [1;33m0x403f0000[0m (0x403f0000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Specification Number
      0x2 - FEATURE_2 :
         Master only, with standard feature set
      0x3 - FEATURE_3 :
         Master and slave, with standard feature set
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### p.lpi2c1.mder
<link=p.LPI2C1.MDER>
#### p.lpi2c1.mccr1
<link=p.LPI2C1.MCCR1>
#### p.lpi2c1.ssr
<link=p.LPI2C1.SSR>
#### p.lpi2c1.scfgr2
<link=p.LPI2C1.SCFGR2>
#### lpi2c1.sasr
<link=p.LPI2C1.SASR>
#### LPI2C1.SASR
<link=p.LPI2C1.SASR>
#### lpi2c1.srdr
<link=p.LPI2C1.SRDR>
#### LPI2C1.SRDR
<link=p.LPI2C1.SRDR>
#### p.LPI2C2.VERID
<lang=dft>
 (ro)  [1;33m0x403f4000[0m (0x403f4000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Specification Number
      0x2 - FEATURE_2 :
         Master only, with standard feature set
      0x3 - FEATURE_3 :
         Master and slave, with standard feature set
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### LPI2C2.MCR
<link=p.LPI2C2.MCR>
#### lpi2c2.mcfgr0
<link=p.LPI2C2.MCFGR0>
#### p.lpi2c2.mcfgr2
<link=p.LPI2C2.MCFGR2>
#### p.LPI2C2.MFCR
<lang=dft>
 (rw)  [1;33m0x403f4058[0m (0x403f4000 + 0x0058)
Master FIFO Control Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit FIFO Watermark
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive FIFO Watermark
</lang>
#### lpi2c2.sasr
<link=p.LPI2C2.SASR>
#### p.LPI2C3
<lang=dft>
base: 0x403f8000
MCCR0           MCCR1           MCFGR0          MCFGR1          
MCFGR2          MCFGR3          MCR             MDER            
MDMR            MFCR            MFSR            MIER            
MRDR            MSR             MTDR            PARAM           
SAMR            SASR            SCFGR1          SCFGR2          
SCR             SDER            SIER            SRDR            
SSR             STAR            STDR            VERID           
输入 p.LPI2C3.{reg_name} 以查看寄存器的详细信息
type p.LPI2C3.{reg_name} to check details of registers
</lang>
#### p.lpi2c3
<link=p.LPI2C3>
#### lpi2c3.param
<link=p.LPI2C3.PARAM>
#### p.LPI2C3.MCR
<lang=dft>
 (rw)  [1;33m0x403f8010[0m (0x403f8000 + 0x0010)
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
#### lpi2c3.mder
<link=p.LPI2C3.MDER>
#### p.lpi2c3.mcfgr0
<link=p.LPI2C3.MCFGR0>
#### LPI2C3.MCFGR1
<link=p.LPI2C3.MCFGR1>
#### p.LPI2C3.MCFGR2
<lang=dft>
 (rw)  [1;33m0x403f8028[0m (0x403f8000 + 0x0028)
Master Configuration Register 2
 (rw) (12)  [0;32mBUSIDLE[0m  - [11:00] -  Bus Idle Timeout
 (rw) (04)  [0;32mFILTSCL[0m  - [19:16] -  Glitch Filter SCL
 (rw) (04)  [0;32mFILTSDA[0m  - [27:24] -  Glitch Filter SDA
</lang>
#### lpi2c3.mcfgr3
<link=p.LPI2C3.MCFGR3>
#### lpi2c3.scr
<link=p.LPI2C3.SCR>
#### p.LPI2C3.SDER
<lang=dft>
 (rw)  [1;33m0x403f811c[0m (0x403f8000 + 0x011c)
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
#### p.lpi2c3.star
<link=p.LPI2C3.STAR>
#### p.LPI2C3.SRDR
<lang=dft>
 (ro)  [1;33m0x403f8170[0m (0x403f8000 + 0x0170)
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
#### LPI2C4.PARAM
<link=p.LPI2C4.PARAM>
#### p.lpi2c4.msr
<link=p.LPI2C4.MSR>
#### p.LPI2C4.MCFGR1
<lang=dft>
 (rw)  [1;33m0x403fc024[0m (0x403fc000 + 0x0024)
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
#### p.lpi2c4.mcfgr1
<link=p.LPI2C4.MCFGR1>
#### p.LPI2C4.MCCR1
<lang=dft>
 (rw)  [1;33m0x403fc050[0m (0x403fc000 + 0x0050)
Master Clock Configuration Register 1
 (rw) (06)  [0;32mCLKLO[0m  - [05:00] -  Clock Low Period
 (rw) (06)  [0;32mCLKHI[0m  - [13:08] -  Clock High Period
 (rw) (06)  [0;32mSETHOLD[0m  - [21:16] -  Setup Hold Delay
 (rw) (06)  [0;32mDATAVD[0m  - [29:24] -  Data Valid Delay
</lang>
#### lpi2c4.mtdr
<link=p.LPI2C4.MTDR>
#### p.LPI2C4.SSR
<lang=dft>
 (rw)  [1;33m0x403fc114[0m (0x403fc000 + 0x0114)
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
#### p.LPI2C4.SCFGR1
<lang=dft>
 (rw)  [1;33m0x403fc124[0m (0x403fc000 + 0x0124)
Slave Configuration Register 1
 (rw) (01)  [0;32mADRSTALL[0m  - [00:00] -  Address SCL Stall
      0 - ADRSTALL_0 :
         Clock stretching is disabled
      0x1 - ADRSTALL_1 :
         Clock stretching is enabled
 (rw) (01)  [0;32mRXSTALL[0m  - [01:01] -  RX SCL Stall
      0 - RXSTALL_0 :
         Clock stretching is disabled
      0x1 - RXSTALL_1 :
         Clock stretching is enabled
 (rw) (01)  [0;32mTXDSTALL[0m  - [02:02] -  TX Data SCL Stall
      0 - TXDSTALL_0 :
         Clock stretching is disabled
      0x1 - TXDSTALL_1 :
         Clock stretching is enabled
 (rw) (01)  [0;32mACKSTALL[0m  - [03:03] -  ACK SCL Stall
      0 - ACKSTALL_0 :
         Clock stretching is disabled
      0x1 - ACKSTALL_1 :
         Clock stretching is enabled
 (rw) (01)  [0;32mGCEN[0m  - [08:08] -  General Call Enable
      0 - GCEN_0 :
         General Call address is disabled
      0x1 - GCEN_1 :
         General Call address is enabled
 (rw) (01)  [0;32mSAEN[0m  - [09:09] -  SMBus Alert Enable
      0 - SAEN_0 :
         Disables match on SMBus Alert
      0x1 - SAEN_1 :
         Enables match on SMBus Alert
 (rw) (01)  [0;32mTXCFG[0m  - [10:10] -  Transmit Flag Configuration
      0 - TXCFG_0 :
         Transmit Data Flag will only assert during a slave-transmit transfer wh
         en the Transmit Data register is empty
      0x1 - TXCFG_1 :
         Transmit Data Flag will assert whenever the Transmit Data register is e
         mpty
 (rw) (01)  [0;32mRXCFG[0m  - [11:11] -  Receive Data Configuration
      0 - RXCFG_0 :
         Reading the Receive Data register will return received data and clear t
         he Receive Data flag (MSR[RDF]).
      0x1 - RXCFG_1 :
         Reading the Receive Data register when the Address Valid flag (SSR[AVF]
         )is set, will return the Address Status register and clear the Address 
         Valid flag. Reading the Receive Data register when the Address Valid fl
         ag is clear, will return received data and clear the Receive Data flag 
         (MSR[RDF]).
 (rw) (01)  [0;32mIGNACK[0m  - [12:12] -  Ignore NACK
      0 - IGNACK_0 :
         Slave will end transfer when NACK is detected
      0x1 - IGNACK_1 :
         Slave will not end transfer when NACK detected
 (rw) (01)  [0;32mHSMEN[0m  - [13:13] -  High Speed Mode Enable
      0 - HSMEN_0 :
         Disables detection of HS-mode master code
      0x1 - HSMEN_1 :
         Enables detection of HS-mode master code
 (rw) (03)  [0;32mADDRCFG[0m  - [18:16] -  Address Configuration
      0 - ADDRCFG_0 :
         Address match 0 (7-bit)
      0x1 - ADDRCFG_1 :
         Address match 0 (10-bit)
      0x2 - ADDRCFG_2 :
         Address match 0 (7-bit) or Address match 1 (7-bit)
      0x3 - ADDRCFG_3 :
         Address match 0 (10-bit) or Address match 1 (10-bit)
      0x4 - ADDRCFG_4 :
         Address match 0 (7-bit) or Address match 1 (10-bit)
      0x5 - ADDRCFG_5 :
         Address match 0 (10-bit) or Address match 1 (7-bit)
      0x6 - ADDRCFG_6 :
         From Address match 0 (7-bit) to Address match 1 (7-bit)
      0x7 - ADDRCFG_7 :
         From Address match 0 (10-bit) to Address match 1 (10-bit)
</lang>
#### p.LPI2C4.SAMR
<lang=dft>
 (rw)  [1;33m0x403fc140[0m (0x403fc000 + 0x0140)
Slave Address Match Register
 (rw) (10)  [0;32mADDR0[0m  - [10:01] -  Address 0 Value
 (rw) (10)  [0;32mADDR1[0m  - [26:17] -  Address 1 Value
</lang>
#### p.lpi2c4.samr
<link=p.LPI2C4.SAMR>
#### systemcontrol.cpuid
<link=p.SYSTEMCONTROL.CPUID>
#### SystemControl.AIRCR
<link=p.SYSTEMCONTROL.AIRCR>
#### SystemControl.SHPR3
<link=p.SYSTEMCONTROL.SHPR3>
#### systemcontrol.hfsr
<link=p.SYSTEMCONTROL.HFSR>
#### p.SYSTEMCONTROL.DFSR
<lang=dft>
 (rw)  [1;33m0xe000ed30[0m (0xe000e000 + 0x0d30)
Debug Fault Status Register
 (rw) (01)  [0;32mHALTED[0m  - [00:00] -  Indicates a debug event generated by either a C_HALT or C_STEP request, trigger
 ed by a write to the DHCSR or a step request triggered by setting DEMCR.MON_STE
 P to 1.
      0 - HALTED_0 :
         No active halt request debug event
      0x1 - HALTED_1 :
         Halt request debug event active
 (rw) (01)  [0;32mBKPT[0m  - [01:01] -  Debug event generated by BKPT instruction execution or a breakpoint match in FP
 B
      0 - BKPT_0 :
         No current breakpoint debug event
      0x1 - BKPT_1 :
         At least one current breakpoint debug event
 (rw) (01)  [0;32mDWTTRAP[0m  - [02:02] -  Debug event generated by the DWT
      0 - DWTTRAP_0 :
         No current debug events generated by the DWT
      0x1 - DWTTRAP_1 :
         At least one current debug event generated by the DWT
 (rw) (01)  [0;32mVCATCH[0m  - [03:03] -  Indicates triggering of a Vector catch
      0 - VCATCH_0 :
         No Vector catch triggered
      0x1 - VCATCH_1 :
         Vector catch triggered
 (rw) (01)  [0;32mEXTERNAL[0m  - [04:04] -  Debug event generated because of the assertion of an external debug request
      0 - EXTERNAL_0 :
         No external debug request debug event
      0x1 - EXTERNAL_1 :
         External debug request debug event
</lang>
#### p.systemcontrol.id_mmfr0
<link=p.SYSTEMCONTROL.ID_MMFR0>
#### p.systemcontrol.id_isar0
<link=p.SYSTEMCONTROL.ID_ISAR0>
#### systemcontrol.id_isar1
<link=p.SYSTEMCONTROL.ID_ISAR1>
#### p.NVIC.NVICISER4
<lang=dft>
 (rw)  [1;33m0xe000e110[0m (0xe000e100 + 0x0010)
Interrupt Set Enable Register n
 (rw) (32)  [0;32mSETENA[0m  - [31:00] -  Interrupt set enable bits
</lang>
#### NVIC.NVICICER3
<link=p.NVIC.NVICICER3>
#### NVIC.NVICISPR0
<link=p.NVIC.NVICISPR0>
#### p.nvic.nvicispr3
<link=p.NVIC.NVICISPR3>
#### nvic.nviciabr0
<link=p.NVIC.NVICIABR0>
#### p.nvic.nvicip2
<link=p.NVIC.NVICIP2>
#### p.NVIC.NVICIP5
<lang=dft>
 (rw)  [1;33m0xe000e405[0m (0xe000e100 + 0x0305)
Interrupt Priority Register 5
 (rw) (04)  [0;32mPRI5[0m  - [07:04] -  Priority of the INT_DMA5_DMA21 interrupt 5
</lang>
#### nvic.nvicip8
<link=p.NVIC.NVICIP8>
#### p.NVIC.NVICIP15
<lang=dft>
 (rw)  [1;33m0xe000e40f[0m (0xe000e100 + 0x030f)
Interrupt Priority Register 15
 (rw) (04)  [0;32mPRI15[0m  - [07:04] -  Priority of the INT_DMA15_DMA31 interrupt 15
</lang>
#### nvic.nvicip15
<link=p.NVIC.NVICIP15>
#### p.NVIC.NVICIP20
<lang=dft>
 (rw)  [1;33m0xe000e414[0m (0xe000e100 + 0x0314)
Interrupt Priority Register 20
 (rw) (04)  [0;32mPRI20[0m  - [07:04] -  Priority of the INT_LPUART1 interrupt 20
</lang>
#### nvic.nvicip24
<link=p.NVIC.NVICIP24>
#### NVIC.NVICIP26
<link=p.NVIC.NVICIP26>
#### p.nvic.nvicip27
<link=p.NVIC.NVICIP27>
#### p.NVIC.NVICIP33
<lang=dft>
 (rw)  [1;33m0xe000e421[0m (0xe000e100 + 0x0321)
Interrupt Priority Register 33
 (rw) (04)  [0;32mPRI33[0m  - [07:04] -  Priority of the INT_LPSPI2 interrupt 33
</lang>
#### nvic.nvicip33
<link=p.NVIC.NVICIP33>
#### NVIC.NVICIP35
<link=p.NVIC.NVICIP35>
#### p.nvic.nvicip38
<link=p.NVIC.NVICIP38>
#### p.nvic.nvicip46
<link=p.NVIC.NVICIP46>
#### NVIC.NVICIP47
<link=p.NVIC.NVICIP47>
#### p.nvic.nvicip55
<link=p.NVIC.NVICIP55>
#### p.NVIC.NVICIP59
<lang=dft>
 (rw)  [1;33m0xe000e43b[0m (0xe000e100 + 0x033b)
Interrupt Priority Register 59
 (rw) (04)  [0;32mPRI59[0m  - [07:04] -  Priority of the INT_SAI3_TX interrupt 59
</lang>
#### nvic.nvicip59
<link=p.NVIC.NVICIP59>
#### nvic.nvicip68
<link=p.NVIC.NVICIP68>
#### NVIC.NVICIP79
<link=p.NVIC.NVICIP79>
#### p.nvic.nvicip82
<link=p.NVIC.NVICIP82>
#### NVIC.NVICIP83
<link=p.NVIC.NVICIP83>
#### p.nvic.nvicip91
<link=p.NVIC.NVICIP91>
#### NVIC.NVICIP105
<link=p.NVIC.NVICIP105>
#### p.NVIC.NVICIP106
<lang=dft>
 (rw)  [1;33m0xe000e46a[0m (0xe000e100 + 0x036a)
Interrupt Priority Register 106
 (rw) (04)  [0;32mPRI106[0m  - [07:04] -  Priority of the INT_PWM1_FAULT interrupt 106
</lang>
#### p.NVIC.NVICIP111
<lang=dft>
 (rw)  [1;33m0xe000e46f[0m (0xe000e100 + 0x036f)
Interrupt Priority Register 111
 (rw) (04)  [0;32mPRI111[0m  - [07:04] -  Priority of the INT_USDHC2 interrupt 111
</lang>
#### nvic.nvicip118
<link=p.NVIC.NVICIP118>
#### p.NVIC.NVICIP120
<lang=dft>
 (rw)  [1;33m0xe000e478[0m (0xe000e100 + 0x0378)
Interrupt Priority Register 120
 (rw) (04)  [0;32mPRI120[0m  - [07:04] -  Priority of the INT_ADC_ETC_IRQ2 interrupt 120
</lang>
#### NVIC.NVICIP123
<link=p.NVIC.NVICIP123>
#### nvic.nvicip125
<link=p.NVIC.NVICIP125>
#### NVIC.NVICIP134
<link=p.NVIC.NVICIP134>
#### nvic.nvicip136
<link=p.NVIC.NVICIP136>
#### p.nvic.nvicip141
<link=p.NVIC.NVICIP141>
#### NVIC.NVICIP149
<link=p.NVIC.NVICIP149>
#### p.nvic.nvicip152
<link=p.NVIC.NVICIP152>
#### nvic.nvicip157
<link=p.NVIC.NVICIP157>
#### ldval3
<link=LDVAL3>
#### gpr7
<link=GPR7>
#### gpr16
<link=GPR16>
#### GPR20
<link=p.IOMUXC_GPR.GPR20>
#### gpr27
<link=GPR27>
#### GPR33
<link=p.IOMUXC_GPR.GPR33>
#### int_status
<link=INT_STATUS>
#### CLKPRESCALER
<link=p.EWM.CLKPRESCALER>
#### CNT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.RTWDOG.CNT
   p.GPT1.CNT
   p.GPT2.CNT
#### cv
<link=CV>
#### SDCTL
<link=p.TRNG.SDCTL>
#### scr4l
<link=SCR4L>
#### ent[7]
<link=ENT[7]>
#### ENT[9]
<link=p.TRNG.ENT[9]>
#### ENT[13]
<link=p.TRNG.ENT[13]>
#### pkrcnt98
<link=PKRCNT98>
#### pkrcntdc
<link=PKRCNTDC>
#### hplr
<link=HPLR>
#### HPTAMR
<link=p.SNVS.HPTAMR>
#### LPSRTCLR
<link=p.SNVS.LPSRTCLR>
#### lpsmclr
<link=LPSMCLR>
#### LPGPR[1]
<link=p.SNVS.LPGPR[1]>
#### LPGPR[4]
<link=p.SNVS.LPGPR[4]>
#### pll_sys
<link=PLL_SYS>
#### pll_sys_ss
<link=PLL_SYS_SS>
#### PLL_VIDEO_SET
<link=p.CCM_ANALOG.PLL_VIDEO_SET>
#### MISC0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC0
   p.PMU.MISC0
   p.XTALOSC24M.MISC0
#### misc0
<link=MISC0>
#### MISC2_CLR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC2_CLR
   p.PMU.MISC2_CLR
#### REG_CORE_SET
<link=p.PMU.REG_CORE_SET>
#### tempsense0_set
<link=TEMPSENSE0_SET>
#### USB1_VBUS_DETECT_CLR
<link=p.USB_ANALOG.USB1_VBUS_DETECT_CLR>
#### USB1_CHRG_DETECT
<link=p.USB_ANALOG.USB1_CHRG_DETECT>
#### USB1_VBUS_DETECT_STAT
<link=p.USB_ANALOG.USB1_VBUS_DETECT_STAT>
#### USB1_LOOPBACK_SET
<link=p.USB_ANALOG.USB1_LOOPBACK_SET>
#### usb2_misc_clr
<link=USB2_MISC_CLR>
#### DIGPROG
<link=p.USB_ANALOG.DIGPROG>
#### OSC_CONFIG0
<link=p.XTALOSC24M.OSC_CONFIG0>
#### osc_config1_set
<link=OSC_CONFIG1_SET>
#### tx
<link=TX>
#### DEBUG0_STATUS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.DEBUG0_STATUS
   p.USBPHY2.DEBUG0_STATUS
#### debug1_tog
<link=DEBUG1_TOG>
#### CSL7
<link=p.CSU.CSL7>
#### csl30
<link=CSL30>
#### INT_EN
<link=p.TSC.INT_EN>
#### SERQ
<link=p.DMA0.SERQ>
#### ERR
<link=p.DMA0.ERR>
#### DCHPRI5
<link=p.DMA0.DCHPRI5>
#### dchpri5
<link=DCHPRI5>
#### DCHPRI18
<link=p.DMA0.DCHPRI18>
#### dchpri18
<link=DCHPRI18>
#### DCHPRI29
<link=p.DMA0.DCHPRI29>
#### dchpri29
<link=DCHPRI29>
#### TCD0_SOFF
<link=p.DMA0.TCD0_SOFF>
#### tcd0_soff
<link=TCD0_SOFF>
#### TCD0_NBYTES_MLNO
<link=p.DMA0.TCD0_NBYTES_MLNO>
#### tcd0_doff
<link=TCD0_DOFF>
#### tcd1_doff
<link=TCD1_DOFF>
#### TCD2_BITER_ELINKYES
<link=p.DMA0.TCD2_BITER_ELINKYES>
#### tcd3_attr
<link=TCD3_ATTR>
#### TCD3_NBYTES_MLOFFNO
<link=p.DMA0.TCD3_NBYTES_MLOFFNO>
#### tcd3_slast
<link=TCD3_SLAST>
#### TCD4_CITER_ELINKYES
<link=p.DMA0.TCD4_CITER_ELINKYES>
#### TCD5_CITER_ELINKNO
<link=p.DMA0.TCD5_CITER_ELINKNO>
#### TCD6_CITER_ELINKNO
<link=p.DMA0.TCD6_CITER_ELINKNO>
#### tcd10_attr
<link=TCD10_ATTR>
#### tcd10_nbytes_mloffno
<link=TCD10_NBYTES_MLOFFNO>
#### TCD10_DLASTSGA
<link=p.DMA0.TCD10_DLASTSGA>
#### tcd11_doff
<link=TCD11_DOFF>
#### TCD11_DLASTSGA
<link=p.DMA0.TCD11_DLASTSGA>
#### tcd14_saddr
<link=TCD14_SADDR>
#### TCD14_NBYTES_MLOFFYES
<link=p.DMA0.TCD14_NBYTES_MLOFFYES>
#### TCD14_DADDR
<link=p.DMA0.TCD14_DADDR>
#### tcd15_saddr
<link=TCD15_SADDR>
#### TCD15_CSR
<link=p.DMA0.TCD15_CSR>
#### tcd15_csr
<link=TCD15_CSR>
#### tcd17_nbytes_mlno
<link=TCD17_NBYTES_MLNO>
#### tcd18_slast
<link=TCD18_SLAST>
#### TCD18_CSR
<link=p.DMA0.TCD18_CSR>
#### TCD19_NBYTES_MLOFFYES
<link=p.DMA0.TCD19_NBYTES_MLOFFYES>
#### tcd20_nbytes_mloffyes
<link=TCD20_NBYTES_MLOFFYES>
#### tcd20_daddr
<link=TCD20_DADDR>
#### TCD20_DLASTSGA
<link=p.DMA0.TCD20_DLASTSGA>
#### TCD21_SOFF
<link=p.DMA0.TCD21_SOFF>
#### TCD21_ATTR
<link=p.DMA0.TCD21_ATTR>
#### tcd21_doff
<link=TCD21_DOFF>
#### tcd22_daddr
<link=TCD22_DADDR>
#### TCD22_BITER_ELINKYES
<link=p.DMA0.TCD22_BITER_ELINKYES>
#### TCD23_CITER_ELINKNO
<link=p.DMA0.TCD23_CITER_ELINKNO>
#### tcd25_biter_elinkno
<link=TCD25_BITER_ELINKNO>
#### tcd26_doff
<link=TCD26_DOFF>
#### TCD26_BITER_ELINKNO
<link=p.DMA0.TCD26_BITER_ELINKNO>
#### tcd27_nbytes_mlno
<link=TCD27_NBYTES_MLNO>
#### tcd27_daddr
<link=TCD27_DADDR>
#### TCD29_CITER_ELINKYES
<link=p.DMA0.TCD29_CITER_ELINKYES>
#### tcd31_nbytes_mlno
<link=TCD31_NBYTES_MLNO>
#### tcd31_citer_elinkno
<link=TCD31_CITER_ELINKNO>
#### chcfg[7]
<link=CHCFG[7]>
#### CHCFG[11]
<link=p.DMAMUX.CHCFG[11]>
#### CHCFG[27]
<link=p.DMAMUX.CHCFG[27]>
#### isr2
<link=ISR2>
#### ISR4
<link=p.GPC.ISR4>
#### SRSR
<link=p.SRC.SRSR>
#### cbcmr
<link=CBCMR>
#### CSCMR2
<link=p.CCM.CSCMR2>
#### CCGR5
<link=p.CCM.CCGR5>
#### ccgr5
<link=CCGR5>
#### ROMPATCH7D
<link=p.ROMC.ROMPATCH7D>
#### rompatch4d
<link=ROMPATCH4D>
#### ROMPATCH4A
<link=p.ROMC.ROMPATCH4A>
#### WATER
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.WATER
   p.LPUART2.WATER
   p.LPUART3.WATER
   p.LPUART4.WATER
   p.LPUART5.WATER
   p.LPUART6.WATER
   p.LPUART7.WATER
   p.LPUART8.WATER
#### SHIFTERR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTERR
   p.FLEXIO2.SHIFTERR
   p.FLEXIO3.SHIFTERR
#### SHIFTCTL[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTCTL[2]
   p.FLEXIO2.SHIFTCTL[2]
   p.FLEXIO3.SHIFTCTL[2]
#### SHIFTCFG[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTCFG[0]
   p.FLEXIO2.SHIFTCFG[0]
   p.FLEXIO3.SHIFTCFG[0]
#### shiftbufnbs[2]
<link=SHIFTBUFNBS[2]>
#### shiftbufnis[1]
<link=SHIFTBUFNIS[1]>
#### DR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPIO1.DR
   p.GPIO5.DR
   p.GPIO2.DR
   p.GPIO3.DR
   p.GPIO4.DR
   p.GPIO6.DR
   p.GPIO7.DR
   p.GPIO8.DR
   p.GPIO9.DR
#### dr_set
<link=DR_SET>
#### IMASK1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.IMASK1
   p.CAN2.IMASK1
   p.CAN3.IMASK1
#### crcr
<link=CRCR>
#### dbg1
<link=DBG1>
#### RXIMR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR1
   p.CAN2.RXIMR1
#### rximr4
<link=RXIMR4>
#### rximr15
<link=RXIMR15>
#### RXIMR33
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR33
   p.CAN2.RXIMR33
#### RXIMR46
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR46
   p.CAN2.RXIMR46
#### rximr47
<link=RXIMR47>
#### RXIMR51
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR51
   p.CAN2.RXIMR51
#### rximr58
<link=RXIMR58>
#### RXIMR60
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR60
   p.CAN2.RXIMR60
#### rximr61
<link=RXIMR61>
#### cs0
<link=CS0>
#### mb0_32b_id
<link=MB0_32B_ID>
#### MB0_16B_WORD0
<link=p.CAN3.MB0_16B_WORD0>
#### mb0_32b_word0
<link=MB0_32B_WORD0>
#### mb0_64b_word1
<link=MB0_64B_WORD1>
#### mb1_16b_cs
<link=MB1_16B_CS>
#### ID2
<link=p.CAN3.ID2>
#### MB2_8B_WORD1
<link=p.CAN3.MB2_8B_WORD1>
#### MB1_32B_WORD2
<link=p.CAN3.MB1_32B_WORD2>
#### MB2_16B_WORD0
<link=p.CAN3.MB2_16B_WORD0>
#### mb1_64b_word0
<link=MB1_64B_WORD0>
#### mb2_32b_word1
<link=MB2_32B_WORD1>
#### MB4_16B_CS
<link=p.CAN3.MB4_16B_CS>
#### mb6_8b_id
<link=MB6_8B_ID>
#### MB1_64B_WORD9
<link=p.CAN3.MB1_64B_WORD9>
#### MB7_8B_WORD0
<link=p.CAN3.MB7_8B_WORD0>
#### word17
<link=WORD17>
#### mb5_16b_word1
<link=MB5_16B_WORD1>
#### MB6_16B_ID
<link=p.CAN3.MB6_16B_ID>
#### MB3_32B_WORD6
<link=p.CAN3.MB3_32B_WORD6>
#### word09
<link=WORD09>
#### MB4_32B_CS
<link=p.CAN3.MB4_32B_CS>
#### MB6_16B_WORD3
<link=p.CAN3.MB6_16B_WORD3>
#### MB2_64B_WORD5
<link=p.CAN3.MB2_64B_WORD5>
#### MB11_8B_CS
<link=p.CAN3.MB11_8B_CS>
#### mb7_16b_word0
<link=MB7_16B_WORD0>
#### mb4_32b_word4
<link=MB4_32B_WORD4>
#### word011
<link=WORD011>
#### MB2_64B_WORD13
<link=p.CAN3.MB2_64B_WORD13>
#### MB5_32B_ID
<link=p.CAN3.MB5_32B_ID>
#### mb8_16b_word2
<link=MB8_16B_WORD2>
#### mb13_8b_word0
<link=MB13_8B_WORD0>
#### MB3_64B_ID
<link=p.CAN3.MB3_64B_ID>
#### mb9_16b_id
<link=MB9_16B_ID>
#### MB9_16B_WORD1
<link=p.CAN3.MB9_16B_WORD1>
#### MB5_32B_WORD6
<link=p.CAN3.MB5_32B_WORD6>
#### WORD114
<link=p.CAN3.WORD114>
#### MB3_64B_WORD5
<link=p.CAN3.MB3_64B_WORD5>
#### mb6_32b_id
<link=MB6_32B_ID>
#### MB10_16B_WORD3
<link=p.CAN3.MB10_16B_WORD3>
#### MB3_64B_WORD11
<link=p.CAN3.MB3_64B_WORD11>
#### mb6_32b_word5
<link=MB6_32B_WORD5>
#### mb17_8b_id
<link=MB17_8B_ID>
#### MB17_8B_WORD0
<link=p.CAN3.MB17_8B_WORD0>
#### MB12_16B_ID
<link=p.CAN3.MB12_16B_ID>
#### MB18_8B_ID
<link=p.CAN3.MB18_8B_ID>
#### MB7_32B_WORD2
<link=p.CAN3.MB7_32B_WORD2>
#### cs19
<link=CS19>
#### MB19_8B_ID
<link=p.CAN3.MB19_8B_ID>
#### word119
<link=WORD119>
#### mb4_64b_word6
<link=MB4_64B_WORD6>
#### MB20_8B_WORD0
<link=p.CAN3.MB20_8B_WORD0>
#### WORD020
<link=p.CAN3.WORD020>
#### cs21
<link=CS21>
#### MB4_64B_WORD11
<link=p.CAN3.MB4_64B_WORD11>
#### MB14_16B_WORD0
<link=p.CAN3.MB14_16B_WORD0>
#### MB8_32B_WORD4
<link=p.CAN3.MB8_32B_WORD4>
#### mb14_16b_word2
<link=MB14_16B_WORD2>
#### id23
<link=ID23>
#### MB23_8B_WORD0
<link=p.CAN3.MB23_8B_WORD0>
#### mb9_32b_word3
<link=MB9_32B_WORD3>
#### MB16_16B_WORD0
<link=p.CAN3.MB16_16B_WORD0>
#### word024
<link=WORD024>
#### mb16_16b_word1
<link=MB16_16B_WORD1>
#### mb5_64b_word7
<link=MB5_64B_WORD7>
#### CS25
<link=p.CAN3.CS25>
#### MB5_64B_WORD11
<link=p.CAN3.MB5_64B_WORD11>
#### WORD125
<link=p.CAN3.WORD125>
#### mb26_8b_cs
<link=MB26_8B_CS>
#### mb26_8b_id
<link=MB26_8B_ID>
#### mb5_64b_word14
<link=MB5_64B_WORD14>
#### MB27_8B_ID
<link=p.CAN3.MB27_8B_ID>
#### MB11_32B_ID
<link=p.CAN3.MB11_32B_ID>
#### mb11_32b_word1
<link=MB11_32B_WORD1>
#### MB11_32B_WORD3
<link=p.CAN3.MB11_32B_WORD3>
#### mb19_16b_id
<link=MB19_16B_ID>
#### word128
<link=WORD128>
#### mb29_8b_cs
<link=MB29_8B_CS>
#### MB6_64B_WORD6
<link=p.CAN3.MB6_64B_WORD6>
#### mb19_16b_word2
<link=MB19_16B_WORD2>
#### MB19_16B_WORD3
<link=p.CAN3.MB19_16B_WORD3>
#### MB12_32B_ID
<link=p.CAN3.MB12_32B_ID>
#### mb31_8b_cs
<link=MB31_8B_CS>
#### mb31_8b_id
<link=MB31_8B_ID>
#### mb6_64b_word15
<link=MB6_64B_WORD15>
#### MB7_64B_WORD0
<link=p.CAN3.MB7_64B_WORD0>
#### WORD132
<link=p.CAN3.WORD132>
#### mb13_32b_word0
<link=MB13_32B_WORD0>
#### MB13_32B_WORD1
<link=p.CAN3.MB13_32B_WORD1>
#### mb14_32b_cs
<link=MB14_32B_CS>
#### MB35_8B_CS
<link=p.CAN3.MB35_8B_CS>
#### mb7_64b_word12
<link=MB7_64B_WORD12>
#### cs36
<link=CS36>
#### mb36_8b_id
<link=MB36_8B_ID>
#### MB24_16B_WORD1
<link=p.CAN3.MB24_16B_WORD1>
#### word136
<link=WORD136>
#### MB37_8B_ID
<link=p.CAN3.MB37_8B_ID>
#### MB25_16B_CS
<link=p.CAN3.MB25_16B_CS>
#### MB8_64B_WORD5
<link=p.CAN3.MB8_64B_WORD5>
#### ID38
<link=p.CAN3.ID38>
#### MB25_16B_WORD1
<link=p.CAN3.MB25_16B_WORD1>
#### mb15_32b_word5
<link=MB15_32B_WORD5>
#### MB26_16B_WORD0
<link=p.CAN3.MB26_16B_WORD0>
#### MB15_32B_WORD7
<link=p.CAN3.MB15_32B_WORD7>
#### id41
<link=ID41>
#### MB27_16B_WORD2
<link=p.CAN3.MB27_16B_WORD2>
#### mb41_8b_word0
<link=MB41_8B_WORD0>
#### MB42_8B_ID
<link=p.CAN3.MB42_8B_ID>
#### mb17_32b_id
<link=MB17_32B_ID>
#### MB9_64B_WORD7
<link=p.CAN3.MB9_64B_WORD7>
#### word142
<link=WORD142>
#### mb28_16b_word2
<link=MB28_16B_WORD2>
#### mb17_32b_word4
<link=MB17_32B_WORD4>
#### mb9_64b_word12
<link=MB9_64B_WORD12>
#### MB17_32B_WORD5
<link=p.CAN3.MB17_32B_WORD5>
#### MB44_8B_WORD0
<link=p.CAN3.MB44_8B_WORD0>
#### ID45
<link=p.CAN3.ID45>
#### mb10_64b_word0
<link=MB10_64B_WORD0>
#### CS46
<link=p.CAN3.CS46>
#### MB18_32B_WORD2
<link=p.CAN3.MB18_32B_WORD2>
#### mb18_32b_word3
<link=MB18_32B_WORD3>
#### MB31_16B_CS
<link=p.CAN3.MB31_16B_CS>
#### WORD146
<link=p.CAN3.WORD146>
#### MB10_64B_WORD7
<link=p.CAN3.MB10_64B_WORD7>
#### mb31_16b_word1
<link=MB31_16B_WORD1>
#### MB19_32B_CS
<link=p.CAN3.MB19_32B_CS>
#### word047
<link=WORD047>
#### MB31_16B_WORD3
<link=p.CAN3.MB31_16B_WORD3>
#### MB48_8B_CS
<link=p.CAN3.MB48_8B_CS>
#### MB10_64B_WORD15
<link=p.CAN3.MB10_64B_WORD15>
#### mb11_64b_cs
<link=MB11_64B_CS>
#### MB49_8B_WORD0
<link=p.CAN3.MB49_8B_WORD0>
#### mb11_64b_word0
<link=MB11_64B_WORD0>
#### mb33_16b_word0
<link=MB33_16B_WORD0>
#### MB50_8B_WORD0
<link=p.CAN3.MB50_8B_WORD0>
#### CS51
<link=p.CAN3.CS51>
#### mb34_16b_cs
<link=MB34_16B_CS>
#### WORD051
<link=p.CAN3.WORD051>
#### MB11_64B_WORD7
<link=p.CAN3.MB11_64B_WORD7>
#### mb52_8b_cs
<link=MB52_8B_CS>
#### mb20_32b_word7
<link=MB20_32B_WORD7>
#### mb21_32b_word0
<link=MB21_32B_WORD0>
#### mb11_64b_word14
<link=MB11_64B_WORD14>
#### MB12_64B_CS
<link=p.CAN3.MB12_64B_CS>
#### MB54_8B_ID
<link=p.CAN3.MB54_8B_ID>
#### cs55
<link=CS55>
#### mb22_32b_cs
<link=MB22_32B_CS>
#### MB55_8B_ID
<link=p.CAN3.MB55_8B_ID>
#### MB55_8B_WORD1
<link=p.CAN3.MB55_8B_WORD1>
#### word155
<link=WORD155>
#### id56
<link=ID56>
#### mb22_32b_word3
<link=MB22_32B_WORD3>
#### mb12_64b_word8
<link=MB12_64B_WORD8>
#### mb12_64b_word13
<link=MB12_64B_WORD13>
#### mb23_32b_word0
<link=MB23_32B_WORD0>
#### mb38_16b_word2
<link=MB38_16B_WORD2>
#### mb59_8b_word0
<link=MB59_8B_WORD0>
#### WORD159
<link=p.CAN3.WORD159>
#### mb60_8b_word1
<link=MB60_8B_WORD1>
#### mb13_64b_word8
<link=MB13_64B_WORD8>
#### MB61_8B_WORD0
<link=p.CAN3.MB61_8B_WORD0>
#### ID63
<link=p.CAN3.ID63>
#### mb63_8b_id
<link=MB63_8B_ID>
#### RXIMR[7]
<link=p.CAN3.RXIMR[7]>
#### RXIMR[12]
<link=p.CAN3.RXIMR[12]>
#### rximr[17]
<link=RXIMR[17]>
#### rximr[18]
<link=RXIMR[18]>
#### rximr[31]
<link=RXIMR[31]>
#### rximr[36]
<link=RXIMR[36]>
#### RXIMR[39]
<link=p.CAN3.RXIMR[39]>
#### rximr[40]
<link=RXIMR[40]>
#### RXIMR[48]
<link=p.CAN3.RXIMR[48]>
#### RXIMR[55]
<link=p.CAN3.RXIMR[55]>
#### RXIMR[63]
<link=p.CAN3.RXIMR[63]>
#### HR_TIME_STAMP[6]
<link=p.CAN3.HR_TIME_STAMP[6]>
#### hr_time_stamp[9]
<link=HR_TIME_STAMP[9]>
#### hr_time_stamp[32]
<link=HR_TIME_STAMP[32]>
#### HR_TIME_STAMP[35]
<link=p.CAN3.HR_TIME_STAMP[35]>
#### hr_time_stamp[37]
<link=HR_TIME_STAMP[37]>
#### HR_TIME_STAMP[59]
<link=p.CAN3.HR_TIME_STAMP[59]>
#### HR_TIME_STAMP[62]
<link=p.CAN3.HR_TIME_STAMP[62]>
#### ERFFEL[30]
<link=p.CAN3.ERFFEL[30]>
#### erffel[30]
<link=ERFFEL[30]>
#### erffel[45]
<link=ERFFEL[45]>
#### ERFFEL[46]
<link=p.CAN3.ERFFEL[46]>
#### ERFFEL[52]
<link=p.CAN3.ERFFEL[52]>
#### ERFFEL[63]
<link=p.CAN3.ERFFEL[63]>
#### erffel[63]
<link=ERFFEL[63]>
#### erffel[69]
<link=ERFFEL[69]>
#### ERFFEL[81]
<link=p.CAN3.ERFFEL[81]>
#### ERFFEL[84]
<link=p.CAN3.ERFFEL[84]>
#### erffel[84]
<link=ERFFEL[84]>
#### erffel[93]
<link=ERFFEL[93]>
#### ERFFEL[99]
<link=p.CAN3.ERFFEL[99]>
#### erffel[99]
<link=ERFFEL[99]>
#### ERFFEL[109]
<link=p.CAN3.ERFFEL[109]>
#### LOAD3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.LOAD3
   p.TMR2.LOAD3
   p.TMR3.LOAD3
   p.TMR4.LOAD3
#### load3
<link=LOAD3>
#### CNTR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CNTR2
   p.TMR2.CNTR2
   p.TMR3.CNTR2
   p.TMR4.CNTR2
#### CTRL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CTRL3
   p.TMR2.CTRL3
   p.TMR3.CTRL3
   p.TMR4.CTRL3
#### SCTRL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.SCTRL1
   p.TMR2.SCTRL1
   p.TMR3.SCTRL1
   p.TMR4.SCTRL1
#### timing
<link=TIMING>
#### read_fuse_data
<link=READ_FUSE_DATA>
#### SCS_SET
<link=p.OCOTP.SCS_SET>
#### scs_set
<link=SCS_SET>
#### crc_value
<link=CRC_VALUE>
#### cfg6
<link=CFG6>
#### mem4
<link=MEM4>
#### ana0
<link=ANA0>
#### ANA2
<link=p.OCOTP.ANA2>
#### gp1
<link=GP1>
#### SW_GP23
<link=p.OCOTP.SW_GP23>
#### ROM_PATCH6
<link=p.OCOTP.ROM_PATCH6>
#### rom_patch6
<link=ROM_PATCH6>
#### gp40
<link=GP40>
#### SW_MUX_CTL_PAD_GPIO_EMC_26
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_26>
#### sw_mux_ctl_pad_gpio_emc_26
<link=SW_MUX_CTL_PAD_GPIO_EMC_26>
#### SW_MUX_CTL_PAD_GPIO_EMC_35
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_35>
#### sw_mux_ctl_pad_gpio_emc_35
<link=SW_MUX_CTL_PAD_GPIO_EMC_35>
#### sw_mux_ctl_pad_gpio_ad_b0_01
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_01>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_05>
#### sw_mux_ctl_pad_gpio_ad_b0_12
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_12>
#### sw_mux_ctl_pad_gpio_ad_b1_06
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_06>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_09>
#### sw_mux_ctl_pad_gpio_ad_b1_15
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_15>
#### sw_mux_ctl_pad_gpio_b0_04
<link=SW_MUX_CTL_PAD_GPIO_B0_04>
#### SW_MUX_CTL_PAD_GPIO_B0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_05>
#### SW_MUX_CTL_PAD_GPIO_B0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_12>
#### sw_mux_ctl_pad_gpio_b0_13
<link=SW_MUX_CTL_PAD_GPIO_B0_13>
#### SW_MUX_CTL_PAD_GPIO_B1_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_11>
#### sw_mux_ctl_pad_gpio_b1_11
<link=SW_MUX_CTL_PAD_GPIO_B1_11>
#### sw_mux_ctl_pad_gpio_sd_b0_01
<link=SW_MUX_CTL_PAD_GPIO_SD_B0_01>
#### SW_MUX_CTL_PAD_GPIO_SD_B0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_04>
#### sw_pad_ctl_pad_gpio_emc_05
<link=SW_PAD_CTL_PAD_GPIO_EMC_05>
#### SW_PAD_CTL_PAD_GPIO_EMC_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_10>
#### SW_PAD_CTL_PAD_GPIO_EMC_36
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_36>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_00>
#### sw_pad_ctl_pad_gpio_ad_b1_06
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_06>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_08>
#### SW_PAD_CTL_PAD_GPIO_B1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_01>
#### sw_pad_ctl_pad_gpio_b1_03
<link=SW_PAD_CTL_PAD_GPIO_B1_03>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_03>
#### anatop_usb_otg1_id_select_input
<link=ANATOP_USB_OTG1_ID_SELECT_INPUT>
#### csi_data04_select_input
<link=CSI_DATA04_SELECT_INPUT>
#### CSI_DATA07_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA07_SELECT_INPUT>
#### ENET0_RXDATA_SELECT_INPUT
<link=p.IOMUXC.ENET0_RXDATA_SELECT_INPUT>
#### FLEXPWM1_PWMB0_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMB0_SELECT_INPUT>
#### FLEXPWM1_PWMB1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMB1_SELECT_INPUT>
#### flexpwm4_pwma1_select_input
<link=FLEXPWM4_PWMA1_SELECT_INPUT>
#### FLEXSPIA_DATA0_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_DATA0_SELECT_INPUT>
#### FLEXSPIA_DATA2_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_DATA2_SELECT_INPUT>
#### lpi2c1_sda_select_input
<link=LPI2C1_SDA_SELECT_INPUT>
#### LPI2C3_SCL_SELECT_INPUT
<link=p.IOMUXC.LPI2C3_SCL_SELECT_INPUT>
#### lpuart2_tx_select_input
<link=LPUART2_TX_SELECT_INPUT>
#### LPUART3_RX_SELECT_INPUT
<link=p.IOMUXC.LPUART3_RX_SELECT_INPUT>
#### lpuart5_tx_select_input
<link=LPUART5_TX_SELECT_INPUT>
#### qtimer2_timer3_select_input
<link=QTIMER2_TIMER3_SELECT_INPUT>
#### qtimer3_timer0_select_input
<link=QTIMER3_TIMER0_SELECT_INPUT>
#### USDHC2_CLK_SELECT_INPUT
<link=p.IOMUXC.USDHC2_CLK_SELECT_INPUT>
#### XBAR1_IN20_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN20_SELECT_INPUT>
#### XBAR1_IN15_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN15_SELECT_INPUT>
#### sw_mux_ctl_pad_gpio_spi_b0_00
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_00>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_12>
#### sw_mux_ctl_pad_gpio_spi_b0_13
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_13>
#### sw_mux_ctl_pad_gpio_spi_b1_07
<link=SW_MUX_CTL_PAD_GPIO_SPI_B1_07>
#### SW_PAD_CTL_PAD_GPIO_SPI_B0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_03>
#### sw_pad_ctl_pad_gpio_spi_b0_05
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_05>
#### SW_PAD_CTL_PAD_GPIO_SPI_B1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_05>
#### ENET2_IPP_IND_MAC0_TXCLK_SELECT_INPUT
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_TXCLK_SELECT_INPUT>
#### gpt2_ipp_ind_clkin_select_input
<link=GPT2_IPP_IND_CLKIN_SELECT_INPUT>
#### ahbcr
<link=AHBCR>
#### ahbspndsts
<link=AHBSPNDSTS>
#### RFDR[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[0]
   p.FLEXSPI2.RFDR[0]
#### RFDR[13]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[13]
   p.FLEXSPI2.RFDR[13]
#### RFDR[19]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[19]
   p.FLEXSPI2.RFDR[19]
#### TFDR[22]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[22]
   p.FLEXSPI2.TFDR[22]
#### tfdr[22]
<link=TFDR[22]>
#### lut[17]
<link=LUT[17]>
#### lut[21]
<link=LUT[21]>
#### lut[26]
<link=LUT[26]>
#### lut[31]
<link=LUT[31]>
#### LUT[53]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[53]
   p.FLEXSPI2.LUT[53]
#### LUT[62]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[62]
   p.FLEXSPI2.LUT[62]
#### PS_CLRKEYLOW
<link=p.PXP.PS_CLRKEYLOW>
#### as_ctrl
<link=AS_CTRL>
#### BM_ERROR_STAT
<link=p.LCDIF.BM_ERROR_STAT>
#### pigeonctrl2_clr
<link=PIGEONCTRL2_CLR>
#### PIGEON_0_0
<link=p.LCDIF.PIGEON_0_0>
#### PIGEON_2_2
<link=p.LCDIF.PIGEON_2_2>
#### pigeon_6_0
<link=PIGEON_6_0>
#### pigeon_10_2
<link=PIGEON_10_2>
#### CSIDMASA_STATFIFO
<link=p.CSI.CSIDMASA_STATFIFO>
#### ds_addr
<link=DS_ADDR>
#### INT_SIGNAL_EN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.INT_SIGNAL_EN
   p.USDHC2.INT_SIGNAL_EN
#### dll_ctrl
<link=DLL_CTRL>
#### tuning_ctrl
<link=TUNING_CTRL>
#### TDAR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TDAR
   p.ENET2.TDAR
#### TCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TCR
   p.ENET2.TCR
   p.LPSPI1.TCR
   p.LPSPI2.TCR
   p.LPSPI3.TCR
   p.LPSPI4.TCR
#### OPD
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.OPD
   p.ENET2.OPD
#### TSEM
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TSEM
   p.ENET2.TSEM
#### tsem
<link=TSEM>
#### RMON_R_MC_PKT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_MC_PKT
   p.ENET2.RMON_R_MC_PKT
#### rmon_r_p65to127
<link=RMON_R_P65TO127>
#### rmon_r_p128to255
<link=RMON_R_P128TO255>
#### ieee_r_frame_ok
<link=IEEE_R_FRAME_OK>
#### IEEE_R_FDXFC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_R_FDXFC
   p.ENET2.IEEE_R_FDXFC
#### ATPER
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.ATPER
   p.ENET2.ATPER
#### atinc
<link=ATINC>
#### usbsts
<link=USBSTS>
#### usbintr
<link=USBINTR>
#### endptnaken
<link=ENDPTNAKEN>
#### ENDPTCTRL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTCTRL3
   p.USB2.ENDPTCTRL3
#### endptctrl5
<link=ENDPTCTRL5>
#### br6
<link=BR6>
#### DLLCR
<link=p.SEMC.DLLCR>
#### nandcr1
<link=NANDCR1>
#### norcr1
<link=NORCR1>
#### sramcr1
<link=SRAMCR1>
#### SRAMCR2
<link=p.SEMC.SRAMCR2>
#### STS5
<link=p.SEMC.STS5>
#### sts7
<link=STS7>
#### KEY
<link=p.DCP.KEY>
#### PACKET6
<link=p.DCP.PACKET6>
#### ch0stat_tog
<link=CH0STAT_TOG>
#### CH2STAT
<link=p.DCP.CH2STAT>
#### ch3stat_clr
<link=CH3STAT_CLR>
#### ch3stat_tog
<link=CH3STAT_TOG>
#### ch3opts_tog
<link=CH3OPTS_TOG>
#### pagetable
<link=PAGETABLE>
#### srcd
<link=SRCD>
#### SRR
<link=p.SPDIF.SRR>
#### tdr[0]
<link=TDR[0]>
#### rcr4
<link=RCR4>
#### RDR[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RDR[0]
   p.SAI2.RDR[0]
   p.SAI3.RDR[0]
#### cfgr1
<link=CFGR1>
#### rsr
<link=RSR>
#### DONE2_ERR_IRQ
<link=p.ADC_ETC.DONE2_ERR_IRQ>
#### TRIG3_CHAIN_5_4
<link=p.ADC_ETC.TRIG3_CHAIN_5_4>
#### trig4_ctrl
<link=TRIG4_CTRL>
#### trig4_result_7_6
<link=TRIG4_RESULT_7_6>
#### TRIG5_CHAIN_1_0
<link=p.ADC_ETC.TRIG5_CHAIN_1_0>
#### TRIG5_CHAIN_7_6
<link=p.ADC_ETC.TRIG5_CHAIN_7_6>
#### trig6_chain_1_0
<link=TRIG6_CHAIN_1_0>
#### trig7_counter
<link=TRIG7_COUNTER>
#### TRIG7_CHAIN_7_6
<link=p.ADC_ETC.TRIG7_CHAIN_7_6>
#### trig7_result_3_2
<link=TRIG7_RESULT_3_2>
#### BFCRT231
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AOI1.BFCRT231
   p.AOI2.BFCRT231
#### sel7
<link=SEL7>
#### sel13
<link=SEL13>
#### SEL18
<link=p.XBARA1.SEL18>
#### sel22
<link=SEL22>
#### sel35
<link=SEL35>
#### sel40
<link=SEL40>
#### SEL46
<link=p.XBARA1.SEL46>
#### SEL55
<link=p.XBARA1.SEL55>
#### SEL60
<link=p.XBARA1.SEL60>
#### LMOD
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.LMOD
   p.ENC2.LMOD
   p.ENC3.LMOD
   p.ENC4.LMOD
#### SM0INIT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0INIT
   p.PWM2.SM0INIT
   p.PWM3.SM0INIT
   p.PWM4.SM0INIT
#### sm0init
<link=SM0INIT>
#### sm0ctrl
<link=SM0CTRL>
#### SM0FRACVAL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0FRACVAL3
   p.PWM2.SM0FRACVAL3
   p.PWM3.SM0FRACVAL3
   p.PWM4.SM0FRACVAL3
#### SM0FRCTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0FRCTRL
   p.PWM2.SM0FRCTRL
   p.PWM3.SM0FRCTRL
   p.PWM4.SM0FRCTRL
#### sm0dtcnt1
<link=SM0DTCNT1>
#### SM0CVAL4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CVAL4
   p.PWM2.SM0CVAL4
   p.PWM3.SM0CVAL4
   p.PWM4.SM0CVAL4
#### sm0cval5
<link=SM0CVAL5>
#### sm1init
<link=SM1INIT>
#### sm1ctrl2
<link=SM1CTRL2>
#### sm1fracval3
<link=SM1FRACVAL3>
#### SM1DMAEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1DMAEN
   p.PWM2.SM1DMAEN
   p.PWM3.SM1DMAEN
   p.PWM4.SM1DMAEN
#### sm1tctrl
<link=SM1TCTRL>
#### sm1dtcnt0
<link=SM1DTCNT0>
#### sm1cval2
<link=SM1CVAL2>
#### SM1CVAL4CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CVAL4CYC
   p.PWM2.SM1CVAL4CYC
   p.PWM3.SM1CVAL4CYC
   p.PWM4.SM1CVAL4CYC
#### SM2VAL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2VAL1
   p.PWM2.SM2VAL1
   p.PWM3.SM2VAL1
   p.PWM4.SM2VAL1
#### SM2FRACVAL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2FRACVAL2
   p.PWM2.SM2FRACVAL2
   p.PWM3.SM2FRACVAL2
   p.PWM4.SM2FRACVAL2
#### SM2DTCNT1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2DTCNT1
   p.PWM2.SM2DTCNT1
   p.PWM3.SM2DTCNT1
   p.PWM4.SM2DTCNT1
#### SM2CAPTCOMPB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CAPTCOMPB
   p.PWM2.SM2CAPTCOMPB
   p.PWM3.SM2CAPTCOMPB
   p.PWM4.SM2CAPTCOMPB
#### SM2CAPTCTRLX
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CAPTCTRLX
   p.PWM2.SM2CAPTCTRLX
   p.PWM3.SM2CAPTCTRLX
   p.PWM4.SM2CAPTCTRLX
#### sm2cval0cyc
<link=SM2CVAL0CYC>
#### SM3CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CTRL
   p.PWM2.SM3CTRL
   p.PWM3.SM3CTRL
   p.PWM4.SM3CTRL
#### SM3VAL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3VAL0
   p.PWM2.SM3VAL0
   p.PWM3.SM3VAL0
   p.PWM4.SM3VAL0
#### SM3DISMAP0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3DISMAP0
   p.PWM2.SM3DISMAP0
   p.PWM3.SM3DISMAP0
   p.PWM4.SM3DISMAP0
#### sm3dismap0
<link=SM3DISMAP0>
#### sm3captcompx
<link=SM3CAPTCOMPX>
#### SM3CVAL4CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL4CYC
   p.PWM2.SM3CVAL4CYC
   p.PWM3.SM3CVAL4CYC
   p.PWM4.SM3CVAL4CYC
#### sm3cval5
<link=SM3CVAL5>
#### swcout
<link=SWCOUT>
#### FFILT0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.FFILT0
   p.PWM2.FFILT0
   p.PWM3.FFILT0
   p.PWM4.FFILT0
#### aes_key0_w1
<link=AES_KEY0_W1>
#### CTR_NONCE0_W2
<link=p.BEE.CTR_NONCE0_W2>
#### MIER
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MIER
   p.LPI2C2.MIER
   p.LPI2C3.MIER
   p.LPI2C4.MIER
#### mier
<link=MIER>
#### mcfgr2
<link=MCFGR2>
#### srdr
<link=SRDR>
#### HFSR
<link=p.SystemControl.HFSR>
#### id_pfr1
<link=ID_PFR1>
#### DCCMVAC
<link=p.SystemControl.DCCMVAC>
#### CM7_ABFSR
<link=p.SystemControl.CM7_ABFSR>
#### NVICISER0
<link=p.NVIC.NVICISER0>
#### NVICIP8
<link=p.NVIC.NVICIP8>
#### nvicip16
<link=NVICIP16>
#### NVICIP25
<link=p.NVIC.NVICIP25>
#### NVICIP32
<link=p.NVIC.NVICIP32>
#### nvicip38
<link=NVICIP38>
#### nvicip46
<link=NVICIP46>
#### NVICIP50
<link=p.NVIC.NVICIP50>
#### nvicip60
<link=NVICIP60>
#### NVICIP69
<link=p.NVIC.NVICIP69>
#### nvicip77
<link=NVICIP77>
#### nvicip82
<link=NVICIP82>
#### NVICIP88
<link=p.NVIC.NVICIP88>
#### NVICIP94
<link=p.NVIC.NVICIP94>
#### NVICIP107
<link=p.NVIC.NVICIP107>
#### nvicip112
<link=NVICIP112>
#### nvicip123
<link=NVICIP123>
#### NVICIP129
<link=p.NVIC.NVICIP129>
#### NVICIP133
<link=p.NVIC.NVICIP133>
#### nvicip134
<link=NVICIP134>
#### nvicip141
<link=NVICIP141>
#### NVICIP151
<link=p.NVIC.NVICIP151>
#### ?
<link=help>

