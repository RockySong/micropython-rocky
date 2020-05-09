#### mcu
<lang=chs>
[i.MX RT1050/1060 系列跨界处理器] https://www.nxp.com/products/processors-and-microcontrollers/arm-microcontrollers/i-mx-rt-crossover-mcus:IMX-RT-SERIES
<lang=dft>
[i.MX RT1050/1060 series cross-over processors] https://www.nxp.com/products/processors-and-microcontrollers/arm-microcontrollers/i-mx-rt-crossover-mcus:IMX-RT-SERIES

#### value
<lang=chs>
富强、民主、文明、和谐
自由、平等、公正、法治
爱国、敬业、诚信、友善
<lang=dft>
Talk is cheap, show me your code!
</lang>
#### mcu
<lang=chs>
i.MX RT1050/1060 系列跨界处理器
输入 help('p.') 以查看可用的外设列表
<lang=dft>
i.MX RT1050/1060 series cross-over processors
type help('p.') to list available peripherals
</lang>
#### p.AIPSTZ1
<lang=dft>
base: 0x4007c000
MPR             OPACR           OPACR1          OPACR2          
OPACR3          OPACR4          
输入 p.AIPSTZ1.{reg_name} 以查看寄存器的详细信息
type p.AIPSTZ1.{reg_name} to check details of registers
</lang>
#### AIPSTZ3.MPR
<link=p.AIPSTZ3.MPR>
#### p.aipstz4.opacr4
<link=p.AIPSTZ4.OPACR4>
#### AIPSTZ4.OPACR4
<link=p.AIPSTZ4.OPACR4>
#### dcdc.reg0
<link=p.DCDC.REG0>
#### p.PIT.CVAL0
<lang=dft>
 (ro)  [1;33m0x40084104[0m (0x40084000 + 0x0104)
Current Timer Value Register
 (ro) (32)  [0;32mTVL[0m  - [31:00] -  Current Timer Value
</lang>
#### pit.ldval3
<link=p.PIT.LDVAL3>
#### pit.cval3
<link=p.PIT.CVAL3>
#### PIT.TFLG3
<link=p.PIT.TFLG3>
#### p.cmp1
<link=p.CMP1>
#### cmp3.cr1
<link=p.CMP3.CR1>
#### CMP3.FPR
<link=p.CMP3.FPR>
#### cmp3.daccr
<link=p.CMP3.DACCR>
#### CMP3.MUXCR
<link=p.CMP3.MUXCR>
#### p.IOMUXC_SNVS
<lang=dft>
base: 0x400a8000
SW_MUX_CTL_PAD_PMIC_ON_REQ  SW_MUX_CTL_PAD_PMIC_STBY_REQ  SW_MUX_CTL_PAD_WAKEUP  
SW_PAD_CTL_PAD_ONOFF  SW_PAD_CTL_PAD_PMIC_ON_REQ  SW_PAD_CTL_PAD_PMIC_STBY_REQ  
SW_PAD_CTL_PAD_POR_B  SW_PAD_CTL_PAD_TEST_MODE  SW_PAD_CTL_PAD_WAKEUP  
输入 p.IOMUXC_SNVS.{reg_name} 以查看寄存器的详细信息
type p.IOMUXC_SNVS.{reg_name} to check details of registers
</lang>
#### p.IOMUXC_SNVS.SW_PAD_CTL_PAD_POR_B
<lang=dft>
 (rw)  [1;33m0x400a8010[0m (0x400a8000 + 0x0010)
SW_PAD_CTL_PAD_POR_B SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled_ :
         output driver disabled;
      0x1 - DSE_1_R0_260_Ohm___3_3V__150_Ohm_1_8V__240_Ohm_for_DDR_ :
         R0(260 Ohm @ 3.3V, 150 Ohm@1.8V, 240 Ohm for DDR)
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
 (ro) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0x2 - SPEED :
         medium(100MHz)
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
#### p.IOMUXC_SNVS.SW_PAD_CTL_PAD_PMIC_ON_REQ
<lang=dft>
 (rw)  [1;33m0x400a801c[0m (0x400a8000 + 0x001c)
SW_PAD_CTL_PAD_PMIC_ON_REQ SW PAD Control Register
 (rw) (01)  [0;32mSRE[0m  - [00:00] -  Slew Rate Field
      0 - SRE_0_Slow_Slew_Rate :
         Slow Slew Rate
      0x1 - SRE_1_Fast_Slew_Rate :
         Fast Slew Rate
 (rw) (03)  [0;32mDSE[0m  - [05:03] -  Drive Strength Field
      0 - DSE_0_output_driver_disabled_ :
         output driver disabled;
      0x1 - DSE_1_R0_260_Ohm___3_3V__150_Ohm_1_8V__240_Ohm_for_DDR_ :
         R0(260 Ohm @ 3.3V, 150 Ohm@1.8V, 240 Ohm for DDR)
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
 (ro) (02)  [0;32mSPEED[0m  - [07:06] -  Speed Field
      0x2 - SPEED :
         medium(100MHz)
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
#### IOMUXC_SNVS.SW_PAD_CTL_PAD_PMIC_STBY_REQ
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_PMIC_STBY_REQ>
#### IOMUXC_GPR.GPR5
<link=p.IOMUXC_GPR.GPR5>
#### iomuxc_gpr.gpr6
<link=p.IOMUXC_GPR.GPR6>
#### p.iomuxc_gpr.gpr9
<link=p.IOMUXC_GPR.GPR9>
#### p.IOMUXC_GPR.GPR15
<lang=dft>
 (ro)  [1;33m0x400ac03c[0m (0x400ac000 + 0x003c)
GPR15 General Purpose Register
</lang>
#### p.iomuxc_gpr.gpr18
<link=p.IOMUXC_GPR.GPR18>
#### IOMUXC_GPR.GPR22
<link=p.IOMUXC_GPR.GPR22>
#### p.IOMUXC_GPR.GPR28
<lang=dft>
 (rw)  [1;33m0x400ac070[0m (0x400ac000 + 0x0070)
GPR28 General Purpose Register
 (rw) (32)  [0;32mGPIO_MUX3_GPIO_SEL[0m  - [31:00] -  GPIO3 and GPIO8 share same IO MUX function, GPIO_MUX3 selects one GPIO function
 .
</lang>
#### IOMUXC_GPR.GPR31
<link=p.IOMUXC_GPR.GPR31>
#### iomuxc_gpr.gpr32
<link=p.IOMUXC_GPR.GPR32>
#### p.ewm.cmpl
<link=p.EWM.CMPL>
#### wdog1.wsr
<link=p.WDOG1.WSR>
#### p.WDOG2.WSR
<lang=dft>
 (rw)  [1;33m0x400d0002[0m (0x400d0000 + 0x0002)
Watchdog Service Register
 (rw) (16)  [0;32mWSR[0m  - [15:00] -  WSR
      0x5555 - WSR_21845 :
         Write to the Watchdog Service Register (WDOG_WSR).
      0xAAAA - WSR_43690 :
         Write to the Watchdog Service Register (WDOG_WSR).
</lang>
#### p.WDOG2.WMCR
<lang=dft>
 (rw)  [1;33m0x400d0008[0m (0x400d0000 + 0x0008)
Watchdog Miscellaneous Control Register
 (rw) (01)  [0;32mPDE[0m  - [00:00] -  PDE
      0 - PDE_0 :
         Power Down Counter of WDOG is disabled.
      0x1 - PDE_1 :
         Power Down Counter of WDOG is enabled (Default).
</lang>
#### rtwdog.cnt
<link=p.RTWDOG.CNT>
#### RTWDOG.WIN
<link=p.RTWDOG.WIN>
#### ADC1.HC0
<link=p.ADC1.HC0>
#### adc1.hc1
<link=p.ADC1.HC1>
#### p.adc1.hc5
<link=p.ADC1.HC5>
#### p.ADC1.HC7
<lang=dft>
 (rw)  [1;33m0x400c401c[0m (0x400c4000 + 0x001c)
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
#### p.adc1.r0
<link=p.ADC1.R0>
#### ADC1.R1
<link=p.ADC1.R1>
#### p.ADC1.R4
<lang=dft>
 (ro)  [1;33m0x400c4034[0m (0x400c4000 + 0x0034)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### adc1.r4
<link=p.ADC1.R4>
#### p.ADC1.CFG
<lang=dft>
 (rw)  [1;33m0x400c4044[0m (0x400c4000 + 0x0044)
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
#### ADC1.GS
<link=p.ADC1.GS>
#### p.ADC2.HC5
<lang=dft>
 (rw)  [1;33m0x400c8014[0m (0x400c8000 + 0x0014)
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
#### adc2.hc5
<link=p.ADC2.HC5>
#### p.ADC2.R2
<lang=dft>
 (ro)  [1;33m0x400c802c[0m (0x400c8000 + 0x002c)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### adc2.r4
<link=p.ADC2.R4>
#### p.adc2.r5
<link=p.ADC2.R5>
#### p.adc2.gc
<link=p.ADC2.GC>
#### p.TRNG.PKRRNG
<lang=dft>
 (rw)  [1;33m0x400cc008[0m (0x400cc000 + 0x0008)
Poker Range Register
 (rw) (16)  [0;32mPKR_RNG[0m  - [15:00] -  Poker Range
</lang>
#### p.TRNG.PKRMAX
<lang=dft>
 (rw)  [1;33m0x400cc00c[0m (0x400cc000 + 0x000c)
Poker Maximum Limit Register
 (rw) (24)  [0;32mPKR_MAX[0m  - [23:00] -  Poker Maximum Limit.
</lang>
#### TRNG.FRQMIN
<link=p.TRNG.FRQMIN>
#### p.TRNG.SCMC
<lang=dft>
 (ro)  [1;33m0x400cc020[0m (0x400cc000 + 0x0020)
Statistical Check Monobit Count Register
 (ro) (16)  [0;32mMONO_CT[0m  - [15:00] -  Monobit Count
</lang>
#### p.TRNG.SCR2L
<lang=dft>
 (rw)  [1;33m0x400cc028[0m (0x400cc000 + 0x0028)
Statistical Check Run Length 2 Limit Register
 (rw) (14)  [0;32mRUN2_MAX[0m  - [13:00] -  Run Length 2 Maximum Limit
 (rw) (14)  [0;32mRUN2_RNG[0m  - [29:16] -  Run Length 2 Range
</lang>
#### TRNG.SCR3C
<link=p.TRNG.SCR3C>
#### p.trng.scr4l
<link=p.TRNG.SCR4L>
#### trng.scr5l
<link=p.TRNG.SCR5L>
#### p.trng.ent[1]
<link=p.TRNG.ENT[1]>
#### trng.ent[5]
<link=p.TRNG.ENT[5]>
#### TRNG.PKRCNTFE
<link=p.TRNG.PKRCNTFE>
#### p.SNVS.HPLR
<lang=dft>
 (rw)  [1;33m0x400d4000[0m (0x400d4000 + 0x0000)
SNVS_HP Lock Register
 (rw) (01)  [0;32mZMK_WSL[0m  - [00:00] -  Zeroizable Master Key Write Soft Lock When set, prevents any writes (software a
 nd hardware) to the ZMK registers and the ZMK_HWP, ZMK_VAL, and ZMK_ECC_EN fiel
 ds of the LPMKCR
      0 - ZMK_WSL_0 :
         Write access is allowed
      0x1 - ZMK_WSL_1 :
         Write access is not allowed
 (rw) (01)  [0;32mZMK_RSL[0m  - [01:01] -  Zeroizable Master Key Read Soft Lock When set, prevents any software reads to t
 he ZMK Registers and ZMK_ECC_VALUE field of the LPMKCR
      0 - ZMK_RSL_0 :
         Read access is allowed (only in software Programming mode)
      0x1 - ZMK_RSL_1 :
         Read access is not allowed
 (rw) (01)  [0;32mSRTC_SL[0m  - [02:02] -  Secure Real Time Counter Soft Lock When set, prevents any writes to the SRTC Re
 gisters, SRTC_ENV, and SRTC_INV_EN bits
      0 - SRTC_SL_0 :
         Write access is allowed
      0x1 - SRTC_SL_1 :
         Write access is not allowed
 (rw) (01)  [0;32mLPCALB_SL[0m  - [03:03] -  LP Calibration Soft Lock When set, prevents any writes to the LP Calibration Va
 lue (LPCALB_VAL) and LP Calibration Enable (LPCALB_EN)
      0 - LPCALB_SL_0 :
         Write access is allowed
      0x1 - LPCALB_SL_1 :
         Write access is not allowed
 (rw) (01)  [0;32mMC_SL[0m  - [04:04] -  Monotonic Counter Soft Lock When set, prevents any writes (increments) to the M
 C Registers and MC_ENV bit
      0 - MC_SL_0 :
         Write access (increment) is allowed
      0x1 - MC_SL_1 :
         Write access (increment) is not allowed
 (rw) (01)  [0;32mGPR_SL[0m  - [05:05] -  General Purpose Register Soft Lock When set, prevents any writes to the GPR
      0 - GPR_SL_0 :
         Write access is allowed
      0x1 - GPR_SL_1 :
         Write access is not allowed
 (rw) (01)  [0;32mLPSVCR_SL[0m  - [06:06] -  LP Security Violation Control Register Soft Lock When set, prevents any writes 
 to the LPSVCR
      0 - LPSVCR_SL_0 :
         Write access is allowed
      0x1 - LPSVCR_SL_1 :
         Write access is not allowed
 (rw) (01)  [0;32mLPTDCR_SL[0m  - [08:08] -  LP Tamper Detectors Configuration Register Soft Lock When set, prevents any wri
 tes to the LPTDCR
      0 - LPTDCR_SL_0 :
         Write access is allowed
      0x1 - LPTDCR_SL_1 :
         Write access is not allowed
 (rw) (01)  [0;32mMKS_SL[0m  - [09:09] -  Master Key Select Soft Lock When set, prevents any writes to the MASTER_KEY_SEL
  field of the LPMKCR
      0 - MKS_SL_0 :
         Write access is allowed
      0x1 - MKS_SL_1 :
         Write access is not allowed
 (rw) (01)  [0;32mHPSVCR_L[0m  - [16:16] -  HP Security Violation Control Register Lock When set, prevents any writes to th
 e HPSVCR
      0 - HPSVCR_L_0 :
         Write access is allowed
      0x1 - HPSVCR_L_1 :
         Write access is not allowed
 (rw) (01)  [0;32mHPSICR_L[0m  - [17:17] -  HP Security Interrupt Control Register Lock When set, prevents any writes to th
 e HPSICR
      0 - HPSICR_L_0 :
         Write access is allowed
      0x1 - HPSICR_L_1 :
         Write access is not allowed
 (rw) (01)  [0;32mHAC_L[0m  - [18:18] -  High Assurance Counter Lock When set, prevents any writes to HPHACIVR, HPHACR, 
 and HAC_EN bit of HPCOMR
      0 - HAC_L_0 :
         Write access is allowed
      0x1 - HAC_L_1 :
         Write access is not allowed
</lang>
#### SNVS.HPCOMR
<link=p.SNVS.HPCOMR>
#### snvs.hpsicr
<link=p.SNVS.HPSICR>
#### p.snvs.lptar
<link=p.SNVS.LPTAR>
#### snvs.lpsmclr
<link=p.SNVS.LPSMCLR>
#### SNVS.LPZMKR[3]
<link=p.SNVS.LPZMKR[3]>
#### SNVS.LPGPR_alias[0]
<link=p.SNVS.LPGPR_ALIAS[0]>
#### p.CCM_ANALOG.PLL_ARM_SET
<lang=dft>
 (rw)  [1;33m0x400d8004[0m (0x400d8000 + 0x0004)
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
#### ccm_analog.pll_arm_tog
<link=p.CCM_ANALOG.PLL_ARM_TOG>
#### p.CCM_ANALOG.PFD_528_TOG
<lang=dft>
 (rw)  [1;33m0x400d810c[0m (0x400d8000 + 0x010c)
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
#### p.ccm_analog.misc0_tog
<link=p.CCM_ANALOG.MISC0_TOG>
#### CCM_ANALOG.MISC2
<link=p.CCM_ANALOG.MISC2>
#### PMU.MISC1_SET
<link=p.PMU.MISC1_SET>
#### pmu.misc2_tog
<link=p.PMU.MISC2_TOG>
#### TEMPMON.TEMPSENSE0_SET
<link=p.TEMPMON.TEMPSENSE0_SET>
#### p.TEMPMON.TEMPSENSE0_TOG
<lang=dft>
 (rw)  [1;33m0x400d818c[0m (0x400d8000 + 0x018c)
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
#### p.tempmon.tempsense1_clr
<link=p.TEMPMON.TEMPSENSE1_CLR>
#### TEMPMON.TEMPSENSE1_TOG
<link=p.TEMPMON.TEMPSENSE1_TOG>
#### usb_analog.usb1_chrg_detect_tog
<link=p.USB_ANALOG.USB1_CHRG_DETECT_TOG>
#### p.usb_analog.usb1_chrg_detect_stat
<link=p.USB_ANALOG.USB1_CHRG_DETECT_STAT>
#### p.usb_analog.usb1_loopback
<link=p.USB_ANALOG.USB1_LOOPBACK>
#### p.usb_analog.usb1_loopback_set
<link=p.USB_ANALOG.USB1_LOOPBACK_SET>
#### USB_ANALOG.USB1_LOOPBACK_CLR
<link=p.USB_ANALOG.USB1_LOOPBACK_CLR>
#### USB_ANALOG.USB1_LOOPBACK_TOG
<link=p.USB_ANALOG.USB1_LOOPBACK_TOG>
#### usb_analog.usb1_misc_clr
<link=p.USB_ANALOG.USB1_MISC_CLR>
#### p.USB_ANALOG.USB2_CHRG_DETECT_TOG
<lang=dft>
 (rw)  [1;33m0x400d821c[0m (0x400d8000 + 0x021c)
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
#### p.usb_analog.usb2_chrg_detect_tog
<link=p.USB_ANALOG.USB2_CHRG_DETECT_TOG>
#### p.usb_analog.usb2_loopback
<link=p.USB_ANALOG.USB2_LOOPBACK>
#### p.usb_analog.usb2_loopback_tog
<link=p.USB_ANALOG.USB2_LOOPBACK_TOG>
#### p.USB_ANALOG.DIGPROG
<lang=dft>
 (ro)  [1;33m0x400d8260[0m (0x400d8000 + 0x0260)
Chip Silicon Version
 (ro) (32)  [0;32mSILICON_REVISION[0m  - [31:00] -  Chip silicon revision
      0x6C0000 - SILICON_REVISION_7077888 :
         Silicon revision 1.0
</lang>
#### XTALOSC24M.OSC_CONFIG0_CLR
<link=p.XTALOSC24M.OSC_CONFIG0_CLR>
#### XTALOSC24M.OSC_CONFIG1_SET
<link=p.XTALOSC24M.OSC_CONFIG1_SET>
#### USBPHY1.PWD_TOG
<link=p.USBPHY1.PWD_TOG>
#### p.USBPHY1.TX
<lang=dft>
 (rw)  [1;33m0x400d9010[0m (0x400d9000 + 0x0010)
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
#### usbphy1.ctrl
<link=p.USBPHY1.CTRL>
#### USBPHY1.CTRL_SET
<link=p.USBPHY1.CTRL_SET>
#### p.usbphy1.debug0_status
<link=p.USBPHY1.DEBUG0_STATUS>
#### p.USBPHY2.RX
<lang=dft>
 (rw)  [1;33m0x400da020[0m (0x400da000 + 0x0020)
USB PHY Receiver Control Register
 (rw) (03)  [0;32mENVADJ[0m  - [02:00] -  The ENVADJ field adjusts the trip point for the envelope detector
 (ro) (01)  [0;32mRSVD0[0m  - [03:03] -  Reserved.
 (rw) (03)  [0;32mDISCONADJ[0m  - [06:04] -  The DISCONADJ field adjusts the trip point for the disconnect detector: 000 = T
 rip-Level Voltage is 0
 (ro) (15)  [0;32mRSVD1[0m  - [21:07] -  Reserved.
 (rw) (01)  [0;32mRXDBYPASS[0m  - [22:22] -  0 = Normal operation
 (ro) (09)  [0;32mRSVD2[0m  - [31:23] -  Reserved.
</lang>
#### usbphy2.rx_set
<link=p.USBPHY2.RX_SET>
#### p.USBPHY2.DEBUG
<lang=dft>
 (rw)  [1;33m0x400da050[0m (0x400da000 + 0x0050)
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
#### USBPHY2.DEBUG1
<link=p.USBPHY2.DEBUG1>
#### p.USBPHY2.DEBUG1_CLR
<lang=dft>
 (rw)  [1;33m0x400da078[0m (0x400da000 + 0x0078)
UTMI Debug Status Register 1
 (rw) (13)  [0;32mRSVD0[0m  - [12:00] -  Reserved. Note: This bit should remain clear.
 (rw) (02)  [0;32mENTAILADJVD[0m  - [14:13] -  Delay increment of the rise of squelch: 00 = Delay is nominal 01 = Delay is +20
 % 10 = Delay is -20% 11 = Delay is -40%
 (ro) (17)  [0;32mRSVD1[0m  - [31:15] -  Reserved.
</lang>
#### p.USBPHY2.DEBUG1_TOG
<lang=dft>
 (rw)  [1;33m0x400da07c[0m (0x400da000 + 0x007c)
UTMI Debug Status Register 1
 (rw) (13)  [0;32mRSVD0[0m  - [12:00] -  Reserved. Note: This bit should remain clear.
 (rw) (02)  [0;32mENTAILADJVD[0m  - [14:13] -  Delay increment of the rise of squelch: 00 = Delay is nominal 01 = Delay is +20
 % 10 = Delay is -20% 11 = Delay is -40%
 (ro) (17)  [0;32mRSVD1[0m  - [31:15] -  Reserved.
</lang>
#### USBPHY2.DEBUG1_TOG
<link=p.USBPHY2.DEBUG1_TOG>
#### csu.csl9
<link=p.CSU.CSL9>
#### CSU.CSL9
<link=p.CSU.CSL9>
#### p.CSU.CSL16
<lang=dft>
 (rw)  [1;33m0x400dc040[0m (0x400dc000 + 0x0040)
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
#### p.csu.csl16
<link=p.CSU.CSL16>
#### csu.csl25
<link=p.CSU.CSL25>
#### CSU.CSL25
<link=p.CSU.CSL25>
#### p.CSU.CSL27
<lang=dft>
 (rw)  [1;33m0x400dc06c[0m (0x400dc000 + 0x006c)
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
#### p.csu.csl27
<link=p.CSU.CSL27>
#### p.CSU.CSL30
<lang=dft>
 (rw)  [1;33m0x400dc078[0m (0x400dc000 + 0x0078)
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
#### p.csu.csl30
<link=p.CSU.CSL30>
#### p.dma0.eei
<link=p.DMA0.EEI>
#### dma0.ssrt
<link=p.DMA0.SSRT>
#### DMA0.CERR
<link=p.DMA0.CERR>
#### DMA0.INT
<link=p.DMA0.INT>
#### dma0.ears
<link=p.DMA0.EARS>
#### DMA0.DCHPRI1
<link=p.DMA0.DCHPRI1>
#### dma0.dchpri6
<link=p.DMA0.DCHPRI6>
#### p.dma0.dchpri8
<link=p.DMA0.DCHPRI8>
#### p.dma0.dchpri14
<link=p.DMA0.DCHPRI14>
#### p.DMA0.DCHPRI12
<lang=dft>
 (rw)  [1;33m0x400e810f[0m (0x400e8000 + 0x010f)
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
#### p.DMA0.DCHPRI27
<lang=dft>
 (rw)  [1;33m0x400e8118[0m (0x400e8000 + 0x0118)
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
#### DMA0.DCHPRI26
<link=p.DMA0.DCHPRI26>
#### DMA0.DCHPRI31
<link=p.DMA0.DCHPRI31>
#### dma0.dchpri29
<link=p.DMA0.DCHPRI29>
#### dma0.tcd0_nbytes_mlno
<link=p.DMA0.TCD0_NBYTES_MLNO>
#### dma0.tcd0_doff
<link=p.DMA0.TCD0_DOFF>
#### DMA0.TCD1_SOFF
<link=p.DMA0.TCD1_SOFF>
#### p.DMA0.TCD1_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9026[0m (0x400e8000 + 0x1026)
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
#### p.dma0.tcd1_slast
<link=p.DMA0.TCD1_SLAST>
#### p.dma0.tcd2_soff
<link=p.DMA0.TCD2_SOFF>
#### p.DMA0.TCD3_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9076[0m (0x400e8000 + 0x1076)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd3_citer_elinkyes
<link=p.DMA0.TCD3_CITER_ELINKYES>
#### p.DMA0.TCD4_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9080[0m (0x400e8000 + 0x1080)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### DMA0.TCD4_ATTR
<link=p.DMA0.TCD4_ATTR>
#### dma0.tcd4_nbytes_mloffno
<link=p.DMA0.TCD4_NBYTES_MLOFFNO>
#### p.DMA0.TCD4_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9090[0m (0x400e8000 + 0x1090)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### dma0.tcd4_citer_elinkyes
<link=p.DMA0.TCD4_CITER_ELINKYES>
#### p.dma0.tcd5_saddr
<link=p.DMA0.TCD5_SADDR>
#### dma0.tcd5_saddr
<link=p.DMA0.TCD5_SADDR>
#### p.dma0.tcd5_attr
<link=p.DMA0.TCD5_ATTR>
#### dma0.tcd5_csr
<link=p.DMA0.TCD5_CSR>
#### dma0.tcd5_biter_elinkno
<link=p.DMA0.TCD5_BITER_ELINKNO>
#### DMA0.TCD5_BITER_ELINKYES
<link=p.DMA0.TCD5_BITER_ELINKYES>
#### p.DMA0.TCD6_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e90c8[0m (0x400e8000 + 0x10c8)
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
#### DMA0.TCD6_SLAST
<link=p.DMA0.TCD6_SLAST>
#### DMA0.TCD6_CITER_ELINKNO
<link=p.DMA0.TCD6_CITER_ELINKNO>
#### p.dma0.tcd6_biter_elinkno
<link=p.DMA0.TCD6_BITER_ELINKNO>
#### p.DMA0.TCD7_SADDR
<lang=dft>
 (rw)  [1;33m0x400e90e0[0m (0x400e8000 + 0x10e0)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### DMA0.TCD7_NBYTES_MLOFFNO
<link=p.DMA0.TCD7_NBYTES_MLOFFNO>
#### DMA0.TCD7_SLAST
<link=p.DMA0.TCD7_SLAST>
#### dma0.tcd7_dlastsga
<link=p.DMA0.TCD7_DLASTSGA>
#### dma0.tcd7_csr
<link=p.DMA0.TCD7_CSR>
#### DMA0.TCD8_SOFF
<link=p.DMA0.TCD8_SOFF>
#### dma0.tcd8_attr
<link=p.DMA0.TCD8_ATTR>
#### p.DMA0.TCD8_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9108[0m (0x400e8000 + 0x1108)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### DMA0.TCD8_NBYTES_MLNO
<link=p.DMA0.TCD8_NBYTES_MLNO>
#### dma0.tcd8_slast
<link=p.DMA0.TCD8_SLAST>
#### dma0.tcd9_soff
<link=p.DMA0.TCD9_SOFF>
#### p.dma0.tcd9_daddr
<link=p.DMA0.TCD9_DADDR>
#### dma0.tcd9_biter_elinkno
<link=p.DMA0.TCD9_BITER_ELINKNO>
#### dma0.tcd10_soff
<link=p.DMA0.TCD10_SOFF>
#### p.DMA0.TCD10_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9146[0m (0x400e8000 + 0x1146)
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
#### p.DMA0.TCD10_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9148[0m (0x400e8000 + 0x1148)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.dma0.tcd10_csr
<link=p.DMA0.TCD10_CSR>
#### p.DMA0.TCD11_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9176[0m (0x400e8000 + 0x1176)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd11_dlastsga
<link=p.DMA0.TCD11_DLASTSGA>
#### p.dma0.tcd12_saddr
<link=p.DMA0.TCD12_SADDR>
#### dma0.tcd12_saddr
<link=p.DMA0.TCD12_SADDR>
#### dma0.tcd12_nbytes_mloffyes
<link=p.DMA0.TCD12_NBYTES_MLOFFYES>
#### DMA0.TCD12_NBYTES_MLOFFYES
<link=p.DMA0.TCD12_NBYTES_MLOFFYES>
#### dma0.tcd12_citer_elinkno
<link=p.DMA0.TCD12_CITER_ELINKNO>
#### DMA0.TCD12_DLASTSGA
<link=p.DMA0.TCD12_DLASTSGA>
#### p.dma0.tcd12_csr
<link=p.DMA0.TCD12_CSR>
#### dma0.tcd12_csr
<link=p.DMA0.TCD12_CSR>
#### p.dma0.tcd13_soff
<link=p.DMA0.TCD13_SOFF>
#### DMA0.TCD13_SLAST
<link=p.DMA0.TCD13_SLAST>
#### p.DMA0.TCD13_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e91be[0m (0x400e8000 + 0x11be)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd13_biter_elinkno
<link=p.DMA0.TCD13_BITER_ELINKNO>
#### p.dma0.tcd14_nbytes_mlno
<link=p.DMA0.TCD14_NBYTES_MLNO>
#### dma0.tcd14_nbytes_mlno
<link=p.DMA0.TCD14_NBYTES_MLNO>
#### p.dma0.tcd14_slast
<link=p.DMA0.TCD14_SLAST>
#### dma0.tcd14_dlastsga
<link=p.DMA0.TCD14_DLASTSGA>
#### p.DMA0.TCD14_CSR
<lang=dft>
 (rw)  [1;33m0x400e91dc[0m (0x400e8000 + 0x11dc)
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
#### dma0.tcd14_biter_elinkyes
<link=p.DMA0.TCD14_BITER_ELINKYES>
#### DMA0.TCD15_SOFF
<link=p.DMA0.TCD15_SOFF>
#### p.DMA0.TCD15_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e91e8[0m (0x400e8000 + 0x11e8)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.DMA0.TCD15_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e91e8[0m (0x400e8000 + 0x11e8)
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
#### dma0.tcd15_doff
<link=p.DMA0.TCD15_DOFF>
#### DMA0.TCD16_NBYTES_MLOFFNO
<link=p.DMA0.TCD16_NBYTES_MLOFFNO>
#### p.DMA0.TCD16_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9216[0m (0x400e8000 + 0x1216)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd16_citer_elinkno
<link=p.DMA0.TCD16_CITER_ELINKNO>
#### dma0.tcd17_attr
<link=p.DMA0.TCD17_ATTR>
#### DMA0.TCD17_CITER_ELINKYES
<link=p.DMA0.TCD17_CITER_ELINKYES>
#### dma0.tcd17_dlastsga
<link=p.DMA0.TCD17_DLASTSGA>
#### p.DMA0.TCD17_CSR
<lang=dft>
 (rw)  [1;33m0x400e923c[0m (0x400e8000 + 0x123c)
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
#### dma0.tcd17_biter_elinkno
<link=p.DMA0.TCD17_BITER_ELINKNO>
#### p.dma0.tcd18_daddr
<link=p.DMA0.TCD18_DADDR>
#### DMA0.TCD18_CSR
<link=p.DMA0.TCD18_CSR>
#### p.DMA0.TCD18_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e925e[0m (0x400e8000 + 0x125e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd19_saddr
<link=p.DMA0.TCD19_SADDR>
#### dma0.tcd19_attr
<link=p.DMA0.TCD19_ATTR>
#### p.dma0.tcd21_soff
<link=p.DMA0.TCD21_SOFF>
#### dma0.tcd21_attr
<link=p.DMA0.TCD21_ATTR>
#### p.dma0.tcd21_nbytes_mloffno
<link=p.DMA0.TCD21_NBYTES_MLOFFNO>
#### dma0.tcd21_citer_elinkno
<link=p.DMA0.TCD21_CITER_ELINKNO>
#### DMA0.TCD21_DLASTSGA
<link=p.DMA0.TCD21_DLASTSGA>
#### DMA0.TCD22_ATTR
<link=p.DMA0.TCD22_ATTR>
#### p.DMA0.TCD22_DOFF
<lang=dft>
 (rw)  [1;33m0x400e92d4[0m (0x400e8000 + 0x12d4)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.DMA0.TCD23_DADDR
<lang=dft>
 (rw)  [1;33m0x400e92f0[0m (0x400e8000 + 0x12f0)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.DMA0.TCD23_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e92f6[0m (0x400e8000 + 0x12f6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD24_NBYTES_MLNO
<link=p.DMA0.TCD24_NBYTES_MLNO>
#### p.DMA0.TCD24_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9308[0m (0x400e8000 + 0x1308)
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
#### p.dma0.tcd24_slast
<link=p.DMA0.TCD24_SLAST>
#### p.dma0.tcd24_csr
<link=p.DMA0.TCD24_CSR>
#### dma0.tcd25_saddr
<link=p.DMA0.TCD25_SADDR>
#### p.DMA0.TCD25_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9328[0m (0x400e8000 + 0x1328)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.DMA0.TCD25_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9336[0m (0x400e8000 + 0x1336)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD26_SLAST
<lang=dft>
 (rw)  [1;33m0x400e934c[0m (0x400e8000 + 0x134c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### DMA0.TCD26_CITER_ELINKNO
<link=p.DMA0.TCD26_CITER_ELINKNO>
#### p.DMA0.TCD26_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e9358[0m (0x400e8000 + 0x1358)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### dma0.tcd26_biter_elinkno
<link=p.DMA0.TCD26_BITER_ELINKNO>
#### p.dma0.tcd26_biter_elinkyes
<link=p.DMA0.TCD26_BITER_ELINKYES>
#### p.DMA0.TCD27_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9368[0m (0x400e8000 + 0x1368)
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
#### DMA0.TCD27_NBYTES_MLOFFYES
<link=p.DMA0.TCD27_NBYTES_MLOFFYES>
#### p.DMA0.TCD27_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9374[0m (0x400e8000 + 0x1374)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.DMA0.TCD27_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e937e[0m (0x400e8000 + 0x137e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd27_biter_elinkyes
<link=p.DMA0.TCD27_BITER_ELINKYES>
#### dma0.tcd28_biter_elinkyes
<link=p.DMA0.TCD28_BITER_ELINKYES>
#### p.DMA0.TCD29_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e93b6[0m (0x400e8000 + 0x13b6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD29_CITER_ELINKYES
<link=p.DMA0.TCD29_CITER_ELINKYES>
#### dma0.tcd30_soff
<link=p.DMA0.TCD30_SOFF>
#### p.dma0.tcd30_doff
<link=p.DMA0.TCD30_DOFF>
#### DMA0.TCD31_NBYTES_MLOFFNO
<link=p.DMA0.TCD31_NBYTES_MLOFFNO>
#### p.DMA0.TCD31_DADDR
<lang=dft>
 (rw)  [1;33m0x400e93f0[0m (0x400e8000 + 0x13f0)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.dma0.tcd31_citer_elinkno
<link=p.DMA0.TCD31_CITER_ELINKNO>
#### p.DMA0.TCD31_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e93f6[0m (0x400e8000 + 0x13f6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD31_CSR
<lang=dft>
 (rw)  [1;33m0x400e93fc[0m (0x400e8000 + 0x13fc)
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
#### DMA0.TCD31_BITER_ELINKNO
<link=p.DMA0.TCD31_BITER_ELINKNO>
#### p.dmamux.chcfg[8]
<link=p.DMAMUX.CHCFG[8]>
#### DMAMUX.CHCFG[9]
<link=p.DMAMUX.CHCFG[9]>
#### p.dmamux.chcfg[10]
<link=p.DMAMUX.CHCFG[10]>
#### p.DMAMUX.CHCFG[19]
<lang=dft>
 (rw)  [1;33m0x400ec04c[0m (0x400ec000 + 0x004c)
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
#### p.dmamux.chcfg[22]
<link=p.DMAMUX.CHCFG[22]>
#### p.dmamux.chcfg[28]
<link=p.DMAMUX.CHCFG[28]>
#### p.gpc.imr1
<link=p.GPC.IMR1>
#### gpc.imr2
<link=p.GPC.IMR2>
#### gpc.isr1
<link=p.GPC.ISR1>
#### p.gpc.isr5
<link=p.GPC.ISR5>
#### p.pgc.cpu_pupscr
<link=p.PGC.CPU_PUPSCR>
#### pgc.cpu_pupscr
<link=p.PGC.CPU_PUPSCR>
#### p.PGC.CPU_PDNSCR
<lang=dft>
 (rw)  [1;33m0x400f42a8[0m (0x400f4000 + 0x02a8)
PGC CPU Pull Down Sequence Control Register
 (rw) (06)  [0;32mISO[0m  - [05:00] -  After a power-down request (pdn_req assertion), the PGC waits a number of 32k c
 locks equal to the value of ISO before asserting isolation
 (rw) (06)  [0;32mISO2SW[0m  - [13:08] -  After asserting isolation, the PGC waits a number of 32k clocks equal to the va
 lue of ISO2SW before negating
</lang>
#### SRC.SBMR1
<link=p.SRC.SBMR1>
#### src.gpr2
<link=p.SRC.GPR2>
#### p.SRC.GPR3
<lang=dft>
 (rw)  [1;33m0x400f8028[0m (0x400f8000 + 0x0028)
SRC General Purpose Register 3
</lang>
#### src.gpr10
<link=p.SRC.GPR10>
#### CCM.CBCDR
<link=p.CCM.CBCDR>
#### CCM.CSCMR2
<link=p.CCM.CSCMR2>
#### p.ccm.cdcdr
<link=p.CCM.CDCDR>
#### p.CCM.CSCDR2
<lang=dft>
 (rw)  [1;33m0x400fc038[0m (0x400fc000 + 0x0038)
CCM Serial Clock Divider Register 2
 (rw) (03)  [0;32mLCDIF_PRED[0m  - [14:12] -  Pre-divider for lcdif clock. Divider should be updated when output clock is gat
 ed.
      0 - LCDIF_PRED_0 :
         divide by 1
      0x1 - LCDIF_PRED_1 :
         divide by 2
      0x2 - LCDIF_PRED_2 :
         divide by 3
      0x3 - LCDIF_PRED_3 :
         divide by 4
      0x4 - LCDIF_PRED_4 :
         divide by 5
      0x5 - LCDIF_PRED_5 :
         divide by 6
      0x6 - LCDIF_PRED_6 :
         divide by 7
      0x7 - LCDIF_PRED_7 :
         divide by 8
 (rw) (03)  [0;32mLCDIF_PRE_CLK_SEL[0m  - [17:15] -  Selector for lcdif root clock pre-multiplexer
      0 - LCDIF_PRE_CLK_SEL_0 :
         derive clock from PLL2
      0x1 - LCDIF_PRE_CLK_SEL_1 :
         derive clock from PLL3 PFD3
      0x2 - LCDIF_PRE_CLK_SEL_2 :
         derive clock from PLL5
      0x3 - LCDIF_PRE_CLK_SEL_3 :
         derive clock from PLL2 PFD0
      0x4 - LCDIF_PRE_CLK_SEL_4 :
         derive clock from PLL2 PFD1
      0x5 - LCDIF_PRE_CLK_SEL_5 :
         derive clock from PLL3 PFD1
 (rw) (01)  [0;32mLPI2C_CLK_SEL[0m  - [18:18] -  Selector for the LPI2C clock multiplexor
      0 - LPI2C_CLK_SEL_0 :
         derive clock from pll3_60m
      0x1 - LPI2C_CLK_SEL_1 :
         derive clock from osc_clk
 (rw) (06)  [0;32mLPI2C_CLK_PODF[0m  - [24:19] -  Divider for lpi2c clock podf. Divider should be updated when output clock is ga
 ted. The input clock to this divider should be lower than 300Mhz, the predivide
 r can be used to achieve this.
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
</lang>
#### p.ccm.clpcr
<link=p.CCM.CLPCR>
#### p.ccm.cisr
<link=p.CCM.CISR>
#### ccm.cgpr
<link=p.CCM.CGPR>
#### CCM.CCGR4
<link=p.CCM.CCGR4>
#### ccm.ccgr6
<link=p.CCM.CCGR6>
#### ROMC.ROMPATCH3D
<link=p.ROMC.ROMPATCH3D>
#### p.romc.rompatch2d
<link=p.ROMC.ROMPATCH2D>
#### romc.rompatch0d
<link=p.ROMC.ROMPATCH0D>
#### p.ROMC.ROMPATCHENH
<lang=dft>
 (ro)  [1;33m0x401800f8[0m (0x40180000 + 0x00f8)
ROMC Enable Register High
</lang>
#### romc.rompatch3a
<link=p.ROMC.ROMPATCH3A>
#### ROMC.ROMPATCH4A
<link=p.ROMC.ROMPATCH4A>
#### p.romc.rompatch11a
<link=p.ROMC.ROMPATCH11A>
#### p.romc.rompatchsr
<link=p.ROMC.ROMPATCHSR>
#### p.lpuart1
<link=p.LPUART1>
#### p.LPUART1.PINCFG
<lang=dft>
 (rw)  [1;33m0x4018400c[0m (0x40184000 + 0x000c)
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
#### p.LPUART2
<lang=dft>
base: 0x40188000
BAUD            CTRL            DATA            FIFO            
GLOBAL          MATCH           MODIR           PARAM           
PINCFG          STAT            VERID           WATER           
输入 p.LPUART2.{reg_name} 以查看寄存器的详细信息
type p.LPUART2.{reg_name} to check details of registers
</lang>
#### p.LPUART2.DATA
<lang=dft>
 (rw)  [1;33m0x4018801c[0m (0x40188000 + 0x001c)
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
#### LPUART2.MATCH
<link=p.LPUART2.MATCH>
#### p.lpuart3.verid
<link=p.LPUART3.VERID>
#### p.lpuart3.pincfg
<link=p.LPUART3.PINCFG>
#### lpuart3.baud
<link=p.LPUART3.BAUD>
#### p.LPUART3.MODIR
<lang=dft>
 (rw)  [1;33m0x4018c024[0m (0x4018c000 + 0x0024)
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
#### p.LPUART4.CTRL
<lang=dft>
 (rw)  [1;33m0x40190018[0m (0x40190000 + 0x0018)
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
#### p.lpuart4.match
<link=p.LPUART4.MATCH>
#### p.lpuart5.param
<link=p.LPUART5.PARAM>
#### lpuart5.pincfg
<link=p.LPUART5.PINCFG>
#### p.lpuart5.ctrl
<link=p.LPUART5.CTRL>
#### LPUART5.FIFO
<link=p.LPUART5.FIFO>
#### lpuart6.param
<link=p.LPUART6.PARAM>
#### lpuart6.ctrl
<link=p.LPUART6.CTRL>
#### p.lpuart6.water
<link=p.LPUART6.WATER>
#### p.LPUART7.VERID
<lang=dft>
 (ro)  [1;33m0x4019c000[0m (0x4019c000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Identification Number
      0x1 - FEATURE_1 :
         Standard feature set.
      0x3 - FEATURE_3 :
         Standard feature set with MODEM/IrDA support.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### LPUART7.CTRL
<link=p.LPUART7.CTRL>
#### LPUART7.MATCH
<link=p.LPUART7.MATCH>
#### p.LPUART8.BAUD
<lang=dft>
 (rw)  [1;33m0x401a0010[0m (0x401a0000 + 0x0010)
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
#### p.LPUART8.DATA
<lang=dft>
 (rw)  [1;33m0x401a001c[0m (0x401a0000 + 0x001c)
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
#### p.FLEXIO1.VERID
<lang=dft>
 (ro)  [1;33m0x401ac000[0m (0x401ac000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Specification Number
      0 - FEATURE_0 :
         Standard features implemented.
      0x1 - FEATURE_1 :
         Supports state, logic and parallel modes.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### p.FLEXIO1.SHIFTEIEN
<lang=dft>
 (rw)  [1;33m0x401ac024[0m (0x401ac000 + 0x0024)
Shifter Error Interrupt Enable
 (rw) (04)  [0;32mSEIE[0m  - [03:00] -  Shifter Error Interrupt Enable
</lang>
#### p.flexio1.timien
<link=p.FLEXIO1.TIMIEN>
#### p.FLEXIO1.SHIFTCTL[1]
<lang=dft>
 (rw)  [1;33m0x401ac084[0m (0x401ac000 + 0x0084)
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
#### FLEXIO1.SHIFTCFG[0]
<link=p.FLEXIO1.SHIFTCFG[0]>
#### p.flexio1.shiftcfg[2]
<link=p.FLEXIO1.SHIFTCFG[2]>
#### p.FLEXIO1.SHIFTCFG[3]
<lang=dft>
 (rw)  [1;33m0x401ac10c[0m (0x401ac000 + 0x010c)
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
#### p.FLEXIO1.SHIFTBUF[1]
<lang=dft>
 (rw)  [1;33m0x401ac204[0m (0x401ac000 + 0x0204)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio1.shiftbuf[2]
<link=p.FLEXIO1.SHIFTBUF[2]>
#### p.FLEXIO1.SHIFTBUFBIS[2]
<lang=dft>
 (rw)  [1;33m0x401ac288[0m (0x401ac000 + 0x0288)
Shifter Buffer N Bit Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBIS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio1.shiftbufbis[2]
<link=p.FLEXIO1.SHIFTBUFBIS[2]>
#### p.flexio1.shiftbufbys[1]
<link=p.FLEXIO1.SHIFTBUFBYS[1]>
#### p.FLEXIO1.TIMCTL[1]
<lang=dft>
 (rw)  [1;33m0x401ac404[0m (0x401ac000 + 0x0404)
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
#### FLEXIO1.TIMCMP[2]
<link=p.FLEXIO1.TIMCMP[2]>
#### p.FLEXIO1.SHIFTBUFNBS[2]
<lang=dft>
 (rw)  [1;33m0x401ac688[0m (0x401ac000 + 0x0688)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio1.shiftbufnbs[3]
<link=p.FLEXIO1.SHIFTBUFNBS[3]>
#### p.FLEXIO1.SHIFTBUFHWS[1]
<lang=dft>
 (rw)  [1;33m0x401ac704[0m (0x401ac000 + 0x0704)
Shifter Buffer N Half Word Swapped Register
 (rw) (32)  [0;32mSHIFTBUFHWS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio2.verid
<link=p.FLEXIO2.VERID>
#### p.flexio2.shifterr
<link=p.FLEXIO2.SHIFTERR>
#### FLEXIO2.SHIFTSTATE
<link=p.FLEXIO2.SHIFTSTATE>
#### flexio2.shiftctl[0]
<link=p.FLEXIO2.SHIFTCTL[0]>
#### FLEXIO2.SHIFTCFG[1]
<link=p.FLEXIO2.SHIFTCFG[1]>
#### FLEXIO2.SHIFTBUF[0]
<link=p.FLEXIO2.SHIFTBUF[0]>
#### p.flexio2.shiftbuf[1]
<link=p.FLEXIO2.SHIFTBUF[1]>
#### FLEXIO2.SHIFTBUFBIS[3]
<link=p.FLEXIO2.SHIFTBUFBIS[3]>
#### p.flexio2.shiftbufbys[2]
<link=p.FLEXIO2.SHIFTBUFBYS[2]>
#### p.flexio2.timctl[2]
<link=p.FLEXIO2.TIMCTL[2]>
#### p.flexio2.timcfg[2]
<link=p.FLEXIO2.TIMCFG[2]>
#### p.FLEXIO2.TIMCMP[0]
<lang=dft>
 (rw)  [1;33m0x401b0500[0m (0x401b0000 + 0x0500)
Timer Compare N Register
 (rw) (16)  [0;32mCMP[0m  - [15:00] -  Timer Compare Value
</lang>
#### FLEXIO2.SHIFTBUFNBS[2]
<link=p.FLEXIO2.SHIFTBUFNBS[2]>
#### FLEXIO3.CTRL
<link=p.FLEXIO3.CTRL>
#### flexio3.shiftstat
<link=p.FLEXIO3.SHIFTSTAT>
#### p.FLEXIO3.SHIFTSIEN
<lang=dft>
 (rw)  [1;33m0x42020020[0m (0x42020000 + 0x0020)
Shifter Status Interrupt Enable
 (rw) (04)  [0;32mSSIE[0m  - [03:00] -  Shifter Status Interrupt Enable
</lang>
#### p.FLEXIO3.SHIFTEIEN
<lang=dft>
 (rw)  [1;33m0x42020024[0m (0x42020000 + 0x0024)
Shifter Error Interrupt Enable
 (rw) (04)  [0;32mSEIE[0m  - [03:00] -  Shifter Error Interrupt Enable
</lang>
#### FLEXIO3.SHIFTSDEN
<link=p.FLEXIO3.SHIFTSDEN>
#### p.FLEXIO3.SHIFTCTL[0]
<lang=dft>
 (rw)  [1;33m0x42020080[0m (0x42020000 + 0x0080)
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
#### flexio3.shiftctl[2]
<link=p.FLEXIO3.SHIFTCTL[2]>
#### p.FLEXIO3.SHIFTBUF[1]
<lang=dft>
 (rw)  [1;33m0x42020204[0m (0x42020000 + 0x0204)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio3.shiftbuf[2]
<link=p.FLEXIO3.SHIFTBUF[2]>
#### p.flexio3.shiftbufbis[3]
<link=p.FLEXIO3.SHIFTBUFBIS[3]>
#### p.flexio3.shiftbufbbs[2]
<link=p.FLEXIO3.SHIFTBUFBBS[2]>
#### p.FLEXIO3.SHIFTBUFBBS[3]
<lang=dft>
 (rw)  [1;33m0x4202038c[0m (0x42020000 + 0x038c)
Shifter Buffer N Bit Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio3.timcfg[2]
<link=p.FLEXIO3.TIMCFG[2]>
#### p.flexio3.timcmp[2]
<link=p.FLEXIO3.TIMCMP[2]>
#### flexio3.shiftbufnbs[2]
<link=p.FLEXIO3.SHIFTBUFNBS[2]>
#### GPIO1.DR
<link=p.GPIO1.DR>
#### GPIO1.EDGE_SEL
<link=p.GPIO1.EDGE_SEL>
#### gpio5.edge_sel
<link=p.GPIO5.EDGE_SEL>
#### GPIO2.ICR1
<link=p.GPIO2.ICR1>
#### p.gpio3.isr
<link=p.GPIO3.ISR>
#### gpio4.dr
<link=p.GPIO4.DR>
#### p.gpio4.edge_sel
<link=p.GPIO4.EDGE_SEL>
#### p.gpio4.dr_set
<link=p.GPIO4.DR_SET>
#### p.gpio7.psr
<link=p.GPIO7.PSR>
#### p.GPIO7.ICR1
<lang=dft>
 (rw)  [1;33m0x4200400c[0m (0x42004000 + 0x000c)
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
#### p.gpio7.dr_set
<link=p.GPIO7.DR_SET>
#### p.GPIO8
<lang=dft>
base: 0x42008000
DR              DR_CLEAR        DR_SET          DR_TOGGLE       
EDGE_SEL        GDIR            ICR1            ICR2            
IMR             ISR             PSR             
输入 p.GPIO8.{reg_name} 以查看寄存器的详细信息
type p.GPIO8.{reg_name} to check details of registers
</lang>
#### GPIO8.ICR1
<link=p.GPIO8.ICR1>
#### p.gpio8.imr
<link=p.GPIO8.IMR>
#### p.gpio8.dr_set
<link=p.GPIO8.DR_SET>
#### gpio8.dr_clear
<link=p.GPIO8.DR_CLEAR>
#### p.gpio9.dr_toggle
<link=p.GPIO9.DR_TOGGLE>
#### p.CAN1.ESR1
<lang=dft>
 (rw)  [1;33m0x401d0020[0m (0x401d0000 + 0x0020)
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
#### p.can1.esr1
<link=p.CAN1.ESR1>
#### p.can1.crcr
<link=p.CAN1.CRCR>
#### CAN1.RXIMR3
<link=p.CAN1.RXIMR3>
#### p.CAN1.RXIMR5
<lang=dft>
 (rw)  [1;33m0x401d0894[0m (0x401d0000 + 0x0894)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR15
<link=p.CAN1.RXIMR15>
#### p.CAN1.RXIMR19
<lang=dft>
 (rw)  [1;33m0x401d08cc[0m (0x401d0000 + 0x08cc)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr28
<link=p.CAN1.RXIMR28>
#### CAN1.RXIMR33
<link=p.CAN1.RXIMR33>
#### p.can1.rximr34
<link=p.CAN1.RXIMR34>
#### can1.rximr34
<link=p.CAN1.RXIMR34>
#### p.can1.rximr42
<link=p.CAN1.RXIMR42>
#### p.CAN1.RXIMR55
<lang=dft>
 (rw)  [1;33m0x401d095c[0m (0x401d0000 + 0x095c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr57
<link=p.CAN1.RXIMR57>
#### p.can1.rximr59
<link=p.CAN1.RXIMR59>
#### p.CAN1.RXIMR60
<lang=dft>
 (rw)  [1;33m0x401d0970[0m (0x401d0000 + 0x0970)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR60
<link=p.CAN1.RXIMR60>
#### can1.rximr63
<link=p.CAN1.RXIMR63>
#### can1.gfwr
<link=p.CAN1.GFWR>
#### p.CAN2.RXMGMASK
<lang=dft>
 (rw)  [1;33m0x401d4010[0m (0x401d4000 + 0x0010)
Rx Mailboxes Global Mask Register
 (rw) (32)  [0;32mMG[0m  - [31:00] -  These bits mask the Mailbox filter bits as shown in the figure above
      0 - MG_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MG_1 :
         The corresponding bit in the filter is checked against the one received
</lang>
#### p.can2.crcr
<link=p.CAN2.CRCR>
#### can2.rxfgmask
<link=p.CAN2.RXFGMASK>
#### can2.dbg2
<link=p.CAN2.DBG2>
#### CAN2.RXIMR2
<link=p.CAN2.RXIMR2>
#### can2.rximr9
<link=p.CAN2.RXIMR9>
#### p.CAN2.RXIMR15
<lang=dft>
 (rw)  [1;33m0x401d48bc[0m (0x401d4000 + 0x08bc)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr18
<link=p.CAN2.RXIMR18>
#### CAN2.RXIMR23
<link=p.CAN2.RXIMR23>
#### can2.rximr29
<link=p.CAN2.RXIMR29>
#### CAN2.RXIMR30
<link=p.CAN2.RXIMR30>
#### p.can2.rximr38
<link=p.CAN2.RXIMR38>
#### CAN2.RXIMR41
<link=p.CAN2.RXIMR41>
#### p.can2.rximr45
<link=p.CAN2.RXIMR45>
#### p.CAN2.RXIMR49
<lang=dft>
 (rw)  [1;33m0x401d4944[0m (0x401d4000 + 0x0944)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR52
<link=p.CAN2.RXIMR52>
#### can2.rximr54
<link=p.CAN2.RXIMR54>
#### p.can2.rximr63
<link=p.CAN2.RXIMR63>
#### p.CAN2.GFWR
<lang=dft>
 (rw)  [1;33m0x401d49e0[0m (0x401d4000 + 0x09e0)
Glitch Filter Width Registers
 (rw) (08)  [0;32mGFWR[0m  - [07:00] -  It determines the Glitch Filter Width
</lang>
#### CAN2.GFWR
<link=p.CAN2.GFWR>
#### p.can3.timer
<link=p.CAN3.TIMER>
#### can3.imask2
<link=p.CAN3.IMASK2>
#### p.can3.iflag2
<link=p.CAN3.IFLAG2>
#### CAN3.CTRL2
<link=p.CAN3.CTRL2>
#### CAN3.RXFIR
<link=p.CAN3.RXFIR>
#### CAN3.MB0_16B_ID
<link=p.CAN3.MB0_16B_ID>
#### can3.mb0_8b_id
<link=p.CAN3.MB0_8B_ID>
#### p.CAN3.MB0_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8088[0m (0x401d8000 + 0x0088)
Message Buffer 0 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB0_32B_WORD0
<link=p.CAN3.MB0_32B_WORD0>
#### p.CAN3.MB0_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d808c[0m (0x401d8000 + 0x008c)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb0_16b_word3
<link=p.CAN3.MB0_16B_WORD3>
#### can3.mb0_64b_word3
<link=p.CAN3.MB0_64B_WORD3>
#### p.can3.mb1_8b_id
<link=p.CAN3.MB1_8B_ID>
#### CAN3.MB1_8B_ID
<link=p.CAN3.MB1_8B_ID>
#### can3.mb0_32b_word4
<link=p.CAN3.MB0_32B_WORD4>
#### p.can3.mb1_16b_cs
<link=p.CAN3.MB1_16B_CS>
#### can3.mb1_16b_cs
<link=p.CAN3.MB1_16B_CS>
#### can3.word01
<link=p.CAN3.WORD01>
#### can3.id2
<link=p.CAN3.ID2>
#### p.can3.mb1_16b_word2
<link=p.CAN3.MB1_16B_WORD2>
#### CAN3.MB1_16B_WORD2
<link=p.CAN3.MB1_16B_WORD2>
#### can3.mb2_8b_word0
<link=p.CAN3.MB2_8B_WORD0>
#### CAN3.WORD02
<link=p.CAN3.WORD02>
#### can3.word12
<link=p.CAN3.WORD12>
#### p.can3.cs3
<link=p.CAN3.CS3>
#### CAN3.MB2_16B_CS
<link=p.CAN3.MB2_16B_CS>
#### p.CAN3.WORD03
<lang=dft>
 (rw)  [1;33m0x401d80b8[0m (0x401d8000 + 0x00b8)
Message Buffer 3 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb2_16b_word1
<link=p.CAN3.MB2_16B_WORD1>
#### p.can3.word13
<link=p.CAN3.WORD13>
#### can3.mb1_32b_word7
<link=p.CAN3.MB1_32B_WORD7>
#### p.CAN3.MB2_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80d8[0m (0x401d8000 + 0x00d8)
Message Buffer 2 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB2_32B_WORD0
<link=p.CAN3.MB2_32B_WORD0>
#### CAN3.MB5_8B_WORD0
<link=p.CAN3.MB5_8B_WORD0>
#### p.CAN3.MB1_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d80dc[0m (0x401d8000 + 0x00dc)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD15
<link=p.CAN3.WORD15>
#### p.can3.mb4_16b_cs
<link=p.CAN3.MB4_16B_CS>
#### p.can3.mb1_64b_word5
<link=p.CAN3.MB1_64B_WORD5>
#### can3.mb2_32b_word4
<link=p.CAN3.MB2_32B_WORD4>
#### can3.cs7
<link=p.CAN3.CS7>
#### CAN3.ID7
<link=p.CAN3.ID7>
#### CAN3.MB1_64B_WORD9
<link=p.CAN3.MB1_64B_WORD9>
#### p.CAN3.MB5_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d80f8[0m (0x401d8000 + 0x00f8)
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
#### p.can3.mb7_8b_word0
<link=p.CAN3.MB7_8B_WORD0>
#### CAN3.MB5_16B_WORD1
<link=p.CAN3.MB5_16B_WORD1>
#### p.CAN3.MB5_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d810c[0m (0x401d8000 + 0x010c)
Message Buffer 5 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD18
<lang=dft>
 (rw)  [1;33m0x401d810c[0m (0x401d8000 + 0x010c)
Message Buffer 8 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS9
<lang=dft>
 (rw)  [1;33m0x401d8110[0m (0x401d8000 + 0x0110)
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
#### p.can3.id9
<link=p.CAN3.ID9>
#### CAN3.MB9_8B_WORD0
<link=p.CAN3.MB9_8B_WORD0>
#### CAN3.MB2_64B_WORD3
<link=p.CAN3.MB2_64B_WORD3>
#### p.can3.mb2_64b_word4
<link=p.CAN3.MB2_64B_WORD4>
#### can3.mb4_32b_word0
<link=p.CAN3.MB4_32B_WORD0>
#### p.can3.word010
<link=p.CAN3.WORD010>
#### CAN3.WORD010
<link=p.CAN3.WORD010>
#### can3.cs11
<link=p.CAN3.CS11>
#### p.CAN3.MB7_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8134[0m (0x401d8000 + 0x0134)
Message Buffer 7 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_16B_WORD1
<link=p.CAN3.MB7_16B_WORD1>
#### can3.mb11_8b_word0
<link=p.CAN3.MB11_8B_WORD0>
#### p.CAN3.MB4_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8138[0m (0x401d8000 + 0x0138)
Message Buffer 4 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB4_32B_WORD4
<link=p.CAN3.MB4_32B_WORD4>
#### p.CAN3.MB11_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d813c[0m (0x401d8000 + 0x013c)
Message Buffer 11 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb7_16b_word3
<link=p.CAN3.MB7_16B_WORD3>
#### p.can3.word111
<link=p.CAN3.WORD111>
#### p.CAN3.MB5_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d814c[0m (0x401d8000 + 0x014c)
Message Buffer 5 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb13_8b_cs
<link=p.CAN3.MB13_8B_CS>
#### p.CAN3.MB8_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8150[0m (0x401d8000 + 0x0150)
Message Buffer 8 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb13_8b_id
<link=p.CAN3.MB13_8B_ID>
#### CAN3.MB8_16B_WORD3
<link=p.CAN3.MB8_16B_WORD3>
#### p.CAN3.MB3_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d815c[0m (0x401d8000 + 0x015c)
Message Buffer 3 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb5_32b_word3
<link=p.CAN3.MB5_32B_WORD3>
#### can3.mb9_16b_id
<link=p.CAN3.MB9_16B_ID>
#### can3.mb3_64b_word1
<link=p.CAN3.MB3_64B_WORD1>
#### CAN3.MB3_64B_WORD3
<link=p.CAN3.MB3_64B_WORD3>
#### can3.mb10_16b_cs
<link=p.CAN3.MB10_16B_CS>
#### p.CAN3.MB10_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8174[0m (0x401d8000 + 0x0174)
Message Buffer 10 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb10_16b_id
<link=p.CAN3.MB10_16B_ID>
#### p.CAN3.MB15_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8174[0m (0x401d8000 + 0x0174)
Message Buffer 15 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb6_32b_word0
<link=p.CAN3.MB6_32B_WORD0>
#### CAN3.MB15_8B_WORD1
<link=p.CAN3.MB15_8B_WORD1>
#### p.CAN3.MB3_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d8180[0m (0x401d8000 + 0x0180)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB10_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8184[0m (0x401d8000 + 0x0184)
Message Buffer 10 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB16_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8184[0m (0x401d8000 + 0x0184)
Message Buffer 16 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB11_16B_CS
<link=p.CAN3.MB11_16B_CS>
#### CAN3.MB16_8B_WORD0
<link=p.CAN3.MB16_8B_WORD0>
#### p.CAN3.MB6_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8188[0m (0x401d8000 + 0x0188)
Message Buffer 6 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB6_32B_WORD4
<link=p.CAN3.MB6_32B_WORD4>
#### CAN3.MB3_64B_WORD11
<link=p.CAN3.MB3_64B_WORD11>
#### can3.word116
<link=p.CAN3.WORD116>
#### p.can3.cs17
<link=p.CAN3.CS17>
#### can3.mb3_64b_word13
<link=p.CAN3.MB3_64B_WORD13>
#### p.CAN3.WORD017
<lang=dft>
 (rw)  [1;33m0x401d8198[0m (0x401d8000 + 0x0198)
Message Buffer 17 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word017
<link=p.CAN3.WORD017>
#### p.CAN3.MB11_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d819c[0m (0x401d8000 + 0x019c)
Message Buffer 11 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb11_16b_word3
<link=p.CAN3.MB11_16B_WORD3>
#### p.can3.mb3_64b_word15
<link=p.CAN3.MB3_64B_WORD15>
#### CAN3.CS18
<link=p.CAN3.CS18>
#### p.CAN3.ID18
<lang=dft>
 (rw)  [1;33m0x401d81a4[0m (0x401d8000 + 0x01a4)
Message Buffer 18 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb19_8b_cs
<link=p.CAN3.MB19_8B_CS>
#### can3.mb12_16b_word3
<link=p.CAN3.MB12_16B_WORD3>
#### CAN3.MB19_8B_WORD1
<link=p.CAN3.MB19_8B_WORD1>
#### CAN3.WORD119
<link=p.CAN3.WORD119>
#### p.CAN3.MB13_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81c0[0m (0x401d8000 + 0x01c0)
Message Buffer 13 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb13_16b_word0
<link=p.CAN3.MB13_16B_WORD0>
#### p.CAN3.MB4_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d81c0[0m (0x401d8000 + 0x01c0)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb4_64b_word6
<link=p.CAN3.MB4_64B_WORD6>
#### p.CAN3.MB20_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81c8[0m (0x401d8000 + 0x01c8)
Message Buffer 20 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb20_8b_word0
<link=p.CAN3.MB20_8B_WORD0>
#### p.can3.word120
<link=p.CAN3.WORD120>
#### CAN3.MB14_16B_ID
<link=p.CAN3.MB14_16B_ID>
#### can3.mb21_8b_id
<link=p.CAN3.MB21_8B_ID>
#### p.CAN3.MB14_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81d8[0m (0x401d8000 + 0x01d8)
Message Buffer 14 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb21_8b_word0
<link=p.CAN3.MB21_8B_WORD0>
#### CAN3.WORD021
<link=p.CAN3.WORD021>
#### CAN3.MB4_64B_WORD13
<link=p.CAN3.MB4_64B_WORD13>
#### p.can3.mb8_32b_word5
<link=p.CAN3.MB8_32B_WORD5>
#### p.can3.cs22
<link=p.CAN3.CS22>
#### CAN3.MB14_16B_WORD2
<link=p.CAN3.MB14_16B_WORD2>
#### p.can3.mb4_64b_word15
<link=p.CAN3.MB4_64B_WORD15>
#### p.can3.mb9_32b_cs
<link=p.CAN3.MB9_32B_CS>
#### p.can3.mb5_64b_word0
<link=p.CAN3.MB5_64B_WORD0>
#### can3.mb5_64b_word0
<link=p.CAN3.MB5_64B_WORD0>
#### can3.mb9_32b_word0
<link=p.CAN3.MB9_32B_WORD0>
#### CAN3.MB9_32B_WORD2
<link=p.CAN3.MB9_32B_WORD2>
#### p.CAN3.MB9_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d81fc[0m (0x401d8000 + 0x01fc)
Message Buffer 9 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD123
<lang=dft>
 (rw)  [1;33m0x401d81fc[0m (0x401d8000 + 0x01fc)
Message Buffer 23 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS24
<lang=dft>
 (rw)  [1;33m0x401d8200[0m (0x401d8000 + 0x0200)
Message Buffer 24 CS Register
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
#### can3.mb16_16b_cs
<link=p.CAN3.MB16_16B_CS>
#### p.CAN3.MB16_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8204[0m (0x401d8000 + 0x0204)
Message Buffer 16 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb9_32b_word5
<link=p.CAN3.MB9_32B_WORD5>
#### p.CAN3.MB5_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8208[0m (0x401d8000 + 0x0208)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB10_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8210[0m (0x401d8000 + 0x0210)
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
#### can3.mb25_8b_cs
<link=p.CAN3.MB25_8B_CS>
#### can3.id25
<link=p.CAN3.ID25>
#### p.CAN3.MB16_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8214[0m (0x401d8000 + 0x0214)
Message Buffer 16 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB17_16B_CS
<link=p.CAN3.MB17_16B_CS>
#### p.can3.mb5_64b_word10
<link=p.CAN3.MB5_64B_WORD10>
#### p.can3.word025
<link=p.CAN3.WORD025>
#### p.can3.mb10_32b_word2
<link=p.CAN3.MB10_32B_WORD2>
#### CAN3.MB5_64B_WORD13
<link=p.CAN3.MB5_64B_WORD13>
#### p.CAN3.MB17_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d822c[0m (0x401d8000 + 0x022c)
Message Buffer 17 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb17_16b_word3
<link=p.CAN3.MB17_16B_WORD3>
#### p.CAN3.MB18_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8230[0m (0x401d8000 + 0x0230)
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
#### p.CAN3.MB6_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d8230[0m (0x401d8000 + 0x0230)
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
#### CAN3.MB6_64B_CS
<link=p.CAN3.MB6_64B_CS>
#### CAN3.MB6_64B_ID
<link=p.CAN3.MB6_64B_ID>
#### p.can3.mb18_16b_word1
<link=p.CAN3.MB18_16B_WORD1>
#### CAN3.MB27_8B_WORD1
<link=p.CAN3.MB27_8B_WORD1>
#### p.can3.mb6_64b_word1
<link=p.CAN3.MB6_64B_WORD1>
#### can3.mb28_8b_cs
<link=p.CAN3.MB28_8B_CS>
#### CAN3.MB28_8B_CS
<link=p.CAN3.MB28_8B_CS>
#### p.CAN3.MB6_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8240[0m (0x401d8000 + 0x0240)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb6_64b_word3
<link=p.CAN3.MB6_64B_WORD3>
#### CAN3.MB6_64B_WORD6
<link=p.CAN3.MB6_64B_WORD6>
#### can3.mb11_32b_word7
<link=p.CAN3.MB11_32B_WORD7>
#### CAN3.MB11_32B_WORD7
<link=p.CAN3.MB11_32B_WORD7>
#### p.CAN3.MB20_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8260[0m (0x401d8000 + 0x0260)
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
#### p.can3.mb20_16b_cs
<link=p.CAN3.MB20_16B_CS>
#### CAN3.MB30_8B_CS
<link=p.CAN3.MB30_8B_CS>
#### p.CAN3.MB6_64B_WORD10
<lang=dft>
 (rw)  [1;33m0x401d8260[0m (0x401d8000 + 0x0260)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_43[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_42[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_41[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_40[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb30_8b_word0
<link=p.CAN3.MB30_8B_WORD0>
#### CAN3.MB6_64B_WORD12
<link=p.CAN3.MB6_64B_WORD12>
#### p.can3.mb6_64b_word13
<link=p.CAN3.MB6_64B_WORD13>
#### can3.word130
<link=p.CAN3.WORD130>
#### p.can3.cs31
<link=p.CAN3.CS31>
#### can3.mb21_16b_cs
<link=p.CAN3.MB21_16B_CS>
#### p.CAN3.WORD031
<lang=dft>
 (rw)  [1;33m0x401d8278[0m (0x401d8000 + 0x0278)
Message Buffer 31 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word031
<link=p.CAN3.WORD031>
#### CAN3.MB31_8B_WORD1
<link=p.CAN3.MB31_8B_WORD1>
#### can3.id32
<link=p.CAN3.ID32>
#### p.can3.mb12_32b_word7
<link=p.CAN3.MB12_32B_WORD7>
#### p.CAN3.MB13_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d828c[0m (0x401d8000 + 0x028c)
Message Buffer 13 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB7_64B_WORD4
<link=p.CAN3.MB7_64B_WORD4>
#### CAN3.ID33
<link=p.CAN3.ID33>
#### p.CAN3.MB33_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8294[0m (0x401d8000 + 0x0294)
Message Buffer 33 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb33_8b_word1
<link=p.CAN3.MB33_8B_WORD1>
#### can3.mb13_32b_word4
<link=p.CAN3.MB13_32B_WORD4>
#### p.can3.mb7_64b_word8
<link=p.CAN3.MB7_64B_WORD8>
#### CAN3.MB14_32B_ID
<link=p.CAN3.MB14_32B_ID>
#### p.CAN3.MB7_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d82b8[0m (0x401d8000 + 0x02b8)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB24_16B_ID
<link=p.CAN3.MB24_16B_ID>
#### p.CAN3.MB24_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82cc[0m (0x401d8000 + 0x02cc)
Message Buffer 24 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB8_64B_WORD1
<link=p.CAN3.MB8_64B_WORD1>
#### CAN3.CS37
<link=p.CAN3.CS37>
#### p.can3.mb14_32b_word6
<link=p.CAN3.MB14_32B_WORD6>
#### can3.mb15_32b_id
<link=p.CAN3.MB15_32B_ID>
#### p.can3.mb8_64b_word5
<link=p.CAN3.MB8_64B_WORD5>
#### p.CAN3.CS38
<lang=dft>
 (rw)  [1;33m0x401d82e0[0m (0x401d8000 + 0x02e0)
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
#### CAN3.MB25_16B_WORD0
<link=p.CAN3.MB25_16B_WORD0>
#### can3.mb15_32b_word3
<link=p.CAN3.MB15_32B_WORD3>
#### CAN3.MB15_32B_WORD3
<link=p.CAN3.MB15_32B_WORD3>
#### can3.mb8_64b_word9
<link=p.CAN3.MB8_64B_WORD9>
#### can3.mb26_16b_cs
<link=p.CAN3.MB26_16B_CS>
#### CAN3.MB8_64B_WORD11
<link=p.CAN3.MB8_64B_WORD11>
#### p.can3.mb8_64b_word13
<link=p.CAN3.MB8_64B_WORD13>
#### p.CAN3.WORD139
<lang=dft>
 (rw)  [1;33m0x401d82fc[0m (0x401d8000 + 0x02fc)
Message Buffer 39 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb16_32b_cs
<link=p.CAN3.MB16_32B_CS>
#### p.CAN3.MB26_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8304[0m (0x401d8000 + 0x0304)
Message Buffer 26 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb27_16b_cs
<link=p.CAN3.MB27_16B_CS>
#### can3.word040
<link=p.CAN3.WORD040>
#### p.can3.mb27_16b_id
<link=p.CAN3.MB27_16B_ID>
#### p.can3.mb40_8b_word1
<link=p.CAN3.MB40_8B_WORD1>
#### CAN3.MB27_16B_WORD0
<link=p.CAN3.MB27_16B_WORD0>
#### p.can3.mb41_8b_cs
<link=p.CAN3.MB41_8B_CS>
#### p.can3.mb16_32b_word3
<link=p.CAN3.MB16_32B_WORD3>
#### p.can3.mb9_64b_word2
<link=p.CAN3.MB9_64B_WORD2>
#### can3.mb9_64b_word2
<link=p.CAN3.MB9_64B_WORD2>
#### CAN3.MB17_32B_ID
<link=p.CAN3.MB17_32B_ID>
#### CAN3.MB9_64B_WORD7
<link=p.CAN3.MB9_64B_WORD7>
#### can3.mb17_32b_word0
<link=p.CAN3.MB17_32B_WORD0>
#### can3.mb28_16b_word2
<link=p.CAN3.MB28_16B_WORD2>
#### p.can3.mb28_16b_word3
<link=p.CAN3.MB28_16B_WORD3>
#### CAN3.MB43_8B_ID
<link=p.CAN3.MB43_8B_ID>
#### p.CAN3.MB9_64B_WORD9
<lang=dft>
 (rw)  [1;33m0x401d8334[0m (0x401d8000 + 0x0334)
Message Buffer 9 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_39[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_38[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_37[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_36[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB9_64B_WORD11
<link=p.CAN3.MB9_64B_WORD11>
#### p.can3.mb29_16b_word0
<link=p.CAN3.MB29_16B_WORD0>
#### p.CAN3.MB44_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8348[0m (0x401d8000 + 0x0348)
Message Buffer 44 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb44_8b_word0
<link=p.CAN3.MB44_8B_WORD0>
#### can3.mb9_64b_word14
<link=p.CAN3.MB9_64B_WORD14>
#### can3.mb29_16b_word3
<link=p.CAN3.MB29_16B_WORD3>
#### can3.mb10_64b_id
<link=p.CAN3.MB10_64B_ID>
#### p.CAN3.MB18_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d8354[0m (0x401d8000 + 0x0354)
Message Buffer 18 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB18_32B_WORD1
<link=p.CAN3.MB18_32B_WORD1>
#### p.can3.mb45_8b_word1
<link=p.CAN3.MB45_8B_WORD1>
#### CAN3.ID46
<link=p.CAN3.ID46>
#### can3.mb10_64b_word3
<link=p.CAN3.MB10_64B_WORD3>
#### p.CAN3.MB18_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d836c[0m (0x401d8000 + 0x036c)
Message Buffer 18 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB10_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8370[0m (0x401d8000 + 0x0370)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.ID47
<lang=dft>
 (rw)  [1;33m0x401d8374[0m (0x401d8000 + 0x0374)
Message Buffer 47 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB19_32B_CS
<link=p.CAN3.MB19_32B_CS>
#### CAN3.MB47_8B_WORD0
<link=p.CAN3.MB47_8B_WORD0>
#### p.CAN3.MB10_64B_WORD10
<lang=dft>
 (rw)  [1;33m0x401d8380[0m (0x401d8000 + 0x0380)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_43[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_42[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_41[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_40[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word048
<link=p.CAN3.WORD048>
#### can3.mb10_64b_word13
<link=p.CAN3.MB10_64B_WORD13>
#### p.CAN3.WORD148
<lang=dft>
 (rw)  [1;33m0x401d838c[0m (0x401d8000 + 0x038c)
Message Buffer 48 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS49
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
#### p.CAN3.MB19_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8390[0m (0x401d8000 + 0x0390)
Message Buffer 19 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.id49
<link=p.CAN3.ID49>
#### p.can3.mb19_32b_word5
<link=p.CAN3.MB19_32B_WORD5>
#### can3.id50
<link=p.CAN3.ID50>
#### p.CAN3.MB50_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83a8[0m (0x401d8000 + 0x03a8)
Message Buffer 50 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb50_8b_word0
<link=p.CAN3.MB50_8B_WORD0>
#### CAN3.MB11_64B_WORD3
<link=p.CAN3.MB11_64B_WORD3>
#### CAN3.MB20_32B_WORD1
<link=p.CAN3.MB20_32B_WORD1>
#### CAN3.ID51
<link=p.CAN3.ID51>
#### p.can3.mb20_32b_word4
<link=p.CAN3.MB20_32B_WORD4>
#### can3.mb20_32b_word5
<link=p.CAN3.MB20_32B_WORD5>
#### can3.mb34_16b_word1
<link=p.CAN3.MB34_16B_WORD1>
#### p.CAN3.CS52
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
#### p.CAN3.MB11_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d83c0[0m (0x401d8000 + 0x03c0)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB52_8B_CS
<link=p.CAN3.MB52_8B_CS>
#### can3.mb21_32b_cs
<link=p.CAN3.MB21_32B_CS>
#### p.CAN3.MB35_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d83cc[0m (0x401d8000 + 0x03cc)
Message Buffer 35 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB21_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83d0[0m (0x401d8000 + 0x03d0)
Message Buffer 21 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB11_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d83d8[0m (0x401d8000 + 0x03d8)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb53_8b_word0
<link=p.CAN3.MB53_8B_WORD0>
#### CAN3.MB11_64B_WORD15
<link=p.CAN3.MB11_64B_WORD15>
#### p.CAN3.MB53_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83dc[0m (0x401d8000 + 0x03dc)
Message Buffer 53 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.WORD153
<lang=dft>
 (rw)  [1;33m0x401d83dc[0m (0x401d8000 + 0x03dc)
Message Buffer 53 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.CS54
<link=p.CAN3.CS54>
#### p.can3.mb54_8b_cs
<link=p.CAN3.MB54_8B_CS>
#### p.CAN3.ID54
<lang=dft>
 (rw)  [1;33m0x401d83e4[0m (0x401d8000 + 0x03e4)
Message Buffer 54 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb21_32b_word5
<link=p.CAN3.MB21_32B_WORD5>
#### p.can3.mb36_16b_id
<link=p.CAN3.MB36_16B_ID>
#### p.can3.mb21_32b_word6
<link=p.CAN3.MB21_32B_WORD6>
#### can3.mb36_16b_word0
<link=p.CAN3.MB36_16B_WORD0>
#### can3.mb54_8b_word0
<link=p.CAN3.MB54_8B_WORD0>
#### CAN3.MB12_64B_WORD1
<link=p.CAN3.MB12_64B_WORD1>
#### p.can3.mb12_64b_word3
<link=p.CAN3.MB12_64B_WORD3>
#### p.CAN3.MB37_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d83f8[0m (0x401d8000 + 0x03f8)
Message Buffer 37 CS Register
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
#### CAN3.MB22_32B_WORD1
<link=p.CAN3.MB22_32B_WORD1>
#### CAN3.WORD155
<link=p.CAN3.WORD155>
#### can3.mb12_64b_word6
<link=p.CAN3.MB12_64B_WORD6>
#### p.can3.id56
<link=p.CAN3.ID56>
#### p.can3.mb22_32b_word4
<link=p.CAN3.MB22_32B_WORD4>
#### can3.mb22_32b_word5
<link=p.CAN3.MB22_32B_WORD5>
#### p.can3.mb12_64b_word11
<link=p.CAN3.MB12_64B_WORD11>
#### CAN3.MB38_16B_WORD2
<link=p.CAN3.MB38_16B_WORD2>
#### p.can3.mb23_32b_word2
<link=p.CAN3.MB23_32B_WORD2>
#### p.can3.mb39_16b_id
<link=p.CAN3.MB39_16B_ID>
#### CAN3.MB39_16B_WORD0
<link=p.CAN3.MB39_16B_WORD0>
#### p.CAN3.MB59_8B_CS
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
#### CAN3.MB59_8B_CS
<link=p.CAN3.MB59_8B_CS>
#### can3.mb23_32b_word5
<link=p.CAN3.MB23_32B_WORD5>
#### can3.mb39_16b_word1
<link=p.CAN3.MB39_16B_WORD1>
#### CAN3.MB59_8B_ID
<link=p.CAN3.MB59_8B_ID>
#### p.CAN3.MB13_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8438[0m (0x401d8000 + 0x0438)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.cs60
<link=p.CAN3.CS60>
#### CAN3.ID60
<link=p.CAN3.ID60>
#### p.can3.mb13_64b_word5
<link=p.CAN3.MB13_64B_WORD5>
#### p.can3.mb60_8b_id
<link=p.CAN3.MB60_8B_ID>
#### can3.mb13_64b_word6
<link=p.CAN3.MB13_64B_WORD6>
#### CAN3.WORD160
<link=p.CAN3.WORD160>
#### CAN3.CS61
<link=p.CAN3.CS61>
#### CAN3.MB13_64B_WORD8
<link=p.CAN3.MB13_64B_WORD8>
#### p.CAN3.ID61
<lang=dft>
 (rw)  [1;33m0x401d8454[0m (0x401d8000 + 0x0454)
Message Buffer 61 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb62_8b_cs
<link=p.CAN3.MB62_8B_CS>
#### CAN3.MB62_8B_CS
<link=p.CAN3.MB62_8B_CS>
#### can3.mb62_8b_id
<link=p.CAN3.MB62_8B_ID>
#### CAN3.MB62_8B_ID
<link=p.CAN3.MB62_8B_ID>
#### p.CAN3.WORD062
<lang=dft>
 (rw)  [1;33m0x401d8468[0m (0x401d8000 + 0x0468)
Message Buffer 62 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB63_8B_CS
<link=p.CAN3.MB63_8B_CS>
#### can3.word163
<link=p.CAN3.WORD163>
#### p.CAN3.RXIMR[4]
<lang=dft>
 (rw)  [1;33m0x401d8890[0m (0x401d8000 + 0x0890)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[7]
<link=p.CAN3.RXIMR[7]>
#### can3.rximr[12]
<link=p.CAN3.RXIMR[12]>
#### can3.rximr[15]
<link=p.CAN3.RXIMR[15]>
#### can3.rximr[18]
<link=p.CAN3.RXIMR[18]>
#### can3.rximr[20]
<link=p.CAN3.RXIMR[20]>
#### p.can3.rximr[22]
<link=p.CAN3.RXIMR[22]>
#### p.can3.rximr[31]
<link=p.CAN3.RXIMR[31]>
#### can3.rximr[33]
<link=p.CAN3.RXIMR[33]>
#### p.can3.rximr[36]
<link=p.CAN3.RXIMR[36]>
#### CAN3.RXIMR[52]
<link=p.CAN3.RXIMR[52]>
#### CAN3.RXIMR[57]
<link=p.CAN3.RXIMR[57]>
#### CAN3.ETDC
<link=p.CAN3.ETDC>
#### p.CAN3.HR_TIME_STAMP[1]
<lang=dft>
 (ro)  [1;33m0x401d8c34[0m (0x401d8000 + 0x0c34)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.hr_time_stamp[1]
<link=p.CAN3.HR_TIME_STAMP[1]>
#### CAN3.HR_TIME_STAMP[7]
<link=p.CAN3.HR_TIME_STAMP[7]>
#### CAN3.HR_TIME_STAMP[14]
<link=p.CAN3.HR_TIME_STAMP[14]>
#### p.CAN3.HR_TIME_STAMP[20]
<lang=dft>
 (ro)  [1;33m0x401d8c80[0m (0x401d8000 + 0x0c80)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[20]
<link=p.CAN3.HR_TIME_STAMP[20]>
#### CAN3.HR_TIME_STAMP[26]
<link=p.CAN3.HR_TIME_STAMP[26]>
#### can3.hr_time_stamp[29]
<link=p.CAN3.HR_TIME_STAMP[29]>
#### can3.hr_time_stamp[31]
<link=p.CAN3.HR_TIME_STAMP[31]>
#### CAN3.HR_TIME_STAMP[32]
<link=p.CAN3.HR_TIME_STAMP[32]>
#### p.CAN3.HR_TIME_STAMP[34]
<lang=dft>
 (ro)  [1;33m0x401d8cb8[0m (0x401d8000 + 0x0cb8)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[34]
<link=p.CAN3.HR_TIME_STAMP[34]>
#### can3.hr_time_stamp[34]
<link=p.CAN3.HR_TIME_STAMP[34]>
#### CAN3.HR_TIME_STAMP[38]
<link=p.CAN3.HR_TIME_STAMP[38]>
#### CAN3.HR_TIME_STAMP[43]
<link=p.CAN3.HR_TIME_STAMP[43]>
#### can3.hr_time_stamp[44]
<link=p.CAN3.HR_TIME_STAMP[44]>
#### p.can3.hr_time_stamp[47]
<link=p.CAN3.HR_TIME_STAMP[47]>
#### p.CAN3.HR_TIME_STAMP[55]
<lang=dft>
 (ro)  [1;33m0x401d8d0c[0m (0x401d8000 + 0x0d0c)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.CAN3.HR_TIME_STAMP[58]
<lang=dft>
 (ro)  [1;33m0x401d8d18[0m (0x401d8000 + 0x0d18)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[58]
<link=p.CAN3.HR_TIME_STAMP[58]>
#### can3.hr_time_stamp[58]
<link=p.CAN3.HR_TIME_STAMP[58]>
#### p.CAN3.HR_TIME_STAMP[63]
<lang=dft>
 (ro)  [1;33m0x401d8d2c[0m (0x401d8000 + 0x0d2c)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.erffel[2]
<link=p.CAN3.ERFFEL[2]>
#### CAN3.ERFFEL[2]
<link=p.CAN3.ERFFEL[2]>
#### p.can3.erffel[4]
<link=p.CAN3.ERFFEL[4]>
#### CAN3.ERFFEL[7]
<link=p.CAN3.ERFFEL[7]>
#### p.CAN3.ERFFEL[12]
<lang=dft>
 (rw)  [1;33m0x401db030[0m (0x401d8000 + 0x3030)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[14]
<link=p.CAN3.ERFFEL[14]>
#### can3.erffel[18]
<link=p.CAN3.ERFFEL[18]>
#### p.can3.erffel[26]
<link=p.CAN3.ERFFEL[26]>
#### can3.erffel[29]
<link=p.CAN3.ERFFEL[29]>
#### CAN3.ERFFEL[42]
<link=p.CAN3.ERFFEL[42]>
#### CAN3.ERFFEL[45]
<link=p.CAN3.ERFFEL[45]>
#### can3.erffel[46]
<link=p.CAN3.ERFFEL[46]>
#### p.CAN3.ERFFEL[58]
<lang=dft>
 (rw)  [1;33m0x401db0e8[0m (0x401d8000 + 0x30e8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[58]
<link=p.CAN3.ERFFEL[58]>
#### can3.erffel[60]
<link=p.CAN3.ERFFEL[60]>
#### CAN3.ERFFEL[63]
<link=p.CAN3.ERFFEL[63]>
#### p.CAN3.ERFFEL[67]
<lang=dft>
 (rw)  [1;33m0x401db10c[0m (0x401d8000 + 0x310c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[67]
<link=p.CAN3.ERFFEL[67]>
#### CAN3.ERFFEL[69]
<link=p.CAN3.ERFFEL[69]>
#### CAN3.ERFFEL[73]
<link=p.CAN3.ERFFEL[73]>
#### can3.erffel[74]
<link=p.CAN3.ERFFEL[74]>
#### p.CAN3.ERFFEL[77]
<lang=dft>
 (rw)  [1;33m0x401db134[0m (0x401d8000 + 0x3134)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[80]
<lang=dft>
 (rw)  [1;33m0x401db140[0m (0x401d8000 + 0x3140)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[87]
<lang=dft>
 (rw)  [1;33m0x401db15c[0m (0x401d8000 + 0x315c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[87]
<link=p.CAN3.ERFFEL[87]>
#### CAN3.ERFFEL[91]
<link=p.CAN3.ERFFEL[91]>
#### p.CAN3.ERFFEL[97]
<lang=dft>
 (rw)  [1;33m0x401db184[0m (0x401d8000 + 0x3184)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[108]
<link=p.CAN3.ERFFEL[108]>
#### CAN3.ERFFEL[108]
<link=p.CAN3.ERFFEL[108]>
#### can3.erffel[112]
<link=p.CAN3.ERFFEL[112]>
#### p.CAN3.ERFFEL[113]
<lang=dft>
 (rw)  [1;33m0x401db1c4[0m (0x401d8000 + 0x31c4)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[117]
<link=p.CAN3.ERFFEL[117]>
#### can3.erffel[123]
<link=p.CAN3.ERFFEL[123]>
#### tmr1.comp11
<link=p.TMR1.COMP11>
#### tmr1.load1
<link=p.TMR1.LOAD1>
#### p.TMR1.LOAD3
<lang=dft>
 (rw)  [1;33m0x401dc066[0m (0x401dc000 + 0x0066)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.TMR1.HOLD2
<lang=dft>
 (rw)  [1;33m0x401dc048[0m (0x401dc000 + 0x0048)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.TMR1.SCTRL0
<lang=dft>
 (rw)  [1;33m0x401dc00e[0m (0x401dc000 + 0x000e)
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
#### tmr1.cmpld13
<link=p.TMR1.CMPLD13>
#### p.tmr1.cmpld21
<link=p.TMR1.CMPLD21>
#### tmr1.cmpld22
<link=p.TMR1.CMPLD22>
#### p.TMR1.CSCTRL0
<lang=dft>
 (rw)  [1;33m0x401dc014[0m (0x401dc000 + 0x0014)
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
#### p.tmr1.filt2
<link=p.TMR1.FILT2>
#### p.tmr1.dma2
<link=p.TMR1.DMA2>
#### p.TMR2.COMP11
<lang=dft>
 (rw)  [1;33m0x401e0020[0m (0x401e0000 + 0x0020)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### p.tmr2.comp13
<link=p.TMR2.COMP13>
#### p.TMR2.COMP20
<lang=dft>
 (rw)  [1;33m0x401e0002[0m (0x401e0000 + 0x0002)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### tmr2.comp20
<link=p.TMR2.COMP20>
#### p.TMR2.LOAD0
<lang=dft>
 (rw)  [1;33m0x401e0006[0m (0x401e0000 + 0x0006)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.TMR2.HOLD1
<lang=dft>
 (rw)  [1;33m0x401e0028[0m (0x401e0000 + 0x0028)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.tmr2.cntr0
<link=p.TMR2.CNTR0>
#### p.TMR2.CNTR3
<lang=dft>
 (rw)  [1;33m0x401e006a[0m (0x401e0000 + 0x006a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### p.TMR2.CTRL2
<lang=dft>
 (rw)  [1;33m0x401e004c[0m (0x401e0000 + 0x004c)
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
#### TMR2.CTRL3
<link=p.TMR2.CTRL3>
#### p.tmr2.sctrl0
<link=p.TMR2.SCTRL0>
#### tmr2.cmpld13
<link=p.TMR2.CMPLD13>
#### TMR2.CMPLD22
<link=p.TMR2.CMPLD22>
#### p.TMR2.CMPLD23
<lang=dft>
 (rw)  [1;33m0x401e0072[0m (0x401e0000 + 0x0072)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### tmr2.csctrl2
<link=p.TMR2.CSCTRL2>
#### tmr2.filt2
<link=p.TMR2.FILT2>
#### p.tmr2.dma3
<link=p.TMR2.DMA3>
#### p.tmr3
<link=p.TMR3>
#### TMR3.COMP23
<link=p.TMR3.COMP23>
#### tmr3.capt2
<link=p.TMR3.CAPT2>
#### TMR3.CAPT2
<link=p.TMR3.CAPT2>
#### p.TMR3.LOAD1
<lang=dft>
 (rw)  [1;33m0x401e4026[0m (0x401e4000 + 0x0026)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### tmr3.load3
<link=p.TMR3.LOAD3>
#### p.TMR3.HOLD1
<lang=dft>
 (rw)  [1;33m0x401e4028[0m (0x401e4000 + 0x0028)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### TMR3.CNTR0
<link=p.TMR3.CNTR0>
#### p.TMR3.CTRL0
<lang=dft>
 (rw)  [1;33m0x401e400c[0m (0x401e4000 + 0x000c)
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
#### p.tmr3.ctrl2
<link=p.TMR3.CTRL2>
#### tmr3.ctrl3
<link=p.TMR3.CTRL3>
#### TMR3.SCTRL2
<link=p.TMR3.SCTRL2>
#### p.tmr3.cmpld10
<link=p.TMR3.CMPLD10>
#### tmr3.cmpld20
<link=p.TMR3.CMPLD20>
#### p.tmr3.csctrl0
<link=p.TMR3.CSCTRL0>
#### tmr3.filt3
<link=p.TMR3.FILT3>
#### tmr3.dma2
<link=p.TMR3.DMA2>
#### p.TMR4.COMP10
<lang=dft>
 (rw)  [1;33m0x401e8000[0m (0x401e8000 + 0x0000)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### p.TMR4.CAPT2
<lang=dft>
 (rw)  [1;33m0x401e8044[0m (0x401e8000 + 0x0044)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### TMR4.LOAD3
<link=p.TMR4.LOAD3>
#### TMR4.HOLD0
<link=p.TMR4.HOLD0>
#### p.tmr4.ctrl1
<link=p.TMR4.CTRL1>
#### p.TMR4.CTRL3
<lang=dft>
 (rw)  [1;33m0x401e806c[0m (0x401e8000 + 0x006c)
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
#### p.tmr4.sctrl3
<link=p.TMR4.SCTRL3>
#### p.tmr4.cmpld20
<link=p.TMR4.CMPLD20>
#### p.TMR4.CMPLD22
<lang=dft>
 (rw)  [1;33m0x401e8052[0m (0x401e8000 + 0x0052)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### p.tmr4.csctrl2
<link=p.TMR4.CSCTRL2>
#### p.tmr4.dma3
<link=p.TMR4.DMA3>
#### tmr4.enbl
<link=p.TMR4.ENBL>
#### gpt1.cr
<link=p.GPT1.CR>
#### p.GPT1.IR
<lang=dft>
 (rw)  [1;33m0x401ec00c[0m (0x401ec000 + 0x000c)
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
#### p.gpt2.cr
<link=p.GPT2.CR>
#### p.GPT2.OCR3
<lang=dft>
 (rw)  [1;33m0x401f0018[0m (0x401f0000 + 0x0018)
GPT Output Compare Register 3
 (rw) (32)  [0;32mCOMP[0m  - [31:00] -  Compare Value
</lang>
#### p.GPT2.ICR1
<lang=dft>
 (ro)  [1;33m0x401f001c[0m (0x401f0000 + 0x001c)
GPT Input Capture Register 1
 (ro) (32)  [0;32mCAPT[0m  - [31:00] -  Capture Value
</lang>
#### p.gpt2.cnt
<link=p.GPT2.CNT>
#### gpt2.cnt
<link=p.GPT2.CNT>
#### p.ocotp.ctrl_tog
<link=p.OCOTP.CTRL_TOG>
#### p.OCOTP.READ_FUSE_DATA
<lang=dft>
 (rw)  [1;33m0x401f4040[0m (0x401f4000 + 0x0040)
OTP Controller Read Data Register
 (rw) (32)  [0;32mDATA[0m  - [31:00] -  DATA
</lang>
#### p.OCOTP.CRC_VALUE
<lang=dft>
 (rw)  [1;33m0x401f4080[0m (0x401f4000 + 0x0080)
OTP Controller CRC Value Register
 (rw) (32)  [0;32mDATA[0m  - [31:00] -  DATA
</lang>
#### p.OCOTP.CFG4
<lang=dft>
 (rw)  [1;33m0x401f4450[0m (0x401f4000 + 0x0450)
Value of OTP Bank0 Word5 (Configuration and Manufacturing Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.cfg4
<link=p.OCOTP.CFG4>
#### p.OCOTP.MEM1
<lang=dft>
 (rw)  [1;33m0x401f4490[0m (0x401f4000 + 0x0490)
Value of OTP Bank1 Word1 (Memory Related Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.MEM1
<link=p.OCOTP.MEM1>
#### p.OCOTP.ANA0
<lang=dft>
 (rw)  [1;33m0x401f44d0[0m (0x401f4000 + 0x04d0)
Value of OTP Bank1 Word5 (Memory Related Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.ana0
<link=p.OCOTP.ANA0>
#### p.ocotp.otpmk0
<link=p.OCOTP.OTPMK0>
#### ocotp.otpmk1
<link=p.OCOTP.OTPMK1>
#### p.OCOTP.OTPMK4
<lang=dft>
 (rw)  [1;33m0x401f4540[0m (0x401f4000 + 0x0540)
Value of OTP Bank2 Word4 (OTPMK Key)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.SRK5
<lang=dft>
 (rw)  [1;33m0x401f45d0[0m (0x401f4000 + 0x05d0)
Shadow Register for OTP Bank3 Word5 (SRK Hash)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.srk5
<link=p.OCOTP.SRK5>
#### ocotp.sjc_resp0
<link=p.OCOTP.SJC_RESP0>
#### p.ocotp.gp1
<link=p.OCOTP.GP1>
#### p.ocotp.sw_gp20
<link=p.OCOTP.SW_GP20>
#### ocotp.sw_gp23
<link=p.OCOTP.SW_GP23>
#### p.ocotp.misc_conf0
<link=p.OCOTP.MISC_CONF0>
#### ocotp.rom_patch2
<link=p.OCOTP.ROM_PATCH2>
#### OCOTP.GP30
<link=p.OCOTP.GP30>
#### p.ocotp.gp33
<link=p.OCOTP.GP33>
#### ocotp.gp33
<link=p.OCOTP.GP33>
#### ocotp.gp43
<link=p.OCOTP.GP43>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_04>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_08
<lang=dft>
 (rw)  [1;33m0x401f8034[0m (0x401f8000 + 0x0034)
SW_MUX_CTL_PAD_GPIO_EMC_08 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DM00 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM2_PWMA01 of instance: flexpwm2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: SAI2_RX_DATA of instance: sai2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT17 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO08 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO08 of instance: gpio4
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_08
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_17
<lang=dft>
 (rw)  [1;33m0x401f8058[0m (0x401f8000 + 0x0058)
SW_MUX_CTL_PAD_GPIO_EMC_17 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR08 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMA03 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART4_CTS_B of instance: lpuart4
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: FLEXCAN1_TX of instance: flexcan1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: QTIMER3_TIMER2 of instance: qtimer3
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO17 of instance: gpio4
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_17
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_17
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_17>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_21
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_21>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_22
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_22>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_31
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_31>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_32
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_32>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_39
<lang=dft>
 (rw)  [1;33m0x401f80b0[0m (0x401f8000 + 0x00b0)
SW_MUX_CTL_PAD_GPIO_EMC_39 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DQS of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMB03 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART8_RX of instance: lpuart8
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI3_TX_SYNC of instance: sai3
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: WDOG1_WDOG_B of instance: wdog1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO25 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_CD_B of instance: usdhc2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_MDIO of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: SEMC_DQS4 of instance: semc
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_39
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_39
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_39>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_40
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_40>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_07
<lang=dft>
 (rw)  [1;33m0x401f80d8[0m (0x401f8000 + 0x00d8)
SW_MUX_CTL_PAD_GPIO_AD_B0_07 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: JTAG_TCK of instance: jtag_mux
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: GPT2_COMPARE2 of instance: gpt2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ENET_TX_ER of instance: enet
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI2_RX_SYNC of instance: sai2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA06 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO07 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: XBAR1_INOUT19 of instance: xbar1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: ENET_1588_EVENT3_OUT of instance: enet
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_07
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_07>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_10>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_14
<lang=dft>
 (rw)  [1;33m0x401f80f4[0m (0x401f8000 + 0x00f4)
SW_MUX_CTL_PAD_GPIO_AD_B0_14 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USB_OTG2_OC of instance: usb
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_IN24 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART1_CTS_B of instance: lpuart1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_1588_EVENT0_OUT of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_VSYNC of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO14 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXCAN2_TX of instance: flexcan2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXCAN3_TX of instance: flexcan3/canfd
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_14
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_03>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_04>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_08
<lang=dft>
 (rw)  [1;33m0x401f811c[0m (0x401f8000 + 0x011c)
SW_MUX_CTL_PAD_GPIO_AD_B1_08 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPIA_SS1_B of instance: flexspi
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMA00 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXCAN1_TX of instance: flexcan1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: CCM_PMIC_READY of instance: ccm
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA09 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO24 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_CMD of instance: usdhc2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_ROW03 of instance: kpp
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO08 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_08
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_13>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_01>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_05>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_11
<lang=dft>
 (rw)  [1;33m0x401f8168[0m (0x401f8000 + 0x0168)
SW_MUX_CTL_PAD_GPIO_B0_11 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA07 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER4_TIMER2 of instance: qtimer4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXPWM2_PWMB02 of instance: flexpwm2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_DATA02 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO11 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO11 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SRC_BOOT_CFG07 of instance: src
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_COL of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_11
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_05
<lang=dft>
 (rw)  [1;33m0x401f8190[0m (0x401f8000 + 0x0190)
SW_MUX_CTL_PAD_GPIO_B1_05 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA17 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: LPSPI4_SDI of instance: lpspi4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_DATA14 of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_RX_DATA01 of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO21 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO21 of instance: gpio2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT1_CAPTURE1 of instance: gpt1
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO21 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_05
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_11>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_12
<lang=dft>
 (rw)  [1;33m0x401f81ac[0m (0x401f8000 + 0x01ac)
SW_MUX_CTL_PAD_GPIO_B1_12 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: LPUART5_TX of instance: lpuart5
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_PIXCLK of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_1588_EVENT0_IN of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO28 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO28 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC1_CD_B of instance: usdhc1
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO28 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_12
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_03>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_05
<lang=dft>
 (rw)  [1;33m0x401f81e8[0m (0x401f8000 + 0x01e8)
SW_MUX_CTL_PAD_GPIO_SD_B1_05 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_CMD of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIA_DQS of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPI2C1_SDA of instance: lpi2c1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_RX_BCLK of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXSPIB_SS0_B of instance: flexspi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO05 of instance: gpio3
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: SAI3_RX_SYNC of instance: sai3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_05
</lang>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_00>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_00>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_03>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_18
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_18>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_24
<lang=dft>
 (rw)  [1;33m0x401f8264[0m (0x401f8000 + 0x0264)
SW_PAD_CTL_PAD_GPIO_EMC_24 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_35
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_35>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_37
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_37>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_38
<lang=dft>
 (rw)  [1;33m0x401f829c[0m (0x401f8000 + 0x029c)
SW_PAD_CTL_PAD_GPIO_EMC_38 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_emc_39
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_39>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_00>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_02>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_05>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_07
<lang=dft>
 (rw)  [1;33m0x401f82c8[0m (0x401f8000 + 0x02c8)
SW_PAD_CTL_PAD_GPIO_AD_B0_07 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_10
<lang=dft>
 (rw)  [1;33m0x401f82d4[0m (0x401f8000 + 0x02d4)
SW_PAD_CTL_PAD_GPIO_AD_B0_10 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_09>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_10
<lang=dft>
 (rw)  [1;33m0x401f8314[0m (0x401f8000 + 0x0314)
SW_PAD_CTL_PAD_GPIO_AD_B1_10 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_15>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_00>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_07>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_10>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_13>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_00>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_13>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_13>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_00>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_04>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_08>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_10>
#### p.iomuxc.csi_data05_select_input
<link=p.IOMUXC.CSI_DATA05_SELECT_INPUT>
#### p.iomuxc.csi_vsync_select_input
<link=p.IOMUXC.CSI_VSYNC_SELECT_INPUT>
#### p.IOMUXC.ENET_MDIO_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8430[0m (0x401f8000 + 0x0430)
ENET_MDIO_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_05_ALT1 :
         Selecting Pad: GPIO_AD_B1_05 for Mode: ALT1
      0x1 - GPIO_EMC_41_ALT4 :
         Selecting Pad: GPIO_EMC_41 for Mode: ALT4
      0x2 - GPIO_B1_15_ALT0 :
         Selecting Pad: GPIO_B1_15 for Mode: ALT0
</lang>
#### p.iomuxc.enet_mdio_select_input
<link=p.IOMUXC.ENET_MDIO_SELECT_INPUT>
#### p.iomuxc.enet0_rxdata_select_input
<link=p.IOMUXC.ENET0_RXDATA_SELECT_INPUT>
#### p.IOMUXC.ENET1_RXDATA_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8438[0m (0x401f8000 + 0x0438)
ENET1_RXDATA_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_19_ALT3 :
         Selecting Pad: GPIO_EMC_19 for Mode: ALT3
      0x1 - GPIO_B1_05_ALT3 :
         Selecting Pad: GPIO_B1_05 for Mode: ALT3
</lang>
#### p.IOMUXC.ENET0_TIMER_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8444[0m (0x401f8000 + 0x0444)
ENET0_TIMER_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_15_ALT3 :
         Selecting Pad: GPIO_AD_B0_15 for Mode: ALT3
      0x1 - GPIO_AD_B0_11_ALT7 :
         Selecting Pad: GPIO_AD_B0_11 for Mode: ALT7
      0x2 - GPIO_B1_12_ALT3 :
         Selecting Pad: GPIO_B1_12 for Mode: ALT3
</lang>
#### p.iomuxc.enet_txclk_select_input
<link=p.IOMUXC.ENET_TXCLK_SELECT_INPUT>
#### p.IOMUXC.FLEXCAN1_RX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f844c[0m (0x401f8000 + 0x044c)
FLEXCAN1_RX_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_03_ALT4 :
         Selecting Pad: GPIO_SD_B1_03 for Mode: ALT4
      0x1 - GPIO_EMC_18_ALT3 :
         Selecting Pad: GPIO_EMC_18 for Mode: ALT3
      0x2 - GPIO_AD_B1_09_ALT2 :
         Selecting Pad: GPIO_AD_B1_09 for Mode: ALT2
      0x3 - GPIO_B0_03_ALT2 :
         Selecting Pad: GPIO_B0_03 for Mode: ALT2
</lang>
#### p.IOMUXC.FLEXPWM1_PWMA2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8460[0m (0x401f8000 + 0x0460)
FLEXPWM1_PWMA2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_27_ALT1 :
         Selecting Pad: GPIO_EMC_27 for Mode: ALT1
      0x1 - GPIO_SD_B0_04_ALT1 :
         Selecting Pad: GPIO_SD_B0_04 for Mode: ALT1
</lang>
#### iomuxc.flexpwm2_pwma1_select_input
<link=p.IOMUXC.FLEXPWM2_PWMA1_SELECT_INPUT>
#### iomuxc.flexpwm2_pwmb0_select_input
<link=p.IOMUXC.FLEXPWM2_PWMB0_SELECT_INPUT>
#### p.IOMUXC.FLEXPWM4_PWMA2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f849c[0m (0x401f8000 + 0x049c)
FLEXPWM4_PWMA2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_04_ALT1 :
         Selecting Pad: GPIO_EMC_04 for Mode: ALT1
      0x1 - GPIO_B1_14_ALT1 :
         Selecting Pad: GPIO_B1_14 for Mode: ALT1
</lang>
#### iomuxc.flexspib_data0_select_input
<link=p.IOMUXC.FLEXSPIB_DATA0_SELECT_INPUT>
#### p.iomuxc.flexspib_data2_select_input
<link=p.IOMUXC.FLEXSPIB_DATA2_SELECT_INPUT>
#### p.IOMUXC.LPI2C3_SCL_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84dc[0m (0x401f8000 + 0x04dc)
LPI2C3_SCL_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_22_ALT2 :
         Selecting Pad: GPIO_EMC_22 for Mode: ALT2
      0x1 - GPIO_SD_B0_00_ALT2 :
         Selecting Pad: GPIO_SD_B0_00 for Mode: ALT2
      0x2 - GPIO_AD_B1_07_ALT1 :
         Selecting Pad: GPIO_AD_B1_07 for Mode: ALT1
</lang>
#### iomuxc.lpi2c3_sda_select_input
<link=p.IOMUXC.LPI2C3_SDA_SELECT_INPUT>
#### p.IOMUXC.LPI2C4_SCL_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84e4[0m (0x401f8000 + 0x04e4)
LPI2C4_SCL_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_12_ALT2 :
         Selecting Pad: GPIO_EMC_12 for Mode: ALT2
      0x1 - GPIO_AD_B0_12_ALT0 :
         Selecting Pad: GPIO_AD_B0_12 for Mode: ALT0
</lang>
#### IOMUXC.LPSPI1_SDO_SELECT_INPUT
<link=p.IOMUXC.LPSPI1_SDO_SELECT_INPUT>
#### p.iomuxc.lpspi4_sck_select_input
<link=p.IOMUXC.LPSPI4_SCK_SELECT_INPUT>
#### iomuxc.lpspi4_sck_select_input
<link=p.IOMUXC.LPSPI4_SCK_SELECT_INPUT>
#### p.IOMUXC.LPUART2_RX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f852c[0m (0x401f8000 + 0x052c)
LPUART2_RX_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_10_ALT2 :
         Selecting Pad: GPIO_SD_B1_10 for Mode: ALT2
      0x1 - GPIO_AD_B1_03_ALT2 :
         Selecting Pad: GPIO_AD_B1_03 for Mode: ALT2
</lang>
#### p.iomuxc.lpuart2_tx_select_input
<link=p.IOMUXC.LPUART2_TX_SELECT_INPUT>
#### p.iomuxc.lpuart4_rx_select_input
<link=p.IOMUXC.LPUART4_RX_SELECT_INPUT>
#### p.IOMUXC.LPUART4_TX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8544[0m (0x401f8000 + 0x0544)
LPUART4_TX_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_00_ALT4 :
         Selecting Pad: GPIO_SD_B1_00 for Mode: ALT4
      0x1 - GPIO_EMC_19_ALT2 :
         Selecting Pad: GPIO_EMC_19 for Mode: ALT2
      0x2 - GPIO_B1_00_ALT2 :
         Selecting Pad: GPIO_B1_00 for Mode: ALT2
</lang>
#### p.iomuxc.lpuart8_tx_select_input
<link=p.IOMUXC.LPUART8_TX_SELECT_INPUT>
#### IOMUXC.QTIMER2_TIMER3_SELECT_INPUT
<link=p.IOMUXC.QTIMER2_TIMER3_SELECT_INPUT>
#### p.iomuxc.qtimer3_timer2_select_input
<link=p.IOMUXC.QTIMER3_TIMER2_SELECT_INPUT>
#### p.iomuxc.sai1_tx_sync_select_input
<link=p.IOMUXC.SAI1_TX_SYNC_SELECT_INPUT>
#### p.iomuxc.sai2_mclk2_select_input
<link=p.IOMUXC.SAI2_MCLK2_SELECT_INPUT>
#### p.iomuxc.sai2_rx_bclk_select_input
<link=p.IOMUXC.SAI2_RX_BCLK_SELECT_INPUT>
#### iomuxc.usb_otg2_oc_select_input
<link=p.IOMUXC.USB_OTG2_OC_SELECT_INPUT>
#### iomuxc.usb_otg1_oc_select_input
<link=p.IOMUXC.USB_OTG1_OC_SELECT_INPUT>
#### p.iomuxc.usdhc2_data7_select_input
<link=p.IOMUXC.USDHC2_DATA7_SELECT_INPUT>
#### IOMUXC.XBAR1_IN18_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN18_SELECT_INPUT>
#### iomuxc.xbar1_in20_select_input
<link=p.IOMUXC.XBAR1_IN20_SELECT_INPUT>
#### p.iomuxc.xbar1_in23_select_input
<link=p.IOMUXC.XBAR1_IN23_SELECT_INPUT>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_04>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_09>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_01
<lang=dft>
 (rw)  [1;33m0x401f8698[0m (0x401f8000 + 0x0698)
SW_MUX_CTL_PAD_GPIO_SPI_B1_01 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_DATA03 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B1_01
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_01>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_03>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_00>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_06
<lang=dft>
 (rw)  [1;33m0x401f86cc[0m (0x401f8000 + 0x06cc)
SW_PAD_CTL_PAD_GPIO_SPI_B0_06 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_06>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_09>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_13>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_01>
#### p.iomuxc.enet2_ipp_ind_mac0_mdio_select_input
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_MDIO_SELECT_INPUT>
#### IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_0
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_0>
#### p.iomuxc.flexspi2_ipp_ind_io_fa_bit3_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT>
#### p.IOMUXC.GPT1_IPP_IND_CAPIN2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f875c[0m (0x401f8000 + 0x075c)
GPT1_IPP_IND_CAPIN2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_23_ALT4 :
         Selecting Pad: GPIO_EMC_23 for Mode: ALT4
      0x1 - GPIO_B1_06_ALT8 :
         Selecting Pad: GPIO_B1_06 for Mode: ALT8
</lang>
#### p.iomuxc.gpt1_ipp_ind_clkin_select_input
<link=p.IOMUXC.GPT1_IPP_IND_CLKIN_SELECT_INPUT>
#### p.IOMUXC.GPT2_IPP_IND_CAPIN2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8768[0m (0x401f8000 + 0x0768)
GPT2_IPP_IND_CAPIN2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_40_ALT1 :
         Selecting Pad: GPIO_EMC_40 for Mode: ALT1
      0x1 - GPIO_AD_B1_04_ALT8 :
         Selecting Pad: GPIO_AD_B1_04 for Mode: ALT8
</lang>
#### iomuxc.sai3_ipp_ind_sai_rxdata_select_input_0
<link=p.IOMUXC.SAI3_IPP_IND_SAI_RXDATA_SELECT_INPUT_0>
#### p.flexspi
<link=p.FLEXSPI>
#### p.flexspi.mcr1
<link=p.FLEXSPI.MCR1>
#### p.FLEXSPI.LUTKEY
<lang=dft>
 (rw)  [1;33m0x402a8018[0m (0x402a8000 + 0x0018)
LUT Key Register
 (rw) (32)  [0;32mKEY[0m  - [31:00] -  The Key to lock or unlock LUT.
</lang>
#### p.FLEXSPI.AHBRXBUF2CR0
<lang=dft>
 (rw)  [1;33m0x402a8028[0m (0x402a8000 + 0x0028)
AHB RX Buffer 2 Control Register 0
 (rw) (08)  [0;32mBUFSZ[0m  - [07:00] -  AHB RX Buffer Size in 64 bits.Refer AHB RX Buffer Management for more details.
 (rw) (04)  [0;32mMSTRID[0m  - [19:16] -  This AHB RX Buffer is assigned according to AHB Master with ID (MSTR_ID). Pleas
 e refer to for AHB RX Buffer allocation.
 (rw) (02)  [0;32mPRIORITY[0m  - [25:24] -  This priority for AHB Master Read which this AHB RX Buffer is assigned. Refer f
 or more details.
 (rw) (01)  [0;32mPREFETCHEN[0m  - [31:31] -  AHB Read Prefetch Enable for current AHB RX Buffer corresponding Master.
</lang>
#### p.flexspi.flsha1cr0
<link=p.FLEXSPI.FLSHA1CR0>
#### FLEXSPI.FLSHB1CR0
<link=p.FLEXSPI.FLSHB1CR0>
#### p.FLEXSPI.FLSHB2CR0
<lang=dft>
 (rw)  [1;33m0x402a806c[0m (0x402a8000 + 0x006c)
Flash B2 Control Register 0
 (rw) (23)  [0;32mFLSHSZ[0m  - [22:00] -  Flash Size in KByte.
</lang>
#### p.FLEXSPI.FLSHCR1B2
<lang=dft>
 (rw)  [1;33m0x402a807c[0m (0x402a8000 + 0x007c)
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
#### flexspi.flshcr2a2
<link=p.FLEXSPI.FLSHCR2A2>
#### FLEXSPI.FLSHCR2A2
<link=p.FLEXSPI.FLSHCR2A2>
#### p.FLEXSPI.IPRXFCR
<lang=dft>
 (rw)  [1;33m0x402a80b8[0m (0x402a8000 + 0x00b8)
IP RX FIFO Control Register
 (rw) (01)  [0;32mCLRIPRXF[0m  - [00:00] -  Clear all valid data entries in IP RX FIFO.
 (rw) (01)  [0;32mRXDMAEN[0m  - [01:01] -  IP RX FIFO reading by DMA enabled.
      0 - RXDMAEN_0 :
         IP RX FIFO would be read by processor.
      0x1 - RXDMAEN_1 :
         IP RX FIFO would be read by DMA.
 (rw) (04)  [0;32mRXWMRK[0m  - [05:02] -  Watermark level is (RXWMRK+1)*64 Bits.
</lang>
#### FLEXSPI.STS0
<link=p.FLEXSPI.STS0>
#### flexspi.iprxfsts
<link=p.FLEXSPI.IPRXFSTS>
#### p.FLEXSPI.RFDR[7]
<lang=dft>
 (ro)  [1;33m0x402a811c[0m (0x402a8000 + 0x011c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI.RFDR[8]
<link=p.FLEXSPI.RFDR[8]>
#### flexspi.rfdr[9]
<link=p.FLEXSPI.RFDR[9]>
#### FLEXSPI.RFDR[10]
<link=p.FLEXSPI.RFDR[10]>
#### FLEXSPI.RFDR[15]
<link=p.FLEXSPI.RFDR[15]>
#### flexspi.rfdr[20]
<link=p.FLEXSPI.RFDR[20]>
#### p.FLEXSPI.RFDR[24]
<lang=dft>
 (ro)  [1;33m0x402a8160[0m (0x402a8000 + 0x0160)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi.rfdr[25]
<link=p.FLEXSPI.RFDR[25]>
#### FLEXSPI.RFDR[28]
<link=p.FLEXSPI.RFDR[28]>
#### p.FLEXSPI.RFDR[30]
<lang=dft>
 (ro)  [1;33m0x402a8178[0m (0x402a8000 + 0x0178)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI.TFDR[0]
<lang=dft>
 (wo)  [1;33m0x402a8180[0m (0x402a8000 + 0x0180)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi.tfdr[0]
<link=p.FLEXSPI.TFDR[0]>
#### FLEXSPI.TFDR[4]
<link=p.FLEXSPI.TFDR[4]>
#### flexspi.tfdr[5]
<link=p.FLEXSPI.TFDR[5]>
#### p.flexspi.tfdr[8]
<link=p.FLEXSPI.TFDR[8]>
#### FLEXSPI.TFDR[13]
<link=p.FLEXSPI.TFDR[13]>
#### FLEXSPI.TFDR[16]
<link=p.FLEXSPI.TFDR[16]>
#### p.flexspi.tfdr[18]
<link=p.FLEXSPI.TFDR[18]>
#### flexspi.tfdr[28]
<link=p.FLEXSPI.TFDR[28]>
#### p.FLEXSPI.LUT[5]
<lang=dft>
 (rw)  [1;33m0x402a8214[0m (0x402a8000 + 0x0214)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[5]
<link=p.FLEXSPI.LUT[5]>
#### FLEXSPI.LUT[8]
<link=p.FLEXSPI.LUT[8]>
#### FLEXSPI.LUT[12]
<link=p.FLEXSPI.LUT[12]>
#### FLEXSPI.LUT[17]
<link=p.FLEXSPI.LUT[17]>
#### FLEXSPI.LUT[23]
<link=p.FLEXSPI.LUT[23]>
#### flexspi.lut[24]
<link=p.FLEXSPI.LUT[24]>
#### p.flexspi.lut[26]
<link=p.FLEXSPI.LUT[26]>
#### p.FLEXSPI.LUT[28]
<lang=dft>
 (rw)  [1;33m0x402a8270[0m (0x402a8000 + 0x0270)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[29]
<link=p.FLEXSPI.LUT[29]>
#### FLEXSPI.LUT[39]
<link=p.FLEXSPI.LUT[39]>
#### p.flexspi.lut[47]
<link=p.FLEXSPI.LUT[47]>
#### p.FLEXSPI.LUT[56]
<lang=dft>
 (rw)  [1;33m0x402a82e0[0m (0x402a8000 + 0x02e0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[57]
<link=p.FLEXSPI.LUT[57]>
#### FLEXSPI.LUT[58]
<link=p.FLEXSPI.LUT[58]>
#### p.FLEXSPI.LUT[63]
<lang=dft>
 (rw)  [1;33m0x402a82fc[0m (0x402a8000 + 0x02fc)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.MCR0
<link=p.FLEXSPI2.MCR0>
#### FLEXSPI2.INTR
<link=p.FLEXSPI2.INTR>
#### p.flexspi2.ahbrxbuf2cr0
<link=p.FLEXSPI2.AHBRXBUF2CR0>
#### FLEXSPI2.FLSHA1CR0
<link=p.FLEXSPI2.FLSHA1CR0>
#### flexspi2.flshcr1a1
<link=p.FLEXSPI2.FLSHCR1A1>
#### p.FLEXSPI2.IPTXFCR
<lang=dft>
 (rw)  [1;33m0x402a40bc[0m (0x402a4000 + 0x00bc)
IP TX FIFO Control Register
 (rw) (01)  [0;32mCLRIPTXF[0m  - [00:00] -  Clear all valid data entries in IP TX FIFO.
 (rw) (01)  [0;32mTXDMAEN[0m  - [01:01] -  IP TX FIFO filling by DMA enabled.
      0 - TXDMAEN_0 :
         IP TX FIFO would be filled by processor.
      0x1 - TXDMAEN_1 :
         IP TX FIFO would be filled by DMA.
 (rw) (04)  [0;32mTXWMRK[0m  - [05:02] -  Watermark level is (TXWMRK+1)*64 Bits.
</lang>
#### p.flexspi2.iprxfsts
<link=p.FLEXSPI2.IPRXFSTS>
#### flexspi2.rfdr[5]
<link=p.FLEXSPI2.RFDR[5]>
#### FLEXSPI2.RFDR[13]
<link=p.FLEXSPI2.RFDR[13]>
#### p.FLEXSPI2.RFDR[15]
<lang=dft>
 (ro)  [1;33m0x402a413c[0m (0x402a4000 + 0x013c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi2.rfdr[21]
<link=p.FLEXSPI2.RFDR[21]>
#### p.FLEXSPI2.RFDR[23]
<lang=dft>
 (ro)  [1;33m0x402a415c[0m (0x402a4000 + 0x015c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi2.tfdr[1]
<link=p.FLEXSPI2.TFDR[1]>
#### flexspi2.tfdr[8]
<link=p.FLEXSPI2.TFDR[8]>
#### p.FLEXSPI2.TFDR[13]
<lang=dft>
 (wo)  [1;33m0x402a41b4[0m (0x402a4000 + 0x01b4)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi2.tfdr[13]
<link=p.FLEXSPI2.TFDR[13]>
#### FLEXSPI2.TFDR[19]
<link=p.FLEXSPI2.TFDR[19]>
#### p.flexspi2.tfdr[20]
<link=p.FLEXSPI2.TFDR[20]>
#### flexspi2.tfdr[22]
<link=p.FLEXSPI2.TFDR[22]>
#### FLEXSPI2.LUT[2]
<link=p.FLEXSPI2.LUT[2]>
#### p.flexspi2.lut[4]
<link=p.FLEXSPI2.LUT[4]>
#### p.FLEXSPI2.LUT[21]
<lang=dft>
 (rw)  [1;33m0x402a4254[0m (0x402a4000 + 0x0254)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[26]
<lang=dft>
 (rw)  [1;33m0x402a4268[0m (0x402a4000 + 0x0268)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi2.lut[31]
<link=p.FLEXSPI2.LUT[31]>
#### p.FLEXSPI2.LUT[32]
<lang=dft>
 (rw)  [1;33m0x402a4280[0m (0x402a4000 + 0x0280)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[35]
<link=p.FLEXSPI2.LUT[35]>
#### FLEXSPI2.LUT[49]
<link=p.FLEXSPI2.LUT[49]>
#### FLEXSPI2.LUT[51]
<link=p.FLEXSPI2.LUT[51]>
#### flexspi2.lut[58]
<link=p.FLEXSPI2.LUT[58]>
#### FLEXSPI2.LUT[60]
<link=p.FLEXSPI2.LUT[60]>
#### flexspi2.lut[62]
<link=p.FLEXSPI2.LUT[62]>
#### p.pxp.stat_set
<link=p.PXP.STAT_SET>
#### p.PXP.OUT_CTRL_SET
<lang=dft>
 (rw)  [1;33m0x402b4024[0m (0x402b4000 + 0x0024)
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
#### p.pxp.out_buf2
<link=p.PXP.OUT_BUF2>
#### p.PXP.OUT_PITCH
<lang=dft>
 (rw)  [1;33m0x402b4050[0m (0x402b4000 + 0x0050)
Output Buffer Pitch
 (rw) (16)  [0;32mPITCH[0m  - [15:00] -  Indicates the number of bytes in memory between two vertically adjacent pixels.
 (ro) (16)  [0;32mRSVD[0m  - [31:16] -  Reserved, always set to zero.
</lang>
#### p.PXP.OUT_LRC
<lang=dft>
 (rw)  [1;33m0x402b4060[0m (0x402b4000 + 0x0060)
Output Surface Lower Right Coordinate
 (rw) (14)  [0;32mY[0m  - [13:00] -  Indicates the number of vertical PIXELS in the output surface (non-rotated)
 (ro) (02)  [0;32mRSVD0[0m  - [15:14] -  Reserved, always set to zero.
 (rw) (14)  [0;32mX[0m  - [29:16] -  Indicates number of horizontal PIXELS in the output surface (non-rotated)
 (ro) (02)  [0;32mRSVD1[0m  - [31:30] -  Reserved, always set to zero.
</lang>
#### pxp.ps_ctrl_set
<link=p.PXP.PS_CTRL_SET>
#### pxp.ps_buf
<link=p.PXP.PS_BUF>
#### PXP.PS_UBUF
<link=p.PXP.PS_UBUF>
#### p.PXP.PS_PITCH
<lang=dft>
 (rw)  [1;33m0x402b40f0[0m (0x402b4000 + 0x00f0)
Processed Surface Pitch
 (rw) (16)  [0;32mPITCH[0m  - [15:00] -  Indicates the number of bytes in memory between two vertically adjacent pixels.
 (ro) (16)  [0;32mRSVD[0m  - [31:16] -  Reserved, always set to zero.
</lang>
#### p.pxp.ps_scale
<link=p.PXP.PS_SCALE>
#### PXP.PS_SCALE
<link=p.PXP.PS_SCALE>
#### p.pxp.as_ctrl
<link=p.PXP.AS_CTRL>
#### PXP.NEXT
<link=p.PXP.NEXT>
#### p.LCDIF.CTRL
<lang=dft>
 (rw)  [1;33m0x402b8000[0m (0x402b8000 + 0x0000)
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
#### lcdif.ctrl_tog
<link=p.LCDIF.CTRL_TOG>
#### p.LCDIF.CTRL1
<lang=dft>
 (rw)  [1;33m0x402b8010[0m (0x402b8000 + 0x0010)
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
#### lcdif.ctrl2_set
<link=p.LCDIF.CTRL2_SET>
#### lcdif.next_buf
<link=p.LCDIF.NEXT_BUF>
#### lcdif.vdctrl2
<link=p.LCDIF.VDCTRL2>
#### lcdif.pigeonctrl2
<link=p.LCDIF.PIGEONCTRL2>
#### LCDIF.PIGEONCTRL2_SET
<link=p.LCDIF.PIGEONCTRL2_SET>
#### lcdif.pigeon_3_1
<link=p.LCDIF.PIGEON_3_1>
#### p.lcdif.pigeon_5_2
<link=p.LCDIF.PIGEON_5_2>
#### p.lcdif.pigeon_7_0
<link=p.LCDIF.PIGEON_7_0>
#### p.LCDIF.PIGEON_8_1
<lang=dft>
 (rw)  [1;33m0x402b8a10[0m (0x402b8000 + 0x0a10)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### p.lcdif.pigeon_8_1
<link=p.LCDIF.PIGEON_8_1>
#### p.LCDIF.PIGEON_11_0
<lang=dft>
 (rw)  [1;33m0x402b8ac0[0m (0x402b8000 + 0x0ac0)
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
#### LCDIF.PIGEON_11_2
<link=p.LCDIF.PIGEON_11_2>
#### LCDIF.LUT1_ADDR
<link=p.LCDIF.LUT1_ADDR>
#### csi.csicr3
<link=p.CSI.CSICR3>
#### p.CSI.CSISTATFIFO
<lang=dft>
 (ro)  [1;33m0x402bc00c[0m (0x402bc000 + 0x000c)
CSI Statistic FIFO Register
 (ro) (32)  [0;32mSTAT[0m  - [31:00] -  Static data from sensor
</lang>
#### p.csi.csistatfifo
<link=p.CSI.CSISTATFIFO>
#### p.CSI.CSIFBUF_PARA
<lang=dft>
 (rw)  [1;33m0x402bc030[0m (0x402bc000 + 0x0030)
CSI Frame Buffer Parameter Register
 (rw) (16)  [0;32mFBUF_STRIDE[0m  - [15:00] -  Frame Buffer Parameter
 (rw) (16)  [0;32mDEINTERLACE_STRIDE[0m  - [31:16] -  DEINTERLACE_STRIDE is only used in the deinterlace mode
</lang>
#### usdhc1.blk_att
<link=p.USDHC1.BLK_ATT>
#### p.USDHC1.CMD_ARG
<lang=dft>
 (rw)  [1;33m0x402c0008[0m (0x402c0000 + 0x0008)
Command Argument
 (rw) (32)  [0;32mCMDARG[0m  - [31:00] -  Command Argument
</lang>
#### USDHC1.INT_STATUS
<link=p.USDHC1.INT_STATUS>
#### usdhc1.autocmd12_err_status
<link=p.USDHC1.AUTOCMD12_ERR_STATUS>
#### usdhc1.wtmk_lvl
<link=p.USDHC1.WTMK_LVL>
#### p.USDHC1.ADMA_SYS_ADDR
<lang=dft>
 (rw)  [1;33m0x402c0058[0m (0x402c0000 + 0x0058)
ADMA System Address
 (rw) (30)  [0;32mADS_ADDR[0m  - [31:02] -  ADMA System Address
</lang>
#### p.USDHC1.CLK_TUNE_CTRL_STATUS
<lang=dft>
 (rw)  [1;33m0x402c0068[0m (0x402c0000 + 0x0068)
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
#### usdhc1.vend_spec
<link=p.USDHC1.VEND_SPEC>
#### p.USDHC1.TUNING_CTRL
<lang=dft>
 (rw)  [1;33m0x402c00cc[0m (0x402c0000 + 0x00cc)
Tuning Control Register
 (rw) (08)  [0;32mTUNING_START_TAP[0m  - [07:00] -  TUNING_START_TAP
 (rw) (08)  [0;32mTUNING_COUNTER[0m  - [15:08] -  TUNING_COUNTER
 (rw) (03)  [0;32mTUNING_STEP[0m  - [18:16] -  TUNING_STEP
 (rw) (03)  [0;32mTUNING_WINDOW[0m  - [22:20] -  TUNING_WINDOW
 (rw) (01)  [0;32mSTD_TUNING_EN[0m  - [24:24] -  STD_TUNING_EN
</lang>
#### p.USDHC2.CMD_RSP0
<lang=dft>
 (ro)  [1;33m0x402c4010[0m (0x402c4000 + 0x0010)
Command Response0
 (ro) (32)  [0;32mCMDRSP0[0m  - [31:00] -  Command Response 0
</lang>
#### p.usdhc2.cmd_rsp3
<link=p.USDHC2.CMD_RSP3>
#### p.USDHC2.HOST_CTRL_CAP
<lang=dft>
 (rw)  [1;33m0x402c4040[0m (0x402c4000 + 0x0040)
Host Controller Capabilities
 (ro) (01)  [0;32mSDR50_SUPPORT[0m  - [00:00] -  SDR50 support
 (ro) (01)  [0;32mSDR104_SUPPORT[0m  - [01:01] -  SDR104 support
 (ro) (01)  [0;32mDDR50_SUPPORT[0m  - [02:02] -  DDR50 support
 (rw) (04)  [0;32mTIME_COUNT_RETUNING[0m  - [11:08] -  Time Counter for Retuning
 (rw) (01)  [0;32mUSE_TUNING_SDR50[0m  - [13:13] -  Use Tuning for SDR50
      0 - USE_TUNING_SDR50_0 :
         SDR does not require tuning
      0x1 - USE_TUNING_SDR50_1 :
         SDR50 requires tuning
 (ro) (02)  [0;32mRETUNING_MODE[0m  - [15:14] -  Retuning Mode
      0 - RETUNING_MODE_0 :
         Mode 1
      0x1 - RETUNING_MODE_1 :
         Mode 2
      0x2 - RETUNING_MODE_2 :
         Mode 3
 (ro) (03)  [0;32mMBL[0m  - [18:16] -  Max Block Length
      0 - MBL_0 :
         512 bytes
      0x1 - MBL_1 :
         1024 bytes
      0x2 - MBL_2 :
         2048 bytes
      0x3 - MBL_3 :
         4096 bytes
 (ro) (01)  [0;32mADMAS[0m  - [20:20] -  ADMA Support
      0 - ADMAS_0 :
         Advanced DMA Not supported
      0x1 - ADMAS_1 :
         Advanced DMA Supported
 (ro) (01)  [0;32mHSS[0m  - [21:21] -  High Speed Support
      0 - HSS_0 :
         High Speed Not Supported
      0x1 - HSS_1 :
         High Speed Supported
 (ro) (01)  [0;32mDMAS[0m  - [22:22] -  DMA Support
      0 - DMAS_0 :
         DMA not supported
      0x1 - DMAS_1 :
         DMA Supported
 (ro) (01)  [0;32mSRS[0m  - [23:23] -  Suspend / Resume Support
      0 - SRS_0 :
         Not supported
      0x1 - SRS_1 :
         Supported
 (ro) (01)  [0;32mVS33[0m  - [24:24] -  Voltage Support 3.3V
      0 - VS33_0 :
         3.3V not supported
      0x1 - VS33_1 :
         3.3V supported
 (ro) (01)  [0;32mVS30[0m  - [25:25] -  Voltage Support 3.0 V
      0 - VS30_0 :
         3.0V not supported
      0x1 - VS30_1 :
         3.0V supported
 (ro) (01)  [0;32mVS18[0m  - [26:26] -  Voltage Support 1.8 V
      0 - VS18_0 :
         1.8V not supported
      0x1 - VS18_1 :
         1.8V supported
</lang>
#### p.enet
<link=p.ENET>
#### p.enet.eimr
<link=p.ENET.EIMR>
#### enet.rcr
<link=p.ENET.RCR>
#### enet.opd
<link=p.ENET.OPD>
#### p.ENET.GALR
<lang=dft>
 (rw)  [1;33m0x402d8124[0m (0x402d8000 + 0x0124)
Descriptor Group Lower Address Register
 (rw) (32)  [0;32mGADDR2[0m  - [31:00] -  Contains the lower 32 bits of the 64-bit hash table used in the address recogni
 tion process for receive frames with a multicast address
</lang>
#### ENET.MRBR
<link=p.ENET.MRBR>
#### p.ENET.RACC
<lang=dft>
 (rw)  [1;33m0x402d81c4[0m (0x402d8000 + 0x01c4)
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
#### enet.ieee_t_lcol
<link=p.ENET.IEEE_T_LCOL>
#### p.enet.rmon_r_mc_pkt
<link=p.ENET.RMON_R_MC_PKT>
#### enet.rmon_r_frag
<link=p.ENET.RMON_R_FRAG>
#### p.enet.rmon_r_resvd_0
<link=p.ENET.RMON_R_RESVD_0>
#### ENET.RMON_R_RESVD_0
<link=p.ENET.RMON_R_RESVD_0>
#### ENET.RMON_R_P65TO127
<link=p.ENET.RMON_R_P65TO127>
#### p.ENET.RMON_R_P128TO255
<lang=dft>
 (ro)  [1;33m0x402d82b0[0m (0x402d8000 + 0x02b0)
Rx 128- to 255-Byte Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of 128- to 255-byte recieve packets
</lang>
#### p.enet.rmon_r_octets
<link=p.ENET.RMON_R_OCTETS>
#### ENET.TCSR0
<link=p.ENET.TCSR0>
#### enet.tcsr3
<link=p.ENET.TCSR3>
#### p.enet2.rcr
<link=p.ENET2.RCR>
#### p.ENET2.PAUR
<lang=dft>
 (rw)  [1;33m0x402d40e8[0m (0x402d4000 + 0x00e8)
Physical Address Upper Register
 (ro) (16)  [0;32mTYPE[0m  - [15:00] -  Type Field In PAUSE Frames
 (rw) (16)  [0;32mPADDR2[0m  - [31:16] -  Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address used f
 or exact match, and the source address field in PAUSE frames
</lang>
#### ENET2.GAUR
<link=p.ENET2.GAUR>
#### p.enet2.rsem
<link=p.ENET2.RSEM>
#### p.ENET2.TACC
<lang=dft>
 (rw)  [1;33m0x402d41c0[0m (0x402d4000 + 0x01c0)
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
#### p.enet2.rmon_t_frag
<link=p.ENET2.RMON_T_FRAG>
#### p.ENET2.RMON_T_JAB
<lang=dft>
 (ro)  [1;33m0x402d4220[0m (0x402d4000 + 0x0220)
Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of transmit packets greater than MAX_FL bytes and bad CRC
</lang>
#### ENET2.RMON_T_JAB
<link=p.ENET2.RMON_T_JAB>
#### enet2.rmon_t_col
<link=p.ENET2.RMON_T_COL>
#### ENET2.RMON_T_COL
<link=p.ENET2.RMON_T_COL>
#### ENET2.IEEE_T_FRAME_OK
<link=p.ENET2.IEEE_T_FRAME_OK>
#### enet2.ieee_t_macerr
<link=p.ENET2.IEEE_T_MACERR>
#### ENET2.IEEE_T_MACERR
<link=p.ENET2.IEEE_T_MACERR>
#### p.enet2.rmon_r_oversize
<link=p.ENET2.RMON_R_OVERSIZE>
#### ENET2.RMON_R_FRAG
<link=p.ENET2.RMON_R_FRAG>
#### ENET2.RMON_R_JAB
<link=p.ENET2.RMON_R_JAB>
#### p.enet2.rmon_r_resvd_0
<link=p.ENET2.RMON_R_RESVD_0>
#### enet2.rmon_r_resvd_0
<link=p.ENET2.RMON_R_RESVD_0>
#### enet2.rmon_r_octets
<link=p.ENET2.RMON_R_OCTETS>
#### enet2.ieee_r_crc
<link=p.ENET2.IEEE_R_CRC>
#### p.enet2.ieee_r_fdxfc
<link=p.ENET2.IEEE_R_FDXFC>
#### ENET2.ATOFF
<link=p.ENET2.ATOFF>
#### ENET2.TGSR
<link=p.ENET2.TGSR>
#### USB1.HWTXBUF
<link=p.USB1.HWTXBUF>
#### USB1.GPTIMER0CTRL
<link=p.USB1.GPTIMER0CTRL>
#### p.USB1.TXFILLTUNING
<lang=dft>
 (rw)  [1;33m0x402e0164[0m (0x402e0000 + 0x0164)
TX FIFO Fill Tuning
 (rw) (08)  [0;32mTXSCHOH[0m  - [07:00] -  Scheduler Overhead
 (rw) (05)  [0;32mTXSCHHEALTH[0m  - [12:08] -  Scheduler Health Counter
 (rw) (06)  [0;32mTXFIFOTHRES[0m  - [21:16] -  FIFO Burst Threshold
</lang>
#### USB1.PORTSC1
<link=p.USB1.PORTSC1>
#### usb1.endptsetupstat
<link=p.USB1.ENDPTSETUPSTAT>
#### p.USB2
<lang=dft>
base: 0x402e0200
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
输入 p.USB2.{reg_name} 以查看寄存器的详细信息
type p.USB2.{reg_name} to check details of registers
</lang>
#### USB2.HWHOST
<link=p.USB2.HWHOST>
#### usb2.sbuscfg
<link=p.USB2.SBUSCFG>
#### p.USB2.HCCPARAMS
<lang=dft>
 (ro)  [1;33m0x402e0308[0m (0x402e0200 + 0x0108)
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
#### USB2.DCCPARAMS
<link=p.USB2.DCCPARAMS>
#### usb2.deviceaddr
<link=p.USB2.DEVICEADDR>
#### p.usb2.endptlistaddr
<link=p.USB2.ENDPTLISTADDR>
#### USB2.ENDPTNAK
<link=p.USB2.ENDPTNAK>
#### usb2.configflag
<link=p.USB2.CONFIGFLAG>
#### usb2.endptprime
<link=p.USB2.ENDPTPRIME>
#### USB2.ENDPTCOMPLETE
<link=p.USB2.ENDPTCOMPLETE>
#### USB2.ENDPTCTRL5
<link=p.USB2.ENDPTCTRL5>
#### USBNC1.USB_OTG1_PHY_CTRL_0
<link=p.USBNC1.USB_OTG1_PHY_CTRL_0>
#### p.usbnc2
<link=p.USBNC2>
#### usbnc2.usb_otg1_ctrl
<link=p.USBNC2.USB_OTG1_CTRL>
#### p.SEMC.MCR
<lang=dft>
 (rw)  [1;33m0x402f0000[0m (0x402f0000 + 0x0000)
Module Control Register
 (rw) (01)  [0;32mSWRST[0m  - [00:00] -  Software Reset
 (rw) (01)  [0;32mMDIS[0m  - [01:01] -  Module Disable
      0 - MDIS_0 :
         Module enabled
      0x1 - MDIS_1 :
         Module disabled.
 (rw) (01)  [0;32mDQSMD[0m  - [02:02] -  DQS (read strobe) mode
      0 - DQSMD_0 :
         Dummy read strobe loopbacked internally
      0x1 - DQSMD_1 :
         Dummy read strobe loopbacked from DQS pad or DLL delay chain. Details i
         nformation at descriptions of DQSSEL bit.
 (rw) (01)  [0;32mWPOL0[0m  - [06:06] -  WAIT/RDY# polarity for NOR/PSRAM
      0 - WPOL0_0 :
         Low active
      0x1 - WPOL0_1 :
         High active
 (rw) (01)  [0;32mWPOL1[0m  - [07:07] -  WAIT/RDY# polarity for NAND
      0 - WPOL1_0 :
         Low active
      0x1 - WPOL1_1 :
         High active
 (rw) (01)  [0;32mDQSSEL[0m  - [10:10] -  Select DQS source when DQSMD and DLLSEL both set.
      0 - DQSSEL_0 :
         SDRAM/NOR/SRAM read clock source is from DQS pad in synchronous mode.
      0x1 - DQSSEL_1 :
         SDRAM/NOR/SRAM read clock source is from DLL delay chain in synchronous
          mode.
 (rw) (01)  [0;32mDLLSEL[0m  - [11:11] -  Select DLL delay chain clock input.
      0 - DLLSEL_0 :
         DLL delay chain clock input is from NAND device's DQS pad. For NAND syn
         chronous mode only.
      0x1 - DLLSEL_1 :
         DLL delay chain clock input is from internal clock. For SDRAM, NOR and 
         SRAM synchronous mode only.
 (rw) (08)  [0;32mCTO[0m  - [23:16] -  Command Execution timeout cycles
 (rw) (05)  [0;32mBTO[0m  - [28:24] -  Bus timeout cycles
      0 - BTO_0 :
         255*1
      0x1 - BTO_1 :
         255*2 - 255*2^30
      0x2 - BTO_2 :
         255*2 - 255*2^30
      0x3 - BTO_3 :
         255*2 - 255*2^30
      0x4 - BTO_4 :
         255*2 - 255*2^30
      0x5 - BTO_5 :
         255*2 - 255*2^30
      0x6 - BTO_6 :
         255*2 - 255*2^30
      0x7 - BTO_7 :
         255*2 - 255*2^30
      0x8 - BTO_8 :
         255*2 - 255*2^30
      0x9 - BTO_9 :
         255*2 - 255*2^30
      0x1F - BTO_31 :
         255*2^31
</lang>
#### p.semc.br5
<link=p.SEMC.BR5>
#### SEMC.BR6
<link=p.SEMC.BR6>
#### p.semc.dllcr
<link=p.SEMC.DLLCR>
#### SEMC.DLLCR
<link=p.SEMC.DLLCR>
#### p.SEMC.SDRAMCR2
<lang=dft>
 (rw)  [1;33m0x402f0048[0m (0x402f0000 + 0x0048)
SDRAM control register 2
 (rw) (08)  [0;32mSRRC[0m  - [07:00] -  Self Refresh Recovery time
 (rw) (08)  [0;32mREF2REF[0m  - [15:08] -  Refresh to Refresh wait time
 (rw) (08)  [0;32mACT2ACT[0m  - [23:16] -  ACT to ACT wait time
 (rw) (08)  [0;32mITO[0m  - [31:24] -  SDRAM Idle timeout
      0 - ITO_0 :
         IDLE timeout period is 256*Prescale period.
      0x1 - ITO_1 :
         IDLE timeout period is ITO*Prescale period.
      0x2 - ITO_2 :
         IDLE timeout period is ITO*Prescale period.
      0x3 - ITO_3 :
         IDLE timeout period is ITO*Prescale period.
      0x4 - ITO_4 :
         IDLE timeout period is ITO*Prescale period.
      0x5 - ITO_5 :
         IDLE timeout period is ITO*Prescale period.
      0x6 - ITO_6 :
         IDLE timeout period is ITO*Prescale period.
      0x7 - ITO_7 :
         IDLE timeout period is ITO*Prescale period.
      0x8 - ITO_8 :
         IDLE timeout period is ITO*Prescale period.
      0x9 - ITO_9 :
         IDLE timeout period is ITO*Prescale period.
</lang>
#### SEMC.NANDCR1
<link=p.SEMC.NANDCR1>
#### p.SEMC.NORCR1
<lang=dft>
 (rw)  [1;33m0x402f0064[0m (0x402f0000 + 0x0064)
NOR control register 1
 (rw) (04)  [0;32mCES[0m  - [03:00] -  CE setup time cycle
 (rw) (04)  [0;32mCEH[0m  - [07:04] -  CE hold min time (CEH+1) cycle
 (rw) (04)  [0;32mAS[0m  - [11:08] -  Address setup time
 (rw) (04)  [0;32mAH[0m  - [15:12] -  Address hold time
 (rw) (04)  [0;32mWEL[0m  - [19:16] -  WE LOW time (WEL+1) cycle
 (rw) (04)  [0;32mWEH[0m  - [23:20] -  WE HIGH time (WEH+1) cycle
 (rw) (04)  [0;32mREL[0m  - [27:24] -  RE LOW time (REL+1) cycle
 (rw) (04)  [0;32mREH[0m  - [31:28] -  RE HIGH time (REH+1) cycle
</lang>
#### p.SEMC.SRAMCR0
<lang=dft>
 (rw)  [1;33m0x402f0070[0m (0x402f0000 + 0x0070)
SRAM control register 0
 (rw) (01)  [0;32mPS[0m  - [00:00] -  Port Size
      0 - PS_0 :
         8bit
      0x1 - PS_1 :
         16bit
 (rw) (01)  [0;32mSYNCEN[0m  - [01:01] -  Select SRAM controller mode.
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
#### p.semc.dbicr0
<link=p.SEMC.DBICR0>
#### p.semc.ipcmd
<link=p.SEMC.IPCMD>
#### SEMC.STS1
<link=p.SEMC.STS1>
#### p.SEMC.STS13
<lang=dft>
 (ro)  [1;33m0x402f00f4[0m (0x402f0000 + 0x00f4)
Status register 13
 (ro) (01)  [0;32mSLVLOCK[0m  - [00:00] -  Sample clock slave delay line locked.
 (ro) (01)  [0;32mREFLOCK[0m  - [01:01] -  Sample clock reference delay line locked.
 (ro) (06)  [0;32mSLVSEL[0m  - [07:02] -  Sample clock slave delay line delay cell number selection .
 (ro) (06)  [0;32mREFSEL[0m  - [13:08] -  Sample clock reference delay line delay cell number selection.
</lang>
#### semc.sts13
<link=p.SEMC.STS13>
#### p.semc.sts15
<link=p.SEMC.STS15>
#### SEMC.STS15
<link=p.SEMC.STS15>
#### DCP.CTRL_CLR
<link=p.DCP.CTRL_CLR>
#### dcp.stat_set
<link=p.DCP.STAT_SET>
#### DCP.STAT_CLR
<link=p.DCP.STAT_CLR>
#### p.dcp.channelctrl_clr
<link=p.DCP.CHANNELCTRL_CLR>
#### p.DCP.CAPABILITY1
<lang=dft>
 (ro)  [1;33m0x402fc040[0m (0x402fc000 + 0x0040)
DCP capability 1 register
 (ro) (16)  [0;32mCIPHER_ALGORITHMS[0m  - [15:00] -  One-hot field indicating which cipher algorithms are available
      0x1 - AES128 :
         AES128
 (ro) (16)  [0;32mHASH_ALGORITHMS[0m  - [31:16] -  One-hot field indicating which hashing features are implemented in the hardware
      0x1 - SHA1 :
         SHA1
      0x2 - CRC32 :
         CRC32
      0x4 - SHA256 :
         SHA256
</lang>
#### dcp.key
<link=p.DCP.KEY>
#### dcp.packet3
<link=p.DCP.PACKET3>
#### p.DCP.CH0STAT_CLR
<lang=dft>
 (rw)  [1;33m0x402fc128[0m (0x402fc000 + 0x0128)
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
#### DCP.CH1STAT_CLR
<link=p.DCP.CH1STAT_CLR>
#### dcp.ch1stat_tog
<link=p.DCP.CH1STAT_TOG>
#### p.DCP.CH1OPTS_CLR
<lang=dft>
 (rw)  [1;33m0x402fc178[0m (0x402fc000 + 0x0178)
DCP channel 1 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### p.dcp.ch3stat
<link=p.DCP.CH3STAT>
#### dcp.dbgdata
<link=p.DCP.DBGDATA>
#### DCP.DBGDATA
<link=p.DCP.DBGDATA>
#### p.SPDIF.SIC
<lang=dft>
 (rw)  [1;33m0x40380010[0m (0x40380000 + 0x0010)
InterruptClear Register
 (wo) (01)  [0;32mLockLoss[0m  - [02:02] -  SPDIF receiver loss of lock
 (wo) (01)  [0;32mRxFIFOResyn[0m  - [03:03] -  Rx FIFO resync
 (wo) (01)  [0;32mRxFIFOUnOv[0m  - [04:04] -  Rx FIFO underrun/overrun
 (wo) (01)  [0;32mUQErr[0m  - [05:05] -  U/Q Channel framing error
 (wo) (01)  [0;32mUQSync[0m  - [06:06] -  U/Q Channel sync found
 (wo) (01)  [0;32mQRxOv[0m  - [07:07] -  Q Channel receive register overrun
 (wo) (01)  [0;32mURxOv[0m  - [09:09] -  U Channel receive register overrun
 (wo) (01)  [0;32mBitErr[0m  - [14:14] -  SPDIF receiver found parity bit error
 (wo) (01)  [0;32mSymErr[0m  - [15:15] -  SPDIF receiver found illegal symbol
 (wo) (01)  [0;32mValNoGood[0m  - [16:16] -  SPDIF validity flag no good
 (wo) (01)  [0;32mCNew[0m  - [17:17] -  SPDIF receive change in value of control channel
 (wo) (01)  [0;32mTxResyn[0m  - [18:18] -  SPDIF Tx FIFO resync
 (wo) (01)  [0;32mTxUnOv[0m  - [19:19] -  SPDIF Tx FIFO under/overrun
 (wo) (01)  [0;32mLock[0m  - [20:20] -  SPDIF receiver's DPLL is locked
</lang>
#### SPDIF.SIC
<link=p.SPDIF.SIC>
#### spdif.sis
<link=p.SPDIF.SIS>
#### SPDIF.SRL
<link=p.SPDIF.SRL>
#### p.SPDIF.STCSCH
<lang=dft>
 (rw)  [1;33m0x40380034[0m (0x40380000 + 0x0034)
SPDIFTxCChannelCons_h Register
 (rw) (24)  [0;32mTxCChannelCons_h[0m  - [23:00] -  SPDIF transmit Cons
</lang>
#### SPDIF.STCSCH
<link=p.SPDIF.STCSCH>
#### spdif.srfm
<link=p.SPDIF.SRFM>
#### p.SAI1
<lang=dft>
base: 0x40384000
PARAM           RCR1            RCR2            RCR3            
RCR4            RCR5            RCSR            RDR[0]          
RDR[1]          RDR[2]          RDR[3]          RFR[0]          
RFR[1]          RFR[2]          RFR[3]          RMR             
TCR1            TCR2            TCR3            TCR4            
TCR5            TCSR            TDR[0]          TDR[1]          
TDR[2]          TDR[3]          TFR[0]          TFR[1]          
TFR[2]          TFR[3]          TMR             VERID           
输入 p.SAI1.{reg_name} 以查看寄存器的详细信息
type p.SAI1.{reg_name} to check details of registers
</lang>
#### p.SAI1.TCSR
<lang=dft>
 (rw)  [1;33m0x40384008[0m (0x40384000 + 0x0008)
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
#### p.SAI1.TCR3
<lang=dft>
 (rw)  [1;33m0x40384014[0m (0x40384000 + 0x0014)
SAI Transmit Configuration 3 Register
 (rw) (05)  [0;32mWDFL[0m  - [04:00] -  Word Flag Configuration
 (rw) (04)  [0;32mTCE[0m  - [19:16] -  Transmit Channel Enable
 (rw) (04)  [0;32mCFR[0m  - [27:24] -  Channel FIFO Reset
</lang>
#### p.sai1.tdr[0]
<link=p.SAI1.TDR[0]>
#### sai1.tfr[1]
<link=p.SAI1.TFR[1]>
#### SAI1.RCSR
<link=p.SAI1.RCSR>
#### p.SAI1.RCR1
<lang=dft>
 (rw)  [1;33m0x4038408c[0m (0x40384000 + 0x008c)
SAI Receive Configuration 1 Register
 (rw) (05)  [0;32mRFW[0m  - [04:00] -  Receive FIFO Watermark
</lang>
#### sai1.rcr4
<link=p.SAI1.RCR4>
#### p.sai1.rcr5
<link=p.SAI1.RCR5>
#### sai1.rdr[1]
<link=p.SAI1.RDR[1]>
#### p.sai1.rfr[0]
<link=p.SAI1.RFR[0]>
#### SAI1.RFR[2]
<link=p.SAI1.RFR[2]>
#### p.SAI1.RFR[3]
<lang=dft>
 (ro)  [1;33m0x403840cc[0m (0x40384000 + 0x00cc)
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
#### SAI1.RMR
<link=p.SAI1.RMR>
#### p.SAI2.TCR2
<lang=dft>
 (rw)  [1;33m0x40388010[0m (0x40388000 + 0x0010)
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
#### p.sai2.tcr3
<link=p.SAI2.TCR3>
#### p.SAI2.TDR[0]
<lang=dft>
 (rw)  [1;33m0x40388020[0m (0x40388000 + 0x0020)
SAI Transmit Data Register
 (rw) (32)  [0;32mTDR[0m  - [31:00] -  Transmit Data Register
</lang>
#### sai2.tdr[0]
<link=p.SAI2.TDR[0]>
#### SAI2.TFR[2]
<link=p.SAI2.TFR[2]>
#### p.sai2.rcsr
<link=p.SAI2.RCSR>
#### SAI2.RFR[3]
<link=p.SAI2.RFR[3]>
#### p.sai3.tcr1
<link=p.SAI3.TCR1>
#### p.SAI3.TCR5
<lang=dft>
 (rw)  [1;33m0x4038c01c[0m (0x4038c000 + 0x001c)
SAI Transmit Configuration 5 Register
 (rw) (05)  [0;32mFBT[0m  - [12:08] -  First Bit Shifted
 (rw) (05)  [0;32mW0W[0m  - [20:16] -  Word 0 Width
 (rw) (05)  [0;32mWNW[0m  - [28:24] -  Word N Width
</lang>
#### p.SAI3.TDR[1]
<lang=dft>
 (rw)  [1;33m0x4038c024[0m (0x4038c000 + 0x0024)
SAI Transmit Data Register
 (rw) (32)  [0;32mTDR[0m  - [31:00] -  Transmit Data Register
</lang>
#### sai3.tdr[2]
<link=p.SAI3.TDR[2]>
#### sai3.tmr
<link=p.SAI3.TMR>
#### sai3.rdr[3]
<link=p.SAI3.RDR[3]>
#### p.sai3.rfr[1]
<link=p.SAI3.RFR[1]>
#### lpspi1.ier
<link=p.LPSPI1.IER>
#### p.lpspi1.der
<link=p.LPSPI1.DER>
#### lpspi1.fsr
<link=p.LPSPI1.FSR>
#### p.LPSPI2.CR
<lang=dft>
 (rw)  [1;33m0x40398010[0m (0x40398000 + 0x0010)
Control Register
 (rw) (01)  [0;32mMEN[0m  - [00:00] -  Module Enable
      0 - MEN_0 :
         Module is disabled
      0x1 - MEN_1 :
         Module is enabled
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Software Reset
      0 - RST_0 :
         Module is not reset
      0x1 - RST_1 :
         Module is reset
 (rw) (01)  [0;32mDOZEN[0m  - [02:02] -  Doze mode enable
      0 - DOZEN_0 :
         Module is enabled in Doze mode
      0x1 - DOZEN_1 :
         Module is disabled in Doze mode
 (rw) (01)  [0;32mDBGEN[0m  - [03:03] -  Debug Enable
      0 - DBGEN_0 :
         Module is disabled in debug mode
      0x1 - DBGEN_1 :
         Module is enabled in debug mode
 (wo) (01)  [0;32mRTF[0m  - [08:08] -  Reset Transmit FIFO
      0 - RTF_0 :
         No effect
      0x1 - RTF_1 :
         Transmit FIFO is reset
 (wo) (01)  [0;32mRRF[0m  - [09:09] -  Reset Receive FIFO
      0 - RRF_0 :
         No effect
      0x1 - RRF_1 :
         Receive FIFO is reset
</lang>
#### p.lpspi2.sr
<link=p.LPSPI2.SR>
#### LPSPI2.DER
<link=p.LPSPI2.DER>
#### LPSPI2.FCR
<link=p.LPSPI2.FCR>
#### lpspi2.rdr
<link=p.LPSPI2.RDR>
#### p.lpspi3.verid
<link=p.LPSPI3.VERID>
#### p.LPSPI3.SR
<lang=dft>
 (rw)  [1;33m0x4039c014[0m (0x4039c000 + 0x0014)
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
#### LPSPI3.IER
<link=p.LPSPI3.IER>
#### LPSPI3.CFGR0
<link=p.LPSPI3.CFGR0>
#### LPSPI3.CCR
<link=p.LPSPI3.CCR>
#### p.lpspi3.tcr
<link=p.LPSPI3.TCR>
#### p.lpspi3.rsr
<link=p.LPSPI3.RSR>
#### LPSPI3.RDR
<link=p.LPSPI3.RDR>
#### p.LPSPI4.CR
<lang=dft>
 (rw)  [1;33m0x403a0010[0m (0x403a0000 + 0x0010)
Control Register
 (rw) (01)  [0;32mMEN[0m  - [00:00] -  Module Enable
      0 - MEN_0 :
         Module is disabled
      0x1 - MEN_1 :
         Module is enabled
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Software Reset
      0 - RST_0 :
         Module is not reset
      0x1 - RST_1 :
         Module is reset
 (rw) (01)  [0;32mDOZEN[0m  - [02:02] -  Doze mode enable
      0 - DOZEN_0 :
         Module is enabled in Doze mode
      0x1 - DOZEN_1 :
         Module is disabled in Doze mode
 (rw) (01)  [0;32mDBGEN[0m  - [03:03] -  Debug Enable
      0 - DBGEN_0 :
         Module is disabled in debug mode
      0x1 - DBGEN_1 :
         Module is enabled in debug mode
 (wo) (01)  [0;32mRTF[0m  - [08:08] -  Reset Transmit FIFO
      0 - RTF_0 :
         No effect
      0x1 - RTF_1 :
         Transmit FIFO is reset
 (wo) (01)  [0;32mRRF[0m  - [09:09] -  Reset Receive FIFO
      0 - RRF_0 :
         No effect
      0x1 - RRF_1 :
         Receive FIFO is reset
</lang>
#### p.lpspi4.sr
<link=p.LPSPI4.SR>
#### LPSPI4.DMR0
<link=p.LPSPI4.DMR0>
#### p.lpspi4.dmr1
<link=p.LPSPI4.DMR1>
#### p.ADC_ETC.DONE2_ERR_IRQ
<lang=dft>
 (rw)  [1;33m0x403b0008[0m (0x403b0000 + 0x0008)
ETC DONE_2 and DONE_ERR IRQ State Register
 (rw) (01)  [0;32mTRIG0_DONE2[0m  - [00:00] -  TRIG0 done2 interrupt detection
 (rw) (01)  [0;32mTRIG1_DONE2[0m  - [01:01] -  TRIG1 done2 interrupt detection
 (rw) (01)  [0;32mTRIG2_DONE2[0m  - [02:02] -  TRIG2 done2 interrupt detection
 (rw) (01)  [0;32mTRIG3_DONE2[0m  - [03:03] -  TRIG3 done2 interrupt detection
 (rw) (01)  [0;32mTRIG4_DONE2[0m  - [04:04] -  TRIG4 done2 interrupt detection
 (rw) (01)  [0;32mTRIG5_DONE2[0m  - [05:05] -  TRIG5 done2 interrupt detection
 (rw) (01)  [0;32mTRIG6_DONE2[0m  - [06:06] -  TRIG6 done2 interrupt detection
 (rw) (01)  [0;32mTRIG7_DONE2[0m  - [07:07] -  TRIG7 done2 interrupt detection
 (rw) (01)  [0;32mTRIG0_ERR[0m  - [16:16] -  TRIG0 error interrupt detection
 (rw) (01)  [0;32mTRIG1_ERR[0m  - [17:17] -  TRIG1 error interrupt detection
 (rw) (01)  [0;32mTRIG2_ERR[0m  - [18:18] -  TRIG2 error interrupt detection
 (rw) (01)  [0;32mTRIG3_ERR[0m  - [19:19] -  TRIG3 error interrupt detection
 (rw) (01)  [0;32mTRIG4_ERR[0m  - [20:20] -  TRIG4 error interrupt detection
 (rw) (01)  [0;32mTRIG5_ERR[0m  - [21:21] -  TRIG5 error interrupt detection
 (rw) (01)  [0;32mTRIG6_ERR[0m  - [22:22] -  TRIG6 error interrupt detection
 (rw) (01)  [0;32mTRIG7_ERR[0m  - [23:23] -  TRIG7 error interrupt detection
</lang>
#### ADC_ETC.TRIG1_COUNTER
<link=p.ADC_ETC.TRIG1_COUNTER>
#### ADC_ETC.TRIG1_CHAIN_3_2
<link=p.ADC_ETC.TRIG1_CHAIN_3_2>
#### ADC_ETC.TRIG1_RESULT_1_0
<link=p.ADC_ETC.TRIG1_RESULT_1_0>
#### ADC_ETC.TRIG2_RESULT_1_0
<link=p.ADC_ETC.TRIG2_RESULT_1_0>
#### ADC_ETC.TRIG2_RESULT_3_2
<link=p.ADC_ETC.TRIG2_RESULT_3_2>
#### p.adc_etc.trig3_chain_1_0
<link=p.ADC_ETC.TRIG3_CHAIN_1_0>
#### adc_etc.trig3_result_1_0
<link=p.ADC_ETC.TRIG3_RESULT_1_0>
#### adc_etc.trig3_result_3_2
<link=p.ADC_ETC.TRIG3_RESULT_3_2>
#### p.adc_etc.trig4_result_3_2
<link=p.ADC_ETC.TRIG4_RESULT_3_2>
#### p.ADC_ETC.TRIG5_CHAIN_1_0
<lang=dft>
 (rw)  [1;33m0x403b00e0[0m (0x403b0000 + 0x00e0)
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
#### adc_etc.trig6_ctrl
<link=p.ADC_ETC.TRIG6_CTRL>
#### p.ADC_ETC.TRIG6_COUNTER
<lang=dft>
 (rw)  [1;33m0x403b0104[0m (0x403b0000 + 0x0104)
ETC_TRIG6 Counter Register
 (rw) (16)  [0;32mINIT_DELAY[0m  - [15:00] -  TRIGGER initial delay counter
 (rw) (16)  [0;32mSAMPLE_INTERVAL[0m  - [31:16] -  TRIGGER sampling interval counter
</lang>
#### p.adc_etc.trig6_counter
<link=p.ADC_ETC.TRIG6_COUNTER>
#### adc_etc.trig6_chain_5_4
<link=p.ADC_ETC.TRIG6_CHAIN_5_4>
#### adc_etc.trig6_chain_7_6
<link=p.ADC_ETC.TRIG6_CHAIN_7_6>
#### ADC_ETC.TRIG7_CHAIN_1_0
<link=p.ADC_ETC.TRIG7_CHAIN_1_0>
#### ADC_ETC.TRIG7_CHAIN_7_6
<link=p.ADC_ETC.TRIG7_CHAIN_7_6>
#### ADC_ETC.TRIG7_RESULT_1_0
<link=p.ADC_ETC.TRIG7_RESULT_1_0>
#### ADC_ETC.TRIG7_RESULT_3_2
<link=p.ADC_ETC.TRIG7_RESULT_3_2>
#### p.adc_etc.trig7_result_7_6
<link=p.ADC_ETC.TRIG7_RESULT_7_6>
#### p.aoi1.bfcrt011
<link=p.AOI1.BFCRT011>
#### AOI1.BFCRT231
<link=p.AOI1.BFCRT231>
#### p.AOI2.BFCRT013
<lang=dft>
 (rw)  [1;33m0x403b800c[0m (0x403b8000 + 0x000c)
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
#### aoi2.bfcrt230
<link=p.AOI2.BFCRT230>
#### p.aoi2.bfcrt233
<link=p.AOI2.BFCRT233>
#### p.XBARA1.SEL6
<lang=dft>
 (rw)  [1;33m0x403bc00c[0m (0x403bc000 + 0x000c)
Crossbar A Select Register 6
 (rw) (07)  [0;32mSEL12[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT12 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL13[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT13 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel7
<link=p.XBARA1.SEL7>
#### xbara1.sel7
<link=p.XBARA1.SEL7>
#### xbara1.sel19
<link=p.XBARA1.SEL19>
#### XBARA1.SEL38
<link=p.XBARA1.SEL38>
#### p.xbara1.sel44
<link=p.XBARA1.SEL44>
#### p.XBARA1.SEL45
<lang=dft>
 (rw)  [1;33m0x403bc05a[0m (0x403bc000 + 0x005a)
Crossbar A Select Register 45
 (rw) (07)  [0;32mSEL90[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT90 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL91[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT91 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL45
<link=p.XBARA1.SEL45>
#### xbara1.sel46
<link=p.XBARA1.SEL46>
#### xbara1.sel55
<link=p.XBARA1.SEL55>
#### p.XBARA1.SEL56
<lang=dft>
 (rw)  [1;33m0x403bc070[0m (0x403bc000 + 0x0070)
Crossbar A Select Register 56
 (rw) (07)  [0;32mSEL112[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT112 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL113[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT113 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### p.xbara1.sel57
<link=p.XBARA1.SEL57>
#### xbara1.sel60
<link=p.XBARA1.SEL60>
#### p.xbara1.sel62
<link=p.XBARA1.SEL62>
#### p.XBARA1.SEL63
<lang=dft>
 (rw)  [1;33m0x403bc07e[0m (0x403bc000 + 0x007e)
Crossbar A Select Register 63
 (rw) (07)  [0;32mSEL126[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT126 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL127[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT127 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### XBARA1.SEL63
<link=p.XBARA1.SEL63>
#### XBARB2.SEL0
<link=p.XBARB2.SEL0>
#### p.XBARB2.SEL7
<lang=dft>
 (rw)  [1;33m0x403c000e[0m (0x403c0000 + 0x000e)
Crossbar B Select Register 7
 (rw) (06)  [0;32mSEL14[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT14 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (06)  [0;32mSEL15[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT15 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.XBARB3.SEL7
<lang=dft>
 (rw)  [1;33m0x403c400e[0m (0x403c4000 + 0x000e)
Crossbar B Select Register 7
 (rw) (06)  [0;32mSEL14[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT14 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (06)  [0;32mSEL15[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT15 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbarb3.sel7
<link=p.XBARB3.SEL7>
#### enc1.lposh
<link=p.ENC1.LPOSH>
#### ENC1.CTRL2
<link=p.ENC1.CTRL2>
#### p.ENC2.FILT
<lang=dft>
 (rw)  [1;33m0x403cc002[0m (0x403cc000 + 0x0002)
Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### enc2.upos
<link=p.ENC2.UPOS>
#### ENC2.UINIT
<link=p.ENC2.UINIT>
#### p.enc2.ctrl2
<link=p.ENC2.CTRL2>
#### p.ENC2.UMOD
<lang=dft>
 (rw)  [1;33m0x403cc020[0m (0x403cc000 + 0x0020)
Upper Modulus Register
 (rw) (16)  [0;32mMOD[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the modu
 lus register
</lang>
#### enc2.lmod
<link=p.ENC2.LMOD>
#### enc2.ucomp
<link=p.ENC2.UCOMP>
#### p.enc3.rev
<link=p.ENC3.REV>
#### enc3.rev
<link=p.ENC3.REV>
#### p.ENC3.UPOSH
<lang=dft>
 (ro)  [1;33m0x403d0012[0m (0x403d0000 + 0x0012)
Upper Position Hold Register
 (ro) (16)  [0;32mPOSH[0m  - [15:00] -  This read-only register contains a snapshot of the UPOS register.
</lang>
#### p.enc3.lposh
<link=p.ENC3.LPOSH>
#### p.enc3.uinit
<link=p.ENC3.UINIT>
#### ENC4.FILT
<link=p.ENC4.FILT>
#### enc4.posdh
<link=p.ENC4.POSDH>
#### p.enc4.tst
<link=p.ENC4.TST>
#### p.pwm1.sm0cnt
<link=p.PWM1.SM0CNT>
#### p.pwm1.sm0val0
<link=p.PWM1.SM0VAL0>
#### p.pwm1.sm0octrl
<link=p.PWM1.SM0OCTRL>
#### pwm1.sm0dtcnt0
<link=p.PWM1.SM0DTCNT0>
#### pwm1.sm0cval2
<link=p.PWM1.SM0CVAL2>
#### p.pwm1.sm0cval4cyc
<link=p.PWM1.SM0CVAL4CYC>
#### PWM1.SM1CTRL
<link=p.PWM1.SM1CTRL>
#### pwm1.sm1fracval1
<link=p.PWM1.SM1FRACVAL1>
#### p.pwm1.sm1val1
<link=p.PWM1.SM1VAL1>
#### pwm1.sm1tctrl
<link=p.PWM1.SM1TCTRL>
#### p.PWM1.SM1DISMAP1
<lang=dft>
 (rw)  [1;33m0x403dc08e[0m (0x403dc000 + 0x008e)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### pwm1.sm1dtcnt0
<link=p.PWM1.SM1DTCNT0>
#### p.PWM1.SM1CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403dc094[0m (0x403dc000 + 0x0094)
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
#### pwm1.sm1cval4
<link=p.PWM1.SM1CVAL4>
#### PWM1.SM1CVAL5CYC
<link=p.PWM1.SM1CVAL5CYC>
#### p.PWM1.SM2CNT
<lang=dft>
 (ro)  [1;33m0x403dc0c0[0m (0x403dc000 + 0x00c0)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### p.PWM1.SM2VAL4
<lang=dft>
 (rw)  [1;33m0x403dc0da[0m (0x403dc000 + 0x00da)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### p.PWM1.SM2FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403dc0dc[0m (0x403dc000 + 0x00dc)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### pwm1.sm2val5
<link=p.PWM1.SM2VAL5>
#### p.PWM1.SM2FRCTRL
<lang=dft>
 (rw)  [1;33m0x403dc0e0[0m (0x403dc000 + 0x00e0)
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
#### p.pwm1.sm2dtcnt0
<link=p.PWM1.SM2DTCNT0>
#### pwm1.sm2captctrla
<link=p.PWM1.SM2CAPTCTRLA>
#### PWM1.SM2CAPTCOMPA
<link=p.PWM1.SM2CAPTCOMPA>
#### p.pwm1.sm2captcompx
<link=p.PWM1.SM2CAPTCOMPX>
#### p.PWM1.SM2CVAL1
<lang=dft>
 (ro)  [1;33m0x403dc104[0m (0x403dc000 + 0x0104)
Capture Value 1 Register
 (ro) (16)  [0;32mCAPTVAL1[0m  - [15:00] -  CAPTVAL1
</lang>
#### pwm1.sm2cval2cyc
<link=p.PWM1.SM2CVAL2CYC>
#### pwm1.sm2cval3cyc
<link=p.PWM1.SM2CVAL3CYC>
#### pwm1.sm3ctrl2
<link=p.PWM1.SM3CTRL2>
#### p.pwm1.sm3ctrl
<link=p.PWM1.SM3CTRL>
#### pwm1.sm3fracval3
<link=p.PWM1.SM3FRACVAL3>
#### PWM1.SM3FRACVAL3
<link=p.PWM1.SM3FRACVAL3>
#### p.PWM1.SM3VAL4
<lang=dft>
 (rw)  [1;33m0x403dc13a[0m (0x403dc000 + 0x013a)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### pwm1.sm3val4
<link=p.PWM1.SM3VAL4>
#### p.PWM1.SM3OCTRL
<lang=dft>
 (rw)  [1;33m0x403dc142[0m (0x403dc000 + 0x0142)
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
#### p.pwm1.sm3dtcnt1
<link=p.PWM1.SM3DTCNT1>
#### p.PWM1.SM3CVAL2
<lang=dft>
 (ro)  [1;33m0x403dc168[0m (0x403dc000 + 0x0168)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### p.PWM1.SM3CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403dc16e[0m (0x403dc000 + 0x016e)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### PWM1.SM3CVAL4CYC
<link=p.PWM1.SM3CVAL4CYC>
#### PWM1.SM3CVAL5
<link=p.PWM1.SM3CVAL5>
#### pwm1.swcout
<link=p.PWM1.SWCOUT>
#### PWM1.DTSRCSEL
<link=p.PWM1.DTSRCSEL>
#### p.pwm1.mctrl
<link=p.PWM1.MCTRL>
#### PWM2.SM0CTRL
<link=p.PWM2.SM0CTRL>
#### PWM2.SM0FRACVAL2
<link=p.PWM2.SM0FRACVAL2>
#### pwm2.sm0val3
<link=p.PWM2.SM0VAL3>
#### p.PWM2.SM0VAL4
<lang=dft>
 (rw)  [1;33m0x403e001a[0m (0x403e0000 + 0x001a)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### p.PWM2.SM0OCTRL
<lang=dft>
 (rw)  [1;33m0x403e0022[0m (0x403e0000 + 0x0022)
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
#### pwm2.sm0captcompb
<link=p.PWM2.SM0CAPTCOMPB>
#### pwm2.sm0cval1cyc
<link=p.PWM2.SM0CVAL1CYC>
#### p.PWM2.SM0CVAL2
<lang=dft>
 (ro)  [1;33m0x403e0048[0m (0x403e0000 + 0x0048)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### p.PWM2.SM0CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e004e[0m (0x403e0000 + 0x004e)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### PWM2.SM0CVAL4
<link=p.PWM2.SM0CVAL4>
#### p.pwm2.sm0cval5cyc
<link=p.PWM2.SM0CVAL5CYC>
#### p.PWM2.SM1CNT
<lang=dft>
 (ro)  [1;33m0x403e0060[0m (0x403e0000 + 0x0060)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### pwm2.sm1fracval2
<link=p.PWM2.SM1FRACVAL2>
#### pwm2.sm1val2
<link=p.PWM2.SM1VAL2>
#### p.PWM2.SM1VAL4
<lang=dft>
 (rw)  [1;33m0x403e007a[0m (0x403e0000 + 0x007a)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### p.PWM2.SM1FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e007c[0m (0x403e0000 + 0x007c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### p.PWM2.SM1FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e0080[0m (0x403e0000 + 0x0080)
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
#### p.pwm2.sm1cval0cyc
<link=p.PWM2.SM1CVAL0CYC>
#### p.PWM2.SM1CVAL1
<lang=dft>
 (ro)  [1;33m0x403e00a4[0m (0x403e0000 + 0x00a4)
Capture Value 1 Register
 (ro) (16)  [0;32mCAPTVAL1[0m  - [15:00] -  CAPTVAL1
</lang>
#### PWM2.SM2FRACVAL1
<link=p.PWM2.SM2FRACVAL1>
#### p.pwm2.sm2fracval5
<link=p.PWM2.SM2FRACVAL5>
#### pwm2.sm2fracval5
<link=p.PWM2.SM2FRACVAL5>
#### PWM2.SM2OCTRL
<link=p.PWM2.SM2OCTRL>
#### p.pwm2.sm2sts
<link=p.PWM2.SM2STS>
#### p.pwm2.sm2inten
<link=p.PWM2.SM2INTEN>
#### p.PWM2.SM2DISMAP1
<lang=dft>
 (rw)  [1;33m0x403e00ee[0m (0x403e0000 + 0x00ee)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### p.PWM2.SM2CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e00f4[0m (0x403e0000 + 0x00f4)
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
#### PWM2.SM2CAPTCOMPA
<link=p.PWM2.SM2CAPTCOMPA>
#### p.pwm2.sm2cval0
<link=p.PWM2.SM2CVAL0>
#### pwm2.sm2cval0
<link=p.PWM2.SM2CVAL0>
#### PWM2.SM2CVAL2CYC
<link=p.PWM2.SM2CVAL2CYC>
#### p.pwm2.sm2cval3cyc
<link=p.PWM2.SM2CVAL3CYC>
#### p.pwm2.sm2cval4cyc
<link=p.PWM2.SM2CVAL4CYC>
#### pwm2.sm3cnt
<link=p.PWM2.SM3CNT>
#### pwm2.sm3ctrl
<link=p.PWM2.SM3CTRL>
#### PWM2.SM3FRACVAL4
<link=p.PWM2.SM3FRACVAL4>
#### PWM2.SM3VAL4
<link=p.PWM2.SM3VAL4>
#### p.pwm2.sm3inten
<link=p.PWM2.SM3INTEN>
#### p.pwm2.sm3captctrlx
<link=p.PWM2.SM3CAPTCTRLX>
#### pwm2.sm3cval0cyc
<link=p.PWM2.SM3CVAL0CYC>
#### pwm2.sm3cval1cyc
<link=p.PWM2.SM3CVAL1CYC>
#### p.pwm2.sm3cval2
<link=p.PWM2.SM3CVAL2>
#### p.PWM3.SM0CNT
<lang=dft>
 (ro)  [1;33m0x403e4000[0m (0x403e4000 + 0x0000)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### p.PWM3.SM0VAL4
<lang=dft>
 (rw)  [1;33m0x403e401a[0m (0x403e4000 + 0x001a)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### p.PWM3.SM0FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e401c[0m (0x403e4000 + 0x001c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### p.PWM3.SM0FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e4020[0m (0x403e4000 + 0x0020)
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
#### pwm3.sm0sts
<link=p.PWM3.SM0STS>
#### p.pwm3.sm0dtcnt0
<link=p.PWM3.SM0DTCNT0>
#### p.pwm3.sm0captcompx
<link=p.PWM3.SM0CAPTCOMPX>
#### p.PWM3.SM0CVAL1
<lang=dft>
 (ro)  [1;33m0x403e4044[0m (0x403e4000 + 0x0044)
Capture Value 1 Register
 (ro) (16)  [0;32mCAPTVAL1[0m  - [15:00] -  CAPTVAL1
</lang>
#### p.pwm3.sm1ctrl
<link=p.PWM3.SM1CTRL>
#### PWM3.SM1CTRL
<link=p.PWM3.SM1CTRL>
#### pwm3.sm1fracval2
<link=p.PWM3.SM1FRACVAL2>
#### PWM3.SM1FRACVAL2
<link=p.PWM3.SM1FRACVAL2>
#### p.PWM3.SM1VAL4
<lang=dft>
 (rw)  [1;33m0x403e407a[0m (0x403e4000 + 0x007a)
Value Register 4
 (rw) (16)  [0;32mVAL4[0m  - [15:00] -  Value Register 4
</lang>
#### p.PWM3.SM1OCTRL
<lang=dft>
 (rw)  [1;33m0x403e4082[0m (0x403e4000 + 0x0082)
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
#### p.pwm3.sm1dtcnt1
<link=p.PWM3.SM1DTCNT1>
#### pwm3.sm1dtcnt1
<link=p.PWM3.SM1DTCNT1>
#### p.PWM3.SM1CVAL2
<lang=dft>
 (ro)  [1;33m0x403e40a8[0m (0x403e4000 + 0x00a8)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### p.PWM3.SM1CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e40ae[0m (0x403e4000 + 0x00ae)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### PWM3.SM1CVAL4
<link=p.PWM3.SM1CVAL4>
#### p.pwm3.sm2cnt
<link=p.PWM3.SM2CNT>
#### pwm3.sm2ctrl2
<link=p.PWM3.SM2CTRL2>
#### p.pwm3.sm2val0
<link=p.PWM3.SM2VAL0>
#### PWM3.SM2FRACVAL4
<link=p.PWM3.SM2FRACVAL4>
#### PWM3.SM2VAL4
<link=p.PWM3.SM2VAL4>
#### p.pwm3.sm2octrl
<link=p.PWM3.SM2OCTRL>
#### pwm3.sm2dtcnt1
<link=p.PWM3.SM2DTCNT1>
#### pwm3.sm2cval3
<link=p.PWM3.SM2CVAL3>
#### p.pwm3.sm2cval4cyc
<link=p.PWM3.SM2CVAL4CYC>
#### PWM3.SM3FRACVAL1
<link=p.PWM3.SM3FRACVAL1>
#### p.pwm3.sm3val1
<link=p.PWM3.SM3VAL1>
#### PWM3.SM3OCTRL
<link=p.PWM3.SM3OCTRL>
#### p.PWM3.SM3DISMAP1
<lang=dft>
 (rw)  [1;33m0x403e414e[0m (0x403e4000 + 0x014e)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### p.PWM3.SM3CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e4154[0m (0x403e4000 + 0x0154)
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
#### PWM3.SM3CAPTCOMPA
<link=p.PWM3.SM3CAPTCOMPA>
#### PWM3.SM3CVAL2CYC
<link=p.PWM3.SM3CVAL2CYC>
#### pwm3.sm3cval3
<link=p.PWM3.SM3CVAL3>
#### p.PWM3.OUTEN
<lang=dft>
 (rw)  [1;33m0x403e4180[0m (0x403e4000 + 0x0180)
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
#### p.pwm3.swcout
<link=p.PWM3.SWCOUT>
#### p.PWM3.FCTRL20
<lang=dft>
 (rw)  [1;33m0x403e4194[0m (0x403e4000 + 0x0194)
Fault Control 2 Register
 (rw) (04)  [0;32mNOCOMB[0m  - [03:00] -  No Combinational Path From Fault Input To PWM Output
      0 - NOCOMB_0 :
         There is a combinational link from the fault inputs to the PWM outputs.
          The fault inputs are combined with the filtered and latched fault sign
         als to disable the PWM outputs.
      0x1 - NOCOMB_1 :
         The direct combinational path from the fault inputs to the PWM outputs 
         is disabled and the filtered and latched fault signals are used to disa
         ble the PWM outputs.
</lang>
#### PWM4.SM0CTRL2
<link=p.PWM4.SM0CTRL2>
#### p.pwm4.sm0fracval1
<link=p.PWM4.SM0FRACVAL1>
#### p.pwm4.sm0val1
<link=p.PWM4.SM0VAL1>
#### PWM4.SM0VAL2
<link=p.PWM4.SM0VAL2>
#### PWM4.SM0FRACVAL4
<link=p.PWM4.SM0FRACVAL4>
#### p.pwm4.sm0octrl
<link=p.PWM4.SM0OCTRL>
#### p.PWM4.SM0STS
<lang=dft>
 (rw)  [1;33m0x403e8024[0m (0x403e8000 + 0x0024)
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
#### p.PWM4.SM0CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e8038[0m (0x403e8000 + 0x0038)
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
#### p.pwm4.sm0captctrlx
<link=p.PWM4.SM0CAPTCTRLX>
#### p.PWM4.SM0CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e804e[0m (0x403e8000 + 0x004e)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### PWM4.SM1INIT
<link=p.PWM4.SM1INIT>
#### p.pwm4.sm1val0
<link=p.PWM4.SM1VAL0>
#### PWM4.SM1VAL0
<link=p.PWM4.SM1VAL0>
#### PWM4.SM1FRACVAL1
<link=p.PWM4.SM1FRACVAL1>
#### p.PWM4.SM1FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e8070[0m (0x403e8000 + 0x0070)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### pwm4.sm1fracval5
<link=p.PWM4.SM1FRACVAL5>
#### p.PWM4.SM1DMAEN
<lang=dft>
 (rw)  [1;33m0x403e8088[0m (0x403e8000 + 0x0088)
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
#### p.PWM4.SM1CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e8094[0m (0x403e8000 + 0x0094)
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
#### PWM4.SM1CAPTCTRLX
<link=p.PWM4.SM1CAPTCTRLX>
#### pwm4.sm1cval3
<link=p.PWM4.SM1CVAL3>
#### p.PWM4.SM1CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403e80b2[0m (0x403e8000 + 0x00b2)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### p.PWM4.SM1CVAL5
<lang=dft>
 (ro)  [1;33m0x403e80b4[0m (0x403e8000 + 0x00b4)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### pwm4.sm2fracval2
<link=p.PWM4.SM2FRACVAL2>
#### p.pwm4.sm2fracval3
<link=p.PWM4.SM2FRACVAL3>
#### PWM4.SM2FRACVAL5
<link=p.PWM4.SM2FRACVAL5>
#### p.pwm4.sm2sts
<link=p.PWM4.SM2STS>
#### p.pwm4.sm2dismap0
<link=p.PWM4.SM2DISMAP0>
#### p.pwm4.sm2dtcnt0
<link=p.PWM4.SM2DTCNT0>
#### p.pwm4.sm2cval2
<link=p.PWM4.SM2CVAL2>
#### pwm4.sm2cval5
<link=p.PWM4.SM2CVAL5>
#### p.PWM4.SM3FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403e812c[0m (0x403e8000 + 0x012c)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### p.PWM4.SM3VAL1
<lang=dft>
 (rw)  [1;33m0x403e812e[0m (0x403e8000 + 0x012e)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### p.PWM4.SM3OCTRL
<lang=dft>
 (rw)  [1;33m0x403e8142[0m (0x403e8000 + 0x0142)
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
#### p.pwm4.sm3dtcnt0
<link=p.PWM4.SM3DTCNT0>
#### pwm4.sm3captctrla
<link=p.PWM4.SM3CAPTCTRLA>
#### p.pwm4.sm3cval0
<link=p.PWM4.SM3CVAL0>
#### p.PWM4.SM3CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e816e[0m (0x403e8000 + 0x016e)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### p.PWM4.SM3CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403e8172[0m (0x403e8000 + 0x0172)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### PWM4.SWCOUT
<link=p.PWM4.SWCOUT>
#### pwm4.dtsrcsel
<link=p.PWM4.DTSRCSEL>
#### PWM4.DTSRCSEL
<link=p.PWM4.DTSRCSEL>
#### p.pwm4.ffilt0
<link=p.PWM4.FFILT0>
#### p.pwm4.fctrl20
<link=p.PWM4.FCTRL20>
#### p.bee.addr_offset1
<link=p.BEE.ADDR_OFFSET1>
#### p.bee.aes_key0_w1
<link=p.BEE.AES_KEY0_W1>
#### bee.ctr_nonce0_w1
<link=p.BEE.CTR_NONCE0_W1>
#### lpi2c1.mder
<link=p.LPI2C1.MDER>
#### lpi2c1.mcfgr3
<link=p.LPI2C1.MCFGR3>
#### p.LPI2C1.MDMR
<lang=dft>
 (rw)  [1;33m0x403f0040[0m (0x403f0000 + 0x0040)
Master Data Match Register
 (rw) (08)  [0;32mMATCH0[0m  - [07:00] -  Match 0 Value
 (rw) (08)  [0;32mMATCH1[0m  - [23:16] -  Match 1 Value
</lang>
#### LPI2C1.MCCR0
<link=p.LPI2C1.MCCR0>
#### p.LPI2C1.MTDR
<lang=dft>
 (rw)  [1;33m0x403f0060[0m (0x403f0000 + 0x0060)
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
#### LPI2C1.MRDR
<link=p.LPI2C1.MRDR>
#### p.lpi2c1.scr
<link=p.LPI2C1.SCR>
#### p.LPI2C1.SCFGR1
<lang=dft>
 (rw)  [1;33m0x403f0124[0m (0x403f0000 + 0x0124)
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
#### p.LPI2C1.SASR
<lang=dft>
 (ro)  [1;33m0x403f0150[0m (0x403f0000 + 0x0150)
Slave Address Status Register
 (ro) (11)  [0;32mRADDR[0m  - [10:00] -  Received Address
 (ro) (01)  [0;32mANV[0m  - [14:14] -  Address Not Valid
      0 - ANV_0 :
         Received Address (RADDR) is valid
      0x1 - ANV_1 :
         Received Address (RADDR) is not valid
</lang>
#### p.lpi2c1.sasr
<link=p.LPI2C1.SASR>
#### lpi2c2.verid
<link=p.LPI2C2.VERID>
#### lpi2c2.mder
<link=p.LPI2C2.MDER>
#### p.LPI2C2.MCFGR0
<lang=dft>
 (rw)  [1;33m0x403f4020[0m (0x403f4000 + 0x0020)
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
#### p.lpi2c2.mcfgr1
<link=p.LPI2C2.MCFGR1>
#### LPI2C2.MCFGR1
<link=p.LPI2C2.MCFGR1>
#### lpi2c2.mcfgr3
<link=p.LPI2C2.MCFGR3>
#### p.LPI2C2.MFSR
<lang=dft>
 (ro)  [1;33m0x403f405c[0m (0x403f4000 + 0x005c)
Master FIFO Status Register
 (ro) (03)  [0;32mTXCOUNT[0m  - [02:00] -  Transmit FIFO Count
 (ro) (03)  [0;32mRXCOUNT[0m  - [18:16] -  Receive FIFO Count
</lang>
#### p.LPI2C2.SSR
<lang=dft>
 (rw)  [1;33m0x403f4114[0m (0x403f4000 + 0x0114)
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
#### p.lpi2c2.star
<link=p.LPI2C2.STAR>
#### LPI2C3.PARAM
<link=p.LPI2C3.PARAM>
#### p.LPI2C3.MSR
<lang=dft>
 (rw)  [1;33m0x403f8014[0m (0x403f8000 + 0x0014)
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
#### LPI2C3.MCFGR2
<link=p.LPI2C3.MCFGR2>
#### lpi2c3.ssr
<link=p.LPI2C3.SSR>
#### lpi2c3.scfgr2
<link=p.LPI2C3.SCFGR2>
#### lpi2c3.star
<link=p.LPI2C3.STAR>
#### lpi2c4.mcfgr0
<link=p.LPI2C4.MCFGR0>
#### LPI2C4.MCFGR3
<link=p.LPI2C4.MCFGR3>
#### p.lpi2c4.mtdr
<link=p.LPI2C4.MTDR>
#### p.LPI2C4.SCR
<lang=dft>
 (rw)  [1;33m0x403fc110[0m (0x403fc000 + 0x0110)
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
#### p.SYSTEMCONTROL.ICSR
<lang=dft>
 (rw)  [1;33m0xe000ed04[0m (0xe000e000 + 0x0d04)
Interrupt Control and State Register
 (ro) (09)  [0;32mVECTACTIVE[0m  - [08:00] -  Active exception number
 (ro) (01)  [0;32mRETTOBASE[0m  - [11:11] -  Indicates whether there are preempted active exceptions
      0 - RETTOBASE_0 :
         there are preempted active exceptions to execute
      0x1 - RETTOBASE_1 :
         there are no active exceptions, or the currently-executing exception is
          the only active exception
 (ro) (09)  [0;32mVECTPENDING[0m  - [20:12] -  Exception number of the highest priority pending enabled exception
 (ro) (01)  [0;32mISRPENDING[0m  - [22:22] -  Interrupt pending flag, excluding NMI and Faults
      0 - ISRPENDING_0 :
         No external interrupt pending.
      0x1 - ISRPENDING_1 :
         External interrupt pending.
 (wo) (01)  [0;32mPENDSTCLR[0m  - [25:25] -  SysTick exception clear-pending bit
      0 - PENDSTCLR_0 :
         no effect
      0x1 - PENDSTCLR_1 :
         removes the pending state from the SysTick exception
 (rw) (01)  [0;32mPENDSTSET[0m  - [26:26] -  SysTick exception set-pending bit
      0 - PENDSTSET_0 :
         write: no effect; read: SysTick exception is not pending
      0x1 - PENDSTSET_1 :
         write: changes SysTick exception state to pending; read: SysTick except
         ion is pending
 (wo) (01)  [0;32mPENDSVCLR[0m  - [27:27] -  PendSV clear-pending bit
      0 - PENDSVCLR_0 :
         no effect
      0x1 - PENDSVCLR_1 :
         removes the pending state from the PendSV exception
 (rw) (01)  [0;32mPENDSVSET[0m  - [28:28] -  PendSV set-pending bit
      0 - PENDSVSET_0 :
         write: no effect; read: PendSV exception is not pending
      0x1 - PENDSVSET_1 :
         write: changes PendSV exception state to pending; read: PendSV exceptio
         n is pending
 (rw) (01)  [0;32mNMIPENDSET[0m  - [31:31] -  NMI set-pending bit
      0 - NMIPENDSET_0 :
         write: no effect; read: NMI exception is not pending
      0x1 - NMIPENDSET_1 :
         write: changes NMI exception state to pending; read: NMI exception is p
         ending
</lang>
#### p.SYSTEMCONTROL.SHCSR
<lang=dft>
 (rw)  [1;33m0xe000ed24[0m (0xe000e000 + 0x0d24)
System Handler Control and State Register
 (rw) (01)  [0;32mMEMFAULTACT[0m  - [00:00] -  MemManage exception active bit
      0 - MEMFAULTACT_0 :
         exception is not active
      0x1 - MEMFAULTACT_1 :
         exception is active
 (rw) (01)  [0;32mBUSFAULTACT[0m  - [01:01] -  BusFault exception active bit
      0 - BUSFAULTACT_0 :
         exception is not active
      0x1 - BUSFAULTACT_1 :
         exception is active
 (rw) (01)  [0;32mUSGFAULTACT[0m  - [03:03] -  UsageFault exception active bit
      0 - USGFAULTACT_0 :
         exception is not active
      0x1 - USGFAULTACT_1 :
         exception is active
 (rw) (01)  [0;32mSVCALLACT[0m  - [07:07] -  SVCall active bit
      0 - SVCALLACT_0 :
         exception is not active
      0x1 - SVCALLACT_1 :
         exception is active
 (rw) (01)  [0;32mMONITORACT[0m  - [08:08] -  Debug monitor active bit
      0 - MONITORACT_0 :
         exception is not active
      0x1 - MONITORACT_1 :
         exception is active
 (rw) (01)  [0;32mPENDSVACT[0m  - [10:10] -  PendSV exception active bit
      0 - PENDSVACT_0 :
         exception is not active
      0x1 - PENDSVACT_1 :
         exception is active
 (rw) (01)  [0;32mSYSTICKACT[0m  - [11:11] -  SysTick exception active bit
      0 - SYSTICKACT_0 :
         exception is not active
      0x1 - SYSTICKACT_1 :
         exception is active
 (rw) (01)  [0;32mUSGFAULTPENDED[0m  - [12:12] -  UsageFault exception pending bit
      0 - USGFAULTPENDED_0 :
         exception is not pending
      0x1 - USGFAULTPENDED_1 :
         exception is pending
 (rw) (01)  [0;32mMEMFAULTPENDED[0m  - [13:13] -  MemManage exception pending bit
      0 - MEMFAULTPENDED_0 :
         exception is not pending
      0x1 - MEMFAULTPENDED_1 :
         exception is pending
 (rw) (01)  [0;32mBUSFAULTPENDED[0m  - [14:14] -  BusFault exception pending bit
      0 - BUSFAULTPENDED_0 :
         exception is not pending
      0x1 - BUSFAULTPENDED_1 :
         exception is pending
 (rw) (01)  [0;32mSVCALLPENDED[0m  - [15:15] -  SVCall pending bit
      0 - SVCALLPENDED_0 :
         exception is not pending
      0x1 - SVCALLPENDED_1 :
         exception is pending
 (rw) (01)  [0;32mMEMFAULTENA[0m  - [16:16] -  MemManage enable bit
      0 - MEMFAULTENA_0 :
         disable the exception
      0x1 - MEMFAULTENA_1 :
         enable the exception
 (rw) (01)  [0;32mBUSFAULTENA[0m  - [17:17] -  BusFault enable bit
      0 - BUSFAULTENA_0 :
         disable the exception
      0x1 - BUSFAULTENA_1 :
         enable the exception
 (rw) (01)  [0;32mUSGFAULTENA[0m  - [18:18] -  UsageFault enable bit
      0 - USGFAULTENA_0 :
         disable the exception
      0x1 - USGFAULTENA_1 :
         enable the exception
</lang>
#### p.systemcontrol.hfsr
<link=p.SYSTEMCONTROL.HFSR>
#### p.systemcontrol.mmfar
<link=p.SYSTEMCONTROL.MMFAR>
#### p.SYSTEMCONTROL.ID_PFR0
<lang=dft>
 (ro)  [1;33m0xe000ed40[0m (0xe000e000 + 0x0d40)
Processor Feature Register 0
 (ro) (04)  [0;32mSTATE0[0m  - [03:00] -  ARM instruction set support
      0 - STATE0_0 :
         ARMv7-M unused
      0x1 - STATE0_1 :
         ARMv7-M unused
      0x2 - STATE0_2 :
         ARMv7-M unused
      0x3 - STATE0_3 :
         Support for Thumb encoding including Thumb-2 technology, with all basic
          16-bit and 32-bit instructions.
 (ro) (04)  [0;32mSTATE1[0m  - [07:04] -  Thumb instruction set support
      0 - STATE1_0 :
         The processor does not support the ARM instruction set.
      0x1 - STATE1_1 :
         ARMv7-M unused
 (ro) (04)  [0;32mSTATE2[0m  - [11:08] -  ARMv7-M unused
 (ro) (04)  [0;32mSTATE3[0m  - [15:12] -  ARMv7-M unused
</lang>
#### p.systemcontrol.id_isar3
<link=p.SYSTEMCONTROL.ID_ISAR3>
#### systemcontrol.id_isar4
<link=p.SYSTEMCONTROL.ID_ISAR4>
#### systemcontrol.ccsidr
<link=p.SYSTEMCONTROL.CCSIDR>
#### SystemControl.DCISW
<link=p.SYSTEMCONTROL.DCISW>
#### systemcontrol.dccmvac
<link=p.SYSTEMCONTROL.DCCMVAC>
#### p.NVIC
<lang=dft>
base: 0xe000e100
NVICIABR0       NVICIABR1       NVICIABR2       NVICIABR3       
NVICIABR4       NVICICER0       NVICICER1       NVICICER2       
NVICICER3       NVICICER4       NVICICPR0       NVICICPR1       
NVICICPR2       NVICICPR3       NVICICPR4       NVICIP0         
NVICIP1         NVICIP10        NVICIP100       NVICIP101       
NVICIP102       NVICIP103       NVICIP104       NVICIP105       
NVICIP106       NVICIP107       NVICIP108       NVICIP109       
NVICIP11        NVICIP110       NVICIP111       NVICIP112       
NVICIP113       NVICIP114       NVICIP115       NVICIP116       
NVICIP117       NVICIP118       NVICIP119       NVICIP12        
NVICIP120       NVICIP121       NVICIP122       NVICIP123       
NVICIP124       NVICIP125       NVICIP126       NVICIP127       
NVICIP128       NVICIP129       NVICIP13        NVICIP130       
NVICIP131       NVICIP132       NVICIP133       NVICIP134       
NVICIP135       NVICIP136       NVICIP137       NVICIP138       
NVICIP139       NVICIP14        NVICIP140       NVICIP141       
NVICIP142       NVICIP143       NVICIP144       NVICIP145       
NVICIP146       NVICIP147       NVICIP148       NVICIP149       
NVICIP15        NVICIP150       NVICIP151       NVICIP152       
NVICIP153       NVICIP154       NVICIP155       NVICIP156       
NVICIP157       NVICIP16        NVICIP17        NVICIP18        
NVICIP19        NVICIP2         NVICIP20        NVICIP21        
NVICIP22        NVICIP23        NVICIP24        NVICIP25        
NVICIP26        NVICIP27        NVICIP28        NVICIP29        
NVICIP3         NVICIP30        NVICIP31        NVICIP32        
NVICIP33        NVICIP34        NVICIP35        NVICIP36        
NVICIP37        NVICIP38        NVICIP39        NVICIP4         
NVICIP40        NVICIP41        NVICIP42        NVICIP43        
NVICIP44        NVICIP45        NVICIP46        NVICIP47        
NVICIP48        NVICIP49        NVICIP5         NVICIP50        
NVICIP51        NVICIP52        NVICIP53        NVICIP54        
NVICIP55        NVICIP56        NVICIP57        NVICIP58        
NVICIP59        NVICIP6         NVICIP60        NVICIP61        
NVICIP62        NVICIP63        NVICIP64        NVICIP65        
NVICIP66        NVICIP67        NVICIP68        NVICIP69        
NVICIP7         NVICIP70        NVICIP71        NVICIP72        
NVICIP73        NVICIP74        NVICIP75        NVICIP76        
NVICIP77        NVICIP78        NVICIP79        NVICIP8         
NVICIP80        NVICIP81        NVICIP82        NVICIP83        
NVICIP84        NVICIP85        NVICIP86        NVICIP87        
NVICIP88        NVICIP89        NVICIP9         NVICIP90        
NVICIP91        NVICIP92        NVICIP93        NVICIP94        
NVICIP95        NVICIP96        NVICIP97        NVICIP98        
NVICIP99        NVICISER0       NVICISER1       NVICISER2       
NVICISER3       NVICISER4       NVICISPR0       NVICISPR1       
NVICISPR2       NVICISPR3       NVICISPR4       NVICSTIR        
输入 p.NVIC.{reg_name} 以查看寄存器的详细信息
type p.NVIC.{reg_name} to check details of registers
</lang>
#### p.nvic.nvicicer2
<link=p.NVIC.NVICICER2>
#### nvic.nvicispr3
<link=p.NVIC.NVICISPR3>
#### p.NVIC.NVICICPR0
<lang=dft>
 (rw)  [1;33m0xe000e280[0m (0xe000e100 + 0x0180)
Interrupt Clear Pending Register n
 (rw) (32)  [0;32mCLRPEND[0m  - [31:00] -  Interrupt clear-pending bits
</lang>
#### nvic.nvicicpr4
<link=p.NVIC.NVICICPR4>
#### p.NVIC.NVICIABR3
<lang=dft>
 (rw)  [1;33m0xe000e30c[0m (0xe000e100 + 0x020c)
Interrupt Active bit Register n
 (rw) (32)  [0;32mACTIVE[0m  - [31:00] -  Interrupt active flags
</lang>
#### p.NVIC.NVICIP0
<lang=dft>
 (rw)  [1;33m0xe000e400[0m (0xe000e100 + 0x0300)
Interrupt Priority Register 0
 (rw) (04)  [0;32mPRI0[0m  - [07:04] -  Priority of the INT_DMA0_DMA16 interrupt 0
</lang>
#### NVIC.NVICIP9
<link=p.NVIC.NVICIP9>
#### p.NVIC.NVICIP16
<lang=dft>
 (rw)  [1;33m0xe000e410[0m (0xe000e100 + 0x0310)
Interrupt Priority Register 16
 (rw) (04)  [0;32mPRI16[0m  - [07:04] -  Priority of the INT_DMA_ERROR interrupt 16
</lang>
#### NVIC.NVICIP18
<link=p.NVIC.NVICIP18>
#### p.nvic.nvicip22
<link=p.NVIC.NVICIP22>
#### nvic.nvicip27
<link=p.NVIC.NVICIP27>
#### NVIC.NVICIP29
<link=p.NVIC.NVICIP29>
#### p.NVIC.NVICIP30
<lang=dft>
 (rw)  [1;33m0xe000e41e[0m (0xe000e100 + 0x031e)
Interrupt Priority Register 30
 (rw) (04)  [0;32mPRI30[0m  - [07:04] -  Priority of the INT_LPI2C3 interrupt 30
</lang>
#### nvic.nvicip34
<link=p.NVIC.NVICIP34>
#### p.nvic.nvicip35
<link=p.NVIC.NVICIP35>
#### NVIC.NVICIP36
<link=p.NVIC.NVICIP36>
#### NVIC.NVICIP42
<link=p.NVIC.NVICIP42>
#### nvic.nvicip44
<link=p.NVIC.NVICIP44>
#### p.nvic.nvicip48
<link=p.NVIC.NVICIP48>
#### NVIC.NVICIP55
<link=p.NVIC.NVICIP55>
#### p.nvic.nvicip56
<link=p.NVIC.NVICIP56>
#### nvic.nvicip57
<link=p.NVIC.NVICIP57>
#### p.NVIC.NVICIP63
<lang=dft>
 (rw)  [1;33m0xe000e43f[0m (0xe000e100 + 0x033f)
Interrupt Priority Register 63
 (rw) (04)  [0;32mPRI63[0m  - [07:04] -  Priority of the INT_TEMP_LOW_HIGH interrupt 63
</lang>
#### NVIC.NVICIP64
<link=p.NVIC.NVICIP64>
#### nvic.nvicip78
<link=p.NVIC.NVICIP78>
#### p.nvic.nvicip79
<link=p.NVIC.NVICIP79>
#### nvic.nvicip80
<link=p.NVIC.NVICIP80>
#### NVIC.NVICIP86
<link=p.NVIC.NVICIP86>
#### NVIC.NVICIP91
<link=p.NVIC.NVICIP91>
#### p.nvic.nvicip92
<link=p.NVIC.NVICIP92>
#### nvic.nvicip93
<link=p.NVIC.NVICIP93>
#### p.NVIC.NVICIP99
<lang=dft>
 (rw)  [1;33m0xe000e463[0m (0xe000e100 + 0x0363)
Interrupt Priority Register 99
 (rw) (04)  [0;32mPRI99[0m  - [07:04] -  Priority of the INT_Reserved115 interrupt 99
</lang>
#### p.NVIC.NVICIP103
<lang=dft>
 (rw)  [1;33m0xe000e467[0m (0xe000e100 + 0x0367)
Interrupt Priority Register 103
 (rw) (04)  [0;32mPRI103[0m  - [07:04] -  Priority of the INT_PWM1_1 interrupt 103
</lang>
#### nvic.nvicip108
<link=p.NVIC.NVICIP108>
#### p.nvic.nvicip118
<link=p.NVIC.NVICIP118>
#### NVIC.NVICIP119
<link=p.NVIC.NVICIP119>
#### NVIC.NVICIP124
<link=p.NVIC.NVICIP124>
#### nvic.nvicip126
<link=p.NVIC.NVICIP126>
#### p.nvic.nvicip129
<link=p.NVIC.NVICIP129>
#### p.nvic.nvicip136
<link=p.NVIC.NVICIP136>
#### NVIC.NVICIP137
<link=p.NVIC.NVICIP137>
#### nvic.nvicip139
<link=p.NVIC.NVICIP139>
#### p.nvic.nvicip142
<link=p.NVIC.NVICIP142>
#### nvic.nvicip145
<link=p.NVIC.NVICIP145>
#### NVIC.NVICIP147
<link=p.NVIC.NVICIP147>
#### p.NVIC.NVICIP150
<lang=dft>
 (rw)  [1;33m0xe000e496[0m (0xe000e100 + 0x0396)
Interrupt Priority Register 150
 (rw) (04)  [0;32mPRI150[0m  - [07:04] -  Priority of the INT_PWM4_3 interrupt 150
</lang>
#### nvic.nvicip152
<link=p.NVIC.NVICIP152>
#### NVIC.NVICIP154
<link=p.NVIC.NVICIP154>
#### p.nvic.nvicip155
<link=p.NVIC.NVICIP155>
#### TCTRL2
<link=p.PIT.TCTRL2>
#### LTMR64L
<link=p.PIT.LTMR64L>
#### GPR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.IOMUXC_SNVS_GPR.GPR0
   p.IOMUXC_GPR.GPR0
#### GPR27
<link=p.IOMUXC_GPR.GPR27>
#### GPR30
<link=p.IOMUXC_GPR.GPR30>
#### hc4
<link=HC4>
#### OFS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.OFS
   p.ADC2.OFS
#### ent[0]
<link=ENT[0]>
#### ENT[12]
<link=p.TRNG.ENT[12]>
#### PKRCNT54
<link=p.TRNG.PKRCNT54>
#### pkrcnt76
<link=PKRCNT76>
#### lpsmcmr
<link=LPSMCMR>
#### LPSMCLR
<link=p.SNVS.LPSMCLR>
#### lpzmkr[1]
<link=LPZMKR[1]>
#### pll_arm_tog
<link=PLL_ARM_TOG>
#### pll_usb1_clr
<link=PLL_USB1_CLR>
#### PLL_USB1_TOG
<link=p.CCM_ANALOG.PLL_USB1_TOG>
#### PLL_SYS_TOG
<link=p.CCM_ANALOG.PLL_SYS_TOG>
#### PLL_SYS_NUM
<link=p.CCM_ANALOG.PLL_SYS_NUM>
#### PLL_AUDIO
<link=p.CCM_ANALOG.PLL_AUDIO>
#### PLL_VIDEO_TOG
<link=p.CCM_ANALOG.PLL_VIDEO_TOG>
#### PLL_VIDEO_NUM
<link=p.CCM_ANALOG.PLL_VIDEO_NUM>
#### pll_enet_set
<link=PLL_ENET_SET>
#### misc0_set
<link=MISC0_SET>
#### MISC2_TOG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC2_TOG
   p.PMU.MISC2_TOG
#### reg_1p1_clr
<link=REG_1P1_CLR>
#### reg_core_tog
<link=REG_CORE_TOG>
#### usb1_vbus_detect_set
<link=USB1_VBUS_DETECT_SET>
#### USB1_CHRG_DETECT_SET
<link=p.USB_ANALOG.USB1_CHRG_DETECT_SET>
#### usb1_vbus_detect_stat
<link=USB1_VBUS_DETECT_STAT>
#### USB1_MISC_SET
<link=p.USB_ANALOG.USB1_MISC_SET>
#### USB2_LOOPBACK
<link=p.USB_ANALOG.USB2_LOOPBACK>
#### usb2_loopback_clr
<link=USB2_LOOPBACK_CLR>
#### USB2_MISC
<link=p.USB_ANALOG.USB2_MISC>
#### digprog
<link=DIGPROG>
#### OSC_CONFIG1_SET
<link=p.XTALOSC24M.OSC_CONFIG1_SET>
#### PWD_TOG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.PWD_TOG
   p.USBPHY2.PWD_TOG
#### TX_CLR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.TX_CLR
   p.USBPHY2.TX_CLR
#### rx
<link=RX>
#### CSL9
<link=p.CSU.CSL9>
#### csl11
<link=CSL11>
#### csl29
<link=CSL29>
#### ERQ
<link=p.DMA0.ERQ>
#### CERQ
<link=p.DMA0.CERQ>
#### DCHPRI6
<link=p.DMA0.DCHPRI6>
#### dchpri6
<link=DCHPRI6>
#### tcd0_nbytes_mlno
<link=TCD0_NBYTES_MLNO>
#### TCD0_BITER_ELINKYES
<link=p.DMA0.TCD0_BITER_ELINKYES>
#### tcd1_nbytes_mlno
<link=TCD1_NBYTES_MLNO>
#### TCD2_ATTR
<link=p.DMA0.TCD2_ATTR>
#### TCD2_NBYTES_MLNO
<link=p.DMA0.TCD2_NBYTES_MLNO>
#### tcd2_citer_elinkno
<link=TCD2_CITER_ELINKNO>
#### tcd3_nbytes_mlno
<link=TCD3_NBYTES_MLNO>
#### TCD4_NBYTES_MLOFFYES
<link=p.DMA0.TCD4_NBYTES_MLOFFYES>
#### TCD4_DOFF
<link=p.DMA0.TCD4_DOFF>
#### TCD5_NBYTES_MLOFFNO
<link=p.DMA0.TCD5_NBYTES_MLOFFNO>
#### tcd5_nbytes_mloffno
<link=TCD5_NBYTES_MLOFFNO>
#### tcd5_nbytes_mloffyes
<link=TCD5_NBYTES_MLOFFYES>
#### TCD5_DADDR
<link=p.DMA0.TCD5_DADDR>
#### TCD5_DOFF
<link=p.DMA0.TCD5_DOFF>
#### tcd5_biter_elinkno
<link=TCD5_BITER_ELINKNO>
#### TCD6_SOFF
<link=p.DMA0.TCD6_SOFF>
#### tcd6_nbytes_mloffyes
<link=TCD6_NBYTES_MLOFFYES>
#### tcd6_csr
<link=TCD6_CSR>
#### TCD6_BITER_ELINKYES
<link=p.DMA0.TCD6_BITER_ELINKYES>
#### TCD8_ATTR
<link=p.DMA0.TCD8_ATTR>
#### TCD8_CITER_ELINKNO
<link=p.DMA0.TCD8_CITER_ELINKNO>
#### tcd8_citer_elinkyes
<link=TCD8_CITER_ELINKYES>
#### TCD9_SOFF
<link=p.DMA0.TCD9_SOFF>
#### TCD10_NBYTES_MLNO
<link=p.DMA0.TCD10_NBYTES_MLNO>
#### TCD10_BITER_ELINKNO
<link=p.DMA0.TCD10_BITER_ELINKNO>
#### TCD11_SADDR
<link=p.DMA0.TCD11_SADDR>
#### TCD11_SOFF
<link=p.DMA0.TCD11_SOFF>
#### TCD12_SADDR
<link=p.DMA0.TCD12_SADDR>
#### TCD12_SLAST
<link=p.DMA0.TCD12_SLAST>
#### TCD12_DADDR
<link=p.DMA0.TCD12_DADDR>
#### TCD12_CITER_ELINKYES
<link=p.DMA0.TCD12_CITER_ELINKYES>
#### tcd12_citer_elinkyes
<link=TCD12_CITER_ELINKYES>
#### tcd13_doff
<link=TCD13_DOFF>
#### TCD15_NBYTES_MLNO
<link=p.DMA0.TCD15_NBYTES_MLNO>
#### tcd15_slast
<link=TCD15_SLAST>
#### tcd16_saddr
<link=TCD16_SADDR>
#### tcd16_nbytes_mloffyes
<link=TCD16_NBYTES_MLOFFYES>
#### tcd16_citer_elinkno
<link=TCD16_CITER_ELINKNO>
#### tcd16_biter_elinkno
<link=TCD16_BITER_ELINKNO>
#### tcd17_saddr
<link=TCD17_SADDR>
#### tcd17_soff
<link=TCD17_SOFF>
#### TCD17_NBYTES_MLOFFNO
<link=p.DMA0.TCD17_NBYTES_MLOFFNO>
#### tcd18_soff
<link=TCD18_SOFF>
#### TCD18_DOFF
<link=p.DMA0.TCD18_DOFF>
#### TCD19_DOFF
<link=p.DMA0.TCD19_DOFF>
#### TCD21_DOFF
<link=p.DMA0.TCD21_DOFF>
#### tcd21_dlastsga
<link=TCD21_DLASTSGA>
#### tcd22_attr
<link=TCD22_ATTR>
#### TCD22_CITER_ELINKYES
<link=p.DMA0.TCD22_CITER_ELINKYES>
#### tcd22_dlastsga
<link=TCD22_DLASTSGA>
#### TCD23_SOFF
<link=p.DMA0.TCD23_SOFF>
#### TCD24_SOFF
<link=p.DMA0.TCD24_SOFF>
#### TCD25_NBYTES_MLNO
<link=p.DMA0.TCD25_NBYTES_MLNO>
#### tcd26_biter_elinkno
<link=TCD26_BITER_ELINKNO>
#### TCD26_BITER_ELINKYES
<link=p.DMA0.TCD26_BITER_ELINKYES>
#### TCD27_NBYTES_MLOFFYES
<link=p.DMA0.TCD27_NBYTES_MLOFFYES>
#### TCD28_CITER_ELINKNO
<link=p.DMA0.TCD28_CITER_ELINKNO>
#### tcd28_biter_elinkno
<link=TCD28_BITER_ELINKNO>
#### TCD29_SADDR
<link=p.DMA0.TCD29_SADDR>
#### TCD29_SLAST
<link=p.DMA0.TCD29_SLAST>
#### TCD29_DADDR
<link=p.DMA0.TCD29_DADDR>
#### TCD29_BITER_ELINKYES
<link=p.DMA0.TCD29_BITER_ELINKYES>
#### tcd30_nbytes_mloffyes
<link=TCD30_NBYTES_MLOFFYES>
#### tcd30_citer_elinkno
<link=TCD30_CITER_ELINKNO>
#### tcd31_soff
<link=TCD31_SOFF>
#### TCD31_NBYTES_MLOFFNO
<link=p.DMA0.TCD31_NBYTES_MLOFFNO>
#### TCD31_BITER_ELINKYES
<link=p.DMA0.TCD31_BITER_ELINKYES>
#### chcfg[4]
<link=CHCFG[4]>
#### CHCFG[10]
<link=p.DMAMUX.CHCFG[10]>
#### chcfg[14]
<link=CHCFG[14]>
#### ISR1
<link=p.GPC.ISR1>
#### IMR5
<link=p.GPC.IMR5>
#### mega_sr
<link=MEGA_SR>
#### CMEOR
<link=p.CCM.CMEOR>
#### rompatchenl
<link=ROMPATCHENL>
#### rompatch4a
<link=ROMPATCH4A>
#### PARAM
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.PARAM
   p.LPUART2.PARAM
   p.LPUART3.PARAM
   p.LPUART4.PARAM
   p.LPUART5.PARAM
   p.LPUART6.PARAM
   p.LPUART7.PARAM
   p.LPUART8.PARAM
   p.FLEXIO1.PARAM
   p.FLEXIO2.PARAM
   p.FLEXIO3.PARAM
   p.SAI1.PARAM
   p.SAI2.PARAM
   p.SAI3.PARAM
   p.LPSPI1.PARAM
   p.LPSPI2.PARAM
   p.LPSPI3.PARAM
   p.LPSPI4.PARAM
   p.LPI2C1.PARAM
   p.LPI2C2.PARAM
   p.LPI2C3.PARAM
   p.LPI2C4.PARAM
#### MATCH
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.MATCH
   p.LPUART2.MATCH
   p.LPUART3.MATCH
   p.LPUART4.MATCH
   p.LPUART5.MATCH
   p.LPUART6.MATCH
   p.LPUART7.MATCH
   p.LPUART8.MATCH
#### SHIFTSIEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTSIEN
   p.FLEXIO2.SHIFTSIEN
   p.FLEXIO3.SHIFTSIEN
#### SHIFTCTL[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTCTL[3]
   p.FLEXIO2.SHIFTCTL[3]
   p.FLEXIO3.SHIFTCTL[3]
#### SHIFTCFG[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTCFG[3]
   p.FLEXIO2.SHIFTCFG[3]
   p.FLEXIO3.SHIFTCFG[3]
#### SHIFTBUF[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUF[1]
   p.FLEXIO2.SHIFTBUF[1]
   p.FLEXIO3.SHIFTBUF[1]
#### shiftbufbys[2]
<link=SHIFTBUFBYS[2]>
#### shiftbufbbs[1]
<link=SHIFTBUFBBS[1]>
#### timctl[0]
<link=TIMCTL[0]>
#### timcfg[0]
<link=TIMCFG[0]>
#### shiftbufhws[0]
<link=SHIFTBUFHWS[0]>
#### gdir
<link=GDIR>
#### ISR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPIO1.ISR
   p.GPIO5.ISR
   p.GPIO2.ISR
   p.GPIO3.ISR
   p.GPIO4.ISR
   p.GPIO6.ISR
   p.GPIO7.ISR
   p.GPIO8.ISR
   p.GPIO9.ISR
#### DR_CLEAR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPIO1.DR_CLEAR
   p.GPIO5.DR_CLEAR
   p.GPIO2.DR_CLEAR
   p.GPIO3.DR_CLEAR
   p.GPIO4.DR_CLEAR
   p.GPIO6.DR_CLEAR
   p.GPIO7.DR_CLEAR
   p.GPIO8.DR_CLEAR
   p.GPIO9.DR_CLEAR
#### RXIMR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR2
   p.CAN2.RXIMR2
#### RXIMR10
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR10
   p.CAN2.RXIMR10
#### RXIMR21
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR21
   p.CAN2.RXIMR21
#### rximr22
<link=RXIMR22>
#### RXIMR36
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR36
   p.CAN2.RXIMR36
#### rximr39
<link=RXIMR39>
#### rximr40
<link=RXIMR40>
#### RXIMR43
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR43
   p.CAN2.RXIMR43
#### mb0_16b_cs
<link=MB0_16B_CS>
#### id1
<link=ID1>
#### mb1_8b_word0
<link=MB1_8B_WORD0>
#### mb2_8b_cs
<link=MB2_8B_CS>
#### WORD02
<link=p.CAN3.WORD02>
#### mb0_64b_word10
<link=MB0_64B_WORD10>
#### MB1_32B_WORD1
<link=p.CAN3.MB1_32B_WORD1>
#### mb3_8b_id
<link=MB3_8B_ID>
#### mb2_16b_word3
<link=MB2_16B_WORD3>
#### mb1_32b_word7
<link=MB1_32B_WORD7>
#### MB4_8B_WORD1
<link=p.CAN3.MB4_8B_WORD1>
#### ID5
<link=p.CAN3.ID5>
#### mb2_32b_word2
<link=MB2_32B_WORD2>
#### MB4_16B_WORD0
<link=p.CAN3.MB4_16B_WORD0>
#### MB3_32B_WORD1
<link=p.CAN3.MB3_32B_WORD1>
#### mb8_8b_id
<link=MB8_8B_ID>
#### MB8_8B_WORD1
<link=p.CAN3.MB8_8B_WORD1>
#### CS9
<link=p.CAN3.CS9>
#### MB2_64B_WORD0
<link=p.CAN3.MB2_64B_WORD0>
#### MB6_16B_WORD0
<link=p.CAN3.MB6_16B_WORD0>
#### WORD19
<link=p.CAN3.WORD19>
#### mb10_8b_cs
<link=MB10_8B_CS>
#### MB10_8B_WORD0
<link=p.CAN3.MB10_8B_WORD0>
#### WORD010
<link=p.CAN3.WORD010>
#### MB7_16B_ID
<link=p.CAN3.MB7_16B_ID>
#### mb11_8b_cs
<link=MB11_8B_CS>
#### MB2_64B_WORD10
<link=p.CAN3.MB2_64B_WORD10>
#### MB8_16B_CS
<link=p.CAN3.MB8_16B_CS>
#### mb12_8b_id
<link=MB12_8B_ID>
#### mb5_32b_word3
<link=MB5_32B_WORD3>
#### MB14_8B_ID
<link=p.CAN3.MB14_8B_ID>
#### MB5_32B_WORD5
<link=p.CAN3.MB5_32B_WORD5>
#### MB3_64B_WORD2
<link=p.CAN3.MB3_64B_WORD2>
#### word014
<link=WORD014>
#### MB10_16B_CS
<link=p.CAN3.MB10_16B_CS>
#### MB15_8B_CS
<link=p.CAN3.MB15_8B_CS>
#### MB6_32B_CS
<link=p.CAN3.MB6_32B_CS>
#### MB15_8B_ID
<link=p.CAN3.MB15_8B_ID>
#### mb15_8b_word0
<link=MB15_8B_WORD0>
#### mb6_32b_word6
<link=MB6_32B_WORD6>
#### CS18
<link=p.CAN3.CS18>
#### MB7_32B_WORD5
<link=p.CAN3.MB7_32B_WORD5>
#### mb19_8b_word0
<link=MB19_8B_WORD0>
#### mb13_16b_word3
<link=MB13_16B_WORD3>
#### mb20_8b_word1
<link=MB20_8B_WORD1>
#### mb4_64b_word9
<link=MB4_64B_WORD9>
#### MB8_32B_WORD1
<link=p.CAN3.MB8_32B_WORD1>
#### mb14_16b_id
<link=MB14_16B_ID>
#### MB21_8B_WORD0
<link=p.CAN3.MB21_8B_WORD0>
#### MB4_64B_WORD12
<link=p.CAN3.MB4_64B_WORD12>
#### CS22
<link=p.CAN3.CS22>
#### ID22
<link=p.CAN3.ID22>
#### MB14_16B_WORD3
<link=p.CAN3.MB14_16B_WORD3>
#### mb8_32b_word7
<link=MB8_32B_WORD7>
#### mb5_64b_id
<link=MB5_64B_ID>
#### MB16_16B_CS
<link=p.CAN3.MB16_16B_CS>
#### mb5_64b_word8
<link=MB5_64B_WORD8>
#### WORD025
<link=p.CAN3.WORD025>
#### id26
<link=ID26>
#### MB5_64B_WORD14
<link=p.CAN3.MB5_64B_WORD14>
#### MB10_32B_WORD6
<link=p.CAN3.MB10_32B_WORD6>
#### mb6_64b_cs
<link=MB6_64B_CS>
#### mb10_32b_word7
<link=MB10_32B_WORD7>
#### MB11_32B_WORD0
<link=p.CAN3.MB11_32B_WORD0>
#### mb6_64b_word2
<link=MB6_64B_WORD2>
#### MB6_64B_WORD5
<link=p.CAN3.MB6_64B_WORD5>
#### mb20_16b_cs
<link=MB20_16B_CS>
#### mb20_16b_id
<link=MB20_16B_ID>
#### id31
<link=ID31>
#### mb12_32b_word4
<link=MB12_32B_WORD4>
#### mb21_16b_word2
<link=MB21_16B_WORD2>
#### word032
<link=WORD032>
#### mb7_64b_word3
<link=MB7_64B_WORD3>
#### MB7_64B_WORD5
<link=p.CAN3.MB7_64B_WORD5>
#### MB13_32B_WORD2
<link=p.CAN3.MB13_32B_WORD2>
#### mb33_8b_word1
<link=MB33_8B_WORD1>
#### mb7_64b_word11
<link=MB7_64B_WORD11>
#### cs35
<link=CS35>
#### mb35_8b_cs
<link=MB35_8B_CS>
#### MB7_64B_WORD13
<link=p.CAN3.MB7_64B_WORD13>
#### MB14_32B_WORD2
<link=p.CAN3.MB14_32B_WORD2>
#### mb14_32b_word3
<link=MB14_32B_WORD3>
#### MB8_64B_WORD0
<link=p.CAN3.MB8_64B_WORD0>
#### mb15_32b_cs
<link=MB15_32B_CS>
#### WORD137
<link=p.CAN3.WORD137>
#### word138
<link=WORD138>
#### MB15_32B_WORD4
<link=p.CAN3.MB15_32B_WORD4>
#### MB8_64B_WORD10
<link=p.CAN3.MB8_64B_WORD10>
#### ID40
<link=p.CAN3.ID40>
#### mb16_32b_word0
<link=MB16_32B_WORD0>
#### mb27_16b_cs
<link=MB27_16B_CS>
#### MB9_64B_WORD0
<link=p.CAN3.MB9_64B_WORD0>
#### mb41_8b_id
<link=MB41_8B_ID>
#### word141
<link=WORD141>
#### MB29_16B_CS
<link=p.CAN3.MB29_16B_CS>
#### MB9_64B_WORD12
<link=p.CAN3.MB9_64B_WORD12>
#### MB17_32B_WORD6
<link=p.CAN3.MB17_32B_WORD6>
#### mb44_8b_word0
<link=MB44_8B_WORD0>
#### word044
<link=WORD044>
#### MB10_64B_WORD0
<link=p.CAN3.MB10_64B_WORD0>
#### MB18_32B_WORD1
<link=p.CAN3.MB18_32B_WORD1>
#### WORD145
<link=p.CAN3.WORD145>
#### MB31_16B_WORD0
<link=p.CAN3.MB31_16B_WORD0>
#### MB10_64B_WORD10
<link=p.CAN3.MB10_64B_WORD10>
#### WORD048
<link=p.CAN3.WORD048>
#### MB33_16B_WORD0
<link=p.CAN3.MB33_16B_WORD0>
#### MB11_64B_WORD2
<link=p.CAN3.MB11_64B_WORD2>
#### mb20_32b_word0
<link=MB20_32B_WORD0>
#### mb11_64b_word3
<link=MB11_64B_WORD3>
#### mb35_16b_cs
<link=MB35_16B_CS>
#### mb11_64b_word11
<link=MB11_64B_WORD11>
#### MB52_8B_WORD1
<link=p.CAN3.MB52_8B_WORD1>
#### word152
<link=WORD152>
#### id53
<link=ID53>
#### mb35_16b_word1
<link=MB35_16B_WORD1>
#### MB11_64B_WORD14
<link=p.CAN3.MB11_64B_WORD14>
#### mb21_32b_word3
<link=MB21_32B_WORD3>
#### MB35_16B_WORD3
<link=p.CAN3.MB35_16B_WORD3>
#### CS54
<link=p.CAN3.CS54>
#### MB21_32B_WORD4
<link=p.CAN3.MB21_32B_WORD4>
#### mb22_32b_word0
<link=MB22_32B_WORD0>
#### mb12_64b_word6
<link=MB12_64B_WORD6>
#### mb37_16b_word0
<link=MB37_16B_WORD0>
#### WORD156
<link=p.CAN3.WORD156>
#### MB22_32B_WORD6
<link=p.CAN3.MB22_32B_WORD6>
#### mb38_16b_cs
<link=MB38_16B_CS>
#### ID57
<link=p.CAN3.ID57>
#### mb38_16b_word1
<link=MB38_16B_WORD1>
#### MB57_8B_WORD1
<link=p.CAN3.MB57_8B_WORD1>
#### cs58
<link=CS58>
#### MB38_16B_WORD3
<link=p.CAN3.MB38_16B_WORD3>
#### mb13_64b_cs
<link=MB13_64B_CS>
#### MB23_32B_WORD7
<link=p.CAN3.MB23_32B_WORD7>
#### MB60_8B_CS
<link=p.CAN3.MB60_8B_CS>
#### mb13_64b_word6
<link=MB13_64B_WORD6>
#### MB13_64B_WORD9
<link=p.CAN3.MB13_64B_WORD9>
#### MB61_8B_ID
<link=p.CAN3.MB61_8B_ID>
#### cs62
<link=CS62>
#### mb63_8b_word0
<link=MB63_8B_WORD0>
#### RXIMR[6]
<link=p.CAN3.RXIMR[6]>
#### RXIMR[13]
<link=p.CAN3.RXIMR[13]>
#### RXIMR[25]
<link=p.CAN3.RXIMR[25]>
#### rximr[47]
<link=RXIMR[47]>
#### rximr[50]
<link=RXIMR[50]>
#### rximr[57]
<link=RXIMR[57]>
#### encbt
<link=ENCBT>
#### erfier
<link=ERFIER>
#### hr_time_stamp[3]
<link=HR_TIME_STAMP[3]>
#### hr_time_stamp[6]
<link=HR_TIME_STAMP[6]>
#### hr_time_stamp[18]
<link=HR_TIME_STAMP[18]>
#### HR_TIME_STAMP[21]
<link=p.CAN3.HR_TIME_STAMP[21]>
#### hr_time_stamp[41]
<link=HR_TIME_STAMP[41]>
#### hr_time_stamp[51]
<link=HR_TIME_STAMP[51]>
#### ERFFEL[14]
<link=p.CAN3.ERFFEL[14]>
#### erffel[14]
<link=ERFFEL[14]>
#### ERFFEL[26]
<link=p.CAN3.ERFFEL[26]>
#### ERFFEL[29]
<link=p.CAN3.ERFFEL[29]>
#### ERFFEL[31]
<link=p.CAN3.ERFFEL[31]>
#### erffel[31]
<link=ERFFEL[31]>
#### ERFFEL[53]
<link=p.CAN3.ERFFEL[53]>
#### erffel[100]
<link=ERFFEL[100]>
#### erffel[113]
<link=ERFFEL[113]>
#### ERFFEL[116]
<link=p.CAN3.ERFFEL[116]>
#### erffel[116]
<link=ERFFEL[116]>
#### capt2
<link=CAPT2>
#### LOAD0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.LOAD0
   p.TMR2.LOAD0
   p.TMR3.LOAD0
   p.TMR4.LOAD0
#### load0
<link=LOAD0>
#### CNTR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CNTR1
   p.TMR2.CNTR1
   p.TMR3.CNTR1
   p.TMR4.CNTR1
#### cmpld20
<link=CMPLD20>
#### CMPLD23
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CMPLD23
   p.TMR2.CMPLD23
   p.TMR3.CMPLD23
   p.TMR4.CMPLD23
#### dma0
<link=DMA0>
#### ocr3
<link=OCR3>
#### SCS_CLR
<link=p.OCOTP.SCS_CLR>
#### cfg3
<link=CFG3>
#### CFG5
<link=p.OCOTP.CFG5>
#### OTPMK0
<link=p.OCOTP.OTPMK0>
#### otpmk2
<link=OTPMK2>
#### srk5
<link=SRK5>
#### SRK7
<link=p.OCOTP.SRK7>
#### SJC_RESP1
<link=p.OCOTP.SJC_RESP1>
#### sw_gp1
<link=SW_GP1>
#### SW_GP20
<link=p.OCOTP.SW_GP20>
#### ROM_PATCH1
<link=p.OCOTP.ROM_PATCH1>
#### rom_patch1
<link=ROM_PATCH1>
#### GP43
<link=p.OCOTP.GP43>
#### SW_MUX_CTL_PAD_GPIO_EMC_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_05>
#### sw_mux_ctl_pad_gpio_emc_05
<link=SW_MUX_CTL_PAD_GPIO_EMC_05>
#### SW_MUX_CTL_PAD_GPIO_EMC_16
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_16>
#### sw_mux_ctl_pad_gpio_emc_16
<link=SW_MUX_CTL_PAD_GPIO_EMC_16>
#### SW_MUX_CTL_PAD_GPIO_EMC_23
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_23>
#### sw_mux_ctl_pad_gpio_emc_23
<link=SW_MUX_CTL_PAD_GPIO_EMC_23>
#### SW_MUX_CTL_PAD_GPIO_EMC_30
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_30>
#### sw_mux_ctl_pad_gpio_emc_30
<link=SW_MUX_CTL_PAD_GPIO_EMC_30>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_00>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_13>
#### sw_mux_ctl_pad_gpio_ad_b1_03
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_03>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_07>
#### sw_mux_ctl_pad_gpio_ad_b1_10
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_10>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_14>
#### SW_MUX_CTL_PAD_GPIO_B0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_00>
#### sw_mux_ctl_pad_gpio_b0_07
<link=SW_MUX_CTL_PAD_GPIO_B0_07>
#### SW_MUX_CTL_PAD_GPIO_B1_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_08>
#### sw_mux_ctl_pad_gpio_b1_08
<link=SW_MUX_CTL_PAD_GPIO_B1_08>
#### sw_mux_ctl_pad_gpio_sd_b1_07
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_07>
#### sw_mux_ctl_pad_gpio_sd_b1_10
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_10>
#### sw_pad_ctl_pad_gpio_emc_08
<link=SW_PAD_CTL_PAD_GPIO_EMC_08>
#### SW_PAD_CTL_PAD_GPIO_EMC_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_15>
#### SW_PAD_CTL_PAD_GPIO_EMC_20
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_20>
#### sw_pad_ctl_pad_gpio_emc_32
<link=SW_PAD_CTL_PAD_GPIO_EMC_32>
#### sw_pad_ctl_pad_gpio_ad_b0_03
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_03>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_05>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_12>
#### sw_pad_ctl_pad_gpio_ad_b1_05
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_05>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_11>
#### SW_PAD_CTL_PAD_GPIO_B1_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_04>
#### sw_pad_ctl_pad_gpio_b1_06
<link=SW_PAD_CTL_PAD_GPIO_B1_06>
#### SW_PAD_CTL_PAD_GPIO_SD_B0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_01>
#### sw_pad_ctl_pad_gpio_sd_b1_01
<link=SW_PAD_CTL_PAD_GPIO_SD_B1_01>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_06>
#### anatop_usb_otg2_id_select_input
<link=ANATOP_USB_OTG2_ID_SELECT_INPUT>
#### CSI_DATA04_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA04_SELECT_INPUT>
#### CSI_DATA05_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA05_SELECT_INPUT>
#### csi_data08_select_input
<link=CSI_DATA08_SELECT_INPUT>
#### enet0_timer_select_input
<link=ENET0_TIMER_SELECT_INPUT>
#### flexpwm1_pwma2_select_input
<link=FLEXPWM1_PWMA2_SELECT_INPUT>
#### FLEXPWM4_PWMA2_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM4_PWMA2_SELECT_INPUT>
#### LPI2C1_SCL_SELECT_INPUT
<link=p.IOMUXC.LPI2C1_SCL_SELECT_INPUT>
#### lpi2c2_sda_select_input
<link=LPI2C2_SDA_SELECT_INPUT>
#### lpspi1_pcs0_select_input
<link=LPSPI1_PCS0_SELECT_INPUT>
#### LPSPI2_PCS0_SELECT_INPUT
<link=p.IOMUXC.LPSPI2_PCS0_SELECT_INPUT>
#### lpspi2_pcs0_select_input
<link=LPSPI2_PCS0_SELECT_INPUT>
#### lpspi3_sdo_select_input
<link=LPSPI3_SDO_SELECT_INPUT>
#### LPUART4_RX_SELECT_INPUT
<link=p.IOMUXC.LPUART4_RX_SELECT_INPUT>
#### LPUART7_RX_SELECT_INPUT
<link=p.IOMUXC.LPUART7_RX_SELECT_INPUT>
#### QTIMER2_TIMER3_SELECT_INPUT
<link=p.IOMUXC.QTIMER2_TIMER3_SELECT_INPUT>
#### sai1_mclk2_select_input
<link=SAI1_MCLK2_SELECT_INPUT>
#### sai1_rx_data2_select_input
<link=SAI1_RX_DATA2_SELECT_INPUT>
#### SAI1_TX_SYNC_SELECT_INPUT
<link=p.IOMUXC.SAI1_TX_SYNC_SELECT_INPUT>
#### usdhc2_clk_select_input
<link=USDHC2_CLK_SELECT_INPUT>
#### XBAR1_IN17_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN17_SELECT_INPUT>
#### XBAR1_IN18_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN18_SELECT_INPUT>
#### sw_mux_ctl_pad_gpio_spi_b0_05
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_05>
#### SW_MUX_CTL_PAD_GPIO_SPI_B1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_00>
#### sw_pad_ctl_pad_gpio_spi_b0_00
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_00>
#### SW_PAD_CTL_PAD_GPIO_SPI_B1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_06>
#### FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT>
#### flexspi2_ipp_ind_io_fb_bit1_select_input
<link=FLEXSPI2_IPP_IND_IO_FB_BIT1_SELECT_INPUT>
#### canfd_ipp_ind_canrx_select_input
<link=CANFD_IPP_IND_CANRX_SELECT_INPUT>
#### KPSR
<link=p.KPP.KPSR>
#### flsha2cr0
<link=FLSHA2CR0>
#### FLSHCR2B1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHCR2B1
   p.FLEXSPI2.FLSHCR2B1
#### ipcr0
<link=IPCR0>
#### DLLCRA
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.DLLCRA
   p.FLEXSPI2.DLLCRA
#### iptxfsts
<link=IPTXFSTS>
#### rfdr[3]
<link=RFDR[3]>
#### rfdr[9]
<link=RFDR[9]>
#### rfdr[14]
<link=RFDR[14]>
#### RFDR[21]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[21]
   p.FLEXSPI2.RFDR[21]
#### RFDR[26]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[26]
   p.FLEXSPI2.RFDR[26]
#### TFDR[7]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[7]
   p.FLEXSPI2.TFDR[7]
#### tfdr[7]
<link=TFDR[7]>
#### lut[3]
<link=LUT[3]>
#### lut[4]
<link=LUT[4]>
#### LUT[8]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[8]
   p.FLEXSPI2.LUT[8]
#### LUT[16]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[16]
   p.FLEXSPI2.LUT[16]
#### lut[16]
<link=LUT[16]>
#### LUT[19]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[19]
   p.FLEXSPI2.LUT[19]
#### LUT[24]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[24]
   p.FLEXSPI2.LUT[24]
#### LUT[30]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[30]
   p.FLEXSPI2.LUT[30]
#### lut[30]
<link=LUT[30]>
#### LUT[37]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[37]
   p.FLEXSPI2.LUT[37]
#### lut[57]
<link=LUT[57]>
#### LUT[63]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[63]
   p.FLEXSPI2.LUT[63]
#### lut[63]
<link=LUT[63]>
#### OUT_AS_LRC
<link=p.PXP.OUT_AS_LRC>
#### ps_ctrl_set
<link=PS_CTRL_SET>
#### ps_buf
<link=PS_BUF>
#### CSC1_COEF0
<link=p.PXP.CSC1_COEF0>
#### POWER
<link=p.PXP.POWER>
#### CTRL2_SET
<link=p.LCDIF.CTRL2_SET>
#### ctrl2_clr
<link=CTRL2_CLR>
#### vdctrl0_tog
<link=VDCTRL0_TOG>
#### PIGEONCTRL1_CLR
<link=p.LCDIF.PIGEONCTRL1_CLR>
#### PIGEONCTRL1_TOG
<link=p.LCDIF.PIGEONCTRL1_TOG>
#### PIGEONCTRL2
<link=p.LCDIF.PIGEONCTRL2>
#### PIGEON_1_0
<link=p.LCDIF.PIGEON_1_0>
#### PIGEON_3_2
<link=p.LCDIF.PIGEON_3_2>
#### pigeon_4_0
<link=PIGEON_4_0>
#### pigeon_7_0
<link=PIGEON_7_0>
#### pigeon_10_1
<link=PIGEON_10_1>
#### LUT0_ADDR
<link=p.LCDIF.LUT0_ADDR>
#### csirfifo
<link=CSIRFIFO>
#### cmd_rsp1
<link=CMD_RSP1>
#### DLL_CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.DLL_CTRL
   p.USDHC2.DLL_CTRL
#### rdar
<link=RDAR>
#### tdar
<link=TDAR>
#### rcr
<link=RCR>
#### PALR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.PALR
   p.ENET2.PALR
#### tdsr
<link=TDSR>
#### rmon_t_p256to511
<link=RMON_T_P256TO511>
#### rmon_t_p512to1023
<link=RMON_T_P512TO1023>
#### RMON_T_OCTETS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_OCTETS
   p.ENET2.RMON_T_OCTETS
#### IEEE_T_DROP
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_DROP
   p.ENET2.IEEE_T_DROP
#### IEEE_T_DEF
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_DEF
   p.ENET2.IEEE_T_DEF
#### rmon_r_p64
<link=RMON_R_P64>
#### ATCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.ATCR
   p.ENET2.ATCR
#### hwhost
<link=HWHOST>
#### hwdevice
<link=HWDEVICE>
#### CAPLENGTH
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.CAPLENGTH
   p.USB2.CAPLENGTH
#### hccparams
<link=HCCPARAMS>
#### DCCPARAMS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.DCCPARAMS
   p.USB2.DCCPARAMS
#### ENDPTLISTADDR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTLISTADDR
   p.USB2.ENDPTLISTADDR
#### otgsc
<link=OTGSC>
#### endptprime
<link=ENDPTPRIME>
#### endptcomplete
<link=ENDPTCOMPLETE>
#### ENDPTCTRL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTCTRL0
   p.USB2.ENDPTCTRL0
#### endptctrl2
<link=ENDPTCTRL2>
#### br3
<link=BR3>
#### NANDCR1
<link=p.SEMC.NANDCR1>
#### nandcr2
<link=NANDCR2>
#### sramcr2
<link=SRAMCR2>
#### iprxdat
<link=IPRXDAT>
#### STS6
<link=p.SEMC.STS6>
#### sts8
<link=STS8>
#### channelctrl
<link=CHANNELCTRL>
#### channelctrl_clr
<link=CHANNELCTRL_CLR>
#### PACKET3
<link=p.DCP.PACKET3>
#### CH0OPTS_CLR
<link=p.DCP.CH0OPTS_CLR>
#### ch1stat_clr
<link=CH1STAT_CLR>
#### ch1opts
<link=CH1OPTS>
#### DBGDATA
<link=p.DCP.DBGDATA>
#### sie
<link=SIE>
#### SIC
<link=p.SPDIF.SIC>
#### SRL
<link=p.SPDIF.SRL>
#### rcr3
<link=RCR3>
#### RFR[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RFR[1]
   p.SAI2.RFR[1]
   p.SAI3.RFR[1]
#### ier
<link=IER>
#### RSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPSPI1.RSR
   p.LPSPI2.RSR
   p.LPSPI3.RSR
   p.LPSPI4.RSR
#### trig0_chain_7_6
<link=TRIG0_CHAIN_7_6>
#### TRIG0_RESULT_3_2
<link=p.ADC_ETC.TRIG0_RESULT_3_2>
#### TRIG1_CHAIN_1_0
<link=p.ADC_ETC.TRIG1_CHAIN_1_0>
#### TRIG2_COUNTER
<link=p.ADC_ETC.TRIG2_COUNTER>
#### trig2_chain_1_0
<link=TRIG2_CHAIN_1_0>
#### trig2_chain_7_6
<link=TRIG2_CHAIN_7_6>
#### trig4_chain_5_4
<link=TRIG4_CHAIN_5_4>
#### trig5_result_5_4
<link=TRIG5_RESULT_5_4>
#### trig5_result_7_6
<link=TRIG5_RESULT_7_6>
#### bfcrt011
<link=BFCRT011>
#### BFCRT232
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AOI1.BFCRT232
   p.AOI2.BFCRT232
#### sel4
<link=SEL4>
#### SEL17
<link=p.XBARA1.SEL17>
#### sel30
<link=SEL30>
#### SEL39
<link=p.XBARA1.SEL39>
#### sel45
<link=SEL45>
#### sel52
<link=SEL52>
#### sel63
<link=SEL63>
#### SEL65
<link=p.XBARA1.SEL65>
#### uinit
<link=UINIT>
#### TST
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.TST
   p.ENC2.TST
   p.ENC3.TST
   p.ENC4.TST
#### UMOD
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.UMOD
   p.ENC2.UMOD
   p.ENC3.UMOD
   p.ENC4.UMOD
#### umod
<link=UMOD>
#### UCOMP
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.UCOMP
   p.ENC2.UCOMP
   p.ENC3.UCOMP
   p.ENC4.UCOMP
#### sm0val0
<link=SM0VAL0>
#### sm0captcompb
<link=SM0CAPTCOMPB>
#### SM0CAPTCTRLX
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CAPTCTRLX
   p.PWM2.SM0CAPTCTRLX
   p.PWM3.SM0CAPTCTRLX
   p.PWM4.SM0CAPTCTRLX
#### sm0captctrlx
<link=SM0CAPTCTRLX>
#### sm0cval2cyc
<link=SM0CVAL2CYC>
#### SM1CTRL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CTRL2
   p.PWM2.SM1CTRL2
   p.PWM3.SM1CTRL2
   p.PWM4.SM1CTRL2
#### sm1val1
<link=SM1VAL1>
#### SM1TCTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1TCTRL
   p.PWM2.SM1TCTRL
   p.PWM3.SM1TCTRL
   p.PWM4.SM1TCTRL
#### SM1DISMAP1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1DISMAP1
   p.PWM2.SM1DISMAP1
   p.PWM3.SM1DISMAP1
   p.PWM4.SM1DISMAP1
#### sm1dismap1
<link=SM1DISMAP1>
#### sm1cval1
<link=SM1CVAL1>
#### SM2CTRL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CTRL2
   p.PWM2.SM2CTRL2
   p.PWM3.SM2CTRL2
   p.PWM4.SM2CTRL2
#### SM2VAL4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2VAL4
   p.PWM2.SM2VAL4
   p.PWM3.SM2VAL4
   p.PWM4.SM2VAL4
#### sm2octrl
<link=SM2OCTRL>
#### SM2INTEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2INTEN
   p.PWM2.SM2INTEN
   p.PWM3.SM2INTEN
   p.PWM4.SM2INTEN
#### SM2DMAEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2DMAEN
   p.PWM2.SM2DMAEN
   p.PWM3.SM2DMAEN
   p.PWM4.SM2DMAEN
#### SM2CAPTCOMPA
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CAPTCOMPA
   p.PWM2.SM2CAPTCOMPA
   p.PWM3.SM2CAPTCOMPA
   p.PWM4.SM2CAPTCOMPA
#### sm2captctrlx
<link=SM2CAPTCTRLX>
#### sm2captcompx
<link=SM2CAPTCOMPX>
#### SM3CNT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CNT
   p.PWM2.SM3CNT
   p.PWM3.SM3CNT
   p.PWM4.SM3CNT
#### sm3fracval3
<link=SM3FRACVAL3>
#### SM3VAL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3VAL5
   p.PWM2.SM3VAL5
   p.PWM3.SM3VAL5
   p.PWM4.SM3VAL5
#### SM3CVAL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL1
   p.PWM2.SM3CVAL1
   p.PWM3.SM3CVAL1
   p.PWM4.SM3CVAL1
#### SM3CVAL2CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL2CYC
   p.PWM2.SM3CVAL2CYC
   p.PWM3.SM3CVAL2CYC
   p.PWM4.SM3CVAL2CYC
#### sm3cval2cyc
<link=SM3CVAL2CYC>
#### FSTS0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.FSTS0
   p.PWM2.FSTS0
   p.PWM3.FSTS0
   p.PWM4.FSTS0
#### CTR_NONCE0_W1
<link=p.BEE.CTR_NONCE0_W1>
#### region1_bot
<link=REGION1_BOT>
#### mdmr
<link=MDMR>
#### VTOR
<link=p.SystemControl.VTOR>
#### shpr2
<link=SHPR2>
#### DFSR
<link=p.SystemControl.DFSR>
#### dccimvac
<link=DCCIMVAC>
#### nviciabr2
<link=NVICIABR2>
#### NVICIABR4
<link=p.NVIC.NVICIABR4>
#### NVICIP7
<link=p.NVIC.NVICIP7>
#### nvicip13
<link=NVICIP13>
#### NVICIP20
<link=p.NVIC.NVICIP20>
#### nvicip35
<link=NVICIP35>
#### NVICIP42
<link=p.NVIC.NVICIP42>
#### nvicip45
<link=NVICIP45>
#### NVICIP55
<link=p.NVIC.NVICIP55>
#### nvicip63
<link=NVICIP63>
#### NVICIP73
<link=p.NVIC.NVICIP73>
#### nvicip79
<link=NVICIP79>
#### nvicip81
<link=NVICIP81>
#### NVICIP86
<link=p.NVIC.NVICIP86>
#### NVICIP91
<link=p.NVIC.NVICIP91>
#### NVICIP104
<link=p.NVIC.NVICIP104>
#### nvicip111
<link=NVICIP111>
#### nvicip137
<link=NVICIP137>
#### nvicip146
<link=NVICIP146>
#### NVICIP148
<link=p.NVIC.NVICIP148>
#### NVICIP154
<link=p.NVIC.NVICIP154>
