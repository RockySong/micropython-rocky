#### AIPSTZ1.OPACR2
<link=p.AIPSTZ1.OPACR2>
#### p.aipstz2.opacr3
<link=p.AIPSTZ2.OPACR3>
#### p.aipstz3
<link=p.AIPSTZ3>
#### p.AIPSTZ3.MPR
<lang=dft>
 (rw)  [1;33m0x4027c000[0m (0x4027c000 + 0x0000)
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
#### aipstz3.mpr
<link=p.AIPSTZ3.MPR>
#### p.AIPSTZ3.OPACR2
<lang=dft>
 (rw)  [1;33m0x4027c048[0m (0x4027c000 + 0x0048)
Off-Platform Peripheral Access Control Registers
 (rw) (04)  [0;32mOPAC23[0m  - [03:00] -  Off-platform Peripheral Access Control 23
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC22[0m  - [07:04] -  Off-platform Peripheral Access Control 22
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC21[0m  - [11:08] -  Off-platform Peripheral Access Control 21
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC20[0m  - [15:12] -  Off-platform Peripheral Access Control 20
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC19[0m  - [19:16] -  Off-platform Peripheral Access Control 19
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC18[0m  - [23:20] -  Off-platform Peripheral Access Control 18
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC17[0m  - [27:24] -  Off-platform Peripheral Access Control 17
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC16[0m  - [31:28] -  Off-platform Peripheral Access Control 16
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
</lang>
#### p.DCDC.REG1
<lang=dft>
 (rw)  [1;33m0x40080004[0m (0x40080000 + 0x0004)
DCDC Register 1
 (rw) (02)  [0;32mREG_FBK_SEL[0m  - [08:07] -  select the feedback point of the internal regulator
 (rw) (01)  [0;32mREG_RLOAD_SW[0m  - [09:09] -  control the load resistor of the internal regulator of DCDC, the load resistor 
 is connected as default "1", and need set to "0" to disconnect the load resisto
 r
 (rw) (02)  [0;32mLP_CMP_ISRC_SEL[0m  - [13:12] -  set the current bias of low power comparator 0x0: 50 nA 0x1: 100 nA 0x2: 200 nA
  0x3: 400 nA
 (rw) (01)  [0;32mLOOPCTRL_HST_THRESH[0m  - [21:21] -  increase the threshold detection for common mode analog comparator
 (rw) (01)  [0;32mLOOPCTRL_EN_HYST[0m  - [23:23] -  Enable hysteresis in switching converter common mode analog comparators
 (rw) (05)  [0;32mVBG_TRIM[0m  - [28:24] -  trim bandgap voltage
</lang>
#### pit.tctrl1
<link=p.PIT.TCTRL1>
#### p.PIT.LDVAL2
<lang=dft>
 (rw)  [1;33m0x40084120[0m (0x40084000 + 0x0120)
Timer Load Value Register
 (rw) (32)  [0;32mTSV[0m  - [31:00] -  Timer Start Value
</lang>
#### PIT.CVAL3
<link=p.PIT.CVAL3>
#### PIT.TCTRL3
<link=p.PIT.TCTRL3>
#### p.PIT.LTMR64H
<lang=dft>
 (ro)  [1;33m0x400840e0[0m (0x40084000 + 0x00e0)
PIT Upper Lifetime Timer Register
 (ro) (32)  [0;32mLTH[0m  - [31:00] -  Life Timer value
</lang>
#### CMP2.FPR
<link=p.CMP2.FPR>
#### p.CMP2.SCR
<lang=dft>
 (rw)  [1;33m0x4009400b[0m (0x40094008 + 0x0003)
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
#### p.cmp3.scr
<link=p.CMP3.SCR>
#### p.IOMUXC_SNVS_GPR.GPR2
<lang=dft>
 (ro)  [1;33m0x400a4008[0m (0x400a4000 + 0x0008)
GPR2 General Purpose Register
</lang>
#### p.IOMUXC_SNVS.SW_PAD_CTL_PAD_TEST_MODE
<lang=dft>
 (rw)  [1;33m0x400a800c[0m (0x400a8000 + 0x000c)
SW_PAD_CTL_PAD_TEST_MODE SW PAD Control Register
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
#### p.iomuxc_snvs.sw_pad_ctl_pad_pmic_on_req
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_PMIC_ON_REQ>
#### p.IOMUXC_GPR.GPR1
<lang=dft>
 (rw)  [1;33m0x400ac004[0m (0x400ac000 + 0x0004)
GPR1 General Purpose Register
 (rw) (03)  [0;32mSAI1_MCLK1_SEL[0m  - [02:00] -  SAI1 MCLK1 source select
      0 - SAI1_MCLK1_SEL_0 :
         ccm.ssi1_clk_root
      0x1 - SAI1_MCLK1_SEL_1 :
         ccm.ssi2_clk_root
      0x2 - SAI1_MCLK1_SEL_2 :
         ccm.ssi3_clk_root
      0x3 - SAI1_MCLK1_SEL_3 :
         iomux.sai1_ipg_clk_sai_mclk
      0x4 - SAI1_MCLK1_SEL_4 :
         iomux.sai2_ipg_clk_sai_mclk
      0x5 - SAI1_MCLK1_SEL_5 :
         iomux.sai3_ipg_clk_sai_mclk
 (rw) (03)  [0;32mSAI1_MCLK2_SEL[0m  - [05:03] -  SAI1 MCLK2 source select
      0 - SAI1_MCLK2_SEL_0 :
         ccm.ssi1_clk_root
      0x1 - SAI1_MCLK2_SEL_1 :
         ccm.ssi2_clk_root
      0x2 - SAI1_MCLK2_SEL_2 :
         ccm.ssi3_clk_root
      0x3 - SAI1_MCLK2_SEL_3 :
         iomux.sai1_ipg_clk_sai_mclk
      0x4 - SAI1_MCLK2_SEL_4 :
         iomux.sai2_ipg_clk_sai_mclk
      0x5 - SAI1_MCLK2_SEL_5 :
         iomux.sai3_ipg_clk_sai_mclk
 (rw) (02)  [0;32mSAI1_MCLK3_SEL[0m  - [07:06] -  SAI1 MCLK3 source select
      0 - SAI1_MCLK3_SEL_0 :
         ccm.spdif0_clk_root
      0x1 - SAI1_MCLK3_SEL_1 :
         iomux.spdif_tx_clk2
      0x2 - SAI1_MCLK3_SEL_2 :
         spdif.spdif_srclk
      0x3 - SAI1_MCLK3_SEL_3 :
         spdif.spdif_outclock
 (rw) (02)  [0;32mSAI2_MCLK3_SEL[0m  - [09:08] -  SAI2 MCLK3 source select
      0 - SAI2_MCLK3_SEL_0 :
         ccm.spdif0_clk_root
      0x1 - SAI2_MCLK3_SEL_1 :
         iomux.spdif_tx_clk2
      0x2 - SAI2_MCLK3_SEL_2 :
         spdif.spdif_srclk
      0x3 - SAI2_MCLK3_SEL_3 :
         spdif.spdif_outclock
 (rw) (02)  [0;32mSAI3_MCLK3_SEL[0m  - [11:10] -  SAI3 MCLK3 source select
      0 - SAI3_MCLK3_SEL_0 :
         ccm.spdif0_clk_root
      0x1 - SAI3_MCLK3_SEL_1 :
         iomux.spdif_tx_clk2
      0x2 - SAI3_MCLK3_SEL_2 :
         spdif.spdif_srclk
      0x3 - SAI3_MCLK3_SEL_3 :
         spdif.spdif_outclock
 (rw) (01)  [0;32mGINT[0m  - [12:12] -  Global interrupt "0" bit (connected to ARM M7 IRQ#0 and GPC)
      0 - GINT_0 :
         Global interrupt request is not asserted.
      0x1 - GINT_1 :
         Global interrupt request is asserted.
 (rw) (01)  [0;32mENET1_CLK_SEL[0m  - [13:13] -  ENET1 reference clock mode select.
      0 - ENET1_CLK_SEL_0 :
         ENET1 TX reference clock driven by ref_enetpll. This clock is also outp
         ut to pins via the IOMUX. ENET_REF_CLK1 function.
      0x1 - ENET1_CLK_SEL_1 :
         Gets ENET1 TX reference clock from the ENET1_TX_CLK pin. In this use ca
         se, an external OSC provides the clock for both the external PHY and th
         e internal controller.
 (rw) (01)  [0;32mENET2_CLK_SEL[0m  - [14:14] -  ENET2 reference clock mode select.
      0 - ENET2_CLK_SEL_0 :
         ENET2 TX reference clock driven by ref_enetpll. This clock is also outp
         ut to pins via the IOMUX. ENET2_REF_CLK function.
      0x1 - ENET2_CLK_SEL_1 :
         Gets ENET2 TX reference clock from the ENET2_TX_CLK pin. In this use ca
         se, an external OSC provides the clock for both the external PHY and th
         e internal controller.
 (rw) (01)  [0;32mUSB_EXP_MODE[0m  - [15:15] -  USB Exposure mode
      0 - USB_EXP_MODE_0 :
         Exposure mode is disabled.
      0x1 - USB_EXP_MODE_1 :
         Exposure mode is enabled.
 (rw) (01)  [0;32mENET1_TX_CLK_DIR[0m  - [17:17] -  ENET1_TX_CLK data direction control
      0 - ENET1_TX_CLK_DIR_0 :
         ENET1_TX_CLK output driver is disabled
      0x1 - ENET1_TX_CLK_DIR_1 :
         ENET1_TX_CLK output driver is enabled
 (rw) (01)  [0;32mENET2_TX_CLK_DIR[0m  - [18:18] -  ENET2_TX_CLK data direction control
      0 - ENET2_TX_CLK_DIR_0 :
         ENET2_TX_CLK output driver is disabled
      0x1 - ENET2_TX_CLK_DIR_1 :
         ENET2_TX_CLK output driver is enabled
 (rw) (01)  [0;32mSAI1_MCLK_DIR[0m  - [19:19] -  sai1.MCLK signal direction control
      0 - SAI1_MCLK_DIR_0 :
         sai1.MCLK is input signal
      0x1 - SAI1_MCLK_DIR_1 :
         sai1.MCLK is output signal
 (rw) (01)  [0;32mSAI2_MCLK_DIR[0m  - [20:20] -  sai2.MCLK signal direction control
      0 - SAI2_MCLK_DIR_0 :
         sai2.MCLK is input signal
      0x1 - SAI2_MCLK_DIR_1 :
         sai2.MCLK is output signal
 (rw) (01)  [0;32mSAI3_MCLK_DIR[0m  - [21:21] -  sai3.MCLK signal direction control
      0 - SAI3_MCLK_DIR_0 :
         sai3.MCLK is input signal
      0x1 - SAI3_MCLK_DIR_1 :
         sai3.MCLK is output signal
 (rw) (01)  [0;32mEXC_MON[0m  - [22:22] -  Exclusive monitor response select of illegal command
      0 - EXC_MON_0 :
         OKAY response
      0x1 - EXC_MON_1 :
         SLVError response (default)
 (rw) (01)  [0;32mENET_IPG_CLK_S_EN[0m  - [23:23] -  ENET and ENET2 ipg_clk_s clock gating enable
      0 - ENET_IPG_CLK_S_EN_0 :
         ipg_clk_s is gated when there is no IPS access
      0x1 - ENET_IPG_CLK_S_EN_1 :
         ipg_clk_s is always on
 (rw) (01)  [0;32mCM7_FORCE_HCLK_EN[0m  - [31:31] -  ARM CM7 platform AHB clock enable
      0 - CM7_FORCE_HCLK_EN_0 :
         AHB clock is not running (gated)
      0x1 - CM7_FORCE_HCLK_EN_1 :
         AHB clock is running (enabled)
</lang>
#### IOMUXC_GPR.GPR1
<link=p.IOMUXC_GPR.GPR1>
#### iomuxc_gpr.gpr2
<link=p.IOMUXC_GPR.GPR2>
#### p.IOMUXC_GPR.GPR19
<lang=dft>
 (rw)  [1;33m0x400ac04c[0m (0x400ac000 + 0x004c)
GPR19 General Purpose Register
 (rw) (01)  [0;32mLOCK_M7_APC_AC_R0_TOP[0m  - [00:00] -  lock M7_APC_AC_R0_TOP field for changes
      0 - LOCK_M7_APC_AC_R0_TOP_0 :
         Register field [31:1] is not locked
      0x1 - LOCK_M7_APC_AC_R0_TOP_1 :
         Register field [31:1] is locked (read access only)
 (rw) (29)  [0;32mM7_APC_AC_R0_TOP[0m  - [31:03] -  APC start address of memory region-0
</lang>
#### iomuxc_gpr.gpr19
<link=p.IOMUXC_GPR.GPR19>
#### p.iomuxc_gpr.gpr20
<link=p.IOMUXC_GPR.GPR20>
#### iomuxc_gpr.gpr28
<link=p.IOMUXC_GPR.GPR28>
#### p.iomuxc_gpr.gpr33
<link=p.IOMUXC_GPR.GPR33>
#### p.FLEXRAM
<lang=dft>
base: 0x400b0000
INT_SIG_EN      INT_STATUS      INT_STAT_EN     TCM_CTRL        
输入 p.FLEXRAM.{reg_name} 以查看寄存器的详细信息
type p.FLEXRAM.{reg_name} to check details of registers
</lang>
#### p.WDOG2.WICR
<lang=dft>
 (rw)  [1;33m0x400d0006[0m (0x400d0000 + 0x0006)
Watchdog Interrupt Control Register
 (rw) (08)  [0;32mWICT[0m  - [07:00] -  WICT
      0 - WICT_0 :
         WICT[7:0] = Time duration between interrupt and time-out is 0 seconds.
      0x1 - WICT_1 :
         WICT[7:0] = Time duration between interrupt and time-out is 0.5 seconds
         .
      0x4 - WICT_4 :
         WICT[7:0] = Time duration between interrupt and time-out is 2 seconds (
         Default).
      0xFF - WICT_255 :
         WICT[7:0] = Time duration between interrupt and time-out is 127.5 secon
         ds.
 (rw) (01)  [0;32mWTIS[0m  - [14:14] -  WTIS
      0 - WTIS_0 :
         No interrupt has occurred (Default).
      0x1 - WTIS_1 :
         Interrupt has occurred
 (rw) (01)  [0;32mWIE[0m  - [15:15] -  WIE
      0 - WIE_0 :
         Disable Interrupt (Default).
      0x1 - WIE_1 :
         Enable Interrupt.
</lang>
#### p.RTWDOG.CNT
<lang=dft>
 (rw)  [1;33m0x400bc004[0m (0x400bc000 + 0x0004)
Watchdog Counter Register
 (rw) (08)  [0;32mCNTLOW[0m  - [07:00] -  Low byte of the Watchdog Counter
 (rw) (08)  [0;32mCNTHIGH[0m  - [15:08] -  High byte of the Watchdog Counter
</lang>
#### p.adc1.hc1
<link=p.ADC1.HC1>
#### p.ADC1.HC3
<lang=dft>
 (rw)  [1;33m0x400c400c[0m (0x400c4000 + 0x000c)
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
#### ADC1.HC4
<link=p.ADC1.HC4>
#### adc1.hc5
<link=p.ADC1.HC5>
#### p.ADC1.R0
<lang=dft>
 (ro)  [1;33m0x400c4024[0m (0x400c4000 + 0x0024)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### ADC1.R5
<link=p.ADC1.R5>
#### adc1.cfg
<link=p.ADC1.CFG>
#### p.ADC1.CV
<lang=dft>
 (rw)  [1;33m0x400c4050[0m (0x400c4000 + 0x0050)
Compare value register
 (rw) (12)  [0;32mCV1[0m  - [11:00] -  Compare Value 1
 (rw) (12)  [0;32mCV2[0m  - [27:16] -  Compare Value 2
</lang>
#### ADC2.HC0
<link=p.ADC2.HC0>
#### p.ADC2.HC1
<lang=dft>
 (rw)  [1;33m0x400c8004[0m (0x400c8000 + 0x0004)
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
#### p.adc2.r1
<link=p.ADC2.R1>
#### ADC2.CFG
<link=p.ADC2.CFG>
#### p.ADC2.OFS
<lang=dft>
 (rw)  [1;33m0x400c8054[0m (0x400c8000 + 0x0054)
Offset correction value register
 (rw) (12)  [0;32mOFS[0m  - [11:00] -  Offset value
 (rw) (01)  [0;32mSIGN[0m  - [12:12] -  Sign bit
      0 - SIGN_0 :
         The offset value is added with the raw result
      0x1 - SIGN_1 :
         The offset value is subtracted from the raw converted value
</lang>
#### p.TRNG.SCMISC
<lang=dft>
 (rw)  [1;33m0x400cc004[0m (0x400cc000 + 0x0004)
Statistical Check Miscellaneous Register
 (rw) (08)  [0;32mLRUN_MAX[0m  - [07:00] -  LONG RUN MAX LIMIT
 (rw) (04)  [0;32mRTY_CT[0m  - [19:16] -  RETRY COUNT
</lang>
#### trng.scmisc
<link=p.TRNG.SCMISC>
#### trng.scmc
<link=p.TRNG.SCMC>
#### TRNG.SCR2L
<link=p.TRNG.SCR2L>
#### p.trng.scr6pc
<link=p.TRNG.SCR6PC>
#### p.trng.ent[2]
<link=p.TRNG.ENT[2]>
#### TRNG.ENT[15]
<link=p.TRNG.ENT[15]>
#### p.TRNG.PKRCNTBA
<lang=dft>
 (ro)  [1;33m0x400cc094[0m (0x400cc000 + 0x0094)
Statistical Check Poker Count B and A Register
 (ro) (16)  [0;32mPKR_A_CT[0m  - [15:00] -  Poker Ah Count
 (ro) (16)  [0;32mPKR_B_CT[0m  - [31:16] -  Poker Bh Count
</lang>
#### trng.pkrcntfe
<link=p.TRNG.PKRCNTFE>
#### snvs.hpcr
<link=p.SNVS.HPCR>
#### p.SNVS.HPSVCR
<lang=dft>
 (rw)  [1;33m0x400d4010[0m (0x400d4000 + 0x0010)
SNVS_HP Security Violation Control Register
 (rw) (01)  [0;32mSV0_CFG[0m  - [00:00] -  Security Violation 0 Security Violation Configuration This field configures the
  Security Violation 0 Security Violation Input
      0 - SV0_CFG_0 :
         Security Violation 0 is a non-fatal violation
      0x1 - SV0_CFG_1 :
         Security Violation 0 is a fatal violation
 (rw) (01)  [0;32mSV1_CFG[0m  - [01:01] -  Security Violation 1 Security Violation Configuration This field configures the
  Security Violation 1 Security Violation Input
      0 - SV1_CFG_0 :
         Security Violation 1 is a non-fatal violation
      0x1 - SV1_CFG_1 :
         Security Violation 1 is a fatal violation
 (rw) (01)  [0;32mSV2_CFG[0m  - [02:02] -  Security Violation 2 Security Violation Configuration This field configures the
  Security Violation 2 Security Violation Input
      0 - SV2_CFG_0 :
         Security Violation 2 is a non-fatal violation
      0x1 - SV2_CFG_1 :
         Security Violation 2 is a fatal violation
 (rw) (01)  [0;32mSV3_CFG[0m  - [03:03] -  Security Violation 3 Security Violation Configuration This field configures the
  Security Violation 3 Security Violation Input
      0 - SV3_CFG_0 :
         Security Violation 3 is a non-fatal violation
      0x1 - SV3_CFG_1 :
         Security Violation 3 is a fatal violation
 (rw) (01)  [0;32mSV4_CFG[0m  - [04:04] -  Security Violation 4 Security Violation Configuration This field configures the
  Security Violation 4 Security Violation Input
      0 - SV4_CFG_0 :
         Security Violation 4 is a non-fatal violation
      0x1 - SV4_CFG_1 :
         Security Violation 4 is a fatal violation
 (rw) (02)  [0;32mSV5_CFG[0m  - [06:05] -  Security Violation 5 Security Violation Configuration This field configures the
  Security Violation 5 Security Violation Input
      0 - SV5_CFG_0 :
         Security Violation 5 is disabled
      0x1 - SV5_CFG_1 :
         Security Violation 5 is a non-fatal violation
      #1x - SV5_CFG_2 :
         Security Violation 5 is a fatal violation
 (rw) (02)  [0;32mLPSV_CFG[0m  - [31:30] -  LP Security Violation Configuration This field configures the LP security viola
 tion source.
      0 - LPSV_CFG_0 :
         LP security violation is disabled
      0x1 - LPSV_CFG_1 :
         LP security violation is a non-fatal violation
      #1x - LPSV_CFG_2 :
         LP security violation is a fatal violation
</lang>
#### p.snvs.hphacr
<link=p.SNVS.HPHACR>
#### p.SNVS.LPLR
<lang=dft>
 (rw)  [1;33m0x400d4034[0m (0x400d4000 + 0x0034)
SNVS_LP Lock Register
 (rw) (01)  [0;32mZMK_WHL[0m  - [00:00] -  Zeroizable Master Key Write Hard Lock When set, prevents any writes (software a
 nd hardware) to the ZMK registers and ZMK_HWP, ZMK_VAL, and ZMK_ECC_EN fields o
 f the LPMKCR
      0 - ZMK_WHL_0 :
         Write access is allowed.
      0x1 - ZMK_WHL_1 :
         Write access is not allowed.
 (rw) (01)  [0;32mZMK_RHL[0m  - [01:01] -  Zeroizable Master Key Read Hard Lock When set, prevents any software reads to t
 he ZMK registers and ZMK_ECC_VALUE field of the LPMKCR
      0 - ZMK_RHL_0 :
         Read access is allowed (only in software programming mode).
      0x1 - ZMK_RHL_1 :
         Read access is not allowed.
 (rw) (01)  [0;32mSRTC_HL[0m  - [02:02] -  Secure Real Time Counter Hard Lock When set, prevents any writes to the SRTC re
 gisters, SRTC_ENV, and SRTC_INV_EN bits
      0 - SRTC_HL_0 :
         Write access is allowed.
      0x1 - SRTC_HL_1 :
         Write access is not allowed.
 (rw) (01)  [0;32mLPCALB_HL[0m  - [03:03] -  LP Calibration Hard Lock When set, prevents any writes to the LP Calibration Va
 lue (LPCALB_VAL) and LP Calibration Enable (LPCALB_EN)
      0 - LPCALB_HL_0 :
         Write access is allowed.
      0x1 - LPCALB_HL_1 :
         Write access is not allowed.
 (rw) (01)  [0;32mMC_HL[0m  - [04:04] -  Monotonic Counter Hard Lock When set, prevents any writes (increments) to the M
 C Registers and MC_ENV bit
      0 - MC_HL_0 :
         Write access (increment) is allowed.
      0x1 - MC_HL_1 :
         Write access (increment) is not allowed.
 (rw) (01)  [0;32mGPR_HL[0m  - [05:05] -  General Purpose Register Hard Lock When set, prevents any writes to the GPR
      0 - GPR_HL_0 :
         Write access is allowed.
      0x1 - GPR_HL_1 :
         Write access is not allowed.
 (rw) (01)  [0;32mLPSVCR_HL[0m  - [06:06] -  LP Security Violation Control Register Hard Lock When set, prevents any writes 
 to the LPSVCR
      0 - LPSVCR_HL_0 :
         Write access is allowed.
      0x1 - LPSVCR_HL_1 :
         Write access is not allowed.
 (rw) (01)  [0;32mLPTDCR_HL[0m  - [08:08] -  LP Tamper Detectors Configuration Register Hard Lock When set, prevents any wri
 tes to the LPTDCR
      0 - LPTDCR_HL_0 :
         Write access is allowed.
      0x1 - LPTDCR_HL_1 :
         Write access is not allowed.
 (rw) (01)  [0;32mMKS_HL[0m  - [09:09] -  Master Key Select Hard Lock When set, prevents any writes to the MASTER_KEY_SEL
  field of the LP Master Key Control Register
      0 - MKS_HL_0 :
         Write access is allowed.
      0x1 - MKS_HL_1 :
         Write access is not allowed.
</lang>
#### p.snvs.lpsrtcmr
<link=p.SNVS.LPSRTCMR>
#### p.snvs.lpsmcmr
<link=p.SNVS.LPSMCMR>
#### SNVS.LPGPR0_legacy_alias
<link=p.SNVS.LPGPR0_LEGACY_ALIAS>
#### snvs.lpzmkr[4]
<link=p.SNVS.LPZMKR[4]>
#### p.SNVS.LPZMKR[5]
<lang=dft>
 (rw)  [1;33m0x400d4080[0m (0x400d4000 + 0x0080)
SNVS_LP Zeroizable Master Key Register
 (rw) (32)  [0;32mZMK[0m  - [31:00] -  Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit Z
 MK value
</lang>
#### p.snvs.lpzmkr[5]
<link=p.SNVS.LPZMKR[5]>
#### snvs.lpgpr_alias[2]
<link=p.SNVS.LPGPR_ALIAS[2]>
#### snvs.lpgpr[2]
<link=p.SNVS.LPGPR[2]>
#### p.snvs.lpgpr[3]
<link=p.SNVS.LPGPR[3]>
#### p.SNVS.LPGPR[6]
<lang=dft>
 (rw)  [1;33m0x400d4118[0m (0x400d4000 + 0x0118)
SNVS_LP General Purpose Registers 0 .. 7
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### p.snvs.lpgpr[6]
<link=p.SNVS.LPGPR[6]>
#### snvs.lpgpr[7]
<link=p.SNVS.LPGPR[7]>
#### CCM_ANALOG.PLL_USB1
<link=p.CCM_ANALOG.PLL_USB1>
#### p.ccm_analog.pll_usb1_set
<link=p.CCM_ANALOG.PLL_USB1_SET>
#### p.CCM_ANALOG.PLL_SYS
<lang=dft>
 (rw)  [1;33m0x400d8030[0m (0x400d8000 + 0x0030)
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
#### CCM_ANALOG.PLL_AUDIO
<link=p.CCM_ANALOG.PLL_AUDIO>
#### p.CCM_ANALOG.PLL_AUDIO_NUM
<lang=dft>
 (rw)  [1;33m0x400d8080[0m (0x400d8000 + 0x0080)
Numerator of Audio PLL Fractional Loop Divider Register
 (rw) (30)  [0;32mA[0m  - [29:00] -  30 bit numerator of fractional loop divider.
</lang>
#### p.ccm_analog.pfd_480_set
<link=p.CCM_ANALOG.PFD_480_SET>
#### p.CCM_ANALOG.PFD_480_CLR
<lang=dft>
 (rw)  [1;33m0x400d80f8[0m (0x400d8000 + 0x00f8)
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
#### ccm_analog.pfd_528_set
<link=p.CCM_ANALOG.PFD_528_SET>
#### p.ccm_analog.misc0_set
<link=p.CCM_ANALOG.MISC0_SET>
#### p.ccm_analog.misc2
<link=p.CCM_ANALOG.MISC2>
#### p.CCM_ANALOG.MISC2_CLR
<lang=dft>
 (rw)  [1;33m0x400d8178[0m (0x400d8000 + 0x0178)
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
#### p.ccm_analog.misc2_clr
<link=p.CCM_ANALOG.MISC2_CLR>
#### p.PMU.REG_1P1
<lang=dft>
 (rw)  [1;33m0x400d8110[0m (0x400d8000 + 0x0110)
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
#### pmu.reg_1p1
<link=p.PMU.REG_1P1>
#### p.pmu.reg_3p0_clr
<link=p.PMU.REG_3P0_CLR>
#### p.pmu.reg_2p5_tog
<link=p.PMU.REG_2P5_TOG>
#### pmu.misc0_clr
<link=p.PMU.MISC0_CLR>
#### p.pmu.misc0_tog
<link=p.PMU.MISC0_TOG>
#### p.tempmon
<link=p.TEMPMON>
#### tempmon.tempsense1_tog
<link=p.TEMPMON.TEMPSENSE1_TOG>
#### tempmon.tempsense2
<link=p.TEMPMON.TEMPSENSE2>
#### p.usb_analog
<link=p.USB_ANALOG>
#### p.USB_ANALOG.USB1_VBUS_DETECT_SET
<lang=dft>
 (rw)  [1;33m0x400d81a4[0m (0x400d8000 + 0x01a4)
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
#### p.usb_analog.usb1_vbus_detect_set
<link=p.USB_ANALOG.USB1_VBUS_DETECT_SET>
#### p.usb_analog.usb1_vbus_detect_stat
<link=p.USB_ANALOG.USB1_VBUS_DETECT_STAT>
#### usb_analog.usb1_loopback_set
<link=p.USB_ANALOG.USB1_LOOPBACK_SET>
#### p.USB_ANALOG.USB2_VBUS_DETECT
<lang=dft>
 (rw)  [1;33m0x400d8200[0m (0x400d8000 + 0x0200)
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
#### p.usb_analog.usb2_vbus_detect_clr
<link=p.USB_ANALOG.USB2_VBUS_DETECT_CLR>
#### usb_analog.usb2_vbus_detect_clr
<link=p.USB_ANALOG.USB2_VBUS_DETECT_CLR>
#### p.usb_analog.usb2_vbus_detect_tog
<link=p.USB_ANALOG.USB2_VBUS_DETECT_TOG>
#### p.USB_ANALOG.USB2_VBUS_DETECT_STAT
<lang=dft>
 (ro)  [1;33m0x400d8220[0m (0x400d8000 + 0x0220)
USB VBUS Detect Status Register
 (ro) (01)  [0;32mSESSEND[0m  - [00:00] -  Session End for USB OTG
 (ro) (01)  [0;32mBVALID[0m  - [01:01] -  Indicates VBus is valid for a B-peripheral
 (ro) (01)  [0;32mAVALID[0m  - [02:02] -  Indicates VBus is valid for a A-peripheral
 (ro) (01)  [0;32mVBUS_VALID[0m  - [03:03] -  VBus valid for USB OTG
</lang>
#### USB_ANALOG.USB2_CHRG_DETECT_STAT
<link=p.USB_ANALOG.USB2_CHRG_DETECT_STAT>
#### XTALOSC24M.MISC0
<link=p.XTALOSC24M.MISC0>
#### p.xtalosc24m.misc0_set
<link=p.XTALOSC24M.MISC0_SET>
#### xtalosc24m.osc_config1_tog
<link=p.XTALOSC24M.OSC_CONFIG1_TOG>
#### p.xtalosc24m.osc_config2_set
<link=p.XTALOSC24M.OSC_CONFIG2_SET>
#### p.XTALOSC24M.OSC_CONFIG2_CLR
<lang=dft>
 (rw)  [1;33m0x400d82c8[0m (0x400d8000 + 0x02c8)
XTAL OSC Configuration 2 Register
 (rw) (12)  [0;32mCOUNT_1M_TRG[0m  - [11:00] -  The target count used to tune the 1MHz clock frequency
 (rw) (01)  [0;32mENABLE_1M[0m  - [16:16] -  Enable the 1MHz clock output. 0 - disabled; 1 - enabled.
 (rw) (01)  [0;32mMUX_1M[0m  - [17:17] -  Mux the corrected or uncorrected 1MHz clock to the output
 (rw) (01)  [0;32mCLK_1M_ERR_FL[0m  - [31:31] -  Flag indicates that the count_1m count wasn't reached within 1 32kHz period
</lang>
#### p.USBPHY1.TX_SET
<lang=dft>
 (rw)  [1;33m0x400d9014[0m (0x400d9000 + 0x0014)
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
#### usbphy1.tx_tog
<link=p.USBPHY1.TX_TOG>
#### USBPHY1.RX_SET
<link=p.USBPHY1.RX_SET>
#### p.usbphy1.rx_clr
<link=p.USBPHY1.RX_CLR>
#### p.usbphy1.ctrl
<link=p.USBPHY1.CTRL>
#### usbphy1.debug
<link=p.USBPHY1.DEBUG>
#### p.usbphy1.debug1_tog
<link=p.USBPHY1.DEBUG1_TOG>
#### p.usbphy1.version
<link=p.USBPHY1.VERSION>
#### p.usbphy2
<link=p.USBPHY2>
#### USBPHY2.PWD_SET
<link=p.USBPHY2.PWD_SET>
#### usbphy2.tx_set
<link=p.USBPHY2.TX_SET>
#### p.usbphy2.tx_tog
<link=p.USBPHY2.TX_TOG>
#### USBPHY2.DEBUG
<link=p.USBPHY2.DEBUG>
#### p.USBPHY2.DEBUG1_SET
<lang=dft>
 (rw)  [1;33m0x400da074[0m (0x400da000 + 0x0074)
UTMI Debug Status Register 1
 (rw) (13)  [0;32mRSVD0[0m  - [12:00] -  Reserved. Note: This bit should remain clear.
 (rw) (02)  [0;32mENTAILADJVD[0m  - [14:13] -  Delay increment of the rise of squelch: 00 = Delay is nominal 01 = Delay is +20
 % 10 = Delay is -20% 11 = Delay is -40%
 (ro) (17)  [0;32mRSVD1[0m  - [31:15] -  Reserved.
</lang>
#### p.CSU.CSL0
<lang=dft>
 (rw)  [1;33m0x400dc000[0m (0x400dc000 + 0x0000)
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
#### p.csu.csl0
<link=p.CSU.CSL0>
#### csu.csl5
<link=p.CSU.CSL5>
#### CSU.CSL5
<link=p.CSU.CSL5>
#### csu.csl18
<link=p.CSU.CSL18>
#### CSU.CSL18
<link=p.CSU.CSL18>
#### csu.csl21
<link=p.CSU.CSL21>
#### CSU.CSL21
<link=p.CSU.CSL21>
#### p.CSU.HP0
<lang=dft>
 (rw)  [1;33m0x400dc200[0m (0x400dc000 + 0x0200)
HP0 register
 (rw) (01)  [0;32mHP_DMA[0m  - [02:02] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the eDMA
      0 - HP_DMA_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_DMA_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_DMA[0m  - [03:03] -  Lock bit set by the TZ software for the eDMA
      0 - L_DMA_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_DMA_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHP_LCDIF[0m  - [04:04] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the LCDIF
      0 - HP_LCDIF_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_LCDIF_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_LCDIF[0m  - [05:05] -  Lock bit set by the TZ software for the LCDIF
      0 - L_LCDIF_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_LCDIF_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHP_CSI[0m  - [06:06] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the CSI
      0 - HP_CSI_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_CSI_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_CSI[0m  - [07:07] -  Lock bit set by the TZ software for the CSI
      0 - L_CSI_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_CSI_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHP_PXP[0m  - [08:08] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the PXP
      0 - HP_PXP_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_PXP_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_PXP[0m  - [09:09] -  Lock bit set by the TZ software for the PXP
      0 - L_PXP_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_PXP_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHP_DCP[0m  - [10:10] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the DCP
      0 - HP_DCP_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_DCP_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_DCP[0m  - [11:11] -  Lock bit set by the TZ software for the DCP
      0 - L_DCP_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_DCP_1 :
         Lock-the adjacent (next lower) bit cannot be written by the software.
 (rw) (01)  [0;32mHP_ENET[0m  - [14:14] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the ENET
      0 - HP_ENET_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_ENET_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_ENET[0m  - [15:15] -  Lock bit set by the TZ software for the ENET
      0 - L_ENET_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_ENET_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHP_USDHC1[0m  - [16:16] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the USDHC1
      0 - HP_USDHC1_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_USDHC1_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_USDHC1[0m  - [17:17] -  Lock bit set by the TZ software for the USDHC1
      0 - L_USDHC1_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_USDHC1_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHP_USDHC2[0m  - [18:18] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the USDHC2
      0 - HP_USDHC2_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_USDHC2_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_USDHC2[0m  - [19:19] -  Lock bit set by the TZ software for the USDHC2
      0 - L_USDHC2_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_USDHC2_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHP_TPSMP[0m  - [20:20] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the TPSMP
      0 - HP_TPSMP_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_TPSMP_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_TPSMP[0m  - [21:21] -  Lock bit set by the TZ software for the TPSMP
      0 - L_TPSMP_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_TPSMP_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
 (rw) (01)  [0;32mHP_USB[0m  - [22:22] -  Determines whether the register value of the corresponding HP field is passed a
 s the hprot[1] of the USB
      0 - HP_USB_0 :
         The hprot1 input signal value is routed to the csu_hprot1 output for th
         e corresponding master.
      0x1 - HP_USB_1 :
         The HP register bit is routed to the csu_hprot1 output for the correspo
         nding master.
 (rw) (01)  [0;32mL_USB[0m  - [23:23] -  Lock bit set by the TZ software for the USB
      0 - L_USB_0 :
         No lock-the adjacent (next lower) bit can be written by the software.
      0x1 - L_USB_1 :
         Lock-the adjacent (next lower) bit can't be written by the software.
</lang>
#### tsc.measeure_value
<link=p.TSC.MEASEURE_VALUE>
#### p.TSC.DEBUG_MODE
<lang=dft>
 (rw)  [1;33m0x400e0070[0m (0x400e0000 + 0x0070)
no description available
 (ro) (12)  [0;32mADC_CONV_VALUE[0m  - [11:00] -  ADC Conversion Value
 (ro) (01)  [0;32mADC_COCO[0m  - [12:12] -  ADC COCO Signal
 (rw) (05)  [0;32mEXT_HWTS[0m  - [20:16] -  Hardware Trigger Select Signal
 (rw) (01)  [0;32mTRIGGER[0m  - [24:24] -  Trigger
      0 - TRIGGER_0 :
         No hardware trigger signal
      0x1 - TRIGGER_1 :
         Hardware trigger signal, the signal must last at least 1 ips clock peri
         od
 (rw) (01)  [0;32mADC_COCO_CLEAR[0m  - [25:25] -  ADC Coco Clear
      0 - ADC_COCO_CLEAR_0 :
         No ADC COCO clear
      0x1 - ADC_COCO_CLEAR_1 :
         Set ADC COCO clear
 (rw) (01)  [0;32mADC_COCO_CLEAR_DISABLE[0m  - [26:26] -  ADC COCO Clear Disable
      0 - ADC_COCO_CLEAR_DISABLE_0 :
         Allow TSC hardware generates ADC COCO clear
      0x1 - ADC_COCO_CLEAR_DISABLE_1 :
         Prevent TSC from generate ADC COCO clear signal
 (rw) (01)  [0;32mDEBUG_EN[0m  - [28:28] -  Debug Enable
      0 - DEBUG_EN_0 :
         Enable debug mode
      0x1 - DEBUG_EN_1 :
         Disable debug mode
</lang>
#### TSC.DEBUG_MODE
<link=p.TSC.DEBUG_MODE>
#### p.tsc.debug_mode2
<link=p.TSC.DEBUG_MODE2>
#### DMA0.EARS
<link=p.DMA0.EARS>
#### p.dma0.dchpri7
<link=p.DMA0.DCHPRI7>
#### DMA0.DCHPRI5
<link=p.DMA0.DCHPRI5>
#### p.dma0.dchpri10
<link=p.DMA0.DCHPRI10>
#### dma0.dchpri10
<link=p.DMA0.DCHPRI10>
#### dma0.dchpri9
<link=p.DMA0.DCHPRI9>
#### DMA0.DCHPRI13
<link=p.DMA0.DCHPRI13>
#### p.DMA0.DCHPRI23
<lang=dft>
 (rw)  [1;33m0x400e8114[0m (0x400e8000 + 0x0114)
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
#### p.DMA0.DCHPRI30
<lang=dft>
 (rw)  [1;33m0x400e811d[0m (0x400e8000 + 0x011d)
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
#### DMA0.TCD0_ATTR
<link=p.DMA0.TCD0_ATTR>
#### p.DMA0.TCD0_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9014[0m (0x400e8000 + 0x1014)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.DMA0.TCD0_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9016[0m (0x400e8000 + 0x1016)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd0_dlastsga
<link=p.DMA0.TCD0_DLASTSGA>
#### dma0.tcd1_nbytes_mloffyes
<link=p.DMA0.TCD1_NBYTES_MLOFFYES>
#### p.DMA0.TCD1_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9034[0m (0x400e8000 + 0x1034)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.dma0.tcd1_citer_elinkyes
<link=p.DMA0.TCD1_CITER_ELINKYES>
#### dma0.tcd1_dlastsga
<link=p.DMA0.TCD1_DLASTSGA>
#### p.DMA0.TCD2_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9040[0m (0x400e8000 + 0x1040)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### dma0.tcd2_saddr
<link=p.DMA0.TCD2_SADDR>
#### p.DMA0.TCD2_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9048[0m (0x400e8000 + 0x1048)
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
#### DMA0.TCD2_DLASTSGA
<link=p.DMA0.TCD2_DLASTSGA>
#### p.dma0.tcd2_biter_elinkno
<link=p.DMA0.TCD2_BITER_ELINKNO>
#### p.DMA0.TCD3_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9070[0m (0x400e8000 + 0x1070)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### DMA0.TCD3_DLASTSGA
<link=p.DMA0.TCD3_DLASTSGA>
#### p.DMA0.TCD3_CSR
<lang=dft>
 (rw)  [1;33m0x400e907c[0m (0x400e8000 + 0x107c)
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
#### dma0.tcd3_biter_elinkno
<link=p.DMA0.TCD3_BITER_ELINKNO>
#### dma0.tcd4_nbytes_mlno
<link=p.DMA0.TCD4_NBYTES_MLNO>
#### DMA0.TCD4_CITER_ELINKYES
<link=p.DMA0.TCD4_CITER_ELINKYES>
#### p.DMA0.TCD5_ATTR
<lang=dft>
 (rw)  [1;33m0x400e90a6[0m (0x400e8000 + 0x10a6)
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
#### p.DMA0.TCD5_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e90a8[0m (0x400e8000 + 0x10a8)
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
#### dma0.tcd5_doff
<link=p.DMA0.TCD5_DOFF>
#### p.DMA0.TCD5_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e90b6[0m (0x400e8000 + 0x10b6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD6_DOFF
<link=p.DMA0.TCD6_DOFF>
#### p.DMA0.TCD6_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e90d6[0m (0x400e8000 + 0x10d6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd6_csr
<link=p.DMA0.TCD6_CSR>
#### dma0.tcd7_saddr
<link=p.DMA0.TCD7_SADDR>
#### dma0.tcd7_attr
<link=p.DMA0.TCD7_ATTR>
#### dma0.tcd7_nbytes_mloffno
<link=p.DMA0.TCD7_NBYTES_MLOFFNO>
#### p.DMA0.TCD7_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e90e8[0m (0x400e8000 + 0x10e8)
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
#### DMA0.TCD7_DADDR
<link=p.DMA0.TCD7_DADDR>
#### DMA0.TCD7_DOFF
<link=p.DMA0.TCD7_DOFF>
#### p.dma0.tcd7_citer_elinkno
<link=p.DMA0.TCD7_CITER_ELINKNO>
#### p.dma0.tcd7_citer_elinkyes
<link=p.DMA0.TCD7_CITER_ELINKYES>
#### p.dma0.tcd8_doff
<link=p.DMA0.TCD8_DOFF>
#### dma0.tcd9_saddr
<link=p.DMA0.TCD9_SADDR>
#### dma0.tcd9_attr
<link=p.DMA0.TCD9_ATTR>
#### p.DMA0.TCD9_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9136[0m (0x400e8000 + 0x1136)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD9_CITER_ELINKYES
<link=p.DMA0.TCD9_CITER_ELINKYES>
#### DMA0.TCD9_CSR
<link=p.DMA0.TCD9_CSR>
#### p.DMA0.TCD9_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e913e[0m (0x400e8000 + 0x113e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd10_saddr
<link=p.DMA0.TCD10_SADDR>
#### p.dma0.tcd10_attr
<link=p.DMA0.TCD10_ATTR>
#### p.dma0.tcd10_nbytes_mlno
<link=p.DMA0.TCD10_NBYTES_MLNO>
#### p.DMA0.TCD10_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9148[0m (0x400e8000 + 0x1148)
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
#### p.dma0.tcd10_slast
<link=p.DMA0.TCD10_SLAST>
#### DMA0.TCD10_SLAST
<link=p.DMA0.TCD10_SLAST>
#### p.DMA0.TCD11_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9168[0m (0x400e8000 + 0x1168)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### DMA0.TCD11_NBYTES_MLOFFYES
<link=p.DMA0.TCD11_NBYTES_MLOFFYES>
#### DMA0.TCD11_SLAST
<link=p.DMA0.TCD11_SLAST>
#### p.DMA0.TCD11_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9170[0m (0x400e8000 + 0x1170)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### dma0.tcd11_dlastsga
<link=p.DMA0.TCD11_DLASTSGA>
#### dma0.tcd11_csr
<link=p.DMA0.TCD11_CSR>
#### DMA0.TCD11_BITER_ELINKNO
<link=p.DMA0.TCD11_BITER_ELINKNO>
#### p.DMA0.TCD12_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9196[0m (0x400e8000 + 0x1196)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd12_citer_elinkno
<link=p.DMA0.TCD12_CITER_ELINKNO>
#### DMA0.TCD12_CITER_ELINKYES
<link=p.DMA0.TCD12_CITER_ELINKYES>
#### dma0.tcd13_attr
<link=p.DMA0.TCD13_ATTR>
#### dma0.tcd13_csr
<link=p.DMA0.TCD13_CSR>
#### p.DMA0.TCD14_ATTR
<lang=dft>
 (rw)  [1;33m0x400e91c6[0m (0x400e8000 + 0x11c6)
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
#### p.dma0.tcd15_saddr
<link=p.DMA0.TCD15_SADDR>
#### dma0.tcd15_nbytes_mloffno
<link=p.DMA0.TCD15_NBYTES_MLOFFNO>
#### p.dma0.tcd15_nbytes_mloffyes
<link=p.DMA0.TCD15_NBYTES_MLOFFYES>
#### DMA0.TCD15_DADDR
<link=p.DMA0.TCD15_DADDR>
#### p.dma0.tcd15_doff
<link=p.DMA0.TCD15_DOFF>
#### DMA0.TCD15_CITER_ELINKYES
<link=p.DMA0.TCD15_CITER_ELINKYES>
#### dma0.tcd16_attr
<link=p.DMA0.TCD16_ATTR>
#### dma0.tcd16_nbytes_mloffyes
<link=p.DMA0.TCD16_NBYTES_MLOFFYES>
#### DMA0.TCD16_NBYTES_MLOFFYES
<link=p.DMA0.TCD16_NBYTES_MLOFFYES>
#### p.DMA0.TCD16_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9214[0m (0x400e8000 + 0x1214)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### dma0.tcd16_citer_elinkno
<link=p.DMA0.TCD16_CITER_ELINKNO>
#### p.DMA0.TCD17_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9220[0m (0x400e8000 + 0x1220)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### DMA0.TCD17_NBYTES_MLOFFNO
<link=p.DMA0.TCD17_NBYTES_MLOFFNO>
#### DMA0.TCD17_SLAST
<link=p.DMA0.TCD17_SLAST>
#### p.DMA0.TCD18_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9240[0m (0x400e8000 + 0x1240)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.DMA0.TCD18_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9244[0m (0x400e8000 + 0x1244)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### DMA0.TCD18_DLASTSGA
<link=p.DMA0.TCD18_DLASTSGA>
#### DMA0.TCD20_NBYTES_MLOFFNO
<link=p.DMA0.TCD20_NBYTES_MLOFFNO>
#### p.dma0.tcd20_slast
<link=p.DMA0.TCD20_SLAST>
#### dma0.tcd20_biter_elinkno
<link=p.DMA0.TCD20_BITER_ELINKNO>
#### p.DMA0.TCD21_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e92a8[0m (0x400e8000 + 0x12a8)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.DMA0.TCD21_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e92b6[0m (0x400e8000 + 0x12b6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD22_SOFF
<link=p.DMA0.TCD22_SOFF>
#### DMA0.TCD22_NBYTES_MLOFFNO
<link=p.DMA0.TCD22_NBYTES_MLOFFNO>
#### p.DMA0.TCD22_SLAST
<lang=dft>
 (rw)  [1;33m0x400e92cc[0m (0x400e8000 + 0x12cc)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### DMA0.TCD22_CITER_ELINKYES
<link=p.DMA0.TCD22_CITER_ELINKYES>
#### p.dma0.tcd22_csr
<link=p.DMA0.TCD22_CSR>
#### DMA0.TCD22_CSR
<link=p.DMA0.TCD22_CSR>
#### DMA0.TCD23_SADDR
<link=p.DMA0.TCD23_SADDR>
#### p.DMA0.TCD23_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e92e8[0m (0x400e8000 + 0x12e8)
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
#### p.DMA0.TCD23_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e92f8[0m (0x400e8000 + 0x12f8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### p.dma0.tcd23_dlastsga
<link=p.DMA0.TCD23_DLASTSGA>
#### dma0.tcd23_csr
<link=p.DMA0.TCD23_CSR>
#### p.DMA0.TCD23_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e92fe[0m (0x400e8000 + 0x12fe)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD24_SADDR
<link=p.DMA0.TCD24_SADDR>
#### dma0.tcd24_soff
<link=p.DMA0.TCD24_SOFF>
#### p.DMA0.TCD24_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9308[0m (0x400e8000 + 0x1308)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.dma0.tcd24_nbytes_mlno
<link=p.DMA0.TCD24_NBYTES_MLNO>
#### p.DMA0.TCD24_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9308[0m (0x400e8000 + 0x1308)
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
#### p.DMA0.TCD24_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9314[0m (0x400e8000 + 0x1314)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### dma0.tcd24_doff
<link=p.DMA0.TCD24_DOFF>
#### p.DMA0.TCD24_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e931e[0m (0x400e8000 + 0x131e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD24_BITER_ELINKYES
<link=p.DMA0.TCD24_BITER_ELINKYES>
#### p.DMA0.TCD25_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9324[0m (0x400e8000 + 0x1324)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### DMA0.TCD25_SOFF
<link=p.DMA0.TCD25_SOFF>
#### dma0.tcd25_daddr
<link=p.DMA0.TCD25_DADDR>
#### dma0.tcd25_doff
<link=p.DMA0.TCD25_DOFF>
#### dma0.tcd25_citer_elinkno
<link=p.DMA0.TCD25_CITER_ELINKNO>
#### p.DMA0.TCD26_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9340[0m (0x400e8000 + 0x1340)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.DMA0.TCD26_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9348[0m (0x400e8000 + 0x1348)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.DMA0.TCD26_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9356[0m (0x400e8000 + 0x1356)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd26_csr
<link=p.DMA0.TCD26_CSR>
#### dma0.tcd27_attr
<link=p.DMA0.TCD27_ATTR>
#### p.DMA0.TCD27_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9370[0m (0x400e8000 + 0x1370)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### dma0.tcd27_daddr
<link=p.DMA0.TCD27_DADDR>
#### DMA0.TCD27_DOFF
<link=p.DMA0.TCD27_DOFF>
#### p.dma0.tcd27_citer_elinkyes
<link=p.DMA0.TCD27_CITER_ELINKYES>
#### DMA0.TCD28_NBYTES_MLOFFYES
<link=p.DMA0.TCD28_NBYTES_MLOFFYES>
#### p.DMA0.TCD28_BITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e939e[0m (0x400e8000 + 0x139e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mBITER[0m  - [14:00] -  Starting Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd29_saddr
<link=p.DMA0.TCD29_SADDR>
#### DMA0.TCD29_NBYTES_MLOFFNO
<link=p.DMA0.TCD29_NBYTES_MLOFFNO>
#### p.dma0.tcd29_daddr
<link=p.DMA0.TCD29_DADDR>
#### dma0.tcd29_citer_elinkno
<link=p.DMA0.TCD29_CITER_ELINKNO>
#### dma0.tcd29_citer_elinkyes
<link=p.DMA0.TCD29_CITER_ELINKYES>
#### DMA0.TCD30_NBYTES_MLOFFYES
<link=p.DMA0.TCD30_NBYTES_MLOFFYES>
#### p.DMA0.TCD31_DLASTSGA
<lang=dft>
 (rw)  [1;33m0x400e93f8[0m (0x400e8000 + 0x13f8)
TCD Last Destination Address Adjustment/Scatter Gather Address
 (rw) (32)  [0;32mDLASTSGA[0m  - [31:00] -  DLASTSGA
</lang>
#### DMAMUX.CHCFG[0]
<link=p.DMAMUX.CHCFG[0]>
#### p.DMAMUX.CHCFG[1]
<lang=dft>
 (rw)  [1;33m0x400ec004[0m (0x400ec000 + 0x0004)
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
#### p.dmamux.chcfg[1]
<link=p.DMAMUX.CHCFG[1]>
#### dmamux.chcfg[6]
<link=p.DMAMUX.CHCFG[6]>
#### p.DMAMUX.CHCFG[10]
<lang=dft>
 (rw)  [1;33m0x400ec028[0m (0x400ec000 + 0x0028)
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
#### DMAMUX.CHCFG[13]
<link=p.DMAMUX.CHCFG[13]>
#### p.dmamux.chcfg[19]
<link=p.DMAMUX.CHCFG[19]>
#### dmamux.chcfg[20]
<link=p.DMAMUX.CHCFG[20]>
#### p.dmamux.chcfg[21]
<link=p.DMAMUX.CHCFG[21]>
#### DMAMUX.CHCFG[26]
<link=p.DMAMUX.CHCFG[26]>
#### p.gpc.isr1
<link=p.GPC.ISR1>
#### GPC.ISR1
<link=p.GPC.ISR1>
#### p.gpc.imr5
<link=p.GPC.IMR5>
#### GPC.IMR5
<link=p.GPC.IMR5>
#### p.GPC.ISR5
<lang=dft>
 (ro)  [1;33m0x400f4038[0m (0x400f4000 + 0x0038)
IRQ status resister 5
 (ro) (32)  [0;32mISR4[0m  - [31:00] -  IRQ[159:128] status, read only
</lang>
#### gpc.isr5
<link=p.GPC.ISR5>
#### p.pgc.mega_pdnscr
<link=p.PGC.MEGA_PDNSCR>
#### p.src.sbmr1
<link=p.SRC.SBMR1>
#### src.gpr6
<link=p.SRC.GPR6>
#### p.src.gpr7
<link=p.SRC.GPR7>
#### ccm.cs2cdr
<link=p.CCM.CS2CDR>
#### CCM.CDHIPR
<link=p.CCM.CDHIPR>
#### p.ccm.ccgr0
<link=p.CCM.CCGR0>
#### CCM.CCGR0
<link=p.CCM.CCGR0>
#### p.CCM.CCGR2
<lang=dft>
 (rw)  [1;33m0x400fc070[0m (0x400fc000 + 0x0070)
CCM Clock Gating Register 2
 (rw) (02)  [0;32mCG0[0m  - [01:00] -  ocram_exsc clock (ocram_exsc_clk_enable)
 (rw) (02)  [0;32mCG1[0m  - [03:02] -  csi clock (csi_clk_enable)
 (rw) (02)  [0;32mCG2[0m  - [05:04] -  iomuxc_snvs clock (iomuxc_snvs_clk_enable)
 (rw) (02)  [0;32mCG3[0m  - [07:06] -  lpi2c1 clock (lpi2c1_clk_enable)
 (rw) (02)  [0;32mCG4[0m  - [09:08] -  lpi2c2 clock (lpi2c2_clk_enable)
 (rw) (02)  [0;32mCG5[0m  - [11:10] -  lpi2c3 clock (lpi2c3_clk_enable)
 (rw) (02)  [0;32mCG6[0m  - [13:12] -  OCOTP_CTRL clock (iim_clk_enable)
 (rw) (02)  [0;32mCG7[0m  - [15:14] -  xbar3 clock (xbar3_clk_enable)
 (rw) (02)  [0;32mCG8[0m  - [17:16] -  ipmux1 clock (ipmux1_clk_enable)
 (rw) (02)  [0;32mCG9[0m  - [19:18] -  ipmux2 clock (ipmux2_clk_enable)
 (rw) (02)  [0;32mCG10[0m  - [21:20] -  ipmux3 clock (ipmux3_clk_enable)
 (rw) (02)  [0;32mCG11[0m  - [23:22] -  xbar1 clock (xbar1_clk_enable)
 (rw) (02)  [0;32mCG12[0m  - [25:24] -  xbar2 clock (xbar2_clk_enable)
 (rw) (02)  [0;32mCG13[0m  - [27:26] -  gpio3 clock (gpio3_clk_enable)
 (rw) (02)  [0;32mCG14[0m  - [29:28] -  lcd clocks (lcd_clk_enable)
 (rw) (02)  [0;32mCG15[0m  - [31:30] -  pxp clocks (pxp_clk_enable)
</lang>
#### ccm.ccgr2
<link=p.CCM.CCGR2>
#### ROMC.ROMPATCH6D
<link=p.ROMC.ROMPATCH6D>
#### p.romc.rompatch1d
<link=p.ROMC.ROMPATCH1D>
#### p.ROMC.ROMPATCH0A
<lang=dft>
 (rw)  [1;33m0x40180100[0m (0x40180000 + 0x0100)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### ROMC.ROMPATCH0A
<link=p.ROMC.ROMPATCH0A>
#### p.ROMC.ROMPATCH10A
<lang=dft>
 (rw)  [1;33m0x40180128[0m (0x40180000 + 0x0128)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### ROMC.ROMPATCH12A
<link=p.ROMC.ROMPATCH12A>
#### p.romc.rompatch15a
<link=p.ROMC.ROMPATCH15A>
#### romc.rompatch15a
<link=p.ROMC.ROMPATCH15A>
#### LPUART1.BAUD
<link=p.LPUART1.BAUD>
#### p.lpuart1.data
<link=p.LPUART1.DATA>
#### LPUART1.DATA
<link=p.LPUART1.DATA>
#### lpuart1.match
<link=p.LPUART1.MATCH>
#### p.lpuart3.param
<link=p.LPUART3.PARAM>
#### p.lpuart3.stat
<link=p.LPUART3.STAT>
#### LPUART3.STAT
<link=p.LPUART3.STAT>
#### lpuart3.fifo
<link=p.LPUART3.FIFO>
#### p.lpuart4.verid
<link=p.LPUART4.VERID>
#### lpuart4.baud
<link=p.LPUART4.BAUD>
#### p.lpuart4.stat
<link=p.LPUART4.STAT>
#### lpuart4.match
<link=p.LPUART4.MATCH>
#### p.lpuart5
<link=p.LPUART5>
#### p.lpuart5.global
<link=p.LPUART5.GLOBAL>
#### p.LPUART6
<lang=dft>
base: 0x40198000
BAUD            CTRL            DATA            FIFO            
GLOBAL          MATCH           MODIR           PARAM           
PINCFG          STAT            VERID           WATER           
输入 p.LPUART6.{reg_name} 以查看寄存器的详细信息
type p.LPUART6.{reg_name} to check details of registers
</lang>
#### lpuart6.global
<link=p.LPUART6.GLOBAL>
#### p.LPUART7.PARAM
<lang=dft>
 (ro)  [1;33m0x4019c004[0m (0x4019c000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
</lang>
#### LPUART7.MODIR
<link=p.LPUART7.MODIR>
#### p.FLEXIO1.PIN
<lang=dft>
 (ro)  [1;33m0x401ac00c[0m (0x401ac000 + 0x000c)
Pin State Register
 (ro) (16)  [0;32mPDI[0m  - [15:00] -  Pin Data Input
</lang>
#### flexio1.pin
<link=p.FLEXIO1.PIN>
#### flexio1.shifteien
<link=p.FLEXIO1.SHIFTEIEN>
#### p.flexio1.shiftctl[3]
<link=p.FLEXIO1.SHIFTCTL[3]>
#### flexio1.shiftcfg[2]
<link=p.FLEXIO1.SHIFTCFG[2]>
#### FLEXIO1.SHIFTBUFBYS[3]
<link=p.FLEXIO1.SHIFTBUFBYS[3]>
#### p.FLEXIO1.SHIFTBUFBBS[2]
<lang=dft>
 (rw)  [1;33m0x401ac388[0m (0x401ac000 + 0x0388)
Shifter Buffer N Bit Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio1.shiftbufbbs[3]
<link=p.FLEXIO1.SHIFTBUFBBS[3]>
#### flexio1.timcfg[3]
<link=p.FLEXIO1.TIMCFG[3]>
#### FLEXIO1.TIMCFG[3]
<link=p.FLEXIO1.TIMCFG[3]>
#### flexio1.timcmp[2]
<link=p.FLEXIO1.TIMCMP[2]>
#### p.FLEXIO2
<lang=dft>
base: 0x401b0000
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
输入 p.FLEXIO2.{reg_name} 以查看寄存器的详细信息
type p.FLEXIO2.{reg_name} to check details of registers
</lang>
#### flexio2.param
<link=p.FLEXIO2.PARAM>
#### FLEXIO2.SHIFTERR
<link=p.FLEXIO2.SHIFTERR>
#### p.FLEXIO2.SHIFTSIEN
<lang=dft>
 (rw)  [1;33m0x401b0020[0m (0x401b0000 + 0x0020)
Shifter Status Interrupt Enable
 (rw) (04)  [0;32mSSIE[0m  - [03:00] -  Shifter Status Interrupt Enable
</lang>
#### p.FLEXIO2.SHIFTEIEN
<lang=dft>
 (rw)  [1;33m0x401b0024[0m (0x401b0000 + 0x0024)
Shifter Error Interrupt Enable
 (rw) (04)  [0;32mSEIE[0m  - [03:00] -  Shifter Error Interrupt Enable
</lang>
#### p.FLEXIO2.SHIFTSDEN
<lang=dft>
 (rw)  [1;33m0x401b0030[0m (0x401b0000 + 0x0030)
Shifter Status DMA Enable
 (rw) (04)  [0;32mSSDE[0m  - [03:00] -  Shifter Status DMA Enable
</lang>
#### p.flexio2.shiftctl[0]
<link=p.FLEXIO2.SHIFTCTL[0]>
#### flexio2.shiftcfg[1]
<link=p.FLEXIO2.SHIFTCFG[1]>
#### p.FLEXIO2.SHIFTBUF[0]
<lang=dft>
 (rw)  [1;33m0x401b0200[0m (0x401b0000 + 0x0200)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio2.shiftbuf[0]
<link=p.FLEXIO2.SHIFTBUF[0]>
#### flexio2.shiftbufbis[1]
<link=p.FLEXIO2.SHIFTBUFBIS[1]>
#### p.FLEXIO2.TIMCFG[3]
<lang=dft>
 (rw)  [1;33m0x401b048c[0m (0x401b0000 + 0x048c)
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
#### p.flexio2.timcmp[2]
<link=p.FLEXIO2.TIMCMP[2]>
#### p.FLEXIO2.SHIFTBUFNBS[0]
<lang=dft>
 (rw)  [1;33m0x401b0680[0m (0x401b0000 + 0x0680)
Shifter Buffer N Nibble Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio2.shiftbufnbs[1]
<link=p.FLEXIO2.SHIFTBUFNBS[1]>
#### p.FLEXIO2.SHIFTBUFNIS[0]
<lang=dft>
 (rw)  [1;33m0x401b0780[0m (0x401b0000 + 0x0780)
Shifter Buffer N Nibble Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNIS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO2.SHIFTBUFNIS[0]
<link=p.FLEXIO2.SHIFTBUFNIS[0]>
#### p.flexio3.shiftsden
<link=p.FLEXIO3.SHIFTSDEN>
#### FLEXIO3.SHIFTCTL[2]
<link=p.FLEXIO3.SHIFTCTL[2]>
#### p.flexio3.shiftcfg[0]
<link=p.FLEXIO3.SHIFTCFG[0]>
#### p.FLEXIO3.SHIFTCFG[1]
<lang=dft>
 (rw)  [1;33m0x42020104[0m (0x42020000 + 0x0104)
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
#### flexio3.shiftcfg[3]
<link=p.FLEXIO3.SHIFTCFG[3]>
#### p.FLEXIO3.SHIFTBUFBIS[2]
<lang=dft>
 (rw)  [1;33m0x42020288[0m (0x42020000 + 0x0288)
Shifter Buffer N Bit Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBIS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO3.SHIFTBUFBIS[2]
<link=p.FLEXIO3.SHIFTBUFBIS[2]>
#### flexio3.shiftbufbys[0]
<link=p.FLEXIO3.SHIFTBUFBYS[0]>
#### p.flexio3.timctl[1]
<link=p.FLEXIO3.TIMCTL[1]>
#### flexio3.timctl[3]
<link=p.FLEXIO3.TIMCTL[3]>
#### FLEXIO3.TIMCMP[0]
<link=p.FLEXIO3.TIMCMP[0]>
#### p.flexio3.shiftbufnis[0]
<link=p.FLEXIO3.SHIFTBUFNIS[0]>
#### p.FLEXIO3.SHIFTBUFNIS[3]
<lang=dft>
 (rw)  [1;33m0x4202078c[0m (0x42020000 + 0x078c)
Shifter Buffer N Nibble Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNIS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.shiftbufnis[3]
<link=p.FLEXIO3.SHIFTBUFNIS[3]>
#### gpio1.dr
<link=p.GPIO1.DR>
#### p.gpio1.gdir
<link=p.GPIO1.GDIR>
#### p.GPIO5
<lang=dft>
base: 0x400c0000
DR              DR_CLEAR        DR_SET          DR_TOGGLE       
EDGE_SEL        GDIR            ICR1            ICR2            
IMR             ISR             PSR             
输入 p.GPIO5.{reg_name} 以查看寄存器的详细信息
type p.GPIO5.{reg_name} to check details of registers
</lang>
#### p.GPIO5.DR
<lang=dft>
 (rw)  [1;33m0x400c0000[0m (0x400c0000 + 0x0000)
GPIO data register
 (rw) (32)  [0;32mDR[0m  - [31:00] -  DR
</lang>
#### GPIO5.PSR
<link=p.GPIO5.PSR>
#### gpio5.icr2
<link=p.GPIO5.ICR2>
#### p.GPIO5.DR_CLEAR
<lang=dft>
 (wo)  [1;33m0x400c0088[0m (0x400c0000 + 0x0088)
GPIO data register CLEAR
 (wo) (32)  [0;32mDR_CLEAR[0m  - [31:00] -  DR_CLEAR
</lang>
#### gpio2.isr
<link=p.GPIO2.ISR>
#### gpio3.gdir
<link=p.GPIO3.GDIR>
#### GPIO3.GDIR
<link=p.GPIO3.GDIR>
#### p.gpio3.icr2
<link=p.GPIO3.ICR2>
#### GPIO3.ICR2
<link=p.GPIO3.ICR2>
#### p.GPIO3.DR_SET
<lang=dft>
 (wo)  [1;33m0x401c0084[0m (0x401c0000 + 0x0084)
GPIO data register SET
 (wo) (32)  [0;32mDR_SET[0m  - [31:00] -  DR_SET
</lang>
#### p.gpio6.icr1
<link=p.GPIO6.ICR1>
#### GPIO6.ICR2
<link=p.GPIO6.ICR2>
#### GPIO7.ISR
<link=p.GPIO7.ISR>
#### gpio7.edge_sel
<link=p.GPIO7.EDGE_SEL>
#### p.gpio7.dr_toggle
<link=p.GPIO7.DR_TOGGLE>
#### p.gpio8
<link=p.GPIO8>
#### gpio8.isr
<link=p.GPIO8.ISR>
#### gpio8.edge_sel
<link=p.GPIO8.EDGE_SEL>
#### p.gpio9.icr1
<link=p.GPIO9.ICR1>
#### gpio9.icr1
<link=p.GPIO9.ICR1>
#### gpio9.imr
<link=p.GPIO9.IMR>
#### CAN1.MCR
<link=p.CAN1.MCR>
#### p.CAN1.TIMER
<lang=dft>
 (rw)  [1;33m0x401d0008[0m (0x401d0000 + 0x0008)
Free Running Timer Register
 (rw) (16)  [0;32mTIMER[0m  - [15:00] -  TIMER
</lang>
#### CAN1.RXMGMASK
<link=p.CAN1.RXMGMASK>
#### can1.esr1
<link=p.CAN1.ESR1>
#### CAN1.IFLAG2
<link=p.CAN1.IFLAG2>
#### p.CAN1.RXFGMASK
<lang=dft>
 (rw)  [1;33m0x401d0048[0m (0x401d0000 + 0x0048)
Rx FIFO Global Mask Register
 (rw) (32)  [0;32mFGM[0m  - [31:00] -  These bits mask the ID Filter Table elements bits in a perfect alignment
      0 - FGM_0 :
         The corresponding bit in the filter is "don't care"
      0x1 - FGM_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.CAN1.RXFIR
<lang=dft>
 (ro)  [1;33m0x401d004c[0m (0x401d0000 + 0x004c)
Rx FIFO Information Register
 (ro) (09)  [0;32mIDHIT[0m  - [08:00] -  This 9-bit field indicates which Identifier Acceptance Filter (see Rx FIFO Stru
 cture) was hit by the received message that is in the output of the Rx FIFO
</lang>
#### p.can1.rxfir
<link=p.CAN1.RXFIR>
#### p.can1.dbg1
<link=p.CAN1.DBG1>
#### can1.rximr8
<link=p.CAN1.RXIMR8>
#### CAN1.RXIMR11
<link=p.CAN1.RXIMR11>
#### can1.rximr16
<link=p.CAN1.RXIMR16>
#### p.can1.rximr19
<link=p.CAN1.RXIMR19>
#### p.CAN1.RXIMR20
<lang=dft>
 (rw)  [1;33m0x401d08d0[0m (0x401d0000 + 0x08d0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR28
<link=p.CAN1.RXIMR28>
#### can1.rximr30
<link=p.CAN1.RXIMR30>
#### can1.rximr41
<link=p.CAN1.RXIMR41>
#### CAN1.RXIMR42
<link=p.CAN1.RXIMR42>
#### p.CAN1.RXIMR51
<lang=dft>
 (rw)  [1;33m0x401d094c[0m (0x401d0000 + 0x094c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr55
<link=p.CAN1.RXIMR55>
#### p.can1.rximr60
<link=p.CAN1.RXIMR60>
#### CAN2.ECR
<link=p.CAN2.ECR>
#### p.CAN2.IMASK1
<lang=dft>
 (rw)  [1;33m0x401d4028[0m (0x401d4000 + 0x0028)
Interrupt Masks 1 Register
 (rw) (32)  [0;32mBUFLM[0m  - [31:00] -  Each bit enables or disables the respective FLEXCAN Message Buffer (MB0 to MB31
 ) Interrupt
      0 - BUFLM_0 :
         The corresponding buffer Interrupt is disabled
      0x1 - BUFLM_1 :
         The corresponding buffer Interrupt is enabled
</lang>
#### p.can2.rxfgmask
<link=p.CAN2.RXFGMASK>
#### CAN2.DBG2
<link=p.CAN2.DBG2>
#### can2.rximr4
<link=p.CAN2.RXIMR4>
#### can2.rximr15
<link=p.CAN2.RXIMR15>
#### p.can2.rximr23
<link=p.CAN2.RXIMR23>
#### can2.rximr24
<link=p.CAN2.RXIMR24>
#### p.CAN2.RXIMR38
<lang=dft>
 (rw)  [1;33m0x401d4918[0m (0x401d4000 + 0x0918)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr41
<link=p.CAN2.RXIMR41>
#### p.CAN2.RXIMR45
<lang=dft>
 (rw)  [1;33m0x401d4934[0m (0x401d4000 + 0x0934)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR45
<link=p.CAN2.RXIMR45>
#### p.can2.rximr56
<link=p.CAN2.RXIMR56>
#### CAN2.RXIMR56
<link=p.CAN2.RXIMR56>
#### can2.rximr58
<link=p.CAN2.RXIMR58>
#### p.CAN2.RXIMR63
<lang=dft>
 (rw)  [1;33m0x401d497c[0m (0x401d4000 + 0x097c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR63
<link=p.CAN2.RXIMR63>
#### p.CAN3
<lang=dft>
base: 0x401d8000
CBT             CRCR            CS0             CS1             
CS10            CS11            CS12            CS13            
CS14            CS15            CS16            CS17            
CS18            CS19            CS2             CS20            
CS21            CS22            CS23            CS24            
CS25            CS26            CS27            CS28            
CS29            CS3             CS30            CS31            
CS32            CS33            CS34            CS35            
CS36            CS37            CS38            CS39            
CS4             CS40            CS41            CS42            
CS43            CS44            CS45            CS46            
CS47            CS48            CS49            CS5             
CS50            CS51            CS52            CS53            
CS54            CS55            CS56            CS57            
CS58            CS59            CS6             CS60            
CS61            CS62            CS63            CS7             
CS8             CS9             CTRL1           CTRL2           
ECR             EDCBT           ENCBT           EPRS            
ERFCR           ERFFEL[0]       ERFFEL[100]     ERFFEL[101]     
ERFFEL[102]     ERFFEL[103]     ERFFEL[104]     ERFFEL[105]     
ERFFEL[106]     ERFFEL[107]     ERFFEL[108]     ERFFEL[109]     
ERFFEL[10]      ERFFEL[110]     ERFFEL[111]     ERFFEL[112]     
ERFFEL[113]     ERFFEL[114]     ERFFEL[115]     ERFFEL[116]     
ERFFEL[117]     ERFFEL[118]     ERFFEL[119]     ERFFEL[11]      
ERFFEL[120]     ERFFEL[121]     ERFFEL[122]     ERFFEL[123]     
ERFFEL[124]     ERFFEL[125]     ERFFEL[126]     ERFFEL[127]     
ERFFEL[12]      ERFFEL[13]      ERFFEL[14]      ERFFEL[15]      
ERFFEL[16]      ERFFEL[17]      ERFFEL[18]      ERFFEL[19]      
ERFFEL[1]       ERFFEL[20]      ERFFEL[21]      ERFFEL[22]      
ERFFEL[23]      ERFFEL[24]      ERFFEL[25]      ERFFEL[26]      
ERFFEL[27]      ERFFEL[28]      ERFFEL[29]      ERFFEL[2]       
ERFFEL[30]      ERFFEL[31]      ERFFEL[32]      ERFFEL[33]      
ERFFEL[34]      ERFFEL[35]      ERFFEL[36]      ERFFEL[37]      
ERFFEL[38]      ERFFEL[39]      ERFFEL[3]       ERFFEL[40]      
ERFFEL[41]      ERFFEL[42]      ERFFEL[43]      ERFFEL[44]      
ERFFEL[45]      ERFFEL[46]      ERFFEL[47]      ERFFEL[48]      
ERFFEL[49]      ERFFEL[4]       ERFFEL[50]      ERFFEL[51]      
ERFFEL[52]      ERFFEL[53]      ERFFEL[54]      ERFFEL[55]      
ERFFEL[56]      ERFFEL[57]      ERFFEL[58]      ERFFEL[59]      
ERFFEL[5]       ERFFEL[60]      ERFFEL[61]      ERFFEL[62]      
ERFFEL[63]      ERFFEL[64]      ERFFEL[65]      ERFFEL[66]      
ERFFEL[67]      ERFFEL[68]      ERFFEL[69]      ERFFEL[6]       
ERFFEL[70]      ERFFEL[71]      ERFFEL[72]      ERFFEL[73]      
ERFFEL[74]      ERFFEL[75]      ERFFEL[76]      ERFFEL[77]      
ERFFEL[78]      ERFFEL[79]      ERFFEL[7]       ERFFEL[80]      
ERFFEL[81]      ERFFEL[82]      ERFFEL[83]      ERFFEL[84]      
ERFFEL[85]      ERFFEL[86]      ERFFEL[87]      ERFFEL[88]      
ERFFEL[89]      ERFFEL[8]       ERFFEL[90]      ERFFEL[91]      
ERFFEL[92]      ERFFEL[93]      ERFFEL[94]      ERFFEL[95]      
ERFFEL[96]      ERFFEL[97]      ERFFEL[98]      ERFFEL[99]      
ERFFEL[9]       ERFIER          ERFSR           ESR1            
ESR2            ETDC            FDCBT           FDCRC           
FDCTRL          HR_TIME_STAMP[0]  HR_TIME_STAMP[10]  HR_TIME_STAMP[11]  
HR_TIME_STAMP[12]  HR_TIME_STAMP[13]  HR_TIME_STAMP[14]  HR_TIME_STAMP[15]  
HR_TIME_STAMP[16]  HR_TIME_STAMP[17]  HR_TIME_STAMP[18]  HR_TIME_STAMP[19]  
HR_TIME_STAMP[1]  HR_TIME_STAMP[20]  HR_TIME_STAMP[21]  HR_TIME_STAMP[22]  
HR_TIME_STAMP[23]  HR_TIME_STAMP[24]  HR_TIME_STAMP[25]  HR_TIME_STAMP[26]  
HR_TIME_STAMP[27]  HR_TIME_STAMP[28]  HR_TIME_STAMP[29]  HR_TIME_STAMP[2]  
HR_TIME_STAMP[30]  HR_TIME_STAMP[31]  HR_TIME_STAMP[32]  HR_TIME_STAMP[33]  
HR_TIME_STAMP[34]  HR_TIME_STAMP[35]  HR_TIME_STAMP[36]  HR_TIME_STAMP[37]  
HR_TIME_STAMP[38]  HR_TIME_STAMP[39]  HR_TIME_STAMP[3]  HR_TIME_STAMP[40]  
HR_TIME_STAMP[41]  HR_TIME_STAMP[42]  HR_TIME_STAMP[43]  HR_TIME_STAMP[44]  
HR_TIME_STAMP[45]  HR_TIME_STAMP[46]  HR_TIME_STAMP[47]  HR_TIME_STAMP[48]  
HR_TIME_STAMP[49]  HR_TIME_STAMP[4]  HR_TIME_STAMP[50]  HR_TIME_STAMP[51]  
HR_TIME_STAMP[52]  HR_TIME_STAMP[53]  HR_TIME_STAMP[54]  HR_TIME_STAMP[55]  
HR_TIME_STAMP[56]  HR_TIME_STAMP[57]  HR_TIME_STAMP[58]  HR_TIME_STAMP[59]  
HR_TIME_STAMP[5]  HR_TIME_STAMP[60]  HR_TIME_STAMP[61]  HR_TIME_STAMP[62]  
HR_TIME_STAMP[63]  HR_TIME_STAMP[6]  HR_TIME_STAMP[7]  HR_TIME_STAMP[8]  
HR_TIME_STAMP[9]  ID0             ID1             ID10            
ID11            ID12            ID13            ID14            
ID15            ID16            ID17            ID18            
ID19            ID2             ID20            ID21            
ID22            ID23            ID24            ID25            
ID26            ID27            ID28            ID29            
ID3             ID30            ID31            ID32            
ID33            ID34            ID35            ID36            
ID37            ID38            ID39            ID4             
ID40            ID41            ID42            ID43            
ID44            ID45            ID46            ID47            
ID48            ID49            ID5             ID50            
ID51            ID52            ID53            ID54            
ID55            ID56            ID57            ID58            
ID59            ID6             ID60            ID61            
ID62            ID63            ID7             ID8             
ID9             IFLAG1          IFLAG2          IMASK1          
IMASK2          MB0_16B_CS      MB0_16B_ID      MB0_16B_WORD0   
MB0_16B_WORD1   MB0_16B_WORD2   MB0_16B_WORD3   MB0_32B_CS      
MB0_32B_ID      MB0_32B_WORD0   MB0_32B_WORD1   MB0_32B_WORD2   
MB0_32B_WORD3   MB0_32B_WORD4   MB0_32B_WORD5   MB0_32B_WORD6   
MB0_32B_WORD7   MB0_64B_CS      MB0_64B_ID      MB0_64B_WORD0   
MB0_64B_WORD1   MB0_64B_WORD10  MB0_64B_WORD11  MB0_64B_WORD12  
MB0_64B_WORD13  MB0_64B_WORD14  MB0_64B_WORD15  MB0_64B_WORD2   
MB0_64B_WORD3   MB0_64B_WORD4   MB0_64B_WORD5   MB0_64B_WORD6   
MB0_64B_WORD7   MB0_64B_WORD8   MB0_64B_WORD9   MB0_8B_CS       
MB0_8B_ID       MB0_8B_WORD0    MB0_8B_WORD1    MB10_16B_CS     
MB10_16B_ID     MB10_16B_WORD0  MB10_16B_WORD1  MB10_16B_WORD2  
MB10_16B_WORD3  MB10_32B_CS     MB10_32B_ID     MB10_32B_WORD0  
MB10_32B_WORD1  MB10_32B_WORD2  MB10_32B_WORD3  MB10_32B_WORD4  
MB10_32B_WORD5  MB10_32B_WORD6  MB10_32B_WORD7  MB10_64B_CS     
MB10_64B_ID     MB10_64B_WORD0  MB10_64B_WORD1  MB10_64B_WORD10 
MB10_64B_WORD11 MB10_64B_WORD12 MB10_64B_WORD13 MB10_64B_WORD14 
MB10_64B_WORD15 MB10_64B_WORD2  MB10_64B_WORD3  MB10_64B_WORD4  
MB10_64B_WORD5  MB10_64B_WORD6  MB10_64B_WORD7  MB10_64B_WORD8  
MB10_64B_WORD9  MB10_8B_CS      MB10_8B_ID      MB10_8B_WORD0   
MB10_8B_WORD1   MB11_16B_CS     MB11_16B_ID     MB11_16B_WORD0  
MB11_16B_WORD1  MB11_16B_WORD2  MB11_16B_WORD3  MB11_32B_CS     
MB11_32B_ID     MB11_32B_WORD0  MB11_32B_WORD1  MB11_32B_WORD2  
MB11_32B_WORD3  MB11_32B_WORD4  MB11_32B_WORD5  MB11_32B_WORD6  
MB11_32B_WORD7  MB11_64B_CS     MB11_64B_ID     MB11_64B_WORD0  
MB11_64B_WORD1  MB11_64B_WORD10 MB11_64B_WORD11 MB11_64B_WORD12 
MB11_64B_WORD13 MB11_64B_WORD14 MB11_64B_WORD15 MB11_64B_WORD2  
MB11_64B_WORD3  MB11_64B_WORD4  MB11_64B_WORD5  MB11_64B_WORD6  
MB11_64B_WORD7  MB11_64B_WORD8  MB11_64B_WORD9  MB11_8B_CS      
MB11_8B_ID      MB11_8B_WORD0   MB11_8B_WORD1   MB12_16B_CS     
MB12_16B_ID     MB12_16B_WORD0  MB12_16B_WORD1  MB12_16B_WORD2  
MB12_16B_WORD3  MB12_32B_CS     MB12_32B_ID     MB12_32B_WORD0  
MB12_32B_WORD1  MB12_32B_WORD2  MB12_32B_WORD3  MB12_32B_WORD4  
MB12_32B_WORD5  MB12_32B_WORD6  MB12_32B_WORD7  MB12_64B_CS     
MB12_64B_ID     MB12_64B_WORD0  MB12_64B_WORD1  MB12_64B_WORD10 
MB12_64B_WORD11 MB12_64B_WORD12 MB12_64B_WORD13 MB12_64B_WORD14 
MB12_64B_WORD15 MB12_64B_WORD2  MB12_64B_WORD3  MB12_64B_WORD4  
MB12_64B_WORD5  MB12_64B_WORD6  MB12_64B_WORD7  MB12_64B_WORD8  
MB12_64B_WORD9  MB12_8B_CS      MB12_8B_ID      MB12_8B_WORD0   
MB12_8B_WORD1   MB13_16B_CS     MB13_16B_ID     MB13_16B_WORD0  
MB13_16B_WORD1  MB13_16B_WORD2  MB13_16B_WORD3  MB13_32B_CS     
MB13_32B_ID     MB13_32B_WORD0  MB13_32B_WORD1  MB13_32B_WORD2  
MB13_32B_WORD3  MB13_32B_WORD4  MB13_32B_WORD5  MB13_32B_WORD6  
MB13_32B_WORD7  MB13_64B_CS     MB13_64B_ID     MB13_64B_WORD0  
MB13_64B_WORD1  MB13_64B_WORD10 MB13_64B_WORD11 MB13_64B_WORD12 
MB13_64B_WORD13 MB13_64B_WORD14 MB13_64B_WORD15 MB13_64B_WORD2  
MB13_64B_WORD3  MB13_64B_WORD4  MB13_64B_WORD5  MB13_64B_WORD6  
MB13_64B_WORD7  MB13_64B_WORD8  MB13_64B_WORD9  MB13_8B_CS      
MB13_8B_ID      MB13_8B_WORD0   MB13_8B_WORD1   MB14_16B_CS     
MB14_16B_ID     MB14_16B_WORD0  MB14_16B_WORD1  MB14_16B_WORD2  
MB14_16B_WORD3  MB14_32B_CS     MB14_32B_ID     MB14_32B_WORD0  
MB14_32B_WORD1  MB14_32B_WORD2  MB14_32B_WORD3  MB14_32B_WORD4  
MB14_32B_WORD5  MB14_32B_WORD6  MB14_32B_WORD7  MB14_8B_CS      
MB14_8B_ID      MB14_8B_WORD0   MB14_8B_WORD1   MB15_16B_CS     
MB15_16B_ID     MB15_16B_WORD0  MB15_16B_WORD1  MB15_16B_WORD2  
MB15_16B_WORD3  MB15_32B_CS     MB15_32B_ID     MB15_32B_WORD0  
MB15_32B_WORD1  MB15_32B_WORD2  MB15_32B_WORD3  MB15_32B_WORD4  
MB15_32B_WORD5  MB15_32B_WORD6  MB15_32B_WORD7  MB15_8B_CS      
MB15_8B_ID      MB15_8B_WORD0   MB15_8B_WORD1   MB16_16B_CS     
MB16_16B_ID     MB16_16B_WORD0  MB16_16B_WORD1  MB16_16B_WORD2  
MB16_16B_WORD3  MB16_32B_CS     MB16_32B_ID     MB16_32B_WORD0  
MB16_32B_WORD1  MB16_32B_WORD2  MB16_32B_WORD3  MB16_32B_WORD4  
MB16_32B_WORD5  MB16_32B_WORD6  MB16_32B_WORD7  MB16_8B_CS      
MB16_8B_ID      MB16_8B_WORD0   MB16_8B_WORD1   MB17_16B_CS     
MB17_16B_ID     MB17_16B_WORD0  MB17_16B_WORD1  MB17_16B_WORD2  
MB17_16B_WORD3  MB17_32B_CS     MB17_32B_ID     MB17_32B_WORD0  
MB17_32B_WORD1  MB17_32B_WORD2  MB17_32B_WORD3  MB17_32B_WORD4  
MB17_32B_WORD5  MB17_32B_WORD6  MB17_32B_WORD7  MB17_8B_CS      
MB17_8B_ID      MB17_8B_WORD0   MB17_8B_WORD1   MB18_16B_CS     
MB18_16B_ID     MB18_16B_WORD0  MB18_16B_WORD1  MB18_16B_WORD2  
MB18_16B_WORD3  MB18_32B_CS     MB18_32B_ID     MB18_32B_WORD0  
MB18_32B_WORD1  MB18_32B_WORD2  MB18_32B_WORD3  MB18_32B_WORD4  
MB18_32B_WORD5  MB18_32B_WORD6  MB18_32B_WORD7  MB18_8B_CS      
MB18_8B_ID      MB18_8B_WORD0   MB18_8B_WORD1   MB19_16B_CS     
MB19_16B_ID     MB19_16B_WORD0  MB19_16B_WORD1  MB19_16B_WORD2  
MB19_16B_WORD3  MB19_32B_CS     MB19_32B_ID     MB19_32B_WORD0  
MB19_32B_WORD1  MB19_32B_WORD2  MB19_32B_WORD3  MB19_32B_WORD4  
MB19_32B_WORD5  MB19_32B_WORD6  MB19_32B_WORD7  MB19_8B_CS      
MB19_8B_ID      MB19_8B_WORD0   MB19_8B_WORD1   MB1_16B_CS      
MB1_16B_ID      MB1_16B_WORD0   MB1_16B_WORD1   MB1_16B_WORD2   
MB1_16B_WORD3   MB1_32B_CS      MB1_32B_ID      MB1_32B_WORD0   
MB1_32B_WORD1   MB1_32B_WORD2   MB1_32B_WORD3   MB1_32B_WORD4   
MB1_32B_WORD5   MB1_32B_WORD6   MB1_32B_WORD7   MB1_64B_CS      
MB1_64B_ID      MB1_64B_WORD0   MB1_64B_WORD1   MB1_64B_WORD10  
MB1_64B_WORD11  MB1_64B_WORD12  MB1_64B_WORD13  MB1_64B_WORD14  
MB1_64B_WORD15  MB1_64B_WORD2   MB1_64B_WORD3   MB1_64B_WORD4   
MB1_64B_WORD5   MB1_64B_WORD6   MB1_64B_WORD7   MB1_64B_WORD8   
MB1_64B_WORD9   MB1_8B_CS       MB1_8B_ID       MB1_8B_WORD0    
MB1_8B_WORD1    MB20_16B_CS     MB20_16B_ID     MB20_16B_WORD0  
MB20_16B_WORD1  MB20_16B_WORD2  MB20_16B_WORD3  MB20_32B_CS     
MB20_32B_ID     MB20_32B_WORD0  MB20_32B_WORD1  MB20_32B_WORD2  
MB20_32B_WORD3  MB20_32B_WORD4  MB20_32B_WORD5  MB20_32B_WORD6  
MB20_32B_WORD7  MB20_8B_CS      MB20_8B_ID      MB20_8B_WORD0   
MB20_8B_WORD1   MB21_16B_CS     MB21_16B_ID     MB21_16B_WORD0  
MB21_16B_WORD1  MB21_16B_WORD2  MB21_16B_WORD3  MB21_32B_CS     
MB21_32B_ID     MB21_32B_WORD0  MB21_32B_WORD1  MB21_32B_WORD2  
MB21_32B_WORD3  MB21_32B_WORD4  MB21_32B_WORD5  MB21_32B_WORD6  
MB21_32B_WORD7  MB21_8B_CS      MB21_8B_ID      MB21_8B_WORD0   
MB21_8B_WORD1   MB22_16B_CS     MB22_16B_ID     MB22_16B_WORD0  
MB22_16B_WORD1  MB22_16B_WORD2  MB22_16B_WORD3  MB22_32B_CS     
MB22_32B_ID     MB22_32B_WORD0  MB22_32B_WORD1  MB22_32B_WORD2  
MB22_32B_WORD3  MB22_32B_WORD4  MB22_32B_WORD5  MB22_32B_WORD6  
MB22_32B_WORD7  MB22_8B_CS      MB22_8B_ID      MB22_8B_WORD0   
MB22_8B_WORD1   MB23_16B_CS     MB23_16B_ID     MB23_16B_WORD0  
MB23_16B_WORD1  MB23_16B_WORD2  MB23_16B_WORD3  MB23_32B_CS     
MB23_32B_ID     MB23_32B_WORD0  MB23_32B_WORD1  MB23_32B_WORD2  
MB23_32B_WORD3  MB23_32B_WORD4  MB23_32B_WORD5  MB23_32B_WORD6  
MB23_32B_WORD7  MB23_8B_CS      MB23_8B_ID      MB23_8B_WORD0   
MB23_8B_WORD1   MB24_16B_CS     MB24_16B_ID     MB24_16B_WORD0  
MB24_16B_WORD1  MB24_16B_WORD2  MB24_16B_WORD3  MB24_8B_CS      
MB24_8B_ID      MB24_8B_WORD0   MB24_8B_WORD1   MB25_16B_CS     
MB25_16B_ID     MB25_16B_WORD0  MB25_16B_WORD1  MB25_16B_WORD2  
MB25_16B_WORD3  MB25_8B_CS      MB25_8B_ID      MB25_8B_WORD0   
MB25_8B_WORD1   MB26_16B_CS     MB26_16B_ID     MB26_16B_WORD0  
MB26_16B_WORD1  MB26_16B_WORD2  MB26_16B_WORD3  MB26_8B_CS      
MB26_8B_ID      MB26_8B_WORD0   MB26_8B_WORD1   MB27_16B_CS     
MB27_16B_ID     MB27_16B_WORD0  MB27_16B_WORD1  MB27_16B_WORD2  
MB27_16B_WORD3  MB27_8B_CS      MB27_8B_ID      MB27_8B_WORD0   
MB27_8B_WORD1   MB28_16B_CS     MB28_16B_ID     MB28_16B_WORD0  
MB28_16B_WORD1  MB28_16B_WORD2  MB28_16B_WORD3  MB28_8B_CS      
MB28_8B_ID      MB28_8B_WORD0   MB28_8B_WORD1   MB29_16B_CS     
MB29_16B_ID     MB29_16B_WORD0  MB29_16B_WORD1  MB29_16B_WORD2  
MB29_16B_WORD3  MB29_8B_CS      MB29_8B_ID      MB29_8B_WORD0   
MB29_8B_WORD1   MB2_16B_CS      MB2_16B_ID      MB2_16B_WORD0   
MB2_16B_WORD1   MB2_16B_WORD2   MB2_16B_WORD3   MB2_32B_CS      
MB2_32B_ID      MB2_32B_WORD0   MB2_32B_WORD1   MB2_32B_WORD2   
MB2_32B_WORD3   MB2_32B_WORD4   MB2_32B_WORD5   MB2_32B_WORD6   
MB2_32B_WORD7   MB2_64B_CS      MB2_64B_ID      MB2_64B_WORD0   
MB2_64B_WORD1   MB2_64B_WORD10  MB2_64B_WORD11  MB2_64B_WORD12  
MB2_64B_WORD13  MB2_64B_WORD14  MB2_64B_WORD15  MB2_64B_WORD2   
MB2_64B_WORD3   MB2_64B_WORD4   MB2_64B_WORD5   MB2_64B_WORD6   
MB2_64B_WORD7   MB2_64B_WORD8   MB2_64B_WORD9   MB2_8B_CS       
MB2_8B_ID       MB2_8B_WORD0    MB2_8B_WORD1    MB30_16B_CS     
MB30_16B_ID     MB30_16B_WORD0  MB30_16B_WORD1  MB30_16B_WORD2  
MB30_16B_WORD3  MB30_8B_CS      MB30_8B_ID      MB30_8B_WORD0   
MB30_8B_WORD1   MB31_16B_CS     MB31_16B_ID     MB31_16B_WORD0  
MB31_16B_WORD1  MB31_16B_WORD2  MB31_16B_WORD3  MB31_8B_CS      
MB31_8B_ID      MB31_8B_WORD0   MB31_8B_WORD1   MB32_16B_CS     
MB32_16B_ID     MB32_16B_WORD0  MB32_16B_WORD1  MB32_16B_WORD2  
MB32_16B_WORD3  MB32_8B_CS      MB32_8B_ID      MB32_8B_WORD0   
MB32_8B_WORD1   MB33_16B_CS     MB33_16B_ID     MB33_16B_WORD0  
MB33_16B_WORD1  MB33_16B_WORD2  MB33_16B_WORD3  MB33_8B_CS      
MB33_8B_ID      MB33_8B_WORD0   MB33_8B_WORD1   MB34_16B_CS     
MB34_16B_ID     MB34_16B_WORD0  MB34_16B_WORD1  MB34_16B_WORD2  
MB34_16B_WORD3  MB34_8B_CS      MB34_8B_ID      MB34_8B_WORD0   
MB34_8B_WORD1   MB35_16B_CS     MB35_16B_ID     MB35_16B_WORD0  
MB35_16B_WORD1  MB35_16B_WORD2  MB35_16B_WORD3  MB35_8B_CS      
MB35_8B_ID      MB35_8B_WORD0   MB35_8B_WORD1   MB36_16B_CS     
MB36_16B_ID     MB36_16B_WORD0  MB36_16B_WORD1  MB36_16B_WORD2  
MB36_16B_WORD3  MB36_8B_CS      MB36_8B_ID      MB36_8B_WORD0   
MB36_8B_WORD1   MB37_16B_CS     MB37_16B_ID     MB37_16B_WORD0  
MB37_16B_WORD1  MB37_16B_WORD2  MB37_16B_WORD3  MB37_8B_CS      
MB37_8B_ID      MB37_8B_WORD0   MB37_8B_WORD1   MB38_16B_CS     
MB38_16B_ID     MB38_16B_WORD0  MB38_16B_WORD1  MB38_16B_WORD2  
MB38_16B_WORD3  MB38_8B_CS      MB38_8B_ID      MB38_8B_WORD0   
MB38_8B_WORD1   MB39_16B_CS     MB39_16B_ID     MB39_16B_WORD0  
MB39_16B_WORD1  MB39_16B_WORD2  MB39_16B_WORD3  MB39_8B_CS      
MB39_8B_ID      MB39_8B_WORD0   MB39_8B_WORD1   MB3_16B_CS      
MB3_16B_ID      MB3_16B_WORD0   MB3_16B_WORD1   MB3_16B_WORD2   
MB3_16B_WORD3   MB3_32B_CS      MB3_32B_ID      MB3_32B_WORD0   
MB3_32B_WORD1   MB3_32B_WORD2   MB3_32B_WORD3   MB3_32B_WORD4   
MB3_32B_WORD5   MB3_32B_WORD6   MB3_32B_WORD7   MB3_64B_CS      
MB3_64B_ID      MB3_64B_WORD0   MB3_64B_WORD1   MB3_64B_WORD10  
MB3_64B_WORD11  MB3_64B_WORD12  MB3_64B_WORD13  MB3_64B_WORD14  
MB3_64B_WORD15  MB3_64B_WORD2   MB3_64B_WORD3   MB3_64B_WORD4   
MB3_64B_WORD5   MB3_64B_WORD6   MB3_64B_WORD7   MB3_64B_WORD8   
MB3_64B_WORD9   MB3_8B_CS       MB3_8B_ID       MB3_8B_WORD0    
MB3_8B_WORD1    MB40_16B_CS     MB40_16B_ID     MB40_16B_WORD0  
MB40_16B_WORD1  MB40_16B_WORD2  MB40_16B_WORD3  MB40_8B_CS      
MB40_8B_ID      MB40_8B_WORD0   MB40_8B_WORD1   MB41_16B_CS     
MB41_16B_ID     MB41_16B_WORD0  MB41_16B_WORD1  MB41_16B_WORD2  
MB41_16B_WORD3  MB41_8B_CS      MB41_8B_ID      MB41_8B_WORD0   
MB41_8B_WORD1   MB42_8B_CS      MB42_8B_ID      MB42_8B_WORD0   
MB42_8B_WORD1   MB43_8B_CS      MB43_8B_ID      MB43_8B_WORD0   
MB43_8B_WORD1   MB44_8B_CS      MB44_8B_ID      MB44_8B_WORD0   
MB44_8B_WORD1   MB45_8B_CS      MB45_8B_ID      MB45_8B_WORD0   
MB45_8B_WORD1   MB46_8B_CS      MB46_8B_ID      MB46_8B_WORD0   
MB46_8B_WORD1   MB47_8B_CS      MB47_8B_ID      MB47_8B_WORD0   
MB47_8B_WORD1   MB48_8B_CS      MB48_8B_ID      MB48_8B_WORD0   
MB48_8B_WORD1   MB49_8B_CS      MB49_8B_ID      MB49_8B_WORD0   
MB49_8B_WORD1   MB4_16B_CS      MB4_16B_ID      MB4_16B_WORD0   
MB4_16B_WORD1   MB4_16B_WORD2   MB4_16B_WORD3   MB4_32B_CS      
MB4_32B_ID      MB4_32B_WORD0   MB4_32B_WORD1   MB4_32B_WORD2   
MB4_32B_WORD3   MB4_32B_WORD4   MB4_32B_WORD5   MB4_32B_WORD6   
MB4_32B_WORD7   MB4_64B_CS      MB4_64B_ID      MB4_64B_WORD0   
MB4_64B_WORD1   MB4_64B_WORD10  MB4_64B_WORD11  MB4_64B_WORD12  
MB4_64B_WORD13  MB4_64B_WORD14  MB4_64B_WORD15  MB4_64B_WORD2   
MB4_64B_WORD3   MB4_64B_WORD4   MB4_64B_WORD5   MB4_64B_WORD6   
MB4_64B_WORD7   MB4_64B_WORD8   MB4_64B_WORD9   MB4_8B_CS       
MB4_8B_ID       MB4_8B_WORD0    MB4_8B_WORD1    MB50_8B_CS      
MB50_8B_ID      MB50_8B_WORD0   MB50_8B_WORD1   MB51_8B_CS      
MB51_8B_ID      MB51_8B_WORD0   MB51_8B_WORD1   MB52_8B_CS      
MB52_8B_ID      MB52_8B_WORD0   MB52_8B_WORD1   MB53_8B_CS      
MB53_8B_ID      MB53_8B_WORD0   MB53_8B_WORD1   MB54_8B_CS      
MB54_8B_ID      MB54_8B_WORD0   MB54_8B_WORD1   MB55_8B_CS      
MB55_8B_ID      MB55_8B_WORD0   MB55_8B_WORD1   MB56_8B_CS      
MB56_8B_ID      MB56_8B_WORD0   MB56_8B_WORD1   MB57_8B_CS      
MB57_8B_ID      MB57_8B_WORD0   MB57_8B_WORD1   MB58_8B_CS      
MB58_8B_ID      MB58_8B_WORD0   MB58_8B_WORD1   MB59_8B_CS      
MB59_8B_ID      MB59_8B_WORD0   MB59_8B_WORD1   MB5_16B_CS      
MB5_16B_ID      MB5_16B_WORD0   MB5_16B_WORD1   MB5_16B_WORD2   
MB5_16B_WORD3   MB5_32B_CS      MB5_32B_ID      MB5_32B_WORD0   
MB5_32B_WORD1   MB5_32B_WORD2   MB5_32B_WORD3   MB5_32B_WORD4   
MB5_32B_WORD5   MB5_32B_WORD6   MB5_32B_WORD7   MB5_64B_CS      
MB5_64B_ID      MB5_64B_WORD0   MB5_64B_WORD1   MB5_64B_WORD10  
MB5_64B_WORD11  MB5_64B_WORD12  MB5_64B_WORD13  MB5_64B_WORD14  
MB5_64B_WORD15  MB5_64B_WORD2   MB5_64B_WORD3   MB5_64B_WORD4   
MB5_64B_WORD5   MB5_64B_WORD6   MB5_64B_WORD7   MB5_64B_WORD8   
MB5_64B_WORD9   MB5_8B_CS       MB5_8B_ID       MB5_8B_WORD0    
MB5_8B_WORD1    MB60_8B_CS      MB60_8B_ID      MB60_8B_WORD0   
MB60_8B_WORD1   MB61_8B_CS      MB61_8B_ID      MB61_8B_WORD0   
MB61_8B_WORD1   MB62_8B_CS      MB62_8B_ID      MB62_8B_WORD0   
MB62_8B_WORD1   MB63_8B_CS      MB63_8B_ID      MB63_8B_WORD0   
MB63_8B_WORD1   MB6_16B_CS      MB6_16B_ID      MB6_16B_WORD0   
MB6_16B_WORD1   MB6_16B_WORD2   MB6_16B_WORD3   MB6_32B_CS      
MB6_32B_ID      MB6_32B_WORD0   MB6_32B_WORD1   MB6_32B_WORD2   
MB6_32B_WORD3   MB6_32B_WORD4   MB6_32B_WORD5   MB6_32B_WORD6   
MB6_32B_WORD7   MB6_64B_CS      MB6_64B_ID      MB6_64B_WORD0   
MB6_64B_WORD1   MB6_64B_WORD10  MB6_64B_WORD11  MB6_64B_WORD12  
MB6_64B_WORD13  MB6_64B_WORD14  MB6_64B_WORD15  MB6_64B_WORD2   
MB6_64B_WORD3   MB6_64B_WORD4   MB6_64B_WORD5   MB6_64B_WORD6   
MB6_64B_WORD7   MB6_64B_WORD8   MB6_64B_WORD9   MB6_8B_CS       
MB6_8B_ID       MB6_8B_WORD0    MB6_8B_WORD1    MB7_16B_CS      
MB7_16B_ID      MB7_16B_WORD0   MB7_16B_WORD1   MB7_16B_WORD2   
MB7_16B_WORD3   MB7_32B_CS      MB7_32B_ID      MB7_32B_WORD0   
MB7_32B_WORD1   MB7_32B_WORD2   MB7_32B_WORD3   MB7_32B_WORD4   
MB7_32B_WORD5   MB7_32B_WORD6   MB7_32B_WORD7   MB7_64B_CS      
MB7_64B_ID      MB7_64B_WORD0   MB7_64B_WORD1   MB7_64B_WORD10  
MB7_64B_WORD11  MB7_64B_WORD12  MB7_64B_WORD13  MB7_64B_WORD14  
MB7_64B_WORD15  MB7_64B_WORD2   MB7_64B_WORD3   MB7_64B_WORD4   
MB7_64B_WORD5   MB7_64B_WORD6   MB7_64B_WORD7   MB7_64B_WORD8   
MB7_64B_WORD9   MB7_8B_CS       MB7_8B_ID       MB7_8B_WORD0    
MB7_8B_WORD1    MB8_16B_CS      MB8_16B_ID      MB8_16B_WORD0   
MB8_16B_WORD1   MB8_16B_WORD2   MB8_16B_WORD3   MB8_32B_CS      
MB8_32B_ID      MB8_32B_WORD0   MB8_32B_WORD1   MB8_32B_WORD2   
MB8_32B_WORD3   MB8_32B_WORD4   MB8_32B_WORD5   MB8_32B_WORD6   
MB8_32B_WORD7   MB8_64B_CS      MB8_64B_ID      MB8_64B_WORD0   
MB8_64B_WORD1   MB8_64B_WORD10  MB8_64B_WORD11  MB8_64B_WORD12  
MB8_64B_WORD13  MB8_64B_WORD14  MB8_64B_WORD15  MB8_64B_WORD2   
MB8_64B_WORD3   MB8_64B_WORD4   MB8_64B_WORD5   MB8_64B_WORD6   
MB8_64B_WORD7   MB8_64B_WORD8   MB8_64B_WORD9   MB8_8B_CS       
MB8_8B_ID       MB8_8B_WORD0    MB8_8B_WORD1    MB9_16B_CS      
MB9_16B_ID      MB9_16B_WORD0   MB9_16B_WORD1   MB9_16B_WORD2   
MB9_16B_WORD3   MB9_32B_CS      MB9_32B_ID      MB9_32B_WORD0   
MB9_32B_WORD1   MB9_32B_WORD2   MB9_32B_WORD3   MB9_32B_WORD4   
MB9_32B_WORD5   MB9_32B_WORD6   MB9_32B_WORD7   MB9_64B_CS      
MB9_64B_ID      MB9_64B_WORD0   MB9_64B_WORD1   MB9_64B_WORD10  
MB9_64B_WORD11  MB9_64B_WORD12  MB9_64B_WORD13  MB9_64B_WORD14  
MB9_64B_WORD15  MB9_64B_WORD2   MB9_64B_WORD3   MB9_64B_WORD4   
MB9_64B_WORD5   MB9_64B_WORD6   MB9_64B_WORD7   MB9_64B_WORD8   
MB9_64B_WORD9   MB9_8B_CS       MB9_8B_ID       MB9_8B_WORD0    
MB9_8B_WORD1    MCR             RX14MASK        RX15MASK        
RXFGMASK        RXFIR           RXIMR[0]        RXIMR[10]       
RXIMR[11]       RXIMR[12]       RXIMR[13]       RXIMR[14]       
RXIMR[15]       RXIMR[16]       RXIMR[17]       RXIMR[18]       
RXIMR[19]       RXIMR[1]        RXIMR[20]       RXIMR[21]       
RXIMR[22]       RXIMR[23]       RXIMR[24]       RXIMR[25]       
RXIMR[26]       RXIMR[27]       RXIMR[28]       RXIMR[29]       
RXIMR[2]        RXIMR[30]       RXIMR[31]       RXIMR[32]       
RXIMR[33]       RXIMR[34]       RXIMR[35]       RXIMR[36]       
RXIMR[37]       RXIMR[38]       RXIMR[39]       RXIMR[3]        
RXIMR[40]       RXIMR[41]       RXIMR[42]       RXIMR[43]       
RXIMR[44]       RXIMR[45]       RXIMR[46]       RXIMR[47]       
RXIMR[48]       RXIMR[49]       RXIMR[4]        RXIMR[50]       
RXIMR[51]       RXIMR[52]       RXIMR[53]       RXIMR[54]       
RXIMR[55]       RXIMR[56]       RXIMR[57]       RXIMR[58]       
RXIMR[59]       RXIMR[5]        RXIMR[60]       RXIMR[61]       
RXIMR[62]       RXIMR[63]       RXIMR[6]        RXIMR[7]        
RXIMR[8]        RXIMR[9]        RXMGMASK        TIMER           
WORD00          WORD01          WORD010         WORD011         
WORD012         WORD013         WORD014         WORD015         
WORD016         WORD017         WORD018         WORD019         
WORD02          WORD020         WORD021         WORD022         
WORD023         WORD024         WORD025         WORD026         
WORD027         WORD028         WORD029         WORD03          
WORD030         WORD031         WORD032         WORD033         
WORD034         WORD035         WORD036         WORD037         
WORD038         WORD039         WORD04          WORD040         
WORD041         WORD042         WORD043         WORD044         
WORD045         WORD046         WORD047         WORD048         
WORD049         WORD05          WORD050         WORD051         
WORD052         WORD053         WORD054         WORD055         
WORD056         WORD057         WORD058         WORD059         
WORD06          WORD060         WORD061         WORD062         
WORD063         WORD07          WORD08          WORD09          
WORD10          WORD11          WORD110         WORD111         
WORD112         WORD113         WORD114         WORD115         
WORD116         WORD117         WORD118         WORD119         
WORD12          WORD120         WORD121         WORD122         
WORD123         WORD124         WORD125         WORD126         
WORD127         WORD128         WORD129         WORD13          
WORD130         WORD131         WORD132         WORD133         
WORD134         WORD135         WORD136         WORD137         
WORD138         WORD139         WORD14          WORD140         
WORD141         WORD142         WORD143         WORD144         
WORD145         WORD146         WORD147         WORD148         
WORD149         WORD15          WORD150         WORD151         
WORD152         WORD153         WORD154         WORD155         
WORD156         WORD157         WORD158         WORD159         
WORD16          WORD160         WORD161         WORD162         
WORD163         WORD17          WORD18          WORD19          
输入 p.CAN3.{reg_name} 以查看寄存器的详细信息
type p.CAN3.{reg_name} to check details of registers
</lang>
#### CAN3.TIMER
<link=p.CAN3.TIMER>
#### p.can3.rx14mask
<link=p.CAN3.RX14MASK>
#### p.CAN3.RX15MASK
<lang=dft>
 (rw)  [1;33m0x401d8018[0m (0x401d8000 + 0x0018)
Rx 15 Mask register
 (rw) (32)  [0;32mRX15M[0m  - [31:00] -  Rx Buffer 15 Mask Bits
</lang>
#### can3.ecr
<link=p.CAN3.ECR>
#### CAN3.IMASK2
<link=p.CAN3.IMASK2>
#### p.can3.ctrl2
<link=p.CAN3.CTRL2>
#### can3.mb0_8b_word0
<link=p.CAN3.MB0_8B_WORD0>
#### p.can3.word00
<link=p.CAN3.WORD00>
#### p.CAN3.MB0_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d808c[0m (0x401d8000 + 0x008c)
Message Buffer 0 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB0_32B_WORD4
<link=p.CAN3.MB0_32B_WORD4>
#### p.CAN3.MB1_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8098[0m (0x401d8000 + 0x0098)
Message Buffer 1 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB1_16B_ID
<link=p.CAN3.MB1_16B_ID>
#### CAN3.WORD11
<link=p.CAN3.WORD11>
#### can3.mb0_64b_word7
<link=p.CAN3.MB0_64B_WORD7>
#### p.can3.mb2_8b_id
<link=p.CAN3.MB2_8B_ID>
#### can3.mb1_16b_word2
<link=p.CAN3.MB1_16B_WORD2>
#### CAN3.MB1_32B_CS
<link=p.CAN3.MB1_32B_CS>
#### p.can3.mb2_8b_word1
<link=p.CAN3.MB2_8B_WORD1>
#### p.CAN3.MB3_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d80b0[0m (0x401d8000 + 0x00b0)
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
#### CAN3.ID3
<link=p.CAN3.ID3>
#### p.CAN3.MB0_64B_WORD13
<lang=dft>
 (rw)  [1;33m0x401d80bc[0m (0x401d8000 + 0x00bc)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_55[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_54[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_53[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_52[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB2_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80bc[0m (0x401d8000 + 0x00bc)
Message Buffer 2 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB1_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d80c0[0m (0x401d8000 + 0x00c0)
Message Buffer 1 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb4_8b_cs
<link=p.CAN3.MB4_8B_CS>
#### can3.mb4_8b_cs
<link=p.CAN3.MB4_8B_CS>
#### p.can3.mb0_64b_word15
<link=p.CAN3.MB0_64B_WORD15>
#### p.can3.mb1_32b_word6
<link=p.CAN3.MB1_32B_WORD6>
#### CAN3.MB4_8B_WORD0
<link=p.CAN3.MB4_8B_WORD0>
#### can3.mb3_16b_word0
<link=p.CAN3.MB3_16B_WORD0>
#### p.can3.mb1_64b_word1
<link=p.CAN3.MB1_64B_WORD1>
#### p.CAN3.MB5_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d80d4[0m (0x401d8000 + 0x00d4)
Message Buffer 5 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB3_16B_WORD2
<link=p.CAN3.MB3_16B_WORD2>
#### CAN3.MB6_8B_CS
<link=p.CAN3.MB6_8B_CS>
#### CAN3.MB4_16B_ID
<link=p.CAN3.MB4_16B_ID>
#### CAN3.MB2_32B_WORD4
<link=p.CAN3.MB2_32B_WORD4>
#### can3.mb4_16b_word1
<link=p.CAN3.MB4_16B_WORD1>
#### can3.mb1_64b_word8
<link=p.CAN3.MB1_64B_WORD8>
#### p.can3.mb4_16b_word2
<link=p.CAN3.MB4_16B_WORD2>
#### p.CAN3.WORD07
<lang=dft>
 (rw)  [1;33m0x401d80f8[0m (0x401d8000 + 0x00f8)
Message Buffer 7 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb1_64b_word11
<link=p.CAN3.MB1_64B_WORD11>
#### p.can3.word17
<link=p.CAN3.WORD17>
#### CAN3.MB1_64B_WORD12
<link=p.CAN3.MB1_64B_WORD12>
#### p.CAN3.MB1_64B_WORD13
<lang=dft>
 (rw)  [1;33m0x401d8104[0m (0x401d8000 + 0x0104)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_55[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_54[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_53[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_52[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb5_16b_word1
<link=p.CAN3.MB5_16B_WORD1>
#### CAN3.MB3_32B_WORD2
<link=p.CAN3.MB3_32B_WORD2>
#### CAN3.MB8_8B_WORD0
<link=p.CAN3.MB8_8B_WORD0>
#### p.can3.mb5_16b_word3
<link=p.CAN3.MB5_16B_WORD3>
#### p.can3.mb9_8b_cs
<link=p.CAN3.MB9_8B_CS>
#### can3.mb2_64b_id
<link=p.CAN3.MB2_64B_ID>
#### p.can3.mb2_64b_word0
<link=p.CAN3.MB2_64B_WORD0>
#### p.CAN3.MB3_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8118[0m (0x401d8000 + 0x0118)
Message Buffer 3 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb6_16b_word0
<link=p.CAN3.MB6_16B_WORD0>
#### can3.mb6_16b_word1
<link=p.CAN3.MB6_16B_WORD1>
#### CAN3.MB4_32B_WORD0
<link=p.CAN3.MB4_32B_WORD0>
#### p.CAN3.MB2_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d812c[0m (0x401d8000 + 0x012c)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB7_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d812c[0m (0x401d8000 + 0x012c)
Message Buffer 7 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB2_64B_WORD7
<link=p.CAN3.MB2_64B_WORD7>
#### can3.mb7_16b_word3
<link=p.CAN3.MB7_16B_WORD3>
#### p.CAN3.MB12_8B_CS
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
#### can3.mb8_16b_cs
<link=p.CAN3.MB8_16B_CS>
#### can3.mb12_8b_word1
<link=p.CAN3.MB12_8B_WORD1>
#### CAN3.MB2_64B_WORD13
<link=p.CAN3.MB2_64B_WORD13>
#### can3.word112
<link=p.CAN3.WORD112>
#### p.can3.cs13
<link=p.CAN3.CS13>
#### CAN3.MB13_8B_CS
<link=p.CAN3.MB13_8B_CS>
#### p.CAN3.MB5_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8150[0m (0x401d8000 + 0x0150)
Message Buffer 5 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB3_64B_CS
<link=p.CAN3.MB3_64B_CS>
#### p.can3.mb5_32b_word2
<link=p.CAN3.MB5_32B_WORD2>
#### can3.word013
<link=p.CAN3.WORD013>
#### p.CAN3.WORD113
<lang=dft>
 (rw)  [1;33m0x401d815c[0m (0x401d8000 + 0x015c)
Message Buffer 13 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB9_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8160[0m (0x401d8000 + 0x0160)
Message Buffer 9 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB14_8B_WORD0
<link=p.CAN3.MB14_8B_WORD0>
#### p.can3.word014
<link=p.CAN3.WORD014>
#### can3.cs15
<link=p.CAN3.CS15>
#### p.CAN3.MB3_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d8174[0m (0x401d8000 + 0x0174)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb3_64b_word5
<link=p.CAN3.MB3_64B_WORD5>
#### CAN3.MB6_32B_WORD0
<link=p.CAN3.MB6_32B_WORD0>
#### CAN3.MB3_64B_WORD7
<link=p.CAN3.MB3_64B_WORD7>
#### p.can3.word115
<link=p.CAN3.WORD115>
#### CAN3.MB10_16B_WORD3
<link=p.CAN3.MB10_16B_WORD3>
#### p.can3.mb16_8b_id
<link=p.CAN3.MB16_8B_ID>
#### p.can3.mb3_64b_word9
<link=p.CAN3.MB3_64B_WORD9>
#### p.can3.mb3_64b_word11
<link=p.CAN3.MB3_64B_WORD11>
#### p.can3.mb17_8b_word0
<link=p.CAN3.MB17_8B_WORD0>
#### p.CAN3.MB3_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d8198[0m (0x401d8000 + 0x0198)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB7_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8198[0m (0x401d8000 + 0x0198)
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
#### CAN3.MB11_16B_WORD3
<link=p.CAN3.MB11_16B_WORD3>
#### CAN3.MB3_64B_WORD15
<link=p.CAN3.MB3_64B_WORD15>
#### p.CAN3.MB12_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d81a0[0m (0x401d8000 + 0x01a0)
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
#### can3.id18
<link=p.CAN3.ID18>
#### p.CAN3.MB12_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d81a4[0m (0x401d8000 + 0x01a4)
Message Buffer 12 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB18_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d81a4[0m (0x401d8000 + 0x01a4)
Message Buffer 18 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB12_16B_WORD0
<link=p.CAN3.MB12_16B_WORD0>
#### CAN3.MB18_8B_WORD0
<link=p.CAN3.MB18_8B_WORD0>
#### p.CAN3.MB7_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d81a8[0m (0x401d8000 + 0x01a8)
Message Buffer 7 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb4_64b_word2
<link=p.CAN3.MB4_64B_WORD2>
#### CAN3.ID19
<link=p.CAN3.ID19>
#### CAN3.MB19_8B_ID
<link=p.CAN3.MB19_8B_ID>
#### CAN3.MB7_32B_WORD6
<link=p.CAN3.MB7_32B_WORD6>
#### p.CAN3.CS20
<lang=dft>
 (rw)  [1;33m0x401d81c0[0m (0x401d8000 + 0x01c0)
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
#### can3.cs20
<link=p.CAN3.CS20>
#### p.can3.mb8_32b_word1
<link=p.CAN3.MB8_32B_WORD1>
#### CAN3.CS21
<link=p.CAN3.CS21>
#### p.CAN3.ID21
<lang=dft>
 (rw)  [1;33m0x401d81d4[0m (0x401d8000 + 0x01d4)
Message Buffer 21 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.id21
<link=p.CAN3.ID21>
#### can3.mb8_32b_word3
<link=p.CAN3.MB8_32B_WORD3>
#### CAN3.MB21_8B_WORD0
<link=p.CAN3.MB21_8B_WORD0>
#### p.CAN3.MB8_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d81e0[0m (0x401d8000 + 0x01e0)
Message Buffer 8 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb22_8b_id
<link=p.CAN3.MB22_8B_ID>
#### CAN3.MB22_8B_ID
<link=p.CAN3.MB22_8B_ID>
#### p.CAN3.MB5_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d81e8[0m (0x401d8000 + 0x01e8)
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
#### p.CAN3.WORD022
<lang=dft>
 (rw)  [1;33m0x401d81e8[0m (0x401d8000 + 0x01e8)
Message Buffer 22 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB9_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d81ec[0m (0x401d8000 + 0x01ec)
Message Buffer 9 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB15_16B_WORD0
<link=p.CAN3.MB15_16B_WORD0>
#### can3.mb15_16b_word1
<link=p.CAN3.MB15_16B_WORD1>
#### p.can3.mb9_32b_word1
<link=p.CAN3.MB9_32B_WORD1>
#### p.CAN3.MB15_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d81f8[0m (0x401d8000 + 0x01f8)
Message Buffer 15 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb15_16b_word2
<link=p.CAN3.MB15_16B_WORD2>
#### p.can3.mb5_64b_word4
<link=p.CAN3.MB5_64B_WORD4>
#### can3.mb9_32b_word4
<link=p.CAN3.MB9_32B_WORD4>
#### CAN3.MB9_32B_WORD6
<link=p.CAN3.MB9_32B_WORD6>
#### CAN3.MB24_8B_WORD1
<link=p.CAN3.MB24_8B_WORD1>
#### p.can3.word124
<link=p.CAN3.WORD124>
#### can3.mb10_32b_id
<link=p.CAN3.MB10_32B_ID>
#### CAN3.MB16_16B_WORD3
<link=p.CAN3.MB16_16B_WORD3>
#### can3.mb10_32b_word2
<link=p.CAN3.MB10_32B_WORD2>
#### can3.mb17_16b_word0
<link=p.CAN3.MB17_16B_WORD0>
#### p.CAN3.MB26_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8228[0m (0x401d8000 + 0x0228)
Message Buffer 26 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb5_64b_word14
<link=p.CAN3.MB5_64B_WORD14>
#### CAN3.MB17_16B_WORD3
<link=p.CAN3.MB17_16B_WORD3>
#### p.CAN3.MB10_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8230[0m (0x401d8000 + 0x0230)
Message Buffer 10 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb27_8b_cs
<link=p.CAN3.MB27_8B_CS>
#### CAN3.MB18_16B_ID
<link=p.CAN3.MB18_16B_ID>
#### p.can3.mb27_8b_id
<link=p.CAN3.MB27_8B_ID>
#### p.can3.mb27_8b_word0
<link=p.CAN3.MB27_8B_WORD0>
#### can3.mb27_8b_word0
<link=p.CAN3.MB27_8B_WORD0>
#### can3.word027
<link=p.CAN3.WORD027>
#### p.CAN3.MB11_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d823c[0m (0x401d8000 + 0x023c)
Message Buffer 11 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.WORD127
<lang=dft>
 (rw)  [1;33m0x401d823c[0m (0x401d8000 + 0x023c)
Message Buffer 27 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB28_8B_CS
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
#### CAN3.MB6_64B_WORD2
<link=p.CAN3.MB6_64B_WORD2>
#### CAN3.ID28
<link=p.CAN3.ID28>
#### can3.mb18_16b_word3
<link=p.CAN3.MB18_16B_WORD3>
#### CAN3.MB28_8B_WORD1
<link=p.CAN3.MB28_8B_WORD1>
#### p.can3.mb6_64b_word5
<link=p.CAN3.MB6_64B_WORD5>
#### CAN3.WORD128
<link=p.CAN3.WORD128>
#### p.CAN3.MB29_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8250[0m (0x401d8000 + 0x0250)
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
#### p.CAN3.MB6_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8250[0m (0x401d8000 + 0x0250)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB11_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d825c[0m (0x401d8000 + 0x025c)
Message Buffer 11 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb12_32b_cs
<link=p.CAN3.MB12_32B_CS>
#### can3.mb12_32b_cs
<link=p.CAN3.MB12_32B_CS>
#### p.can3.id30
<link=p.CAN3.ID30>
#### p.CAN3.MB12_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d8264[0m (0x401d8000 + 0x0264)
Message Buffer 12 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb12_32b_id
<link=p.CAN3.MB12_32B_ID>
#### can3.mb12_32b_word1
<link=p.CAN3.MB12_32B_WORD1>
#### can3.mb6_64b_word13
<link=p.CAN3.MB6_64B_WORD13>
#### p.CAN3.MB6_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d8270[0m (0x401d8000 + 0x0270)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb12_32b_word3
<link=p.CAN3.MB12_32B_WORD3>
#### p.CAN3.MB21_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8280[0m (0x401d8000 + 0x0280)
Message Buffer 21 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB7_64B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8280[0m (0x401d8000 + 0x0280)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_64B_WORD0
<link=p.CAN3.MB7_64B_WORD0>
#### p.CAN3.ID32
<lang=dft>
 (rw)  [1;33m0x401d8284[0m (0x401d8000 + 0x0284)
Message Buffer 32 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB21_16B_WORD1
<link=p.CAN3.MB21_16B_WORD1>
#### CAN3.MB32_8B_WORD0
<link=p.CAN3.MB32_8B_WORD0>
#### p.can3.word032
<link=p.CAN3.WORD032>
#### can3.cs33
<link=p.CAN3.CS33>
#### p.can3.mb33_8b_cs
<link=p.CAN3.MB33_8B_CS>
#### can3.mb7_64b_word6
<link=p.CAN3.MB7_64B_WORD6>
#### p.can3.word133
<link=p.CAN3.WORD133>
#### p.CAN3.MB34_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d82a0[0m (0x401d8000 + 0x02a0)
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
#### p.can3.mb23_16b_id
<link=p.CAN3.MB23_16B_ID>
#### CAN3.WORD134
<link=p.CAN3.WORD134>
#### p.CAN3.MB23_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82b0[0m (0x401d8000 + 0x02b0)
Message Buffer 23 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB35_8B_CS
<link=p.CAN3.MB35_8B_CS>
#### CAN3.MB23_16B_WORD1
<link=p.CAN3.MB23_16B_WORD1>
#### p.CAN3.WORD035
<lang=dft>
 (rw)  [1;33m0x401d82b8[0m (0x401d8000 + 0x02b8)
Message Buffer 35 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb35_8b_word1
<link=p.CAN3.MB35_8B_WORD1>
#### p.CAN3.MB14_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d82c0[0m (0x401d8000 + 0x02c0)
Message Buffer 14 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb36_8b_cs
<link=p.CAN3.MB36_8B_CS>
#### p.can3.mb8_64b_cs
<link=p.CAN3.MB8_64B_CS>
#### can3.mb24_16b_word1
<link=p.CAN3.MB24_16B_WORD1>
#### p.can3.mb8_64b_word1
<link=p.CAN3.MB8_64B_WORD1>
#### p.CAN3.CS37
<lang=dft>
 (rw)  [1;33m0x401d82d0[0m (0x401d8000 + 0x02d0)
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
#### can3.mb14_32b_word6
<link=p.CAN3.MB14_32B_WORD6>
#### can3.mb37_8b_cs
<link=p.CAN3.MB37_8B_CS>
#### CAN3.MB8_64B_WORD5
<link=p.CAN3.MB8_64B_WORD5>
#### can3.mb25_16b_word0
<link=p.CAN3.MB25_16B_WORD0>
#### p.CAN3.MB15_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d82ec[0m (0x401d8000 + 0x02ec)
Message Buffer 15 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb39_8b_word1
<link=p.CAN3.MB39_8B_WORD1>
#### CAN3.MB16_32B_ID
<link=p.CAN3.MB16_32B_ID>
#### can3.mb26_16b_word3
<link=p.CAN3.MB26_16B_WORD3>
#### CAN3.MB8_64B_WORD15
<link=p.CAN3.MB8_64B_WORD15>
#### can3.mb27_16b_word0
<link=p.CAN3.MB27_16B_WORD0>
#### can3.mb41_8b_cs
<link=p.CAN3.MB41_8B_CS>
#### can3.mb16_32b_word5
<link=p.CAN3.MB16_32B_WORD5>
#### can3.word141
<link=p.CAN3.WORD141>
#### can3.mb28_16b_cs
<link=p.CAN3.MB28_16B_CS>
#### CAN3.MB28_16B_CS
<link=p.CAN3.MB28_16B_CS>
#### p.can3.mb16_32b_word7
<link=p.CAN3.MB16_32B_WORD7>
#### CAN3.MB28_16B_ID
<link=p.CAN3.MB28_16B_ID>
#### p.CAN3.MB42_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8324[0m (0x401d8000 + 0x0324)
Message Buffer 42 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB9_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d8324[0m (0x401d8000 + 0x0324)
Message Buffer 9 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb9_64b_word6
<link=p.CAN3.MB9_64B_WORD6>
#### p.can3.mb42_8b_word1
<link=p.CAN3.MB42_8B_WORD1>
#### CAN3.WORD142
<link=p.CAN3.WORD142>
#### CAN3.MB28_16B_WORD2
<link=p.CAN3.MB28_16B_WORD2>
#### p.CAN3.ID43
<lang=dft>
 (rw)  [1;33m0x401d8334[0m (0x401d8000 + 0x0334)
Message Buffer 43 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.id43
<link=p.CAN3.ID43>
#### p.CAN3.MB43_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8334[0m (0x401d8000 + 0x0334)
Message Buffer 43 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB43_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d833c[0m (0x401d8000 + 0x033c)
Message Buffer 43 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb9_64b_word12
<link=p.CAN3.MB9_64B_WORD12>
#### p.CAN3.MB9_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d8348[0m (0x401d8000 + 0x0348)
Message Buffer 9 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word044
<link=p.CAN3.WORD044>
#### can3.word044
<link=p.CAN3.WORD044>
#### CAN3.MB9_64B_WORD15
<link=p.CAN3.MB9_64B_WORD15>
#### p.CAN3.WORD144
<lang=dft>
 (rw)  [1;33m0x401d834c[0m (0x401d8000 + 0x034c)
Message Buffer 44 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB10_64B_CS
<link=p.CAN3.MB10_64B_CS>
#### p.can3.id45
<link=p.CAN3.ID45>
#### p.can3.mb10_64b_id
<link=p.CAN3.MB10_64B_ID>
#### p.CAN3.MB18_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d835c[0m (0x401d8000 + 0x035c)
Message Buffer 18 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb30_16b_word1
<link=p.CAN3.MB30_16B_WORD1>
#### p.CAN3.MB10_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8360[0m (0x401d8000 + 0x0360)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb30_16b_word2
<link=p.CAN3.MB30_16B_WORD2>
#### can3.mb31_16b_cs
<link=p.CAN3.MB31_16B_CS>
#### p.CAN3.MB46_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8368[0m (0x401d8000 + 0x0368)
Message Buffer 46 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB46_8B_WORD0
<link=p.CAN3.MB46_8B_WORD0>
#### CAN3.MB18_32B_WORD5
<link=p.CAN3.MB18_32B_WORD5>
#### p.CAN3.MB31_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d836c[0m (0x401d8000 + 0x036c)
Message Buffer 31 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb31_16b_id
<link=p.CAN3.MB31_16B_ID>
#### can3.mb10_64b_word7
<link=p.CAN3.MB10_64B_WORD7>
#### can3.mb47_8b_id
<link=p.CAN3.MB47_8B_ID>
#### can3.mb19_32b_cs
<link=p.CAN3.MB19_32B_CS>
#### can3.mb47_8b_word0
<link=p.CAN3.MB47_8B_WORD0>
#### p.can3.mb47_8b_word1
<link=p.CAN3.MB47_8B_WORD1>
#### p.CAN3.MB19_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8380[0m (0x401d8000 + 0x0380)
Message Buffer 19 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb19_32b_word1
<link=p.CAN3.MB19_32B_WORD1>
#### p.can3.mb32_16b_id
<link=p.CAN3.MB32_16B_ID>
#### can3.mb19_32b_word2
<link=p.CAN3.MB19_32B_WORD2>
#### CAN3.MB19_32B_WORD2
<link=p.CAN3.MB19_32B_WORD2>
#### can3.mb32_16b_word1
<link=p.CAN3.MB32_16B_WORD1>
#### p.can3.mb10_64b_word14
<link=p.CAN3.MB10_64B_WORD14>
#### p.can3.mb32_16b_word2
<link=p.CAN3.MB32_16B_WORD2>
#### can3.mb11_64b_cs
<link=p.CAN3.MB11_64B_CS>
#### p.CAN3.WORD049
<lang=dft>
 (rw)  [1;33m0x401d8398[0m (0x401d8000 + 0x0398)
Message Buffer 49 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB33_16B_ID
<link=p.CAN3.MB33_16B_ID>
#### p.can3.word149
<link=p.CAN3.WORD149>
#### CAN3.CS50
<link=p.CAN3.CS50>
#### p.CAN3.ID50
<lang=dft>
 (rw)  [1;33m0x401d83a4[0m (0x401d8000 + 0x03a4)
Message Buffer 50 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb11_64b_word1
<link=p.CAN3.MB11_64B_WORD1>
#### can3.mb50_8b_id
<link=p.CAN3.MB50_8B_ID>
#### p.can3.mb20_32b_word0
<link=p.CAN3.MB20_32B_WORD0>
#### CAN3.WORD050
<link=p.CAN3.WORD050>
#### CAN3.MB11_64B_WORD7
<link=p.CAN3.MB11_64B_WORD7>
#### p.CAN3.MB20_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d83bc[0m (0x401d8000 + 0x03bc)
Message Buffer 20 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB20_32B_WORD5
<link=p.CAN3.MB20_32B_WORD5>
#### can3.mb51_8b_word1
<link=p.CAN3.MB51_8B_WORD1>
#### p.can3.mb34_16b_word2
<link=p.CAN3.MB34_16B_WORD2>
#### p.can3.mb52_8b_cs
<link=p.CAN3.MB52_8B_CS>
#### p.can3.id52
<link=p.CAN3.ID52>
#### p.CAN3.MB11_64B_WORD10
<lang=dft>
 (rw)  [1;33m0x401d83c8[0m (0x401d8000 + 0x03c8)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_43[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_42[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_41[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_40[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB52_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d83c8[0m (0x401d8000 + 0x03c8)
Message Buffer 52 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb35_16b_id
<link=p.CAN3.MB35_16B_ID>
#### p.can3.mb11_64b_word12
<link=p.CAN3.MB11_64B_WORD12>
#### p.can3.mb53_8b_cs
<link=p.CAN3.MB53_8B_CS>
#### p.can3.mb21_32b_word2
<link=p.CAN3.MB21_32B_WORD2>
#### CAN3.MB54_8B_CS
<link=p.CAN3.MB54_8B_CS>
#### can3.id54
<link=p.CAN3.ID54>
#### p.CAN3.MB54_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d83e4[0m (0x401d8000 + 0x03e4)
Message Buffer 54 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB36_16B_WORD2
<link=p.CAN3.MB36_16B_WORD2>
#### p.CAN3.MB55_8B_CS
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
#### CAN3.ID55
<link=p.CAN3.ID55>
#### CAN3.MB55_8B_ID
<link=p.CAN3.MB55_8B_ID>
#### p.can3.mb22_32b_word0
<link=p.CAN3.MB22_32B_WORD0>
#### p.can3.mb37_16b_cs
<link=p.CAN3.MB37_16B_CS>
#### CAN3.MB12_64B_WORD5
<link=p.CAN3.MB12_64B_WORD5>
#### p.can3.mb55_8b_word1
<link=p.CAN3.MB55_8B_WORD1>
#### p.CAN3.CS56
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
#### p.CAN3.WORD056
<lang=dft>
 (rw)  [1;33m0x401d8408[0m (0x401d8000 + 0x0408)
Message Buffer 56 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB22_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d840c[0m (0x401d8000 + 0x040c)
Message Buffer 22 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB22_32B_WORD5
<link=p.CAN3.MB22_32B_WORD5>
#### CAN3.MB12_64B_WORD11
<link=p.CAN3.MB12_64B_WORD11>
#### p.can3.mb57_8b_id
<link=p.CAN3.MB57_8B_ID>
#### p.can3.mb23_32b_cs
<link=p.CAN3.MB23_32B_CS>
#### can3.mb23_32b_cs
<link=p.CAN3.MB23_32B_CS>
#### p.CAN3.MB38_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d841c[0m (0x401d8000 + 0x041c)
Message Buffer 38 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.cs58
<link=p.CAN3.CS58>
#### p.CAN3.MB12_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d8424[0m (0x401d8000 + 0x0424)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb58_8b_word1
<link=p.CAN3.MB58_8B_WORD1>
#### p.can3.mb13_64b_word1
<link=p.CAN3.MB13_64B_WORD1>
#### p.CAN3.MB39_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8434[0m (0x401d8000 + 0x0434)
Message Buffer 39 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb39_16b_word1
<link=p.CAN3.MB39_16B_WORD1>
#### CAN3.WORD159
<link=p.CAN3.WORD159>
#### can3.mb60_8b_word1
<link=p.CAN3.MB60_8B_WORD1>
#### can3.mb13_64b_word9
<link=p.CAN3.MB13_64B_WORD9>
#### CAN3.MB61_8B_ID
<link=p.CAN3.MB61_8B_ID>
#### can3.mb13_64b_word10
<link=p.CAN3.MB13_64B_WORD10>
#### p.can3.mb41_16b_cs
<link=p.CAN3.MB41_16B_CS>
#### CAN3.WORD061
<link=p.CAN3.WORD061>
#### p.can3.cs62
<link=p.CAN3.CS62>
#### p.CAN3.MB62_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8460[0m (0x401d8000 + 0x0460)
Message Buffer 62 CS Register
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
#### p.CAN3.MB41_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8464[0m (0x401d8000 + 0x0464)
Message Buffer 41 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb62_8b_word0
<link=p.CAN3.MB62_8B_WORD0>
#### CAN3.MB41_16B_WORD3
<link=p.CAN3.MB41_16B_WORD3>
#### p.can3.id63
<link=p.CAN3.ID63>
#### can3.rximr[2]
<link=p.CAN3.RXIMR[2]>
#### CAN3.RXIMR[23]
<link=p.CAN3.RXIMR[23]>
#### p.can3.rximr[28]
<link=p.CAN3.RXIMR[28]>
#### CAN3.RXIMR[28]
<link=p.CAN3.RXIMR[28]>
#### can3.rximr[29]
<link=p.CAN3.RXIMR[29]>
#### CAN3.RXIMR[34]
<link=p.CAN3.RXIMR[34]>
#### p.CAN3.RXIMR[40]
<lang=dft>
 (rw)  [1;33m0x401d8920[0m (0x401d8000 + 0x0920)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[44]
<link=p.CAN3.RXIMR[44]>
#### CAN3.RXIMR[44]
<link=p.CAN3.RXIMR[44]>
#### can3.rximr[45]
<link=p.CAN3.RXIMR[45]>
#### p.can3.rximr[50]
<link=p.CAN3.RXIMR[50]>
#### can3.rximr[52]
<link=p.CAN3.RXIMR[52]>
#### p.CAN3.RXIMR[53]
<lang=dft>
 (rw)  [1;33m0x401d8954[0m (0x401d8000 + 0x0954)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.can3.rximr[57]
<link=p.CAN3.RXIMR[57]>
#### can3.rximr[58]
<link=p.CAN3.RXIMR[58]>
#### p.CAN3.RXIMR[59]
<lang=dft>
 (rw)  [1;33m0x401d896c[0m (0x401d8000 + 0x096c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[60]
<link=p.CAN3.RXIMR[60]>
#### p.can3.rximr[61]
<link=p.CAN3.RXIMR[61]>
#### CAN3.EPRS
<link=p.CAN3.EPRS>
#### p.CAN3.ENCBT
<lang=dft>
 (rw)  [1;33m0x401d8bf4[0m (0x401d8000 + 0x0bf4)
Enhanced Nominal CAN Bit Timing
 (rw) (08)  [0;32mNTSEG1[0m  - [07:00] -  Nominal Time Segment 1
 (rw) (07)  [0;32mNTSEG2[0m  - [18:12] -  Nominal Time Segment 2
 (rw) (07)  [0;32mNRJW[0m  - [28:22] -  Nominal Resynchronization Jump Width
</lang>
#### p.can3.encbt
<link=p.CAN3.ENCBT>
#### p.can3.hr_time_stamp[0]
<link=p.CAN3.HR_TIME_STAMP[0]>
#### can3.hr_time_stamp[6]
<link=p.CAN3.HR_TIME_STAMP[6]>
#### can3.hr_time_stamp[13]
<link=p.CAN3.HR_TIME_STAMP[13]>
#### p.CAN3.HR_TIME_STAMP[18]
<lang=dft>
 (ro)  [1;33m0x401d8c78[0m (0x401d8000 + 0x0c78)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[18]
<link=p.CAN3.HR_TIME_STAMP[18]>
#### can3.hr_time_stamp[22]
<link=p.CAN3.HR_TIME_STAMP[22]>
#### p.CAN3.HR_TIME_STAMP[23]
<lang=dft>
 (ro)  [1;33m0x401d8c8c[0m (0x401d8000 + 0x0c8c)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### CAN3.HR_TIME_STAMP[25]
<link=p.CAN3.HR_TIME_STAMP[25]>
#### p.CAN3.HR_TIME_STAMP[29]
<lang=dft>
 (ro)  [1;33m0x401d8ca4[0m (0x401d8000 + 0x0ca4)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[29]
<link=p.CAN3.HR_TIME_STAMP[29]>
#### p.CAN3.HR_TIME_STAMP[46]
<lang=dft>
 (ro)  [1;33m0x401d8ce8[0m (0x401d8000 + 0x0ce8)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.hr_time_stamp[47]
<link=p.CAN3.HR_TIME_STAMP[47]>
#### CAN3.HR_TIME_STAMP[49]
<link=p.CAN3.HR_TIME_STAMP[49]>
#### p.can3.hr_time_stamp[51]
<link=p.CAN3.HR_TIME_STAMP[51]>
#### p.CAN3.HR_TIME_STAMP[52]
<lang=dft>
 (ro)  [1;33m0x401d8d00[0m (0x401d8000 + 0x0d00)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### can3.erffel[1]
<link=p.CAN3.ERFFEL[1]>
#### p.CAN3.ERFFEL[3]
<lang=dft>
 (rw)  [1;33m0x401db00c[0m (0x401d8000 + 0x300c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[7]
<link=p.CAN3.ERFFEL[7]>
#### can3.erffel[11]
<link=p.CAN3.ERFFEL[11]>
#### CAN3.ERFFEL[15]
<link=p.CAN3.ERFFEL[15]>
#### p.CAN3.ERFFEL[18]
<lang=dft>
 (rw)  [1;33m0x401db048[0m (0x401d8000 + 0x3048)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[25]
<link=p.CAN3.ERFFEL[25]>
#### CAN3.ERFFEL[30]
<link=p.CAN3.ERFFEL[30]>
#### p.CAN3.ERFFEL[35]
<lang=dft>
 (rw)  [1;33m0x401db08c[0m (0x401d8000 + 0x308c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[37]
<link=p.CAN3.ERFFEL[37]>
#### p.CAN3.ERFFEL[40]
<lang=dft>
 (rw)  [1;33m0x401db0a0[0m (0x401d8000 + 0x30a0)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[45]
<lang=dft>
 (rw)  [1;33m0x401db0b4[0m (0x401d8000 + 0x30b4)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[45]
<link=p.CAN3.ERFFEL[45]>
#### p.can3.erffel[57]
<link=p.CAN3.ERFFEL[57]>
#### can3.erffel[58]
<link=p.CAN3.ERFFEL[58]>
#### p.CAN3.ERFFEL[69]
<lang=dft>
 (rw)  [1;33m0x401db114[0m (0x401d8000 + 0x3114)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[69]
<link=p.CAN3.ERFFEL[69]>
#### p.can3.erffel[71]
<link=p.CAN3.ERFFEL[71]>
#### p.CAN3.ERFFEL[74]
<lang=dft>
 (rw)  [1;33m0x401db128[0m (0x401d8000 + 0x3128)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[82]
<link=p.CAN3.ERFFEL[82]>
#### CAN3.ERFFEL[88]
<link=p.CAN3.ERFFEL[88]>
#### p.can3.erffel[90]
<link=p.CAN3.ERFFEL[90]>
#### CAN3.ERFFEL[101]
<link=p.CAN3.ERFFEL[101]>
#### p.can3.erffel[103]
<link=p.CAN3.ERFFEL[103]>
#### p.can3.erffel[108]
<link=p.CAN3.ERFFEL[108]>
#### p.CAN3.ERFFEL[122]
<lang=dft>
 (rw)  [1;33m0x401db1e8[0m (0x401d8000 + 0x31e8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[125]
<link=p.CAN3.ERFFEL[125]>
#### CAN3.ERFFEL[127]
<link=p.CAN3.ERFFEL[127]>
#### p.tmr1.comp21
<link=p.TMR1.COMP21>
#### TMR1.COMP23
<link=p.TMR1.COMP23>
#### p.tmr1.load1
<link=p.TMR1.LOAD1>
#### tmr1.hold0
<link=p.TMR1.HOLD0>
#### p.TMR1.CNTR0
<lang=dft>
 (rw)  [1;33m0x401dc00a[0m (0x401dc000 + 0x000a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### p.tmr1.cntr2
<link=p.TMR1.CNTR2>
#### TMR1.CTRL1
<link=p.TMR1.CTRL1>
#### p.TMR1.CMPLD11
<lang=dft>
 (rw)  [1;33m0x401dc030[0m (0x401dc000 + 0x0030)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### p.tmr1.csctrl1
<link=p.TMR1.CSCTRL1>
#### tmr1.csctrl2
<link=p.TMR1.CSCTRL2>
#### TMR1.FILT2
<link=p.TMR1.FILT2>
#### TMR1.DMA2
<link=p.TMR1.DMA2>
#### tmr2.hold3
<link=p.TMR2.HOLD3>
#### TMR2.CNTR1
<link=p.TMR2.CNTR1>
#### tmr2.ctrl2
<link=p.TMR2.CTRL2>
#### p.tmr2.ctrl3
<link=p.TMR2.CTRL3>
#### p.TMR2.SCTRL1
<lang=dft>
 (rw)  [1;33m0x401e002e[0m (0x401e0000 + 0x002e)
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
#### p.TMR2.CMPLD12
<lang=dft>
 (rw)  [1;33m0x401e0050[0m (0x401e0000 + 0x0050)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### p.tmr2.cmpld23
<link=p.TMR2.CMPLD23>
#### TMR2.CSCTRL2
<link=p.TMR2.CSCTRL2>
#### p.tmr2.csctrl3
<link=p.TMR2.CSCTRL3>
#### p.TMR2.FILT1
<lang=dft>
 (rw)  [1;33m0x401e0036[0m (0x401e0000 + 0x0036)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### p.TMR2.DMA3
<lang=dft>
 (rw)  [1;33m0x401e0078[0m (0x401e0000 + 0x0078)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### tmr3.comp12
<link=p.TMR3.COMP12>
#### TMR3.COMP12
<link=p.TMR3.COMP12>
#### p.TMR3.CAPT1
<lang=dft>
 (rw)  [1;33m0x401e4024[0m (0x401e4000 + 0x0024)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### p.tmr3.capt3
<link=p.TMR3.CAPT3>
#### p.tmr3.load3
<link=p.TMR3.LOAD3>
#### tmr3.hold1
<link=p.TMR3.HOLD1>
#### tmr3.cntr1
<link=p.TMR3.CNTR1>
#### TMR3.CMPLD10
<link=p.TMR3.CMPLD10>
#### p.tmr3.cmpld21
<link=p.TMR3.CMPLD21>
#### TMR3.CSCTRL0
<link=p.TMR3.CSCTRL0>
#### p.TMR3.FILT0
<lang=dft>
 (rw)  [1;33m0x401e4016[0m (0x401e4000 + 0x0016)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### p.TMR3.DMA1
<lang=dft>
 (rw)  [1;33m0x401e4038[0m (0x401e4000 + 0x0038)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### p.tmr3.enbl
<link=p.TMR3.ENBL>
#### p.tmr4.comp12
<link=p.TMR4.COMP12>
#### p.tmr4.comp23
<link=p.TMR4.COMP23>
#### tmr4.capt1
<link=p.TMR4.CAPT1>
#### p.tmr4.hold1
<link=p.TMR4.HOLD1>
#### TMR4.CTRL0
<link=p.TMR4.CTRL0>
#### p.TMR4.SCTRL2
<lang=dft>
 (rw)  [1;33m0x401e804e[0m (0x401e8000 + 0x004e)
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
#### TMR4.CMPLD10
<link=p.TMR4.CMPLD10>
#### TMR4.CMPLD21
<link=p.TMR4.CMPLD21>
#### tmr4.csctrl0
<link=p.TMR4.CSCTRL0>
#### TMR4.FILT0
<link=p.TMR4.FILT0>
#### p.TMR4.DMA0
<lang=dft>
 (rw)  [1;33m0x401e8018[0m (0x401e8000 + 0x0018)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### GPT1.IR
<link=p.GPT1.IR>
#### GPT1.ICR2
<link=p.GPT1.ICR2>
#### gpt1.cnt
<link=p.GPT1.CNT>
#### gpt2.cr
<link=p.GPT2.CR>
#### p.GPT2.PR
<lang=dft>
 (rw)  [1;33m0x401f0004[0m (0x401f0000 + 0x0004)
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
#### GPT2.SR
<link=p.GPT2.SR>
#### GPT2.OCR1
<link=p.GPT2.OCR1>
#### p.gpt2.icr2
<link=p.GPT2.ICR2>
#### GPT2.ICR2
<link=p.GPT2.ICR2>
#### p.OCOTP
<lang=dft>
base: 0x401f4000
ANA0            ANA1            ANA2            CFG0            
CFG1            CFG2            CFG3            CFG4            
CFG5            CFG6            CRC_ADDR        CRC_VALUE       
CTRL            CTRL_CLR        CTRL_SET        CTRL_TOG        
DATA            GP1             GP2             GP30            
GP31            GP32            GP33            GP40            
GP41            GP42            GP43            LOCK            
MAC0            MAC1            MAC2            MEM0            
MEM1            MEM2            MEM3            MEM4            
MISC_CONF0      MISC_CONF1      OTPMK0          OTPMK1          
OTPMK2          OTPMK3          OTPMK4          OTPMK5          
OTPMK6          OTPMK7          OTPMK_CRC32     READ_CTRL       
READ_FUSE_DATA  ROM_PATCH0      ROM_PATCH1      ROM_PATCH2      
ROM_PATCH3      ROM_PATCH4      ROM_PATCH5      ROM_PATCH6      
ROM_PATCH7      SCS             SCS_CLR         SCS_SET         
SCS_TOG         SJC_RESP0       SJC_RESP1       SRK0            
SRK1            SRK2            SRK3            SRK4            
SRK5            SRK6            SRK7            SRK_REVOKE      
SW_GP1          SW_GP20         SW_GP21         SW_GP22         
SW_GP23         SW_STICKY       TIMING          TIMING2         
VERSION         
输入 p.OCOTP.{reg_name} 以查看寄存器的详细信息
type p.OCOTP.{reg_name} to check details of registers
</lang>
#### ocotp.ctrl_set
<link=p.OCOTP.CTRL_SET>
#### OCOTP.TIMING
<link=p.OCOTP.TIMING>
#### OCOTP.DATA
<link=p.OCOTP.DATA>
#### p.OCOTP.CRC_ADDR
<lang=dft>
 (rw)  [1;33m0x401f4070[0m (0x401f4000 + 0x0070)
OTP Controller CRC test address
 (rw) (08)  [0;32mDATA_START_ADDR[0m  - [07:00] -  DATA_START_ADDR
 (rw) (08)  [0;32mDATA_END_ADDR[0m  - [15:08] -  DATA_END_ADDR
 (rw) (08)  [0;32mCRC_ADDR[0m  - [23:16] -  CRC_ADDR
 (rw) (01)  [0;32mOTPMK_CRC[0m  - [24:24] -  OTPMK_CRC
 (ro) (07)  [0;32mRSVD0[0m  - [31:25] -  RSVD0
</lang>
#### p.ocotp.crc_addr
<link=p.OCOTP.CRC_ADDR>
#### p.ocotp.lock
<link=p.OCOTP.LOCK>
#### p.OCOTP.CFG0
<lang=dft>
 (rw)  [1;33m0x401f4410[0m (0x401f4000 + 0x0410)
Value of OTP Bank0 Word1 (Configuration and Manufacturing Info.)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.cfg0
<link=p.OCOTP.CFG0>
#### p.ocotp.otpmk4
<link=p.OCOTP.OTPMK4>
#### p.OCOTP.SRK1
<lang=dft>
 (rw)  [1;33m0x401f4590[0m (0x401f4000 + 0x0590)
Shadow Register for OTP Bank3 Word1 (SRK Hash)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.srk1
<link=p.OCOTP.SRK1>
#### ocotp.srk1
<link=p.OCOTP.SRK1>
#### OCOTP.SRK1
<link=p.OCOTP.SRK1>
#### p.OCOTP.SJC_RESP0
<lang=dft>
 (rw)  [1;33m0x401f4600[0m (0x401f4000 + 0x0600)
Value of OTP Bank4 Word0 (Secure JTAG Response Field)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.GP2
<lang=dft>
 (rw)  [1;33m0x401f4670[0m (0x401f4000 + 0x0670)
Value of OTP Bank4 Word7 (General Purpose Customer Defined Info)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.SW_GP22
<lang=dft>
 (rw)  [1;33m0x401f46b0[0m (0x401f4000 + 0x06b0)
Value of OTP Bank5 Word3 (SW GP2)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### ocotp.misc_conf1
<link=p.OCOTP.MISC_CONF1>
#### p.ocotp.rom_patch5
<link=p.OCOTP.ROM_PATCH5>
#### ocotp.rom_patch6
<link=p.OCOTP.ROM_PATCH6>
#### p.OCOTP.GP40
<lang=dft>
 (rw)  [1;33m0x401f48c0[0m (0x401f4000 + 0x08c0)
Value of OTP Bank7 Word4 (GP4)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.GP41
<link=p.OCOTP.GP41>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_04
<lang=dft>
 (rw)  [1;33m0x401f8024[0m (0x401f8000 + 0x0024)
SW_MUX_CTL_PAD_GPIO_EMC_04 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA04 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMA02 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: SAI2_TX_DATA of instance: sai2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT06 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO04 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO04 of instance: gpio4
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_04
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_08>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_13
<lang=dft>
 (rw)  [1;33m0x401f8048[0m (0x401f8000 + 0x0048)
SW_MUX_CTL_PAD_GPIO_EMC_13 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR04 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_IN25 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART3_TX of instance: lpuart3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: MQS_RIGHT of instance: mqs
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXPWM1_PWMB03 of instance: flexpwm1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO13 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_B_DATA00 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_13
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_13>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_26
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_26>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_35
<lang=dft>
 (rw)  [1;33m0x401f80a0[0m (0x401f8000 + 0x00a0)
SW_MUX_CTL_PAD_GPIO_EMC_35 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA13 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT18 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: GPT1_COMPARE1 of instance: gpt1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI3_RX_BCLK of instance: sai3
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA18 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO21 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC1_CD_B of instance: usdhc1
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RDATA00 of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_35
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_35
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_35>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b0_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_02>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_03
<lang=dft>
 (rw)  [1;33m0x401f80c8[0m (0x401f8000 + 0x00c8)
SW_MUX_CTL_PAD_GPIO_AD_B0_03 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXCAN2_RX of instance: flexcan2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT17 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART6_RX of instance: lpuart6
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: USB_OTG1_OC of instance: usb
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXPWM1_PWMX01 of instance: flexpwm1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO03 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: REF_CLK_24M of instance: anatop
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: LPSPI3_PCS0 of instance: lpspi3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_03
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_10
<lang=dft>
 (rw)  [1;33m0x401f80e4[0m (0x401f8000 + 0x00e4)
SW_MUX_CTL_PAD_GPIO_AD_B0_10 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: JTAG_TDO of instance: jtag_mux
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMA03 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ENET_CRS of instance: enet
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI2_MCLK of instance: sai2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA03 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO10 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: XBAR1_IN22 of instance: xbar1
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: ENET_1588_EVENT0_OUT of instance: enet
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXCAN3_TX of instance: flexcan3/canfd
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: ARM_TRACE_SWO of instance: cm7_mx6rt
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_10
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_14>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_04
<lang=dft>
 (rw)  [1;33m0x401f810c[0m (0x401f8000 + 0x010c)
SW_MUX_CTL_PAD_GPIO_AD_B1_04 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPIB_DATA03 of instance: flexspi
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: ENET_MDC of instance: enet
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART3_CTS_B of instance: lpuart3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SPDIF_SR_CLK of instance: spdif
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_PIXCLK of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO20 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_DATA0 of instance: usdhc2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_ROW05 of instance: kpp
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT2_CAPTURE2 of instance: gpt2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO04 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_04
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_08>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_05>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_08>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_12>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_01
<lang=dft>
 (rw)  [1;33m0x401f8180[0m (0x401f8000 + 0x0180)
SW_MUX_CTL_PAD_GPIO_B1_01 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA13 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT15 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART4_RX of instance: lpuart4
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_DATA00 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO17 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO17 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXPWM1_PWMB03 of instance: flexpwm1
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RDATA00 of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO17 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_01
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_02>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_11>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_15>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_03>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_03>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_01
<lang=dft>
 (rw)  [1;33m0x401f81d8[0m (0x401f8000 + 0x01d8)
SW_MUX_CTL_PAD_GPIO_SD_B1_01 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_DATA2 of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIB_DATA02 of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXPWM1_PWMB03 of instance: flexpwm1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_DATA02 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPUART4_RX of instance: lpuart4
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO01 of instance: gpio3
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: SAI3_TX_DATA of instance: sai3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_01
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_07>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b1_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_08>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_04>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_09
<lang=dft>
 (rw)  [1;33m0x401f8228[0m (0x401f8000 + 0x0228)
SW_PAD_CTL_PAD_GPIO_EMC_09 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_12
<lang=dft>
 (rw)  [1;33m0x401f8234[0m (0x401f8000 + 0x0234)
SW_PAD_CTL_PAD_GPIO_EMC_12 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_15>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_18
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_18>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_22
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_22>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_29
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_29>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_33
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_33>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_36
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_36>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_40
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_40>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_08
<lang=dft>
 (rw)  [1;33m0x401f82cc[0m (0x401f8000 + 0x02cc)
SW_PAD_CTL_PAD_GPIO_AD_B0_08 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_12>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_13>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_14
<lang=dft>
 (rw)  [1;33m0x401f82e4[0m (0x401f8000 + 0x02e4)
SW_PAD_CTL_PAD_GPIO_AD_B0_14 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_15>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_06
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_06>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_09>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_11>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_12>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_13>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_14
<lang=dft>
 (rw)  [1;33m0x401f8324[0m (0x401f8000 + 0x0324)
SW_PAD_CTL_PAD_GPIO_AD_B1_14 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_03>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_03>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_10>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_03
<lang=dft>
 (rw)  [1;33m0x401f8378[0m (0x401f8000 + 0x0378)
SW_PAD_CTL_PAD_GPIO_B1_03 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_04>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_03>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_00
<lang=dft>
 (rw)  [1;33m0x401f83c4[0m (0x401f8000 + 0x03c4)
SW_PAD_CTL_PAD_GPIO_SD_B1_00 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_03>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_09>
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_10>
#### IOMUXC.CSI_DATA03_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA03_SELECT_INPUT>
#### p.iomuxc.csi_data09_select_input
<link=p.IOMUXC.CSI_DATA09_SELECT_INPUT>
#### iomuxc.enet_rxen_select_input
<link=p.IOMUXC.ENET_RXEN_SELECT_INPUT>
#### p.iomuxc.enet0_timer_select_input
<link=p.IOMUXC.ENET0_TIMER_SELECT_INPUT>
#### iomuxc.flexcan2_rx_select_input
<link=p.IOMUXC.FLEXCAN2_RX_SELECT_INPUT>
#### iomuxc.flexpwm1_pwmb0_select_input
<link=p.IOMUXC.FLEXPWM1_PWMB0_SELECT_INPUT>
#### p.iomuxc.flexpwm1_pwmb2_select_input
<link=p.IOMUXC.FLEXPWM1_PWMB2_SELECT_INPUT>
#### IOMUXC.FLEXPWM4_PWMA2_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM4_PWMA2_SELECT_INPUT>
#### IOMUXC.FLEXPWM4_PWMA3_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM4_PWMA3_SELECT_INPUT>
#### iomuxc.flexspia_dqs_select_input
<link=p.IOMUXC.FLEXSPIA_DQS_SELECT_INPUT>
#### iomuxc.flexspia_data2_select_input
<link=p.IOMUXC.FLEXSPIA_DATA2_SELECT_INPUT>
#### IOMUXC.LPI2C1_SDA_SELECT_INPUT
<link=p.IOMUXC.LPI2C1_SDA_SELECT_INPUT>
#### IOMUXC.LPI2C3_SCL_SELECT_INPUT
<link=p.IOMUXC.LPI2C3_SCL_SELECT_INPUT>
#### iomuxc.lpspi2_pcs0_select_input
<link=p.IOMUXC.LPSPI2_PCS0_SELECT_INPUT>
#### p.IOMUXC.LPSPI2_SDI_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8504[0m (0x401f8000 + 0x0504)
LPSPI2_SDI_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_09_ALT4 :
         Selecting Pad: GPIO_SD_B1_09 for Mode: ALT4
      0x1 - GPIO_EMC_03_ALT2 :
         Selecting Pad: GPIO_EMC_03 for Mode: ALT2
</lang>
#### iomuxc.lpuart3_cts_b_select_input
<link=p.IOMUXC.LPUART3_CTS_B_SELECT_INPUT>
#### p.IOMUXC.LPUART3_TX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f853c[0m (0x401f8000 + 0x053c)
LPUART3_TX_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B1_06_ALT2 :
         Selecting Pad: GPIO_AD_B1_06 for Mode: ALT2
      0x1 - GPIO_EMC_13_ALT2 :
         Selecting Pad: GPIO_EMC_13 for Mode: ALT2
      0x2 - GPIO_B0_08_ALT3 :
         Selecting Pad: GPIO_B0_08 for Mode: ALT3
</lang>
#### p.iomuxc.lpuart8_rx_select_input
<link=p.IOMUXC.LPUART8_RX_SELECT_INPUT>
#### IOMUXC.QTIMER3_TIMER1_SELECT_INPUT
<link=p.IOMUXC.QTIMER3_TIMER1_SELECT_INPUT>
#### p.iomuxc.sai1_rx_data3_select_input
<link=p.IOMUXC.SAI1_RX_DATA3_SELECT_INPUT>
#### p.IOMUXC.USB_OTG2_OC_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85cc[0m (0x401f8000 + 0x05cc)
USB_OTG2_OC_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_AD_B0_14_ALT0 :
         Selecting Pad: GPIO_AD_B0_14 for Mode: ALT0
      0x1 - GPIO_EMC_40_ALT3 :
         Selecting Pad: GPIO_EMC_40 for Mode: ALT3
</lang>
#### iomuxc.usdhc2_cd_b_select_input
<link=p.IOMUXC.USDHC2_CD_B_SELECT_INPUT>
#### p.IOMUXC.USDHC2_WP_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8608[0m (0x401f8000 + 0x0608)
USDHC2_WP_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_37_ALT6 :
         Selecting Pad: GPIO_EMC_37 for Mode: ALT6
      0x1 - GPIO_AD_B1_10_ALT6 :
         Selecting Pad: GPIO_AD_B1_10 for Mode: ALT6
</lang>
#### iomuxc.xbar1_in05_select_input
<link=p.IOMUXC.XBAR1_IN05_SELECT_INPUT>
#### p.iomuxc.xbar1_in09_select_input
<link=p.IOMUXC.XBAR1_IN09_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN23_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f863c[0m (0x401f8000 + 0x063c)
XBAR1_IN23_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_37_ALT1 :
         Selecting Pad: GPIO_EMC_37 for Mode: ALT1
      0x1 - GPIO_AD_B0_11_ALT6 :
         Selecting Pad: GPIO_AD_B0_11 for Mode: ALT6
</lang>
#### p.IOMUXC.XBAR1_IN24_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8640[0m (0x401f8000 + 0x0640)
XBAR1_IN24_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_12_ALT1 :
         Selecting Pad: GPIO_EMC_12 for Mode: ALT1
      0x1 - GPIO_AD_B0_14_ALT1 :
         Selecting Pad: GPIO_AD_B0_14 for Mode: ALT1
</lang>
#### iomuxc.xbar1_in25_select_input
<link=p.IOMUXC.XBAR1_IN25_SELECT_INPUT>
#### IOMUXC.XBAR1_IN21_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN21_SELECT_INPUT>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_02
<lang=dft>
 (rw)  [1;33m0x401f8664[0m (0x401f8000 + 0x0664)
SW_MUX_CTL_PAD_GPIO_SPI_B0_02 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_DATA00 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_02
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_07>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_11
<lang=dft>
 (rw)  [1;33m0x401f8688[0m (0x401f8000 + 0x0688)
SW_MUX_CTL_PAD_GPIO_SPI_B0_11 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_B_DATA00 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_11
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_13>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_01>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_05
<lang=dft>
 (rw)  [1;33m0x401f86a8[0m (0x401f8000 + 0x06a8)
SW_MUX_CTL_PAD_GPIO_SPI_B1_05 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_SCLK of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B1_05
</lang>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_02
<lang=dft>
 (rw)  [1;33m0x401f86bc[0m (0x401f8000 + 0x06bc)
SW_PAD_CTL_PAD_GPIO_SPI_B0_02 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_04>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_04>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_09>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_05>
#### p.IOMUXC.FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8748[0m (0x401f8000 + 0x0748)
FLEXSPI2_IPP_IND_IO_FB_BIT2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_15_ALT8 :
         Selecting Pad: GPIO_EMC_15 for Mode: ALT8
      0x1 - GPIO_SPI_B0_03_ALT0 :
         Selecting Pad: GPIO_SPI_B0_03 for Mode: ALT0
</lang>
#### iomuxc.sai3_ipp_ind_sai_rxbclk_select_input
<link=p.IOMUXC.SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT>
#### p.iomuxc.sai3_ipp_ind_sai_txbclk_select_input
<link=p.IOMUXC.SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT>
#### p.kpp.kpsr
<link=p.KPP.KPSR>
#### flexspi.ahbrxbuf2cr0
<link=p.FLEXSPI.AHBRXBUF2CR0>
#### FLEXSPI.FLSHCR4
<link=p.FLEXSPI.FLSHCR4>
#### p.FLEXSPI.IPCMD
<lang=dft>
 (rw)  [1;33m0x402a80b0[0m (0x402a8000 + 0x00b0)
IP Command Register
 (rw) (01)  [0;32mTRG[0m  - [00:00] -  Setting this bit will trigger an IP Command.
</lang>
#### flexspi.sts0
<link=p.FLEXSPI.STS0>
#### p.FLEXSPI.IPTXFSTS
<lang=dft>
 (ro)  [1;33m0x402a80f4[0m (0x402a8000 + 0x00f4)
IP TX FIFO Status Register
 (ro) (08)  [0;32mFILL[0m  - [07:00] -  Fill level of IP TX FIFO.
 (ro) (16)  [0;32mWRCNTR[0m  - [31:16] -  Total Write Data Counter: WRCNTR * 64 Bits.
</lang>
#### FLEXSPI.RFDR[1]
<link=p.FLEXSPI.RFDR[1]>
#### p.flexspi.rfdr[10]
<link=p.FLEXSPI.RFDR[10]>
#### flexspi.rfdr[11]
<link=p.FLEXSPI.RFDR[11]>
#### FLEXSPI.RFDR[21]
<link=p.FLEXSPI.RFDR[21]>
#### flexspi.rfdr[27]
<link=p.FLEXSPI.RFDR[27]>
#### p.flexspi.tfdr[6]
<link=p.FLEXSPI.TFDR[6]>
#### p.FLEXSPI.TFDR[9]
<lang=dft>
 (wo)  [1;33m0x402a81a4[0m (0x402a8000 + 0x01a4)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi.tfdr[16]
<link=p.FLEXSPI.TFDR[16]>
#### flexspi.tfdr[17]
<link=p.FLEXSPI.TFDR[17]>
#### FLEXSPI.TFDR[22]
<link=p.FLEXSPI.TFDR[22]>
#### p.FLEXSPI.TFDR[28]
<lang=dft>
 (wo)  [1;33m0x402a81f0[0m (0x402a8000 + 0x01f0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi.tfdr[29]
<link=p.FLEXSPI.TFDR[29]>
#### p.FLEXSPI.TFDR[31]
<lang=dft>
 (wo)  [1;33m0x402a81fc[0m (0x402a8000 + 0x01fc)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI.TFDR[31]
<link=p.FLEXSPI.TFDR[31]>
#### FLEXSPI.LUT[2]
<link=p.FLEXSPI.LUT[2]>
#### flexspi.lut[10]
<link=p.FLEXSPI.LUT[10]>
#### flexspi.lut[15]
<link=p.FLEXSPI.LUT[15]>
#### p.FLEXSPI.LUT[23]
<lang=dft>
 (rw)  [1;33m0x402a825c[0m (0x402a8000 + 0x025c)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[30]
<lang=dft>
 (rw)  [1;33m0x402a8278[0m (0x402a8000 + 0x0278)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[30]
<link=p.FLEXSPI.LUT[30]>
#### p.flexspi.lut[31]
<link=p.FLEXSPI.LUT[31]>
#### p.flexspi.lut[34]
<link=p.FLEXSPI.LUT[34]>
#### p.FLEXSPI.LUT[41]
<lang=dft>
 (rw)  [1;33m0x402a82a4[0m (0x402a8000 + 0x02a4)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi.lut[42]
<link=p.FLEXSPI.LUT[42]>
#### FLEXSPI.LUT[45]
<link=p.FLEXSPI.LUT[45]>
#### flexspi.lut[49]
<link=p.FLEXSPI.LUT[49]>
#### p.FLEXSPI.LUT[51]
<lang=dft>
 (rw)  [1;33m0x402a82cc[0m (0x402a8000 + 0x02cc)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[52]
<link=p.FLEXSPI.LUT[52]>
#### FLEXSPI.LUT[55]
<link=p.FLEXSPI.LUT[55]>
#### FLEXSPI.LUT[63]
<link=p.FLEXSPI.LUT[63]>
#### p.FLEXSPI2.MCR0
<lang=dft>
 (rw)  [1;33m0x402a4000[0m (0x402a4000 + 0x0000)
Module Control Register 0
 (rw) (01)  [0;32mSWRESET[0m  - [00:00] -  Software Reset
 (rw) (01)  [0;32mMDIS[0m  - [01:01] -  Module Disable
 (rw) (02)  [0;32mRXCLKSRC[0m  - [05:04] -  Sample Clock source selection for Flash Reading
      0 - RXCLKSRC_0 :
         Dummy Read strobe generated by FlexSPI Controller and loopback internal
         ly.
      0x1 - RXCLKSRC_1 :
         Dummy Read strobe generated by FlexSPI Controller and loopback from DQS
          pad.
      0x3 - RXCLKSRC_3 :
         Flash provided Read strobe and input from DQS pad
 (rw) (01)  [0;32mARDFEN[0m  - [06:06] -  Enable AHB bus Read Access to IP RX FIFO.
      0 - ARDFEN_0 :
         IP RX FIFO should be read by IP Bus. AHB Bus read access to IP RX FIFO 
         memory space will get bus error response.
      0x1 - ARDFEN_1 :
         IP RX FIFO should be read by AHB Bus. IP Bus read access to IP RX FIFO 
         memory space will always return data zero but no bus error response.
 (rw) (01)  [0;32mATDFEN[0m  - [07:07] -  Enable AHB bus Write Access to IP TX FIFO.
      0 - ATDFEN_0 :
         IP TX FIFO should be written by IP Bus. AHB Bus write access to IP TX F
         IFO memory space will get bus error response.
      0x1 - ATDFEN_1 :
         IP TX FIFO should be written by AHB Bus. IP Bus write access to IP TX F
         IFO memory space will be ignored but no bus error response.
 (rw) (01)  [0;32mHSEN[0m  - [11:11] -  Half Speed Serial Flash access Enable.
      0 - HSEN_0 :
         Disable divide by 2 of serial flash clock for half speed commands.
      0x1 - HSEN_1 :
         Enable divide by 2 of serial flash clock for half speed commands.
 (rw) (01)  [0;32mDOZEEN[0m  - [12:12] -  Doze mode enable bit
      0 - DOZEEN_0 :
         Doze mode support disabled. AHB clock and serial clock will not be gate
         d off when there is doze mode request from system.
      0x1 - DOZEEN_1 :
         Doze mode support enabled. AHB clock and serial clock will be gated off
          when there is doze mode request from system.
 (rw) (01)  [0;32mCOMBINATIONEN[0m  - [13:13] -  This bit is to support Flash Octal mode access by combining Port A and B Data p
 ins (SIOA[3:0] and SIOB[3:0]).
      0 - COMBINATIONEN_0 :
         Disable.
      0x1 - COMBINATIONEN_1 :
         Enable.
 (rw) (01)  [0;32mSCKFREERUNEN[0m  - [14:14] -  This bit is used to force SCK output free-running. For FPGA applications, exter
 nal device may use SCK clock as reference clock to its internal PLL. If SCK fre
 e-running is enabled, data sampling with loopback clock from SCK pad is not sup
 ported (MCR0[RXCLKSRC]=2).
      0 - SCKFREERUNEN_0 :
         Disable.
      0x1 - SCKFREERUNEN_1 :
         Enable.
 (rw) (08)  [0;32mIPGRANTWAIT[0m  - [23:16] -  Time out wait cycle for IP command grant.
 (rw) (08)  [0;32mAHBGRANTWAIT[0m  - [31:24] -  Timeout wait cycle for AHB command grant.
</lang>
#### flexspi2.mcr1
<link=p.FLEXSPI2.MCR1>
#### FLEXSPI2.AHBCR
<link=p.FLEXSPI2.AHBCR>
#### p.FLEXSPI2.LUTKEY
<lang=dft>
 (rw)  [1;33m0x402a4018[0m (0x402a4000 + 0x0018)
LUT Key Register
 (rw) (32)  [0;32mKEY[0m  - [31:00] -  The Key to lock or unlock LUT.
</lang>
#### p.flexspi2.flshcr1b1
<link=p.FLEXSPI2.FLSHCR1B1>
#### p.FLEXSPI2.FLSHCR2A1
<lang=dft>
 (rw)  [1;33m0x402a4080[0m (0x402a4000 + 0x0080)
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
#### FLEXSPI2.FLSHCR2A1
<link=p.FLEXSPI2.FLSHCR2A1>
#### p.FLEXSPI2.IPCMD
<lang=dft>
 (rw)  [1;33m0x402a40b0[0m (0x402a4000 + 0x00b0)
IP Command Register
 (rw) (01)  [0;32mTRG[0m  - [00:00] -  Setting this bit will trigger an IP Command.
</lang>
#### p.FLEXSPI2.IPRXFCR
<lang=dft>
 (rw)  [1;33m0x402a40b8[0m (0x402a4000 + 0x00b8)
IP RX FIFO Control Register
 (rw) (01)  [0;32mCLRIPRXF[0m  - [00:00] -  Clear all valid data entries in IP RX FIFO.
 (rw) (01)  [0;32mRXDMAEN[0m  - [01:01] -  IP RX FIFO reading by DMA enabled.
      0 - RXDMAEN_0 :
         IP RX FIFO would be read by processor.
      0x1 - RXDMAEN_1 :
         IP RX FIFO would be read by DMA.
 (rw) (04)  [0;32mRXWMRK[0m  - [05:02] -  Watermark level is (RXWMRK+1)*64 Bits.
</lang>
#### flexspi2.dllcrb
<link=p.FLEXSPI2.DLLCRB>
#### p.flexspi2.sts0
<link=p.FLEXSPI2.STS0>
#### flexspi2.sts2
<link=p.FLEXSPI2.STS2>
#### p.flexspi2.rfdr[2]
<link=p.FLEXSPI2.RFDR[2]>
#### p.FLEXSPI2.RFDR[5]
<lang=dft>
 (ro)  [1;33m0x402a4114[0m (0x402a4000 + 0x0114)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI2.RFDR[6]
<link=p.FLEXSPI2.RFDR[6]>
#### p.flexspi2.rfdr[8]
<link=p.FLEXSPI2.RFDR[8]>
#### FLEXSPI2.RFDR[9]
<link=p.FLEXSPI2.RFDR[9]>
#### flexspi2.rfdr[13]
<link=p.FLEXSPI2.RFDR[13]>
#### flexspi2.rfdr[14]
<link=p.FLEXSPI2.RFDR[14]>
#### p.FLEXSPI2.RFDR[16]
<lang=dft>
 (ro)  [1;33m0x402a4140[0m (0x402a4000 + 0x0140)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI2.RFDR[21]
<link=p.FLEXSPI2.RFDR[21]>
#### flexspi2.rfdr[25]
<link=p.FLEXSPI2.RFDR[25]>
#### p.FLEXSPI2.RFDR[30]
<lang=dft>
 (ro)  [1;33m0x402a4178[0m (0x402a4000 + 0x0178)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI2.RFDR[31]
<link=p.FLEXSPI2.RFDR[31]>
#### flexspi2.tfdr[1]
<link=p.FLEXSPI2.TFDR[1]>
#### FLEXSPI2.TFDR[2]
<link=p.FLEXSPI2.TFDR[2]>
#### p.FLEXSPI2.TFDR[10]
<lang=dft>
 (wo)  [1;33m0x402a41a8[0m (0x402a4000 + 0x01a8)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI2.TFDR[10]
<link=p.FLEXSPI2.TFDR[10]>
#### p.flexspi2.tfdr[18]
<link=p.FLEXSPI2.TFDR[18]>
#### flexspi2.tfdr[19]
<link=p.FLEXSPI2.TFDR[19]>
#### p.FLEXSPI2.TFDR[21]
<lang=dft>
 (wo)  [1;33m0x402a41d4[0m (0x402a4000 + 0x01d4)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi2.tfdr[23]
<link=p.FLEXSPI2.TFDR[23]>
#### p.FLEXSPI2.TFDR[24]
<lang=dft>
 (wo)  [1;33m0x402a41e0[0m (0x402a4000 + 0x01e0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi2.tfdr[29]
<link=p.FLEXSPI2.TFDR[29]>
#### flexspi2.lut[0]
<link=p.FLEXSPI2.LUT[0]>
#### FLEXSPI2.LUT[9]
<link=p.FLEXSPI2.LUT[9]>
#### p.flexspi2.lut[16]
<link=p.FLEXSPI2.LUT[16]>
#### flexspi2.lut[17]
<link=p.FLEXSPI2.LUT[17]>
#### p.flexspi2.lut[27]
<link=p.FLEXSPI2.LUT[27]>
#### flexspi2.lut[29]
<link=p.FLEXSPI2.LUT[29]>
#### FLEXSPI2.LUT[37]
<link=p.FLEXSPI2.LUT[37]>
#### p.FLEXSPI2.LUT[38]
<lang=dft>
 (rw)  [1;33m0x402a4298[0m (0x402a4000 + 0x0298)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[40]
<lang=dft>
 (rw)  [1;33m0x402a42a0[0m (0x402a4000 + 0x02a0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[45]
<link=p.FLEXSPI2.LUT[45]>
#### p.FLEXSPI2.LUT[47]
<lang=dft>
 (rw)  [1;33m0x402a42bc[0m (0x402a4000 + 0x02bc)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[47]
<link=p.FLEXSPI2.LUT[47]>
#### p.FLEXSPI2.LUT[54]
<lang=dft>
 (rw)  [1;33m0x402a42d8[0m (0x402a4000 + 0x02d8)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[56]
<link=p.FLEXSPI2.LUT[56]>
#### p.flexspi2.lut[57]
<link=p.FLEXSPI2.LUT[57]>
#### p.pxp.stat_clr
<link=p.PXP.STAT_CLR>
#### p.pxp.stat_tog
<link=p.PXP.STAT_TOG>
#### p.PXP.OUT_CTRL_TOG
<lang=dft>
 (rw)  [1;33m0x402b402c[0m (0x402b4000 + 0x002c)
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
#### PXP.OUT_PITCH
<link=p.PXP.OUT_PITCH>
#### p.PXP.OUT_PS_ULC
<lang=dft>
 (rw)  [1;33m0x402b4070[0m (0x402b4000 + 0x0070)
Processed Surface Upper Left Coordinate
 (rw) (14)  [0;32mY[0m  - [13:00] -  This field indicates the upper left Y-coordinate (in pixels) of the processed s
 urface in the output buffer
 (ro) (02)  [0;32mRSVD0[0m  - [15:14] -  Reserved, always set to zero.
 (rw) (14)  [0;32mX[0m  - [29:16] -  This field indicates the upper left X-coordinate (in pixels) of the processed s
 urface (PS) in the output buffer
 (ro) (02)  [0;32mRSVD1[0m  - [31:30] -  Reserved, always set to zero.
</lang>
#### p.PXP.OUT_PS_LRC
<lang=dft>
 (rw)  [1;33m0x402b4080[0m (0x402b4000 + 0x0080)
Processed Surface Lower Right Coordinate
 (rw) (14)  [0;32mY[0m  - [13:00] -  This field indicates the lower right Y-coordinate (in pixels) of the processed 
 surface in the output frame buffer
 (ro) (02)  [0;32mRSVD0[0m  - [15:14] -  Reserved, always set to zero.
 (rw) (14)  [0;32mX[0m  - [29:16] -  This field indicates the lower right X-coordinate (in pixels) of the processed 
 surface (PS) in the output frame buffer
 (ro) (02)  [0;32mRSVD1[0m  - [31:30] -  Reserved, always set to zero.
</lang>
#### PXP.PS_CTRL
<link=p.PXP.PS_CTRL>
#### p.PXP.PS_CTRL_TOG
<lang=dft>
 (rw)  [1;33m0x402b40bc[0m (0x402b4000 + 0x00bc)
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
#### p.pxp.ps_buf
<link=p.PXP.PS_BUF>
#### p.PXP.PS_CLRKEYLOW
<lang=dft>
 (rw)  [1;33m0x402b4130[0m (0x402b4000 + 0x0130)
PS Color Key Low
 (rw) (24)  [0;32mPIXEL[0m  - [23:00] -  Low range of color key applied to PS buffer
 (ro) (08)  [0;32mRSVD1[0m  - [31:24] -  Reserved, always set to zero.
</lang>
#### p.pxp.next
<link=p.PXP.NEXT>
#### p.LCDIF.CTRL1_TOG
<lang=dft>
 (rw)  [1;33m0x402b801c[0m (0x402b8000 + 0x001c)
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
#### LCDIF.CTRL2
<link=p.LCDIF.CTRL2>
#### LCDIF.CTRL2_TOG
<link=p.LCDIF.CTRL2_TOG>
#### p.LCDIF.NEXT_BUF
<lang=dft>
 (rw)  [1;33m0x402b8050[0m (0x402b8000 + 0x0050)
LCD Interface Next Buffer Address Register
 (rw) (32)  [0;32mADDR[0m  - [31:00] -  Address of the next frame that will be transmitted by LCDIF.
</lang>
#### p.lcdif.vdctrl2
<link=p.LCDIF.VDCTRL2>
#### LCDIF.VDCTRL3
<link=p.LCDIF.VDCTRL3>
#### p.lcdif.crc_stat
<link=p.LCDIF.CRC_STAT>
#### LCDIF.PIGEONCTRL0_TOG
<link=p.LCDIF.PIGEONCTRL0_TOG>
#### p.LCDIF.PIGEONCTRL2_CLR
<lang=dft>
 (rw)  [1;33m0x402b83a8[0m (0x402b8000 + 0x03a8)
LCDIF Pigeon Mode Control2 Register
 (rw) (01)  [0;32mPIGEON_DATA_EN[0m  - [00:00] -  Pigeon mode data enable
 (rw) (01)  [0;32mPIGEON_CLK_GATE[0m  - [01:01] -  Pigeon mode dot clock gate enable
</lang>
#### LCDIF.PIGEONCTRL2_CLR
<link=p.LCDIF.PIGEONCTRL2_CLR>
#### p.lcdif.pigeonctrl2_tog
<link=p.LCDIF.PIGEONCTRL2_TOG>
#### LCDIF.PIGEON_0_0
<link=p.LCDIF.PIGEON_0_0>
#### lcdif.pigeon_1_0
<link=p.LCDIF.PIGEON_1_0>
#### lcdif.pigeon_2_0
<link=p.LCDIF.PIGEON_2_0>
#### p.lcdif.pigeon_3_1
<link=p.LCDIF.PIGEON_3_1>
#### p.LCDIF.PIGEON_6_1
<lang=dft>
 (rw)  [1;33m0x402b8990[0m (0x402b8000 + 0x0990)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### p.lcdif.pigeon_6_1
<link=p.LCDIF.PIGEON_6_1>
#### p.LCDIF.PIGEON_9_0
<lang=dft>
 (rw)  [1;33m0x402b8a40[0m (0x402b8000 + 0x0a40)
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
#### lcdif.lut_ctrl
<link=p.LCDIF.LUT_CTRL>
#### LCDIF.LUT_CTRL
<link=p.LCDIF.LUT_CTRL>
#### p.LCDIF.LUT1_DATA
<lang=dft>
 (rw)  [1;33m0x402b8b40[0m (0x402b8000 + 0x0b40)
Lookup Table Data Register.
 (rw) (32)  [0;32mDATA[0m  - [31:00] -  Writing this field will load 4 bytes, aligned to four byte boundaries, of data 
 indexed by the ADDR field of the REG_LUT_CTRL register
</lang>
#### CSI.CSICR3
<link=p.CSI.CSICR3>
#### CSI.CSIRFIFO
<link=p.CSI.CSIRFIFO>
#### p.USDHC1
<lang=dft>
base: 0x402c0000
ADMA_ERR_STATUS ADMA_SYS_ADDR   AUTOCMD12_ERR_STATUS  BLK_ATT         
CLK_TUNE_CTRL_STATUS  CMD_ARG         CMD_RSP0        CMD_RSP1        
CMD_RSP2        CMD_RSP3        CMD_XFR_TYP     DATA_BUFF_ACC_PORT  
DLL_CTRL        DLL_STATUS      DS_ADDR         FORCE_EVENT     
HOST_CTRL_CAP   INT_SIGNAL_EN   INT_STATUS      INT_STATUS_EN   
MIX_CTRL        MMC_BOOT        PRES_STATE      PROT_CTRL       
SYS_CTRL        TUNING_CTRL     VEND_SPEC       VEND_SPEC2      
WTMK_LVL        
输入 p.USDHC1.{reg_name} 以查看寄存器的详细信息
type p.USDHC1.{reg_name} to check details of registers
</lang>
#### usdhc1.cmd_rsp0
<link=p.USDHC1.CMD_RSP0>
#### p.usdhc1.cmd_rsp1
<link=p.USDHC1.CMD_RSP1>
#### USDHC1.DATA_BUFF_ACC_PORT
<link=p.USDHC1.DATA_BUFF_ACC_PORT>
#### p.usdhc1.autocmd12_err_status
<link=p.USDHC1.AUTOCMD12_ERR_STATUS>
#### p.USDHC1.HOST_CTRL_CAP
<lang=dft>
 (rw)  [1;33m0x402c0040[0m (0x402c0000 + 0x0040)
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
#### usdhc1.mix_ctrl
<link=p.USDHC1.MIX_CTRL>
#### p.usdhc1.adma_err_status
<link=p.USDHC1.ADMA_ERR_STATUS>
#### p.USDHC1.VEND_SPEC
<lang=dft>
 (rw)  [1;33m0x402c00c0[0m (0x402c0000 + 0x00c0)
Vendor Specific Register
 (rw) (01)  [0;32mVSELECT[0m  - [01:01] -  Voltage Selection
      0 - VSELECT_0 :
         Change the voltage to high voltage range, around 3.0 V
      0x1 - VSELECT_1 :
         Change the voltage to low voltage range, around 1.8 V
 (rw) (01)  [0;32mCONFLICT_CHK_EN[0m  - [02:02] -  Conflict check enable.
      0 - CONFLICT_CHK_EN_0 :
         Conflict check disable
      0x1 - CONFLICT_CHK_EN_1 :
         Conflict check enable
 (rw) (01)  [0;32mAC12_WR_CHKBUSY_EN[0m  - [03:03] -  AC12_WR_CHKBUSY_EN
      0 - AC12_WR_CHKBUSY_EN_0 :
         Do not check busy after auto CMD12 for write data packet
      0x1 - AC12_WR_CHKBUSY_EN_1 :
         Check busy after auto CMD12 for write data packet
 (rw) (01)  [0;32mFRC_SDCLK_ON[0m  - [08:08] -  FRC_SDCLK_ON
      0 - FRC_SDCLK_ON_0 :
         CLK active or inactive is fully controlled by the hardware.
      0x1 - FRC_SDCLK_ON_1 :
         Force CLK active.
 (rw) (01)  [0;32mCRC_CHK_DIS[0m  - [15:15] -  CRC Check Disable
      0 - CRC_CHK_DIS_0 :
         Check CRC16 for every read data packet and check CRC bits for every wri
         te data packet
      0x1 - CRC_CHK_DIS_1 :
         Ignore CRC16 check for every read data packet and ignore CRC bits check
          for every write data packet
 (rw) (01)  [0;32mCMD_BYTE_EN[0m  - [31:31] -  CMD_BYTE_EN
      0 - CMD_BYTE_EN_0 :
         Disable
      0x1 - CMD_BYTE_EN_1 :
         Enable
</lang>
#### USDHC2.CMD_ARG
<link=p.USDHC2.CMD_ARG>
#### USDHC2.HOST_CTRL_CAP
<link=p.USDHC2.HOST_CTRL_CAP>
#### usdhc2.wtmk_lvl
<link=p.USDHC2.WTMK_LVL>
#### p.usdhc2.dll_status
<link=p.USDHC2.DLL_STATUS>
#### usdhc2.dll_status
<link=p.USDHC2.DLL_STATUS>
#### enet.rdar
<link=p.ENET.RDAR>
#### p.enet.ecr
<link=p.ENET.ECR>
#### p.ENET.MSCR
<lang=dft>
 (rw)  [1;33m0x402d8044[0m (0x402d8000 + 0x0044)
MII Speed Control Register
 (rw) (06)  [0;32mMII_SPEED[0m  - [06:01] -  MII Speed
 (rw) (01)  [0;32mDIS_PRE[0m  - [07:07] -  Disable Preamble
      0 - DIS_PRE_0 :
         Preamble enabled.
      0x1 - DIS_PRE_1 :
         Preamble (32 ones) is not prepended to the MII management frame.
 (rw) (03)  [0;32mHOLDTIME[0m  - [10:08] -  Hold time On MDIO Output
      0 - HOLDTIME_0 :
         1 internal module clock cycle
      0x1 - HOLDTIME_1 :
         2 internal module clock cycles
      0x2 - HOLDTIME_2 :
         3 internal module clock cycles
      0x7 - HOLDTIME_7 :
         8 internal module clock cycles
</lang>
#### ENET.IAUR
<link=p.ENET.IAUR>
#### p.ENET.GAUR
<lang=dft>
 (rw)  [1;33m0x402d8120[0m (0x402d8000 + 0x0120)
Descriptor Group Upper Address Register
 (rw) (32)  [0;32mGADDR1[0m  - [31:00] -  Contains the upper 32 bits of the 64-bit hash table used in the address recogni
 tion process for receive frames with a multicast address
</lang>
#### enet.galr
<link=p.ENET.GALR>
#### ENET.GALR
<link=p.ENET.GALR>
#### ENET.RDSR
<link=p.ENET.RDSR>
#### enet.tdsr
<link=p.ENET.TDSR>
#### enet.rsfl
<link=p.ENET.RSFL>
#### ENET.TAFL
<link=p.ENET.TAFL>
#### enet.rmon_t_p128to255
<link=p.ENET.RMON_T_P128TO255>
#### enet.rmon_t_p512to1023
<link=p.ENET.RMON_T_P512TO1023>
#### p.ENET.RMON_T_P1024TO2047
<lang=dft>
 (ro)  [1;33m0x402d823c[0m (0x402d8000 + 0x023c)
Tx 1024- to 2047-byte Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of 1024- to 2047-byte transmit packets
</lang>
#### p.ENET.RMON_T_OCTETS
<lang=dft>
 (ro)  [1;33m0x402d8244[0m (0x402d8000 + 0x0244)
Tx Octets Statistic Register
 (ro) (32)  [0;32mTXOCTS[0m  - [31:00] -  Number of transmit octets
</lang>
#### ENET.IEEE_T_DROP
<link=p.ENET.IEEE_T_DROP>
#### ENET.IEEE_T_FRAME_OK
<link=p.ENET.IEEE_T_FRAME_OK>
#### p.ENET.IEEE_T_MCOL
<lang=dft>
 (ro)  [1;33m0x402d8254[0m (0x402d8000 + 0x0254)
Frames Transmitted with Multiple Collisions Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with multiple collisions
</lang>
#### p.ENET.IEEE_T_CSERR
<lang=dft>
 (ro)  [1;33m0x402d8268[0m (0x402d8000 + 0x0268)
Frames Transmitted with Carrier Sense Error Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with carrier sense error
</lang>
#### p.enet.ieee_t_sqe
<link=p.ENET.IEEE_T_SQE>
#### p.enet.rmon_r_frag
<link=p.ENET.RMON_R_FRAG>
#### p.enet.rmon_r_p64
<link=p.ENET.RMON_R_P64>
#### p.enet.ieee_r_crc
<link=p.ENET.IEEE_R_CRC>
#### p.enet.ieee_r_align
<link=p.ENET.IEEE_R_ALIGN>
#### ENET.IEEE_R_ALIGN
<link=p.ENET.IEEE_R_ALIGN>
#### enet.ieee_r_macerr
<link=p.ENET.IEEE_R_MACERR>
#### p.ENET.ATINC
<lang=dft>
 (rw)  [1;33m0x402d8414[0m (0x402d8000 + 0x0414)
Time-Stamping Clock Period Register
 (rw) (07)  [0;32mINC[0m  - [06:00] -  Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
 (rw) (07)  [0;32mINC_CORR[0m  - [14:08] -  Correction Increment Value
</lang>
#### p.enet.tcsr0
<link=p.ENET.TCSR0>
#### ENET2.EIR
<link=p.ENET2.EIR>
#### p.enet2.rdar
<link=p.ENET2.RDAR>
#### p.enet2.tdar
<link=p.ENET2.TDAR>
#### p.ENET2.MIBC
<lang=dft>
 (rw)  [1;33m0x402d4064[0m (0x402d4000 + 0x0064)
MIB Control Register
 (rw) (01)  [0;32mMIB_CLEAR[0m  - [29:29] -  MIB Clear
      0 - MIB_CLEAR_0 :
         See note above.
      0x1 - MIB_CLEAR_1 :
         All statistics counters are reset to 0.
 (ro) (01)  [0;32mMIB_IDLE[0m  - [30:30] -  MIB Idle
      0 - MIB_IDLE_0 :
         The MIB block is updating MIB counters.
      0x1 - MIB_IDLE_1 :
         The MIB block is not currently updating any MIB counters.
 (rw) (01)  [0;32mMIB_DIS[0m  - [31:31] -  Disable MIB Logic
      0 - MIB_DIS_0 :
         MIB logic is enabled.
      0x1 - MIB_DIS_1 :
         MIB logic is disabled. The MIB logic halts and does not update any MIB 
         counters.
</lang>
#### ENET2.TCR
<link=p.ENET2.TCR>
#### p.ENET2.IALR
<lang=dft>
 (rw)  [1;33m0x402d411c[0m (0x402d4000 + 0x011c)
Descriptor Individual Lower Address Register
 (rw) (32)  [0;32mIADDR2[0m  - [31:00] -  Contains the lower 32 bits of the 64-bit hash table used in the address recogni
 tion process for receive frames with a unicast address
</lang>
#### enet2.galr
<link=p.ENET2.GALR>
#### p.enet2.rdsr
<link=p.ENET2.RDSR>
#### p.ENET2.RSEM
<lang=dft>
 (rw)  [1;33m0x402d4194[0m (0x402d4000 + 0x0194)
Receive FIFO Section Empty Threshold
 (rw) (08)  [0;32mRX_SECTION_EMPTY[0m  - [07:00] -  Value Of The Receive FIFO Section Empty Threshold
 (rw) (05)  [0;32mSTAT_SECTION_EMPTY[0m  - [20:16] -  RX Status FIFO Section Empty Threshold
</lang>
#### p.ENET2.TAEM
<lang=dft>
 (rw)  [1;33m0x402d41a4[0m (0x402d4000 + 0x01a4)
Transmit FIFO Almost Empty Threshold
 (rw) (08)  [0;32mTX_ALMOST_EMPTY[0m  - [07:00] -  Value of Transmit FIFO Almost Empty Threshold
</lang>
#### enet2.taem
<link=p.ENET2.TAEM>
#### p.ENET2.RMON_T_P64
<lang=dft>
 (ro)  [1;33m0x402d4228[0m (0x402d4000 + 0x0228)
Tx 64-Byte Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of 64-byte transmit packets
</lang>
#### p.enet2.rmon_t_p128to255
<link=p.ENET2.RMON_T_P128TO255>
#### enet2.rmon_t_p512to1023
<link=p.ENET2.RMON_T_P512TO1023>
#### enet2.rmon_t_p1024to2047
<link=p.ENET2.RMON_T_P1024TO2047>
#### ENET2.RMON_T_OCTETS
<link=p.ENET2.RMON_T_OCTETS>
#### ENET2.IEEE_T_DROP
<link=p.ENET2.IEEE_T_DROP>
#### p.enet2.ieee_t_frame_ok
<link=p.ENET2.IEEE_T_FRAME_OK>
#### p.enet2.ieee_t_1col
<link=p.ENET2.IEEE_T_1COL>
#### ENET2.IEEE_T_EXCOL
<link=p.ENET2.IEEE_T_EXCOL>
#### p.ENET2.RMON_R_PACKETS
<lang=dft>
 (ro)  [1;33m0x402d4284[0m (0x402d4000 + 0x0284)
Rx Packet Count Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of packets received
</lang>
#### p.enet2.rmon_r_p64
<link=p.ENET2.RMON_R_P64>
#### p.enet2.ieee_r_drop
<link=p.ENET2.IEEE_R_DROP>
#### ENET2.IEEE_R_CRC
<link=p.ENET2.IEEE_R_CRC>
#### p.ENET2.IEEE_R_ALIGN
<lang=dft>
 (ro)  [1;33m0x402d42d4[0m (0x402d4000 + 0x02d4)
Frames Received with Alignment Error Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames received with alignment error
</lang>
#### p.enet2.ieee_r_align
<link=p.ENET2.IEEE_R_ALIGN>
#### ENET2.IEEE_R_OCTETS_OK
<link=p.ENET2.IEEE_R_OCTETS_OK>
#### p.enet2.tgsr
<link=p.ENET2.TGSR>
#### ENET2.TCSR3
<link=p.ENET2.TCSR3>
#### p.ENET2.TCCR1
<lang=dft>
 (rw)  [1;33m0x402d4614[0m (0x402d4000 + 0x0614)
Timer Compare Capture Register
 (rw) (32)  [0;32mTCC[0m  - [31:00] -  Timer Capture Compare
</lang>
#### USB1.HWHOST
<link=p.USB1.HWHOST>
#### p.USB1.HWTXBUF
<lang=dft>
 (ro)  [1;33m0x402e0010[0m (0x402e0000 + 0x0010)
TX Buffer Hardware Parameters
 (ro) (08)  [0;32mTXBURST[0m  - [07:00] -  Default burst size for memory to TX buffer transfer
 (ro) (08)  [0;32mTXCHANADD[0m  - [23:16] -  TX FIFO Buffer size is: (2^TXCHANADD) * 4 Bytes
</lang>
#### p.USB1.HWRXBUF
<lang=dft>
 (ro)  [1;33m0x402e0014[0m (0x402e0000 + 0x0014)
RX Buffer Hardware Parameters
 (ro) (08)  [0;32mRXBURST[0m  - [07:00] -  Default burst size for memory to RX buffer transfer
 (ro) (08)  [0;32mRXADD[0m  - [15:08] -  Buffer total size for all receive endpoints is (2^RXADD)
</lang>
#### usb1.gptimer0ld
<link=p.USB1.GPTIMER0LD>
#### p.usb1.sbuscfg
<link=p.USB1.SBUSCFG>
#### p.usb1.hciversion
<link=p.USB1.HCIVERSION>
#### p.USB1.USBCMD
<lang=dft>
 (rw)  [1;33m0x402e0140[0m (0x402e0000 + 0x0140)
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
#### p.usb1.frindex
<link=p.USB1.FRINDEX>
#### USB1.PERIODICLISTBASE
<link=p.USB1.PERIODICLISTBASE>
#### p.USB1.ENDPTNAK
<lang=dft>
 (rw)  [1;33m0x402e0178[0m (0x402e0000 + 0x0178)
Endpoint NAK
 (rw) (08)  [0;32mEPRN[0m  - [07:00] -  RX Endpoint NAK - R/WC
 (rw) (08)  [0;32mEPTN[0m  - [23:16] -  TX Endpoint NAK - R/WC
</lang>
#### USB1.ENDPTNAKEN
<link=p.USB1.ENDPTNAKEN>
#### p.USB1.USBMODE
<lang=dft>
 (rw)  [1;33m0x402e01a8[0m (0x402e0000 + 0x01a8)
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
#### p.usb1.endptflush
<link=p.USB1.ENDPTFLUSH>
#### USB1.ENDPTFLUSH
<link=p.USB1.ENDPTFLUSH>
#### USB1.ENDPTCTRL1
<link=p.USB1.ENDPTCTRL1>
#### p.USB1.ENDPTCTRL4
<lang=dft>
 (rw)  [1;33m0x402e01d0[0m (0x402e0000 + 0x01d0)
Endpoint Control 4
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
#### usb2.id
<link=p.USB2.ID>
#### p.USB2.HWGENERAL
<lang=dft>
 (ro)  [1;33m0x402e0204[0m (0x402e0200 + 0x0004)
Hardware General
 (ro) (02)  [0;32mPHYW[0m  - [05:04] -  Data width of the transciever connected to the controller core. PHYW bit reset 
 value is
      0 - PHYW_0 :
         8 bit wide data bus Software non-programmable
      0x1 - PHYW_1 :
         16 bit wide data bus Software non-programmable
      0x2 - PHYW_2 :
         Reset to 8 bit wide data bus Software programmable
      0x3 - PHYW_3 :
         Reset to 16 bit wide data bus Software programmable
 (ro) (03)  [0;32mPHYM[0m  - [08:06] -  Transciever type
      0 - PHYM_0 :
         UTMI/UMTI+
      0x1 - PHYM_1 :
         ULPI DDR
      0x2 - PHYM_2 :
         ULPI
      0x3 - PHYM_3 :
         Serial Only
      0x4 - PHYM_4 :
         Software programmable - reset to UTMI/UTMI+
      0x5 - PHYM_5 :
         Software programmable - reset to ULPI DDR
      0x6 - PHYM_6 :
         Software programmable - reset to ULPI
      0x7 - PHYM_7 :
         Software programmable - reset to Serial
 (ro) (02)  [0;32mSM[0m  - [10:09] -  Serial interface mode capability
      0 - SM_0 :
         No Serial Engine, always use parallel signalling.
      0x1 - SM_1 :
         Serial Engine present, always use serial signalling for FS/LS.
      0x2 - SM_2 :
         Software programmable - Reset to use parallel signalling for FS/LS
      0x3 - SM_3 :
         Software programmable - Reset to use serial signalling for FS/LS
</lang>
#### p.USB2.HWHOST
<lang=dft>
 (ro)  [1;33m0x402e0208[0m (0x402e0200 + 0x0008)
Host Hardware Parameters
 (ro) (01)  [0;32mHC[0m  - [00:00] -  Host Capable. Indicating whether host operation mode is supported or not.
      0 - HC_0 :
         Not supported
      0x1 - HC_1 :
         Supported
 (ro) (03)  [0;32mNPORT[0m  - [03:01] -  The Nmber of downstream ports supported by the host controller is (NPORT+1)
</lang>
#### p.usb2.hwhost
<link=p.USB2.HWHOST>
#### USB2.FRINDEX
<link=p.USB2.FRINDEX>
#### p.USB2.CONFIGFLAG
<lang=dft>
 (ro)  [1;33m0x402e0380[0m (0x402e0200 + 0x0180)
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
#### USB2.ENDPTSETUPSTAT
<link=p.USB2.ENDPTSETUPSTAT>
#### p.usb2.endptprime
<link=p.USB2.ENDPTPRIME>
#### p.usb2.endptctrl5
<link=p.USB2.ENDPTCTRL5>
#### p.SEMC.BR1
<lang=dft>
 (rw)  [1;33m0x402f0014[0m (0x402f0000 + 0x0014)
Base Register 1 (For SDRAM CS1 device)
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
#### SEMC.BR2
<link=p.SEMC.BR2>
#### p.semc.sdramcr0
<link=p.SEMC.SDRAMCR0>
#### semc.sdramcr1
<link=p.SEMC.SDRAMCR1>
#### SEMC.SDRAMCR3
<link=p.SEMC.SDRAMCR3>
#### semc.nandcr0
<link=p.SEMC.NANDCR0>
#### SEMC.NORCR0
<link=p.SEMC.NORCR0>
#### semc.dbicr0
<link=p.SEMC.DBICR0>
#### semc.sts3
<link=p.SEMC.STS3>
#### SEMC.STS5
<link=p.SEMC.STS5>
#### p.SEMC.STS9
<lang=dft>
 (ro)  [1;33m0x402f00e4[0m (0x402f0000 + 0x00e4)
Status register 9
</lang>
#### p.semc.sts11
<link=p.SEMC.STS11>
#### p.dcp.ctrl_set
<link=p.DCP.CTRL_SET>
#### p.DCP.STAT_SET
<lang=dft>
 (rw)  [1;33m0x402fc014[0m (0x402fc000 + 0x0014)
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
#### dcp.channelctrl_tog
<link=p.DCP.CHANNELCTRL_TOG>
#### DCP.KEY
<link=p.DCP.KEY>
#### p.DCP.KEYDATA
<lang=dft>
 (rw)  [1;33m0x402fc070[0m (0x402fc000 + 0x0070)
DCP key data
 (rw) (32)  [0;32mDATA[0m  - [31:00] -  Word 0 data for the key. This is the least-significant word.
</lang>
#### p.dcp.keydata
<link=p.DCP.KEYDATA>
#### DCP.PACKET0
<link=p.DCP.PACKET0>
#### p.dcp.ch2stat_tog
<link=p.DCP.CH2STAT_TOG>
#### p.dcp.ch2opts_clr
<link=p.DCP.CH2OPTS_CLR>
#### DCP.CH2OPTS_CLR
<link=p.DCP.CH2OPTS_CLR>
#### p.DCP.CH3STAT_TOG
<lang=dft>
 (rw)  [1;33m0x402fc1ec[0m (0x402fc000 + 0x01ec)
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
#### DCP.CH3STAT_TOG
<link=p.DCP.CH3STAT_TOG>
#### p.DCP.CH3OPTS_CLR
<lang=dft>
 (rw)  [1;33m0x402fc1f8[0m (0x402fc000 + 0x01f8)
DCP channel 3 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### p.DCP.CH3OPTS_TOG
<lang=dft>
 (rw)  [1;33m0x402fc1fc[0m (0x402fc000 + 0x01fc)
DCP channel 3 options register
 (rw) (16)  [0;32mRECOVERY_TIMER[0m  - [15:00] -  This field indicates the recovery time for the channel
</lang>
#### SPDIF.SRCD
<link=p.SPDIF.SRCD>
#### p.spdif.srcsh
<link=p.SPDIF.SRCSH>
#### spdif.sru
<link=p.SPDIF.SRU>
#### SPDIF.STCSCL
<link=p.SPDIF.STCSCL>
#### p.SPDIF.SRFM
<lang=dft>
 (ro)  [1;33m0x40380044[0m (0x40380000 + 0x0044)
FreqMeas Register
 (ro) (24)  [0;32mFreqMeas[0m  - [23:00] -  Frequency measurement data
</lang>
#### sai1.tcr3
<link=p.SAI1.TCR3>
#### SAI1.TDR[3]
<link=p.SAI1.TDR[3]>
#### p.SAI1.TFR[2]
<lang=dft>
 (ro)  [1;33m0x40384048[0m (0x40384000 + 0x0048)
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
#### p.sai1.rcsr
<link=p.SAI1.RCSR>
#### SAI1.RCR4
<link=p.SAI1.RCR4>
#### p.SAI1.RCR5
<lang=dft>
 (rw)  [1;33m0x4038409c[0m (0x40384000 + 0x009c)
SAI Receive Configuration 5 Register
 (rw) (05)  [0;32mFBT[0m  - [12:08] -  First Bit Shifted
 (rw) (05)  [0;32mW0W[0m  - [20:16] -  Word 0 Width
 (rw) (05)  [0;32mWNW[0m  - [28:24] -  Word N Width
</lang>
#### p.sai1.rdr[1]
<link=p.SAI1.RDR[1]>
#### sai1.rdr[2]
<link=p.SAI1.RDR[2]>
#### p.SAI1.RMR
<lang=dft>
 (rw)  [1;33m0x403840e0[0m (0x40384000 + 0x00e0)
SAI Receive Mask Register
 (rw) (32)  [0;32mRWM[0m  - [31:00] -  Receive Word Mask
      0 - RWM_0 :
         Word N is enabled.
      0x1 - RWM_1 :
         Word N is masked.
</lang>
#### sai1.rmr
<link=p.SAI1.RMR>
#### SAI2.VERID
<link=p.SAI2.VERID>
#### p.sai2.param
<link=p.SAI2.PARAM>
#### sai2.tcr3
<link=p.SAI2.TCR3>
#### SAI2.TCR3
<link=p.SAI2.TCR3>
#### sai2.tdr[3]
<link=p.SAI2.TDR[3]>
#### sai2.tmr
<link=p.SAI2.TMR>
#### p.SAI2.RDR[1]
<lang=dft>
 (ro)  [1;33m0x403880a4[0m (0x40388000 + 0x00a4)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### sai2.rdr[2]
<link=p.SAI2.RDR[2]>
#### p.sai2.rfr[0]
<link=p.SAI2.RFR[0]>
#### SAI2.RMR
<link=p.SAI2.RMR>
#### p.SAI3.TCR1
<lang=dft>
 (rw)  [1;33m0x4038c00c[0m (0x4038c000 + 0x000c)
SAI Transmit Configuration 1 Register
 (rw) (05)  [0;32mTFW[0m  - [04:00] -  Transmit FIFO Watermark
</lang>
#### sai3.tcr4
<link=p.SAI3.TCR4>
#### SAI3.TDR[1]
<link=p.SAI3.TDR[1]>
#### p.sai3.tfr[0]
<link=p.SAI3.TFR[0]>
#### p.SAI3.TFR[3]
<lang=dft>
 (ro)  [1;33m0x4038c04c[0m (0x4038c000 + 0x004c)
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
#### p.SAI3.RDR[0]
<lang=dft>
 (ro)  [1;33m0x4038c0a0[0m (0x4038c000 + 0x00a0)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### sai3.rdr[0]
<link=p.SAI3.RDR[0]>
#### p.sai3.rdr[3]
<link=p.SAI3.RDR[3]>
#### SAI3.RFR[3]
<link=p.SAI3.RFR[3]>
#### p.LPSPI1
<lang=dft>
base: 0x40394000
CCR             CFGR0           CFGR1           CR              
DER             DMR0            DMR1            FCR             
FSR             IER             PARAM           RDR             
RSR             SR              TCR             TDR             
VERID           
输入 p.LPSPI1.{reg_name} 以查看寄存器的详细信息
type p.LPSPI1.{reg_name} to check details of registers
</lang>
#### p.LPSPI1.VERID
<lang=dft>
 (ro)  [1;33m0x40394000[0m (0x40394000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Module Identification Number
      0x4 - FEATURE_4 :
         Standard feature set supporting a 32-bit shift register.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### LPSPI1.DMR1
<link=p.LPSPI1.DMR1>
#### p.lpspi1.ccr
<link=p.LPSPI1.CCR>
#### lpspi1.tcr
<link=p.LPSPI1.TCR>
#### p.lpspi1.tdr
<link=p.LPSPI1.TDR>
#### LPSPI1.TDR
<link=p.LPSPI1.TDR>
#### p.LPSPI1.RSR
<lang=dft>
 (ro)  [1;33m0x40394070[0m (0x40394000 + 0x0070)
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
#### p.lpspi2
<link=p.LPSPI2>
#### lpspi2.sr
<link=p.LPSPI2.SR>
#### LPSPI2.DMR1
<link=p.LPSPI2.DMR1>
#### p.LPSPI3.PARAM
<lang=dft>
 (ro)  [1;33m0x4039c004[0m (0x4039c000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mTXFIFO[0m  - [07:00] -  Transmit FIFO Size
 (ro) (08)  [0;32mRXFIFO[0m  - [15:08] -  Receive FIFO Size
 (ro) (08)  [0;32mPCSNUM[0m  - [23:16] -  PCS Number
</lang>
#### LPSPI3.SR
<link=p.LPSPI3.SR>
#### p.LPSPI3.DMR1
<lang=dft>
 (rw)  [1;33m0x4039c034[0m (0x4039c000 + 0x0034)
Data Match Register 1
 (rw) (32)  [0;32mMATCH1[0m  - [31:00] -  Match 1 Value
</lang>
#### LPSPI3.FSR
<link=p.LPSPI3.FSR>
#### LPSPI3.TCR
<link=p.LPSPI3.TCR>
#### lpspi4.verid
<link=p.LPSPI4.VERID>
#### LPSPI4.FCR
<link=p.LPSPI4.FCR>
#### p.ADC_ETC.TRIG0_CHAIN_1_0
<lang=dft>
 (rw)  [1;33m0x403b0018[0m (0x403b0000 + 0x0018)
ETC_TRIG Chain 0/1 Register
 (rw) (04)  [0;32mCSEL0[0m  - [03:00] -  CHAIN0 CSEL ADC channel selection
 (rw) (08)  [0;32mHWTS0[0m  - [11:04] -  CHAIN0 HWTS ADC hardware trigger selection. For more information, see the ADC c
 hapter.
 (rw) (01)  [0;32mB2B0[0m  - [12:12] -  CHAIN0 B2B 1'b0: Disable B2B, wait until interval is reached 1'b1: Enable B2B, 
 back to back ADC trigger
 (rw) (02)  [0;32mIE0[0m  - [14:13] -  CHAIN0 IE 2'b00: No interrupt when finished 2'b01: Finished Interrupt on Done0 
 2'b10: Finished Interrupt on Done1 2'b11: Finished Interrupt on Done2
 (rw) (04)  [0;32mCSEL1[0m  - [19:16] -  CHAIN1 CSEL ADC channel selection
 (rw) (08)  [0;32mHWTS1[0m  - [27:20] -  CHAIN1 HWTS ADC hardware trigger selection. For more information, see the ADC c
 hapter.
 (rw) (01)  [0;32mB2B1[0m  - [28:28] -  CHAIN1 B2B 1'b0: Disable B2B, wait until interval is reached 1'b1: Enable B2B, 
 back to back ADC trigger
 (rw) (02)  [0;32mIE1[0m  - [30:29] -  CHAIN1 IE 2'b00: No interrupt when finished 2'b01: Finished Interrupt on Done0 
 2'b10: Finished Interrupt on Done1 2'b11: Finished Interrupt on Done2
</lang>
#### p.ADC_ETC.TRIG0_CHAIN_7_6
<lang=dft>
 (rw)  [1;33m0x403b0024[0m (0x403b0000 + 0x0024)
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
#### ADC_ETC.TRIG2_COUNTER
<link=p.ADC_ETC.TRIG2_COUNTER>
#### p.ADC_ETC.TRIG2_CHAIN_7_6
<lang=dft>
 (rw)  [1;33m0x403b0074[0m (0x403b0000 + 0x0074)
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
#### p.ADC_ETC.TRIG2_RESULT_5_4
<lang=dft>
 (ro)  [1;33m0x403b0080[0m (0x403b0000 + 0x0080)
ETC_TRIG Result Data 5/4 Register
 (ro) (12)  [0;32mDATA4[0m  - [11:00] -  Result DATA4
 (ro) (12)  [0;32mDATA5[0m  - [27:16] -  Result DATA5
</lang>
#### ADC_ETC.TRIG4_RESULT_3_2
<link=p.ADC_ETC.TRIG4_RESULT_3_2>
#### p.adc_etc.trig5_counter
<link=p.ADC_ETC.TRIG5_COUNTER>
#### adc_etc.trig5_counter
<link=p.ADC_ETC.TRIG5_COUNTER>
#### p.adc_etc.trig5_chain_3_2
<link=p.ADC_ETC.TRIG5_CHAIN_3_2>
#### p.adc_etc.trig5_chain_5_4
<link=p.ADC_ETC.TRIG5_CHAIN_5_4>
#### adc_etc.trig5_result_1_0
<link=p.ADC_ETC.TRIG5_RESULT_1_0>
#### adc_etc.trig5_result_7_6
<link=p.ADC_ETC.TRIG5_RESULT_7_6>
#### p.ADC_ETC.TRIG6_CHAIN_5_4
<lang=dft>
 (rw)  [1;33m0x403b0110[0m (0x403b0000 + 0x0110)
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
#### p.adc_etc.trig7_chain_3_2
<link=p.ADC_ETC.TRIG7_CHAIN_3_2>
#### p.ADC_ETC.TRIG7_RESULT_7_6
<lang=dft>
 (ro)  [1;33m0x403b014c[0m (0x403b0000 + 0x014c)
ETC_TRIG Result Data 7/6 Register
 (ro) (12)  [0;32mDATA6[0m  - [11:00] -  Result DATA6
 (ro) (12)  [0;32mDATA7[0m  - [27:16] -  Result DATA7
</lang>
#### p.AOI1
<lang=dft>
base: 0x403b4000
BFCRT010        BFCRT011        BFCRT012        BFCRT013        
BFCRT230        BFCRT231        BFCRT232        BFCRT233        
输入 p.AOI1.{reg_name} 以查看寄存器的详细信息
type p.AOI1.{reg_name} to check details of registers
</lang>
#### p.AOI1.BFCRT010
<lang=dft>
 (rw)  [1;33m0x403b4000[0m (0x403b4000 + 0x0000)
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
#### AOI1.BFCRT011
<link=p.AOI1.BFCRT011>
#### p.aoi1.bfcrt231
<link=p.AOI1.BFCRT231>
#### p.aoi2.bfcrt013
<link=p.AOI2.BFCRT013>
#### xbara1.sel3
<link=p.XBARA1.SEL3>
#### XBARA1.SEL4
<link=p.XBARA1.SEL4>
#### p.xbara1.sel8
<link=p.XBARA1.SEL8>
#### xbara1.sel14
<link=p.XBARA1.SEL14>
#### XBARA1.SEL15
<link=p.XBARA1.SEL15>
#### p.xbara1.sel22
<link=p.XBARA1.SEL22>
#### p.XBARA1.SEL23
<lang=dft>
 (rw)  [1;33m0x403bc02e[0m (0x403bc000 + 0x002e)
Crossbar A Select Register 23
 (rw) (07)  [0;32mSEL46[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT46 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL47[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT47 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbara1.sel28
<link=p.XBARA1.SEL28>
#### p.XBARA1.SEL30
<lang=dft>
 (rw)  [1;33m0x403bc03c[0m (0x403bc000 + 0x003c)
Crossbar A Select Register 30
 (rw) (07)  [0;32mSEL60[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT60 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL61[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT61 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel31
<link=p.XBARA1.SEL31>
#### p.xbara1.sel40
<link=p.XBARA1.SEL40>
#### p.XBARA1.SEL41
<lang=dft>
 (rw)  [1;33m0x403bc052[0m (0x403bc000 + 0x0052)
Crossbar A Select Register 41
 (rw) (07)  [0;32mSEL82[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT82 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL83[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT83 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL49
<link=p.XBARA1.SEL49>
#### p.XBARA1.SEL52
<lang=dft>
 (rw)  [1;33m0x403bc068[0m (0x403bc000 + 0x0068)
Crossbar A Select Register 52
 (rw) (07)  [0;32mSEL104[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT104 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL105[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT105 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### p.xbara1.sel53
<link=p.XBARA1.SEL53>
#### xbara1.sel59
<link=p.XBARA1.SEL59>
#### xbara1.sel64
<link=p.XBARA1.SEL64>
#### p.xbara1.ctrl0
<link=p.XBARA1.CTRL0>
#### p.XBARB3
<lang=dft>
base: 0x403c4000
SEL0            SEL1            SEL2            SEL3            
SEL4            SEL5            SEL6            SEL7            
输入 p.XBARB3.{reg_name} 以查看寄存器的详细信息
type p.XBARB3.{reg_name} to check details of registers
</lang>
#### p.xbarb3.sel1
<link=p.XBARB3.SEL1>
#### xbarb3.sel3
<link=p.XBARB3.SEL3>
#### p.enc1.ctrl
<link=p.ENC1.CTRL>
#### enc1.ctrl
<link=p.ENC1.CTRL>
#### p.enc1.posd
<link=p.ENC1.POSD>
#### ENC1.REVH
<link=p.ENC1.REVH>
#### enc1.upos
<link=p.ENC1.UPOS>
#### p.ENC1.UPOSH
<lang=dft>
 (ro)  [1;33m0x403c8012[0m (0x403c8000 + 0x0012)
Upper Position Hold Register
 (ro) (16)  [0;32mPOSH[0m  - [15:00] -  This read-only register contains a snapshot of the UPOS register.
</lang>
#### p.enc1.lmod
<link=p.ENC1.LMOD>
#### p.enc1.ucomp
<link=p.ENC1.UCOMP>
#### p.ENC2.POSD
<lang=dft>
 (rw)  [1;33m0x403cc006[0m (0x403cc000 + 0x0006)
Position Difference Counter Register
 (rw) (16)  [0;32mPOSD[0m  - [15:00] -  This read/write register contains the position change in value occurring betwee
 n each read of the position register
</lang>
#### ENC2.CTRL2
<link=p.ENC2.CTRL2>
#### enc3.filt
<link=p.ENC3.FILT>
#### ENC3.REV
<link=p.ENC3.REV>
#### p.enc3.uposh
<link=p.ENC3.UPOSH>
#### p.ENC4.REV
<lang=dft>
 (rw)  [1;33m0x403d400a[0m (0x403d4000 + 0x000a)
Revolution Counter Register
 (rw) (16)  [0;32mREV[0m  - [15:00] -  This read/write register contains the current value of the revolution counter.
</lang>
#### enc4.ctrl2
<link=p.ENC4.CTRL2>
#### ENC4.LMOD
<link=p.ENC4.LMOD>
#### p.ENC4.LCOMP
<lang=dft>
 (rw)  [1;33m0x403d4026[0m (0x403d4000 + 0x0026)
Lower Position Compare Register
 (rw) (16)  [0;32mCOMP[0m  - [15:00] -  This read/write register contains the lower (least significant) half of the pos
 ition compare register
</lang>
#### pwm1.sm0ctrl
<link=p.PWM1.SM0CTRL>
#### p.pwm1.sm0fracval3
<link=p.PWM1.SM0FRACVAL3>
#### pwm1.sm0val3
<link=p.PWM1.SM0VAL3>
#### pwm1.sm0frctrl
<link=p.PWM1.SM0FRCTRL>
#### p.pwm1.sm0sts
<link=p.PWM1.SM0STS>
#### p.pwm1.sm0inten
<link=p.PWM1.SM0INTEN>
#### PWM1.SM0DISMAP0
<link=p.PWM1.SM0DISMAP0>
#### p.pwm1.sm0captcompa
<link=p.PWM1.SM0CAPTCOMPA>
#### p.PWM1.SM0CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403dc038[0m (0x403dc000 + 0x0038)
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
#### p.pwm1.sm0captctrlx
<link=p.PWM1.SM0CAPTCTRLX>
#### p.PWM1.SM0CVAL5
<lang=dft>
 (ro)  [1;33m0x403dc054[0m (0x403dc000 + 0x0054)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### PWM1.SM0CVAL5CYC
<link=p.PWM1.SM0CVAL5CYC>
#### PWM1.SM1FRACVAL2
<link=p.PWM1.SM1FRACVAL2>
#### pwm1.sm1val2
<link=p.PWM1.SM1VAL2>
#### PWM1.SM1FRCTRL
<link=p.PWM1.SM1FRCTRL>
#### pwm1.sm1octrl
<link=p.PWM1.SM1OCTRL>
#### pwm1.sm1sts
<link=p.PWM1.SM1STS>
#### pwm1.sm1dismap0
<link=p.PWM1.SM1DISMAP0>
#### PWM1.SM1CVAL1CYC
<link=p.PWM1.SM1CVAL1CYC>
#### p.PWM1.SM1CVAL3
<lang=dft>
 (ro)  [1;33m0x403dc0ac[0m (0x403dc000 + 0x00ac)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### p.PWM1.SM2VAL0
<lang=dft>
 (rw)  [1;33m0x403dc0ca[0m (0x403dc000 + 0x00ca)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### p.pwm1.sm2fracval1
<link=p.PWM1.SM2FRACVAL1>
#### PWM1.SM2VAL1
<link=p.PWM1.SM2VAL1>
#### PWM1.SM2FRACVAL2
<link=p.PWM1.SM2FRACVAL2>
#### p.PWM1.SM2OCTRL
<lang=dft>
 (rw)  [1;33m0x403dc0e2[0m (0x403dc000 + 0x00e2)
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
#### PWM1.SM2OCTRL
<link=p.PWM1.SM2OCTRL>
#### pwm1.sm2captcompa
<link=p.PWM1.SM2CAPTCOMPA>
#### pwm1.sm2cval1
<link=p.PWM1.SM2CVAL1>
#### p.pwm1.sm2cval4
<link=p.PWM1.SM2CVAL4>
#### p.PWM1.SM3VAL0
<lang=dft>
 (rw)  [1;33m0x403dc12a[0m (0x403dc000 + 0x012a)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### PWM1.SM3VAL0
<link=p.PWM1.SM3VAL0>
#### PWM1.SM3FRCTRL
<link=p.PWM1.SM3FRCTRL>
#### PWM1.SM3INTEN
<link=p.PWM1.SM3INTEN>
#### PWM1.SM3DMAEN
<link=p.PWM1.SM3DMAEN>
#### PWM1.SM3CAPTCTRLA
<link=p.PWM1.SM3CAPTCTRLA>
#### pwm1.sm3captctrlb
<link=p.PWM1.SM3CAPTCTRLB>
#### p.pwm1.sm3captcompb
<link=p.PWM1.SM3CAPTCOMPB>
#### p.pwm1.sm3captctrlx
<link=p.PWM1.SM3CAPTCTRLX>
#### PWM1.SM3CVAL0CYC
<link=p.PWM1.SM3CVAL0CYC>
#### pwm1.sm3cval1
<link=p.PWM1.SM3CVAL1>
#### pwm1.mask
<link=p.PWM1.MASK>
#### p.PWM1.MCTRL2
<lang=dft>
 (rw)  [1;33m0x403dc18a[0m (0x403dc000 + 0x018a)
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
#### p.pwm1.fctrl20
<link=p.PWM1.FCTRL20>
#### p.PWM2
<lang=dft>
base: 0x403e0000
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
输入 p.PWM2.{reg_name} 以查看寄存器的详细信息
type p.PWM2.{reg_name} to check details of registers
</lang>
#### pwm2.sm0init
<link=p.PWM2.SM0INIT>
#### p.PWM2.SM0VAL0
<lang=dft>
 (rw)  [1;33m0x403e000a[0m (0x403e0000 + 0x000a)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### pwm2.sm0fracval3
<link=p.PWM2.SM0FRACVAL3>
#### PWM2.SM0VAL3
<link=p.PWM2.SM0VAL3>
#### pwm2.sm0tctrl
<link=p.PWM2.SM0TCTRL>
#### p.pwm2.sm0dtcnt1
<link=p.PWM2.SM0DTCNT1>
#### pwm2.sm0dtcnt1
<link=p.PWM2.SM0DTCNT1>
#### pwm2.sm0captctrlx
<link=p.PWM2.SM0CAPTCTRLX>
#### PWM2.SM1CTRL
<link=p.PWM2.SM1CTRL>
#### p.PWM2.SM1VAL0
<lang=dft>
 (rw)  [1;33m0x403e006a[0m (0x403e0000 + 0x006a)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### PWM2.SM1VAL2
<link=p.PWM2.SM1VAL2>
#### PWM2.SM1FRACVAL3
<link=p.PWM2.SM1FRACVAL3>
#### p.PWM2.SM1OCTRL
<lang=dft>
 (rw)  [1;33m0x403e0082[0m (0x403e0000 + 0x0082)
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
#### PWM2.SM1TCTRL
<link=p.PWM2.SM1TCTRL>
#### pwm2.sm1dtcnt0
<link=p.PWM2.SM1DTCNT0>
#### p.pwm2.sm1cval4cyc
<link=p.PWM2.SM1CVAL4CYC>
#### PWM2.SM2INIT
<link=p.PWM2.SM2INIT>
#### PWM2.SM2CTRL2
<link=p.PWM2.SM2CTRL2>
#### pwm2.sm2fracval1
<link=p.PWM2.SM2FRACVAL1>
#### p.pwm2.sm2octrl
<link=p.PWM2.SM2OCTRL>
#### pwm2.sm2dtcnt0
<link=p.PWM2.SM2DTCNT0>
#### p.PWM2.SM2CVAL3
<lang=dft>
 (ro)  [1;33m0x403e010c[0m (0x403e0000 + 0x010c)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### pwm2.sm2cval4
<link=p.PWM2.SM2CVAL4>
#### PWM2.SM3FRCTRL
<link=p.PWM2.SM3FRCTRL>
#### p.pwm2.sm3dismap1
<link=p.PWM2.SM3DISMAP1>
#### PWM2.SM3DISMAP1
<link=p.PWM2.SM3DISMAP1>
#### pwm2.sm3dtcnt1
<link=p.PWM2.SM3DTCNT1>
#### p.PWM2.SM3CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e0158[0m (0x403e0000 + 0x0158)
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
#### PWM2.SM3CAPTCOMPB
<link=p.PWM2.SM3CAPTCOMPB>
#### pwm2.sm3cval3
<link=p.PWM2.SM3CVAL3>
#### PWM2.SM3CVAL4CYC
<link=p.PWM2.SM3CVAL4CYC>
#### p.PWM2.SM3CVAL5
<lang=dft>
 (ro)  [1;33m0x403e0174[0m (0x403e0000 + 0x0174)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### PWM2.MCTRL2
<link=p.PWM2.MCTRL2>
#### p.pwm2.fsts0
<link=p.PWM2.FSTS0>
#### PWM2.FFILT0
<link=p.PWM2.FFILT0>
#### PWM3.SM0CTRL
<link=p.PWM3.SM0CTRL>
#### p.PWM3.SM0VAL0
<lang=dft>
 (rw)  [1;33m0x403e400a[0m (0x403e4000 + 0x000a)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### p.pwm3.sm0fracval1
<link=p.PWM3.SM0FRACVAL1>
#### PWM3.SM0VAL2
<link=p.PWM3.SM0VAL2>
#### PWM3.SM0FRACVAL3
<link=p.PWM3.SM0FRACVAL3>
#### pwm3.sm0frctrl
<link=p.PWM3.SM0FRCTRL>
#### p.PWM3.SM0OCTRL
<lang=dft>
 (rw)  [1;33m0x403e4022[0m (0x403e4000 + 0x0022)
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
#### pwm3.sm0tctrl
<link=p.PWM3.SM0TCTRL>
#### PWM3.SM0TCTRL
<link=p.PWM3.SM0TCTRL>
#### pwm3.sm0cval2
<link=p.PWM3.SM0CVAL2>
#### p.pwm3.sm0cval4
<link=p.PWM3.SM0CVAL4>
#### p.PWM3.SM1VAL0
<lang=dft>
 (rw)  [1;33m0x403e406a[0m (0x403e4000 + 0x006a)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### PWM3.SM1VAL3
<link=p.PWM3.SM1VAL3>
#### p.pwm3.sm1captcompb
<link=p.PWM3.SM1CAPTCOMPB>
#### p.pwm3.sm1captctrlx
<link=p.PWM3.SM1CAPTCTRLX>
#### pwm3.sm1cval0
<link=p.PWM3.SM1CVAL0>
#### pwm3.sm2cnt
<link=p.PWM3.SM2CNT>
#### pwm3.sm2val0
<link=p.PWM3.SM2VAL0>
#### p.pwm3.sm2fracval3
<link=p.PWM3.SM2FRACVAL3>
#### PWM3.SM2FRCTRL
<link=p.PWM3.SM2FRCTRL>
#### p.pwm3.sm2sts
<link=p.PWM3.SM2STS>
#### p.pwm3.sm2inten
<link=p.PWM3.SM2INTEN>
#### PWM3.SM2DISMAP1
<link=p.PWM3.SM2DISMAP1>
#### p.pwm3.sm2captcompa
<link=p.PWM3.SM2CAPTCOMPA>
#### p.PWM3.SM2CAPTCTRLB
<lang=dft>
 (rw)  [1;33m0x403e40f8[0m (0x403e4000 + 0x00f8)
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
#### PWM3.SM2CAPTCOMPB
<link=p.PWM3.SM2CAPTCOMPB>
#### p.pwm3.sm2captctrlx
<link=p.PWM3.SM2CAPTCTRLX>
#### pwm3.sm2captctrlx
<link=p.PWM3.SM2CAPTCTRLX>
#### PWM3.SM2CVAL4CYC
<link=p.PWM3.SM2CVAL4CYC>
#### p.PWM3.SM2CVAL5
<lang=dft>
 (ro)  [1;33m0x403e4114[0m (0x403e4000 + 0x0114)
Capture Value 5 Register
 (ro) (16)  [0;32mCAPTVAL5[0m  - [15:00] -  CAPTVAL5
</lang>
#### PWM3.SM3INIT
<link=p.PWM3.SM3INIT>
#### PWM3.SM3CTRL2
<link=p.PWM3.SM3CTRL2>
#### pwm3.sm3val1
<link=p.PWM3.SM3VAL1>
#### p.PWM3.SM3CVAL3
<lang=dft>
 (ro)  [1;33m0x403e416c[0m (0x403e4000 + 0x016c)
Capture Value 3 Register
 (ro) (16)  [0;32mCAPTVAL3[0m  - [15:00] -  CAPTVAL3
</lang>
#### pwm3.swcout
<link=p.PWM3.SWCOUT>
#### pwm3.dtsrcsel
<link=p.PWM3.DTSRCSEL>
#### p.pwm3.fctrl0
<link=p.PWM3.FCTRL0>
#### pwm3.fctrl0
<link=p.PWM3.FCTRL0>
#### PWM3.FSTS0
<link=p.PWM3.FSTS0>
#### p.pwm4.sm0ctrl2
<link=p.PWM4.SM0CTRL2>
#### pwm4.sm0fracval4
<link=p.PWM4.SM0FRACVAL4>
#### p.pwm4.sm0val5
<link=p.PWM4.SM0VAL5>
#### pwm4.sm0octrl
<link=p.PWM4.SM0OCTRL>
#### p.PWM4.SM0DISMAP1
<lang=dft>
 (rw)  [1;33m0x403e802e[0m (0x403e8000 + 0x002e)
Fault Disable Mapping Register 1
 (rw) (04)  [0;32mDIS1A[0m  - [03:00] -  PWM_A Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1B[0m  - [07:04] -  PWM_B Fault Disable Mask 1
 (rw) (04)  [0;32mDIS1X[0m  - [11:08] -  PWM_X Fault Disable Mask 1
</lang>
#### PWM4.SM0CAPTCOMPB
<link=p.PWM4.SM0CAPTCOMPB>
#### PWM4.SM0CVAL2
<link=p.PWM4.SM0CVAL2>
#### PWM4.SM0CVAL2CYC
<link=p.PWM4.SM0CVAL2CYC>
#### p.pwm4.sm0cval3
<link=p.PWM4.SM0CVAL3>
#### p.pwm4.sm0cval4cyc
<link=p.PWM4.SM0CVAL4CYC>
#### pwm4.sm1ctrl
<link=p.PWM4.SM1CTRL>
#### p.pwm4.sm1val4
<link=p.PWM4.SM1VAL4>
#### PWM4.SM1FRACVAL5
<link=p.PWM4.SM1FRACVAL5>
#### pwm4.sm1inten
<link=p.PWM4.SM1INTEN>
#### PWM4.SM1TCTRL
<link=p.PWM4.SM1TCTRL>
#### pwm4.sm1captcompx
<link=p.PWM4.SM1CAPTCOMPX>
#### p.PWM4.SM1CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403e80a2[0m (0x403e8000 + 0x00a2)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### pwm4.sm1cval0cyc
<link=p.PWM4.SM1CVAL0CYC>
#### pwm4.sm1cval1cyc
<link=p.PWM4.SM1CVAL1CYC>
#### p.pwm4.sm1cval3
<link=p.PWM4.SM1CVAL3>
#### p.PWM4.SM1CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e80ae[0m (0x403e8000 + 0x00ae)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### p.pwm4.sm2init
<link=p.PWM4.SM2INIT>
#### PWM4.SM2CTRL
<link=p.PWM4.SM2CTRL>
#### pwm4.sm2val3
<link=p.PWM4.SM2VAL3>
#### p.PWM4.SM2INTEN
<lang=dft>
 (rw)  [1;33m0x403e80e6[0m (0x403e8000 + 0x00e6)
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
#### pwm4.sm2inten
<link=p.PWM4.SM2INTEN>
#### p.PWM4.SM2CAPTCTRLX
<lang=dft>
 (rw)  [1;33m0x403e80fc[0m (0x403e8000 + 0x00fc)
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
#### p.PWM4.SM2CVAL1
<lang=dft>
 (ro)  [1;33m0x403e8104[0m (0x403e8000 + 0x0104)
Capture Value 1 Register
 (ro) (16)  [0;32mCAPTVAL1[0m  - [15:00] -  CAPTVAL1
</lang>
#### pwm4.sm2cval1
<link=p.PWM4.SM2CVAL1>
#### pwm4.sm2cval1cyc
<link=p.PWM4.SM2CVAL1CYC>
#### p.pwm4.sm2cval5cyc
<link=p.PWM4.SM2CVAL5CYC>
#### PWM4.SM3CTRL2
<link=p.PWM4.SM3CTRL2>
#### pwm4.sm3val2
<link=p.PWM4.SM3VAL2>
#### PWM4.SM3FRACVAL4
<link=p.PWM4.SM3FRACVAL4>
#### p.PWM4.SM3VAL5
<lang=dft>
 (rw)  [1;33m0x403e813e[0m (0x403e8000 + 0x013e)
Value Register 5
 (rw) (16)  [0;32mVAL5[0m  - [15:00] -  Value Register 5
</lang>
#### p.PWM4.SM3FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e8140[0m (0x403e8000 + 0x0140)
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
#### PWM4.SM3DISMAP1
<link=p.PWM4.SM3DISMAP1>
#### p.PWM4.SM3CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403e8162[0m (0x403e8000 + 0x0162)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### pwm4.sm3cval2
<link=p.PWM4.SM3CVAL2>
#### p.pwm4.sm3cval4
<link=p.PWM4.SM3CVAL4>
#### PWM4.MASK
<link=p.PWM4.MASK>
#### bee.aes_key0_w2
<link=p.BEE.AES_KEY0_W2>
#### p.BEE.AES_KEY0_W3
<lang=dft>
 (rw)  [1;33m0x403ec018[0m (0x403ec000 + 0x0018)
no description available
 (rw) (32)  [0;32mKEY3[0m  - [31:00] -  AES 128 key from software
</lang>
#### p.BEE.CTR_NONCE0_W0
<lang=dft>
 (wo)  [1;33m0x403ec020[0m (0x403ec000 + 0x0020)
no description available
 (wo) (32)  [0;32mNONCE00[0m  - [31:00] -  Nonce0 from software for CTR, for region0. Nonce0={Nonce03,Nonce02,Nonce01,Nonc
 e00}
</lang>
#### BEE.CTR_NONCE1_W1
<link=p.BEE.CTR_NONCE1_W1>
#### bee.ctr_nonce1_w2
<link=p.BEE.CTR_NONCE1_W2>
#### p.bee.region1_bot
<link=p.BEE.REGION1_BOT>
#### lpi2c1.verid
<link=p.LPI2C1.VERID>
#### lpi2c1.scfgr2
<link=p.LPI2C1.SCFGR2>
#### lpi2c1.star
<link=p.LPI2C1.STAR>
#### p.LPI2C2.MDER
<lang=dft>
 (rw)  [1;33m0x403f401c[0m (0x403f4000 + 0x001c)
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
#### LPI2C2.MDER
<link=p.LPI2C2.MDER>
#### LPI2C2.MFCR
<link=p.LPI2C2.MFCR>
#### lpi2c2.mtdr
<link=p.LPI2C2.MTDR>
#### p.LPI2C2.MRDR
<lang=dft>
 (ro)  [1;33m0x403f4070[0m (0x403f4000 + 0x0070)
Master Receive Data Register
 (ro) (08)  [0;32mDATA[0m  - [07:00] -  Receive Data
 (ro) (01)  [0;32mRXEMPTY[0m  - [14:14] -  RX Empty
      0 - RXEMPTY_0 :
         Receive FIFO is not empty
      0x1 - RXEMPTY_1 :
         Receive FIFO is empty
</lang>
#### LPI2C2.SSR
<link=p.LPI2C2.SSR>
#### lpi2c2.stdr
<link=p.LPI2C2.STDR>
#### p.lpi2c3.param
<link=p.LPI2C3.PARAM>
#### LPI2C3.MCR
<link=p.LPI2C3.MCR>
#### lpi2c3.mcfgr0
<link=p.LPI2C3.MCFGR0>
#### p.lpi2c3.mcfgr1
<link=p.LPI2C3.MCFGR1>
#### p.LPI2C3.MCFGR3
<lang=dft>
 (rw)  [1;33m0x403f802c[0m (0x403f8000 + 0x002c)
Master Configuration Register 3
 (rw) (12)  [0;32mPINLOW[0m  - [19:08] -  Pin Low Timeout
</lang>
#### p.LPI2C3.MFSR
<lang=dft>
 (ro)  [1;33m0x403f805c[0m (0x403f8000 + 0x005c)
Master FIFO Status Register
 (ro) (03)  [0;32mTXCOUNT[0m  - [02:00] -  Transmit FIFO Count
 (ro) (03)  [0;32mRXCOUNT[0m  - [18:16] -  Receive FIFO Count
</lang>
#### lpi2c3.sasr
<link=p.LPI2C3.SASR>
#### p.LPI2C4
<lang=dft>
base: 0x403fc000
MCCR0           MCCR1           MCFGR0          MCFGR1          
MCFGR2          MCFGR3          MCR             MDER            
MDMR            MFCR            MFSR            MIER            
MRDR            MSR             MTDR            PARAM           
SAMR            SASR            SCFGR1          SCFGR2          
SCR             SDER            SIER            SRDR            
SSR             STAR            STDR            VERID           
输入 p.LPI2C4.{reg_name} 以查看寄存器的详细信息
type p.LPI2C4.{reg_name} to check details of registers
</lang>
#### p.lpi2c4
<link=p.LPI2C4>
#### lpi2c4.verid
<link=p.LPI2C4.VERID>
#### p.LPI2C4.MDER
<lang=dft>
 (rw)  [1;33m0x403fc01c[0m (0x403fc000 + 0x001c)
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
#### LPI2C4.MDER
<link=p.LPI2C4.MDER>
#### p.LPI2C4.MCFGR0
<lang=dft>
 (rw)  [1;33m0x403fc020[0m (0x403fc000 + 0x0020)
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
#### p.lpi2c4.mcfgr0
<link=p.LPI2C4.MCFGR0>
#### p.LPI2C4.MCCR0
<lang=dft>
 (rw)  [1;33m0x403fc048[0m (0x403fc000 + 0x0048)
Master Clock Configuration Register 0
 (rw) (06)  [0;32mCLKLO[0m  - [05:00] -  Clock Low Period
 (rw) (06)  [0;32mCLKHI[0m  - [13:08] -  Clock High Period
 (rw) (06)  [0;32mSETHOLD[0m  - [21:16] -  Setup Hold Delay
 (rw) (06)  [0;32mDATAVD[0m  - [29:24] -  Data Valid Delay
</lang>
#### p.LPI2C4.MFCR
<lang=dft>
 (rw)  [1;33m0x403fc058[0m (0x403fc000 + 0x0058)
Master FIFO Control Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit FIFO Watermark
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive FIFO Watermark
</lang>
#### p.LPI2C4.SIER
<lang=dft>
 (rw)  [1;33m0x403fc118[0m (0x403fc000 + 0x0118)
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
#### p.lpi2c4.sier
<link=p.LPI2C4.SIER>
#### p.lpi2c4.scfgr1
<link=p.LPI2C4.SCFGR1>
#### p.LPI2C4.SASR
<lang=dft>
 (ro)  [1;33m0x403fc150[0m (0x403fc000 + 0x0150)
Slave Address Status Register
 (ro) (11)  [0;32mRADDR[0m  - [10:00] -  Received Address
 (ro) (01)  [0;32mANV[0m  - [14:14] -  Address Not Valid
      0 - ANV_0 :
         Received Address (RADDR) is valid
      0x1 - ANV_1 :
         Received Address (RADDR) is not valid
</lang>
#### lpi2c4.stdr
<link=p.LPI2C4.STDR>
#### p.LPI2C4.SRDR
<lang=dft>
 (ro)  [1;33m0x403fc170[0m (0x403fc000 + 0x0170)
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
#### SystemControl.SCR
<link=p.SYSTEMCONTROL.SCR>
#### SystemControl.SHPR2
<link=p.SYSTEMCONTROL.SHPR2>
#### SystemControl.DFSR
<link=p.SYSTEMCONTROL.DFSR>
#### p.systemcontrol.id_pfr0
<link=p.SYSTEMCONTROL.ID_PFR0>
#### SystemControl.ID_MMFR0
<link=p.SYSTEMCONTROL.ID_MMFR0>
#### p.systemcontrol.id_mmfr1
<link=p.SYSTEMCONTROL.ID_MMFR1>
#### systemcontrol.id_isar0
<link=p.SYSTEMCONTROL.ID_ISAR0>
#### systemcontrol.icimvau
<link=p.SYSTEMCONTROL.ICIMVAU>
#### p.systemcontrol.cm7_dtcmcr
<link=p.SYSTEMCONTROL.CM7_DTCMCR>
#### NVIC.NVICISER1
<link=p.NVIC.NVICISER1>
#### p.NVIC.NVICISER3
<lang=dft>
 (rw)  [1;33m0xe000e10c[0m (0xe000e100 + 0x000c)
Interrupt Set Enable Register n
 (rw) (32)  [0;32mSETENA[0m  - [31:00] -  Interrupt set enable bits
</lang>
#### NVIC.NVICICER2
<link=p.NVIC.NVICICER2>
#### p.nvic.nvicispr0
<link=p.NVIC.NVICISPR0>
#### NVIC.NVICISPR1
<link=p.NVIC.NVICISPR1>
#### nvic.nvicicpr0
<link=p.NVIC.NVICICPR0>
#### p.NVIC.NVICICPR4
<lang=dft>
 (rw)  [1;33m0xe000e290[0m (0xe000e100 + 0x0190)
Interrupt Clear Pending Register n
 (rw) (32)  [0;32mCLRPEND[0m  - [31:00] -  Interrupt clear-pending bits
</lang>
#### nvic.nviciabr1
<link=p.NVIC.NVICIABR1>
#### p.nvic.nvicip1
<link=p.NVIC.NVICIP1>
#### p.NVIC.NVICIP4
<lang=dft>
 (rw)  [1;33m0xe000e404[0m (0xe000e100 + 0x0304)
Interrupt Priority Register 4
 (rw) (04)  [0;32mPRI4[0m  - [07:04] -  Priority of the INT_DMA4_DMA20 interrupt 4
</lang>
#### NVIC.NVICIP5
<link=p.NVIC.NVICIP5>
#### NVIC.NVICIP14
<link=p.NVIC.NVICIP14>
#### nvic.nvicip16
<link=p.NVIC.NVICIP16>
#### p.NVIC.NVICIP23
<lang=dft>
 (rw)  [1;33m0xe000e417[0m (0xe000e100 + 0x0317)
Interrupt Priority Register 23
 (rw) (04)  [0;32mPRI23[0m  - [07:04] -  Priority of the INT_LPUART4 interrupt 23
</lang>
#### nvic.nvicip23
<link=p.NVIC.NVICIP23>
#### NVIC.NVICIP25
<link=p.NVIC.NVICIP25>
#### p.nvic.nvicip26
<link=p.NVIC.NVICIP26>
#### nvic.nvicip30
<link=p.NVIC.NVICIP30>
#### NVIC.NVICIP32
<link=p.NVIC.NVICIP32>
#### p.NVIC.NVICIP34
<lang=dft>
 (rw)  [1;33m0xe000e422[0m (0xe000e100 + 0x0322)
Interrupt Priority Register 34
 (rw) (04)  [0;32mPRI34[0m  - [07:04] -  Priority of the INT_LPSPI3 interrupt 34
</lang>
#### p.nvic.nvicip39
<link=p.NVIC.NVICIP39>
#### p.nvic.nvicip45
<link=p.NVIC.NVICIP45>
#### NVIC.NVICIP46
<link=p.NVIC.NVICIP46>
#### p.NVIC.NVICIP49
<lang=dft>
 (rw)  [1;33m0xe000e431[0m (0xe000e100 + 0x0331)
Interrupt Priority Register 49
 (rw) (04)  [0;32mPRI49[0m  - [07:04] -  Priority of the INT_CSU interrupt 49
</lang>
#### nvic.nvicip49
<link=p.NVIC.NVICIP49>
#### p.nvic.nvicip52
<link=p.NVIC.NVICIP52>
#### NVIC.NVICIP58
<link=p.NVIC.NVICIP58>
#### NVIC.NVICIP69
<link=p.NVIC.NVICIP69>
#### p.nvic.nvicip74
<link=p.NVIC.NVICIP74>
#### p.NVIC.NVICIP78
<lang=dft>
 (rw)  [1;33m0xe000e44e[0m (0xe000e100 + 0x034e)
Interrupt Priority Register 78
 (rw) (04)  [0;32mPRI78[0m  - [07:04] -  Priority of the INT_GPIO1_INT6 interrupt 78
</lang>
#### p.nvic.nvicip81
<link=p.NVIC.NVICIP81>
#### NVIC.NVICIP82
<link=p.NVIC.NVICIP82>
#### p.nvic.nvicip96
<link=p.NVIC.NVICIP96>
#### p.nvic.nvicip102
<link=p.NVIC.NVICIP102>
#### nvic.nvicip104
<link=p.NVIC.NVICIP104>
#### NVIC.NVICIP106
<link=p.NVIC.NVICIP106>
#### p.NVIC.NVICIP107
<lang=dft>
 (rw)  [1;33m0xe000e46b[0m (0xe000e100 + 0x036b)
Interrupt Priority Register 107
 (rw) (04)  [0;32mPRI107[0m  - [07:04] -  Priority of the INT_FLEXSPI2 interrupt 107
</lang>
#### p.NVIC.NVICIP110
<lang=dft>
 (rw)  [1;33m0xe000e46e[0m (0xe000e100 + 0x036e)
Interrupt Priority Register 110
 (rw) (04)  [0;32mPRI110[0m  - [07:04] -  Priority of the INT_USDHC1 interrupt 110
</lang>
#### NVIC.NVICIP115
<link=p.NVIC.NVICIP115>
#### NVIC.NVICIP120
<link=p.NVIC.NVICIP120>
#### p.NVIC.NVICIP121
<lang=dft>
 (rw)  [1;33m0xe000e479[0m (0xe000e100 + 0x0379)
Interrupt Priority Register 121
 (rw) (04)  [0;32mPRI121[0m  - [07:04] -  Priority of the INT_ADC_ETC_ERROR_IRQ interrupt 121
</lang>
#### nvic.nvicip122
<link=p.NVIC.NVICIP122>
#### NVIC.NVICIP133
<link=p.NVIC.NVICIP133>
#### nvic.nvicip135
<link=p.NVIC.NVICIP135>
#### nvic.nvicip148
<link=p.NVIC.NVICIP148>
#### p.nvic.nvicip151
<link=p.NVIC.NVICIP151>
#### nvic.nvicip156
<link=p.NVIC.NVICIP156>
#### ldval2
<link=LDVAL2>
#### LTMR64H
<link=p.PIT.LTMR64H>
#### SW_PAD_CTL_PAD_PMIC_ON_REQ
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_PMIC_ON_REQ>
#### gpr6
<link=GPR6>
#### gpr17
<link=GPR17>
#### GPR23
<link=p.IOMUXC_GPR.GPR23>
#### gpr26
<link=GPR26>
#### HC1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.HC1
   p.ADC2.HC1
#### r0
<link=R0>
#### frqmax
<link=FRQMAX>
#### scr2l
<link=SCR2L>
#### ent[9]
<link=ENT[9]>
#### pkrcnt10
<link=PKRCNT10>
#### PKRCNT76
<link=p.TRNG.PKRCNT76>
#### LPGPR0_legacy_alias
<link=p.SNVS.LPGPR0_legacy_alias>
#### lpzmkr[6]
<link=LPZMKR[6]>
#### LPGPR[2]
<link=p.SNVS.LPGPR[2]>
#### lpgpr[6]
<link=LPGPR[6]>
#### PLL_ARM
<link=p.CCM_ANALOG.PLL_ARM>
#### PLL_SYS
<link=p.CCM_ANALOG.PLL_SYS>
#### pll_sys_clr
<link=PLL_SYS_CLR>
#### PLL_AUDIO_SET
<link=p.CCM_ANALOG.PLL_AUDIO_SET>
#### PLL_AUDIO_NUM
<link=p.CCM_ANALOG.PLL_AUDIO_NUM>
#### PLL_AUDIO_DENOM
<link=p.CCM_ANALOG.PLL_AUDIO_DENOM>
#### pll_video_set
<link=PLL_VIDEO_SET>
#### PFD_528_SET
<link=p.CCM_ANALOG.PFD_528_SET>
#### PFD_528_TOG
<link=p.CCM_ANALOG.PFD_528_TOG>
#### MISC1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC1
   p.PMU.MISC1
#### misc1
<link=MISC1>
#### REG_2P5_CLR
<link=p.PMU.REG_2P5_CLR>
#### TEMPSENSE1_SET
<link=p.TEMPMON.TEMPSENSE1_SET>
#### TEMPSENSE1_TOG
<link=p.TEMPMON.TEMPSENSE1_TOG>
#### TEMPSENSE2_CLR
<link=p.TEMPMON.TEMPSENSE2_CLR>
#### tempsense2_tog
<link=TEMPSENSE2_TOG>
#### usb1_chrg_detect
<link=USB1_CHRG_DETECT>
#### usb1_loopback_set
<link=USB1_LOOPBACK_SET>
#### USB1_LOOPBACK_CLR
<link=p.USB_ANALOG.USB1_LOOPBACK_CLR>
#### usb2_vbus_detect_tog
<link=USB2_VBUS_DETECT_TOG>
#### USB2_VBUS_DETECT_STAT
<link=p.USB_ANALOG.USB2_VBUS_DETECT_STAT>
#### usb2_chrg_detect_stat
<link=USB2_CHRG_DETECT_STAT>
#### osc_config0
<link=OSC_CONFIG0>
#### osc_config0_tog
<link=OSC_CONFIG0_TOG>
#### OSC_CONFIG1
<link=p.XTALOSC24M.OSC_CONFIG1>
#### CSL4
<link=p.CSU.CSL4>
#### CSL17
<link=p.CSU.CSL17>
#### csl24
<link=CSL24>
#### debug_mode
<link=DEBUG_MODE>
#### cint
<link=CINT>
#### int
<link=INT>
#### DCHPRI2
<link=p.DMA0.DCHPRI2>
#### dchpri2
<link=DCHPRI2>
#### DCHPRI17
<link=p.DMA0.DCHPRI17>
#### dchpri17
<link=DCHPRI17>
#### TCD0_NBYTES_MLOFFYES
<link=p.DMA0.TCD0_NBYTES_MLOFFYES>
#### tcd0_csr
<link=TCD0_CSR>
#### tcd1_nbytes_mloffyes
<link=TCD1_NBYTES_MLOFFYES>
#### tcd1_biter_elinkno
<link=TCD1_BITER_ELINKNO>
#### tcd2_nbytes_mloffyes
<link=TCD2_NBYTES_MLOFFYES>
#### TCD3_BITER_ELINKYES
<link=p.DMA0.TCD3_BITER_ELINKYES>
#### tcd4_citer_elinkno
<link=TCD4_CITER_ELINKNO>
#### TCD4_DLASTSGA
<link=p.DMA0.TCD4_DLASTSGA>
#### tcd4_dlastsga
<link=TCD4_DLASTSGA>
#### tcd4_biter_elinkyes
<link=TCD4_BITER_ELINKYES>
#### TCD5_SOFF
<link=p.DMA0.TCD5_SOFF>
#### TCD5_DLASTSGA
<link=p.DMA0.TCD5_DLASTSGA>
#### tcd5_csr
<link=TCD5_CSR>
#### TCD6_ATTR
<link=p.DMA0.TCD6_ATTR>
#### tcd6_nbytes_mloffno
<link=TCD6_NBYTES_MLOFFNO>
#### tcd6_dlastsga
<link=TCD6_DLASTSGA>
#### TCD8_CSR
<link=p.DMA0.TCD8_CSR>
#### TCD9_NBYTES_MLOFFYES
<link=p.DMA0.TCD9_NBYTES_MLOFFYES>
#### tcd9_biter_elinkyes
<link=TCD9_BITER_ELINKYES>
#### tcd10_doff
<link=TCD10_DOFF>
#### TCD11_NBYTES_MLNO
<link=p.DMA0.TCD11_NBYTES_MLNO>
#### tcd11_slast
<link=TCD11_SLAST>
#### tcd12_nbytes_mloffyes
<link=TCD12_NBYTES_MLOFFYES>
#### tcd12_citer_elinkno
<link=TCD12_CITER_ELINKNO>
#### TCD12_DLASTSGA
<link=p.DMA0.TCD12_DLASTSGA>
#### tcd12_biter_elinkno
<link=TCD12_BITER_ELINKNO>
#### tcd13_dlastsga
<link=TCD13_DLASTSGA>
#### TCD13_BITER_ELINKYES
<link=p.DMA0.TCD13_BITER_ELINKYES>
#### tcd14_soff
<link=TCD14_SOFF>
#### TCD15_CITER_ELINKYES
<link=p.DMA0.TCD15_CITER_ELINKYES>
#### tcd15_citer_elinkyes
<link=TCD15_CITER_ELINKYES>
#### tcd16_nbytes_mlno
<link=TCD16_NBYTES_MLNO>
#### TCD16_DADDR
<link=p.DMA0.TCD16_DADDR>
#### tcd17_nbytes_mloffno
<link=TCD17_NBYTES_MLOFFNO>
#### tcd17_citer_elinkno
<link=TCD17_CITER_ELINKNO>
#### tcd17_csr
<link=TCD17_CSR>
#### tcd17_biter_elinkno
<link=TCD17_BITER_ELINKNO>
#### tcd18_nbytes_mloffno
<link=TCD18_NBYTES_MLOFFNO>
#### TCD18_SLAST
<link=p.DMA0.TCD18_SLAST>
#### TCD18_BITER_ELINKNO
<link=p.DMA0.TCD18_BITER_ELINKNO>
#### tcd19_nbytes_mloffyes
<link=TCD19_NBYTES_MLOFFYES>
#### TCD19_SLAST
<link=p.DMA0.TCD19_SLAST>
#### TCD20_BITER_ELINKYES
<link=p.DMA0.TCD20_BITER_ELINKYES>
#### TCD21_NBYTES_MLNO
<link=p.DMA0.TCD21_NBYTES_MLNO>
#### TCD21_NBYTES_MLOFFNO
<link=p.DMA0.TCD21_NBYTES_MLOFFNO>
#### tcd22_biter_elinkno
<link=TCD22_BITER_ELINKNO>
#### tcd23_attr
<link=TCD23_ATTR>
#### TCD23_NBYTES_MLOFFYES
<link=p.DMA0.TCD23_NBYTES_MLOFFYES>
#### TCD23_DOFF
<link=p.DMA0.TCD23_DOFF>
#### tcd23_citer_elinkyes
<link=TCD23_CITER_ELINKYES>
#### TCD23_BITER_ELINKYES
<link=p.DMA0.TCD23_BITER_ELINKYES>
#### TCD24_NBYTES_MLNO
<link=p.DMA0.TCD24_NBYTES_MLNO>
#### TCD24_NBYTES_MLOFFYES
<link=p.DMA0.TCD24_NBYTES_MLOFFYES>
#### tcd24_dlastsga
<link=TCD24_DLASTSGA>
#### TCD25_SLAST
<link=p.DMA0.TCD25_SLAST>
#### tcd25_citer_elinkyes
<link=TCD25_CITER_ELINKYES>
#### tcd25_csr
<link=TCD25_CSR>
#### tcd26_attr
<link=TCD26_ATTR>
#### TCD26_NBYTES_MLNO
<link=p.DMA0.TCD26_NBYTES_MLNO>
#### tcd27_citer_elinkno
<link=TCD27_CITER_ELINKNO>
#### TCD27_CITER_ELINKYES
<link=p.DMA0.TCD27_CITER_ELINKYES>
#### TCD27_DLASTSGA
<link=p.DMA0.TCD27_DLASTSGA>
#### tcd28_csr
<link=TCD28_CSR>
#### tcd29_saddr
<link=TCD29_SADDR>
#### tcd29_nbytes_mlno
<link=TCD29_NBYTES_MLNO>
#### TCD29_DLASTSGA
<link=p.DMA0.TCD29_DLASTSGA>
#### tcd30_saddr
<link=TCD30_SADDR>
#### tcd30_attr
<link=TCD30_ATTR>
#### TCD30_BITER_ELINKNO
<link=p.DMA0.TCD30_BITER_ELINKNO>
#### tcd31_biter_elinkno
<link=TCD31_BITER_ELINKNO>
#### CHCFG[24]
<link=p.DMAMUX.CHCFG[24]>
#### chcfg[25]
<link=CHCFG[25]>
#### IMR1
<link=p.GPC.IMR1>
#### isr3
<link=ISR3>
#### ISR5
<link=p.GPC.ISR5>
#### cpu_ctrl
<link=CPU_CTRL>
#### cscmr1
<link=CSCMR1>
#### CDCDR
<link=p.CCM.CDCDR>
#### CCGR4
<link=p.CCM.CCGR4>
#### ccgr4
<link=CCGR4>
#### rompatchenh
<link=ROMPATCHENH>
#### rompatch3a
<link=ROMPATCH3A>
#### ROMPATCH13A
<link=p.ROMC.ROMPATCH13A>
#### data
<link=DATA>
#### shiftctl[2]
<link=SHIFTCTL[2]>
#### shiftcfg[0]
<link=SHIFTCFG[0]>
#### shiftbuf[0]
<link=SHIFTBUF[0]>
#### SHIFTBUFBIS[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFBIS[2]
   p.FLEXIO2.SHIFTBUFBIS[2]
   p.FLEXIO3.SHIFTBUFBIS[2]
#### TIMCTL[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCTL[3]
   p.FLEXIO2.TIMCTL[3]
   p.FLEXIO3.TIMCTL[3]
#### TIMCMP[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCMP[3]
   p.FLEXIO2.TIMCMP[3]
   p.FLEXIO3.TIMCMP[3]
#### SHIFTBUFNBS[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFNBS[2]
   p.FLEXIO2.SHIFTBUFNBS[2]
   p.FLEXIO3.SHIFTBUFNBS[2]
#### shiftbufnis[2]
<link=SHIFTBUFNIS[2]>
#### psr
<link=PSR>
#### TIMER
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.TIMER
   p.CAN2.TIMER
   p.CAN3.TIMER
#### CTRL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.CTRL2
   p.CAN2.CTRL2
   p.CAN3.CTRL2
   p.TMR1.CTRL2
   p.TMR2.CTRL2
   p.TMR3.CTRL2
   p.TMR4.CTRL2
   p.LCDIF.CTRL2
   p.ENC1.CTRL2
   p.ENC2.CTRL2
   p.ENC3.CTRL2
   p.ENC4.CTRL2
#### rximr5
<link=RXIMR5>
#### rximr14
<link=RXIMR14>
#### RXIMR32
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR32
   p.CAN2.RXIMR32
#### rximr44
<link=RXIMR44>
#### RXIMR47
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR47
   p.CAN2.RXIMR47
#### RXIMR50
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR50
   p.CAN2.RXIMR50
#### RXIMR61
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR61
   p.CAN2.RXIMR61
#### rximr62
<link=RXIMR62>
#### mb0_64b_word0
<link=MB0_64B_WORD0>
#### MB0_16B_WORD1
<link=p.CAN3.MB0_16B_WORD1>
#### mb0_32b_word1
<link=MB0_32B_WORD1>
#### cs1
<link=CS1>
#### ID1
<link=p.CAN3.ID1>
#### MB1_8B_ID
<link=p.CAN3.MB1_8B_ID>
#### MB2_8B_WORD0
<link=p.CAN3.MB2_8B_WORD0>
#### mb1_16b_word3
<link=MB1_16B_WORD3>
#### mb1_32b_id
<link=MB1_32B_ID>
#### mb2_8b_word1
<link=MB2_8B_WORD1>
#### MB2_16B_WORD1
<link=p.CAN3.MB2_16B_WORD1>
#### mb0_64b_word14
<link=MB0_64B_WORD14>
#### MB1_32B_WORD5
<link=p.CAN3.MB1_32B_WORD5>
#### mb1_64b_cs
<link=MB1_64B_CS>
#### mb1_64b_word1
<link=MB1_64B_WORD1>
#### word16
<link=WORD16>
#### mb2_32b_word6
<link=MB2_32B_WORD6>
#### MB7_8B_WORD1
<link=p.CAN3.MB7_8B_WORD1>
#### mb5_16b_word0
<link=MB5_16B_WORD0>
#### MB3_32B_WORD5
<link=p.CAN3.MB3_32B_WORD5>
#### MB2_64B_WORD4
<link=p.CAN3.MB2_64B_WORD4>
#### mb7_16b_cs
<link=MB7_16B_CS>
#### word010
<link=WORD010>
#### mb4_32b_word5
<link=MB4_32B_WORD5>
#### mb7_16b_word3
<link=MB7_16B_WORD3>
#### MB2_64B_WORD14
<link=p.CAN3.MB2_64B_WORD14>
#### MB5_32B_WORD1
<link=p.CAN3.MB5_32B_WORD1>
#### mb8_16b_word3
<link=MB8_16B_WORD3>
#### MB9_16B_WORD0
<link=p.CAN3.MB9_16B_WORD0>
#### MB3_64B_WORD6
<link=p.CAN3.MB3_64B_WORD6>
#### WORD115
<link=p.CAN3.WORD115>
#### MB10_16B_WORD2
<link=p.CAN3.MB10_16B_WORD2>
#### mb6_32b_word2
<link=MB6_32B_WORD2>
#### ID16
<link=p.CAN3.ID16>
#### mb11_16b_cs
<link=MB11_16B_CS>
#### MB3_64B_WORD10
<link=p.CAN3.MB3_64B_WORD10>
#### mb7_32b_id
<link=MB7_32B_ID>
#### cs18
<link=CS18>
#### MB4_64B_CS
<link=p.CAN3.MB4_64B_CS>
#### MB7_32B_WORD1
<link=p.CAN3.MB7_32B_WORD1>
#### mb4_64b_word5
<link=MB4_64B_WORD5>
#### MB21_8B_ID
<link=p.CAN3.MB21_8B_ID>
#### WORD021
<link=p.CAN3.WORD021>
#### mb14_16b_word1
<link=MB14_16B_WORD1>
#### MB8_32B_WORD5
<link=p.CAN3.MB8_32B_WORD5>
#### cs22
<link=CS22>
#### id22
<link=ID22>
#### mb9_32b_cs
<link=MB9_32B_CS>
#### MB22_8B_WORD1
<link=p.CAN3.MB22_8B_WORD1>
#### mb22_8b_word1
<link=MB22_8B_WORD1>
#### MB23_8B_CS
<link=p.CAN3.MB23_8B_CS>
#### mb9_32b_word2
<link=MB9_32B_WORD2>
#### MB23_8B_WORD1
<link=p.CAN3.MB23_8B_WORD1>
#### mb5_64b_word4
<link=MB5_64B_WORD4>
#### mb16_16b_word0
<link=MB16_16B_WORD0>
#### WORD124
<link=p.CAN3.WORD124>
#### MB16_16B_WORD3
<link=p.CAN3.MB16_16B_WORD3>
#### mb17_16b_cs
<link=MB17_16B_CS>
#### mb25_8b_word0
<link=MB25_8B_WORD0>
#### MB5_64B_WORD10
<link=p.CAN3.MB5_64B_WORD10>
#### word025
<link=WORD025>
#### CS26
<link=p.CAN3.CS26>
#### mb5_64b_word13
<link=MB5_64B_WORD13>
#### mb18_16b_id
<link=MB18_16B_ID>
#### MB6_64B_WORD1
<link=p.CAN3.MB6_64B_WORD1>
#### mb11_32b_word2
<link=MB11_32B_WORD2>
#### MB11_32B_WORD4
<link=p.CAN3.MB11_32B_WORD4>
#### MB19_16B_WORD0
<link=p.CAN3.MB19_16B_WORD0>
#### mb29_8b_word0
<link=MB29_8B_WORD0>
#### mb19_16b_word3
<link=MB19_16B_WORD3>
#### MB12_32B_CS
<link=p.CAN3.MB12_32B_CS>
#### mb30_8b_cs
<link=MB30_8B_CS>
#### MB31_8B_WORD1
<link=p.CAN3.MB31_8B_WORD1>
#### MB7_64B_WORD1
<link=p.CAN3.MB7_64B_WORD1>
#### MB22_16B_CS
<link=p.CAN3.MB22_16B_CS>
#### mb13_32b_word1
<link=MB13_32B_WORD1>
#### WORD133
<link=p.CAN3.WORD133>
#### MB22_16B_WORD2
<link=p.CAN3.MB22_16B_WORD2>
#### MB13_32B_WORD6
<link=p.CAN3.MB13_32B_WORD6>
#### MB34_8B_WORD0
<link=p.CAN3.MB34_8B_WORD0>
#### MB36_8B_CS
<link=p.CAN3.MB36_8B_CS>
#### mb24_16b_id
<link=MB24_16B_ID>
#### mb36_8b_word0
<link=MB36_8B_WORD0>
#### MB24_16B_WORD2
<link=p.CAN3.MB24_16B_WORD2>
#### MB37_8B_CS
<link=p.CAN3.MB37_8B_CS>
#### mb25_16b_cs
<link=MB25_16B_CS>
#### MB8_64B_WORD4
<link=p.CAN3.MB8_64B_WORD4>
#### word137
<link=WORD137>
#### MB15_32B_WORD0
<link=p.CAN3.MB15_32B_WORD0>
#### MB25_16B_WORD0
<link=p.CAN3.MB25_16B_WORD0>
#### MB38_8B_WORD0
<link=p.CAN3.MB38_8B_WORD0>
#### ID39
<link=p.CAN3.ID39>
#### mb15_32b_word6
<link=MB15_32B_WORD6>
#### MB26_16B_WORD1
<link=p.CAN3.MB26_16B_WORD1>
#### MB8_64B_WORD14
<link=p.CAN3.MB8_64B_WORD14>
#### id40
<link=ID40>
#### mb16_32b_id
<link=MB16_32B_ID>
#### MB9_64B_ID
<link=p.CAN3.MB9_64B_ID>
#### MB27_16B_WORD1
<link=p.CAN3.MB27_16B_WORD1>
#### mb41_8b_word1
<link=MB41_8B_WORD1>
#### MB9_64B_WORD4
<link=p.CAN3.MB9_64B_WORD4>
#### MB43_8B_CS
<link=p.CAN3.MB43_8B_CS>
#### mb28_16b_word3
<link=MB28_16B_WORD3>
#### MB17_32B_WORD2
<link=p.CAN3.MB17_32B_WORD2>
#### mb9_64b_word11
<link=MB9_64B_WORD11>
#### ID44
<link=p.CAN3.ID44>
#### mb17_32b_word5
<link=MB17_32B_WORD5>
#### mb29_16b_word1
<link=MB29_16B_WORD1>
#### mb10_64b_word1
<link=MB10_64B_WORD1>
#### word145
<link=WORD145>
#### mb18_32b_word2
<link=MB18_32B_WORD2>
#### MB10_64B_WORD4
<link=p.CAN3.MB10_64B_WORD4>
#### MB18_32B_WORD5
<link=p.CAN3.MB18_32B_WORD5>
#### MB31_16B_ID
<link=p.CAN3.MB31_16B_ID>
#### CS47
<link=p.CAN3.CS47>
#### mb31_16b_word2
<link=MB31_16B_WORD2>
#### MB48_8B_ID
<link=p.CAN3.MB48_8B_ID>
#### word048
<link=WORD048>
#### mb48_8b_word1
<link=MB48_8B_WORD1>
#### MB10_64B_WORD14
<link=p.CAN3.MB10_64B_WORD14>
#### MB49_8B_WORD1
<link=p.CAN3.MB49_8B_WORD1>
#### WORD149
<link=p.CAN3.WORD149>
#### CS50
<link=p.CAN3.CS50>
#### mb33_16b_word1
<link=MB33_16B_WORD1>
#### WORD050
<link=p.CAN3.WORD050>
#### MB50_8B_WORD1
<link=p.CAN3.MB50_8B_WORD1>
#### mb51_8b_id
<link=MB51_8B_ID>
#### MB11_64B_WORD6
<link=p.CAN3.MB11_64B_WORD6>
#### mb20_32b_word4
<link=MB20_32B_WORD4>
#### mb11_64b_word7
<link=MB11_64B_WORD7>
#### mb53_8b_cs
<link=MB53_8B_CS>
#### mb11_64b_word15
<link=MB11_64B_WORD15>
#### cs54
<link=CS54>
#### mb21_32b_word7
<link=MB21_32B_WORD7>
#### MB55_8B_WORD0
<link=p.CAN3.MB55_8B_WORD0>
#### mb22_32b_word4
<link=MB22_32B_WORD4>
#### mb56_8b_word0
<link=MB56_8B_WORD0>
#### mb12_64b_word9
<link=MB12_64B_WORD9>
#### word156
<link=WORD156>
#### id57
<link=ID57>
#### mb12_64b_word12
<link=MB12_64B_WORD12>
#### mb23_32b_id
<link=MB23_32B_ID>
#### mb23_32b_word3
<link=MB23_32B_WORD3>
#### mb40_16b_cs
<link=MB40_16B_CS>
#### mb40_16b_id
<link=MB40_16B_ID>
#### mb60_8b_word0
<link=MB60_8B_WORD0>
#### MB61_8B_WORD1
<link=p.CAN3.MB61_8B_WORD1>
#### ID62
<link=p.CAN3.ID62>
#### RXIMR[18]
<link=p.CAN3.RXIMR[18]>
#### rximr[21]
<link=RXIMR[21]>
#### RXIMR[22]
<link=p.CAN3.RXIMR[22]>
#### RXIMR[36]
<link=p.CAN3.RXIMR[36]>
#### RXIMR[53]
<link=p.CAN3.RXIMR[53]>
#### EDCBT
<link=p.CAN3.EDCBT>
#### HR_TIME_STAMP[1]
<link=p.CAN3.HR_TIME_STAMP[1]>
#### HR_TIME_STAMP[14]
<link=p.CAN3.HR_TIME_STAMP[14]>
#### hr_time_stamp[27]
<link=HR_TIME_STAMP[27]>
#### HR_TIME_STAMP[32]
<link=p.CAN3.HR_TIME_STAMP[32]>
#### hr_time_stamp[34]
<link=HR_TIME_STAMP[34]>
#### HR_TIME_STAMP[38]
<link=p.CAN3.HR_TIME_STAMP[38]>
#### hr_time_stamp[42]
<link=HR_TIME_STAMP[42]>
#### HR_TIME_STAMP[57]
<link=p.CAN3.HR_TIME_STAMP[57]>
#### hr_time_stamp[58]
<link=HR_TIME_STAMP[58]>
#### HR_TIME_STAMP[61]
<link=p.CAN3.HR_TIME_STAMP[61]>
#### ERFFEL[6]
<link=p.CAN3.ERFFEL[6]>
#### erffel[6]
<link=ERFFEL[6]>
#### erffel[22]
<link=ERFFEL[22]>
#### erffel[25]
<link=ERFFEL[25]>
#### erffel[36]
<link=ERFFEL[36]>
#### ERFFEL[40]
<link=p.CAN3.ERFFEL[40]>
#### erffel[40]
<link=ERFFEL[40]>
#### ERFFEL[45]
<link=p.CAN3.ERFFEL[45]>
#### erffel[57]
<link=ERFFEL[57]>
#### ERFFEL[69]
<link=p.CAN3.ERFFEL[69]>
#### ERFFEL[71]
<link=p.CAN3.ERFFEL[71]>
#### erffel[71]
<link=ERFFEL[71]>
#### ERFFEL[93]
<link=p.CAN3.ERFFEL[93]>
#### erffel[109]
<link=ERFFEL[109]>
#### ERFFEL[122]
<link=p.CAN3.ERFFEL[122]>
#### erffel[122]
<link=ERFFEL[122]>
#### SCTRL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.SCTRL2
   p.TMR2.SCTRL2
   p.TMR3.SCTRL2
   p.TMR4.SCTRL2
#### filt1
<link=FILT1>
#### PR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPT1.PR
   p.GPT2.PR
#### mem3
<link=MEM3>
#### ana1
<link=ANA1>
#### SW_GP1
<link=p.OCOTP.SW_GP1>
#### sw_gp20
<link=SW_GP20>
#### ROM_PATCH5
<link=p.OCOTP.ROM_PATCH5>
#### rom_patch5
<link=ROM_PATCH5>
#### gp43
<link=GP43>
#### SW_MUX_CTL_PAD_GPIO_EMC_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_08>
#### sw_mux_ctl_pad_gpio_emc_08
<link=SW_MUX_CTL_PAD_GPIO_EMC_08>
#### SW_MUX_CTL_PAD_GPIO_EMC_27
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_27>
#### sw_mux_ctl_pad_gpio_emc_27
<link=SW_MUX_CTL_PAD_GPIO_EMC_27>
#### SW_MUX_CTL_PAD_GPIO_EMC_34
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_34>
#### sw_mux_ctl_pad_gpio_emc_34
<link=SW_MUX_CTL_PAD_GPIO_EMC_34>
#### sw_mux_ctl_pad_gpio_ad_b0_00
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_00>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_04>
#### sw_mux_ctl_pad_gpio_ad_b0_13
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_13>
#### sw_mux_ctl_pad_gpio_ad_b1_07
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_07>
#### sw_mux_ctl_pad_gpio_ad_b1_14
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_14>
#### SW_MUX_CTL_PAD_GPIO_B0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_04>
#### sw_mux_ctl_pad_gpio_b0_10
<link=SW_MUX_CTL_PAD_GPIO_B0_10>
#### SW_MUX_CTL_PAD_GPIO_B0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_13>
#### SW_MUX_CTL_PAD_GPIO_B1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_10>
#### sw_mux_ctl_pad_gpio_b1_10
<link=SW_MUX_CTL_PAD_GPIO_B1_10>
#### sw_mux_ctl_pad_gpio_sd_b0_00
<link=SW_MUX_CTL_PAD_GPIO_SD_B0_00>
#### sw_pad_ctl_pad_gpio_emc_04
<link=SW_PAD_CTL_PAD_GPIO_EMC_04>
#### SW_PAD_CTL_PAD_GPIO_EMC_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_11>
#### SW_PAD_CTL_PAD_GPIO_EMC_37
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_37>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_01>
#### sw_pad_ctl_pad_gpio_ad_b0_15
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_15>
#### sw_pad_ctl_pad_gpio_ad_b1_01
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_01>
#### SW_PAD_CTL_PAD_GPIO_B0_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_15>
#### SW_PAD_CTL_PAD_GPIO_B1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_00>
#### sw_pad_ctl_pad_gpio_b1_02
<link=SW_PAD_CTL_PAD_GPIO_B1_02>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_02>
#### CCM_PMIC_READY_SELECT_INPUT
<link=p.IOMUXC.CCM_PMIC_READY_SELECT_INPUT>
#### CSI_DATA06_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA06_SELECT_INPUT>
#### ENET_IPG_CLK_RMII_SELECT_INPUT
<link=p.IOMUXC.ENET_IPG_CLK_RMII_SELECT_INPUT>
#### ENET1_RXDATA_SELECT_INPUT
<link=p.IOMUXC.ENET1_RXDATA_SELECT_INPUT>
#### enet_rxerr_select_input
<link=ENET_RXERR_SELECT_INPUT>
#### FLEXPWM1_PWMA0_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMA0_SELECT_INPUT>
#### FLEXPWM2_PWMA0_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMA0_SELECT_INPUT>
#### flexpwm2_pwma1_select_input
<link=FLEXPWM2_PWMA1_SELECT_INPUT>
#### flexspia_data1_select_input
<link=FLEXSPIA_DATA1_SELECT_INPUT>
#### LPSPI2_SCK_SELECT_INPUT
<link=p.IOMUXC.LPSPI2_SCK_SELECT_INPUT>
#### LPSPI4_SCK_SELECT_INPUT
<link=p.IOMUXC.LPSPI4_SCK_SELECT_INPUT>
#### lpuart4_rx_select_input
<link=LPUART4_RX_SELECT_INPUT>
#### LPUART6_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART6_TX_SELECT_INPUT>
#### NMI_SELECT_INPUT
<link=p.IOMUXC.NMI_SELECT_INPUT>
#### sai1_rx_bclk_select_input
<link=SAI1_RX_BCLK_SELECT_INPUT>
#### SAI2_RX_BCLK_SELECT_INPUT
<link=p.IOMUXC.SAI2_RX_BCLK_SELECT_INPUT>
#### USB_OTG2_OC_SELECT_INPUT
<link=p.IOMUXC.USB_OTG2_OC_SELECT_INPUT>
#### usdhc2_data2_select_input
<link=USDHC2_DATA2_SELECT_INPUT>
#### USDHC2_DATA4_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA4_SELECT_INPUT>
#### xbar1_in06_select_input
<link=XBAR1_IN06_SELECT_INPUT>
#### xbar1_in20_select_input
<link=XBAR1_IN20_SELECT_INPUT>
#### XBAR1_IN22_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN22_SELECT_INPUT>
#### XBAR1_IN23_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN23_SELECT_INPUT>
#### sw_mux_ctl_pad_gpio_spi_b0_01
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_01>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_06>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_11>
#### sw_mux_ctl_pad_gpio_spi_b0_12
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_12>
#### sw_mux_ctl_pad_gpio_spi_b1_06
<link=SW_MUX_CTL_PAD_GPIO_SPI_B1_06>
#### SW_PAD_CTL_PAD_GPIO_SPI_B0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_02>
#### sw_pad_ctl_pad_gpio_spi_b0_04
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_04>
#### flexspi2_ipp_ind_io_fb_bit3_select_input
<link=FLEXSPI2_IPP_IND_IO_FB_BIT3_SELECT_INPUT>
#### GPT2_IPP_IND_CLKIN_SELECT_INPUT
<link=p.IOMUXC.GPT2_IPP_IND_CLKIN_SELECT_INPUT>
#### INTR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.INTR
   p.FLEXSPI2.INTR
   p.SEMC.INTR
#### flshcr1a2
<link=FLSHCR1A2>
#### STS2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.STS2
   p.FLEXSPI2.STS2
   p.SEMC.STS2
#### rfdr[0]
<link=RFDR[0]>
#### RFDR[7]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[7]
   p.FLEXSPI2.RFDR[7]
#### rfdr[25]
<link=RFDR[25]>
#### TFDR[15]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[15]
   p.FLEXSPI2.TFDR[15]
#### tfdr[15]
<link=TFDR[15]>
#### TFDR[21]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[21]
   p.FLEXSPI2.TFDR[21]
#### tfdr[21]
<link=TFDR[21]>
#### TFDR[24]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[24]
   p.FLEXSPI2.TFDR[24]
#### tfdr[24]
<link=TFDR[24]>
#### lut[28]
<link=LUT[28]>
#### LUT[41]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[41]
   p.FLEXSPI2.LUT[41]
#### lut[44]
<link=LUT[44]>
#### LUT[59]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[59]
   p.FLEXSPI2.LUT[59]
#### OUT_CTRL_SET
<link=p.PXP.OUT_CTRL_SET>
#### OUT_BUF2
<link=p.PXP.OUT_BUF2>
#### out_ps_lrc
<link=OUT_PS_LRC>
#### out_as_ulc
<link=OUT_AS_ULC>
#### PS_CTRL_SET
<link=p.PXP.PS_CTRL_SET>
#### PORTER_DUFF_CTRL
<link=p.PXP.PORTER_DUFF_CTRL>
#### PIGEON_0_1
<link=p.LCDIF.PIGEON_0_1>
#### PIGEON_5_1
<link=p.LCDIF.PIGEON_5_1>
#### pigeon_6_1
<link=PIGEON_6_1>
#### pigeon_9_2
<link=PIGEON_9_2>
#### pigeon_11_0
<link=PIGEON_11_0>
#### csidmasa_statfifo
<link=CSIDMASA_STATFIFO>
#### CMD_XFR_TYP
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.CMD_XFR_TYP
   p.USDHC2.CMD_XFR_TYP
#### AUTOCMD12_ERR_STATUS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.AUTOCMD12_ERR_STATUS
   p.USDHC2.AUTOCMD12_ERR_STATUS
#### DLL_STATUS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.DLL_STATUS
   p.USDHC2.DLL_STATUS
#### MSCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.MSCR
   p.ENET2.MSCR
#### mscr
<link=MSCR>
#### txic
<link=TXIC>
#### TDSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TDSR
   p.ENET2.TDSR
#### tipg
<link=TIPG>
#### RMON_T_P512TO1023
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_P512TO1023
   p.ENET2.RMON_T_P512TO1023
#### IEEE_T_1COL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_T_1COL
   p.ENET2.IEEE_T_1COL
#### rmon_r_mc_pkt
<link=RMON_R_MC_PKT>
#### RMON_R_UNDERSIZE
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_UNDERSIZE
   p.ENET2.RMON_R_UNDERSIZE
#### ieee_r_macerr
<link=IEEE_R_MACERR>
#### USBCMD
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.USBCMD
   p.USB2.USBCMD
#### USBSTS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.USBSTS
   p.USB2.USBSTS
#### ENDPTSETUPSTAT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTSETUPSTAT
   p.USB2.ENDPTSETUPSTAT
#### endptflush
<link=ENDPTFLUSH>
#### endptstat
<link=ENDPTSTAT>
#### ENDPTCTRL4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTCTRL4
   p.USB2.ENDPTCTRL4
#### endptctrl6
<link=ENDPTCTRL6>
#### IOCR
<link=p.SEMC.IOCR>
#### iocr
<link=IOCR>
#### br7
<link=BR7>
#### dllcr
<link=DLLCR>
#### norcr2
<link=NORCR2>
#### SRAMCR3
<link=p.SEMC.SRAMCR3>
#### DBICR0
<link=p.SEMC.DBICR0>
#### sts4
<link=STS4>
#### STS15
<link=p.SEMC.STS15>
#### CH1STAT
<link=p.DCP.CH1STAT>
#### ch2stat
<link=CH2STAT>
#### ch2opts_tog
<link=CH2OPTS_TOG>
#### srpc
<link=SRPC>
#### SRQ
<link=p.SPDIF.SRQ>
#### tfr[1]
<link=TFR[1]>
#### RDR[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RDR[3]
   p.SAI2.RDR[3]
   p.SAI3.RDR[3]
#### rfr[2]
<link=RFR[2]>
#### done2_err_irq
<link=DONE2_ERR_IRQ>
#### TRIG2_RESULT_5_4
<link=p.ADC_ETC.TRIG2_RESULT_5_4>
#### TRIG2_RESULT_7_6
<link=p.ADC_ETC.TRIG2_RESULT_7_6>
#### TRIG5_CHAIN_3_2
<link=p.ADC_ETC.TRIG5_CHAIN_3_2>
#### TRIG7_CHAIN_3_2
<link=p.ADC_ETC.TRIG7_CHAIN_3_2>
#### TRIG7_CHAIN_5_4
<link=p.ADC_ETC.TRIG7_CHAIN_5_4>
#### trig7_result_1_0
<link=TRIG7_RESULT_1_0>
#### trig7_result_7_6
<link=TRIG7_RESULT_7_6>
#### BFCRT012
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AOI1.BFCRT012
   p.AOI2.BFCRT012
#### sel8
<link=SEL8>
#### sel12
<link=SEL12>
#### sel23
<link=SEL23>
#### sel34
<link=SEL34>
#### sel41
<link=SEL41>
#### SEL47
<link=p.XBARA1.SEL47>
#### SEL54
<link=p.XBARA1.SEL54>
#### SEL61
<link=p.XBARA1.SEL61>
#### REV
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.REV
   p.ENC2.REV
   p.ENC3.REV
   p.ENC4.REV
#### UPOS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.UPOS
   p.ENC2.UPOS
   p.ENC3.UPOS
   p.ENC4.UPOS
#### lmod
<link=LMOD>
#### SM0CNT
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CNT
   p.PWM2.SM0CNT
   p.PWM3.SM0CNT
   p.PWM4.SM0CNT
#### sm0fracval1
<link=SM0FRACVAL1>
#### SM0FRACVAL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0FRACVAL2
   p.PWM2.SM0FRACVAL2
   p.PWM3.SM0FRACVAL2
   p.PWM4.SM0FRACVAL2
#### sm0dmaen
<link=SM0DMAEN>
#### sm0dtcnt0
<link=SM0DTCNT0>
#### sm0cval1cyc
<link=SM0CVAL1CYC>
#### SM0CVAL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CVAL5
   p.PWM2.SM0CVAL5
   p.PWM3.SM0CVAL5
   p.PWM4.SM0CVAL5
#### sm1fracval4
<link=SM1FRACVAL4>
#### sm1octrl
<link=SM1OCTRL>
#### SM1STS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1STS
   p.PWM2.SM1STS
   p.PWM3.SM1STS
   p.PWM4.SM1STS
#### sm1dtcnt1
<link=SM1DTCNT1>
#### SM1CAPTCOMPX
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CAPTCOMPX
   p.PWM2.SM1CAPTCOMPX
   p.PWM3.SM1CAPTCOMPX
   p.PWM4.SM1CAPTCOMPX
#### sm2cnt
<link=SM2CNT>
#### SM2VAL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2VAL0
   p.PWM2.SM2VAL0
   p.PWM3.SM2VAL0
   p.PWM4.SM2VAL0
#### SM2FRACVAL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2FRACVAL1
   p.PWM2.SM2FRACVAL1
   p.PWM3.SM2FRACVAL1
   p.PWM4.SM2FRACVAL1
#### sm2sts
<link=SM2STS>
#### sm2dismap0
<link=SM2DISMAP0>
#### SM2DTCNT0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2DTCNT0
   p.PWM2.SM2DTCNT0
   p.PWM3.SM2DTCNT0
   p.PWM4.SM2DTCNT0
#### SM3VAL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3VAL1
   p.PWM2.SM3VAL1
   p.PWM3.SM3VAL1
   p.PWM4.SM3VAL1
#### sm3sts
<link=SM3STS>
#### SM3INTEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3INTEN
   p.PWM2.SM3INTEN
   p.PWM3.SM3INTEN
   p.PWM4.SM3INTEN
#### sm3dtcnt0
<link=SM3DTCNT0>
#### SM3CAPTCTRLX
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CAPTCTRLX
   p.PWM2.SM3CAPTCTRLX
   p.PWM3.SM3CAPTCTRLX
   p.PWM4.SM3CAPTCTRLX
#### sm3cval4
<link=SM3CVAL4>
#### FCTRL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.FCTRL0
   p.PWM2.FCTRL0
   p.PWM3.FCTRL0
   p.PWM4.FCTRL0
#### aes_key0_w0
<link=AES_KEY0_W0>
#### MSR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MSR
   p.LPI2C2.MSR
   p.LPI2C3.MSR
   p.LPI2C4.MSR
#### mcfgr1
<link=MCFGR1>
#### MDMR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.MDMR
   p.LPI2C2.MDMR
   p.LPI2C3.MDMR
   p.LPI2C4.MDMR
#### mfsr
<link=MFSR>
#### ID_PFR0
<link=p.SystemControl.ID_PFR0>
#### ID_ISAR1
<link=p.SystemControl.ID_ISAR1>
#### dcisw
<link=DCISW>
#### DCCIMVAC
<link=p.SystemControl.DCCIMVAC>
#### dccisw
<link=DCCISW>
#### CM7_AHBSCR
<link=p.SystemControl.CM7_AHBSCR>
#### cm7_ahbscr
<link=CM7_AHBSCR>
#### NVICISER3
<link=p.NVIC.NVICISER3>
#### nviciser4
<link=NVICISER4>
#### NVICICPR0
<link=p.NVIC.NVICICPR0>
#### nvicip1
<link=NVICIP1>
#### nvicip17
<link=NVICIP17>
#### nvicip23
<link=NVICIP23>
#### NVICIP24
<link=p.NVIC.NVICIP24>
#### NVICIP33
<link=p.NVIC.NVICIP33>
#### nvicip39
<link=NVICIP39>
#### nvicip41
<link=NVICIP41>
#### NVICIP51
<link=p.NVIC.NVICIP51>
#### NVICIP68
<link=p.NVIC.NVICIP68>
#### nvicip74
<link=NVICIP74>
#### nvicip85
<link=NVICIP85>
#### NVICIP95
<link=p.NVIC.NVICIP95>
#### NVICIP108
<link=p.NVIC.NVICIP108>
#### nvicip115
<link=NVICIP115>
#### nvicip120
<link=NVICIP120>
#### NVICIP132
<link=p.NVIC.NVICIP132>
#### nvicip142
<link=NVICIP142>
#### NVICIP150
<link=p.NVIC.NVICIP150>
