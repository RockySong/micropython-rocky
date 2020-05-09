#### welcome
<lang=chs>
欢迎使用Micropython! 完整文档位于 http://docs.micropython.org
输入"help('modules')"以查看内建的Python模块
输入"help('?')"以查看文档系统的使用方法
常用控制台命令:
+ Ctrl-A : 在空行上，进入raw REPL模式
+ Ctrl-B : 在空行上，进入正常的REPL模式
+ Ctrl-C : 中止一个正在运行的脚本
+ Ctrl-D : 在空行上，退出或软复位
+ Ctrl-E : 在空行上，进入粘贴模式
**input help('?','eng') to see English version later**
</lang>
<lang=dft>
Welcome to MicroPython!For online docs please visit http://docs.micropython.org/\n
type "help('modules') to list the built-in Python modules
type "help('?') to see how to use this documentation system 
Control commands:
+ CTRL-A        -- on a blank line, enter raw REPL mode
+ CTRL-B        -- on a blank line, enter normal REPL mode
+ CTRL-C        -- interrupt a running program
+ CTRL-D        -- on a blank line, exit or do a soft reset
+ CTRL-E        -- on a blank line, enter paste mode
** 输入help('?','chs') 以在后续查看中文版
</lang>

#### p.AIPSTZ1.OPACR
<lang=dft>
 (rw)  [1;33m0x4007c040[0m (0x4007c000 + 0x0040)
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
#### p.aipstz1.opacr2
<link=p.AIPSTZ1.OPACR2>
#### AIPSTZ2.MPR
<link=p.AIPSTZ2.MPR>
#### AIPSTZ2.OPACR1
<link=p.AIPSTZ2.OPACR1>
#### p.aipstz3.opacr4
<link=p.AIPSTZ3.OPACR4>
#### DCDC.REG1
<link=p.DCDC.REG1>
#### p.pit
<link=p.PIT>
#### p.pit.cval0
<link=p.PIT.CVAL0>
#### p.pit.tctrl0
<link=p.PIT.TCTRL0>
#### p.PIT.TFLG2
<lang=dft>
 (rw)  [1;33m0x4008412c[0m (0x40084000 + 0x012c)
Timer Flag Register
 (rw) (01)  [0;32mTIF[0m  - [00:00] -  Timer Interrupt Flag
      0 - TIF_0 :
         Timeout has not yet occurred.
      0x1 - TIF_1 :
         Timeout has occurred.
</lang>
#### CMP1.CR0
<link=p.CMP1.CR0>
#### p.cmp2.muxcr
<link=p.CMP2.MUXCR>
#### p.CMP3.CR0
<lang=dft>
 (rw)  [1;33m0x40094010[0m (0x40094010 + 0x0000)
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
#### CMP3.DACCR
<link=p.CMP3.DACCR>
#### iomuxc_snvs_gpr.gpr1
<link=p.IOMUXC_SNVS_GPR.GPR1>
#### IOMUXC_SNVS_GPR.GPR2
<link=p.IOMUXC_SNVS_GPR.GPR2>
#### p.iomuxc_snvs.sw_pad_ctl_pad_test_mode
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_TEST_MODE>
#### p.iomuxc_snvs.sw_pad_ctl_pad_onoff
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_ONOFF>
#### iomuxc_snvs.sw_pad_ctl_pad_wakeup
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_WAKEUP>
#### iomuxc_snvs.sw_pad_ctl_pad_pmic_on_req
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_PMIC_ON_REQ>
#### p.iomuxc_gpr.gpr5
<link=p.IOMUXC_GPR.GPR5>
#### IOMUXC_GPR.GPR9
<link=p.IOMUXC_GPR.GPR9>
#### iomuxc_gpr.gpr10
<link=p.IOMUXC_GPR.GPR10>
#### p.IOMUXC_GPR.GPR11
<lang=dft>
 (rw)  [1;33m0x400ac02c[0m (0x400ac000 + 0x002c)
GPR11 General Purpose Register
 (rw) (02)  [0;32mM7_APC_AC_R0_CTRL[0m  - [01:00] -  Access control of memory region-0
      0 - M7_APC_AC_R0_CTRL_0 :
         No access protection
      0x1 - M7_APC_AC_R0_CTRL_1 :
         M7 debug protection enabled
      0x2 - M7_APC_AC_R0_CTRL_2 :
         FlexSPI access protection
      0x3 - M7_APC_AC_R0_CTRL_3 :
         Both M7 debug and FlexSPI access are protected
 (rw) (02)  [0;32mM7_APC_AC_R1_CTRL[0m  - [03:02] -  Access control of memory region-1
      0 - M7_APC_AC_R1_CTRL_0 :
         No access protection
      0x1 - M7_APC_AC_R1_CTRL_1 :
         M7 debug protection enabled
      0x2 - M7_APC_AC_R1_CTRL_2 :
         FlexSPI access protection
      0x3 - M7_APC_AC_R1_CTRL_3 :
         Both M7 debug and FlexSPI access are protected
 (rw) (02)  [0;32mM7_APC_AC_R2_CTRL[0m  - [05:04] -  Access control of memory region-2
      0 - M7_APC_AC_R2_CTRL_0 :
         No access protection
      0x1 - M7_APC_AC_R2_CTRL_1 :
         M7 debug protection enabled
      0x2 - M7_APC_AC_R2_CTRL_2 :
         FlexSPI access protection
      0x3 - M7_APC_AC_R2_CTRL_3 :
         Both M7 debug and FlexSPI access are protected
 (rw) (02)  [0;32mM7_APC_AC_R3_CTRL[0m  - [07:06] -  Access control of memory region-3
      0 - M7_APC_AC_R3_CTRL_0 :
         No access protection
      0x1 - M7_APC_AC_R3_CTRL_1 :
         M7 debug protection enabled
      0x2 - M7_APC_AC_R3_CTRL_2 :
         FlexSPI access protection
      0x3 - M7_APC_AC_R3_CTRL_3 :
         Both M7 debug and FlexSPI access are protected
 (rw) (04)  [0;32mBEE_DE_RX_EN[0m  - [11:08] -  BEE data decryption of memory region-n (n = 3 to 0)
</lang>
#### IOMUXC_GPR.GPR13
<link=p.IOMUXC_GPR.GPR13>
#### p.iomuxc_gpr.gpr14
<link=p.IOMUXC_GPR.GPR14>
#### iomuxc_gpr.gpr21
<link=p.IOMUXC_GPR.GPR21>
#### p.IOMUXC_GPR.GPR24
<lang=dft>
 (rw)  [1;33m0x400ac060[0m (0x400ac000 + 0x0060)
GPR24 General Purpose Register
 (rw) (01)  [0;32mLOCK_M7_APC_AC_R3_BOT[0m  - [00:00] -  lock M7_APC_AC_R3_BOT field for changes
      0 - LOCK_M7_APC_AC_R3_BOT_0 :
         Register field [31:1] is not locked
      0x1 - LOCK_M7_APC_AC_R3_BOT_1 :
         Register field [31:1] is locked (read access only)
 (rw) (29)  [0;32mM7_APC_AC_R3_BOT[0m  - [31:03] -  APC end address of memory region-3
</lang>
#### IOMUXC_GPR.GPR26
<link=p.IOMUXC_GPR.GPR26>
#### p.iomuxc_gpr.gpr29
<link=p.IOMUXC_GPR.GPR29>
#### flexram.int_stat_en
<link=p.FLEXRAM.INT_STAT_EN>
#### EWM.CTRL
<link=p.EWM.CTRL>
#### p.EWM.SERV
<lang=dft>
 (rw)  [1;33m0x400b4001[0m (0x400b4000 + 0x0001)
Service Register
 (rw) (08)  [0;32mSERVICE[0m  - [07:00] -  SERVICE
</lang>
#### p.ewm.cmph
<link=p.EWM.CMPH>
#### p.EWM.CLKCTRL
<lang=dft>
 (rw)  [1;33m0x400b4004[0m (0x400b4000 + 0x0004)
Clock Control Register
 (read-writeOnce) (02)  [0;32mCLKSEL[0m  - [01:00] -  CLKSEL
</lang>
#### p.wdog2
<link=p.WDOG2>
#### WDOG2.WSR
<link=p.WDOG2.WSR>
#### ADC1.HS
<link=p.ADC1.HS>
#### adc1.r0
<link=p.ADC1.R0>
#### p.adc1.r4
<link=p.ADC1.R4>
#### p.ADC1.GS
<lang=dft>
 (rw)  [1;33m0x400c404c[0m (0x400c4000 + 0x004c)
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
#### ADC1.CAL
<link=p.ADC1.CAL>
#### p.adc2.hc1
<link=p.ADC2.HC1>
#### adc2.hc1
<link=p.ADC2.HC1>
#### adc2.r0
<link=p.ADC2.R0>
#### ADC2.R4
<link=p.ADC2.R4>
#### p.ADC2.R6
<lang=dft>
 (ro)  [1;33m0x400c803c[0m (0x400c8000 + 0x003c)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### adc2.cfg
<link=p.ADC2.CFG>
#### ADC2.GS
<link=p.ADC2.GS>
#### p.ADC2.CV
<lang=dft>
 (rw)  [1;33m0x400c8050[0m (0x400c8000 + 0x0050)
Compare value register
 (rw) (12)  [0;32mCV1[0m  - [11:00] -  Compare Value 1
 (rw) (12)  [0;32mCV2[0m  - [27:16] -  Compare Value 2
</lang>
#### p.adc2.ofs
<link=p.ADC2.OFS>
#### ADC2.CAL
<link=p.ADC2.CAL>
#### p.trng.scmisc
<link=p.TRNG.SCMISC>
#### TRNG.SBLIM
<link=p.TRNG.SBLIM>
#### trng.totsam
<link=p.TRNG.TOTSAM>
#### p.TRNG.SCR6PC
<lang=dft>
 (ro)  [1;33m0x400cc038[0m (0x400cc000 + 0x0038)
Statistical Check Run Length 6+ Count Register
 (ro) (11)  [0;32mR6P_0_CT[0m  - [10:00] -  Runs of Zero, Length 6+ Count
 (ro) (11)  [0;32mR6P_1_CT[0m  - [26:16] -  Runs of One, Length 6+ Count
</lang>
#### TRNG.ENT[0]
<link=p.TRNG.ENT[0]>
#### p.TRNG.ENT[2]
<lang=dft>
 (ro)  [1;33m0x400cc048[0m (0x400cc000 + 0x0048)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### trng.ent[2]
<link=p.TRNG.ENT[2]>
#### TRNG.ENT[7]
<link=p.TRNG.ENT[7]>
#### p.trng.ent[13]
<link=p.TRNG.ENT[13]>
#### trng.ent[14]
<link=p.TRNG.ENT[14]>
#### trng.pkrcntdc
<link=p.TRNG.PKRCNTDC>
#### p.trng.int_ctrl
<link=p.TRNG.INT_CTRL>
#### trng.vid2
<link=p.TRNG.VID2>
#### p.SNVS.HPSR
<lang=dft>
 (rw)  [1;33m0x400d4014[0m (0x400d4000 + 0x0014)
SNVS_HP Status Register
 (rw) (01)  [0;32mHPTA[0m  - [00:00] -  HP Time Alarm Indicates that the HP Time Alarm has occurred since this bit was 
 last cleared.
      0 - HPTA_0 :
         No time alarm interrupt occurred.
      0x1 - HPTA_1 :
         A time alarm interrupt occurred.
 (rw) (01)  [0;32mPI[0m  - [01:01] -  Periodic Interrupt Indicates that periodic interrupt has occurred since this bi
 t was last cleared.
      0 - PI_0 :
         No periodic interrupt occurred.
      0x1 - PI_1 :
         A periodic interrupt occurred.
 (ro) (01)  [0;32mLPDIS[0m  - [04:04] -  Low Power Disable If 1, the low power section has been disabled by means of an 
 input signal to SNVS
 (ro) (01)  [0;32mBTN[0m  - [06:06] -  Button Value of the BTN input
 (rw) (01)  [0;32mBI[0m  - [07:07] -  Button Interrupt Signal ipi_snvs_btn_int_b was asserted.
 (ro) (04)  [0;32mSSM_STATE[0m  - [11:08] -  System Security Monitor State This field contains the encoded state of the SSM'
 s state machine
      0 - SSM_STATE_0 :
         Init
      0x1 - SSM_STATE_1 :
         Hard Fail
      0x3 - SSM_STATE_3 :
         Soft Fail
      0x8 - SSM_STATE_8 :
         Init Intermediate (transition state between Init and Check - SSM stays 
         in this state only one clock cycle)
      0x9 - SSM_STATE_9 :
         Check
      0xB - SSM_STATE_11 :
         Non-Secure
      0xD - SSM_STATE_13 :
         Trusted
      0xF - SSM_STATE_15 :
         Secure
 (ro) (04)  [0;32mSECURITY_CONFIG[0m  - [15:12] -  Security Configuration This field reflects the settings of the sys_secure_boot 
 input and the three security configuration inputs to SNVS
      0x8 - FAB_CONFIG :
         FAB configuration
      0x3 - OPEN_CONFIG :
         OPEN configuration
      #x1xx - FIELD_RETURN_CONFIG :
         FIELD RETURN configuration
      0xB - CLOSED_CONFIG :
         CLOSED configuration
 (ro) (09)  [0;32mOTPMK_SYNDROME[0m  - [24:16] -  One Time Programmable Master Key Syndrome In the case of a single-bit error, th
 e eight lower bits of this value indicate the bit number of error location
 (ro) (01)  [0;32mOTPMK_ZERO[0m  - [27:27] -  One Time Programmable Master Key is Equal to Zero
      0 - OTPMK_ZERO_0 :
         The OTPMK is not zero.
      0x1 - OTPMK_ZERO_1 :
         The OTPMK is zero.
 (ro) (01)  [0;32mZMK_ZERO[0m  - [31:31] -  Zeroizable Master Key is Equal to Zero
      0 - ZMK_ZERO_0 :
         The ZMK is not zero.
      0x1 - ZMK_ZERO_1 :
         The ZMK is zero.
</lang>
#### snvs.hprtclr
<link=p.SNVS.HPRTCLR>
#### p.snvs.lplr
<link=p.SNVS.LPLR>
#### SNVS.LPCR
<link=p.SNVS.LPCR>
#### p.snvs.lpsvcr
<link=p.SNVS.LPSVCR>
#### p.snvs.lptdcr
<link=p.SNVS.LPTDCR>
#### snvs.lpsmcmr
<link=p.SNVS.LPSMCMR>
#### p.SNVS.LPZMKR[0]
<lang=dft>
 (rw)  [1;33m0x400d406c[0m (0x400d4000 + 0x006c)
SNVS_LP Zeroizable Master Key Register
 (rw) (32)  [0;32mZMK[0m  - [31:00] -  Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit Z
 MK value
</lang>
#### p.snvs.lpzmkr[0]
<link=p.SNVS.LPZMKR[0]>
#### p.SNVS.LPGPR_ALIAS[0]
<lang=dft>
 (rw)  [1;33m0x400d4090[0m (0x400d4000 + 0x0090)
SNVS_LP General Purpose Registers 0 .. 3
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### SNVS.LPGPR[0]
<link=p.SNVS.LPGPR[0]>
#### p.SNVS.LPGPR[3]
<lang=dft>
 (rw)  [1;33m0x400d410c[0m (0x400d4000 + 0x010c)
SNVS_LP General Purpose Registers 0 .. 7
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### p.CCM_ANALOG.PLL_USB1_SET
<lang=dft>
 (rw)  [1;33m0x400d8014[0m (0x400d8000 + 0x0014)
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
#### p.CCM_ANALOG.PLL_USB1_CLR
<lang=dft>
 (rw)  [1;33m0x400d8018[0m (0x400d8000 + 0x0018)
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
#### p.CCM_ANALOG.PLL_USB1_TOG
<lang=dft>
 (rw)  [1;33m0x400d801c[0m (0x400d8000 + 0x001c)
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
#### p.ccm_analog.pfd_480_tog
<link=p.CCM_ANALOG.PFD_480_TOG>
#### p.ccm_analog.pfd_528_clr
<link=p.CCM_ANALOG.PFD_528_CLR>
#### p.ccm_analog.pfd_528_tog
<link=p.CCM_ANALOG.PFD_528_TOG>
#### ccm_analog.misc0_clr
<link=p.CCM_ANALOG.MISC0_CLR>
#### CCM_ANALOG.MISC0_CLR
<link=p.CCM_ANALOG.MISC0_CLR>
#### ccm_analog.misc0_tog
<link=p.CCM_ANALOG.MISC0_TOG>
#### p.CCM_ANALOG.MISC1
<lang=dft>
 (rw)  [1;33m0x400d8160[0m (0x400d8000 + 0x0160)
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
#### pmu.reg_1p1_clr
<link=p.PMU.REG_1P1_CLR>
#### p.PMU.REG_3P0
<lang=dft>
 (rw)  [1;33m0x400d8120[0m (0x400d8000 + 0x0120)
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
#### p.PMU.REG_2P5_SET
<lang=dft>
 (rw)  [1;33m0x400d8134[0m (0x400d8000 + 0x0134)
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
#### p.pmu.reg_2p5_clr
<link=p.PMU.REG_2P5_CLR>
#### p.PMU.MISC2_TOG
<lang=dft>
 (rw)  [1;33m0x400d817c[0m (0x400d8000 + 0x017c)
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
#### p.tempmon.tempsense1
<link=p.TEMPMON.TEMPSENSE1>
#### usb_analog.usb1_chrg_detect_set
<link=p.USB_ANALOG.USB1_CHRG_DETECT_SET>
#### USB_ANALOG.USB1_CHRG_DETECT_SET
<link=p.USB_ANALOG.USB1_CHRG_DETECT_SET>
#### p.USB_ANALOG.USB1_CHRG_DETECT_STAT
<lang=dft>
 (ro)  [1;33m0x400d81d0[0m (0x400d8000 + 0x01d0)
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
#### p.USB_ANALOG.USB1_MISC_CLR
<lang=dft>
 (rw)  [1;33m0x400d81f8[0m (0x400d8000 + 0x01f8)
USB Misc Register
 (rw) (01)  [0;32mHS_USE_EXTERNAL_R[0m  - [00:00] -  Use external resistor to generate the current bias for the high speed transmitt
 er
 (rw) (01)  [0;32mEN_DEGLITCH[0m  - [01:01] -  Enable the deglitching circuit of the USB PLL output.
 (rw) (01)  [0;32mEN_CLK_UTMI[0m  - [30:30] -  Enables the clk to the UTMI block.
</lang>
#### USB_ANALOG.USB1_MISC_CLR
<link=p.USB_ANALOG.USB1_MISC_CLR>
#### p.USB_ANALOG.USB1_MISC_TOG
<lang=dft>
 (rw)  [1;33m0x400d81fc[0m (0x400d8000 + 0x01fc)
USB Misc Register
 (rw) (01)  [0;32mHS_USE_EXTERNAL_R[0m  - [00:00] -  Use external resistor to generate the current bias for the high speed transmitt
 er
 (rw) (01)  [0;32mEN_DEGLITCH[0m  - [01:01] -  Enable the deglitching circuit of the USB PLL output.
 (rw) (01)  [0;32mEN_CLK_UTMI[0m  - [30:30] -  Enables the clk to the UTMI block.
</lang>
#### USB_ANALOG.USB2_VBUS_DETECT
<link=p.USB_ANALOG.USB2_VBUS_DETECT>
#### usb_analog.usb2_vbus_detect_set
<link=p.USB_ANALOG.USB2_VBUS_DETECT_SET>
#### USB_ANALOG.USB2_VBUS_DETECT_TOG
<link=p.USB_ANALOG.USB2_VBUS_DETECT_TOG>
#### p.USB_ANALOG.USB2_LOOPBACK_SET
<lang=dft>
 (rw)  [1;33m0x400d8244[0m (0x400d8000 + 0x0244)
USB Loopback Test Register
 (rw) (01)  [0;32mUTMI_TESTSTART[0m  - [00:00] -  Setting this bit can enable 1
</lang>
#### p.USB_ANALOG.USB2_MISC_SET
<lang=dft>
 (rw)  [1;33m0x400d8254[0m (0x400d8000 + 0x0254)
USB Misc Register
 (rw) (01)  [0;32mHS_USE_EXTERNAL_R[0m  - [00:00] -  Use external resistor to generate the current bias for the high speed transmitt
 er
 (rw) (01)  [0;32mEN_DEGLITCH[0m  - [01:01] -  Enable the deglitching circuit of the USB PLL output.
 (rw) (01)  [0;32mEN_CLK_UTMI[0m  - [30:30] -  Enables the clk to the UTMI block.
</lang>
#### USB_ANALOG.USB2_MISC_TOG
<link=p.USB_ANALOG.USB2_MISC_TOG>
#### xtalosc24m.lowpwr_ctrl
<link=p.XTALOSC24M.LOWPWR_CTRL>
#### XTALOSC24M.LOWPWR_CTRL_CLR
<link=p.XTALOSC24M.LOWPWR_CTRL_CLR>
#### p.XTALOSC24M.OSC_CONFIG1
<lang=dft>
 (rw)  [1;33m0x400d82b0[0m (0x400d8000 + 0x02b0)
XTAL OSC Configuration 1 Register
 (rw) (12)  [0;32mCOUNT_RC_TRG[0m  - [11:00] -  The target count used to tune the RC OSC frequency
 (rw) (12)  [0;32mCOUNT_RC_CUR[0m  - [31:20] -  The current tuning value in use.
</lang>
#### XTALOSC24M.OSC_CONFIG1
<link=p.XTALOSC24M.OSC_CONFIG1>
#### xtalosc24m.osc_config1_clr
<link=p.XTALOSC24M.OSC_CONFIG1_CLR>
#### p.usbphy1.ctrl_clr
<link=p.USBPHY1.CTRL_CLR>
#### p.usbphy1.debug_set
<link=p.USBPHY1.DEBUG_SET>
#### usbphy1.debug_set
<link=p.USBPHY1.DEBUG_SET>
#### p.USBPHY1.DEBUG1_CLR
<lang=dft>
 (rw)  [1;33m0x400d9078[0m (0x400d9000 + 0x0078)
UTMI Debug Status Register 1
 (rw) (13)  [0;32mRSVD0[0m  - [12:00] -  Reserved. Note: This bit should remain clear.
 (rw) (02)  [0;32mENTAILADJVD[0m  - [14:13] -  Delay increment of the rise of squelch: 00 = Delay is nominal 01 = Delay is +20
 % 10 = Delay is -20% 11 = Delay is -40%
 (ro) (17)  [0;32mRSVD1[0m  - [31:15] -  Reserved.
</lang>
#### USBPHY2.TX_TOG
<link=p.USBPHY2.TX_TOG>
#### p.usbphy2.ctrl_clr
<link=p.USBPHY2.CTRL_CLR>
#### p.USBPHY2.DEBUG_TOG
<lang=dft>
 (rw)  [1;33m0x400da05c[0m (0x400da000 + 0x005c)
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
#### p.USBPHY2.DEBUG0_STATUS
<lang=dft>
 (ro)  [1;33m0x400da060[0m (0x400da000 + 0x0060)
UTMI Debug Status Register 0
 (ro) (16)  [0;32mLOOP_BACK_FAIL_COUNT[0m  - [15:00] -  Running count of the failed pseudo-random generator loopback
 (ro) (10)  [0;32mUTMI_RXERROR_FAIL_COUNT[0m  - [25:16] -  Running count of the UTMI_RXERROR.
 (ro) (06)  [0;32mSQUELCH_COUNT[0m  - [31:26] -  Running count of the squelch reset instead of normal end for HS RX.
</lang>
#### csu.csl11
<link=p.CSU.CSL11>
#### CSU.CSL11
<link=p.CSU.CSL11>
#### p.CSU.CSL12
<lang=dft>
 (rw)  [1;33m0x400dc030[0m (0x400dc000 + 0x0030)
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
#### p.csu.csl12
<link=p.CSU.CSL12>
#### p.CSU.CSL23
<lang=dft>
 (rw)  [1;33m0x400dc05c[0m (0x400dc000 + 0x005c)
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
#### p.csu.csl23
<link=p.CSU.CSL23>
#### csu.csl29
<link=p.CSU.CSL29>
#### CSU.CSL29
<link=p.CSU.CSL29>
#### CSU.HP0
<link=p.CSU.HP0>
#### DMA0.CR
<link=p.DMA0.CR>
#### p.dma0.ceei
<link=p.DMA0.CEEI>
#### dma0.cerq
<link=p.DMA0.CERQ>
#### DMA0.SERQ
<link=p.DMA0.SERQ>
#### DMA0.CDNE
<link=p.DMA0.CDNE>
#### p.DMA0.DCHPRI2
<lang=dft>
 (rw)  [1;33m0x400e8101[0m (0x400e8000 + 0x0101)
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
#### dma0.dchpri2
<link=p.DMA0.DCHPRI2>
#### dma0.dchpri18
<link=p.DMA0.DCHPRI18>
#### p.DMA0.DCHPRI16
<lang=dft>
 (rw)  [1;33m0x400e8113[0m (0x400e8000 + 0x0113)
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
#### p.dma0.dchpri22
<link=p.DMA0.DCHPRI22>
#### DMA0.DCHPRI22
<link=p.DMA0.DCHPRI22>
#### p.DMA0.TCD0_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9010[0m (0x400e8000 + 0x1010)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### DMA0.TCD0_BITER_ELINKYES
<link=p.DMA0.TCD0_BITER_ELINKYES>
#### p.dma0.tcd1_attr
<link=p.DMA0.TCD1_ATTR>
#### p.dma0.tcd1_nbytes_mloffno
<link=p.DMA0.TCD1_NBYTES_MLOFFNO>
#### dma0.tcd1_nbytes_mloffno
<link=p.DMA0.TCD1_NBYTES_MLOFFNO>
#### dma0.tcd1_biter_elinkno
<link=p.DMA0.TCD1_BITER_ELINKNO>
#### dma0.tcd2_nbytes_mloffno
<link=p.DMA0.TCD2_NBYTES_MLOFFNO>
#### DMA0.TCD2_NBYTES_MLOFFNO
<link=p.DMA0.TCD2_NBYTES_MLOFFNO>
#### DMA0.TCD2_SLAST
<link=p.DMA0.TCD2_SLAST>
#### dma0.tcd2_daddr
<link=p.DMA0.TCD2_DADDR>
#### DMA0.TCD2_CITER_ELINKNO
<link=p.DMA0.TCD2_CITER_ELINKNO>
#### dma0.tcd2_csr
<link=p.DMA0.TCD2_CSR>
#### p.DMA0.TCD2_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e905e[0m (0x400e8000 + 0x105e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD3_SOFF
<link=p.DMA0.TCD3_SOFF>
#### DMA0.TCD3_SLAST
<link=p.DMA0.TCD3_SLAST>
#### dma0.tcd3_doff
<link=p.DMA0.TCD3_DOFF>
#### p.dma0.tcd4_daddr
<link=p.DMA0.TCD4_DADDR>
#### dma0.tcd4_citer_elinkno
<link=p.DMA0.TCD4_CITER_ELINKNO>
#### DMA0.TCD4_DLASTSGA
<link=p.DMA0.TCD4_DLASTSGA>
#### p.DMA0.TCD4_CSR
<lang=dft>
 (rw)  [1;33m0x400e909c[0m (0x400e8000 + 0x109c)
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
#### dma0.tcd5_nbytes_mlno
<link=p.DMA0.TCD5_NBYTES_MLNO>
#### p.dma0.tcd5_slast
<link=p.DMA0.TCD5_SLAST>
#### p.DMA0.TCD5_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e90be[0m (0x400e8000 + 0x10be)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd5_biter_elinkyes
<link=p.DMA0.TCD5_BITER_ELINKYES>
#### dma0.tcd6_soff
<link=p.DMA0.TCD6_SOFF>
#### dma0.tcd6_doff
<link=p.DMA0.TCD6_DOFF>
#### p.DMA0.TCD6_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e90d8[0m (0x400e8000 + 0x10d8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### DMA0.TCD6_CSR
<link=p.DMA0.TCD6_CSR>
#### dma0.tcd6_biter_elinkno
<link=p.DMA0.TCD6_BITER_ELINKNO>
#### DMA0.TCD6_BITER_ELINKYES
<link=p.DMA0.TCD6_BITER_ELINKYES>
#### p.dma0.tcd7_saddr
<link=p.DMA0.TCD7_SADDR>
#### p.DMA0.TCD7_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e90f6[0m (0x400e8000 + 0x10f6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD8_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9100[0m (0x400e8000 + 0x1100)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### dma0.tcd8_saddr
<link=p.DMA0.TCD8_SADDR>
#### p.DMA0.TCD8_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9106[0m (0x400e8000 + 0x1106)
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
#### DMA0.TCD8_NBYTES_MLOFFNO
<link=p.DMA0.TCD8_NBYTES_MLOFFNO>
#### p.DMA0.TCD8_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9114[0m (0x400e8000 + 0x1114)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### dma0.tcd8_citer_elinkno
<link=p.DMA0.TCD8_CITER_ELINKNO>
#### DMA0.TCD8_CITER_ELINKYES
<link=p.DMA0.TCD8_CITER_ELINKYES>
#### p.dma0.tcd9_saddr
<link=p.DMA0.TCD9_SADDR>
#### p.DMA0.TCD9_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9128[0m (0x400e8000 + 0x1128)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### DMA0.TCD9_NBYTES_MLOFFYES
<link=p.DMA0.TCD9_NBYTES_MLOFFYES>
#### p.DMA0.TCD9_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9134[0m (0x400e8000 + 0x1134)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### DMA0.TCD9_DLASTSGA
<link=p.DMA0.TCD9_DLASTSGA>
#### p.dma0.tcd9_csr
<link=p.DMA0.TCD9_CSR>
#### dma0.tcd10_nbytes_mlno
<link=p.DMA0.TCD10_NBYTES_MLNO>
#### DMA0.TCD10_DLASTSGA
<link=p.DMA0.TCD10_DLASTSGA>
#### DMA0.TCD10_BITER_ELINKYES
<link=p.DMA0.TCD10_BITER_ELINKYES>
#### p.dma0.tcd11_nbytes_mloffno
<link=p.DMA0.TCD11_NBYTES_MLOFFNO>
#### p.dma0.tcd11_biter_elinkyes
<link=p.DMA0.TCD11_BITER_ELINKYES>
#### dma0.tcd11_biter_elinkyes
<link=p.DMA0.TCD11_BITER_ELINKYES>
#### p.dma0.tcd12_nbytes_mloffno
<link=p.DMA0.TCD12_NBYTES_MLOFFNO>
#### p.dma0.tcd12_nbytes_mloffyes
<link=p.DMA0.TCD12_NBYTES_MLOFFYES>
#### p.DMA0.TCD13_SLAST
<lang=dft>
 (rw)  [1;33m0x400e91ac[0m (0x400e8000 + 0x11ac)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### dma0.tcd13_biter_elinkno
<link=p.DMA0.TCD13_BITER_ELINKNO>
#### p.DMA0.TCD14_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e91c8[0m (0x400e8000 + 0x11c8)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### DMA0.TCD14_CITER_ELINKNO
<link=p.DMA0.TCD14_CITER_ELINKNO>
#### p.dma0.tcd15_daddr
<link=p.DMA0.TCD15_DADDR>
#### p.dma0.tcd15_csr
<link=p.DMA0.TCD15_CSR>
#### DMA0.TCD16_NBYTES_MLNO
<link=p.DMA0.TCD16_NBYTES_MLNO>
#### DMA0.TCD16_BITER_ELINKYES
<link=p.DMA0.TCD16_BITER_ELINKYES>
#### dma0.tcd17_saddr
<link=p.DMA0.TCD17_SADDR>
#### p.DMA0.TCD17_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9238[0m (0x400e8000 + 0x1238)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.DMA0.TCD17_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e923e[0m (0x400e8000 + 0x123e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd17_biter_elinkno
<link=p.DMA0.TCD17_BITER_ELINKNO>
#### DMA0.TCD18_SLAST
<link=p.DMA0.TCD18_SLAST>
#### DMA0.TCD18_CITER_ELINKNO
<link=p.DMA0.TCD18_CITER_ELINKNO>
#### p.dma0.tcd18_citer_elinkyes
<link=p.DMA0.TCD18_CITER_ELINKYES>
#### dma0.tcd19_saddr
<link=p.DMA0.TCD19_SADDR>
#### p.DMA0.TCD19_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9266[0m (0x400e8000 + 0x1266)
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
#### p.dma0.tcd19_slast
<link=p.DMA0.TCD19_SLAST>
#### DMA0.TCD19_SLAST
<link=p.DMA0.TCD19_SLAST>
#### DMA0.TCD19_CITER_ELINKYES
<link=p.DMA0.TCD19_CITER_ELINKYES>
#### DMA0.TCD20_NBYTES_MLNO
<link=p.DMA0.TCD20_NBYTES_MLNO>
#### p.dma0.tcd20_nbytes_mloffyes
<link=p.DMA0.TCD20_NBYTES_MLOFFYES>
#### DMA0.TCD20_DADDR
<link=p.DMA0.TCD20_DADDR>
#### p.DMA0.TCD21_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e92a8[0m (0x400e8000 + 0x12a8)
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
#### DMA0.TCD21_DADDR
<link=p.DMA0.TCD21_DADDR>
#### p.DMA0.TCD21_CSR
<lang=dft>
 (rw)  [1;33m0x400e92bc[0m (0x400e8000 + 0x12bc)
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
#### DMA0.TCD22_CITER_ELINKNO
<link=p.DMA0.TCD22_CITER_ELINKNO>
#### p.DMA0.TCD22_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e92de[0m (0x400e8000 + 0x12de)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd22_biter_elinkno
<link=p.DMA0.TCD22_BITER_ELINKNO>
#### p.DMA0.TCD22_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e92de[0m (0x400e8000 + 0x12de)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd23_nbytes_mlno
<link=p.DMA0.TCD23_NBYTES_MLNO>
#### dma0.tcd23_nbytes_mloffno
<link=p.DMA0.TCD23_NBYTES_MLOFFNO>
#### DMA0.TCD23_NBYTES_MLOFFYES
<link=p.DMA0.TCD23_NBYTES_MLOFFYES>
#### dma0.tcd23_citer_elinkyes
<link=p.DMA0.TCD23_CITER_ELINKYES>
#### p.dma0.tcd24_saddr
<link=p.DMA0.TCD24_SADDR>
#### DMA0.TCD24_DOFF
<link=p.DMA0.TCD24_DOFF>
#### p.DMA0.TCD25_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9320[0m (0x400e8000 + 0x1320)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.dma0.tcd25_saddr
<link=p.DMA0.TCD25_SADDR>
#### dma0.tcd25_attr
<link=p.DMA0.TCD25_ATTR>
#### DMA0.TCD25_NBYTES_MLNO
<link=p.DMA0.TCD25_NBYTES_MLNO>
#### dma0.tcd25_slast
<link=p.DMA0.TCD25_SLAST>
#### p.DMA0.TCD25_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9334[0m (0x400e8000 + 0x1334)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.dma0.tcd25_doff
<link=p.DMA0.TCD25_DOFF>
#### dma0.tcd26_saddr
<link=p.DMA0.TCD26_SADDR>
#### DMA0.TCD26_ATTR
<link=p.DMA0.TCD26_ATTR>
#### DMA0.TCD26_NBYTES_MLNO
<link=p.DMA0.TCD26_NBYTES_MLNO>
#### p.dma0.tcd26_citer_elinkyes
<link=p.DMA0.TCD26_CITER_ELINKYES>
#### dma0.tcd27_citer_elinkno
<link=p.DMA0.TCD27_CITER_ELINKNO>
#### DMA0.TCD27_CITER_ELINKYES
<link=p.DMA0.TCD27_CITER_ELINKYES>
#### DMA0.TCD27_BITER_ELINKNO
<link=p.DMA0.TCD27_BITER_ELINKNO>
#### p.DMA0.TCD28_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9386[0m (0x400e8000 + 0x1386)
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
#### dma0.tcd28_dlastsga
<link=p.DMA0.TCD28_DLASTSGA>
#### DMA0.TCD28_CSR
<link=p.DMA0.TCD28_CSR>
#### DMA0.TCD28_BITER_ELINKYES
<link=p.DMA0.TCD28_BITER_ELINKYES>
#### dma0.tcd29_csr
<link=p.DMA0.TCD29_CSR>
#### p.dma0.tcd30_csr
<link=p.DMA0.TCD30_CSR>
#### dma0.tcd30_biter_elinkno
<link=p.DMA0.TCD30_BITER_ELINKNO>
#### DMA0.TCD30_BITER_ELINKYES
<link=p.DMA0.TCD30_BITER_ELINKYES>
#### p.dma0.tcd31_soff
<link=p.DMA0.TCD31_SOFF>
#### DMA0.TCD31_SOFF
<link=p.DMA0.TCD31_SOFF>
#### dma0.tcd31_doff
<link=p.DMA0.TCD31_DOFF>
#### p.dma0.tcd31_biter_elinkyes
<link=p.DMA0.TCD31_BITER_ELINKYES>
#### dma0.tcd31_biter_elinkyes
<link=p.DMA0.TCD31_BITER_ELINKYES>
#### dmamux.chcfg[11]
<link=p.DMAMUX.CHCFG[11]>
#### dmamux.chcfg[14]
<link=p.DMAMUX.CHCFG[14]>
#### DMAMUX.CHCFG[16]
<link=p.DMAMUX.CHCFG[16]>
#### dmamux.chcfg[25]
<link=p.DMAMUX.CHCFG[25]>
#### p.DMAMUX.CHCFG[28]
<lang=dft>
 (rw)  [1;33m0x400ec070[0m (0x400ec000 + 0x0070)
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
#### p.dmamux.chcfg[31]
<link=p.DMAMUX.CHCFG[31]>
#### GPC.CNTR
<link=p.GPC.CNTR>
#### p.PGC.MEGA_PUPSCR
<lang=dft>
 (rw)  [1;33m0x400f4224[0m (0x400f4000 + 0x0224)
PGC Mega Power Up Sequence Control Register
 (rw) (06)  [0;32mSW[0m  - [05:00] -  After a power-up request (pup_req assertion), the PGC waits a number of IPG clo
 cks equal to the value of SW before asserting power toggle on/off signal (switc
 h_b)
 (rw) (06)  [0;32mSW2ISO[0m  - [13:08] -  After asserting power toggle on/off signal (switch_b), the PGC waits a number o
 f IPG clocks equal to the value of SW2ISO before negating isolation
</lang>
#### PGC.CPU_CTRL
<link=p.PGC.CPU_CTRL>
#### PGC.CPU_SR
<link=p.PGC.CPU_SR>
#### SRC.GPR6
<link=p.SRC.GPR6>
#### p.SRC.GPR7
<lang=dft>
 (rw)  [1;33m0x400f8038[0m (0x400f8000 + 0x0038)
SRC General Purpose Register 7
</lang>
#### ccm.ccr
<link=p.CCM.CCR>
#### CCM.CCR
<link=p.CCM.CCR>
#### p.CCM.CCSR
<lang=dft>
 (rw)  [1;33m0x400fc00c[0m (0x400fc000 + 0x000c)
CCM Clock Switcher Register
 (rw) (01)  [0;32mPLL3_SW_CLK_SEL[0m  - [00:00] -  Selects source to generate pll3_sw_clk. This bit should only be used for testin
 g purposes.
      0 - PLL3_SW_CLK_SEL_0 :
         pll3_main_clk
      0x1 - PLL3_SW_CLK_SEL_1 :
         pll3 bypass clock
</lang>
#### ccm.ccsr
<link=p.CCM.CCSR>
#### ccm.cscmr2
<link=p.CCM.CSCMR2>
#### p.CCM.CDHIPR
<lang=dft>
 (ro)  [1;33m0x400fc048[0m (0x400fc000 + 0x0048)
CCM Divider Handshake In-Process Register
 (ro) (01)  [0;32mSEMC_PODF_BUSY[0m  - [00:00] -  Busy indicator for semc_podf.
      0 - SEMC_PODF_BUSY_0 :
         divider is not busy and its value represents the actual division.
      0x1 - SEMC_PODF_BUSY_1 :
         divider is busy with handshake process with module. The value read in t
         he divider represents the previous value of the division factor, and af
         ter the handshake the written value of the semc_podf will be applied.
 (ro) (01)  [0;32mAHB_PODF_BUSY[0m  - [01:01] -  Busy indicator for ahb_podf.
      0 - AHB_PODF_BUSY_0 :
         divider is not busy and its value represents the actual division.
      0x1 - AHB_PODF_BUSY_1 :
         divider is busy with handshake process with module. The value read in t
         he divider represents the previous value of the division factor, and af
         ter the handshake the written value of the ahb_podf will be applied.
 (ro) (01)  [0;32mPERIPH2_CLK_SEL_BUSY[0m  - [03:03] -  Busy indicator for periph2_clk_sel mux control.
      0 - PERIPH2_CLK_SEL_BUSY_0 :
         mux is not busy and its value represents the actual division.
      0x1 - PERIPH2_CLK_SEL_BUSY_1 :
         mux is busy with handshake process with module. The value read in the p
         eriph2_clk_sel represents the previous value of select, and after the h
         andshake periph2_clk_sel value will be applied.
 (ro) (01)  [0;32mPERIPH_CLK_SEL_BUSY[0m  - [05:05] -  Busy indicator for periph_clk_sel mux control.
      0 - PERIPH_CLK_SEL_BUSY_0 :
         mux is not busy and its value represents the actual division.
      0x1 - PERIPH_CLK_SEL_BUSY_1 :
         mux is busy with handshake process with module. The value read in the p
         eriph_clk_sel represents the previous value of select, and after the ha
         ndshake periph_clk_sel value will be applied.
 (ro) (01)  [0;32mARM_PODF_BUSY[0m  - [16:16] -  Busy indicator for arm_podf.
      0 - ARM_PODF_BUSY_0 :
         divider is not busy and its value represents the actual division.
      0x1 - ARM_PODF_BUSY_1 :
         divider is busy with handshake process with module. The value read in t
         he divider represents the previous value of the division factor, and af
         ter the handshake the written value of the arm_podf will be applied.
</lang>
#### p.ccm.cgpr
<link=p.CCM.CGPR>
#### p.ROMC.ROMPATCH4D
<lang=dft>
 (rw)  [1;33m0x401800e0[0m (0x40180000 + 0x00e0)
ROMC Data Registers
 (rw) (32)  [0;32mDATAX[0m  - [31:00] -  Data Fix Registers - Stores the data used for 1-word data fix operations
</lang>
#### p.ROMC.ROMPATCH3D
<lang=dft>
 (rw)  [1;33m0x401800e4[0m (0x40180000 + 0x00e4)
ROMC Data Registers
 (rw) (32)  [0;32mDATAX[0m  - [31:00] -  Data Fix Registers - Stores the data used for 1-word data fix operations
</lang>
#### p.romc.rompatchcntl
<link=p.ROMC.ROMPATCHCNTL>
#### p.ROMC.ROMPATCHENL
<lang=dft>
 (rw)  [1;33m0x401800fc[0m (0x40180000 + 0x00fc)
ROMC Enable Register Low
 (rw) (16)  [0;32mENABLE[0m  - [15:00] -  Enable Address Comparator - This bit enables the corresponding address comparat
 or to trigger an event
      0 - ENABLE_0 :
         Address comparator disabled
      0x1 - ENABLE_1 :
         Address comparator enabled, ROMC will trigger a opcode patch or data fi
         x event upon matching of the associated address
</lang>
#### ROMC.ROMPATCHENL
<link=p.ROMC.ROMPATCHENL>
#### p.romc.rompatch5a
<link=p.ROMC.ROMPATCH5A>
#### romc.rompatch7a
<link=p.ROMC.ROMPATCH7A>
#### p.ROMC.ROMPATCH8A
<lang=dft>
 (rw)  [1;33m0x40180120[0m (0x40180000 + 0x0120)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### lpuart1.pincfg
<link=p.LPUART1.PINCFG>
#### p.lpuart1.baud
<link=p.LPUART1.BAUD>
#### p.LPUART1.MATCH
<lang=dft>
 (rw)  [1;33m0x40184020[0m (0x40184000 + 0x0020)
LPUART Match Address Register
 (rw) (10)  [0;32mMA1[0m  - [09:00] -  Match Address 1
 (rw) (10)  [0;32mMA2[0m  - [25:16] -  Match Address 2
</lang>
#### LPUART1.FIFO
<link=p.LPUART1.FIFO>
#### LPUART1.WATER
<link=p.LPUART1.WATER>
#### p.lpuart2.verid
<link=p.LPUART2.VERID>
#### p.lpuart2.ctrl
<link=p.LPUART2.CTRL>
#### lpuart2.modir
<link=p.LPUART2.MODIR>
#### p.lpuart2.water
<link=p.LPUART2.WATER>
#### p.LPUART3.STAT
<lang=dft>
 (rw)  [1;33m0x4018c014[0m (0x4018c000 + 0x0014)
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
#### p.lpuart3.modir
<link=p.LPUART3.MODIR>
#### LPUART4.DATA
<link=p.LPUART4.DATA>
#### p.LPUART4.MATCH
<lang=dft>
 (rw)  [1;33m0x40190020[0m (0x40190000 + 0x0020)
LPUART Match Address Register
 (rw) (10)  [0;32mMA1[0m  - [09:00] -  Match Address 1
 (rw) (10)  [0;32mMA2[0m  - [25:16] -  Match Address 2
</lang>
#### p.LPUART5.PINCFG
<lang=dft>
 (rw)  [1;33m0x4019400c[0m (0x40194000 + 0x000c)
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
#### lpuart7.global
<link=p.LPUART7.GLOBAL>
#### LPUART7.GLOBAL
<link=p.LPUART7.GLOBAL>
#### p.lpuart7.pincfg
<link=p.LPUART7.PINCFG>
#### lpuart7.modir
<link=p.LPUART7.MODIR>
#### flexio1.shiftctl[0]
<link=p.FLEXIO1.SHIFTCTL[0]>
#### FLEXIO1.SHIFTBUFBIS[3]
<link=p.FLEXIO1.SHIFTBUFBIS[3]>
#### flexio1.shiftbufbys[2]
<link=p.FLEXIO1.SHIFTBUFBYS[2]>
#### p.FLEXIO1.TIMCTL[2]
<lang=dft>
 (rw)  [1;33m0x401ac408[0m (0x401ac000 + 0x0408)
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
#### p.FLEXIO1.TIMCFG[0]
<lang=dft>
 (rw)  [1;33m0x401ac480[0m (0x401ac000 + 0x0480)
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
#### p.FLEXIO1.TIMCMP[2]
<lang=dft>
 (rw)  [1;33m0x401ac508[0m (0x401ac000 + 0x0508)
Timer Compare N Register
 (rw) (16)  [0;32mCMP[0m  - [15:00] -  Timer Compare Value
</lang>
#### flexio1.shiftbufnis[1]
<link=p.FLEXIO1.SHIFTBUFNIS[1]>
#### FLEXIO1.SHIFTBUFNIS[2]
<link=p.FLEXIO1.SHIFTBUFNIS[2]>
#### p.flexio2.param
<link=p.FLEXIO2.PARAM>
#### p.FLEXIO2.CTRL
<lang=dft>
 (rw)  [1;33m0x401b0008[0m (0x401b0000 + 0x0008)
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
#### FLEXIO2.CTRL
<link=p.FLEXIO2.CTRL>
#### p.FLEXIO2.PIN
<lang=dft>
 (ro)  [1;33m0x401b000c[0m (0x401b0000 + 0x000c)
Pin State Register
 (ro) (16)  [0;32mPDI[0m  - [15:00] -  Pin Data Input
</lang>
#### flexio2.pin
<link=p.FLEXIO2.PIN>
#### p.FLEXIO2.TIMSTAT
<lang=dft>
 (rw)  [1;33m0x401b0018[0m (0x401b0000 + 0x0018)
Timer Status Register
 (rw) (04)  [0;32mTSF[0m  - [03:00] -  Timer Status Flags
</lang>
#### FLEXIO2.SHIFTCTL[0]
<link=p.FLEXIO2.SHIFTCTL[0]>
#### p.flexio2.shiftctl[3]
<link=p.FLEXIO2.SHIFTCTL[3]>
#### flexio2.shiftctl[3]
<link=p.FLEXIO2.SHIFTCTL[3]>
#### FLEXIO2.SHIFTBUFBBS[2]
<link=p.FLEXIO2.SHIFTBUFBBS[2]>
#### flexio2.timcfg[0]
<link=p.FLEXIO2.TIMCFG[0]>
#### flexio2.shiftbufnbs[0]
<link=p.FLEXIO2.SHIFTBUFNBS[0]>
#### p.FLEXIO2.SHIFTBUFHWS[1]
<lang=dft>
 (rw)  [1;33m0x401b0704[0m (0x401b0000 + 0x0704)
Shifter Buffer N Half Word Swapped Register
 (rw) (32)  [0;32mSHIFTBUFHWS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio2.shiftbufhws[1]
<link=p.FLEXIO2.SHIFTBUFHWS[1]>
#### p.flexio2.shiftbufnis[1]
<link=p.FLEXIO2.SHIFTBUFNIS[1]>
#### flexio2.shiftbufnis[2]
<link=p.FLEXIO2.SHIFTBUFNIS[2]>
#### flexio3.verid
<link=p.FLEXIO3.VERID>
#### flexio3.ctrl
<link=p.FLEXIO3.CTRL>
#### p.FLEXIO3.SHIFTSTATE
<lang=dft>
 (rw)  [1;33m0x42020040[0m (0x42020000 + 0x0040)
Shifter State Register
 (rw) (03)  [0;32mSTATE[0m  - [02:00] -  Current State Pointer
</lang>
#### flexio3.shiftbufbis[0]
<link=p.FLEXIO3.SHIFTBUFBIS[0]>
#### p.FLEXIO3.SHIFTBUFBYS[2]
<lang=dft>
 (rw)  [1;33m0x42020308[0m (0x42020000 + 0x0308)
Shifter Buffer N Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBYS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufbbs[2]
<link=p.FLEXIO3.SHIFTBUFBBS[2]>
#### FLEXIO3.TIMCTL[0]
<link=p.FLEXIO3.TIMCTL[0]>
#### p.flexio3.timctl[2]
<link=p.FLEXIO3.TIMCTL[2]>
#### flexio3.timcfg[0]
<link=p.FLEXIO3.TIMCFG[0]>
#### p.flexio3.timcfg[1]
<link=p.FLEXIO3.TIMCFG[1]>
#### p.flexio3.shiftbufnbs[2]
<link=p.FLEXIO3.SHIFTBUFNBS[2]>
#### FLEXIO3.SHIFTBUFNBS[2]
<link=p.FLEXIO3.SHIFTBUFNBS[2]>
#### p.FLEXIO3.SHIFTBUFNBS[3]
<lang=dft>
 (rw)  [1;33m0x4202068c[0m (0x42020000 + 0x068c)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO3.SHIFTBUFHWS[1]
<link=p.FLEXIO3.SHIFTBUFHWS[1]>
#### p.GPIO1.PSR
<lang=dft>
 (ro)  [1;33m0x401b8008[0m (0x401b8000 + 0x0008)
GPIO pad status register
 (ro) (32)  [0;32mPSR[0m  - [31:00] -  PSR
</lang>
#### p.GPIO1.ISR
<lang=dft>
 (rw)  [1;33m0x401b8018[0m (0x401b8000 + 0x0018)
GPIO interrupt status register
 (rw) (32)  [0;32mISR[0m  - [31:00] -  ISR
</lang>
#### gpio1.dr_toggle
<link=p.GPIO1.DR_TOGGLE>
#### gpio5.gdir
<link=p.GPIO5.GDIR>
#### gpio5.imr
<link=p.GPIO5.IMR>
#### GPIO5.DR_SET
<link=p.GPIO5.DR_SET>
#### p.gpio2.imr
<link=p.GPIO2.IMR>
#### p.gpio2.isr
<link=p.GPIO2.ISR>
#### p.gpio2.edge_sel
<link=p.GPIO2.EDGE_SEL>
#### p.GPIO2.DR_SET
<lang=dft>
 (wo)  [1;33m0x401bc084[0m (0x401bc000 + 0x0084)
GPIO data register SET
 (wo) (32)  [0;32mDR_SET[0m  - [31:00] -  DR_SET
</lang>
#### p.gpio3.dr
<link=p.GPIO3.DR>
#### p.GPIO3.EDGE_SEL
<lang=dft>
 (rw)  [1;33m0x401c001c[0m (0x401c0000 + 0x001c)
GPIO edge select register
 (rw) (32)  [0;32mGPIO_EDGE_SEL[0m  - [31:00] -  GPIO_EDGE_SEL
</lang>
#### GPIO4.EDGE_SEL
<link=p.GPIO4.EDGE_SEL>
#### GPIO4.DR_TOGGLE
<link=p.GPIO4.DR_TOGGLE>
#### p.gpio6.gdir
<link=p.GPIO6.GDIR>
#### p.GPIO6.ICR2
<lang=dft>
 (rw)  [1;33m0x42000010[0m (0x42000000 + 0x0010)
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
#### p.GPIO6.EDGE_SEL
<lang=dft>
 (rw)  [1;33m0x4200001c[0m (0x42000000 + 0x001c)
GPIO edge select register
 (rw) (32)  [0;32mGPIO_EDGE_SEL[0m  - [31:00] -  GPIO_EDGE_SEL
</lang>
#### gpio6.dr_clear
<link=p.GPIO6.DR_CLEAR>
#### gpio8.icr2
<link=p.GPIO8.ICR2>
#### p.gpio8.isr
<link=p.GPIO8.ISR>
#### gpio8.dr_toggle
<link=p.GPIO8.DR_TOGGLE>
#### gpio9.gdir
<link=p.GPIO9.GDIR>
#### p.gpio9.psr
<link=p.GPIO9.PSR>
#### gpio9.psr
<link=p.GPIO9.PSR>
#### GPIO9.DR_SET
<link=p.GPIO9.DR_SET>
#### gpio9.dr_clear
<link=p.GPIO9.DR_CLEAR>
#### p.CAN1.MCR
<lang=dft>
 (rw)  [1;33m0x401d0000[0m (0x401d0000 + 0x0000)
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
#### p.can1.mcr
<link=p.CAN1.MCR>
#### p.CAN1.RX15MASK
<lang=dft>
 (rw)  [1;33m0x401d0018[0m (0x401d0000 + 0x0018)
Rx Buffer 15 Mask Register
 (rw) (32)  [0;32mRX15M[0m  - [31:00] -  These bits mask Mailbox 15 filter bits in the same fashion as RXMGMASK masks ot
 her Mailboxes filters (see RXMGMASKRx Mailboxes Global Mask Register )
      0 - RX15M_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - RX15M_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.iflag1
<link=p.CAN1.IFLAG1>
#### p.CAN1.CTRL2
<lang=dft>
 (rw)  [1;33m0x401d0034[0m (0x401d0000 + 0x0034)
Control 2 Register
 (rw) (01)  [0;32mEACEN[0m  - [16:16] -  This bit controls the comparison of IDE and RTR bits within Rx Mailboxes filter
 s with their corresponding bits in the incoming frame by the matching process
      0 - EACEN_0 :
         Rx Mailbox filter's IDE bit is always compared and RTR is never compare
         d despite mask bits.
      0x1 - EACEN_1 :
         Enables the comparison of both Rx Mailbox filter's IDE and RTR bit with
          their corresponding bits within the incoming frame. Mask bits do apply
         .
 (rw) (01)  [0;32mRRS[0m  - [17:17] -  If this bit is asserted Remote Request Frame is submitted to a matching process
  and stored in the corresponding Message Buffer in the same fashion of a Data F
 rame
      0 - RRS_0 :
         Remote Response Frame is generated
      0x1 - RRS_1 :
         Remote Request Frame is stored
 (rw) (01)  [0;32mMRP[0m  - [18:18] -  If this bit is set the matching process starts from the Mailboxes and if no mat
 ch occurs the matching continues on the Rx FIFO
      0 - MRP_0 :
         Matching starts from Rx FIFO and continues on Mailboxes
      0x1 - MRP_1 :
         Matching starts from Mailboxes and continues on Rx FIFO
 (rw) (05)  [0;32mTASD[0m  - [23:19] -  This 5-bit field indicates how many CAN bits the Tx arbitration process start p
 oint can be delayed from the first bit of CRC field on CAN bus
 (rw) (04)  [0;32mRFFN[0m  - [27:24] -  This 4-bit field defines the number of Rx FIFO filters according to
 (rw) (01)  [0;32mWRMFRZ[0m  - [28:28] -  Enable unrestricted write access to FlexCAN memory in Freeze mode
      0 - WRMFRZ_0 :
         Keep the write access restricted in some regions of FlexCAN memory
      0x1 - WRMFRZ_1 :
         Enable unrestricted write access to FlexCAN memory
</lang>
#### can1.rximr0
<link=p.CAN1.RXIMR0>
#### p.CAN1.RXIMR1
<lang=dft>
 (rw)  [1;33m0x401d0884[0m (0x401d0000 + 0x0884)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr5
<link=p.CAN1.RXIMR5>
#### CAN1.RXIMR7
<link=p.CAN1.RXIMR7>
#### p.can1.rximr16
<link=p.CAN1.RXIMR16>
#### CAN1.RXIMR20
<link=p.CAN1.RXIMR20>
#### can1.rximr23
<link=p.CAN1.RXIMR23>
#### p.can1.rximr27
<link=p.CAN1.RXIMR27>
#### p.CAN1.RXIMR28
<lang=dft>
 (rw)  [1;33m0x401d08f0[0m (0x401d0000 + 0x08f0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr30
<link=p.CAN1.RXIMR30>
#### p.CAN1.RXIMR34
<lang=dft>
 (rw)  [1;33m0x401d0908[0m (0x401d0000 + 0x0908)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR37
<link=p.CAN1.RXIMR37>
#### can1.rximr39
<link=p.CAN1.RXIMR39>
#### p.CAN1.RXIMR42
<lang=dft>
 (rw)  [1;33m0x401d0928[0m (0x401d0000 + 0x0928)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr46
<link=p.CAN1.RXIMR46>
#### can1.rximr48
<link=p.CAN1.RXIMR48>
#### can1.rximr53
<link=p.CAN1.RXIMR53>
#### CAN1.RXIMR56
<link=p.CAN1.RXIMR56>
#### p.CAN1.RXIMR59
<lang=dft>
 (rw)  [1;33m0x401d096c[0m (0x401d0000 + 0x096c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.MCR
<link=p.CAN2.MCR>
#### CAN2.IMASK1
<link=p.CAN2.IMASK1>
#### p.can2.rximr4
<link=p.CAN2.RXIMR4>
#### CAN2.RXIMR6
<link=p.CAN2.RXIMR6>
#### p.CAN2.RXIMR11
<lang=dft>
 (rw)  [1;33m0x401d48ac[0m (0x401d4000 + 0x08ac)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR12
<link=p.CAN2.RXIMR12>
#### p.can2.rximr15
<link=p.CAN2.RXIMR15>
#### p.CAN2.RXIMR24
<lang=dft>
 (rw)  [1;33m0x401d48e0[0m (0x401d4000 + 0x08e0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR27
<link=p.CAN2.RXIMR27>
#### can2.rximr32
<link=p.CAN2.RXIMR32>
#### CAN2.RXIMR34
<link=p.CAN2.RXIMR34>
#### p.CAN2.RXIMR37
<lang=dft>
 (rw)  [1;33m0x401d4914[0m (0x401d4000 + 0x0914)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr47
<link=p.CAN2.RXIMR47>
#### p.can2.rximr49
<link=p.CAN2.RXIMR49>
#### can2.rximr50
<link=p.CAN2.RXIMR50>
#### can2.rximr61
<link=p.CAN2.RXIMR61>
#### can3.mcr
<link=p.CAN3.MCR>
#### can3.ctrl2
<link=p.CAN3.CTRL2>
#### p.can3.esr2
<link=p.CAN3.ESR2>
#### p.can3.crcr
<link=p.CAN3.CRCR>
#### p.can3.mb0_64b_cs
<link=p.CAN3.MB0_64B_CS>
#### CAN3.MB0_16B_WORD0
<link=p.CAN3.MB0_16B_WORD0>
#### can3.mb0_32b_word0
<link=p.CAN3.MB0_32B_WORD0>
#### p.can3.mb0_64b_word3
<link=p.CAN3.MB0_64B_WORD3>
#### p.CAN3.MB0_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8098[0m (0x401d8000 + 0x0098)
Message Buffer 0 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB0_64B_WORD4
<link=p.CAN3.MB0_64B_WORD4>
#### CAN3.MB1_16B_CS
<link=p.CAN3.MB1_16B_CS>
#### p.CAN3.MB0_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d809c[0m (0x401d8000 + 0x009c)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB1_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d80a8[0m (0x401d8000 + 0x00a8)
Message Buffer 1 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB2_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80ac[0m (0x401d8000 + 0x00ac)
Message Buffer 2 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.cs3
<link=p.CAN3.CS3>
#### p.can3.mb3_8b_cs
<link=p.CAN3.MB3_8B_CS>
#### can3.mb0_64b_word13
<link=p.CAN3.MB0_64B_WORD13>
#### can3.mb1_32b_word3
<link=p.CAN3.MB1_32B_WORD3>
#### CAN3.MB2_16B_WORD2
<link=p.CAN3.MB2_16B_WORD2>
#### p.CAN3.ID4
<lang=dft>
 (rw)  [1;33m0x401d80c4[0m (0x401d8000 + 0x00c4)
Message Buffer 4 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB1_32B_WORD5
<link=p.CAN3.MB1_32B_WORD5>
#### p.can3.mb3_16b_cs
<link=p.CAN3.MB3_16B_CS>
#### p.CAN3.MB3_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80d0[0m (0x401d8000 + 0x00d0)
Message Buffer 3 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb5_8b_cs
<link=p.CAN3.MB5_8B_CS>
#### can3.mb5_8b_id
<link=p.CAN3.MB5_8B_ID>
#### can3.mb2_32b_word0
<link=p.CAN3.MB2_32B_WORD0>
#### p.can3.mb3_16b_word2
<link=p.CAN3.MB3_16B_WORD2>
#### can3.word05
<link=p.CAN3.WORD05>
#### p.CAN3.WORD15
<lang=dft>
 (rw)  [1;33m0x401d80dc[0m (0x401d8000 + 0x00dc)
Message Buffer 5 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.CS6
<link=p.CAN3.CS6>
#### CAN3.MB1_64B_WORD4
<link=p.CAN3.MB1_64B_WORD4>
#### p.can3.id6
<link=p.CAN3.ID6>
#### can3.id6
<link=p.CAN3.ID6>
#### p.can3.mb2_32b_word3
<link=p.CAN3.MB2_32B_WORD3>
#### p.CAN3.MB2_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d80e8[0m (0x401d8000 + 0x00e8)
Message Buffer 2 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD06
<link=p.CAN3.WORD06>
#### p.CAN3.MB1_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d80ec[0m (0x401d8000 + 0x00ec)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb1_64b_word7
<link=p.CAN3.MB1_64B_WORD7>
#### can3.word16
<link=p.CAN3.WORD16>
#### p.can3.cs7
<link=p.CAN3.CS7>
#### p.can3.mb1_64b_word8
<link=p.CAN3.MB1_64B_WORD8>
#### p.can3.mb3_32b_cs
<link=p.CAN3.MB3_32B_CS>
#### p.CAN3.MB7_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80f8[0m (0x401d8000 + 0x00f8)
Message Buffer 7 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb1_64b_word11
<link=p.CAN3.MB1_64B_WORD11>
#### can3.mb5_16b_id
<link=p.CAN3.MB5_16B_ID>
#### CAN3.MB7_8B_WORD1
<link=p.CAN3.MB7_8B_WORD1>
#### CAN3.ID8
<link=p.CAN3.ID8>
#### p.can3.word08
<link=p.CAN3.WORD08>
#### p.can3.mb3_32b_word3
<link=p.CAN3.MB3_32B_WORD3>
#### can3.mb3_32b_word7
<link=p.CAN3.MB3_32B_WORD7>
#### CAN3.MB10_8B_CS
<link=p.CAN3.MB10_8B_CS>
#### can3.id10
<link=p.CAN3.ID10>
#### can3.mb2_64b_word4
<link=p.CAN3.MB2_64B_WORD4>
#### p.CAN3.MB4_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8128[0m (0x401d8000 + 0x0128)
Message Buffer 4 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_16B_CS
<link=p.CAN3.MB7_16B_CS>
#### CAN3.ID11
<link=p.CAN3.ID11>
#### CAN3.MB11_8B_ID
<link=p.CAN3.MB11_8B_ID>
#### can3.mb4_32b_word4
<link=p.CAN3.MB4_32B_WORD4>
#### p.can3.mb11_8b_word1
<link=p.CAN3.MB11_8B_WORD1>
#### p.can3.mb2_64b_word9
<link=p.CAN3.MB2_64B_WORD9>
#### p.CAN3.CS12
<lang=dft>
 (rw)  [1;33m0x401d8140[0m (0x401d8000 + 0x0140)
Message Buffer 12 CS Register
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
#### p.can3.mb2_64b_word12
<link=p.CAN3.MB2_64B_WORD12>
#### p.CAN3.MB13_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8150[0m (0x401d8000 + 0x0150)
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
#### can3.mb8_16b_word2
<link=p.CAN3.MB8_16B_WORD2>
#### CAN3.MB5_32B_WORD1
<link=p.CAN3.MB5_32B_WORD1>
#### p.CAN3.WORD013
<lang=dft>
 (rw)  [1;33m0x401d8158[0m (0x401d8000 + 0x0158)
Message Buffer 13 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb9_16b_word0
<link=p.CAN3.MB9_16B_WORD0>
#### can3.mb14_8b_id
<link=p.CAN3.MB14_8B_ID>
#### p.can3.mb3_64b_word1
<link=p.CAN3.MB3_64B_WORD1>
#### CAN3.WORD014
<link=p.CAN3.WORD014>
#### can3.mb5_32b_word7
<link=p.CAN3.MB5_32B_WORD7>
#### CAN3.CS15
<link=p.CAN3.CS15>
#### CAN3.MB10_16B_ID
<link=p.CAN3.MB10_16B_ID>
#### p.can3.mb15_8b_id
<link=p.CAN3.MB15_8B_ID>
#### p.CAN3.MB6_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8178[0m (0x401d8000 + 0x0178)
Message Buffer 6 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb10_16b_word2
<link=p.CAN3.MB10_16B_WORD2>
#### p.CAN3.MB16_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8188[0m (0x401d8000 + 0x0188)
Message Buffer 16 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb6_32b_word4
<link=p.CAN3.MB6_32B_WORD4>
#### p.CAN3.ID17
<lang=dft>
 (rw)  [1;33m0x401d8194[0m (0x401d8000 + 0x0194)
Message Buffer 17 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb6_32b_word7
<link=p.CAN3.MB6_32B_WORD7>
#### CAN3.MB17_8B_WORD0
<link=p.CAN3.MB17_8B_WORD0>
#### CAN3.MB7_32B_ID
<link=p.CAN3.MB7_32B_ID>
#### p.CAN3.MB18_8B_CS
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
#### p.CAN3.MB4_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d81a0[0m (0x401d8000 + 0x01a0)
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
#### can3.mb7_32b_word3
<link=p.CAN3.MB7_32B_WORD3>
#### p.CAN3.MB12_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d81b0[0m (0x401d8000 + 0x01b0)
Message Buffer 12 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB4_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d81b0[0m (0x401d8000 + 0x01b0)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB4_64B_WORD3
<link=p.CAN3.MB4_64B_WORD3>
#### p.can3.mb7_32b_word7
<link=p.CAN3.MB7_32B_WORD7>
#### CAN3.ID20
<link=p.CAN3.ID20>
#### p.can3.mb20_8b_id
<link=p.CAN3.MB20_8B_ID>
#### p.can3.mb4_64b_word8
<link=p.CAN3.MB4_64B_WORD8>
#### CAN3.WORD120
<link=p.CAN3.WORD120>
#### p.can3.mb14_16b_cs
<link=p.CAN3.MB14_16B_CS>
#### p.CAN3.MB14_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d81d4[0m (0x401d8000 + 0x01d4)
Message Buffer 14 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb14_16b_id
<link=p.CAN3.MB14_16B_ID>
#### p.can3.mb4_64b_word11
<link=p.CAN3.MB4_64B_WORD11>
#### p.CAN3.MB21_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81d8[0m (0x401d8000 + 0x01d8)
Message Buffer 21 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word021
<link=p.CAN3.WORD021>
#### can3.mb14_16b_word1
<link=p.CAN3.MB14_16B_WORD1>
#### CAN3.MB8_32B_WORD6
<link=p.CAN3.MB8_32B_WORD6>
#### CAN3.MB9_32B_CS
<link=p.CAN3.MB9_32B_CS>
#### p.CAN3.MB5_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d81ec[0m (0x401d8000 + 0x01ec)
Message Buffer 5 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB5_64B_WORD1
<link=p.CAN3.MB5_64B_WORD1>
#### p.CAN3.MB5_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d81f8[0m (0x401d8000 + 0x01f8)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word123
<link=p.CAN3.WORD123>
#### p.can3.mb24_8b_cs
<link=p.CAN3.MB24_8B_CS>
#### can3.mb5_64b_word4
<link=p.CAN3.MB5_64B_WORD4>
#### p.can3.id24
<link=p.CAN3.ID24>
#### CAN3.MB16_16B_ID
<link=p.CAN3.MB16_16B_ID>
#### p.CAN3.MB9_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d820c[0m (0x401d8000 + 0x020c)
Message Buffer 9 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb16_16b_word2
<link=p.CAN3.MB16_16B_WORD2>
#### CAN3.MB25_8B_ID
<link=p.CAN3.MB25_8B_ID>
#### CAN3.WORD025
<link=p.CAN3.WORD025>
#### can3.mb17_16b_id
<link=p.CAN3.MB17_16B_ID>
#### p.can3.cs26
<link=p.CAN3.CS26>
#### can3.mb5_64b_word12
<link=p.CAN3.MB5_64B_WORD12>
#### CAN3.MB10_32B_WORD4
<link=p.CAN3.MB10_32B_WORD4>
#### p.can3.mb26_8b_word0
<link=p.CAN3.MB26_8B_WORD0>
#### can3.mb26_8b_word0
<link=p.CAN3.MB26_8B_WORD0>
#### p.can3.mb10_32b_word6
<link=p.CAN3.MB10_32B_WORD6>
#### p.CAN3.MB27_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8230[0m (0x401d8000 + 0x0230)
Message Buffer 27 CS Register
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
#### p.CAN3.MB27_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8234[0m (0x401d8000 + 0x0234)
Message Buffer 27 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb6_64b_id
<link=p.CAN3.MB6_64B_ID>
#### CAN3.MB18_16B_WORD1
<link=p.CAN3.MB18_16B_WORD1>
#### can3.cs28
<link=p.CAN3.CS28>
#### can3.mb11_32b_word3
<link=p.CAN3.MB11_32B_WORD3>
#### CAN3.MB11_32B_WORD3
<link=p.CAN3.MB11_32B_WORD3>
#### CAN3.CS29
<link=p.CAN3.CS29>
#### p.can3.mb29_8b_cs
<link=p.CAN3.MB29_8B_CS>
#### p.CAN3.ID29
<lang=dft>
 (rw)  [1;33m0x401d8254[0m (0x401d8000 + 0x0254)
Message Buffer 29 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB19_16B_WORD1
<link=p.CAN3.MB19_16B_WORD1>
#### can3.mb6_64b_word7
<link=p.CAN3.MB6_64B_WORD7>
#### can3.mb19_16b_word2
<link=p.CAN3.MB19_16B_WORD2>
#### CAN3.MB20_16B_ID
<link=p.CAN3.MB20_16B_ID>
#### p.CAN3.MB20_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8270[0m (0x401d8000 + 0x0270)
Message Buffer 20 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB20_16B_WORD3
<link=p.CAN3.MB20_16B_WORD3>
#### CAN3.MB21_16B_CS
<link=p.CAN3.MB21_16B_CS>
#### CAN3.MB12_32B_WORD7
<link=p.CAN3.MB12_32B_WORD7>
#### CAN3.WORD032
<link=p.CAN3.WORD032>
#### CAN3.CS33
<link=p.CAN3.CS33>
#### can3.mb13_32b_word0
<link=p.CAN3.MB13_32B_WORD0>
#### p.can3.mb7_64b_word4
<link=p.CAN3.MB7_64B_WORD4>
#### p.CAN3.MB22_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8294[0m (0x401d8000 + 0x0294)
Message Buffer 22 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb22_16b_id
<link=p.CAN3.MB22_16B_ID>
#### p.can3.mb13_32b_word2
<link=p.CAN3.MB13_32B_WORD2>
#### p.CAN3.MB22_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8298[0m (0x401d8000 + 0x0298)
Message Buffer 22 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB13_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d829c[0m (0x401d8000 + 0x029c)
Message Buffer 13 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB22_16B_WORD1
<link=p.CAN3.MB22_16B_WORD1>
#### can3.mb33_8b_word1
<link=p.CAN3.MB33_8B_WORD1>
#### CAN3.MB7_64B_WORD8
<link=p.CAN3.MB7_64B_WORD8>
#### p.CAN3.MB34_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d82a4[0m (0x401d8000 + 0x02a4)
Message Buffer 34 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB13_32B_WORD6
<link=p.CAN3.MB13_32B_WORD6>
#### can3.mb23_16b_cs
<link=p.CAN3.MB23_16B_CS>
#### CAN3.MB34_8B_WORD0
<link=p.CAN3.MB34_8B_WORD0>
#### p.CAN3.MB7_64B_WORD10
<lang=dft>
 (rw)  [1;33m0x401d82a8[0m (0x401d8000 + 0x02a8)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_43[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_42[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_41[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_40[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD134
<lang=dft>
 (rw)  [1;33m0x401d82ac[0m (0x401d8000 + 0x02ac)
Message Buffer 34 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word134
<link=p.CAN3.WORD134>
#### p.can3.cs35
<link=p.CAN3.CS35>
#### p.CAN3.MB14_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d82b0[0m (0x401d8000 + 0x02b0)
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
#### can3.mb14_32b_cs
<link=p.CAN3.MB14_32B_CS>
#### CAN3.MB7_64B_WORD12
<link=p.CAN3.MB7_64B_WORD12>
#### p.CAN3.MB14_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d82b4[0m (0x401d8000 + 0x02b4)
Message Buffer 14 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB14_32B_WORD0
<link=p.CAN3.MB14_32B_WORD0>
#### can3.word035
<link=p.CAN3.WORD035>
#### p.can3.mb7_64b_word15
<link=p.CAN3.MB7_64B_WORD15>
#### p.can3.mb14_32b_word2
<link=p.CAN3.MB14_32B_WORD2>
#### can3.id36
<link=p.CAN3.ID36>
#### CAN3.MB36_8B_ID
<link=p.CAN3.MB36_8B_ID>
#### p.can3.mb24_16b_word0
<link=p.CAN3.MB24_16B_WORD0>
#### p.can3.mb36_8b_word0
<link=p.CAN3.MB36_8B_WORD0>
#### p.CAN3.MB36_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82cc[0m (0x401d8000 + 0x02cc)
Message Buffer 36 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb36_8b_word1
<link=p.CAN3.MB36_8B_WORD1>
#### CAN3.ID37
<link=p.CAN3.ID37>
#### p.can3.mb25_16b_cs
<link=p.CAN3.MB25_16B_CS>
#### CAN3.MB37_8B_WORD0
<link=p.CAN3.MB37_8B_WORD0>
#### CAN3.MB15_32B_ID
<link=p.CAN3.MB15_32B_ID>
#### can3.mb8_64b_word5
<link=p.CAN3.MB8_64B_WORD5>
#### p.can3.id38
<link=p.CAN3.ID38>
#### CAN3.MB38_8B_WORD0
<link=p.CAN3.MB38_8B_WORD0>
#### p.can3.mb8_64b_word9
<link=p.CAN3.MB8_64B_WORD9>
#### can3.mb39_8b_cs
<link=p.CAN3.MB39_8B_CS>
#### can3.mb39_8b_id
<link=p.CAN3.MB39_8B_ID>
#### can3.mb15_32b_word7
<link=p.CAN3.MB15_32B_WORD7>
#### CAN3.MB15_32B_WORD7
<link=p.CAN3.MB15_32B_WORD7>
#### p.can3.mb26_16b_word2
<link=p.CAN3.MB26_16B_WORD2>
#### can3.mb8_64b_word14
<link=p.CAN3.MB8_64B_WORD14>
#### p.CAN3.WORD040
<lang=dft>
 (rw)  [1;33m0x401d8308[0m (0x401d8000 + 0x0308)
Message Buffer 40 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB9_64B_ID
<link=p.CAN3.MB9_64B_ID>
#### CAN3.MB41_8B_CS
<link=p.CAN3.MB41_8B_CS>
#### CAN3.MB16_32B_WORD3
<link=p.CAN3.MB16_32B_WORD3>
#### p.can3.mb27_16b_word3
<link=p.CAN3.MB27_16B_WORD3>
#### CAN3.MB41_8B_WORD1
<link=p.CAN3.MB41_8B_WORD1>
#### CAN3.MB9_64B_WORD3
<link=p.CAN3.MB9_64B_WORD3>
#### can3.cs42
<link=p.CAN3.CS42>
#### CAN3.ID42
<link=p.CAN3.ID42>
#### p.can3.mb9_64b_word6
<link=p.CAN3.MB9_64B_WORD6>
#### CAN3.CS43
<link=p.CAN3.CS43>
#### CAN3.MB17_32B_WORD2
<link=p.CAN3.MB17_32B_WORD2>
#### can3.mb9_64b_word10
<link=p.CAN3.MB9_64B_WORD10>
#### can3.mb17_32b_word4
<link=p.CAN3.MB17_32B_WORD4>
#### p.can3.mb17_32b_word6
<link=p.CAN3.MB17_32B_WORD6>
#### p.CAN3.MB17_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d834c[0m (0x401d8000 + 0x034c)
Message Buffer 17 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB29_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d834c[0m (0x401d8000 + 0x034c)
Message Buffer 29 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB29_16B_WORD3
<link=p.CAN3.MB29_16B_WORD3>
#### p.CAN3.CS45
<lang=dft>
 (rw)  [1;33m0x401d8350[0m (0x401d8000 + 0x0350)
Message Buffer 45 CS Register
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
#### CAN3.MB18_32B_ID
<link=p.CAN3.MB18_32B_ID>
#### p.CAN3.MB45_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8358[0m (0x401d8000 + 0x0358)
Message Buffer 45 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb18_32b_word1
<link=p.CAN3.MB18_32B_WORD1>
#### p.can3.mb10_64b_word2
<link=p.CAN3.MB10_64B_WORD2>
#### can3.mb46_8b_id
<link=p.CAN3.MB46_8B_ID>
#### CAN3.MB46_8B_ID
<link=p.CAN3.MB46_8B_ID>
#### can3.mb18_32b_word4
<link=p.CAN3.MB18_32B_WORD4>
#### can3.mb46_8b_word0
<link=p.CAN3.MB46_8B_WORD0>
#### CAN3.WORD046
<link=p.CAN3.WORD046>
#### p.can3.cs47
<link=p.CAN3.CS47>
#### CAN3.MB10_64B_WORD6
<link=p.CAN3.MB10_64B_WORD6>
#### can3.mb31_16b_word2
<link=p.CAN3.MB31_16B_WORD2>
#### p.CAN3.MB19_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d837c[0m (0x401d8000 + 0x037c)
Message Buffer 19 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb19_32b_id
<link=p.CAN3.MB19_32B_ID>
#### p.can3.mb32_16b_cs
<link=p.CAN3.MB32_16B_CS>
#### can3.id48
<link=p.CAN3.ID48>
#### CAN3.MB48_8B_WORD0
<link=p.CAN3.MB48_8B_WORD0>
#### p.CAN3.MB48_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d838c[0m (0x401d8000 + 0x038c)
Message Buffer 48 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB10_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d8390[0m (0x401d8000 + 0x0390)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb49_8b_word0
<link=p.CAN3.MB49_8B_WORD0>
#### can3.mb49_8b_word0
<link=p.CAN3.MB49_8B_WORD0>
#### p.can3.mb11_64b_word2
<link=p.CAN3.MB11_64B_WORD2>
#### p.CAN3.MB33_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d83a8[0m (0x401d8000 + 0x03a8)
Message Buffer 33 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb33_16b_word2
<link=p.CAN3.MB33_16B_WORD2>
#### CAN3.MB50_8B_WORD0
<link=p.CAN3.MB50_8B_WORD0>
#### p.can3.word050
<link=p.CAN3.WORD050>
#### can3.mb20_32b_word1
<link=p.CAN3.MB20_32B_WORD1>
#### can3.cs51
<link=p.CAN3.CS51>
#### p.CAN3.MB34_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d83b0[0m (0x401d8000 + 0x03b0)
Message Buffer 34 CS Register
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
#### can3.mb34_16b_cs
<link=p.CAN3.MB34_16B_CS>
#### p.CAN3.MB34_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83b8[0m (0x401d8000 + 0x03b8)
Message Buffer 34 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB51_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83b8[0m (0x401d8000 + 0x03b8)
Message Buffer 51 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word151
<link=p.CAN3.WORD151>
#### CAN3.WORD151
<link=p.CAN3.WORD151>
#### can3.mb11_64b_word9
<link=p.CAN3.MB11_64B_WORD9>
#### p.can3.mb52_8b_id
<link=p.CAN3.MB52_8B_ID>
#### CAN3.MB21_32B_CS
<link=p.CAN3.MB21_32B_CS>
#### CAN3.MB35_16B_CS
<link=p.CAN3.MB35_16B_CS>
#### CAN3.MB11_64B_WORD11
<link=p.CAN3.MB11_64B_WORD11>
#### can3.mb21_32b_word1
<link=p.CAN3.MB21_32B_WORD1>
#### can3.mb53_8b_id
<link=p.CAN3.MB53_8B_ID>
#### p.CAN3.MB35_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d83d8[0m (0x401d8000 + 0x03d8)
Message Buffer 35 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb35_16b_word2
<link=p.CAN3.MB35_16B_WORD2>
#### p.can3.mb53_8b_word1
<link=p.CAN3.MB53_8B_WORD1>
#### can3.mb12_64b_cs
<link=p.CAN3.MB12_64B_CS>
#### p.CAN3.MB21_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d83e0[0m (0x401d8000 + 0x03e0)
Message Buffer 21 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB36_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83ec[0m (0x401d8000 + 0x03ec)
Message Buffer 36 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb12_64b_word2
<link=p.CAN3.MB12_64B_WORD2>
#### CAN3.MB55_8B_CS
<link=p.CAN3.MB55_8B_CS>
#### can3.mb22_32b_word1
<link=p.CAN3.MB22_32B_WORD1>
#### p.CAN3.MB56_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8400[0m (0x401d8000 + 0x0400)
Message Buffer 56 CS Register
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
#### p.can3.mb12_64b_word7
<link=p.CAN3.MB12_64B_WORD7>
#### p.CAN3.MB37_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8404[0m (0x401d8000 + 0x0404)
Message Buffer 37 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb37_16b_word1
<link=p.CAN3.MB37_16B_WORD1>
#### p.can3.mb56_8b_word1
<link=p.CAN3.MB56_8B_WORD1>
#### can3.mb56_8b_word1
<link=p.CAN3.MB56_8B_WORD1>
#### p.can3.mb38_16b_word0
<link=p.CAN3.MB38_16B_WORD0>
#### can3.mb12_64b_word13
<link=p.CAN3.MB12_64B_WORD13>
#### p.CAN3.WORD157
<lang=dft>
 (rw)  [1;33m0x401d841c[0m (0x401d8000 + 0x041c)
Message Buffer 57 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.cs58
<link=p.CAN3.CS58>
#### CAN3.CS58
<link=p.CAN3.CS58>
#### p.can3.mb58_8b_cs
<link=p.CAN3.MB58_8B_CS>
#### p.CAN3.ID58
<lang=dft>
 (rw)  [1;33m0x401d8424[0m (0x401d8000 + 0x0424)
Message Buffer 58 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb12_64b_word15
<link=p.CAN3.MB12_64B_WORD15>
#### can3.mb23_32b_word1
<link=p.CAN3.MB23_32B_WORD1>
#### p.CAN3.MB23_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8428[0m (0x401d8000 + 0x0428)
Message Buffer 23 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb39_16b_cs
<link=p.CAN3.MB39_16B_CS>
#### can3.word058
<link=p.CAN3.WORD058>
#### p.CAN3.MB39_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d842c[0m (0x401d8000 + 0x042c)
Message Buffer 39 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB23_32B_WORD4
<link=p.CAN3.MB23_32B_WORD4>
#### can3.mb13_64b_word2
<link=p.CAN3.MB13_64B_WORD2>
#### p.can3.mb23_32b_word6
<link=p.CAN3.MB23_32B_WORD6>
#### CAN3.WORD059
<link=p.CAN3.WORD059>
#### can3.word159
<link=p.CAN3.WORD159>
#### p.CAN3.MB40_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8440[0m (0x401d8000 + 0x0440)
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
#### p.can3.mb40_16b_cs
<link=p.CAN3.MB40_16B_CS>
#### CAN3.MB13_64B_WORD5
<link=p.CAN3.MB13_64B_WORD5>
#### p.CAN3.MB13_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8448[0m (0x401d8000 + 0x0448)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB40_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d844c[0m (0x401d8000 + 0x044c)
Message Buffer 40 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB40_16B_WORD1
<link=p.CAN3.MB40_16B_WORD1>
#### CAN3.MB60_8B_WORD1
<link=p.CAN3.MB60_8B_WORD1>
#### p.can3.word160
<link=p.CAN3.WORD160>
#### can3.mb61_8b_id
<link=p.CAN3.MB61_8B_ID>
#### p.can3.mb61_8b_word1
<link=p.CAN3.MB61_8B_WORD1>
#### can3.word062
<link=p.CAN3.WORD062>
#### p.CAN3.MB62_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d846c[0m (0x401d8000 + 0x046c)
Message Buffer 62 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb63_8b_cs
<link=p.CAN3.MB63_8B_CS>
#### p.can3.mb63_8b_id
<link=p.CAN3.MB63_8B_ID>
#### can3.mb63_8b_word0
<link=p.CAN3.MB63_8B_WORD0>
#### p.CAN3.WORD163
<lang=dft>
 (rw)  [1;33m0x401d847c[0m (0x401d8000 + 0x047c)
Message Buffer 63 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.rximr[4]
<link=p.CAN3.RXIMR[4]>
#### CAN3.RXIMR[4]
<link=p.CAN3.RXIMR[4]>
#### can3.rximr[7]
<link=p.CAN3.RXIMR[7]>
#### CAN3.RXIMR[12]
<link=p.CAN3.RXIMR[12]>
#### p.can3.rximr[13]
<link=p.CAN3.RXIMR[13]>
#### p.can3.rximr[14]
<link=p.CAN3.RXIMR[14]>
#### CAN3.RXIMR[15]
<link=p.CAN3.RXIMR[15]>
#### p.CAN3.RXIMR[17]
<lang=dft>
 (rw)  [1;33m0x401d88c4[0m (0x401d8000 + 0x08c4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.CAN3.RXIMR[18]
<lang=dft>
 (rw)  [1;33m0x401d88c8[0m (0x401d8000 + 0x08c8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.CAN3.RXIMR[22]
<lang=dft>
 (rw)  [1;33m0x401d88d8[0m (0x401d8000 + 0x08d8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[25]
<link=p.CAN3.RXIMR[25]>
#### p.CAN3.RXIMR[29]
<lang=dft>
 (rw)  [1;33m0x401d88f4[0m (0x401d8000 + 0x08f4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.CAN3.RXIMR[31]
<lang=dft>
 (rw)  [1;33m0x401d88fc[0m (0x401d8000 + 0x08fc)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.CAN3.RXIMR[36]
<lang=dft>
 (rw)  [1;33m0x401d8910[0m (0x401d8000 + 0x0910)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[41]
<link=p.CAN3.RXIMR[41]>
#### p.CAN3.RXIMR[45]
<lang=dft>
 (rw)  [1;33m0x401d8934[0m (0x401d8000 + 0x0934)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[62]
<link=p.CAN3.RXIMR[62]>
#### CAN3.FDCRC
<link=p.CAN3.FDCRC>
#### can3.erfsr
<link=p.CAN3.ERFSR>
#### CAN3.HR_TIME_STAMP[4]
<link=p.CAN3.HR_TIME_STAMP[4]>
#### can3.hr_time_stamp[8]
<link=p.CAN3.HR_TIME_STAMP[8]>
#### p.can3.hr_time_stamp[15]
<link=p.CAN3.HR_TIME_STAMP[15]>
#### p.CAN3.HR_TIME_STAMP[16]
<lang=dft>
 (ro)  [1;33m0x401d8c70[0m (0x401d8000 + 0x0c70)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.hr_time_stamp[18]
<link=p.CAN3.HR_TIME_STAMP[18]>
#### can3.hr_time_stamp[27]
<link=p.CAN3.HR_TIME_STAMP[27]>
#### p.CAN3.HR_TIME_STAMP[33]
<lang=dft>
 (ro)  [1;33m0x401d8cb4[0m (0x401d8000 + 0x0cb4)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[33]
<link=p.CAN3.HR_TIME_STAMP[33]>
#### CAN3.HR_TIME_STAMP[35]
<link=p.CAN3.HR_TIME_STAMP[35]>
#### p.can3.hr_time_stamp[39]
<link=p.CAN3.HR_TIME_STAMP[39]>
#### can3.hr_time_stamp[57]
<link=p.CAN3.HR_TIME_STAMP[57]>
#### CAN3.HR_TIME_STAMP[59]
<link=p.CAN3.HR_TIME_STAMP[59]>
#### p.CAN3.HR_TIME_STAMP[60]
<lang=dft>
 (ro)  [1;33m0x401d8d20[0m (0x401d8000 + 0x0d20)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[60]
<link=p.CAN3.HR_TIME_STAMP[60]>
#### CAN3.HR_TIME_STAMP[61]
<link=p.CAN3.HR_TIME_STAMP[61]>
#### CAN3.ERFFEL[8]
<link=p.CAN3.ERFFEL[8]>
#### p.can3.erffel[13]
<link=p.CAN3.ERFFEL[13]>
#### CAN3.ERFFEL[18]
<link=p.CAN3.ERFFEL[18]>
#### can3.erffel[20]
<link=p.CAN3.ERFFEL[20]>
#### CAN3.ERFFEL[23]
<link=p.CAN3.ERFFEL[23]>
#### CAN3.ERFFEL[24]
<link=p.CAN3.ERFFEL[24]>
#### CAN3.ERFFEL[29]
<link=p.CAN3.ERFFEL[29]>
#### p.CAN3.ERFFEL[30]
<lang=dft>
 (rw)  [1;33m0x401db078[0m (0x401d8000 + 0x3078)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[33]
<link=p.CAN3.ERFFEL[33]>
#### p.can3.erffel[35]
<link=p.CAN3.ERFFEL[35]>
#### p.can3.erffel[40]
<link=p.CAN3.ERFFEL[40]>
#### CAN3.ERFFEL[51]
<link=p.CAN3.ERFFEL[51]>
#### p.CAN3.ERFFEL[52]
<lang=dft>
 (rw)  [1;33m0x401db0d0[0m (0x401d8000 + 0x30d0)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[55]
<link=p.CAN3.ERFFEL[55]>
#### can3.erffel[73]
<link=p.CAN3.ERFFEL[73]>
#### CAN3.ERFFEL[74]
<link=p.CAN3.ERFFEL[74]>
#### can3.erffel[79]
<link=p.CAN3.ERFFEL[79]>
#### can3.erffel[83]
<link=p.CAN3.ERFFEL[83]>
#### p.can3.erffel[89]
<link=p.CAN3.ERFFEL[89]>
#### can3.erffel[89]
<link=p.CAN3.ERFFEL[89]>
#### can3.erffel[94]
<link=p.CAN3.ERFFEL[94]>
#### p.CAN3.ERFFEL[99]
<lang=dft>
 (rw)  [1;33m0x401db18c[0m (0x401d8000 + 0x318c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[101]
<link=p.CAN3.ERFFEL[101]>
#### p.CAN3.ERFFEL[104]
<lang=dft>
 (rw)  [1;33m0x401db1a0[0m (0x401d8000 + 0x31a0)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[109]
<lang=dft>
 (rw)  [1;33m0x401db1b4[0m (0x401d8000 + 0x31b4)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[110]
<lang=dft>
 (rw)  [1;33m0x401db1b8[0m (0x401d8000 + 0x31b8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[114]
<link=p.CAN3.ERFFEL[114]>
#### p.can3.erffel[120]
<link=p.CAN3.ERFFEL[120]>
#### p.tmr1.comp11
<link=p.TMR1.COMP11>
#### TMR1.COMP12
<link=p.TMR1.COMP12>
#### tmr1.comp20
<link=p.TMR1.COMP20>
#### p.TMR1.CAPT0
<lang=dft>
 (rw)  [1;33m0x401dc004[0m (0x401dc000 + 0x0004)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### TMR1.LOAD0
<link=p.TMR1.LOAD0>
#### TMR1.HOLD0
<link=p.TMR1.HOLD0>
#### tmr1.cntr2
<link=p.TMR1.CNTR2>
#### p.tmr1.sctrl0
<link=p.TMR1.SCTRL0>
#### TMR1.SCTRL1
<link=p.TMR1.SCTRL1>
#### TMR1.CMPLD12
<link=p.TMR1.CMPLD12>
#### p.TMR1.CMPLD21
<lang=dft>
 (rw)  [1;33m0x401dc032[0m (0x401dc000 + 0x0032)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### TMR1.CMPLD23
<link=p.TMR1.CMPLD23>
#### TMR1.CSCTRL3
<link=p.TMR1.CSCTRL3>
#### p.TMR1.FILT2
<lang=dft>
 (rw)  [1;33m0x401dc056[0m (0x401dc000 + 0x0056)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### tmr1.dma1
<link=p.TMR1.DMA1>
#### p.TMR1.ENBL
<lang=dft>
 (rw)  [1;33m0x401dc01e[0m (0x401dc000 + 0x001e)
Timer Channel Enable Register
 (rw) (04)  [0;32mENBL[0m  - [03:00] -  Timer Channel Enable
      0 - ENBL_0 :
         Timer channel is disabled.
      0x1 - ENBL_1 :
         Timer channel is enabled. (default)
</lang>
#### TMR2.COMP10
<link=p.TMR2.COMP10>
#### tmr2.comp11
<link=p.TMR2.COMP11>
#### p.tmr2.comp23
<link=p.TMR2.COMP23>
#### p.TMR2.CAPT3
<lang=dft>
 (rw)  [1;33m0x401e0064[0m (0x401e0000 + 0x0064)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### TMR2.LOAD3
<link=p.TMR2.LOAD3>
#### TMR2.HOLD3
<link=p.TMR2.HOLD3>
#### TMR2.SCTRL2
<link=p.TMR2.SCTRL2>
#### p.tmr2.filt3
<link=p.TMR2.FILT3>
#### TMR2.DMA3
<link=p.TMR2.DMA3>
#### TMR2.ENBL
<link=p.TMR2.ENBL>
#### p.TMR3.COMP23
<lang=dft>
 (rw)  [1;33m0x401e4062[0m (0x401e4000 + 0x0062)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### TMR3.LOAD2
<link=p.TMR3.LOAD2>
#### TMR3.HOLD3
<link=p.TMR3.HOLD3>
#### p.tmr3.cntr1
<link=p.TMR3.CNTR1>
#### TMR3.CTRL2
<link=p.TMR3.CTRL2>
#### tmr3.sctrl0
<link=p.TMR3.SCTRL0>
#### p.TMR3.SCTRL3
<lang=dft>
 (rw)  [1;33m0x401e406e[0m (0x401e4000 + 0x006e)
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
#### p.TMR3.CMPLD13
<lang=dft>
 (rw)  [1;33m0x401e4070[0m (0x401e4000 + 0x0070)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### p.TMR3.CMPLD22
<lang=dft>
 (rw)  [1;33m0x401e4052[0m (0x401e4000 + 0x0052)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### TMR3.CMPLD22
<link=p.TMR3.CMPLD22>
#### tmr3.csctrl3
<link=p.TMR3.CSCTRL3>
#### p.tmr3.dma0
<link=p.TMR3.DMA0>
#### TMR4.COMP11
<link=p.TMR4.COMP11>
#### tmr4.comp12
<link=p.TMR4.COMP12>
#### TMR4.COMP20
<link=p.TMR4.COMP20>
#### p.TMR4.COMP21
<lang=dft>
 (rw)  [1;33m0x401e8022[0m (0x401e8000 + 0x0022)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### p.tmr4.capt2
<link=p.TMR4.CAPT2>
#### p.TMR4.LOAD2
<lang=dft>
 (rw)  [1;33m0x401e8046[0m (0x401e8000 + 0x0046)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### tmr4.load3
<link=p.TMR4.LOAD3>
#### p.TMR4.HOLD0
<lang=dft>
 (rw)  [1;33m0x401e8008[0m (0x401e8000 + 0x0008)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.tmr4.cntr0
<link=p.TMR4.CNTR0>
#### tmr4.cntr3
<link=p.TMR4.CNTR3>
#### TMR4.SCTRL3
<link=p.TMR4.SCTRL3>
#### p.tmr4.cmpld11
<link=p.TMR4.CMPLD11>
#### tmr4.cmpld13
<link=p.TMR4.CMPLD13>
#### tmr4.filt1
<link=p.TMR4.FILT1>
#### p.tmr4.filt2
<link=p.TMR4.FILT2>
#### TMR4.DMA3
<link=p.TMR4.DMA3>
#### p.TMR4.ENBL
<lang=dft>
 (rw)  [1;33m0x401e801e[0m (0x401e8000 + 0x001e)
Timer Channel Enable Register
 (rw) (04)  [0;32mENBL[0m  - [03:00] -  Timer Channel Enable
      0 - ENBL_0 :
         Timer channel is disabled.
      0x1 - ENBL_1 :
         Timer channel is enabled. (default)
</lang>
#### GPT1.SR
<link=p.GPT1.SR>
#### GPT1.OCR1
<link=p.GPT1.OCR1>
#### p.OCOTP.TIMING
<lang=dft>
 (rw)  [1;33m0x401f4010[0m (0x401f4000 + 0x0010)
OTP Controller Timing Register
 (rw) (12)  [0;32mSTROBE_PROG[0m  - [11:00] -  STROBE_PROG
 (rw) (04)  [0;32mRELAX[0m  - [15:12] -  RELAX
 (rw) (06)  [0;32mSTROBE_READ[0m  - [21:16] -  STROBE_READ
 (rw) (06)  [0;32mWAIT[0m  - [27:22] -  WAIT
 (ro) (04)  [0;32mRSRVD0[0m  - [31:28] -  RSRVD0
</lang>
#### ocotp.sw_sticky
<link=p.OCOTP.SW_STICKY>
#### OCOTP.SW_STICKY
<link=p.OCOTP.SW_STICKY>
#### p.OCOTP.SCS_SET
<lang=dft>
 (rw)  [1;33m0x401f4064[0m (0x401f4000 + 0x0064)
Software Controllable Signals Register
 (rw) (01)  [0;32mHAB_JDE[0m  - [00:00] -  HAB_JDE
 (rw) (30)  [0;32mSPARE[0m  - [30:01] -  SPARE
 (rw) (01)  [0;32mLOCK[0m  - [31:31] -  LOCK
</lang>
#### ocotp.crc_value
<link=p.OCOTP.CRC_VALUE>
#### ocotp.timing2
<link=p.OCOTP.TIMING2>
#### p.ocotp.mem1
<link=p.OCOTP.MEM1>
#### ocotp.mem1
<link=p.OCOTP.MEM1>
#### p.OCOTP.OTPMK0
<lang=dft>
 (rw)  [1;33m0x401f4500[0m (0x401f4000 + 0x0500)
Value of OTP Bank2 Word0 (OTPMK Key)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### ocotp.otpmk5
<link=p.OCOTP.OTPMK5>
#### p.ocotp.sw_gp1
<link=p.OCOTP.SW_GP1>
#### OCOTP.SW_GP1
<link=p.OCOTP.SW_GP1>
#### p.OCOTP.ROM_PATCH1
<lang=dft>
 (rw)  [1;33m0x401f4810[0m (0x401f4000 + 0x0810)
Value of OTP Bank6 Word1 (ROM Patch)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.ROM_PATCH5
<link=p.OCOTP.ROM_PATCH5>
#### p.OCOTP.GP30
<lang=dft>
 (rw)  [1;33m0x401f4880[0m (0x401f4000 + 0x0880)
Value of OTP Bank7 Word0 (GP3)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.gp42
<link=p.OCOTP.GP42>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_00>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_03>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_10>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_13>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_25
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_25>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_26
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_26>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_35
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_35>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_36
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_36>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_03>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_13>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b0_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_14>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_00>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_07>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_10>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_02
<lang=dft>
 (rw)  [1;33m0x401f8144[0m (0x401f8000 + 0x0144)
SW_MUX_CTL_PAD_GPIO_B0_02 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_HSYNC of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER1_TIMER2 of instance: qtimer1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXCAN1_TX of instance: flexcan1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPSPI4_SDO of instance: lpspi4
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO02 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO02 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SEMC_CSX03 of instance: semc
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_1588_EVENT0_OUT of instance: enet
         2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_02
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_11>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_15
<lang=dft>
 (rw)  [1;33m0x401f8178[0m (0x401f8000 + 0x0178)
SW_MUX_CTL_PAD_GPIO_B0_15 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA11 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT13 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ARM_RXEV of instance: cm7_mx6rt
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_RX_BCLK of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO15 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO15 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SRC_BOOT_CFG11 of instance: src
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TX_CLK of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: ENET2_REF_CLK2 of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_15
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_05>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_08
<lang=dft>
 (rw)  [1;33m0x401f819c[0m (0x401f8000 + 0x019c)
SW_MUX_CTL_PAD_GPIO_B1_08 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA20 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER1_TIMER3 of instance: qtimer1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_DATA11 of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_TX_DATA01 of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO24 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO24 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXCAN2_TX of instance: flexcan2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT1_COMPARE2 of instance: gpt1
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO24 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_08
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_12>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_02
<lang=dft>
 (rw)  [1;33m0x401f81c4[0m (0x401f8000 + 0x01c4)
SW_MUX_CTL_PAD_GPIO_SD_B0_02 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC1_DATA0 of instance: usdhc1
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMA01 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART8_CTS_B of instance: lpuart8
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT06 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI1_SDO of instance: lpspi1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO14 of instance: gpio3
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RX_ER of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: SEMC_CLK5 of instance: semc
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B0_02
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_04>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_07>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_09
<lang=dft>
 (rw)  [1;33m0x401f81f8[0m (0x401f8000 + 0x01f8)
SW_MUX_CTL_PAD_GPIO_SD_B1_09 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_DATA5 of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIA_DATA01 of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART7_RX of instance: lpuart7
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_SYNC of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI2_SDI of instance: lpspi2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO09 of instance: gpio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_09
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_10>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_04>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_06
<lang=dft>
 (rw)  [1;33m0x401f821c[0m (0x401f8000 + 0x021c)
SW_PAD_CTL_PAD_GPIO_EMC_06 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_07>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_13>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_17
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_17>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_20
<lang=dft>
 (rw)  [1;33m0x401f8254[0m (0x401f8000 + 0x0254)
SW_PAD_CTL_PAD_GPIO_EMC_20 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_21
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_21>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_22
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_22>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_31
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_31>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_37
<lang=dft>
 (rw)  [1;33m0x401f8298[0m (0x401f8000 + 0x0298)
SW_PAD_CTL_PAD_GPIO_EMC_37 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_40
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_40>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_01>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_03
<lang=dft>
 (rw)  [1;33m0x401f82b8[0m (0x401f8000 + 0x02b8)
SW_PAD_CTL_PAD_GPIO_AD_B0_03 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_04>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_06>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_01>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_06>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_04>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_07
<lang=dft>
 (rw)  [1;33m0x401f8348[0m (0x401f8000 + 0x0348)
SW_PAD_CTL_PAD_GPIO_B0_07 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_14
<lang=dft>
 (rw)  [1;33m0x401f8364[0m (0x401f8000 + 0x0364)
SW_PAD_CTL_PAD_GPIO_B0_14 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_14>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_00>
#### iomuxc.sw_pad_ctl_pad_gpio_b1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_03>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_08
<lang=dft>
 (rw)  [1;33m0x401f838c[0m (0x401f8000 + 0x038c)
SW_PAD_CTL_PAD_GPIO_B1_08 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_b1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_10>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_00>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_04>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_01>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_08
<lang=dft>
 (rw)  [1;33m0x401f83e4[0m (0x401f8000 + 0x03e4)
SW_PAD_CTL_PAD_GPIO_SD_B1_08 SW PAD Control Register
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
#### iomuxc.anatop_usb_otg2_id_select_input
<link=p.IOMUXC.ANATOP_USB_OTG2_ID_SELECT_INPUT>
#### iomuxc.csi_data04_select_input
<link=p.IOMUXC.CSI_DATA04_SELECT_INPUT>
#### IOMUXC.CSI_PIXCLK_SELECT_INPUT
<link=p.IOMUXC.CSI_PIXCLK_SELECT_INPUT>
#### IOMUXC.ENET_MDIO_SELECT_INPUT
<link=p.IOMUXC.ENET_MDIO_SELECT_INPUT>
#### IOMUXC.ENET0_TIMER_SELECT_INPUT
<link=p.IOMUXC.ENET0_TIMER_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM2_PWMA1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f847c[0m (0x401f8000 + 0x047c)
FLEXPWM2_PWMA1_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_08_ALT1 :
         Selecting Pad: GPIO_EMC_08 for Mode: ALT1
      0x1 - GPIO_B0_08_ALT2 :
         Selecting Pad: GPIO_B0_08 for Mode: ALT2
</lang>
#### p.iomuxc.flexpwm4_pwma1_select_input
<link=p.IOMUXC.FLEXPWM4_PWMA1_SELECT_INPUT>
#### iomuxc.lpspi1_pcs0_select_input
<link=p.IOMUXC.LPSPI1_PCS0_SELECT_INPUT>
#### iomuxc.lpspi3_sck_select_input
<link=p.IOMUXC.LPSPI3_SCK_SELECT_INPUT>
#### p.IOMUXC.LPSPI4_PCS0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f851c[0m (0x401f8000 + 0x051c)
LPSPI4_PCS0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_B0_00_ALT3 :
         Selecting Pad: GPIO_B0_00 for Mode: ALT3
      0x1 - GPIO_B1_04_ALT1 :
         Selecting Pad:GPIO_B1_04 for Mode: ALT1
</lang>
#### IOMUXC.LPUART6_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART6_TX_SELECT_INPUT>
#### p.IOMUXC.SAI1_RX_SYNC_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85a4[0m (0x401f8000 + 0x05a4)
SAI1_RX_SYNC_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_04_ALT3 :
         Selecting Pad: GPIO_SD_B1_04 for Mode: ALT3
      0x1 - GPIO_AD_B1_10_ALT3 :
         Selecting Pad: GPIO_AD_B1_10 for Mode: ALT3
      0x2 - GPIO_B0_14_ALT3 :
         Selecting Pad: GPIO_B0_14 for Mode: ALT3
</lang>
#### p.IOMUXC.SAI1_TX_BCLK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85a8[0m (0x401f8000 + 0x05a8)
SAI1_TX_BCLK_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_08_ALT3 :
         Selecting Pad: GPIO_SD_B1_08 for Mode: ALT3
      0x1 - GPIO_AD_B1_14_ALT3 :
         Selecting Pad: GPIO_AD_B1_14 for Mode: ALT3
      0x2 - GPIO_B1_02_ALT3 :
         Selecting Pad: GPIO_B1_02 for Mode: ALT3
</lang>
#### iomuxc.sai2_rx_bclk_select_input
<link=p.IOMUXC.SAI2_RX_BCLK_SELECT_INPUT>
#### p.IOMUXC.SAI2_RX_SYNC_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85bc[0m (0x401f8000 + 0x05bc)
SAI2_RX_SYNC_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_09_ALT2 :
         Selecting Pad: GPIO_EMC_09 for Mode: ALT2
      0x1 - GPIO_AD_B0_07_ALT3 :
         Selecting Pad: GPIO_AD_B0_07 for Mode: ALT3
</lang>
#### p.iomuxc.usdhc2_data1_select_input
<link=p.IOMUXC.USDHC2_DATA1_SELECT_INPUT>
#### IOMUXC.USDHC2_DATA1_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA1_SELECT_INPUT>
#### iomuxc.usdhc2_data5_select_input
<link=p.IOMUXC.USDHC2_DATA5_SELECT_INPUT>
#### p.iomuxc.xbar1_in20_select_input
<link=p.IOMUXC.XBAR1_IN20_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN14_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8644[0m (0x401f8000 + 0x0644)
XBAR1_IN14_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_00_ALT1 :
         Selecting Pad: GPIO_AD_B0_00 for Mode: ALT1
      0x1 - GPIO_B1_00_ALT1 :
         Selecting Pad:GPIO_B1_00 for Mode: ALT1
</lang>
#### p.IOMUXC.XBAR1_IN15_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8648[0m (0x401f8000 + 0x0648)
XBAR1_IN15_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_01_ALT1 :
         Selecting Pad: GPIO_AD_B0_01 for Mode: ALT1
      0x1 - GPIO_B1_01_ALT1 :
         Selecting Pad: GPIO_B1_01 for Mode: ALT1
</lang>
#### p.iomuxc.xbar1_in15_select_input
<link=p.IOMUXC.XBAR1_IN15_SELECT_INPUT>
#### IOMUXC.XBAR1_IN15_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN15_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN25_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8650[0m (0x401f8000 + 0x0650)
XBAR1_IN25_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_15_ALT1 :
         Selecting Pad: GPIO_AD_B0_15 for Mode: ALT1
      0x1 - GPIO_EMC_13_ALT1 :
         Selecting Pad: GPIO_EMC_13 for Mode: ALT1
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_05>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_08>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_09
<lang=dft>
 (rw)  [1;33m0x401f8680[0m (0x401f8000 + 0x0680)
SW_MUX_CTL_PAD_GPIO_SPI_B0_09 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_DQS of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_09
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_11>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_12>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_05>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_07>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_02>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_11>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_13>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_00
<lang=dft>
 (rw)  [1;33m0x401f86ec[0m (0x401f8000 + 0x06ec)
SW_PAD_CTL_PAD_GPIO_SPI_B1_00 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_03>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_06>
#### p.IOMUXC.ENET2_IPG_CLK_RMII_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f870c[0m (0x401f8000 + 0x070c)
ENET2_IPG_CLK_RMII_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_33_ALT9 :
         Selecting Pad: GPIO_EMC_33 for Mode: ALT9
      0x1 - GPIO_SD_B0_01_ALT9 :
         Selecting Pad: GPIO_SD_B0_01 for Mode: ALT9
      0x2 - GPIO_B0_15_ALT9 :
         Selecting Pad: GPIO_B0_15 for Mode: ALT9
</lang>
#### iomuxc.enet2_ipp_ind_mac0_rxdata_select_input_1
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_1>
#### p.iomuxc.enet2_ipp_ind_mac0_rxen_select_input
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT>
#### p.iomuxc.enet2_ipp_ind_mac0_timer_select_input_0
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_TIMER_SELECT_INPUT_0>
#### p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8730[0m (0x401f8000 + 0x0730)
FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SPI_B1_04_ALT0 :
         Selecting Pad: GPIO_SPI_B1_04 for Mode: ALT0
      0x1 - GPIO_EMC_26_ALT8 :
         Selecting Pad: GPIO_EMC_26 for Mode: ALT8
      0x2 - GPIO_SPI_B0_02_ALT0 :
         Selecting Pad: GPIO_SPI_B0_02 for Mode: ALT0
</lang>
#### p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8734[0m (0x401f8000 + 0x0734)
FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SPI_B1_03_ALT0 :
         Selecting Pad: GPIO_SPI_B1_03 for Mode: ALT0
      0x1 - GPIO_EMC_27_ALT8 :
         Selecting Pad: GPIO_EMC_27 for Mode: ALT8
      0x2 - GPIO_SPI_B0_12_ALT0 :
         Selecting Pad: GPIO_SPI_B0_12 for Mode: ALT0
</lang>
#### IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT0_SELECT_INPUT>
#### p.iomuxc.flexspi2_ipp_ind_sck_fb_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_SCK_FB_SELECT_INPUT>
#### p.iomuxc.gpt1_ipp_ind_capin1_select_input
<link=p.IOMUXC.GPT1_IPP_IND_CAPIN1_SELECT_INPUT>
#### p.iomuxc.sai3_ipp_ind_sai_rxdata_select_input_0
<link=p.IOMUXC.SAI3_IPP_IND_SAI_RXDATA_SELECT_INPUT_0>
#### IOMUXC.SAI3_IPP_IND_SAI_RXDATA_SELECT_INPUT_0
<link=p.IOMUXC.SAI3_IPP_IND_SAI_RXDATA_SELECT_INPUT_0>
#### flexspi.ahbcr
<link=p.FLEXSPI.AHBCR>
#### FLEXSPI.AHBCR
<link=p.FLEXSPI.AHBCR>
#### FLEXSPI.INTR
<link=p.FLEXSPI.INTR>
#### FLEXSPI.LUTKEY
<link=p.FLEXSPI.LUTKEY>
#### flexspi.lutcr
<link=p.FLEXSPI.LUTCR>
#### FLEXSPI.AHBRXBUF1CR0
<link=p.FLEXSPI.AHBRXBUF1CR0>
#### FLEXSPI.AHBRXBUF2CR0
<link=p.FLEXSPI.AHBRXBUF2CR0>
#### FLEXSPI.FLSHCR1A1
<link=p.FLEXSPI.FLSHCR1A1>
#### FLEXSPI.DLLCRA
<link=p.FLEXSPI.DLLCRA>
#### flexspi.ahbspndsts
<link=p.FLEXSPI.AHBSPNDSTS>
#### p.flexspi.iptxfsts
<link=p.FLEXSPI.IPTXFSTS>
#### p.flexspi.rfdr[1]
<link=p.FLEXSPI.RFDR[1]>
#### FLEXSPI.RFDR[2]
<link=p.FLEXSPI.RFDR[2]>
#### p.flexspi.rfdr[6]
<link=p.FLEXSPI.RFDR[6]>
#### flexspi.rfdr[6]
<link=p.FLEXSPI.RFDR[6]>
#### p.FLEXSPI.RFDR[11]
<lang=dft>
 (ro)  [1;33m0x402a812c[0m (0x402a8000 + 0x012c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi.rfdr[17]
<link=p.FLEXSPI.RFDR[17]>
#### p.flexspi.tfdr[11]
<link=p.FLEXSPI.TFDR[11]>
#### p.FLEXSPI.TFDR[17]
<lang=dft>
 (wo)  [1;33m0x402a81c4[0m (0x402a8000 + 0x01c4)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi.tfdr[21]
<link=p.FLEXSPI.TFDR[21]>
#### p.FLEXSPI.TFDR[26]
<lang=dft>
 (wo)  [1;33m0x402a81e8[0m (0x402a8000 + 0x01e8)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi.tfdr[27]
<link=p.FLEXSPI.TFDR[27]>
#### FLEXSPI.TFDR[27]
<link=p.FLEXSPI.TFDR[27]>
#### flexspi.tfdr[31]
<link=p.FLEXSPI.TFDR[31]>
#### flexspi.lut[0]
<link=p.FLEXSPI.LUT[0]>
#### p.flexspi.lut[2]
<link=p.FLEXSPI.LUT[2]>
#### flexspi.lut[7]
<link=p.FLEXSPI.LUT[7]>
#### p.FLEXSPI.LUT[15]
<lang=dft>
 (rw)  [1;33m0x402a823c[0m (0x402a8000 + 0x023c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[18]
<link=p.FLEXSPI.LUT[18]>
#### p.flexspi.lut[40]
<link=p.FLEXSPI.LUT[40]>
#### FLEXSPI.LUT[40]
<link=p.FLEXSPI.LUT[40]>
#### p.FLEXSPI.LUT[44]
<lang=dft>
 (rw)  [1;33m0x402a82b0[0m (0x402a8000 + 0x02b0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi.lut[51]
<link=p.FLEXSPI.LUT[51]>
#### flexspi.lut[54]
<link=p.FLEXSPI.LUT[54]>
#### flexspi2.lutkey
<link=p.FLEXSPI2.LUTKEY>
#### p.FLEXSPI2.AHBRXBUF0CR0
<lang=dft>
 (rw)  [1;33m0x402a4020[0m (0x402a4000 + 0x0020)
AHB RX Buffer 0 Control Register 0
 (rw) (08)  [0;32mBUFSZ[0m  - [07:00] -  AHB RX Buffer Size in 64 bits.Refer AHB RX Buffer Management for more details.
 (rw) (04)  [0;32mMSTRID[0m  - [19:16] -  This AHB RX Buffer is assigned according to AHB Master with ID (MSTR_ID). Pleas
 e refer to for AHB RX Buffer allocation.
 (rw) (02)  [0;32mPRIORITY[0m  - [25:24] -  This priority for AHB Master Read which this AHB RX Buffer is assigned. Refer f
 or more details.
 (rw) (01)  [0;32mPREFETCHEN[0m  - [31:31] -  AHB Read Prefetch Enable for current AHB RX Buffer corresponding Master.
</lang>
#### p.flexspi2.flshcr2b1
<link=p.FLEXSPI2.FLSHCR2B1>
#### p.flexspi2.ipcr1
<link=p.FLEXSPI2.IPCR1>
#### FLEXSPI2.DLLCRA
<link=p.FLEXSPI2.DLLCRA>
#### p.flexspi2.dllcrb
<link=p.FLEXSPI2.DLLCRB>
#### FLEXSPI2.STS0
<link=p.FLEXSPI2.STS0>
#### p.FLEXSPI2.STS1
<lang=dft>
 (ro)  [1;33m0x402a40e4[0m (0x402a4000 + 0x00e4)
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
#### flexspi2.rfdr[6]
<link=p.FLEXSPI2.RFDR[6]>
#### p.flexspi2.rfdr[7]
<link=p.FLEXSPI2.RFDR[7]>
#### p.flexspi2.rfdr[10]
<link=p.FLEXSPI2.RFDR[10]>
#### FLEXSPI2.RFDR[18]
<link=p.FLEXSPI2.RFDR[18]>
#### p.flexspi2.rfdr[22]
<link=p.FLEXSPI2.RFDR[22]>
#### p.FLEXSPI2.RFDR[24]
<lang=dft>
 (ro)  [1;33m0x402a4160[0m (0x402a4000 + 0x0160)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.rfdr[26]
<link=p.FLEXSPI2.RFDR[26]>
#### flexspi2.tfdr[2]
<link=p.FLEXSPI2.TFDR[2]>
#### p.FLEXSPI2.TFDR[7]
<lang=dft>
 (wo)  [1;33m0x402a419c[0m (0x402a4000 + 0x019c)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI2.TFDR[9]
<link=p.FLEXSPI2.TFDR[9]>
#### FLEXSPI2.TFDR[13]
<link=p.FLEXSPI2.TFDR[13]>
#### p.flexspi2.tfdr[16]
<link=p.FLEXSPI2.TFDR[16]>
#### FLEXSPI2.TFDR[22]
<link=p.FLEXSPI2.TFDR[22]>
#### FLEXSPI2.TFDR[28]
<link=p.FLEXSPI2.TFDR[28]>
#### flexspi2.tfdr[29]
<link=p.FLEXSPI2.TFDR[29]>
#### flexspi2.tfdr[31]
<link=p.FLEXSPI2.TFDR[31]>
#### p.FLEXSPI2.LUT[5]
<lang=dft>
 (rw)  [1;33m0x402a4214[0m (0x402a4000 + 0x0214)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[10]
<lang=dft>
 (rw)  [1;33m0x402a4228[0m (0x402a4000 + 0x0228)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[11]
<link=p.FLEXSPI2.LUT[11]>
#### p.flexspi2.lut[13]
<link=p.FLEXSPI2.LUT[13]>
#### flexspi2.lut[18]
<link=p.FLEXSPI2.LUT[18]>
#### FLEXSPI2.LUT[20]
<link=p.FLEXSPI2.LUT[20]>
#### flexspi2.lut[22]
<link=p.FLEXSPI2.LUT[22]>
#### FLEXSPI2.LUT[27]
<link=p.FLEXSPI2.LUT[27]>
#### FLEXSPI2.LUT[34]
<link=p.FLEXSPI2.LUT[34]>
#### p.FLEXSPI2.LUT[35]
<lang=dft>
 (rw)  [1;33m0x402a428c[0m (0x402a4000 + 0x028c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[36]
<link=p.FLEXSPI2.LUT[36]>
#### p.flexspi2.lut[38]
<link=p.FLEXSPI2.LUT[38]>
#### p.flexspi2.lut[40]
<link=p.FLEXSPI2.LUT[40]>
#### p.flexspi2.lut[47]
<link=p.FLEXSPI2.LUT[47]>
#### flexspi2.lut[53]
<link=p.FLEXSPI2.LUT[53]>
#### p.flexspi2.lut[54]
<link=p.FLEXSPI2.LUT[54]>
#### p.FLEXSPI2.LUT[61]
<lang=dft>
 (rw)  [1;33m0x402a42f4[0m (0x402a4000 + 0x02f4)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.PXP
<lang=dft>
base: 0x402b4000
AS_BUF          AS_CLRKEYHIGH   AS_CLRKEYLOW    AS_CTRL         
AS_PITCH        CSC1_COEF0      CSC1_COEF1      CSC1_COEF2      
CTRL            CTRL_CLR        CTRL_SET        CTRL_TOG        
NEXT            OUT_AS_LRC      OUT_AS_ULC      OUT_BUF         
OUT_BUF2        OUT_CTRL        OUT_CTRL_CLR    OUT_CTRL_SET    
OUT_CTRL_TOG    OUT_LRC         OUT_PITCH       OUT_PS_LRC      
OUT_PS_ULC      PORTER_DUFF_CTRL  POWER           PS_BACKGROUND   
PS_BUF          PS_CLRKEYHIGH   PS_CLRKEYLOW    PS_CTRL         
PS_CTRL_CLR     PS_CTRL_SET     PS_CTRL_TOG     PS_OFFSET       
PS_PITCH        PS_SCALE        PS_UBUF         PS_VBUF         
STAT            STAT_CLR        STAT_SET        STAT_TOG        
输入 p.PXP.{reg_name} 以查看寄存器的详细信息
type p.PXP.{reg_name} to check details of registers
</lang>
#### p.PXP.CTRL
<lang=dft>
 (rw)  [1;33m0x402b4000[0m (0x402b4000 + 0x0000)
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
#### p.PXP.STAT_SET
<lang=dft>
 (rw)  [1;33m0x402b4014[0m (0x402b4000 + 0x0014)
Status Register
 (rw) (01)  [0;32mIRQ[0m  - [00:00] -  Indicates current PXP interrupt status
 (rw) (01)  [0;32mAXI_WRITE_ERROR[0m  - [01:01] -  Indicates PXP encountered an AXI write error and processing has been terminated
 .
 (rw) (01)  [0;32mAXI_READ_ERROR[0m  - [02:02] -  Indicates PXP encountered an AXI read error and processing has been terminated.
 (rw) (01)  [0;32mNEXT_IRQ[0m  - [03:03] -  Indicates that a command issued with the "Next Command" functionality has been 
 issued and that a new command may be initiated with a write to the PXP_NEXT reg
 ister
 (ro) (04)  [0;32mAXI_ERROR_ID[0m  - [07:04] -  Indicates the AXI ID of the failing bus operation.
 (rw) (01)  [0;32mLUT_DMA_LOAD_DONE_IRQ[0m  - [08:08] -  Indicates that the LUT DMA transfer has completed.
 (ro) (07)  [0;32mRSVD2[0m  - [15:09] -  Reserved, always set to zero.
 (ro) (08)  [0;32mBLOCKY[0m  - [23:16] -  Indicates the X coordinate of the block currently being rendered.
 (ro) (08)  [0;32mBLOCKX[0m  - [31:24] -  Indicates the X coordinate of the block currently being rendered.
</lang>
#### pxp.stat_set
<link=p.PXP.STAT_SET>
#### p.pxp.out_ctrl_set
<link=p.PXP.OUT_CTRL_SET>
#### p.PXP.OUT_CTRL_CLR
<lang=dft>
 (rw)  [1;33m0x402b4028[0m (0x402b4000 + 0x0028)
Output Buffer Control Register
 (rw) (05)  [0;32mFORMAT[0m  - [04:00] -  Output framebuffer format
      0 - ARGB8888 :
         32-bit pixels
      0x4 - RGB888 :
         32-bit pixels (unpacked 24-bit pixel in 32 bit DWORD.)
      0x5 - RGB888P :
         24-bit pixels (packed 24-bit format)
      0x8 - ARGB1555 :
         16-bit pixels
      0x9 - ARGB4444 :
         16-bit pixels
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
 (ro) (03)  [0;32mRSVD0[0m  - [07:05] -  Reserved, always set to zero.
 (rw) (02)  [0;32mINTERLACED_OUTPUT[0m  - [09:08] -  Determines how the PXP writes it's output data
      0 - PROGRESSIVE :
         All data written in progressive format to the OUTBUF Pointer.
      0x1 - FIELD0 :
         Interlaced output: only data for field 0 is written to the OUTBUF Point
         er.
      0x2 - FIELD1 :
         Interlaced output: only data for field 1 is written to the OUTBUF2 Poin
         ter.
      0x3 - INTERLACED :
         Interlaced output: data for field 0 is written to OUTBUF and data for f
         ield 1 is written to OUTBUF2.
 (ro) (13)  [0;32mRSVD1[0m  - [22:10] -  Reserved, always set to zero.
 (rw) (01)  [0;32mALPHA_OUTPUT[0m  - [23:23] -  Indicates that alpha component in output buffer pixels should be overwritten by
  PXP_OUT_CTRL[ALPHA]
 (rw) (08)  [0;32mALPHA[0m  - [31:24] -  When generating an output buffer with an alpha component, the value in this fie
 ld will be used when enabled to override the alpha passed through the pixel dat
 a pipeline
</lang>
#### pxp.out_lrc
<link=p.PXP.OUT_LRC>
#### p.pxp.ps_ctrl_tog
<link=p.PXP.PS_CTRL_TOG>
#### PXP.PS_VBUF
<link=p.PXP.PS_VBUF>
#### PXP.PS_CLRKEYLOW
<link=p.PXP.PS_CLRKEYLOW>
#### p.pxp.csc1_coef0
<link=p.PXP.CSC1_COEF0>
#### p.PXP.CSC1_COEF1
<lang=dft>
 (rw)  [1;33m0x402b41b0[0m (0x402b4000 + 0x01b0)
Color Space Conversion Coefficient Register 1
 (rw) (11)  [0;32mC4[0m  - [10:00] -  Two's compliment Blue U/Cb multiplier coefficient. YUV=0x208 (2.032) YCbCr=0x20
 4 (2.017)
 (ro) (05)  [0;32mRSVD0[0m  - [15:11] -  Reserved, always set to zero.
 (rw) (11)  [0;32mC1[0m  - [26:16] -  Two's compliment Red V/Cr multiplier coefficient. YUV=0x123 (1.140) YCbCr=0x198
  (1.596)
 (ro) (05)  [0;32mRSVD1[0m  - [31:27] -  Reserved, always set to zero.
</lang>
#### p.pxp.power
<link=p.PXP.POWER>
#### pxp.power
<link=p.PXP.POWER>
#### p.LCDIF.CTRL_SET
<lang=dft>
 (rw)  [1;33m0x402b8004[0m (0x402b8000 + 0x0004)
LCDIF General Control Register
 (rw) (01)  [0;32mRUN[0m  - [00:00] -  When this bit is set by software, the LCDIF will begin transferring data betwee
 n the SoC and the display
 (rw) (01)  [0;32mDATA_FORMAT_24_BIT[0m  - [01:01] -  Used only when WORD_LENGTH = 3, i
      0 - ALL_24_BITS_VALID :
         Data input to the block is in 24 bpp format, such that all RGB 888 data
          is contained in 24 bits.
      0x1 - DROP_UPPER_2_BITS_PER_BYTE :
         Data input to the block is actually RGB 18 bpp, but there is 1 color pe
         r byte, hence the upper 2 bits in each byte do not contain any useful d
         ata, and should be dropped.
 (rw) (01)  [0;32mDATA_FORMAT_18_BIT[0m  - [02:02] -  Used only when WORD_LENGTH = 2, i.e. 18-bit.
      0 - LOWER_18_BITS_VALID :
         Data input to the block is in 18 bpp format, such that lower 18 bits co
         ntain RGB 666 and upper 14 bits do not contain any useful data.
      0x1 - UPPER_18_BITS_VALID :
         Data input to the block is in 18 bpp format, such that upper 18 bits co
         ntain RGB 666 and lower 14 bits do not contain any useful data.
 (rw) (01)  [0;32mDATA_FORMAT_16_BIT[0m  - [03:03] -  When this bit is 1 and WORD_LENGTH = 0, it implies that the 16-bit data is in A
 RGB555 format
 (rw) (01)  [0;32mMASTER[0m  - [05:05] -  Set this bit to make the LCDIF act as a bus master
 (rw) (01)  [0;32mENABLE_PXP_HANDSHAKE[0m  - [06:06] -  If this bit is set and LCDIF_MASTER bit is set, the LCDIF will act as bus maste
 r and the handshake mechanism between LCDIF and PXP will be turned on
 (rw) (02)  [0;32mWORD_LENGTH[0m  - [09:08] -  Input data format.
      0 - 16_BIT :
         Input data is 16 bits per pixel.
      0x1 - 8_BIT :
         Input data is 8 bits wide.
      0x2 - 18_BIT :
         Input data is 18 bits per pixel.
      0x3 - 24_BIT :
         Input data is 24 bits per pixel.
 (rw) (02)  [0;32mLCD_DATABUS_WIDTH[0m  - [11:10] -  LCD Data bus transfer width.
      0 - 16_BIT :
         16-bit data bus mode.
      0x1 - 8_BIT :
         8-bit data bus mode.
      0x2 - 18_BIT :
         18-bit data bus mode.
      0x3 - 24_BIT :
         24-bit data bus mode.
 (rw) (02)  [0;32mCSC_DATA_SWIZZLE[0m  - [13:12] -  This field specifies how to swap the bytes after the data has been converted in
 to an internal representation of 24 bits per pixel and before it is transmitted
  over the LCD interface bus
      0 - NO_SWAP :
         No byte swapping.(Little endian)
      0x1 - BIG_ENDIAN_SWAP :
         Big Endian swap (swap bytes 0,3 and 1,2).
      0x2 - HWD_SWAP :
         Swap half-words.
      0x3 - HWD_BYTE_SWAP :
         Swap bytes within each half-word.
 (rw) (02)  [0;32mINPUT_DATA_SWIZZLE[0m  - [15:14] -  This field specifies how to swap the bytes fetched by the bus master interface
      0 - NO_SWAP :
         No byte swapping.(Little endian)
      0x1 - BIG_ENDIAN_SWAP :
         Big Endian swap (swap bytes 0,3 and 1,2).
      0x2 - HWD_SWAP :
         Swap half-words.
      0x3 - HWD_BYTE_SWAP :
         Swap bytes within each half-word.
 (rw) (01)  [0;32mDOTCLK_MODE[0m  - [17:17] -  Set this bit to 1 to make the hardware go into the DOTCLK mode, i
 (rw) (01)  [0;32mBYPASS_COUNT[0m  - [19:19] -  When this bit is 0, it means that LCDIF will stop the block operation and turn 
 off the RUN bit after the amount of data indicated by the LCDIF_TRANSFER_COUNT 
 register has been transferred out
 (rw) (05)  [0;32mSHIFT_NUM_BITS[0m  - [25:21] -  The data to be transmitted is shifted left or right by this number of bits.
 (rw) (01)  [0;32mDATA_SHIFT_DIR[0m  - [26:26] -  Use this bit to determine the direction of shift of transmit data.
      0 - TXDATA_SHIFT_LEFT :
         Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
      0x1 - TXDATA_SHIFT_RIGHT :
         Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
 (rw) (01)  [0;32mCLKGATE[0m  - [30:30] -  This bit must be set to zero for normal operation
 (rw) (01)  [0;32mSFTRST[0m  - [31:31] -  This bit must be set to zero to enable normal operation of the LCDIF
</lang>
#### p.lcdif.ctrl_set
<link=p.LCDIF.CTRL_SET>
#### lcdif.ctrl1
<link=p.LCDIF.CTRL1>
#### p.lcdif.ctrl1_set
<link=p.LCDIF.CTRL1_SET>
#### lcdif.ctrl1_set
<link=p.LCDIF.CTRL1_SET>
#### p.lcdif.ctrl2
<link=p.LCDIF.CTRL2>
#### p.LCDIF.BM_ERROR_STAT
<lang=dft>
 (rw)  [1;33m0x402b8190[0m (0x402b8000 + 0x0190)
Bus Master Error Status Register
 (rw) (32)  [0;32mADDR[0m  - [31:00] -  Virtual address at which bus master error occurred.
</lang>
#### p.lcdif.pigeonctrl0_set
<link=p.LCDIF.PIGEONCTRL0_SET>
#### p.LCDIF.PIGEONCTRL1
<lang=dft>
 (rw)  [1;33m0x402b8390[0m (0x402b8000 + 0x0390)
LCDIF Pigeon Mode Control1 Register
 (rw) (12)  [0;32mFRAME_CNT_PERIOD[0m  - [11:00] -  Period of frame counter
 (rw) (12)  [0;32mFRAME_CNT_CYCLES[0m  - [27:16] -  Max cycles of frame counter
</lang>
#### p.lcdif.pigeonctrl1_tog
<link=p.LCDIF.PIGEONCTRL1_TOG>
#### p.lcdif.pigeonctrl2
<link=p.LCDIF.PIGEONCTRL2>
#### p.LCDIF.PIGEON_1_2
<lang=dft>
 (rw)  [1;33m0x402b8860[0m (0x402b8000 + 0x0860)
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
#### p.LCDIF.PIGEON_3_1
<lang=dft>
 (rw)  [1;33m0x402b88d0[0m (0x402b8000 + 0x08d0)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### lcdif.pigeon_4_1
<link=p.LCDIF.PIGEON_4_1>
#### LCDIF.PIGEON_5_1
<link=p.LCDIF.PIGEON_5_1>
#### p.lcdif.pigeon_9_0
<link=p.LCDIF.PIGEON_9_0>
#### p.lcdif.pigeon_10_2
<link=p.LCDIF.PIGEON_10_2>
#### lcdif.pigeon_11_1
<link=p.LCDIF.PIGEON_11_1>
#### LCDIF.LUT0_ADDR
<link=p.LCDIF.LUT0_ADDR>
#### LCDIF.LUT0_DATA
<link=p.LCDIF.LUT0_DATA>
#### p.CSI.CSICR1
<lang=dft>
 (rw)  [1;33m0x402bc000[0m (0x402bc000 + 0x0000)
CSI Control Register 1
 (rw) (01)  [0;32mPIXEL_BIT[0m  - [00:00] -  Pixel Bit
      0 - PIXEL_BIT_0 :
         8-bit data for each pixel
      0x1 - PIXEL_BIT_1 :
         10-bit data for each pixel
 (rw) (01)  [0;32mREDGE[0m  - [01:01] -  Valid Pixel Clock Edge Select
      0 - REDGE_0 :
         Pixel data is latched at the falling edge of CSI_PIXCLK
      0x1 - REDGE_1 :
         Pixel data is latched at the rising edge of CSI_PIXCLK
 (rw) (01)  [0;32mINV_PCLK[0m  - [02:02] -  Invert Pixel Clock Input
      0 - INV_PCLK_0 :
         CSI_PIXCLK is directly applied to internal circuitry
      0x1 - INV_PCLK_1 :
         CSI_PIXCLK is inverted before applied to internal circuitry
 (rw) (01)  [0;32mINV_DATA[0m  - [03:03] -  Invert Data Input. This bit enables or disables internal inverters on the data 
 lines.
      0 - INV_DATA_0 :
         CSI_D[7:0] data lines are directly applied to internal circuitry
      0x1 - INV_DATA_1 :
         CSI_D[7:0] data lines are inverted before applied to internal circuitry
 (rw) (01)  [0;32mGCLK_MODE[0m  - [04:04] -  Gated Clock Mode Enable
      0 - GCLK_MODE_0 :
         Non-gated clock mode. All incoming pixel clocks are valid. HSYNC is ign
         ored.
      0x1 - GCLK_MODE_1 :
         Gated clock mode. Pixel clock signal is valid only when HSYNC is active
         .
 (rw) (01)  [0;32mCLR_RXFIFO[0m  - [05:05] -  Asynchronous RXFIFO Clear
 (rw) (01)  [0;32mCLR_STATFIFO[0m  - [06:06] -  Asynchronous STATFIFO Clear
 (rw) (01)  [0;32mPACK_DIR[0m  - [07:07] -  Data Packing Direction
      0 - PACK_DIR_0 :
         Pack from LSB first. For image data, 0x11, 0x22, 0x33, 0x44, it will ap
         pear as 0x44332211 in RX FIFO. For stat data, 0xAAAA, 0xBBBB, it will a
         ppear as 0xBBBBAAAA in STAT FIFO.
      0x1 - PACK_DIR_1 :
         Pack from MSB first. For image data, 0x11, 0x22, 0x33, 0x44, it will ap
         pear as 0x11223344 in RX FIFO. For stat data, 0xAAAA, 0xBBBB, it will a
         ppear as 0xAAAABBBB in STAT FIFO.
 (rw) (01)  [0;32mFCC[0m  - [08:08] -  FIFO Clear Control
      0 - FCC_0 :
         Asynchronous FIFO clear is selected.
      0x1 - FCC_1 :
         Synchronous FIFO clear is selected.
 (rw) (01)  [0;32mCCIR_EN[0m  - [10:10] -  CCIR656 Interface Enable
      0 - CCIR_EN_0 :
         Traditional interface is selected. Timing interface logic is used to la
         tch data.
      0x1 - CCIR_EN_1 :
         CCIR656 interface is selected.
 (rw) (01)  [0;32mHSYNC_POL[0m  - [11:11] -  HSYNC Polarity Select
      0 - HSYNC_POL_0 :
         HSYNC is active low
      0x1 - HSYNC_POL_1 :
         HSYNC is active high
 (rw) (01)  [0;32mSOF_INTEN[0m  - [16:16] -  Start Of Frame (SOF) Interrupt Enable. This bit enables the SOF interrupt.
      0 - SOF_INTEN_0 :
         SOF interrupt disable
      0x1 - SOF_INTEN_1 :
         SOF interrupt enable
 (rw) (01)  [0;32mSOF_POL[0m  - [17:17] -  SOF Interrupt Polarity. This bit controls the condition that generates an SOF i
 nterrupt.
      0 - SOF_POL_0 :
         SOF interrupt is generated on SOF falling edge
      0x1 - SOF_POL_1 :
         SOF interrupt is generated on SOF rising edge
 (rw) (01)  [0;32mRXFF_INTEN[0m  - [18:18] -  RxFIFO Full Interrupt Enable. This bit enables the RxFIFO full interrupt.
      0 - RXFF_INTEN_0 :
         RxFIFO full interrupt disable
      0x1 - RXFF_INTEN_1 :
         RxFIFO full interrupt enable
 (rw) (01)  [0;32mFB1_DMA_DONE_INTEN[0m  - [19:19] -  Frame Buffer1 DMA Transfer Done Interrupt Enable
      0 - FB1_DMA_DONE_INTEN_0 :
         Frame Buffer1 DMA Transfer Done interrupt disable
      0x1 - FB1_DMA_DONE_INTEN_1 :
         Frame Buffer1 DMA Transfer Done interrupt enable
 (rw) (01)  [0;32mFB2_DMA_DONE_INTEN[0m  - [20:20] -  Frame Buffer2 DMA Transfer Done Interrupt Enable
      0 - FB2_DMA_DONE_INTEN_0 :
         Frame Buffer2 DMA Transfer Done interrupt disable
      0x1 - FB2_DMA_DONE_INTEN_1 :
         Frame Buffer2 DMA Transfer Done interrupt enable
 (rw) (01)  [0;32mSTATFF_INTEN[0m  - [21:21] -  STATFIFO Full Interrupt Enable. This bit enables the STAT FIFO interrupt.
      0 - STATFF_INTEN_0 :
         STATFIFO full interrupt disable
      0x1 - STATFF_INTEN_1 :
         STATFIFO full interrupt enable
 (rw) (01)  [0;32mSFF_DMA_DONE_INTEN[0m  - [22:22] -  STATFIFO DMA Transfer Done Interrupt Enable
      0 - SFF_DMA_DONE_INTEN_0 :
         STATFIFO DMA Transfer Done interrupt disable
      0x1 - SFF_DMA_DONE_INTEN_1 :
         STATFIFO DMA Transfer Done interrupt enable
 (rw) (01)  [0;32mRF_OR_INTEN[0m  - [24:24] -  RxFIFO Overrun Interrupt Enable. This bit enables the RX FIFO overrun interrupt
 .
      0 - RF_OR_INTEN_0 :
         RxFIFO overrun interrupt is disabled
      0x1 - RF_OR_INTEN_1 :
         RxFIFO overrun interrupt is enabled
 (rw) (01)  [0;32mSF_OR_INTEN[0m  - [25:25] -  STAT FIFO Overrun Interrupt Enable. This bit enables the STATFIFO overrun inter
 rupt.
      0 - SF_OR_INTEN_0 :
         STATFIFO overrun interrupt is disabled
      0x1 - SF_OR_INTEN_1 :
         STATFIFO overrun interrupt is enabled
 (rw) (01)  [0;32mCOF_INT_EN[0m  - [26:26] -  Change Of Image Field (COF) Interrupt Enable
      0 - COF_INT_EN_0 :
         COF interrupt is disabled
      0x1 - COF_INT_EN_1 :
         COF interrupt is enabled
 (rw) (01)  [0;32mCCIR_MODE[0m  - [27:27] -  CCIR Mode Select
      0 - CCIR_MODE_0 :
         Progressive mode is selected
      0x1 - CCIR_MODE_1 :
         Interlace mode is selected
 (rw) (01)  [0;32mPrP_IF_EN[0m  - [28:28] -  CSI-PrP Interface Enable
      0 - PrP_IF_EN_0 :
         CSI to PrP bus is disabled
      0x1 - PrP_IF_EN_1 :
         CSI to PrP bus is enabled
 (rw) (01)  [0;32mEOF_INT_EN[0m  - [29:29] -  End-of-Frame Interrupt Enable. This bit enables and disables the EOF interrupt.
      0 - EOF_INT_EN_0 :
         EOF interrupt is disabled.
      0x1 - EOF_INT_EN_1 :
         EOF interrupt is generated when RX count value is reached.
 (rw) (01)  [0;32mEXT_VSYNC[0m  - [30:30] -  External VSYNC Enable
      0 - EXT_VSYNC_0 :
         Internal VSYNC mode
      0x1 - EXT_VSYNC_1 :
         External VSYNC mode
 (rw) (01)  [0;32mSWAP16_EN[0m  - [31:31] -  SWAP 16-Bit Enable
      0 - SWAP16_EN_0 :
         Disable swapping
      0x1 - SWAP16_EN_1 :
         Enable swapping
</lang>
#### csi.csidmasa_fb2
<link=p.CSI.CSIDMASA_FB2>
#### CSI.CSIFBUF_PARA
<link=p.CSI.CSIFBUF_PARA>
#### USDHC1.CMD_RSP3
<link=p.USDHC1.CMD_RSP3>
#### p.USDHC1.PROT_CTRL
<lang=dft>
 (rw)  [1;33m0x402c0028[0m (0x402c0000 + 0x0028)
Protocol Control
 (rw) (01)  [0;32mLCTL[0m  - [00:00] -  LED Control
      0 - LCTL_0 :
         LED off
      0x1 - LCTL_1 :
         LED on
 (rw) (02)  [0;32mDTW[0m  - [02:01] -  Data Transfer Width
      0 - DTW_0 :
         1-bit mode
      0x1 - DTW_1 :
         4-bit mode
      0x2 - DTW_2 :
         8-bit mode
 (rw) (01)  [0;32mD3CD[0m  - [03:03] -  DATA3 as Card Detection Pin
      0 - D3CD_0 :
         DATA3 does not monitor Card Insertion
      0x1 - D3CD_1 :
         DATA3 as Card Detection Pin
 (rw) (02)  [0;32mEMODE[0m  - [05:04] -  Endian Mode
      0 - EMODE_0 :
         Big Endian Mode
      0x1 - EMODE_1 :
         Half Word Big Endian Mode
      0x2 - EMODE_2 :
         Little Endian Mode
 (rw) (01)  [0;32mCDTL[0m  - [06:06] -  Card Detect Test Level
      0 - CDTL_0 :
         Card Detect Test Level is 0, no card inserted
      0x1 - CDTL_1 :
         Card Detect Test Level is 1, card inserted
 (rw) (01)  [0;32mCDSS[0m  - [07:07] -  Card Detect Signal Selection
      0 - CDSS_0 :
         Card Detection Level is selected (for normal purpose).
      0x1 - CDSS_1 :
         Card Detection Test Level is selected (for test purpose).
 (rw) (02)  [0;32mDMASEL[0m  - [09:08] -  DMA Select
      0 - DMASEL_0 :
         No DMA or Simple DMA is selected
      0x1 - DMASEL_1 :
         ADMA1 is selected
      0x2 - DMASEL_2 :
         ADMA2 is selected
 (rw) (01)  [0;32mSABGREQ[0m  - [16:16] -  Stop At Block Gap Request
      0 - SABGREQ_0 :
         Transfer
      0x1 - SABGREQ_1 :
         Stop
 (rw) (01)  [0;32mCREQ[0m  - [17:17] -  Continue Request
      0 - CREQ_0 :
         No effect
      0x1 - CREQ_1 :
         Restart
 (rw) (01)  [0;32mRWCTL[0m  - [18:18] -  Read Wait Control
      0 - RWCTL_0 :
         Disable Read Wait Control, and stop SD Clock at block gap when SABGREQ 
         bit is set
      0x1 - RWCTL_1 :
         Enable Read Wait Control, and assert Read Wait without stopping SD Cloc
         k at block gap when SABGREQ bit is set
 (rw) (01)  [0;32mIABG[0m  - [19:19] -  Interrupt At Block Gap
      0 - IABG_0 :
         Disabled
      0x1 - IABG_1 :
         Enabled
 (rw) (01)  [0;32mRD_DONE_NO_8CLK[0m  - [20:20] -  RD_DONE_NO_8CLK
 (rw) (01)  [0;32mWECINT[0m  - [24:24] -  Wakeup Event Enable On Card Interrupt
      0 - WECINT_0 :
         Disable
      0x1 - WECINT_1 :
         Enable
 (rw) (01)  [0;32mWECINS[0m  - [25:25] -  Wakeup Event Enable On SD Card Insertion
      0 - WECINS_0 :
         Disable
      0x1 - WECINS_1 :
         Enable
 (rw) (01)  [0;32mWECRM[0m  - [26:26] -  Wakeup Event Enable On SD Card Removal
      0 - WECRM_0 :
         Disable
      0x1 - WECRM_1 :
         Enable
 (rw) (03)  [0;32mBURST_LEN_EN[0m  - [29:27] -  BURST length enable for INCR, INCR4 / INCR8 / INCR16, INCR4-WRAP / INCR8-WRAP /
  INCR16-WRAP
      #xx1 - BURST_LEN_EN_1 :
         Burst length is enabled for INCR
 (rw) (01)  [0;32mNON_EXACT_BLK_RD[0m  - [30:30] -  NON_EXACT_BLK_RD
      0 - NON_EXACT_BLK_RD_0 :
         The block read is exact block read. Host driver doesn't need to issue a
         bort command to terminate this multi-block read.
      0x1 - NON_EXACT_BLK_RD_1 :
         The block read is non-exact block read. Host driver needs to issue abor
         t command to terminate this multi-block read.
</lang>
#### p.USDHC1.INT_STATUS
<lang=dft>
 (rw)  [1;33m0x402c0030[0m (0x402c0000 + 0x0030)
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
#### p.USDHC1.INT_STATUS_EN
<lang=dft>
 (rw)  [1;33m0x402c0034[0m (0x402c0000 + 0x0034)
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
#### USDHC1.AUTOCMD12_ERR_STATUS
<link=p.USDHC1.AUTOCMD12_ERR_STATUS>
#### USDHC1.HOST_CTRL_CAP
<link=p.USDHC1.HOST_CTRL_CAP>
#### USDHC1.VEND_SPEC2
<link=p.USDHC1.VEND_SPEC2>
#### USDHC2.DS_ADDR
<link=p.USDHC2.DS_ADDR>
#### p.usdhc2.cmd_arg
<link=p.USDHC2.CMD_ARG>
#### usdhc2.cmd_xfr_typ
<link=p.USDHC2.CMD_XFR_TYP>
#### USDHC2.CMD_XFR_TYP
<link=p.USDHC2.CMD_XFR_TYP>
#### usdhc2.data_buff_acc_port
<link=p.USDHC2.DATA_BUFF_ACC_PORT>
#### p.usdhc2.int_status_en
<link=p.USDHC2.INT_STATUS_EN>
#### usdhc2.clk_tune_ctrl_status
<link=p.USDHC2.CLK_TUNE_CTRL_STATUS>
#### p.USDHC2.VEND_SPEC2
<lang=dft>
 (rw)  [1;33m0x402c40c8[0m (0x402c4000 + 0x00c8)
Vendor Specific 2 Register
 (rw) (01)  [0;32mCARD_INT_D3_TEST[0m  - [03:03] -  Card Interrupt Detection Test
      0 - CARD_INT_D3_TEST_0 :
         Check the card interrupt only when DATA3 is high.
      0x1 - CARD_INT_D3_TEST_1 :
         Check the card interrupt by ignoring the status of DATA3.
 (rw) (01)  [0;32mTUNING_8bit_EN[0m  - [04:04] -  TUNING_8bit_EN
 (rw) (01)  [0;32mTUNING_1bit_EN[0m  - [05:05] -  TUNING_1bit_EN
 (rw) (01)  [0;32mTUNING_CMD_EN[0m  - [06:06] -  TUNING_CMD_EN
      0 - TUNING_CMD_EN_0 :
         Auto tuning circuit does not check the CMD line.
      0x1 - TUNING_CMD_EN_1 :
         Auto tuning circuit checks the CMD line.
 (rw) (01)  [0;32mACMD23_ARGU2_EN[0m  - [12:12] -  Argument2 register enable for ACMD23
      0 - ACMD23_ARGU2_EN_0 :
         Disable
      0x1 - ACMD23_ARGU2_EN_1 :
         Argument2 register enable for ACMD23 sharing with SDMA system address r
         egister. Default is enable.
 (rw) (01)  [0;32mPART_DLL_DEBUG[0m  - [13:13] -  debug for part dll
 (rw) (01)  [0;32mBUS_RST[0m  - [14:14] -  BUS reset
</lang>
#### p.enet.tdar
<link=p.ENET.TDAR>
#### p.enet.tcr
<link=p.ENET.TCR>
#### p.ENET.RXIC
<lang=dft>
 (rw)  [1;33m0x402d8100[0m (0x402d8000 + 0x0100)
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
#### ENET.RSFL
<link=p.ENET.RSFL>
#### enet.raem
<link=p.ENET.RAEM>
#### p.ENET.RAFL
<lang=dft>
 (rw)  [1;33m0x402d819c[0m (0x402d8000 + 0x019c)
Receive FIFO Almost Full Threshold
 (rw) (08)  [0;32mRX_ALMOST_FULL[0m  - [07:00] -  Value Of The Receive FIFO Almost Full Threshold
</lang>
#### p.enet.rmon_t_jab
<link=p.ENET.RMON_T_JAB>
#### enet.rmon_t_p65to127
<link=p.ENET.RMON_T_P65TO127>
#### ENET.RMON_T_P512TO1023
<link=p.ENET.RMON_T_P512TO1023>
#### enet.rmon_t_p1024to2047
<link=p.ENET.RMON_T_P1024TO2047>
#### ENET.RMON_T_OCTETS
<link=p.ENET.RMON_T_OCTETS>
#### enet.ieee_t_1col
<link=p.ENET.IEEE_T_1COL>
#### enet.ieee_t_octets_ok
<link=p.ENET.IEEE_T_OCTETS_OK>
#### p.enet.rmon_r_crc_align
<link=p.ENET.RMON_R_CRC_ALIGN>
#### enet.rmon_r_resvd_0
<link=p.ENET.RMON_R_RESVD_0>
#### enet.rmon_r_p65to127
<link=p.ENET.RMON_R_P65TO127>
#### p.enet.rmon_r_p512to1023
<link=p.ENET.RMON_R_P512TO1023>
#### enet.rmon_r_p512to1023
<link=p.ENET.RMON_R_P512TO1023>
#### p.enet.ieee_r_drop
<link=p.ENET.IEEE_R_DROP>
#### ENET.IEEE_R_MACERR
<link=p.ENET.IEEE_R_MACERR>
#### ENET.IEEE_R_OCTETS_OK
<link=p.ENET.IEEE_R_OCTETS_OK>
#### p.ENET.ATCR
<lang=dft>
 (rw)  [1;33m0x402d8400[0m (0x402d8000 + 0x0400)
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
#### ENET.ATCR
<link=p.ENET.ATCR>
#### ENET.ATVR
<link=p.ENET.ATVR>
#### p.enet.atcor
<link=p.ENET.ATCOR>
#### ENET.TCCR1
<link=p.ENET.TCCR1>
#### p.ENET.TCCR3
<lang=dft>
 (rw)  [1;33m0x402d8624[0m (0x402d8000 + 0x0624)
Timer Compare Capture Register
 (rw) (32)  [0;32mTCC[0m  - [31:00] -  Timer Capture Compare
</lang>
#### p.ENET2.RDAR
<lang=dft>
 (rw)  [1;33m0x402d4010[0m (0x402d4000 + 0x0010)
Receive Descriptor Active Register
 (rw) (01)  [0;32mRDAR[0m  - [24:24] -  Receive Descriptor Active
</lang>
#### p.ENET2.TDAR
<lang=dft>
 (rw)  [1;33m0x402d4014[0m (0x402d4000 + 0x0014)
Transmit Descriptor Active Register
 (rw) (01)  [0;32mTDAR[0m  - [24:24] -  Transmit Descriptor Active
</lang>
#### ENET2.PALR
<link=p.ENET2.PALR>
#### enet2.gaur
<link=p.ENET2.GAUR>
#### p.enet2.galr
<link=p.ENET2.GALR>
#### p.ENET2.RDSR
<lang=dft>
 (rw)  [1;33m0x402d4180[0m (0x402d4000 + 0x0180)
Receive Descriptor Ring Start Register
 (rw) (29)  [0;32mR_DES_START[0m  - [31:03] -  Pointer to the beginning of the receive buffer descriptor queue.
</lang>
#### ENET2.TDSR
<link=p.ENET2.TDSR>
#### enet2.mrbr
<link=p.ENET2.MRBR>
#### p.ENET2.RSFL
<lang=dft>
 (rw)  [1;33m0x402d4190[0m (0x402d4000 + 0x0190)
Receive FIFO Section Full Threshold
 (rw) (08)  [0;32mRX_SECTION_FULL[0m  - [07:00] -  Value Of Receive FIFO Section Full Threshold
</lang>
#### p.enet2.rsfl
<link=p.ENET2.RSFL>
#### enet2.tsem
<link=p.ENET2.TSEM>
#### enet2.tafl
<link=p.ENET2.TAFL>
#### p.enet2.tacc
<link=p.ENET2.TACC>
#### ENET2.RACC
<link=p.ENET2.RACC>
#### p.enet2.rmon_t_packets
<link=p.ENET2.RMON_T_PACKETS>
#### ENET2.RMON_T_PACKETS
<link=p.ENET2.RMON_T_PACKETS>
#### enet2.rmon_t_bc_pkt
<link=p.ENET2.RMON_T_BC_PKT>
#### p.ENET2.RMON_T_CRC_ALIGN
<lang=dft>
 (ro)  [1;33m0x402d4210[0m (0x402d4000 + 0x0210)
Tx Packets with CRC/Align Error Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Packets with CRC/align error
</lang>
#### ENET2.RMON_T_CRC_ALIGN
<link=p.ENET2.RMON_T_CRC_ALIGN>
#### ENET2.RMON_T_P128TO255
<link=p.ENET2.RMON_T_P128TO255>
#### enet2.ieee_t_mcol
<link=p.ENET2.IEEE_T_MCOL>
#### enet2.ieee_t_def
<link=p.ENET2.IEEE_T_DEF>
#### p.ENET2.IEEE_T_LCOL
<lang=dft>
 (ro)  [1;33m0x402d425c[0m (0x402d4000 + 0x025c)
Frames Transmitted with Late Collision Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with late collision
</lang>
#### p.enet2.rmon_r_p1024to2047
<link=p.ENET2.RMON_R_P1024TO2047>
#### enet2.rmon_r_p1024to2047
<link=p.ENET2.RMON_R_P1024TO2047>
#### p.enet2.ieee_r_octets_ok
<link=p.ENET2.IEEE_R_OCTETS_OK>
#### enet2.tgsr
<link=p.ENET2.TGSR>
#### p.enet2.tcsr1
<link=p.ENET2.TCSR1>
#### enet2.tccr3
<link=p.ENET2.TCCR3>
#### p.usb1.hwdevice
<link=p.USB1.HWDEVICE>
#### p.USB1.GPTIMER1LD
<lang=dft>
 (rw)  [1;33m0x402e0088[0m (0x402e0000 + 0x0088)
General Purpose Timer #1 Load
 (rw) (24)  [0;32mGPTLD[0m  - [23:00] -  General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits whe
 n GPTRST bit is set '1b'
</lang>
#### p.usb1.gptimer1ctrl
<link=p.USB1.GPTIMER1CTRL>
#### p.usb1.hcsparams
<link=p.USB1.HCSPARAMS>
#### p.usb1.dciversion
<link=p.USB1.DCIVERSION>
#### usb1.deviceaddr
<link=p.USB1.DEVICEADDR>
#### p.USB1.ASYNCLISTADDR
<lang=dft>
 (rw)  [1;33m0x402e0158[0m (0x402e0000 + 0x0158)
Next Asynch. Address
 (rw) (27)  [0;32mASYBASE[0m  - [31:05] -  Link Pointer Low (LPL)
</lang>
#### usb1.txfilltuning
<link=p.USB1.TXFILLTUNING>
#### USB1.CONFIGFLAG
<link=p.USB1.CONFIGFLAG>
#### usb1.portsc1
<link=p.USB1.PORTSC1>
#### usb1.otgsc
<link=p.USB1.OTGSC>
#### p.usb1.endptctrl2
<link=p.USB1.ENDPTCTRL2>
#### p.usb2.hwtxbuf
<link=p.USB2.HWTXBUF>
#### usb2.caplength
<link=p.USB2.CAPLENGTH>
#### USB2.CAPLENGTH
<link=p.USB2.CAPLENGTH>
#### USB2.HCSPARAMS
<link=p.USB2.HCSPARAMS>
#### usb2.hccparams
<link=p.USB2.HCCPARAMS>
#### USB2.DEVICEADDR
<link=p.USB2.DEVICEADDR>
#### USB2.BURSTSIZE
<link=p.USB2.BURSTSIZE>
#### p.USB2.ENDPTCTRL0
<lang=dft>
 (rw)  [1;33m0x402e03c0[0m (0x402e0200 + 0x01c0)
Endpoint Control0
 (rw) (01)  [0;32mRXS[0m  - [00:00] -  RX Endpoint Stall - Read/Write 0 End Point OK
 (rw) (02)  [0;32mRXT[0m  - [03:02] -  RX Endpoint Type - Read/Write 00 Control Endpoint0 is fixed as a Control End Po
 int.
 (rw) (01)  [0;32mRXE[0m  - [07:07] -  RX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
 (rw) (01)  [0;32mTXS[0m  - [16:16] -  TX Endpoint Stall - Read/Write 0 End Point OK [Default] 1 End Point Stalled Sof
 tware can write a one to this bit to force the endpoint to return a STALL hands
 hake to the Host
 (rw) (02)  [0;32mTXT[0m  - [19:18] -  TX Endpoint Type - Read/Write 00 - Control Endpoint0 is fixed as a Control End 
 Point.
 (rw) (01)  [0;32mTXE[0m  - [23:23] -  TX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
</lang>
#### USB2.ENDPTCTRL1
<link=p.USB2.ENDPTCTRL1>
#### usb2.endptctrl5
<link=p.USB2.ENDPTCTRL5>
#### SEMC.MCR
<link=p.SEMC.MCR>
#### p.semc.br1
<link=p.SEMC.BR1>
#### semc.br2
<link=p.SEMC.BR2>
#### p.SEMC.INTEN
<lang=dft>
 (rw)  [1;33m0x402f0038[0m (0x402f0000 + 0x0038)
Interrupt Enable Register
 (rw) (01)  [0;32mIPCMDDONEEN[0m  - [00:00] -  IP command done interrupt enable
 (rw) (01)  [0;32mIPCMDERREN[0m  - [01:01] -  IP command error interrupt enable
 (rw) (01)  [0;32mAXICMDERREN[0m  - [02:02] -  AXI command error interrupt enable
 (rw) (01)  [0;32mAXIBUSERREN[0m  - [03:03] -  AXI bus error interrupt enable
 (rw) (01)  [0;32mNDPAGEENDEN[0m  - [04:04] -  This bit enable/disable the NDPAGEEND interrupt generation.
      0 - NDPAGEENDEN_0 :
         Disable
      0x1 - NDPAGEENDEN_1 :
         Enable
 (rw) (01)  [0;32mNDNOPENDEN[0m  - [05:05] -  This bit enable/disable the NDNOPEND interrupt generation.
      0 - NDNOPENDEN_0 :
         Disable
      0x1 - NDNOPENDEN_1 :
         Enable
</lang>
#### p.semc.nandcr0
<link=p.SEMC.NANDCR0>
#### semc.norcr2
<link=p.SEMC.NORCR2>
#### p.semc.norcr3
<link=p.SEMC.NORCR3>
#### p.semc.sramcr3
<link=p.SEMC.SRAMCR3>
#### SEMC.SRAMCR3
<link=p.SEMC.SRAMCR3>
#### SEMC.DBICR0
<link=p.SEMC.DBICR0>
#### semc.ipcr0
<link=p.SEMC.IPCR0>
#### SEMC.IPCMD
<link=p.SEMC.IPCMD>
#### p.SEMC.STS1
<lang=dft>
 (ro)  [1;33m0x402f00c4[0m (0x402f0000 + 0x00c4)
Status register 1
</lang>
#### p.semc.sts3
<link=p.SEMC.STS3>
#### SEMC.STS11
<link=p.SEMC.STS11>
#### p.dcp.ctrl_clr
<link=p.DCP.CTRL_CLR>
#### DCP.STAT_SET
<link=p.DCP.STAT_SET>
#### p.dcp.capability0
<link=p.DCP.CAPABILITY0>
#### p.DCP.CONTEXT
<lang=dft>
 (rw)  [1;33m0x402fc050[0m (0x402fc000 + 0x0050)
DCP context buffer pointer
 (rw) (32)  [0;32mADDR[0m  - [31:00] -  Context pointer address
</lang>
#### p.DCP.PACKET0
<lang=dft>
 (ro)  [1;33m0x402fc080[0m (0x402fc000 + 0x0080)
DCP work packet 0 status register
 (ro) (32)  [0;32mADDR[0m  - [31:00] -  Next pointer register
</lang>
#### p.dcp.packet2
<link=p.DCP.PACKET2>
#### p.dcp.ch0cmdptr
<link=p.DCP.CH0CMDPTR>
#### DCP.CH0SEMA
<link=p.DCP.CH0SEMA>
#### dcp.ch1opts_clr
<link=p.DCP.CH1OPTS_CLR>
#### dcp.ch2sema
<link=p.DCP.CH2SEMA>
#### DCP.CH2STAT_SET
<link=p.DCP.CH2STAT_SET>
#### p.DCP.CH2OPTS_CLR
<lang=dft>
 (rw)  [1;33m0x402fc1b8[0m (0x402fc000 + 0x01b8)
DCP channel 2 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### dcp.ch3sema
<link=p.DCP.CH3SEMA>
#### p.SPDIF.SRL
<lang=dft>
 (ro)  [1;33m0x40380014[0m (0x40380000 + 0x0014)
SPDIFRxLeft Register
 (ro) (24)  [0;32mRxDataLeft[0m  - [23:00] -  Processor receive SPDIF data left
</lang>
#### spdif.srl
<link=p.SPDIF.SRL>
#### p.SPDIF.STCSCL
<lang=dft>
 (rw)  [1;33m0x40380038[0m (0x40380000 + 0x0038)
SPDIFTxCChannelCons_l Register
 (rw) (24)  [0;32mTxCChannelCons_l[0m  - [23:00] -  SPDIF transmit Cons
</lang>
#### p.sai1.tcr3
<link=p.SAI1.TCR3>
#### p.SAI1.TFR[1]
<lang=dft>
 (ro)  [1;33m0x40384044[0m (0x40384000 + 0x0044)
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
#### SAI1.TFR[2]
<link=p.SAI1.TFR[2]>
#### p.sai1.tmr
<link=p.SAI1.TMR>
#### p.sai1.rcr1
<link=p.SAI1.RCR1>
#### p.SAI1.RDR[1]
<lang=dft>
 (ro)  [1;33m0x403840a4[0m (0x40384000 + 0x00a4)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### SAI2.TCSR
<link=p.SAI2.TCSR>
#### p.SAI2.TFR[1]
<lang=dft>
 (ro)  [1;33m0x40388044[0m (0x40388000 + 0x0044)
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
#### p.SAI2.RCR5
<lang=dft>
 (rw)  [1;33m0x4038809c[0m (0x40388000 + 0x009c)
SAI Receive Configuration 5 Register
 (rw) (05)  [0;32mFBT[0m  - [12:08] -  First Bit Shifted
 (rw) (05)  [0;32mW0W[0m  - [20:16] -  Word 0 Width
 (rw) (05)  [0;32mWNW[0m  - [28:24] -  Word N Width
</lang>
#### SAI2.RDR[1]
<link=p.SAI2.RDR[1]>
#### p.SAI2.RDR[2]
<lang=dft>
 (ro)  [1;33m0x403880a8[0m (0x40388000 + 0x00a8)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### p.SAI2.RMR
<lang=dft>
 (rw)  [1;33m0x403880e0[0m (0x40388000 + 0x00e0)
SAI Receive Mask Register
 (rw) (32)  [0;32mRWM[0m  - [31:00] -  Receive Word Mask
      0 - RWM_0 :
         Word N is enabled.
      0x1 - RWM_1 :
         Word N is masked.
</lang>
#### p.sai2.rmr
<link=p.SAI2.RMR>
#### p.sai3
<link=p.SAI3>
#### p.SAI3.PARAM
<lang=dft>
 (ro)  [1;33m0x4038c004[0m (0x4038c000 + 0x0004)
Parameter Register
 (ro) (04)  [0;32mDATALINE[0m  - [03:00] -  Number of Datalines
 (ro) (04)  [0;32mFIFO[0m  - [11:08] -  FIFO Size
 (ro) (04)  [0;32mFRAME[0m  - [19:16] -  Frame Size
</lang>
#### SAI3.TCSR
<link=p.SAI3.TCSR>
#### p.sai3.tcr5
<link=p.SAI3.TCR5>
#### sai3.tdr[1]
<link=p.SAI3.TDR[1]>
#### SAI3.TFR[2]
<link=p.SAI3.TFR[2]>
#### SAI3.TMR
<link=p.SAI3.TMR>
#### SAI3.RCSR
<link=p.SAI3.RCSR>
#### p.SAI3.RCR2
<lang=dft>
 (rw)  [1;33m0x4038c090[0m (0x4038c000 + 0x0090)
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
#### SAI3.RCR3
<link=p.SAI3.RCR3>
#### LPSPI1.CR
<link=p.LPSPI1.CR>
#### p.lpspi1.sr
<link=p.LPSPI1.SR>
#### p.lpspi1.ier
<link=p.LPSPI1.IER>
#### p.lpspi1.dmr1
<link=p.LPSPI1.DMR1>
#### lpspi2.dmr0
<link=p.LPSPI2.DMR0>
#### p.lpspi2.dmr1
<link=p.LPSPI2.DMR1>
#### lpspi2.ccr
<link=p.LPSPI2.CCR>
#### p.LPSPI2.TDR
<lang=dft>
 (wo)  [1;33m0x40398064[0m (0x40398000 + 0x0064)
Transmit Data Register
 (wo) (32)  [0;32mDATA[0m  - [31:00] -  Transmit Data
</lang>
#### lpspi3.fcr
<link=p.LPSPI3.FCR>
#### p.LPSPI3.FSR
<lang=dft>
 (ro)  [1;33m0x4039c05c[0m (0x4039c000 + 0x005c)
FIFO Status Register
 (ro) (05)  [0;32mTXCOUNT[0m  - [04:00] -  Transmit FIFO Count
 (ro) (05)  [0;32mRXCOUNT[0m  - [20:16] -  Receive FIFO Count
</lang>
#### lpspi4.fcr
<link=p.LPSPI4.FCR>
#### LPSPI4.TDR
<link=p.LPSPI4.TDR>
#### adc_etc.ctrl
<link=p.ADC_ETC.CTRL>
#### ADC_ETC.TRIG0_CTRL
<link=p.ADC_ETC.TRIG0_CTRL>
#### p.ADC_ETC.TRIG0_RESULT_1_0
<lang=dft>
 (ro)  [1;33m0x403b0028[0m (0x403b0000 + 0x0028)
ETC_TRIG Result Data 1/0 Register
 (ro) (12)  [0;32mDATA0[0m  - [11:00] -  Result DATA0
 (ro) (12)  [0;32mDATA1[0m  - [27:16] -  Result DATA1
</lang>
#### p.ADC_ETC.TRIG0_RESULT_3_2
<lang=dft>
 (ro)  [1;33m0x403b002c[0m (0x403b0000 + 0x002c)
ETC_TRIG Result Data 3/2 Register
 (ro) (12)  [0;32mDATA2[0m  - [11:00] -  Result DATA2
 (ro) (12)  [0;32mDATA3[0m  - [27:16] -  Result DATA3
</lang>
#### p.adc_etc.trig1_ctrl
<link=p.ADC_ETC.TRIG1_CTRL>
#### p.ADC_ETC.TRIG1_CHAIN_3_2
<lang=dft>
 (rw)  [1;33m0x403b0044[0m (0x403b0000 + 0x0044)
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
#### p.ADC_ETC.TRIG2_CTRL
<lang=dft>
 (rw)  [1;33m0x403b0060[0m (0x403b0000 + 0x0060)
ETC_TRIG2 Control Register
 (rw) (01)  [0;32mSW_TRIG[0m  - [00:00] -  Software write 1 as the TRIGGER. This register is self-clearing.
 (rw) (01)  [0;32mTRIG_MODE[0m  - [04:04] -  TRIG mode register. 1'b0: hardware trigger. 1'b1: software trigger.
 (rw) (03)  [0;32mTRIG_CHAIN[0m  - [10:08] -  TRIG chain length to the ADC. 0: Trig length is 1; ... 7: Trig length is 8;
 (rw) (03)  [0;32mTRIG_PRIORITY[0m  - [14:12] -  External trigger priority, 7 is highest, 0 is lowest .
 (rw) (01)  [0;32mSYNC_MODE[0m  - [16:16] -  TRIG mode control . 1'b0: Disable sync mode; 1'b1: Enable sync mode
</lang>
#### adc_etc.trig2_result_1_0
<link=p.ADC_ETC.TRIG2_RESULT_1_0>
#### adc_etc.trig2_result_7_6
<link=p.ADC_ETC.TRIG2_RESULT_7_6>
#### p.ADC_ETC.TRIG3_RESULT_1_0
<lang=dft>
 (ro)  [1;33m0x403b00a0[0m (0x403b0000 + 0x00a0)
ETC_TRIG Result Data 1/0 Register
 (ro) (12)  [0;32mDATA0[0m  - [11:00] -  Result DATA0
 (ro) (12)  [0;32mDATA1[0m  - [27:16] -  Result DATA1
</lang>
#### p.ADC_ETC.TRIG3_RESULT_7_6
<lang=dft>
 (ro)  [1;33m0x403b00ac[0m (0x403b0000 + 0x00ac)
ETC_TRIG Result Data 7/6 Register
 (ro) (12)  [0;32mDATA6[0m  - [11:00] -  Result DATA6
 (ro) (12)  [0;32mDATA7[0m  - [27:16] -  Result DATA7
</lang>
#### p.adc_etc.trig4_ctrl
<link=p.ADC_ETC.TRIG4_CTRL>
#### p.adc_etc.trig4_counter
<link=p.ADC_ETC.TRIG4_COUNTER>
#### p.adc_etc.trig4_chain_1_0
<link=p.ADC_ETC.TRIG4_CHAIN_1_0>
#### adc_etc.trig4_chain_1_0
<link=p.ADC_ETC.TRIG4_CHAIN_1_0>
#### p.adc_etc.trig4_chain_3_2
<link=p.ADC_ETC.TRIG4_CHAIN_3_2>
#### adc_etc.trig4_chain_3_2
<link=p.ADC_ETC.TRIG4_CHAIN_3_2>
#### p.ADC_ETC.TRIG5_CTRL
<lang=dft>
 (rw)  [1;33m0x403b00d8[0m (0x403b0000 + 0x00d8)
ETC_TRIG5 Control Register
 (rw) (01)  [0;32mSW_TRIG[0m  - [00:00] -  Software write 1 as the TRIGGER
 (rw) (01)  [0;32mTRIG_MODE[0m  - [04:04] -  TRIG mode register. 1'b0: hardware trigger. 1'b1: software trigger.
 (rw) (03)  [0;32mTRIG_CHAIN[0m  - [10:08] -  TRIG chain length to the ADC. 0: Trig length is 1; ... 7: Trig length is 8;
 (rw) (03)  [0;32mTRIG_PRIORITY[0m  - [14:12] -  External trigger priority, 7 is highest, 0 is lowest .
 (rw) (01)  [0;32mSYNC_MODE[0m  - [16:16] -  TRIG mode control . 1'b0: Disable sync mode; 1'b1: Enable sync mode
</lang>
#### ADC_ETC.TRIG5_CHAIN_1_0
<link=p.ADC_ETC.TRIG5_CHAIN_1_0>
#### p.adc_etc.trig6_result_1_0
<link=p.ADC_ETC.TRIG6_RESULT_1_0>
#### p.adc_etc.trig6_result_3_2
<link=p.ADC_ETC.TRIG6_RESULT_3_2>
#### p.ADC_ETC.TRIG6_RESULT_7_6
<lang=dft>
 (ro)  [1;33m0x403b0124[0m (0x403b0000 + 0x0124)
ETC_TRIG Result Data 7/6 Register
 (ro) (12)  [0;32mDATA6[0m  - [11:00] -  Result DATA6
 (ro) (12)  [0;32mDATA7[0m  - [27:16] -  Result DATA7
</lang>
#### adc_etc.trig7_counter
<link=p.ADC_ETC.TRIG7_COUNTER>
#### p.ADC_ETC.TRIG7_CHAIN_1_0
<lang=dft>
 (rw)  [1;33m0x403b0130[0m (0x403b0000 + 0x0130)
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
#### p.ADC_ETC.TRIG7_CHAIN_7_6
<lang=dft>
 (rw)  [1;33m0x403b013c[0m (0x403b0000 + 0x013c)
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
#### aoi1.bfcrt012
<link=p.AOI1.BFCRT012>
#### aoi2.bfcrt010
<link=p.AOI2.BFCRT010>
#### AOI2.BFCRT231
<link=p.AOI2.BFCRT231>
#### p.AOI2.BFCRT233
<lang=dft>
 (rw)  [1;33m0x403b800e[0m (0x403b8000 + 0x000e)
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
#### p.XBARA1.SEL2
<lang=dft>
 (rw)  [1;33m0x403bc004[0m (0x403bc000 + 0x0004)
Crossbar A Select Register 2
 (rw) (07)  [0;32mSEL4[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT4 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (07)  [0;32mSEL5[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT5 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### p.xbara1.sel3
<link=p.XBARA1.SEL3>
#### p.XBARA1.SEL17
<lang=dft>
 (rw)  [1;33m0x403bc022[0m (0x403bc000 + 0x0022)
Crossbar A Select Register 17
 (rw) (07)  [0;32mSEL34[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT34 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL35[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT35 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbara1.sel20
<link=p.XBARA1.SEL20>
#### XBARA1.SEL23
<link=p.XBARA1.SEL23>
#### xbara1.sel33
<link=p.XBARA1.SEL33>
#### p.XBARA1.SEL38
<lang=dft>
 (rw)  [1;33m0x403bc04c[0m (0x403bc000 + 0x004c)
Crossbar A Select Register 38
 (rw) (07)  [0;32mSEL76[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT76 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL77[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT77 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel39
<link=p.XBARA1.SEL39>
#### XBARA1.SEL41
<link=p.XBARA1.SEL41>
#### xbara1.sel42
<link=p.XBARA1.SEL42>
#### p.xbara1.sel48
<link=p.XBARA1.SEL48>
#### p.XBARA1.SEL49
<lang=dft>
 (rw)  [1;33m0x403bc062[0m (0x403bc000 + 0x0062)
Crossbar A Select Register 49
 (rw) (07)  [0;32mSEL98[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT98 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL99[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT99 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbara1.sel51
<link=p.XBARA1.SEL51>
#### XBARA1.SEL56
<link=p.XBARA1.SEL56>
#### xbarb2.sel0
<link=p.XBARB2.SEL0>
#### p.XBARB2.SEL3
<lang=dft>
 (rw)  [1;33m0x403c0006[0m (0x403c0000 + 0x0006)
Crossbar B Select Register 3
 (rw) (06)  [0;32mSEL6[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT6 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (06)  [0;32mSEL7[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT7 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### XBARB2.SEL4
<link=p.XBARB2.SEL4>
#### p.xbarb2.sel5
<link=p.XBARB2.SEL5>
#### p.xbarb3
<link=p.XBARB3>
#### XBARB3.SEL2
<link=p.XBARB3.SEL2>
#### p.XBARB3.SEL3
<lang=dft>
 (rw)  [1;33m0x403c4006[0m (0x403c4000 + 0x0006)
Crossbar B Select Register 3
 (rw) (06)  [0;32mSEL6[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT6 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (06)  [0;32mSEL7[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT7 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### p.ENC1.LPOS
<lang=dft>
 (rw)  [1;33m0x403c8010[0m (0x403c8000 + 0x0010)
Lower Position Counter Register
 (rw) (16)  [0;32mPOS[0m  - [15:00] -  This read/write register contains the lower (least significant) half of the pos
 ition counter
</lang>
#### p.enc1.lcomp
<link=p.ENC1.LCOMP>
#### enc2.ctrl
<link=p.ENC2.CTRL>
#### ENC2.FILT
<link=p.ENC2.FILT>
#### ENC2.POSD
<link=p.ENC2.POSD>
#### p.enc2.rev
<link=p.ENC2.REV>
#### p.ENC3.WTR
<lang=dft>
 (rw)  [1;33m0x403d0004[0m (0x403d0000 + 0x0004)
Watchdog Timeout Register
 (rw) (16)  [0;32mWDOG[0m  - [15:00] -  WDOG[15:0] is a binary representation of the number of clock cycles plus one th
 at the watchdog timer counts before timing out and optionally generating an int
 errupt
</lang>
#### enc3.posd
<link=p.ENC3.POSD>
#### ENC3.UPOS
<link=p.ENC3.UPOS>
#### p.ENC3.LPOSH
<lang=dft>
 (ro)  [1;33m0x403d0014[0m (0x403d0000 + 0x0014)
Lower Position Hold Register
 (ro) (16)  [0;32mPOSH[0m  - [15:00] -  This read-only register contains a snapshot of the LPOS register.
</lang>
#### enc3.uinit
<link=p.ENC3.UINIT>
#### enc3.imr
<link=p.ENC3.IMR>
#### p.ENC3.TST
<lang=dft>
 (rw)  [1;33m0x403d001c[0m (0x403d0000 + 0x001c)
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
#### ENC3.LCOMP
<link=p.ENC3.LCOMP>
#### p.ENC4.POSD
<lang=dft>
 (rw)  [1;33m0x403d4006[0m (0x403d4000 + 0x0006)
Position Difference Counter Register
 (rw) (16)  [0;32mPOSD[0m  - [15:00] -  This read/write register contains the position change in value occurring betwee
 n each read of the position register
</lang>
#### enc4.lpos
<link=p.ENC4.LPOS>
#### p.enc4.imr
<link=p.ENC4.IMR>
#### ENC4.LCOMP
<link=p.ENC4.LCOMP>
#### pwm1.sm0init
<link=p.PWM1.SM0INIT>
#### PWM1.SM0CTRL2
<link=p.PWM1.SM0CTRL2>
#### p.pwm1.sm0ctrl
<link=p.PWM1.SM0CTRL>
#### p.PWM1.SM0FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403dc010[0m (0x403dc000 + 0x0010)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### p.PWM1.SM0VAL3
<lang=dft>
 (rw)  [1;33m0x403dc016[0m (0x403dc000 + 0x0016)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### PWM1.SM0VAL3
<link=p.PWM1.SM0VAL3>
#### p.pwm1.sm0val4
<link=p.PWM1.SM0VAL4>
#### PWM1.SM0DTCNT1
<link=p.PWM1.SM0DTCNT1>
#### p.pwm1.sm0captctrla
<link=p.PWM1.SM0CAPTCTRLA>
#### pwm1.sm0captctrla
<link=p.PWM1.SM0CAPTCTRLA>
#### p.pwm1.sm0cval0cyc
<link=p.PWM1.SM0CVAL0CYC>
#### p.pwm1.sm0cval2
<link=p.PWM1.SM0CVAL2>
#### p.pwm1.sm0cval3cyc
<link=p.PWM1.SM0CVAL3CYC>
#### PWM1.SM0CVAL4
<link=p.PWM1.SM0CVAL4>
#### p.PWM1.SM0CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403dc052[0m (0x403dc000 + 0x0052)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### p.pwm1.sm1ctrl2
<link=p.PWM1.SM1CTRL2>
#### p.PWM1.SM1VAL2
<lang=dft>
 (rw)  [1;33m0x403dc072[0m (0x403dc000 + 0x0072)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### PWM1.SM1VAL3
<link=p.PWM1.SM1VAL3>
#### p.pwm1.sm1fracval5
<link=p.PWM1.SM1FRACVAL5>
#### pwm1.sm1fracval5
<link=p.PWM1.SM1FRACVAL5>
#### p.pwm1.sm1val5
<link=p.PWM1.SM1VAL5>
#### pwm1.sm1frctrl
<link=p.PWM1.SM1FRCTRL>
#### p.pwm1.sm1dmaen
<link=p.PWM1.SM1DMAEN>
#### p.pwm1.sm1dismap0
<link=p.PWM1.SM1DISMAP0>
#### p.PWM1.SM1DTCNT0
<lang=dft>
 (rw)  [1;33m0x403dc090[0m (0x403dc000 + 0x0090)
Deadtime Count Register 0
 (rw) (16)  [0;32mDTCNT0[0m  - [15:00] -  DTCNT0
</lang>
#### pwm1.sm1captctrlb
<link=p.PWM1.SM1CAPTCTRLB>
#### pwm1.sm1cval0
<link=p.PWM1.SM1CVAL0>
#### p.pwm1.sm1cval1
<link=p.PWM1.SM1CVAL1>
#### p.pwm1.sm1cval3cyc
<link=p.PWM1.SM1CVAL3CYC>
#### PWM1.SM2INIT
<link=p.PWM1.SM2INIT>
#### p.PWM1.SM2FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403dc0cc[0m (0x403dc000 + 0x00cc)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### p.pwm1.sm2val1
<link=p.PWM1.SM2VAL1>
#### pwm1.sm2val1
<link=p.PWM1.SM2VAL1>
#### pwm1.sm2fracval2
<link=p.PWM1.SM2FRACVAL2>
#### p.pwm1.sm2frctrl
<link=p.PWM1.SM2FRCTRL>
#### pwm1.sm2octrl
<link=p.PWM1.SM2OCTRL>
#### p.PWM1.SM2STS
<lang=dft>
 (rw)  [1;33m0x403dc0e4[0m (0x403dc000 + 0x00e4)
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
#### pwm1.sm2dismap0
<link=p.PWM1.SM2DISMAP0>
#### PWM1.SM2CVAL2
<link=p.PWM1.SM2CVAL2>
#### PWM1.SM2CVAL3CYC
<link=p.PWM1.SM2CVAL3CYC>
#### p.PWM1.SM2CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403dc112[0m (0x403dc000 + 0x0112)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### p.PWM1.SM2CVAL5
<lang=dft>
 (ro)  [1;33m0x403dc114[0m (0x403dc000 + 0x0114)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### p.pwm1.sm3cnt
<link=p.PWM1.SM3CNT>
#### PWM1.SM3CNT
<link=p.PWM1.SM3CNT>
#### p.pwm1.sm3val0
<link=p.PWM1.SM3VAL0>
#### pwm1.sm3val0
<link=p.PWM1.SM3VAL0>
#### p.PWM1.SM3FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403dc138[0m (0x403dc000 + 0x0138)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### p.PWM1.SM3CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403dc156[0m (0x403dc000 + 0x0156)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### p.PWM1.SM3CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403dc158[0m (0x403dc000 + 0x0158)
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
#### PWM1.SM3CAPTCTRLX
<link=p.PWM1.SM3CAPTCTRLX>
#### PWM1.SM3CVAL1
<link=p.PWM1.SM3CVAL1>
#### pwm1.sm3cval1cyc
<link=p.PWM1.SM3CVAL1CYC>
#### pwm1.sm3cval2cyc
<link=p.PWM1.SM3CVAL2CYC>
#### PWM1.OUTEN
<link=p.PWM1.OUTEN>
#### pwm1.ftst0
<link=p.PWM1.FTST0>
#### p.pwm2.sm0fracval3
<link=p.PWM2.SM0FRACVAL3>
#### p.pwm2.sm0val3
<link=p.PWM2.SM0VAL3>
#### p.PWM2.SM0FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e0018[0m (0x403e0000 + 0x0018)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### PWM2.SM0TCTRL
<link=p.PWM2.SM0TCTRL>
#### p.pwm2.sm0dismap0
<link=p.PWM2.SM0DISMAP0>
#### pwm2.sm0dismap0
<link=p.PWM2.SM0DISMAP0>
#### p.PWM2.SM0CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e0036[0m (0x403e0000 + 0x0036)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### p.PWM2.SM0CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e0038[0m (0x403e0000 + 0x0038)
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
#### PWM2.SM0CAPTCOMPB
<link=p.PWM2.SM0CAPTCOMPB>
#### PWM2.SM0CVAL0
<link=p.PWM2.SM0CVAL0>
#### p.pwm2.sm0cval1cyc
<link=p.PWM2.SM0CVAL1CYC>
#### p.pwm2.sm0cval3
<link=p.PWM2.SM0CVAL3>
#### pwm2.sm0cval5cyc
<link=p.PWM2.SM0CVAL5CYC>
#### p.PWM2.SM1FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403e006c[0m (0x403e0000 + 0x006c)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### p.pwm2.sm1val2
<link=p.PWM2.SM1VAL2>
#### p.PWM2.SM1STS
<lang=dft>
 (rw)  [1;33m0x403e0084[0m (0x403e0000 + 0x0084)
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
#### pwm2.sm1captctrla
<link=p.PWM2.SM1CAPTCTRLA>
#### p.pwm2.sm1captctrlx
<link=p.PWM2.SM1CAPTCTRLX>
#### p.pwm2.sm1cval3
<link=p.PWM2.SM1CVAL3>
#### PWM2.SM1CVAL3
<link=p.PWM2.SM1CVAL3>
#### p.pwm2.sm1cval3cyc
<link=p.PWM2.SM1CVAL3CYC>
#### p.PWM2.SM1CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403e00b2[0m (0x403e0000 + 0x00b2)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### p.PWM2.SM1CVAL5
<lang=dft>
 (ro)  [1;33m0x403e00b4[0m (0x403e0000 + 0x00b4)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### pwm2.sm1cval5
<link=p.PWM2.SM1CVAL5>
#### p.pwm2.sm2fracval1
<link=p.PWM2.SM2FRACVAL1>
#### p.PWM2.SM2VAL2
<lang=dft>
 (rw)  [1;33m0x403e00d2[0m (0x403e0000 + 0x00d2)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### PWM2.SM2VAL2
<link=p.PWM2.SM2VAL2>
#### PWM2.SM2FRACVAL5
<link=p.PWM2.SM2FRACVAL5>
#### PWM2.SM2DISMAP1
<link=p.PWM2.SM2DISMAP1>
#### p.PWM2.SM2DTCNT0
<lang=dft>
 (rw)  [1;33m0x403e00f0[0m (0x403e0000 + 0x00f0)
Deadtime Count Register 0
 (rw) (16)  [0;32mDTCNT0[0m  - [15:00] -  DTCNT0
</lang>
#### p.pwm2.sm2captcompa
<link=p.PWM2.SM2CAPTCOMPA>
#### p.pwm2.sm2captctrlb
<link=p.PWM2.SM2CAPTCTRLB>
#### pwm2.sm2captcompx
<link=p.PWM2.SM2CAPTCOMPX>
#### p.pwm2.sm2cval0cyc
<link=p.PWM2.SM2CVAL0CYC>
#### p.pwm2.sm2cval4
<link=p.PWM2.SM2CVAL4>
#### PWM2.SM3CNT
<link=p.PWM2.SM3CNT>
#### PWM2.SM3INIT
<link=p.PWM2.SM3INIT>
#### PWM2.SM3VAL0
<link=p.PWM2.SM3VAL0>
#### p.PWM2.SM3FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e0130[0m (0x403e0000 + 0x0130)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### p.PWM2.SM3VAL3
<lang=dft>
 (rw)  [1;33m0x403e0136[0m (0x403e0000 + 0x0136)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### p.pwm2.sm3fracval4
<link=p.PWM2.SM3FRACVAL4>
#### pwm2.sm3fracval4
<link=p.PWM2.SM3FRACVAL4>
#### p.pwm2.sm3tctrl
<link=p.PWM2.SM3TCTRL>
#### PWM2.SM3CAPTCTRLX
<link=p.PWM2.SM3CAPTCTRLX>
#### p.PWM2.SM3CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403e0172[0m (0x403e0000 + 0x0172)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### pwm2.sm3cval4cyc
<link=p.PWM2.SM3CVAL4CYC>
#### PWM2.SM3CVAL5
<link=p.PWM2.SM3CVAL5>
#### pwm2.sm3cval5cyc
<link=p.PWM2.SM3CVAL5CYC>
#### PWM2.SWCOUT
<link=p.PWM2.SWCOUT>
#### p.pwm2.mctrl2
<link=p.PWM2.MCTRL2>
#### pwm2.fsts0
<link=p.PWM2.FSTS0>
#### p.PWM3.SM0FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403e400c[0m (0x403e4000 + 0x000c)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### p.pwm3.sm0val1
<link=p.PWM3.SM0VAL1>
#### pwm3.sm0val2
<link=p.PWM3.SM0VAL2>
#### pwm3.sm0fracval3
<link=p.PWM3.SM0FRACVAL3>
#### p.pwm3.sm0frctrl
<link=p.PWM3.SM0FRCTRL>
#### p.PWM3.SM0STS
<lang=dft>
 (rw)  [1;33m0x403e4024[0m (0x403e4000 + 0x0024)
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
#### pwm3.sm0inten
<link=p.PWM3.SM0INTEN>
#### pwm3.sm0dismap1
<link=p.PWM3.SM0DISMAP1>
#### pwm3.sm0captcompx
<link=p.PWM3.SM0CAPTCOMPX>
#### pwm3.sm0cval1cyc
<link=p.PWM3.SM0CVAL1CYC>
#### PWM3.SM0CVAL3
<link=p.PWM3.SM0CVAL3>
#### p.PWM3.SM0CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403e4052[0m (0x403e4000 + 0x0052)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### p.PWM3.SM0CVAL5
<lang=dft>
 (ro)  [1;33m0x403e4054[0m (0x403e4000 + 0x0054)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### p.pwm3.sm1cnt
<link=p.PWM3.SM1CNT>
#### p.pwm3.sm1val0
<link=p.PWM3.SM1VAL0>
#### pwm3.sm1val3
<link=p.PWM3.SM1VAL3>
#### p.PWM3.SM1FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e4078[0m (0x403e4000 + 0x0078)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### pwm3.sm1frctrl
<link=p.PWM3.SM1FRCTRL>
#### pwm3.sm1inten
<link=p.PWM3.SM1INTEN>
#### PWM3.SM1TCTRL
<link=p.PWM3.SM1TCTRL>
#### p.PWM3.SM1CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e4096[0m (0x403e4000 + 0x0096)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### p.PWM3.SM1CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e4098[0m (0x403e4000 + 0x0098)
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
#### PWM3.SM1CAPTCOMPB
<link=p.PWM3.SM1CAPTCOMPB>
#### pwm3.sm1captcompx
<link=p.PWM3.SM1CAPTCOMPX>
#### PWM3.SM1CVAL0
<link=p.PWM3.SM1CVAL0>
#### PWM3.SM2CNT
<link=p.PWM3.SM2CNT>
#### PWM3.SM2INIT
<link=p.PWM3.SM2INIT>
#### p.pwm3.sm2ctrl
<link=p.PWM3.SM2CTRL>
#### PWM3.SM2VAL0
<link=p.PWM3.SM2VAL0>
#### pwm3.sm2fracval1
<link=p.PWM3.SM2FRACVAL1>
#### p.PWM3.SM2FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e40d0[0m (0x403e4000 + 0x00d0)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### p.PWM3.SM2VAL3
<lang=dft>
 (rw)  [1;33m0x403e40d6[0m (0x403e4000 + 0x00d6)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### p.pwm3.sm2val4
<link=p.PWM3.SM2VAL4>
#### p.pwm3.sm2captctrla
<link=p.PWM3.SM2CAPTCTRLA>
#### PWM3.SM2CAPTCTRLX
<link=p.PWM3.SM2CAPTCTRLX>
#### p.pwm3.sm2cval0cyc
<link=p.PWM3.SM2CVAL0CYC>
#### p.pwm3.sm2cval2
<link=p.PWM3.SM2CVAL2>
#### p.pwm3.sm2cval3cyc
<link=p.PWM3.SM2CVAL3CYC>
#### p.PWM3.SM2CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403e4112[0m (0x403e4000 + 0x0112)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### PWM3.SM2CVAL5
<link=p.PWM3.SM2CVAL5>
#### p.pwm3.sm3ctrl2
<link=p.PWM3.SM3CTRL2>
#### p.PWM3.SM3VAL2
<lang=dft>
 (rw)  [1;33m0x403e4132[0m (0x403e4000 + 0x0132)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### PWM3.SM3VAL2
<link=p.PWM3.SM3VAL2>
#### pwm3.sm3fracval4
<link=p.PWM3.SM3FRACVAL4>
#### p.pwm3.sm3fracval5
<link=p.PWM3.SM3FRACVAL5>
#### PWM3.SM3FRACVAL5
<link=p.PWM3.SM3FRACVAL5>
#### p.pwm3.sm3val5
<link=p.PWM3.SM3VAL5>
#### p.pwm3.sm3dmaen
<link=p.PWM3.SM3DMAEN>
#### p.pwm3.sm3dismap0
<link=p.PWM3.SM3DISMAP0>
#### PWM3.SM3DISMAP1
<link=p.PWM3.SM3DISMAP1>
#### p.PWM3.SM3DTCNT0
<lang=dft>
 (rw)  [1;33m0x403e4150[0m (0x403e4000 + 0x0150)
Deadtime Count Register 0
 (rw) (16)  [0;32mDTCNT0[0m  - [15:00] -  DTCNT0
</lang>
#### p.pwm3.sm3cval1
<link=p.PWM3.SM3CVAL1>
#### p.pwm3.sm3cval3cyc
<link=p.PWM3.SM3CVAL3CYC>
#### PWM3.MASK
<link=p.PWM3.MASK>
#### PWM3.DTSRCSEL
<link=p.PWM3.DTSRCSEL>
#### p.PWM3.MCTRL
<lang=dft>
 (rw)  [1;33m0x403e4188[0m (0x403e4000 + 0x0188)
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
#### p.PWM3.FSTS0
<lang=dft>
 (rw)  [1;33m0x403e418e[0m (0x403e4000 + 0x018e)
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
#### PWM3.FFILT0
<link=p.PWM3.FFILT0>
#### p.PWM4.SM0CTRL2
<lang=dft>
 (rw)  [1;33m0x403e8004[0m (0x403e8000 + 0x0004)
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
#### pwm4.sm0val2
<link=p.PWM4.SM0VAL2>
#### p.PWM4.SM0FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e8014[0m (0x403e8000 + 0x0014)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### p.pwm4.sm0fracval5
<link=p.PWM4.SM0FRACVAL5>
#### p.pwm4.sm0dmaen
<link=p.PWM4.SM0DMAEN>
#### pwm4.sm0cval0
<link=p.PWM4.SM0CVAL0>
#### p.pwm4.sm1ctrl2
<link=p.PWM4.SM1CTRL2>
#### pwm4.sm1fracval1
<link=p.PWM4.SM1FRACVAL1>
#### pwm4.sm1val3
<link=p.PWM4.SM1VAL3>
#### PWM4.SM1VAL4
<link=p.PWM4.SM1VAL4>
#### pwm4.sm1octrl
<link=p.PWM4.SM1OCTRL>
#### p.pwm4.sm1dmaen
<link=p.PWM4.SM1DMAEN>
#### pwm4.sm1dismap0
<link=p.PWM4.SM1DISMAP0>
#### pwm4.sm1captcompa
<link=p.PWM4.SM1CAPTCOMPA>
#### pwm4.sm1captctrlb
<link=p.PWM4.SM1CAPTCTRLB>
#### p.pwm4.sm1cval0cyc
<link=p.PWM4.SM1CVAL0CYC>
#### p.PWM4.SM1CVAL1
<lang=dft>
 (ro)  [1;33m0x403e80a4[0m (0x403e8000 + 0x00a4)
Capture Value 1 Register
 (ro) (16)  [0;32mCAPTVAL1[0m  - [15:00] -  CAPTVAL1
</lang>
#### PWM4.SM2FRACVAL1
<link=p.PWM4.SM2FRACVAL1>
#### p.PWM4.SM2VAL3
<lang=dft>
 (rw)  [1;33m0x403e80d6[0m (0x403e8000 + 0x00d6)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### p.PWM4.SM2OCTRL
<lang=dft>
 (rw)  [1;33m0x403e80e2[0m (0x403e8000 + 0x00e2)
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
#### PWM4.SM2DISMAP1
<link=p.PWM4.SM2DISMAP1>
#### PWM4.SM2DTCNT0
<link=p.PWM4.SM2DTCNT0>
#### p.pwm4.sm2captctrlx
<link=p.PWM4.SM2CAPTCTRLX>
#### p.PWM4.SM2CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403e8102[0m (0x403e8000 + 0x0102)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### PWM4.SM2CVAL5CYC
<link=p.PWM4.SM2CVAL5CYC>
#### p.PWM4.SM3INIT
<lang=dft>
 (rw)  [1;33m0x403e8122[0m (0x403e8000 + 0x0122)
Initial Count Register
 (rw) (16)  [0;32mINIT[0m  - [15:00] -  Initial Count Register Bits
</lang>
#### p.PWM4.SM3CTRL2
<lang=dft>
 (rw)  [1;33m0x403e8124[0m (0x403e8000 + 0x0124)
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
#### p.pwm4.sm3fracval2
<link=p.PWM4.SM3FRACVAL2>
#### pwm4.sm3fracval3
<link=p.PWM4.SM3FRACVAL3>
#### p.PWM4.SM3FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e813c[0m (0x403e8000 + 0x013c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### p.pwm4.sm3frctrl
<link=p.PWM4.SM3FRCTRL>
#### pwm4.sm3frctrl
<link=p.PWM4.SM3FRCTRL>
#### PWM4.SM3STS
<link=p.PWM4.SM3STS>
#### p.PWM4.SM3DISMAP1
<lang=dft>
 (rw)  [1;33m0x403e814e[0m (0x403e8000 + 0x014e)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### PWM4.SM3CAPTCTRLA
<link=p.PWM4.SM3CAPTCTRLA>
#### p.PWM4.MCTRL2
<lang=dft>
 (rw)  [1;33m0x403e818a[0m (0x403e8000 + 0x018a)
Master Control 2 Register
 (rw) (02)  [0;32mMONPLL[0m  - [01:00] -  Monitor PLL State
      0 - MONPLL_0 :
         Not locked. Do not monitor PLL operation. Resetting of the fractional d
         elay block in case of PLL losing lock will be controlled by software.
      0x1 - MONPLL_1 :
         Not locked. Monitor PLL operation to automatically disable the fraction
         al delay block when the PLL encounters problems.
      0x2 - MONPLL_2 :
         Locked. Do not monitor PLL operation. Resetting of the fractional delay
          block in case of PLL losing lock will be controlled by software. These
          bits are write protected until the next reset.
      0x3 - MONPLL_3 :
         Locked. Monitor PLL operation to automatically disable the fractional d
         elay block when the PLL encounters problems. These bits are write prote
         cted until the next reset.
</lang>
#### p.pwm4.mctrl2
<link=p.PWM4.MCTRL2>
#### pwm4.fctrl0
<link=p.PWM4.FCTRL0>
#### bee.addr_offset0
<link=p.BEE.ADDR_OFFSET0>
#### BEE.CTR_NONCE0_W2
<link=p.BEE.CTR_NONCE0_W2>
#### p.BEE.CTR_NONCE1_W0
<lang=dft>
 (wo)  [1;33m0x403ec030[0m (0x403ec000 + 0x0030)
no description available
 (wo) (32)  [0;32mNONCE10[0m  - [31:00] -  Nonce1 from software for CTR, for region1. Nonce1={Nonce13,Nonce12,Nonce11,Nonc
 e10}
</lang>
#### lpi2c1.param
<link=p.LPI2C1.PARAM>
#### LPI2C1.MCFGR1
<link=p.LPI2C1.MCFGR1>
#### LPI2C1.MDMR
<link=p.LPI2C1.MDMR>
#### p.lpi2c1.mfcr
<link=p.LPI2C1.MFCR>
#### LPI2C1.MFCR
<link=p.LPI2C1.MFCR>
#### LPI2C1.SIER
<link=p.LPI2C1.SIER>
#### p.lpi2c1.sder
<link=p.LPI2C1.SDER>
#### lpi2c1.samr
<link=p.LPI2C1.SAMR>
#### p.LPI2C1.SRDR
<lang=dft>
 (ro)  [1;33m0x403f0170[0m (0x403f0000 + 0x0170)
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
#### p.lpi2c1.srdr
<link=p.LPI2C1.SRDR>
#### LPI2C2.PARAM
<link=p.LPI2C2.PARAM>
#### lpi2c2.mier
<link=p.LPI2C2.MIER>
#### p.LPI2C2.MDMR
<lang=dft>
 (rw)  [1;33m0x403f4040[0m (0x403f4000 + 0x0040)
Master Data Match Register
 (rw) (08)  [0;32mMATCH0[0m  - [07:00] -  Match 0 Value
 (rw) (08)  [0;32mMATCH1[0m  - [23:16] -  Match 1 Value
</lang>
#### p.LPI2C2.MCCR0
<lang=dft>
 (rw)  [1;33m0x403f4048[0m (0x403f4000 + 0x0048)
Master Clock Configuration Register 0
 (rw) (06)  [0;32mCLKLO[0m  - [05:00] -  Clock Low Period
 (rw) (06)  [0;32mCLKHI[0m  - [13:08] -  Clock High Period
 (rw) (06)  [0;32mSETHOLD[0m  - [21:16] -  Setup Hold Delay
 (rw) (06)  [0;32mDATAVD[0m  - [29:24] -  Data Valid Delay
</lang>
#### p.lpi2c2.mccr0
<link=p.LPI2C2.MCCR0>
#### p.lpi2c2.mfsr
<link=p.LPI2C2.MFSR>
#### p.lpi2c2.mrdr
<link=p.LPI2C2.MRDR>
#### lpi2c2.scfgr1
<link=p.LPI2C2.SCFGR1>
#### p.LPI2C3.MCCR1
<lang=dft>
 (rw)  [1;33m0x403f8050[0m (0x403f8000 + 0x0050)
Master Clock Configuration Register 1
 (rw) (06)  [0;32mCLKLO[0m  - [05:00] -  Clock Low Period
 (rw) (06)  [0;32mCLKHI[0m  - [13:08] -  Clock High Period
 (rw) (06)  [0;32mSETHOLD[0m  - [21:16] -  Setup Hold Delay
 (rw) (06)  [0;32mDATAVD[0m  - [29:24] -  Data Valid Delay
</lang>
#### p.lpi2c3.mccr1
<link=p.LPI2C3.MCCR1>
#### p.lpi2c3.ssr
<link=p.LPI2C3.SSR>
#### p.lpi2c3.stdr
<link=p.LPI2C3.STDR>
#### LPI2C3.SRDR
<link=p.LPI2C3.SRDR>
#### lpi2c4.mcr
<link=p.LPI2C4.MCR>
#### p.LPI2C4.MDMR
<lang=dft>
 (rw)  [1;33m0x403fc040[0m (0x403fc000 + 0x0040)
Master Data Match Register
 (rw) (08)  [0;32mMATCH0[0m  - [07:00] -  Match 0 Value
 (rw) (08)  [0;32mMATCH1[0m  - [23:16] -  Match 1 Value
</lang>
#### LPI2C4.MCCR1
<link=p.LPI2C4.MCCR1>
#### p.lpi2c4.mfsr
<link=p.LPI2C4.MFSR>
#### LPI2C4.MTDR
<link=p.LPI2C4.MTDR>
#### LPI2C4.SCFGR1
<link=p.LPI2C4.SCFGR1>
#### p.lpi2c4.srdr
<link=p.LPI2C4.SRDR>
#### SystemControl.VTOR
<link=p.SYSTEMCONTROL.VTOR>
#### systemcontrol.ccr
<link=p.SYSTEMCONTROL.CCR>
#### p.SYSTEMCONTROL.SHPR3
<lang=dft>
 (rw)  [1;33m0xe000ed20[0m (0xe000e000 + 0x0d20)
System Handler Priority Register 3
 (rw) (08)  [0;32mPRI_14[0m  - [23:16] -  Priority of system handler 14, PendSV
 (rw) (08)  [0;32mPRI_15[0m  - [31:24] -  Priority of system handler 15, SysTick exception
</lang>
#### p.systemcontrol.cfsr
<link=p.SYSTEMCONTROL.CFSR>
#### p.SYSTEMCONTROL.BFAR
<lang=dft>
 (rw)  [1;33m0xe000ed38[0m (0xe000e000 + 0x0d38)
BusFault Address Register
 (rw) (32)  [0;32mADDRESS[0m  - [31:00] -  Address of the BusFault location
</lang>
#### systemcontrol.bfar
<link=p.SYSTEMCONTROL.BFAR>
#### systemcontrol.id_dfr0
<link=p.SYSTEMCONTROL.ID_DFR0>
#### systemcontrol.id_mmfr2
<link=p.SYSTEMCONTROL.ID_MMFR2>
#### p.SYSTEMCONTROL.ID_ISAR1
<lang=dft>
 (ro)  [1;33m0xe000ed64[0m (0xe000e000 + 0x0d64)
Instruction Set Attributes Register 1
 (ro) (04)  [0;32mEXTEND_INSTRS[0m  - [15:12] -  Indicates the supported Extend instructions
      0 - EXTEND_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - EXTEND_INSTRS_1 :
         Adds support for the SXTB, SXTH, UXTB, and UXTH instructions
      0x2 - EXTEND_INSTRS_2 :
         As for 1, and adds support for the SXTAB, SXTAB16, SXTAH, SXTB16, UXTAB
         , UXTAB16, UXTAH, and UXTB16 instructions
 (ro) (04)  [0;32mIFTHEN_INSTRS[0m  - [19:16] -  Indicates the supported IfThen instructions
      0 - IFTHEN_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - IFTHEN_INSTRS_1 :
         Adds support for the IT instructions, and for the IT bits in the PSRs
 (ro) (04)  [0;32mIMMEDIATE_INSTRS[0m  - [23:20] -  Indicates the support for data-processing instructions with long immediate
      0 - IMMEDIATE_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - IMMEDIATE_INSTRS_1 :
         Adds support for the ADDW, MOVW, MOVT, and SUBW instructions
 (ro) (04)  [0;32mINTERWORK_INSTRS[0m  - [27:24] -  Indicates the supported Interworking instructions
      0 - INTERWORK_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - INTERWORK_INSTRS_1 :
         Adds support for the BX instruction, and the T bit in the PSR
      0x2 - INTERWORK_INSTRS_2 :
         As for 1, and adds support for the BLX instruction, and PC loads have B
         X-like behavior
      0x3 - INTERWORK_INSTRS_3 :
         ARMv7-M unused
</lang>
#### SystemControl.CSSELR
<link=p.SYSTEMCONTROL.CSSELR>
#### SystemControl.STIR
<link=p.SYSTEMCONTROL.STIR>
#### p.SYSTEMCONTROL.DCCMVAU
<lang=dft>
 (wo)  [1;33m0xe000ef64[0m (0xe000e000 + 0x0f64)
Data cache by address to PoU
 (wo) (32)  [0;32mDCCMVAU[0m  - [31:00] -  D-cache clean by MVA to PoU
</lang>
#### p.systemcontrol.dccmvau
<link=p.SYSTEMCONTROL.DCCMVAU>
#### SystemControl.CM7_CACR
<link=p.SYSTEMCONTROL.CM7_CACR>
#### SystemControl.CM7_ABFSR
<link=p.SYSTEMCONTROL.CM7_ABFSR>
#### p.nvic
<link=p.NVIC>
#### nvic.nviciser2
<link=p.NVIC.NVICISER2>
#### p.nvic.nviciser3
<link=p.NVIC.NVICISER3>
#### p.nvic.nvicicpr3
<link=p.NVIC.NVICICPR3>
#### NVIC.NVICICPR3
<link=p.NVIC.NVICICPR3>
#### p.nvic.nviciabr3
<link=p.NVIC.NVICIABR3>
#### NVIC.NVICIABR3
<link=p.NVIC.NVICIABR3>
#### nvic.nvicip2
<link=p.NVIC.NVICIP2>
#### p.nvic.nvicip8
<link=p.NVIC.NVICIP8>
#### p.NVIC.NVICIP12
<lang=dft>
 (rw)  [1;33m0xe000e40c[0m (0xe000e100 + 0x030c)
Interrupt Priority Register 12
 (rw) (04)  [0;32mPRI12[0m  - [07:04] -  Priority of the INT_DMA12_DMA28 interrupt 12
</lang>
#### p.nvic.nvicip17
<link=p.NVIC.NVICIP17>
#### p.nvic.nvicip31
<link=p.NVIC.NVICIP31>
#### nvic.nvicip38
<link=p.NVIC.NVICIP38>
#### nvic.nvicip40
<link=p.NVIC.NVICIP40>
#### p.NVIC.NVICIP41
<lang=dft>
 (rw)  [1;33m0xe000e429[0m (0xe000e100 + 0x0329)
Interrupt Priority Register 41
 (rw) (04)  [0;32mPRI41[0m  - [07:04] -  Priority of the INT_GPR_IRQ interrupt 41
</lang>
#### NVIC.NVICIP51
<link=p.NVIC.NVICIP51>
#### nvic.nvicip53
<link=p.NVIC.NVICIP53>
#### NVIC.NVICIP60
<link=p.NVIC.NVICIP60>
#### p.nvic.nvicip62
<link=p.NVIC.NVICIP62>
#### nvic.nvicip66
<link=p.NVIC.NVICIP66>
#### p.NVIC.NVICIP67
<lang=dft>
 (rw)  [1;33m0xe000e443[0m (0xe000e100 + 0x0343)
Interrupt Priority Register 67
 (rw) (04)  [0;32mPRI67[0m  - [07:04] -  Priority of the INT_ADC1 interrupt 67
</lang>
#### p.NVIC.NVICIP70
<lang=dft>
 (rw)  [1;33m0xe000e446[0m (0xe000e100 + 0x0346)
Interrupt Priority Register 70
 (rw) (04)  [0;32mPRI70[0m  - [07:04] -  Priority of the INT_Reserved86 interrupt 70
</lang>
#### nvic.nvicip75
<link=p.NVIC.NVICIP75>
#### NVIC.NVICIP77
<link=p.NVIC.NVICIP77>
#### nvic.nvicip84
<link=p.NVIC.NVICIP84>
#### p.NVIC.NVICIP85
<lang=dft>
 (rw)  [1;33m0xe000e455[0m (0xe000e100 + 0x0355)
Interrupt Priority Register 85
 (rw) (04)  [0;32mPRI85[0m  - [07:04] -  Priority of the INT_GPIO3_Combined_16_31 interrupt 85
</lang>
#### p.nvic.nvicip89
<link=p.NVIC.NVICIP89>
#### NVIC.NVICIP95
<link=p.NVIC.NVICIP95>
#### nvic.nvicip97
<link=p.NVIC.NVICIP97>
#### nvic.nvicip112
<link=p.NVIC.NVICIP112>
#### p.nvic.nvicip114
<link=p.NVIC.NVICIP114>
#### p.nvic.nvicip125
<link=p.NVIC.NVICIP125>
#### NVIC.NVICIP128
<link=p.NVIC.NVICIP128>
#### p.nvic.nvicip132
<link=p.NVIC.NVICIP132>
#### p.NVIC.NVICIP139
<lang=dft>
 (rw)  [1;33m0xe000e48b[0m (0xe000e100 + 0x038b)
Interrupt Priority Register 139
 (rw) (04)  [0;32mPRI139[0m  - [07:04] -  Priority of the INT_PWM2_2 interrupt 139
</lang>
#### nvic.nvicip141
<link=p.NVIC.NVICIP141>
#### p.NVIC.NVICIP143
<lang=dft>
 (rw)  [1;33m0xe000e48f[0m (0xe000e100 + 0x038f)
Interrupt Priority Register 143
 (rw) (04)  [0;32mPRI143[0m  - [07:04] -  Priority of the INT_PWM3_1 interrupt 143
</lang>
#### NVIC.NVICIP143
<link=p.NVIC.NVICIP143>
#### p.nvic.nvicip146
<link=p.NVIC.NVICIP146>
#### NVIC.NVICIP150
<link=p.NVIC.NVICIP150>
#### p.NVIC.NVICIP154
<lang=dft>
 (rw)  [1;33m0xe000e49a[0m (0xe000e100 + 0x039a)
Interrupt Priority Register 154
 (rw) (04)  [0;32mPRI154[0m  - [07:04] -  Priority of the INT_CAN3 interrupt 154
</lang>
#### OPACR3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AIPSTZ1.OPACR3
   p.AIPSTZ2.OPACR3
   p.AIPSTZ3.OPACR3
   p.AIPSTZ4.OPACR3
#### reg1
<link=REG1>
#### cval3
<link=CVAL3>
#### fpr
<link=FPR>
#### SW_PAD_CTL_PAD_TEST_MODE
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_TEST_MODE>
#### SW_PAD_CTL_PAD_POR_B
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_POR_B>
#### GPR4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.IOMUXC_GPR.GPR4
   p.SRC.GPR4
#### GPR12
<link=p.IOMUXC_GPR.GPR12>
#### gpr32
<link=GPR32>
#### GPR34
<link=p.IOMUXC_GPR.GPR34>
#### tcm_ctrl
<link=TCM_CTRL>
#### SERV
<link=p.EWM.SERV>
#### WCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.WDOG1.WCR
   p.WDOG2.WCR
#### hc0
<link=HC0>
#### R7
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.R7
   p.ADC2.R7
#### sdctl
<link=SDCTL>
#### FRQMAX
<link=p.TRNG.FRQMAX>
#### SCR6PC
<link=p.TRNG.SCR6PC>
#### ENT[1]
<link=p.TRNG.ENT[1]>
#### ENT[6]
<link=p.TRNG.ENT[6]>
#### ent[11]
<link=ENT[11]>
#### ent[14]
<link=ENT[14]>
#### pkrcnt54
<link=PKRCNT54>
#### HPCOMR
<link=p.SNVS.HPCOMR>
#### LPZMKR[5]
<link=p.SNVS.LPZMKR[5]>
#### lpgpr[3]
<link=LPGPR[3]>
#### hpvidr2
<link=HPVIDR2>
#### pll_usb1
<link=PLL_USB1>
#### pll_usb1_set
<link=PLL_USB1_SET>
#### pll_video_tog
<link=PLL_VIDEO_TOG>
#### REG_1P1
<link=p.PMU.REG_1P1>
#### REG_2P5_TOG
<link=p.PMU.REG_2P5_TOG>
#### TEMPSENSE0_TOG
<link=p.TEMPMON.TEMPSENSE0_TOG>
#### tempsense2_clr
<link=TEMPSENSE2_CLR>
#### USB1_CHRG_DETECT_STAT
<link=p.USB_ANALOG.USB1_CHRG_DETECT_STAT>
#### USB1_LOOPBACK_TOG
<link=p.USB_ANALOG.USB1_LOOPBACK_TOG>
#### USB1_MISC_TOG
<link=p.USB_ANALOG.USB1_MISC_TOG>
#### usb2_chrg_detect_tog
<link=USB2_CHRG_DETECT_TOG>
#### osc_config1_clr
<link=OSC_CONFIG1_CLR>
#### CTRL_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.CTRL_SET
   p.USBPHY2.CTRL_SET
   p.OCOTP.CTRL_SET
   p.PXP.CTRL_SET
   p.LCDIF.CTRL_SET
   p.DCP.CTRL_SET
#### CTRL_CLR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.CTRL_CLR
   p.USBPHY2.CTRL_CLR
   p.OCOTP.CTRL_CLR
   p.PXP.CTRL_CLR
   p.LCDIF.CTRL_CLR
   p.DCP.CTRL_CLR
#### ctrl_tog
<link=CTRL_TOG>
#### debug1_set
<link=DEBUG1_SET>
#### csl3
<link=CSL3>
#### csl15
<link=CSL15>
#### CSL23
<link=p.CSU.CSL23>
#### CSL30
<link=p.CSU.CSL30>
#### cerq
<link=CERQ>
#### DCHPRI23
<link=p.DMA0.DCHPRI23>
#### dchpri23
<link=DCHPRI23>
#### DCHPRI30
<link=p.DMA0.DCHPRI30>
#### dchpri30
<link=DCHPRI30>
#### tcd0_nbytes_mloffno
<link=TCD0_NBYTES_MLOFFNO>
#### tcd0_nbytes_mloffyes
<link=TCD0_NBYTES_MLOFFYES>
#### TCD0_CITER_ELINKNO
<link=p.DMA0.TCD0_CITER_ELINKNO>
#### TCD1_DADDR
<link=p.DMA0.TCD1_DADDR>
#### TCD1_CSR
<link=p.DMA0.TCD1_CSR>
#### TCD2_DLASTSGA
<link=p.DMA0.TCD2_DLASTSGA>
#### TCD2_CSR
<link=p.DMA0.TCD2_CSR>
#### TCD3_SOFF
<link=p.DMA0.TCD3_SOFF>
#### TCD3_NBYTES_MLOFFYES
<link=p.DMA0.TCD3_NBYTES_MLOFFYES>
#### tcd3_biter_elinkno
<link=TCD3_BITER_ELINKNO>
#### tcd3_biter_elinkyes
<link=TCD3_BITER_ELINKYES>
#### tcd4_nbytes_mlno
<link=TCD4_NBYTES_MLNO>
#### tcd5_nbytes_mlno
<link=TCD5_NBYTES_MLNO>
#### TCD6_NBYTES_MLNO
<link=p.DMA0.TCD6_NBYTES_MLNO>
#### tcd6_citer_elinkno
<link=TCD6_CITER_ELINKNO>
#### tcd7_nbytes_mlno
<link=TCD7_NBYTES_MLNO>
#### TCD7_CITER_ELINKYES
<link=p.DMA0.TCD7_CITER_ELINKYES>
#### tcd8_biter_elinkno
<link=TCD8_BITER_ELINKNO>
#### TCD9_BITER_ELINKYES
<link=p.DMA0.TCD9_BITER_ELINKYES>
#### TCD10_CITER_ELINKYES
<link=p.DMA0.TCD10_CITER_ELINKYES>
#### tcd11_nbytes_mloffno
<link=TCD11_NBYTES_MLOFFNO>
#### tcd12_dlastsga
<link=TCD12_DLASTSGA>
#### tcd12_biter_elinkyes
<link=TCD12_BITER_ELINKYES>
#### tcd13_biter_elinkyes
<link=TCD13_BITER_ELINKYES>
#### TCD14_SADDR
<link=p.DMA0.TCD14_SADDR>
#### TCD14_NBYTES_MLNO
<link=p.DMA0.TCD14_NBYTES_MLNO>
#### TCD14_BITER_ELINKNO
<link=p.DMA0.TCD14_BITER_ELINKNO>
#### TCD15_DADDR
<link=p.DMA0.TCD15_DADDR>
#### tcd15_dlastsga
<link=TCD15_DLASTSGA>
#### TCD16_NBYTES_MLOFFNO
<link=p.DMA0.TCD16_NBYTES_MLOFFNO>
#### tcd16_nbytes_mloffno
<link=TCD16_NBYTES_MLOFFNO>
#### TCD16_SLAST
<link=p.DMA0.TCD16_SLAST>
#### tcd17_daddr
<link=TCD17_DADDR>
#### TCD17_DOFF
<link=p.DMA0.TCD17_DOFF>
#### tcd18_nbytes_mloffyes
<link=TCD18_NBYTES_MLOFFYES>
#### tcd19_attr
<link=TCD19_ATTR>
#### tcd19_slast
<link=TCD19_SLAST>
#### TCD19_BITER_ELINKYES
<link=p.DMA0.TCD19_BITER_ELINKYES>
#### TCD20_SADDR
<link=p.DMA0.TCD20_SADDR>
#### TCD20_CITER_ELINKNO
<link=p.DMA0.TCD20_CITER_ELINKNO>
#### tcd20_biter_elinkno
<link=TCD20_BITER_ELINKNO>
#### TCD21_NBYTES_MLOFFYES
<link=p.DMA0.TCD21_NBYTES_MLOFFYES>
#### TCD21_DLASTSGA
<link=p.DMA0.TCD21_DLASTSGA>
#### tcd21_biter_elinkyes
<link=TCD21_BITER_ELINKYES>
#### TCD22_NBYTES_MLOFFNO
<link=p.DMA0.TCD22_NBYTES_MLOFFNO>
#### tcd22_doff
<link=TCD22_DOFF>
#### tcd23_slast
<link=TCD23_SLAST>
#### TCD25_CSR
<link=p.DMA0.TCD25_CSR>
#### tcd26_saddr
<link=TCD26_SADDR>
#### TCD26_SOFF
<link=p.DMA0.TCD26_SOFF>
#### tcd26_nbytes_mloffno
<link=TCD26_NBYTES_MLOFFNO>
#### tcd27_doff
<link=TCD27_DOFF>
#### TCD28_SOFF
<link=p.DMA0.TCD28_SOFF>
#### tcd28_attr
<link=TCD28_ATTR>
#### tcd28_nbytes_mlno
<link=TCD28_NBYTES_MLNO>
#### tcd28_daddr
<link=TCD28_DADDR>
#### TCD28_CITER_ELINKYES
<link=p.DMA0.TCD28_CITER_ELINKYES>
#### tcd28_citer_elinkyes
<link=TCD28_CITER_ELINKYES>
#### TCD29_BITER_ELINKNO
<link=p.DMA0.TCD29_BITER_ELINKNO>
#### tcd30_nbytes_mloffno
<link=TCD30_NBYTES_MLOFFNO>
#### TCD30_SLAST
<link=p.DMA0.TCD30_SLAST>
#### TCD30_DADDR
<link=p.DMA0.TCD30_DADDR>
#### tcd30_doff
<link=TCD30_DOFF>
#### TCD31_SLAST
<link=p.DMA0.TCD31_SLAST>
#### tcd31_doff
<link=TCD31_DOFF>
#### CHCFG[5]
<link=p.DMAMUX.CHCFG[5]>
#### chcfg[13]
<link=CHCFG[13]>
#### chcfg[22]
<link=CHCFG[22]>
#### cpu_sr
<link=CPU_SR>
#### CSCDR1
<link=p.CCM.CSCDR1>
#### CLPCR
<link=p.CCM.CLPCR>
#### rompatch7d
<link=ROMPATCH7D>
#### ROMPATCH6D
<link=p.ROMC.ROMPATCH6D>
#### rompatch0a
<link=ROMPATCH0A>
#### PINCFG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.PINCFG
   p.LPUART2.PINCFG
   p.LPUART3.PINCFG
   p.LPUART4.PINCFG
   p.LPUART5.PINCFG
   p.LPUART6.PINCFG
   p.LPUART7.PINCFG
   p.LPUART8.PINCFG
#### stat
<link=STAT>
#### shiftbufnbs[1]
<link=SHIFTBUFNBS[1]>
#### SHIFTBUFNIS[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFNIS[3]
   p.FLEXIO2.SHIFTBUFNIS[3]
   p.FLEXIO3.SHIFTBUFNIS[3]
#### EDGE_SEL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPIO1.EDGE_SEL
   p.GPIO5.EDGE_SEL
   p.GPIO2.EDGE_SEL
   p.GPIO3.EDGE_SEL
   p.GPIO4.EDGE_SEL
   p.GPIO6.EDGE_SEL
   p.GPIO7.EDGE_SEL
   p.GPIO8.EDGE_SEL
   p.GPIO9.EDGE_SEL
#### ecr
<link=ECR>
#### iflag2
<link=IFLAG2>
#### ctrl2
<link=CTRL2>
#### DBG2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.DBG2
   p.CAN2.DBG2
#### RXIMR6
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR6
   p.CAN2.RXIMR6
#### RXIMR14
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR14
   p.CAN2.RXIMR14
#### RXIMR25
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR25
   p.CAN2.RXIMR25
#### rximr26
<link=RXIMR26>
#### rximr57
<link=RXIMR57>
#### mb0_16b_word2
<link=MB0_16B_WORD2>
#### MB0_32B_WORD4
<link=p.CAN3.MB0_32B_WORD4>
#### MB0_64B_WORD5
<link=p.CAN3.MB0_64B_WORD5>
#### MB1_16B_WORD1
<link=p.CAN3.MB1_16B_WORD1>
#### mb0_64b_word8
<link=MB0_64B_WORD8>
#### word02
<link=WORD02>
#### MB2_16B_CS
<link=p.CAN3.MB2_16B_CS>
#### mb1_32b_word3
<link=MB1_32B_WORD3>
#### MB1_64B_ID
<link=p.CAN3.MB1_64B_ID>
#### MB3_16B_ID
<link=p.CAN3.MB3_16B_ID>
#### MB2_32B_CS
<link=p.CAN3.MB2_32B_CS>
#### id5
<link=ID5>
#### MB3_16B_WORD3
<link=p.CAN3.MB3_16B_WORD3>
#### MB6_8B_ID
<link=p.CAN3.MB6_8B_ID>
#### WORD06
<link=p.CAN3.WORD06>
#### MB1_64B_WORD7
<link=p.CAN3.MB1_64B_WORD7>
#### mb4_16b_word1
<link=MB4_16B_WORD1>
#### mb1_64b_word9
<link=MB1_64B_WORD9>
#### ID8
<link=p.CAN3.ID8>
#### MB1_64B_WORD14
<link=p.CAN3.MB1_64B_WORD14>
#### cs9
<link=CS9>
#### mb3_32b_word6
<link=MB3_32B_WORD6>
#### word19
<link=WORD19>
#### mb4_32b_cs
<link=MB4_32B_CS>
#### mb6_16b_word2
<link=MB6_16B_WORD2>
#### MB4_32B_WORD0
<link=p.CAN3.MB4_32B_WORD0>
#### mb2_64b_word5
<link=MB2_64B_WORD5>
#### mb7_16b_id
<link=MB7_16B_ID>
#### MB12_8B_WORD0
<link=p.CAN3.MB12_8B_WORD0>
#### mb2_64b_word12
<link=MB2_64B_WORD12>
#### mb12_8b_word1
<link=MB12_8B_WORD1>
#### word112
<link=WORD112>
#### id13
<link=ID13>
#### mb9_16b_word1
<link=MB9_16B_WORD1>
#### WORD014
<link=p.CAN3.WORD014>
#### mb5_32b_word7
<link=MB5_32B_WORD7>
#### mb3_64b_word4
<link=MB3_64B_WORD4>
#### mb10_16b_id
<link=MB10_16B_ID>
#### mb15_8b_id
<link=MB15_8B_ID>
#### cs17
<link=CS17>
#### mb17_8b_cs
<link=MB17_8B_CS>
#### mb11_16b_word2
<link=MB11_16B_WORD2>
#### MB11_16B_WORD3
<link=p.CAN3.MB11_16B_WORD3>
#### mb17_8b_word1
<link=MB17_8B_WORD1>
#### MB4_64B_ID
<link=p.CAN3.MB4_64B_ID>
#### mb7_32b_word2
<link=MB7_32B_WORD2>
#### MB4_64B_WORD2
<link=p.CAN3.MB4_64B_WORD2>
#### MB13_16B_WORD1
<link=p.CAN3.MB13_16B_WORD1>
#### mb21_8b_cs
<link=MB21_8B_CS>
#### mb4_64b_word11
<link=MB4_64B_WORD11>
#### mb8_32b_word3
<link=MB8_32B_WORD3>
#### MB15_16B_CS
<link=p.CAN3.MB15_16B_CS>
#### MB5_64B_CS
<link=p.CAN3.MB5_64B_CS>
#### mb15_16b_word1
<link=MB15_16B_WORD1>
#### MB5_64B_WORD2
<link=p.CAN3.MB5_64B_WORD2>
#### MB24_8B_WORD1
<link=p.CAN3.MB24_8B_WORD1>
#### MB9_32B_WORD7
<link=p.CAN3.MB9_32B_WORD7>
#### MB10_32B_WORD2
<link=p.CAN3.MB10_32B_WORD2>
#### ID26
<link=p.CAN3.ID26>
#### mb10_32b_word3
<link=MB10_32B_WORD3>
#### mb17_16b_word2
<link=MB17_16B_WORD2>
#### mb11_32b_cs
<link=MB11_32B_CS>
#### MB18_16B_WORD0
<link=p.CAN3.MB18_16B_WORD0>
#### mb18_16b_word2
<link=MB18_16B_WORD2>
#### mb28_8b_id
<link=MB28_8B_ID>
#### mb19_16b_cs
<link=MB19_16B_CS>
#### MB28_8B_WORD1
<link=p.CAN3.MB28_8B_WORD1>
#### mb6_64b_word6
<link=MB6_64B_WORD6>
#### MB6_64B_WORD9
<link=p.CAN3.MB6_64B_WORD9>
#### MB6_64B_WORD11
<link=p.CAN3.MB6_64B_WORD11>
#### mb12_32b_word0
<link=MB12_32B_WORD0>
#### cs31
<link=CS31>
#### mb20_16b_word2
<link=MB20_16B_WORD2>
#### ID31
<link=p.CAN3.ID31>
#### MB12_32B_WORD6
<link=p.CAN3.MB12_32B_WORD6>
#### WORD032
<link=p.CAN3.WORD032>
#### MB32_8B_WORD1
<link=p.CAN3.MB32_8B_WORD1>
#### mb22_16b_word0
<link=MB22_16B_WORD0>
#### mb7_64b_word7
<link=MB7_64B_WORD7>
#### MB7_64B_WORD9
<link=p.CAN3.MB7_64B_WORD9>
#### CS35
<link=p.CAN3.CS35>
#### MB14_32B_CS
<link=p.CAN3.MB14_32B_CS>
#### id35
<link=ID35>
#### mb23_16b_word2
<link=MB23_16B_WORD2>
#### mb7_64b_word15
<link=MB7_64B_WORD15>
#### word036
<link=WORD036>
#### MB14_32B_WORD6
<link=p.CAN3.MB14_32B_WORD6>
#### mb14_32b_word7
<link=MB14_32B_WORD7>
#### mb8_64b_word6
<link=MB8_64B_WORD6>
#### mb38_8b_id
<link=MB38_8B_ID>
#### mb25_16b_word3
<link=MB25_16B_WORD3>
#### WORD138
<link=p.CAN3.WORD138>
#### MB39_8B_CS
<link=p.CAN3.MB39_8B_CS>
#### MB39_8B_ID
<link=p.CAN3.MB39_8B_ID>
#### cs40
<link=CS40>
#### MB40_8B_CS
<link=p.CAN3.MB40_8B_CS>
#### MB40_8B_ID
<link=p.CAN3.MB40_8B_ID>
#### mb9_64b_cs
<link=MB9_64B_CS>
#### word040
<link=WORD040>
#### MB27_16B_ID
<link=p.CAN3.MB27_16B_ID>
#### MB40_8B_WORD1
<link=p.CAN3.MB40_8B_WORD1>
#### MB16_32B_WORD2
<link=p.CAN3.MB16_32B_WORD2>
#### mb16_32b_word4
<link=MB16_32B_WORD4>
#### WORD141
<link=p.CAN3.WORD141>
#### mb42_8b_id
<link=MB42_8B_ID>
#### MB28_16B_WORD1
<link=p.CAN3.MB28_16B_WORD1>
#### mb9_64b_word7
<link=MB9_64B_WORD7>
#### mb43_8b_cs
<link=MB43_8B_CS>
#### MB43_8B_ID
<link=p.CAN3.MB43_8B_ID>
#### MB29_16B_WORD1
<link=p.CAN3.MB29_16B_WORD1>
#### WORD044
<link=p.CAN3.WORD044>
#### mb30_16b_word2
<link=MB30_16B_WORD2>
#### mb10_64b_word9
<link=MB10_64B_WORD9>
#### MB47_8B_WORD1
<link=p.CAN3.MB47_8B_WORD1>
#### MB32_16B_CS
<link=p.CAN3.MB32_16B_CS>
#### mb19_32b_word4
<link=MB19_32B_WORD4>
#### mb10_64b_word15
<link=MB10_64B_WORD15>
#### MB19_32B_WORD6
<link=p.CAN3.MB19_32B_WORD6>
#### MB20_32B_WORD7
<link=p.CAN3.MB20_32B_WORD7>
#### mb52_8b_id
<link=MB52_8B_ID>
#### MB11_64B_WORD10
<link=p.CAN3.MB11_64B_WORD10>
#### WORD152
<link=p.CAN3.WORD152>
#### MB21_32B_WORD0
<link=p.CAN3.MB21_32B_WORD0>
#### ID53
<link=p.CAN3.ID53>
#### MB12_64B_ID
<link=p.CAN3.MB12_64B_ID>
#### mb36_16b_id
<link=MB36_16B_ID>
#### mb12_64b_word2
<link=MB12_64B_WORD2>
#### MB22_32B_CS
<link=p.CAN3.MB22_32B_CS>
#### MB12_64B_WORD4
<link=p.CAN3.MB12_64B_WORD4>
#### MB22_32B_WORD2
<link=p.CAN3.MB22_32B_WORD2>
#### MB37_16B_WORD3
<link=p.CAN3.MB37_16B_WORD3>
#### mb23_32b_cs
<link=MB23_32B_CS>
#### word057
<link=WORD057>
#### CS58
<link=p.CAN3.CS58>
#### MB23_32B_WORD3
<link=p.CAN3.MB23_32B_WORD3>
#### mb39_16b_id
<link=MB39_16B_ID>
#### mb58_8b_word1
<link=MB58_8B_WORD1>
#### mb13_64b_word2
<link=MB13_64B_WORD2>
#### MB13_64B_WORD4
<link=p.CAN3.MB13_64B_WORD4>
#### MB40_16B_CS
<link=p.CAN3.MB40_16B_CS>
#### mb40_16b_word1
<link=MB40_16B_WORD1>
#### mb41_16b_cs
<link=MB41_16B_CS>
#### mb61_8b_word0
<link=MB61_8B_WORD0>
#### CS62
<link=p.CAN3.CS62>
#### mb41_16b_word2
<link=MB41_16B_WORD2>
#### mb13_64b_word15
<link=MB13_64B_WORD15>
#### word163
<link=WORD163>
#### rximr[3]
<link=RXIMR[3]>
#### RXIMR[5]
<link=p.CAN3.RXIMR[5]>
#### rximr[10]
<link=RXIMR[10]>
#### rximr[15]
<link=RXIMR[15]>
#### rximr[24]
<link=RXIMR[24]>
#### RXIMR[31]
<link=p.CAN3.RXIMR[31]>
#### RXIMR[40]
<link=p.CAN3.RXIMR[40]>
#### rximr[49]
<link=RXIMR[49]>
#### ERFCR
<link=p.CAN3.ERFCR>
#### ERFIER
<link=p.CAN3.ERFIER>
#### HR_TIME_STAMP[4]
<link=p.CAN3.HR_TIME_STAMP[4]>
#### hr_time_stamp[11]
<link=HR_TIME_STAMP[11]>
#### HR_TIME_STAMP[37]
<link=p.CAN3.HR_TIME_STAMP[37]>
#### HR_TIME_STAMP[44]
<link=p.CAN3.HR_TIME_STAMP[44]>
#### HR_TIME_STAMP[50]
<link=p.CAN3.HR_TIME_STAMP[50]>
#### hr_time_stamp[63]
<link=HR_TIME_STAMP[63]>
#### ERFFEL[5]
<link=p.CAN3.ERFFEL[5]>
#### ERFFEL[13]
<link=p.CAN3.ERFFEL[13]>
#### ERFFEL[59]
<link=p.CAN3.ERFFEL[59]>
#### erffel[59]
<link=ERFFEL[59]>
#### erffel[61]
<link=ERFFEL[61]>
#### erffel[66]
<link=ERFFEL[66]>
#### erffel[72]
<link=ERFFEL[72]>
#### ERFFEL[83]
<link=p.CAN3.ERFFEL[83]>
#### erffel[83]
<link=ERFFEL[83]>
#### erffel[86]
<link=ERFFEL[86]>
#### ERFFEL[89]
<link=p.CAN3.ERFFEL[89]>
#### ERFFEL[90]
<link=p.CAN3.ERFFEL[90]>
#### erffel[90]
<link=ERFFEL[90]>
#### ERFFEL[101]
<link=p.CAN3.ERFFEL[101]>
#### ERFFEL[119]
<link=p.CAN3.ERFFEL[119]>
#### erffel[119]
<link=ERFFEL[119]>
#### ERFFEL[127]
<link=p.CAN3.ERFFEL[127]>
#### erffel[127]
<link=ERFFEL[127]>
#### COMP13
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.COMP13
   p.TMR2.COMP13
   p.TMR3.COMP13
   p.TMR4.COMP13
#### comp13
<link=COMP13>
#### COMP22
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.COMP22
   p.TMR2.COMP22
   p.TMR3.COMP22
   p.TMR4.COMP22
#### comp22
<link=COMP22>
#### CAPT3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CAPT3
   p.TMR2.CAPT3
   p.TMR3.CAPT3
   p.TMR4.CAPT3
#### HOLD2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.HOLD2
   p.TMR2.HOLD2
   p.TMR3.HOLD2
   p.TMR4.HOLD2
#### cmpld11
<link=CMPLD11>
#### csctrl0
<link=CSCTRL0>
#### DMA3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.DMA3
   p.TMR2.DMA3
   p.TMR3.DMA3
   p.TMR4.DMA3
#### pr
<link=PR>
#### sr
<link=SR>
#### CRC_ADDR
<link=p.OCOTP.CRC_ADDR>
#### timing2
<link=TIMING2>
#### CFG1
<link=p.OCOTP.CFG1>
#### OTPMK4
<link=p.OCOTP.OTPMK4>
#### otpmk6
<link=OTPMK6>
#### srk1
<link=SRK1>
#### SRK3
<link=p.OCOTP.SRK3>
#### SW_MUX_CTL_PAD_GPIO_EMC_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_01>
#### sw_mux_ctl_pad_gpio_emc_01
<link=SW_MUX_CTL_PAD_GPIO_EMC_01>
#### SW_MUX_CTL_PAD_GPIO_EMC_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_12>
#### sw_mux_ctl_pad_gpio_emc_12
<link=SW_MUX_CTL_PAD_GPIO_EMC_12>
#### sw_mux_ctl_pad_gpio_ad_b0_08
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_08>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_03>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_10>
#### sw_mux_ctl_pad_gpio_b0_03
<link=SW_MUX_CTL_PAD_GPIO_B0_03>
#### SW_MUX_CTL_PAD_GPIO_B1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_04>
#### sw_mux_ctl_pad_gpio_b1_04
<link=SW_MUX_CTL_PAD_GPIO_B1_04>
#### SW_MUX_CTL_PAD_GPIO_SD_B0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_03>
#### sw_mux_ctl_pad_gpio_sd_b1_03
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_03>
#### SW_MUX_CTL_PAD_GPIO_SD_B1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_04>
#### SW_PAD_CTL_PAD_GPIO_EMC_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_02>
#### sw_pad_ctl_pad_gpio_emc_10
<link=SW_PAD_CTL_PAD_GPIO_EMC_10>
#### SW_PAD_CTL_PAD_GPIO_EMC_19
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_19>
#### SW_PAD_CTL_PAD_GPIO_EMC_24
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_24>
#### sw_pad_ctl_pad_gpio_emc_36
<link=SW_PAD_CTL_PAD_GPIO_EMC_36>
#### sw_pad_ctl_pad_gpio_ad_b0_07
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_07>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_09>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_02>
#### sw_pad_ctl_pad_gpio_ad_b1_09
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_09>
#### sw_pad_ctl_pad_gpio_ad_b1_13
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_13>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_15>
#### sw_pad_ctl_pad_gpio_b0_02
<link=SW_PAD_CTL_PAD_GPIO_B0_02>
#### SW_PAD_CTL_PAD_GPIO_B0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_03>
#### sw_pad_ctl_pad_gpio_b1_09
<link=SW_PAD_CTL_PAD_GPIO_B1_09>
#### SW_PAD_CTL_PAD_GPIO_SD_B0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_05>
#### sw_pad_ctl_pad_gpio_sd_b1_05
<link=SW_PAD_CTL_PAD_GPIO_SD_B1_05>
#### ENET_RXERR_SELECT_INPUT
<link=p.IOMUXC.ENET_RXERR_SELECT_INPUT>
#### FLEXPWM2_PWMA1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMA1_SELECT_INPUT>
#### FLEXPWM2_PWMB0_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMB0_SELECT_INPUT>
#### FLEXPWM2_PWMB1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMB1_SELECT_INPUT>
#### flexspia_dqs_select_input
<link=FLEXSPIA_DQS_SELECT_INPUT>
#### flexspia_sck_select_input
<link=FLEXSPIA_SCK_SELECT_INPUT>
#### lpi2c3_scl_select_input
<link=LPI2C3_SCL_SELECT_INPUT>
#### LPSPI1_SDI_SELECT_INPUT
<link=p.IOMUXC.LPSPI1_SDI_SELECT_INPUT>
#### lpspi1_sdi_select_input
<link=LPSPI1_SDI_SELECT_INPUT>
#### LPSPI4_PCS0_SELECT_INPUT
<link=p.IOMUXC.LPSPI4_PCS0_SELECT_INPUT>
#### QTIMER3_TIMER1_SELECT_INPUT
<link=p.IOMUXC.QTIMER3_TIMER1_SELECT_INPUT>
#### SPDIF_IN_SELECT_INPUT
<link=p.IOMUXC.SPDIF_IN_SELECT_INPUT>
#### USDHC1_CD_B_SELECT_INPUT
<link=p.IOMUXC.USDHC1_CD_B_SELECT_INPUT>
#### XBAR1_IN14_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN14_SELECT_INPUT>
#### xbar1_in21_select_input
<link=XBAR1_IN21_SELECT_INPUT>
#### SW_MUX_CTL_PAD_GPIO_SPI_B1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_04>
#### SW_PAD_CTL_PAD_GPIO_SPI_B0_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_09>
#### sw_pad_ctl_pad_gpio_spi_b0_13
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_13>
#### SW_PAD_CTL_PAD_GPIO_SPI_B1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_02>
#### sw_pad_ctl_pad_gpio_spi_b1_07
<link=SW_PAD_CTL_PAD_GPIO_SPI_B1_07>
#### enet2_ipp_ind_mac0_rxerr_select_input
<link=ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT>
#### FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT>
#### GPT2_IPP_IND_CAPIN2_SELECT_INPUT
<link=p.IOMUXC.GPT2_IPP_IND_CAPIN2_SELECT_INPUT>
#### kpsr
<link=KPSR>
#### mcr0
<link=MCR0>
#### lutcr
<link=LUTCR>
#### AHBRXBUF2CR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.AHBRXBUF2CR0
   p.FLEXSPI2.AHBRXBUF2CR0
#### flsha1cr0
<link=FLSHA1CR0>
#### FLSHCR1B1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHCR1B1
   p.FLEXSPI2.FLSHCR1B1
#### flshcr2a1
<link=FLSHCR2A1>
#### IPCR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.IPCR1
   p.FLEXSPI2.IPCR1
   p.SEMC.IPCR1
#### dllcrb
<link=DLLCRB>
#### RFDR[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[2]
   p.FLEXSPI2.RFDR[2]
#### RFDR[8]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[8]
   p.FLEXSPI2.RFDR[8]
#### RFDR[10]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[10]
   p.FLEXSPI2.RFDR[10]
#### TFDR[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[0]
   p.FLEXSPI2.TFDR[0]
#### tfdr[0]
<link=TFDR[0]>
#### LUT[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[3]
   p.FLEXSPI2.LUT[3]
#### lut[15]
<link=LUT[15]>
#### LUT[23]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[23]
   p.FLEXSPI2.LUT[23]
#### lut[23]
<link=LUT[23]>
#### stat_set
<link=STAT_SET>
#### PS_CLRKEYHIGH
<link=p.PXP.PS_CLRKEYHIGH>
#### AS_CLRKEYLOW
<link=p.PXP.AS_CLRKEYLOW>
#### pigeonctrl1
<link=PIGEONCTRL1>
#### pigeonctrl1_clr
<link=PIGEONCTRL1_CLR>
#### pigeon_0_1
<link=PIGEON_0_1>
#### pigeon_2_2
<link=PIGEON_2_2>
#### pigeon_5_1
<link=PIGEON_5_1>
#### PIGEON_8_0
<link=p.LCDIF.PIGEON_8_0>
#### PIGEON_10_2
<link=p.LCDIF.PIGEON_10_2>
#### CSISTATFIFO
<link=p.CSI.CSISTATFIFO>
#### csirxcnt
<link=CSIRXCNT>
#### csidmasa_fb1
<link=CSIDMASA_FB1>
#### CSIIMAG_PARA
<link=p.CSI.CSIIMAG_PARA>
#### csicr19
<link=CSICR19>
#### PRES_STATE
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.PRES_STATE
   p.USDHC2.PRES_STATE
#### MIX_CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.MIX_CTRL
   p.USDHC2.MIX_CTRL
#### PAUR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.PAUR
   p.ENET2.PAUR
#### rxic
<link=RXIC>
#### mrbr
<link=MRBR>
#### rmon_t_bc_pkt
<link=RMON_T_BC_PKT>
#### rmon_t_p1024to2047
<link=RMON_T_P1024TO2047>
#### ieee_t_frame_ok
<link=IEEE_T_FRAME_OK>
#### ieee_t_macerr
<link=IEEE_T_MACERR>
#### IEEE_T_CSERR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_CSERR
   p.ENET2.IEEE_T_CSERR
#### ieee_t_cserr
<link=IEEE_T_CSERR>
#### IEEE_T_FDXFC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_FDXFC
   p.ENET2.IEEE_T_FDXFC
#### rmon_r_oversize
<link=RMON_R_OVERSIZE>
#### TCCR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TCCR0
   p.ENET2.TCCR0
#### tccr0
<link=TCCR0>
#### HWDEVICE
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.HWDEVICE
   p.USB2.HWDEVICE
#### hwtxbuf
<link=HWTXBUF>
#### DCIVERSION
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.DCIVERSION
   p.USB2.DCIVERSION
#### burstsize
<link=BURSTSIZE>
#### configflag
<link=CONFIGFLAG>
#### BMCR0
<link=p.SEMC.BMCR0>
#### bmcr0
<link=BMCR0>
#### BR4
<link=p.SEMC.BR4>
#### SDRAMCR1
<link=p.SEMC.SDRAMCR1>
#### sdramcr3
<link=SDRAMCR3>
#### packet5
<link=PACKET5>
#### ch0opts_tog
<link=CH0OPTS_TOG>
#### CH1OPTS
<link=p.DCP.CH1OPTS>
#### ch2stat_set
<link=CH2STAT_SET>
#### ch2opts_set
<link=CH2OPTS_SET>
#### CH3STAT_CLR
<link=p.DCP.CH3STAT_CLR>
#### ch3opts_set
<link=CH3OPTS_SET>
#### SRPC
<link=p.SPDIF.SRPC>
#### STR
<link=p.SPDIF.STR>
#### TCR4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TCR4
   p.SAI2.TCR4
   p.SAI3.TCR4
#### TDR[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TDR[0]
   p.SAI2.TDR[0]
   p.SAI3.TDR[0]
#### tdr[2]
<link=TDR[2]>
#### TFR[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TFR[3]
   p.SAI2.TFR[3]
   p.SAI3.TFR[3]
#### rfr[1]
<link=RFR[1]>
#### DMA_CTRL
<link=p.ADC_ETC.DMA_CTRL>
#### dma_ctrl
<link=DMA_CTRL>
#### trig0_counter
<link=TRIG0_COUNTER>
#### trig0_result_3_2
<link=TRIG0_RESULT_3_2>
#### TRIG1_CTRL
<link=p.ADC_ETC.TRIG1_CTRL>
#### trig2_ctrl
<link=TRIG2_CTRL>
#### TRIG2_CHAIN_5_4
<link=p.ADC_ETC.TRIG2_CHAIN_5_4>
#### trig3_result_7_6
<link=TRIG3_RESULT_7_6>
#### TRIG6_CTRL
<link=p.ADC_ETC.TRIG6_CTRL>
#### TRIG6_CHAIN_7_6
<link=p.ADC_ETC.TRIG6_CHAIN_7_6>
#### trig7_ctrl
<link=TRIG7_CTRL>
#### bfcrt231
<link=BFCRT231>
#### sel0
<link=SEL0>
#### SEL6
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.XBARA1.SEL6
   p.XBARB2.SEL6
   p.XBARB3.SEL6
#### SEL13
<link=p.XBARA1.SEL13>
#### sel28
<link=SEL28>
#### SEL35
<link=p.XBARA1.SEL35>
#### SEL48
<link=p.XBARA1.SEL48>
#### sel56
<link=SEL56>
#### filt
<link=FILT>
#### SM0VAL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0VAL1
   p.PWM2.SM0VAL1
   p.PWM3.SM0VAL1
   p.PWM4.SM0VAL1
#### sm0val4
<link=SM0VAL4>
#### SM0CVAL5CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CVAL5CYC
   p.PWM2.SM0CVAL5CYC
   p.PWM3.SM0CVAL5CYC
   p.PWM4.SM0CVAL5CYC
#### SM1INIT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1INIT
   p.PWM2.SM1INIT
   p.PWM3.SM1INIT
   p.PWM4.SM1INIT
#### SM1VAL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1VAL3
   p.PWM2.SM1VAL3
   p.PWM3.SM1VAL3
   p.PWM4.SM1VAL3
#### sm1val5
<link=SM1VAL5>
#### sm1inten
<link=SM1INTEN>
#### SM1CVAL2CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CVAL2CYC
   p.PWM2.SM1CVAL2CYC
   p.PWM3.SM1CVAL2CYC
   p.PWM4.SM1CVAL2CYC
#### sm1cval5
<link=SM1CVAL5>
#### sm2tctrl
<link=SM2TCTRL>
#### sm2cval0
<link=SM2CVAL0>
#### SM2CVAL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL3
   p.PWM2.SM2CVAL3
   p.PWM3.SM2CVAL3
   p.PWM4.SM2CVAL3
#### SM2CVAL4CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL4CYC
   p.PWM2.SM2CVAL4CYC
   p.PWM3.SM2CVAL4CYC
   p.PWM4.SM2CVAL4CYC
#### SM3FRACVAL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3FRACVAL5
   p.PWM2.SM3FRACVAL5
   p.PWM3.SM3FRACVAL5
   p.PWM4.SM3FRACVAL5
#### SM3CAPTCTRLB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CAPTCTRLB
   p.PWM2.SM3CAPTCTRLB
   p.PWM3.SM3CAPTCTRLB
   p.PWM4.SM3CAPTCTRLB
#### SM3CVAL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL5
   p.PWM2.SM3CVAL5
   p.PWM3.SM3CVAL5
   p.PWM4.SM3CVAL5
#### ADDR_OFFSET0
<link=p.BEE.ADDR_OFFSET0>
#### CTR_NONCE1_W2
<link=p.BEE.CTR_NONCE1_W2>
#### MCCR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MCCR0
   p.LPI2C2.MCCR0
   p.LPI2C3.MCCR0
   p.LPI2C4.MCCR0
#### mccr0
<link=MCCR0>
#### vtor
<link=VTOR>
#### id_isar4
<link=ID_ISAR4>
#### CLIDR
<link=p.SystemControl.CLIDR>
#### DCCMVAU
<link=p.SystemControl.DCCMVAU>
#### dccsw
<link=DCCSW>
#### DCCISW
<link=p.SystemControl.DCCISW>
#### nvicicer2
<link=NVICICER2>
#### nvicispr1
<link=NVICISPR1>
#### NVICISPR2
<link=p.NVIC.NVICISPR2>
#### NVICIABR0
<link=p.NVIC.NVICIABR0>
#### NVICIP3
<link=p.NVIC.NVICIP3>
#### nvicip8
<link=NVICIP8>
#### NVICIP16
<link=p.NVIC.NVICIP16>
#### nvicip31
<link=NVICIP31>
#### NVICIP38
<link=p.NVIC.NVICIP38>
#### NVICIP46
<link=p.NVIC.NVICIP46>
#### nvicip48
<link=NVICIP48>
#### nvicip53
<link=NVICIP53>
#### NVICIP60
<link=p.NVIC.NVICIP60>
#### nvicip67
<link=NVICIP67>
#### NVICIP77
<link=p.NVIC.NVICIP77>
#### NVICIP82
<link=p.NVIC.NVICIP82>
#### nvicip97
<link=NVICIP97>
#### NVICIP100
<link=p.NVIC.NVICIP100>
#### nvicip107
<link=NVICIP107>
#### NVICIP117
<link=p.NVIC.NVICIP117>
#### NVICIP126
<link=p.NVIC.NVICIP126>
#### nvicip129
<link=NVICIP129>
#### nvicip133
<link=NVICIP133>
#### NVICIP139
<link=p.NVIC.NVICIP139>
#### nvicip151
<link=NVICIP151>
