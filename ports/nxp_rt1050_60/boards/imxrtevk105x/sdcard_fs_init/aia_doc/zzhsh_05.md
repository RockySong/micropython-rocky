#### AIPSTZ1.OPACR
<link=p.AIPSTZ1.OPACR>
#### p.aipstz1.opacr3
<link=p.AIPSTZ1.OPACR3>
#### aipstz2.opacr3
<link=p.AIPSTZ2.OPACR3>
#### aipstz3.opacr1
<link=p.AIPSTZ3.OPACR1>
#### p.AIPSTZ4.OPACR3
<lang=dft>
 (rw)  [1;33m0x4037c04c[0m (0x4037c000 + 0x004c)
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
#### AIPSTZ4.OPACR3
<link=p.AIPSTZ4.OPACR3>
#### DCDC.REG0
<link=p.DCDC.REG0>
#### p.dcdc.reg1
<link=p.DCDC.REG1>
#### PIT.LDVAL1
<link=p.PIT.LDVAL1>
#### p.pit.cval1
<link=p.PIT.CVAL1>
#### p.PIT.TCTRL1
<lang=dft>
 (rw)  [1;33m0x40084118[0m (0x40084000 + 0x0118)
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
#### p.pit.tctrl3
<link=p.PIT.TCTRL3>
#### p.PIT.MCR
<lang=dft>
 (rw)  [1;33m0x40084000[0m (0x40084000 + 0x0000)
PIT Module Control Register
 (rw) (01)  [0;32mFRZ[0m  - [00:00] -  Freeze
      0 - FRZ_0 :
         Timers continue to run in Debug mode.
      0x1 - FRZ_1 :
         Timers are stopped in Debug mode.
 (rw) (01)  [0;32mMDIS[0m  - [01:01] -  Module Disable - (PIT section)
      0 - MDIS_0 :
         Clock for standard PIT timers is enabled.
      0x1 - MDIS_1 :
         Clock for standard PIT timers is disabled.
</lang>
#### cmp1.cr1
<link=p.CMP1.CR1>
#### p.cmp4.scr
<link=p.CMP4.SCR>
#### IOMUXC_SNVS_GPR.GPR3
<link=p.IOMUXC_SNVS_GPR.GPR3>
#### iomuxc_snvs.sw_mux_ctl_pad_wakeup
<link=p.IOMUXC_SNVS.SW_MUX_CTL_PAD_WAKEUP>
#### p.IOMUXC_SNVS.SW_MUX_CTL_PAD_PMIC_ON_REQ
<lang=dft>
 (rw)  [1;33m0x400a8004[0m (0x400a8000 + 0x0004)
SW_MUX_CTL_PAD_PMIC_ON_REQ SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SNVS_LP_PMIC_ON_REQ of instance: snvs_l
         p
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO5_IO01 of instance: gpio5
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad PMIC_ON_REQ
</lang>
#### p.IOMUXC_SNVS.SW_MUX_CTL_PAD_PMIC_STBY_REQ
<lang=dft>
 (rw)  [1;33m0x400a8008[0m (0x400a8000 + 0x0008)
SW_MUX_CTL_PAD_PMIC_STBY_REQ SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: CCM_PMIC_VSTBY_REQ of instance: ccm
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO5_IO02 of instance: gpio5
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad PMIC_STBY_REQ
</lang>
#### iomuxc_snvs.sw_pad_ctl_pad_test_mode
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_TEST_MODE>
#### p.IOMUXC_SNVS.SW_PAD_CTL_PAD_ONOFF
<lang=dft>
 (rw)  [1;33m0x400a8014[0m (0x400a8000 + 0x0014)
SW_PAD_CTL_PAD_ONOFF SW PAD Control Register
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
#### iomuxc_snvs.sw_pad_ctl_pad_pmic_stby_req
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_PMIC_STBY_REQ>
#### p.iomuxc_gpr.gpr4
<link=p.IOMUXC_GPR.GPR4>
#### IOMUXC_GPR.GPR8
<link=p.IOMUXC_GPR.GPR8>
#### p.IOMUXC_GPR.GPR9
<lang=dft>
 (ro)  [1;33m0x400ac024[0m (0x400ac000 + 0x0024)
GPR9 General Purpose Register
</lang>
#### iomuxc_gpr.gpr11
<link=p.IOMUXC_GPR.GPR11>
#### IOMUXC_GPR.GPR14
<link=p.IOMUXC_GPR.GPR14>
#### p.iomuxc_gpr.gpr15
<link=p.IOMUXC_GPR.GPR15>
#### iomuxc_gpr.gpr20
<link=p.IOMUXC_GPR.GPR20>
#### IOMUXC_GPR.GPR25
<link=p.IOMUXC_GPR.GPR25>
#### p.IOMUXC_GPR.GPR27
<lang=dft>
 (rw)  [1;33m0x400ac06c[0m (0x400ac000 + 0x006c)
GPR27 General Purpose Register
 (rw) (32)  [0;32mGPIO_MUX2_GPIO_SEL[0m  - [31:00] -  GPIO2 and GPIO7 share same IO MUX function, GPIO_MUX2 selects one GPIO function
 .
</lang>
#### p.iomuxc_gpr.gpr28
<link=p.IOMUXC_GPR.GPR28>
#### p.IOMUXC_GPR.GPR30
<lang=dft>
 (rw)  [1;33m0x400ac078[0m (0x400ac000 + 0x0078)
GPR30 General Purpose Register
 (rw) (20)  [0;32mFLEXSPI_REMAP_ADDR_START[0m  - [31:12] -  Start address of flexspi1 and flexspi2
</lang>
#### p.flexram.int_status
<link=p.FLEXRAM.INT_STATUS>
#### EWM.SERV
<link=p.EWM.SERV>
#### ewm.cmpl
<link=p.EWM.CMPL>
#### p.ewm.clkprescaler
<link=p.EWM.CLKPRESCALER>
#### p.WDOG1.WCR
<lang=dft>
 (rw)  [1;33m0x400b8000[0m (0x400b8000 + 0x0000)
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
#### wdog1.wmcr
<link=p.WDOG1.WMCR>
#### wdog2.wrsr
<link=p.WDOG2.WRSR>
#### p.wdog2.wmcr
<link=p.WDOG2.WMCR>
#### p.RTWDOG.CS
<lang=dft>
 (rw)  [1;33m0x400bc000[0m (0x400bc000 + 0x0000)
Watchdog Control and Status Register
 (rw) (01)  [0;32mSTOP[0m  - [00:00] -  Stop Enable
      0 - STOP_0 :
         Watchdog disabled in chip stop mode.
      0x1 - STOP_1 :
         Watchdog enabled in chip stop mode.
 (rw) (01)  [0;32mWAIT[0m  - [01:01] -  Wait Enable
      0 - WAIT_0 :
         Watchdog disabled in chip wait mode.
      0x1 - WAIT_1 :
         Watchdog enabled in chip wait mode.
 (rw) (01)  [0;32mDBG[0m  - [02:02] -  Debug Enable
      0 - DBG_0 :
         Watchdog disabled in chip debug mode.
      0x1 - DBG_1 :
         Watchdog enabled in chip debug mode.
 (rw) (02)  [0;32mTST[0m  - [04:03] -  Watchdog Test
      0 - TST_0 :
         Watchdog test mode disabled.
      0x1 - TST_1 :
         Watchdog user mode enabled. (Watchdog test mode disabled.) After testin
         g the watchdog, software should use this setting to indicate that the w
         atchdog is functioning normally in user mode.
      0x2 - TST_2 :
         Watchdog test mode enabled, only the low byte is used. CNT[CNTLOW] is c
         ompared with TOVAL[TOVALLOW].
      0x3 - TST_3 :
         Watchdog test mode enabled, only the high byte is used. CNT[CNTHIGH] is
          compared with TOVAL[TOVALHIGH].
 (rw) (01)  [0;32mUPDATE[0m  - [05:05] -  Allow updates
      0 - UPDATE_0 :
         Updates not allowed. After the initial configuration, the watchdog cann
         ot be later modified without forcing a reset.
      0x1 - UPDATE_1 :
         Updates allowed. Software can modify the watchdog configuration registe
         rs within 128 bus clocks after performing the unlock write sequence.
 (rw) (01)  [0;32mINT[0m  - [06:06] -  Watchdog Interrupt
      0 - INT_0 :
         Watchdog interrupts are disabled. Watchdog resets are not delayed.
      0x1 - INT_1 :
         Watchdog interrupts are enabled. Watchdog resets are delayed by 128 bus
          clocks from the interrupt vector fetch.
 (rw) (01)  [0;32mEN[0m  - [07:07] -  Watchdog Enable
      0 - EN_0 :
         Watchdog disabled.
      0x1 - EN_1 :
         Watchdog enabled.
 (rw) (02)  [0;32mCLK[0m  - [09:08] -  Watchdog Clock
      0 - CLK_0 :
         Bus clock
      0x1 - CLK_1 :
         LPO clock
      0x2 - CLK_2 :
         INTCLK (internal clock)
      0x3 - CLK_3 :
         ERCLK (external reference clock)
 (ro) (01)  [0;32mRCS[0m  - [10:10] -  Reconfiguration Success
      0 - RCS_0 :
         Reconfiguring WDOG.
      0x1 - RCS_1 :
         Reconfiguration is successful.
 (ro) (01)  [0;32mULK[0m  - [11:11] -  Unlock status
      0 - ULK_0 :
         WDOG is locked.
      0x1 - ULK_1 :
         WDOG is unlocked.
 (rw) (01)  [0;32mPRES[0m  - [12:12] -  Watchdog prescaler
      0 - PRES_0 :
         256 prescaler disabled.
      0x1 - PRES_1 :
         256 prescaler enabled.
 (rw) (01)  [0;32mCMD32EN[0m  - [13:13] -  Enables or disables WDOG support for 32-bit (otherwise 16-bit or 8-bit) refresh
 /unlock command write words
      0 - CMD32EN_0 :
         Disables support for 32-bit refresh/unlock command write words. Only 16
         -bit or 8-bit is supported.
      0x1 - CMD32EN_1 :
         Enables support for 32-bit refresh/unlock command write words. 16-bit o
         r 8-bit is NOT supported.
 (rw) (01)  [0;32mFLG[0m  - [14:14] -  Watchdog Interrupt Flag
      0 - FLG_0 :
         No interrupt occurred.
      0x1 - FLG_1 :
         An interrupt occurred.
 (rw) (01)  [0;32mWIN[0m  - [15:15] -  Watchdog Window
      0 - WIN_0 :
         Window mode disabled.
      0x1 - WIN_1 :
         Window mode enabled.
</lang>
#### p.rtwdog.toval
<link=p.RTWDOG.TOVAL>
#### p.ADC1.HS
<lang=dft>
 (ro)  [1;33m0x400c4020[0m (0x400c4000 + 0x0020)
Status register for HW triggers
 (ro) (01)  [0;32mCOCO0[0m  - [00:00] -  Conversion Complete Flag
</lang>
#### adc1.r1
<link=p.ADC1.R1>
#### p.adc1.r5
<link=p.ADC1.R5>
#### p.adc1.cfg
<link=p.ADC1.CFG>
#### p.ADC1.GC
<lang=dft>
 (rw)  [1;33m0x400c4048[0m (0x400c4000 + 0x0048)
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
#### adc2.hc2
<link=p.ADC2.HC2>
#### p.adc2.hc6
<link=p.ADC2.HC6>
#### p.ADC2.HS
<lang=dft>
 (ro)  [1;33m0x400c8020[0m (0x400c8000 + 0x0020)
Status register for HW triggers
 (ro) (01)  [0;32mCOCO0[0m  - [00:00] -  Conversion Complete Flag
</lang>
#### adc2.r3
<link=p.ADC2.R3>
#### p.ADC2.R5
<lang=dft>
 (ro)  [1;33m0x400c8038[0m (0x400c8000 + 0x0038)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### ADC2.R7
<link=p.ADC2.R7>
#### p.TRNG
<lang=dft>
base: 0x400cc000
ENT[0]          ENT[10]         ENT[11]         ENT[12]         
ENT[13]         ENT[14]         ENT[15]         ENT[1]          
ENT[2]          ENT[3]          ENT[4]          ENT[5]          
ENT[6]          ENT[7]          ENT[8]          ENT[9]          
FRQCNT          FRQMAX          FRQMIN          INT_CTRL        
INT_MASK        INT_STATUS      MCTL            PKRCNT10        
PKRCNT32        PKRCNT54        PKRCNT76        PKRCNT98        
PKRCNTBA        PKRCNTDC        PKRCNTFE        PKRMAX          
PKRRNG          PKRSQ           SBLIM           SCMC            
SCMISC          SCML            SCR1C           SCR1L           
SCR2C           SCR2L           SCR3C           SCR3L           
SCR4C           SCR4L           SCR5C           SCR5L           
SCR6PC          SCR6PL          SDCTL           SEC_CFG         
STATUS          TOTSAM          VID1            VID2            
输入 p.TRNG.{reg_name} 以查看寄存器的详细信息
type p.TRNG.{reg_name} to check details of registers
</lang>
#### trng.frqcnt
<link=p.TRNG.FRQCNT>
#### trng.scr1l
<link=p.TRNG.SCR1L>
#### p.trng.scr2c
<link=p.TRNG.SCR2C>
#### p.trng.scr3l
<link=p.TRNG.SCR3L>
#### TRNG.SCR5L
<link=p.TRNG.SCR5L>
#### trng.scr6pc
<link=p.TRNG.SCR6PC>
#### p.TRNG.ENT[7]
<lang=dft>
 (ro)  [1;33m0x400cc05c[0m (0x400cc000 + 0x005c)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### p.trng.ent[7]
<link=p.TRNG.ENT[7]>
#### trng.ent[9]
<link=p.TRNG.ENT[9]>
#### trng.ent[12]
<link=p.TRNG.ENT[12]>
#### p.trng.ent[15]
<link=p.TRNG.ENT[15]>
#### trng.pkrcntba
<link=p.TRNG.PKRCNTBA>
#### p.TRNG.PKRCNTFE
<lang=dft>
 (ro)  [1;33m0x400cc09c[0m (0x400cc000 + 0x009c)
Statistical Check Poker Count F and E Register
 (ro) (16)  [0;32mPKR_E_CT[0m  - [15:00] -  Poker Eh Count
 (ro) (16)  [0;32mPKR_F_CT[0m  - [31:16] -  Poker Fh Count
</lang>
#### trng.int_ctrl
<link=p.TRNG.INT_CTRL>
#### p.TRNG.INT_STATUS
<lang=dft>
 (ro)  [1;33m0x400cc0ac[0m (0x400cc000 + 0x00ac)
Interrupt Status Register
 (ro) (01)  [0;32mHW_ERR[0m  - [00:00] -  Read: Error status
      0 - HW_ERR_0 :
         no error
      0x1 - HW_ERR_1 :
         error detected.
 (ro) (01)  [0;32mENT_VAL[0m  - [01:01] -  Read only: Entropy Valid
      0 - ENT_VAL_0 :
         Busy generation entropy. Any value read is invalid.
      0x1 - ENT_VAL_1 :
         TRNG can be stopped and entropy is valid if read.
 (ro) (01)  [0;32mFRQ_CT_FAIL[0m  - [02:02] -  Read only: Frequency Count Fail
      0 - FRQ_CT_FAIL_0 :
         No hardware nor self test frequency errors.
      0x1 - FRQ_CT_FAIL_1 :
         The frequency counter has detected a failure.
</lang>
#### trng.vid1
<link=p.TRNG.VID1>
#### snvs.hpsvcr
<link=p.SNVS.HPSVCR>
#### SNVS.HPHACIVR
<link=p.SNVS.HPHACIVR>
#### snvs.hphacr
<link=p.SNVS.HPHACR>
#### SNVS.HPHACR
<link=p.SNVS.HPHACR>
#### p.snvs.hptalr
<link=p.SNVS.HPTALR>
#### snvs.lpzmkr[1]
<link=p.SNVS.LPZMKR[1]>
#### p.SNVS.LPZMKR[6]
<lang=dft>
 (rw)  [1;33m0x400d4084[0m (0x400d4000 + 0x0084)
SNVS_LP Zeroizable Master Key Register
 (rw) (32)  [0;32mZMK[0m  - [31:00] -  Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit Z
 MK value
</lang>
#### SNVS.LPZMKR[7]
<link=p.SNVS.LPZMKR[7]>
#### p.snvs.lpgpr_alias[2]
<link=p.SNVS.LPGPR_ALIAS[2]>
#### p.SNVS.LPGPR[5]
<lang=dft>
 (rw)  [1;33m0x400d4114[0m (0x400d4000 + 0x0114)
SNVS_LP General Purpose Registers 0 .. 7
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### snvs.hpvidr1
<link=p.SNVS.HPVIDR1>
#### CCM_ANALOG.PLL_SYS
<link=p.CCM_ANALOG.PLL_SYS>
#### p.ccm_analog.pll_sys_ss
<link=p.CCM_ANALOG.PLL_SYS_SS>
#### p.CCM_ANALOG.PLL_AUDIO_SET
<lang=dft>
 (rw)  [1;33m0x400d8074[0m (0x400d8000 + 0x0074)
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
#### CCM_ANALOG.PLL_VIDEO_SET
<link=p.CCM_ANALOG.PLL_VIDEO_SET>
#### ccm_analog.pll_video_clr
<link=p.CCM_ANALOG.PLL_VIDEO_CLR>
#### p.CCM_ANALOG.PLL_ENET
<lang=dft>
 (rw)  [1;33m0x400d80e0[0m (0x400d8000 + 0x00e0)
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
#### p.ccm_analog.pll_enet
<link=p.CCM_ANALOG.PLL_ENET>
#### CCM_ANALOG.PFD_480
<link=p.CCM_ANALOG.PFD_480>
#### p.CCM_ANALOG.PFD_528
<lang=dft>
 (rw)  [1;33m0x400d8100[0m (0x400d8000 + 0x0100)
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
#### CCM_ANALOG.PFD_528
<link=p.CCM_ANALOG.PFD_528>
#### p.CCM_ANALOG.MISC0
<lang=dft>
 (rw)  [1;33m0x400d8150[0m (0x400d8000 + 0x0150)
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
#### CCM_ANALOG.MISC0_SET
<link=p.CCM_ANALOG.MISC0_SET>
#### CCM_ANALOG.MISC0_TOG
<link=p.CCM_ANALOG.MISC0_TOG>
#### p.ccm_analog.misc1_tog
<link=p.CCM_ANALOG.MISC1_TOG>
#### PMU.REG_2P5
<link=p.PMU.REG_2P5>
#### pmu.reg_2p5_tog
<link=p.PMU.REG_2P5_TOG>
#### p.pmu.misc1
<link=p.PMU.MISC1>
#### pmu.misc1_clr
<link=p.PMU.MISC1_CLR>
#### p.tempmon.tempsense0
<link=p.TEMPMON.TEMPSENSE0>
#### p.TEMPMON.TEMPSENSE2_SET
<lang=dft>
 (rw)  [1;33m0x400d8294[0m (0x400d8000 + 0x0294)
Tempsensor Control Register 2
 (rw) (12)  [0;32mLOW_ALARM_VALUE[0m  - [11:00] -  This bit field contains the temperature count that will generate a low alarm in
 terrupt when the field is exceeded by TEMP_CNT
 (rw) (12)  [0;32mPANIC_ALARM_VALUE[0m  - [27:16] -  This bit field contains the temperature count that will generate a panic interr
 upt when TEMP_CNT is smaller than this field
</lang>
#### TEMPMON.TEMPSENSE2_TOG
<link=p.TEMPMON.TEMPSENSE2_TOG>
#### USB_ANALOG.USB1_VBUS_DETECT_SET
<link=p.USB_ANALOG.USB1_VBUS_DETECT_SET>
#### USB_ANALOG.USB1_CHRG_DETECT_CLR
<link=p.USB_ANALOG.USB1_CHRG_DETECT_CLR>
#### p.USB_ANALOG.USB1_CHRG_DETECT_TOG
<lang=dft>
 (rw)  [1;33m0x400d81bc[0m (0x400d8000 + 0x01bc)
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
#### p.usb_analog.usb1_misc
<link=p.USB_ANALOG.USB1_MISC>
#### usb_analog.usb1_misc
<link=p.USB_ANALOG.USB1_MISC>
#### usb_analog.usb2_vbus_detect
<link=p.USB_ANALOG.USB2_VBUS_DETECT>
#### USB_ANALOG.USB2_VBUS_DETECT_SET
<link=p.USB_ANALOG.USB2_VBUS_DETECT_SET>
#### USB_ANALOG.USB2_LOOPBACK_CLR
<link=p.USB_ANALOG.USB2_LOOPBACK_CLR>
#### usb_analog.usb2_misc
<link=p.USB_ANALOG.USB2_MISC>
#### p.xtalosc24m.misc0_tog
<link=p.XTALOSC24M.MISC0_TOG>
#### xtalosc24m.lowpwr_ctrl_set
<link=p.XTALOSC24M.LOWPWR_CTRL_SET>
#### p.xtalosc24m.lowpwr_ctrl_clr
<link=p.XTALOSC24M.LOWPWR_CTRL_CLR>
#### p.xtalosc24m.osc_config0_clr
<link=p.XTALOSC24M.OSC_CONFIG0_CLR>
#### XTALOSC24M.OSC_CONFIG2
<link=p.XTALOSC24M.OSC_CONFIG2>
#### XTALOSC24M.OSC_CONFIG2_TOG
<link=p.XTALOSC24M.OSC_CONFIG2_TOG>
#### USBPHY1.PWD_SET
<link=p.USBPHY1.PWD_SET>
#### USBPHY1.TX_SET
<link=p.USBPHY1.TX_SET>
#### USBPHY1.TX_CLR
<link=p.USBPHY1.TX_CLR>
#### usbphy1.rx
<link=p.USBPHY1.RX>
#### p.USBPHY1.RX_SET
<lang=dft>
 (rw)  [1;33m0x400d9024[0m (0x400d9000 + 0x0024)
USB PHY Receiver Control Register
 (rw) (03)  [0;32mENVADJ[0m  - [02:00] -  The ENVADJ field adjusts the trip point for the envelope detector
 (ro) (01)  [0;32mRSVD0[0m  - [03:03] -  Reserved.
 (rw) (03)  [0;32mDISCONADJ[0m  - [06:04] -  The DISCONADJ field adjusts the trip point for the disconnect detector: 000 = T
 rip-Level Voltage is 0
 (ro) (15)  [0;32mRSVD1[0m  - [21:07] -  Reserved.
 (rw) (01)  [0;32mRXDBYPASS[0m  - [22:22] -  0 = Normal operation
 (ro) (09)  [0;32mRSVD2[0m  - [31:23] -  Reserved.
</lang>
#### usbphy1.rx_tog
<link=p.USBPHY1.RX_TOG>
#### p.usbphy1.debug_clr
<link=p.USBPHY1.DEBUG_CLR>
#### usbphy1.debug1_set
<link=p.USBPHY1.DEBUG1_SET>
#### usbphy2.pwd_set
<link=p.USBPHY2.PWD_SET>
#### USBPHY2.PWD_CLR
<link=p.USBPHY2.PWD_CLR>
#### USBPHY2.PWD_TOG
<link=p.USBPHY2.PWD_TOG>
#### p.USBPHY2.TX_CLR
<lang=dft>
 (rw)  [1;33m0x400da018[0m (0x400da000 + 0x0018)
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
#### USBPHY2.RX
<link=p.USBPHY2.RX>
#### p.USBPHY2.RX_SET
<lang=dft>
 (rw)  [1;33m0x400da024[0m (0x400da000 + 0x0024)
USB PHY Receiver Control Register
 (rw) (03)  [0;32mENVADJ[0m  - [02:00] -  The ENVADJ field adjusts the trip point for the envelope detector
 (ro) (01)  [0;32mRSVD0[0m  - [03:03] -  Reserved.
 (rw) (03)  [0;32mDISCONADJ[0m  - [06:04] -  The DISCONADJ field adjusts the trip point for the disconnect detector: 000 = T
 rip-Level Voltage is 0
 (ro) (15)  [0;32mRSVD1[0m  - [21:07] -  Reserved.
 (rw) (01)  [0;32mRXDBYPASS[0m  - [22:22] -  0 = Normal operation
 (ro) (09)  [0;32mRSVD2[0m  - [31:23] -  Reserved.
</lang>
#### p.usbphy2.ctrl
<link=p.USBPHY2.CTRL>
#### p.USBPHY2.CTRL_SET
<lang=dft>
 (rw)  [1;33m0x400da034[0m (0x400da000 + 0x0034)
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
#### p.usbphy2.version
<link=p.USBPHY2.VERSION>
#### p.CSU.CSL8
<lang=dft>
 (rw)  [1;33m0x400dc020[0m (0x400dc000 + 0x0020)
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
#### p.csu.csl8
<link=p.CSU.CSL8>
#### csu.csl10
<link=p.CSU.CSL10>
#### CSU.CSL10
<link=p.CSU.CSL10>
#### p.CSU.CSL20
<lang=dft>
 (rw)  [1;33m0x400dc050[0m (0x400dc000 + 0x0050)
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
#### p.csu.csl20
<link=p.CSU.CSL20>
#### TSC.INT_STATUS
<link=p.TSC.INT_STATUS>
#### p.tsc.debug_mode
<link=p.TSC.DEBUG_MODE>
#### tsc.debug_mode
<link=p.TSC.DEBUG_MODE>
#### p.TSC.DEBUG_MODE2
<lang=dft>
 (rw)  [1;33m0x400e0080[0m (0x400e0000 + 0x0080)
no description available
 (rw) (01)  [0;32mXPUL_PULL_DOWN[0m  - [00:00] -  XPUL Wire Pull Down Switch
      0 - XPUL_PULL_DOWN_0 :
         Close the switch
      0x1 - XPUL_PULL_DOWN_1 :
         Open up the switch
 (rw) (01)  [0;32mXPUL_PULL_UP[0m  - [01:01] -  XPUL Wire Pull Up Switch
      0 - XPUL_PULL_UP_0 :
         Close the switch
      0x1 - XPUL_PULL_UP_1 :
         Open up the switch
 (rw) (01)  [0;32mXPUL_200K_PULL_UP[0m  - [02:02] -  XPUL Wire 200K Pull Up Switch
      0 - XPUL_200K_PULL_UP_0 :
         Close the switch
      0x1 - XPUL_200K_PULL_UP_1 :
         Open up the switch
 (rw) (01)  [0;32mXNUR_PULL_DOWN[0m  - [03:03] -  XNUR Wire Pull Down Switch
      0 - XNUR_PULL_DOWN_0 :
         Close the switch
      0x1 - XNUR_PULL_DOWN_1 :
         Open up the switch
 (rw) (01)  [0;32mXNUR_PULL_UP[0m  - [04:04] -  XNUR Wire Pull Up Switch
      0 - XNUR_PULL_UP_0 :
         Close the switch
      0x1 - XNUR_PULL_UP_1 :
         Open up the switch
 (rw) (01)  [0;32mXNUR_200K_PULL_UP[0m  - [05:05] -  XNUR Wire 200K Pull Up Switch
      0 - XNUR_200K_PULL_UP_0 :
         Close the switch
      0x1 - XNUR_200K_PULL_UP_1 :
         Open up the switch
 (rw) (01)  [0;32mYPLL_PULL_DOWN[0m  - [06:06] -  YPLL Wire Pull Down Switch
      0 - YPLL_PULL_DOWN_0 :
         Close the switch
      0x1 - YPLL_PULL_DOWN_1 :
         Open up the switch
 (rw) (01)  [0;32mYPLL_PULL_UP[0m  - [07:07] -  YPLL Wire Pull Up Switch
      0 - YPLL_PULL_UP_0 :
         Close the switch
      0x1 - YPLL_PULL_UP_1 :
         Open the switch
 (rw) (01)  [0;32mYPLL_200K_PULL_UP[0m  - [08:08] -  YPLL Wire 200K Pull Up Switch
      0 - YPLL_200K_PULL_UP_0 :
         Close the switch
      0x1 - YPLL_200K_PULL_UP_1 :
         Open up the switch
 (rw) (01)  [0;32mYNLR_PULL_DOWN[0m  - [09:09] -  YNLR Wire Pull Down Switch
      0 - YNLR_PULL_DOWN_0 :
         Close the switch
      0x1 - YNLR_PULL_DOWN_1 :
         Open up the switch
 (rw) (01)  [0;32mYNLR_PULL_UP[0m  - [10:10] -  YNLR Wire Pull Up Switch
      0 - YNLR_PULL_UP_0 :
         Close the switch
      0x1 - YNLR_PULL_UP_1 :
         Open up the switch
 (rw) (01)  [0;32mYNLR_200K_PULL_UP[0m  - [11:11] -  YNLR Wire 200K Pull Up Switch
      0 - YNLR_200K_PULL_UP_0 :
         Close the switch
      0x1 - YNLR_200K_PULL_UP_1 :
         Open up the switch
 (rw) (01)  [0;32mWIPER_PULL_DOWN[0m  - [12:12] -  Wiper Wire Pull Down Switch
      0 - WIPER_PULL_DOWN_0 :
         Close the switch
      0x1 - WIPER_PULL_DOWN_1 :
         Open up the switch
 (rw) (01)  [0;32mWIPER_PULL_UP[0m  - [13:13] -  Wiper Wire Pull Up Switch
      0 - WIPER_PULL_UP_0 :
         Close the switch
      0x1 - WIPER_PULL_UP_1 :
         Open up the switch
 (rw) (01)  [0;32mWIPER_200K_PULL_UP[0m  - [14:14] -  Wiper Wire 200K Pull Up Switch
      0 - WIPER_200K_PULL_UP_0 :
         Close the switch
      0x1 - WIPER_200K_PULL_UP_1 :
         Open up the switch
 (ro) (01)  [0;32mDETECT_FOUR_WIRE[0m  - [16:16] -  Detect Four Wire
      0 - DETECT_FOUR_WIRE_0 :
         No detect signal
      0x1 - DETECT_FOUR_WIRE_1 :
         Yes, there is a detect on the touch screen.
 (ro) (01)  [0;32mDETECT_FIVE_WIRE[0m  - [17:17] -  Detect Five Wire
      0 - DETECT_FIVE_WIRE_0 :
         No detect signal
      0x1 - DETECT_FIVE_WIRE_1 :
         Yes, there is a detect on the touch screen.
 (ro) (03)  [0;32mSTATE_MACHINE[0m  - [22:20] -  State Machine
      0 - STATE_MACHINE_0 :
         Idle
      0x1 - STATE_MACHINE_1 :
         Pre-charge
      0x2 - STATE_MACHINE_2 :
         Detect
      0x3 - STATE_MACHINE_3 :
         X-measure
      0x4 - STATE_MACHINE_4 :
         Y-measure
      0x5 - STATE_MACHINE_5 :
         Pre-charge
      0x6 - STATE_MACHINE_6 :
         Detect
 (ro) (01)  [0;32mINTERMEDIATE[0m  - [23:23] -  Intermediate State
      0 - INTERMEDIATE_0 :
         Not in intermedia
      0x1 - INTERMEDIATE_1 :
         Intermedia
 (rw) (01)  [0;32mDETECT_ENABLE_FOUR_WIRE[0m  - [24:24] -  Detect Enable Four Wire
      0 - DETECT_ENABLE_FOUR_WIRE_0 :
         Do not read four wire detect value, read default value from analogue
      0x1 - DETECT_ENABLE_FOUR_WIRE_1 :
         Read four wire detect status from analogue
 (rw) (01)  [0;32mDETECT_ENABLE_FIVE_WIRE[0m  - [28:28] -  Detect Enable Five Wire
      0 - DETECT_ENABLE_FIVE_WIRE_0 :
         Do not read five wire detect value, read default value from analogue
      0x1 - DETECT_ENABLE_FIVE_WIRE_1 :
         Read five wire detect status from analogue
 (ro) (02)  [0;32mDE_GLITCH[0m  - [30:29] -  This field indicates glitch threshold
      0 - DE_GLITCH_0 :
         Normal function: 0x1fff ipg clock cycles; Low power mode: 0x9 low power
          clock cycles
      0x1 - DE_GLITCH_1 :
         Normal function: 0xfff ipg clock cycles; Low power mode: :0x7 low power
          clock cycles
      0x2 - DE_GLITCH_2 :
         Normal function: 0x7ff ipg clock cycles; Low power mode:0x5 low power c
         lock cycles
      0x3 - DE_GLITCH_3 :
         Normal function: 0x3 ipg clock cycles; Low power mode:0x3 low power clo
         ck cycles
</lang>
#### p.dma0.seei
<link=p.DMA0.SEEI>
#### p.DMA0.CINT
<lang=dft>
 (rw)  [1;33m0x400e801f[0m (0x400e8000 + 0x001f)
Clear Interrupt Request Register
 (rw) (05)  [0;32mCINT[0m  - [04:00] -  Clear Interrupt Request
 (rw) (01)  [0;32mCAIR[0m  - [06:06] -  Clear All Interrupt Requests
      0 - CAIR_0 :
         Clear only the INT bit specified in the CINT field
      0x1 - CAIR_1 :
         Clear all bits in INT
 (rw) (01)  [0;32mNOP[0m  - [07:07] -  No Op enable
      0 - NOP_0 :
         Normal operation
      0x1 - NOP_1 :
         No operation, ignore the other bits in this register
</lang>
#### dma0.dchpri1
<link=p.DMA0.DCHPRI1>
#### p.DMA0.DCHPRI5
<lang=dft>
 (rw)  [1;33m0x400e8106[0m (0x400e8000 + 0x0106)
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
#### dma0.dchpri19
<link=p.DMA0.DCHPRI19>
#### p.dma0.dchpri18
<link=p.DMA0.DCHPRI18>
#### DMA0.DCHPRI18
<link=p.DMA0.DCHPRI18>
#### p.DMA0.DCHPRI17
<lang=dft>
 (rw)  [1;33m0x400e8112[0m (0x400e8000 + 0x0112)
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
#### p.dma0.dchpri21
<link=p.DMA0.DCHPRI21>
#### dma0.dchpri25
<link=p.DMA0.DCHPRI25>
#### p.dma0.tcd0_saddr
<link=p.DMA0.TCD0_SADDR>
#### p.DMA0.TCD0_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9008[0m (0x400e8000 + 0x1008)
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
#### DMA0.TCD0_NBYTES_MLOFFNO
<link=p.DMA0.TCD0_NBYTES_MLOFFNO>
#### p.dma0.tcd0_doff
<link=p.DMA0.TCD0_DOFF>
#### DMA0.TCD0_BITER_ELINKNO
<link=p.DMA0.TCD0_BITER_ELINKNO>
#### dma0.tcd1_csr
<link=p.DMA0.TCD1_CSR>
#### p.DMA0.TCD2_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9048[0m (0x400e8000 + 0x1048)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.dma0.tcd2_daddr
<link=p.DMA0.TCD2_DADDR>
#### dma0.tcd3_nbytes_mlno
<link=p.DMA0.TCD3_NBYTES_MLNO>
#### dma0.tcd3_csr
<link=p.DMA0.TCD3_CSR>
#### p.DMA0.TCD3_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e907e[0m (0x400e8000 + 0x107e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd4_attr
<link=p.DMA0.TCD4_ATTR>
#### p.DMA0.TCD4_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9088[0m (0x400e8000 + 0x1088)
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
#### dma0.tcd4_slast
<link=p.DMA0.TCD4_SLAST>
#### dma0.tcd4_daddr
<link=p.DMA0.TCD4_DADDR>
#### p.dma0.tcd4_citer_elinkyes
<link=p.DMA0.TCD4_CITER_ELINKYES>
#### p.DMA0.TCD4_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e909e[0m (0x400e8000 + 0x109e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd5_doff
<link=p.DMA0.TCD5_DOFF>
#### p.dma0.tcd5_citer_elinkno
<link=p.DMA0.TCD5_CITER_ELINKNO>
#### DMA0.TCD5_CITER_ELINKYES
<link=p.DMA0.TCD5_CITER_ELINKYES>
#### p.dma0.tcd6_soff
<link=p.DMA0.TCD6_SOFF>
#### DMA0.TCD6_SOFF
<link=p.DMA0.TCD6_SOFF>
#### p.dma0.tcd6_nbytes_mloffyes
<link=p.DMA0.TCD6_NBYTES_MLOFFYES>
#### DMA0.TCD7_NBYTES_MLOFFYES
<link=p.DMA0.TCD7_NBYTES_MLOFFYES>
#### p.DMA0.TCD7_SLAST
<lang=dft>
 (rw)  [1;33m0x400e90ec[0m (0x400e8000 + 0x10ec)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### dma0.tcd8_nbytes_mloffno
<link=p.DMA0.TCD8_NBYTES_MLOFFNO>
#### p.dma0.tcd8_nbytes_mloffyes
<link=p.DMA0.TCD8_NBYTES_MLOFFYES>
#### DMA0.TCD8_SLAST
<link=p.DMA0.TCD8_SLAST>
#### DMA0.TCD8_DADDR
<link=p.DMA0.TCD8_DADDR>
#### dma0.tcd8_dlastsga
<link=p.DMA0.TCD8_DLASTSGA>
#### p.DMA0.TCD9_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9124[0m (0x400e8000 + 0x1124)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.dma0.tcd9_nbytes_mloffno
<link=p.DMA0.TCD9_NBYTES_MLOFFNO>
#### p.dma0.tcd9_citer_elinkno
<link=p.DMA0.TCD9_CITER_ELINKNO>
#### dma0.tcd9_dlastsga
<link=p.DMA0.TCD9_DLASTSGA>
#### p.DMA0.TCD10_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9144[0m (0x400e8000 + 0x1144)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.DMA0.TCD10_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9156[0m (0x400e8000 + 0x1156)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd10_citer_elinkno
<link=p.DMA0.TCD10_CITER_ELINKNO>
#### p.DMA0.TCD10_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e915e[0m (0x400e8000 + 0x115e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD11_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9160[0m (0x400e8000 + 0x1160)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### DMA0.TCD11_SOFF
<link=p.DMA0.TCD11_SOFF>
#### p.dma0.tcd11_nbytes_mlno
<link=p.DMA0.TCD11_NBYTES_MLNO>
#### p.DMA0.TCD12_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9180[0m (0x400e8000 + 0x1180)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.DMA0.TCD12_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9190[0m (0x400e8000 + 0x1190)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### dma0.tcd12_daddr
<link=p.DMA0.TCD12_DADDR>
#### DMA0.TCD12_DOFF
<link=p.DMA0.TCD12_DOFF>
#### dma0.tcd12_biter_elinkyes
<link=p.DMA0.TCD12_BITER_ELINKYES>
#### DMA0.TCD13_NBYTES_MLNO
<link=p.DMA0.TCD13_NBYTES_MLNO>
#### DMA0.TCD13_NBYTES_MLOFFYES
<link=p.DMA0.TCD13_NBYTES_MLOFFYES>
#### p.dma0.tcd13_daddr
<link=p.DMA0.TCD13_DADDR>
#### p.DMA0.TCD13_DOFF
<lang=dft>
 (rw)  [1;33m0x400e91b4[0m (0x400e8000 + 0x11b4)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.DMA0.TCD13_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e91b6[0m (0x400e8000 + 0x11b6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD13_BITER_ELINKNO
<link=p.DMA0.TCD13_BITER_ELINKNO>
#### DMA0.TCD14_SADDR
<link=p.DMA0.TCD14_SADDR>
#### dma0.tcd14_nbytes_mloffyes
<link=p.DMA0.TCD14_NBYTES_MLOFFYES>
#### DMA0.TCD14_DADDR
<link=p.DMA0.TCD14_DADDR>
#### p.dma0.tcd14_csr
<link=p.DMA0.TCD14_CSR>
#### DMA0.TCD14_CSR
<link=p.DMA0.TCD14_CSR>
#### dma0.tcd15_daddr
<link=p.DMA0.TCD15_DADDR>
#### p.DMA0.TCD16_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9208[0m (0x400e8000 + 0x1208)
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
#### p.dma0.tcd16_doff
<link=p.DMA0.TCD16_DOFF>
#### dma0.tcd16_doff
<link=p.DMA0.TCD16_DOFF>
#### p.dma0.tcd16_csr
<link=p.DMA0.TCD16_CSR>
#### p.DMA0.TCD16_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e921e[0m (0x400e8000 + 0x121e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD16_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e921e[0m (0x400e8000 + 0x121e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd17_soff
<link=p.DMA0.TCD17_SOFF>
#### DMA0.TCD17_SOFF
<link=p.DMA0.TCD17_SOFF>
#### dma0.tcd17_daddr
<link=p.DMA0.TCD17_DADDR>
#### p.dma0.tcd17_biter_elinkyes
<link=p.DMA0.TCD17_BITER_ELINKYES>
#### dma0.tcd17_biter_elinkyes
<link=p.DMA0.TCD17_BITER_ELINKYES>
#### p.dma0.tcd18_slast
<link=p.DMA0.TCD18_SLAST>
#### dma0.tcd18_slast
<link=p.DMA0.TCD18_SLAST>
#### p.DMA0.TCD18_CSR
<lang=dft>
 (rw)  [1;33m0x400e925c[0m (0x400e8000 + 0x125c)
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
#### dma0.tcd18_csr
<link=p.DMA0.TCD18_CSR>
#### p.dma0.tcd19_nbytes_mloffno
<link=p.DMA0.TCD19_NBYTES_MLOFFNO>
#### dma0.tcd19_slast
<link=p.DMA0.TCD19_SLAST>
#### dma0.tcd19_dlastsga
<link=p.DMA0.TCD19_DLASTSGA>
#### dma0.tcd20_nbytes_mlno
<link=p.DMA0.TCD20_NBYTES_MLNO>
#### p.dma0.tcd21_attr
<link=p.DMA0.TCD21_ATTR>
#### dma0.tcd21_nbytes_mlno
<link=p.DMA0.TCD21_NBYTES_MLNO>
#### DMA0.TCD21_DOFF
<link=p.DMA0.TCD21_DOFF>
#### DMA0.TCD22_SADDR
<link=p.DMA0.TCD22_SADDR>
#### p.DMA0.TCD22_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e92c8[0m (0x400e8000 + 0x12c8)
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
#### DMA0.TCD22_SLAST
<link=p.DMA0.TCD22_SLAST>
#### dma0.tcd22_citer_elinkno
<link=p.DMA0.TCD22_CITER_ELINKNO>
#### p.dma0.tcd22_dlastsga
<link=p.DMA0.TCD22_DLASTSGA>
#### dma0.tcd23_nbytes_mlno
<link=p.DMA0.TCD23_NBYTES_MLNO>
#### p.DMA0.TCD23_SLAST
<lang=dft>
 (rw)  [1;33m0x400e92ec[0m (0x400e8000 + 0x12ec)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### dma0.tcd24_nbytes_mloffyes
<link=p.DMA0.TCD24_NBYTES_MLOFFYES>
#### p.dma0.tcd24_doff
<link=p.DMA0.TCD24_DOFF>
#### p.dma0.tcd25_soff
<link=p.DMA0.TCD25_SOFF>
#### dma0.tcd25_soff
<link=p.DMA0.TCD25_SOFF>
#### p.DMA0.TCD25_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9326[0m (0x400e8000 + 0x1326)
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
#### DMA0.TCD25_NBYTES_MLOFFYES
<link=p.DMA0.TCD25_NBYTES_MLOFFYES>
#### dma0.tcd25_citer_elinkyes
<link=p.DMA0.TCD25_CITER_ELINKYES>
#### p.DMA0.TCD25_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e933e[0m (0x400e8000 + 0x133e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD26_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9348[0m (0x400e8000 + 0x1348)
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
#### p.dma0.tcd26_slast
<link=p.DMA0.TCD26_SLAST>
#### dma0.tcd26_biter_elinkyes
<link=p.DMA0.TCD26_BITER_ELINKYES>
#### p.dma0.tcd27_nbytes_mloffno
<link=p.DMA0.TCD27_NBYTES_MLOFFNO>
#### p.dma0.tcd27_nbytes_mloffyes
<link=p.DMA0.TCD27_NBYTES_MLOFFYES>
#### dma0.tcd27_biter_elinkno
<link=p.DMA0.TCD27_BITER_ELINKNO>
#### p.dma0.tcd28_slast
<link=p.DMA0.TCD28_SLAST>
#### p.dma0.tcd28_daddr
<link=p.DMA0.TCD28_DADDR>
#### p.dma0.tcd28_csr
<link=p.DMA0.TCD28_CSR>
#### dma0.tcd30_attr
<link=p.DMA0.TCD30_ATTR>
#### p.DMA0.TCD30_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e93de[0m (0x400e8000 + 0x13de)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD31_SADDR
<link=p.DMA0.TCD31_SADDR>
#### DMA0.TCD31_ATTR
<link=p.DMA0.TCD31_ATTR>
#### p.dma0.tcd31_nbytes_mloffyes
<link=p.DMA0.TCD31_NBYTES_MLOFFYES>
#### DMA0.TCD31_DADDR
<link=p.DMA0.TCD31_DADDR>
#### p.dma0.tcd31_dlastsga
<link=p.DMA0.TCD31_DLASTSGA>
#### DMA0.TCD31_BITER_ELINKYES
<link=p.DMA0.TCD31_BITER_ELINKYES>
#### dmamux.chcfg[1]
<link=p.DMAMUX.CHCFG[1]>
#### p.dmamux.chcfg[4]
<link=p.DMAMUX.CHCFG[4]>
#### dmamux.chcfg[12]
<link=p.DMAMUX.CHCFG[12]>
#### p.DMAMUX.CHCFG[15]
<lang=dft>
 (rw)  [1;33m0x400ec03c[0m (0x400ec000 + 0x003c)
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
#### p.dmamux.chcfg[24]
<link=p.DMAMUX.CHCFG[24]>
#### p.GPC
<lang=dft>
base: 0x400f4000
CNTR            IMR1            IMR2            IMR3            
IMR4            IMR5            ISR1            ISR2            
ISR3            ISR4            ISR5            
输入 p.GPC.{reg_name} 以查看寄存器的详细信息
type p.GPC.{reg_name} to check details of registers
</lang>
#### p.GPC.CNTR
<lang=dft>
 (rw)  [1;33m0x400f4000[0m (0x400f4000 + 0x0000)
GPC Interface control register
 (rw) (01)  [0;32mMEGA_PDN_REQ[0m  - [02:02] -  MEGA domain power down request
      0 - MEGA_PDN_REQ_0 :
         No Request
      0x1 - MEGA_PDN_REQ_1 :
         Request power down sequence
 (rw) (01)  [0;32mMEGA_PUP_REQ[0m  - [03:03] -  MEGA domain power up request
      0 - MEGA_PUP_REQ_0 :
         No Request
      0x1 - MEGA_PUP_REQ_1 :
         Request power up sequence
 (rw) (01)  [0;32mPDRAM0_PGE[0m  - [22:22] -  FlexRAM PDRAM0 Power Gate Enable
      0 - PDRAM0_PGE_0 :
         FlexRAM PDRAM0 domain will keep power on even if CPU core is power down
         .
      0x1 - PDRAM0_PGE_1 :
         FlexRAM PDRAM0 domain will be power down once when CPU core is power do
         wn.
</lang>
#### p.PGC
<lang=dft>
base: 0x400f4000
CPU_CTRL        CPU_PDNSCR      CPU_PUPSCR      CPU_SR          
MEGA_CTRL       MEGA_PDNSCR     MEGA_PUPSCR     MEGA_SR         
输入 p.PGC.{reg_name} 以查看寄存器的详细信息
type p.PGC.{reg_name} to check details of registers
</lang>
#### pgc.mega_pupscr
<link=p.PGC.MEGA_PUPSCR>
#### pgc.mega_sr
<link=p.PGC.MEGA_SR>
#### p.PGC.CPU_PUPSCR
<lang=dft>
 (rw)  [1;33m0x400f42a4[0m (0x400f4000 + 0x02a4)
PGC CPU Power Up Sequence Control Register
 (rw) (06)  [0;32mSW[0m  - [05:00] -  There are two different silicon revisions: 1
 (rw) (06)  [0;32mSW2ISO[0m  - [13:08] -  There are two different silicon revisions: 1
</lang>
#### p.src.srsr
<link=p.SRC.SRSR>
#### p.SRC.GPR4
<lang=dft>
 (rw)  [1;33m0x400f802c[0m (0x400f8000 + 0x002c)
SRC General Purpose Register 4
</lang>
#### SRC.GPR7
<link=p.SRC.GPR7>
#### p.CCM.CCR
<lang=dft>
 (rw)  [1;33m0x400fc000[0m (0x400fc000 + 0x0000)
CCM Control Register
 (rw) (08)  [0;32mOSCNT[0m  - [07:00] -  Oscillator ready counter value. These bits define value of 32KHz counter, that 
 serve as counter for oscillator lock time (count to n+1 ckil's). This is used f
 or oscillator lock time. Current estimation is ~5ms. This counter will be used 
 in ignition sequence and in wake from stop sequence if sbyos bit was defined, t
 o notify that on chip oscillator output is ready for the dpll_ip to use and onl
 y then the gate in dpll_ip can be opened.
 (rw) (01)  [0;32mCOSC_EN[0m  - [12:12] -  On chip oscillator enable bit - this bit value is reflected on the output cosc_
 en
      0 - COSC_EN_0 :
         disable on chip oscillator
      0x1 - COSC_EN_1 :
         enable on chip oscillator
 (rw) (06)  [0;32mREG_BYPASS_COUNT[0m  - [26:21] -  Counter for analog_reg_bypass signal assertion after standby voltage request by
  PMIC_STBY_REQ
      0 - REG_BYPASS_COUNT_0 :
         no delay
      0x1 - REG_BYPASS_COUNT_1 :
         1 CKIL clock period delay
      0x3F - REG_BYPASS_COUNT_63 :
         63 CKIL clock periods delay
 (rw) (01)  [0;32mRBC_EN[0m  - [27:27] -  Enable for REG_BYPASS_COUNTER
      0 - RBC_EN_0 :
         REG_BYPASS_COUNTER disabled
      0x1 - RBC_EN_1 :
         REG_BYPASS_COUNTER enabled.
</lang>
#### p.ccm.ccr
<link=p.CCM.CCR>
#### p.ccm.cscdr1
<link=p.CCM.CSCDR1>
#### ccm.ccosr
<link=p.CCM.CCOSR>
#### ccm.cmeor
<link=p.CCM.CMEOR>
#### p.romc.rompatch6d
<link=p.ROMC.ROMPATCH6D>
#### p.ROMC.ROMPATCH2D
<lang=dft>
 (rw)  [1;33m0x401800e8[0m (0x40180000 + 0x00e8)
ROMC Data Registers
 (rw) (32)  [0;32mDATAX[0m  - [31:00] -  Data Fix Registers - Stores the data used for 1-word data fix operations
</lang>
#### p.romc.rompatchenh
<link=p.ROMC.ROMPATCHENH>
#### romc.rompatch0a
<link=p.ROMC.ROMPATCH0A>
#### ROMC.ROMPATCH8A
<link=p.ROMC.ROMPATCH8A>
#### ROMC.ROMPATCH11A
<link=p.ROMC.ROMPATCH11A>
#### p.ROMC.ROMPATCH13A
<lang=dft>
 (rw)  [1;33m0x40180134[0m (0x40180000 + 0x0134)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### ROMC.ROMPATCHSR
<link=p.ROMC.ROMPATCHSR>
#### p.LPUART1.PARAM
<lang=dft>
 (ro)  [1;33m0x40184004[0m (0x40184000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
</lang>
#### lpuart1.param
<link=p.LPUART1.PARAM>
#### LPUART1.GLOBAL
<link=p.LPUART1.GLOBAL>
#### p.lpuart1.ctrl
<link=p.LPUART1.CTRL>
#### p.lpuart1.fifo
<link=p.LPUART1.FIFO>
#### p.LPUART2.GLOBAL
<lang=dft>
 (rw)  [1;33m0x40188008[0m (0x40188000 + 0x0008)
LPUART Global Register
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Software Reset
      0 - RST_0 :
         Module is not reset.
      0x1 - RST_1 :
         Module is reset.
</lang>
#### p.LPUART2.PINCFG
<lang=dft>
 (rw)  [1;33m0x4018800c[0m (0x40188000 + 0x000c)
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
#### LPUART2.BAUD
<link=p.LPUART2.BAUD>
#### lpuart2.data
<link=p.LPUART2.DATA>
#### LPUART3.BAUD
<link=p.LPUART3.BAUD>
#### LPUART3.MATCH
<link=p.LPUART3.MATCH>
#### LPUART3.FIFO
<link=p.LPUART3.FIFO>
#### lpuart3.water
<link=p.LPUART3.WATER>
#### p.lpuart4.global
<link=p.LPUART4.GLOBAL>
#### p.LPUART4.PINCFG
<lang=dft>
 (rw)  [1;33m0x4019000c[0m (0x40190000 + 0x000c)
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
#### p.lpuart4.ctrl
<link=p.LPUART4.CTRL>
#### lpuart4.data
<link=p.LPUART4.DATA>
#### lpuart4.modir
<link=p.LPUART4.MODIR>
#### p.lpuart4.fifo
<link=p.LPUART4.FIFO>
#### LPUART5.PINCFG
<link=p.LPUART5.PINCFG>
#### p.lpuart5.modir
<link=p.LPUART5.MODIR>
#### LPUART6.VERID
<link=p.LPUART6.VERID>
#### p.lpuart6.baud
<link=p.LPUART6.BAUD>
#### lpuart6.fifo
<link=p.LPUART6.FIFO>
#### LPUART6.FIFO
<link=p.LPUART6.FIFO>
#### p.LPUART8.GLOBAL
<lang=dft>
 (rw)  [1;33m0x401a0008[0m (0x401a0000 + 0x0008)
LPUART Global Register
 (rw) (01)  [0;32mRST[0m  - [01:01] -  Software Reset
      0 - RST_0 :
         Module is not reset.
      0x1 - RST_1 :
         Module is reset.
</lang>
#### LPUART8.STAT
<link=p.LPUART8.STAT>
#### p.flexio1
<link=p.FLEXIO1>
#### flexio1.param
<link=p.FLEXIO1.PARAM>
#### p.FLEXIO1.SHIFTSTAT
<lang=dft>
 (rw)  [1;33m0x401ac010[0m (0x401ac000 + 0x0010)
Shifter Status Register
 (rw) (04)  [0;32mSSF[0m  - [03:00] -  Shifter Status Flag
</lang>
#### FLEXIO1.SHIFTSTAT
<link=p.FLEXIO1.SHIFTSTAT>
#### p.flexio1.shifterr
<link=p.FLEXIO1.SHIFTERR>
#### p.FLEXIO1.SHIFTSIEN
<lang=dft>
 (rw)  [1;33m0x401ac020[0m (0x401ac000 + 0x0020)
Shifter Status Interrupt Enable
 (rw) (04)  [0;32mSSIE[0m  - [03:00] -  Shifter Status Interrupt Enable
</lang>
#### p.flexio1.shiftsien
<link=p.FLEXIO1.SHIFTSIEN>
#### p.flexio1.shiftstate
<link=p.FLEXIO1.SHIFTSTATE>
#### p.FLEXIO1.SHIFTCFG[0]
<lang=dft>
 (rw)  [1;33m0x401ac100[0m (0x401ac000 + 0x0100)
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
#### FLEXIO1.SHIFTCFG[1]
<link=p.FLEXIO1.SHIFTCFG[1]>
#### p.flexio1.shiftbuf[2]
<link=p.FLEXIO1.SHIFTBUF[2]>
#### FLEXIO1.SHIFTBUF[2]
<link=p.FLEXIO1.SHIFTBUF[2]>
#### FLEXIO1.SHIFTBUFBBS[0]
<link=p.FLEXIO1.SHIFTBUFBBS[0]>
#### p.flexio1.timctl[2]
<link=p.FLEXIO1.TIMCTL[2]>
#### p.flexio1.timcfg[0]
<link=p.FLEXIO1.TIMCFG[0]>
#### p.flexio1.shiftbufnbs[0]
<link=p.FLEXIO1.SHIFTBUFNBS[0]>
#### flexio1.shiftbufnbs[1]
<link=p.FLEXIO1.SHIFTBUFNBS[1]>
#### flexio1.shiftbufhws[0]
<link=p.FLEXIO1.SHIFTBUFHWS[0]>
#### p.FLEXIO1.SHIFTBUFNIS[2]
<lang=dft>
 (rw)  [1;33m0x401ac788[0m (0x401ac000 + 0x0788)
Shifter Buffer N Nibble Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNIS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio1.shiftbufnis[2]
<link=p.FLEXIO1.SHIFTBUFNIS[2]>
#### p.FLEXIO2.SHIFTCTL[3]
<lang=dft>
 (rw)  [1;33m0x401b008c[0m (0x401b0000 + 0x008c)
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
#### p.flexio2.shiftcfg[0]
<link=p.FLEXIO2.SHIFTCFG[0]>
#### FLEXIO2.SHIFTBUF[1]
<link=p.FLEXIO2.SHIFTBUF[1]>
#### p.FLEXIO2.SHIFTBUFBYS[1]
<lang=dft>
 (rw)  [1;33m0x401b0304[0m (0x401b0000 + 0x0304)
Shifter Buffer N Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBYS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio2.shiftbufbys[1]
<link=p.FLEXIO2.SHIFTBUFBYS[1]>
#### p.flexio2.timctl[3]
<link=p.FLEXIO2.TIMCTL[3]>
#### flexio2.timcfg[3]
<link=p.FLEXIO2.TIMCFG[3]>
#### flexio2.timcmp[0]
<link=p.FLEXIO2.TIMCMP[0]>
#### FLEXIO2.TIMCMP[0]
<link=p.FLEXIO2.TIMCMP[0]>
#### p.flexio2.timcmp[1]
<link=p.FLEXIO2.TIMCMP[1]>
#### flexio2.shiftbufnbs[3]
<link=p.FLEXIO2.SHIFTBUFNBS[3]>
#### p.FLEXIO2.SHIFTBUFHWS[2]
<lang=dft>
 (rw)  [1;33m0x401b0708[0m (0x401b0000 + 0x0708)
Shifter Buffer N Half Word Swapped Register
 (rw) (32)  [0;32mSHIFTBUFHWS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.FLEXIO3.TIMSTAT
<lang=dft>
 (rw)  [1;33m0x42020018[0m (0x42020000 + 0x0018)
Timer Status Register
 (rw) (04)  [0;32mTSF[0m  - [03:00] -  Timer Status Flags
</lang>
#### flexio3.shiftstate
<link=p.FLEXIO3.SHIFTSTATE>
#### p.flexio3.shiftctl[0]
<link=p.FLEXIO3.SHIFTCTL[0]>
#### flexio3.shiftctl[1]
<link=p.FLEXIO3.SHIFTCTL[1]>
#### p.FLEXIO3.SHIFTCTL[3]
<lang=dft>
 (rw)  [1;33m0x4202008c[0m (0x42020000 + 0x008c)
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
#### flexio3.shiftbuf[2]
<link=p.FLEXIO3.SHIFTBUF[2]>
#### p.flexio3.shiftbufbys[2]
<link=p.FLEXIO3.SHIFTBUFBYS[2]>
#### FLEXIO3.SHIFTBUFBYS[2]
<link=p.FLEXIO3.SHIFTBUFBYS[2]>
#### p.flexio3.shiftbufbbs[3]
<link=p.FLEXIO3.SHIFTBUFBBS[3]>
#### FLEXIO3.SHIFTBUFBBS[3]
<link=p.FLEXIO3.SHIFTBUFBBS[3]>
#### p.FLEXIO3.TIMCTL[3]
<lang=dft>
 (rw)  [1;33m0x4202040c[0m (0x42020000 + 0x040c)
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
#### p.FLEXIO3.TIMCFG[0]
<lang=dft>
 (rw)  [1;33m0x42020480[0m (0x42020000 + 0x0480)
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
#### FLEXIO3.TIMCFG[0]
<link=p.FLEXIO3.TIMCFG[0]>
#### p.flexio3.timcmp[3]
<link=p.FLEXIO3.TIMCMP[3]>
#### p.FLEXIO3.SHIFTBUFHWS[2]
<lang=dft>
 (rw)  [1;33m0x42020708[0m (0x42020000 + 0x0708)
Shifter Buffer N Half Word Swapped Register
 (rw) (32)  [0;32mSHIFTBUFHWS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufhws[2]
<link=p.FLEXIO3.SHIFTBUFHWS[2]>
#### p.flexio3.shiftbufnis[3]
<link=p.FLEXIO3.SHIFTBUFNIS[3]>
#### p.gpio1
<link=p.GPIO1>
#### GPIO5.GDIR
<link=p.GPIO5.GDIR>
#### gpio5.dr_clear
<link=p.GPIO5.DR_CLEAR>
#### p.gpio2.dr
<link=p.GPIO2.DR>
#### p.gpio2.icr2
<link=p.GPIO2.ICR2>
#### p.gpio3.psr
<link=p.GPIO3.PSR>
#### p.GPIO3.DR_CLEAR
<lang=dft>
 (wo)  [1;33m0x401c0088[0m (0x401c0000 + 0x0088)
GPIO data register CLEAR
 (wo) (32)  [0;32mDR_CLEAR[0m  - [31:00] -  DR_CLEAR
</lang>
#### gpio4.icr2
<link=p.GPIO4.ICR2>
#### p.gpio4.isr
<link=p.GPIO4.ISR>
#### p.GPIO6.GDIR
<lang=dft>
 (rw)  [1;33m0x42000004[0m (0x42000000 + 0x0004)
GPIO direction register
 (rw) (32)  [0;32mGDIR[0m  - [31:00] -  GDIR
</lang>
#### p.gpio6.psr
<link=p.GPIO6.PSR>
#### p.gpio6.dr_toggle
<link=p.GPIO6.DR_TOGGLE>
#### GPIO7.ICR1
<link=p.GPIO7.ICR1>
#### p.gpio7.imr
<link=p.GPIO7.IMR>
#### GPIO9.GDIR
<link=p.GPIO9.GDIR>
#### p.CAN1.RX14MASK
<lang=dft>
 (rw)  [1;33m0x401d0014[0m (0x401d0000 + 0x0014)
Rx Buffer 14 Mask Register
 (rw) (32)  [0;32mRX14M[0m  - [31:00] -  These bits mask Mailbox 14 filter bits in the same fashion as RXMGMASK masks ot
 her Mailboxes filters (see RXMGMASKRx Mailboxes Global Mask Register )
      0 - RX14M_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - RX14M_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.ECR
<link=p.CAN1.ECR>
#### p.CAN1.IMASK1
<lang=dft>
 (rw)  [1;33m0x401d0028[0m (0x401d0000 + 0x0028)
Interrupt Masks 1 Register
 (rw) (32)  [0;32mBUFLM[0m  - [31:00] -  Each bit enables or disables the respective FLEXCAN Message Buffer (MB0 to MB31
 ) Interrupt
      0 - BUFLM_0 :
         The corresponding buffer Interrupt is disabled
      0x1 - BUFLM_1 :
         The corresponding buffer Interrupt is enabled
</lang>
#### p.can1.iflag2
<link=p.CAN1.IFLAG2>
#### p.CAN1.DBG1
<lang=dft>
 (ro)  [1;33m0x401d0058[0m (0x401d0000 + 0x0058)
Debug 1 register
 (ro) (06)  [0;32mCFSM[0m  - [05:00] -  CAN Finite State Machine
 (ro) (05)  [0;32mCBN[0m  - [28:24] -  CAN Bit Number
</lang>
#### can1.rximr1
<link=p.CAN1.RXIMR1>
#### p.CAN1.RXIMR2
<lang=dft>
 (rw)  [1;33m0x401d0888[0m (0x401d0000 + 0x0888)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR4
<link=p.CAN1.RXIMR4>
#### p.can1.rximr6
<link=p.CAN1.RXIMR6>
#### p.can1.rximr11
<link=p.CAN1.RXIMR11>
#### p.CAN1.RXIMR15
<lang=dft>
 (rw)  [1;33m0x401d08bc[0m (0x401d0000 + 0x08bc)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR19
<link=p.CAN1.RXIMR19>
#### CAN1.RXIMR21
<link=p.CAN1.RXIMR21>
#### p.can1.rximr24
<link=p.CAN1.RXIMR24>
#### can1.rximr24
<link=p.CAN1.RXIMR24>
#### p.CAN1.RXIMR29
<lang=dft>
 (rw)  [1;33m0x401d08f4[0m (0x401d0000 + 0x08f4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.CAN1.RXIMR33
<lang=dft>
 (rw)  [1;33m0x401d0904[0m (0x401d0000 + 0x0904)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR36
<link=p.CAN1.RXIMR36>
#### can1.rximr38
<link=p.CAN1.RXIMR38>
#### p.CAN1.RXIMR43
<lang=dft>
 (rw)  [1;33m0x401d092c[0m (0x401d0000 + 0x092c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr47
<link=p.CAN1.RXIMR47>
#### can1.rximr49
<link=p.CAN1.RXIMR49>
#### can1.rximr52
<link=p.CAN1.RXIMR52>
#### CAN1.RXIMR55
<link=p.CAN1.RXIMR55>
#### p.CAN1.RXIMR58
<lang=dft>
 (rw)  [1;33m0x401d0968[0m (0x401d0000 + 0x0968)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RX14MASK
<link=p.CAN2.RX14MASK>
#### CAN2.IMASK2
<link=p.CAN2.IMASK2>
#### p.CAN2.IFLAG2
<lang=dft>
 (rw)  [1;33m0x401d402c[0m (0x401d4000 + 0x002c)
Interrupt Flags 2 Register
 (rw) (32)  [0;32mBUFHI[0m  - [31:00] -  Each bit flags the respective FLEXCAN Message Buffer (MB32 to MB63) interrupt.
      0 - BUFHI_0 :
         No such occurrence
      0x1 - BUFHI_1 :
         The corresponding buffer has successfully completed transmission or rec
         eption
</lang>
#### can2.iflag1
<link=p.CAN2.IFLAG1>
#### p.CAN2.DBG1
<lang=dft>
 (ro)  [1;33m0x401d4058[0m (0x401d4000 + 0x0058)
Debug 1 register
 (ro) (06)  [0;32mCFSM[0m  - [05:00] -  CAN Finite State Machine
 (ro) (05)  [0;32mCBN[0m  - [28:24] -  CAN Bit Number
</lang>
#### p.can2.rximr3
<link=p.CAN2.RXIMR3>
#### p.CAN2.RXIMR7
<lang=dft>
 (rw)  [1;33m0x401d489c[0m (0x401d4000 + 0x089c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr12
<link=p.CAN2.RXIMR12>
#### CAN2.RXIMR13
<link=p.CAN2.RXIMR13>
#### CAN2.RXIMR26
<link=p.CAN2.RXIMR26>
#### p.CAN2.RXIMR27
<lang=dft>
 (rw)  [1;33m0x401d48ec[0m (0x401d4000 + 0x08ec)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.CAN2.RXIMR30
<lang=dft>
 (rw)  [1;33m0x401d48f8[0m (0x401d4000 + 0x08f8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr33
<link=p.CAN2.RXIMR33>
#### p.can2.rximr34
<link=p.CAN2.RXIMR34>
#### CAN2.RXIMR35
<link=p.CAN2.RXIMR35>
#### can2.rximr46
<link=p.CAN2.RXIMR46>
#### p.can2.rximr48
<link=p.CAN2.RXIMR48>
#### can2.rximr51
<link=p.CAN2.RXIMR51>
#### p.CAN2.RXIMR52
<lang=dft>
 (rw)  [1;33m0x401d4950[0m (0x401d4000 + 0x0950)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr60
<link=p.CAN2.RXIMR60>
#### p.can3.ecr
<link=p.CAN3.ECR>
#### CAN3.CRCR
<link=p.CAN3.CRCR>
#### p.CAN3.CBT
<lang=dft>
 (rw)  [1;33m0x401d8050[0m (0x401d8000 + 0x0050)
CAN Bit Timing Register
 (rw) (05)  [0;32mEPSEG2[0m  - [04:00] -  Extended Phase Segment 2
 (rw) (05)  [0;32mEPSEG1[0m  - [09:05] -  Extended Phase Segment 1
 (rw) (06)  [0;32mEPROPSEG[0m  - [15:10] -  Extended Propagation Segment
 (rw) (05)  [0;32mERJW[0m  - [20:16] -  Extended Resync Jump Width
 (rw) (10)  [0;32mEPRESDIV[0m  - [30:21] -  Extended Prescaler Division Factor
 (rw) (01)  [0;32mBTF[0m  - [31:31] -  Bit Timing Format Enable
      0 - BTF_0 :
         Extended bit time definitions disabled.
      0x1 - BTF_1 :
         Extended bit time definitions enabled.
</lang>
#### p.can3.mb0_16b_cs
<link=p.CAN3.MB0_16B_CS>
#### can3.mb0_16b_cs
<link=p.CAN3.MB0_16B_CS>
#### p.can3.mb0_32b_word0
<link=p.CAN3.MB0_32B_WORD0>
#### CAN3.MB0_16B_WORD1
<link=p.CAN3.MB0_16B_WORD1>
#### can3.mb0_32b_word1
<link=p.CAN3.MB0_32B_WORD1>
#### p.can3.mb0_64b_word2
<link=p.CAN3.MB0_64B_WORD2>
#### p.CAN3.MB0_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8098[0m (0x401d8000 + 0x0098)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB1_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8098[0m (0x401d8000 + 0x0098)
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
#### can3.mb1_8b_word0
<link=p.CAN3.MB1_8B_WORD0>
#### p.CAN3.MB0_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d809c[0m (0x401d8000 + 0x009c)
Message Buffer 0 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS2
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
#### CAN3.MB0_64B_WORD7
<link=p.CAN3.MB0_64B_WORD7>
#### p.CAN3.MB1_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80a4[0m (0x401d8000 + 0x00a4)
Message Buffer 1 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB2_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80a8[0m (0x401d8000 + 0x00a8)
Message Buffer 2 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB1_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d80ac[0m (0x401d8000 + 0x00ac)
Message Buffer 1 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.ID3
<lang=dft>
 (rw)  [1;33m0x401d80b4[0m (0x401d8000 + 0x00b4)
Message Buffer 3 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb1_32b_word2
<link=p.CAN3.MB1_32B_WORD2>
#### p.can3.cs4
<link=p.CAN3.CS4>
#### CAN3.MB0_64B_WORD14
<link=p.CAN3.MB0_64B_WORD14>
#### CAN3.MB1_32B_WORD4
<link=p.CAN3.MB1_32B_WORD4>
#### CAN3.MB2_16B_WORD3
<link=p.CAN3.MB2_16B_WORD3>
#### p.CAN3.WORD14
<lang=dft>
 (rw)  [1;33m0x401d80cc[0m (0x401d8000 + 0x00cc)
Message Buffer 4 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb1_64b_word0
<link=p.CAN3.MB1_64B_WORD0>
#### p.can3.id5
<link=p.CAN3.ID5>
#### p.can3.mb5_8b_id
<link=p.CAN3.MB5_8B_ID>
#### p.can3.mb2_32b_word0
<link=p.CAN3.MB2_32B_WORD0>
#### can3.mb2_32b_word1
<link=p.CAN3.MB2_32B_WORD1>
#### p.CAN3.MB3_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d80dc[0m (0x401d8000 + 0x00dc)
Message Buffer 3 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word15
<link=p.CAN3.WORD15>
#### p.CAN3.MB1_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d80e0[0m (0x401d8000 + 0x00e0)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB1_64B_WORD5
<link=p.CAN3.MB1_64B_WORD5>
#### can3.mb6_8b_id
<link=p.CAN3.MB6_8B_ID>
#### p.CAN3.MB2_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d80ec[0m (0x401d8000 + 0x00ec)
Message Buffer 2 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb6_8b_word1
<link=p.CAN3.MB6_8B_WORD1>
#### CAN3.CS7
<link=p.CAN3.CS7>
#### can3.mb7_8b_cs
<link=p.CAN3.MB7_8B_CS>
#### p.can3.mb1_64b_word9
<link=p.CAN3.MB1_64B_WORD9>
#### CAN3.MB7_8B_ID
<link=p.CAN3.MB7_8B_ID>
#### p.can3.mb1_64b_word10
<link=p.CAN3.MB1_64B_WORD10>
#### can3.mb5_16b_cs
<link=p.CAN3.MB5_16B_CS>
#### CAN3.WORD07
<link=p.CAN3.WORD07>
#### p.CAN3.MB7_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80fc[0m (0x401d8000 + 0x00fc)
Message Buffer 7 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB8_8B_CS
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
#### p.can3.mb3_32b_word2
<link=p.CAN3.MB3_32B_WORD2>
#### p.CAN3.WORD08
<lang=dft>
 (rw)  [1;33m0x401d8108[0m (0x401d8000 + 0x0108)
Message Buffer 8 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB6_16B_CS
<link=p.CAN3.MB6_16B_CS>
#### p.CAN3.MB9_8B_CS
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
#### p.CAN3.MB2_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d8114[0m (0x401d8000 + 0x0114)
Message Buffer 2 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb3_32b_word6
<link=p.CAN3.MB3_32B_WORD6>
#### p.can3.word09
<link=p.CAN3.WORD09>
#### CAN3.WORD19
<link=p.CAN3.WORD19>
#### p.CAN3.MB10_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8124[0m (0x401d8000 + 0x0124)
Message Buffer 10 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb2_64b_word3
<link=p.CAN3.MB2_64B_WORD3>
#### p.CAN3.MB4_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d812c[0m (0x401d8000 + 0x012c)
Message Buffer 4 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.CS11
<lang=dft>
 (rw)  [1;33m0x401d8130[0m (0x401d8000 + 0x0130)
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
#### p.CAN3.MB11_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8130[0m (0x401d8000 + 0x0130)
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
#### can3.id11
<link=p.CAN3.ID11>
#### p.can3.mb11_8b_word0
<link=p.CAN3.MB11_8B_WORD0>
#### p.can3.mb2_64b_word8
<link=p.CAN3.MB2_64B_WORD8>
#### p.can3.mb4_32b_word4
<link=p.CAN3.MB4_32B_WORD4>
#### can3.mb4_32b_word5
<link=p.CAN3.MB4_32B_WORD5>
#### CAN3.MB12_8B_CS
<link=p.CAN3.MB12_8B_CS>
#### p.CAN3.MB2_64B_WORD10
<lang=dft>
 (rw)  [1;33m0x401d8140[0m (0x401d8000 + 0x0140)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_43[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_42[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_41[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_40[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.ID12
<link=p.CAN3.ID12>
#### p.can3.mb8_16b_id
<link=p.CAN3.MB8_16B_ID>
#### p.CAN3.WORD012
<lang=dft>
 (rw)  [1;33m0x401d8148[0m (0x401d8000 + 0x0148)
Message Buffer 12 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb2_64b_word13
<link=p.CAN3.MB2_64B_WORD13>
#### CAN3.WORD112
<link=p.CAN3.WORD112>
#### can3.mb2_64b_word14
<link=p.CAN3.MB2_64B_WORD14>
#### CAN3.MB5_32B_WORD0
<link=p.CAN3.MB5_32B_WORD0>
#### p.can3.mb13_8b_id
<link=p.CAN3.MB13_8B_ID>
#### can3.mb8_16b_word3
<link=p.CAN3.MB8_16B_WORD3>
#### CAN3.MB9_16B_ID
<link=p.CAN3.MB9_16B_ID>
#### CAN3.CS14
<link=p.CAN3.CS14>
#### p.CAN3.ID14
<lang=dft>
 (rw)  [1;33m0x401d8164[0m (0x401d8000 + 0x0164)
Message Buffer 14 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb3_64b_word2
<link=p.CAN3.MB3_64B_WORD2>
#### can3.mb5_32b_word6
<link=p.CAN3.MB5_32B_WORD6>
#### can3.mb9_16b_word3
<link=p.CAN3.MB9_16B_WORD3>
#### can3.mb15_8b_word1
<link=p.CAN3.MB15_8B_WORD1>
#### p.CAN3.MB6_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d817c[0m (0x401d8000 + 0x017c)
Message Buffer 6 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb16_8b_cs
<link=p.CAN3.MB16_8B_CS>
#### p.can3.id16
<link=p.CAN3.ID16>
#### p.can3.mb16_8b_word0
<link=p.CAN3.MB16_8B_WORD0>
#### p.can3.mb6_32b_word4
<link=p.CAN3.MB6_32B_WORD4>
#### p.CAN3.MB16_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d818c[0m (0x401d8000 + 0x018c)
Message Buffer 16 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb6_32b_word5
<link=p.CAN3.MB6_32B_WORD5>
#### p.can3.mb17_8b_cs
<link=p.CAN3.MB17_8B_CS>
#### can3.mb7_32b_word2
<link=p.CAN3.MB7_32B_WORD2>
#### p.CAN3.MB4_64B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81ac[0m (0x401d8000 + 0x01ac)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB19_8B_CS
<link=p.CAN3.MB19_8B_CS>
#### CAN3.MB4_64B_WORD2
<link=p.CAN3.MB4_64B_WORD2>
#### p.can3.mb7_32b_word6
<link=p.CAN3.MB7_32B_WORD6>
#### can3.mb19_8b_word1
<link=p.CAN3.MB19_8B_WORD1>
#### can3.mb8_32b_cs
<link=p.CAN3.MB8_32B_CS>
#### CAN3.MB8_32B_CS
<link=p.CAN3.MB8_32B_CS>
#### p.can3.mb4_64b_word7
<link=p.CAN3.MB4_64B_WORD7>
#### can3.mb14_16b_cs
<link=p.CAN3.MB14_16B_CS>
#### can3.mb14_16b_word0
<link=p.CAN3.MB14_16B_WORD0>
#### p.CAN3.MB21_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d81dc[0m (0x401d8000 + 0x01dc)
Message Buffer 21 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb22_8b_cs
<link=p.CAN3.MB22_8B_CS>
#### CAN3.MB22_8B_CS
<link=p.CAN3.MB22_8B_CS>
#### p.CAN3.MB4_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d81e0[0m (0x401d8000 + 0x01e0)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb14_16b_word3
<link=p.CAN3.MB14_16B_WORD3>
#### CAN3.MB8_32B_WORD7
<link=p.CAN3.MB8_32B_WORD7>
#### p.CAN3.MB15_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d81e8[0m (0x401d8000 + 0x01e8)
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
#### CAN3.MB15_16B_CS
<link=p.CAN3.MB15_16B_CS>
#### CAN3.MB15_16B_ID
<link=p.CAN3.MB15_16B_ID>
#### CAN3.MB22_8B_WORD1
<link=p.CAN3.MB22_8B_WORD1>
#### can3.word122
<link=p.CAN3.WORD122>
#### CAN3.MB23_8B_CS
<link=p.CAN3.MB23_8B_CS>
#### CAN3.MB5_64B_WORD2
<link=p.CAN3.MB5_64B_WORD2>
#### p.CAN3.MB5_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d81fc[0m (0x401d8000 + 0x01fc)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD123
<link=p.CAN3.WORD123>
#### can3.mb16_16b_id
<link=p.CAN3.MB16_16B_ID>
#### can3.mb5_64b_word5
<link=p.CAN3.MB5_64B_WORD5>
#### p.CAN3.MB9_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8208[0m (0x401d8000 + 0x0208)
Message Buffer 9 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb16_16b_word1
<link=p.CAN3.MB16_16B_WORD1>
#### can3.mb24_8b_word1
<link=p.CAN3.MB24_8B_WORD1>
#### p.CAN3.MB17_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d821c[0m (0x401d8000 + 0x021c)
Message Buffer 17 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB26_8B_CS
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
#### CAN3.MB10_32B_WORD3
<link=p.CAN3.MB10_32B_WORD3>
#### CAN3.WORD026
<link=p.CAN3.WORD026>
#### can3.mb5_64b_word15
<link=p.CAN3.MB5_64B_WORD15>
#### p.can3.cs27
<link=p.CAN3.CS27>
#### p.can3.id27
<link=p.CAN3.ID27>
#### CAN3.ID27
<link=p.CAN3.ID27>
#### can3.mb11_32b_cs
<link=p.CAN3.MB11_32B_CS>
#### CAN3.MB18_16B_WORD0
<link=p.CAN3.MB18_16B_WORD0>
#### p.CAN3.CS28
<lang=dft>
 (rw)  [1;33m0x401d8240[0m (0x401d8000 + 0x0240)
Message Buffer 28 CS Register
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
#### p.can3.mb11_32b_word0
<link=p.CAN3.MB11_32B_WORD0>
#### can3.mb11_32b_word0
<link=p.CAN3.MB11_32B_WORD0>
#### CAN3.MB11_32B_WORD0
<link=p.CAN3.MB11_32B_WORD0>
#### p.CAN3.ID28
<lang=dft>
 (rw)  [1;33m0x401d8244[0m (0x401d8000 + 0x0244)
Message Buffer 28 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb19_16b_cs
<link=p.CAN3.MB19_16B_CS>
#### can3.mb28_8b_word1
<link=p.CAN3.MB28_8B_WORD1>
#### can3.cs29
<link=p.CAN3.CS29>
#### can3.mb6_64b_word6
<link=p.CAN3.MB6_64B_WORD6>
#### can3.id29
<link=p.CAN3.ID29>
#### p.can3.mb29_8b_id
<link=p.CAN3.MB29_8B_ID>
#### CAN3.MB19_16B_WORD2
<link=p.CAN3.MB19_16B_WORD2>
#### can3.mb19_16b_word3
<link=p.CAN3.MB19_16B_WORD3>
#### CAN3.MB6_64B_WORD9
<link=p.CAN3.MB6_64B_WORD9>
#### can3.mb20_16b_cs
<link=p.CAN3.MB20_16B_CS>
#### CAN3.MB20_16B_CS
<link=p.CAN3.MB20_16B_CS>
#### can3.mb20_16b_id
<link=p.CAN3.MB20_16B_ID>
#### CAN3.MB20_16B_WORD0
<link=p.CAN3.MB20_16B_WORD0>
#### p.CAN3.MB12_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8274[0m (0x401d8000 + 0x0274)
Message Buffer 12 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB20_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8274[0m (0x401d8000 + 0x0274)
Message Buffer 20 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.CS32
<link=p.CAN3.CS32>
#### CAN3.MB12_32B_WORD6
<link=p.CAN3.MB12_32B_WORD6>
#### p.can3.mb32_8b_id
<link=p.CAN3.MB32_8B_ID>
#### p.CAN3.MB13_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8290[0m (0x401d8000 + 0x0290)
Message Buffer 13 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb13_32b_word1
<link=p.CAN3.MB13_32B_WORD1>
#### p.can3.mb7_64b_word5
<link=p.CAN3.MB7_64B_WORD5>
#### can3.mb33_8b_word0
<link=p.CAN3.MB33_8B_WORD0>
#### p.can3.mb13_32b_word3
<link=p.CAN3.MB13_32B_WORD3>
#### p.CAN3.MB22_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d829c[0m (0x401d8000 + 0x029c)
Message Buffer 22 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.cs34
<link=p.CAN3.CS34>
#### CAN3.MB22_16B_WORD2
<link=p.CAN3.MB22_16B_WORD2>
#### p.CAN3.MB7_64B_WORD8
<lang=dft>
 (rw)  [1;33m0x401d82a0[0m (0x401d8000 + 0x02a0)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_35[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_34[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_33[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_32[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.ID34
<link=p.CAN3.ID34>
#### CAN3.MB7_64B_WORD9
<link=p.CAN3.MB7_64B_WORD9>
#### p.can3.mb23_16b_cs
<link=p.CAN3.MB23_16B_CS>
#### can3.word034
<link=p.CAN3.WORD034>
#### CAN3.MB13_32B_WORD7
<link=p.CAN3.MB13_32B_WORD7>
#### CAN3.MB34_8B_WORD1
<link=p.CAN3.MB34_8B_WORD1>
#### CAN3.MB7_64B_WORD11
<link=p.CAN3.MB7_64B_WORD11>
#### p.can3.mb14_32b_cs
<link=p.CAN3.MB14_32B_CS>
#### CAN3.MB35_8B_ID
<link=p.CAN3.MB35_8B_ID>
#### p.CAN3.MB7_64B_WORD13
<lang=dft>
 (rw)  [1;33m0x401d82b4[0m (0x401d8000 + 0x02b4)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_55[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_54[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_53[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_52[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb7_64b_word13
<link=p.CAN3.MB7_64B_WORD13>
#### p.can3.mb7_64b_word14
<link=p.CAN3.MB7_64B_WORD14>
#### CAN3.WORD035
<link=p.CAN3.WORD035>
#### p.CAN3.WORD135
<lang=dft>
 (rw)  [1;33m0x401d82bc[0m (0x401d8000 + 0x02bc)
Message Buffer 35 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word135
<link=p.CAN3.WORD135>
#### p.can3.mb24_16b_word1
<link=p.CAN3.MB24_16B_WORD1>
#### p.can3.mb36_8b_word1
<link=p.CAN3.MB36_8B_WORD1>
#### can3.id37
<link=p.CAN3.ID37>
#### CAN3.MB14_32B_WORD7
<link=p.CAN3.MB14_32B_WORD7>
#### p.CAN3.MB37_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d82d4[0m (0x401d8000 + 0x02d4)
Message Buffer 37 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB8_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d82d4[0m (0x401d8000 + 0x02d4)
Message Buffer 8 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB15_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d82d8[0m (0x401d8000 + 0x02d8)
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
#### CAN3.MB15_32B_CS
<link=p.CAN3.MB15_32B_CS>
#### can3.mb25_16b_cs
<link=p.CAN3.MB25_16B_CS>
#### can3.mb8_64b_word4
<link=p.CAN3.MB8_64B_WORD4>
#### p.can3.mb15_32b_id
<link=p.CAN3.MB15_32B_ID>
#### p.CAN3.MB37_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82dc[0m (0x401d8000 + 0x02dc)
Message Buffer 37 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb38_8b_cs
<link=p.CAN3.MB38_8B_CS>
#### p.can3.mb8_64b_word8
<link=p.CAN3.MB8_64B_WORD8>
#### CAN3.MB38_8B_WORD1
<link=p.CAN3.MB38_8B_WORD1>
#### p.can3.word138
<link=p.CAN3.WORD138>
#### p.can3.mb15_32b_word4
<link=p.CAN3.MB15_32B_WORD4>
#### can3.mb15_32b_word4
<link=p.CAN3.MB15_32B_WORD4>
#### CAN3.MB15_32B_WORD4
<link=p.CAN3.MB15_32B_WORD4>
#### p.can3.mb26_16b_cs
<link=p.CAN3.MB26_16B_CS>
#### p.can3.id39
<link=p.CAN3.ID39>
#### p.CAN3.MB8_64B_WORD12
<lang=dft>
 (rw)  [1;33m0x401d82f8[0m (0x401d8000 + 0x02f8)
Message Buffer 8 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_51[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_50[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_49[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_48[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word039
<link=p.CAN3.WORD039>
#### can3.mb40_8b_cs
<link=p.CAN3.MB40_8B_CS>
#### CAN3.MB40_8B_CS
<link=p.CAN3.MB40_8B_CS>
#### p.can3.mb8_64b_word14
<link=p.CAN3.MB8_64B_WORD14>
#### p.can3.mb26_16b_word3
<link=p.CAN3.MB26_16B_WORD3>
#### can3.mb8_64b_word15
<link=p.CAN3.MB8_64B_WORD15>
#### p.CAN3.MB27_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8308[0m (0x401d8000 + 0x0308)
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
#### p.CAN3.MB27_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d830c[0m (0x401d8000 + 0x030c)
Message Buffer 27 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb40_8b_word1
<link=p.CAN3.MB40_8B_WORD1>
#### CAN3.MB16_32B_WORD2
<link=p.CAN3.MB16_32B_WORD2>
#### p.can3.mb27_16b_word2
<link=p.CAN3.MB27_16B_WORD2>
#### p.CAN3.WORD041
<lang=dft>
 (rw)  [1;33m0x401d8318[0m (0x401d8000 + 0x0318)
Message Buffer 41 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word141
<link=p.CAN3.WORD141>
#### p.CAN3.CS42
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
#### p.CAN3.MB16_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8324[0m (0x401d8000 + 0x0324)
Message Buffer 16 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb9_64b_word7
<link=p.CAN3.MB9_64B_WORD7>
#### can3.cs43
<link=p.CAN3.CS43>
#### CAN3.MB17_32B_WORD3
<link=p.CAN3.MB17_32B_WORD3>
#### p.can3.cs44
<link=p.CAN3.CS44>
#### CAN3.CS44
<link=p.CAN3.CS44>
#### p.CAN3.MB17_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8340[0m (0x401d8000 + 0x0340)
Message Buffer 17 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb17_32b_word5
<link=p.CAN3.MB17_32B_WORD5>
#### can3.mb9_64b_word13
<link=p.CAN3.MB9_64B_WORD13>
#### p.CAN3.MB29_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8348[0m (0x401d8000 + 0x0348)
Message Buffer 29 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB29_16B_WORD2
<link=p.CAN3.MB29_16B_WORD2>
#### p.can3.mb17_32b_word7
<link=p.CAN3.MB17_32B_WORD7>
#### p.CAN3.MB10_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d8350[0m (0x401d8000 + 0x0350)
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
#### can3.mb18_32b_id
<link=p.CAN3.MB18_32B_ID>
#### p.can3.mb18_32b_word0
<link=p.CAN3.MB18_32B_WORD0>
#### p.CAN3.MB45_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d835c[0m (0x401d8000 + 0x035c)
Message Buffer 45 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb10_64b_word3
<link=p.CAN3.MB10_64B_WORD3>
#### can3.mb18_32b_word3
<link=p.CAN3.MB18_32B_WORD3>
#### p.CAN3.MB31_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8370[0m (0x401d8000 + 0x0370)
Message Buffer 31 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb31_16b_word0
<link=p.CAN3.MB31_16B_WORD0>
#### CAN3.MB10_64B_WORD7
<link=p.CAN3.MB10_64B_WORD7>
#### CAN3.MB47_8B_ID
<link=p.CAN3.MB47_8B_ID>
#### can3.mb10_64b_word8
<link=p.CAN3.MB10_64B_WORD8>
#### CAN3.MB31_16B_WORD2
<link=p.CAN3.MB31_16B_WORD2>
#### CAN3.WORD047
<link=p.CAN3.WORD047>
#### can3.mb31_16b_word3
<link=p.CAN3.MB31_16B_WORD3>
#### can3.mb32_16b_cs
<link=p.CAN3.MB32_16B_CS>
#### p.CAN3.MB48_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8388[0m (0x401d8000 + 0x0388)
Message Buffer 48 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB32_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8394[0m (0x401d8000 + 0x0394)
Message Buffer 32 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb11_64b_cs
<link=p.CAN3.MB11_64B_CS>
#### p.CAN3.MB33_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8398[0m (0x401d8000 + 0x0398)
Message Buffer 33 CS Register
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
#### CAN3.MB33_16B_CS
<link=p.CAN3.MB33_16B_CS>
#### p.can3.mb49_8b_word1
<link=p.CAN3.MB49_8B_WORD1>
#### can3.mb49_8b_word1
<link=p.CAN3.MB49_8B_WORD1>
#### can3.word149
<link=p.CAN3.WORD149>
#### can3.cs50
<link=p.CAN3.CS50>
#### can3.mb33_16b_word0
<link=p.CAN3.MB33_16B_WORD0>
#### p.can3.mb11_64b_word1
<link=p.CAN3.MB11_64B_WORD1>
#### p.CAN3.MB11_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d83ac[0m (0x401d8000 + 0x03ac)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB33_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d83ac[0m (0x401d8000 + 0x03ac)
Message Buffer 33 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb33_16b_word3
<link=p.CAN3.MB33_16B_WORD3>
#### CAN3.MB50_8B_WORD1
<link=p.CAN3.MB50_8B_WORD1>
#### can3.mb20_32b_word2
<link=p.CAN3.MB20_32B_WORD2>
#### p.can3.mb34_16b_cs
<link=p.CAN3.MB34_16B_CS>
#### can3.mb11_64b_word8
<link=p.CAN3.MB11_64B_WORD8>
#### p.CAN3.MB34_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d83c4[0m (0x401d8000 + 0x03c4)
Message Buffer 34 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb11_64b_word10
<link=p.CAN3.MB11_64B_WORD10>
#### p.can3.word152
<link=p.CAN3.WORD152>
#### CAN3.MB11_64B_WORD12
<link=p.CAN3.MB11_64B_WORD12>
#### can3.mb21_32b_word0
<link=p.CAN3.MB21_32B_WORD0>
#### p.can3.mb53_8b_word0
<link=p.CAN3.MB53_8B_WORD0>
#### p.can3.word053
<link=p.CAN3.WORD053>
#### p.CAN3.MB35_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d83dc[0m (0x401d8000 + 0x03dc)
Message Buffer 35 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb35_16b_word3
<link=p.CAN3.MB35_16B_WORD3>
#### p.CAN3.MB54_8B_CS
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
#### CAN3.MB21_32B_WORD5
<link=p.CAN3.MB21_32B_WORD5>
#### p.CAN3.MB12_64B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83e8[0m (0x401d8000 + 0x03e8)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB36_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83e8[0m (0x401d8000 + 0x03e8)
Message Buffer 36 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb12_64b_word3
<link=p.CAN3.MB12_64B_WORD3>
#### can3.word156
<link=p.CAN3.WORD156>
#### p.can3.cs57
<link=p.CAN3.CS57>
#### CAN3.MB38_16B_CS
<link=p.CAN3.MB38_16B_CS>
#### CAN3.MB57_8B_CS
<link=p.CAN3.MB57_8B_CS>
#### can3.mb12_64b_word12
<link=p.CAN3.MB12_64B_WORD12>
#### can3.word057
<link=p.CAN3.WORD057>
#### CAN3.MB57_8B_WORD1
<link=p.CAN3.MB57_8B_WORD1>
#### p.can3.mb12_64b_word14
<link=p.CAN3.MB12_64B_WORD14>
#### can3.mb23_32b_word0
<link=p.CAN3.MB23_32B_WORD0>
#### p.can3.mb38_16b_word3
<link=p.CAN3.MB38_16B_WORD3>
#### can3.mb38_16b_word3
<link=p.CAN3.MB38_16B_WORD3>
#### p.can3.mb58_8b_id
<link=p.CAN3.MB58_8B_ID>
#### can3.mb58_8b_id
<link=p.CAN3.MB58_8B_ID>
#### CAN3.MB13_64B_CS
<link=p.CAN3.MB13_64B_CS>
#### CAN3.WORD058
<link=p.CAN3.WORD058>
#### can3.mb13_64b_id
<link=p.CAN3.MB13_64B_ID>
#### CAN3.MB23_32B_WORD3
<link=p.CAN3.MB23_32B_WORD3>
#### can3.mb39_16b_id
<link=p.CAN3.MB39_16B_ID>
#### p.CAN3.WORD158
<lang=dft>
 (rw)  [1;33m0x401d842c[0m (0x401d8000 + 0x042c)
Message Buffer 58 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb59_8b_cs
<link=p.CAN3.MB59_8B_CS>
#### p.CAN3.ID59
<lang=dft>
 (rw)  [1;33m0x401d8434[0m (0x401d8000 + 0x0434)
Message Buffer 59 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb13_64b_word1
<link=p.CAN3.MB13_64B_WORD1>
#### p.CAN3.MB23_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d8434[0m (0x401d8000 + 0x0434)
Message Buffer 23 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB13_64B_WORD4
<link=p.CAN3.MB13_64B_WORD4>
#### CAN3.MB60_8B_WORD0
<link=p.CAN3.MB60_8B_WORD0>
#### p.can3.mb40_16b_word2
<link=p.CAN3.MB40_16B_WORD2>
#### CAN3.MB40_16B_WORD2
<link=p.CAN3.MB40_16B_WORD2>
#### p.can3.mb13_64b_word9
<link=p.CAN3.MB13_64B_WORD9>
#### p.CAN3.MB62_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8468[0m (0x401d8000 + 0x0468)
Message Buffer 62 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word062
<link=p.CAN3.WORD062>
#### p.CAN3.WORD162
<lang=dft>
 (rw)  [1;33m0x401d846c[0m (0x401d8000 + 0x046c)
Message Buffer 62 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb63_8b_word0
<link=p.CAN3.MB63_8B_WORD0>
#### can3.word063
<link=p.CAN3.WORD063>
#### can3.mb63_8b_word1
<link=p.CAN3.MB63_8B_WORD1>
#### p.CAN3.RXIMR[0]
<lang=dft>
 (rw)  [1;33m0x401d8880[0m (0x401d8000 + 0x0880)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[1]
<link=p.CAN3.RXIMR[1]>
#### can3.rximr[16]
<link=p.CAN3.RXIMR[16]>
#### p.can3.rximr[19]
<link=p.CAN3.RXIMR[19]>
#### can3.rximr[19]
<link=p.CAN3.RXIMR[19]>
#### can3.rximr[24]
<link=p.CAN3.RXIMR[24]>
#### can3.rximr[30]
<link=p.CAN3.RXIMR[30]>
#### p.can3.rximr[32]
<link=p.CAN3.RXIMR[32]>
#### p.can3.rximr[37]
<link=p.CAN3.RXIMR[37]>
#### can3.rximr[37]
<link=p.CAN3.RXIMR[37]>
#### p.CAN3.RXIMR[43]
<lang=dft>
 (rw)  [1;33m0x401d892c[0m (0x401d8000 + 0x092c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[53]
<link=p.CAN3.RXIMR[53]>
#### CAN3.RXIMR[59]
<link=p.CAN3.RXIMR[59]>
#### can3.rximr[63]
<link=p.CAN3.RXIMR[63]>
#### p.can3.eprs
<link=p.CAN3.EPRS>
#### CAN3.FDCBT
<link=p.CAN3.FDCBT>
#### can3.fdcrc
<link=p.CAN3.FDCRC>
#### can3.hr_time_stamp[5]
<link=p.CAN3.HR_TIME_STAMP[5]>
#### p.can3.hr_time_stamp[16]
<link=p.CAN3.HR_TIME_STAMP[16]>
#### CAN3.HR_TIME_STAMP[20]
<link=p.CAN3.HR_TIME_STAMP[20]>
#### p.CAN3.HR_TIME_STAMP[26]
<lang=dft>
 (ro)  [1;33m0x401d8c98[0m (0x401d8000 + 0x0c98)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.CAN3.HR_TIME_STAMP[30]
<lang=dft>
 (ro)  [1;33m0x401d8ca8[0m (0x401d8000 + 0x0ca8)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[30]
<link=p.CAN3.HR_TIME_STAMP[30]>
#### CAN3.HR_TIME_STAMP[33]
<link=p.CAN3.HR_TIME_STAMP[33]>
#### p.CAN3.HR_TIME_STAMP[35]
<lang=dft>
 (ro)  [1;33m0x401d8cbc[0m (0x401d8000 + 0x0cbc)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.hr_time_stamp[35]
<link=p.CAN3.HR_TIME_STAMP[35]>
#### CAN3.HR_TIME_STAMP[36]
<link=p.CAN3.HR_TIME_STAMP[36]>
#### can3.hr_time_stamp[40]
<link=p.CAN3.HR_TIME_STAMP[40]>
#### p.CAN3.HR_TIME_STAMP[41]
<lang=dft>
 (ro)  [1;33m0x401d8cd4[0m (0x401d8000 + 0x0cd4)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[41]
<link=p.CAN3.HR_TIME_STAMP[41]>
#### can3.hr_time_stamp[54]
<link=p.CAN3.HR_TIME_STAMP[54]>
#### p.CAN3.HR_TIME_STAMP[59]
<lang=dft>
 (ro)  [1;33m0x401d8d1c[0m (0x401d8000 + 0x0d1c)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.hr_time_stamp[59]
<link=p.CAN3.HR_TIME_STAMP[59]>
#### p.can3.erffel[0]
<link=p.CAN3.ERFFEL[0]>
#### CAN3.ERFFEL[1]
<link=p.CAN3.ERFFEL[1]>
#### can3.erffel[6]
<link=p.CAN3.ERFFEL[6]>
#### CAN3.ERFFEL[6]
<link=p.CAN3.ERFFEL[6]>
#### p.can3.erffel[10]
<link=p.CAN3.ERFFEL[10]>
#### p.can3.erffel[22]
<link=p.CAN3.ERFFEL[22]>
#### p.can3.erffel[28]
<link=p.CAN3.ERFFEL[28]>
#### p.can3.erffel[36]
<link=p.CAN3.ERFFEL[36]>
#### CAN3.ERFFEL[41]
<link=p.CAN3.ERFFEL[41]>
#### can3.erffel[42]
<link=p.CAN3.ERFFEL[42]>
#### CAN3.ERFFEL[44]
<link=p.CAN3.ERFFEL[44]>
#### can3.erffel[56]
<link=p.CAN3.ERFFEL[56]>
#### p.can3.erffel[59]
<link=p.CAN3.ERFFEL[59]>
#### p.can3.erffel[61]
<link=p.CAN3.ERFFEL[61]>
#### CAN3.ERFFEL[68]
<link=p.CAN3.ERFFEL[68]>
#### can3.erffel[70]
<link=p.CAN3.ERFFEL[70]>
#### p.CAN3.ERFFEL[71]
<lang=dft>
 (rw)  [1;33m0x401db11c[0m (0x401d8000 + 0x311c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[83]
<lang=dft>
 (rw)  [1;33m0x401db14c[0m (0x401d8000 + 0x314c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[83]
<link=p.CAN3.ERFFEL[83]>
#### p.CAN3.ERFFEL[89]
<lang=dft>
 (rw)  [1;33m0x401db164[0m (0x401d8000 + 0x3164)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[91]
<link=p.CAN3.ERFFEL[91]>
#### p.CAN3.ERFFEL[93]
<lang=dft>
 (rw)  [1;33m0x401db174[0m (0x401d8000 + 0x3174)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[95]
<link=p.CAN3.ERFFEL[95]>
#### can3.erffel[111]
<link=p.CAN3.ERFFEL[111]>
#### CAN3.ERFFEL[111]
<link=p.CAN3.ERFFEL[111]>
#### can3.erffel[116]
<link=p.CAN3.ERFFEL[116]>
#### p.can3.erffel[126]
<link=p.CAN3.ERFFEL[126]>
#### can3.erffel[127]
<link=p.CAN3.ERFFEL[127]>
#### p.tmr1.comp10
<link=p.TMR1.COMP10>
#### p.TMR1.COMP13
<lang=dft>
 (rw)  [1;33m0x401dc060[0m (0x401dc000 + 0x0060)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### tmr1.comp21
<link=p.TMR1.COMP21>
#### p.TMR1.CAPT3
<lang=dft>
 (rw)  [1;33m0x401dc064[0m (0x401dc000 + 0x0064)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### TMR1.CAPT3
<link=p.TMR1.CAPT3>
#### TMR1.HOLD1
<link=p.TMR1.HOLD1>
#### tmr1.cntr3
<link=p.TMR1.CNTR3>
#### TMR1.SCTRL0
<link=p.TMR1.SCTRL0>
#### p.tmr1.sctrl3
<link=p.TMR1.SCTRL3>
#### TMR1.CMPLD13
<link=p.TMR1.CMPLD13>
#### p.TMR1.CMPLD20
<lang=dft>
 (rw)  [1;33m0x401dc012[0m (0x401dc000 + 0x0012)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### TMR1.CMPLD22
<link=p.TMR1.CMPLD22>
#### p.TMR1.FILT3
<lang=dft>
 (rw)  [1;33m0x401dc076[0m (0x401dc000 + 0x0076)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### tmr1.dma0
<link=p.TMR1.DMA0>
#### TMR2.COMP11
<link=p.TMR2.COMP11>
#### p.tmr2.comp22
<link=p.TMR2.COMP22>
#### p.TMR2.CAPT0
<lang=dft>
 (rw)  [1;33m0x401e0004[0m (0x401e0000 + 0x0004)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### tmr2.capt0
<link=p.TMR2.CAPT0>
#### p.tmr2.capt2
<link=p.TMR2.CAPT2>
#### p.tmr2.load2
<link=p.TMR2.LOAD2>
#### TMR2.HOLD2
<link=p.TMR2.HOLD2>
#### TMR2.SCTRL3
<link=p.TMR2.SCTRL3>
#### p.tmr2.filt2
<link=p.TMR2.FILT2>
#### TMR2.DMA0
<link=p.TMR2.DMA0>
#### p.TMR3.COMP20
<lang=dft>
 (rw)  [1;33m0x401e4002[0m (0x401e4000 + 0x0002)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### tmr3.comp20
<link=p.TMR3.COMP20>
#### p.TMR3.CNTR2
<lang=dft>
 (rw)  [1;33m0x401e404a[0m (0x401e4000 + 0x004a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### TMR3.CTRL3
<link=p.TMR3.CTRL3>
#### p.TMR3.SCTRL2
<lang=dft>
 (rw)  [1;33m0x401e404e[0m (0x401e4000 + 0x004e)
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
#### tmr3.sctrl3
<link=p.TMR3.SCTRL3>
#### p.TMR3.CMPLD10
<lang=dft>
 (rw)  [1;33m0x401e4010[0m (0x401e4000 + 0x0010)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### TMR3.CMPLD21
<link=p.TMR3.CMPLD21>
#### tmr3.csctrl0
<link=p.TMR3.CSCTRL0>
#### p.tmr3.filt2
<link=p.TMR3.FILT2>
#### p.tmr3.dma3
<link=p.TMR3.DMA3>
#### TMR4.COMP12
<link=p.TMR4.COMP12>
#### tmr4.comp13
<link=p.TMR4.COMP13>
#### p.TMR4.COMP20
<lang=dft>
 (rw)  [1;33m0x401e8002[0m (0x401e8000 + 0x0002)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### p.tmr4.capt3
<link=p.TMR4.CAPT3>
#### tmr4.load0
<link=p.TMR4.LOAD0>
#### p.TMR4.LOAD3
<lang=dft>
 (rw)  [1;33m0x401e8066[0m (0x401e8000 + 0x0066)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### p.TMR4.HOLD3
<lang=dft>
 (rw)  [1;33m0x401e8068[0m (0x401e8000 + 0x0068)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### tmr4.hold3
<link=p.TMR4.HOLD3>
#### p.TMR4.CNTR1
<lang=dft>
 (rw)  [1;33m0x401e802a[0m (0x401e8000 + 0x002a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### tmr4.cntr2
<link=p.TMR4.CNTR2>
#### p.tmr4.cntr3
<link=p.TMR4.CNTR3>
#### TMR4.SCTRL0
<link=p.TMR4.SCTRL0>
#### p.tmr4.cmpld10
<link=p.TMR4.CMPLD10>
#### tmr4.cmpld12
<link=p.TMR4.CMPLD12>
#### tmr4.filt0
<link=p.TMR4.FILT0>
#### p.GPT1.CR
<lang=dft>
 (rw)  [1;33m0x401ec000[0m (0x401ec000 + 0x0000)
GPT Control Register
 (rw) (01)  [0;32mEN[0m  - [00:00] -  GPT Enable
      0 - EN_0 :
         GPT is disabled.
      0x1 - EN_1 :
         GPT is enabled.
 (rw) (01)  [0;32mENMOD[0m  - [01:01] -  GPT Enable mode
      0 - ENMOD_0 :
         GPT counter will retain its value when it is disabled.
      0x1 - ENMOD_1 :
         GPT counter value is reset to 0 when it is disabled.
 (rw) (01)  [0;32mDBGEN[0m  - [02:02] -  GPT debug mode enable
      0 - DBGEN_0 :
         GPT is disabled in debug mode.
      0x1 - DBGEN_1 :
         GPT is enabled in debug mode.
 (rw) (01)  [0;32mWAITEN[0m  - [03:03] -  GPT Wait Mode enable
      0 - WAITEN_0 :
         GPT is disabled in wait mode.
      0x1 - WAITEN_1 :
         GPT is enabled in wait mode.
 (rw) (01)  [0;32mDOZEEN[0m  - [04:04] -  GPT Doze Mode Enable
      0 - DOZEEN_0 :
         GPT is disabled in doze mode.
      0x1 - DOZEEN_1 :
         GPT is enabled in doze mode.
 (rw) (01)  [0;32mSTOPEN[0m  - [05:05] -  GPT Stop Mode enable
      0 - STOPEN_0 :
         GPT is disabled in Stop mode.
      0x1 - STOPEN_1 :
         GPT is enabled in Stop mode.
 (rw) (03)  [0;32mCLKSRC[0m  - [08:06] -  Clock Source select
      0 - CLKSRC_0 :
         No clock
      0x1 - CLKSRC_1 :
         Peripheral Clock (ipg_clk)
      0x2 - CLKSRC_2 :
         High Frequency Reference Clock (ipg_clk_highfreq)
      0x3 - CLKSRC_3 :
         External Clock
      0x4 - CLKSRC_4 :
         Low Frequency Reference Clock (ipg_clk_32k)
      0x5 - CLKSRC_5 :
         Crystal oscillator as Reference Clock (ipg_clk_24M)
 (rw) (01)  [0;32mFRR[0m  - [09:09] -  Free-Run or Restart mode
      0 - FRR_0 :
         Restart mode
      0x1 - FRR_1 :
         Free-Run mode
 (rw) (01)  [0;32mEN_24M[0m  - [10:10] -  Enable 24 MHz clock input from crystal
      0 - EN_24M_0 :
         24M clock disabled
      0x1 - EN_24M_1 :
         24M clock enabled
 (rw) (01)  [0;32mSWR[0m  - [15:15] -  Software reset
      0 - SWR_0 :
         GPT is not in reset state
      0x1 - SWR_1 :
         GPT is in reset state
 (rw) (02)  [0;32mIM1[0m  - [17:16] -  See IM2
 (rw) (02)  [0;32mIM2[0m  - [19:18] -  IM2 (bits 19-18, Input Capture Channel 2 operating mode) IM1 (bits 17-16, Input
  Capture Channel 1 operating mode) The IMn bit field determines the transition 
 on the input pin (for Input capture channel n), which will trigger a capture ev
 ent
      0 - IM2_0 :
         capture disabled
      0x1 - IM2_1 :
         capture on rising edge only
      0x2 - IM2_2 :
         capture on falling edge only
      0x3 - IM2_3 :
         capture on both edges
 (rw) (03)  [0;32mOM1[0m  - [22:20] -  See OM3
 (rw) (03)  [0;32mOM2[0m  - [25:23] -  See OM3
 (rw) (03)  [0;32mOM3[0m  - [28:26] -  OM3 (bits 28-26) controls the Output Compare Channel 3 operating mode
      0 - OM3_0 :
         Output disconnected. No response on pin.
      0x1 - OM3_1 :
         Toggle output pin
      0x2 - OM3_2 :
         Clear output pin
      0x3 - OM3_3 :
         Set output pin
      #1xx - OM3_4 :
         Generate an active low pulse (that is one input clock wide) on the outp
         ut pin.
 (rw) (01)  [0;32mFO1[0m  - [29:29] -  See F03
 (rw) (01)  [0;32mFO2[0m  - [30:30] -  See F03
 (rw) (01)  [0;32mFO3[0m  - [31:31] -  FO3 Force Output Compare Channel 3 FO2 Force Output Compare Channel 2 FO1 Force
  Output Compare Channel 1 The FOn bit causes the pin action programmed for the 
 timer Output Compare n pin (according to the OMn bits in this register)
      0 - FO3_0 :
         Writing a 0 has no effect.
      0x1 - FO3_1 :
         Causes the programmed pin action on the timer Output Compare n pin; the
          OFn flag is not set.
</lang>
#### OCOTP.CTRL_SET
<link=p.OCOTP.CTRL_SET>
#### p.OCOTP.CTRL_TOG
<lang=dft>
 (rw)  [1;33m0x401f400c[0m (0x401f4000 + 0x000c)
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
#### ocotp.data
<link=p.OCOTP.DATA>
#### p.ocotp.read_ctrl
<link=p.OCOTP.READ_CTRL>
#### ocotp.read_ctrl
<link=p.OCOTP.READ_CTRL>
#### OCOTP.READ_FUSE_DATA
<link=p.OCOTP.READ_FUSE_DATA>
#### OCOTP.SCS_SET
<link=p.OCOTP.SCS_SET>
#### p.ocotp.scs_clr
<link=p.OCOTP.SCS_CLR>
#### OCOTP.TIMING2
<link=p.OCOTP.TIMING2>
#### ocotp.cfg6
<link=p.OCOTP.CFG6>
#### OCOTP.CFG6
<link=p.OCOTP.CFG6>
#### p.ocotp.mem0
<link=p.OCOTP.MEM0>
#### ocotp.mem0
<link=p.OCOTP.MEM0>
#### OCOTP.MEM4
<link=p.OCOTP.MEM4>
#### ocotp.ana2
<link=p.OCOTP.ANA2>
#### OCOTP.ANA2
<link=p.OCOTP.ANA2>
#### OCOTP.OTPMK1
<link=p.OCOTP.OTPMK1>
#### ocotp.otpmk4
<link=p.OCOTP.OTPMK4>
#### p.OCOTP.MAC2
<lang=dft>
 (rw)  [1;33m0x401f4640[0m (0x401f4000 + 0x0640)
Value of OTP Bank4 Word4 (MAC2 Address)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### ocotp.gp2
<link=p.OCOTP.GP2>
#### p.OCOTP.ROM_PATCH0
<lang=dft>
 (rw)  [1;33m0x401f4800[0m (0x401f4000 + 0x0800)
Value of OTP Bank6 Word0 (ROM Patch)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.ROM_PATCH4
<link=p.OCOTP.ROM_PATCH4>
#### p.OCOTP.GP31
<lang=dft>
 (rw)  [1;33m0x401f4890[0m (0x401f4000 + 0x0890)
Value of OTP Bank7 Word1 (GP3)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_01>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_04>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_08>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_13>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_22
<lang=dft>
 (rw)  [1;33m0x401f806c[0m (0x401f8000 + 0x006c)
SW_MUX_CTL_PAD_GPIO_EMC_22 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_BA1 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM3_PWMB03 of instance: flexpwm3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPI2C3_SCL of instance: lpi2c3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_TDATA00 of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: QTIMER2_TIMER3 of instance: qtimer2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO22 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_A_SS1_B of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_22
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_27
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_27>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_34
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_34>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_35
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_35>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_40
<lang=dft>
 (rw)  [1;33m0x401f80b4[0m (0x401f8000 + 0x00b4)
SW_MUX_CTL_PAD_GPIO_EMC_40 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_RDY of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: GPT2_CAPTURE2 of instance: gpt2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPSPI1_PCS2 of instance: lpspi1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: USB_OTG2_OC of instance: usb
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: ENET_MDC of instance: enet
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO26 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_RESET_B of instance: usdhc2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: SEMC_CLK5 of instance: semc
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_40
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_02>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_03>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_10>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b0_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_15>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_01>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_04>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_08>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_00>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_05
<lang=dft>
 (rw)  [1;33m0x401f8150[0m (0x401f8000 + 0x0150)
SW_MUX_CTL_PAD_GPIO_B0_05 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA01 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER2_TIMER2 of instance: qtimer2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPI2C2_SDA of instance: lpi2c2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ARM_TRACE1 of instance: cm7_mx6rt
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO05 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO05 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SRC_BOOT_CFG01 of instance: src
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TDATA02 of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_05
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_06>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_06>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_09
<lang=dft>
 (rw)  [1;33m0x401f81a0[0m (0x401f8000 + 0x01a0)
SW_MUX_CTL_PAD_GPIO_B1_09 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA21 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER2_TIMER3 of instance: qtimer2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: CSI_DATA10 of instance: csi
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_TX_EN of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO25 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO25 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXCAN2_RX of instance: flexcan2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT1_COMPARE3 of instance: gpt1
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO25 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_09
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_15>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_03>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_05
<lang=dft>
 (rw)  [1;33m0x401f81d0[0m (0x401f8000 + 0x01d0)
SW_MUX_CTL_PAD_GPIO_SD_B0_05 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC1_DATA3 of instance: usdhc1
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMB02 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART8_RX of instance: lpuart8
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT09 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXSPIB_DQS of instance: flexspi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO17 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: CCM_CLKO2 of instance: ccm
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RX_EN of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B0_05
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_00>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_04>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_01
<lang=dft>
 (rw)  [1;33m0x401f8208[0m (0x401f8000 + 0x0208)
SW_PAD_CTL_PAD_GPIO_EMC_01 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_06>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_10>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_10>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_20
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_20>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_25
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_25>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_29
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_29>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_34
<lang=dft>
 (rw)  [1;33m0x401f828c[0m (0x401f8000 + 0x028c)
SW_PAD_CTL_PAD_GPIO_EMC_34 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_00
<lang=dft>
 (rw)  [1;33m0x401f82ac[0m (0x401f8000 + 0x02ac)
SW_PAD_CTL_PAD_GPIO_AD_B0_00 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_05>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_07>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_00>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_05>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_07
<lang=dft>
 (rw)  [1;33m0x401f8308[0m (0x401f8000 + 0x0308)
SW_PAD_CTL_PAD_GPIO_AD_B1_07 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_00
<lang=dft>
 (rw)  [1;33m0x401f832c[0m (0x401f8000 + 0x032c)
SW_PAD_CTL_PAD_GPIO_B0_00 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_b0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_05>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_08>
#### iomuxc.sw_pad_ctl_pad_gpio_b1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_02>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_07>
#### iomuxc.sw_pad_ctl_pad_gpio_b1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_11>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_14
<lang=dft>
 (rw)  [1;33m0x401f83a4[0m (0x401f8000 + 0x03a4)
SW_PAD_CTL_PAD_GPIO_B1_14 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_14>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_00
<lang=dft>
 (rw)  [1;33m0x401f83ac[0m (0x401f8000 + 0x03ac)
SW_PAD_CTL_PAD_GPIO_SD_B0_00 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_01>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_05>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_00>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_03>
#### p.iomuxc.ccm_pmic_ready_select_input
<link=p.IOMUXC.CCM_PMIC_READY_SELECT_INPUT>
#### iomuxc.ccm_pmic_ready_select_input
<link=p.IOMUXC.CCM_PMIC_READY_SELECT_INPUT>
#### IOMUXC.CSI_DATA02_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA02_SELECT_INPUT>
#### IOMUXC.CSI_DATA04_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA04_SELECT_INPUT>
#### p.IOMUXC.CSI_DATA05_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f840c[0m (0x401f8000 + 0x040c)
CSI_DATA05_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_12_ALT4 :
         Selecting Pad: GPIO_AD_B1_12 for Mode: ALT4
      0x1 - GPIO_AD_B0_08_ALT4 :
         Selecting Pad: GPIO_AD_B0_08 for Mode: ALT4
</lang>
#### iomuxc.csi_pixclk_select_input
<link=p.IOMUXC.CSI_PIXCLK_SELECT_INPUT>
#### IOMUXC.ENET_IPG_CLK_RMII_SELECT_INPUT
<link=p.IOMUXC.ENET_IPG_CLK_RMII_SELECT_INPUT>
#### iomuxc.enet_mdio_select_input
<link=p.IOMUXC.ENET_MDIO_SELECT_INPUT>
#### iomuxc.flexpwm1_pwma2_select_input
<link=p.IOMUXC.FLEXPWM1_PWMA2_SELECT_INPUT>
#### p.iomuxc.flexpwm1_pwmb3_select_input
<link=p.IOMUXC.FLEXPWM1_PWMB3_SELECT_INPUT>
#### iomuxc.flexpwm1_pwmb1_select_input
<link=p.IOMUXC.FLEXPWM1_PWMB1_SELECT_INPUT>
#### iomuxc.flexpwm2_pwma3_select_input
<link=p.IOMUXC.FLEXPWM2_PWMA3_SELECT_INPUT>
#### iomuxc.flexpwm2_pwmb3_select_input
<link=p.IOMUXC.FLEXPWM2_PWMB3_SELECT_INPUT>
#### p.iomuxc.flexpwm4_pwma0_select_input
<link=p.IOMUXC.FLEXPWM4_PWMA0_SELECT_INPUT>
#### iomuxc.flexpwm4_pwma3_select_input
<link=p.IOMUXC.FLEXPWM4_PWMA3_SELECT_INPUT>
#### p.IOMUXC.FLEXSPIA_DATA0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84a8[0m (0x401f8000 + 0x04a8)
FLEXSPIA_DATA0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_08_ALT1 :
         Selecting Pad: GPIO_SD_B1_08 for Mode: ALT1
      0x1 - GPIO_AD_B1_13_ALT0 :
         Selecting Pad: GPIO_AD_B1_13 for Mode: ALT0
</lang>
#### p.IOMUXC.FLEXSPIA_DATA1_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84ac[0m (0x401f8000 + 0x04ac)
FLEXSPIA_DATA1_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_09_ALT1 :
         Selecting Pad: GPIO_SD_B1_09 for Mode: ALT1
      0x1 - GPIO_AD_B1_12_ALT0 :
         Selecting Pad: GPIO_AD_B1_12 for Mode: ALT0
</lang>
#### IOMUXC.FLEXSPIA_DATA2_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_DATA2_SELECT_INPUT>
#### IOMUXC.FLEXSPIA_DATA3_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_DATA3_SELECT_INPUT>
#### p.iomuxc.flexspib_data1_select_input
<link=p.IOMUXC.FLEXSPIB_DATA1_SELECT_INPUT>
#### iomuxc.flexspib_data3_select_input
<link=p.IOMUXC.FLEXSPIB_DATA3_SELECT_INPUT>
#### IOMUXC.FLEXSPIB_DATA3_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIB_DATA3_SELECT_INPUT>
#### p.IOMUXC.LPSPI1_SDI_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84f4[0m (0x401f8000 + 0x04f4)
LPSPI1_SDI_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_29_ALT3 :
         Selecting Pad: GPIO_EMC_29 for Mode: ALT3
      0x1 - GPIO_SD_B0_03_ALT4 :
         Selecting Pad: GPIO_AD_B0_03 for Mode: ALT4
</lang>
#### p.IOMUXC.LPSPI2_PCS0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84fc[0m (0x401f8000 + 0x04fc)
LPSPI2_PCS0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_06_ALT4 :
         Selecting Pad: GPIO_SD_B1_06 for Mode: ALT4
      0x1 - GPIO_EMC_01_ALT2 :
         Selecting Pad: GPIO_EMC_01 for Mode: ALT2
</lang>
#### IOMUXC.LPSPI3_PCS0_SELECT_INPUT
<link=p.IOMUXC.LPSPI3_PCS0_SELECT_INPUT>
#### IOMUXC.LPSPI3_SDI_SELECT_INPUT
<link=p.IOMUXC.LPSPI3_SDI_SELECT_INPUT>
#### IOMUXC.LPSPI3_SDO_SELECT_INPUT
<link=p.IOMUXC.LPSPI3_SDO_SELECT_INPUT>
#### p.IOMUXC.LPSPI4_SDO_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8528[0m (0x401f8000 + 0x0528)
LPSPI4_SDO_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_B0_02_ALT3 :
         Selecting Pad: GPIO_B0_02 for Mode: ALT3
      0x1 - GPIO_B1_06_ALT1 :
         Selecting Pad: GPIO_B1_06 for Mode: ALT1
</lang>
#### IOMUXC.LPUART3_RX_SELECT_INPUT
<link=p.IOMUXC.LPUART3_RX_SELECT_INPUT>
#### IOMUXC.LPUART5_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART5_TX_SELECT_INPUT>
#### p.iomuxc.lpuart6_tx_select_input
<link=p.IOMUXC.LPUART6_TX_SELECT_INPUT>
#### p.IOMUXC.LPUART8_TX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8564[0m (0x401f8000 + 0x0564)
LPUART8_TX_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B0_04_ALT2 :
         Selecting Pad: GPIO_SD_B0_04 for Mode: ALT2
      0x1 - GPIO_AD_B1_10_ALT2 :
         Selecting Pad: GPIO_AD_B1_10 for Mode: ALT2
      0x2 - GPIO_EMC_38_ALT2 :
         Selecting Pad: GPIO_EMC_38 for Mode: ALT2
</lang>
#### IOMUXC.LPUART8_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART8_TX_SELECT_INPUT>
#### p.iomuxc.qtimer2_timer2_select_input
<link=p.IOMUXC.QTIMER2_TIMER2_SELECT_INPUT>
#### p.iomuxc.sai1_tx_bclk_select_input
<link=p.IOMUXC.SAI1_TX_BCLK_SELECT_INPUT>
#### iomuxc.sai2_mclk2_select_input
<link=p.IOMUXC.SAI2_MCLK2_SELECT_INPUT>
#### p.IOMUXC.SAI2_RX_BCLK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85b4[0m (0x401f8000 + 0x05b4)
SAI2_RX_BCLK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_10_ALT2 :
         Selecting Pad: GPIO_EMC_10 for Mode: ALT2
      0x1 - GPIO_AD_B0_06_ALT3 :
         Selecting Pad: GPIO_AD_B0_06 for Mode: ALT3
</lang>
#### p.iomuxc.usb_otg1_oc_select_input
<link=p.IOMUXC.USB_OTG1_OC_SELECT_INPUT>
#### IOMUXC.USDHC1_CD_B_SELECT_INPUT
<link=p.IOMUXC.USDHC1_CD_B_SELECT_INPUT>
#### IOMUXC.USDHC2_DATA0_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA0_SELECT_INPUT>
#### p.iomuxc.usdhc2_data3_select_input
<link=p.IOMUXC.USDHC2_DATA3_SELECT_INPUT>
#### p.IOMUXC.USDHC2_DATA4_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85f8[0m (0x401f8000 + 0x05f8)
USDHC2_DATA4_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_08_ALT0 :
         Selecting Pad: GPIO_SD_B1_08 for Mode: ALT0
      0x1 - GPIO_AD_B1_12_ALT6 :
         Selecting Pad: GPIO_AD_B1_12 for Mode: ALT6
</lang>
#### p.IOMUXC.USDHC2_DATA5_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85fc[0m (0x401f8000 + 0x05fc)
USDHC2_DATA5_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_09_ALT0 :
         Selecting Pad: GPIO_SD_B1_09 for Mode: ALT0
      0x1 - GPIO_AD_B1_13_ALT6 :
         Selecting Pad: GPIO_AD_B1_13 for Mode: ALT6
</lang>
#### IOMUXC.USDHC2_WP_SELECT_INPUT
<link=p.IOMUXC.USDHC2_WP_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN05_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8618[0m (0x401f8000 + 0x0618)
XBAR1_IN05_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_03_ALT3 :
         Selecting Pad: GPIO_EMC_03 for Mode: ALT3
      0x1 - GPIO_SD_B0_01_ALT3 :
         Selecting Pad: GPIO_SD_B0_01 for Mode: ALT3
</lang>
#### IOMUXC.XBAR1_IN05_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN05_SELECT_INPUT>
#### iomuxc.xbar1_in22_select_input
<link=p.IOMUXC.XBAR1_IN22_SELECT_INPUT>
#### iomuxc.xbar1_in15_select_input
<link=p.IOMUXC.XBAR1_IN15_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN16_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f864c[0m (0x401f8000 + 0x064c)
XBAR1_IN16_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_02_ALT1 :
         Selecting Pad: GPIO_AD_B0_02 for Mode: ALT1
      0x1 - GPIO_B1_02_ALT1 :
         Selecting Pad: GPIO_B1_02 for Mode: ALT1
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_06>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_09>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_10>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_04>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_06>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_01>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_10>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_01
<lang=dft>
 (rw)  [1;33m0x401f86f0[0m (0x401f8000 + 0x06f0)
SW_PAD_CTL_PAD_GPIO_SPI_B1_01 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b1_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_04>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b1_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_07>
#### p.IOMUXC.ENET2_IPP_IND_MAC0_MDIO_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8710[0m (0x401f8000 + 0x0710)
ENET2_IPP_IND_MAC0_MDIO_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_39_ALT8 :
         Selecting Pad: GPIO_EMC_39 for Mode: ALT8
      0x1 - GPIO_B0_01_ALT8 :
         Selecting Pad: GPIO_B0_01 for Mode: ALT8
</lang>
#### IOMUXC.ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT>
#### IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT>
#### IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT>
#### p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f873c[0m (0x401f8000 + 0x073c)
FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SPI_B1_01_ALT0 :
         Selecting Pad: GPIO_SPI_B1_01 for Mode: ALT0
      0x1 - GPIO_EMC_29_ALT8 :
         Selecting Pad: GPIO_EMC_29 for Mode: ALT8
      0x2 - GPIO_SPI_B0_10_ALT0 :
         Selecting Pad: GPIO_SPI_B0_10 for Mode: ALT0
</lang>
#### iomuxc.flexspi2_ipp_ind_io_fa_bit3_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT>
#### p.IOMUXC.FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8750[0m (0x401f8000 + 0x0750)
FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SPI_B1_05_ALT0 :
         Selecting Pad: GPIO_SPI_B1_05 for Mode: ALT0
      0x1 - GPIO_EMC_25_ALT8 :
         Selecting Pad: GPIO_EMC_25 for Mode: ALT8
      0x2 - GPIO_SPI_B0_08_ALT0 :
         Selecting Pad: GPIO_SPI_B0_08 for Mode: ALT0
</lang>
#### p.IOMUXC.SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2
<lang=dft>
 (rw)  [1;33m0x401f8770[0m (0x401f8000 + 0x0770)
SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2 DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_37_ALT3 :
         Selecting Pad: GPIO_EMC_37 for Mode: ALT3
      0x1 - GPIO_SD_B1_04_ALT8 :
         Selecting Pad: GPIO_SD_B1_04 for Mode: ALT8
</lang>
#### IOMUXC.SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT
<link=p.IOMUXC.SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT>
#### p.IOMUXC.SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8780[0m (0x401f8000 + 0x0780)
SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_38_ALT3 :
         Selecting Pad: GPIO_EMC_38 for Mode: ALT3
      0x1 - GPIO_SD_B1_03_ALT8 :
         Selecting Pad: GPIO_SD_B1_03 for Mode: ALT8
</lang>
#### p.IOMUXC.CANFD_IPP_IND_CANRX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f878c[0m (0x401f8000 + 0x078c)
CANFD_IPP_IND_CANRX_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_37_ALT9 :
         Selecting Pad: GPIO_EMC_37 for Mode: ALT9
      0x1 - GPIO_AD_B0_15_ALT8 :
         Selecting Pad: GPIO_AD_B0_15 for Mode: ALT8
      0x2 - GPIO_AD_B0_11_ALT8 :
         Selecting Pad: GPIO_AD_B0_11 for Mode: ALT8
</lang>
#### FLEXSPI.AHBRXBUF3CR0
<link=p.FLEXSPI.AHBRXBUF3CR0>
#### flexspi.flshcr1a2
<link=p.FLEXSPI.FLSHCR1A2>
#### p.flexspi.flshcr1b2
<link=p.FLEXSPI.FLSHCR1B2>
#### FLEXSPI.IPCR0
<link=p.FLEXSPI.IPCR0>
#### flexspi.ipcmd
<link=p.FLEXSPI.IPCMD>
#### p.FLEXSPI.IPTXFCR
<lang=dft>
 (rw)  [1;33m0x402a80bc[0m (0x402a8000 + 0x00bc)
IP TX FIFO Control Register
 (rw) (01)  [0;32mCLRIPTXF[0m  - [00:00] -  Clear all valid data entries in IP TX FIFO.
 (rw) (01)  [0;32mTXDMAEN[0m  - [01:01] -  IP TX FIFO filling by DMA enabled.
      0 - TXDMAEN_0 :
         IP TX FIFO would be filled by processor.
      0x1 - TXDMAEN_1 :
         IP TX FIFO would be filled by DMA.
 (rw) (04)  [0;32mTXWMRK[0m  - [05:02] -  Watermark level is (TXWMRK+1)*64 Bits.
</lang>
#### p.FLEXSPI.DLLCRA
<lang=dft>
 (rw)  [1;33m0x402a80c0[0m (0x402a8000 + 0x00c0)
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
#### p.flexspi.dllcrb
<link=p.FLEXSPI.DLLCRB>
#### p.FLEXSPI.RFDR[1]
<lang=dft>
 (ro)  [1;33m0x402a8104[0m (0x402a8000 + 0x0104)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI.RFDR[4]
<link=p.FLEXSPI.RFDR[4]>
#### flexspi.rfdr[5]
<link=p.FLEXSPI.RFDR[5]>
#### flexspi.rfdr[8]
<link=p.FLEXSPI.RFDR[8]>
#### FLEXSPI.RFDR[11]
<link=p.FLEXSPI.RFDR[11]>
#### p.FLEXSPI.RFDR[12]
<lang=dft>
 (ro)  [1;33m0x402a8130[0m (0x402a8000 + 0x0130)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi.rfdr[16]
<link=p.FLEXSPI.RFDR[16]>
#### FLEXSPI.RFDR[16]
<link=p.FLEXSPI.RFDR[16]>
#### FLEXSPI.RFDR[24]
<link=p.FLEXSPI.RFDR[24]>
#### p.FLEXSPI.RFDR[28]
<lang=dft>
 (ro)  [1;33m0x402a8170[0m (0x402a8000 + 0x0170)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi.rfdr[29]
<link=p.FLEXSPI.RFDR[29]>
#### FLEXSPI.TFDR[3]
<link=p.FLEXSPI.TFDR[3]>
#### flexspi.tfdr[4]
<link=p.FLEXSPI.TFDR[4]>
#### FLEXSPI.TFDR[9]
<link=p.FLEXSPI.TFDR[9]>
#### flexspi.tfdr[10]
<link=p.FLEXSPI.TFDR[10]>
#### FLEXSPI.TFDR[10]
<link=p.FLEXSPI.TFDR[10]>
#### p.FLEXSPI.TFDR[14]
<lang=dft>
 (wo)  [1;33m0x402a81b8[0m (0x402a8000 + 0x01b8)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI.TFDR[17]
<link=p.FLEXSPI.TFDR[17]>
#### FLEXSPI.TFDR[21]
<link=p.FLEXSPI.TFDR[21]>
#### p.flexspi.tfdr[30]
<link=p.FLEXSPI.TFDR[30]>
#### p.FLEXSPI.LUT[1]
<lang=dft>
 (rw)  [1;33m0x402a8204[0m (0x402a8000 + 0x0204)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[6]
<lang=dft>
 (rw)  [1;33m0x402a8218[0m (0x402a8000 + 0x0218)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[7]
<link=p.FLEXSPI.LUT[7]>
#### FLEXSPI.LUT[9]
<link=p.FLEXSPI.LUT[9]>
#### FLEXSPI.LUT[11]
<link=p.FLEXSPI.LUT[11]>
#### FLEXSPI.LUT[16]
<link=p.FLEXSPI.LUT[16]>
#### p.FLEXSPI.LUT[18]
<lang=dft>
 (rw)  [1;33m0x402a8248[0m (0x402a8000 + 0x0248)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[19]
<link=p.FLEXSPI.LUT[19]>
#### p.flexspi.lut[22]
<link=p.FLEXSPI.LUT[22]>
#### p.FLEXSPI.LUT[24]
<lang=dft>
 (rw)  [1;33m0x402a8260[0m (0x402a8000 + 0x0260)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[27]
<link=p.FLEXSPI.LUT[27]>
#### p.flexspi.lut[28]
<link=p.FLEXSPI.LUT[28]>
#### flexspi.lut[28]
<link=p.FLEXSPI.LUT[28]>
#### FLEXSPI.LUT[46]
<link=p.FLEXSPI.LUT[46]>
#### flexspi.lut[47]
<link=p.FLEXSPI.LUT[47]>
#### flexspi.lut[57]
<link=p.FLEXSPI.LUT[57]>
#### flexspi.lut[61]
<link=p.FLEXSPI.LUT[61]>
#### p.FLEXSPI2.AHBRXBUF1CR0
<lang=dft>
 (rw)  [1;33m0x402a4024[0m (0x402a4000 + 0x0024)
AHB RX Buffer 1 Control Register 0
 (rw) (08)  [0;32mBUFSZ[0m  - [07:00] -  AHB RX Buffer Size in 64 bits.Refer AHB RX Buffer Management for more details.
 (rw) (04)  [0;32mMSTRID[0m  - [19:16] -  This AHB RX Buffer is assigned according to AHB Master with ID (MSTR_ID). Pleas
 e refer to for AHB RX Buffer allocation.
 (rw) (02)  [0;32mPRIORITY[0m  - [25:24] -  This priority for AHB Master Read which this AHB RX Buffer is assigned. Refer f
 or more details.
 (rw) (01)  [0;32mPREFETCHEN[0m  - [31:31] -  AHB Read Prefetch Enable for current AHB RX Buffer corresponding Master.
</lang>
#### p.flexspi2.ahbrxbuf1cr0
<link=p.FLEXSPI2.AHBRXBUF1CR0>
#### p.FLEXSPI2.AHBRXBUF2CR0
<lang=dft>
 (rw)  [1;33m0x402a4028[0m (0x402a4000 + 0x0028)
AHB RX Buffer 2 Control Register 0
 (rw) (08)  [0;32mBUFSZ[0m  - [07:00] -  AHB RX Buffer Size in 64 bits.Refer AHB RX Buffer Management for more details.
 (rw) (04)  [0;32mMSTRID[0m  - [19:16] -  This AHB RX Buffer is assigned according to AHB Master with ID (MSTR_ID). Pleas
 e refer to for AHB RX Buffer allocation.
 (rw) (02)  [0;32mPRIORITY[0m  - [25:24] -  This priority for AHB Master Read which this AHB RX Buffer is assigned. Refer f
 or more details.
 (rw) (01)  [0;32mPREFETCHEN[0m  - [31:31] -  AHB Read Prefetch Enable for current AHB RX Buffer corresponding Master.
</lang>
#### p.flexspi2.flshb2cr0
<link=p.FLEXSPI2.FLSHB2CR0>
#### p.flexspi2.dllcra
<link=p.FLEXSPI2.DLLCRA>
#### FLEXSPI2.STS1
<link=p.FLEXSPI2.STS1>
#### p.flexspi2.ahbspndsts
<link=p.FLEXSPI2.AHBSPNDSTS>
#### p.FLEXSPI2.IPRXFSTS
<lang=dft>
 (ro)  [1;33m0x402a40f0[0m (0x402a4000 + 0x00f0)
IP RX FIFO Status Register
 (ro) (08)  [0;32mFILL[0m  - [07:00] -  Fill level of IP RX FIFO.
 (ro) (16)  [0;32mRDCNTR[0m  - [31:16] -  Total Read Data Counter: RDCNTR * 64 Bits.
</lang>
#### flexspi2.rfdr[1]
<link=p.FLEXSPI2.RFDR[1]>
#### p.FLEXSPI2.RFDR[13]
<lang=dft>
 (ro)  [1;33m0x402a4134[0m (0x402a4000 + 0x0134)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI2.RFDR[19]
<lang=dft>
 (ro)  [1;33m0x402a414c[0m (0x402a4000 + 0x014c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI2.RFDR[22]
<lang=dft>
 (ro)  [1;33m0x402a4158[0m (0x402a4000 + 0x0158)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi2.rfdr[25]
<link=p.FLEXSPI2.RFDR[25]>
#### p.FLEXSPI2.RFDR[27]
<lang=dft>
 (ro)  [1;33m0x402a416c[0m (0x402a4000 + 0x016c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.rfdr[28]
<link=p.FLEXSPI2.RFDR[28]>
#### p.FLEXSPI2.TFDR[15]
<lang=dft>
 (wo)  [1;33m0x402a41bc[0m (0x402a4000 + 0x01bc)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi2.tfdr[17]
<link=p.FLEXSPI2.TFDR[17]>
#### p.flexspi2.tfdr[26]
<link=p.FLEXSPI2.TFDR[26]>
#### flexspi2.tfdr[26]
<link=p.FLEXSPI2.TFDR[26]>
#### p.flexspi2.tfdr[30]
<link=p.FLEXSPI2.TFDR[30]>
#### p.flexspi2.lut[0]
<link=p.FLEXSPI2.LUT[0]>
#### FLEXSPI2.LUT[6]
<link=p.FLEXSPI2.LUT[6]>
#### flexspi2.lut[12]
<link=p.FLEXSPI2.LUT[12]>
#### p.flexspi2.lut[19]
<link=p.FLEXSPI2.LUT[19]>
#### p.FLEXSPI2.LUT[22]
<lang=dft>
 (rw)  [1;33m0x402a4258[0m (0x402a4000 + 0x0258)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[27]
<lang=dft>
 (rw)  [1;33m0x402a426c[0m (0x402a4000 + 0x026c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[32]
<link=p.FLEXSPI2.LUT[32]>
#### p.flexspi2.lut[37]
<link=p.FLEXSPI2.LUT[37]>
#### flexspi2.lut[39]
<link=p.FLEXSPI2.LUT[39]>
#### flexspi2.lut[48]
<link=p.FLEXSPI2.LUT[48]>
#### p.flexspi2.lut[52]
<link=p.FLEXSPI2.LUT[52]>
#### flexspi2.lut[55]
<link=p.FLEXSPI2.LUT[55]>
#### FLEXSPI2.LUT[57]
<link=p.FLEXSPI2.LUT[57]>
#### FLEXSPI2.LUT[61]
<link=p.FLEXSPI2.LUT[61]>
#### p.flexspi2.lut[63]
<link=p.FLEXSPI2.LUT[63]>
#### flexspi2.lut[63]
<link=p.FLEXSPI2.LUT[63]>
#### p.pxp.ctrl_clr
<link=p.PXP.CTRL_CLR>
#### p.PXP.STAT_CLR
<lang=dft>
 (rw)  [1;33m0x402b4018[0m (0x402b4000 + 0x0018)
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
#### p.PXP.STAT_TOG
<lang=dft>
 (rw)  [1;33m0x402b401c[0m (0x402b4000 + 0x001c)
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
#### p.PXP.OUT_BUF
<lang=dft>
 (rw)  [1;33m0x402b4030[0m (0x402b4000 + 0x0030)
Output Frame Buffer Pointer
 (rw) (32)  [0;32mADDR[0m  - [31:00] -  Current address pointer for the output frame buffer
</lang>
#### p.PXP.PS_CTRL_CLR
<lang=dft>
 (rw)  [1;33m0x402b40b8[0m (0x402b4000 + 0x00b8)
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
#### p.pxp.ps_ctrl_clr
<link=p.PXP.PS_CTRL_CLR>
#### PXP.PS_CTRL_TOG
<link=p.PXP.PS_CTRL_TOG>
#### p.PXP.PS_BUF
<lang=dft>
 (rw)  [1;33m0x402b40c0[0m (0x402b4000 + 0x00c0)
PS Input Buffer Address
 (rw) (32)  [0;32mADDR[0m  - [31:00] -  Address pointer for the PS RGB or Y (luma) input buffer.
</lang>
#### pxp.ps_pitch
<link=p.PXP.PS_PITCH>
#### PXP.PS_PITCH
<link=p.PXP.PS_PITCH>
#### pxp.ps_offset
<link=p.PXP.PS_OFFSET>
#### PXP.AS_CTRL
<link=p.PXP.AS_CTRL>
#### p.PXP.AS_BUF
<lang=dft>
 (rw)  [1;33m0x402b4160[0m (0x402b4000 + 0x0160)
Alpha Surface Buffer Pointer
 (rw) (32)  [0;32mADDR[0m  - [31:00] -  Address pointer for the alpha surface 0 buffer.
</lang>
#### p.PXP.CSC1_COEF0
<lang=dft>
 (rw)  [1;33m0x402b41a0[0m (0x402b4000 + 0x01a0)
Color Space Conversion Coefficient Register 0
 (rw) (09)  [0;32mY_OFFSET[0m  - [08:00] -  Two's compliment amplitude offset implicit in the Y data
 (rw) (09)  [0;32mUV_OFFSET[0m  - [17:09] -  Two's compliment phase offset implicit for CbCr data
 (rw) (11)  [0;32mC0[0m  - [28:18] -  Two's compliment Y multiplier coefficient. YUV=0x100 (1.000) YCbCr=0x12A (1.164
 )
 (ro) (01)  [0;32mRSVD1[0m  - [29:29] -  Reserved, always set to zero.
 (rw) (01)  [0;32mBYPASS[0m  - [30:30] -  Bypass the CSC unit in the scaling engine
 (rw) (01)  [0;32mYCBCR_MODE[0m  - [31:31] -  Set to 1 when performing YCbCr conversion to RGB
</lang>
#### pxp.porter_duff_ctrl
<link=p.PXP.PORTER_DUFF_CTRL>
#### p.LCDIF.PIGEON_3_2
<lang=dft>
 (rw)  [1;33m0x402b88e0[0m (0x402b8000 + 0x08e0)
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
#### lcdif.pigeon_4_0
<link=p.LCDIF.PIGEON_4_0>
#### LCDIF.PIGEON_5_2
<link=p.LCDIF.PIGEON_5_2>
#### LCDIF.PIGEON_7_0
<link=p.LCDIF.PIGEON_7_0>
#### LCDIF.PIGEON_8_1
<link=p.LCDIF.PIGEON_8_1>
#### lcdif.pigeon_8_2
<link=p.LCDIF.PIGEON_8_2>
#### p.lcdif.pigeon_9_1
<link=p.LCDIF.PIGEON_9_1>
#### lcdif.pigeon_11_0
<link=p.LCDIF.PIGEON_11_0>
#### p.csi
<link=p.CSI>
#### p.CSI.CSICR2
<lang=dft>
 (rw)  [1;33m0x402bc004[0m (0x402bc000 + 0x0004)
CSI Control Register 2
 (rw) (08)  [0;32mHSC[0m  - [07:00] -  Horizontal Skip Count
 (rw) (08)  [0;32mVSC[0m  - [15:08] -  Vertical Skip Count. Contains the number of rows to skip. SCE must be 1, otherw
 ise VSC is ignored.
 (rw) (03)  [0;32mLVRM[0m  - [18:16] -  Live View Resolution Mode. Selects the grid size used for live view resolution.
      0 - LVRM_0 :
         512 x 384
      0x1 - LVRM_1 :
         448 x 336
      0x2 - LVRM_2 :
         384 x 288
      0x3 - LVRM_3 :
         384 x 256
      0x4 - LVRM_4 :
         320 x 240
      0x5 - LVRM_5 :
         288 x 216
      0x6 - LVRM_6 :
         400 x 300
 (rw) (02)  [0;32mBTS[0m  - [20:19] -  Bayer Tile Start. Controls the Bayer pattern starting point.
      0 - BTS_0 :
         GR
      0x1 - BTS_1 :
         RG
      0x2 - BTS_2 :
         BG
      0x3 - BTS_3 :
         GB
 (rw) (01)  [0;32mSCE[0m  - [23:23] -  Skip Count Enable. Enables or disables the skip count feature.
      0 - SCE_0 :
         Skip count disable
      0x1 - SCE_1 :
         Skip count enable
 (rw) (02)  [0;32mAFS[0m  - [25:24] -  Auto Focus Spread. Selects which green pixels are used for auto-focus.
      0 - AFS_0 :
         Abs Diff on consecutive green pixels
      0x1 - AFS_1 :
         Abs Diff on every third green pixels
      #1x - AFS_2 :
         Abs Diff on every four green pixels
 (rw) (01)  [0;32mDRM[0m  - [26:26] -  Double Resolution Mode. Controls size of statistics grid.
      0 - DRM_0 :
         Stats grid of 8 x 6
      0x1 - DRM_1 :
         Stats grid of 8 x 12
 (rw) (02)  [0;32mDMA_BURST_TYPE_SFF[0m  - [29:28] -  Burst Type of DMA Transfer from STATFIFO. Selects the burst type of DMA transfe
 r from STATFIFO.
      #x0 - DMA_BURST_TYPE_SFF_0 :
         INCR8
      0x1 - DMA_BURST_TYPE_SFF_1 :
         INCR4
      0x3 - DMA_BURST_TYPE_SFF_3 :
         INCR16
 (rw) (02)  [0;32mDMA_BURST_TYPE_RFF[0m  - [31:30] -  Burst Type of DMA Transfer from RxFIFO. Selects the burst type of DMA transfer 
 from RxFIFO.
      #x0 - DMA_BURST_TYPE_RFF_0 :
         INCR8
      0x1 - DMA_BURST_TYPE_RFF_1 :
         INCR4
      0x3 - DMA_BURST_TYPE_RFF_3 :
         INCR16
</lang>
#### csi.csisr
<link=p.CSI.CSISR>
#### p.CSI.CSIIMAG_PARA
<lang=dft>
 (rw)  [1;33m0x402bc034[0m (0x402bc000 + 0x0034)
CSI Image Parameter Register
 (rw) (16)  [0;32mIMAGE_HEIGHT[0m  - [15:00] -  Image Height. Indicates how many pixels in a column of the image from the senso
 r.
 (rw) (16)  [0;32mIMAGE_WIDTH[0m  - [31:16] -  Image Width
</lang>
#### p.USDHC1.DS_ADDR
<lang=dft>
 (rw)  [1;33m0x402c0000[0m (0x402c0000 + 0x0000)
DMA System Address
 (rw) (32)  [0;32mDS_ADDR[0m  - [31:00] -  DS_ADDR
</lang>
#### USDHC1.DS_ADDR
<link=p.USDHC1.DS_ADDR>
#### USDHC1.CMD_RSP2
<link=p.USDHC1.CMD_RSP2>
#### usdhc1.force_event
<link=p.USDHC1.FORCE_EVENT>
#### USDHC1.FORCE_EVENT
<link=p.USDHC1.FORCE_EVENT>
#### USDHC1.ADMA_ERR_STATUS
<link=p.USDHC1.ADMA_ERR_STATUS>
#### p.USDHC1.DLL_CTRL
<lang=dft>
 (rw)  [1;33m0x402c0060[0m (0x402c0000 + 0x0060)
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
#### p.usdhc1.dll_ctrl
<link=p.USDHC1.DLL_CTRL>
#### usdhc2.cmd_rsp0
<link=p.USDHC2.CMD_RSP0>
#### USDHC2.DATA_BUFF_ACC_PORT
<link=p.USDHC2.DATA_BUFF_ACC_PORT>
#### p.usdhc2.pres_state
<link=p.USDHC2.PRES_STATE>
#### usdhc2.pres_state
<link=p.USDHC2.PRES_STATE>
#### p.usdhc2.prot_ctrl
<link=p.USDHC2.PROT_CTRL>
#### USDHC2.PROT_CTRL
<link=p.USDHC2.PROT_CTRL>
#### usdhc2.sys_ctrl
<link=p.USDHC2.SYS_CTRL>
#### p.usdhc2.int_status
<link=p.USDHC2.INT_STATUS>
#### p.usdhc2.autocmd12_err_status
<link=p.USDHC2.AUTOCMD12_ERR_STATUS>
#### USDHC2.AUTOCMD12_ERR_STATUS
<link=p.USDHC2.AUTOCMD12_ERR_STATUS>
#### USDHC2.FORCE_EVENT
<link=p.USDHC2.FORCE_EVENT>
#### USDHC2.DLL_CTRL
<link=p.USDHC2.DLL_CTRL>
#### USDHC2.VEND_SPEC
<link=p.USDHC2.VEND_SPEC>
#### usdhc2.mmc_boot
<link=p.USDHC2.MMC_BOOT>
#### ENET.EIR
<link=p.ENET.EIR>
#### p.ENET.EIMR
<lang=dft>
 (rw)  [1;33m0x402d8008[0m (0x402d8000 + 0x0008)
Interrupt Mask Register
 (rw) (01)  [0;32mTS_TIMER[0m  - [15:15] -  TS_TIMER Interrupt Mask
 (rw) (01)  [0;32mTS_AVAIL[0m  - [16:16] -  TS_AVAIL Interrupt Mask
 (rw) (01)  [0;32mWAKEUP[0m  - [17:17] -  WAKEUP Interrupt Mask
 (rw) (01)  [0;32mPLR[0m  - [18:18] -  PLR Interrupt Mask
 (rw) (01)  [0;32mUN[0m  - [19:19] -  UN Interrupt Mask
 (rw) (01)  [0;32mRL[0m  - [20:20] -  RL Interrupt Mask
 (rw) (01)  [0;32mLC[0m  - [21:21] -  LC Interrupt Mask
 (rw) (01)  [0;32mEBERR[0m  - [22:22] -  EBERR Interrupt Mask
 (rw) (01)  [0;32mMII[0m  - [23:23] -  MII Interrupt Mask
 (rw) (01)  [0;32mRXB[0m  - [24:24] -  RXB Interrupt Mask
 (rw) (01)  [0;32mRXF[0m  - [25:25] -  RXF Interrupt Mask
 (rw) (01)  [0;32mTXB[0m  - [26:26] -  TXB Interrupt Mask
      0 - TXB_0 :
         The corresponding interrupt source is masked.
      0x1 - TXB_1 :
         The corresponding interrupt source is not masked.
 (rw) (01)  [0;32mTXF[0m  - [27:27] -  TXF Interrupt Mask
      0 - TXF_0 :
         The corresponding interrupt source is masked.
      0x1 - TXF_1 :
         The corresponding interrupt source is not masked.
 (rw) (01)  [0;32mGRA[0m  - [28:28] -  GRA Interrupt Mask
      0 - GRA_0 :
         The corresponding interrupt source is masked.
      0x1 - GRA_1 :
         The corresponding interrupt source is not masked.
 (rw) (01)  [0;32mBABT[0m  - [29:29] -  BABT Interrupt Mask
      0 - BABT_0 :
         The corresponding interrupt source is masked.
      0x1 - BABT_1 :
         The corresponding interrupt source is not masked.
 (rw) (01)  [0;32mBABR[0m  - [30:30] -  BABR Interrupt Mask
      0 - BABR_0 :
         The corresponding interrupt source is masked.
      0x1 - BABR_1 :
         The corresponding interrupt source is not masked.
</lang>
#### p.ENET.TDAR
<lang=dft>
 (rw)  [1;33m0x402d8014[0m (0x402d8000 + 0x0014)
Transmit Descriptor Active Register
 (rw) (01)  [0;32mTDAR[0m  - [24:24] -  Transmit Descriptor Active
</lang>
#### enet.mrbr
<link=p.ENET.MRBR>
#### ENET.TAEM
<link=p.ENET.TAEM>
#### enet.tafl
<link=p.ENET.TAFL>
#### p.enet.tacc
<link=p.ENET.TACC>
#### ENET.RMON_T_DROP
<link=p.ENET.RMON_T_DROP>
#### p.ENET.RMON_T_CRC_ALIGN
<lang=dft>
 (ro)  [1;33m0x402d8210[0m (0x402d8000 + 0x0210)
Tx Packets with CRC/Align Error Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Packets with CRC/align error
</lang>
#### p.enet.rmon_t_frag
<link=p.ENET.RMON_T_FRAG>
#### ENET.RMON_T_FRAG
<link=p.ENET.RMON_T_FRAG>
#### p.enet.ieee_t_drop
<link=p.ENET.IEEE_T_DROP>
#### p.enet.ieee_t_frame_ok
<link=p.ENET.IEEE_T_FRAME_OK>
#### enet.ieee_t_fdxfc
<link=p.ENET.IEEE_T_FDXFC>
#### enet.rmon_r_crc_align
<link=p.ENET.RMON_R_CRC_ALIGN>
#### p.ENET.IEEE_R_ALIGN
<lang=dft>
 (ro)  [1;33m0x402d82d4[0m (0x402d8000 + 0x02d4)
Frames Received with Alignment Error Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames received with alignment error
</lang>
#### enet.ieee_r_align
<link=p.ENET.IEEE_R_ALIGN>
#### p.ENET.IEEE_R_MACERR
<lang=dft>
 (ro)  [1;33m0x402d82d8[0m (0x402d8000 + 0x02d8)
Receive FIFO Overflow Count Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Receive FIFO overflow count
</lang>
#### p.enet.ieee_r_fdxfc
<link=p.ENET.IEEE_R_FDXFC>
#### p.ENET.ATCOR
<lang=dft>
 (rw)  [1;33m0x402d8410[0m (0x402d8000 + 0x0410)
Timer Correction Register
 (rw) (31)  [0;32mCOR[0m  - [30:00] -  Correction Counter Wrap-Around Value
</lang>
#### ENET.TCCR0
<link=p.ENET.TCCR0>
#### p.ENET.TCCR2
<lang=dft>
 (rw)  [1;33m0x402d861c[0m (0x402d8000 + 0x061c)
Timer Compare Capture Register
 (rw) (32)  [0;32mTCC[0m  - [31:00] -  Timer Capture Compare
</lang>
#### enet.tccr3
<link=p.ENET.TCCR3>
#### p.ENET2.EIR
<lang=dft>
 (rw)  [1;33m0x402d4004[0m (0x402d4000 + 0x0004)
Interrupt Event Register
 (rw) (01)  [0;32mTS_TIMER[0m  - [15:15] -  Timestamp Timer
 (rw) (01)  [0;32mTS_AVAIL[0m  - [16:16] -  Transmit Timestamp Available
 (rw) (01)  [0;32mWAKEUP[0m  - [17:17] -  Node Wakeup Request Indication
 (rw) (01)  [0;32mPLR[0m  - [18:18] -  Payload Receive Error
 (rw) (01)  [0;32mUN[0m  - [19:19] -  Transmit FIFO Underrun
 (rw) (01)  [0;32mRL[0m  - [20:20] -  Collision Retry Limit
 (rw) (01)  [0;32mLC[0m  - [21:21] -  Late Collision
 (rw) (01)  [0;32mEBERR[0m  - [22:22] -  Ethernet Bus Error
 (rw) (01)  [0;32mMII[0m  - [23:23] -  MII Interrupt.
 (rw) (01)  [0;32mRXB[0m  - [24:24] -  Receive Buffer Interrupt
 (rw) (01)  [0;32mRXF[0m  - [25:25] -  Receive Frame Interrupt
 (rw) (01)  [0;32mTXB[0m  - [26:26] -  Transmit Buffer Interrupt
 (rw) (01)  [0;32mTXF[0m  - [27:27] -  Transmit Frame Interrupt
 (rw) (01)  [0;32mGRA[0m  - [28:28] -  Graceful Stop Complete
 (rw) (01)  [0;32mBABT[0m  - [29:29] -  Babbling Transmit Error
 (rw) (01)  [0;32mBABR[0m  - [30:30] -  Babbling Receive Error
</lang>
#### p.enet2.mibc
<link=p.ENET2.MIBC>
#### p.enet2.paur
<link=p.ENET2.PAUR>
#### enet2.opd
<link=p.ENET2.OPD>
#### enet2.txic
<link=p.ENET2.TXIC>
#### p.enet2.ialr
<link=p.ENET2.IALR>
#### ENET2.GALR
<link=p.ENET2.GALR>
#### p.ENET2.TAFL
<lang=dft>
 (rw)  [1;33m0x402d41a8[0m (0x402d4000 + 0x01a8)
Transmit FIFO Almost Full Threshold
 (rw) (08)  [0;32mTX_ALMOST_FULL[0m  - [07:00] -  Value Of The Transmit FIFO Almost Full Threshold
</lang>
#### p.enet2.tafl
<link=p.ENET2.TAFL>
#### ENET2.TAFL
<link=p.ENET2.TAFL>
#### enet2.ftrl
<link=p.ENET2.FTRL>
#### p.ENET2.RMON_T_P256TO511
<lang=dft>
 (ro)  [1;33m0x402d4234[0m (0x402d4000 + 0x0234)
Tx 256- to 511-byte Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of 256- to 511-byte transmit packets
</lang>
#### enet2.rmon_t_p256to511
<link=p.ENET2.RMON_T_P256TO511>
#### p.enet2.rmon_t_octets
<link=p.ENET2.RMON_T_OCTETS>
#### p.enet2.ieee_t_lcol
<link=p.ENET2.IEEE_T_LCOL>
#### ENET2.IEEE_T_SQE
<link=p.ENET2.IEEE_T_SQE>
#### p.ENET2.IEEE_T_FDXFC
<lang=dft>
 (ro)  [1;33m0x402d4270[0m (0x402d4000 + 0x0270)
Flow Control Pause Frames Transmitted Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of flow-control pause frames transmitted
</lang>
#### p.enet2.rmon_r_mc_pkt
<link=p.ENET2.RMON_R_MC_PKT>
#### p.ENET2.RMON_R_CRC_ALIGN
<lang=dft>
 (ro)  [1;33m0x402d4290[0m (0x402d4000 + 0x0290)
Rx Packets with CRC/Align Error Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive packets with CRC or align error
</lang>
#### enet2.rmon_r_undersize
<link=p.ENET2.RMON_R_UNDERSIZE>
#### p.ENET2.RMON_R_OVERSIZE
<lang=dft>
 (ro)  [1;33m0x402d4298[0m (0x402d4000 + 0x0298)
Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive packets greater than MAX_FL and good CRC
</lang>
#### p.enet2.rmon_r_frag
<link=p.ENET2.RMON_R_FRAG>
#### ENET2.RMON_R_P64
<link=p.ENET2.RMON_R_P64>
#### p.enet2.rmon_r_p512to1023
<link=p.ENET2.RMON_R_P512TO1023>
#### p.ENET2.IEEE_R_MACERR
<lang=dft>
 (ro)  [1;33m0x402d42d8[0m (0x402d4000 + 0x02d8)
Receive FIFO Overflow Count Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Receive FIFO overflow count
</lang>
#### p.enet2.atcr
<link=p.ENET2.ATCR>
#### p.ENET2.ATVR
<lang=dft>
 (rw)  [1;33m0x402d4404[0m (0x402d4000 + 0x0404)
Timer Value Register
 (rw) (32)  [0;32mATIME[0m  - [31:00] -  A write sets the timer
</lang>
#### enet2.atvr
<link=p.ENET2.ATVR>
#### p.enet2.atstmp
<link=p.ENET2.ATSTMP>
#### ENET2.ATSTMP
<link=p.ENET2.ATSTMP>
#### p.enet2.tcsr0
<link=p.ENET2.TCSR0>
#### enet2.tccr2
<link=p.ENET2.TCCR2>
#### p.usb1.id
<link=p.USB1.ID>
#### p.usb1.hwtxbuf
<link=p.USB1.HWTXBUF>
#### usb1.dccparams
<link=p.USB1.DCCPARAMS>
#### p.usb1.usbcmd
<link=p.USB1.USBCMD>
#### p.USB1.CONFIGFLAG
<lang=dft>
 (ro)  [1;33m0x402e0180[0m (0x402e0000 + 0x0180)
Configure Flag Register
 (ro) (01)  [0;32mCF[0m  - [00:00] -  Configure Flag Host software sets this bit as the last action in its process of
  configuring the Host Controller
      0 - CF_0 :
         Port routing control logic default-routes each port to an implementatio
         n dependent classic host controller.
      0x1 - CF_1 :
         Port routing control logic default-routes all ports to this host contro
         ller.
</lang>
#### p.usb1.endptctrl3
<link=p.USB1.ENDPTCTRL3>
#### usb1.endptctrl4
<link=p.USB1.ENDPTCTRL4>
#### usb2.hwdevice
<link=p.USB2.HWDEVICE>
#### p.usb2.gptimer0ld
<link=p.USB2.GPTIMER0LD>
#### p.USB2.SBUSCFG
<lang=dft>
 (rw)  [1;33m0x402e0290[0m (0x402e0200 + 0x0090)
System Bus Config
 (rw) (03)  [0;32mAHBBRST[0m  - [02:00] -  AHB master interface Burst configuration These bits control AHB master transfer
  type sequence (or priority)
      0 - AHBBRST_0 :
         Incremental burst of unspecified length only
      0x1 - AHBBRST_1 :
         INCR4 burst, then single transfer
      0x2 - AHBBRST_2 :
         INCR8 burst, INCR4 burst, then single transfer
      0x3 - AHBBRST_3 :
         INCR16 burst, INCR8 burst, INCR4 burst, then single transfer
      0x5 - AHBBRST_5 :
         INCR4 burst, then incremental burst of unspecified length
      0x6 - AHBBRST_6 :
         INCR8 burst, INCR4 burst, then incremental burst of unspecified length
      0x7 - AHBBRST_7 :
         INCR16 burst, INCR8 burst, INCR4 burst, then incremental burst of unspe
         cified length
</lang>
#### usb2.hciversion
<link=p.USB2.HCIVERSION>
#### USB2.HCCPARAMS
<link=p.USB2.HCCPARAMS>
#### p.USB2.DCIVERSION
<lang=dft>
 (ro)  [1;33m0x402e0320[0m (0x402e0200 + 0x0120)
Device Controller Interface Version
 (ro) (16)  [0;32mDCIVERSION[0m  - [15:00] -  Device Controller Interface Version Number Default value is '01h', which means 
 rev0.1.
</lang>
#### p.USB2.DCCPARAMS
<lang=dft>
 (ro)  [1;33m0x402e0324[0m (0x402e0200 + 0x0124)
Device Controller Capability Parameters
 (ro) (05)  [0;32mDEN[0m  - [04:00] -  Device Endpoint Number This field indicates the number of endpoints built into 
 the device controller
 (ro) (01)  [0;32mDC[0m  - [07:07] -  Device Capable When this bit is 1, this controller is capable of operating as a
  USB 2.0 device.
 (ro) (01)  [0;32mHC[0m  - [08:08] -  Host Capable When this bit is 1, this controller is capable of operating as an 
 EHCI compatible USB 2
</lang>
#### p.USB2.ENDPTLISTADDR
<lang=dft>
 (rw)  [1;33m0x402e0358[0m (0x402e0200 + 0x0158)
Endpoint List Address
 (rw) (21)  [0;32mEPBASE[0m  - [31:11] -  Endpoint List Pointer(Low)
</lang>
#### USB2.ENDPTCTRL0
<link=p.USB2.ENDPTCTRL0>
#### p.USB2.ENDPTCTRL3
<lang=dft>
 (rw)  [1;33m0x402e03cc[0m (0x402e0200 + 0x01cc)
Endpoint Control 3
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
#### usb2.endptctrl4
<link=p.USB2.ENDPTCTRL4>
#### usbnc1.usb_otg1_phy_ctrl_0
<link=p.USBNC1.USB_OTG1_PHY_CTRL_0>
#### p.usbnc2.usb_otg1_phy_ctrl_0
<link=p.USBNC2.USB_OTG1_PHY_CTRL_0>
#### USBNC2.USB_OTG1_PHY_CTRL_0
<link=p.USBNC2.USB_OTG1_PHY_CTRL_0>
#### p.SEMC.IOCR
<lang=dft>
 (rw)  [1;33m0x402f0004[0m (0x402f0000 + 0x0004)
IO Mux Control Register
 (rw) (03)  [0;32mMUX_A8[0m  - [02:00] -  SEMC_A8 output selection
      0 - MUX_A8_0 :
         SDRAM Address bit (A8)
      0x1 - MUX_A8_1 :
         NAND CE#
      0x2 - MUX_A8_2 :
         NOR CE#
      0x3 - MUX_A8_3 :
         PSRAM CE#
      0x4 - MUX_A8_4 :
         DBI CSX
      0x5 - MUX_A8_5 :
         SDRAM Address bit (A8)
      0x6 - MUX_A8_6 :
         SDRAM Address bit (A8)
      0x7 - MUX_A8_7 :
         SDRAM Address bit (A8)
 (rw) (03)  [0;32mMUX_CSX0[0m  - [05:03] -  SEMC_CSX0 output selection
      0 - MUX_CSX0_0 :
         NOR/PSRAM Address bit 24 (A24)
      0x1 - MUX_CSX0_1 :
         SDRAM CS1
      0x2 - MUX_CSX0_2 :
         SDRAM CS2
      0x3 - MUX_CSX0_3 :
         SDRAM CS3
      0x4 - MUX_CSX0_4 :
         NAND CE#
      0x5 - MUX_CSX0_5 :
         NOR CE#
      0x6 - MUX_CSX0_6 :
         PSRAM CE#
      0x7 - MUX_CSX0_7 :
         DBI CSX
 (rw) (03)  [0;32mMUX_CSX1[0m  - [08:06] -  SEMC_CSX1 output selection
      0 - MUX_CSX1_0 :
         NOR/PSRAM Address bit 25 (A25)
      0x1 - MUX_CSX1_1 :
         SDRAM CS1
      0x2 - MUX_CSX1_2 :
         SDRAM CS2
      0x3 - MUX_CSX1_3 :
         SDRAM CS3
      0x4 - MUX_CSX1_4 :
         NAND CE#
      0x5 - MUX_CSX1_5 :
         NOR CE#
      0x6 - MUX_CSX1_6 :
         PSRAM CE#
      0x7 - MUX_CSX1_7 :
         DBI CSX
 (rw) (03)  [0;32mMUX_CSX2[0m  - [11:09] -  SEMC_CSX2 output selection
      0 - MUX_CSX2_0 :
         NOR/PSRAM Address bit 26 (A26)
      0x1 - MUX_CSX2_1 :
         SDRAM CS1
      0x2 - MUX_CSX2_2 :
         SDRAM CS2
      0x3 - MUX_CSX2_3 :
         SDRAM CS3
      0x4 - MUX_CSX2_4 :
         NAND CE#
      0x5 - MUX_CSX2_5 :
         NOR CE#
      0x6 - MUX_CSX2_6 :
         PSRAM CE#
      0x7 - MUX_CSX2_7 :
         DBI CSX
 (rw) (03)  [0;32mMUX_CSX3[0m  - [14:12] -  SEMC_CSX3 output selection
      0 - MUX_CSX3_0 :
         NOR/PSRAM Address bit 27 (A27)
      0x1 - MUX_CSX3_1 :
         SDRAM CS1
      0x2 - MUX_CSX3_2 :
         SDRAM CS2
      0x3 - MUX_CSX3_3 :
         SDRAM CS3
      0x4 - MUX_CSX3_4 :
         NAND CE#
      0x5 - MUX_CSX3_5 :
         NOR CE#
      0x6 - MUX_CSX3_6 :
         PSRAM CE#
      0x7 - MUX_CSX3_7 :
         DBI CSX
 (rw) (03)  [0;32mMUX_RDY[0m  - [17:15] -  SEMC_RDY function selection
      0 - MUX_RDY_0 :
         NAND Ready/Wait# input
      0x1 - MUX_RDY_1 :
         SDRAM CS1
      0x2 - MUX_RDY_2 :
         SDRAM CS2
      0x3 - MUX_RDY_3 :
         SDRAM CS3
      0x4 - MUX_RDY_4 :
         NOR CE#
      0x5 - MUX_RDY_5 :
         PSRAM CE#
      0x6 - MUX_RDY_6 :
         DBI CSX
      0x7 - MUX_RDY_7 :
         NOR/PSRAM Address bit 27
 (rw) (01)  [0;32mMUX_CLKX0[0m  - [24:24] -  SEMC_CLKX0 function selection
      0 - MUX_CLKX0_0 :
         NOR clock
      0x1 - MUX_CLKX0_1 :
         SRAM clock
 (rw) (01)  [0;32mMUX_CLKX1[0m  - [25:25] -  SEMC_CLKX1 function selection
      0 - MUX_CLKX1_0 :
         NOR clock
      0x1 - MUX_CLKX1_1 :
         SRAM clock
</lang>
#### p.semc.iocr
<link=p.SEMC.IOCR>
#### semc.bmcr1
<link=p.SEMC.BMCR1>
#### p.semc.br0
<link=p.SEMC.BR0>
#### semc.br1
<link=p.SEMC.BR1>
#### p.SEMC.INTR
<lang=dft>
 (rw)  [1;33m0x402f003c[0m (0x402f0000 + 0x003c)
Interrupt Enable Register
 (rw) (01)  [0;32mIPCMDDONE[0m  - [00:00] -  IP command normal done interrupt
 (rw) (01)  [0;32mIPCMDERR[0m  - [01:01] -  IP command error done interrupt
 (rw) (01)  [0;32mAXICMDERR[0m  - [02:02] -  AXI command error interrupt
 (rw) (01)  [0;32mAXIBUSERR[0m  - [03:03] -  AXI bus error interrupt
 (rw) (01)  [0;32mNDPAGEEND[0m  - [04:04] -  This interrupt is generated when the last address of one page in NAND device is
  written by AXI command
 (rw) (01)  [0;32mNDNOPEND[0m  - [05:05] -  This interrupt is generated when all pending AXI write command to NAND is finis
 hed on NAND interface.
</lang>
#### p.semc.nandcr3
<link=p.SEMC.NANDCR3>
#### p.semc.norcr2
<link=p.SEMC.NORCR2>
#### p.semc.sramcr2
<link=p.SEMC.SRAMCR2>
#### SEMC.SRAMCR2
<link=p.SEMC.SRAMCR2>
#### p.SEMC.DBICR1
<lang=dft>
 (rw)  [1;33m0x402f0084[0m (0x402f0000 + 0x0084)
DBI-B control register 1
 (rw) (04)  [0;32mCES[0m  - [03:00] -  CSX Setup Time
 (rw) (04)  [0;32mCEH[0m  - [07:04] -  CSX Hold Time
 (rw) (04)  [0;32mWEL[0m  - [11:08] -  WRX Low Time
 (rw) (04)  [0;32mWEH[0m  - [15:12] -  WRX High Time
 (rw) (06)  [0;32mREL[0m  - [21:16] -  RDX Low Time
 (rw) (06)  [0;32mREH[0m  - [27:22] -  RDX High Time
 (rw) (04)  [0;32mCEITV[0m  - [31:28] -  CSX interval min time
</lang>
#### semc.ipcmd
<link=p.SEMC.IPCMD>
#### semc.iptxdat
<link=p.SEMC.IPTXDAT>
#### SEMC.IPRXDAT
<link=p.SEMC.IPRXDAT>
#### p.SEMC.STS0
<lang=dft>
 (ro)  [1;33m0x402f00c0[0m (0x402f0000 + 0x00c0)
Status register 0
 (ro) (01)  [0;32mIDLE[0m  - [00:00] -  Indicating whether SEMC is in IDLE state.
 (ro) (01)  [0;32mNARDY[0m  - [01:01] -  Indicating NAND device Ready/WAIT# pin level.
      0 - NARDY_0 :
         NAND device is not ready
      0x1 - NARDY_1 :
         NAND device is ready
</lang>
#### p.semc.sts2
<link=p.SEMC.STS2>
#### DCP.CTRL_SET
<link=p.DCP.CTRL_SET>
#### DCP.CAPABILITY0
<link=p.DCP.CAPABILITY0>
#### p.dcp.capability1
<link=p.DCP.CAPABILITY1>
#### p.DCP.KEY
<lang=dft>
 (rw)  [1;33m0x402fc060[0m (0x402fc000 + 0x0060)
DCP key index
 (rw) (02)  [0;32mSUBWORD[0m  - [01:00] -  Key subword pointer
 (rw) (02)  [0;32mINDEX[0m  - [05:04] -  Key index pointer. The valid indices are 0-[number_keys].
</lang>
#### dcp.keydata
<link=p.DCP.KEYDATA>
#### p.DCP.PACKET1
<lang=dft>
 (ro)  [1;33m0x402fc090[0m (0x402fc000 + 0x0090)
DCP work packet 1 status register
 (ro) (01)  [0;32mINTERRUPT[0m  - [00:00] -  Reflects whether the channel must issue an interrupt upon the completion of the
  packet.
 (ro) (01)  [0;32mDECR_SEMAPHORE[0m  - [01:01] -  Reflects whether the channel's semaphore must be decremented at the end of the 
 current operation
 (ro) (01)  [0;32mCHAIN[0m  - [02:02] -  Reflects whether the next command pointer register must be loaded into the chan
 nel's current descriptor pointer
 (ro) (01)  [0;32mCHAIN_CONTIGUOUS[0m  - [03:03] -  Reflects whether the next packet's address is located following this packet's p
 ayload.
 (ro) (01)  [0;32mENABLE_MEMCOPY[0m  - [04:04] -  Reflects whether the selected hashing function should be enabled for this opera
 tion.
 (ro) (01)  [0;32mENABLE_CIPHER[0m  - [05:05] -  Reflects whether the selected cipher function must be enabled for this operatio
 n.
 (ro) (01)  [0;32mENABLE_HASH[0m  - [06:06] -  Reflects whether the selected hashing function must be enabled for this operati
 on.
 (ro) (01)  [0;32mENABLE_BLIT[0m  - [07:07] -  Reflects whether the DCP must perform a blit operation
 (ro) (01)  [0;32mCIPHER_ENCRYPT[0m  - [08:08] -  When the cipher block is enabled, this bit indicates whether the operation is e
 ncryption or decryption
      0 - DECRYPT :
         DECRYPT
      0x1 - ENCRYPT :
         ENCRYPT
 (ro) (01)  [0;32mCIPHER_INIT[0m  - [09:09] -  Reflects whether the cipher block must load the initialization vector from the 
 payload for this operation
 (ro) (01)  [0;32mOTP_KEY[0m  - [10:10] -  Reflects whether a hardware-based key must be used
 (ro) (01)  [0;32mPAYLOAD_KEY[0m  - [11:11] -  When set, it indicates the payload contains the key
 (ro) (01)  [0;32mHASH_INIT[0m  - [12:12] -  Reflects whether the current hashing block is the initial block in the hashing 
 operation, so the hash registers must be initialized before the operation
 (ro) (01)  [0;32mHASH_TERM[0m  - [13:13] -  Reflects whether the current hashing block is the final block in the hashing op
 eration, so the hash padding must be applied by the hardware
 (ro) (01)  [0;32mCHECK_HASH[0m  - [14:14] -  Reflects whether the calculated hash value must be compared to the hash provide
 d in the payload.
 (ro) (01)  [0;32mHASH_OUTPUT[0m  - [15:15] -  When the hashing is enabled, this bit controls whether the input or output data
  is hashed.
      0 - INPUT :
         INPUT
      0x1 - OUTPUT :
         OUTPUT
 (ro) (01)  [0;32mCONSTANT_FILL[0m  - [16:16] -  When this bit is set (MEMCOPY and BLIT modes only), the DCP simply fills the de
 stination buffer with the value found in the source address field
 (ro) (01)  [0;32mTEST_SEMA_IRQ[0m  - [17:17] -  This bit is used to test the channel semaphore transition to 0. FOR TEST USE ON
 LY!
 (ro) (01)  [0;32mKEY_BYTESWAP[0m  - [18:18] -  Reflects whether the DCP engine swaps the key bytes (big-endian key).
 (ro) (01)  [0;32mKEY_WORDSWAP[0m  - [19:19] -  Reflects whether the DCP engine swaps the key words (big-endian key).
 (ro) (01)  [0;32mINPUT_BYTESWAP[0m  - [20:20] -  Reflects whether the DCP engine byteswaps the input data (big-endian data).
 (ro) (01)  [0;32mINPUT_WORDSWAP[0m  - [21:21] -  Reflects whether the DCP engine wordswaps the input data (big-endian data).
 (ro) (01)  [0;32mOUTPUT_BYTESWAP[0m  - [22:22] -  Reflects whether the DCP engine byteswaps the output data (big-endian data).
 (ro) (01)  [0;32mOUTPUT_WORDSWAP[0m  - [23:23] -  Reflects whether the DCP engine wordswaps the output data (big-endian data).
 (ro) (08)  [0;32mTAG[0m  - [31:24] -  Packet Tag
</lang>
#### p.dcp.packet3
<link=p.DCP.PACKET3>
#### DCP.CH0STAT_TOG
<link=p.DCP.CH0STAT_TOG>
#### p.dcp.ch0opts_set
<link=p.DCP.CH0OPTS_SET>
#### dcp.ch0opts_set
<link=p.DCP.CH0OPTS_SET>
#### DCP.CH1CMDPTR
<link=p.DCP.CH1CMDPTR>
#### DCP.CH2OPTS_TOG
<link=p.DCP.CH2OPTS_TOG>
#### DCP.CH3CMDPTR
<link=p.DCP.CH3CMDPTR>
#### p.DCP.CH3STAT_SET
<lang=dft>
 (rw)  [1;33m0x402fc1e4[0m (0x402fc000 + 0x01e4)
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
#### p.DCP.CH3STAT_CLR
<lang=dft>
 (rw)  [1;33m0x402fc1e8[0m (0x402fc000 + 0x01e8)
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
#### DCP.CH3OPTS_CLR
<link=p.DCP.CH3OPTS_CLR>
#### dcp.ch3opts_tog
<link=p.DCP.CH3OPTS_TOG>
#### p.spdif.srpc
<link=p.SPDIF.SRPC>
#### p.SPDIF.SRCSH
<lang=dft>
 (ro)  [1;33m0x4038001c[0m (0x40380000 + 0x001c)
SPDIFRxCChannel_h Register
 (ro) (24)  [0;32mRxCChannel_h[0m  - [23:00] -  SPDIF receive C channel register, contains first 24 bits of C channel without i
 nterpretation
</lang>
#### p.spdif.srq
<link=p.SPDIF.SRQ>
#### SPDIF.SRQ
<link=p.SPDIF.SRQ>
#### p.SPDIF.STL
<lang=dft>
 (rw)  [1;33m0x4038002c[0m (0x40380000 + 0x002c)
SPDIFTxLeft Register
 (wo) (24)  [0;32mTxDataLeft[0m  - [23:00] -  SPDIF transmit left channel data. It is write-only, and always returns zeros wh
 en read
</lang>
#### p.SAI1.VERID
<lang=dft>
 (ro)  [1;33m0x40384000[0m (0x40384000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Specification Number
      0 - FEATURE_0 :
         Standard feature set.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### p.SAI1.TCR4
<lang=dft>
 (rw)  [1;33m0x40384018[0m (0x40384000 + 0x0018)
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
#### p.SAI1.TDR[1]
<lang=dft>
 (rw)  [1;33m0x40384024[0m (0x40384000 + 0x0024)
SAI Transmit Data Register
 (rw) (32)  [0;32mTDR[0m  - [31:00] -  Transmit Data Register
</lang>
#### sai1.tdr[3]
<link=p.SAI1.TDR[3]>
#### p.sai1.tfr[2]
<link=p.SAI1.TFR[2]>
#### p.sai1.rcr2
<link=p.SAI1.RCR2>
#### p.sai1.rdr[2]
<link=p.SAI1.RDR[2]>
#### sai1.rfr[3]
<link=p.SAI1.RFR[3]>
#### p.sai2.tdr[0]
<link=p.SAI2.TDR[0]>
#### SAI2.TDR[2]
<link=p.SAI2.TDR[2]>
#### sai2.tfr[2]
<link=p.SAI2.TFR[2]>
#### SAI2.RCSR
<link=p.SAI2.RCSR>
#### sai2.rcr3
<link=p.SAI2.RCR3>
#### SAI2.RCR3
<link=p.SAI2.RCR3>
#### p.SAI2.RCR4
<lang=dft>
 (rw)  [1;33m0x40388098[0m (0x40388000 + 0x0098)
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
#### p.sai2.rcr5
<link=p.SAI2.RCR5>
#### sai2.rfr[3]
<link=p.SAI2.RFR[3]>
#### p.SAI3.TFR[0]
<lang=dft>
 (ro)  [1;33m0x4038c040[0m (0x4038c000 + 0x0040)
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
#### p.sai3.tmr
<link=p.SAI3.TMR>
#### p.SAI3.RCSR
<lang=dft>
 (rw)  [1;33m0x4038c088[0m (0x4038c000 + 0x0088)
SAI Receive Control Register
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
         Receive FIFO watermark not reached.
      0x1 - FRF_1 :
         Receive FIFO watermark has been reached.
 (ro) (01)  [0;32mFWF[0m  - [17:17] -  FIFO Warning Flag
      0 - FWF_0 :
         No enabled receive FIFO is full.
      0x1 - FWF_1 :
         Enabled receive FIFO is full.
 (rw) (01)  [0;32mFEF[0m  - [18:18] -  FIFO Error Flag
      0 - FEF_0 :
         Receive overflow not detected.
      0x1 - FEF_1 :
         Receive overflow detected.
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
         Receive bit clock is disabled.
      0x1 - BCE_1 :
         Receive bit clock is enabled.
 (rw) (01)  [0;32mDBGE[0m  - [29:29] -  Debug Enable
      0 - DBGE_0 :
         Receiver is disabled in Debug mode, after completing the current frame.
      0x1 - DBGE_1 :
         Receiver is enabled in Debug mode.
 (rw) (01)  [0;32mSTOPE[0m  - [30:30] -  Stop Enable
      0 - STOPE_0 :
         Receiver disabled in Stop mode.
      0x1 - STOPE_1 :
         Receiver enabled in Stop mode.
 (rw) (01)  [0;32mRE[0m  - [31:31] -  Receiver Enable
      0 - RE_0 :
         Receiver is disabled.
      0x1 - RE_1 :
         Receiver is enabled, or receiver has been disabled and has not yet reac
         hed end of frame.
</lang>
#### p.SAI3.RCR3
<lang=dft>
 (rw)  [1;33m0x4038c094[0m (0x4038c000 + 0x0094)
SAI Receive Configuration 3 Register
 (rw) (05)  [0;32mWDFL[0m  - [04:00] -  Word Flag Configuration
 (rw) (04)  [0;32mRCE[0m  - [19:16] -  Receive Channel Enable
 (rw) (04)  [0;32mCFR[0m  - [27:24] -  Channel FIFO Reset
</lang>
#### SAI3.RCR4
<link=p.SAI3.RCR4>
#### p.sai3.rdr[0]
<link=p.SAI3.RDR[0]>
#### SAI3.RDR[0]
<link=p.SAI3.RDR[0]>
#### p.LPSPI1.SR
<lang=dft>
 (rw)  [1;33m0x40394014[0m (0x40394000 + 0x0014)
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
#### p.LPSPI1.IER
<lang=dft>
 (rw)  [1;33m0x40394018[0m (0x40394000 + 0x0018)
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
#### p.lpspi1.dmr0
<link=p.LPSPI1.DMR0>
#### LPSPI1.RSR
<link=p.LPSPI1.RSR>
#### p.LPSPI1.RDR
<lang=dft>
 (ro)  [1;33m0x40394074[0m (0x40394000 + 0x0074)
Receive Data Register
 (ro) (32)  [0;32mDATA[0m  - [31:00] -  Receive Data
</lang>
#### lpspi1.rdr
<link=p.LPSPI1.RDR>
#### lpspi2.verid
<link=p.LPSPI2.VERID>
#### lpspi2.ier
<link=p.LPSPI2.IER>
#### LPSPI2.CFGR1
<link=p.LPSPI2.CFGR1>
#### lpspi2.dmr1
<link=p.LPSPI2.DMR1>
#### p.lpspi2.fcr
<link=p.LPSPI2.FCR>
#### lpspi3.der
<link=p.LPSPI3.DER>
#### p.lpspi3.ccr
<link=p.LPSPI3.CCR>
#### p.LPSPI3.TCR
<lang=dft>
 (rw)  [1;33m0x4039c060[0m (0x4039c000 + 0x0060)
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
#### p.LPSPI3.RSR
<lang=dft>
 (ro)  [1;33m0x4039c070[0m (0x4039c000 + 0x0070)
Receive Status Register
 (ro) (01)  [0;32mSOF[0m  - [00:00] -  Start Of Frame
      0 - SOF_0 :
         Subsequent data word received after LPSPI_PCS assertion
      0x1 - SOF_1 :
         First data word received after LPSPI_PCS assertion
 (ro) (01)  [0;32mRXEMPTY[0m  - [01:01] -  RX FIFO Empty
      0 - RXEMPTY_0 :
         RX FIFO is not empty
      0x1 - RXEMPTY_1 :
         RX FIFO is empty
</lang>
#### p.lpspi4.ier
<link=p.LPSPI4.IER>
#### ADC_ETC.TRIG0_COUNTER
<link=p.ADC_ETC.TRIG0_COUNTER>
#### p.adc_etc.trig0_result_1_0
<link=p.ADC_ETC.TRIG0_RESULT_1_0>
#### p.ADC_ETC.TRIG0_RESULT_5_4
<lang=dft>
 (ro)  [1;33m0x403b0030[0m (0x403b0000 + 0x0030)
ETC_TRIG Result Data 5/4 Register
 (ro) (12)  [0;32mDATA4[0m  - [11:00] -  Result DATA4
 (ro) (12)  [0;32mDATA5[0m  - [27:16] -  Result DATA5
</lang>
#### p.ADC_ETC.TRIG0_RESULT_7_6
<lang=dft>
 (ro)  [1;33m0x403b0034[0m (0x403b0000 + 0x0034)
ETC_TRIG Result Data 7/6 Register
 (ro) (12)  [0;32mDATA6[0m  - [11:00] -  Result DATA6
 (ro) (12)  [0;32mDATA7[0m  - [27:16] -  Result DATA7
</lang>
#### adc_etc.trig1_ctrl
<link=p.ADC_ETC.TRIG1_CTRL>
#### adc_etc.trig1_result_7_6
<link=p.ADC_ETC.TRIG1_RESULT_7_6>
#### adc_etc.trig2_result_3_2
<link=p.ADC_ETC.TRIG2_RESULT_3_2>
#### p.ADC_ETC.TRIG3_CHAIN_7_6
<lang=dft>
 (rw)  [1;33m0x403b009c[0m (0x403b0000 + 0x009c)
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
#### p.ADC_ETC.TRIG3_RESULT_5_4
<lang=dft>
 (ro)  [1;33m0x403b00a8[0m (0x403b0000 + 0x00a8)
ETC_TRIG Result Data 5/4 Register
 (ro) (12)  [0;32mDATA4[0m  - [11:00] -  Result DATA4
 (ro) (12)  [0;32mDATA5[0m  - [27:16] -  Result DATA5
</lang>
#### p.adc_etc.trig4_chain_5_4
<link=p.ADC_ETC.TRIG4_CHAIN_5_4>
#### p.adc_etc.trig4_chain_7_6
<link=p.ADC_ETC.TRIG4_CHAIN_7_6>
#### ADC_ETC.TRIG5_RESULT_3_2
<link=p.ADC_ETC.TRIG5_RESULT_3_2>
#### p.ADC_ETC.TRIG6_RESULT_3_2
<lang=dft>
 (ro)  [1;33m0x403b011c[0m (0x403b0000 + 0x011c)
ETC_TRIG Result Data 3/2 Register
 (ro) (12)  [0;32mDATA2[0m  - [11:00] -  Result DATA2
 (ro) (12)  [0;32mDATA3[0m  - [27:16] -  Result DATA3
</lang>
#### p.ADC_ETC.TRIG6_RESULT_5_4
<lang=dft>
 (ro)  [1;33m0x403b0120[0m (0x403b0000 + 0x0120)
ETC_TRIG Result Data 5/4 Register
 (ro) (12)  [0;32mDATA4[0m  - [11:00] -  Result DATA4
 (ro) (12)  [0;32mDATA5[0m  - [27:16] -  Result DATA5
</lang>
#### p.adc_etc.trig7_counter
<link=p.ADC_ETC.TRIG7_COUNTER>
#### p.ADC_ETC.TRIG7_CHAIN_5_4
<lang=dft>
 (rw)  [1;33m0x403b0138[0m (0x403b0000 + 0x0138)
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
#### aoi1.bfcrt231
<link=p.AOI1.BFCRT231>
#### aoi2.bfcrt011
<link=p.AOI2.BFCRT011>
#### AOI2.BFCRT012
<link=p.AOI2.BFCRT012>
#### p.xbara1.sel0
<link=p.XBARA1.SEL0>
#### p.XBARA1.SEL3
<lang=dft>
 (rw)  [1;33m0x403bc006[0m (0x403bc000 + 0x0006)
Crossbar A Select Register 3
 (rw) (07)  [0;32mSEL6[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT6 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (07)  [0;32mSEL7[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT7 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### p.XBARA1.SEL16
<lang=dft>
 (rw)  [1;33m0x403bc020[0m (0x403bc000 + 0x0020)
Crossbar A Select Register 16
 (rw) (07)  [0;32mSEL32[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT32 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL33[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT33 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel17
<link=p.XBARA1.SEL17>
#### XBARA1.SEL20
<link=p.XBARA1.SEL20>
#### xbara1.sel21
<link=p.XBARA1.SEL21>
#### xbara1.sel32
<link=p.XBARA1.SEL32>
#### XBARA1.SEL33
<link=p.XBARA1.SEL33>
#### p.xbara1.sel38
<link=p.XBARA1.SEL38>
#### XBARA1.SEL42
<link=p.XBARA1.SEL42>
#### xbara1.sel43
<link=p.XBARA1.SEL43>
#### p.xbara1.sel49
<link=p.XBARA1.SEL49>
#### xbara1.sel50
<link=p.XBARA1.SEL50>
#### XBARA1.SEL51
<link=p.XBARA1.SEL51>
#### p.XBARA1.SEL59
<lang=dft>
 (rw)  [1;33m0x403bc076[0m (0x403bc000 + 0x0076)
Crossbar A Select Register 59
 (rw) (07)  [0;32mSEL118[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT118 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL119[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT119 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### p.XBARB2.SEL0
<lang=dft>
 (rw)  [1;33m0x403c0000[0m (0x403c0000 + 0x0000)
Crossbar B Select Register 0
 (rw) (06)  [0;32mSEL0[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT0 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (06)  [0;32mSEL1[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT1 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### xbarb2.sel1
<link=p.XBARB2.SEL1>
#### p.xbarb2.sel2
<link=p.XBARB2.SEL2>
#### XBARB2.SEL5
<link=p.XBARB2.SEL5>
#### p.XBARB3.SEL2
<lang=dft>
 (rw)  [1;33m0x403c4004[0m (0x403c4000 + 0x0004)
Crossbar B Select Register 2
 (rw) (06)  [0;32mSEL4[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT4 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (06)  [0;32mSEL5[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT5 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### XBARB3.SEL5
<link=p.XBARB3.SEL5>
#### p.ENC1.FILT
<lang=dft>
 (rw)  [1;33m0x403c8002[0m (0x403c8000 + 0x0002)
Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### p.ENC1.POSDH
<lang=dft>
 (ro)  [1;33m0x403c8008[0m (0x403c8000 + 0x0008)
Position Difference Hold Register
 (ro) (16)  [0;32mPOSDH[0m  - [15:00] -  This read-only register contains a snapshot of the value of the POSD register
</lang>
#### ENC1.LPOSH
<link=p.ENC1.LPOSH>
#### enc1.ctrl2
<link=p.ENC1.CTRL2>
#### ENC2.CTRL
<link=p.ENC2.CTRL>
#### p.ENC3.CTRL
<lang=dft>
 (rw)  [1;33m0x403d0000[0m (0x403d0000 + 0x0000)
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
#### ENC3.POSD
<link=p.ENC3.POSD>
#### enc3.lpos
<link=p.ENC3.LPOS>
#### ENC3.UINIT
<link=p.ENC3.UINIT>
#### ENC3.TST
<link=p.ENC3.TST>
#### p.enc3.umod
<link=p.ENC3.UMOD>
#### p.enc3.lcomp
<link=p.ENC3.LCOMP>
#### enc4.ctrl
<link=p.ENC4.CTRL>
#### enc4.revh
<link=p.ENC4.REVH>
#### p.ENC4.LPOSH
<lang=dft>
 (ro)  [1;33m0x403d4014[0m (0x403d4000 + 0x0014)
Lower Position Hold Register
 (ro) (16)  [0;32mPOSH[0m  - [15:00] -  This read-only register contains a snapshot of the LPOS register.
</lang>
#### enc4.imr
<link=p.ENC4.IMR>
#### p.enc4.ctrl2
<link=p.ENC4.CTRL2>
#### PWM1.SM0CNT
<link=p.PWM1.SM0CNT>
#### p.pwm1.sm0init
<link=p.PWM1.SM0INIT>
#### p.PWM1.SM0CTRL
<lang=dft>
 (rw)  [1;33m0x403dc006[0m (0x403dc000 + 0x0006)
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
#### p.PWM1.SM0VAL2
<lang=dft>
 (rw)  [1;33m0x403dc012[0m (0x403dc000 + 0x0012)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### PWM1.SM0VAL2
<link=p.PWM1.SM0VAL2>
#### p.PWM1.SM0DMAEN
<lang=dft>
 (rw)  [1;33m0x403dc028[0m (0x403dc000 + 0x0028)
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
#### p.PWM1.SM0DISMAP0
<lang=dft>
 (rw)  [1;33m0x403dc02c[0m (0x403dc000 + 0x002c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### PWM1.SM0DTCNT0
<link=p.PWM1.SM0DTCNT0>
#### PWM1.SM0CAPTCTRLX
<link=p.PWM1.SM0CAPTCTRLX>
#### p.pwm1.sm0cval1cyc
<link=p.PWM1.SM0CVAL1CYC>
#### pwm1.sm0cval1cyc
<link=p.PWM1.SM0CVAL1CYC>
#### pwm1.sm0cval2cyc
<link=p.PWM1.SM0CVAL2CYC>
#### p.pwm1.sm0cval3
<link=p.PWM1.SM0CVAL3>
#### PWM1.SM0CVAL5
<link=p.PWM1.SM0CVAL5>
#### pwm1.sm1init
<link=p.PWM1.SM1INIT>
#### p.PWM1.SM1VAL3
<lang=dft>
 (rw)  [1;33m0x403dc076[0m (0x403dc000 + 0x0076)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### p.PWM1.SM1INTEN
<lang=dft>
 (rw)  [1;33m0x403dc086[0m (0x403dc000 + 0x0086)
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
#### PWM1.SM1DISMAP1
<link=p.PWM1.SM1DISMAP1>
#### p.PWM1.SM1DTCNT1
<lang=dft>
 (rw)  [1;33m0x403dc092[0m (0x403dc000 + 0x0092)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### p.pwm1.sm1captctrla
<link=p.PWM1.SM1CAPTCTRLA>
#### p.pwm1.sm1cval0
<link=p.PWM1.SM1CVAL0>
#### p.pwm1.sm1cval2cyc
<link=p.PWM1.SM1CVAL2CYC>
#### p.pwm1.sm2ctrl
<link=p.PWM1.SM2CTRL>
#### p.pwm1.sm2val0
<link=p.PWM1.SM2VAL0>
#### pwm1.sm2val0
<link=p.PWM1.SM2VAL0>
#### pwm1.sm2fracval5
<link=p.PWM1.SM2FRACVAL5>
#### pwm1.sm2inten
<link=p.PWM1.SM2INTEN>
#### p.pwm1.sm2tctrl
<link=p.PWM1.SM2TCTRL>
#### pwm1.sm2dismap1
<link=p.PWM1.SM2DISMAP1>
#### p.pwm1.sm2captctrla
<link=p.PWM1.SM2CAPTCTRLA>
#### p.PWM1.SM2CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403dc0fe[0m (0x403dc000 + 0x00fe)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### pwm1.sm2captcompx
<link=p.PWM1.SM2CAPTCOMPX>
#### PWM1.SM2CVAL0CYC
<link=p.PWM1.SM2CVAL0CYC>
#### PWM1.SM2CVAL3
<link=p.PWM1.SM2CVAL3>
#### pwm1.sm2cval4cyc
<link=p.PWM1.SM2CVAL4CYC>
#### p.PWM1.SM3CNT
<lang=dft>
 (ro)  [1;33m0x403dc120[0m (0x403dc000 + 0x0120)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### p.pwm1.sm3init
<link=p.PWM1.SM3INIT>
#### pwm1.sm3ctrl
<link=p.PWM1.SM3CTRL>
#### p.pwm1.sm3val1
<link=p.PWM1.SM3VAL1>
#### pwm1.sm3val1
<link=p.PWM1.SM3VAL1>
#### p.pwm1.sm3fracval4
<link=p.PWM1.SM3FRACVAL4>
#### p.PWM1.SM3FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403dc13c[0m (0x403dc000 + 0x013c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### p.PWM1.SM3FRCTRL
<lang=dft>
 (rw)  [1;33m0x403dc140[0m (0x403dc000 + 0x0140)
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
#### pwm1.sm3inten
<link=p.PWM1.SM3INTEN>
#### PWM1.SM3TCTRL
<link=p.PWM1.SM3TCTRL>
#### p.PWM1.SM3CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403dc15a[0m (0x403dc000 + 0x015a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### PWM1.SM3CAPTCOMPB
<link=p.PWM1.SM3CAPTCOMPB>
#### pwm1.sm3captcompx
<link=p.PWM1.SM3CAPTCOMPX>
#### PWM1.SM3CVAL0
<link=p.PWM1.SM3CVAL0>
#### p.pwm1.sm3cval4cyc
<link=p.PWM1.SM3CVAL4CYC>
#### p.PWM1.SM3CVAL5
<lang=dft>
 (ro)  [1;33m0x403dc174[0m (0x403dc000 + 0x0174)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### p.pwm1.fctrl0
<link=p.PWM1.FCTRL0>
#### p.PWM2.SM0CNT
<lang=dft>
 (ro)  [1;33m0x403e0000[0m (0x403e0000 + 0x0000)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### p.pwm2.sm0ctrl
<link=p.PWM2.SM0CTRL>
#### p.pwm2.sm0val4
<link=p.PWM2.SM0VAL4>
#### p.PWM2.SM0FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e001c[0m (0x403e0000 + 0x001c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### p.PWM2.SM0FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e0020[0m (0x403e0000 + 0x0020)
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
#### pwm2.sm0captctrla
<link=p.PWM2.SM0CAPTCTRLA>
#### p.PWM2.SM0CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e003a[0m (0x403e0000 + 0x003a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.pwm2.sm0captcompx
<link=p.PWM2.SM0CAPTCOMPX>
#### p.pwm2.sm0cval0cyc
<link=p.PWM2.SM0CVAL0CYC>
#### p.pwm2.sm0cval2
<link=p.PWM2.SM0CVAL2>
#### PWM2.SM0CVAL3
<link=p.PWM2.SM0CVAL3>
#### pwm2.sm0cval4cyc
<link=p.PWM2.SM0CVAL4CYC>
#### p.PWM2.SM0CVAL5
<lang=dft>
 (ro)  [1;33m0x403e0054[0m (0x403e0000 + 0x0054)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### pwm2.sm0cval5
<link=p.PWM2.SM0CVAL5>
#### PWM2.SM1INIT
<link=p.PWM2.SM1INIT>
#### p.pwm2.sm1fracval5
<link=p.PWM2.SM1FRACVAL5>
#### p.pwm2.sm1val5
<link=p.PWM2.SM1VAL5>
#### p.PWM2.SM1CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e009e[0m (0x403e0000 + 0x009e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### p.pwm2.sm1captcompx
<link=p.PWM2.SM1CAPTCOMPX>
#### p.pwm2.sm1cval0
<link=p.PWM2.SM1CVAL0>
#### PWM2.SM1CVAL3CYC
<link=p.PWM2.SM1CVAL3CYC>
#### p.pwm2.sm2fracval2
<link=p.PWM2.SM2FRACVAL2>
#### p.PWM2.SM2VAL3
<lang=dft>
 (rw)  [1;33m0x403e00d6[0m (0x403e0000 + 0x00d6)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### PWM2.SM2VAL3
<link=p.PWM2.SM2VAL3>
#### p.PWM2.SM2INTEN
<lang=dft>
 (rw)  [1;33m0x403e00e6[0m (0x403e0000 + 0x00e6)
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
#### pwm2.sm2inten
<link=p.PWM2.SM2INTEN>
#### PWM2.SM2DISMAP0
<link=p.PWM2.SM2DISMAP0>
#### p.PWM2.SM2DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e00f2[0m (0x403e0000 + 0x00f2)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### PWM2.SM2CAPTCTRLX
<link=p.PWM2.SM2CAPTCTRLX>
#### pwm2.sm2cval2cyc
<link=p.PWM2.SM2CVAL2CYC>
#### pwm2.sm2cval5cyc
<link=p.PWM2.SM2CVAL5CYC>
#### p.pwm2.sm3cnt
<link=p.PWM2.SM3CNT>
#### p.PWM2.SM3CTRL
<lang=dft>
 (rw)  [1;33m0x403e0126[0m (0x403e0000 + 0x0126)
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
#### p.PWM2.SM3VAL2
<lang=dft>
 (rw)  [1;33m0x403e0132[0m (0x403e0000 + 0x0132)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### PWM2.SM3VAL3
<link=p.PWM2.SM3VAL3>
#### p.PWM2.SM3DMAEN
<lang=dft>
 (rw)  [1;33m0x403e0148[0m (0x403e0000 + 0x0148)
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
#### p.PWM2.SM3DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e014c[0m (0x403e0000 + 0x014c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### PWM2.SM3DTCNT1
<link=p.PWM2.SM3DTCNT1>
#### pwm2.sm3captctrla
<link=p.PWM2.SM3CAPTCTRLA>
#### PWM2.SM3CVAL2
<link=p.PWM2.SM3CVAL2>
#### pwm2.outen
<link=p.PWM2.OUTEN>
#### pwm2.mask
<link=p.PWM2.MASK>
#### pwm2.swcout
<link=p.PWM2.SWCOUT>
#### PWM2.MCTRL
<link=p.PWM2.MCTRL>
#### p.PWM2.MCTRL2
<lang=dft>
 (rw)  [1;33m0x403e018a[0m (0x403e0000 + 0x018a)
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
#### PWM3.SM0INIT
<link=p.PWM3.SM0INIT>
#### p.pwm3.sm0ctrl
<link=p.PWM3.SM0CTRL>
#### p.pwm3.sm0val0
<link=p.PWM3.SM0VAL0>
#### pwm3.sm0val1
<link=p.PWM3.SM0VAL1>
#### pwm3.sm0fracval2
<link=p.PWM3.SM0FRACVAL2>
#### p.pwm3.sm0tctrl
<link=p.PWM3.SM0TCTRL>
#### p.pwm3.sm0captctrla
<link=p.PWM3.SM0CAPTCTRLA>
#### p.PWM3.SM0CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e403e[0m (0x403e4000 + 0x003e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### PWM3.SM0CVAL3CYC
<link=p.PWM3.SM0CVAL3CYC>
#### p.PWM3.SM1CNT
<lang=dft>
 (ro)  [1;33m0x403e4060[0m (0x403e4000 + 0x0060)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### p.pwm3.sm1init
<link=p.PWM3.SM1INIT>
#### pwm3.sm1val0
<link=p.PWM3.SM1VAL0>
#### p.pwm3.sm1val1
<link=p.PWM3.SM1VAL1>
#### p.pwm3.sm1fracval4
<link=p.PWM3.SM1FRACVAL4>
#### p.PWM3.SM1FRACVAL5
<lang=dft>
 (rw)  [1;33m0x403e407c[0m (0x403e4000 + 0x007c)
Fractional Value Register 5
 (rw) (05)  [0;32mFRACVAL5[0m  - [15:11] -  Fractional Value 5
</lang>
#### p.PWM3.SM1FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e4080[0m (0x403e4000 + 0x0080)
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
#### p.PWM3.SM1CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e409a[0m (0x403e4000 + 0x009a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### pwm3.sm1cval1cyc
<link=p.PWM3.SM1CVAL1CYC>
#### pwm3.sm1cval2cyc
<link=p.PWM3.SM1CVAL2CYC>
#### PWM3.SM1CVAL3
<link=p.PWM3.SM1CVAL3>
#### p.pwm3.sm1cval4cyc
<link=p.PWM3.SM1CVAL4CYC>
#### p.PWM3.SM1CVAL5
<lang=dft>
 (ro)  [1;33m0x403e40b4[0m (0x403e4000 + 0x00b4)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### p.pwm3.sm2init
<link=p.PWM3.SM2INIT>
#### pwm3.sm2init
<link=p.PWM3.SM2INIT>
#### p.PWM3.SM2CTRL
<lang=dft>
 (rw)  [1;33m0x403e40c6[0m (0x403e4000 + 0x00c6)
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
#### p.PWM3.SM2VAL2
<lang=dft>
 (rw)  [1;33m0x403e40d2[0m (0x403e4000 + 0x00d2)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### PWM3.SM2VAL3
<link=p.PWM3.SM2VAL3>
#### pwm3.sm2octrl
<link=p.PWM3.SM2OCTRL>
#### p.PWM3.SM2DMAEN
<lang=dft>
 (rw)  [1;33m0x403e40e8[0m (0x403e4000 + 0x00e8)
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
#### p.PWM3.SM2DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e40ec[0m (0x403e4000 + 0x00ec)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### pwm3.sm2dismap0
<link=p.PWM3.SM2DISMAP0>
#### PWM3.SM2DTCNT1
<link=p.PWM3.SM2DTCNT1>
#### pwm3.sm2captcompa
<link=p.PWM3.SM2CAPTCOMPA>
#### p.pwm3.sm2cval1cyc
<link=p.PWM3.SM2CVAL1CYC>
#### PWM3.SM2CVAL2
<link=p.PWM3.SM2CVAL2>
#### p.pwm3.sm2cval3
<link=p.PWM3.SM2CVAL3>
#### p.PWM3.SM3VAL3
<lang=dft>
 (rw)  [1;33m0x403e4136[0m (0x403e4000 + 0x0136)
Value Register 3
 (rw) (16)  [0;32mVAL3[0m  - [15:00] -  Value Register 3
</lang>
#### PWM3.SM3VAL3
<link=p.PWM3.SM3VAL3>
#### pwm3.sm3fracval5
<link=p.PWM3.SM3FRACVAL5>
#### pwm3.sm3frctrl
<link=p.PWM3.SM3FRCTRL>
#### p.PWM3.SM3INTEN
<lang=dft>
 (rw)  [1;33m0x403e4146[0m (0x403e4000 + 0x0146)
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
#### PWM3.SM3DISMAP0
<link=p.PWM3.SM3DISMAP0>
#### p.PWM3.SM3DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e4152[0m (0x403e4000 + 0x0152)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### p.pwm3.sm3captctrla
<link=p.PWM3.SM3CAPTCTRLA>
#### PWM3.SM3CAPTCTRLX
<link=p.PWM3.SM3CAPTCTRLX>
#### p.pwm3.sm3cval0
<link=p.PWM3.SM3CVAL0>
#### p.pwm3.sm3cval2cyc
<link=p.PWM3.SM3CVAL2CYC>
#### p.pwm3.mctrl
<link=p.PWM3.MCTRL>
#### p.PWM3.FCTRL0
<lang=dft>
 (rw)  [1;33m0x403e418c[0m (0x403e4000 + 0x018c)
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
#### PWM3.FCTRL0
<link=p.PWM3.FCTRL0>
#### PWM4.SM0FRACVAL1
<link=p.PWM4.SM0FRACVAL1>
#### pwm4.sm0val3
<link=p.PWM4.SM0VAL3>
#### p.PWM4.SM0FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e8018[0m (0x403e8000 + 0x0018)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### p.PWM4.SM0DMAEN
<lang=dft>
 (rw)  [1;33m0x403e8028[0m (0x403e8000 + 0x0028)
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
#### p.pwm4.sm0tctrl
<link=p.PWM4.SM0TCTRL>
#### PWM4.SM0DTCNT0
<link=p.PWM4.SM0DTCNT0>
#### p.pwm4.sm0captcompb
<link=p.PWM4.SM0CAPTCOMPB>
#### p.PWM4.SM0CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e803e[0m (0x403e8000 + 0x003e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### p.pwm4.sm0cval3cyc
<link=p.PWM4.SM0CVAL3CYC>
#### pwm4.sm1cnt
<link=p.PWM4.SM1CNT>
#### pwm4.sm1init
<link=p.PWM4.SM1INIT>
#### pwm4.sm1val2
<link=p.PWM4.SM1VAL2>
#### p.pwm4.sm1fracval3
<link=p.PWM4.SM1FRACVAL3>
#### p.pwm4.sm1sts
<link=p.PWM4.SM1STS>
#### pwm4.sm1dismap1
<link=p.PWM4.SM1DISMAP1>
#### PWM4.SM1CAPTCOMPA
<link=p.PWM4.SM1CAPTCOMPA>
#### p.PWM4.SM1CAPTCOMPB
<lang=dft>
 (rw)  [1;33m0x403e809a[0m (0x403e8000 + 0x009a)
Capture Compare B Register
 (rw) (08)  [0;32mEDGCMPB[0m  - [07:00] -  Edge Compare B
 (ro) (08)  [0;32mEDGCNTB[0m  - [15:08] -  Edge Counter B
</lang>
#### p.pwm4.sm1captcompb
<link=p.PWM4.SM1CAPTCOMPB>
#### PWM4.SM1CVAL0CYC
<link=p.PWM4.SM1CVAL0CYC>
#### p.PWM4.SM1CVAL2
<lang=dft>
 (ro)  [1;33m0x403e80a8[0m (0x403e8000 + 0x00a8)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### pwm4.sm1cval4
<link=p.PWM4.SM1CVAL4>
#### PWM4.SM2CTRL2
<link=p.PWM4.SM2CTRL2>
#### p.PWM4.SM2FRACVAL1
<lang=dft>
 (rw)  [1;33m0x403e80cc[0m (0x403e8000 + 0x00cc)
Fractional Value Register 1
 (rw) (05)  [0;32mFRACVAL1[0m  - [15:11] -  Fractional Value 1 Register
</lang>
#### PWM4.SM2FRACVAL2
<link=p.PWM4.SM2FRACVAL2>
#### p.pwm4.sm2fracval4
<link=p.PWM4.SM2FRACVAL4>
#### PWM4.SM2DISMAP0
<link=p.PWM4.SM2DISMAP0>
#### PWM4.SM2DTCNT1
<link=p.PWM4.SM2DTCNT1>
#### PWM4.SM2CAPTCTRLB
<link=p.PWM4.SM2CAPTCTRLB>
#### pwm4.sm2captcompx
<link=p.PWM4.SM2CAPTCOMPX>
#### p.PWM4.SM2CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e810e[0m (0x403e8000 + 0x010e)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### p.pwm4.sm3fracval1
<link=p.PWM4.SM3FRACVAL1>
#### pwm4.sm3fracval2
<link=p.PWM4.SM3FRACVAL2>
#### p.PWM4.SM3FRACVAL4
<lang=dft>
 (rw)  [1;33m0x403e8138[0m (0x403e8000 + 0x0138)
Fractional Value Register 4
 (rw) (05)  [0;32mFRACVAL4[0m  - [15:11] -  Fractional Value 4
</lang>
#### p.PWM4.SM3CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e8158[0m (0x403e8000 + 0x0158)
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
#### PWM4.SM3CVAL0
<link=p.PWM4.SM3CVAL0>
#### p.pwm4.sm3cval0cyc
<link=p.PWM4.SM3CVAL0CYC>
#### p.pwm4.outen
<link=p.PWM4.OUTEN>
#### p.PWM4.FFILT0
<lang=dft>
 (rw)  [1;33m0x403e8190[0m (0x403e8000 + 0x0190)
Fault Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Fault Filter Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Fault Filter Count
 (rw) (01)  [0;32mGSTR[0m  - [15:15] -  Fault Glitch Stretch Enable
      0 - GSTR_0 :
         Fault input glitch stretching is disabled.
      0x1 - GSTR_1 :
         Input fault signals will be stretched to at least 2 IPBus clock cycles.
</lang>
#### BEE.CTRL
<link=p.BEE.CTRL>
#### bee.addr_offset1
<link=p.BEE.ADDR_OFFSET1>
#### p.bee.status
<link=p.BEE.STATUS>
#### BEE.CTR_NONCE0_W3
<link=p.BEE.CTR_NONCE0_W3>
#### p.BEE.CTR_NONCE1_W3
<lang=dft>
 (wo)  [1;33m0x403ec03c[0m (0x403ec000 + 0x003c)
no description available
 (wo) (32)  [0;32mNONCE13[0m  - [31:00] -  Nonce1 from software for CTR, for region1. Nonce1={Nonce13,Nonce12,Nonce11,Nonc
 e10}
</lang>
#### p.BEE.REGION1_BOT
<lang=dft>
 (rw)  [1;33m0x403ec044[0m (0x403ec000 + 0x0044)
no description available
 (rw) (32)  [0;32mREGION1_BOT[0m  - [31:00] -  Address lower limit of region1
</lang>
#### lpi2c1.mier
<link=p.LPI2C1.MIER>
#### LPI2C1.MIER
<link=p.LPI2C1.MIER>
#### LPI2C1.MCFGR0
<link=p.LPI2C1.MCFGR0>
#### p.lpi2c1.mdmr
<link=p.LPI2C1.MDMR>
#### lpi2c1.scr
<link=p.LPI2C1.SCR>
#### lpi2c1.sier
<link=p.LPI2C1.SIER>
#### lpi2c2.msr
<link=p.LPI2C2.MSR>
#### LPI2C2.MDMR
<link=p.LPI2C2.MDMR>
#### p.LPI2C2.MCCR1
<lang=dft>
 (rw)  [1;33m0x403f4050[0m (0x403f4000 + 0x0050)
Master Clock Configuration Register 1
 (rw) (06)  [0;32mCLKLO[0m  - [05:00] -  Clock Low Period
 (rw) (06)  [0;32mCLKHI[0m  - [13:08] -  Clock High Period
 (rw) (06)  [0;32mSETHOLD[0m  - [21:16] -  Setup Hold Delay
 (rw) (06)  [0;32mDATAVD[0m  - [29:24] -  Data Valid Delay
</lang>
#### p.lpi2c2.mccr1
<link=p.LPI2C2.MCCR1>
#### LPI2C2.MTDR
<link=p.LPI2C2.MTDR>
#### p.lpi2c2.sder
<link=p.LPI2C2.SDER>
#### LPI2C2.SCFGR1
<link=p.LPI2C2.SCFGR1>
#### p.LPI2C3.MCCR0
<lang=dft>
 (rw)  [1;33m0x403f8048[0m (0x403f8000 + 0x0048)
Master Clock Configuration Register 0
 (rw) (06)  [0;32mCLKLO[0m  - [05:00] -  Clock Low Period
 (rw) (06)  [0;32mCLKHI[0m  - [13:08] -  Clock High Period
 (rw) (06)  [0;32mSETHOLD[0m  - [21:16] -  Setup Hold Delay
 (rw) (06)  [0;32mDATAVD[0m  - [29:24] -  Data Valid Delay
</lang>
#### p.lpi2c3.mccr0
<link=p.LPI2C3.MCCR0>
#### lpi2c3.srdr
<link=p.LPI2C3.SRDR>
#### p.LPI2C4.MSR
<lang=dft>
 (rw)  [1;33m0x403fc014[0m (0x403fc000 + 0x0014)
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
#### p.LPI2C4.MIER
<lang=dft>
 (rw)  [1;33m0x403fc018[0m (0x403fc000 + 0x0018)
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
#### p.lpi2c4.mier
<link=p.LPI2C4.MIER>
#### LPI2C4.MDMR
<link=p.LPI2C4.MDMR>
#### LPI2C4.SCFGR2
<link=p.LPI2C4.SCFGR2>
#### LPI2C4.STDR
<link=p.LPI2C4.STDR>
#### SystemControl.CPUID
<link=p.SYSTEMCONTROL.CPUID>
#### SystemControl.ICSR
<link=p.SYSTEMCONTROL.ICSR>
#### systemcontrol.scr
<link=p.SYSTEMCONTROL.SCR>
#### p.systemcontrol.shpr2
<link=p.SYSTEMCONTROL.SHPR2>
#### SystemControl.BFAR
<link=p.SYSTEMCONTROL.BFAR>
#### systemcontrol.id_mmfr1
<link=p.SYSTEMCONTROL.ID_MMFR1>
#### p.SYSTEMCONTROL.ID_ISAR2
<lang=dft>
 (ro)  [1;33m0xe000ed68[0m (0xe000e000 + 0x0d68)
Instruction Set Attributes Register 2
 (ro) (04)  [0;32mLOADSTORE_INSTRS[0m  - [03:00] -  Indicates the supported additional load and store instructions
      0 - LOADSTORE_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - LOADSTORE_INSTRS_1 :
         Adds support for the LDRD and STRD instructions
 (ro) (04)  [0;32mMEMHINT_INSTRS[0m  - [07:04] -  Indicates the supported Memory Hint instructions
      0 - MEMHINT_INSTRS_0 :
         None supported, ARMv7-M unused.
      0x1 - MEMHINT_INSTRS_1 :
         Adds support for the PLD instruction, ARMv7-M unused.
      0x2 - MEMHINT_INSTRS_2 :
         As for 1, ARMv7-M unused.
      0x3 - MEMHINT_INSTRS_3 :
         As for 1 or 2, and adds support for the PLI instruction.
 (ro) (04)  [0;32mMULTIACCESSINT_INSTRS[0m  - [11:08] -  Indicates the support for multi-access interruptible instructions
      0 - MULTIACCESSINT_INSTRS_0 :
         None supported. This means the LDM and STM instructions are not interru
         ptible. ARMv7-M unused.
      0x1 - MULTIACCESSINT_INSTRS_1 :
         LDM and STM instructions are restartable.
      0x2 - MULTIACCESSINT_INSTRS_2 :
         LDM and STM instructions are continuable.
 (ro) (04)  [0;32mMULT_INSTRS[0m  - [15:12] -  Indicates the supported additional Multiply instructions
      0 - MULT_INSTRS_0 :
         None supported. This means only MUL is supported. ARMv7-M unused.
      0x1 - MULT_INSTRS_1 :
         Adds support for the MLA instruction, ARMv7-M unused.
      0x2 - MULT_INSTRS_2 :
         As for 1, and adds support for the MLS instruction.
 (ro) (04)  [0;32mMULTS_INSTRS[0m  - [19:16] -  Indicates the supported advanced signed Multiply instructions
      0 - MULTS_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - MULTS_INSTRS_1 :
         Adds support for the SMULL and SMLAL instructions
      0x2 - MULTS_INSTRS_2 :
         As for 1, and adds support for the SMLABB, SMLABT, SMLALBB, SMLALBT, SM
         LALTB, SMLALTT, SMLATB, SMLATT, SMLAWB, SMLAWT, SMULBB, SMULBT, SMULTB,
          SMULTT, SMULWB, and SMULWT instructions.
      0x3 - MULTS_INSTRS_3 :
         As for 2, and adds support for the SMLAD, SMLADX, SMLALD, SMLALDX, SMLS
         D, SMLSDX, SMLSLD, SMLSLDX, SMMLA, SMMLAR, SMMLS, SMMLSR, SMMUL, SMMULR
         , SMUAD, SMUADX, SMUSD, and SMUSDX instructions.
 (ro) (04)  [0;32mMULTU_INSTRS[0m  - [23:20] -  Indicates the supported advanced unsigned Multiply instructions
      0 - MULTU_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - MULTU_INSTRS_1 :
         Adds support for the UMULL and UMLAL instructions.
      0x2 - MULTU_INSTRS_2 :
         As for 1, and adds support for the UMAAL instruction.
 (ro) (04)  [0;32mREVERSAL_INSTRS[0m  - [31:28] -  Indicates the supported Reversal instructions
      0 - REVERSAL_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - REVERSAL_INSTRS_1 :
         Adds support for the REV, REV16, and REVSH instructions, ARMv7-M unused
         .
      0x2 - REVERSAL_INSTRS_2 :
         As for 1, and adds support for the RBIT instruction.
</lang>
#### SystemControl.ID_ISAR2
<link=p.SYSTEMCONTROL.ID_ISAR2>
#### p.SYSTEMCONTROL.DCCISW
<lang=dft>
 (wo)  [1;33m0xe000ef74[0m (0xe000e000 + 0x0f74)
Data cache clean and invalidate by set/way
 (wo) (32)  [0;32mDCCISW[0m  - [31:00] -  D-cache clean and invalidate by set-way
</lang>
#### p.systemcontrol.cm7_ahbpcr
<link=p.SYSTEMCONTROL.CM7_AHBPCR>
#### p.SYSTEMCONTROL.CM7_AHBSCR
<lang=dft>
 (rw)  [1;33m0xe000efa0[0m (0xe000e000 + 0x0fa0)
AHB Slave Control Register
 (rw) (02)  [0;32mCTL[0m  - [01:00] -  AHBS prioritization control.
      0 - CTL_0 :
         AHBS access priority demoted. This is the reset value.
      0x1 - CTL_1 :
         Software access priority demoted.
      0x2 - CTL_2 :
         AHBS access priority demoted by initializing the fairness counter to th
         e CM7_AHBSCR[INITCOUNT] value when the software execution priority is h
         igher than or equal to the threshold level programed in CM7_AHBSCR[TPRI
         ].
      0x3 - CTL_3 :
         AHBSPRI signal has control of access priority.
 (rw) (09)  [0;32mTPRI[0m  - [10:02] -  Threshold execution priority for AHBS traffic demotion.
 (rw) (05)  [0;32mINITCOUNT[0m  - [15:11] -  Fairness counter initialization value.
</lang>
#### nvic.nviciser3
<link=p.NVIC.NVICISER3>
#### p.nvic.nviciser4
<link=p.NVIC.NVICISER4>
#### nvic.nvicicer4
<link=p.NVIC.NVICICER4>
#### p.nvic.nvicicpr2
<link=p.NVIC.NVICICPR2>
#### NVIC.NVICICPR2
<link=p.NVIC.NVICICPR2>
#### p.nvic.nviciabr2
<link=p.NVIC.NVICIABR2>
#### NVIC.NVICIABR2
<link=p.NVIC.NVICIABR2>
#### nvic.nvicip3
<link=p.NVIC.NVICIP3>
#### p.nvic.nvicip9
<link=p.NVIC.NVICIP9>
#### p.nvic.nvicip16
<link=p.NVIC.NVICIP16>
#### p.nvic.nvicip30
<link=p.NVIC.NVICIP30>
#### nvic.nvicip41
<link=p.NVIC.NVICIP41>
#### p.NVIC.NVICIP42
<lang=dft>
 (rw)  [1;33m0xe000e42a[0m (0xe000e100 + 0x032a)
Interrupt Priority Register 42
 (rw) (04)  [0;32mPRI42[0m  - [07:04] -  Priority of the INT_LCDIF interrupt 42
</lang>
#### NVIC.NVICIP50
<link=p.NVIC.NVICIP50>
#### p.NVIC.NVICIP51
<lang=dft>
 (rw)  [1;33m0xe000e433[0m (0xe000e100 + 0x0333)
Interrupt Priority Register 51
 (rw) (04)  [0;32mPRI51[0m  - [07:04] -  Priority of the INT_DCP_VMI interrupt 51
</lang>
#### nvic.nvicip52
<link=p.NVIC.NVICIP52>
#### NVIC.NVICIP61
<link=p.NVIC.NVICIP61>
#### p.nvic.nvicip63
<link=p.NVIC.NVICIP63>
#### p.NVIC.NVICIP64
<lang=dft>
 (rw)  [1;33m0xe000e440[0m (0xe000e100 + 0x0340)
Interrupt Priority Register 64
 (rw) (04)  [0;32mPRI64[0m  - [07:04] -  Priority of the INT_TEMP_PANIC interrupt 64
</lang>
#### nvic.nvicip67
<link=p.NVIC.NVICIP67>
#### nvic.nvicip74
<link=p.NVIC.NVICIP74>
#### NVIC.NVICIP76
<link=p.NVIC.NVICIP76>
#### p.NVIC.NVICIP77
<lang=dft>
 (rw)  [1;33m0xe000e44d[0m (0xe000e100 + 0x034d)
Interrupt Priority Register 77
 (rw) (04)  [0;32mPRI77[0m  - [07:04] -  Priority of the INT_GPIO1_INT5 interrupt 77
</lang>
#### nvic.nvicip85
<link=p.NVIC.NVICIP85>
#### p.NVIC.NVICIP86
<lang=dft>
 (rw)  [1;33m0xe000e456[0m (0xe000e100 + 0x0356)
Interrupt Priority Register 86
 (rw) (04)  [0;32mPRI86[0m  - [07:04] -  Priority of the INT_GPIO4_Combined_0_15 interrupt 86
</lang>
#### NVIC.NVICIP94
<link=p.NVIC.NVICIP94>
#### p.NVIC.NVICIP95
<lang=dft>
 (rw)  [1;33m0xe000e45f[0m (0xe000e100 + 0x035f)
Interrupt Priority Register 95
 (rw) (04)  [0;32mPRI95[0m  - [07:04] -  Priority of the INT_CCM_1 interrupt 95
</lang>
#### nvic.nvicip96
<link=p.NVIC.NVICIP96>
#### p.nvic.nvicip99
<link=p.NVIC.NVICIP99>
#### nvic.nvicip113
<link=p.NVIC.NVICIP113>
#### p.nvic.nvicip115
<link=p.NVIC.NVICIP115>
#### p.NVIC.NVICIP118
<lang=dft>
 (rw)  [1;33m0xe000e476[0m (0xe000e100 + 0x0376)
Interrupt Priority Register 118
 (rw) (04)  [0;32mPRI118[0m  - [07:04] -  Priority of the INT_ADC_ETC_IRQ0 interrupt 118
</lang>
#### p.nvic.nvicip124
<link=p.NVIC.NVICIP124>
#### p.NVIC.NVICIP129
<lang=dft>
 (rw)  [1;33m0xe000e481[0m (0xe000e100 + 0x0381)
Interrupt Priority Register 129
 (rw) (04)  [0;32mPRI129[0m  - [07:04] -  Priority of the INT_ENC1 interrupt 129
</lang>
#### p.nvic.nvicip133
<link=p.NVIC.NVICIP133>
#### p.NVIC.NVICIP136
<lang=dft>
 (rw)  [1;33m0xe000e488[0m (0xe000e100 + 0x0388)
Interrupt Priority Register 136
 (rw) (04)  [0;32mPRI136[0m  - [07:04] -  Priority of the INT_TMR4 interrupt 136
</lang>
#### nvic.nvicip140
<link=p.NVIC.NVICIP140>
#### p.NVIC.NVICIP142
<lang=dft>
 (rw)  [1;33m0xe000e48e[0m (0xe000e100 + 0x038e)
Interrupt Priority Register 142
 (rw) (04)  [0;32mPRI142[0m  - [07:04] -  Priority of the INT_PWM3_0 interrupt 142
</lang>
#### NVIC.NVICIP142
<link=p.NVIC.NVICIP142>
#### NVIC.NVICIP151
<link=p.NVIC.NVICIP151>
#### p.NVIC.NVICIP155
<lang=dft>
 (rw)  [1;33m0xe000e49b[0m (0xe000e100 + 0x039b)
Interrupt Priority Register 155
 (rw) (04)  [0;32mPRI155[0m  - [07:04] -  Priority of the INT_Reserved171 interrupt 155
</lang>
#### nvic.nvicstir
<link=p.NVIC.NVICSTIR>
#### reg0
<link=REG0>
#### cval2
<link=CVAL2>
#### GPR5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.IOMUXC_GPR.GPR5
   p.SRC.GPR5
#### GPR15
<link=p.IOMUXC_GPR.GPR15>
#### GPR28
<link=p.IOMUXC_GPR.GPR28>
#### gpr31
<link=GPR31>
#### clkprescaler
<link=CLKPRESCALER>
#### wrsr
<link=WRSR>
#### hc1
<link=HC1>
#### R6
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.R6
   p.ADC2.R6
#### ent[4]
<link=ENT[4]>
#### ent[12]
<link=ENT[12]>
#### PKRCNT32
<link=p.TRNG.PKRCNT32>
#### vid2
<link=VID2>
#### hpsvsr
<link=HPSVSR>
#### hptamr
<link=HPTAMR>
#### LPZMKR[6]
<link=p.SNVS.LPZMKR[6]>
#### LPGPR_alias[0]
<link=p.SNVS.LPGPR_alias[0]>
#### lpgpr_alias[3]
<link=LPGPR_alias[3]>
#### PLL_ARM_TOG
<link=p.CCM_ANALOG.PLL_ARM_TOG>
#### PLL_USB1
<link=p.CCM_ANALOG.PLL_USB1>
#### PLL_USB2_CLR
<link=p.CCM_ANALOG.PLL_USB2_CLR>
#### PLL_SYS_DENOM
<link=p.CCM_ANALOG.PLL_SYS_DENOM>
#### PLL_VIDEO
<link=p.CCM_ANALOG.PLL_VIDEO>
#### pll_video
<link=PLL_VIDEO>
#### misc1_set
<link=MISC1_SET>
#### reg_3p0_tog
<link=REG_3P0_TOG>
#### tempsense2_set
<link=TEMPSENSE2_SET>
#### TEMPSENSE2_TOG
<link=p.TEMPMON.TEMPSENSE2_TOG>
#### usb2_loopback
<link=USB2_LOOPBACK>
#### USB2_LOOPBACK_TOG
<link=p.USB_ANALOG.USB2_LOOPBACK_TOG>
#### USB2_MISC_SET
<link=p.USB_ANALOG.USB2_MISC_SET>
#### OSC_CONFIG2_SET
<link=p.XTALOSC24M.OSC_CONFIG2_SET>
#### DEBUG_CLR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.DEBUG_CLR
   p.USBPHY2.DEBUG_CLR
#### DEBUG1_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.DEBUG1_SET
   p.USBPHY2.DEBUG1_SET
#### csl2
<link=CSL2>
#### csl16
<link=CSL16>
#### CSL22
<link=p.CSU.CSL22>
#### CSL31
<link=p.CSU.CSL31>
#### CR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.DMA0.CR
   p.GPT1.CR
   p.GPT2.CR
   p.LPSPI1.CR
   p.LPSPI2.CR
   p.LPSPI3.CR
   p.LPSPI4.CR
#### SSRT
<link=p.DMA0.SSRT>
#### DCHPRI22
<link=p.DMA0.DCHPRI22>
#### dchpri22
<link=DCHPRI22>
#### DCHPRI31
<link=p.DMA0.DCHPRI31>
#### dchpri31
<link=DCHPRI31>
#### tcd1_attr
<link=TCD1_ATTR>
#### TCD1_CITER_ELINKYES
<link=p.DMA0.TCD1_CITER_ELINKYES>
#### TCD2_SLAST
<link=p.DMA0.TCD2_SLAST>
#### tcd2_slast
<link=TCD2_SLAST>
#### TCD2_BITER_ELINKNO
<link=p.DMA0.TCD2_BITER_ELINKNO>
#### tcd3_nbytes_mloffyes
<link=TCD3_NBYTES_MLOFFYES>
#### TCD5_SADDR
<link=p.DMA0.TCD5_SADDR>
#### tcd5_saddr
<link=TCD5_SADDR>
#### TCD5_NBYTES_MLNO
<link=p.DMA0.TCD5_NBYTES_MLNO>
#### tcd7_nbytes_mloffno
<link=TCD7_NBYTES_MLOFFNO>
#### TCD7_CITER_ELINKNO
<link=p.DMA0.TCD7_CITER_ELINKNO>
#### tcd7_citer_elinkyes
<link=TCD7_CITER_ELINKYES>
#### tcd8_citer_elinkno
<link=TCD8_CITER_ELINKNO>
#### TCD8_BITER_ELINKYES
<link=p.DMA0.TCD8_BITER_ELINKYES>
#### TCD10_ATTR
<link=p.DMA0.TCD10_ATTR>
#### tcd10_nbytes_mlno
<link=TCD10_NBYTES_MLNO>
#### TCD10_SLAST
<link=p.DMA0.TCD10_SLAST>
#### TCD11_SLAST
<link=p.DMA0.TCD11_SLAST>
#### TCD11_CITER_ELINKNO
<link=p.DMA0.TCD11_CITER_ELINKNO>
#### tcd12_soff
<link=TCD12_SOFF>
#### tcd13_nbytes_mloffyes
<link=TCD13_NBYTES_MLOFFYES>
#### tcd14_citer_elinkyes
<link=TCD14_CITER_ELINKYES>
#### TCD15_SOFF
<link=p.DMA0.TCD15_SOFF>
#### tcd16_attr
<link=TCD16_ATTR>
#### tcd16_slast
<link=TCD16_SLAST>
#### TCD18_SADDR
<link=p.DMA0.TCD18_SADDR>
#### tcd18_doff
<link=TCD18_DOFF>
#### tcd20_biter_elinkyes
<link=TCD20_BITER_ELINKYES>
#### tcd22_soff
<link=TCD22_SOFF>
#### tcd22_nbytes_mloffyes
<link=TCD22_NBYTES_MLOFFYES>
#### tcd23_saddr
<link=TCD23_SADDR>
#### TCD24_SLAST
<link=p.DMA0.TCD24_SLAST>
#### TCD24_DADDR
<link=p.DMA0.TCD24_DADDR>
#### tcd25_nbytes_mloffno
<link=TCD25_NBYTES_MLOFFNO>
#### tcd26_nbytes_mlno
<link=TCD26_NBYTES_MLNO>
#### TCD26_NBYTES_MLOFFYES
<link=p.DMA0.TCD26_NBYTES_MLOFFYES>
#### tcd26_citer_elinkyes
<link=TCD26_CITER_ELINKYES>
#### TCD27_SOFF
<link=p.DMA0.TCD27_SOFF>
#### tcd29_daddr
<link=TCD29_DADDR>
#### tcd30_daddr
<link=TCD30_DADDR>
#### TCD30_CITER_ELINKYES
<link=p.DMA0.TCD30_CITER_ELINKYES>
#### tcd30_citer_elinkyes
<link=TCD30_CITER_ELINKYES>
#### chcfg[0]
<link=CHCFG[0]>
#### chcfg[10]
<link=CHCFG[10]>
#### chcfg[15]
<link=CHCFG[15]>
#### CHCFG[16]
<link=p.DMAMUX.CHCFG[16]>
#### CHCFG[29]
<link=p.DMAMUX.CHCFG[29]>
#### imr3
<link=IMR3>
#### MEGA_PUPSCR
<link=p.PGC.MEGA_PUPSCR>
#### mega_pdnscr
<link=MEGA_PDNSCR>
#### CPU_PUPSCR
<link=p.PGC.CPU_PUPSCR>
#### cpu_pupscr
<link=CPU_PUPSCR>
#### cacrr
<link=CACRR>
#### CSCDR2
<link=p.CCM.CSCDR2>
#### BAUD
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.BAUD
   p.LPUART2.BAUD
   p.LPUART3.BAUD
   p.LPUART4.BAUD
   p.LPUART5.BAUD
   p.LPUART6.BAUD
   p.LPUART7.BAUD
   p.LPUART8.BAUD
#### baud
<link=BAUD>
#### timstat
<link=TIMSTAT>
#### shiftsien
<link=SHIFTSIEN>
#### SHIFTBUFBYS[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFBYS[2]
   p.FLEXIO2.SHIFTBUFBYS[2]
   p.FLEXIO3.SHIFTBUFBYS[2]
#### SHIFTBUFHWS[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFHWS[0]
   p.FLEXIO2.SHIFTBUFHWS[0]
   p.FLEXIO3.SHIFTBUFHWS[0]
#### shiftbufhws[3]
<link=SHIFTBUFHWS[3]>
#### dr
<link=DR>
#### ICR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPIO1.ICR1
   p.GPIO5.ICR1
   p.GPIO2.ICR1
   p.GPIO3.ICR1
   p.GPIO4.ICR1
   p.GPIO6.ICR1
   p.GPIO7.ICR1
   p.GPIO8.ICR1
   p.GPIO9.ICR1
   p.GPT1.ICR1
   p.GPT2.ICR1
#### RXMGMASK
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXMGMASK
   p.CAN2.RXMGMASK
   p.CAN3.RXMGMASK
#### IFLAG1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.IFLAG1
   p.CAN2.IFLAG1
   p.CAN3.IFLAG1
#### RXIMR15
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR15
   p.CAN2.RXIMR15
#### RXIMR24
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR24
   p.CAN2.RXIMR24
#### rximr25
<link=RXIMR25>
#### rximr32
<link=RXIMR32>
#### rximr50
<link=RXIMR50>
#### RXIMR58
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR58
   p.CAN2.RXIMR58
#### MB0_8B_CS
<link=p.CAN3.MB0_8B_CS>
#### MB1_8B_CS
<link=p.CAN3.MB1_8B_CS>
#### MB0_32B_WORD3
<link=p.CAN3.MB0_32B_WORD3>
#### word01
<link=WORD01>
#### mb1_16b_id
<link=MB1_16B_ID>
#### MB1_8B_WORD1
<link=p.CAN3.MB1_8B_WORD1>
#### MB0_64B_WORD6
<link=p.CAN3.MB0_64B_WORD6>
#### MB1_16B_WORD2
<link=p.CAN3.MB1_16B_WORD2>
#### mb1_32b_cs
<link=MB1_32B_CS>
#### mb0_64b_word9
<link=MB0_64B_WORD9>
#### WORD12
<link=p.CAN3.WORD12>
#### mb1_32b_word0
<link=MB1_32B_WORD0>
#### MB0_64B_WORD15
<link=p.CAN3.MB0_64B_WORD15>
#### MB3_16B_CS
<link=p.CAN3.MB3_16B_CS>
#### CS5
<link=p.CAN3.CS5>
#### MB3_16B_WORD0
<link=p.CAN3.MB3_16B_WORD0>
#### WORD05
<link=p.CAN3.WORD05>
#### mb5_8b_word1
<link=MB5_8B_WORD1>
#### mb4_16b_cs
<link=MB4_16B_CS>
#### id6
<link=ID6>
#### MB1_64B_WORD6
<link=p.CAN3.MB1_64B_WORD6>
#### mb4_16b_word0
<link=MB4_16B_WORD0>
#### MB2_32B_WORD5
<link=p.CAN3.MB2_32B_WORD5>
#### mb1_64b_word8
<link=MB1_64B_WORD8>
#### mb1_64b_word10
<link=MB1_64B_WORD10>
#### cs8
<link=CS8>
#### MB1_64B_WORD15
<link=p.CAN3.MB1_64B_WORD15>
#### ID9
<link=p.CAN3.ID9>
#### mb6_16b_id
<link=MB6_16B_ID>
#### MB9_8B_ID
<link=p.CAN3.MB9_8B_ID>
#### mb3_32b_word7
<link=MB3_32B_WORD7>
#### mb6_16b_word1
<link=MB6_16B_WORD1>
#### mb9_8b_word1
<link=MB9_8B_WORD1>
#### cs10
<link=CS10>
#### mb2_64b_word2
<link=MB2_64B_WORD2>
#### MB10_8B_ID
<link=p.CAN3.MB10_8B_ID>
#### MB11_8B_ID
<link=p.CAN3.MB11_8B_ID>
#### MB11_8B_WORD0
<link=p.CAN3.MB11_8B_WORD0>
#### word111
<link=WORD111>
#### id12
<link=ID12>
#### mb2_64b_word11
<link=MB2_64B_WORD11>
#### MB4_32B_WORD7
<link=p.CAN3.MB4_32B_WORD7>
#### mb12_8b_word0
<link=MB12_8B_WORD0>
#### mb9_16b_cs
<link=MB9_16B_CS>
#### CS14
<link=p.CAN3.CS14>
#### mb5_32b_word4
<link=MB5_32B_WORD4>
#### mb9_16b_word2
<link=MB9_16B_WORD2>
#### MB14_8B_WORD1
<link=p.CAN3.MB14_8B_WORD1>
#### mb3_64b_word3
<link=MB3_64B_WORD3>
#### WORD015
<link=p.CAN3.WORD015>
#### MB6_32B_WORD1
<link=p.CAN3.MB6_32B_WORD1>
#### mb16_8b_cs
<link=MB16_8B_CS>
#### mb11_16b_id
<link=MB11_16B_ID>
#### MB11_16B_WORD2
<link=p.CAN3.MB11_16B_WORD2>
#### mb7_32b_cs
<link=MB7_32B_CS>
#### mb12_16b_cs
<link=MB12_16B_CS>
#### word018
<link=WORD018>
#### MB18_8B_WORD1
<link=p.CAN3.MB18_8B_WORD1>
#### mb7_32b_word3
<link=MB7_32B_WORD3>
#### MB4_64B_WORD3
<link=p.CAN3.MB4_64B_WORD3>
#### MB13_16B_WORD0
<link=p.CAN3.MB13_16B_WORD0>
#### MB20_8B_CS
<link=p.CAN3.MB20_8B_CS>
#### word120
<link=WORD120>
#### MB14_16B_CS
<link=p.CAN3.MB14_16B_CS>
#### mb4_64b_word10
<link=MB4_64B_WORD10>
#### mb8_32b_word2
<link=MB8_32B_WORD2>
#### mb9_32b_id
<link=MB9_32B_ID>
#### mb15_16b_word0
<link=MB15_16B_WORD0>
#### MB15_16B_WORD1
<link=p.CAN3.MB15_16B_WORD1>
#### MB9_32B_WORD4
<link=p.CAN3.MB9_32B_WORD4>
#### MB5_64B_WORD5
<link=p.CAN3.MB5_64B_WORD5>
#### mb24_8b_word0
<link=MB24_8B_WORD0>
#### mb10_32b_word0
<link=MB10_32B_WORD0>
#### MB25_8B_WORD1
<link=p.CAN3.MB25_8B_WORD1>
#### MB10_32B_WORD3
<link=p.CAN3.MB10_32B_WORD3>
#### mb17_16b_word1
<link=MB17_16B_WORD1>
#### MB17_16B_WORD3
<link=p.CAN3.MB17_16B_WORD3>
#### ID27
<link=p.CAN3.ID27>
#### mb27_8b_id
<link=MB27_8B_ID>
#### MB18_16B_WORD1
<link=p.CAN3.MB18_16B_WORD1>
#### mb28_8b_cs
<link=MB28_8B_CS>
#### mb18_16b_word3
<link=MB18_16B_WORD3>
#### mb28_8b_word0
<link=MB28_8B_WORD0>
#### cs29
<link=CS29>
#### MB29_8B_ID
<link=p.CAN3.MB29_8B_ID>
#### mb6_64b_word7
<link=MB6_64B_WORD7>
#### WORD029
<link=p.CAN3.WORD029>
#### MB29_8B_WORD1
<link=p.CAN3.MB29_8B_WORD1>
#### MB6_64B_WORD10
<link=p.CAN3.MB6_64B_WORD10>
#### ID30
<link=p.CAN3.ID30>
#### mb12_32b_word1
<link=MB12_32B_WORD1>
#### mb20_16b_word1
<link=MB20_16B_WORD1>
#### MB7_64B_CS
<link=p.CAN3.MB7_64B_CS>
#### CS32
<link=p.CAN3.CS32>
#### MB12_32B_WORD7
<link=p.CAN3.MB12_32B_WORD7>
#### MB32_8B_WORD0
<link=p.CAN3.MB32_8B_WORD0>
#### MB22_16B_ID
<link=p.CAN3.MB22_16B_ID>
#### mb7_64b_word6
<link=MB7_64B_WORD6>
#### WORD033
<link=p.CAN3.WORD033>
#### MB7_64B_WORD8
<link=p.CAN3.MB7_64B_WORD8>
#### id34
<link=ID34>
#### mb22_16b_word3
<link=MB22_16B_WORD3>
#### MB34_8B_ID
<link=p.CAN3.MB34_8B_ID>
#### MB7_64B_WORD14
<link=p.CAN3.MB7_64B_WORD14>
#### mb23_16b_word3
<link=MB23_16B_WORD3>
#### mb24_16b_cs
<link=MB24_16B_CS>
#### mb14_32b_word4
<link=MB14_32B_WORD4>
#### MB14_32B_WORD7
<link=p.CAN3.MB14_32B_WORD7>
#### mb37_8b_word0
<link=MB37_8B_WORD0>
#### word037
<link=WORD037>
#### mb25_16b_id
<link=MB25_16B_ID>
#### mb25_16b_word0
<link=MB25_16B_WORD0>
#### MB38_8B_CS
<link=p.CAN3.MB38_8B_CS>
#### mb8_64b_word7
<link=MB8_64B_WORD7>
#### mb27_16b_word0
<link=MB27_16B_WORD0>
#### MB16_32B_WORD3
<link=p.CAN3.MB16_32B_WORD3>
#### mb16_32b_word5
<link=MB16_32B_WORD5>
#### MB42_8B_CS
<link=p.CAN3.MB42_8B_CS>
#### mb17_32b_cs
<link=MB17_32B_CS>
#### MB28_16B_WORD0
<link=p.CAN3.MB28_16B_WORD0>
#### mb9_64b_word6
<link=MB9_64B_WORD6>
#### cs43
<link=CS43>
#### WORD043
<link=p.CAN3.WORD043>
#### mb45_8b_id
<link=MB45_8B_ID>
#### mb30_16b_word3
<link=MB30_16B_WORD3>
#### mb10_64b_word8
<link=MB10_64B_WORD8>
#### MB47_8B_WORD0
<link=p.CAN3.MB47_8B_WORD0>
#### id48
<link=ID48>
#### mb32_16b_word0
<link=MB32_16B_WORD0>
#### mb19_32b_word3
<link=MB19_32B_WORD3>
#### MB49_8B_CS
<link=p.CAN3.MB49_8B_CS>
#### MB19_32B_WORD5
<link=p.CAN3.MB19_32B_WORD5>
#### MB11_64B_ID
<link=p.CAN3.MB11_64B_ID>
#### WORD151
<link=p.CAN3.WORD151>
#### mb11_64b_word8
<link=MB11_64B_WORD8>
#### MB20_32B_WORD6
<link=p.CAN3.MB20_32B_WORD6>
#### ID52
<link=p.CAN3.ID52>
#### MB11_64B_WORD13
<link=p.CAN3.MB11_64B_WORD13>
#### MB21_32B_WORD1
<link=p.CAN3.MB21_32B_WORD1>
#### MB53_8B_WORD0
<link=p.CAN3.MB53_8B_WORD0>
#### word054
<link=WORD054>
#### mb12_64b_word1
<link=MB12_64B_WORD1>
#### MB12_64B_WORD3
<link=p.CAN3.MB12_64B_WORD3>
#### mb22_32b_id
<link=MB22_32B_ID>
#### MB22_32B_WORD1
<link=p.CAN3.MB22_32B_WORD1>
#### mb37_16b_id
<link=MB37_16B_ID>
#### MB37_16B_WORD2
<link=p.CAN3.MB37_16B_WORD2>
#### MB23_32B_CS
<link=p.CAN3.MB23_32B_CS>
#### mb57_8b_word0
<link=MB57_8B_WORD0>
#### MB12_64B_WORD14
<link=p.CAN3.MB12_64B_WORD14>
#### MB23_32B_WORD0
<link=p.CAN3.MB23_32B_WORD0>
#### mb58_8b_cs
<link=MB58_8B_CS>
#### MB39_16B_CS
<link=p.CAN3.MB39_16B_CS>
#### mb58_8b_word0
<link=MB58_8B_WORD0>
#### WORD058
<link=p.CAN3.WORD058>
#### MB39_16B_ID
<link=p.CAN3.MB39_16B_ID>
#### CS59
<link=p.CAN3.CS59>
#### mb59_8b_cs
<link=MB59_8B_CS>
#### mb59_8b_id
<link=MB59_8B_ID>
#### mb13_64b_word3
<link=MB13_64B_WORD3>
#### mb39_16b_word3
<link=MB39_16B_WORD3>
#### MB13_64B_WORD5
<link=p.CAN3.MB13_64B_WORD5>
#### mb40_16b_word0
<link=MB40_16B_WORD0>
#### WORD160
<link=p.CAN3.WORD160>
#### CS61
<link=p.CAN3.CS61>
#### word061
<link=WORD061>
#### mb41_16b_id
<link=MB41_16B_ID>
#### mb13_64b_word14
<link=MB13_64B_WORD14>
#### mb41_16b_word3
<link=MB41_16B_WORD3>
#### rximr[0]
<link=RXIMR[0]>
#### RXIMR[17]
<link=p.CAN3.RXIMR[17]>
#### RXIMR[29]
<link=p.CAN3.RXIMR[29]>
#### rximr[43]
<link=RXIMR[43]>
#### RXIMR[45]
<link=p.CAN3.RXIMR[45]>
#### rximr[53]
<link=RXIMR[53]>
#### RXIMR[56]
<link=p.CAN3.RXIMR[56]>
#### rximr[59]
<link=RXIMR[59]>
#### FDCTRL
<link=p.CAN3.FDCTRL>
#### fdctrl
<link=FDCTRL>
#### FDCBT
<link=p.CAN3.FDCBT>
#### hr_time_stamp[7]
<link=HR_TIME_STAMP[7]>
#### HR_TIME_STAMP[13]
<link=p.CAN3.HR_TIME_STAMP[13]>
#### hr_time_stamp[20]
<link=HR_TIME_STAMP[20]>
#### HR_TIME_STAMP[25]
<link=p.CAN3.HR_TIME_STAMP[25]>
#### hr_time_stamp[47]
<link=HR_TIME_STAMP[47]>
#### HR_TIME_STAMP[49]
<link=p.CAN3.HR_TIME_STAMP[49]>
#### ERFFEL[3]
<link=p.CAN3.ERFFEL[3]>
#### erffel[3]
<link=ERFFEL[3]>
#### erffel[13]
<link=ERFFEL[13]>
#### ERFFEL[18]
<link=p.CAN3.ERFFEL[18]>
#### erffel[18]
<link=ERFFEL[18]>
#### ERFFEL[35]
<link=p.CAN3.ERFFEL[35]>
#### erffel[35]
<link=ERFFEL[35]>
#### ERFFEL[74]
<link=p.CAN3.ERFFEL[74]>
#### erffel[74]
<link=ERFFEL[74]>
#### erffel[89]
<link=ERFFEL[89]>
#### erffel[104]
<link=ERFFEL[104]>
#### erffel[110]
<link=ERFFEL[110]>
#### erffel[117]
<link=ERFFEL[117]>
#### erffel[121]
<link=ERFFEL[121]>
#### COMP12
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.COMP12
   p.TMR2.COMP12
   p.TMR3.COMP12
   p.TMR4.COMP12
#### comp12
<link=COMP12>
#### COMP23
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.COMP23
   p.TMR2.COMP23
   p.TMR3.COMP23
   p.TMR4.COMP23
#### comp23
<link=COMP23>
#### CAPT2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CAPT2
   p.TMR2.CAPT2
   p.TMR3.CAPT2
   p.TMR4.CAPT2
#### HOLD3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.HOLD3
   p.TMR2.HOLD3
   p.TMR3.HOLD3
   p.TMR4.HOLD3
#### cntr2
<link=CNTR2>
#### ctrl3
<link=CTRL3>
#### csctrl1
<link=CSCTRL1>
#### DMA2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.DMA2
   p.TMR2.DMA2
   p.TMR3.DMA2
   p.TMR4.DMA2
#### scs_clr
<link=SCS_CLR>
#### crc_addr
<link=CRC_ADDR>
#### CFG0
<link=p.OCOTP.CFG0>
#### OTPMK5
<link=p.OCOTP.OTPMK5>
#### otpmk7
<link=OTPMK7>
#### srk0
<link=SRK0>
#### SRK2
<link=p.OCOTP.SRK2>
#### MAC2
<link=p.OCOTP.MAC2>
#### gp31
<link=GP31>
#### SW_MUX_CTL_PAD_GPIO_EMC_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_00>
#### sw_mux_ctl_pad_gpio_emc_00
<link=SW_MUX_CTL_PAD_GPIO_EMC_00>
#### SW_MUX_CTL_PAD_GPIO_EMC_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_13>
#### sw_mux_ctl_pad_gpio_emc_13
<link=SW_MUX_CTL_PAD_GPIO_EMC_13>
#### sw_mux_ctl_pad_gpio_ad_b0_09
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_09>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_02>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_11>
#### SW_MUX_CTL_PAD_GPIO_B1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_07>
#### sw_mux_ctl_pad_gpio_b1_07
<link=SW_MUX_CTL_PAD_GPIO_B1_07>
#### sw_mux_ctl_pad_gpio_sd_b1_02
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_02>
#### SW_MUX_CTL_PAD_GPIO_SD_B1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_07>
#### SW_MUX_CTL_PAD_GPIO_SD_B1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_10>
#### SW_PAD_CTL_PAD_GPIO_EMC_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_03>
#### sw_pad_ctl_pad_gpio_emc_13
<link=SW_PAD_CTL_PAD_GPIO_EMC_13>
#### SW_PAD_CTL_PAD_GPIO_EMC_18
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_18>
#### sw_pad_ctl_pad_gpio_emc_22
<link=SW_PAD_CTL_PAD_GPIO_EMC_22>
#### SW_PAD_CTL_PAD_GPIO_EMC_25
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_25>
#### sw_pad_ctl_pad_gpio_emc_35
<link=SW_PAD_CTL_PAD_GPIO_EMC_35>
#### sw_pad_ctl_pad_gpio_emc_40
<link=SW_PAD_CTL_PAD_GPIO_EMC_40>
#### sw_pad_ctl_pad_gpio_ad_b0_06
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_06>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_08>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_03>
#### sw_pad_ctl_pad_gpio_ad_b1_12
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_12>
#### SW_PAD_CTL_PAD_GPIO_AD_B1_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_14>
#### SW_PAD_CTL_PAD_GPIO_B0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_02>
#### sw_pad_ctl_pad_gpio_b0_05
<link=SW_PAD_CTL_PAD_GPIO_B0_05>
#### SW_PAD_CTL_PAD_GPIO_B1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_08>
#### sw_pad_ctl_pad_gpio_b1_11
<link=SW_PAD_CTL_PAD_GPIO_B1_11>
#### sw_pad_ctl_pad_gpio_sd_b0_01
<link=SW_PAD_CTL_PAD_GPIO_SD_B0_01>
#### SW_PAD_CTL_PAD_GPIO_SD_B0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_04>
#### sw_pad_ctl_pad_gpio_sd_b1_06
<link=SW_PAD_CTL_PAD_GPIO_SD_B1_06>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_11>
#### csi_data02_select_input
<link=CSI_DATA02_SELECT_INPUT>
#### csi_pixclk_select_input
<link=CSI_PIXCLK_SELECT_INPUT>
#### csi_vsync_select_input
<link=CSI_VSYNC_SELECT_INPUT>
#### enet_txclk_select_input
<link=ENET_TXCLK_SELECT_INPUT>
#### FLEXPWM2_PWMB2_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMB2_SELECT_INPUT>
#### FLEXPWM4_PWMA1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM4_PWMA1_SELECT_INPUT>
#### FLEXSPIA_DATA1_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_DATA1_SELECT_INPUT>
#### FLEXSPIA_SCK_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_SCK_SELECT_INPUT>
#### lpuart6_rx_select_input
<link=LPUART6_RX_SELECT_INPUT>
#### LPUART8_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART8_TX_SELECT_INPUT>
#### qtimer3_timer1_select_input
<link=QTIMER3_TIMER1_SELECT_INPUT>
#### SAI1_RX_SYNC_SELECT_INPUT
<link=p.IOMUXC.SAI1_RX_SYNC_SELECT_INPUT>
#### sai2_tx_sync_select_input
<link=SAI2_TX_SYNC_SELECT_INPUT>
#### USB_OTG1_OC_SELECT_INPUT
<link=p.IOMUXC.USB_OTG1_OC_SELECT_INPUT>
#### usdhc1_cd_b_select_input
<link=USDHC1_CD_B_SELECT_INPUT>
#### usdhc1_wp_select_input
<link=USDHC1_WP_SELECT_INPUT>
#### usdhc2_cmd_select_input
<link=USDHC2_CMD_SELECT_INPUT>
#### sw_mux_ctl_pad_gpio_spi_b0_09
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_09>
#### SW_MUX_CTL_PAD_GPIO_SPI_B1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_05>
#### SW_PAD_CTL_PAD_GPIO_SPI_B0_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_11>
#### sw_pad_ctl_pad_gpio_spi_b0_12
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_12>
#### sw_pad_ctl_pad_gpio_spi_b1_06
<link=SW_PAD_CTL_PAD_GPIO_SPI_B1_06>
#### GPT1_IPP_IND_CAPIN2_SELECT_INPUT
<link=p.IOMUXC.GPT1_IPP_IND_CAPIN2_SELECT_INPUT>
#### gpt1_ipp_ind_clkin_select_input
<link=GPT1_IPP_IND_CLKIN_SELECT_INPUT>
#### gpt2_ipp_ind_capin2_select_input
<link=GPT2_IPP_IND_CAPIN2_SELECT_INPUT>
#### intr
<link=INTR>
#### LUTCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUTCR
   p.FLEXSPI2.LUTCR
#### AHBRXBUF1CR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.AHBRXBUF1CR0
   p.FLEXSPI2.AHBRXBUF1CR0
#### FLSHA1CR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHA1CR0
   p.FLEXSPI2.FLSHA1CR0
#### FLSHA2CR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHA2CR0
   p.FLEXSPI2.FLSHA2CR0
#### FLSHCR2A1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHCR2A1
   p.FLEXSPI2.FLSHCR2A1
#### IPCR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.IPCR0
   p.FLEXSPI2.IPCR0
   p.SEMC.IPCR0
#### iptxfcr
<link=IPTXFCR>
#### rfdr[5]
<link=RFDR[5]>
#### rfdr[10]
<link=RFDR[10]>
#### RFDR[22]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[22]
   p.FLEXSPI2.RFDR[22]
#### RFDR[27]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[27]
   p.FLEXSPI2.RFDR[27]
#### TFDR[10]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[10]
   p.FLEXSPI2.TFDR[10]
#### tfdr[10]
<link=TFDR[10]>
#### lut[2]
<link=LUT[2]>
#### lut[7]
<link=LUT[7]>
#### lut[8]
<link=LUT[8]>
#### LUT[28]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[28]
   p.FLEXSPI2.LUT[28]
#### LUT[31]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[31]
   p.FLEXSPI2.LUT[31]
#### LUT[34]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[34]
   p.FLEXSPI2.LUT[34]
#### lut[34]
<link=LUT[34]>
#### LUT[44]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[44]
   p.FLEXSPI2.LUT[44]
#### lut[49]
<link=LUT[49]>
#### lut[53]
<link=LUT[53]>
#### lut[59]
<link=LUT[59]>
#### lut[62]
<link=LUT[62]>
#### out_buf2
<link=OUT_BUF2>
#### OUT_PITCH
<link=p.PXP.OUT_PITCH>
#### out_lrc
<link=OUT_LRC>
#### csc1_coef2
<link=CSC1_COEF2>
#### CTRL1_SET
<link=p.LCDIF.CTRL1_SET>
#### pigeonctrl1_tog
<link=PIGEONCTRL1_TOG>
#### pigeon_0_0
<link=PIGEON_0_0>
#### pigeon_3_0
<link=PIGEON_3_0>
#### PIGEON_9_2
<link=p.LCDIF.PIGEON_9_2>
#### csicr1
<link=CSICR1>
#### CSICR3
<link=p.CSI.CSICR3>
#### CSIRFIFO
<link=p.CSI.CSIRFIFO>
#### SYS_CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.SYS_CTRL
   p.USDHC2.SYS_CTRL
#### autocmd12_err_status
<link=AUTOCMD12_ERR_STATUS>
#### rmon_t_frag
<link=RMON_T_FRAG>
#### rmon_t_col
<link=RMON_T_COL>
#### RMON_R_PACKETS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_PACKETS
   p.ENET2.RMON_R_PACKETS
#### RMON_R_CRC_ALIGN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_CRC_ALIGN
   p.ENET2.RMON_R_CRC_ALIGN
#### RMON_R_FRAG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_FRAG
   p.ENET2.RMON_R_FRAG
#### RMON_R_P128TO255
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_P128TO255
   p.ENET2.RMON_R_P128TO255
#### rmon_r_octets
<link=RMON_R_OCTETS>
#### ieee_r_drop
<link=IEEE_R_DROP>
#### ieee_r_octets_ok
<link=IEEE_R_OCTETS_OK>
#### atcr
<link=ATCR>
#### GPTIMER0LD
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.GPTIMER0LD
   p.USB2.GPTIMER0LD
#### GPTIMER1LD
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.GPTIMER1LD
   p.USB2.GPTIMER1LD
#### HCIVERSION
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.HCIVERSION
   p.USB2.HCIVERSION
#### USBINTR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.USBINTR
   p.USB2.USBINTR
#### asynclistaddr
<link=ASYNCLISTADDR>
#### BR7
<link=p.SEMC.BR7>
#### SDRAMCR0
<link=p.SEMC.SDRAMCR0>
#### sdramcr2
<link=SDRAMCR2>
#### CHANNELCTRL_CLR
<link=p.DCP.CHANNELCTRL_CLR>
#### KEYDATA
<link=p.DCP.KEYDATA>
#### packet4
<link=PACKET4>
#### CH0CMDPTR
<link=p.DCP.CH0CMDPTR>
#### CH0OPTS_SET
<link=p.DCP.CH0OPTS_SET>
#### ch1stat
<link=CH1STAT>
#### ch1opts_clr
<link=CH1OPTS_CLR>
#### ch1opts_tog
<link=CH1OPTS_TOG>
#### ch2sema
<link=CH2SEMA>
#### CH2OPTS
<link=p.DCP.CH2OPTS>
#### CH3STAT_TOG
<link=p.DCP.CH3STAT_TOG>
#### dbgdata
<link=DBGDATA>
#### srcsh
<link=SRCSH>
#### TCR5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TCR5
   p.SAI2.TCR5
   p.SAI3.TCR5
#### TFR[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TFR[0]
   p.SAI2.TFR[0]
   p.SAI3.TFR[0]
#### rdr[1]
<link=RDR[1]>
#### der
<link=DER>
#### DONE0_1_IRQ
<link=p.ADC_ETC.DONE0_1_IRQ>
#### trig0_result_1_0
<link=TRIG0_RESULT_1_0>
#### trig0_result_7_6
<link=TRIG0_RESULT_7_6>
#### TRIG2_CHAIN_1_0
<link=p.ADC_ETC.TRIG2_CHAIN_1_0>
#### TRIG2_CHAIN_7_6
<link=p.ADC_ETC.TRIG2_CHAIN_7_6>
#### TRIG4_COUNTER
<link=p.ADC_ETC.TRIG4_COUNTER>
#### TRIG4_CHAIN_3_2
<link=p.ADC_ETC.TRIG4_CHAIN_3_2>
#### TRIG6_RESULT_5_4
<link=p.ADC_ETC.TRIG6_RESULT_5_4>
#### TRIG6_RESULT_7_6
<link=p.ADC_ETC.TRIG6_RESULT_7_6>
#### bfcrt230
<link=BFCRT230>
#### SEL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.XBARA1.SEL5
   p.XBARB2.SEL5
   p.XBARB3.SEL5
#### SEL10
<link=p.XBARA1.SEL10>
#### SEL25
<link=p.XBARA1.SEL25>
#### SEL36
<link=p.XBARA1.SEL36>
#### sel49
<link=SEL49>
#### sel57
<link=SEL57>
#### LPOSH
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.LPOSH
   p.ENC2.LPOSH
   p.ENC3.LPOSH
   p.ENC4.LPOSH
#### SM0VAL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0VAL2
   p.PWM2.SM0VAL2
   p.PWM3.SM0VAL2
   p.PWM4.SM0VAL2
#### sm0val5
<link=SM0VAL5>
#### sm0inten
<link=SM0INTEN>
#### SM0CVAL4CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CVAL4CYC
   p.PWM2.SM0CVAL4CYC
   p.PWM3.SM0CVAL4CYC
   p.PWM4.SM0CVAL4CYC
#### SM1VAL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1VAL2
   p.PWM2.SM1VAL2
   p.PWM3.SM1VAL2
   p.PWM4.SM1VAL2
#### sm1val4
<link=SM1VAL4>
#### SM1OCTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1OCTRL
   p.PWM2.SM1OCTRL
   p.PWM3.SM1OCTRL
   p.PWM4.SM1OCTRL
#### SM1CAPTCOMPB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CAPTCOMPB
   p.PWM2.SM1CAPTCOMPB
   p.PWM3.SM1CAPTCOMPB
   p.PWM4.SM1CAPTCOMPB
#### sm1cval1cyc
<link=SM1CVAL1CYC>
#### SM1CVAL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CVAL2
   p.PWM2.SM1CVAL2
   p.PWM3.SM1CVAL2
   p.PWM4.SM1CVAL2
#### sm1cval2cyc
<link=SM1CVAL2CYC>
#### SM1CVAL3CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CVAL3CYC
   p.PWM2.SM1CVAL3CYC
   p.PWM3.SM1CVAL3CYC
   p.PWM4.SM1CVAL3CYC
#### sm2ctrl2
<link=SM2CTRL2>
#### sm2fracval4
<link=SM2FRACVAL4>
#### SM2CAPTCTRLB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CAPTCTRLB
   p.PWM2.SM2CAPTCTRLB
   p.PWM3.SM2CAPTCTRLB
   p.PWM4.SM2CAPTCTRLB
#### sm2captcompb
<link=SM2CAPTCOMPB>
#### SM2CVAL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL2
   p.PWM2.SM2CVAL2
   p.PWM3.SM2CVAL2
   p.PWM4.SM2CVAL2
#### sm2cval3
<link=SM2CVAL3>
#### SM2CVAL3CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL3CYC
   p.PWM2.SM2CVAL3CYC
   p.PWM3.SM2CVAL3CYC
   p.PWM4.SM2CVAL3CYC
#### SM3FRACVAL4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3FRACVAL4
   p.PWM2.SM3FRACVAL4
   p.PWM3.SM3FRACVAL4
   p.PWM4.SM3FRACVAL4
#### SM3CAPTCTRLA
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CAPTCTRLA
   p.PWM2.SM3CAPTCTRLA
   p.PWM3.SM3CAPTCTRLA
   p.PWM4.SM3CAPTCTRLA
#### MCTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.MCTRL
   p.PWM2.MCTRL
   p.PWM3.MCTRL
   p.PWM4.MCTRL
#### ftst0
<link=FTST0>
#### ADDR_OFFSET1
<link=p.BEE.ADDR_OFFSET1>
#### AES_KEY0_W2
<link=p.BEE.AES_KEY0_W2>
#### CTR_NONCE1_W1
<link=p.BEE.CTR_NONCE1_W1>
#### ctr_nonce1_w3
<link=CTR_NONCE1_W3>
#### REGION1_TOP
<link=p.BEE.REGION1_TOP>
#### MDER
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MDER
   p.LPI2C2.MDER
   p.LPI2C3.MDER
   p.LPI2C4.MDER
#### MCFGR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MCFGR0
   p.LPI2C2.MCFGR0
   p.LPI2C3.MCFGR0
   p.LPI2C4.MCFGR0
#### MCCR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MCCR1
   p.LPI2C2.MCCR1
   p.LPI2C3.MCCR1
   p.LPI2C4.MCCR1
#### mccr1
<link=MCCR1>
#### MFCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MFCR
   p.LPI2C2.MFCR
   p.LPI2C3.MFCR
   p.LPI2C4.MFCR
#### SSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.SSR
   p.LPI2C2.SSR
   p.LPI2C3.SSR
   p.LPI2C4.SSR
#### SIER
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.SIER
   p.LPI2C2.SIER
   p.LPI2C3.SIER
   p.LPI2C4.SIER
#### sier
<link=SIER>
#### SASR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.SASR
   p.LPI2C2.SASR
   p.LPI2C3.SASR
   p.LPI2C4.SASR
#### sasr
<link=SASR>
#### SRDR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.SRDR
   p.LPI2C2.SRDR
   p.LPI2C3.SRDR
   p.LPI2C4.SRDR
#### dfsr
<link=DFSR>
#### ID_DFR0
<link=p.SystemControl.ID_DFR0>
#### CPACR
<link=p.SystemControl.CPACR>
#### nvicicer3
<link=NVICICER3>
#### nvicispr0
<link=NVICISPR0>
#### NVICISPR1
<link=p.NVIC.NVICISPR1>
#### NVICIP0
<link=p.NVIC.NVICIP0>
#### nvicip9
<link=NVICIP9>
#### NVICIP15
<link=p.NVIC.NVICIP15>
#### nvicip30
<link=NVICIP30>
#### NVICIP47
<link=p.NVIC.NVICIP47>
#### nvicip49
<link=NVICIP49>
#### nvicip52
<link=NVICIP52>
#### NVICIP59
<link=p.NVIC.NVICIP59>
#### NVICIP61
<link=p.NVIC.NVICIP61>
#### NVICIP76
<link=p.NVIC.NVICIP76>
#### NVICIP83
<link=p.NVIC.NVICIP83>
#### nvicip96
<link=NVICIP96>
#### nvicip106
<link=NVICIP106>
#### NVICIP114
<link=p.NVIC.NVICIP114>
#### NVICIP121
<link=p.NVIC.NVICIP121>
#### nvicip128
<link=NVICIP128>
#### NVICIP143
<link=p.NVIC.NVICIP143>
#### nvicip156
<link=NVICIP156>
#### NVICSTIR
<link=p.NVIC.NVICSTIR>
