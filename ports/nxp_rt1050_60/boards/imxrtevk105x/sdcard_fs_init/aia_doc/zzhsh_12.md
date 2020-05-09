#### duoji
<link=oart.servo>

#### aipstz1.mpr
<link=p.AIPSTZ1.MPR>
#### p.aipstz1.opacr
<link=p.AIPSTZ1.OPACR>
#### AIPSTZ1.OPACR1
<link=p.AIPSTZ1.OPACR1>
#### p.aipstz2
<link=p.AIPSTZ2>
#### aipstz2.opacr4
<link=p.AIPSTZ2.OPACR4>
#### p.AIPSTZ3.OPACR1
<lang=dft>
 (rw)  [1;33m0x4027c044[0m (0x4027c000 + 0x0044)
Off-Platform Peripheral Access Control Registers
 (rw) (04)  [0;32mOPAC15[0m  - [03:00] -  Off-platform Peripheral Access Control 15
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC14[0m  - [07:04] -  Off-platform Peripheral Access Control 14
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC13[0m  - [11:08] -  Off-platform Peripheral Access Control 13
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC12[0m  - [15:12] -  Off-platform Peripheral Access Control 12
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC11[0m  - [19:16] -  Off-platform Peripheral Access Control 11
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC10[0m  - [23:20] -  Off-platform Peripheral Access Control 10
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC9[0m  - [27:24] -  Off-platform Peripheral Access Control 9
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC8[0m  - [31:28] -  Off-platform Peripheral Access Control 8
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
</lang>
#### p.AIPSTZ4
<lang=dft>
base: 0x4037c000
MPR             OPACR           OPACR1          OPACR2          
OPACR3          OPACR4          
输入 p.AIPSTZ4.{reg_name} 以查看寄存器的详细信息
type p.AIPSTZ4.{reg_name} to check details of registers
</lang>
#### p.aipstz4.opacr1
<link=p.AIPSTZ4.OPACR1>
#### p.AIPSTZ4.OPACR4
<lang=dft>
 (rw)  [1;33m0x4037c050[0m (0x4037c000 + 0x0050)
Off-Platform Peripheral Access Control Registers
 (rw) (04)  [0;32mOPAC33[0m  - [27:24] -  Off-platform Peripheral Access Control 33
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
 (rw) (04)  [0;32mOPAC32[0m  - [31:28] -  Off-platform Peripheral Access Control 32
      #xxx0 - TP0 :
         Accesses from an untrusted master are allowed.
      #xxx1 - TP1 :
         Accesses from an untrusted master are not allowed. If an access is atte
         mpted by an untrusted master, the access is terminated with an error re
         sponse and no peripheral access is initiated on the IPS bus.
</lang>
#### PIT.CVAL2
<link=p.PIT.CVAL2>
#### pit.tctrl2
<link=p.PIT.TCTRL2>
#### p.pit.tflg2
<link=p.PIT.TFLG2>
#### p.PIT.LDVAL3
<lang=dft>
 (rw)  [1;33m0x40084130[0m (0x40084000 + 0x0130)
Timer Load Value Register
 (rw) (32)  [0;32mTSV[0m  - [31:00] -  Timer Start Value
</lang>
#### cmp2.muxcr
<link=p.CMP2.MUXCR>
#### CMP4.SCR
<link=p.CMP4.SCR>
#### CMP4.MUXCR
<link=p.CMP4.MUXCR>
#### p.IOMUXC_SNVS_GPR.GPR1
<lang=dft>
 (ro)  [1;33m0x400a4004[0m (0x400a4000 + 0x0004)
GPR1 General Purpose Register
</lang>
#### IOMUXC_SNVS.SW_PAD_CTL_PAD_ONOFF
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_ONOFF>
#### p.IOMUXC_SNVS.SW_PAD_CTL_PAD_WAKEUP
<lang=dft>
 (rw)  [1;33m0x400a8018[0m (0x400a8000 + 0x0018)
SW_PAD_CTL_PAD_WAKEUP SW PAD Control Register
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
#### p.IOMUXC_GPR.GPR2
<lang=dft>
 (rw)  [1;33m0x400ac008[0m (0x400ac000 + 0x0008)
GPR2 General Purpose Register
 (rw) (01)  [0;32mAXBS_L_AHBXL_HIGH_PRIORITY[0m  - [00:00] -  AXBS_L AHBXL master has higher priority.Do not set both DMA and AHBXL to high p
 riority.
      0 - AXBS_L_AHBXL_HIGH_PRIORITY_0 :
         AXBS_L AHBXL master does not have high priority
      0x1 - AXBS_L_AHBXL_HIGH_PRIORITY_1 :
         AXBS_P AHBXL master has high priority
 (rw) (01)  [0;32mAXBS_L_DMA_HIGH_PRIORITY[0m  - [01:01] -  AXBS_L DMA master has higher priority.Do not set both DMA and AHBXL to high pri
 ority.
      0 - AXBS_L_DMA_HIGH_PRIORITY_0 :
         AXBS_L DMA master does not have high priority
      0x1 - AXBS_L_DMA_HIGH_PRIORITY_1 :
         AXBS_L DMA master has high priority
 (rw) (01)  [0;32mAXBS_L_FORCE_ROUND_ROBIN[0m  - [02:02] -  Force Round Robin in AXBS_L
      0 - AXBS_L_FORCE_ROUND_ROBIN_0 :
         AXBS_L masters are not arbitored in round robin, depending on DMA and A
         HBXL master priority settings.
      0x1 - AXBS_L_FORCE_ROUND_ROBIN_1 :
         AXBS_L masters are arbitored in round robin
 (rw) (01)  [0;32mAXBS_P_M0_HIGH_PRIORITY[0m  - [03:03] -  AXBS_P M0 master has higher priority.Do not set both M1 and M0 to high priority
 .
      0 - AXBS_P_M0_HIGH_PRIORITY_0 :
         AXBS_P M0 master doesn't have high priority
      0x1 - AXBS_P_M0_HIGH_PRIORITY_1 :
         AXBS_P M0 master has high priority
 (rw) (01)  [0;32mAXBS_P_M1_HIGH_PRIORITY[0m  - [04:04] -  AXBS_P M1 master has higher priority.Do not set both M1 and M0 to high priority
 .
      0 - AXBS_P_M1_HIGH_PRIORITY_0 :
         AXBS_P M1 master does not have high priority
      0x1 - AXBS_P_M1_HIGH_PRIORITY_1 :
         AXBS_P M1 master has high priority
 (rw) (01)  [0;32mAXBS_P_FORCE_ROUND_ROBIN[0m  - [05:05] -  Force Round Robin in AXBS_P. This bit can override master M0 M1 high priority c
 onfiguration.
      0 - AXBS_P_FORCE_ROUND_ROBIN_0 :
         AXBS_P masters are not arbitored in round robin, depending on M0/M1 mas
         ter priority settings.
      0x1 - AXBS_P_FORCE_ROUND_ROBIN_1 :
         AXBS_P masters are arbitored in round robin
 (rw) (01)  [0;32mCANFD_FILTER_BYPASS[0m  - [06:06] -  Disable CANFD filter
      0 - CANFD_FILTER_BYPASS_0 :
         enable CANFD filter
      0x1 - CANFD_FILTER_BYPASS_1 :
         disable CANFD filter
 (rw) (01)  [0;32mL2_MEM_EN_POWERSAVING[0m  - [12:12] -  enable power saving features on L2 memory
      0 - L2_MEM_EN_POWERSAVING_0 :
         none memory power saving features enabled, SHUTDOWN/DEEPSLEEP/LIGHTSLEE
         P will have no effect
      0x1 - L2_MEM_EN_POWERSAVING_1 :
         memory power saving features enabled, set SHUTDOWN/DEEPSLEEP/LIGHTSLEEP
          (priority high to low) to enable power saving levels
 (rw) (01)  [0;32mRAM_AUTO_CLK_GATING_EN[0m  - [13:13] -  Automatically gate off RAM clock when RAM is not accessed.
      0 - RAM_AUTO_CLK_GATING_EN_0 :
         disable automatically gate off RAM clock
      0x1 - RAM_AUTO_CLK_GATING_EN_1 :
         enable automatically gate off RAM clock
 (rw) (01)  [0;32mL2_MEM_DEEPSLEEP[0m  - [14:14] -  control how memory enter Deep Sleep mode (shutdown periphery power, but maintai
 n memory contents, outputs of memory are pulled low)
      0 - L2_MEM_DEEPSLEEP_0 :
         no force sleep control supported, memory deep sleep mode only entered w
         hen whole system in stop mode
      0x1 - L2_MEM_DEEPSLEEP_1 :
         force memory into deep sleep mode
 (rw) (08)  [0;32mMQS_CLK_DIV[0m  - [23:16] -  Divider ratio control for mclk from hmclk. mclk frequency = 1/(n+1) * hmclk fre
 quency.
      0 - DIVIDE_1 :
         mclk frequency = 1/1 * hmclk frequency
      0x1 - DIVIDE_2 :
         mclk frequency = 1/2 * hmclk frequency
      0x2 - DIVIDE_3 :
         mclk frequency = 1/3 * hmclk frequency
      0x3 - DIVIDE_4 :
         mclk frequency = 1/4 * hmclk frequency
      0x4 - DIVIDE_5 :
         mclk frequency = 1/5 * hmclk frequency
      0x5 - DIVIDE_6 :
         mclk frequency = 1/6 * hmclk frequency
      0x6 - DIVIDE_7 :
         mclk frequency = 1/7 * hmclk frequency
      0x7 - DIVIDE_8 :
         mclk frequency = 1/8 * hmclk frequency
      0x8 - DIVIDE_9 :
         mclk frequency = 1/9 * hmclk frequency
      0x9 - DIVIDE_10 :
         mclk frequency = 1/10 * hmclk frequency
      0xA - DIVIDE_11 :
         mclk frequency = 1/11 * hmclk frequency
      0xB - DIVIDE_12 :
         mclk frequency = 1/12 * hmclk frequency
      0xC - DIVIDE_13 :
         mclk frequency = 1/13 * hmclk frequency
      0xD - DIVIDE_14 :
         mclk frequency = 1/14 * hmclk frequency
      0xE - DIVIDE_15 :
         mclk frequency = 1/15 * hmclk frequency
      0xF - DIVIDE_16 :
         mclk frequency = 1/16 * hmclk frequency
      0x10 - DIVIDE_17 :
         mclk frequency = 1/17 * hmclk frequency
      0x11 - DIVIDE_18 :
         mclk frequency = 1/18 * hmclk frequency
      0x12 - DIVIDE_19 :
         mclk frequency = 1/19 * hmclk frequency
      0x13 - DIVIDE_20 :
         mclk frequency = 1/20 * hmclk frequency
      0x14 - DIVIDE_21 :
         mclk frequency = 1/21 * hmclk frequency
      0x15 - DIVIDE_22 :
         mclk frequency = 1/22 * hmclk frequency
      0x16 - DIVIDE_23 :
         mclk frequency = 1/23 * hmclk frequency
      0x17 - DIVIDE_24 :
         mclk frequency = 1/24 * hmclk frequency
      0x18 - DIVIDE_25 :
         mclk frequency = 1/25 * hmclk frequency
      0x19 - DIVIDE_26 :
         mclk frequency = 1/26 * hmclk frequency
      0x1A - DIVIDE_27 :
         mclk frequency = 1/27 * hmclk frequency
      0x1B - DIVIDE_28 :
         mclk frequency = 1/28 * hmclk frequency
      0x1C - DIVIDE_29 :
         mclk frequency = 1/29 * hmclk frequency
      0x1D - DIVIDE_30 :
         mclk frequency = 1/30 * hmclk frequency
      0x1E - DIVIDE_31 :
         mclk frequency = 1/31 * hmclk frequency
      0x1F - DIVIDE_32 :
         mclk frequency = 1/32 * hmclk frequency
      0x20 - DIVIDE_33 :
         mclk frequency = 1/33 * hmclk frequency
      0x21 - DIVIDE_34 :
         mclk frequency = 1/34 * hmclk frequency
      0x22 - DIVIDE_35 :
         mclk frequency = 1/35 * hmclk frequency
      0x23 - DIVIDE_36 :
         mclk frequency = 1/36 * hmclk frequency
      0x24 - DIVIDE_37 :
         mclk frequency = 1/37 * hmclk frequency
      0x25 - DIVIDE_38 :
         mclk frequency = 1/38 * hmclk frequency
      0x26 - DIVIDE_39 :
         mclk frequency = 1/39 * hmclk frequency
      0x27 - DIVIDE_40 :
         mclk frequency = 1/40 * hmclk frequency
      0x28 - DIVIDE_41 :
         mclk frequency = 1/41 * hmclk frequency
      0x29 - DIVIDE_42 :
         mclk frequency = 1/42 * hmclk frequency
      0x2A - DIVIDE_43 :
         mclk frequency = 1/43 * hmclk frequency
      0x2B - DIVIDE_44 :
         mclk frequency = 1/44 * hmclk frequency
      0x2C - DIVIDE_45 :
         mclk frequency = 1/45 * hmclk frequency
      0x2D - DIVIDE_46 :
         mclk frequency = 1/46 * hmclk frequency
      0x2E - DIVIDE_47 :
         mclk frequency = 1/47 * hmclk frequency
      0x2F - DIVIDE_48 :
         mclk frequency = 1/48 * hmclk frequency
      0x30 - DIVIDE_49 :
         mclk frequency = 1/49 * hmclk frequency
      0x31 - DIVIDE_50 :
         mclk frequency = 1/50 * hmclk frequency
      0x32 - DIVIDE_51 :
         mclk frequency = 1/51 * hmclk frequency
      0x33 - DIVIDE_52 :
         mclk frequency = 1/52 * hmclk frequency
      0x34 - DIVIDE_53 :
         mclk frequency = 1/53 * hmclk frequency
      0x35 - DIVIDE_54 :
         mclk frequency = 1/54 * hmclk frequency
      0x36 - DIVIDE_55 :
         mclk frequency = 1/55 * hmclk frequency
      0x37 - DIVIDE_56 :
         mclk frequency = 1/56 * hmclk frequency
      0x38 - DIVIDE_57 :
         mclk frequency = 1/57 * hmclk frequency
      0x39 - DIVIDE_58 :
         mclk frequency = 1/58 * hmclk frequency
      0x3A - DIVIDE_59 :
         mclk frequency = 1/59 * hmclk frequency
      0x3B - DIVIDE_60 :
         mclk frequency = 1/60 * hmclk frequency
      0x3C - DIVIDE_61 :
         mclk frequency = 1/61 * hmclk frequency
      0x3D - DIVIDE_62 :
         mclk frequency = 1/62 * hmclk frequency
      0x3E - DIVIDE_63 :
         mclk frequency = 1/63 * hmclk frequency
      0x3F - DIVIDE_64 :
         mclk frequency = 1/64 * hmclk frequency
      0x40 - DIVIDE_65 :
         mclk frequency = 1/65 * hmclk frequency
      0x41 - DIVIDE_66 :
         mclk frequency = 1/66 * hmclk frequency
      0x42 - DIVIDE_67 :
         mclk frequency = 1/67 * hmclk frequency
      0x43 - DIVIDE_68 :
         mclk frequency = 1/68 * hmclk frequency
      0x44 - DIVIDE_69 :
         mclk frequency = 1/69 * hmclk frequency
      0x45 - DIVIDE_70 :
         mclk frequency = 1/70 * hmclk frequency
      0x46 - DIVIDE_71 :
         mclk frequency = 1/71 * hmclk frequency
      0x47 - DIVIDE_72 :
         mclk frequency = 1/72 * hmclk frequency
      0x48 - DIVIDE_73 :
         mclk frequency = 1/73 * hmclk frequency
      0x49 - DIVIDE_74 :
         mclk frequency = 1/74 * hmclk frequency
      0x4A - DIVIDE_75 :
         mclk frequency = 1/75 * hmclk frequency
      0x4B - DIVIDE_76 :
         mclk frequency = 1/76 * hmclk frequency
      0x4C - DIVIDE_77 :
         mclk frequency = 1/77 * hmclk frequency
      0x4D - DIVIDE_78 :
         mclk frequency = 1/78 * hmclk frequency
      0x4E - DIVIDE_79 :
         mclk frequency = 1/79 * hmclk frequency
      0x4F - DIVIDE_80 :
         mclk frequency = 1/80 * hmclk frequency
      0x50 - DIVIDE_81 :
         mclk frequency = 1/81 * hmclk frequency
      0x51 - DIVIDE_82 :
         mclk frequency = 1/82 * hmclk frequency
      0x52 - DIVIDE_83 :
         mclk frequency = 1/83 * hmclk frequency
      0x53 - DIVIDE_84 :
         mclk frequency = 1/84 * hmclk frequency
      0x54 - DIVIDE_85 :
         mclk frequency = 1/85 * hmclk frequency
      0x55 - DIVIDE_86 :
         mclk frequency = 1/86 * hmclk frequency
      0x56 - DIVIDE_87 :
         mclk frequency = 1/87 * hmclk frequency
      0x57 - DIVIDE_88 :
         mclk frequency = 1/88 * hmclk frequency
      0x58 - DIVIDE_89 :
         mclk frequency = 1/89 * hmclk frequency
      0x59 - DIVIDE_90 :
         mclk frequency = 1/90 * hmclk frequency
      0x5A - DIVIDE_91 :
         mclk frequency = 1/91 * hmclk frequency
      0x5B - DIVIDE_92 :
         mclk frequency = 1/92 * hmclk frequency
      0x5C - DIVIDE_93 :
         mclk frequency = 1/93 * hmclk frequency
      0x5D - DIVIDE_94 :
         mclk frequency = 1/94 * hmclk frequency
      0x5E - DIVIDE_95 :
         mclk frequency = 1/95 * hmclk frequency
      0x5F - DIVIDE_96 :
         mclk frequency = 1/96 * hmclk frequency
      0x60 - DIVIDE_97 :
         mclk frequency = 1/97 * hmclk frequency
      0x61 - DIVIDE_98 :
         mclk frequency = 1/98 * hmclk frequency
      0x62 - DIVIDE_99 :
         mclk frequency = 1/99 * hmclk frequency
      0x63 - DIVIDE_100 :
         mclk frequency = 1/100 * hmclk frequency
      0x64 - DIVIDE_101 :
         mclk frequency = 1/101 * hmclk frequency
      0x65 - DIVIDE_102 :
         mclk frequency = 1/102 * hmclk frequency
      0x66 - DIVIDE_103 :
         mclk frequency = 1/103 * hmclk frequency
      0x67 - DIVIDE_104 :
         mclk frequency = 1/104 * hmclk frequency
      0x68 - DIVIDE_105 :
         mclk frequency = 1/105 * hmclk frequency
      0x69 - DIVIDE_106 :
         mclk frequency = 1/106 * hmclk frequency
      0x6A - DIVIDE_107 :
         mclk frequency = 1/107 * hmclk frequency
      0x6B - DIVIDE_108 :
         mclk frequency = 1/108 * hmclk frequency
      0x6C - DIVIDE_109 :
         mclk frequency = 1/109 * hmclk frequency
      0x6D - DIVIDE_110 :
         mclk frequency = 1/110 * hmclk frequency
      0x6E - DIVIDE_111 :
         mclk frequency = 1/111 * hmclk frequency
      0x6F - DIVIDE_112 :
         mclk frequency = 1/112 * hmclk frequency
      0x70 - DIVIDE_113 :
         mclk frequency = 1/113 * hmclk frequency
      0x71 - DIVIDE_114 :
         mclk frequency = 1/114 * hmclk frequency
      0x72 - DIVIDE_115 :
         mclk frequency = 1/115 * hmclk frequency
      0x73 - DIVIDE_116 :
         mclk frequency = 1/116 * hmclk frequency
      0x74 - DIVIDE_117 :
         mclk frequency = 1/117 * hmclk frequency
      0x75 - DIVIDE_118 :
         mclk frequency = 1/118 * hmclk frequency
      0x76 - DIVIDE_119 :
         mclk frequency = 1/119 * hmclk frequency
      0x77 - DIVIDE_120 :
         mclk frequency = 1/120 * hmclk frequency
      0x78 - DIVIDE_121 :
         mclk frequency = 1/121 * hmclk frequency
      0x79 - DIVIDE_122 :
         mclk frequency = 1/122 * hmclk frequency
      0x7A - DIVIDE_123 :
         mclk frequency = 1/123 * hmclk frequency
      0x7B - DIVIDE_124 :
         mclk frequency = 1/124 * hmclk frequency
      0x7C - DIVIDE_125 :
         mclk frequency = 1/125 * hmclk frequency
      0x7D - DIVIDE_126 :
         mclk frequency = 1/126 * hmclk frequency
      0x7E - DIVIDE_127 :
         mclk frequency = 1/127 * hmclk frequency
      0x7F - DIVIDE_128 :
         mclk frequency = 1/128 * hmclk frequency
      0x80 - DIVIDE_129 :
         mclk frequency = 1/129 * hmclk frequency
      0x81 - DIVIDE_130 :
         mclk frequency = 1/130 * hmclk frequency
      0x82 - DIVIDE_131 :
         mclk frequency = 1/131 * hmclk frequency
      0x83 - DIVIDE_132 :
         mclk frequency = 1/132 * hmclk frequency
      0x84 - DIVIDE_133 :
         mclk frequency = 1/133 * hmclk frequency
      0x85 - DIVIDE_134 :
         mclk frequency = 1/134 * hmclk frequency
      0x86 - DIVIDE_135 :
         mclk frequency = 1/135 * hmclk frequency
      0x87 - DIVIDE_136 :
         mclk frequency = 1/136 * hmclk frequency
      0x88 - DIVIDE_137 :
         mclk frequency = 1/137 * hmclk frequency
      0x89 - DIVIDE_138 :
         mclk frequency = 1/138 * hmclk frequency
      0x8A - DIVIDE_139 :
         mclk frequency = 1/139 * hmclk frequency
      0x8B - DIVIDE_140 :
         mclk frequency = 1/140 * hmclk frequency
      0x8C - DIVIDE_141 :
         mclk frequency = 1/141 * hmclk frequency
      0x8D - DIVIDE_142 :
         mclk frequency = 1/142 * hmclk frequency
      0x8E - DIVIDE_143 :
         mclk frequency = 1/143 * hmclk frequency
      0x8F - DIVIDE_144 :
         mclk frequency = 1/144 * hmclk frequency
      0x90 - DIVIDE_145 :
         mclk frequency = 1/145 * hmclk frequency
      0x91 - DIVIDE_146 :
         mclk frequency = 1/146 * hmclk frequency
      0x92 - DIVIDE_147 :
         mclk frequency = 1/147 * hmclk frequency
      0x93 - DIVIDE_148 :
         mclk frequency = 1/148 * hmclk frequency
      0x94 - DIVIDE_149 :
         mclk frequency = 1/149 * hmclk frequency
      0x95 - DIVIDE_150 :
         mclk frequency = 1/150 * hmclk frequency
      0x96 - DIVIDE_151 :
         mclk frequency = 1/151 * hmclk frequency
      0x97 - DIVIDE_152 :
         mclk frequency = 1/152 * hmclk frequency
      0x98 - DIVIDE_153 :
         mclk frequency = 1/153 * hmclk frequency
      0x99 - DIVIDE_154 :
         mclk frequency = 1/154 * hmclk frequency
      0x9A - DIVIDE_155 :
         mclk frequency = 1/155 * hmclk frequency
      0x9B - DIVIDE_156 :
         mclk frequency = 1/156 * hmclk frequency
      0x9C - DIVIDE_157 :
         mclk frequency = 1/157 * hmclk frequency
      0x9D - DIVIDE_158 :
         mclk frequency = 1/158 * hmclk frequency
      0x9E - DIVIDE_159 :
         mclk frequency = 1/159 * hmclk frequency
      0x9F - DIVIDE_160 :
         mclk frequency = 1/160 * hmclk frequency
      0xA0 - DIVIDE_161 :
         mclk frequency = 1/161 * hmclk frequency
      0xA1 - DIVIDE_162 :
         mclk frequency = 1/162 * hmclk frequency
      0xA2 - DIVIDE_163 :
         mclk frequency = 1/163 * hmclk frequency
      0xA3 - DIVIDE_164 :
         mclk frequency = 1/164 * hmclk frequency
      0xA4 - DIVIDE_165 :
         mclk frequency = 1/165 * hmclk frequency
      0xA5 - DIVIDE_166 :
         mclk frequency = 1/166 * hmclk frequency
      0xA6 - DIVIDE_167 :
         mclk frequency = 1/167 * hmclk frequency
      0xA7 - DIVIDE_168 :
         mclk frequency = 1/168 * hmclk frequency
      0xA8 - DIVIDE_169 :
         mclk frequency = 1/169 * hmclk frequency
      0xA9 - DIVIDE_170 :
         mclk frequency = 1/170 * hmclk frequency
      0xAA - DIVIDE_171 :
         mclk frequency = 1/171 * hmclk frequency
      0xAB - DIVIDE_172 :
         mclk frequency = 1/172 * hmclk frequency
      0xAC - DIVIDE_173 :
         mclk frequency = 1/173 * hmclk frequency
      0xAD - DIVIDE_174 :
         mclk frequency = 1/174 * hmclk frequency
      0xAE - DIVIDE_175 :
         mclk frequency = 1/175 * hmclk frequency
      0xAF - DIVIDE_176 :
         mclk frequency = 1/176 * hmclk frequency
      0xB0 - DIVIDE_177 :
         mclk frequency = 1/177 * hmclk frequency
      0xB1 - DIVIDE_178 :
         mclk frequency = 1/178 * hmclk frequency
      0xB2 - DIVIDE_179 :
         mclk frequency = 1/179 * hmclk frequency
      0xB3 - DIVIDE_180 :
         mclk frequency = 1/180 * hmclk frequency
      0xB4 - DIVIDE_181 :
         mclk frequency = 1/181 * hmclk frequency
      0xB5 - DIVIDE_182 :
         mclk frequency = 1/182 * hmclk frequency
      0xB6 - DIVIDE_183 :
         mclk frequency = 1/183 * hmclk frequency
      0xB7 - DIVIDE_184 :
         mclk frequency = 1/184 * hmclk frequency
      0xB8 - DIVIDE_185 :
         mclk frequency = 1/185 * hmclk frequency
      0xB9 - DIVIDE_186 :
         mclk frequency = 1/186 * hmclk frequency
      0xBA - DIVIDE_187 :
         mclk frequency = 1/187 * hmclk frequency
      0xBB - DIVIDE_188 :
         mclk frequency = 1/188 * hmclk frequency
      0xBC - DIVIDE_189 :
         mclk frequency = 1/189 * hmclk frequency
      0xBD - DIVIDE_190 :
         mclk frequency = 1/190 * hmclk frequency
      0xBE - DIVIDE_191 :
         mclk frequency = 1/191 * hmclk frequency
      0xBF - DIVIDE_192 :
         mclk frequency = 1/192 * hmclk frequency
      0xC0 - DIVIDE_193 :
         mclk frequency = 1/193 * hmclk frequency
      0xC1 - DIVIDE_194 :
         mclk frequency = 1/194 * hmclk frequency
      0xC2 - DIVIDE_195 :
         mclk frequency = 1/195 * hmclk frequency
      0xC3 - DIVIDE_196 :
         mclk frequency = 1/196 * hmclk frequency
      0xC4 - DIVIDE_197 :
         mclk frequency = 1/197 * hmclk frequency
      0xC5 - DIVIDE_198 :
         mclk frequency = 1/198 * hmclk frequency
      0xC6 - DIVIDE_199 :
         mclk frequency = 1/199 * hmclk frequency
      0xC7 - DIVIDE_200 :
         mclk frequency = 1/200 * hmclk frequency
      0xC8 - DIVIDE_201 :
         mclk frequency = 1/201 * hmclk frequency
      0xC9 - DIVIDE_202 :
         mclk frequency = 1/202 * hmclk frequency
      0xCA - DIVIDE_203 :
         mclk frequency = 1/203 * hmclk frequency
      0xCB - DIVIDE_204 :
         mclk frequency = 1/204 * hmclk frequency
      0xCC - DIVIDE_205 :
         mclk frequency = 1/205 * hmclk frequency
      0xCD - DIVIDE_206 :
         mclk frequency = 1/206 * hmclk frequency
      0xCE - DIVIDE_207 :
         mclk frequency = 1/207 * hmclk frequency
      0xCF - DIVIDE_208 :
         mclk frequency = 1/208 * hmclk frequency
      0xD0 - DIVIDE_209 :
         mclk frequency = 1/209 * hmclk frequency
      0xD1 - DIVIDE_210 :
         mclk frequency = 1/210 * hmclk frequency
      0xD2 - DIVIDE_211 :
         mclk frequency = 1/211 * hmclk frequency
      0xD3 - DIVIDE_212 :
         mclk frequency = 1/212 * hmclk frequency
      0xD4 - DIVIDE_213 :
         mclk frequency = 1/213 * hmclk frequency
      0xD5 - DIVIDE_214 :
         mclk frequency = 1/214 * hmclk frequency
      0xD6 - DIVIDE_215 :
         mclk frequency = 1/215 * hmclk frequency
      0xD7 - DIVIDE_216 :
         mclk frequency = 1/216 * hmclk frequency
      0xD8 - DIVIDE_217 :
         mclk frequency = 1/217 * hmclk frequency
      0xD9 - DIVIDE_218 :
         mclk frequency = 1/218 * hmclk frequency
      0xDA - DIVIDE_219 :
         mclk frequency = 1/219 * hmclk frequency
      0xDB - DIVIDE_220 :
         mclk frequency = 1/220 * hmclk frequency
      0xDC - DIVIDE_221 :
         mclk frequency = 1/221 * hmclk frequency
      0xDD - DIVIDE_222 :
         mclk frequency = 1/222 * hmclk frequency
      0xDE - DIVIDE_223 :
         mclk frequency = 1/223 * hmclk frequency
      0xDF - DIVIDE_224 :
         mclk frequency = 1/224 * hmclk frequency
      0xE0 - DIVIDE_225 :
         mclk frequency = 1/225 * hmclk frequency
      0xE1 - DIVIDE_226 :
         mclk frequency = 1/226 * hmclk frequency
      0xE2 - DIVIDE_227 :
         mclk frequency = 1/227 * hmclk frequency
      0xE3 - DIVIDE_228 :
         mclk frequency = 1/228 * hmclk frequency
      0xE4 - DIVIDE_229 :
         mclk frequency = 1/229 * hmclk frequency
      0xE5 - DIVIDE_230 :
         mclk frequency = 1/230 * hmclk frequency
      0xE6 - DIVIDE_231 :
         mclk frequency = 1/231 * hmclk frequency
      0xE7 - DIVIDE_232 :
         mclk frequency = 1/232 * hmclk frequency
      0xE8 - DIVIDE_233 :
         mclk frequency = 1/233 * hmclk frequency
      0xE9 - DIVIDE_234 :
         mclk frequency = 1/234 * hmclk frequency
      0xEA - DIVIDE_235 :
         mclk frequency = 1/235 * hmclk frequency
      0xEB - DIVIDE_236 :
         mclk frequency = 1/236 * hmclk frequency
      0xEC - DIVIDE_237 :
         mclk frequency = 1/237 * hmclk frequency
      0xED - DIVIDE_238 :
         mclk frequency = 1/238 * hmclk frequency
      0xEE - DIVIDE_239 :
         mclk frequency = 1/239 * hmclk frequency
      0xEF - DIVIDE_240 :
         mclk frequency = 1/240 * hmclk frequency
      0xF0 - DIVIDE_241 :
         mclk frequency = 1/241 * hmclk frequency
      0xF1 - DIVIDE_242 :
         mclk frequency = 1/242 * hmclk frequency
      0xF2 - DIVIDE_243 :
         mclk frequency = 1/243 * hmclk frequency
      0xF3 - DIVIDE_244 :
         mclk frequency = 1/244 * hmclk frequency
      0xF4 - DIVIDE_245 :
         mclk frequency = 1/245 * hmclk frequency
      0xF5 - DIVIDE_246 :
         mclk frequency = 1/246 * hmclk frequency
      0xF6 - DIVIDE_247 :
         mclk frequency = 1/247 * hmclk frequency
      0xF7 - DIVIDE_248 :
         mclk frequency = 1/248 * hmclk frequency
      0xF8 - DIVIDE_249 :
         mclk frequency = 1/249 * hmclk frequency
      0xF9 - DIVIDE_250 :
         mclk frequency = 1/250 * hmclk frequency
      0xFA - DIVIDE_251 :
         mclk frequency = 1/251 * hmclk frequency
      0xFB - DIVIDE_252 :
         mclk frequency = 1/252 * hmclk frequency
      0xFC - DIVIDE_253 :
         mclk frequency = 1/253 * hmclk frequency
      0xFD - DIVIDE_254 :
         mclk frequency = 1/254 * hmclk frequency
      0xFE - DIVIDE_255 :
         mclk frequency = 1/255 * hmclk frequency
      0xFF - DIVIDE_256 :
         mclk frequency = 1/256 * hmclk frequency
 (rw) (01)  [0;32mMQS_SW_RST[0m  - [24:24] -  MQS software reset
      0 - MQS_SW_RST_0 :
         Exit software reset for MQS
      0x1 - MQS_SW_RST_1 :
         Enable software reset for MQS
 (rw) (01)  [0;32mMQS_EN[0m  - [25:25] -  MQS enable.
      0 - MQS_EN_0 :
         Disable MQS
      0x1 - MQS_EN_1 :
         Enable MQS
 (rw) (01)  [0;32mMQS_OVERSAMPLE[0m  - [26:26] -  Used to control the PWM oversampling rate compared with mclk.
      0 - MQS_OVERSAMPLE_0 :
         32
      0x1 - MQS_OVERSAMPLE_1 :
         64
 (rw) (01)  [0;32mQTIMER1_TMR_CNTS_FREEZE[0m  - [28:28] -  QTIMER1 timer counter freeze
      0 - QTIMER1_TMR_CNTS_FREEZE_0 :
         timer counter work normally
      0x1 - QTIMER1_TMR_CNTS_FREEZE_1 :
         reset counter and ouput flags
 (rw) (01)  [0;32mQTIMER2_TMR_CNTS_FREEZE[0m  - [29:29] -  QTIMER2 timer counter freeze
      0 - QTIMER2_TMR_CNTS_FREEZE_0 :
         timer counter work normally
      0x1 - QTIMER2_TMR_CNTS_FREEZE_1 :
         reset counter and ouput flags
 (rw) (01)  [0;32mQTIMER3_TMR_CNTS_FREEZE[0m  - [30:30] -  QTIMER3 timer counter freeze
      0 - QTIMER3_TMR_CNTS_FREEZE_0 :
         timer counter work normally
      0x1 - QTIMER3_TMR_CNTS_FREEZE_1 :
         reset counter and ouput flags
 (rw) (01)  [0;32mQTIMER4_TMR_CNTS_FREEZE[0m  - [31:31] -  QTIMER4 timer counter freeze
      0 - QTIMER4_TMR_CNTS_FREEZE_0 :
         timer counter work normally
      0x1 - QTIMER4_TMR_CNTS_FREEZE_1 :
         reset counter and ouput flags
</lang>
#### iomuxc_gpr.gpr3
<link=p.IOMUXC_GPR.GPR3>
#### p.IOMUXC_GPR.GPR18
<lang=dft>
 (rw)  [1;33m0x400ac048[0m (0x400ac000 + 0x0048)
GPR18 General Purpose Register
 (rw) (01)  [0;32mLOCK_M7_APC_AC_R0_BOT[0m  - [00:00] -  lock M7_APC_AC_R0_BOT field for changes
      0 - LOCK_M7_APC_AC_R0_BOT_0 :
         Register field [31:1] is not locked
      0x1 - LOCK_M7_APC_AC_R0_BOT_1 :
         Register field [31:1] is locked (read access only)
 (rw) (29)  [0;32mM7_APC_AC_R0_BOT[0m  - [31:03] -  APC end address of memory region-0
</lang>
#### iomuxc_gpr.gpr18
<link=p.IOMUXC_GPR.GPR18>
#### p.iomuxc_gpr.gpr21
<link=p.IOMUXC_GPR.GPR21>
#### iomuxc_gpr.gpr29
<link=p.IOMUXC_GPR.GPR29>
#### p.iomuxc_gpr.gpr32
<link=p.IOMUXC_GPR.GPR32>
#### p.flexram.tcm_ctrl
<link=p.FLEXRAM.TCM_CTRL>
#### FLEXRAM.INT_STAT_EN
<link=p.FLEXRAM.INT_STAT_EN>
#### p.EWM
<lang=dft>
base: 0x400b4000
CLKCTRL         CLKPRESCALER    CMPH            CMPL            
CTRL            SERV            
输入 p.EWM.{reg_name} 以查看寄存器的详细信息
type p.EWM.{reg_name} to check details of registers
</lang>
#### p.WDOG1.WRSR
<lang=dft>
 (ro)  [1;33m0x400b8004[0m (0x400b8000 + 0x0004)
Watchdog Reset Status Register
 (ro) (01)  [0;32mSFTW[0m  - [00:00] -  SFTW
      0 - SFTW_0 :
         Reset is not the result of a software reset.
      0x1 - SFTW_1 :
         Reset is the result of a software reset.
 (ro) (01)  [0;32mTOUT[0m  - [01:01] -  TOUT
      0 - TOUT_0 :
         Reset is not the result of a WDOG timeout.
      0x1 - TOUT_1 :
         Reset is the result of a WDOG timeout.
 (ro) (01)  [0;32mPOR[0m  - [04:04] -  POR
      0 - POR_0 :
         Reset is not the result of a power on reset.
      0x1 - POR_1 :
         Reset is the result of a power on reset.
</lang>
#### p.wdog1.wrsr
<link=p.WDOG1.WRSR>
#### wdog1.wrsr
<link=p.WDOG1.WRSR>
#### WDOG1.WRSR
<link=p.WDOG1.WRSR>
#### p.wdog1.wicr
<link=p.WDOG1.WICR>
#### p.WDOG1.WMCR
<lang=dft>
 (rw)  [1;33m0x400b8008[0m (0x400b8000 + 0x0008)
Watchdog Miscellaneous Control Register
 (rw) (01)  [0;32mPDE[0m  - [00:00] -  PDE
      0 - PDE_0 :
         Power Down Counter of WDOG is disabled.
      0x1 - PDE_1 :
         Power Down Counter of WDOG is enabled (Default).
</lang>
#### p.WDOG2.WRSR
<lang=dft>
 (ro)  [1;33m0x400d0004[0m (0x400d0000 + 0x0004)
Watchdog Reset Status Register
 (ro) (01)  [0;32mSFTW[0m  - [00:00] -  SFTW
      0 - SFTW_0 :
         Reset is not the result of a software reset.
      0x1 - SFTW_1 :
         Reset is the result of a software reset.
 (ro) (01)  [0;32mTOUT[0m  - [01:01] -  TOUT
      0 - TOUT_0 :
         Reset is not the result of a WDOG timeout.
      0x1 - TOUT_1 :
         Reset is the result of a WDOG timeout.
 (ro) (01)  [0;32mPOR[0m  - [04:04] -  POR
      0 - POR_0 :
         Reset is not the result of a power on reset.
      0x1 - POR_1 :
         Reset is the result of a power on reset.
</lang>
#### p.wdog2.wrsr
<link=p.WDOG2.WRSR>
#### WDOG2.WMCR
<link=p.WDOG2.WMCR>
#### p.ADC1.HC0
<lang=dft>
 (rw)  [1;33m0x400c4000[0m (0x400c4000 + 0x0000)
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
#### ADC1.HC5
<link=p.ADC1.HC5>
#### adc1.hc6
<link=p.ADC1.HC6>
#### ADC1.R4
<link=p.ADC1.R4>
#### adc1.cal
<link=p.ADC1.CAL>
#### p.adc2
<link=p.ADC2>
#### p.ADC2.HC0
<lang=dft>
 (rw)  [1;33m0x400c8000[0m (0x400c8000 + 0x0000)
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
#### ADC2.HC7
<link=p.ADC2.HC7>
#### p.adc2.r2
<link=p.ADC2.R2>
#### ADC2.CV
<link=p.ADC2.CV>
#### p.ADC2.CAL
<lang=dft>
 (rw)  [1;33m0x400c8058[0m (0x400c8000 + 0x0058)
Calibration value register
 (rw) (04)  [0;32mCAL_CODE[0m  - [03:00] -  Calibration Result Value
</lang>
#### p.trng.pkrrng
<link=p.TRNG.PKRRNG>
#### p.trng.pkrmax
<link=p.TRNG.PKRMAX>
#### trng.pkrsq
<link=p.TRNG.PKRSQ>
#### p.TRNG.SDCTL
<lang=dft>
 (rw)  [1;33m0x400cc010[0m (0x400cc000 + 0x0010)
Seed Control Register
 (rw) (16)  [0;32mSAMP_SIZE[0m  - [15:00] -  Sample Size
 (rw) (16)  [0;32mENT_DLY[0m  - [31:16] -  Entropy Delay
</lang>
#### p.TRNG.FRQCNT
<lang=dft>
 (ro)  [1;33m0x400cc01c[0m (0x400cc000 + 0x001c)
Frequency Count Register
 (ro) (22)  [0;32mFRQ_CT[0m  - [21:00] -  Frequency Count
</lang>
#### p.TRNG.FRQMAX
<lang=dft>
 (rw)  [1;33m0x400cc01c[0m (0x400cc000 + 0x001c)
Frequency Count Maximum Limit Register
 (rw) (22)  [0;32mFRQ_MAX[0m  - [21:00] -  Frequency Counter Maximum Limit
</lang>
#### TRNG.SCMC
<link=p.TRNG.SCMC>
#### TRNG.SCR2C
<link=p.TRNG.SCR2C>
#### trng.scr2l
<link=p.TRNG.SCR2L>
#### trng.scr3c
<link=p.TRNG.SCR3C>
#### trng.ent[1]
<link=p.TRNG.ENT[1]>
#### p.trng.ent[5]
<link=p.TRNG.ENT[5]>
#### p.TRNG.PKRCNT54
<lang=dft>
 (ro)  [1;33m0x400cc088[0m (0x400cc000 + 0x0088)
Statistical Check Poker Count 5 and 4 Register
 (ro) (16)  [0;32mPKR_4_CT[0m  - [15:00] -  Poker 4h Count
 (ro) (16)  [0;32mPKR_5_CT[0m  - [31:16] -  Poker 5h Count
</lang>
#### p.trng.pkrcnt54
<link=p.TRNG.PKRCNT54>
#### trng.int_mask
<link=p.TRNG.INT_MASK>
#### p.SNVS.HPSICR
<lang=dft>
 (rw)  [1;33m0x400d400c[0m (0x400d4000 + 0x000c)
SNVS_HP Security Interrupt Control Register
 (rw) (01)  [0;32mSV0_EN[0m  - [00:00] -  Security Violation 0 Interrupt Enable Setting this bit to 1 enables generation 
 of the security interrupt to the host processor upon detection of the Security 
 Violation 0 security violation
      0 - SV0_EN_0 :
         Security Violation 0 Interrupt is Disabled
      0x1 - SV0_EN_1 :
         Security Violation 0 Interrupt is Enabled
 (rw) (01)  [0;32mSV1_EN[0m  - [01:01] -  Security Violation 1 Interrupt Enable Setting this bit to 1 enables generation 
 of the security interrupt to the host processor upon detection of the Security 
 Violation 1 security violation
      0 - SV1_EN_0 :
         Security Violation 1 Interrupt is Disabled
      0x1 - SV1_EN_1 :
         Security Violation 1 Interrupt is Enabled
 (rw) (01)  [0;32mSV2_EN[0m  - [02:02] -  Security Violation 2 Interrupt Enable Setting this bit to 1 enables generation 
 of the security interrupt to the host processor upon detection of the Security 
 Violation 2 security violation
      0 - SV2_EN_0 :
         Security Violation 2 Interrupt is Disabled
      0x1 - SV2_EN_1 :
         Security Violation 2 Interrupt is Enabled
 (rw) (01)  [0;32mSV3_EN[0m  - [03:03] -  Security Violation 3 Interrupt Enable Setting this bit to 1 enables generation 
 of the security interrupt to the host processor upon detection of the Security 
 Violation 3 security violation
      0 - SV3_EN_0 :
         Security Violation 3 Interrupt is Disabled
      0x1 - SV3_EN_1 :
         Security Violation 3 Interrupt is Enabled
 (rw) (01)  [0;32mSV4_EN[0m  - [04:04] -  Security Violation 4 Interrupt Enable Setting this bit to 1 enables generation 
 of the security interrupt to the host processor upon detection of the Security 
 Violation 4 security violation
      0 - SV4_EN_0 :
         Security Violation 4 Interrupt is Disabled
      0x1 - SV4_EN_1 :
         Security Violation 4 Interrupt is Enabled
 (rw) (01)  [0;32mSV5_EN[0m  - [05:05] -  Security Violation 5 Interrupt Enable Setting this bit to 1 enables generation 
 of the security interrupt to the host processor upon detection of the Security 
 Violation 5 security violation
      0 - SV5_EN_0 :
         Security Violation 5 Interrupt is Disabled
      0x1 - SV5_EN_1 :
         Security Violation 5 Interrupt is Enabled
 (rw) (01)  [0;32mLPSVI_EN[0m  - [31:31] -  LP Security Violation Interrupt Enable This bit enables generating of the secur
 ity interrupt to the host processor upon security violation signal from the LP 
 section
      0 - LPSVI_EN_0 :
         LP Security Violation Interrupt is Disabled
      0x1 - LPSVI_EN_1 :
         LP Security Violation Interrupt is Enabled
</lang>
#### SNVS.HPSVSR
<link=p.SNVS.HPSVSR>
#### p.snvs.hprtclr
<link=p.SNVS.HPRTCLR>
#### snvs.lptdcr
<link=p.SNVS.LPTDCR>
#### p.snvs.lpsr
<link=p.SNVS.LPSR>
#### snvs.lpsr
<link=p.SNVS.LPSR>
#### p.SNVS.LPGPR0_LEGACY_ALIAS
<lang=dft>
 (rw)  [1;33m0x400d4068[0m (0x400d4000 + 0x0068)
SNVS_LP General Purpose Register 0 (legacy alias)
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### p.SNVS.LPGPR_ALIAS[3]
<lang=dft>
 (rw)  [1;33m0x400d409c[0m (0x400d4000 + 0x009c)
SNVS_LP General Purpose Registers 0 .. 3
 (rw) (32)  [0;32mGPR[0m  - [31:00] -  General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot 
 be programmed.
</lang>
#### SNVS.LPGPR_alias[3]
<link=p.SNVS.LPGPR_ALIAS[3]>
#### snvs.lpgpr[4]
<link=p.SNVS.LPGPR[4]>
#### SNVS.LPGPR[5]
<link=p.SNVS.LPGPR[5]>
#### p.SNVS.HPVIDR2
<lang=dft>
 (ro)  [1;33m0x400d4bfc[0m (0x400d4000 + 0x0bfc)
SNVS_HP Version ID Register 2
 (ro) (08)  [0;32mCONFIG_OPT[0m  - [07:00] -  SNVS Configuration Options
 (ro) (08)  [0;32mECO_REV[0m  - [15:08] -  SNVS ECO Revision
 (ro) (08)  [0;32mINTG_OPT[0m  - [23:16] -  SNVS Integration Options
 (ro) (08)  [0;32mIP_ERA[0m  - [31:24] -  IP Era 00h - Era 1 or 2 03h - Era 3 04h - Era 4 05h - Era 5
</lang>
#### CCM_ANALOG.PLL_ARM_CLR
<link=p.CCM_ANALOG.PLL_ARM_CLR>
#### CCM_ANALOG.PLL_ARM_TOG
<link=p.CCM_ANALOG.PLL_ARM_TOG>
#### p.ccm_analog.pll_usb1
<link=p.CCM_ANALOG.PLL_USB1>
#### ccm_analog.pll_usb1_tog
<link=p.CCM_ANALOG.PLL_USB1_TOG>
#### p.CCM_ANALOG.PLL_USB2_SET
<lang=dft>
 (rw)  [1;33m0x400d8024[0m (0x400d8000 + 0x0024)
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
#### p.CCM_ANALOG.PLL_SYS_DENOM
<lang=dft>
 (rw)  [1;33m0x400d8060[0m (0x400d8000 + 0x0060)
Denominator of 528MHz System PLL Fractional Loop Divider Register
 (rw) (30)  [0;32mB[0m  - [29:00] -  30 bit Denominator (B) of fractional loop divider (unsigned integer).
</lang>
#### p.ccm_analog.pll_audio_clr
<link=p.CCM_ANALOG.PLL_AUDIO_CLR>
#### p.ccm_analog.pll_video_clr
<link=p.CCM_ANALOG.PLL_VIDEO_CLR>
#### ccm_analog.pll_enet_set
<link=p.CCM_ANALOG.PLL_ENET_SET>
#### CCM_ANALOG.MISC2_SET
<link=p.CCM_ANALOG.MISC2_SET>
#### p.PMU
<lang=dft>
base: 0x400d8000
MISC0           MISC0_CLR       MISC0_SET       MISC0_TOG       
MISC1           MISC1_CLR       MISC1_SET       MISC1_TOG       
MISC2           MISC2_CLR       MISC2_SET       MISC2_TOG       
REG_1P1         REG_1P1_CLR     REG_1P1_SET     REG_1P1_TOG     
REG_2P5         REG_2P5_CLR     REG_2P5_SET     REG_2P5_TOG     
REG_3P0         REG_3P0_CLR     REG_3P0_SET     REG_3P0_TOG     
REG_CORE        REG_CORE_CLR    REG_CORE_SET    REG_CORE_TOG    
输入 p.PMU.{reg_name} 以查看寄存器的详细信息
type p.PMU.{reg_name} to check details of registers
</lang>
#### PMU.REG_1P1_SET
<link=p.PMU.REG_1P1_SET>
#### PMU.REG_3P0_TOG
<link=p.PMU.REG_3P0_TOG>
#### p.pmu.reg_core_tog
<link=p.PMU.REG_CORE_TOG>
#### p.tempmon.tempsense0_set
<link=p.TEMPMON.TEMPSENSE0_SET>
#### tempmon.tempsense2_clr
<link=p.TEMPMON.TEMPSENSE2_CLR>
#### p.usb_analog.usb1_vbus_detect
<link=p.USB_ANALOG.USB1_VBUS_DETECT>
#### p.USB_ANALOG.USB2_VBUS_DETECT_TOG
<lang=dft>
 (rw)  [1;33m0x400d820c[0m (0x400d8000 + 0x020c)
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
#### USB_ANALOG.USB2_CHRG_DETECT_SET
<link=p.USB_ANALOG.USB2_CHRG_DETECT_SET>
#### usb_analog.usb2_misc_set
<link=p.USB_ANALOG.USB2_MISC_SET>
#### p.USB_ANALOG.USB2_MISC_TOG
<lang=dft>
 (rw)  [1;33m0x400d825c[0m (0x400d8000 + 0x025c)
USB Misc Register
 (rw) (01)  [0;32mHS_USE_EXTERNAL_R[0m  - [00:00] -  Use external resistor to generate the current bias for the high speed transmitt
 er
 (rw) (01)  [0;32mEN_DEGLITCH[0m  - [01:01] -  Enable the deglitching circuit of the USB PLL output.
 (rw) (01)  [0;32mEN_CLK_UTMI[0m  - [30:30] -  Enables the clk to the UTMI block.
</lang>
#### p.XTALOSC24M.MISC0
<lang=dft>
 (rw)  [1;33m0x400d8150[0m (0x400d8000 + 0x0150)
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
#### p.XTALOSC24M.LOWPWR_CTRL
<lang=dft>
 (rw)  [1;33m0x400d8270[0m (0x400d8000 + 0x0270)
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
#### XTALOSC24M.OSC_CONFIG2_SET
<link=p.XTALOSC24M.OSC_CONFIG2_SET>
#### USBPHY1.CTRL
<link=p.USBPHY1.CTRL>
#### p.USBPHY1.STATUS
<lang=dft>
 (rw)  [1;33m0x400d9040[0m (0x400d9000 + 0x0040)
USB PHY Status Register
 (ro) (03)  [0;32mRSVD0[0m  - [02:00] -  Reserved.
 (ro) (01)  [0;32mHOSTDISCONDETECT_STATUS[0m  - [03:03] -  Indicates that the device has disconnected while in high-speed host mode.
 (ro) (02)  [0;32mRSVD1[0m  - [05:04] -  Reserved.
 (ro) (01)  [0;32mDEVPLUGIN_STATUS[0m  - [06:06] -  Indicates that the device has been connected on the USB_DP and USB_DM lines.
 (ro) (01)  [0;32mRSVD2[0m  - [07:07] -  Reserved.
 (rw) (01)  [0;32mOTGID_STATUS[0m  - [08:08] -  Indicates the results of ID pin on MiniAB plug
 (ro) (01)  [0;32mRSVD3[0m  - [09:09] -  Reserved.
 (ro) (01)  [0;32mRESUME_STATUS[0m  - [10:10] -  Indicates that the host is sending a wake-up after suspend and has triggered an
  interrupt.
 (ro) (21)  [0;32mRSVD4[0m  - [31:11] -  Reserved.
</lang>
#### usbphy1.debug_clr
<link=p.USBPHY1.DEBUG_CLR>
#### USBPHY1.DEBUG_CLR
<link=p.USBPHY1.DEBUG_CLR>
#### p.USBPHY1.DEBUG_TOG
<lang=dft>
 (rw)  [1;33m0x400d905c[0m (0x400d9000 + 0x005c)
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
#### USBPHY1.DEBUG0_STATUS
<link=p.USBPHY1.DEBUG0_STATUS>
#### USBPHY2.PWD
<link=p.USBPHY2.PWD>
#### p.USBPHY2.PWD_SET
<lang=dft>
 (rw)  [1;33m0x400da004[0m (0x400da000 + 0x0004)
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
#### USBPHY2.TX_CLR
<link=p.USBPHY2.TX_CLR>
#### usbphy2.rx_tog
<link=p.USBPHY2.RX_TOG>
#### USBPHY2.CTRL_SET
<link=p.USBPHY2.CTRL_SET>
#### p.usbphy2.debug
<link=p.USBPHY2.DEBUG>
#### USBPHY2.DEBUG1_CLR
<link=p.USBPHY2.DEBUG1_CLR>
#### csu.csl4
<link=p.CSU.CSL4>
#### CSU.CSL4
<link=p.CSU.CSL4>
#### p.CSU.CSL7
<lang=dft>
 (rw)  [1;33m0x400dc01c[0m (0x400dc000 + 0x001c)
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
#### p.csu.csl7
<link=p.CSU.CSL7>
#### csu.csl19
<link=p.CSU.CSL19>
#### CSU.CSL19
<link=p.CSU.CSL19>
#### csu.csl20
<link=p.CSU.CSL20>
#### CSU.CSL20
<link=p.CSU.CSL20>
#### csu.sa
<link=p.CSU.SA>
#### p.TSC.BASIC_SETTING
<lang=dft>
 (rw)  [1;33m0x400e0000[0m (0x400e0000 + 0x0000)
no description available
 (rw) (01)  [0;32mAUTO_MEASURE[0m  - [00:00] -  Auto Measure
      0 - AUTO_MEASURE_0 :
         Disable Auto Measure
      0x1 - AUTO_MEASURE_1 :
         Auto Measure
 (rw) (01)  [0;32m_4_5_WIRE[0m  - [04:04] -  4/5 Wire detection
      0 - 4_5_WIRE_0 :
         4-Wire Detection Mode
      0x1 - 4_5_WIRE_1 :
         5-Wire Detection Mode
 (rw) (24)  [0;32mMEASURE_DELAY_TIME[0m  - [31:08] -  Measure Delay Time
</lang>
#### tsc.basic_setting
<link=p.TSC.BASIC_SETTING>
#### TSC.MEASEURE_VALUE
<link=p.TSC.MEASEURE_VALUE>
#### tsc.int_sig_en
<link=p.TSC.INT_SIG_EN>
#### TSC.INT_SIG_EN
<link=p.TSC.INT_SIG_EN>
#### p.dma0.cerq
<link=p.DMA0.CERQ>
#### dma0.cint
<link=p.DMA0.CINT>
#### dma0.int
<link=p.DMA0.INT>
#### DMA0.ERR
<link=p.DMA0.ERR>
#### DMA0.DCHPRI6
<link=p.DMA0.DCHPRI6>
#### p.dma0.dchpri4
<link=p.DMA0.DCHPRI4>
#### dma0.dchpri13
<link=p.DMA0.DCHPRI13>
#### DMA0.DCHPRI12
<link=p.DMA0.DCHPRI12>
#### dma0.dchpri22
<link=p.DMA0.DCHPRI22>
#### p.dma0.dchpri31
<link=p.DMA0.DCHPRI31>
#### dma0.tcd0_nbytes_mloffyes
<link=p.DMA0.TCD0_NBYTES_MLOFFYES>
#### p.dma0.tcd1_doff
<link=p.DMA0.TCD1_DOFF>
#### DMA0.TCD1_DLASTSGA
<link=p.DMA0.TCD1_DLASTSGA>
#### DMA0.TCD2_NBYTES_MLNO
<link=p.DMA0.TCD2_NBYTES_MLNO>
#### dma0.tcd2_dlastsga
<link=p.DMA0.TCD2_DLASTSGA>
#### dma0.tcd2_biter_elinkyes
<link=p.DMA0.TCD2_BITER_ELINKYES>
#### dma0.tcd3_soff
<link=p.DMA0.TCD3_SOFF>
#### p.dma0.tcd3_slast
<link=p.DMA0.TCD3_SLAST>
#### DMA0.TCD3_CITER_ELINKYES
<link=p.DMA0.TCD3_CITER_ELINKYES>
#### p.dma0.tcd4_nbytes_mloffno
<link=p.DMA0.TCD4_NBYTES_MLOFFNO>
#### DMA0.TCD5_SADDR
<link=p.DMA0.TCD5_SADDR>
#### DMA0.TCD5_SOFF
<link=p.DMA0.TCD5_SOFF>
#### p.dma0.tcd5_nbytes_mloffyes
<link=p.DMA0.TCD5_NBYTES_MLOFFYES>
#### DMA0.TCD5_SLAST
<link=p.DMA0.TCD5_SLAST>
#### DMA0.TCD5_DADDR
<link=p.DMA0.TCD5_DADDR>
#### p.dma0.tcd6_saddr
<link=p.DMA0.TCD6_SADDR>
#### DMA0.TCD6_SADDR
<link=p.DMA0.TCD6_SADDR>
#### p.DMA0.TCD6_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e90c8[0m (0x400e8000 + 0x10c8)
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
#### p.DMA0.TCD7_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e90e8[0m (0x400e8000 + 0x10e8)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### DMA0.TCD7_NBYTES_MLNO
<link=p.DMA0.TCD7_NBYTES_MLNO>
#### p.dma0.tcd7_nbytes_mloffno
<link=p.DMA0.TCD7_NBYTES_MLOFFNO>
#### dma0.tcd7_slast
<link=p.DMA0.TCD7_SLAST>
#### DMA0.TCD7_BITER_ELINKNO
<link=p.DMA0.TCD7_BITER_ELINKNO>
#### dma0.tcd9_csr
<link=p.DMA0.TCD9_CSR>
#### dma0.tcd9_biter_elinkyes
<link=p.DMA0.TCD9_BITER_ELINKYES>
#### p.DMA0.TCD10_CSR
<lang=dft>
 (rw)  [1;33m0x400e915c[0m (0x400e8000 + 0x115c)
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
#### DMA0.TCD11_SADDR
<link=p.DMA0.TCD11_SADDR>
#### dma0.tcd11_nbytes_mlno
<link=p.DMA0.TCD11_NBYTES_MLNO>
#### p.DMA0.TCD11_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9168[0m (0x400e8000 + 0x1168)
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
#### p.dma0.tcd11_slast
<link=p.DMA0.TCD11_SLAST>
#### DMA0.TCD11_CSR
<link=p.DMA0.TCD11_CSR>
#### dma0.tcd11_biter_elinkno
<link=p.DMA0.TCD11_BITER_ELINKNO>
#### DMA0.TCD12_ATTR
<link=p.DMA0.TCD12_ATTR>
#### dma0.tcd12_nbytes_mloffno
<link=p.DMA0.TCD12_NBYTES_MLOFFNO>
#### p.dma0.tcd12_doff
<link=p.DMA0.TCD12_DOFF>
#### dma0.tcd12_citer_elinkyes
<link=p.DMA0.TCD12_CITER_ELINKYES>
#### p.DMA0.TCD13_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e91a8[0m (0x400e8000 + 0x11a8)
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
#### p.DMA0.TCD13_DADDR
<lang=dft>
 (rw)  [1;33m0x400e91b0[0m (0x400e8000 + 0x11b0)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### p.dma0.tcd13_citer_elinkyes
<link=p.DMA0.TCD13_CITER_ELINKYES>
#### p.DMA0.TCD13_CSR
<lang=dft>
 (rw)  [1;33m0x400e91bc[0m (0x400e8000 + 0x11bc)
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
#### DMA0.TCD13_CSR
<link=p.DMA0.TCD13_CSR>
#### dma0.tcd14_saddr
<link=p.DMA0.TCD14_SADDR>
#### dma0.tcd14_soff
<link=p.DMA0.TCD14_SOFF>
#### p.DMA0.TCD14_DOFF
<lang=dft>
 (rw)  [1;33m0x400e91d4[0m (0x400e8000 + 0x11d4)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.dma0.tcd14_citer_elinkyes
<link=p.DMA0.TCD14_CITER_ELINKYES>
#### p.DMA0.TCD15_DOFF
<lang=dft>
 (rw)  [1;33m0x400e91f4[0m (0x400e8000 + 0x11f4)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### dma0.tcd15_citer_elinkyes
<link=p.DMA0.TCD15_CITER_ELINKYES>
#### p.dma0.tcd16_slast
<link=p.DMA0.TCD16_SLAST>
#### DMA0.TCD16_DOFF
<link=p.DMA0.TCD16_DOFF>
#### p.dma0.tcd16_dlastsga
<link=p.DMA0.TCD16_DLASTSGA>
#### dma0.tcd16_csr
<link=p.DMA0.TCD16_CSR>
#### DMA0.TCD17_ATTR
<link=p.DMA0.TCD17_ATTR>
#### p.dma0.tcd17_nbytes_mlno
<link=p.DMA0.TCD17_NBYTES_MLNO>
#### p.dma0.tcd17_nbytes_mloffno
<link=p.DMA0.TCD17_NBYTES_MLOFFNO>
#### p.dma0.tcd17_dlastsga
<link=p.DMA0.TCD17_DLASTSGA>
#### dma0.tcd18_attr
<link=p.DMA0.TCD18_ATTR>
#### DMA0.TCD18_NBYTES_MLNO
<link=p.DMA0.TCD18_NBYTES_MLNO>
#### DMA0.TCD18_NBYTES_MLOFFYES
<link=p.DMA0.TCD18_NBYTES_MLOFFYES>
#### DMA0.TCD19_ATTR
<link=p.DMA0.TCD19_ATTR>
#### p.DMA0.TCD19_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9268[0m (0x400e8000 + 0x1268)
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
#### p.DMA0.TCD19_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9276[0m (0x400e8000 + 0x1276)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD19_DLASTSGA
<link=p.DMA0.TCD19_DLASTSGA>
#### p.dma0.tcd20_daddr
<link=p.DMA0.TCD20_DADDR>
#### p.dma0.tcd20_doff
<link=p.DMA0.TCD20_DOFF>
#### DMA0.TCD20_CITER_ELINKNO
<link=p.DMA0.TCD20_CITER_ELINKNO>
#### dma0.tcd20_dlastsga
<link=p.DMA0.TCD20_DLASTSGA>
#### p.dma0.tcd20_csr
<link=p.DMA0.TCD20_CSR>
#### p.dma0.tcd20_biter_elinkyes
<link=p.DMA0.TCD20_BITER_ELINKYES>
#### dma0.tcd20_biter_elinkyes
<link=p.DMA0.TCD20_BITER_ELINKYES>
#### p.dma0.tcd21_nbytes_mloffyes
<link=p.DMA0.TCD21_NBYTES_MLOFFYES>
#### DMA0.TCD21_CITER_ELINKYES
<link=p.DMA0.TCD21_CITER_ELINKYES>
#### DMA0.TCD21_CSR
<link=p.DMA0.TCD21_CSR>
#### p.dma0.tcd21_biter_elinkyes
<link=p.DMA0.TCD21_BITER_ELINKYES>
#### p.dma0.tcd22_saddr
<link=p.DMA0.TCD22_SADDR>
#### dma0.tcd22_nbytes_mloffno
<link=p.DMA0.TCD22_NBYTES_MLOFFNO>
#### p.dma0.tcd22_citer_elinkno
<link=p.DMA0.TCD22_CITER_ELINKNO>
#### dma0.tcd22_dlastsga
<link=p.DMA0.TCD22_DLASTSGA>
#### p.dma0.tcd22_biter_elinkno
<link=p.DMA0.TCD22_BITER_ELINKNO>
#### p.dma0.tcd23_saddr
<link=p.DMA0.TCD23_SADDR>
#### DMA0.TCD23_ATTR
<link=p.DMA0.TCD23_ATTR>
#### p.DMA0.TCD23_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e92e8[0m (0x400e8000 + 0x12e8)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### DMA0.TCD23_CSR
<link=p.DMA0.TCD23_CSR>
#### p.dma0.tcd24_soff
<link=p.DMA0.TCD24_SOFF>
#### DMA0.TCD24_ATTR
<link=p.DMA0.TCD24_ATTR>
#### dma0.tcd24_slast
<link=p.DMA0.TCD24_SLAST>
#### p.dma0.tcd25_nbytes_mlno
<link=p.DMA0.TCD25_NBYTES_MLNO>
#### DMA0.TCD25_DOFF
<link=p.DMA0.TCD25_DOFF>
#### DMA0.TCD25_BITER_ELINKNO
<link=p.DMA0.TCD25_BITER_ELINKNO>
#### p.dma0.tcd26_nbytes_mloffno
<link=p.DMA0.TCD26_NBYTES_MLOFFNO>
#### p.DMA0.TCD26_CSR
<lang=dft>
 (rw)  [1;33m0x400e935c[0m (0x400e8000 + 0x135c)
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
#### DMA0.TCD26_BITER_ELINKNO
<link=p.DMA0.TCD26_BITER_ELINKNO>
#### DMA0.TCD27_SLAST
<link=p.DMA0.TCD27_SLAST>
#### p.DMA0.TCD27_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9376[0m (0x400e8000 + 0x1376)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd27_csr
<link=p.DMA0.TCD27_CSR>
#### p.DMA0.TCD28_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9388[0m (0x400e8000 + 0x1388)
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
#### DMA0.TCD28_NBYTES_MLOFFNO
<link=p.DMA0.TCD28_NBYTES_MLOFFNO>
#### p.dma0.tcd29_attr
<link=p.DMA0.TCD29_ATTR>
#### DMA0.TCD29_ATTR
<link=p.DMA0.TCD29_ATTR>
#### DMA0.TCD29_BITER_ELINKNO
<link=p.DMA0.TCD29_BITER_ELINKNO>
#### dma0.tcd30_saddr
<link=p.DMA0.TCD30_SADDR>
#### dma0.tcd30_nbytes_mloffyes
<link=p.DMA0.TCD30_NBYTES_MLOFFYES>
#### p.dma0.tcd30_slast
<link=p.DMA0.TCD30_SLAST>
#### DMA0.TCD30_CITER_ELINKNO
<link=p.DMA0.TCD30_CITER_ELINKNO>
#### p.DMA0.TCD30_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e93d6[0m (0x400e8000 + 0x13d6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd30_biter_elinkno
<link=p.DMA0.TCD30_BITER_ELINKNO>
#### p.DMA0.TCD31_SADDR
<lang=dft>
 (rw)  [1;33m0x400e93e0[0m (0x400e8000 + 0x13e0)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.DMA0.TCD31_SOFF
<lang=dft>
 (rw)  [1;33m0x400e93e4[0m (0x400e8000 + 0x13e4)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.dma0.tcd31_nbytes_mloffno
<link=p.DMA0.TCD31_NBYTES_MLOFFNO>
#### p.dma0.tcd31_slast
<link=p.DMA0.TCD31_SLAST>
#### p.DMA0.TCD31_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e93f6[0m (0x400e8000 + 0x13f6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMAMUX.CHCFG[2]
<lang=dft>
 (rw)  [1;33m0x400ec008[0m (0x400ec000 + 0x0008)
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
#### DMAMUX.CHCFG[5]
<link=p.DMAMUX.CHCFG[5]>
#### dmamux.chcfg[8]
<link=p.DMAMUX.CHCFG[8]>
#### p.dmamux.chcfg[14]
<link=p.DMAMUX.CHCFG[14]>
#### p.dmamux.chcfg[26]
<link=p.DMAMUX.CHCFG[26]>
#### p.gpc.cntr
<link=p.GPC.CNTR>
#### p.GPC.IMR1
<lang=dft>
 (rw)  [1;33m0x400f4008[0m (0x400f4000 + 0x0008)
IRQ masking register 1
 (rw) (32)  [0;32mIMR1[0m  - [31:00] -  IRQ[31:0] masking bits: 1-irq masked, 0-irq is not masked
</lang>
#### GPC.IMR2
<link=p.GPC.IMR2>
#### p.GPC.ISR2
<lang=dft>
 (ro)  [1;33m0x400f401c[0m (0x400f4000 + 0x001c)
IRQ status resister 2
 (ro) (32)  [0;32mISR2[0m  - [31:00] -  IRQ[63:32] status, read only
</lang>
#### GPC.ISR2
<link=p.GPC.ISR2>
#### pgc.cpu_pdnscr
<link=p.PGC.CPU_PDNSCR>
#### p.src
<link=p.SRC>
#### src.gpr5
<link=p.SRC.GPR5>
#### p.src.gpr6
<link=p.SRC.GPR6>
#### p.SRC.GPR10
<lang=dft>
 (rw)  [1;33m0x400f8044[0m (0x400f8000 + 0x0044)
SRC General Purpose Register 10
</lang>
#### p.CCM.CBCMR
<lang=dft>
 (rw)  [1;33m0x400fc018[0m (0x400fc000 + 0x0018)
CCM Bus Clock Multiplexer Register
 (rw) (02)  [0;32mLPSPI_CLK_SEL[0m  - [05:04] -  Selector for lpspi clock multiplexer
      0 - LPSPI_CLK_SEL_0 :
         derive clock from PLL3 PFD1 clk
      0x1 - LPSPI_CLK_SEL_1 :
         derive clock from PLL3 PFD0
      0x2 - LPSPI_CLK_SEL_2 :
         derive clock from PLL2
      0x3 - LPSPI_CLK_SEL_3 :
         derive clock from PLL2 PFD2
 (rw) (02)  [0;32mFLEXSPI2_CLK_SEL[0m  - [09:08] -  Selector for flexspi2 clock multiplexer
      0 - FLEXSPI2_CLK_SEL_0 :
         derive clock from PLL2 PFD2
      0x1 - FLEXSPI2_CLK_SEL_1 :
         derive clock from PLL3 PFD0
      0x2 - FLEXSPI2_CLK_SEL_2 :
         derive clock from PLL3 PFD1
      0x3 - FLEXSPI2_CLK_SEL_3 :
         derive clock from PLL2 (pll2_main_clk)
 (rw) (02)  [0;32mPERIPH_CLK2_SEL[0m  - [13:12] -  Selector for peripheral clk2 clock multiplexer
      0 - PERIPH_CLK2_SEL_0 :
         derive clock from pll3_sw_clk
      0x1 - PERIPH_CLK2_SEL_1 :
         derive clock from osc_clk (pll1_ref_clk)
      0x2 - PERIPH_CLK2_SEL_2 :
         derive clock from pll2_bypass_clk
 (rw) (02)  [0;32mTRACE_CLK_SEL[0m  - [15:14] -  Selector for Trace clock multiplexer
      0 - TRACE_CLK_SEL_0 :
         derive clock from PLL2
      0x1 - TRACE_CLK_SEL_1 :
         derive clock from PLL2 PFD2
      0x2 - TRACE_CLK_SEL_2 :
         derive clock from PLL2 PFD0
      0x3 - TRACE_CLK_SEL_3 :
         derive clock from PLL2 PFD1
 (rw) (02)  [0;32mPRE_PERIPH_CLK_SEL[0m  - [19:18] -  Selector for pre_periph clock multiplexer
      0 - PRE_PERIPH_CLK_SEL_0 :
         derive clock from PLL2
      0x1 - PRE_PERIPH_CLK_SEL_1 :
         derive clock from PLL2 PFD2
      0x2 - PRE_PERIPH_CLK_SEL_2 :
         derive clock from PLL2 PFD0
      0x3 - PRE_PERIPH_CLK_SEL_3 :
         derive clock from divided PLL1
 (rw) (03)  [0;32mLCDIF_PODF[0m  - [25:23] -  Post-divider for LCDIF clock.
      0 - LCDIF_PODF_0 :
         divide by 1
      0x1 - LCDIF_PODF_1 :
         divide by 2
      0x2 - LCDIF_PODF_2 :
         divide by 3
      0x3 - LCDIF_PODF_3 :
         divide by 4
      0x4 - LCDIF_PODF_4 :
         divide by 5
      0x5 - LCDIF_PODF_5 :
         divide by 6
      0x6 - LCDIF_PODF_6 :
         divide by 7
      0x7 - LCDIF_PODF_7 :
         divide by 8
 (rw) (03)  [0;32mLPSPI_PODF[0m  - [28:26] -  Divider for LPSPI. Divider should be updated when output clock is gated.
      0 - LPSPI_PODF_0 :
         divide by 1
      0x1 - LPSPI_PODF_1 :
         divide by 2
      0x2 - LPSPI_PODF_2 :
         divide by 3
      0x3 - LPSPI_PODF_3 :
         divide by 4
      0x4 - LPSPI_PODF_4 :
         divide by 5
      0x5 - LPSPI_PODF_5 :
         divide by 6
      0x6 - LPSPI_PODF_6 :
         divide by 7
      0x7 - LPSPI_PODF_7 :
         divide by 8
 (rw) (03)  [0;32mFLEXSPI2_PODF[0m  - [31:29] -  Divider for flexspi2 clock root.
      0 - FLEXSPI2_PODF_0 :
         divide by 1
      0x1 - FLEXSPI2_PODF_1 :
         divide by 2
      0x2 - FLEXSPI2_PODF_2 :
         divide by 3
      0x3 - FLEXSPI2_PODF_3 :
         divide by 4
      0x4 - FLEXSPI2_PODF_4 :
         divide by 5
      0x5 - FLEXSPI2_PODF_5 :
         divide by 6
      0x6 - FLEXSPI2_PODF_6 :
         divide by 7
      0x7 - FLEXSPI2_PODF_7 :
         divide by 8
</lang>
#### CCM.CS1CDR
<link=p.CCM.CS1CDR>
#### ccm.cdhipr
<link=p.CCM.CDHIPR>
#### p.CCM.CCOSR
<lang=dft>
 (rw)  [1;33m0x400fc060[0m (0x400fc000 + 0x0060)
CCM Clock Output Source Register
 (rw) (04)  [0;32mCLKO1_SEL[0m  - [03:00] -  Selection of the clock to be generated on CCM_CLKO1
      0 - CLKO1_SEL_0 :
         USB1 PLL clock (divided by 2)
      0x1 - CLKO1_SEL_1 :
         SYS PLL clock (divided by 2)
      0x3 - CLKO1_SEL_3 :
         VIDEO PLL clock (divided by 2)
      0x5 - CLKO1_SEL_5 :
         semc_clk_root
      0xA - CLKO1_SEL_10 :
         lcdif_pix_clk_root
      0xB - CLKO1_SEL_11 :
         ahb_clk_root
      0xC - CLKO1_SEL_12 :
         ipg_clk_root
      0xD - CLKO1_SEL_13 :
         perclk_root
      0xE - CLKO1_SEL_14 :
         ckil_sync_clk_root
      0xF - CLKO1_SEL_15 :
         pll4_main_clk
 (rw) (03)  [0;32mCLKO1_DIV[0m  - [06:04] -  Setting the divider of CCM_CLKO1
      0 - CLKO1_DIV_0 :
         divide by 1
      0x1 - CLKO1_DIV_1 :
         divide by 2
      0x2 - CLKO1_DIV_2 :
         divide by 3
      0x3 - CLKO1_DIV_3 :
         divide by 4
      0x4 - CLKO1_DIV_4 :
         divide by 5
      0x5 - CLKO1_DIV_5 :
         divide by 6
      0x6 - CLKO1_DIV_6 :
         divide by 7
      0x7 - CLKO1_DIV_7 :
         divide by 8
 (rw) (01)  [0;32mCLKO1_EN[0m  - [07:07] -  Enable of CCM_CLKO1 clock
      0 - CLKO1_EN_0 :
         CCM_CLKO1 disabled.
      0x1 - CLKO1_EN_1 :
         CCM_CLKO1 enabled.
 (rw) (01)  [0;32mCLK_OUT_SEL[0m  - [08:08] -  CCM_CLKO1 output to reflect CCM_CLKO1 or CCM_CLKO2 clocks
      0 - CLK_OUT_SEL_0 :
         CCM_CLKO1 output drives CCM_CLKO1 clock
      0x1 - CLK_OUT_SEL_1 :
         CCM_CLKO1 output drives CCM_CLKO2 clock
 (rw) (05)  [0;32mCLKO2_SEL[0m  - [20:16] -  Selection of the clock to be generated on CCM_CLKO2
      0x3 - CLKO2_SEL_3 :
         usdhc1_clk_root
      0x6 - CLKO2_SEL_6 :
         lpi2c_clk_root
      0xB - CLKO2_SEL_11 :
         csi_clk_root
      0xE - CLKO2_SEL_14 :
         osc_clk
      0x11 - CLKO2_SEL_17 :
         usdhc2_clk_root
      0x12 - CLKO2_SEL_18 :
         sai1_clk_root
      0x13 - CLKO2_SEL_19 :
         sai2_clk_root
      0x14 - CLKO2_SEL_20 :
         sai3_clk_root (shared with ADC1 and ADC2 alt_clk root)
      0x17 - CLKO2_SEL_23 :
         can_clk_root (FlexCAN, shared with CANFD)
      0x1B - CLKO2_SEL_27 :
         flexspi_clk_root
      0x1C - CLKO2_SEL_28 :
         uart_clk_root
      0x1D - CLKO2_SEL_29 :
         spdif0_clk_root
 (rw) (03)  [0;32mCLKO2_DIV[0m  - [23:21] -  Setting the divider of CCM_CLKO2
      0 - CLKO2_DIV_0 :
         divide by 1
      0x1 - CLKO2_DIV_1 :
         divide by 2
      0x2 - CLKO2_DIV_2 :
         divide by 3
      0x3 - CLKO2_DIV_3 :
         divide by 4
      0x4 - CLKO2_DIV_4 :
         divide by 5
      0x5 - CLKO2_DIV_5 :
         divide by 6
      0x6 - CLKO2_DIV_6 :
         divide by 7
      0x7 - CLKO2_DIV_7 :
         divide by 8
 (rw) (01)  [0;32mCLKO2_EN[0m  - [24:24] -  Enable of CCM_CLKO2 clock
      0 - CLKO2_EN_0 :
         CCM_CLKO2 disabled.
      0x1 - CLKO2_EN_1 :
         CCM_CLKO2 enabled.
</lang>
#### p.ccm.ccgr1
<link=p.CCM.CCGR1>
#### CCM.CCGR1
<link=p.CCM.CCGR1>
#### p.CCM.CCGR3
<lang=dft>
 (rw)  [1;33m0x400fc074[0m (0x400fc000 + 0x0074)
CCM Clock Gating Register 3
 (rw) (02)  [0;32mCG0[0m  - [01:00] -  flexio2 clocks (flexio2_clk_enable)
 (rw) (02)  [0;32mCG1[0m  - [03:02] -  lpuart5 clock (lpuart5_clk_enable)
 (rw) (02)  [0;32mCG2[0m  - [05:04] -  semc clocks (semc_clk_enable)
 (rw) (02)  [0;32mCG3[0m  - [07:06] -  lpuart6 clock (lpuart6_clk_enable)
 (rw) (02)  [0;32mCG4[0m  - [09:08] -  aoi1 clock (aoi1_clk_enable)
 (rw) (02)  [0;32mCG5[0m  - [11:10] -  lcdif pix clock (lcdif_pix_clk_enable)
 (rw) (02)  [0;32mCG6[0m  - [13:12] -  gpio4 clock (gpio4_clk_enable)
 (rw) (02)  [0;32mCG7[0m  - [15:14] -  ewm clocks (ewm_clk_enable)
 (rw) (02)  [0;32mCG8[0m  - [17:16] -  wdog1 clock (wdog1_clk_enable)
 (rw) (02)  [0;32mCG9[0m  - [19:18] -  flexram clock (flexram_clk_enable)
 (rw) (02)  [0;32mCG10[0m  - [21:20] -  acmp1 clocks (acmp1_clk_enable)
 (rw) (02)  [0;32mCG11[0m  - [23:22] -  acmp2 clocks (acmp2_clk_enable)
 (rw) (02)  [0;32mCG12[0m  - [25:24] -  acmp3 clocks (acmp3_clk_enable)
 (rw) (02)  [0;32mCG13[0m  - [27:26] -  acmp4 clocks (acmp4_clk_enable)
 (rw) (02)  [0;32mCG14[0m  - [29:28] -  The OCRAM clock cannot be turned off when the CM cache is running on this devic
 e.
 (rw) (02)  [0;32mCG15[0m  - [31:30] -  iomuxc_snvs_gpr clock (iomuxc_snvs_gpr_clk_enable)
</lang>
#### ccm.ccgr3
<link=p.CCM.CCGR3>
#### p.CCM.CMEOR
<lang=dft>
 (rw)  [1;33m0x400fc088[0m (0x400fc000 + 0x0088)
CCM Module Enable Overide Register
 (rw) (01)  [0;32mMOD_EN_OV_GPT[0m  - [05:05] -  Overide clock enable signal from GPT - clock will not be gated based on GPT's s
 ignal 'ipg_enable_clk'
      0 - MOD_EN_OV_GPT_0 :
         don't override module enable signal
      0x1 - MOD_EN_OV_GPT_1 :
         override module enable signal
 (rw) (01)  [0;32mMOD_EN_OV_PIT[0m  - [06:06] -  Overide clock enable signal from PIT - clock will not be gated based on PIT's s
 ignal 'ipg_enable_clk'
      0 - MOD_EN_OV_PIT_0 :
         don't override module enable signal
      0x1 - MOD_EN_OV_PIT_1 :
         override module enable signal
 (rw) (01)  [0;32mMOD_EN_USDHC[0m  - [07:07] -  overide clock enable signal from USDHC.
      0 - MOD_EN_USDHC_0 :
         don't override module enable signal
      0x1 - MOD_EN_USDHC_1 :
         override module enable signal
 (rw) (01)  [0;32mMOD_EN_OV_TRNG[0m  - [09:09] -  Overide clock enable signal from TRNG
      0 - MOD_EN_OV_TRNG_0 :
         don't override module enable signal
      0x1 - MOD_EN_OV_TRNG_1 :
         override module enable signal
 (rw) (01)  [0;32mMOD_EN_OV_CANFD_CPI[0m  - [10:10] -  Overide clock enable signal from FlexCAN3(CANFD) - clock will not be gated base
 d on CAN's signal 'enable_clk_cpi'
      0 - MOD_EN_OV_CANFD_CPI_0 :
         don't override module enable signal
      0x1 - MOD_EN_OV_CANFD_CPI_1 :
         override module enable signal
 (rw) (01)  [0;32mMOD_EN_OV_CAN2_CPI[0m  - [28:28] -  Overide clock enable signal from CAN2 - clock will not be gated based on CAN's 
 signal 'enable_clk_cpi'
      0 - MOD_EN_OV_CAN2_CPI_0 :
         don't override module enable signal
      0x1 - MOD_EN_OV_CAN2_CPI_1 :
         override module enable signal
 (rw) (01)  [0;32mMOD_EN_OV_CAN1_CPI[0m  - [30:30] -  Overide clock enable signal from CAN1 - clock will not be gated based on CAN's 
 signal 'enable_clk_cpi'
      0 - MOD_EN_OV_CAN1_CPI_0 :
         don't overide module enable signal
      0x1 - MOD_EN_OV_CAN1_CPI_1 :
         overide module enable signal
</lang>
#### ROMC.ROMPATCH7D
<link=p.ROMC.ROMPATCH7D>
#### romc.rompatch4d
<link=p.ROMC.ROMPATCH4D>
#### romc.rompatchenl
<link=p.ROMC.ROMPATCHENL>
#### p.ROMC.ROMPATCH7A
<lang=dft>
 (rw)  [1;33m0x4018011c[0m (0x40180000 + 0x011c)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### p.ROMC.ROMPATCH15A
<lang=dft>
 (rw)  [1;33m0x4018013c[0m (0x40180000 + 0x013c)
ROMC Address Registers
 (rw) (01)  [0;32mTHUMBX[0m  - [00:00] -  THUMB Comparator Select - Indicates that this address will trigger a THUMB opco
 de patch or an Arm opcode patch
      0 - THUMBX_0 :
         Arm patch
      0x1 - THUMBX_1 :
         THUMB patch (ignore if data fix)
 (rw) (22)  [0;32mADDRX[0m  - [22:01] -  Address Comparator Registers - Indicates the memory address to be watched
</lang>
#### lpuart1.verid
<link=p.LPUART1.VERID>
#### LPUART1.VERID
<link=p.LPUART1.VERID>
#### p.LPUART1.FIFO
<lang=dft>
 (rw)  [1;33m0x40184028[0m (0x40184000 + 0x0028)
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
#### lpuart1.water
<link=p.LPUART1.WATER>
#### lpuart2.ctrl
<link=p.LPUART2.CTRL>
#### lpuart3.param
<link=p.LPUART3.PARAM>
#### LPUART3.PARAM
<link=p.LPUART3.PARAM>
#### p.lpuart3.baud
<link=p.LPUART3.BAUD>
#### LPUART3.CTRL
<link=p.LPUART3.CTRL>
#### lpuart3.match
<link=p.LPUART3.MATCH>
#### p.LPUART3.WATER
<lang=dft>
 (rw)  [1;33m0x4018c02c[0m (0x4018c000 + 0x002c)
LPUART Watermark Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit Watermark
 (ro) (03)  [0;32mTXCOUNT[0m  - [10:08] -  Transmit Counter
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive Watermark
 (ro) (03)  [0;32mRXCOUNT[0m  - [26:24] -  Receive Counter
</lang>
#### p.lpuart4.water
<link=p.LPUART4.WATER>
#### p.LPUART5.VERID
<lang=dft>
 (ro)  [1;33m0x40194000[0m (0x40194000 + 0x0000)
Version ID Register
 (ro) (16)  [0;32mFEATURE[0m  - [15:00] -  Feature Identification Number
      0x1 - FEATURE_1 :
         Standard feature set.
      0x3 - FEATURE_3 :
         Standard feature set with MODEM/IrDA support.
 (ro) (08)  [0;32mMINOR[0m  - [23:16] -  Minor Version Number
 (ro) (08)  [0;32mMAJOR[0m  - [31:24] -  Major Version Number
</lang>
#### LPUART5.GLOBAL
<link=p.LPUART5.GLOBAL>
#### LPUART5.CTRL
<link=p.LPUART5.CTRL>
#### LPUART5.MODIR
<link=p.LPUART5.MODIR>
#### lpuart6.verid
<link=p.LPUART6.VERID>
#### p.lpuart6.param
<link=p.LPUART6.PARAM>
#### p.lpuart6.global
<link=p.LPUART6.GLOBAL>
#### lpuart6.pincfg
<link=p.LPUART6.PINCFG>
#### LPUART6.STAT
<link=p.LPUART6.STAT>
#### p.LPUART6.DATA
<lang=dft>
 (rw)  [1;33m0x4019801c[0m (0x40198000 + 0x001c)
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
#### LPUART6.MATCH
<link=p.LPUART6.MATCH>
#### p.LPUART7
<lang=dft>
base: 0x4019c000
BAUD            CTRL            DATA            FIFO            
GLOBAL          MATCH           MODIR           PARAM           
PINCFG          STAT            VERID           WATER           
输入 p.LPUART7.{reg_name} 以查看寄存器的详细信息
type p.LPUART7.{reg_name} to check details of registers
</lang>
#### lpuart7.ctrl
<link=p.LPUART7.CTRL>
#### p.LPUART7.MATCH
<lang=dft>
 (rw)  [1;33m0x4019c020[0m (0x4019c000 + 0x0020)
LPUART Match Address Register
 (rw) (10)  [0;32mMA1[0m  - [09:00] -  Match Address 1
 (rw) (10)  [0;32mMA2[0m  - [25:16] -  Match Address 2
</lang>
#### lpuart8.pincfg
<link=p.LPUART8.PINCFG>
#### lpuart8.stat
<link=p.LPUART8.STAT>
#### LPUART8.MATCH
<link=p.LPUART8.MATCH>
#### p.FLEXIO1.CTRL
<lang=dft>
 (rw)  [1;33m0x401ac008[0m (0x401ac000 + 0x0008)
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
#### flexio1.shiftsden
<link=p.FLEXIO1.SHIFTSDEN>
#### p.flexio1.shiftctl[0]
<link=p.FLEXIO1.SHIFTCTL[0]>
#### FLEXIO1.SHIFTCTL[1]
<link=p.FLEXIO1.SHIFTCTL[1]>
#### p.FLEXIO1.SHIFTCTL[2]
<lang=dft>
 (rw)  [1;33m0x401ac088[0m (0x401ac000 + 0x0088)
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
#### p.flexio1.shiftbuf[0]
<link=p.FLEXIO1.SHIFTBUF[0]>
#### flexio1.shiftbufbis[2]
<link=p.FLEXIO1.SHIFTBUFBIS[2]>
#### FLEXIO1.SHIFTBUFBYS[0]
<link=p.FLEXIO1.SHIFTBUFBYS[0]>
#### FLEXIO1.SHIFTBUFBBS[3]
<link=p.FLEXIO1.SHIFTBUFBBS[3]>
#### flexio1.timctl[3]
<link=p.FLEXIO1.TIMCTL[3]>
#### FLEXIO1.TIMCTL[3]
<link=p.FLEXIO1.TIMCTL[3]>
#### p.flexio1.timcmp[0]
<link=p.FLEXIO1.TIMCMP[0]>
#### FLEXIO1.TIMCMP[1]
<link=p.FLEXIO1.TIMCMP[1]>
#### flexio1.shiftbufhws[2]
<link=p.FLEXIO1.SHIFTBUFHWS[2]>
#### p.flexio2.shiftstat
<link=p.FLEXIO2.SHIFTSTAT>
#### flexio2.shiftstat
<link=p.FLEXIO2.SHIFTSTAT>
#### p.FLEXIO2.TIMIEN
<lang=dft>
 (rw)  [1;33m0x401b0028[0m (0x401b0000 + 0x0028)
Timer Interrupt Enable Register
 (rw) (04)  [0;32mTEIE[0m  - [03:00] -  Timer Status Interrupt Enable
</lang>
#### p.flexio2.shiftbuf[0]
<link=p.FLEXIO2.SHIFTBUF[0]>
#### flexio2.shiftbuf[3]
<link=p.FLEXIO2.SHIFTBUF[3]>
#### p.FLEXIO2.SHIFTBUFBBS[1]
<lang=dft>
 (rw)  [1;33m0x401b0384[0m (0x401b0000 + 0x0384)
Shifter Buffer N Bit Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio2.timctl[1]
<link=p.FLEXIO2.TIMCTL[1]>
#### FLEXIO2.TIMCTL[2]
<link=p.FLEXIO2.TIMCTL[2]>
#### flexio2.timcmp[2]
<link=p.FLEXIO2.TIMCMP[2]>
#### FLEXIO2.TIMCMP[2]
<link=p.FLEXIO2.TIMCMP[2]>
#### p.flexio2.shiftbufnbs[2]
<link=p.FLEXIO2.SHIFTBUFNBS[2]>
#### p.flexio2.shiftbufhws[0]
<link=p.FLEXIO2.SHIFTBUFHWS[0]>
#### FLEXIO2.SHIFTBUFNIS[3]
<link=p.FLEXIO2.SHIFTBUFNIS[3]>
#### p.FLEXIO3.SHIFTSTAT
<lang=dft>
 (rw)  [1;33m0x42020010[0m (0x42020000 + 0x0010)
Shifter Status Register
 (rw) (04)  [0;32mSSF[0m  - [03:00] -  Shifter Status Flag
</lang>
#### flexio3.shiftctl[3]
<link=p.FLEXIO3.SHIFTCTL[3]>
#### p.flexio3.shiftcfg[3]
<link=p.FLEXIO3.SHIFTCFG[3]>
#### flexio3.shiftbuf[0]
<link=p.FLEXIO3.SHIFTBUF[0]>
#### FLEXIO3.SHIFTBUF[3]
<link=p.FLEXIO3.SHIFTBUF[3]>
#### p.flexio3.shiftbufbbs[1]
<link=p.FLEXIO3.SHIFTBUFBBS[1]>
#### p.FLEXIO3.TIMCFG[3]
<lang=dft>
 (rw)  [1;33m0x4202048c[0m (0x42020000 + 0x048c)
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
#### p.flexio3.timcmp[1]
<link=p.FLEXIO3.TIMCMP[1]>
#### flexio3.shiftbufhws[0]
<link=p.FLEXIO3.SHIFTBUFHWS[0]>
#### p.FLEXIO3.SHIFTBUFNIS[0]
<lang=dft>
 (rw)  [1;33m0x42020780[0m (0x42020000 + 0x0780)
Shifter Buffer N Nibble Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNIS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.GPIO1.DR_SET
<lang=dft>
 (wo)  [1;33m0x401b8084[0m (0x401b8000 + 0x0084)
GPIO data register SET
 (wo) (32)  [0;32mDR_SET[0m  - [31:00] -  DR_SET
</lang>
#### p.gpio5.icr1
<link=p.GPIO5.ICR1>
#### p.gpio5.edge_sel
<link=p.GPIO5.EDGE_SEL>
#### GPIO5.DR_CLEAR
<link=p.GPIO5.DR_CLEAR>
#### GPIO2.DR
<link=p.GPIO2.DR>
#### gpio2.imr
<link=p.GPIO2.IMR>
#### p.GPIO2.DR_TOGGLE
<lang=dft>
 (wo)  [1;33m0x401bc08c[0m (0x401bc000 + 0x008c)
GPIO data register TOGGLE
 (wo) (32)  [0;32mDR_TOGGLE[0m  - [31:00] -  DR_TOGGLE
</lang>
#### GPIO2.DR_TOGGLE
<link=p.GPIO2.DR_TOGGLE>
#### p.GPIO3.GDIR
<lang=dft>
 (rw)  [1;33m0x401c0004[0m (0x401c0000 + 0x0004)
GPIO direction register
 (rw) (32)  [0;32mGDIR[0m  - [31:00] -  GDIR
</lang>
#### p.GPIO3.ICR1
<lang=dft>
 (rw)  [1;33m0x401c000c[0m (0x401c0000 + 0x000c)
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
#### gpio3.icr1
<link=p.GPIO3.ICR1>
#### p.GPIO4
<lang=dft>
base: 0x401c4000
DR              DR_CLEAR        DR_SET          DR_TOGGLE       
EDGE_SEL        GDIR            ICR1            ICR2            
IMR             ISR             PSR             
输入 p.GPIO4.{reg_name} 以查看寄存器的详细信息
type p.GPIO4.{reg_name} to check details of registers
</lang>
#### p.gpio4.psr
<link=p.GPIO4.PSR>
#### gpio4.isr
<link=p.GPIO4.ISR>
#### GPIO4.DR_SET
<link=p.GPIO4.DR_SET>
#### gpio6.gdir
<link=p.GPIO6.GDIR>
#### GPIO6.GDIR
<link=p.GPIO6.GDIR>
#### GPIO6.PSR
<link=p.GPIO6.PSR>
#### GPIO6.ICR1
<link=p.GPIO6.ICR1>
#### GPIO6.ISR
<link=p.GPIO6.ISR>
#### p.gpio7.isr
<link=p.GPIO7.ISR>
#### GPIO8.DR_SET
<link=p.GPIO8.DR_SET>
#### p.GPIO9.ICR1
<lang=dft>
 (rw)  [1;33m0x4200c00c[0m (0x4200c000 + 0x000c)
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
#### gpio9.icr2
<link=p.GPIO9.ICR2>
#### GPIO9.EDGE_SEL
<link=p.GPIO9.EDGE_SEL>
#### gpio9.dr_toggle
<link=p.GPIO9.DR_TOGGLE>
#### can1.ctrl1
<link=p.CAN1.CTRL1>
#### p.CAN1.ECR
<lang=dft>
 (rw)  [1;33m0x401d001c[0m (0x401d0000 + 0x001c)
Error Counter Register
 (rw) (08)  [0;32mTX_ERR_COUNTER[0m  - [07:00] -  Tx_Err_Counter
 (rw) (08)  [0;32mRX_ERR_COUNTER[0m  - [15:08] -  Rx_Err_Counter
</lang>
#### p.can1.ecr
<link=p.CAN1.ECR>
#### CAN1.ESR2
<link=p.CAN1.ESR2>
#### p.CAN1.RXIMR9
<lang=dft>
 (rw)  [1;33m0x401d08a4[0m (0x401d0000 + 0x08a4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.CAN1.RXIMR12
<lang=dft>
 (rw)  [1;33m0x401d08b0[0m (0x401d0000 + 0x08b0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR12
<link=p.CAN1.RXIMR12>
#### can1.rximr17
<link=p.CAN1.RXIMR17>
#### p.CAN1.RXIMR23
<lang=dft>
 (rw)  [1;33m0x401d08dc[0m (0x401d0000 + 0x08dc)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr31
<link=p.CAN1.RXIMR31>
#### p.can1.rximr38
<link=p.CAN1.RXIMR38>
#### can1.rximr40
<link=p.CAN1.RXIMR40>
#### CAN1.RXIMR45
<link=p.CAN1.RXIMR45>
#### p.can1.rximr52
<link=p.CAN1.RXIMR52>
#### p.can1.rximr63
<link=p.CAN1.RXIMR63>
#### p.can2.mcr
<link=p.CAN2.MCR>
#### can2.esr1
<link=p.CAN2.ESR1>
#### p.can2.iflag2
<link=p.CAN2.IFLAG2>
#### CAN2.CTRL2
<link=p.CAN2.CTRL2>
#### CAN2.ESR2
<link=p.CAN2.ESR2>
#### CAN2.DBG1
<link=p.CAN2.DBG1>
#### p.CAN2.RXIMR0
<lang=dft>
 (rw)  [1;33m0x401d4880[0m (0x401d4000 + 0x0880)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can2.rximr5
<link=p.CAN2.RXIMR5>
#### can2.rximr14
<link=p.CAN2.RXIMR14>
#### p.CAN2.RXIMR19
<lang=dft>
 (rw)  [1;33m0x401d48cc[0m (0x401d4000 + 0x08cc)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR19
<link=p.CAN2.RXIMR19>
#### p.can2.rximr20
<link=p.CAN2.RXIMR20>
#### can2.rximr25
<link=p.CAN2.RXIMR25>
#### CAN2.RXIMR28
<link=p.CAN2.RXIMR28>
#### p.can2.rximr33
<link=p.CAN2.RXIMR33>
#### p.can2.rximr42
<link=p.CAN2.RXIMR42>
#### p.CAN2.RXIMR46
<lang=dft>
 (rw)  [1;33m0x401d4938[0m (0x401d4000 + 0x0938)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr51
<link=p.CAN2.RXIMR51>
#### p.CAN2.RXIMR55
<lang=dft>
 (rw)  [1;33m0x401d495c[0m (0x401d4000 + 0x095c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR55
<link=p.CAN2.RXIMR55>
#### p.CAN2.RXIMR60
<lang=dft>
 (rw)  [1;33m0x401d4970[0m (0x401d4000 + 0x0970)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN3.ECR
<link=p.CAN3.ECR>
#### CAN3.ID0
<link=p.CAN3.ID0>
#### p.CAN3.MB0_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8088[0m (0x401d8000 + 0x0088)
Message Buffer 0 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb0_8b_word1
<link=p.CAN3.MB0_8B_WORD1>
#### can3.mb0_16b_word3
<link=p.CAN3.MB0_16B_WORD3>
#### can3.mb0_64b_word4
<link=p.CAN3.MB0_64B_WORD4>
#### p.CAN3.MB1_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d809c[0m (0x401d8000 + 0x009c)
Message Buffer 1 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB1_8B_WORD1
<link=p.CAN3.MB1_8B_WORD1>
#### p.can3.mb0_32b_word7
<link=p.CAN3.MB0_32B_WORD7>
#### CAN3.MB0_32B_WORD7
<link=p.CAN3.MB0_32B_WORD7>
#### can3.mb1_16b_word3
<link=p.CAN3.MB1_16B_WORD3>
#### CAN3.WORD12
<link=p.CAN3.WORD12>
#### p.CAN3.MB2_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d80b0[0m (0x401d8000 + 0x00b0)
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
#### p.can3.mb2_16b_cs
<link=p.CAN3.MB2_16B_CS>
#### p.CAN3.MB2_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d80b4[0m (0x401d8000 + 0x00b4)
Message Buffer 2 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb2_16b_id
<link=p.CAN3.MB2_16B_ID>
#### p.CAN3.MB0_64B_WORD12
<lang=dft>
 (rw)  [1;33m0x401d80b8[0m (0x401d8000 + 0x00b8)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_51[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_50[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_49[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_48[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB2_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80b8[0m (0x401d8000 + 0x00b8)
Message Buffer 2 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB0_64B_WORD13
<link=p.CAN3.MB0_64B_WORD13>
#### p.can3.mb0_64b_word14
<link=p.CAN3.MB0_64B_WORD14>
#### p.CAN3.MB4_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d80c0[0m (0x401d8000 + 0x00c0)
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
#### p.CAN3.MB1_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d80c4[0m (0x401d8000 + 0x00c4)
Message Buffer 1 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB4_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d80c4[0m (0x401d8000 + 0x00c4)
Message Buffer 4 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb4_8b_id
<link=p.CAN3.MB4_8B_ID>
#### can3.mb4_8b_id
<link=p.CAN3.MB4_8B_ID>
#### p.can3.mb1_32b_word7
<link=p.CAN3.MB1_32B_WORD7>
#### CAN3.MB1_64B_ID
<link=p.CAN3.MB1_64B_ID>
#### CAN3.MB4_8B_WORD1
<link=p.CAN3.MB4_8B_WORD1>
#### p.can3.word14
<link=p.CAN3.WORD14>
#### p.CAN3.CS5
<lang=dft>
 (rw)  [1;33m0x401d80d0[0m (0x401d8000 + 0x00d0)
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
#### p.can3.mb1_64b_word0
<link=p.CAN3.MB1_64B_WORD0>
#### p.CAN3.MB5_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d80d0[0m (0x401d8000 + 0x00d0)
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
#### p.CAN3.MB2_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d80d4[0m (0x401d8000 + 0x00d4)
Message Buffer 2 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb3_16b_word1
<link=p.CAN3.MB3_16B_WORD1>
#### CAN3.MB5_8B_ID
<link=p.CAN3.MB5_8B_ID>
#### CAN3.MB3_16B_WORD3
<link=p.CAN3.MB3_16B_WORD3>
#### can3.mb5_8b_word1
<link=p.CAN3.MB5_8B_WORD1>
#### can3.mb4_16b_id
<link=p.CAN3.MB4_16B_ID>
#### can3.mb4_16b_word0
<link=p.CAN3.MB4_16B_WORD0>
#### p.CAN3.WORD06
<lang=dft>
 (rw)  [1;33m0x401d80e8[0m (0x401d8000 + 0x00e8)
Message Buffer 6 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_8B_CS
<link=p.CAN3.MB7_8B_CS>
#### can3.mb3_32b_cs
<link=p.CAN3.MB3_32B_CS>
#### p.can3.mb5_16b_cs
<link=p.CAN3.MB5_16B_CS>
#### p.can3.word07
<link=p.CAN3.WORD07>
#### CAN3.MB1_64B_WORD13
<link=p.CAN3.MB1_64B_WORD13>
#### CAN3.MB3_32B_WORD3
<link=p.CAN3.MB3_32B_WORD3>
#### CAN3.MB8_8B_WORD1
<link=p.CAN3.MB8_8B_WORD1>
#### can3.mb6_16b_word0
<link=p.CAN3.MB6_16B_WORD0>
#### CAN3.WORD09
<link=p.CAN3.WORD09>
#### p.can3.mb2_64b_word1
<link=p.CAN3.MB2_64B_WORD1>
#### p.CAN3.MB3_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d811c[0m (0x401d8000 + 0x011c)
Message Buffer 3 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb9_8b_word1
<link=p.CAN3.MB9_8B_WORD1>
#### p.CAN3.MB2_64B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8120[0m (0x401d8000 + 0x0120)
Message Buffer 2 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB6_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8124[0m (0x401d8000 + 0x0124)
Message Buffer 6 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB11_8B_CS
<link=p.CAN3.MB11_8B_CS>
#### p.can3.id11
<link=p.CAN3.ID11>
#### p.CAN3.MB11_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8134[0m (0x401d8000 + 0x0134)
Message Buffer 11 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb4_32b_word3
<link=p.CAN3.MB4_32B_WORD3>
#### CAN3.MB4_32B_WORD3
<link=p.CAN3.MB4_32B_WORD3>
#### CAN3.MB11_8B_WORD0
<link=p.CAN3.MB11_8B_WORD0>
#### p.CAN3.MB12_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8144[0m (0x401d8000 + 0x0144)
Message Buffer 12 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb12_8b_word0
<link=p.CAN3.MB12_8B_WORD0>
#### CAN3.MB2_64B_WORD12
<link=p.CAN3.MB2_64B_WORD12>
#### p.can3.mb5_32b_cs
<link=p.CAN3.MB5_32B_CS>
#### p.can3.mb12_8b_word1
<link=p.CAN3.MB12_8B_WORD1>
#### CAN3.MB12_8B_WORD1
<link=p.CAN3.MB12_8B_WORD1>
#### p.CAN3.WORD112
<lang=dft>
 (rw)  [1;33m0x401d814c[0m (0x401d8000 + 0x014c)
Message Buffer 12 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB5_32B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8154[0m (0x401d8000 + 0x0154)
Message Buffer 5 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB9_16B_CS
<link=p.CAN3.MB9_16B_CS>
#### can3.mb3_64b_id
<link=p.CAN3.MB3_64B_ID>
#### p.can3.mb5_32b_word3
<link=p.CAN3.MB5_32B_WORD3>
#### p.CAN3.MB9_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8164[0m (0x401d8000 + 0x0164)
Message Buffer 9 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word114
<link=p.CAN3.WORD114>
#### p.CAN3.MB3_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8170[0m (0x401d8000 + 0x0170)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb3_64b_word4
<link=p.CAN3.MB3_64B_WORD4>
#### CAN3.MB10_16B_WORD0
<link=p.CAN3.MB10_16B_WORD0>
#### p.CAN3.MB15_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8178[0m (0x401d8000 + 0x0178)
Message Buffer 15 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB3_64B_WORD6
<link=p.CAN3.MB3_64B_WORD6>
#### p.can3.word015
<link=p.CAN3.WORD015>
#### CAN3.WORD115
<link=p.CAN3.WORD115>
#### p.can3.mb3_64b_word8
<link=p.CAN3.MB3_64B_WORD8>
#### can3.mb17_8b_id
<link=p.CAN3.MB17_8B_ID>
#### CAN3.MB11_16B_WORD2
<link=p.CAN3.MB11_16B_WORD2>
#### CAN3.MB7_32B_CS
<link=p.CAN3.MB7_32B_CS>
#### can3.mb11_16b_word3
<link=p.CAN3.MB11_16B_WORD3>
#### p.can3.mb17_8b_word1
<link=p.CAN3.MB17_8B_WORD1>
#### p.CAN3.MB3_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d819c[0m (0x401d8000 + 0x019c)
Message Buffer 3 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb12_16b_cs
<link=p.CAN3.MB12_16B_CS>
#### CAN3.ID18
<link=p.CAN3.ID18>
#### p.can3.mb4_64b_word0
<link=p.CAN3.MB4_64B_WORD0>
#### CAN3.MB12_16B_WORD1
<link=p.CAN3.MB12_16B_WORD1>
#### p.CAN3.MB7_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d81ac[0m (0x401d8000 + 0x01ac)
Message Buffer 7 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb12_16b_word2
<link=p.CAN3.MB12_16B_WORD2>
#### p.CAN3.MB19_8B_CS
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
#### can3.mb4_64b_word3
<link=p.CAN3.MB4_64B_WORD3>
#### CAN3.MB13_16B_CS
<link=p.CAN3.MB13_16B_CS>
#### p.CAN3.MB19_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d81b8[0m (0x401d8000 + 0x01b8)
Message Buffer 19 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_32B_WORD7
<link=p.CAN3.MB7_32B_WORD7>
#### CAN3.CS20
<link=p.CAN3.CS20>
#### CAN3.MB13_16B_WORD1
<link=p.CAN3.MB13_16B_WORD1>
#### p.can3.mb8_32b_word0
<link=p.CAN3.MB8_32B_WORD0>
#### can3.mb8_32b_word2
<link=p.CAN3.MB8_32B_WORD2>
#### p.CAN3.MB8_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d81dc[0m (0x401d8000 + 0x01dc)
Message Buffer 8 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.id22
<link=p.CAN3.ID22>
#### CAN3.MB9_32B_ID
<link=p.CAN3.MB9_32B_ID>
#### can3.cs23
<link=p.CAN3.CS23>
#### can3.mb15_16b_word0
<link=p.CAN3.MB15_16B_WORD0>
#### can3.mb23_8b_cs
<link=p.CAN3.MB23_8B_CS>
#### can3.mb9_32b_word5
<link=p.CAN3.MB9_32B_WORD5>
#### p.can3.mb5_64b_word7
<link=p.CAN3.MB5_64B_WORD7>
#### CAN3.MB9_32B_WORD7
<link=p.CAN3.MB9_32B_WORD7>
#### CAN3.MB10_32B_ID
<link=p.CAN3.MB10_32B_ID>
#### can3.mb25_8b_id
<link=p.CAN3.MB25_8B_ID>
#### CAN3.MB5_64B_WORD9
<link=p.CAN3.MB5_64B_WORD9>
#### p.CAN3.WORD025
<lang=dft>
 (rw)  [1;33m0x401d8218[0m (0x401d8000 + 0x0218)
Message Buffer 25 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb25_8b_word1
<link=p.CAN3.MB25_8B_WORD1>
#### p.can3.word125
<link=p.CAN3.WORD125>
#### p.CAN3.ID26
<lang=dft>
 (rw)  [1;33m0x401d8224[0m (0x401d8000 + 0x0224)
Message Buffer 26 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb10_32b_word3
<link=p.CAN3.MB10_32B_WORD3>
#### CAN3.MB17_16B_WORD2
<link=p.CAN3.MB17_16B_WORD2>
#### CAN3.MB26_8B_WORD0
<link=p.CAN3.MB26_8B_WORD0>
#### can3.word026
<link=p.CAN3.WORD026>
#### can3.mb17_16b_word3
<link=p.CAN3.MB17_16B_WORD3>
#### p.CAN3.MB26_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d822c[0m (0x401d8000 + 0x022c)
Message Buffer 26 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb5_64b_word15
<link=p.CAN3.MB5_64B_WORD15>
#### p.CAN3.MB10_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8234[0m (0x401d8000 + 0x0234)
Message Buffer 10 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb18_16b_word0
<link=p.CAN3.MB18_16B_WORD0>
#### can3.mb11_32b_id
<link=p.CAN3.MB11_32B_ID>
#### p.can3.mb28_8b_id
<link=p.CAN3.MB28_8B_ID>
#### CAN3.MB6_64B_WORD3
<link=p.CAN3.MB6_64B_WORD3>
#### can3.word128
<link=p.CAN3.WORD128>
#### CAN3.ID29
<link=p.CAN3.ID29>
#### p.CAN3.MB6_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8254[0m (0x401d8000 + 0x0254)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB11_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8258[0m (0x401d8000 + 0x0258)
Message Buffer 11 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word029
<link=p.CAN3.WORD029>
#### p.can3.mb11_32b_word7
<link=p.CAN3.MB11_32B_WORD7>
#### p.can3.mb29_8b_word1
<link=p.CAN3.MB29_8B_WORD1>
#### CAN3.WORD129
<link=p.CAN3.WORD129>
#### p.CAN3.MB12_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8260[0m (0x401d8000 + 0x0260)
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
#### p.can3.mb30_8b_cs
<link=p.CAN3.MB30_8B_CS>
#### can3.mb30_8b_cs
<link=p.CAN3.MB30_8B_CS>
#### can3.mb6_64b_word12
<link=p.CAN3.MB6_64B_WORD12>
#### p.can3.mb31_8b_cs
<link=p.CAN3.MB31_8B_CS>
#### p.CAN3.ID31
<lang=dft>
 (rw)  [1;33m0x401d8274[0m (0x401d8000 + 0x0274)
Message Buffer 31 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb31_8b_id
<link=p.CAN3.MB31_8B_ID>
#### p.CAN3.MB12_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8278[0m (0x401d8000 + 0x0278)
Message Buffer 12 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_64B_ID
<link=p.CAN3.MB7_64B_ID>
#### can3.mb12_32b_word6
<link=p.CAN3.MB12_32B_WORD6>
#### p.CAN3.MB21_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d8284[0m (0x401d8000 + 0x0284)
Message Buffer 21 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb7_64b_word1
<link=p.CAN3.MB7_64B_WORD1>
#### CAN3.MB13_32B_CS
<link=p.CAN3.MB13_32B_CS>
#### p.can3.mb21_16b_word2
<link=p.CAN3.MB21_16B_WORD2>
#### CAN3.MB21_16B_WORD2
<link=p.CAN3.MB21_16B_WORD2>
#### p.can3.mb13_32b_id
<link=p.CAN3.MB13_32B_ID>
#### CAN3.MB13_32B_ID
<link=p.CAN3.MB13_32B_ID>
#### CAN3.MB7_64B_WORD3
<link=p.CAN3.MB7_64B_WORD3>
#### p.can3.word132
<link=p.CAN3.WORD132>
#### can3.mb22_16b_cs
<link=p.CAN3.MB22_16B_CS>
#### p.CAN3.MB33_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8298[0m (0x401d8000 + 0x0298)
Message Buffer 33 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word033
<link=p.CAN3.WORD033>
#### p.CAN3.MB7_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d829c[0m (0x401d8000 + 0x029c)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD133
<link=p.CAN3.WORD133>
#### p.CAN3.CS34
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
#### can3.cs34
<link=p.CAN3.CS34>
#### p.CAN3.MB23_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d82b4[0m (0x401d8000 + 0x02b4)
Message Buffer 23 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb23_16b_word2
<link=p.CAN3.MB23_16B_WORD2>
#### can3.mb7_64b_word14
<link=p.CAN3.MB7_64B_WORD14>
#### p.CAN3.MB24_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d82c0[0m (0x401d8000 + 0x02c0)
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
#### p.can3.mb24_16b_cs
<link=p.CAN3.MB24_16B_CS>
#### p.CAN3.MB14_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d82c4[0m (0x401d8000 + 0x02c4)
Message Buffer 14 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb24_16b_word0
<link=p.CAN3.MB24_16B_WORD0>
#### p.CAN3.WORD036
<lang=dft>
 (rw)  [1;33m0x401d82c8[0m (0x401d8000 + 0x02c8)
Message Buffer 36 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb8_64b_word2
<link=p.CAN3.MB8_64B_WORD2>
#### p.can3.id37
<link=p.CAN3.ID37>
#### can3.mb14_32b_word7
<link=p.CAN3.MB14_32B_WORD7>
#### p.can3.mb37_8b_word0
<link=p.CAN3.MB37_8B_WORD0>
#### p.CAN3.MB8_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d82d8[0m (0x401d8000 + 0x02d8)
Message Buffer 8 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb25_16b_word1
<link=p.CAN3.MB25_16B_WORD1>
#### CAN3.MB38_8B_ID
<link=p.CAN3.MB38_8B_ID>
#### p.CAN3.MB15_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d82e8[0m (0x401d8000 + 0x02e8)
Message Buffer 15 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB25_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d82e8[0m (0x401d8000 + 0x02e8)
Message Buffer 25 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb15_32b_word3
<link=p.CAN3.MB15_32B_WORD3>
#### can3.id39
<link=p.CAN3.ID39>
#### can3.mb26_16b_word2
<link=p.CAN3.MB26_16B_WORD2>
#### CAN3.MB8_64B_WORD14
<link=p.CAN3.MB8_64B_WORD14>
#### can3.id40
<link=p.CAN3.ID40>
#### p.CAN3.MB8_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d8304[0m (0x401d8000 + 0x0304)
Message Buffer 8 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB16_32B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8308[0m (0x401d8000 + 0x0308)
Message Buffer 16 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb9_64b_cs
<link=p.CAN3.MB9_64B_CS>
#### CAN3.MB27_16B_ID
<link=p.CAN3.MB27_16B_ID>
#### can3.mb16_32b_word2
<link=p.CAN3.MB16_32B_WORD2>
#### can3.mb27_16b_word1
<link=p.CAN3.MB27_16B_WORD1>
#### p.CAN3.MB9_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8320[0m (0x401d8000 + 0x0320)
Message Buffer 9 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb9_64b_word5
<link=p.CAN3.MB9_64B_WORD5>
#### p.CAN3.MB17_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d832c[0m (0x401d8000 + 0x032c)
Message Buffer 17 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.word142
<link=p.CAN3.WORD142>
#### p.CAN3.MB28_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8334[0m (0x401d8000 + 0x0334)
Message Buffer 28 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB29_16B_CS
<link=p.CAN3.MB29_16B_CS>
#### p.CAN3.MB43_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8338[0m (0x401d8000 + 0x0338)
Message Buffer 43 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.word043
<link=p.CAN3.WORD043>
#### CAN3.WORD143
<link=p.CAN3.WORD143>
#### p.can3.mb44_8b_cs
<link=p.CAN3.MB44_8B_CS>
#### p.can3.mb9_64b_word13
<link=p.CAN3.MB9_64B_WORD13>
#### p.CAN3.MB9_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d834c[0m (0x401d8000 + 0x034c)
Message Buffer 9 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB10_64B_ID
<link=p.CAN3.MB10_64B_ID>
#### p.CAN3.WORD145
<lang=dft>
 (rw)  [1;33m0x401d835c[0m (0x401d8000 + 0x035c)
Message Buffer 45 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.id46
<link=p.CAN3.ID46>
#### can3.mb30_16b_word3
<link=p.CAN3.MB30_16B_WORD3>
#### p.CAN3.MB46_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d836c[0m (0x401d8000 + 0x036c)
Message Buffer 46 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB46_8B_WORD1
<link=p.CAN3.MB46_8B_WORD1>
#### p.can3.word146
<link=p.CAN3.WORD146>
#### can3.mb10_64b_word6
<link=p.CAN3.MB10_64B_WORD6>
#### CAN3.MB18_32B_WORD6
<link=p.CAN3.MB18_32B_WORD6>
#### p.can3.mb47_8b_word0
<link=p.CAN3.MB47_8B_WORD0>
#### can3.word047
<link=p.CAN3.WORD047>
#### p.can3.mb19_32b_word0
<link=p.CAN3.MB19_32B_WORD0>
#### p.can3.mb48_8b_word0
<link=p.CAN3.MB48_8B_WORD0>
#### can3.mb48_8b_word0
<link=p.CAN3.MB48_8B_WORD0>
#### p.CAN3.WORD048
<lang=dft>
 (rw)  [1;33m0x401d8388[0m (0x401d8000 + 0x0388)
Message Buffer 48 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb10_64b_word14
<link=p.CAN3.MB10_64B_WORD14>
#### p.can3.mb10_64b_word15
<link=p.CAN3.MB10_64B_WORD15>
#### can3.mb19_32b_word5
<link=p.CAN3.MB19_32B_WORD5>
#### CAN3.MB19_32B_WORD5
<link=p.CAN3.MB19_32B_WORD5>
#### p.can3.mb32_16b_word3
<link=p.CAN3.MB32_16B_WORD3>
#### p.CAN3.MB11_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d8398[0m (0x401d8000 + 0x0398)
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
#### p.CAN3.MB11_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d839c[0m (0x401d8000 + 0x039c)
Message Buffer 11 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb33_16b_id
<link=p.CAN3.MB33_16B_ID>
#### p.can3.cs50
<link=p.CAN3.CS50>
#### can3.word050
<link=p.CAN3.WORD050>
#### CAN3.CS51
<link=p.CAN3.CS51>
#### p.CAN3.MB11_64B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d83b0[0m (0x401d8000 + 0x03b0)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB11_64B_WORD4
<link=p.CAN3.MB11_64B_WORD4>
#### p.can3.mb20_32b_word3
<link=p.CAN3.MB20_32B_WORD3>
#### p.can3.mb51_8b_id
<link=p.CAN3.MB51_8B_ID>
#### can3.mb11_64b_word6
<link=p.CAN3.MB11_64B_WORD6>
#### p.CAN3.MB20_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d83b8[0m (0x401d8000 + 0x03b8)
Message Buffer 20 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB20_32B_WORD4
<link=p.CAN3.MB20_32B_WORD4>
#### CAN3.MB34_16B_WORD0
<link=p.CAN3.MB34_16B_WORD0>
#### CAN3.WORD051
<link=p.CAN3.WORD051>
#### can3.word151
<link=p.CAN3.WORD151>
#### p.can3.mb34_16b_word3
<link=p.CAN3.MB34_16B_WORD3>
#### CAN3.MB35_16B_ID
<link=p.CAN3.MB35_16B_ID>
#### can3.mb53_8b_cs
<link=p.CAN3.MB53_8B_CS>
#### p.CAN3.ID53
<lang=dft>
 (rw)  [1;33m0x401d83d4[0m (0x401d8000 + 0x03d4)
Message Buffer 53 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB11_64B_WORD13
<lang=dft>
 (rw)  [1;33m0x401d83d4[0m (0x401d8000 + 0x03d4)
Message Buffer 11 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_55[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_54[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_53[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_52[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB21_32B_WORD2
<link=p.CAN3.MB21_32B_WORD2>
#### CAN3.MB53_8B_WORD0
<link=p.CAN3.MB53_8B_WORD0>
#### p.can3.mb21_32b_word3
<link=p.CAN3.MB21_32B_WORD3>
#### CAN3.ID54
<link=p.CAN3.ID54>
#### can3.mb12_64b_id
<link=p.CAN3.MB12_64B_ID>
#### p.can3.mb36_16b_word0
<link=p.CAN3.MB36_16B_WORD0>
#### CAN3.MB36_16B_WORD3
<link=p.CAN3.MB36_16B_WORD3>
#### CAN3.MB12_64B_WORD4
<link=p.CAN3.MB12_64B_WORD4>
#### p.CAN3.MB12_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8404[0m (0x401d8000 + 0x0404)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB22_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8408[0m (0x401d8000 + 0x0408)
Message Buffer 22 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB22_32B_WORD4
<link=p.CAN3.MB22_32B_WORD4>
#### CAN3.MB37_16B_WORD3
<link=p.CAN3.MB37_16B_WORD3>
#### p.CAN3.CS57
<lang=dft>
 (rw)  [1;33m0x401d8410[0m (0x401d8000 + 0x0410)
Message Buffer 57 CS Register
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
#### p.CAN3.MB57_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8410[0m (0x401d8000 + 0x0410)
Message Buffer 57 CS Register
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
#### p.CAN3.MB12_64B_WORD12
<lang=dft>
 (rw)  [1;33m0x401d8418[0m (0x401d8000 + 0x0418)
Message Buffer 12 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_51[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_50[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_49[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_48[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB12_64B_WORD12
<link=p.CAN3.MB12_64B_WORD12>
#### p.CAN3.WORD057
<lang=dft>
 (rw)  [1;33m0x401d8418[0m (0x401d8000 + 0x0418)
Message Buffer 57 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb58_8b_word0
<link=p.CAN3.MB58_8B_WORD0>
#### p.can3.word058
<link=p.CAN3.WORD058>
#### p.CAN3.MB58_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d842c[0m (0x401d8000 + 0x042c)
Message Buffer 58 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb58_8b_word1
<link=p.CAN3.MB58_8B_WORD1>
#### CAN3.WORD158
<link=p.CAN3.WORD158>
#### can3.cs59
<link=p.CAN3.CS59>
#### p.CAN3.MB39_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8430[0m (0x401d8000 + 0x0430)
Message Buffer 39 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb39_16b_word0
<link=p.CAN3.MB39_16B_WORD0>
#### p.can3.word159
<link=p.CAN3.WORD159>
#### p.can3.mb60_8b_cs
<link=p.CAN3.MB60_8B_CS>
#### p.can3.id60
<link=p.CAN3.ID60>
#### CAN3.WORD060
<link=p.CAN3.WORD060>
#### p.can3.cs61
<link=p.CAN3.CS61>
#### can3.mb41_16b_id
<link=p.CAN3.MB41_16B_ID>
#### CAN3.MB41_16B_WORD0
<link=p.CAN3.MB41_16B_WORD0>
#### can3.mb13_64b_word13
<link=p.CAN3.MB13_64B_WORD13>
#### p.CAN3.MB41_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8468[0m (0x401d8000 + 0x0468)
Message Buffer 41 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb62_8b_word0
<link=p.CAN3.MB62_8B_WORD0>
#### p.can3.mb13_64b_word15
<link=p.CAN3.MB13_64B_WORD15>
#### p.can3.mb62_8b_word1
<link=p.CAN3.MB62_8B_WORD1>
#### p.CAN3.CS63
<lang=dft>
 (rw)  [1;33m0x401d8470[0m (0x401d8000 + 0x0470)
Message Buffer 63 CS Register
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
#### p.CAN3.MB63_8B_CS
<lang=dft>
 (rw)  [1;33m0x401d8470[0m (0x401d8000 + 0x0470)
Message Buffer 63 CS Register
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
#### p.CAN3.MB63_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8474[0m (0x401d8000 + 0x0474)
Message Buffer 63 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.rximr[1]
<link=p.CAN3.RXIMR[1]>
#### CAN3.RXIMR[3]
<link=p.CAN3.RXIMR[3]>
#### p.CAN3.RXIMR[8]
<lang=dft>
 (rw)  [1;33m0x401d88a0[0m (0x401d8000 + 0x08a0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[8]
<link=p.CAN3.RXIMR[8]>
#### CAN3.RXIMR[9]
<link=p.CAN3.RXIMR[9]>
#### can3.rximr[11]
<link=p.CAN3.RXIMR[11]>
#### can3.rximr[14]
<link=p.CAN3.RXIMR[14]>
#### p.can3.rximr[26]
<link=p.CAN3.RXIMR[26]>
#### p.can3.rximr[35]
<link=p.CAN3.RXIMR[35]>
#### CAN3.RXIMR[42]
<link=p.CAN3.RXIMR[42]>
#### CAN3.RXIMR[51]
<link=p.CAN3.RXIMR[51]>
#### p.CAN3.RXIMR[56]
<lang=dft>
 (rw)  [1;33m0x401d8960[0m (0x401d8000 + 0x0960)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[56]
<link=p.CAN3.RXIMR[56]>
#### p.CAN3.EDCBT
<lang=dft>
 (rw)  [1;33m0x401d8bf8[0m (0x401d8000 + 0x0bf8)
Enhanced Data Phase CAN bit Timing
 (rw) (05)  [0;32mDTSEG1[0m  - [04:00] -  Data Phase Segment 1
 (rw) (04)  [0;32mDTSEG2[0m  - [15:12] -  Data Phase Time Segment 2
 (rw) (04)  [0;32mDRJW[0m  - [25:22] -  Data Phase Resynchronization Jump Width
</lang>
#### p.can3.edcbt
<link=p.CAN3.EDCBT>
#### CAN3.ERFSR
<link=p.CAN3.ERFSR>
#### CAN3.HR_TIME_STAMP[3]
<link=p.CAN3.HR_TIME_STAMP[3]>
#### p.CAN3.HR_TIME_STAMP[5]
<lang=dft>
 (ro)  [1;33m0x401d8c44[0m (0x401d8000 + 0x0c44)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### CAN3.HR_TIME_STAMP[10]
<link=p.CAN3.HR_TIME_STAMP[10]>
#### can3.hr_time_stamp[16]
<link=p.CAN3.HR_TIME_STAMP[16]>
#### CAN3.HR_TIME_STAMP[22]
<link=p.CAN3.HR_TIME_STAMP[22]>
#### p.CAN3.HR_TIME_STAMP[24]
<lang=dft>
 (ro)  [1;33m0x401d8c90[0m (0x401d8000 + 0x0c90)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[24]
<link=p.CAN3.HR_TIME_STAMP[24]>
#### can3.hr_time_stamp[24]
<link=p.CAN3.HR_TIME_STAMP[24]>
#### CAN3.HR_TIME_STAMP[28]
<link=p.CAN3.HR_TIME_STAMP[28]>
#### can3.hr_time_stamp[30]
<link=p.CAN3.HR_TIME_STAMP[30]>
#### can3.hr_time_stamp[37]
<link=p.CAN3.HR_TIME_STAMP[37]>
#### p.can3.hr_time_stamp[43]
<link=p.CAN3.HR_TIME_STAMP[43]>
#### CAN3.HR_TIME_STAMP[47]
<link=p.CAN3.HR_TIME_STAMP[47]>
#### p.CAN3.HR_TIME_STAMP[48]
<lang=dft>
 (ro)  [1;33m0x401d8cf0[0m (0x401d8000 + 0x0cf0)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[48]
<link=p.CAN3.HR_TIME_STAMP[48]>
#### can3.hr_time_stamp[48]
<link=p.CAN3.HR_TIME_STAMP[48]>
#### p.CAN3.HR_TIME_STAMP[51]
<lang=dft>
 (ro)  [1;33m0x401d8cfc[0m (0x401d8000 + 0x0cfc)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.CAN3.HR_TIME_STAMP[54]
<lang=dft>
 (ro)  [1;33m0x401d8d08[0m (0x401d8000 + 0x0d08)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[54]
<link=p.CAN3.HR_TIME_STAMP[54]>
#### can3.hr_time_stamp[63]
<link=p.CAN3.HR_TIME_STAMP[63]>
#### CAN3.ERFFEL[3]
<link=p.CAN3.ERFFEL[3]>
#### p.can3.erffel[8]
<link=p.CAN3.ERFFEL[8]>
#### can3.erffel[14]
<link=p.CAN3.ERFFEL[14]>
#### p.CAN3.ERFFEL[16]
<lang=dft>
 (rw)  [1;33m0x401db040[0m (0x401d8000 + 0x3040)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[18]
<link=p.CAN3.ERFFEL[18]>
#### can3.erffel[25]
<link=p.CAN3.ERFFEL[25]>
#### CAN3.ERFFEL[36]
<link=p.CAN3.ERFFEL[36]>
#### p.can3.erffel[45]
<link=p.CAN3.ERFFEL[45]>
#### p.CAN3.ERFFEL[46]
<lang=dft>
 (rw)  [1;33m0x401db0b8[0m (0x401d8000 + 0x30b8)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[46]
<link=p.CAN3.ERFFEL[46]>
#### p.CAN3.ERFFEL[55]
<lang=dft>
 (rw)  [1;33m0x401db0dc[0m (0x401d8000 + 0x30dc)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[60]
<link=p.CAN3.ERFFEL[60]>
#### p.CAN3.ERFFEL[63]
<lang=dft>
 (rw)  [1;33m0x401db0fc[0m (0x401d8000 + 0x30fc)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[63]
<link=p.CAN3.ERFFEL[63]>
#### can3.erffel[64]
<link=p.CAN3.ERFFEL[64]>
#### CAN3.ERFFEL[67]
<link=p.CAN3.ERFFEL[67]>
#### p.can3.erffel[69]
<link=p.CAN3.ERFFEL[69]>
#### p.CAN3.ERFFEL[73]
<lang=dft>
 (rw)  [1;33m0x401db124[0m (0x401d8000 + 0x3124)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[74]
<link=p.CAN3.ERFFEL[74]>
#### CAN3.ERFFEL[77]
<link=p.CAN3.ERFFEL[77]>
#### p.CAN3.ERFFEL[79]
<lang=dft>
 (rw)  [1;33m0x401db13c[0m (0x401d8000 + 0x313c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[81]
<lang=dft>
 (rw)  [1;33m0x401db144[0m (0x401d8000 + 0x3144)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.CAN3.ERFFEL[84]
<lang=dft>
 (rw)  [1;33m0x401db150[0m (0x401d8000 + 0x3150)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[87]
<link=p.CAN3.ERFFEL[87]>
#### p.can3.erffel[93]
<link=p.CAN3.ERFFEL[93]>
#### CAN3.ERFFEL[97]
<link=p.CAN3.ERFFEL[97]>
#### p.can3.erffel[99]
<link=p.CAN3.ERFFEL[99]>
#### can3.erffel[99]
<link=p.CAN3.ERFFEL[99]>
#### can3.erffel[104]
<link=p.CAN3.ERFFEL[104]>
#### CAN3.ERFFEL[104]
<link=p.CAN3.ERFFEL[104]>
#### CAN3.ERFFEL[113]
<link=p.CAN3.ERFFEL[113]>
#### p.CAN3.ERFFEL[117]
<lang=dft>
 (rw)  [1;33m0x401db1d4[0m (0x401d8000 + 0x31d4)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[118]
<link=p.CAN3.ERFFEL[118]>
#### p.CAN3.ERFFEL[121]
<lang=dft>
 (rw)  [1;33m0x401db1e4[0m (0x401d8000 + 0x31e4)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.tmr1.comp20
<link=p.TMR1.COMP20>
#### TMR1.COMP22
<link=p.TMR1.COMP22>
#### tmr1.hold3
<link=p.TMR1.HOLD3>
#### p.tmr1.cntr1
<link=p.TMR1.CNTR1>
#### TMR1.CTRL0
<link=p.TMR1.CTRL0>
#### p.TMR1.CTRL1
<lang=dft>
 (rw)  [1;33m0x401dc02c[0m (0x401dc000 + 0x002c)
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
#### p.TMR1.CMPLD10
<lang=dft>
 (rw)  [1;33m0x401dc010[0m (0x401dc000 + 0x0010)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### p.tmr1.csctrl0
<link=p.TMR1.CSCTRL0>
#### tmr1.csctrl1
<link=p.TMR1.CSCTRL1>
#### TMR1.DMA3
<link=p.TMR1.DMA3>
#### p.tmr2.hold0
<link=p.TMR2.HOLD0>
#### tmr2.hold0
<link=p.TMR2.HOLD0>
#### p.tmr2.ctrl0
<link=p.TMR2.CTRL0>
#### tmr2.ctrl3
<link=p.TMR2.CTRL3>
#### p.TMR2.SCTRL0
<lang=dft>
 (rw)  [1;33m0x401e000e[0m (0x401e0000 + 0x000e)
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
#### tmr2.sctrl3
<link=p.TMR2.SCTRL3>
#### p.TMR2.CMPLD13
<lang=dft>
 (rw)  [1;33m0x401e0070[0m (0x401e0000 + 0x0070)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### tmr2.cmpld21
<link=p.TMR2.CMPLD21>
#### p.tmr2.cmpld22
<link=p.TMR2.CMPLD22>
#### p.tmr2.csctrl0
<link=p.TMR2.CSCTRL0>
#### TMR2.CSCTRL3
<link=p.TMR2.CSCTRL3>
#### p.TMR2.FILT2
<lang=dft>
 (rw)  [1;33m0x401e0056[0m (0x401e0000 + 0x0056)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### tmr2.dma1
<link=p.TMR2.DMA1>
#### p.TMR2.DMA2
<lang=dft>
 (rw)  [1;33m0x401e0058[0m (0x401e0000 + 0x0058)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### tmr2.enbl
<link=p.TMR2.ENBL>
#### p.TMR3.COMP12
<lang=dft>
 (rw)  [1;33m0x401e4040[0m (0x401e4000 + 0x0040)
Timer Channel Compare Register 1
 (rw) (16)  [0;32mCOMPARISON_1[0m  - [15:00] -  Comparison Value 1
</lang>
#### tmr3.comp13
<link=p.TMR3.COMP13>
#### TMR3.COMP13
<link=p.TMR3.COMP13>
#### p.tmr3.comp21
<link=p.TMR3.COMP21>
#### p.TMR3.CAPT2
<lang=dft>
 (rw)  [1;33m0x401e4044[0m (0x401e4000 + 0x0044)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### tmr3.hold0
<link=p.TMR3.HOLD0>
#### p.tmr3.hold1
<link=p.TMR3.HOLD1>
#### tmr3.cntr0
<link=p.TMR3.CNTR0>
#### p.tmr3.sctrl0
<link=p.TMR3.SCTRL0>
#### TMR3.CSCTRL3
<link=p.TMR3.CSCTRL3>
#### p.TMR3.FILT3
<lang=dft>
 (rw)  [1;33m0x401e4076[0m (0x401e4000 + 0x0076)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### p.TMR4
<lang=dft>
base: 0x401e8000
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
输入 p.TMR4.{reg_name} 以查看寄存器的详细信息
type p.TMR4.{reg_name} to check details of registers
</lang>
#### p.tmr4.comp20
<link=p.TMR4.COMP20>
#### tmr4.comp20
<link=p.TMR4.COMP20>
#### tmr4.capt0
<link=p.TMR4.CAPT0>
#### TMR4.CAPT1
<link=p.TMR4.CAPT1>
#### TMR4.CTRL1
<link=p.TMR4.CTRL1>
#### p.TMR4.SCTRL1
<lang=dft>
 (rw)  [1;33m0x401e802e[0m (0x401e8000 + 0x002e)
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
#### TMR4.CMPLD11
<link=p.TMR4.CMPLD11>
#### TMR4.CMPLD20
<link=p.TMR4.CMPLD20>
#### p.TMR4.CSCTRL0
<lang=dft>
 (rw)  [1;33m0x401e8014[0m (0x401e8000 + 0x0014)
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
#### tmr4.csctrl1
<link=p.TMR4.CSCTRL1>
#### TMR4.FILT1
<link=p.TMR4.FILT1>
#### p.TMR4.DMA3
<lang=dft>
 (rw)  [1;33m0x401e8078[0m (0x401e8000 + 0x0078)
Timer Channel DMA Enable Register
 (rw) (01)  [0;32mIEFDE[0m  - [00:00] -  Input Edge Flag DMA Enable
 (rw) (01)  [0;32mCMPLD1DE[0m  - [01:01] -  Comparator Preload Register 1 DMA Enable
 (rw) (01)  [0;32mCMPLD2DE[0m  - [02:02] -  Comparator Preload Register 2 DMA Enable
</lang>
#### p.GPT1.OCR1
<lang=dft>
 (rw)  [1;33m0x401ec010[0m (0x401ec000 + 0x0010)
GPT Output Compare Register 1
 (rw) (32)  [0;32mCOMP[0m  - [31:00] -  Compare Value
</lang>
#### p.gpt1.ocr1
<link=p.GPT1.OCR1>
#### gpt1.icr2
<link=p.GPT1.ICR2>
#### p.gpt2.ocr3
<link=p.GPT2.OCR3>
#### p.gpt2.icr1
<link=p.GPT2.ICR1>
#### ocotp.cfg1
<link=p.OCOTP.CFG1>
#### OCOTP.CFG1
<link=p.OCOTP.CFG1>
#### p.ocotp.otpmk5
<link=p.OCOTP.OTPMK5>
#### OCOTP.OTPMK6
<link=p.OCOTP.OTPMK6>
#### p.OCOTP.SRK0
<lang=dft>
 (rw)  [1;33m0x401f4580[0m (0x401f4000 + 0x0580)
Shadow Register for OTP Bank3 Word0 (SRK Hash)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.srk0
<link=p.OCOTP.SRK0>
#### ocotp.srk0
<link=p.OCOTP.SRK0>
#### OCOTP.SRK0
<link=p.OCOTP.SRK0>
#### p.OCOTP.SJC_RESP1
<lang=dft>
 (rw)  [1;33m0x401f4610[0m (0x401f4000 + 0x0610)
Value of OTP Bank4 Word1 (Secure JTAG Response Field)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.SW_GP21
<lang=dft>
 (rw)  [1;33m0x401f46a0[0m (0x401f4000 + 0x06a0)
Value of OTP Bank5 Word2 (SW GP2)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.SW_GP21
<link=p.OCOTP.SW_GP21>
#### p.ocotp.rom_patch6
<link=p.OCOTP.ROM_PATCH6>
#### ocotp.rom_patch7
<link=p.OCOTP.ROM_PATCH7>
#### p.OCOTP.GP41
<lang=dft>
 (rw)  [1;33m0x401f48d0[0m (0x401f4000 + 0x08d0)
Value of OTP Bank7 Word5 (GP4)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.GP42
<link=p.OCOTP.GP42>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_03
<lang=dft>
 (rw)  [1;33m0x401f8020[0m (0x401f8000 + 0x0020)
SW_MUX_CTL_PAD_GPIO_EMC_03 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA03 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMB01 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPSPI2_SDI of instance: lpspi2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT05 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO03 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO03 of instance: gpio4
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_03
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_03>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_10
<lang=dft>
 (rw)  [1;33m0x401f803c[0m (0x401f8000 + 0x003c)
SW_MUX_CTL_PAD_GPIO_EMC_10 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR01 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM2_PWMA02 of instance: flexpwm2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: SAI2_RX_BCLK of instance: sai2
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: FLEXCAN2_RX of instance: flexcan2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO1_FLEXIO10 of instance: flexio1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO10 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_B_SS0_B of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_10
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_14>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_18
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_18>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_25
<lang=dft>
 (rw)  [1;33m0x401f8078[0m (0x401f8000 + 0x0078)
SW_MUX_CTL_PAD_GPIO_EMC_25 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_RAS of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMA01 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART6_TX of instance: lpuart6
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: ENET_TX_CLK of instance: enet
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: ENET_REF_CLK of instance: enet
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO25 of instance: gpio4
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: FLEXSPI2_A_SCLK of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_25
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_25
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_25>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_36
<lang=dft>
 (rw)  [1;33m0x401f80a4[0m (0x401f8000 + 0x00a4)
SW_MUX_CTL_PAD_GPIO_EMC_36 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_DATA14 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_IN22 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: GPT1_COMPARE2 of instance: gpt1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI3_TX_DATA of instance: sai3
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA17 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO22 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC1_WP of instance: usdhc1
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RDATA01 of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXCAN3_TX of instance: flexcan3/canfd
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_36
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_03>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_04>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_08>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_13
<lang=dft>
 (rw)  [1;33m0x401f80f0[0m (0x401f8000 + 0x00f0)
SW_MUX_CTL_PAD_GPIO_AD_B0_13 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LPI2C4_SDA of instance: lpi2c4
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: GPT1_CLK of instance: gpt1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART1_RX of instance: lpuart1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: EWM_OUT_B of instance: ewm
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXPWM1_PWMX03 of instance: flexpwm1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO13 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: ENET_1588_EVENT1_IN of instance: enet
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: REF_CLK_24M of instance: anatop
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_13
</lang>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_07
<lang=dft>
 (rw)  [1;33m0x401f8118[0m (0x401f8000 + 0x0118)
SW_MUX_CTL_PAD_GPIO_AD_B1_07 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPIB_DATA00 of instance: flexspi
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: LPI2C3_SCL of instance: lpi2c3
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART3_RX of instance: lpuart3
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SPDIF_EXT_CLK of instance: spdif
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_HSYNC of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO23 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_DATA3 of instance: usdhc2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_COL04 of instance: kpp
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: GPT2_COMPARE3 of instance: gpt2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO07 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_07
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_07>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_10
<lang=dft>
 (rw)  [1;33m0x401f8124[0m (0x401f8000 + 0x0124)
SW_MUX_CTL_PAD_GPIO_AD_B1_10 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPIA_DATA03 of instance: flexspi
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: WDOG1_B of instance: wdog1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART8_TX of instance: lpuart8
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_RX_SYNC of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA07 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO26 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: USDHC2_WP of instance: usdhc2
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: KPP_ROW02 of instance: kpp
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_1588_EVENT1_OUT of instance: enet
         2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO10 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B1_10
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_14>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_06>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_06>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_09>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_15
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_15>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_00
<lang=dft>
 (rw)  [1;33m0x401f817c[0m (0x401f8000 + 0x017c)
SW_MUX_CTL_PAD_GPIO_B1_00 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA12 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT14 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART4_TX of instance: lpuart4
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_RX_DATA00 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO16 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO16 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: FLEXPWM1_PWMA03 of instance: flexpwm1
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RX_ER of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: FLEXIO3_FLEXIO16 of instance: flexio3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B1_00
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_01
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_01>
#### iomuxc.sw_mux_ctl_pad_gpio_b1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_05>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_00>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_04>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_00
<lang=dft>
 (rw)  [1;33m0x401f81d4[0m (0x401f8000 + 0x01d4)
SW_MUX_CTL_PAD_GPIO_SD_B1_00 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_DATA3 of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIB_DATA03 of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXPWM1_PWMA03 of instance: flexpwm1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_DATA03 of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPUART4_TX of instance: lpuart4
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO00 of instance: gpio3
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: SAI3_RX_DATA of instance: sai3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_00
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_06>
#### p.iomuxc.sw_mux_ctl_pad_gpio_sd_b1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_07>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_10>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_05>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_08>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_11
<lang=dft>
 (rw)  [1;33m0x401f8230[0m (0x401f8000 + 0x0230)
SW_PAD_CTL_PAD_GPIO_EMC_11 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_14>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_23
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_23>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_28
<lang=dft>
 (rw)  [1;33m0x401f8274[0m (0x401f8000 + 0x0274)
SW_PAD_CTL_PAD_GPIO_EMC_28 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_32
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_32>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_35
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_35>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_39
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_39>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_41
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_41>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_09>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_10>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_12>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_13>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_15
<lang=dft>
 (rw)  [1;33m0x401f82e8[0m (0x401f8000 + 0x02e8)
SW_PAD_CTL_PAD_GPIO_AD_B0_15 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_00
<lang=dft>
 (rw)  [1;33m0x401f82ec[0m (0x401f8000 + 0x02ec)
SW_PAD_CTL_PAD_GPIO_AD_B1_00 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_07>
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b1_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_10>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_12>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_15>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_02>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_02>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_11>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_00
<lang=dft>
 (rw)  [1;33m0x401f836c[0m (0x401f8000 + 0x036c)
SW_PAD_CTL_PAD_GPIO_B1_00 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_b1_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_05>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_08>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_13
<lang=dft>
 (rw)  [1;33m0x401f83a0[0m (0x401f8000 + 0x03a0)
SW_PAD_CTL_PAD_GPIO_B1_13 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_02>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b1_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_00>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_01
<lang=dft>
 (rw)  [1;33m0x401f83c8[0m (0x401f8000 + 0x03c8)
SW_PAD_CTL_PAD_GPIO_SD_B1_01 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_sd_b1_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_04>
#### iomuxc.anatop_usb_otg1_id_select_input
<link=p.IOMUXC.ANATOP_USB_OTG1_ID_SELECT_INPUT>
#### IOMUXC.ANATOP_USB_OTG2_ID_SELECT_INPUT
<link=p.IOMUXC.ANATOP_USB_OTG2_ID_SELECT_INPUT>
#### p.iomuxc.csi_data02_select_input
<link=p.IOMUXC.CSI_DATA02_SELECT_INPUT>
#### iomuxc.csi_data05_select_input
<link=p.IOMUXC.CSI_DATA05_SELECT_INPUT>
#### p.iomuxc.enet_rxen_select_input
<link=p.IOMUXC.ENET_RXEN_SELECT_INPUT>
#### IOMUXC.ENET_RXEN_SELECT_INPUT
<link=p.IOMUXC.ENET_RXEN_SELECT_INPUT>
#### p.iomuxc.enet_rxerr_select_input
<link=p.IOMUXC.ENET_RXERR_SELECT_INPUT>
#### IOMUXC.FLEXPWM2_PWMA3_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM2_PWMA3_SELECT_INPUT>
#### p.iomuxc.flexspia_sck_select_input
<link=p.IOMUXC.FLEXSPIA_SCK_SELECT_INPUT>
#### iomuxc.flexspia_sck_select_input
<link=p.IOMUXC.FLEXSPIA_SCK_SELECT_INPUT>
#### p.iomuxc.lpi2c2_scl_select_input
<link=p.IOMUXC.LPI2C2_SCL_SELECT_INPUT>
#### IOMUXC.LPI2C2_SDA_SELECT_INPUT
<link=p.IOMUXC.LPI2C2_SDA_SELECT_INPUT>
#### p.IOMUXC.LPSPI1_SDO_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84f8[0m (0x401f8000 + 0x04f8)
LPSPI1_SDO_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_28_ALT3 :
         Selecting Pad: GPIO_EMC_28 for Mode: ALT3
      0x1 - GPIO_SD_B0_02_ALT4 :
         Selecting Pad: GPIO_SD_B0_02 for Mode: ALT4
</lang>
#### p.iomuxc.lpspi3_pcs0_select_input
<link=p.IOMUXC.LPSPI3_PCS0_SELECT_INPUT>
#### IOMUXC.LPSPI4_SCK_SELECT_INPUT
<link=p.IOMUXC.LPSPI4_SCK_SELECT_INPUT>
#### p.iomuxc.lpspi4_sdi_select_input
<link=p.IOMUXC.LPSPI4_SDI_SELECT_INPUT>
#### p.iomuxc.lpuart2_rx_select_input
<link=p.IOMUXC.LPUART2_RX_SELECT_INPUT>
#### iomuxc.lpuart3_rx_select_input
<link=p.IOMUXC.LPUART3_RX_SELECT_INPUT>
#### p.iomuxc.lpuart4_tx_select_input
<link=p.IOMUXC.LPUART4_TX_SELECT_INPUT>
#### p.IOMUXC.LPUART5_TX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f854c[0m (0x401f8000 + 0x054c)
LPUART5_TX_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_23_ALT2 :
         Selecting Pad: GPIO_EMC_23 for Mode: ALT2
      0x1 - GPIO_B1_12_ALT1 :
         Selecting Pad: GPIO_B1_12 for Mode: ALT1
</lang>
#### iomuxc.lpuart5_tx_select_input
<link=p.IOMUXC.LPUART5_TX_SELECT_INPUT>
#### p.iomuxc.lpuart7_rx_select_input
<link=p.IOMUXC.LPUART7_RX_SELECT_INPUT>
#### IOMUXC.LPUART8_RX_SELECT_INPUT
<link=p.IOMUXC.LPUART8_RX_SELECT_INPUT>
#### IOMUXC.QTIMER3_TIMER0_SELECT_INPUT
<link=p.IOMUXC.QTIMER3_TIMER0_SELECT_INPUT>
#### p.IOMUXC.QTIMER3_TIMER3_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8588[0m (0x401f8000 + 0x0588)
QTIMER3_TIMER3_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_18_ALT4 :
         Selecting Pad: GPIO_EMC_18 for Mode: ALT4
      0x1 - GPIO_AD_B1_03_ALT1 :
         Selecting Pad: GPIO_AD_B1_03 for Mode: ALT1
      0x2 - GPIO_B1_10_ALT1 :
         Selecting Pad: GPIO_B1_10 for Mode: ALT1
</lang>
#### p.IOMUXC.SAI1_RX_BCLK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8590[0m (0x401f8000 + 0x0590)
SAI1_RX_BCLK_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_05_ALT3 :
         Selecting Pad: GPIO_SD_B1_05 for Mode: ALT3
      0x1 - GPIO_AD_B1_11_ALT3 :
         Selecting Pad: GPIO_AD_B1_11 for Mode: ALT3
      0x2 - GPIO_B0_15_ALT3 :
         Selecting Pad: GPIO_B0_15 for Mode: ALT3
</lang>
#### p.iomuxc.sai1_rx_bclk_select_input
<link=p.IOMUXC.SAI1_RX_BCLK_SELECT_INPUT>
#### IOMUXC.SAI1_RX_DATA0_SELECT_INPUT
<link=p.IOMUXC.SAI1_RX_DATA0_SELECT_INPUT>
#### IOMUXC.SAI1_RX_DATA1_SELECT_INPUT
<link=p.IOMUXC.SAI1_RX_DATA1_SELECT_INPUT>
#### iomuxc.sai1_tx_sync_select_input
<link=p.IOMUXC.SAI1_TX_SYNC_SELECT_INPUT>
#### iomuxc.usdhc1_cd_b_select_input
<link=p.IOMUXC.USDHC1_CD_B_SELECT_INPUT>
#### IOMUXC.USDHC1_WP_SELECT_INPUT
<link=p.IOMUXC.USDHC1_WP_SELECT_INPUT>
#### p.IOMUXC.USDHC2_DATA2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f85f0[0m (0x401f8000 + 0x05f0)
USDHC2_DATA2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_01_ALT0 :
         Selecting Pad: GPIO_SD_B1_01 for Mode: ALT0
      0x1 - GPIO_AD_B1_06_ALT6 :
         Selecting Pad: GPIO_AD_B1_06 for Mode: ALT6
</lang>
#### p.iomuxc.xbar1_in04_select_input
<link=p.IOMUXC.XBAR1_IN04_SELECT_INPUT>
#### p.iomuxc.xbar1_in06_select_input
<link=p.IOMUXC.XBAR1_IN06_SELECT_INPUT>
#### iomuxc.xbar1_in24_select_input
<link=p.IOMUXC.XBAR1_IN24_SELECT_INPUT>
#### p.iomuxc.xbar1_in14_select_input
<link=p.IOMUXC.XBAR1_IN14_SELECT_INPUT>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_01
<lang=dft>
 (rw)  [1;33m0x401f8660[0m (0x401f8000 + 0x0660)
SW_MUX_CTL_PAD_GPIO_SPI_B0_01 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_B_SCLK of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_01
</lang>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_03>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_06>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_06>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_03
<lang=dft>
 (rw)  [1;33m0x401f86c0[0m (0x401f8000 + 0x06c0)
SW_PAD_CTL_PAD_GPIO_SPI_B0_03 SW PAD Control Register
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
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_05>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_05>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_04
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_04>
#### p.iomuxc.enet2_ipg_clk_rmii_select_input
<link=p.IOMUXC.ENET2_IPG_CLK_RMII_SELECT_INPUT>
#### p.IOMUXC.FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f872c[0m (0x401f8000 + 0x072c)
FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SPI_B1_00_ALT0 :
         Selecting Pad: GPIO_SPI_B1_00 for Mode: ALT0
      0x1 - GPIO_EMC_23_ALT8 :
         Selecting Pad: GPIO_EMC_23 for Mode: ALT8
      0x2 - GPIO_SPI_B0_09_ALT0 :
         Selecting Pad: GPIO_SPI_B0_09 for Mode: ALT0
</lang>
#### iomuxc.flexspi2_ipp_ind_sck_fa_select_input
<link=p.IOMUXC.FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT>
#### iomuxc.gpt2_ipp_ind_capin2_select_input
<link=p.IOMUXC.GPT2_IPP_IND_CAPIN2_SELECT_INPUT>
#### p.iomuxc.gpt2_ipp_ind_clkin_select_input
<link=p.IOMUXC.GPT2_IPP_IND_CLKIN_SELECT_INPUT>
#### p.iomuxc.canfd_ipp_ind_canrx_select_input
<link=p.IOMUXC.CANFD_IPP_IND_CANRX_SELECT_INPUT>
#### p.kpp
<link=p.KPP>
#### kpp.kpcr
<link=p.KPP.KPCR>
#### FLEXSPI.INTEN
<link=p.FLEXSPI.INTEN>
#### flexspi.intr
<link=p.FLEXSPI.INTR>
#### flexspi.ahbrxbuf0cr0
<link=p.FLEXSPI.AHBRXBUF0CR0>
#### flexspi.flshb2cr0
<link=p.FLEXSPI.FLSHB2CR0>
#### flexspi.iprxfcr
<link=p.FLEXSPI.IPRXFCR>
#### p.flexspi.ahbspndsts
<link=p.FLEXSPI.AHBSPNDSTS>
#### p.FLEXSPI.RFDR[3]
<lang=dft>
 (ro)  [1;33m0x402a810c[0m (0x402a8000 + 0x010c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.FLEXSPI.RFDR[8]
<lang=dft>
 (ro)  [1;33m0x402a8120[0m (0x402a8000 + 0x0120)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI.RFDR[14]
<link=p.FLEXSPI.RFDR[14]>
#### FLEXSPI.RFDR[19]
<link=p.FLEXSPI.RFDR[19]>
#### p.FLEXSPI.RFDR[20]
<lang=dft>
 (ro)  [1;33m0x402a8150[0m (0x402a8000 + 0x0150)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi.rfdr[21]
<link=p.FLEXSPI.RFDR[21]>
#### flexspi.rfdr[21]
<link=p.FLEXSPI.RFDR[21]>
#### flexspi.rfdr[24]
<link=p.FLEXSPI.RFDR[24]>
#### p.flexspi.rfdr[31]
<link=p.FLEXSPI.RFDR[31]>
#### FLEXSPI.TFDR[0]
<link=p.FLEXSPI.TFDR[0]>
#### flexspi.tfdr[1]
<link=p.FLEXSPI.TFDR[1]>
#### p.flexspi.tfdr[3]
<link=p.FLEXSPI.TFDR[3]>
#### p.FLEXSPI.TFDR[4]
<lang=dft>
 (wo)  [1;33m0x402a8190[0m (0x402a8000 + 0x0190)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi.tfdr[6]
<link=p.FLEXSPI.TFDR[6]>
#### p.flexspi.tfdr[9]
<link=p.FLEXSPI.TFDR[9]>
#### FLEXSPI.TFDR[12]
<link=p.FLEXSPI.TFDR[12]>
#### flexspi.tfdr[18]
<link=p.FLEXSPI.TFDR[18]>
#### FLEXSPI.TFDR[18]
<link=p.FLEXSPI.TFDR[18]>
#### p.FLEXSPI.TFDR[23]
<lang=dft>
 (wo)  [1;33m0x402a81dc[0m (0x402a8000 + 0x01dc)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI.TFDR[29]
<link=p.FLEXSPI.TFDR[29]>
#### FLEXSPI.LUT[1]
<link=p.FLEXSPI.LUT[1]>
#### FLEXSPI.LUT[4]
<link=p.FLEXSPI.LUT[4]>
#### p.FLEXSPI.LUT[9]
<lang=dft>
 (rw)  [1;33m0x402a8224[0m (0x402a8000 + 0x0224)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[13]
<link=p.FLEXSPI.LUT[13]>
#### flexspi.lut[20]
<link=p.FLEXSPI.LUT[20]>
#### p.flexspi.lut[21]
<link=p.FLEXSPI.LUT[21]>
#### FLEXSPI.LUT[25]
<link=p.FLEXSPI.LUT[25]>
#### FLEXSPI.LUT[35]
<link=p.FLEXSPI.LUT[35]>
#### p.flexspi.lut[43]
<link=p.FLEXSPI.LUT[43]>
#### p.FLEXSPI.LUT[52]
<lang=dft>
 (rw)  [1;33m0x402a82d0[0m (0x402a8000 + 0x02d0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[53]
<link=p.FLEXSPI.LUT[53]>
#### p.flexspi.lut[54]
<link=p.FLEXSPI.LUT[54]>
#### p.FLEXSPI.LUT[57]
<lang=dft>
 (rw)  [1;33m0x402a82e4[0m (0x402a8000 + 0x02e4)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi2
<link=p.FLEXSPI2>
#### flexspi2.mcr0
<link=p.FLEXSPI2.MCR0>
#### p.FLEXSPI2.AHBCR
<lang=dft>
 (rw)  [1;33m0x402a400c[0m (0x402a4000 + 0x000c)
AHB Bus Control Register
 (rw) (01)  [0;32mAPAREN[0m  - [00:00] -  Parallel mode enabled for AHB triggered Command (both read and write) .
      0 - APAREN_0 :
         Flash will be accessed in Individual mode.
      0x1 - APAREN_1 :
         Flash will be accessed in Parallel mode.
 (rw) (01)  [0;32mCACHABLEEN[0m  - [03:03] -  Enable AHB bus cachable read access support.
      0 - CACHABLEEN_0 :
         Disabled. When there is AHB bus cachable read access, FlexSPI will not 
         check whether it hit AHB TX Buffer.
      0x1 - CACHABLEEN_1 :
         Enabled. When there is AHB bus cachable read access, FlexSPI will check
          whether it hit AHB TX Buffer first.
 (rw) (01)  [0;32mBUFFERABLEEN[0m  - [04:04] -  Enable AHB bus bufferable write access support. This field affects the last bea
 t of AHB write access, refer for more details about AHB bufferable write.
      0 - BUFFERABLEEN_0 :
         Disabled. For all AHB write access (no matter bufferable or non-buffera
         ble ), FlexSPI will return AHB Bus ready after all data is transmitted 
         to External device and AHB command finished.
      0x1 - BUFFERABLEEN_1 :
         Enabled. For AHB bufferable write access, FlexSPI will return AHB Bus r
         eady when the AHB command is granted by arbitrator and will not wait fo
         r AHB command finished.
 (rw) (01)  [0;32mPREFETCHEN[0m  - [05:05] -  AHB Read Prefetch Enable.
 (rw) (01)  [0;32mREADADDROPT[0m  - [06:06] -  AHB Read Address option bit. This option bit is intend to remove AHB burst star
 t address alignment limitation.
      0 - READADDROPT_0 :
         There is AHB read burst start address alignment limitation when flash i
         s accessed in parallel mode or flash is wordaddressable.
      0x1 - READADDROPT_1 :
         There is no AHB read burst start address alignment limitation. FlexSPI 
         will fetch more datas than AHB burst required to meet the alignment req
         uirement.
</lang>
#### FLEXSPI2.AHBRXBUF1CR0
<link=p.FLEXSPI2.AHBRXBUF1CR0>
#### flexspi2.flsha2cr0
<link=p.FLEXSPI2.FLSHA2CR0>
#### FLEXSPI2.FLSHCR2A2
<link=p.FLEXSPI2.FLSHCR2A2>
#### flexspi2.flshcr2b2
<link=p.FLEXSPI2.FLSHCR2B2>
#### p.flexspi2.flshcr4
<link=p.FLEXSPI2.FLSHCR4>
#### p.FLEXSPI2.IPCR1
<lang=dft>
 (rw)  [1;33m0x402a40a4[0m (0x402a4000 + 0x00a4)
IP Control Register 1
 (rw) (16)  [0;32mIDATSZ[0m  - [15:00] -  Flash Read/Program Data Size (in Bytes) for IP command.
 (rw) (04)  [0;32mISEQID[0m  - [19:16] -  Sequence Index in LUT for IP command.
 (rw) (03)  [0;32mISEQNUM[0m  - [26:24] -  Sequence Number for IP command: ISEQNUM+1.
 (rw) (01)  [0;32mIPAREN[0m  - [31:31] -  Parallel mode Enabled for IP command.
      0 - IPAREN_0 :
         Flash will be accessed in Individual mode.
      0x1 - IPAREN_1 :
         Flash will be accessed in Parallel mode.
</lang>
#### flexspi2.sts1
<link=p.FLEXSPI2.STS1>
#### flexspi2.rfdr[3]
<link=p.FLEXSPI2.RFDR[3]>
#### FLEXSPI2.RFDR[3]
<link=p.FLEXSPI2.RFDR[3]>
#### p.FLEXSPI2.RFDR[6]
<lang=dft>
 (ro)  [1;33m0x402a4118[0m (0x402a4000 + 0x0118)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### flexspi2.rfdr[9]
<link=p.FLEXSPI2.RFDR[9]>
#### p.FLEXSPI2.RFDR[11]
<lang=dft>
 (ro)  [1;33m0x402a412c[0m (0x402a4000 + 0x012c)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI2.RFDR[17]
<link=p.FLEXSPI2.RFDR[17]>
#### FLEXSPI2.RFDR[22]
<link=p.FLEXSPI2.RFDR[22]>
#### flexspi2.rfdr[23]
<link=p.FLEXSPI2.RFDR[23]>
#### p.flexspi2.rfdr[27]
<link=p.FLEXSPI2.RFDR[27]>
#### p.flexspi2.tfdr[5]
<link=p.FLEXSPI2.TFDR[5]>
#### flexspi2.tfdr[7]
<link=p.FLEXSPI2.TFDR[7]>
#### FLEXSPI2.TFDR[7]
<link=p.FLEXSPI2.TFDR[7]>
#### p.FLEXSPI2.TFDR[9]
<lang=dft>
 (wo)  [1;33m0x402a41a4[0m (0x402a4000 + 0x01a4)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI2.TFDR[16]
<link=p.FLEXSPI2.TFDR[16]>
#### p.FLEXSPI2.TFDR[17]
<lang=dft>
 (wo)  [1;33m0x402a41c4[0m (0x402a4000 + 0x01c4)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI2.TFDR[22]
<lang=dft>
 (wo)  [1;33m0x402a41d8[0m (0x402a4000 + 0x01d8)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi2.tfdr[24]
<link=p.FLEXSPI2.TFDR[24]>
#### p.FLEXSPI2.TFDR[31]
<lang=dft>
 (wo)  [1;33m0x402a41fc[0m (0x402a4000 + 0x01fc)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI2.LUT[0]
<lang=dft>
 (rw)  [1;33m0x402a4200[0m (0x402a4000 + 0x0200)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi2.lut[8]
<link=p.FLEXSPI2.LUT[8]>
#### p.flexspi2.lut[10]
<link=p.FLEXSPI2.LUT[10]>
#### p.flexspi2.lut[22]
<link=p.FLEXSPI2.LUT[22]>
#### p.FLEXSPI2.LUT[25]
<lang=dft>
 (rw)  [1;33m0x402a4264[0m (0x402a4000 + 0x0264)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[31]
<link=p.FLEXSPI2.LUT[31]>
#### p.flexspi2.lut[35]
<link=p.FLEXSPI2.LUT[35]>
#### p.FLEXSPI2.LUT[36]
<lang=dft>
 (rw)  [1;33m0x402a4290[0m (0x402a4000 + 0x0290)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUT[39]
<link=p.FLEXSPI2.LUT[39]>
#### flexspi2.lut[40]
<link=p.FLEXSPI2.LUT[40]>
#### FLEXSPI2.LUT[42]
<link=p.FLEXSPI2.LUT[42]>
#### FLEXSPI2.LUT[48]
<link=p.FLEXSPI2.LUT[48]>
#### FLEXSPI2.LUT[55]
<link=p.FLEXSPI2.LUT[55]>
#### FLEXSPI2.LUT[63]
<link=p.FLEXSPI2.LUT[63]>
#### p.pxp.out_ctrl_tog
<link=p.PXP.OUT_CTRL_TOG>
#### PXP.OUT_CTRL_TOG
<link=p.PXP.OUT_CTRL_TOG>
#### PXP.OUT_PS_LRC
<link=p.PXP.OUT_PS_LRC>
#### pxp.ps_ctrl
<link=p.PXP.PS_CTRL>
#### p.PXP.PS_UBUF
<lang=dft>
 (rw)  [1;33m0x402b40d0[0m (0x402b4000 + 0x00d0)
PS U/Cb or 2 Plane UV Input Buffer Address
 (rw) (32)  [0;32mADDR[0m  - [31:00] -  Address pointer for the PS U/Cb or 2 plane UV Chroma input buffer.
</lang>
#### p.pxp.ps_offset
<link=p.PXP.PS_OFFSET>
#### pxp.as_clrkeylow
<link=p.PXP.AS_CLRKEYLOW>
#### PXP.CSC1_COEF0
<link=p.PXP.CSC1_COEF0>
#### pxp.csc1_coef2
<link=p.PXP.CSC1_COEF2>
#### PXP.POWER
<link=p.PXP.POWER>
#### p.PXP.PORTER_DUFF_CTRL
<lang=dft>
 (rw)  [1;33m0x402b4440[0m (0x402b4000 + 0x0440)
PXP Alpha Engine A Control Register.
 (rw) (01)  [0;32mPOTER_DUFF_ENABLE[0m  - [00:00] -  poter_duff enable
 (rw) (02)  [0;32mS0_S1_FACTOR_MODE[0m  - [02:01] -  s0 to s1 factor mode
 (rw) (02)  [0;32mS0_GLOBAL_ALPHA_MODE[0m  - [04:03] -  s0 global alpha mode
 (rw) (01)  [0;32mS0_ALPHA_MODE[0m  - [05:05] -  s0 alpha mode
 (rw) (01)  [0;32mS0_COLOR_MODE[0m  - [06:06] -  s0 color mode
 (rw) (02)  [0;32mS1_S0_FACTOR_MODE[0m  - [09:08] -  s1 to s0 factor mode
 (rw) (02)  [0;32mS1_GLOBAL_ALPHA_MODE[0m  - [11:10] -  s1 global alpha mode
 (rw) (01)  [0;32mS1_ALPHA_MODE[0m  - [12:12] -  s1 alpha mode
 (rw) (01)  [0;32mS1_COLOR_MODE[0m  - [13:13] -  s1 color mode
 (rw) (08)  [0;32mS0_GLOBAL_ALPHA[0m  - [23:16] -  s0 global alpha
 (rw) (08)  [0;32mS1_GLOBAL_ALPHA[0m  - [31:24] -  s1 global alpha
</lang>
#### p.lcdif.ctrl2_tog
<link=p.LCDIF.CTRL2_TOG>
#### p.lcdif.vdctrl0_set
<link=p.LCDIF.VDCTRL0_SET>
#### p.LCDIF.VDCTRL1
<lang=dft>
 (rw)  [1;33m0x402b8080[0m (0x402b8000 + 0x0080)
LCDIF VSYNC Mode and Dotclk Mode Control Register1
 (rw) (32)  [0;32mVSYNC_PERIOD[0m  - [31:00] -  Total number of units between two positive or two negative edges of the VSYNC s
 ignal
</lang>
#### LCDIF.VDCTRL2
<link=p.LCDIF.VDCTRL2>
#### lcdif.crc_stat
<link=p.LCDIF.CRC_STAT>
#### p.LCDIF.STAT
<lang=dft>
 (ro)  [1;33m0x402b81b0[0m (0x402b8000 + 0x01b0)
LCD Interface Status Register
 (ro) (09)  [0;32mLFIFO_COUNT[0m  - [08:00] -  Read only view of the current count in Latency buffer (LFIFO).
 (ro) (01)  [0;32mTXFIFO_EMPTY[0m  - [26:26] -  Read only view of the signals that indicates LCD TXFIFO is empty.
 (ro) (01)  [0;32mTXFIFO_FULL[0m  - [27:27] -  Read only view of the signals that indicates LCD TXFIFO is full.
 (ro) (01)  [0;32mLFIFO_EMPTY[0m  - [28:28] -  Read only view of the signals that indicates LCD LFIFO is empty.
 (ro) (01)  [0;32mLFIFO_FULL[0m  - [29:29] -  Read only view of the signals that indicates LCD LFIFO is full.
 (ro) (01)  [0;32mDMA_REQ[0m  - [30:30] -  Reflects the current state of the DMA Request line for the LCDIF
 (ro) (01)  [0;32mPRESENT[0m  - [31:31] -  0: LCDIF not present on this product 1: LCDIF is present.
</lang>
#### LCDIF.PIGEONCTRL1_CLR
<link=p.LCDIF.PIGEONCTRL1_CLR>
#### p.lcdif.pigeonctrl2_clr
<link=p.LCDIF.PIGEONCTRL2_CLR>
#### LCDIF.PIGEON_0_1
<link=p.LCDIF.PIGEON_0_1>
#### lcdif.pigeon_0_2
<link=p.LCDIF.PIGEON_0_2>
#### p.lcdif.pigeon_1_2
<link=p.LCDIF.PIGEON_1_2>
#### lcdif.pigeon_2_1
<link=p.LCDIF.PIGEON_2_1>
#### p.lcdif.pigeon_3_0
<link=p.LCDIF.PIGEON_3_0>
#### p.LCDIF.PIGEON_5_1
<lang=dft>
 (rw)  [1;33m0x402b8950[0m (0x402b8000 + 0x0950)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### lcdif.pigeon_7_1
<link=p.LCDIF.PIGEON_7_1>
#### p.LCDIF.PIGEON_10_1
<lang=dft>
 (rw)  [1;33m0x402b8a90[0m (0x402b8000 + 0x0a90)
Panel Interface Signal Generator Register
 (rw) (16)  [0;32mSET_CNT[0m  - [15:00] -  Assert signal output when counter match this value
      0 - START_ACTIVE :
         Start as active
 (rw) (16)  [0;32mCLR_CNT[0m  - [31:16] -  Deassert signal output when counter match this value
      0 - CLEAR_USING_MASK :
         Keep active until mask off
</lang>
#### LCDIF.PIGEON_10_2
<link=p.LCDIF.PIGEON_10_2>
#### CSI.CSICR2
<link=p.CSI.CSICR2>
#### p.CSI.CSIRXCNT
<lang=dft>
 (rw)  [1;33m0x402bc014[0m (0x402bc000 + 0x0014)
CSI RX Count Register
 (rw) (22)  [0;32mRXCNT[0m  - [21:00] -  RxFIFO Count
</lang>
#### p.CSI.CSISR
<lang=dft>
 (rw)  [1;33m0x402bc018[0m (0x402bc000 + 0x0018)
CSI Status Register
 (rw) (01)  [0;32mDRDY[0m  - [00:00] -  RXFIFO Data Ready
      0 - DRDY_0 :
         No data (word) is ready
      0x1 - DRDY_1 :
         At least 1 datum (word) is ready in RXFIFO.
 (rw) (01)  [0;32mECC_INT[0m  - [01:01] -  CCIR Error Interrupt
      0 - ECC_INT_0 :
         No error detected
      0x1 - ECC_INT_1 :
         Error is detected in CCIR coding
 (rw) (01)  [0;32mHRESP_ERR_INT[0m  - [07:07] -  Hresponse Error Interrupt Status
      0 - HRESP_ERR_INT_0 :
         No hresponse error.
      0x1 - HRESP_ERR_INT_1 :
         Hresponse error is detected.
 (rw) (01)  [0;32mCOF_INT[0m  - [13:13] -  Change Of Field Interrupt Status
      0 - COF_INT_0 :
         Video field has no change.
      0x1 - COF_INT_1 :
         Change of video field is detected.
 (rw) (01)  [0;32mF1_INT[0m  - [14:14] -  CCIR Field 1 Interrupt Status
      0 - F1_INT_0 :
         Field 1 of video is not detected.
      0x1 - F1_INT_1 :
         Field 1 of video is about to start.
 (rw) (01)  [0;32mF2_INT[0m  - [15:15] -  CCIR Field 2 Interrupt Status
      0 - F2_INT_0 :
         Field 2 of video is not detected
      0x1 - F2_INT_1 :
         Field 2 of video is about to start
 (rw) (01)  [0;32mSOF_INT[0m  - [16:16] -  Start of Frame Interrupt Status. Indicates when SOF is detected. (Cleared by wr
 iting 1)
      0 - SOF_INT_0 :
         SOF is not detected.
      0x1 - SOF_INT_1 :
         SOF is detected.
 (rw) (01)  [0;32mEOF_INT[0m  - [17:17] -  End of Frame (EOF) Interrupt Status. Indicates when EOF is detected. (Cleared b
 y writing 1)
      0 - EOF_INT_0 :
         EOF is not detected.
      0x1 - EOF_INT_1 :
         EOF is detected.
 (rw) (01)  [0;32mRxFF_INT[0m  - [18:18] -  RXFIFO Full Interrupt Status
      0 - RxFF_INT_0 :
         RxFIFO is not full.
      0x1 - RxFF_INT_1 :
         RxFIFO is full.
 (rw) (01)  [0;32mDMA_TSF_DONE_FB1[0m  - [19:19] -  DMA Transfer Done in Frame Buffer1
      0 - DMA_TSF_DONE_FB1_0 :
         DMA transfer is not completed.
      0x1 - DMA_TSF_DONE_FB1_1 :
         DMA transfer is completed.
 (rw) (01)  [0;32mDMA_TSF_DONE_FB2[0m  - [20:20] -  DMA Transfer Done in Frame Buffer2
      0 - DMA_TSF_DONE_FB2_0 :
         DMA transfer is not completed.
      0x1 - DMA_TSF_DONE_FB2_1 :
         DMA transfer is completed.
 (rw) (01)  [0;32mSTATFF_INT[0m  - [21:21] -  STATFIFO Full Interrupt Status
      0 - STATFF_INT_0 :
         STATFIFO is not full.
      0x1 - STATFF_INT_1 :
         STATFIFO is full.
 (rw) (01)  [0;32mDMA_TSF_DONE_SFF[0m  - [22:22] -  DMA Transfer Done from StatFIFO
      0 - DMA_TSF_DONE_SFF_0 :
         DMA transfer is not completed.
      0x1 - DMA_TSF_DONE_SFF_1 :
         DMA transfer is completed.
 (rw) (01)  [0;32mRF_OR_INT[0m  - [24:24] -  RxFIFO Overrun Interrupt Status
      0 - RF_OR_INT_0 :
         RXFIFO has not overflowed.
      0x1 - RF_OR_INT_1 :
         RXFIFO has overflowed.
 (rw) (01)  [0;32mSF_OR_INT[0m  - [25:25] -  STATFIFO Overrun Interrupt Status
      0 - SF_OR_INT_0 :
         STATFIFO has not overflowed.
      0x1 - SF_OR_INT_1 :
         STATFIFO has overflowed.
 (rw) (01)  [0;32mDMA_FIELD1_DONE[0m  - [26:26] -  When DMA field 0 is complete, this bit will be set to 1(clear by writing 1).
 (rw) (01)  [0;32mDMA_FIELD0_DONE[0m  - [27:27] -  When DMA field 0 is complete, this bit will be set to 1(clear by writing 1).
 (rw) (01)  [0;32mBASEADDR_CHHANGE_ERROR[0m  - [28:28] -  When using base address switching enable, this bit will be 1 when switching occ
 ur before DMA complete
</lang>
#### csi.csiimag_para
<link=p.CSI.CSIIMAG_PARA>
#### CSI.CSICR18
<link=p.CSI.CSICR18>
#### p.USDHC1.CMD_XFR_TYP
<lang=dft>
 (rw)  [1;33m0x402c000c[0m (0x402c0000 + 0x000c)
Command Transfer Type
 (rw) (02)  [0;32mRSPTYP[0m  - [17:16] -  Response Type Select
      0 - RSPTYP_0 :
         No Response
      0x1 - RSPTYP_1 :
         Response Length 136
      0x2 - RSPTYP_2 :
         Response Length 48
      0x3 - RSPTYP_3 :
         Response Length 48, check Busy after response
 (rw) (01)  [0;32mCCCEN[0m  - [19:19] -  Command CRC Check Enable
      0 - CCCEN_0 :
         Disable
      0x1 - CCCEN_1 :
         Enable
 (rw) (01)  [0;32mCICEN[0m  - [20:20] -  Command Index Check Enable
      0 - CICEN_0 :
         Disable
      0x1 - CICEN_1 :
         Enable
 (rw) (01)  [0;32mDPSEL[0m  - [21:21] -  Data Present Select
      0 - DPSEL_0 :
         No Data Present
      0x1 - DPSEL_1 :
         Data Present
 (rw) (02)  [0;32mCMDTYP[0m  - [23:22] -  Command Type
      0 - CMDTYP_0 :
         Normal Other commands
      0x1 - CMDTYP_1 :
         Suspend CMD52 for writing Bus Suspend in CCCR
      0x2 - CMDTYP_2 :
         Resume CMD52 for writing Function Select in CCCR
      0x3 - CMDTYP_3 :
         Abort CMD12, CMD52 for writing I/O Abort in CCCR
 (rw) (06)  [0;32mCMDINX[0m  - [29:24] -  Command Index
</lang>
#### usdhc1.cmd_rsp1
<link=p.USDHC1.CMD_RSP1>
#### p.USDHC1.INT_SIGNAL_EN
<lang=dft>
 (rw)  [1;33m0x402c0038[0m (0x402c0000 + 0x0038)
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
#### p.usdhc1.mix_ctrl
<link=p.USDHC1.MIX_CTRL>
#### p.usdhc1.force_event
<link=p.USDHC1.FORCE_EVENT>
#### p.usdhc1.adma_sys_addr
<link=p.USDHC1.ADMA_SYS_ADDR>
#### p.usdhc1.clk_tune_ctrl_status
<link=p.USDHC1.CLK_TUNE_CTRL_STATUS>
#### p.usdhc2
<link=p.USDHC2>
#### p.USDHC2.DATA_BUFF_ACC_PORT
<lang=dft>
 (rw)  [1;33m0x402c4020[0m (0x402c4000 + 0x0020)
Data Buffer Access Port
 (rw) (32)  [0;32mDATCONT[0m  - [31:00] -  Data Content
</lang>
#### p.usdhc2.sys_ctrl
<link=p.USDHC2.SYS_CTRL>
#### USDHC2.WTMK_LVL
<link=p.USDHC2.WTMK_LVL>
#### p.usdhc2.dll_ctrl
<link=p.USDHC2.DLL_CTRL>
#### p.USDHC2.VEND_SPEC
<lang=dft>
 (rw)  [1;33m0x402c40c0[0m (0x402c4000 + 0x00c0)
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
#### p.ENET
<lang=dft>
base: 0x402d8000
ATCOR           ATCR            ATINC           ATOFF           
ATPER           ATSTMP          ATVR            ECR             
EIMR            EIR             FTRL            GALR            
GAUR            IALR            IAUR            IEEE_R_ALIGN    
IEEE_R_CRC      IEEE_R_DROP     IEEE_R_FDXFC    IEEE_R_FRAME_OK 
IEEE_R_MACERR   IEEE_R_OCTETS_OK  IEEE_T_1COL     IEEE_T_CSERR    
IEEE_T_DEF      IEEE_T_DROP     IEEE_T_EXCOL    IEEE_T_FDXFC    
IEEE_T_FRAME_OK IEEE_T_LCOL     IEEE_T_MACERR   IEEE_T_MCOL     
IEEE_T_OCTETS_OK  IEEE_T_SQE      MIBC            MMFR            
MRBR            MSCR            OPD             PALR            
PAUR            RACC            RAEM            RAFL            
RCR             RDAR            RDSR            RMON_R_BC_PKT   
RMON_R_CRC_ALIGN  RMON_R_FRAG     RMON_R_JAB      RMON_R_MC_PKT   
RMON_R_OCTETS   RMON_R_OVERSIZE RMON_R_P1024TO2047  RMON_R_P128TO255  
RMON_R_P256TO511  RMON_R_P512TO1023  RMON_R_P64      RMON_R_P65TO127 
RMON_R_PACKETS  RMON_R_P_GTE2048  RMON_R_RESVD_0  RMON_R_UNDERSIZE  
RMON_T_BC_PKT   RMON_T_COL      RMON_T_CRC_ALIGN  RMON_T_DROP     
RMON_T_FRAG     RMON_T_JAB      RMON_T_MC_PKT   RMON_T_OCTETS   
RMON_T_OVERSIZE RMON_T_P1024TO2047  RMON_T_P128TO255  RMON_T_P256TO511  
RMON_T_P512TO1023  RMON_T_P64      RMON_T_P65TO127 RMON_T_PACKETS  
RMON_T_P_GTE2048  RMON_T_UNDERSIZE  RSEM            RSFL            
RXIC            TACC            TAEM            TAFL            
TCCR0           TCCR1           TCCR2           TCCR3           
TCR             TCSR0           TCSR1           TCSR2           
TCSR3           TDAR            TDSR            TFWR            
TGSR            TIPG            TSEM            TXIC            
输入 p.ENET.{reg_name} 以查看寄存器的详细信息
type p.ENET.{reg_name} to check details of registers
</lang>
#### ENET.RDAR
<link=p.ENET.RDAR>
#### enet.ecr
<link=p.ENET.ECR>
#### p.ENET.RCR
<lang=dft>
 (rw)  [1;33m0x402d8084[0m (0x402d8000 + 0x0084)
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
#### p.ENET.PAUR
<lang=dft>
 (rw)  [1;33m0x402d80e8[0m (0x402d8000 + 0x00e8)
Physical Address Upper Register
 (ro) (16)  [0;32mTYPE[0m  - [15:00] -  Type Field In PAUSE Frames
 (rw) (16)  [0;32mPADDR2[0m  - [31:16] -  Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address used f
 or exact match, and the source address field in PAUSE frames
</lang>
#### enet.txic
<link=p.ENET.TXIC>
#### ENET.TDSR
<link=p.ENET.TDSR>
#### ENET.RSEM
<link=p.ENET.RSEM>
#### p.ENET.RAEM
<lang=dft>
 (rw)  [1;33m0x402d8198[0m (0x402d8000 + 0x0198)
Receive FIFO Almost Empty Threshold
 (rw) (08)  [0;32mRX_ALMOST_EMPTY[0m  - [07:00] -  Value Of The Receive FIFO Almost Empty Threshold
</lang>
#### enet.rafl
<link=p.ENET.RAFL>
#### ENET.RMON_T_PACKETS
<link=p.ENET.RMON_T_PACKETS>
#### p.ENET.RMON_T_P64
<lang=dft>
 (ro)  [1;33m0x402d8228[0m (0x402d8000 + 0x0228)
Tx 64-Byte Packets Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of 64-byte transmit packets
</lang>
#### p.enet.rmon_t_p512to1023
<link=p.ENET.RMON_T_P512TO1023>
#### ENET.RMON_T_P_GTE2048
<link=p.ENET.RMON_T_P_GTE2048>
#### ENET.IEEE_T_1COL
<link=p.ENET.IEEE_T_1COL>
#### p.enet.ieee_t_excol
<link=p.ENET.IEEE_T_EXCOL>
#### p.ENET.IEEE_T_SQE
<lang=dft>
 (ro)  [1;33m0x402d826c[0m (0x402d8000 + 0x026c)
Reserved Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  This read-only field is reserved and always has the value 0
</lang>
#### p.enet.rmon_r_bc_pkt
<link=p.ENET.RMON_R_BC_PKT>
#### p.ENET.RMON_R_CRC_ALIGN
<lang=dft>
 (ro)  [1;33m0x402d8290[0m (0x402d8000 + 0x0290)
Rx Packets with CRC/Align Error Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive packets with CRC or align error
</lang>
#### enet.rmon_r_jab
<link=p.ENET.RMON_R_JAB>
#### ENET.RMON_R_P512TO1023
<link=p.ENET.RMON_R_P512TO1023>
#### enet.rmon_r_octets
<link=p.ENET.RMON_R_OCTETS>
#### p.ENET.TGSR
<lang=dft>
 (rw)  [1;33m0x402d8604[0m (0x402d8000 + 0x0604)
Timer Global Status Register
 (rw) (01)  [0;32mTF0[0m  - [00:00] -  Copy Of Timer Flag For Channel 0
      0 - TF0_0 :
         Timer Flag for Channel 0 is clear
      0x1 - TF0_1 :
         Timer Flag for Channel 0 is set
 (rw) (01)  [0;32mTF1[0m  - [01:01] -  Copy Of Timer Flag For Channel 1
      0 - TF1_0 :
         Timer Flag for Channel 1 is clear
      0x1 - TF1_1 :
         Timer Flag for Channel 1 is set
 (rw) (01)  [0;32mTF2[0m  - [02:02] -  Copy Of Timer Flag For Channel 2
      0 - TF2_0 :
         Timer Flag for Channel 2 is clear
      0x1 - TF2_1 :
         Timer Flag for Channel 2 is set
 (rw) (01)  [0;32mTF3[0m  - [03:03] -  Copy Of Timer Flag For Channel 3
      0 - TF3_0 :
         Timer Flag for Channel 3 is clear
      0x1 - TF3_1 :
         Timer Flag for Channel 3 is set
</lang>
#### p.enet.tcsr1
<link=p.ENET.TCSR1>
#### p.enet2.mscr
<link=p.ENET2.MSCR>
#### p.enet2.tcr
<link=p.ENET2.TCR>
#### enet2.ialr
<link=p.ENET2.IALR>
#### enet2.tdsr
<link=p.ENET2.TDSR>
#### enet2.rmon_t_drop
<link=p.ENET2.RMON_T_DROP>
#### p.enet2.rmon_t_bc_pkt
<link=p.ENET2.RMON_T_BC_PKT>
#### p.enet2.rmon_t_undersize
<link=p.ENET2.RMON_T_UNDERSIZE>
#### enet2.rmon_t_undersize
<link=p.ENET2.RMON_T_UNDERSIZE>
#### ENET2.RMON_T_UNDERSIZE
<link=p.ENET2.RMON_T_UNDERSIZE>
#### ENET2.RMON_T_OVERSIZE
<link=p.ENET2.RMON_T_OVERSIZE>
#### enet2.rmon_t_jab
<link=p.ENET2.RMON_T_JAB>
#### p.ENET2.RMON_T_COL
<lang=dft>
 (ro)  [1;33m0x402d4224[0m (0x402d4000 + 0x0224)
Tx Collision Count Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of transmit collisions
</lang>
#### enet2.rmon_t_p65to127
<link=p.ENET2.RMON_T_P65TO127>
#### p.enet2.rmon_t_p256to511
<link=p.ENET2.RMON_T_P256TO511>
#### ENET2.RMON_T_P512TO1023
<link=p.ENET2.RMON_T_P512TO1023>
#### ENET2.IEEE_T_1COL
<link=p.ENET2.IEEE_T_1COL>
#### p.enet2.ieee_t_cserr
<link=p.ENET2.IEEE_T_CSERR>
#### enet2.ieee_t_cserr
<link=p.ENET2.IEEE_T_CSERR>
#### enet2.ieee_t_fdxfc
<link=p.ENET2.IEEE_T_FDXFC>
#### ENET2.IEEE_T_FDXFC
<link=p.ENET2.IEEE_T_FDXFC>
#### p.ENET2.RMON_R_FRAG
<lang=dft>
 (ro)  [1;33m0x402d429c[0m (0x402d4000 + 0x029c)
Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive packets with less than 64 bytes and bad CRC
</lang>
#### enet2.rmon_r_frag
<link=p.ENET2.RMON_R_FRAG>
#### enet2.rmon_r_p64
<link=p.ENET2.RMON_R_P64>
#### p.ENET2.RMON_R_P65TO127
<lang=dft>
 (ro)  [1;33m0x402d42ac[0m (0x402d4000 + 0x02ac)
Rx 65- to 127-Byte Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of 65- to 127-byte recieve packets
</lang>
#### p.ENET2.ATOFF
<lang=dft>
 (rw)  [1;33m0x402d4408[0m (0x402d4000 + 0x0408)
Timer Offset Register
 (rw) (32)  [0;32mOFFSET[0m  - [31:00] -  Offset value for one-shot event generation
</lang>
#### enet2.atper
<link=p.ENET2.ATPER>
#### p.ENET2.ATCOR
<lang=dft>
 (rw)  [1;33m0x402d4410[0m (0x402d4000 + 0x0410)
Timer Correction Register
 (rw) (31)  [0;32mCOR[0m  - [30:00] -  Correction Counter Wrap-Around Value
</lang>
#### ENET2.TCSR0
<link=p.ENET2.TCSR0>
#### p.ENET2.TCCR2
<lang=dft>
 (rw)  [1;33m0x402d461c[0m (0x402d4000 + 0x061c)
Timer Compare Capture Register
 (rw) (32)  [0;32mTCC[0m  - [31:00] -  Timer Capture Compare
</lang>
#### p.usb1
<link=p.USB1>
#### p.USB1.ID
<lang=dft>
 (ro)  [1;33m0x402e0000[0m (0x402e0000 + 0x0000)
Identification register
 (ro) (06)  [0;32mID[0m  - [05:00] -  Configuration number
 (ro) (06)  [0;32mNID[0m  - [13:08] -  Complement version of ID
 (ro) (08)  [0;32mREVISION[0m  - [23:16] -  Revision number of the controller core.
</lang>
#### USB1.HWDEVICE
<link=p.USB1.HWDEVICE>
#### usb1.gptimer0ctrl
<link=p.USB1.GPTIMER0CTRL>
#### p.USB1.ENDPTNAKEN
<lang=dft>
 (rw)  [1;33m0x402e017c[0m (0x402e0000 + 0x017c)
Endpoint NAK Enable
 (rw) (08)  [0;32mEPRNE[0m  - [07:00] -  RX Endpoint NAK Enable - R/W
 (rw) (08)  [0;32mEPTNE[0m  - [23:16] -  TX Endpoint NAK Enable - R/W
</lang>
#### USB1.ENDPTCTRL0
<link=p.USB1.ENDPTCTRL0>
#### usb1.endptctrl3
<link=p.USB1.ENDPTCTRL3>
#### p.USB1.ENDPTCTRL7
<lang=dft>
 (rw)  [1;33m0x402e01dc[0m (0x402e0000 + 0x01dc)
Endpoint Control 7
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
#### p.usb2.id
<link=p.USB2.ID>
#### usb2.frindex
<link=p.USB2.FRINDEX>
#### p.USB2.DEVICEADDR
<lang=dft>
 (rw)  [1;33m0x402e0354[0m (0x402e0200 + 0x0154)
Device Address
 (rw) (01)  [0;32mUSBADRA[0m  - [24:24] -  Device Address Advance
 (rw) (07)  [0;32mUSBADR[0m  - [31:25] -  Device Address. These bits correspond to the USB device address
</lang>
#### USB2.TXFILLTUNING
<link=p.USB2.TXFILLTUNING>
#### usb2.endptnaken
<link=p.USB2.ENDPTNAKEN>
#### USB2.PORTSC1
<link=p.USB2.PORTSC1>
#### p.usb2.endptctrl2
<link=p.USB2.ENDPTCTRL2>
#### SEMC.BR3
<link=p.SEMC.BR3>
#### p.SEMC.BR6
<lang=dft>
 (rw)  [1;33m0x402f0028[0m (0x402f0000 + 0x0028)
Base Register 6 (For PSRAM device)
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
#### p.semc.sdramcr1
<link=p.SEMC.SDRAMCR1>
#### semc.sdramcr2
<link=p.SEMC.SDRAMCR2>
#### semc.nandcr1
<link=p.SEMC.NANDCR1>
#### SEMC.NORCR1
<link=p.SEMC.NORCR1>
#### semc.dbicr1
<link=p.SEMC.DBICR1>
#### p.SEMC.IPCR0
<lang=dft>
 (rw)  [1;33m0x402f0090[0m (0x402f0000 + 0x0090)
IP Command control register 0
 (rw) (32)  [0;32mSA[0m  - [31:00] -  Slave address
</lang>
#### SEMC.IPTXDAT
<link=p.SEMC.IPTXDAT>
#### semc.sts4
<link=p.SEMC.STS4>
#### SEMC.STS6
<link=p.SEMC.STS6>
#### p.semc.sts8
<link=p.SEMC.STS8>
#### p.semc.sts10
<link=p.SEMC.STS10>
#### p.dcp.channelctrl_set
<link=p.DCP.CHANNELCTRL_SET>
#### dcp.packet6
<link=p.DCP.PACKET6>
#### p.dcp.ch0stat
<link=p.DCP.CH0STAT>
#### p.dcp.ch1stat
<link=p.DCP.CH1STAT>
#### DCP.CH1STAT_SET
<link=p.DCP.CH1STAT_SET>
#### p.DCP.CH2CMDPTR
<lang=dft>
 (rw)  [1;33m0x402fc180[0m (0x402fc000 + 0x0180)
DCP channel 2 command pointer address register
 (rw) (32)  [0;32mADDR[0m  - [31:00] -  Pointer to the descriptor structure to be processed for channel 2.
</lang>
#### p.DCP.CH2STAT_SET
<lang=dft>
 (rw)  [1;33m0x402fc1a4[0m (0x402fc000 + 0x01a4)
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
#### DCP.CH2STAT_CLR
<link=p.DCP.CH2STAT_CLR>
#### p.DCP.CH2STAT_TOG
<lang=dft>
 (rw)  [1;33m0x402fc1ac[0m (0x402fc000 + 0x01ac)
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
#### DCP.CH2STAT_TOG
<link=p.DCP.CH2STAT_TOG>
#### dcp.ch2opts
<link=p.DCP.CH2OPTS>
#### dcp.ch2opts_tog
<link=p.DCP.CH2OPTS_TOG>
#### spdif.scr
<link=p.SPDIF.SCR>
#### SPDIF.SCR
<link=p.SPDIF.SCR>
#### SPDIF.SRCSH
<link=p.SPDIF.SRCSH>
#### p.spdif.str
<link=p.SPDIF.STR>
#### SPDIF.STR
<link=p.SPDIF.STR>
#### p.spdif.stc
<link=p.SPDIF.STC>
#### sai1.param
<link=p.SAI1.PARAM>
#### sai1.tcr2
<link=p.SAI1.TCR2>
#### p.sai1.tfr[1]
<link=p.SAI1.TFR[1]>
#### sai1.rcr3
<link=p.SAI1.RCR3>
#### p.SAI1.RCR4
<lang=dft>
 (rw)  [1;33m0x40384098[0m (0x40384000 + 0x0098)
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
#### SAI1.RDR[0]
<link=p.SAI1.RDR[0]>
#### sai2.tcr4
<link=p.SAI2.TCR4>
#### SAI2.TCR4
<link=p.SAI2.TCR4>
#### SAI2.TDR[0]
<link=p.SAI2.TDR[0]>
#### p.sai2.rdr[3]
<link=p.SAI2.RDR[3]>
#### sai2.rmr
<link=p.SAI2.RMR>
#### SAI3.TCR3
<link=p.SAI3.TCR3>
#### p.sai3.tdr[0]
<link=p.SAI3.TDR[0]>
#### sai3.tfr[2]
<link=p.SAI3.TFR[2]>
#### p.SAI3.RFR[0]
<lang=dft>
 (ro)  [1;33m0x4038c0c0[0m (0x4038c000 + 0x00c0)
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
#### sai3.rfr[1]
<link=p.SAI3.RFR[1]>
#### p.LPSPI1.FSR
<lang=dft>
 (ro)  [1;33m0x4039405c[0m (0x40394000 + 0x005c)
FIFO Status Register
 (ro) (05)  [0;32mTXCOUNT[0m  - [04:00] -  Transmit FIFO Count
 (ro) (05)  [0;32mRXCOUNT[0m  - [20:16] -  Receive FIFO Count
</lang>
#### p.lpspi1.rdr
<link=p.LPSPI1.RDR>
#### LPSPI2.PARAM
<link=p.LPSPI2.PARAM>
#### p.lpspi2.cfgr0
<link=p.LPSPI2.CFGR0>
#### LPSPI2.DMR0
<link=p.LPSPI2.DMR0>
#### p.LPSPI2.DMR1
<lang=dft>
 (rw)  [1;33m0x40398034[0m (0x40398000 + 0x0034)
Data Match Register 1
 (rw) (32)  [0;32mMATCH1[0m  - [31:00] -  Match 1 Value
</lang>
#### p.LPSPI2.TCR
<lang=dft>
 (rw)  [1;33m0x40398060[0m (0x40398000 + 0x0060)
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
#### lpspi2.tdr
<link=p.LPSPI2.TDR>
#### p.LPSPI2.RSR
<lang=dft>
 (ro)  [1;33m0x40398070[0m (0x40398000 + 0x0070)
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
#### p.lpspi3
<link=p.LPSPI3>
#### lpspi3.sr
<link=p.LPSPI3.SR>
#### LPSPI3.TDR
<link=p.LPSPI3.TDR>
#### LPSPI3.RSR
<link=p.LPSPI3.RSR>
#### lpspi4.sr
<link=p.LPSPI4.SR>
#### LPSPI4.DER
<link=p.LPSPI4.DER>
#### LPSPI4.TCR
<link=p.LPSPI4.TCR>
#### p.lpspi4.tdr
<link=p.LPSPI4.TDR>
#### p.ADC_ETC
<lang=dft>
base: 0x403b0000
CTRL            DMA_CTRL        DONE0_1_IRQ     DONE2_ERR_IRQ   
TRIG0_CHAIN_1_0 TRIG0_CHAIN_3_2 TRIG0_CHAIN_5_4 TRIG0_CHAIN_7_6 
TRIG0_COUNTER   TRIG0_CTRL      TRIG0_RESULT_1_0  TRIG0_RESULT_3_2  
TRIG0_RESULT_5_4  TRIG0_RESULT_7_6  TRIG1_CHAIN_1_0 TRIG1_CHAIN_3_2 
TRIG1_CHAIN_5_4 TRIG1_CHAIN_7_6 TRIG1_COUNTER   TRIG1_CTRL      
TRIG1_RESULT_1_0  TRIG1_RESULT_3_2  TRIG1_RESULT_5_4  TRIG1_RESULT_7_6  
TRIG2_CHAIN_1_0 TRIG2_CHAIN_3_2 TRIG2_CHAIN_5_4 TRIG2_CHAIN_7_6 
TRIG2_COUNTER   TRIG2_CTRL      TRIG2_RESULT_1_0  TRIG2_RESULT_3_2  
TRIG2_RESULT_5_4  TRIG2_RESULT_7_6  TRIG3_CHAIN_1_0 TRIG3_CHAIN_3_2 
TRIG3_CHAIN_5_4 TRIG3_CHAIN_7_6 TRIG3_COUNTER   TRIG3_CTRL      
TRIG3_RESULT_1_0  TRIG3_RESULT_3_2  TRIG3_RESULT_5_4  TRIG3_RESULT_7_6  
TRIG4_CHAIN_1_0 TRIG4_CHAIN_3_2 TRIG4_CHAIN_5_4 TRIG4_CHAIN_7_6 
TRIG4_COUNTER   TRIG4_CTRL      TRIG4_RESULT_1_0  TRIG4_RESULT_3_2  
TRIG4_RESULT_5_4  TRIG4_RESULT_7_6  TRIG5_CHAIN_1_0 TRIG5_CHAIN_3_2 
TRIG5_CHAIN_5_4 TRIG5_CHAIN_7_6 TRIG5_COUNTER   TRIG5_CTRL      
TRIG5_RESULT_1_0  TRIG5_RESULT_3_2  TRIG5_RESULT_5_4  TRIG5_RESULT_7_6  
TRIG6_CHAIN_1_0 TRIG6_CHAIN_3_2 TRIG6_CHAIN_5_4 TRIG6_CHAIN_7_6 
TRIG6_COUNTER   TRIG6_CTRL      TRIG6_RESULT_1_0  TRIG6_RESULT_3_2  
TRIG6_RESULT_5_4  TRIG6_RESULT_7_6  TRIG7_CHAIN_1_0 TRIG7_CHAIN_3_2 
TRIG7_CHAIN_5_4 TRIG7_CHAIN_7_6 TRIG7_COUNTER   TRIG7_CTRL      
TRIG7_RESULT_1_0  TRIG7_RESULT_3_2  TRIG7_RESULT_5_4  TRIG7_RESULT_7_6  
输入 p.ADC_ETC.{reg_name} 以查看寄存器的详细信息
type p.ADC_ETC.{reg_name} to check details of registers
</lang>
#### p.adc_etc
<link=p.ADC_ETC>
#### p.ADC_ETC.TRIG0_CHAIN_5_4
<lang=dft>
 (rw)  [1;33m0x403b0020[0m (0x403b0000 + 0x0020)
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
#### adc_etc.trig2_ctrl
<link=p.ADC_ETC.TRIG2_CTRL>
#### p.ADC_ETC.TRIG2_RESULT_1_0
<lang=dft>
 (ro)  [1;33m0x403b0078[0m (0x403b0000 + 0x0078)
ETC_TRIG Result Data 1/0 Register
 (ro) (12)  [0;32mDATA0[0m  - [11:00] -  Result DATA0
 (ro) (12)  [0;32mDATA1[0m  - [27:16] -  Result DATA1
</lang>
#### p.ADC_ETC.TRIG2_RESULT_7_6
<lang=dft>
 (ro)  [1;33m0x403b0084[0m (0x403b0000 + 0x0084)
ETC_TRIG Result Data 7/6 Register
 (ro) (12)  [0;32mDATA6[0m  - [11:00] -  Result DATA6
 (ro) (12)  [0;32mDATA7[0m  - [27:16] -  Result DATA7
</lang>
#### ADC_ETC.TRIG4_CHAIN_1_0
<link=p.ADC_ETC.TRIG4_CHAIN_1_0>
#### p.ADC_ETC.TRIG4_CHAIN_7_6
<lang=dft>
 (rw)  [1;33m0x403b00c4[0m (0x403b0000 + 0x00c4)
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
#### ADC_ETC.TRIG5_CTRL
<link=p.ADC_ETC.TRIG5_CTRL>
#### p.adc_etc.trig5_chain_1_0
<link=p.ADC_ETC.TRIG5_CHAIN_1_0>
#### p.adc_etc.trig5_result_1_0
<link=p.ADC_ETC.TRIG5_RESULT_1_0>
#### p.adc_etc.trig5_result_3_2
<link=p.ADC_ETC.TRIG5_RESULT_3_2>
#### adc_etc.trig5_result_3_2
<link=p.ADC_ETC.TRIG5_RESULT_3_2>
#### adc_etc.trig6_counter
<link=p.ADC_ETC.TRIG6_COUNTER>
#### p.ADC_ETC.TRIG6_CHAIN_1_0
<lang=dft>
 (rw)  [1;33m0x403b0108[0m (0x403b0000 + 0x0108)
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
#### p.ADC_ETC.TRIG6_CHAIN_7_6
<lang=dft>
 (rw)  [1;33m0x403b0114[0m (0x403b0000 + 0x0114)
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
#### adc_etc.trig6_result_7_6
<link=p.ADC_ETC.TRIG6_RESULT_7_6>
#### adc_etc.trig7_ctrl
<link=p.ADC_ETC.TRIG7_CTRL>
#### p.ADC_ETC.TRIG7_COUNTER
<lang=dft>
 (rw)  [1;33m0x403b012c[0m (0x403b0000 + 0x012c)
ETC_TRIG7 Counter Register
 (rw) (16)  [0;32mINIT_DELAY[0m  - [15:00] -  TRIGGER initial delay counter
 (rw) (16)  [0;32mSAMPLE_INTERVAL[0m  - [31:16] -  TRIGGER sampling interval counter
</lang>
#### ADC_ETC.TRIG7_COUNTER
<link=p.ADC_ETC.TRIG7_COUNTER>
#### p.AOI1.BFCRT011
<lang=dft>
 (rw)  [1;33m0x403b4004[0m (0x403b4000 + 0x0004)
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
#### p.aoi1.bfcrt232
<link=p.AOI1.BFCRT232>
#### p.aoi2.bfcrt012
<link=p.AOI2.BFCRT012>
#### xbara1.sel2
<link=p.XBARA1.SEL2>
#### XBARA1.SEL3
<link=p.XBARA1.SEL3>
#### p.xbara1.sel10
<link=p.XBARA1.SEL10>
#### XBARA1.SEL12
<link=p.XBARA1.SEL12>
#### xbara1.sel15
<link=p.XBARA1.SEL15>
#### p.xbara1.sel21
<link=p.XBARA1.SEL21>
#### p.XBARA1.SEL22
<lang=dft>
 (rw)  [1;33m0x403bc02c[0m (0x403bc000 + 0x002c)
Crossbar A Select Register 22
 (rw) (07)  [0;32mSEL44[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT44 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL45[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT45 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.XBARA1.SEL31
<lang=dft>
 (rw)  [1;33m0x403bc03e[0m (0x403bc000 + 0x003e)
Crossbar A Select Register 31
 (rw) (07)  [0;32mSEL62[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT62 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL63[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT63 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL34
<link=p.XBARA1.SEL34>
#### p.xbara1.sel36
<link=p.XBARA1.SEL36>
#### p.XBARA1.SEL40
<lang=dft>
 (rw)  [1;33m0x403bc050[0m (0x403bc000 + 0x0050)
Crossbar A Select Register 40
 (rw) (07)  [0;32mSEL80[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT80 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL81[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT81 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel43
<link=p.XBARA1.SEL43>
#### XBARA1.SEL48
<link=p.XBARA1.SEL48>
#### xbara1.sel49
<link=p.XBARA1.SEL49>
#### p.XBARA1.SEL53
<lang=dft>
 (rw)  [1;33m0x403bc06a[0m (0x403bc000 + 0x006a)
Crossbar A Select Register 53
 (rw) (07)  [0;32mSEL106[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT106 (refer to Functional Description 
 section for input/output assignment)
 (rw) (07)  [0;32mSEL107[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT107 (refer to Functional Description 
 section for input/output assignment)
</lang>
#### p.xbara1.ctrl1
<link=p.XBARA1.CTRL1>
#### p.XBARB2
<lang=dft>
base: 0x403c0000
SEL0            SEL1            SEL2            SEL3            
SEL4            SEL5            SEL6            SEL7            
输入 p.XBARB2.{reg_name} 以查看寄存器的详细信息
type p.XBARB2.{reg_name} to check details of registers
</lang>
#### xbarb3.sel0
<link=p.XBARB3.SEL0>
#### p.xbarb3.sel2
<link=p.XBARB3.SEL2>
#### ENC1.FILT
<link=p.ENC1.FILT>
#### ENC1.UINIT
<link=p.ENC1.UINIT>
#### p.enc1.imr
<link=p.ENC1.IMR>
#### ENC1.IMR
<link=p.ENC1.IMR>
#### ENC1.UMOD
<link=p.ENC1.UMOD>
#### enc2.lpos
<link=p.ENC2.LPOS>
#### ENC2.LPOSH
<link=p.ENC2.LPOSH>
#### enc2.tst
<link=p.ENC2.TST>
#### ENC2.TST
<link=p.ENC2.TST>
#### p.enc2.ucomp
<link=p.ENC2.UCOMP>
#### p.ENC2.LCOMP
<lang=dft>
 (rw)  [1;33m0x403cc026[0m (0x403cc000 + 0x0026)
Lower Position Compare Register
 (rw) (16)  [0;32mCOMP[0m  - [15:00] -  This read/write register contains the lower (least significant) half of the pos
 ition compare register
</lang>
#### enc3.wtr
<link=p.ENC3.WTR>
#### p.enc3.posd
<link=p.ENC3.POSD>
#### p.ENC3.REV
<lang=dft>
 (rw)  [1;33m0x403d000a[0m (0x403d0000 + 0x000a)
Revolution Counter Register
 (rw) (16)  [0;32mREV[0m  - [15:00] -  This read/write register contains the current value of the revolution counter.
</lang>
#### p.ENC3.UPOS
<lang=dft>
 (rw)  [1;33m0x403d000e[0m (0x403d0000 + 0x000e)
Upper Position Counter Register
 (rw) (16)  [0;32mPOS[0m  - [15:00] -  This read/write register contains the upper (most significant) half of the posi
 tion counter
</lang>
#### enc3.uposh
<link=p.ENC3.UPOSH>
#### p.enc4.filt
<link=p.ENC4.FILT>
#### enc4.filt
<link=p.ENC4.FILT>
#### ENC4.WTR
<link=p.ENC4.WTR>
#### p.enc4.uposh
<link=p.ENC4.UPOSH>
#### ENC4.UCOMP
<link=p.ENC4.UCOMP>
#### p.pwm1.sm0ctrl2
<link=p.PWM1.SM0CTRL2>
#### pwm1.sm0val0
<link=p.PWM1.SM0VAL0>
#### PWM1.SM0FRCTRL
<link=p.PWM1.SM0FRCTRL>
#### PWM1.SM0CAPTCTRLA
<link=p.PWM1.SM0CAPTCTRLA>
#### p.pwm1.sm0captcompb
<link=p.PWM1.SM0CAPTCOMPB>
#### p.PWM1.SM0CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403dc03e[0m (0x403dc000 + 0x003e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### p.PWM1.SM0CVAL4
<lang=dft>
 (ro)  [1;33m0x403dc050[0m (0x403dc000 + 0x0050)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### PWM1.SM0CVAL4CYC
<link=p.PWM1.SM0CVAL4CYC>
#### PWM1.SM1INIT
<link=p.PWM1.SM1INIT>
#### pwm1.sm1val1
<link=p.PWM1.SM1VAL1>
#### p.pwm1.sm1sts
<link=p.PWM1.SM1STS>
#### p.pwm1.sm1tctrl
<link=p.PWM1.SM1TCTRL>
#### PWM1.SM1TCTRL
<link=p.PWM1.SM1TCTRL>
#### pwm1.sm1dismap1
<link=p.PWM1.SM1DISMAP1>
#### p.pwm1.sm1captctrlx
<link=p.PWM1.SM1CAPTCTRLX>
#### p.PWM1.SM1CVAL0
<lang=dft>
 (ro)  [1;33m0x403dc0a0[0m (0x403dc000 + 0x00a0)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### PWM1.SM1CVAL0
<link=p.PWM1.SM1CVAL0>
#### p.PWM1.SM1CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403dc0ae[0m (0x403dc000 + 0x00ae)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### PWM1.SM2CTRL
<link=p.PWM1.SM2CTRL>
#### p.PWM1.SM2VAL1
<lang=dft>
 (rw)  [1;33m0x403dc0ce[0m (0x403dc000 + 0x00ce)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### p.pwm1.sm2fracval2
<link=p.PWM1.SM2FRACVAL2>
#### PWM1.SM2VAL2
<link=p.PWM1.SM2VAL2>
#### PWM1.SM2FRACVAL3
<link=p.PWM1.SM2FRACVAL3>
#### pwm1.sm2frctrl
<link=p.PWM1.SM2FRCTRL>
#### p.pwm1.sm2sts
<link=p.PWM1.SM2STS>
#### p.PWM1.SM2CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403dc0f6[0m (0x403dc000 + 0x00f6)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### pwm1.sm2captcompb
<link=p.PWM1.SM2CAPTCOMPB>
#### pwm1.sm2cval0
<link=p.PWM1.SM2CVAL0>
#### p.PWM1.SM2CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403dc10e[0m (0x403dc000 + 0x010e)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### PWM1.SM3VAL3
<link=p.PWM1.SM3VAL3>
#### p.pwm1.sm3frctrl
<link=p.PWM1.SM3FRCTRL>
#### p.pwm1.sm3octrl
<link=p.PWM1.SM3OCTRL>
#### p.PWM1.SM3DMAEN
<lang=dft>
 (rw)  [1;33m0x403dc148[0m (0x403dc000 + 0x0148)
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
#### p.pwm1.sm3captcompa
<link=p.PWM1.SM3CAPTCOMPA>
#### pwm1.sm3captcompb
<link=p.PWM1.SM3CAPTCOMPB>
#### p.PWM1.SM3CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403dc15e[0m (0x403dc000 + 0x015e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### p.pwm1.sm3cval0
<link=p.PWM1.SM3CVAL0>
#### p.PWM1.SM3CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403dc172[0m (0x403dc000 + 0x0172)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### p.pwm1.mctrl2
<link=p.PWM1.MCTRL2>
#### PWM1.FCTRL0
<link=p.PWM1.FCTRL0>
#### p.pwm2
<link=p.PWM2>
#### pwm2.sm0fracval2
<link=p.PWM2.SM0FRACVAL2>
#### PWM2.SM0VAL2
<link=p.PWM2.SM0VAL2>
#### PWM2.SM0INTEN
<link=p.PWM2.SM0INTEN>
#### p.PWM2.SM0DMAEN
<lang=dft>
 (rw)  [1;33m0x403e0028[0m (0x403e0000 + 0x0028)
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
#### pwm2.sm0dmaen
<link=p.PWM2.SM0DMAEN>
#### PWM2.SM0DMAEN
<link=p.PWM2.SM0DMAEN>
#### p.pwm2.sm0dtcnt0
<link=p.PWM2.SM0DTCNT0>
#### pwm2.sm0dtcnt0
<link=p.PWM2.SM0DTCNT0>
#### PWM2.SM0CAPTCTRLA
<link=p.PWM2.SM0CAPTCTRLA>
#### p.pwm2.sm0captctrlb
<link=p.PWM2.SM0CAPTCTRLB>
#### p.PWM2.SM0CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e003e[0m (0x403e0000 + 0x003e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### PWM2.SM0CVAL1CYC
<link=p.PWM2.SM0CVAL1CYC>
#### pwm2.sm0cval2
<link=p.PWM2.SM0CVAL2>
#### p.PWM2.SM0CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403e0052[0m (0x403e0000 + 0x0052)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### p.pwm2.sm1cnt
<link=p.PWM2.SM1CNT>
#### p.PWM2.SM1VAL1
<lang=dft>
 (rw)  [1;33m0x403e006e[0m (0x403e0000 + 0x006e)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### PWM2.SM1VAL3
<link=p.PWM2.SM1VAL3>
#### PWM2.SM1OCTRL
<link=p.PWM2.SM1OCTRL>
#### p.pwm2.sm1dtcnt0
<link=p.PWM2.SM1DTCNT0>
#### pwm2.sm1dtcnt1
<link=p.PWM2.SM1DTCNT1>
#### p.pwm2.sm1captctrla
<link=p.PWM2.SM1CAPTCTRLA>
#### p.PWM2.SM1CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e0096[0m (0x403e0000 + 0x0096)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### p.pwm2.sm1captcompa
<link=p.PWM2.SM1CAPTCOMPA>
#### pwm2.sm1cval2cyc
<link=p.PWM2.SM1CVAL2CYC>
#### p.PWM2.SM1CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e00ae[0m (0x403e0000 + 0x00ae)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### pwm2.sm2ctrl
<link=p.PWM2.SM2CTRL>
#### p.pwm2.sm2val1
<link=p.PWM2.SM2VAL1>
#### p.pwm2.sm2captcompx
<link=p.PWM2.SM2CAPTCOMPX>
#### p.PWM2.SM2CVAL0
<lang=dft>
 (ro)  [1;33m0x403e0100[0m (0x403e0000 + 0x0100)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### p.PWM2.SM2CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e010e[0m (0x403e0000 + 0x010e)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### pwm2.sm2cval5
<link=p.PWM2.SM2CVAL5>
#### p.pwm2.sm3val0
<link=p.PWM2.SM3VAL0>
#### PWM2.SM3FRACVAL1
<link=p.PWM2.SM3FRACVAL1>
#### p.pwm2.sm3dismap0
<link=p.PWM2.SM3DISMAP0>
#### PWM2.SM3DISMAP0
<link=p.PWM2.SM3DISMAP0>
#### pwm2.sm3captcompb
<link=p.PWM2.SM3CAPTCOMPB>
#### p.PWM2.SM3CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e015e[0m (0x403e0000 + 0x015e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### p.pwm2.sm3captcompx
<link=p.PWM2.SM3CAPTCOMPX>
#### pwm2.sm3cval2
<link=p.PWM2.SM3CVAL2>
#### PWM2.SM3CVAL3CYC
<link=p.PWM2.SM3CVAL3CYC>
#### p.PWM2.SM3CVAL4
<lang=dft>
 (ro)  [1;33m0x403e0170[0m (0x403e0000 + 0x0170)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### p.pwm2.sm3cval4cyc
<link=p.PWM2.SM3CVAL4CYC>
#### pwm2.mctrl2
<link=p.PWM2.MCTRL2>
#### p.pwm2.fctrl20
<link=p.PWM2.FCTRL20>
#### p.PWM3
<lang=dft>
base: 0x403e4000
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
输入 p.PWM3.{reg_name} 以查看寄存器的详细信息
type p.PWM3.{reg_name} to check details of registers
</lang>
#### p.PWM3.SM0VAL1
<lang=dft>
 (rw)  [1;33m0x403e400e[0m (0x403e4000 + 0x000e)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### p.pwm3.sm0fracval2
<link=p.PWM3.SM0FRACVAL2>
#### PWM3.SM0VAL3
<link=p.PWM3.SM0VAL3>
#### PWM3.SM0OCTRL
<link=p.PWM3.SM0OCTRL>
#### p.pwm3.sm0sts
<link=p.PWM3.SM0STS>
#### p.PWM3.SM0CAPTCOMPA
<lang=dft>
 (rw)  [1;33m0x403e4036[0m (0x403e4000 + 0x0036)
Capture Compare A Register
 (rw) (08)  [0;32mEDGCMPA[0m  - [07:00] -  Edge Compare A
 (ro) (08)  [0;32mEDGCNTA[0m  - [15:08] -  Edge Counter A
</lang>
#### pwm3.sm0captcompa
<link=p.PWM3.SM0CAPTCOMPA>
#### pwm3.sm0cval1
<link=p.PWM3.SM0CVAL1>
#### p.PWM3.SM0CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e404e[0m (0x403e4000 + 0x004e)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### PWM3.SM1VAL2
<link=p.PWM3.SM1VAL2>
#### p.pwm3.sm1frctrl
<link=p.PWM3.SM1FRCTRL>
#### p.pwm3.sm1octrl
<link=p.PWM3.SM1OCTRL>
#### PWM3.SM1INTEN
<link=p.PWM3.SM1INTEN>
#### p.PWM3.SM1DMAEN
<lang=dft>
 (rw)  [1;33m0x403e4088[0m (0x403e4000 + 0x0088)
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
#### PWM3.SM1DMAEN
<link=p.PWM3.SM1DMAEN>
#### PWM3.SM1CAPTCTRLA
<link=p.PWM3.SM1CAPTCTRLA>
#### p.pwm3.sm1captcompa
<link=p.PWM3.SM1CAPTCOMPA>
#### pwm3.sm1captctrlb
<link=p.PWM3.SM1CAPTCTRLB>
#### p.PWM3.SM1CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e409e[0m (0x403e4000 + 0x009e)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### p.pwm3.sm1cval0
<link=p.PWM3.SM1CVAL0>
#### pwm3.sm1cval1
<link=p.PWM3.SM1CVAL1>
#### PWM3.SM1CVAL1CYC
<link=p.PWM3.SM1CVAL1CYC>
#### p.PWM3.SM1CVAL4CYC
<lang=dft>
 (ro)  [1;33m0x403e40b2[0m (0x403e4000 + 0x00b2)
Capture Value 4 Cycle Register
 (ro) (04)  [0;32mCVAL4CYC[0m  - [03:00] -  CVAL4CYC
</lang>
#### p.pwm3.sm2ctrl2
<link=p.PWM3.SM2CTRL2>
#### PWM3.SM2FRACVAL1
<link=p.PWM3.SM2FRACVAL1>
#### pwm3.sm2val1
<link=p.PWM3.SM2VAL1>
#### PWM3.SM2DISMAP0
<link=p.PWM3.SM2DISMAP0>
#### p.pwm3.sm2captcompb
<link=p.PWM3.SM2CAPTCOMPB>
#### p.PWM3.SM2CAPTCOMPX
<lang=dft>
 (rw)  [1;33m0x403e40fe[0m (0x403e4000 + 0x00fe)
Capture Compare X Register
 (rw) (08)  [0;32mEDGCMPX[0m  - [07:00] -  Edge Compare X
 (ro) (08)  [0;32mEDGCNTX[0m  - [15:08] -  Edge Counter X
</lang>
#### PWM3.SM2CVAL3CYC
<link=p.PWM3.SM2CVAL3CYC>
#### p.PWM3.SM2CVAL4
<lang=dft>
 (ro)  [1;33m0x403e4110[0m (0x403e4000 + 0x0110)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### pwm3.sm3val0
<link=p.PWM3.SM3VAL0>
#### pwm3.sm3octrl
<link=p.PWM3.SM3OCTRL>
#### p.pwm3.sm3sts
<link=p.PWM3.SM3STS>
#### pwm3.sm3sts
<link=p.PWM3.SM3STS>
#### p.pwm3.sm3tctrl
<link=p.PWM3.SM3TCTRL>
#### pwm3.sm3dismap0
<link=p.PWM3.SM3DISMAP0>
#### p.pwm3.sm3captctrlx
<link=p.PWM3.SM3CAPTCTRLX>
#### p.PWM3.SM3CVAL0
<lang=dft>
 (ro)  [1;33m0x403e4160[0m (0x403e4000 + 0x0160)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### p.PWM3.SM3CVAL3CYC
<lang=dft>
 (ro)  [1;33m0x403e416e[0m (0x403e4000 + 0x016e)
Capture Value 3 Cycle Register
 (ro) (04)  [0;32mCVAL3CYC[0m  - [03:00] -  CVAL3CYC
</lang>
#### pwm3.sm3cval4cyc
<link=p.PWM3.SM3CVAL4CYC>
#### p.PWM3.SWCOUT
<lang=dft>
 (rw)  [1;33m0x403e4184[0m (0x403e4000 + 0x0184)
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
#### p.pwm3.dtsrcsel
<link=p.PWM3.DTSRCSEL>
#### pwm3.mctrl
<link=p.PWM3.MCTRL>
#### PWM3.MCTRL
<link=p.PWM3.MCTRL>
#### p.PWM3.MCTRL2
<lang=dft>
 (rw)  [1;33m0x403e418a[0m (0x403e4000 + 0x018a)
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
#### p.pwm4.sm0cnt
<link=p.PWM4.SM0CNT>
#### p.PWM4.SM0CTRL
<lang=dft>
 (rw)  [1;33m0x403e8006[0m (0x403e8000 + 0x0006)
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
#### p.PWM4.SM0VAL1
<lang=dft>
 (rw)  [1;33m0x403e800e[0m (0x403e8000 + 0x000e)
Value Register 1
 (rw) (16)  [0;32mVAL1[0m  - [15:00] -  Value Register 1
</lang>
#### p.pwm4.sm0val4
<link=p.PWM4.SM0VAL4>
#### PWM4.SM0OCTRL
<link=p.PWM4.SM0OCTRL>
#### PWM4.SM0CAPTCOMPA
<link=p.PWM4.SM0CAPTCOMPA>
#### p.pwm4.sm0cval0
<link=p.PWM4.SM0CVAL0>
#### PWM4.SM0CVAL0CYC
<link=p.PWM4.SM0CVAL0CYC>
#### PWM4.SM0CVAL3
<link=p.PWM4.SM0CVAL3>
#### PWM4.SM0CVAL3CYC
<link=p.PWM4.SM0CVAL3CYC>
#### pwm4.sm0cval4cyc
<link=p.PWM4.SM0CVAL4CYC>
#### p.pwm4.sm1ctrl
<link=p.PWM4.SM1CTRL>
#### p.PWM4.SM1VAL0
<lang=dft>
 (rw)  [1;33m0x403e806a[0m (0x403e8000 + 0x006a)
Value Register 0
 (rw) (16)  [0;32mVAL0[0m  - [15:00] -  Value Register 0
</lang>
#### p.pwm4.sm1val5
<link=p.PWM4.SM1VAL5>
#### p.PWM4.SM1FRCTRL
<lang=dft>
 (rw)  [1;33m0x403e8080[0m (0x403e8000 + 0x0080)
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
#### PWM4.SM1INTEN
<link=p.PWM4.SM1INTEN>
#### PWM4.SM1CVAL1
<link=p.PWM4.SM1CVAL1>
#### p.pwm4.sm1cval2
<link=p.PWM4.SM1CVAL2>
#### p.PWM4.SM1CVAL2CYC
<lang=dft>
 (ro)  [1;33m0x403e80aa[0m (0x403e8000 + 0x00aa)
Capture Value 2 Cycle Register
 (ro) (04)  [0;32mCVAL2CYC[0m  - [03:00] -  CVAL2CYC
</lang>
#### pwm4.sm2cnt
<link=p.PWM4.SM2CNT>
#### pwm4.sm2val2
<link=p.PWM4.SM2VAL2>
#### pwm4.sm2fracval5
<link=p.PWM4.SM2FRACVAL5>
#### p.pwm4.sm2frctrl
<link=p.PWM4.SM2FRCTRL>
#### pwm4.sm2frctrl
<link=p.PWM4.SM2FRCTRL>
#### p.PWM4.SM2DTCNT1
<lang=dft>
 (rw)  [1;33m0x403e80f2[0m (0x403e8000 + 0x00f2)
Deadtime Count Register 1
 (rw) (16)  [0;32mDTCNT1[0m  - [15:00] -  DTCNT1
</lang>
#### pwm4.sm2captcompb
<link=p.PWM4.SM2CAPTCOMPB>
#### p.PWM4.SM2CVAL2
<lang=dft>
 (ro)  [1;33m0x403e8108[0m (0x403e8000 + 0x0108)
Capture Value 2 Register
 (ro) (16)  [0;32mCAPTVAL2[0m  - [15:00] -  CAPTVAL2
</lang>
#### p.pwm4.sm2cval2cyc
<link=p.PWM4.SM2CVAL2CYC>
#### pwm4.sm2cval2cyc
<link=p.PWM4.SM2CVAL2CYC>
#### PWM4.SM2CVAL4
<link=p.PWM4.SM2CVAL4>
#### p.pwm4.sm3init
<link=p.PWM4.SM3INIT>
#### p.PWM4.SM3CTRL
<lang=dft>
 (rw)  [1;33m0x403e8126[0m (0x403e8000 + 0x0126)
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
#### pwm4.sm3ctrl
<link=p.PWM4.SM3CTRL>
#### pwm4.sm3val3
<link=p.PWM4.SM3VAL3>
#### PWM4.SM3FRACVAL5
<link=p.PWM4.SM3FRACVAL5>
#### p.pwm4.sm3octrl
<link=p.PWM4.SM3OCTRL>
#### PWM4.SM3DISMAP0
<link=p.PWM4.SM3DISMAP0>
#### p.PWM4.SM3CVAL1
<lang=dft>
 (ro)  [1;33m0x403e8164[0m (0x403e8000 + 0x0164)
Capture Value 1 Register
 (ro) (16)  [0;32mCAPTVAL1[0m  - [15:00] -  CAPTVAL1
</lang>
#### pwm4.sm3cval1
<link=p.PWM4.SM3CVAL1>
#### pwm4.sm3cval1cyc
<link=p.PWM4.SM3CVAL1CYC>
#### p.pwm4.sm3cval5cyc
<link=p.PWM4.SM3CVAL5CYC>
#### p.pwm4.swcout
<link=p.PWM4.SWCOUT>
#### p.PWM4.MCTRL
<lang=dft>
 (rw)  [1;33m0x403e8188[0m (0x403e8000 + 0x0188)
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
#### p.pwm4.mctrl
<link=p.PWM4.MCTRL>
#### PWM4.FCTRL0
<link=p.PWM4.FCTRL0>
#### PWM4.FFILT0
<link=p.PWM4.FFILT0>
#### p.BEE.AES_KEY0_W2
<lang=dft>
 (rw)  [1;33m0x403ec014[0m (0x403ec000 + 0x0014)
no description available
 (rw) (32)  [0;32mKEY2[0m  - [31:00] -  AES 128 key from software
</lang>
#### bee.status
<link=p.BEE.STATUS>
#### BEE.CTR_NONCE1_W2
<link=p.BEE.CTR_NONCE1_W2>
#### bee.ctr_nonce1_w3
<link=p.BEE.CTR_NONCE1_W3>
#### p.lpi2c1.verid
<link=p.LPI2C1.VERID>
#### lpi2c1.mcr
<link=p.LPI2C1.MCR>
#### p.lpi2c1.msr
<link=p.LPI2C1.MSR>
#### LPI2C1.MDER
<link=p.LPI2C1.MDER>
#### LPI2C1.SCFGR1
<link=p.LPI2C1.SCFGR1>
#### lpi2c1.stdr
<link=p.LPI2C1.STDR>
#### LPI2C1.STDR
<link=p.LPI2C1.STDR>
#### p.LPI2C2.MIER
<lang=dft>
 (rw)  [1;33m0x403f4018[0m (0x403f4000 + 0x0018)
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
#### p.lpi2c2.mier
<link=p.LPI2C2.MIER>
#### lpi2c2.mccr1
<link=p.LPI2C2.MCCR1>
#### p.lpi2c2.scr
<link=p.LPI2C2.SCR>
#### p.LPI2C2.SCFGR2
<lang=dft>
 (rw)  [1;33m0x403f4128[0m (0x403f4000 + 0x0128)
Slave Configuration Register 2
 (rw) (04)  [0;32mCLKHOLD[0m  - [03:00] -  Clock Hold Time
 (rw) (06)  [0;32mDATAVD[0m  - [13:08] -  Data Valid Delay
 (rw) (04)  [0;32mFILTSCL[0m  - [19:16] -  Glitch Filter SCL
 (rw) (04)  [0;32mFILTSDA[0m  - [27:24] -  Glitch Filter SDA
</lang>
#### p.lpi2c2.scfgr2
<link=p.LPI2C2.SCFGR2>
#### LPI2C2.SASR
<link=p.LPI2C2.SASR>
#### p.lpi2c2.srdr
<link=p.LPI2C2.SRDR>
#### p.lpi2c3.mier
<link=p.LPI2C3.MIER>
#### lpi2c3.mcfgr1
<link=p.LPI2C3.MCFGR1>
#### p.lpi2c3.mcfgr2
<link=p.LPI2C3.MCFGR2>
#### lpi2c3.mfsr
<link=p.LPI2C3.MFSR>
#### lpi2c3.sder
<link=p.LPI2C3.SDER>
#### p.LPI2C3.SCFGR2
<lang=dft>
 (rw)  [1;33m0x403f8128[0m (0x403f8000 + 0x0128)
Slave Configuration Register 2
 (rw) (04)  [0;32mCLKHOLD[0m  - [03:00] -  Clock Hold Time
 (rw) (06)  [0;32mDATAVD[0m  - [13:08] -  Data Valid Delay
 (rw) (04)  [0;32mFILTSCL[0m  - [19:16] -  Glitch Filter SCL
 (rw) (04)  [0;32mFILTSDA[0m  - [27:24] -  Glitch Filter SDA
</lang>
#### LPI2C3.SASR
<link=p.LPI2C3.SASR>
#### LPI2C3.STAR
<link=p.LPI2C3.STAR>
#### p.lpi2c4.mccr1
<link=p.LPI2C4.MCCR1>
#### LPI2C4.MFCR
<link=p.LPI2C4.MFCR>
#### LPI2C4.SCR
<link=p.LPI2C4.SCR>
#### p.lpi2c4.sasr
<link=p.LPI2C4.SASR>
#### lpi2c4.star
<link=p.LPI2C4.STAR>
#### p.systemcontrol.actlr
<link=p.SYSTEMCONTROL.ACTLR>
#### systemcontrol.actlr
<link=p.SYSTEMCONTROL.ACTLR>
#### p.systemcontrol.vtor
<link=p.SYSTEMCONTROL.VTOR>
#### SystemControl.CCR
<link=p.SYSTEMCONTROL.CCR>
#### SystemControl.SHPR1
<link=p.SYSTEMCONTROL.SHPR1>
#### systemcontrol.shpr3
<link=p.SYSTEMCONTROL.SHPR3>
#### p.SYSTEMCONTROL.MMFAR
<lang=dft>
 (rw)  [1;33m0xe000ed34[0m (0xe000e000 + 0x0d34)
MemManage Fault Address Register
 (rw) (32)  [0;32mADDRESS[0m  - [31:00] -  Address of MemManage fault location
</lang>
#### p.systemcontrol.id_pfr1
<link=p.SYSTEMCONTROL.ID_PFR1>
#### SystemControl.ID_DFR0
<link=p.SYSTEMCONTROL.ID_DFR0>
#### SystemControl.ID_AFR0
<link=p.SYSTEMCONTROL.ID_AFR0>
#### SystemControl.ID_MMFR1
<link=p.SYSTEMCONTROL.ID_MMFR1>
#### systemcontrol.id_isar3
<link=p.SYSTEMCONTROL.ID_ISAR3>
#### p.systemcontrol.csselr
<link=p.SYSTEMCONTROL.CSSELR>
#### p.systemcontrol.iciallu
<link=p.SYSTEMCONTROL.ICIALLU>
#### p.systemcontrol.icimvau
<link=p.SYSTEMCONTROL.ICIMVAU>
#### systemcontrol.dcimvac
<link=p.SYSTEMCONTROL.DCIMVAC>
#### p.SYSTEMCONTROL.CM7_AHBPCR
<lang=dft>
 (rw)  [1;33m0xe000ef98[0m (0xe000e000 + 0x0f98)
AHBP Control Register
 (rw) (01)  [0;32mEN[0m  - [00:00] -  AHBP enable.
      0 - EN_0 :
         AHBP disabled. When disabled all accesses are made to the AXIM interfac
         e.
      0x1 - EN_1 :
         AHBP enabled.
 (ro) (03)  [0;32mSZ[0m  - [03:01] -  AHBP size.
      0 - SZ_0 :
         0MB. AHBP disabled.
      0x1 - SZ_1 :
         64MB.
      0x2 - SZ_2 :
         128MB.
      0x3 - SZ_3 :
         256MB.
      0x4 - SZ_4 :
         512MB.
</lang>
#### NVIC.NVICISER0
<link=p.NVIC.NVICISER0>
#### p.NVIC.NVICISER2
<lang=dft>
 (rw)  [1;33m0xe000e108[0m (0xe000e100 + 0x0008)
Interrupt Set Enable Register n
 (rw) (32)  [0;32mSETENA[0m  - [31:00] -  Interrupt set enable bits
</lang>
#### p.nvic.nvicispr1
<link=p.NVIC.NVICISPR1>
#### p.NVIC.NVICISPR2
<lang=dft>
 (rw)  [1;33m0xe000e208[0m (0xe000e100 + 0x0108)
Interrupt Set Pending Register n
 (rw) (32)  [0;32mSETPEND[0m  - [31:00] -  Interrupt set-pending bits
</lang>
#### NVIC.NVICISPR2
<link=p.NVIC.NVICISPR2>
#### nvic.nvicicpr1
<link=p.NVIC.NVICICPR1>
#### nvic.nviciabr2
<link=p.NVIC.NVICIABR2>
#### p.NVIC.NVICIABR4
<lang=dft>
 (rw)  [1;33m0xe000e310[0m (0xe000e100 + 0x0210)
Interrupt Active bit Register n
 (rw) (32)  [0;32mACTIVE[0m  - [31:00] -  Interrupt active flags
</lang>
#### p.nvic.nvicip0
<link=p.NVIC.NVICIP0>
#### NVIC.NVICIP4
<link=p.NVIC.NVICIP4>
#### NVIC.NVICIP15
<link=p.NVIC.NVICIP15>
#### nvic.nvicip17
<link=p.NVIC.NVICIP17>
#### p.NVIC.NVICIP22
<lang=dft>
 (rw)  [1;33m0xe000e416[0m (0xe000e100 + 0x0316)
Interrupt Priority Register 22
 (rw) (04)  [0;32mPRI22[0m  - [07:04] -  Priority of the INT_LPUART3 interrupt 22
</lang>
#### nvic.nvicip22
<link=p.NVIC.NVICIP22>
#### NVIC.NVICIP24
<link=p.NVIC.NVICIP24>
#### p.nvic.nvicip29
<link=p.NVIC.NVICIP29>
#### nvic.nvicip31
<link=p.NVIC.NVICIP31>
#### NVIC.NVICIP33
<link=p.NVIC.NVICIP33>
#### p.NVIC.NVICIP35
<lang=dft>
 (rw)  [1;33m0xe000e423[0m (0xe000e100 + 0x0323)
Interrupt Priority Register 35
 (rw) (04)  [0;32mPRI35[0m  - [07:04] -  Priority of the INT_LPSPI4 interrupt 35
</lang>
#### p.nvic.nvicip44
<link=p.NVIC.NVICIP44>
#### p.NVIC.NVICIP48
<lang=dft>
 (rw)  [1;33m0xe000e430[0m (0xe000e100 + 0x0330)
Interrupt Priority Register 48
 (rw) (04)  [0;32mPRI48[0m  - [07:04] -  Priority of the INT_SNVS_LP_WRAPPER interrupt 48
</lang>
#### nvic.nvicip48
<link=p.NVIC.NVICIP48>
#### p.nvic.nvicip53
<link=p.NVIC.NVICIP53>
#### p.NVIC.NVICIP56
<lang=dft>
 (rw)  [1;33m0xe000e438[0m (0xe000e100 + 0x0338)
Interrupt Priority Register 56
 (rw) (04)  [0;32mPRI56[0m  - [07:04] -  Priority of the INT_SAI1 interrupt 56
</lang>
#### NVIC.NVICIP59
<link=p.NVIC.NVICIP59>
#### NVIC.NVICIP68
<link=p.NVIC.NVICIP68>
#### p.nvic.nvicip75
<link=p.NVIC.NVICIP75>
#### p.NVIC.NVICIP79
<lang=dft>
 (rw)  [1;33m0xe000e44f[0m (0xe000e100 + 0x034f)
Interrupt Priority Register 79
 (rw) (04)  [0;32mPRI79[0m  - [07:04] -  Priority of the INT_GPIO1_INT7 interrupt 79
</lang>
#### p.nvic.nvicip80
<link=p.NVIC.NVICIP80>
#### p.NVIC.NVICIP92
<lang=dft>
 (rw)  [1;33m0xe000e45c[0m (0xe000e100 + 0x035c)
Interrupt Priority Register 92
 (rw) (04)  [0;32mPRI92[0m  - [07:04] -  Priority of the INT_WDOG1 interrupt 92
</lang>
#### p.nvic.nvicip97
<link=p.NVIC.NVICIP97>
#### nvic.nvicip98
<link=p.NVIC.NVICIP98>
#### p.nvic.nvicip103
<link=p.NVIC.NVICIP103>
#### p.NVIC.NVICIP104
<lang=dft>
 (rw)  [1;33m0xe000e468[0m (0xe000e100 + 0x0368)
Interrupt Priority Register 104
 (rw) (04)  [0;32mPRI104[0m  - [07:04] -  Priority of the INT_PWM1_2 interrupt 104
</lang>
#### nvic.nvicip105
<link=p.NVIC.NVICIP105>
#### NVIC.NVICIP107
<link=p.NVIC.NVICIP107>
#### NVIC.NVICIP114
<link=p.NVIC.NVICIP114>
#### p.NVIC.NVICIP117
<lang=dft>
 (rw)  [1;33m0xe000e475[0m (0xe000e100 + 0x0375)
Interrupt Priority Register 117
 (rw) (04)  [0;32mPRI117[0m  - [07:04] -  Priority of the INT_XBAR1_IRQ_2_3 interrupt 117
</lang>
#### NVIC.NVICIP121
<link=p.NVIC.NVICIP121>
#### p.NVIC.NVICIP122
<lang=dft>
 (rw)  [1;33m0xe000e47a[0m (0xe000e100 + 0x037a)
Interrupt Priority Register 122
 (rw) (04)  [0;32mPRI122[0m  - [07:04] -  Priority of the INT_PIT interrupt 122
</lang>
#### nvic.nvicip123
<link=p.NVIC.NVICIP123>
#### p.NVIC.NVICIP131
<lang=dft>
 (rw)  [1;33m0xe000e483[0m (0xe000e100 + 0x0383)
Interrupt Priority Register 131
 (rw) (04)  [0;32mPRI131[0m  - [07:04] -  Priority of the INT_ENC3 interrupt 131
</lang>
#### NVIC.NVICIP132
<link=p.NVIC.NVICIP132>
#### nvic.nvicip134
<link=p.NVIC.NVICIP134>
#### p.NVIC.NVICIP148
<lang=dft>
 (rw)  [1;33m0xe000e494[0m (0xe000e100 + 0x0394)
Interrupt Priority Register 148
 (rw) (04)  [0;32mPRI148[0m  - [07:04] -  Priority of the INT_PWM4_1 interrupt 148
</lang>
#### nvic.nvicip149
<link=p.NVIC.NVICIP149>
#### p.nvic.nvicip150
<link=p.NVIC.NVICIP150>
#### NVIC.NVICSTIR
<link=p.NVIC.NVICSTIR>
#### opacr4
<link=OPACR4>
#### mcr
<link=MCR>
#### SW_PAD_CTL_PAD_PMIC_STBY_REQ
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_PMIC_STBY_REQ>
#### sw_pad_ctl_pad_pmic_stby_req
<link=SW_PAD_CTL_PAD_PMIC_STBY_REQ>
#### gpr5
<link=GPR5>
#### gpr14
<link=GPR14>
#### gpr21
<link=GPR21>
#### GPR22
<link=p.IOMUXC_GPR.GPR22>
#### win
<link=WIN>
#### HC0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ADC1.HC0
   p.ADC2.HC0
#### r1
<link=R1>
#### SCR4C
<link=p.TRNG.SCR4C>
#### ENT[15]
<link=p.TRNG.ENT[15]>
#### hpsicr
<link=HPSICR>
#### HPSVCR
<link=p.SNVS.HPSVCR>
#### HPSR
<link=p.SNVS.HPSR>
#### hphacivr
<link=HPHACIVR>
#### lppgdr
<link=LPPGDR>
#### lpzmkr[0]
<link=LPZMKR[0]>
#### lpzmkr[5]
<link=LPZMKR[5]>
#### LPGPR_alias[3]
<link=p.SNVS.LPGPR_alias[3]>
#### pfd_480_clr
<link=PFD_480_CLR>
#### PFD_528_CLR
<link=p.CCM_ANALOG.PFD_528_CLR>
#### MISC2_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC2_SET
   p.PMU.MISC2_SET
#### REG_3P0_SET
<link=p.PMU.REG_3P0_SET>
#### reg_3p0_clr
<link=REG_3P0_CLR>
#### REG_CORE
<link=p.PMU.REG_CORE>
#### REG_CORE_TOG
<link=p.PMU.REG_CORE_TOG>
#### TEMPSENSE0_SET
<link=p.TEMPMON.TEMPSENSE0_SET>
#### tempsense1_set
<link=TEMPSENSE1_SET>
#### USB1_VBUS_DETECT
<link=p.USB_ANALOG.USB1_VBUS_DETECT>
#### usb2_chrg_detect
<link=USB2_CHRG_DETECT>
#### USB2_CHRG_DETECT_CLR
<link=p.USB_ANALOG.USB2_CHRG_DETECT_CLR>
#### usb2_chrg_detect_clr
<link=USB2_CHRG_DETECT_CLR>
#### USB2_CHRG_DETECT_TOG
<link=p.USB_ANALOG.USB2_CHRG_DETECT_TOG>
#### usb2_loopback_set
<link=USB2_LOOPBACK_SET>
#### usb2_misc_set
<link=USB2_MISC_SET>
#### USB2_MISC_CLR
<link=p.USB_ANALOG.USB2_MISC_CLR>
#### osc_config0_clr
<link=OSC_CONFIG0_CLR>
#### osc_config1
<link=OSC_CONFIG1>
#### OSC_CONFIG2
<link=p.XTALOSC24M.OSC_CONFIG2>
#### pwd_set
<link=PWD_SET>
#### RX_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.RX_SET
   p.USBPHY2.RX_SET
#### DEBUG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.DEBUG
   p.USBPHY2.DEBUG
#### DEBUG_TOG
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.DEBUG_TOG
   p.USBPHY2.DEBUG_TOG
#### VERSION
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBPHY1.VERSION
   p.USBPHY2.VERSION
   p.OCOTP.VERSION
   p.DCP.VERSION
#### CSL5
<link=p.CSU.CSL5>
#### csl8
<link=CSL8>
#### CSL16
<link=p.CSU.CSL16>
#### csl25
<link=CSL25>
#### hp0
<link=HP0>
#### hpcontrol0
<link=HPCONTROL0>
#### PRE_CHARGE_TIME
<link=p.TSC.PRE_CHARGE_TIME>
#### SEEI
<link=p.DMA0.SEEI>
#### seei
<link=SEEI>
#### DCHPRI3
<link=p.DMA0.DCHPRI3>
#### dchpri3
<link=DCHPRI3>
#### DCHPRI16
<link=p.DMA0.DCHPRI16>
#### dchpri16
<link=DCHPRI16>
#### TCD0_SLAST
<link=p.DMA0.TCD0_SLAST>
#### tcd0_citer_elinkyes
<link=TCD0_CITER_ELINKYES>
#### TCD1_SLAST
<link=p.DMA0.TCD1_SLAST>
#### tcd1_daddr
<link=TCD1_DADDR>
#### tcd1_citer_elinkno
<link=TCD1_CITER_ELINKNO>
#### TCD2_SOFF
<link=p.DMA0.TCD2_SOFF>
#### tcd2_csr
<link=TCD2_CSR>
#### tcd3_daddr
<link=TCD3_DADDR>
#### tcd4_biter_elinkno
<link=TCD4_BITER_ELINKNO>
#### TCD6_NBYTES_MLOFFYES
<link=p.DMA0.TCD6_NBYTES_MLOFFYES>
#### TCD6_CITER_ELINKYES
<link=p.DMA0.TCD6_CITER_ELINKYES>
#### TCD7_DLASTSGA
<link=p.DMA0.TCD7_DLASTSGA>
#### tcd7_csr
<link=TCD7_CSR>
#### tcd8_attr
<link=TCD8_ATTR>
#### TCD9_BITER_ELINKNO
<link=p.DMA0.TCD9_BITER_ELINKNO>
#### TCD10_NBYTES_MLOFFNO
<link=p.DMA0.TCD10_NBYTES_MLOFFNO>
#### TCD11_NBYTES_MLOFFYES
<link=p.DMA0.TCD11_NBYTES_MLOFFYES>
#### TCD12_BITER_ELINKYES
<link=p.DMA0.TCD12_BITER_ELINKYES>
#### tcd13_soff
<link=TCD13_SOFF>
#### TCD13_ATTR
<link=p.DMA0.TCD13_ATTR>
#### tcd14_dlastsga
<link=TCD14_DLASTSGA>
#### TCD14_CSR
<link=p.DMA0.TCD14_CSR>
#### tcd15_nbytes_mlno
<link=TCD15_NBYTES_MLNO>
#### TCD16_SOFF
<link=p.DMA0.TCD16_SOFF>
#### tcd16_daddr
<link=TCD16_DADDR>
#### tcd17_slast
<link=TCD17_SLAST>
#### TCD17_CSR
<link=p.DMA0.TCD17_CSR>
#### TCD18_NBYTES_MLOFFYES
<link=p.DMA0.TCD18_NBYTES_MLOFFYES>
#### TCD19_ATTR
<link=p.DMA0.TCD19_ATTR>
#### TCD19_BITER_ELINKNO
<link=p.DMA0.TCD19_BITER_ELINKNO>
#### TCD20_SOFF
<link=p.DMA0.TCD20_SOFF>
#### TCD21_BITER_ELINKYES
<link=p.DMA0.TCD21_BITER_ELINKYES>
#### TCD22_DLASTSGA
<link=p.DMA0.TCD22_DLASTSGA>
#### TCD23_NBYTES_MLNO
<link=p.DMA0.TCD23_NBYTES_MLNO>
#### tcd23_nbytes_mloffno
<link=TCD23_NBYTES_MLOFFNO>
#### TCD23_DADDR
<link=p.DMA0.TCD23_DADDR>
#### tcd25_saddr
<link=TCD25_SADDR>
#### TCD25_CITER_ELINKYES
<link=p.DMA0.TCD25_CITER_ELINKYES>
#### TCD25_BITER_ELINKNO
<link=p.DMA0.TCD25_BITER_ELINKNO>
#### tcd26_biter_elinkyes
<link=TCD26_BITER_ELINKYES>
#### TCD28_ATTR
<link=p.DMA0.TCD28_ATTR>
#### tcd29_soff
<link=TCD29_SOFF>
#### TCD29_NBYTES_MLOFFNO
<link=p.DMA0.TCD29_NBYTES_MLOFFNO>
#### tcd29_citer_elinkno
<link=TCD29_CITER_ELINKNO>
#### TCD30_SOFF
<link=p.DMA0.TCD30_SOFF>
#### tcd30_nbytes_mlno
<link=TCD30_NBYTES_MLNO>
#### tcd31_nbytes_mloffno
<link=TCD31_NBYTES_MLOFFNO>
#### TCD31_DADDR
<link=p.DMA0.TCD31_DADDR>
#### tcd31_daddr
<link=TCD31_DADDR>
#### TCD31_CSR
<link=p.DMA0.TCD31_CSR>
#### TCD31_BITER_ELINKNO
<link=p.DMA0.TCD31_BITER_ELINKNO>
#### CHCFG[14]
<link=p.DMAMUX.CHCFG[14]>
#### CHCFG[21]
<link=p.DMAMUX.CHCFG[21]>
#### CHCFG[31]
<link=p.DMAMUX.CHCFG[31]>
#### IMR2
<link=p.GPC.IMR2>
#### imr4
<link=IMR4>
#### SBMR1
<link=p.SRC.SBMR1>
#### csr
<link=CSR>
#### CBCMR
<link=p.CCM.CBCMR>
#### CS2CDR
<link=p.CCM.CS2CDR>
#### cscdr3
<link=CSCDR3>
#### CCGR3
<link=p.CCM.CCGR3>
#### ccgr3
<link=CCGR3>
#### ROMPATCHCNTL
<link=p.ROMC.ROMPATCHCNTL>
#### ROMPATCH1A
<link=p.ROMC.ROMPATCH1A>
#### rompatch8a
<link=ROMPATCH8A>
#### rompatch15a
<link=ROMPATCH15A>
#### SHIFTBUFBYS[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFBYS[0]
   p.FLEXIO2.SHIFTBUFBYS[0]
   p.FLEXIO3.SHIFTBUFBYS[0]
#### shiftbufbys[3]
<link=SHIFTBUFBYS[3]>
#### TIMCTL[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCTL[0]
   p.FLEXIO2.TIMCTL[0]
   p.FLEXIO3.TIMCTL[0]
#### timctl[1]
<link=TIMCTL[1]>
#### TIMCFG[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.TIMCFG[0]
   p.FLEXIO2.TIMCFG[0]
   p.FLEXIO3.TIMCFG[0]
#### timcfg[3]
<link=TIMCFG[3]>
#### SHIFTBUFNBS[1]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFNBS[1]
   p.FLEXIO2.SHIFTBUFNBS[1]
   p.FLEXIO3.SHIFTBUFNBS[1]
#### shiftbufhws[1]
<link=SHIFTBUFHWS[1]>
#### GDIR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.GPIO1.GDIR
   p.GPIO5.GDIR
   p.GPIO2.GDIR
   p.GPIO3.GDIR
   p.GPIO4.GDIR
   p.GPIO6.GDIR
   p.GPIO7.GDIR
   p.GPIO8.GDIR
   p.GPIO9.GDIR
#### CTRL1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.CTRL1
   p.CAN2.CTRL1
   p.CAN3.CTRL1
   p.TMR1.CTRL1
   p.TMR2.CTRL1
   p.TMR3.CTRL1
   p.TMR4.CTRL1
   p.LCDIF.CTRL1
   p.XBARA1.CTRL1
#### ESR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.ESR1
   p.CAN2.ESR1
   p.CAN3.ESR1
#### rximr2
<link=RXIMR2>
#### rximr13
<link=RXIMR13>
#### rximr35
<link=RXIMR35>
#### RXIMR44
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR44
   p.CAN2.RXIMR44
#### rximr45
<link=RXIMR45>
#### RXIMR57
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR57
   p.CAN2.RXIMR57
#### RXIMR62
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR62
   p.CAN2.RXIMR62
#### rximr63
<link=RXIMR63>
#### ID0
<link=p.CAN3.ID0>
#### mb0_32b_word2
<link=MB0_32B_WORD2>
#### word11
<link=WORD11>
#### CS2
<link=p.CAN3.CS2>
#### mb0_64b_word7
<link=MB0_64B_WORD7>
#### mb1_16b_word2
<link=MB1_16B_WORD2>
#### mb2_8b_word0
<link=MB2_8B_WORD0>
#### MB0_64B_WORD12
<link=p.CAN3.MB0_64B_WORD12>
#### MB1_32B_WORD4
<link=p.CAN3.MB1_32B_WORD4>
#### MB2_16B_WORD2
<link=p.CAN3.MB2_16B_WORD2>
#### mb0_64b_word15
<link=MB0_64B_WORD15>
#### mb2_32b_cs
<link=MB2_32B_CS>
#### mb3_16b_word1
<link=MB3_16B_WORD1>
#### MB5_8B_WORD0
<link=p.CAN3.MB5_8B_WORD0>
#### WORD15
<link=p.CAN3.WORD15>
#### cs6
<link=CS6>
#### MB2_32B_WORD2
<link=p.CAN3.MB2_32B_WORD2>
#### MB4_16B_ID
<link=p.CAN3.MB4_16B_ID>
#### mb1_64b_word6
<link=MB1_64B_WORD6>
#### mb2_32b_word7
<link=MB2_32B_WORD7>
#### mb7_8b_id
<link=MB7_8B_ID>
#### MB3_32B_WORD4
<link=p.CAN3.MB3_32B_WORD4>
#### MB9_8B_WORD0
<link=p.CAN3.MB9_8B_WORD0>
#### MB2_64B_WORD7
<link=p.CAN3.MB2_64B_WORD7>
#### mb7_16b_word2
<link=MB7_16B_WORD2>
#### mb11_8b_word1
<link=MB11_8B_WORD1>
#### mb4_32b_word6
<link=MB4_32B_WORD6>
#### mb8_16b_word0
<link=MB8_16B_WORD0>
#### CS13
<link=p.CAN3.CS13>
#### MB5_32B_WORD0
<link=p.CAN3.MB5_32B_WORD0>
#### MB2_64B_WORD15
<link=p.CAN3.MB2_64B_WORD15>
#### word013
<link=WORD013>
#### MB9_16B_ID
<link=p.CAN3.MB9_16B_ID>
#### MB10_16B_WORD1
<link=p.CAN3.MB10_16B_WORD1>
#### MB15_8B_WORD1
<link=p.CAN3.MB15_8B_WORD1>
#### MB3_64B_WORD7
<link=p.CAN3.MB3_64B_WORD7>
#### mb10_16b_word3
<link=MB10_16B_WORD3>
#### mb16_8b_id
<link=MB16_8B_ID>
#### mb6_32b_word3
<link=MB6_32B_WORD3>
#### mb3_64b_word11
<link=MB3_64B_WORD11>
#### WORD116
<link=p.CAN3.WORD116>
#### MB6_32B_WORD6
<link=p.CAN3.MB6_32B_WORD6>
#### ID17
<link=p.CAN3.ID17>
#### MB3_64B_WORD13
<link=p.CAN3.MB3_64B_WORD13>
#### MB12_16B_CS
<link=p.CAN3.MB12_16B_CS>
#### MB7_32B_WORD0
<link=p.CAN3.MB7_32B_WORD0>
#### id18
<link=ID18>
#### MB12_16B_WORD1
<link=p.CAN3.MB12_16B_WORD1>
#### mb4_64b_word4
<link=MB4_64B_WORD4>
#### MB19_8B_WORD1
<link=p.CAN3.MB19_8B_WORD1>
#### mb20_8b_cs
<link=MB20_8B_CS>
#### mb20_8b_id
<link=MB20_8B_ID>
#### mb14_16b_word0
<link=MB14_16B_WORD0>
#### MB8_32B_WORD6
<link=p.CAN3.MB8_32B_WORD6>
#### MB22_8B_ID
<link=p.CAN3.MB22_8B_ID>
#### MB22_8B_WORD0
<link=p.CAN3.MB22_8B_WORD0>
#### mb22_8b_word0
<link=MB22_8B_WORD0>
#### word022
<link=WORD022>
#### cs23
<link=CS23>
#### WORD123
<link=p.CAN3.WORD123>
#### mb5_64b_word5
<link=MB5_64B_WORD5>
#### mb9_32b_word5
<link=MB9_32B_WORD5>
#### MB16_16B_WORD2
<link=p.CAN3.MB16_16B_WORD2>
#### mb16_16b_word3
<link=MB16_16B_WORD3>
#### mb25_8b_word1
<link=MB25_8B_WORD1>
#### mb5_64b_word12
<link=MB5_64B_WORD12>
#### CS27
<link=p.CAN3.CS27>
#### MB6_64B_WORD0
<link=p.CAN3.MB6_64B_WORD0>
#### word127
<link=WORD127>
#### mb11_32b_word3
<link=MB11_32B_WORD3>
#### mb19_16b_word0
<link=MB19_16B_WORD0>
#### ID29
<link=p.CAN3.ID29>
#### MB11_32B_WORD5
<link=p.CAN3.MB11_32B_WORD5>
#### MB19_16B_WORD1
<link=p.CAN3.MB19_16B_WORD1>
#### mb29_8b_id
<link=MB29_8B_ID>
#### mb29_8b_word1
<link=MB29_8B_WORD1>
#### MB30_8B_CS
<link=p.CAN3.MB30_8B_CS>
#### mb30_8b_id
<link=MB30_8B_ID>
#### MB20_16B_WORD0
<link=p.CAN3.MB20_16B_WORD0>
#### WORD130
<link=p.CAN3.WORD130>
#### MB31_8B_ID
<link=p.CAN3.MB31_8B_ID>
#### MB31_8B_WORD0
<link=p.CAN3.MB31_8B_WORD0>
#### mb7_64b_cs
<link=MB7_64B_CS>
#### mb32_8b_cs
<link=MB32_8B_CS>
#### MB13_32B_CS
<link=p.CAN3.MB13_32B_CS>
#### MB7_64B_WORD2
<link=p.CAN3.MB7_64B_WORD2>
#### mb33_8b_cs
<link=MB33_8B_CS>
#### MB22_16B_WORD3
<link=p.CAN3.MB22_16B_WORD3>
#### mb13_32b_word6
<link=MB13_32B_WORD6>
#### mb23_16b_cs
<link=MB23_16B_CS>
#### MB13_32B_WORD7
<link=p.CAN3.MB13_32B_WORD7>
#### MB34_8B_WORD1
<link=p.CAN3.MB34_8B_WORD1>
#### word134
<link=WORD134>
#### MB23_16B_WORD3
<link=p.CAN3.MB23_16B_WORD3>
#### MB24_16B_CS
<link=p.CAN3.MB24_16B_CS>
#### mb36_8b_word1
<link=MB36_8B_WORD1>
#### MB24_16B_WORD3
<link=p.CAN3.MB24_16B_WORD3>
#### MB15_32B_WORD1
<link=p.CAN3.MB15_32B_WORD1>
#### MB25_16B_WORD3
<link=p.CAN3.MB25_16B_WORD3>
#### MB38_8B_WORD1
<link=p.CAN3.MB38_8B_WORD1>
#### cs39
<link=CS39>
#### mb26_16b_cs
<link=MB26_16B_CS>
#### WORD039
<link=p.CAN3.WORD039>
#### mb15_32b_word7
<link=MB15_32B_WORD7>
#### MB8_64B_WORD15
<link=p.CAN3.MB8_64B_WORD15>
#### MB27_16B_WORD0
<link=p.CAN3.MB27_16B_WORD0>
#### MB41_8B_CS
<link=p.CAN3.MB41_8B_CS>
#### MB9_64B_WORD5
<link=p.CAN3.MB9_64B_WORD5>
#### mb17_32b_word2
<link=MB17_32B_WORD2>
#### mb9_64b_word10
<link=MB9_64B_WORD10>
#### MB17_32B_WORD3
<link=p.CAN3.MB17_32B_WORD3>
#### CS44
<link=p.CAN3.CS44>
#### mb29_16b_word0
<link=MB29_16B_WORD0>
#### MB9_64B_WORD15
<link=p.CAN3.MB9_64B_WORD15>
#### word144
<link=WORD144>
#### MB18_32B_WORD4
<link=p.CAN3.MB18_32B_WORD4>
#### mb31_16b_cs
<link=MB31_16B_CS>
#### MB10_64B_WORD5
<link=p.CAN3.MB10_64B_WORD5>
#### mb18_32b_word5
<link=MB18_32B_WORD5>
#### mb31_16b_id
<link=MB31_16B_ID>
#### mb10_64b_word6
<link=MB10_64B_WORD6>
#### id47
<link=ID47>
#### mb19_32b_cs
<link=MB19_32B_CS>
#### mb31_16b_word3
<link=MB31_16B_WORD3>
#### cs48
<link=CS48>
#### mb48_8b_word0
<link=MB48_8B_WORD0>
#### WORD148
<link=p.CAN3.WORD148>
#### mb49_8b_cs
<link=MB49_8B_CS>
#### word049
<link=WORD049>
#### mb50_8b_cs
<link=MB50_8B_CS>
#### mb51_8b_cs
<link=MB51_8B_CS>
#### MB11_64B_WORD5
<link=p.CAN3.MB11_64B_WORD5>
#### MB34_16B_ID
<link=p.CAN3.MB34_16B_ID>
#### mb11_64b_word6
<link=MB11_64B_WORD6>
#### mb20_32b_word5
<link=MB20_32B_WORD5>
#### MB34_16B_WORD1
<link=p.CAN3.MB34_16B_WORD1>
#### MB21_32B_ID
<link=p.CAN3.MB21_32B_ID>
#### cs53
<link=CS53>
#### WORD053
<link=p.CAN3.WORD053>
#### mb53_8b_word1
<link=MB53_8B_WORD1>
#### mb12_64b_cs
<link=MB12_64B_CS>
#### id54
<link=ID54>
#### mb21_32b_word6
<link=MB21_32B_WORD6>
#### MB36_16B_WORD3
<link=p.CAN3.MB36_16B_WORD3>
#### MB56_8B_WORD0
<link=p.CAN3.MB56_8B_WORD0>
#### mb22_32b_word5
<link=MB22_32B_WORD5>
#### mb56_8b_word1
<link=MB56_8B_WORD1>
#### word157
<link=WORD157>
#### ID58
<link=p.CAN3.ID58>
#### mb12_64b_word15
<link=MB12_64B_WORD15>
#### mb23_32b_word2
<link=MB23_32B_WORD2>
#### MB60_8B_WORD1
<link=p.CAN3.MB60_8B_WORD1>
#### MB40_16B_WORD2
<link=p.CAN3.MB40_16B_WORD2>
#### id61
<link=ID61>
#### WORD062
<link=p.CAN3.WORD062>
#### RXIMR[2]
<link=p.CAN3.RXIMR[2]>
#### RXIMR[8]
<link=p.CAN3.RXIMR[8]>
#### RXIMR[21]
<link=p.CAN3.RXIMR[21]>
#### rximr[38]
<link=RXIMR[38]>
#### rximr[51]
<link=RXIMR[51]>
#### rximr[54]
<link=RXIMR[54]>
#### RXIMR[59]
<link=p.CAN3.RXIMR[59]>
#### rximr[60]
<link=RXIMR[60]>
#### hr_time_stamp[2]
<link=HR_TIME_STAMP[2]>
#### hr_time_stamp[5]
<link=HR_TIME_STAMP[5]>
#### hr_time_stamp[28]
<link=HR_TIME_STAMP[28]>
#### hr_time_stamp[45]
<link=HR_TIME_STAMP[45]>
#### hr_time_stamp[55]
<link=HR_TIME_STAMP[55]>
#### ERFFEL[8]
<link=p.CAN3.ERFFEL[8]>
#### ERFFEL[10]
<link=p.CAN3.ERFFEL[10]>
#### erffel[10]
<link=ERFFEL[10]>
#### ERFFEL[22]
<link=p.CAN3.ERFFEL[22]>
#### ERFFEL[25]
<link=p.CAN3.ERFFEL[25]>
#### ERFFEL[28]
<link=p.CAN3.ERFFEL[28]>
#### erffel[28]
<link=ERFFEL[28]>
#### ERFFEL[36]
<link=p.CAN3.ERFFEL[36]>
#### erffel[49]
<link=ERFFEL[49]>
#### ERFFEL[57]
<link=p.CAN3.ERFFEL[57]>
#### ERFFEL[95]
<link=p.CAN3.ERFFEL[95]>
#### erffel[95]
<link=ERFFEL[95]>
#### ERFFEL[106]
<link=p.CAN3.ERFFEL[106]>
#### erffel[106]
<link=ERFFEL[106]>
#### ERFFEL[112]
<link=p.CAN3.ERFFEL[112]>
#### erffel[112]
<link=ERFFEL[112]>
#### hold1
<link=HOLD1>
#### SCTRL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.SCTRL3
   p.TMR2.SCTRL3
   p.TMR3.SCTRL3
   p.TMR4.SCTRL3
#### CMPLD11
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.CMPLD11
   p.TMR2.CMPLD11
   p.TMR3.CMPLD11
   p.TMR4.CMPLD11
#### filt0
<link=FILT0>
#### mem2
<link=MEM2>
#### MEM4
<link=p.OCOTP.MEM4>
#### ana2
<link=ANA2>
#### OTPMK_CRC32
<link=p.OCOTP.OTPMK_CRC32>
#### sw_gp21
<link=SW_GP21>
#### misc_conf1
<link=MISC_CONF1>
#### ROM_PATCH4
<link=p.OCOTP.ROM_PATCH4>
#### rom_patch4
<link=ROM_PATCH4>
#### GP32
<link=p.OCOTP.GP32>
#### gp42
<link=GP42>
#### SW_MUX_CTL_PAD_GPIO_EMC_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_09>
#### sw_mux_ctl_pad_gpio_emc_09
<link=SW_MUX_CTL_PAD_GPIO_EMC_09>
#### SW_MUX_CTL_PAD_GPIO_EMC_37
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_37>
#### sw_mux_ctl_pad_gpio_emc_37
<link=SW_MUX_CTL_PAD_GPIO_EMC_37>
#### sw_mux_ctl_pad_gpio_ad_b0_03
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_03>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_07>
#### sw_mux_ctl_pad_gpio_ad_b0_14
<link=SW_MUX_CTL_PAD_GPIO_AD_B0_14>
#### SW_MUX_CTL_PAD_GPIO_B0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_10>
#### sw_mux_ctl_pad_gpio_b0_11
<link=SW_MUX_CTL_PAD_GPIO_B0_11>
#### sw_pad_ctl_pad_gpio_emc_03
<link=SW_PAD_CTL_PAD_GPIO_EMC_03>
#### sw_pad_ctl_pad_gpio_emc_18
<link=SW_PAD_CTL_PAD_GPIO_EMC_18>
#### sw_pad_ctl_pad_gpio_emc_25
<link=SW_PAD_CTL_PAD_GPIO_EMC_25>
#### SW_PAD_CTL_PAD_GPIO_EMC_30
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_30>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_02>
#### sw_pad_ctl_pad_gpio_ad_b0_14
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_14>
#### sw_pad_ctl_pad_gpio_ad_b1_00
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_00>
#### SW_PAD_CTL_PAD_GPIO_B0_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_08>
#### SW_PAD_CTL_PAD_GPIO_B0_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_14>
#### sw_pad_ctl_pad_gpio_b0_15
<link=SW_PAD_CTL_PAD_GPIO_B0_15>
#### sw_pad_ctl_pad_gpio_b1_01
<link=SW_PAD_CTL_PAD_GPIO_B1_01>
#### SW_PAD_CTL_PAD_GPIO_B1_14
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_14>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_01>
#### ccm_pmic_ready_select_input
<link=CCM_PMIC_READY_SELECT_INPUT>
#### csi_data05_select_input
<link=CSI_DATA05_SELECT_INPUT>
#### csi_data07_select_input
<link=CSI_DATA07_SELECT_INPUT>
#### ENET_TXCLK_SELECT_INPUT
<link=p.IOMUXC.ENET_TXCLK_SELECT_INPUT>
#### flexcan1_rx_select_input
<link=FLEXCAN1_RX_SELECT_INPUT>
#### FLEXPWM4_PWMA0_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM4_PWMA0_SELECT_INPUT>
#### flexspia_data3_select_input
<link=FLEXSPIA_DATA3_SELECT_INPUT>
#### flexspib_data3_select_input
<link=FLEXSPIB_DATA3_SELECT_INPUT>
#### LPI2C4_SDA_SELECT_INPUT
<link=p.IOMUXC.LPI2C4_SDA_SELECT_INPUT>
#### LPSPI3_SDI_SELECT_INPUT
<link=p.IOMUXC.LPSPI3_SDI_SELECT_INPUT>
#### lpuart3_cts_b_select_input
<link=LPUART3_CTS_B_SELECT_INPUT>
#### lpuart3_tx_select_input
<link=LPUART3_TX_SELECT_INPUT>
#### LPUART5_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART5_TX_SELECT_INPUT>
#### XBAR1_IN05_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN05_SELECT_INPUT>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_07>
#### SW_MUX_CTL_PAD_GPIO_SPI_B0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_10>
#### sw_mux_ctl_pad_gpio_spi_b0_11
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_11>
#### sw_mux_ctl_pad_gpio_spi_b1_05
<link=SW_MUX_CTL_PAD_GPIO_SPI_B1_05>
#### SW_PAD_CTL_PAD_GPIO_SPI_B0_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_01>
#### ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXERR_SELECT_INPUT>
#### FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT
<link=p.IOMUXC.FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT>
#### flexspi2_ipp_ind_sck_fb_select_input
<link=FLEXSPI2_IPP_IND_SCK_FB_SELECT_INPUT>
#### sai3_ipp_ind_sai_txsync_select_input
<link=SAI3_IPP_IND_SAI_TXSYNC_SELECT_INPUT>
#### CANFD_IPP_IND_CANRX_SELECT_INPUT
<link=p.IOMUXC.CANFD_IPP_IND_CANRX_SELECT_INPUT>
#### MCR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.MCR2
   p.FLEXSPI2.MCR2
#### INTEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.INTEN
   p.FLEXSPI2.INTEN
   p.SEMC.INTEN
#### flshcr1b2
<link=FLSHCR1B2>
#### flshcr4
<link=FLSHCR4>
#### IPTXFCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.IPTXFCR
   p.FLEXSPI2.IPTXFCR
#### rfdr[7]
<link=RFDR[7]>
#### rfdr[12]
<link=RFDR[12]>
#### rfdr[18]
<link=RFDR[18]>
#### rfdr[20]
<link=RFDR[20]>
#### RFDR[25]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.RFDR[25]
   p.FLEXSPI2.RFDR[25]
#### TFDR[3]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[3]
   p.FLEXSPI2.TFDR[3]
#### tfdr[3]
<link=TFDR[3]>
#### TFDR[18]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[18]
   p.FLEXSPI2.TFDR[18]
#### tfdr[18]
<link=TFDR[18]>
#### lut[0]
<link=LUT[0]>
#### LUT[4]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[4]
   p.FLEXSPI2.LUT[4]
#### LUT[12]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[12]
   p.FLEXSPI2.LUT[12]
#### lut[12]
<link=LUT[12]>
#### LUT[15]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[15]
   p.FLEXSPI2.LUT[15]
#### LUT[18]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[18]
   p.FLEXSPI2.LUT[18]
#### lut[18]
<link=LUT[18]>
#### LUT[20]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[20]
   p.FLEXSPI2.LUT[20]
#### LUT[33]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[33]
   p.FLEXSPI2.LUT[33]
#### lut[41]
<link=LUT[41]>
#### lut[51]
<link=LUT[51]>
#### OUT_PS_LRC
<link=p.PXP.OUT_PS_LRC>
#### PS_SCALE
<link=p.PXP.PS_SCALE>
#### as_buf
<link=AS_BUF>
#### AS_CLRKEYHIGH
<link=p.PXP.AS_CLRKEYHIGH>
#### ctrl1_set
<link=CTRL1_SET>
#### ctrl1_clr
<link=CTRL1_CLR>
#### CRC_STAT
<link=p.LCDIF.CRC_STAT>
#### pigeonctrl0_set
<link=PIGEONCTRL0_SET>
#### PIGEONCTRL0_CLR
<link=p.LCDIF.PIGEONCTRL0_CLR>
#### PIGEONCTRL2_TOG
<link=p.LCDIF.PIGEONCTRL2_TOG>
#### PIGEON_0_2
<link=p.LCDIF.PIGEON_0_2>
#### PIGEON_2_0
<link=p.LCDIF.PIGEON_2_0>
#### PIGEON_5_0
<link=p.LCDIF.PIGEON_5_0>
#### PIGEON_7_2
<link=p.LCDIF.PIGEON_7_2>
#### pigeon_8_0
<link=PIGEON_8_0>
#### pigeon_11_1
<link=PIGEON_11_1>
#### lut0_addr
<link=LUT0_ADDR>
#### CSIDMASA_FB1
<link=p.CSI.CSIDMASA_FB1>
#### csifbuf_para
<link=CSIFBUF_PARA>
#### sys_ctrl
<link=SYS_CTRL>
#### int_signal_en
<link=INT_SIGNAL_EN>
#### adma_sys_addr
<link=ADMA_SYS_ADDR>
#### EIMR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.EIMR
   p.ENET2.EIMR
#### eimr
<link=EIMR>
#### RDAR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RDAR
   p.ENET2.RDAR
#### tcr
<link=TCR>
#### IAUR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IAUR
   p.ENET2.IAUR
#### iaur
<link=IAUR>
#### MRBR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.MRBR
   p.ENET2.MRBR
#### RAEM
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RAEM
   p.ENET2.RAEM
#### raem
<link=RAEM>
#### ieee_t_mcol
<link=IEEE_T_MCOL>
#### rmon_r_bc_pkt
<link=RMON_R_BC_PKT>
#### RMON_R_P64
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_P64
   p.ENET2.RMON_R_P64
#### RMON_R_OCTETS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_R_OCTETS
   p.ENET2.RMON_R_OCTETS
#### atvr
<link=ATVR>
#### GPTIMER0CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.GPTIMER0CTRL
   p.USB2.GPTIMER0CTRL
#### endptlistaddr
<link=ENDPTLISTADDR>
#### ENDPTPRIME
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTPRIME
   p.USB2.ENDPTPRIME
#### ENDPTCTRL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTCTRL5
   p.USB2.ENDPTCTRL5
#### endptctrl7
<link=ENDPTCTRL7>
#### br4
<link=BR4>
#### norcr3
<link=NORCR3>
#### SRAMCR0
<link=p.SEMC.SRAMCR0>
#### DBICR1
<link=p.SEMC.DBICR1>
#### iptxdat
<link=IPTXDAT>
#### STS3
<link=p.SEMC.STS3>
#### sts5
<link=STS5>
#### STS14
<link=p.SEMC.STS14>
#### PACKET4
<link=p.DCP.PACKET4>
#### ch1sema
<link=CH1SEMA>
#### ch2stat_clr
<link=CH2STAT_CLR>
#### CH3OPTS_CLR
<link=p.DCP.CH3OPTS_CLR>
#### stc
<link=STC>
#### RCR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RCR1
   p.SAI2.RCR1
   p.SAI3.RCR1
#### RFR[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.RFR[0]
   p.SAI2.RFR[0]
   p.SAI3.RFR[0]
#### fcr
<link=FCR>
#### trig1_chain_1_0
<link=TRIG1_CHAIN_1_0>
#### trig1_chain_3_2
<link=TRIG1_CHAIN_3_2>
#### trig2_counter
<link=TRIG2_COUNTER>
#### TRIG2_RESULT_1_0
<link=p.ADC_ETC.TRIG2_RESULT_1_0>
#### TRIG2_RESULT_3_2
<link=p.ADC_ETC.TRIG2_RESULT_3_2>
#### TRIG4_RESULT_1_0
<link=p.ADC_ETC.TRIG4_RESULT_1_0>
#### TRIG7_CHAIN_1_0
<link=p.ADC_ETC.TRIG7_CHAIN_1_0>
#### TRIG7_RESULT_1_0
<link=p.ADC_ETC.TRIG7_RESULT_1_0>
#### TRIG7_RESULT_3_2
<link=p.ADC_ETC.TRIG7_RESULT_3_2>
#### trig7_result_5_4
<link=TRIG7_RESULT_5_4>
#### BFCRT013
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AOI1.BFCRT013
   p.AOI2.BFCRT013
#### sel9
<link=SEL9>
#### sel15
<link=SEL15>
#### sel20
<link=SEL20>
#### SEL22
<link=p.XBARA1.SEL22>
#### SEL40
<link=p.XBARA1.SEL40>
#### sel42
<link=SEL42>
#### SEL57
<link=p.XBARA1.SEL57>
#### sel59
<link=SEL59>
#### SM0FRACVAL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0FRACVAL5
   p.PWM2.SM0FRACVAL5
   p.PWM3.SM0FRACVAL5
   p.PWM4.SM0FRACVAL5
#### SM0DISMAP0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0DISMAP0
   p.PWM2.SM0DISMAP0
   p.PWM3.SM0DISMAP0
   p.PWM4.SM0DISMAP0
#### SM0CAPTCTRLB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CAPTCTRLB
   p.PWM2.SM0CAPTCTRLB
   p.PWM3.SM0CAPTCTRLB
   p.PWM4.SM0CAPTCTRLB
#### sm0captctrlb
<link=SM0CAPTCTRLB>
#### SM0CAPTCOMPB
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CAPTCOMPB
   p.PWM2.SM0CAPTCOMPB
   p.PWM3.SM0CAPTCOMPB
   p.PWM4.SM0CAPTCOMPB
#### SM0CVAL2CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CVAL2CYC
   p.PWM2.SM0CVAL2CYC
   p.PWM3.SM0CVAL2CYC
   p.PWM4.SM0CVAL2CYC
#### sm0cval4cyc
<link=SM0CVAL4CYC>
#### sm1fracval5
<link=SM1FRACVAL5>
#### sm1sts
<link=SM1STS>
#### sm1dmaen
<link=SM1DMAEN>
#### SM1DTCNT0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1DTCNT0
   p.PWM2.SM1DTCNT0
   p.PWM3.SM1DTCNT0
   p.PWM4.SM1DTCNT0
#### SM1CVAL5
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CVAL5
   p.PWM2.SM1CVAL5
   p.PWM3.SM1CVAL5
   p.PWM4.SM1CVAL5
#### sm2val1
<link=SM2VAL1>
#### sm2fracval3
<link=SM2FRACVAL3>
#### SM2VAL3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2VAL3
   p.PWM2.SM2VAL3
   p.PWM3.SM2VAL3
   p.PWM4.SM2VAL3
#### sm2dismap1
<link=SM2DISMAP1>
#### sm2dtcnt1
<link=SM2DTCNT1>
#### sm2cval1cyc
<link=SM2CVAL1CYC>
#### sm3val0
<link=SM3VAL0>
#### SM3VAL2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3VAL2
   p.PWM2.SM3VAL2
   p.PWM3.SM3VAL2
   p.PWM4.SM3VAL2
#### sm3fracval4
<link=SM3FRACVAL4>
#### SM3DMAEN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3DMAEN
   p.PWM2.SM3DMAEN
   p.PWM3.SM3DMAEN
   p.PWM4.SM3DMAEN
#### SM3DTCNT0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3DTCNT0
   p.PWM2.SM3DTCNT0
   p.PWM3.SM3DTCNT0
   p.PWM4.SM3DTCNT0
#### sm3dtcnt1
<link=SM3DTCNT1>
#### sm3cval3
<link=SM3CVAL3>
#### aes_key0_w3
<link=AES_KEY0_W3>
#### region1_top
<link=REGION1_TOP>
#### mcfgr0
<link=MCFGR0>
#### sder
<link=SDER>
#### scfgr1
<link=SCFGR1>
#### cfsr
<link=CFSR>
#### mmfar
<link=MMFAR>
#### ID_PFR1
<link=p.SystemControl.ID_PFR1>
#### id_afr0
<link=ID_AFR0>
#### ID_ISAR0
<link=p.SystemControl.ID_ISAR0>
#### cm7_abfsr
<link=CM7_ABFSR>
#### NVICISER2
<link=p.NVIC.NVICISER2>
#### NVICICER1
<link=p.NVIC.NVICICER1>
#### nvicicpr0
<link=NVICICPR0>
#### NVICICPR1
<link=p.NVIC.NVICICPR1>
#### nvicip0
<link=NVICIP0>
#### nvicip18
<link=NVICIP18>
#### nvicip22
<link=NVICIP22>
#### NVICIP30
<link=p.NVIC.NVICIP30>
#### nvicip40
<link=NVICIP40>
#### NVICIP49
<link=p.NVIC.NVICIP49>
#### NVICIP52
<link=p.NVIC.NVICIP52>
#### nvicip75
<link=NVICIP75>
#### nvicip84
<link=NVICIP84>
#### NVICIP96
<link=p.NVIC.NVICIP96>
#### NVICIP109
<link=p.NVIC.NVICIP109>
#### nvicip114
<link=NVICIP114>
#### nvicip121
<link=NVICIP121>
#### NVICIP131
<link=p.NVIC.NVICIP131>
#### nvicip143
<link=NVICIP143>
#### NVICIP144
<link=p.NVIC.NVICIP144>
#### NVICIP153
<link=p.NVIC.NVICIP153>
