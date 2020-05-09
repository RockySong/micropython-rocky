#### oart.servo
<lang=chs>
控制舵机的python类型
支持\旋转
</lang>
<lang=dft>
A Python type to control servos
support rotating
</lang>

#### p.
<lang=dft>
ADC1            ADC2            ADC_ETC         AIPSTZ1         
AIPSTZ2         AIPSTZ3         AIPSTZ4         AOI1            
AOI2            BEE             CAN1            CAN2            
CAN3            CCM             CCM_ANALOG      CMP1            
CMP2            CMP3            CMP4            CSI             
CSU             DCDC            DCP             DMA0            
DMAMUX          ENC1            ENC2            ENC3            
ENC4            ENET            ENET2           EWM             
FLEXIO1         FLEXIO2         FLEXIO3         FLEXRAM         
FLEXSPI         FLEXSPI2        GPC             GPIO1           
GPIO2           GPIO3           GPIO4           GPIO5           
GPIO6           GPIO7           GPIO8           GPIO9           
GPT1            GPT2            IOMUXC          IOMUXC_GPR      
IOMUXC_SNVS     IOMUXC_SNVS_GPR KPP             LCDIF           
LPI2C1          LPI2C2          LPI2C3          LPI2C4          
LPSPI1          LPSPI2          LPSPI3          LPSPI4          
LPUART1         LPUART2         LPUART3         LPUART4         
LPUART5         LPUART6         LPUART7         LPUART8         
NVIC            OCOTP           PGC             PIT             
PMU             PWM1            PWM2            PWM3            
PWM4            PXP             ROMC            RTWDOG          
SAI1            SAI2            SAI3            SEMC            
SNVS            SPDIF           SRC             SystemControl   
TEMPMON         TMR1            TMR2            TMR3            
TMR4            TRNG            TSC             USB1            
USB2            USBNC1          USBNC2          USBPHY1         
USBPHY2         USB_ANALOG      USDHC1          USDHC2          
WDOG1           WDOG2           XBARA1          XBARB2          
XBARB3          XTALOSC24M      
type help('p.{perip name}') such as p.GPIO1 to check details
输入help('p.外设名') 例如 p.GPIO1 以查看细节
#### AIPSTZ2.OPACR2
<link=p.AIPSTZ2.OPACR2>
#### p.AIPSTZ2.OPACR4
<lang=dft>
 (rw)  [1;33m0x4017c050[0m (0x4017c000 + 0x0050)
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
#### p.AIPSTZ3.OPACR
<lang=dft>
 (rw)  [1;33m0x4027c040[0m (0x4027c000 + 0x0040)
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
#### aipstz3.opacr3
<link=p.AIPSTZ3.OPACR3>
#### AIPSTZ4.OPACR1
<link=p.AIPSTZ4.OPACR1>
#### aipstz4.opacr4
<link=p.AIPSTZ4.OPACR4>
#### DCDC.REG2
<link=p.DCDC.REG2>
#### PIT.TFLG0
<link=p.PIT.TFLG0>
#### p.pit.tctrl1
<link=p.PIT.TCTRL1>
#### p.PIT.CVAL3
<lang=dft>
 (ro)  [1;33m0x40084134[0m (0x40084000 + 0x0134)
Current Timer Value Register
 (ro) (32)  [0;32mTVL[0m  - [31:00] -  Current Timer Value
</lang>
#### p.PIT.TFLG3
<lang=dft>
 (rw)  [1;33m0x4008413c[0m (0x40084000 + 0x013c)
Timer Flag Register
 (rw) (01)  [0;32mTIF[0m  - [00:00] -  Timer Interrupt Flag
      0 - TIF_0 :
         Timeout has not yet occurred.
      0x1 - TIF_1 :
         Timeout has occurred.
</lang>
#### CMP1.CR1
<link=p.CMP1.CR1>
#### p.cmp1.scr
<link=p.CMP1.SCR>
#### p.cmp2
<link=p.CMP2>
#### CMP2.CR1
<link=p.CMP2.CR1>
#### cmp2.scr
<link=p.CMP2.SCR>
#### cmp2.daccr
<link=p.CMP2.DACCR>
#### CMP2.MUXCR
<link=p.CMP2.MUXCR>
#### p.CMP3.CR1
<lang=dft>
 (rw)  [1;33m0x40094011[0m (0x40094010 + 0x0001)
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
#### p.CMP4
<lang=dft>
base: 0x40094018
CR0             CR1             DACCR           FPR             
MUXCR           SCR             
输入 p.CMP4.{reg_name} 以查看寄存器的详细信息
type p.CMP4.{reg_name} to check details of registers
</lang>
#### CMP4.CR1
<link=p.CMP4.CR1>
#### CMP4.DACCR
<link=p.CMP4.DACCR>
#### cmp4.muxcr
<link=p.CMP4.MUXCR>
#### iomuxc_snvs_gpr.gpr0
<link=p.IOMUXC_SNVS_GPR.GPR0>
#### IOMUXC_SNVS.SW_PAD_CTL_PAD_TEST_MODE
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_TEST_MODE>
#### IOMUXC_SNVS.SW_PAD_CTL_PAD_WAKEUP
<link=p.IOMUXC_SNVS.SW_PAD_CTL_PAD_WAKEUP>
#### p.iomuxc_gpr.gpr6
<link=p.IOMUXC_GPR.GPR6>
#### IOMUXC_GPR.GPR6
<link=p.IOMUXC_GPR.GPR6>
#### p.IOMUXC_GPR.GPR10
<lang=dft>
 (rw)  [1;33m0x400ac028[0m (0x400ac000 + 0x0028)
GPR10 General Purpose Register
 (rw) (01)  [0;32mNIDEN[0m  - [00:00] -  ARM non-secure (non-invasive) debug enable
      0 - NIDEN_0 :
         Debug turned off.
      0x1 - NIDEN_1 :
         Debug enabled (default).
 (rw) (01)  [0;32mDBG_EN[0m  - [01:01] -  ARM invasive debug enable
      0 - DBG_EN_0 :
         Debug turned off.
      0x1 - DBG_EN_1 :
         Debug enabled (default).
 (rw) (01)  [0;32mSEC_ERR_RESP[0m  - [02:02] -  Security error response enable for all security gaskets (on both AHB and AXI bu
 ses)
      0 - SEC_ERR_RESP_0 :
         OKEY response
      0x1 - SEC_ERR_RESP_1 :
         SLVError (default)
 (rw) (01)  [0;32mDCPKEY_OCOTP_OR_KEYMUX[0m  - [04:04] -  DCP Key selection bit.
      0 - DCPKEY_OCOTP_OR_KEYMUX_0 :
         Select key from Key MUX (SNVS/OTPMK).
      0x1 - DCPKEY_OCOTP_OR_KEYMUX_1 :
         Select key from OCOTP (SW_GP2).
 (rw) (01)  [0;32mOCRAM_TZ_EN[0m  - [08:08] -  OCRAM TrustZone (TZ) enable.
      0 - OCRAM_TZ_EN_0 :
         The TrustZone feature is disabled. Entire OCRAM space is available for 
         all access types (secure/non-secure/user/supervisor).
      0x1 - OCRAM_TZ_EN_1 :
         The TrustZone feature is enabled. Access to address in the range specif
         ied by [ENDADDR:STARTADDR] follows the execution mode access policy des
         cribed in CSU chapter.
 (rw) (07)  [0;32mOCRAM_TZ_ADDR[0m  - [15:09] -  OCRAM TrustZone (TZ) start address
 (rw) (01)  [0;32mLOCK_NIDEN[0m  - [16:16] -  Lock NIDEN field for changes
      0 - LOCK_NIDEN_0 :
         Field is not locked
      0x1 - LOCK_NIDEN_1 :
         Field is locked (read access only)
 (rw) (01)  [0;32mLOCK_DBG_EN[0m  - [17:17] -  Lock DBG_EN field for changes
      0 - LOCK_DBG_EN_0 :
         Field is not locked
      0x1 - LOCK_DBG_EN_1 :
         Field is locked (read access only)
 (rw) (01)  [0;32mLOCK_SEC_ERR_RESP[0m  - [18:18] -  Lock SEC_ERR_RESP field for changes
      0 - LOCK_SEC_ERR_RESP_0 :
         Field is not locked
      0x1 - LOCK_SEC_ERR_RESP_1 :
         Field is locked (read access only)
 (rw) (01)  [0;32mLOCK_DCPKEY_OCOTP_OR_KEYMUX[0m  - [20:20] -  Lock DCP Key OCOTP/Key MUX selection bit
      0 - LOCK_DCPKEY_OCOTP_OR_KEYMUX_0 :
         Field is not locked
      0x1 - LOCK_DCPKEY_OCOTP_OR_KEYMUX_1 :
         Field is locked (read access only)
 (rw) (01)  [0;32mLOCK_OCRAM_TZ_EN[0m  - [24:24] -  Lock OCRAM_TZ_EN field for changes
      0 - LOCK_OCRAM_TZ_EN_0 :
         Field is not locked
      0x1 - LOCK_OCRAM_TZ_EN_1 :
         Field is locked (read access only)
 (rw) (07)  [0;32mLOCK_OCRAM_TZ_ADDR[0m  - [31:25] -  Lock OCRAM_TZ_ADDR field for changes
      0 - LOCK_OCRAM_TZ_ADDR_0 :
         Field is not locked
      0x1 - LOCK_OCRAM_TZ_ADDR_1 :
         Field is locked (read access only)
</lang>
#### IOMUXC_GPR.GPR12
<link=p.IOMUXC_GPR.GPR12>
#### p.iomuxc_gpr.gpr17
<link=p.IOMUXC_GPR.GPR17>
#### iomuxc_gpr.gpr22
<link=p.IOMUXC_GPR.GPR22>
#### p.IOMUXC_GPR.GPR25
<lang=dft>
 (rw)  [1;33m0x400ac064[0m (0x400ac000 + 0x0064)
GPR25 General Purpose Register
 (rw) (01)  [0;32mLOCK_M7_APC_AC_R3_TOP[0m  - [00:00] -  lock M7_APC_AC_R3_TOP field for changes
      0 - LOCK_M7_APC_AC_R3_TOP_0 :
         Register field [31:1] is not locked
      0x1 - LOCK_M7_APC_AC_R3_TOP_1 :
         Register field [31:1] is locked (read access only)
 (rw) (29)  [0;32mM7_APC_AC_R3_TOP[0m  - [31:03] -  APC start address of memory region-3
</lang>
#### IOMUXC_GPR.GPR27
<link=p.IOMUXC_GPR.GPR27>
#### iomuxc_gpr.gpr31
<link=p.IOMUXC_GPR.GPR31>
#### IOMUXC_GPR.GPR34
<link=p.IOMUXC_GPR.GPR34>
#### p.flexram
<link=p.FLEXRAM>
#### p.FLEXRAM.TCM_CTRL
<lang=dft>
 (rw)  [1;33m0x400b0000[0m (0x400b0000 + 0x0000)
TCM CRTL Register
 (rw) (01)  [0;32mTCM_WWAIT_EN[0m  - [00:00] -  TCM Write Wait Mode Enable
      0 - TCM_WWAIT_EN_0 :
         TCM write fast mode: Write RAM accesses are expected to be finished in 
         1-cycle.
      0x1 - TCM_WWAIT_EN_1 :
         TCM write wait mode: Write RAM accesses are expected to be finished in 
         2-cycles.
 (rw) (01)  [0;32mTCM_RWAIT_EN[0m  - [01:01] -  TCM Read Wait Mode Enable
      0 - TCM_RWAIT_EN_0 :
         TCM read fast mode: Read RAM accesses are expected to be finished in 1-
         cycle.
      0x1 - TCM_RWAIT_EN_1 :
         TCM read wait mode: Read RAM accesses are expected to be finished in 2-
         cycles.
 (rw) (01)  [0;32mFORCE_CLK_ON[0m  - [02:02] -  Force RAM Clock Always On
</lang>
#### p.FLEXRAM.INT_STATUS
<lang=dft>
 (rw)  [1;33m0x400b0010[0m (0x400b0000 + 0x0010)
Interrupt Status Register
 (rw) (01)  [0;32mITCM_ERR_STATUS[0m  - [03:03] -  ITCM Access Error Status
      0 - ITCM_ERR_STATUS_0 :
         ITCM access error does not happen
      0x1 - ITCM_ERR_STATUS_1 :
         ITCM access error happens.
 (rw) (01)  [0;32mDTCM_ERR_STATUS[0m  - [04:04] -  DTCM Access Error Status
      0 - DTCM_ERR_STATUS_0 :
         DTCM access error does not happen
      0x1 - DTCM_ERR_STATUS_1 :
         DTCM access error happens.
 (rw) (01)  [0;32mOCRAM_ERR_STATUS[0m  - [05:05] -  OCRAM Access Error Status
      0 - OCRAM_ERR_STATUS_0 :
         OCRAM access error does not happen
      0x1 - OCRAM_ERR_STATUS_1 :
         OCRAM access error happens.
</lang>
#### ewm.serv
<link=p.EWM.SERV>
#### EWM.CMPH
<link=p.EWM.CMPH>
#### ewm.clkctrl
<link=p.EWM.CLKCTRL>
#### p.wdog1
<link=p.WDOG1>
#### wdog1.wcr
<link=p.WDOG1.WCR>
#### p.wdog2.wcr
<link=p.WDOG2.WCR>
#### RTWDOG.CNT
<link=p.RTWDOG.CNT>
#### p.RTWDOG.TOVAL
<lang=dft>
 (rw)  [1;33m0x400bc008[0m (0x400bc000 + 0x0008)
Watchdog Timeout Value Register
 (rw) (08)  [0;32mTOVALLOW[0m  - [07:00] -  Low byte of the timeout value
 (rw) (08)  [0;32mTOVALHIGH[0m  - [15:08] -  High byte of the timeout value
</lang>
#### rtwdog.toval
<link=p.RTWDOG.TOVAL>
#### p.adc1.hc6
<link=p.ADC1.HC6>
#### p.adc1.r3
<link=p.ADC1.R3>
#### adc1.r3
<link=p.ADC1.R3>
#### p.ADC1.R7
<lang=dft>
 (ro)  [1;33m0x400c4040[0m (0x400c4000 + 0x0040)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### ADC1.OFS
<link=p.ADC1.OFS>
#### p.adc2.hc0
<link=p.ADC2.HC0>
#### adc2.hc0
<link=p.ADC2.HC0>
#### adc2.r1
<link=p.ADC2.R1>
#### ADC2.R5
<link=p.ADC2.R5>
#### p.ADC2.R7
<lang=dft>
 (ro)  [1;33m0x400c8040[0m (0x400c8000 + 0x0040)
Data result register for HW triggers
 (ro) (12)  [0;32mCDATA[0m  - [11:00] -  Data (result of an ADC conversion)
</lang>
#### ADC2.GC
<link=p.ADC2.GC>
#### TRNG.MCTL
<link=p.TRNG.MCTL>
#### TRNG.SCMISC
<link=p.TRNG.SCMISC>
#### p.trng.frqcnt
<link=p.TRNG.FRQCNT>
#### p.trng.scr1c
<link=p.TRNG.SCR1C>
#### TRNG.SCR1C
<link=p.TRNG.SCR1C>
#### p.TRNG.SCR2C
<lang=dft>
 (ro)  [1;33m0x400cc028[0m (0x400cc000 + 0x0028)
Statistical Check Run Length 2 Count Register
 (ro) (14)  [0;32mR2_0_CT[0m  - [13:00] -  Runs of Zero, Length 2 Count
 (ro) (14)  [0;32mR2_1_CT[0m  - [29:16] -  Runs of One, Length 2 Count
</lang>
#### TRNG.SCR3L
<link=p.TRNG.SCR3L>
#### p.trng.scr5l
<link=p.TRNG.SCR5L>
#### p.trng.status
<link=p.TRNG.STATUS>
#### p.trng.ent[0]
<link=p.TRNG.ENT[0]>
#### trng.ent[4]
<link=p.TRNG.ENT[4]>
#### p.TRNG.ENT[10]
<lang=dft>
 (ro)  [1;33m0x400cc068[0m (0x400cc000 + 0x0068)
Entropy Read Register
 (ro) (32)  [0;32mENT[0m  - [31:00] -  Entropy Value
</lang>
#### TRNG.ENT[12]
<link=p.TRNG.ENT[12]>
#### p.TRNG.PKRCNT10
<lang=dft>
 (ro)  [1;33m0x400cc080[0m (0x400cc000 + 0x0080)
Statistical Check Poker Count 1 and 0 Register
 (ro) (16)  [0;32mPKR_0_CT[0m  - [15:00] -  Poker 0h Count
 (ro) (16)  [0;32mPKR_1_CT[0m  - [31:16] -  Poker 1h Count
</lang>
#### p.trng.pkrcnt10
<link=p.TRNG.PKRCNT10>
#### trng.pkrcnt32
<link=p.TRNG.PKRCNT32>
#### TRNG.PKRCNT32
<link=p.TRNG.PKRCNT32>
#### p.SNVS.HPHACIVR
<lang=dft>
 (rw)  [1;33m0x400d401c[0m (0x400d4000 + 0x001c)
SNVS_HP High Assurance Counter IV Register
 (rw) (32)  [0;32mHAC_COUNTER_IV[0m  - [31:00] -  High Assurance Counter Initial Value This register is used to set the starting 
 count value to the high assurance counter
</lang>
#### SNVS.HPTALR
<link=p.SNVS.HPTALR>
#### p.SNVS.LPMKCR
<lang=dft>
 (rw)  [1;33m0x400d403c[0m (0x400d4000 + 0x003c)
SNVS_LP Master Key Control Register
 (rw) (02)  [0;32mMASTER_KEY_SEL[0m  - [01:00] -  Master Key Select These bits select the SNVS Master Key output when Master Key 
 Select bits are enabled by MKS_EN bit in the HPCOMR
      #0x - MASTER_KEY_SEL_0 :
         Select one time programmable master key.
      0x2 - MASTER_KEY_SEL_2 :
         Select zeroizable master key when MKS_EN bit is set .
      0x3 - MASTER_KEY_SEL_3 :
         Select combined master key when MKS_EN bit is set .
 (rw) (01)  [0;32mZMK_HWP[0m  - [02:02] -  Zeroizable Master Key hardware Programming mode When set, only the hardware key
  programming mechanism can set the ZMK and software cannot read it
      0 - ZMK_HWP_0 :
         ZMK is in the software programming mode.
      0x1 - ZMK_HWP_1 :
         ZMK is in the hardware programming mode.
 (rw) (01)  [0;32mZMK_VAL[0m  - [03:03] -  Zeroizable Master Key Valid When set, the ZMK value can be selected by the mast
 er key control block for use by cryptographic modules
      0 - ZMK_VAL_0 :
         ZMK is not valid.
      0x1 - ZMK_VAL_1 :
         ZMK is valid.
 (rw) (01)  [0;32mZMK_ECC_EN[0m  - [04:04] -  Zeroizable Master Key Error Correcting Code Check Enable Writing one to this fi
 eld automatically calculates and sets the ZMK ECC value in the ZMK_ECC_VALUE fi
 eld of this register
      0 - ZMK_ECC_EN_0 :
         ZMK ECC check is disabled.
      0x1 - ZMK_ECC_EN_1 :
         ZMK ECC check is enabled.
 (ro) (09)  [0;32mZMK_ECC_VALUE[0m  - [15:07] -  Zeroizable Master Key Error Correcting Code Value This field is automatically c
 alculated and set when one is written into ZMK_ECC_EN bit of this register
</lang>
#### p.snvs.lpmkcr
<link=p.SNVS.LPMKCR>
#### SNVS.LPZMKR[2]
<link=p.SNVS.LPZMKR[2]>
#### p.snvs.lpzmkr[7]
<link=p.SNVS.LPZMKR[7]>
#### snvs.lpzmkr[7]
<link=p.SNVS.LPZMKR[7]>
#### snvs.lpgpr_alias[1]
<link=p.SNVS.LPGPR_ALIAS[1]>
#### p.snvs.lpgpr[4]
<link=p.SNVS.LPGPR[4]>
#### p.CCM_ANALOG.PLL_ARM
<lang=dft>
 (rw)  [1;33m0x400d8000[0m (0x400d8000 + 0x0000)
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
#### p.CCM_ANALOG.PLL_ARM_TOG
<lang=dft>
 (rw)  [1;33m0x400d800c[0m (0x400d8000 + 0x000c)
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
#### CCM_ANALOG.PLL_SYS_SS
<link=p.CCM_ANALOG.PLL_SYS_SS>
#### CCM_ANALOG.PLL_SYS_DENOM
<link=p.CCM_ANALOG.PLL_SYS_DENOM>
#### p.ccm_analog.pll_audio
<link=p.CCM_ANALOG.PLL_AUDIO>
#### ccm_analog.pll_video_set
<link=p.CCM_ANALOG.PLL_VIDEO_SET>
#### CCM_ANALOG.PLL_VIDEO_NUM
<link=p.CCM_ANALOG.PLL_VIDEO_NUM>
#### ccm_analog.pll_enet_clr
<link=p.CCM_ANALOG.PLL_ENET_CLR>
#### CCM_ANALOG.PFD_480_SET
<link=p.CCM_ANALOG.PFD_480_SET>
#### ccm_analog.misc1_clr
<link=p.CCM_ANALOG.MISC1_CLR>
#### pmu.reg_1p1_tog
<link=p.PMU.REG_1P1_TOG>
#### p.pmu.reg_3p0_set
<link=p.PMU.REG_3P0_SET>
#### pmu.reg_3p0_clr
<link=p.PMU.REG_3P0_CLR>
#### pmu.reg_3p0_tog
<link=p.PMU.REG_3P0_TOG>
#### p.pmu.reg_2p5_set
<link=p.PMU.REG_2P5_SET>
#### pmu.reg_2p5_clr
<link=p.PMU.REG_2P5_CLR>
#### PMU.MISC1_CLR
<link=p.PMU.MISC1_CLR>
#### PMU.MISC2_CLR
<link=p.PMU.MISC2_CLR>
#### p.tempmon.tempsense2
<link=p.TEMPMON.TEMPSENSE2>
#### p.tempmon.tempsense2_clr
<link=p.TEMPMON.TEMPSENSE2_CLR>
#### TEMPMON.TEMPSENSE2_CLR
<link=p.TEMPMON.TEMPSENSE2_CLR>
#### p.USB_ANALOG
<lang=dft>
base: 0x400d8000
DIGPROG         USB1_CHRG_DETECT  USB1_CHRG_DETECT_CLR  USB1_CHRG_DETECT_SET  
USB1_CHRG_DETECT_STAT  USB1_CHRG_DETECT_TOG  USB1_LOOPBACK   USB1_LOOPBACK_CLR  
USB1_LOOPBACK_SET  USB1_LOOPBACK_TOG  USB1_MISC       USB1_MISC_CLR   
USB1_MISC_SET   USB1_MISC_TOG   USB1_VBUS_DETECT  USB1_VBUS_DETECT_CLR  
USB1_VBUS_DETECT_SET  USB1_VBUS_DETECT_STAT  USB1_VBUS_DETECT_TOG  
USB2_CHRG_DETECT  USB2_CHRG_DETECT_CLR  USB2_CHRG_DETECT_SET  USB2_CHRG_DETECT_STAT  
USB2_CHRG_DETECT_TOG  USB2_LOOPBACK   USB2_LOOPBACK_CLR  USB2_LOOPBACK_SET  
USB2_LOOPBACK_TOG  USB2_MISC       USB2_MISC_CLR   USB2_MISC_SET   
USB2_MISC_TOG   USB2_VBUS_DETECT  USB2_VBUS_DETECT_CLR  USB2_VBUS_DETECT_SET  
USB2_VBUS_DETECT_STAT  USB2_VBUS_DETECT_TOG  
输入 p.USB_ANALOG.{reg_name} 以查看寄存器的详细信息
type p.USB_ANALOG.{reg_name} to check details of registers
</lang>
#### usb_analog.usb1_vbus_detect_set
<link=p.USB_ANALOG.USB1_VBUS_DETECT_SET>
#### p.USB_ANALOG.USB1_VBUS_DETECT_CLR
<lang=dft>
 (rw)  [1;33m0x400d81a8[0m (0x400d8000 + 0x01a8)
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
#### p.usb_analog.usb1_chrg_detect_clr
<link=p.USB_ANALOG.USB1_CHRG_DETECT_CLR>
#### USB_ANALOG.USB1_CHRG_DETECT_TOG
<link=p.USB_ANALOG.USB1_CHRG_DETECT_TOG>
#### USB_ANALOG.USB1_LOOPBACK
<link=p.USB_ANALOG.USB1_LOOPBACK>
#### p.USB_ANALOG.USB2_MISC
<lang=dft>
 (rw)  [1;33m0x400d8250[0m (0x400d8000 + 0x0250)
USB Misc Register
 (rw) (01)  [0;32mHS_USE_EXTERNAL_R[0m  - [00:00] -  Use external resistor to generate the current bias for the high speed transmitt
 er
 (rw) (01)  [0;32mEN_DEGLITCH[0m  - [01:01] -  Enable the deglitching circuit of the USB PLL output.
 (rw) (01)  [0;32mEN_CLK_UTMI[0m  - [30:30] -  Enables the clk to the UTMI block.
</lang>
#### USB_ANALOG.USB2_MISC_CLR
<link=p.USB_ANALOG.USB2_MISC_CLR>
#### p.XTALOSC24M.OSC_CONFIG0
<lang=dft>
 (rw)  [1;33m0x400d82a0[0m (0x400d8000 + 0x02a0)
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
#### XTALOSC24M.OSC_CONFIG0
<link=p.XTALOSC24M.OSC_CONFIG0>
#### xtalosc24m.osc_config0_clr
<link=p.XTALOSC24M.OSC_CONFIG0_CLR>
#### xtalosc24m.osc_config1_set
<link=p.XTALOSC24M.OSC_CONFIG1_SET>
#### p.XTALOSC24M.OSC_CONFIG2_TOG
<lang=dft>
 (rw)  [1;33m0x400d82cc[0m (0x400d8000 + 0x02cc)
XTAL OSC Configuration 2 Register
 (rw) (12)  [0;32mCOUNT_1M_TRG[0m  - [11:00] -  The target count used to tune the 1MHz clock frequency
 (rw) (01)  [0;32mENABLE_1M[0m  - [16:16] -  Enable the 1MHz clock output. 0 - disabled; 1 - enabled.
 (rw) (01)  [0;32mMUX_1M[0m  - [17:17] -  Mux the corrected or uncorrected 1MHz clock to the output
 (rw) (01)  [0;32mCLK_1M_ERR_FL[0m  - [31:31] -  Flag indicates that the count_1m count wasn't reached within 1 32kHz period
</lang>
#### usbphy1.pwd_set
<link=p.USBPHY1.PWD_SET>
#### p.usbphy1.tx
<link=p.USBPHY1.TX>
#### usbphy1.ctrl_set
<link=p.USBPHY1.CTRL_SET>
#### p.usbphy1.ctrl_tog
<link=p.USBPHY1.CTRL_TOG>
#### USBPHY1.STATUS
<link=p.USBPHY1.STATUS>
#### p.USBPHY1.DEBUG_CLR
<lang=dft>
 (rw)  [1;33m0x400d9058[0m (0x400d9000 + 0x0058)
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
#### p.usbphy1.debug1
<link=p.USBPHY1.DEBUG1>
#### p.usbphy1.debug1_clr
<link=p.USBPHY1.DEBUG1_CLR>
#### p.usbphy2.pwd_set
<link=p.USBPHY2.PWD_SET>
#### p.USBPHY2.TX
<lang=dft>
 (rw)  [1;33m0x400da010[0m (0x400da000 + 0x0010)
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
#### p.USBPHY2.TX_TOG
<lang=dft>
 (rw)  [1;33m0x400da01c[0m (0x400da000 + 0x001c)
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
#### USBPHY2.RX_CLR
<link=p.USBPHY2.RX_CLR>
#### p.USBPHY2.STATUS
<lang=dft>
 (rw)  [1;33m0x400da040[0m (0x400da000 + 0x0040)
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
#### p.usbphy2.debug_set
<link=p.USBPHY2.DEBUG_SET>
#### csu.csl12
<link=p.CSU.CSL12>
#### CSU.CSL12
<link=p.CSU.CSL12>
#### p.CSU.CSL13
<lang=dft>
 (rw)  [1;33m0x400dc034[0m (0x400dc000 + 0x0034)
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
#### p.csu.csl13
<link=p.CSU.CSL13>
#### p.CSU.CSL22
<lang=dft>
 (rw)  [1;33m0x400dc058[0m (0x400dc000 + 0x0058)
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
#### p.csu.csl22
<link=p.CSU.CSL22>
#### csu.csl28
<link=p.CSU.CSL28>
#### CSU.CSL28
<link=p.CSU.CSL28>
#### p.csu.hp0
<link=p.CSU.HP0>
#### TSC.PRE_CHARGE_TIME
<link=p.TSC.PRE_CHARGE_TIME>
#### TSC.FLOW_CONTROL
<link=p.TSC.FLOW_CONTROL>
#### p.dma0.es
<link=p.DMA0.ES>
#### DMA0.ES
<link=p.DMA0.ES>
#### DMA0.EEI
<link=p.DMA0.EEI>
#### dma0.cerr
<link=p.DMA0.CERR>
#### p.DMA0.ERR
<lang=dft>
 (rw)  [1;33m0x400e802c[0m (0x400e8000 + 0x002c)
Error Register
 (rw) (01)  [0;32mERR0[0m  - [00:00] -  Error In Channel 0
      0 - ERR0_0 :
         An error in this channel has not occurred
      0x1 - ERR0_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR1[0m  - [01:01] -  Error In Channel 1
      0 - ERR1_0 :
         An error in this channel has not occurred
      0x1 - ERR1_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR2[0m  - [02:02] -  Error In Channel 2
      0 - ERR2_0 :
         An error in this channel has not occurred
      0x1 - ERR2_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR3[0m  - [03:03] -  Error In Channel 3
      0 - ERR3_0 :
         An error in this channel has not occurred
      0x1 - ERR3_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR4[0m  - [04:04] -  Error In Channel 4
      0 - ERR4_0 :
         An error in this channel has not occurred
      0x1 - ERR4_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR5[0m  - [05:05] -  Error In Channel 5
      0 - ERR5_0 :
         An error in this channel has not occurred
      0x1 - ERR5_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR6[0m  - [06:06] -  Error In Channel 6
      0 - ERR6_0 :
         An error in this channel has not occurred
      0x1 - ERR6_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR7[0m  - [07:07] -  Error In Channel 7
      0 - ERR7_0 :
         An error in this channel has not occurred
      0x1 - ERR7_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR8[0m  - [08:08] -  Error In Channel 8
      0 - ERR8_0 :
         An error in this channel has not occurred
      0x1 - ERR8_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR9[0m  - [09:09] -  Error In Channel 9
      0 - ERR9_0 :
         An error in this channel has not occurred
      0x1 - ERR9_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR10[0m  - [10:10] -  Error In Channel 10
      0 - ERR10_0 :
         An error in this channel has not occurred
      0x1 - ERR10_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR11[0m  - [11:11] -  Error In Channel 11
      0 - ERR11_0 :
         An error in this channel has not occurred
      0x1 - ERR11_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR12[0m  - [12:12] -  Error In Channel 12
      0 - ERR12_0 :
         An error in this channel has not occurred
      0x1 - ERR12_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR13[0m  - [13:13] -  Error In Channel 13
      0 - ERR13_0 :
         An error in this channel has not occurred
      0x1 - ERR13_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR14[0m  - [14:14] -  Error In Channel 14
      0 - ERR14_0 :
         An error in this channel has not occurred
      0x1 - ERR14_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR15[0m  - [15:15] -  Error In Channel 15
      0 - ERR15_0 :
         An error in this channel has not occurred
      0x1 - ERR15_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR16[0m  - [16:16] -  Error In Channel 16
      0 - ERR16_0 :
         An error in this channel has not occurred
      0x1 - ERR16_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR17[0m  - [17:17] -  Error In Channel 17
      0 - ERR17_0 :
         An error in this channel has not occurred
      0x1 - ERR17_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR18[0m  - [18:18] -  Error In Channel 18
      0 - ERR18_0 :
         An error in this channel has not occurred
      0x1 - ERR18_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR19[0m  - [19:19] -  Error In Channel 19
      0 - ERR19_0 :
         An error in this channel has not occurred
      0x1 - ERR19_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR20[0m  - [20:20] -  Error In Channel 20
      0 - ERR20_0 :
         An error in this channel has not occurred
      0x1 - ERR20_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR21[0m  - [21:21] -  Error In Channel 21
      0 - ERR21_0 :
         An error in this channel has not occurred
      0x1 - ERR21_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR22[0m  - [22:22] -  Error In Channel 22
      0 - ERR22_0 :
         An error in this channel has not occurred
      0x1 - ERR22_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR23[0m  - [23:23] -  Error In Channel 23
      0 - ERR23_0 :
         An error in this channel has not occurred
      0x1 - ERR23_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR24[0m  - [24:24] -  Error In Channel 24
      0 - ERR24_0 :
         An error in this channel has not occurred
      0x1 - ERR24_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR25[0m  - [25:25] -  Error In Channel 25
      0 - ERR25_0 :
         An error in this channel has not occurred
      0x1 - ERR25_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR26[0m  - [26:26] -  Error In Channel 26
      0 - ERR26_0 :
         An error in this channel has not occurred
      0x1 - ERR26_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR27[0m  - [27:27] -  Error In Channel 27
      0 - ERR27_0 :
         An error in this channel has not occurred
      0x1 - ERR27_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR28[0m  - [28:28] -  Error In Channel 28
      0 - ERR28_0 :
         An error in this channel has not occurred
      0x1 - ERR28_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR29[0m  - [29:29] -  Error In Channel 29
      0 - ERR29_0 :
         An error in this channel has not occurred
      0x1 - ERR29_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR30[0m  - [30:30] -  Error In Channel 30
      0 - ERR30_0 :
         An error in this channel has not occurred
      0x1 - ERR30_1 :
         An error in this channel has occurred
 (rw) (01)  [0;32mERR31[0m  - [31:31] -  Error In Channel 31
      0 - ERR31_0 :
         An error in this channel has not occurred
      0x1 - ERR31_1 :
         An error in this channel has occurred
</lang>
#### p.DMA0.DCHPRI3
<lang=dft>
 (rw)  [1;33m0x400e8100[0m (0x400e8000 + 0x0100)
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
#### dma0.dchpri3
<link=p.DMA0.DCHPRI3>
#### p.DMA0.DCHPRI15
<lang=dft>
 (rw)  [1;33m0x400e810c[0m (0x400e8000 + 0x010c)
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
#### p.dma0.dchpri17
<link=p.DMA0.DCHPRI17>
#### p.dma0.dchpri23
<link=p.DMA0.DCHPRI23>
#### DMA0.DCHPRI23
<link=p.DMA0.DCHPRI23>
#### p.DMA0.DCHPRI24
<lang=dft>
 (rw)  [1;33m0x400e811b[0m (0x400e8000 + 0x011b)
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
#### DMA0.TCD0_SADDR
<link=p.DMA0.TCD0_SADDR>
#### p.DMA0.TCD0_SOFF
<lang=dft>
 (rw)  [1;33m0x400e9004[0m (0x400e8000 + 0x1004)
TCD Signed Source Address Offset
 (rw) (16)  [0;32mSOFF[0m  - [15:00] -  Source address signed offset
</lang>
#### p.dma0.tcd0_soff
<link=p.DMA0.TCD0_SOFF>
#### p.dma0.tcd0_nbytes_mlno
<link=p.DMA0.TCD0_NBYTES_MLNO>
#### p.DMA0.TCD0_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9016[0m (0x400e8000 + 0x1016)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd0_citer_elinkyes
<link=p.DMA0.TCD0_CITER_ELINKYES>
#### dma0.tcd1_attr
<link=p.DMA0.TCD1_ATTR>
#### dma0.tcd1_daddr
<link=p.DMA0.TCD1_DADDR>
#### DMA0.TCD1_BITER_ELINKYES
<link=p.DMA0.TCD1_BITER_ELINKYES>
#### DMA0.TCD2_ATTR
<link=p.DMA0.TCD2_ATTR>
#### p.DMA0.TCD2_DADDR
<lang=dft>
 (rw)  [1;33m0x400e9050[0m (0x400e8000 + 0x1050)
TCD Destination Address
 (rw) (32)  [0;32mDADDR[0m  - [31:00] -  Destination Address
</lang>
#### dma0.tcd3_daddr
<link=p.DMA0.TCD3_DADDR>
#### dma0.tcd3_citer_elinkno
<link=p.DMA0.TCD3_CITER_ELINKNO>
#### p.DMA0.TCD3_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9076[0m (0x400e8000 + 0x1076)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd3_biter_elinkyes
<link=p.DMA0.TCD3_BITER_ELINKYES>
#### DMA0.TCD4_SOFF
<link=p.DMA0.TCD4_SOFF>
#### p.dma0.tcd4_slast
<link=p.DMA0.TCD4_SLAST>
#### p.dma0.tcd4_citer_elinkno
<link=p.DMA0.TCD4_CITER_ELINKNO>
#### dma0.tcd5_soff
<link=p.DMA0.TCD5_SOFF>
#### DMA0.TCD5_ATTR
<link=p.DMA0.TCD5_ATTR>
#### DMA0.TCD5_NBYTES_MLOFFNO
<link=p.DMA0.TCD5_NBYTES_MLOFFNO>
#### p.DMA0.TCD5_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e90a8[0m (0x400e8000 + 0x10a8)
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
#### p.dma0.tcd5_daddr
<link=p.DMA0.TCD5_DADDR>
#### p.DMA0.TCD6_ATTR
<lang=dft>
 (rw)  [1;33m0x400e90c6[0m (0x400e8000 + 0x10c6)
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
#### p.DMA0.TCD6_SLAST
<lang=dft>
 (rw)  [1;33m0x400e90cc[0m (0x400e8000 + 0x10cc)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### DMA0.TCD6_DADDR
<link=p.DMA0.TCD6_DADDR>
#### dma0.tcd6_citer_elinkyes
<link=p.DMA0.TCD6_CITER_ELINKYES>
#### p.dma0.tcd6_dlastsga
<link=p.DMA0.TCD6_DLASTSGA>
#### p.dma0.tcd7_daddr
<link=p.DMA0.TCD7_DADDR>
#### p.dma0.tcd7_dlastsga
<link=p.DMA0.TCD7_DLASTSGA>
#### DMA0.TCD7_BITER_ELINKYES
<link=p.DMA0.TCD7_BITER_ELINKYES>
#### p.dma0.tcd8_citer_elinkno
<link=p.DMA0.TCD8_CITER_ELINKNO>
#### p.dma0.tcd8_csr
<link=p.DMA0.TCD8_CSR>
#### p.dma0.tcd8_biter_elinkyes
<link=p.DMA0.TCD8_BITER_ELINKYES>
#### DMA0.TCD9_NBYTES_MLNO
<link=p.DMA0.TCD9_NBYTES_MLNO>
#### dma0.tcd9_nbytes_mloffno
<link=p.DMA0.TCD9_NBYTES_MLOFFNO>
#### p.dma0.tcd9_doff
<link=p.DMA0.TCD9_DOFF>
#### p.DMA0.TCD10_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9140[0m (0x400e8000 + 0x1140)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.dma0.tcd10_biter_elinkyes
<link=p.DMA0.TCD10_BITER_ELINKYES>
#### dma0.tcd10_biter_elinkyes
<link=p.DMA0.TCD10_BITER_ELINKYES>
#### p.dma0.tcd11_soff
<link=p.DMA0.TCD11_SOFF>
#### p.dma0.tcd11_doff
<link=p.DMA0.TCD11_DOFF>
#### p.dma0.tcd11_citer_elinkno
<link=p.DMA0.TCD11_CITER_ELINKNO>
#### DMA0.TCD11_DLASTSGA
<link=p.DMA0.TCD11_DLASTSGA>
#### dma0.tcd12_soff
<link=p.DMA0.TCD12_SOFF>
#### dma0.tcd12_nbytes_mlno
<link=p.DMA0.TCD12_NBYTES_MLNO>
#### p.DMA0.TCD12_NBYTES_MLOFFYES
<lang=dft>
 (rw)  [1;33m0x400e9188[0m (0x400e8000 + 0x1188)
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
#### dma0.tcd12_slast
<link=p.DMA0.TCD12_SLAST>
#### DMA0.TCD12_DADDR
<link=p.DMA0.TCD12_DADDR>
#### p.DMA0.TCD12_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9194[0m (0x400e8000 + 0x1194)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.dma0.tcd13_nbytes_mloffyes
<link=p.DMA0.TCD13_NBYTES_MLOFFYES>
#### DMA0.TCD13_CITER_ELINKYES
<link=p.DMA0.TCD13_CITER_ELINKYES>
#### p.DMA0.TCD13_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e91be[0m (0x400e8000 + 0x11be)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD14_NBYTES_MLOFFNO
<link=p.DMA0.TCD14_NBYTES_MLOFFNO>
#### p.dma0.tcd14_daddr
<link=p.DMA0.TCD14_DADDR>
#### p.dma0.tcd14_doff
<link=p.DMA0.TCD14_DOFF>
#### dma0.tcd14_citer_elinkno
<link=p.DMA0.TCD14_CITER_ELINKNO>
#### dma0.tcd15_nbytes_mloffyes
<link=p.DMA0.TCD15_NBYTES_MLOFFYES>
#### p.DMA0.TCD15_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e91f6[0m (0x400e8000 + 0x11f6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.DMA0.TCD15_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e91f6[0m (0x400e8000 + 0x11f6)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD15_BITER_ELINKYES
<link=p.DMA0.TCD15_BITER_ELINKYES>
#### p.dma0.tcd16_attr
<link=p.DMA0.TCD16_ATTR>
#### p.dma0.tcd16_nbytes_mlno
<link=p.DMA0.TCD16_NBYTES_MLNO>
#### p.dma0.tcd16_daddr
<link=p.DMA0.TCD16_DADDR>
#### DMA0.TCD17_SADDR
<link=p.DMA0.TCD17_SADDR>
#### p.DMA0.TCD17_ATTR
<lang=dft>
 (rw)  [1;33m0x400e9226[0m (0x400e8000 + 0x1226)
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
#### p.DMA0.TCD17_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e9228[0m (0x400e8000 + 0x1228)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.dma0.tcd18_attr
<link=p.DMA0.TCD18_ATTR>
#### p.dma0.tcd18_nbytes_mloffno
<link=p.DMA0.TCD18_NBYTES_MLOFFNO>
#### p.DMA0.TCD18_SLAST
<lang=dft>
 (rw)  [1;33m0x400e924c[0m (0x400e8000 + 0x124c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### dma0.tcd18_citer_elinkno
<link=p.DMA0.TCD18_CITER_ELINKNO>
#### dma0.tcd18_dlastsga
<link=p.DMA0.TCD18_DLASTSGA>
#### p.dma0.tcd19_nbytes_mlno
<link=p.DMA0.TCD19_NBYTES_MLNO>
#### p.DMA0.TCD19_SLAST
<lang=dft>
 (rw)  [1;33m0x400e926c[0m (0x400e8000 + 0x126c)
TCD Last Source Address Adjustment
 (rw) (32)  [0;32mSLAST[0m  - [31:00] -  Last Source Address Adjustment
</lang>
#### p.DMA0.TCD19_CITER_ELINKNO
<lang=dft>
 (rw)  [1;33m0x400e9276[0m (0x400e8000 + 0x1276)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
 (rw) (15)  [0;32mCITER[0m  - [14:00] -  Current Major Iteration Count
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd19_citer_elinkyes
<link=p.DMA0.TCD19_CITER_ELINKYES>
#### dma0.tcd19_csr
<link=p.DMA0.TCD19_CSR>
#### p.DMA0.TCD20_DOFF
<lang=dft>
 (rw)  [1;33m0x400e9294[0m (0x400e8000 + 0x1294)
TCD Signed Destination Address Offset
 (rw) (16)  [0;32mDOFF[0m  - [15:00] -  Destination Address Signed Offset
</lang>
#### p.DMA0.TCD20_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e929e[0m (0x400e8000 + 0x129e)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### DMA0.TCD21_SLAST
<link=p.DMA0.TCD21_SLAST>
#### p.dma0.tcd21_daddr
<link=p.DMA0.TCD21_DADDR>
#### p.dma0.tcd23_soff
<link=p.DMA0.TCD23_SOFF>
#### DMA0.TCD23_DADDR
<link=p.DMA0.TCD23_DADDR>
#### DMA0.TCD23_CITER_ELINKNO
<link=p.DMA0.TCD23_CITER_ELINKNO>
#### p.DMA0.TCD23_BITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e92fe[0m (0x400e8000 + 0x12fe)
TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mBITER[0m  - [08:00] -  Starting major iteration count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enables channel-to-channel linking on minor loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### dma0.tcd24_nbytes_mloffno
<link=p.DMA0.TCD24_NBYTES_MLOFFNO>
#### dma0.tcd24_daddr
<link=p.DMA0.TCD24_DADDR>
#### DMA0.TCD25_SADDR
<link=p.DMA0.TCD25_SADDR>
#### p.DMA0.TCD25_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e9328[0m (0x400e8000 + 0x1328)
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
#### p.dma0.tcd26_attr
<link=p.DMA0.TCD26_ATTR>
#### dma0.tcd26_nbytes_mlno
<link=p.DMA0.TCD26_NBYTES_MLNO>
#### dma0.tcd26_daddr
<link=p.DMA0.TCD26_DADDR>
#### p.DMA0.TCD27_SADDR
<lang=dft>
 (rw)  [1;33m0x400e9360[0m (0x400e8000 + 0x1360)
TCD Source Address
 (rw) (32)  [0;32mSADDR[0m  - [31:00] -  Source Address
</lang>
#### p.dma0.tcd27_citer_elinkno
<link=p.DMA0.TCD27_CITER_ELINKNO>
#### p.DMA0.TCD27_CITER_ELINKYES
<lang=dft>
 (rw)  [1;33m0x400e9376[0m (0x400e8000 + 0x1376)
TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
 (rw) (09)  [0;32mCITER[0m  - [08:00] -  Current Major Iteration Count
 (rw) (05)  [0;32mLINKCH[0m  - [13:09] -  Minor Loop Link Channel Number
 (rw) (01)  [0;32mELINK[0m  - [15:15] -  Enable channel-to-channel linking on minor-loop complete
      0 - ELINK_0 :
         The channel-to-channel linking is disabled
      0x1 - ELINK_1 :
         The channel-to-channel linking is enabled
</lang>
#### p.dma0.tcd27_biter_elinkno
<link=p.DMA0.TCD27_BITER_ELINKNO>
#### dma0.tcd27_biter_elinkyes
<link=p.DMA0.TCD27_BITER_ELINKYES>
#### p.dma0.tcd28_doff
<link=p.DMA0.TCD28_DOFF>
#### dma0.tcd29_nbytes_mloffyes
<link=p.DMA0.TCD29_NBYTES_MLOFFYES>
#### p.dma0.tcd29_citer_elinkyes
<link=p.DMA0.TCD29_CITER_ELINKYES>
#### DMA0.TCD30_SADDR
<link=p.DMA0.TCD30_SADDR>
#### DMA0.TCD30_NBYTES_MLNO
<link=p.DMA0.TCD30_NBYTES_MLNO>
#### p.DMA0.TCD30_NBYTES_MLOFFNO
<lang=dft>
 (rw)  [1;33m0x400e93c8[0m (0x400e8000 + 0x13c8)
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
#### p.dma0.tcd30_dlastsga
<link=p.DMA0.TCD30_DLASTSGA>
#### p.dma0.tcd30_biter_elinkyes
<link=p.DMA0.TCD30_BITER_ELINKYES>
#### dma0.tcd30_biter_elinkyes
<link=p.DMA0.TCD30_BITER_ELINKYES>
#### p.DMA0.TCD31_NBYTES_MLNO
<lang=dft>
 (rw)  [1;33m0x400e93e8[0m (0x400e8000 + 0x13e8)
TCD Minor Byte Count (Minor Loop Mapping Disabled)
 (rw) (32)  [0;32mNBYTES[0m  - [31:00] -  Minor Byte Transfer Count
</lang>
#### p.dmamux.chcfg[2]
<link=p.DMAMUX.CHCFG[2]>
#### p.DMAMUX.CHCFG[9]
<lang=dft>
 (rw)  [1;33m0x400ec024[0m (0x400ec000 + 0x0024)
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
#### p.dmamux.chcfg[9]
<link=p.DMAMUX.CHCFG[9]>
#### p.DMAMUX.CHCFG[13]
<lang=dft>
 (rw)  [1;33m0x400ec034[0m (0x400ec000 + 0x0034)
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
#### p.DMAMUX.CHCFG[18]
<lang=dft>
 (rw)  [1;33m0x400ec048[0m (0x400ec000 + 0x0048)
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
#### p.DMAMUX.CHCFG[22]
<lang=dft>
 (rw)  [1;33m0x400ec058[0m (0x400ec000 + 0x0058)
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
#### p.dmamux.chcfg[23]
<link=p.DMAMUX.CHCFG[23]>
#### p.DMAMUX.CHCFG[25]
<lang=dft>
 (rw)  [1;33m0x400ec064[0m (0x400ec000 + 0x0064)
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
#### p.dmamux.chcfg[29]
<link=p.DMAMUX.CHCFG[29]>
#### PGC.MEGA_CTRL
<link=p.PGC.MEGA_CTRL>
#### PGC.CPU_PDNSCR
<link=p.PGC.CPU_PDNSCR>
#### p.SRC.SBMR1
<lang=dft>
 (ro)  [1;33m0x400f8004[0m (0x400f8000 + 0x0004)
SRC Boot Mode Register 1
 (ro) (08)  [0;32mBOOT_CFG1[0m  - [07:00] -  Refer to fusemap.
 (ro) (08)  [0;32mBOOT_CFG2[0m  - [15:08] -  Refer to fusemap.
 (ro) (08)  [0;32mBOOT_CFG3[0m  - [23:16] -  Refer to fusemap.
 (ro) (08)  [0;32mBOOT_CFG4[0m  - [31:24] -  Refer to fusemap.
</lang>
#### SRC.GPR5
<link=p.SRC.GPR5>
#### p.SRC.GPR6
<lang=dft>
 (rw)  [1;33m0x400f8034[0m (0x400f8000 + 0x0034)
SRC General Purpose Register 6
</lang>
#### p.src.gpr10
<link=p.SRC.GPR10>
#### CCM.CSCMR1
<link=p.CCM.CSCMR1>
#### p.ccm.cscmr2
<link=p.CCM.CSCMR2>
#### CCM.CSCDR1
<link=p.CCM.CSCDR1>
#### p.ROMC.ROMPATCH5D
<lang=dft>
 (rw)  [1;33m0x401800dc[0m (0x40180000 + 0x00dc)
ROMC Data Registers
 (rw) (32)  [0;32mDATAX[0m  - [31:00] -  Data Fix Registers - Stores the data used for 1-word data fix operations
</lang>
#### ROMC.ROMPATCH4D
<link=p.ROMC.ROMPATCH4D>
#### p.romc.rompatch3d
<link=p.ROMC.ROMPATCH3D>
#### romc.rompatch1d
<link=p.ROMC.ROMPATCH1D>
#### romc.rompatchcntl
<link=p.ROMC.ROMPATCHCNTL>
#### ROMC.ROMPATCH3A
<link=p.ROMC.ROMPATCH3A>
#### p.romc.rompatch4a
<link=p.ROMC.ROMPATCH4A>
#### romc.rompatch6a
<link=p.ROMC.ROMPATCH6A>
#### romc.rompatch12a
<link=p.ROMC.ROMPATCH12A>
#### p.ROMC.ROMPATCHSR
<lang=dft>
 (rw)  [1;33m0x40180208[0m (0x40180000 + 0x0208)
ROMC Status Register
 (ro) (06)  [0;32mSOURCE[0m  - [05:00] -  ROMC Source Number - Binary encoding of the number of the address comparator wh
 ich has an address match in the most recent patch event on ROMC AHB
      0 - SOURCE_0 :
         Address Comparator 0 matched
      0x1 - SOURCE_1 :
         Address Comparator 1 matched
      0xF - SOURCE_15 :
         Address Comparator 15 matched
 (rw) (01)  [0;32mSW[0m  - [17:17] -  ROMC AHB Multiple Address Comparator matches Indicator - Indicates that multipl
 e address comparator matches occurred
      0 - SW_0 :
         no event or comparator collisions
      0x1 - SW_1 :
         a collision has occurred
</lang>
#### p.lpuart1.param
<link=p.LPUART1.PARAM>
#### p.lpuart1.global
<link=p.LPUART1.GLOBAL>
#### lpuart1.global
<link=p.LPUART1.GLOBAL>
#### LPUART1.STAT
<link=p.LPUART1.STAT>
#### p.LPUART1.DATA
<lang=dft>
 (rw)  [1;33m0x4018401c[0m (0x40184000 + 0x001c)
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
#### lpuart1.data
<link=p.LPUART1.DATA>
#### p.lpuart2
<link=p.LPUART2>
#### LPUART2.VERID
<link=p.LPUART2.VERID>
#### p.lpuart2.data
<link=p.LPUART2.DATA>
#### p.LPUART3.PINCFG
<lang=dft>
 (rw)  [1;33m0x4018c00c[0m (0x4018c000 + 0x000c)
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
#### lpuart3.stat
<link=p.LPUART3.STAT>
#### p.LPUART3.CTRL
<lang=dft>
 (rw)  [1;33m0x4018c018[0m (0x4018c000 + 0x0018)
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
#### p.lpuart3.fifo
<link=p.LPUART3.FIFO>
#### LPUART4.PARAM
<link=p.LPUART4.PARAM>
#### lpuart4.global
<link=p.LPUART4.GLOBAL>
#### p.LPUART4.STAT
<lang=dft>
 (rw)  [1;33m0x40190014[0m (0x40190000 + 0x0014)
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
#### LPUART4.STAT
<link=p.LPUART4.STAT>
#### p.lpuart4.data
<link=p.LPUART4.DATA>
#### p.LPUART4.FIFO
<lang=dft>
 (rw)  [1;33m0x40190028[0m (0x40190000 + 0x0028)
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
#### lpuart4.fifo
<link=p.LPUART4.FIFO>
#### LPUART4.FIFO
<link=p.LPUART4.FIFO>
#### LPUART4.WATER
<link=p.LPUART4.WATER>
#### p.LPUART5.CTRL
<lang=dft>
 (rw)  [1;33m0x40194018[0m (0x40194000 + 0x0018)
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
#### LPUART5.MATCH
<link=p.LPUART5.MATCH>
#### p.LPUART5.WATER
<lang=dft>
 (rw)  [1;33m0x4019402c[0m (0x40194000 + 0x002c)
LPUART Watermark Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit Watermark
 (ro) (03)  [0;32mTXCOUNT[0m  - [10:08] -  Transmit Counter
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive Watermark
 (ro) (03)  [0;32mRXCOUNT[0m  - [26:24] -  Receive Counter
</lang>
#### p.lpuart6.pincfg
<link=p.LPUART6.PINCFG>
#### LPUART6.PINCFG
<link=p.LPUART6.PINCFG>
#### p.lpuart6.stat
<link=p.LPUART6.STAT>
#### lpuart6.stat
<link=p.LPUART6.STAT>
#### p.lpuart6.match
<link=p.LPUART6.MATCH>
#### p.lpuart6.fifo
<link=p.LPUART6.FIFO>
#### p.LPUART6.WATER
<lang=dft>
 (rw)  [1;33m0x4019802c[0m (0x40198000 + 0x002c)
LPUART Watermark Register
 (rw) (02)  [0;32mTXWATER[0m  - [01:00] -  Transmit Watermark
 (ro) (03)  [0;32mTXCOUNT[0m  - [10:08] -  Transmit Counter
 (rw) (02)  [0;32mRXWATER[0m  - [17:16] -  Receive Watermark
 (ro) (03)  [0;32mRXCOUNT[0m  - [26:24] -  Receive Counter
</lang>
#### LPUART7.WATER
<link=p.LPUART7.WATER>
#### p.lpuart8.pincfg
<link=p.LPUART8.PINCFG>
#### LPUART8.PINCFG
<link=p.LPUART8.PINCFG>
#### p.flexio1.pin
<link=p.FLEXIO1.PIN>
#### FLEXIO1.TIMIEN
<link=p.FLEXIO1.TIMIEN>
#### p.flexio1.shiftsden
<link=p.FLEXIO1.SHIFTSDEN>
#### p.FLEXIO1.SHIFTSTATE
<lang=dft>
 (rw)  [1;33m0x401ac040[0m (0x401ac000 + 0x0040)
Shifter State Register
 (rw) (03)  [0;32mSTATE[0m  - [02:00] -  Current State Pointer
</lang>
#### flexio1.shiftcfg[0]
<link=p.FLEXIO1.SHIFTCFG[0]>
#### flexio1.shiftbuf[3]
<link=p.FLEXIO1.SHIFTBUF[3]>
#### FLEXIO1.SHIFTBUFBIS[0]
<link=p.FLEXIO1.SHIFTBUFBIS[0]>
#### p.flexio1.shiftbufbis[3]
<link=p.FLEXIO1.SHIFTBUFBIS[3]>
#### flexio1.shiftbufbbs[0]
<link=p.FLEXIO1.SHIFTBUFBBS[0]>
#### p.FLEXIO1.SHIFTBUFBBS[1]
<lang=dft>
 (rw)  [1;33m0x401ac384[0m (0x401ac000 + 0x0384)
Shifter Buffer N Bit Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBBS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio1.timcfg[1]
<link=p.FLEXIO1.TIMCFG[1]>
#### FLEXIO1.TIMCFG[1]
<link=p.FLEXIO1.TIMCFG[1]>
#### p.FLEXIO1.TIMCMP[1]
<lang=dft>
 (rw)  [1;33m0x401ac504[0m (0x401ac000 + 0x0504)
Timer Compare N Register
 (rw) (16)  [0;32mCMP[0m  - [15:00] -  Timer Compare Value
</lang>
#### FLEXIO1.SHIFTBUFHWS[3]
<link=p.FLEXIO1.SHIFTBUFHWS[3]>
#### p.FLEXIO2.PARAM
<lang=dft>
 (ro)  [1;33m0x401b0004[0m (0x401b0000 + 0x0004)
Parameter Register
 (ro) (08)  [0;32mSHIFTER[0m  - [07:00] -  Shifter Number
 (ro) (08)  [0;32mTIMER[0m  - [15:08] -  Timer Number
 (ro) (08)  [0;32mPIN[0m  - [23:16] -  Pin Number
 (ro) (08)  [0;32mTRIGGER[0m  - [31:24] -  Trigger Number
</lang>
#### FLEXIO2.SHIFTSDEN
<link=p.FLEXIO2.SHIFTSDEN>
#### p.FLEXIO2.SHIFTSTATE
<lang=dft>
 (rw)  [1;33m0x401b0040[0m (0x401b0000 + 0x0040)
Shifter State Register
 (rw) (03)  [0;32mSTATE[0m  - [02:00] -  Current State Pointer
</lang>
#### FLEXIO2.SHIFTCFG[2]
<link=p.FLEXIO2.SHIFTCFG[2]>
#### p.FLEXIO2.SHIFTBUFBIS[3]
<lang=dft>
 (rw)  [1;33m0x401b028c[0m (0x401b0000 + 0x028c)
Shifter Buffer N Bit Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBIS[0m  - [31:00] -  Shift Buffer
</lang>
#### FLEXIO2.SHIFTBUFBYS[2]
<link=p.FLEXIO2.SHIFTBUFBYS[2]>
#### flexio2.shiftbufbbs[1]
<link=p.FLEXIO2.SHIFTBUFBBS[1]>
#### p.FLEXIO2.SHIFTBUFBBS[2]
<lang=dft>
 (rw)  [1;33m0x401b0388[0m (0x401b0000 + 0x0388)
Shifter Buffer N Bit Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBBS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio2.shiftbufbbs[3]
<link=p.FLEXIO2.SHIFTBUFBBS[3]>
#### FLEXIO2.TIMCFG[1]
<link=p.FLEXIO2.TIMCFG[1]>
#### p.FLEXIO2.TIMCMP[1]
<lang=dft>
 (rw)  [1;33m0x401b0504[0m (0x401b0000 + 0x0504)
Timer Compare N Register
 (rw) (16)  [0;32mCMP[0m  - [15:00] -  Timer Compare Value
</lang>
#### FLEXIO2.SHIFTBUFNBS[3]
<link=p.FLEXIO2.SHIFTBUFNBS[3]>
#### FLEXIO2.SHIFTBUFHWS[2]
<link=p.FLEXIO2.SHIFTBUFHWS[2]>
#### p.FLEXIO2.SHIFTBUFNIS[2]
<lang=dft>
 (rw)  [1;33m0x401b0788[0m (0x401b0000 + 0x0788)
Shifter Buffer N Nibble Swapped Register
 (rw) (32)  [0;32mSHIFTBUFNIS[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio3
<link=p.FLEXIO3>
#### p.flexio3.ctrl
<link=p.FLEXIO3.CTRL>
#### FLEXIO3.SHIFTCFG[2]
<link=p.FLEXIO3.SHIFTCFG[2]>
#### p.FLEXIO3.SHIFTBUF[2]
<lang=dft>
 (rw)  [1;33m0x42020208[0m (0x42020000 + 0x0208)
Shifter Buffer N Register
 (rw) (32)  [0;32mSHIFTBUF[0m  - [31:00] -  Shift Buffer
</lang>
#### p.flexio3.shiftbuf[3]
<link=p.FLEXIO3.SHIFTBUF[3]>
#### flexio3.shiftbufbbs[1]
<link=p.FLEXIO3.SHIFTBUFBBS[1]>
#### p.FLEXIO3.SHIFTBUFBBS[2]
<lang=dft>
 (rw)  [1;33m0x42020388[0m (0x42020000 + 0x0388)
Shifter Buffer N Bit Byte Swapped Register
 (rw) (32)  [0;32mSHIFTBUFBBS[0m  - [31:00] -  Shift Buffer
</lang>
#### flexio3.timctl[0]
<link=p.FLEXIO3.TIMCTL[0]>
#### flexio3.timcmp[3]
<link=p.FLEXIO3.TIMCMP[3]>
#### FLEXIO3.SHIFTBUFHWS[2]
<link=p.FLEXIO3.SHIFTBUFHWS[2]>
#### p.gpio1.imr
<link=p.GPIO1.IMR>
#### gpio1.isr
<link=p.GPIO1.ISR>
#### GPIO5.DR
<link=p.GPIO5.DR>
#### p.GPIO5.GDIR
<lang=dft>
 (rw)  [1;33m0x400c0004[0m (0x400c0000 + 0x0004)
GPIO direction register
 (rw) (32)  [0;32mGDIR[0m  - [31:00] -  GDIR
</lang>
#### p.GPIO5.IMR
<lang=dft>
 (rw)  [1;33m0x400c0014[0m (0x400c0000 + 0x0014)
GPIO interrupt mask register
 (rw) (32)  [0;32mIMR[0m  - [31:00] -  IMR
</lang>
#### gpio5.dr_set
<link=p.GPIO5.DR_SET>
#### gpio2.dr
<link=p.GPIO2.DR>
#### p.gpio3
<link=p.GPIO3>
#### gpio3.dr
<link=p.GPIO3.DR>
#### gpio3.psr
<link=p.GPIO3.PSR>
#### GPIO3.DR_CLEAR
<link=p.GPIO3.DR_CLEAR>
#### p.GPIO4.EDGE_SEL
<lang=dft>
 (rw)  [1;33m0x401c401c[0m (0x401c4000 + 0x001c)
GPIO edge select register
 (rw) (32)  [0;32mGPIO_EDGE_SEL[0m  - [31:00] -  GPIO_EDGE_SEL
</lang>
#### gpio4.edge_sel
<link=p.GPIO4.EDGE_SEL>
#### p.GPIO4.DR_TOGGLE
<lang=dft>
 (wo)  [1;33m0x401c408c[0m (0x401c4000 + 0x008c)
GPIO data register TOGGLE
 (wo) (32)  [0;32mDR_TOGGLE[0m  - [31:00] -  DR_TOGGLE
</lang>
#### p.GPIO6.PSR
<lang=dft>
 (ro)  [1;33m0x42000008[0m (0x42000000 + 0x0008)
GPIO pad status register
 (ro) (32)  [0;32mPSR[0m  - [31:00] -  PSR
</lang>
#### gpio6.icr2
<link=p.GPIO6.ICR2>
#### GPIO6.EDGE_SEL
<link=p.GPIO6.EDGE_SEL>
#### p.gpio6.dr_set
<link=p.GPIO6.DR_SET>
#### gpio6.dr_set
<link=p.GPIO6.DR_SET>
#### GPIO7.IMR
<link=p.GPIO7.IMR>
#### GPIO7.DR_SET
<link=p.GPIO7.DR_SET>
#### p.gpio7.dr_clear
<link=p.GPIO7.DR_CLEAR>
#### GPIO7.DR_TOGGLE
<link=p.GPIO7.DR_TOGGLE>
#### p.GPIO8.ICR2
<lang=dft>
 (rw)  [1;33m0x42008010[0m (0x42008000 + 0x0010)
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
#### p.gpio8.dr_clear
<link=p.GPIO8.DR_CLEAR>
#### p.GPIO9.GDIR
<lang=dft>
 (rw)  [1;33m0x4200c004[0m (0x4200c000 + 0x0004)
GPIO direction register
 (rw) (32)  [0;32mGDIR[0m  - [31:00] -  GDIR
</lang>
#### gpio9.dr_set
<link=p.GPIO9.DR_SET>
#### p.GPIO9.DR_TOGGLE
<lang=dft>
 (wo)  [1;33m0x4200c08c[0m (0x4200c000 + 0x008c)
GPIO data register TOGGLE
 (wo) (32)  [0;32mDR_TOGGLE[0m  - [31:00] -  DR_TOGGLE
</lang>
#### p.can1.ctrl1
<link=p.CAN1.CTRL1>
#### CAN1.TIMER
<link=p.CAN1.TIMER>
#### p.CAN1.RXMGMASK
<lang=dft>
 (rw)  [1;33m0x401d0010[0m (0x401d0000 + 0x0010)
Rx Mailboxes Global Mask Register
 (rw) (32)  [0;32mMG[0m  - [31:00] -  These bits mask the Mailbox filter bits as shown in the figure above
      0 - MG_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MG_1 :
         The corresponding bit in the filter is checked against the one received
</lang>
#### p.can1.rxmgmask
<link=p.CAN1.RXMGMASK>
#### can1.iflag2
<link=p.CAN1.IFLAG2>
#### p.CAN1.RXIMR0
<lang=dft>
 (rw)  [1;33m0x401d0880[0m (0x401d0000 + 0x0880)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### can1.rximr3
<link=p.CAN1.RXIMR3>
#### p.can1.rximr4
<link=p.CAN1.RXIMR4>
#### CAN1.RXIMR6
<link=p.CAN1.RXIMR6>
#### p.can1.rximr17
<link=p.CAN1.RXIMR17>
#### can1.rximr18
<link=p.CAN1.RXIMR18>
#### can1.rximr22
<link=p.CAN1.RXIMR22>
#### p.can1.rximr26
<link=p.CAN1.RXIMR26>
#### p.can1.rximr31
<link=p.CAN1.RXIMR31>
#### CAN1.RXIMR34
<link=p.CAN1.RXIMR34>
#### p.CAN1.RXIMR35
<lang=dft>
 (rw)  [1;33m0x401d090c[0m (0x401d0000 + 0x090c)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.CAN1.RXIMR41
<lang=dft>
 (rw)  [1;33m0x401d0924[0m (0x401d0000 + 0x0924)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can1.rximr45
<link=p.CAN1.RXIMR45>
#### can1.rximr54
<link=p.CAN1.RXIMR54>
#### p.CAN1.RXIMR56
<lang=dft>
 (rw)  [1;33m0x401d0960[0m (0x401d0000 + 0x0960)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN1.RXIMR57
<link=p.CAN1.RXIMR57>
#### CAN1.RXIMR63
<link=p.CAN1.RXIMR63>
#### CAN1.GFWR
<link=p.CAN1.GFWR>
#### can2.rxmgmask
<link=p.CAN2.RXMGMASK>
#### p.can2.ecr
<link=p.CAN2.ECR>
#### p.can2.rximr5
<link=p.CAN2.RXIMR5>
#### CAN2.RXIMR7
<link=p.CAN2.RXIMR7>
#### p.CAN2.RXIMR8
<lang=dft>
 (rw)  [1;33m0x401d48a0[0m (0x401d4000 + 0x08a0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.CAN2.RXIMR10
<lang=dft>
 (rw)  [1;33m0x401d48a8[0m (0x401d4000 + 0x08a8)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR11
<link=p.CAN2.RXIMR11>
#### p.can2.rximr14
<link=p.CAN2.RXIMR14>
#### CAN2.RXIMR20
<link=p.CAN2.RXIMR20>
#### p.CAN2.RXIMR25
<lang=dft>
 (rw)  [1;33m0x401d48e4[0m (0x401d4000 + 0x08e4)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### p.can2.rximr28
<link=p.CAN2.RXIMR28>
#### p.CAN2.RXIMR36
<lang=dft>
 (rw)  [1;33m0x401d4910[0m (0x401d4000 + 0x0910)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  These bits mask both Mailbox filter and Rx FIFO ID Filter Table element in dist
 inct ways
      0 - MI_0 :
         the corresponding bit in the filter is "don't care"
      0x1 - MI_1 :
         The corresponding bit in the filter is checked
</lang>
#### CAN2.RXIMR37
<link=p.CAN2.RXIMR37>
#### CAN2.RXIMR42
<link=p.CAN2.RXIMR42>
#### can2.rximr44
<link=p.CAN2.RXIMR44>
#### can2.rximr57
<link=p.CAN2.RXIMR57>
#### p.can2.rximr59
<link=p.CAN2.RXIMR59>
#### can2.rximr62
<link=p.CAN2.RXIMR62>
#### CAN3.MCR
<link=p.CAN3.MCR>
#### p.CAN3.TIMER
<lang=dft>
 (rw)  [1;33m0x401d8008[0m (0x401d8000 + 0x0008)
Free Running Timer
 (rw) (16)  [0;32mTIMER[0m  - [15:00] -  Timer Value
</lang>
#### can3.rxmgmask
<link=p.CAN3.RXMGMASK>
#### p.CAN3.ESR2
<lang=dft>
 (ro)  [1;33m0x401d8038[0m (0x401d8000 + 0x0038)
Error and Status 2 register
 (ro) (01)  [0;32mIMB[0m  - [13:13] -  Inactive Mailbox
      0 - IMB_0 :
         If CAN_ESR2[VPS] is asserted, the CAN_ESR2[LPTM] is not an inactive Mai
         lbox.
      0x1 - IMB_1 :
         If CAN_ESR2[VPS] is asserted, there is at least one inactive Mailbox. L
         PTM content is the number of the first one.
 (ro) (01)  [0;32mVPS[0m  - [14:14] -  Valid Priority Status
      0 - VPS_0 :
         Contents of IMB and LPTM are invalid.
      0x1 - VPS_1 :
         Contents of IMB and LPTM are valid.
 (ro) (07)  [0;32mLPTM[0m  - [22:16] -  Lowest Priority Tx Mailbox
</lang>
#### p.CAN3.RXFIR
<lang=dft>
 (ro)  [1;33m0x401d804c[0m (0x401d8000 + 0x004c)
Legacy Rx FIFO Information Register
 (ro) (09)  [0;32mIDHIT[0m  - [08:00] -  Identifier Acceptance Filter Hit Indicator
</lang>
#### p.can3.rxfir
<link=p.CAN3.RXFIR>
#### p.can3.mb0_64b_id
<link=p.CAN3.MB0_64B_ID>
#### p.CAN3.MB0_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8094[0m (0x401d8000 + 0x0094)
Message Buffer 0 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb0_32b_word3
<link=p.CAN3.MB0_32B_WORD3>
#### CAN3.WORD01
<link=p.CAN3.WORD01>
#### CAN3.MB0_64B_WORD5
<link=p.CAN3.MB0_64B_WORD5>
#### can3.cs2
<link=p.CAN3.CS2>
#### p.CAN3.MB0_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d80a0[0m (0x401d8000 + 0x00a0)
Message Buffer 0 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB1_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d80ac[0m (0x401d8000 + 0x00ac)
Message Buffer 1 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB1_32B_ID
<link=p.CAN3.MB1_32B_ID>
#### can3.mb0_64b_word12
<link=p.CAN3.MB0_64B_WORD12>
#### can3.mb1_32b_word4
<link=p.CAN3.MB1_32B_WORD4>
#### CAN3.MB1_32B_WORD6
<link=p.CAN3.MB1_32B_WORD6>
#### p.can3.mb1_64b_cs
<link=p.CAN3.MB1_64B_CS>
#### p.CAN3.MB4_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d80c8[0m (0x401d8000 + 0x00c8)
Message Buffer 4 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word04
<link=p.CAN3.WORD04>
#### p.can3.mb1_64b_id
<link=p.CAN3.MB1_64B_ID>
#### p.can3.mb3_16b_id
<link=p.CAN3.MB3_16B_ID>
#### CAN3.CS5
<link=p.CAN3.CS5>
#### p.can3.mb5_8b_cs
<link=p.CAN3.MB5_8B_CS>
#### p.CAN3.ID5
<lang=dft>
 (rw)  [1;33m0x401d80d4[0m (0x401d8000 + 0x00d4)
Message Buffer 5 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb2_32b_id
<link=p.CAN3.MB2_32B_ID>
#### CAN3.MB2_32B_ID
<link=p.CAN3.MB2_32B_ID>
#### p.CAN3.MB3_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d80d4[0m (0x401d8000 + 0x00d4)
Message Buffer 3 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb3_16b_word3
<link=p.CAN3.MB3_16B_WORD3>
#### p.can3.mb5_8b_word1
<link=p.CAN3.MB5_8B_WORD1>
#### p.can3.cs6
<link=p.CAN3.CS6>
#### p.can3.mb2_32b_word2
<link=p.CAN3.MB2_32B_WORD2>
#### CAN3.MB2_32B_WORD3
<link=p.CAN3.MB2_32B_WORD3>
#### p.CAN3.MB4_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d80e4[0m (0x401d8000 + 0x00e4)
Message Buffer 4 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB6_8B_ID
<link=p.CAN3.MB6_8B_ID>
#### p.CAN3.MB1_64B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d80e8[0m (0x401d8000 + 0x00e8)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb1_64b_word6
<link=p.CAN3.MB1_64B_WORD6>
#### p.can3.id7
<link=p.CAN3.ID7>
#### can3.id7
<link=p.CAN3.ID7>
#### p.CAN3.MB2_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d80f4[0m (0x401d8000 + 0x00f4)
Message Buffer 2 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb2_32b_word7
<link=p.CAN3.MB2_32B_WORD7>
#### CAN3.MB7_8B_WORD0
<link=p.CAN3.MB7_8B_WORD0>
#### can3.word17
<link=p.CAN3.WORD17>
#### p.can3.mb1_64b_word12
<link=p.CAN3.MB1_64B_WORD12>
#### p.CAN3.MB5_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8100[0m (0x401d8000 + 0x0100)
Message Buffer 5 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb8_8b_cs
<link=p.CAN3.MB8_8B_CS>
#### p.CAN3.MB1_64B_WORD14
<lang=dft>
 (rw)  [1;33m0x401d8108[0m (0x401d8000 + 0x0108)
Message Buffer 1 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_59[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_58[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_57[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_56[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB5_16B_WORD2
<link=p.CAN3.MB5_16B_WORD2>
#### p.CAN3.MB8_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8108[0m (0x401d8000 + 0x0108)
Message Buffer 8 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb2_64b_cs
<link=p.CAN3.MB2_64B_CS>
#### CAN3.MB2_64B_CS
<link=p.CAN3.MB2_64B_CS>
#### can3.mb3_32b_word4
<link=p.CAN3.MB3_32B_WORD4>
#### CAN3.ID9
<link=p.CAN3.ID9>
#### CAN3.MB2_64B_WORD0
<link=p.CAN3.MB2_64B_WORD0>
#### p.can3.mb9_8b_word1
<link=p.CAN3.MB9_8B_WORD1>
#### p.CAN3.MB4_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d8120[0m (0x401d8000 + 0x0120)
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
#### CAN3.ID10
<link=p.CAN3.ID10>
#### p.CAN3.MB4_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d8124[0m (0x401d8000 + 0x0124)
Message Buffer 4 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.WORD010
<lang=dft>
 (rw)  [1;33m0x401d8128[0m (0x401d8000 + 0x0128)
Message Buffer 10 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb2_64b_word5
<link=p.CAN3.MB2_64B_WORD5>
#### p.CAN3.MB7_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8138[0m (0x401d8000 + 0x0138)
Message Buffer 7 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.cs12
<link=p.CAN3.CS12>
#### p.can3.mb2_64b_word11
<link=p.CAN3.MB2_64B_WORD11>
#### p.CAN3.MB4_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d8144[0m (0x401d8000 + 0x0144)
Message Buffer 4 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb4_32b_word7
<link=p.CAN3.MB4_32B_WORD7>
#### can3.mb5_32b_cs
<link=p.CAN3.MB5_32B_CS>
#### can3.mb5_32b_id
<link=p.CAN3.MB5_32B_ID>
#### p.CAN3.MB8_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d814c[0m (0x401d8000 + 0x014c)
Message Buffer 8 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb8_16b_word1
<link=p.CAN3.MB8_16B_WORD1>
#### p.CAN3.CS13
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
#### can3.mb5_32b_word0
<link=p.CAN3.MB5_32B_WORD0>
#### can3.mb13_8b_word0
<link=p.CAN3.MB13_8B_WORD0>
#### CAN3.MB5_32B_WORD2
<link=p.CAN3.MB5_32B_WORD2>
#### p.CAN3.MB9_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d815c[0m (0x401d8000 + 0x015c)
Message Buffer 9 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.cs14
<link=p.CAN3.CS14>
#### p.can3.mb3_64b_word0
<link=p.CAN3.MB3_64B_WORD0>
#### can3.mb9_16b_word1
<link=p.CAN3.MB9_16B_WORD1>
#### can3.word014
<link=p.CAN3.WORD014>
#### p.CAN3.MB10_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8178[0m (0x401d8000 + 0x0178)
Message Buffer 10 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.WORD015
<link=p.CAN3.WORD015>
#### can3.word115
<link=p.CAN3.WORD115>
#### p.CAN3.ID16
<lang=dft>
 (rw)  [1;33m0x401d8184[0m (0x401d8000 + 0x0184)
Message Buffer 16 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb10_16b_word3
<link=p.CAN3.MB10_16B_WORD3>
#### p.CAN3.MB6_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d8184[0m (0x401d8000 + 0x0184)
Message Buffer 6 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb6_32b_word3
<link=p.CAN3.MB6_32B_WORD3>
#### can3.mb3_64b_word10
<link=p.CAN3.MB3_64B_WORD10>
#### p.CAN3.MB11_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d818c[0m (0x401d8000 + 0x018c)
Message Buffer 11 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb17_8b_cs
<link=p.CAN3.MB17_8B_CS>
#### p.can3.mb6_32b_word6
<link=p.CAN3.MB6_32B_WORD6>
#### CAN3.MB6_32B_WORD7
<link=p.CAN3.MB6_32B_WORD7>
#### CAN3.MB17_8B_WORD1
<link=p.CAN3.MB17_8B_WORD1>
#### p.CAN3.MB7_32B_ID
<lang=dft>
 (rw)  [1;33m0x401d819c[0m (0x401d8000 + 0x019c)
Message Buffer 7 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb7_32b_word0
<link=p.CAN3.MB7_32B_WORD0>
#### can3.mb12_16b_word0
<link=p.CAN3.MB12_16B_WORD0>
#### CAN3.MB4_64B_WORD0
<link=p.CAN3.MB4_64B_WORD0>
#### p.can3.id19
<link=p.CAN3.ID19>
#### p.CAN3.MB12_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d81b4[0m (0x401d8000 + 0x01b4)
Message Buffer 12 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB19_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d81b4[0m (0x401d8000 + 0x01b4)
Message Buffer 19 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB4_64B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d81b4[0m (0x401d8000 + 0x01b4)
Message Buffer 4 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB20_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d81c4[0m (0x401d8000 + 0x01c4)
Message Buffer 20 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.word020
<link=p.CAN3.WORD020>
#### p.CAN3.MB13_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d81cc[0m (0x401d8000 + 0x01cc)
Message Buffer 13 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb13_16b_word3
<link=p.CAN3.MB13_16B_WORD3>
#### p.can3.mb4_64b_word9
<link=p.CAN3.MB4_64B_WORD9>
#### p.CAN3.WORD120
<lang=dft>
 (rw)  [1;33m0x401d81cc[0m (0x401d8000 + 0x01cc)
Message Buffer 20 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word120
<link=p.CAN3.WORD120>
#### p.CAN3.MB14_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d81d0[0m (0x401d8000 + 0x01d0)
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
#### CAN3.MB14_16B_CS
<link=p.CAN3.MB14_16B_CS>
#### p.can3.mb4_64b_word10
<link=p.CAN3.MB4_64B_WORD10>
#### CAN3.ID21
<link=p.CAN3.ID21>
#### can3.mb14_16b_id
<link=p.CAN3.MB14_16B_ID>
#### CAN3.WORD121
<link=p.CAN3.WORD121>
#### p.can3.mb15_16b_id
<link=p.CAN3.MB15_16B_ID>
#### CAN3.MB5_64B_WORD0
<link=p.CAN3.MB5_64B_WORD0>
#### p.can3.mb23_8b_word1
<link=p.CAN3.MB23_8B_WORD1>
#### can3.mb5_64b_word3
<link=p.CAN3.MB5_64B_WORD3>
#### p.CAN3.MB24_8B_CS
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
#### p.CAN3.MB9_32B_WORD4
<lang=dft>
 (rw)  [1;33m0x401d8200[0m (0x401d8000 + 0x0200)
Message Buffer 9 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_19[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_18[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_17[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_16[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB5_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d8204[0m (0x401d8000 + 0x0204)
Message Buffer 5 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb9_32b_word6
<link=p.CAN3.MB9_32B_WORD6>
#### CAN3.WORD024
<link=p.CAN3.WORD024>
#### p.can3.cs25
<link=p.CAN3.CS25>
#### p.CAN3.MB25_8B_CS
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
#### p.can3.id25
<link=p.CAN3.ID25>
#### can3.mb16_16b_word3
<link=p.CAN3.MB16_16B_WORD3>
#### CAN3.MB25_8B_WORD1
<link=p.CAN3.MB25_8B_WORD1>
#### p.can3.mb26_8b_id
<link=p.CAN3.MB26_8B_ID>
#### can3.mb5_64b_word13
<link=p.CAN3.MB5_64B_WORD13>
#### CAN3.MB5_64B_WORD14
<link=p.CAN3.MB5_64B_WORD14>
#### CAN3.MB10_32B_WORD5
<link=p.CAN3.MB10_32B_WORD5>
#### p.can3.mb26_8b_word1
<link=p.CAN3.MB26_8B_WORD1>
#### can3.mb26_8b_word1
<link=p.CAN3.MB26_8B_WORD1>
#### p.CAN3.CS27
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
#### can3.mb6_64b_cs
<link=p.CAN3.MB6_64B_CS>
#### p.can3.mb10_32b_word7
<link=p.CAN3.MB10_32B_WORD7>
#### can3.mb6_64b_word0
<link=p.CAN3.MB6_64B_WORD0>
#### CAN3.CS28
<link=p.CAN3.CS28>
#### p.can3.mb6_64b_word2
<link=p.CAN3.MB6_64B_WORD2>
#### can3.mb11_32b_word2
<link=p.CAN3.MB11_32B_WORD2>
#### CAN3.MB11_32B_WORD2
<link=p.CAN3.MB11_32B_WORD2>
#### CAN3.MB19_16B_WORD0
<link=p.CAN3.MB19_16B_WORD0>
#### can3.mb19_16b_word1
<link=p.CAN3.MB19_16B_WORD1>
#### CAN3.MB29_8B_WORD1
<link=p.CAN3.MB29_8B_WORD1>
#### p.CAN3.MB20_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d8264[0m (0x401d8000 + 0x0264)
Message Buffer 20 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB30_8B_ID
<link=p.CAN3.MB30_8B_ID>
#### CAN3.MB6_64B_WORD11
<link=p.CAN3.MB6_64B_WORD11>
#### p.CAN3.MB20_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d826c[0m (0x401d8000 + 0x026c)
Message Buffer 20 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB6_64B_WORD13
<lang=dft>
 (rw)  [1;33m0x401d826c[0m (0x401d8000 + 0x026c)
Message Buffer 6 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_55[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_54[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_53[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_52[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB20_16B_WORD2
<link=p.CAN3.MB20_16B_WORD2>
#### can3.id31
<link=p.CAN3.ID31>
#### p.can3.mb12_32b_word4
<link=p.CAN3.MB12_32B_WORD4>
#### CAN3.MB12_32B_WORD4
<link=p.CAN3.MB12_32B_WORD4>
#### p.can3.mb7_64b_id
<link=p.CAN3.MB7_64B_ID>
#### p.can3.cs32
<link=p.CAN3.CS32>
#### can3.mb32_8b_id
<link=p.CAN3.MB32_8B_ID>
#### can3.word032
<link=p.CAN3.WORD032>
#### can3.mb22_16b_id
<link=p.CAN3.MB22_16B_ID>
#### CAN3.MB22_16B_ID
<link=p.CAN3.MB22_16B_ID>
#### p.can3.mb33_8b_id
<link=p.CAN3.MB33_8B_ID>
#### p.CAN3.MB13_32B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d8298[0m (0x401d8000 + 0x0298)
Message Buffer 13 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB22_16B_WORD0
<link=p.CAN3.MB22_16B_WORD0>
#### CAN3.WORD033
<link=p.CAN3.WORD033>
#### can3.word133
<link=p.CAN3.WORD133>
#### CAN3.CS34
<link=p.CAN3.CS34>
#### CAN3.MB34_8B_CS
<link=p.CAN3.MB34_8B_CS>
#### CAN3.MB13_32B_WORD5
<link=p.CAN3.MB13_32B_WORD5>
#### p.CAN3.MB22_16B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d82a4[0m (0x401d8000 + 0x02a4)
Message Buffer 22 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb7_64b_word9
<link=p.CAN3.MB7_64B_WORD9>
#### can3.mb13_32b_word7
<link=p.CAN3.MB13_32B_WORD7>
#### p.CAN3.MB7_64B_WORD11
<lang=dft>
 (rw)  [1;33m0x401d82ac[0m (0x401d8000 + 0x02ac)
Message Buffer 7 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_47[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_46[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_45[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_44[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB7_64B_WORD13
<link=p.CAN3.MB7_64B_WORD13>
#### p.CAN3.MB35_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82b8[0m (0x401d8000 + 0x02b8)
Message Buffer 35 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB14_32B_WORD1
<link=p.CAN3.MB14_32B_WORD1>
#### CAN3.ID36
<link=p.CAN3.ID36>
#### p.can3.mb14_32b_word3
<link=p.CAN3.MB14_32B_WORD3>
#### p.CAN3.MB36_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82c8[0m (0x401d8000 + 0x02c8)
Message Buffer 36 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb36_8b_word0
<link=p.CAN3.MB36_8B_WORD0>
#### CAN3.MB36_8B_WORD1
<link=p.CAN3.MB36_8B_WORD1>
#### CAN3.MB8_64B_WORD2
<link=p.CAN3.MB8_64B_WORD2>
#### p.CAN3.MB25_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d82dc[0m (0x401d8000 + 0x02dc)
Message Buffer 25 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB37_8B_WORD1
<link=p.CAN3.MB37_8B_WORD1>
#### p.CAN3.WORD137
<lang=dft>
 (rw)  [1;33m0x401d82dc[0m (0x401d8000 + 0x02dc)
Message Buffer 37 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB39_8B_CS
<link=p.CAN3.MB39_8B_CS>
#### p.CAN3.ID39
<lang=dft>
 (rw)  [1;33m0x401d82f4[0m (0x401d8000 + 0x02f4)
Message Buffer 39 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb15_32b_word6
<link=p.CAN3.MB15_32B_WORD6>
#### CAN3.MB15_32B_WORD6
<link=p.CAN3.MB15_32B_WORD6>
#### p.CAN3.MB39_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d82f8[0m (0x401d8000 + 0x02f8)
Message Buffer 39 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb16_32b_word0
<link=p.CAN3.MB16_32B_WORD0>
#### CAN3.MB16_32B_WORD0
<link=p.CAN3.MB16_32B_WORD0>
#### can3.cs41
<link=p.CAN3.CS41>
#### p.can3.mb9_64b_word1
<link=p.CAN3.MB9_64B_WORD1>
#### CAN3.MB41_8B_WORD0
<link=p.CAN3.MB41_8B_WORD0>
#### CAN3.MB9_64B_WORD2
<link=p.CAN3.MB9_64B_WORD2>
#### CAN3.CS42
<link=p.CAN3.CS42>
#### can3.mb28_16b_word1
<link=p.CAN3.MB28_16B_WORD1>
#### CAN3.ID43
<link=p.CAN3.ID43>
#### CAN3.MB17_32B_WORD1
<link=p.CAN3.MB17_32B_WORD1>
#### can3.mb17_32b_word3
<link=p.CAN3.MB17_32B_WORD3>
#### can3.mb43_8b_word1
<link=p.CAN3.MB43_8B_WORD1>
#### can3.mb9_64b_word11
<link=p.CAN3.MB9_64B_WORD11>
#### p.CAN3.CS44
<lang=dft>
 (rw)  [1;33m0x401d8340[0m (0x401d8000 + 0x0340)
Message Buffer 44 CS Register
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
#### p.CAN3.MB29_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8340[0m (0x401d8000 + 0x0340)
Message Buffer 29 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb29_16b_word0
<link=p.CAN3.MB29_16B_WORD0>
#### CAN3.MB9_64B_WORD12
<link=p.CAN3.MB9_64B_WORD12>
#### p.CAN3.ID44
<lang=dft>
 (rw)  [1;33m0x401d8344[0m (0x401d8000 + 0x0344)
Message Buffer 44 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB17_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8348[0m (0x401d8000 + 0x0348)
Message Buffer 17 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb45_8b_cs
<link=p.CAN3.MB45_8B_CS>
#### can3.mb45_8b_id
<link=p.CAN3.MB45_8B_ID>
#### p.can3.cs46
<link=p.CAN3.CS46>
#### can3.mb46_8b_cs
<link=p.CAN3.MB46_8B_CS>
#### CAN3.MB46_8B_CS
<link=p.CAN3.MB46_8B_CS>
#### p.can3.mb46_8b_word0
<link=p.CAN3.MB46_8B_WORD0>
#### p.CAN3.MB10_64B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d836c[0m (0x401d8000 + 0x036c)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB10_64B_WORD5
<link=p.CAN3.MB10_64B_WORD5>
#### can3.mb18_32b_word5
<link=p.CAN3.MB18_32B_WORD5>
#### can3.mb46_8b_word1
<link=p.CAN3.MB46_8B_WORD1>
#### p.CAN3.MB18_32B_WORD6
<lang=dft>
 (rw)  [1;33m0x401d8370[0m (0x401d8000 + 0x0370)
Message Buffer 18 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_27[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_26[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_25[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_24[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB47_8B_CS
<link=p.CAN3.MB47_8B_CS>
#### p.CAN3.MB32_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8380[0m (0x401d8000 + 0x0380)
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
#### CAN3.MB32_16B_CS
<link=p.CAN3.MB32_16B_CS>
#### CAN3.MB48_8B_WORD1
<link=p.CAN3.MB48_8B_WORD1>
#### CAN3.MB10_64B_WORD14
<link=p.CAN3.MB10_64B_WORD14>
#### can3.id49
<link=p.CAN3.ID49>
#### p.CAN3.MB10_64B_WORD15
<lang=dft>
 (rw)  [1;33m0x401d8394[0m (0x401d8000 + 0x0394)
Message Buffer 10 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_63[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_62[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_61[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_60[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB11_64B_CS
<link=p.CAN3.MB11_64B_CS>
#### CAN3.WORD049
<link=p.CAN3.WORD049>
#### p.CAN3.MB19_32B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d839c[0m (0x401d8000 + 0x039c)
Message Buffer 19 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb20_32b_word0
<link=p.CAN3.MB20_32B_WORD0>
#### p.can3.mb11_64b_word3
<link=p.CAN3.MB11_64B_WORD3>
#### p.can3.word150
<link=p.CAN3.WORD150>
#### CAN3.WORD150
<link=p.CAN3.WORD150>
#### p.can3.word051
<link=p.CAN3.WORD051>
#### p.CAN3.MB34_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83bc[0m (0x401d8000 + 0x03bc)
Message Buffer 34 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB51_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83bc[0m (0x401d8000 + 0x03bc)
Message Buffer 51 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB11_64B_WORD10
<link=p.CAN3.MB11_64B_WORD10>
#### can3.id53
<link=p.CAN3.ID53>
#### p.CAN3.MB35_16B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d83d4[0m (0x401d8000 + 0x03d4)
Message Buffer 35 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb35_16b_word1
<link=p.CAN3.MB35_16B_WORD1>
#### p.can3.mb11_64b_word15
<link=p.CAN3.MB11_64B_WORD15>
#### p.CAN3.MB12_64B_CS
<lang=dft>
 (rw)  [1;33m0x401d83e0[0m (0x401d8000 + 0x03e0)
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
#### p.CAN3.MB21_32B_WORD5
<lang=dft>
 (rw)  [1;33m0x401d83e4[0m (0x401d8000 + 0x03e4)
Message Buffer 21 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_23[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_22[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_21[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_20[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.mb21_32b_word6
<link=p.CAN3.MB21_32B_WORD6>
#### p.CAN3.MB22_32B_CS
<lang=dft>
 (rw)  [1;33m0x401d83f0[0m (0x401d8000 + 0x03f0)
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
#### p.can3.mb22_32b_cs
<link=p.CAN3.MB22_32B_CS>
#### p.CAN3.MB36_16B_WORD2
<lang=dft>
 (rw)  [1;33m0x401d83f0[0m (0x401d8000 + 0x03f0)
Message Buffer 36 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_11[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_10[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_9[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_8[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.id55
<link=p.CAN3.ID55>
#### p.CAN3.MB55_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d83f4[0m (0x401d8000 + 0x03f4)
Message Buffer 55 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### can3.mb22_32b_word0
<link=p.CAN3.MB22_32B_WORD0>
#### CAN3.MB55_8B_WORD0
<link=p.CAN3.MB55_8B_WORD0>
#### can3.mb12_64b_word5
<link=p.CAN3.MB12_64B_WORD5>
#### p.CAN3.MB37_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d83fc[0m (0x401d8000 + 0x03fc)
Message Buffer 37 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb12_64b_word6
<link=p.CAN3.MB12_64B_WORD6>
#### p.CAN3.MB37_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8400[0m (0x401d8000 + 0x0400)
Message Buffer 37 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb37_16b_word0
<link=p.CAN3.MB37_16B_WORD0>
#### p.CAN3.MB56_8B_ID
<lang=dft>
 (rw)  [1;33m0x401d8404[0m (0x401d8000 + 0x0404)
Message Buffer 56 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.mb56_8b_word0
<link=p.CAN3.MB56_8B_WORD0>
#### can3.mb56_8b_word0
<link=p.CAN3.MB56_8B_WORD0>
#### p.CAN3.MB56_8B_WORD1
<lang=dft>
 (rw)  [1;33m0x401d840c[0m (0x401d8000 + 0x040c)
Message Buffer 56 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB56_8B_WORD1
<link=p.CAN3.MB56_8B_WORD1>
#### p.CAN3.WORD156
<lang=dft>
 (rw)  [1;33m0x401d840c[0m (0x401d8000 + 0x040c)
Message Buffer 56 WORD1 Register
 (rw) (08)  [0;32mDATA_BYTE_7[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_6[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_5[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_4[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb22_32b_word7
<link=p.CAN3.MB22_32B_WORD7>
#### CAN3.MB38_16B_ID
<link=p.CAN3.MB38_16B_ID>
#### p.can3.mb12_64b_word12
<link=p.CAN3.MB12_64B_WORD12>
#### p.can3.mb38_16b_word1
<link=p.CAN3.MB38_16B_WORD1>
#### can3.mb12_64b_word14
<link=p.CAN3.MB12_64B_WORD14>
#### can3.mb58_8b_cs
<link=p.CAN3.MB58_8B_CS>
#### can3.mb23_32b_word2
<link=p.CAN3.MB23_32B_WORD2>
#### p.CAN3.MB39_16B_CS
<lang=dft>
 (rw)  [1;33m0x401d8428[0m (0x401d8000 + 0x0428)
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
#### p.CAN3.MB13_64B_ID
<lang=dft>
 (rw)  [1;33m0x401d842c[0m (0x401d8000 + 0x042c)
Message Buffer 13 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.CAN3.MB23_32B_WORD3
<lang=dft>
 (rw)  [1;33m0x401d842c[0m (0x401d8000 + 0x042c)
Message Buffer 23 WORD_32B Register
 (rw) (08)  [0;32mDATA_BYTE_15[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_14[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_13[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_12[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word158
<link=p.CAN3.WORD158>
#### p.can3.cs59
<link=p.CAN3.CS59>
#### CAN3.CS59
<link=p.CAN3.CS59>
#### can3.mb59_8b_cs
<link=p.CAN3.MB59_8B_CS>
#### CAN3.MB23_32B_WORD5
<link=p.CAN3.MB23_32B_WORD5>
#### p.can3.mb59_8b_id
<link=p.CAN3.MB59_8B_ID>
#### can3.mb59_8b_word0
<link=p.CAN3.MB59_8B_WORD0>
#### can3.word059
<link=p.CAN3.WORD059>
#### can3.mb13_64b_word3
<link=p.CAN3.MB13_64B_WORD3>
#### p.can3.mb23_32b_word7
<link=p.CAN3.MB23_32B_WORD7>
#### can3.mb40_16b_cs
<link=p.CAN3.MB40_16B_CS>
#### CAN3.MB40_16B_CS
<link=p.CAN3.MB40_16B_CS>
#### can3.mb40_16b_id
<link=p.CAN3.MB40_16B_ID>
#### p.can3.mb13_64b_word6
<link=p.CAN3.MB13_64B_WORD6>
#### CAN3.MB13_64B_WORD6
<link=p.CAN3.MB13_64B_WORD6>
#### p.CAN3.MB40_16B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8448[0m (0x401d8000 + 0x0448)
Message Buffer 40 WORD_16B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### CAN3.MB40_16B_WORD0
<link=p.CAN3.MB40_16B_WORD0>
#### p.CAN3.MB60_8B_WORD0
<lang=dft>
 (rw)  [1;33m0x401d8448[0m (0x401d8000 + 0x0448)
Message Buffer 60 WORD_8B Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.CAN3.MB13_64B_WORD7
<lang=dft>
 (rw)  [1;33m0x401d844c[0m (0x401d8000 + 0x044c)
Message Buffer 13 WORD_64B Register
 (rw) (08)  [0;32mDATA_BYTE_31[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_30[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_29[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_28[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### p.can3.mb61_8b_word0
<link=p.CAN3.MB61_8B_WORD0>
#### p.CAN3.WORD061
<lang=dft>
 (rw)  [1;33m0x401d8458[0m (0x401d8000 + 0x0458)
Message Buffer 61 WORD0 Register
 (rw) (08)  [0;32mDATA_BYTE_3[0m  - [07:00] -  Data byte 0 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_2[0m  - [15:08] -  Data byte 1 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_1[0m  - [23:16] -  Data byte 2 of Rx/Tx frame.
 (rw) (08)  [0;32mDATA_BYTE_0[0m  - [31:24] -  Data byte 3 of Rx/Tx frame.
</lang>
#### can3.word061
<link=p.CAN3.WORD061>
#### p.CAN3.MB41_16B_ID
<lang=dft>
 (rw)  [1;33m0x401d845c[0m (0x401d8000 + 0x045c)
Message Buffer 41 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### p.can3.word161
<link=p.CAN3.WORD161>
#### p.CAN3.ID62
<lang=dft>
 (rw)  [1;33m0x401d8464[0m (0x401d8000 + 0x0464)
Message Buffer 62 ID Register
 (rw) (18)  [0;32mEXT[0m  - [17:00] -  Contains extended (LOW word) identifier of message buffer.
 (rw) (11)  [0;32mSTD[0m  - [28:18] -  Contains standard/extended (HIGH word) identifier of message buffer.
 (rw) (03)  [0;32mPRIO[0m  - [31:29] -  Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR an
 d it only makes sense for Tx buffers. These bits are not transmitted. They are 
 appended to the regular ID to define the transmission priority.
</lang>
#### CAN3.MB62_8B_WORD0
<link=p.CAN3.MB62_8B_WORD0>
#### CAN3.MB63_8B_ID
<link=p.CAN3.MB63_8B_ID>
#### p.CAN3.RXIMR[5]
<lang=dft>
 (rw)  [1;33m0x401d8894[0m (0x401d8000 + 0x0894)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### p.CAN3.RXIMR[12]
<lang=dft>
 (rw)  [1;33m0x401d88b0[0m (0x401d8000 + 0x08b0)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### CAN3.RXIMR[18]
<link=p.CAN3.RXIMR[18]>
#### CAN3.RXIMR[20]
<link=p.CAN3.RXIMR[20]>
#### can3.rximr[21]
<link=p.CAN3.RXIMR[21]>
#### p.can3.rximr[23]
<link=p.CAN3.RXIMR[23]>
#### CAN3.RXIMR[33]
<link=p.CAN3.RXIMR[33]>
#### CAN3.RXIMR[36]
<link=p.CAN3.RXIMR[36]>
#### can3.rximr[39]
<link=p.CAN3.RXIMR[39]>
#### p.can3.rximr[46]
<link=p.CAN3.RXIMR[46]>
#### can3.rximr[46]
<link=p.CAN3.RXIMR[46]>
#### p.CAN3.RXIMR[48]
<lang=dft>
 (rw)  [1;33m0x401d8940[0m (0x401d8000 + 0x0940)
Rx Individual Mask Registers
 (rw) (32)  [0;32mMI[0m  - [31:00] -  Individual Mask Bits
</lang>
#### can3.rximr[50]
<link=p.CAN3.RXIMR[50]>
#### p.can3.rximr[52]
<link=p.CAN3.RXIMR[52]>
#### can3.rximr[55]
<link=p.CAN3.RXIMR[55]>
#### p.can3.rximr[58]
<link=p.CAN3.RXIMR[58]>
#### p.CAN3.FDCBT
<lang=dft>
 (rw)  [1;33m0x401d8c04[0m (0x401d8000 + 0x0c04)
CAN FD Bit Timing Register
 (rw) (03)  [0;32mFPSEG2[0m  - [02:00] -  Fast Phase Segment 2
 (rw) (03)  [0;32mFPSEG1[0m  - [07:05] -  Fast Phase Segment 1
 (rw) (05)  [0;32mFPROPSEG[0m  - [14:10] -  Fast Propagation Segment
 (rw) (03)  [0;32mFRJW[0m  - [18:16] -  Fast Resync Jump Width
 (rw) (10)  [0;32mFPRESDIV[0m  - [29:20] -  Fast Prescaler Division Factor
</lang>
#### p.CAN3.ERFIER
<lang=dft>
 (rw)  [1;33m0x401d8c10[0m (0x401d8000 + 0x0c10)
Enhanced Rx FIFO Interrupt Enable register
 (rw) (01)  [0;32mERFDAIE[0m  - [28:28] -  Enhanced Rx FIFO Data Available Interrupt Enable
      0 - ERFDAIE_0 :
         Enhanced Rx FIFO Data Available Interrupt is disabled
      0x1 - ERFDAIE_1 :
         Enhanced Rx FIFO Data Available Interrupt is enabled
 (rw) (01)  [0;32mERFWMIIE[0m  - [29:29] -  Enhanced Rx FIFO Watermark Indication Interrupt Enable
      0 - ERFWMIIE_0 :
         Enhanced Rx FIFO Watermark Interrupt is disabled
      0x1 - ERFWMIIE_1 :
         Enhanced Rx FIFO Watermark Interrupt is enabled
 (rw) (01)  [0;32mERFOVFIE[0m  - [30:30] -  Enhanced Rx FIFO Overflow Interrupt Enable
      0 - ERFOVFIE_0 :
         Enhanced Rx FIFO Overflow is disabled
      0x1 - ERFOVFIE_1 :
         Enhanced Rx FIFO Overflow is enabled
 (rw) (01)  [0;32mERFUFWIE[0m  - [31:31] -  Enhanced Rx FIFO Underflow Interrupt Enable
      0 - ERFUFWIE_0 :
         Enhanced Rx FIFO Underflow interrupt is disabled
      0x1 - ERFUFWIE_1 :
         Enhanced Rx FIFO Underflow interrupt is enabled
</lang>
#### can3.erfier
<link=p.CAN3.ERFIER>
#### p.CAN3.HR_TIME_STAMP[2]
<lang=dft>
 (ro)  [1;33m0x401d8c38[0m (0x401d8000 + 0x0c38)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[2]
<link=p.CAN3.HR_TIME_STAMP[2]>
#### p.CAN3.HR_TIME_STAMP[10]
<lang=dft>
 (ro)  [1;33m0x401d8c58[0m (0x401d8000 + 0x0c58)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[10]
<link=p.CAN3.HR_TIME_STAMP[10]>
#### p.CAN3.HR_TIME_STAMP[15]
<lang=dft>
 (ro)  [1;33m0x401d8c6c[0m (0x401d8000 + 0x0c6c)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.CAN3.HR_TIME_STAMP[21]
<lang=dft>
 (ro)  [1;33m0x401d8c84[0m (0x401d8000 + 0x0c84)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### p.can3.hr_time_stamp[21]
<link=p.CAN3.HR_TIME_STAMP[21]>
#### CAN3.HR_TIME_STAMP[27]
<link=p.CAN3.HR_TIME_STAMP[27]>
#### p.CAN3.HR_TIME_STAMP[39]
<lang=dft>
 (ro)  [1;33m0x401d8ccc[0m (0x401d8000 + 0x0ccc)
High Resolution Time Stamp
 (ro) (32)  [0;32mTS[0m  - [31:00] -  High Resolution Time Stamp
</lang>
#### CAN3.HR_TIME_STAMP[40]
<link=p.CAN3.HR_TIME_STAMP[40]>
#### can3.hr_time_stamp[45]
<link=p.CAN3.HR_TIME_STAMP[45]>
#### can3.hr_time_stamp[52]
<link=p.CAN3.HR_TIME_STAMP[52]>
#### CAN3.HR_TIME_STAMP[54]
<link=p.CAN3.HR_TIME_STAMP[54]>
#### can3.hr_time_stamp[60]
<link=p.CAN3.HR_TIME_STAMP[60]>
#### p.CAN3.ERFFEL[1]
<lang=dft>
 (rw)  [1;33m0x401db004[0m (0x401d8000 + 0x3004)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### can3.erffel[3]
<link=p.CAN3.ERFFEL[3]>
#### p.CAN3.ERFFEL[4]
<lang=dft>
 (rw)  [1;33m0x401db010[0m (0x401d8000 + 0x3010)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[5]
<link=p.CAN3.ERFFEL[5]>
#### can3.erffel[8]
<link=p.CAN3.ERFFEL[8]>
#### p.CAN3.ERFFEL[11]
<lang=dft>
 (rw)  [1;33m0x401db02c[0m (0x401d8000 + 0x302c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[17]
<link=p.CAN3.ERFFEL[17]>
#### can3.erffel[26]
<link=p.CAN3.ERFFEL[26]>
#### p.CAN3.ERFFEL[27]
<lang=dft>
 (rw)  [1;33m0x401db06c[0m (0x401d8000 + 0x306c)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[27]
<link=p.CAN3.ERFFEL[27]>
#### p.can3.erffel[30]
<link=p.CAN3.ERFFEL[30]>
#### can3.erffel[32]
<link=p.CAN3.ERFFEL[32]>
#### can3.erffel[35]
<link=p.CAN3.ERFFEL[35]>
#### p.CAN3.ERFFEL[37]
<lang=dft>
 (rw)  [1;33m0x401db094[0m (0x401d8000 + 0x3094)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[39]
<link=p.CAN3.ERFFEL[39]>
#### p.can3.erffel[46]
<link=p.CAN3.ERFFEL[46]>
#### can3.erffel[47]
<link=p.CAN3.ERFFEL[47]>
#### p.CAN3.ERFFEL[48]
<lang=dft>
 (rw)  [1;33m0x401db0c0[0m (0x401d8000 + 0x30c0)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### CAN3.ERFFEL[48]
<link=p.CAN3.ERFFEL[48]>
#### can3.erffel[50]
<link=p.CAN3.ERFFEL[50]>
#### p.can3.erffel[52]
<link=p.CAN3.ERFFEL[52]>
#### p.can3.erffel[55]
<link=p.CAN3.ERFFEL[55]>
#### can3.erffel[61]
<link=p.CAN3.ERFFEL[61]>
#### CAN3.ERFFEL[72]
<link=p.CAN3.ERFFEL[72]>
#### p.CAN3.ERFFEL[76]
<lang=dft>
 (rw)  [1;33m0x401db130[0m (0x401d8000 + 0x3130)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[79]
<link=p.CAN3.ERFFEL[79]>
#### p.can3.erffel[84]
<link=p.CAN3.ERFFEL[84]>
#### CAN3.ERFFEL[90]
<link=p.CAN3.ERFFEL[90]>
#### p.CAN3.ERFFEL[96]
<lang=dft>
 (rw)  [1;33m0x401db180[0m (0x401d8000 + 0x3180)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[101]
<link=p.CAN3.ERFFEL[101]>
#### p.CAN3.ERFFEL[107]
<lang=dft>
 (rw)  [1;33m0x401db1ac[0m (0x401d8000 + 0x31ac)
Enhanced Rx FIFO Filter Element
 (rw) (32)  [0;32mFEL[0m  - [31:00] -  Filter Element Bits
</lang>
#### p.can3.erffel[111]
<link=p.CAN3.ERFFEL[111]>
#### can3.erffel[118]
<link=p.CAN3.ERFFEL[118]>
#### can3.erffel[122]
<link=p.CAN3.ERFFEL[122]>
#### CAN3.ERFFEL[122]
<link=p.CAN3.ERFFEL[122]>
#### CAN3.ERFFEL[125]
<link=p.CAN3.ERFFEL[125]>
#### p.tmr1.comp12
<link=p.TMR1.COMP12>
#### tmr1.comp12
<link=p.TMR1.COMP12>
#### TMR1.COMP13
<link=p.TMR1.COMP13>
#### tmr1.comp23
<link=p.TMR1.COMP23>
#### p.TMR1.CAPT1
<lang=dft>
 (rw)  [1;33m0x401dc024[0m (0x401dc000 + 0x0024)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### TMR1.LOAD1
<link=p.TMR1.LOAD1>
#### TMR1.HOLD3
<link=p.TMR1.HOLD3>
#### p.tmr1.sctrl1
<link=p.TMR1.SCTRL1>
#### TMR1.SCTRL2
<link=p.TMR1.SCTRL2>
#### TMR1.CMPLD20
<link=p.TMR1.CMPLD20>
#### p.TMR1.CMPLD22
<lang=dft>
 (rw)  [1;33m0x401dc052[0m (0x401dc000 + 0x0052)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### TMR1.CSCTRL2
<link=p.TMR1.CSCTRL2>
#### p.TMR1.FILT1
<lang=dft>
 (rw)  [1;33m0x401dc036[0m (0x401dc000 + 0x0036)
Timer Channel Input Filter Register
 (rw) (08)  [0;32mFILT_PER[0m  - [07:00] -  Input Filter Sample Period
 (rw) (03)  [0;32mFILT_CNT[0m  - [10:08] -  Input Filter Sample Count
</lang>
#### TMR1.ENBL
<link=p.TMR1.ENBL>
#### tmr2.comp10
<link=p.TMR2.COMP10>
#### TMR2.COMP13
<link=p.TMR2.COMP13>
#### p.TMR2.CAPT2
<lang=dft>
 (rw)  [1;33m0x401e0044[0m (0x401e0000 + 0x0044)
Timer Channel Capture Register
 (rw) (16)  [0;32mCAPTURE[0m  - [15:00] -  Capture Value
</lang>
#### TMR2.LOAD2
<link=p.TMR2.LOAD2>
#### TMR2.HOLD0
<link=p.TMR2.HOLD0>
#### p.TMR2.CNTR0
<lang=dft>
 (rw)  [1;33m0x401e000a[0m (0x401e0000 + 0x000a)
Timer Channel Counter Register
 (rw) (16)  [0;32mCOUNTER[0m  - [15:00] -  This read/write register is the counter for the corresponding channel in a time
 r module.
</lang>
#### TMR2.CTRL0
<link=p.TMR2.CTRL0>
#### TMR2.SCTRL1
<link=p.TMR2.SCTRL1>
#### TMR2.CMPLD21
<link=p.TMR2.CMPLD21>
#### TMR2.DMA2
<link=p.TMR2.DMA2>
#### p.TMR3.COMP22
<lang=dft>
 (rw)  [1;33m0x401e4042[0m (0x401e4000 + 0x0042)
Timer Channel Compare Register 2
 (rw) (16)  [0;32mCOMPARISON_2[0m  - [15:00] -  Comparison Value 2
</lang>
#### TMR3.LOAD3
<link=p.TMR3.LOAD3>
#### TMR3.HOLD2
<link=p.TMR3.HOLD2>
#### p.tmr3.cntr0
<link=p.TMR3.CNTR0>
#### TMR3.CNTR3
<link=p.TMR3.CNTR3>
#### p.TMR3.CTRL3
<lang=dft>
 (rw)  [1;33m0x401e406c[0m (0x401e4000 + 0x006c)
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
#### tmr3.sctrl1
<link=p.TMR3.SCTRL1>
#### p.TMR3.CMPLD12
<lang=dft>
 (rw)  [1;33m0x401e4050[0m (0x401e4000 + 0x0050)
Timer Channel Comparator Load Register 1
 (rw) (16)  [0;32mCOMPARATOR_LOAD_1[0m  - [15:00] -  This read/write register is the comparator 1 preload value for the COMP1 regist
 er for the corresponding channel in a timer module
</lang>
#### p.TMR3.CMPLD23
<lang=dft>
 (rw)  [1;33m0x401e4072[0m (0x401e4000 + 0x0072)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### TMR3.CMPLD23
<link=p.TMR3.CMPLD23>
#### tmr3.csctrl2
<link=p.TMR3.CSCTRL2>
#### p.tmr3.csctrl3
<link=p.TMR3.CSCTRL3>
#### p.tmr3.dma1
<link=p.TMR3.DMA1>
#### TMR4.COMP10
<link=p.TMR4.COMP10>
#### tmr4.comp11
<link=p.TMR4.COMP11>
#### TMR4.COMP21
<link=p.TMR4.COMP21>
#### p.tmr4.capt1
<link=p.TMR4.CAPT1>
#### p.TMR4.LOAD1
<lang=dft>
 (rw)  [1;33m0x401e8026[0m (0x401e8000 + 0x0026)
Timer Channel Load Register
 (rw) (16)  [0;32mLOAD[0m  - [15:00] -  Timer Load Register
</lang>
#### tmr4.load2
<link=p.TMR4.LOAD2>
#### p.TMR4.HOLD1
<lang=dft>
 (rw)  [1;33m0x401e8028[0m (0x401e8000 + 0x0028)
Timer Channel Hold Register
 (rw) (16)  [0;32mHOLD[0m  - [15:00] -  This read/write register stores the counter's values of specific channels whene
 ver any of the four counters within a module is read
</lang>
#### p.tmr4.cntr1
<link=p.TMR4.CNTR1>
#### p.TMR4.CTRL0
<lang=dft>
 (rw)  [1;33m0x401e800c[0m (0x401e8000 + 0x000c)
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
#### TMR4.SCTRL2
<link=p.TMR4.SCTRL2>
#### p.TMR4.CMPLD21
<lang=dft>
 (rw)  [1;33m0x401e8032[0m (0x401e8000 + 0x0032)
Timer Channel Comparator Load Register 2
 (rw) (16)  [0;32mCOMPARATOR_LOAD_2[0m  - [15:00] -  This read/write register is the comparator 2 preload value for the COMP2 regist
 er for the corresponding channel in a timer module
</lang>
#### tmr4.filt2
<link=p.TMR4.FILT2>
#### p.tmr4.filt3
<link=p.TMR4.FILT3>
#### TMR4.DMA2
<link=p.TMR4.DMA2>
#### gpt1.ocr1
<link=p.GPT1.OCR1>
#### GPT1.OCR2
<link=p.GPT1.OCR2>
#### p.GPT2.CR
<lang=dft>
 (rw)  [1;33m0x401f0000[0m (0x401f0000 + 0x0000)
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
#### p.gpt2.sr
<link=p.GPT2.SR>
#### p.OCOTP.CTRL_CLR
<lang=dft>
 (rw)  [1;33m0x401f4008[0m (0x401f4000 + 0x0008)
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
#### p.ocotp.mem2
<link=p.OCOTP.MEM2>
#### OCOTP.MEM2
<link=p.OCOTP.MEM2>
#### p.OCOTP.OTPMK1
<lang=dft>
 (rw)  [1;33m0x401f4510[0m (0x401f4000 + 0x0510)
Value of OTP Bank2 Word1 (OTPMK Key)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### ocotp.otpmk2
<link=p.OCOTP.OTPMK2>
#### p.ocotp.sjc_resp0
<link=p.OCOTP.SJC_RESP0>
#### p.OCOTP.MAC0
<lang=dft>
 (rw)  [1;33m0x401f4620[0m (0x401f4000 + 0x0620)
Value of OTP Bank4 Word2 (MAC Address)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### ocotp.mac0
<link=p.OCOTP.MAC0>
#### p.OCOTP.OTPMK_CRC32
<lang=dft>
 (rw)  [1;33m0x401f4650[0m (0x401f4000 + 0x0650)
Value of OTP Bank4 Word5 (CRC Key)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.ocotp.gp2
<link=p.OCOTP.GP2>
#### p.ocotp.sw_gp23
<link=p.OCOTP.SW_GP23>
#### p.OCOTP.ROM_PATCH2
<lang=dft>
 (rw)  [1;33m0x401f4820[0m (0x401f4000 + 0x0820)
Value of OTP Bank6 Word2 (ROM Patch)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### p.OCOTP.GP33
<lang=dft>
 (rw)  [1;33m0x401f48b0[0m (0x401f4000 + 0x08b0)
Value of OTP Bank7 Word3 (GP3)
 (rw) (32)  [0;32mBITS[0m  - [31:00] -  BITS
</lang>
#### OCOTP.GP33
<link=p.OCOTP.GP33>
#### ocotp.gp40
<link=p.OCOTP.GP40>
#### p.ocotp.gp43
<link=p.OCOTP.GP43>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_02>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_03>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_11>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_14>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_18
<lang=dft>
 (rw)  [1;33m0x401f805c[0m (0x401f8000 + 0x005c)
SW_MUX_CTL_PAD_GPIO_EMC_18 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SEMC_ADDR09 of instance: semc
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM4_PWMB03 of instance: flexpwm4
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART4_RTS_B of instance: lpuart4
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: FLEXCAN1_RX of instance: flexcan1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: QTIMER3_TIMER3 of instance: qtimer3
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO4_IO18 of instance: gpio4
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SNVS_VIO_5_CTL of instance: snvs_hp
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_EMC_18
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_24
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_24>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_25
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_25>
#### iomuxc.sw_mux_ctl_pad_gpio_emc_32
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_32>
#### p.iomuxc.sw_mux_ctl_pad_gpio_emc_37
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_37>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_04
<lang=dft>
 (rw)  [1;33m0x401f80cc[0m (0x401f8000 + 0x00cc)
SW_MUX_CTL_PAD_GPIO_AD_B0_04 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: SRC_BOOT_MODE00 of instance: src
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: MQS_RIGHT of instance: mqs
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ENET_TX_DATA03 of instance: enet
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI2_TX_SYNC of instance: sai2
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: CSI_DATA09 of instance: csi
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO1_IO04 of instance: gpio1
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: PIT_TRIGGER00 of instance: pit
      0x7 - ALT7 :
         Select mux mode: ALT7 mux port: LPSPI3_PCS1 of instance: lpspi3
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_AD_B0_04
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b0_08
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_08>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_12>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_13>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_06>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_07
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_07>
#### p.iomuxc.sw_mux_ctl_pad_gpio_ad_b1_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_11>
#### iomuxc.sw_mux_ctl_pad_gpio_ad_b1_14
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_14>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_02>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_03
<lang=dft>
 (rw)  [1;33m0x401f8148[0m (0x401f8000 + 0x0148)
SW_MUX_CTL_PAD_GPIO_B0_03 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_VSYNC of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: QTIMER2_TIMER0 of instance: qtimer2
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: FLEXCAN1_RX of instance: flexcan1
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: LPSPI4_SCK of instance: lpspi4
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO03 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO03 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: WDOG2_RESET_B_DEB of instance: wdog2
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_1588_EVENT0_IN of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_03
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_10>
#### iomuxc.sw_mux_ctl_pad_gpio_b0_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_11>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_14
<lang=dft>
 (rw)  [1;33m0x401f8174[0m (0x401f8000 + 0x0174)
SW_MUX_CTL_PAD_GPIO_B0_14 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: LCD_DATA10 of instance: lcdif
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: XBAR1_INOUT12 of instance: xbar1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: ARM_TXEV of instance: cm7_mx6rt
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_RX_SYNC of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: FLEXIO2_FLEXIO14 of instance: flexio2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO2_IO14 of instance: gpio2
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SRC_BOOT_CFG10 of instance: src
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_TX_EN of instance: enet2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_B0_14
</lang>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_04>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_09
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_09>
#### p.iomuxc.sw_mux_ctl_pad_gpio_b1_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_13>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_03
<lang=dft>
 (rw)  [1;33m0x401f81c8[0m (0x401f8000 + 0x01c8)
SW_MUX_CTL_PAD_GPIO_SD_B0_03 SW MUX Control Register
 (rw) (04)  [0;32mMUX_MODE[0m  - [03:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC1_DATA1 of instance: usdhc1
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXPWM1_PWMB01 of instance: flexpwm1
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART8_RTS_B of instance: lpuart8
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: XBAR1_INOUT07 of instance: xbar1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI1_SDI of instance: lpspi1
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO15 of instance: gpio3
      0x8 - ALT8 :
         Select mux mode: ALT8 mux port: ENET2_RDATA00 of instance: enet2
      0x9 - ALT9 :
         Select mux mode: ALT9 mux port: SEMC_CLK6 of instance: semc
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B0_03
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b0_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_05>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_06>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_08
<lang=dft>
 (rw)  [1;33m0x401f81f4[0m (0x401f8000 + 0x01f4)
SW_MUX_CTL_PAD_GPIO_SD_B1_08 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: USDHC2_DATA4 of instance: usdhc2
      0x1 - ALT1 :
         Select mux mode: ALT1 mux port: FLEXSPIA_DATA00 of instance: flexspi
      0x2 - ALT2 :
         Select mux mode: ALT2 mux port: LPUART7_TX of instance: lpuart7
      0x3 - ALT3 :
         Select mux mode: ALT3 mux port: SAI1_TX_BCLK of instance: sai1
      0x4 - ALT4 :
         Select mux mode: ALT4 mux port: LPSPI2_SD0 of instance: lpspi2
      0x5 - ALT5 :
         Select mux mode: ALT5 mux port: GPIO3_IO08 of instance: gpio3
      0x6 - ALT6 :
         Select mux mode: ALT6 mux port: SEMC_CSX02 of instance: semc
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SD_B1_08
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_sd_b1_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_11>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_00>
#### iomuxc.sw_pad_ctl_pad_gpio_emc_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_05>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_07
<lang=dft>
 (rw)  [1;33m0x401f8220[0m (0x401f8000 + 0x0220)
SW_PAD_CTL_PAD_GPIO_EMC_07 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_emc_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_12>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_16
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_16>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_19
<lang=dft>
 (rw)  [1;33m0x401f8250[0m (0x401f8000 + 0x0250)
SW_PAD_CTL_PAD_GPIO_EMC_19 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_21
<lang=dft>
 (rw)  [1;33m0x401f8258[0m (0x401f8000 + 0x0258)
SW_PAD_CTL_PAD_GPIO_EMC_21 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_emc_23
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_23>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_30
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_30>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_36
<lang=dft>
 (rw)  [1;33m0x401f8294[0m (0x401f8000 + 0x0294)
SW_PAD_CTL_PAD_GPIO_EMC_36 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_39
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_39>
#### p.iomuxc.sw_pad_ctl_pad_gpio_emc_41
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_41>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_00>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_02
<lang=dft>
 (rw)  [1;33m0x401f82b4[0m (0x401f8000 + 0x02b4)
SW_PAD_CTL_PAD_GPIO_AD_B0_02 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_ad_b0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_03>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_05
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_05>
#### p.iomuxc.sw_pad_ctl_pad_gpio_ad_b1_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_07>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B1_08
<lang=dft>
 (rw)  [1;33m0x401f830c[0m (0x401f8000 + 0x030c)
SW_PAD_CTL_PAD_GPIO_AD_B1_08 SW PAD Control Register
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
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_06
<lang=dft>
 (rw)  [1;33m0x401f8344[0m (0x401f8000 + 0x0344)
SW_PAD_CTL_PAD_GPIO_B0_06 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_b0_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_07>
#### p.iomuxc.sw_pad_ctl_pad_gpio_b0_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_09>
#### iomuxc.sw_pad_ctl_pad_gpio_b0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_10>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_15
<lang=dft>
 (rw)  [1;33m0x401f8368[0m (0x401f8000 + 0x0368)
SW_PAD_CTL_PAD_GPIO_B0_15 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_15
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_15>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_01>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_09
<lang=dft>
 (rw)  [1;33m0x401f8390[0m (0x401f8000 + 0x0390)
SW_PAD_CTL_PAD_GPIO_B1_09 SW PAD Control Register
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
#### iomuxc.sw_pad_ctl_pad_gpio_b1_13
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_13>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_02>
#### p.iomuxc.sw_pad_ctl_pad_gpio_sd_b1_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_08>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_09
<lang=dft>
 (rw)  [1;33m0x401f83e8[0m (0x401f8000 + 0x03e8)
SW_PAD_CTL_PAD_GPIO_SD_B1_09 SW PAD Control Register
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
#### p.iomuxc.csi_data03_select_input
<link=p.IOMUXC.CSI_DATA03_SELECT_INPUT>
#### p.iomuxc.csi_hsync_select_input
<link=p.IOMUXC.CSI_HSYNC_SELECT_INPUT>
#### iomuxc.csi_hsync_select_input
<link=p.IOMUXC.CSI_HSYNC_SELECT_INPUT>
#### iomuxc.csi_vsync_select_input
<link=p.IOMUXC.CSI_VSYNC_SELECT_INPUT>
#### p.IOMUXC.ENET_TXCLK_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8448[0m (0x401f8000 + 0x0448)
ENET_TXCLK_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_25_ALT3 :
         Selecting Pad: GPIO_EMC_25 for Mode: ALT3
      0x1 - GPIO_B1_10_ALT3 :
         Selecting Pad: GPIO_B1_10 for Mode: ALT3
</lang>
#### p.IOMUXC.FLEXPWM2_PWMA0_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8478[0m (0x401f8000 + 0x0478)
FLEXPWM2_PWMA0_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_06_ALT1 :
         Selecting Pad: GPIO_EMC_06 for Mode: ALT1
      0x1 - GPIO_B0_06_ALT2 :
         Selecting Pad: GPIO_B0_06 for Mode: ALT2
</lang>
#### p.IOMUXC.FLEXPWM2_PWMB2_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8490[0m (0x401f8000 + 0x0490)
FLEXPWM2_PWMB2_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_11_ALT1 :
         Selecting Pad: GPIO_EMC_11 for Mode: ALT1
      0x1 - GPIO_B0_11_ALT2 :
         Selecting Pad: GPIO_B0_11 for Mode: ALT2
</lang>
#### iomuxc.flexspia_data1_select_input
<link=p.IOMUXC.FLEXSPIA_DATA1_SELECT_INPUT>
#### p.IOMUXC.LPI2C1_SDA_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f84d0[0m (0x401f8000 + 0x04d0)
LPI2C1_SDA_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_05_ALT2 :
         Selecting Pad: GPIO_SD_B1_05 for Mode: ALT2
      0x1 - GPIO_AD_B1_01_ALT3 :
         Selecting Pad: GPIO_AD_B1_01 for Mode: ALT3
</lang>
#### IOMUXC.LPI2C2_SCL_SELECT_INPUT
<link=p.IOMUXC.LPI2C2_SCL_SELECT_INPUT>
#### IOMUXC.LPSPI1_PCS0_SELECT_INPUT
<link=p.IOMUXC.LPSPI1_PCS0_SELECT_INPUT>
#### iomuxc.lpspi2_sdi_select_input
<link=p.IOMUXC.LPSPI2_SDI_SELECT_INPUT>
#### IOMUXC.LPSPI4_PCS0_SELECT_INPUT
<link=p.IOMUXC.LPSPI4_PCS0_SELECT_INPUT>
#### p.IOMUXC.LPUART2_TX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8530[0m (0x401f8000 + 0x0530)
LPUART2_TX_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_11_ALT2 :
         Selecting Pad: GPIO_SD_B1_11 for Mode: ALT2
      0x1 - GPIO_AD_B1_02_ALT2 :
         Selecting Pad: GPIO_AD_B1_02 for Mode: ALT2
</lang>
#### p.IOMUXC.LPUART4_RX_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8540[0m (0x401f8000 + 0x0540)
LPUART4_RX_SELECT_INPUT DAISY Register
 (rw) (02)  [0;32mDAISY[0m  - [01:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_SD_B1_01_ALT4 :
         Selecting Pad: GPIO_SD_B1_01 for Mode: ALT4
      0x1 - GPIO_EMC_20_ALT2 :
         Selecting Pad: GPIO_EMC_20 for Mode: ALT2
      0x2 - GPIO_B1_01_ALT2 :
         Selecting Pad: GPIO_B1_01 for Mode: ALT2
</lang>
#### p.iomuxc.lpuart5_rx_select_input
<link=p.IOMUXC.LPUART5_RX_SELECT_INPUT>
#### iomuxc.lpuart6_tx_select_input
<link=p.IOMUXC.LPUART6_TX_SELECT_INPUT>
#### IOMUXC.NMI_SELECT_INPUT
<link=p.IOMUXC.NMI_SELECT_INPUT>
#### p.iomuxc.qtimer2_timer0_select_input
<link=p.IOMUXC.QTIMER2_TIMER0_SELECT_INPUT>
#### iomuxc.qtimer3_timer0_select_input
<link=p.IOMUXC.QTIMER3_TIMER0_SELECT_INPUT>
#### p.iomuxc.qtimer3_timer3_select_input
<link=p.IOMUXC.QTIMER3_TIMER3_SELECT_INPUT>
#### p.iomuxc.sai2_rx_data0_select_input
<link=p.IOMUXC.SAI2_RX_DATA0_SELECT_INPUT>
#### p.iomuxc.spdif_in_select_input
<link=p.IOMUXC.SPDIF_IN_SELECT_INPUT>
#### IOMUXC.SPDIF_IN_SELECT_INPUT
<link=p.IOMUXC.SPDIF_IN_SELECT_INPUT>
#### p.iomuxc.usdhc1_wp_select_input
<link=p.IOMUXC.USDHC1_WP_SELECT_INPUT>
#### iomuxc.usdhc1_wp_select_input
<link=p.IOMUXC.USDHC1_WP_SELECT_INPUT>
#### p.iomuxc.usdhc2_data0_select_input
<link=p.IOMUXC.USDHC2_DATA0_SELECT_INPUT>
#### IOMUXC.USDHC2_DATA2_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA2_SELECT_INPUT>
#### IOMUXC.USDHC2_DATA3_SELECT_INPUT
<link=p.IOMUXC.USDHC2_DATA3_SELECT_INPUT>
#### p.iomuxc.usdhc2_data6_select_input
<link=p.IOMUXC.USDHC2_DATA6_SELECT_INPUT>
#### iomuxc.usdhc2_data7_select_input
<link=p.IOMUXC.USDHC2_DATA7_SELECT_INPUT>
#### iomuxc.usdhc2_wp_select_input
<link=p.IOMUXC.USDHC2_WP_SELECT_INPUT>
#### IOMUXC.XBAR1_IN07_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN07_SELECT_INPUT>
#### iomuxc.xbar1_in17_select_input
<link=p.IOMUXC.XBAR1_IN17_SELECT_INPUT>
#### IOMUXC.XBAR1_IN20_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN20_SELECT_INPUT>
#### p.IOMUXC.XBAR1_IN22_SELECT_INPUT
<lang=dft>
 (rw)  [1;33m0x401f8638[0m (0x401f8000 + 0x0638)
XBAR1_IN22_SELECT_INPUT DAISY Register
 (rw) (01)  [0;32mDAISY[0m  - [00:00] -  Selecting Pads Involved in Daisy Chain.
      0 - GPIO_EMC_36_ALT1 :
         Selecting Pad: GPIO_EMC_36 for Mode: ALT1
      0x1 - GPIO_AD_B0_10_ALT6 :
         Selecting Pad: GPIO_AD_B0_10 for Mode: ALT6
</lang>
#### IOMUXC.XBAR1_IN14_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN14_SELECT_INPUT>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_04>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_08
<lang=dft>
 (rw)  [1;33m0x401f867c[0m (0x401f8000 + 0x067c)
SW_MUX_CTL_PAD_GPIO_SPI_B0_08 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_SCLK of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B0_08
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b0_12
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_12>
#### p.iomuxc.sw_mux_ctl_pad_gpio_spi_b0_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B0_13>
#### IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_00
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_00>
#### p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_02
<lang=dft>
 (rw)  [1;33m0x401f869c[0m (0x401f8000 + 0x069c)
SW_MUX_CTL_PAD_GPIO_SPI_B1_02 SW MUX Control Register
 (rw) (03)  [0;32mMUX_MODE[0m  - [02:00] -  MUX Mode Select Field.
      0 - ALT0 :
         Select mux mode: ALT0 mux port: FLEXSPI2_A_DATA02 of instance: flexspi2
 (rw) (01)  [0;32mSION[0m  - [04:04] -  Software Input On Field.
      0 - DISABLED :
         Input Path is determined by functionality
      0x1 - ENABLED :
         Force input path of pad GPIO_SPI_B1_02
</lang>
#### iomuxc.sw_mux_ctl_pad_gpio_spi_b1_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_06>
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_03>
#### p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_08
<lang=dft>
 (rw)  [1;33m0x401f86d4[0m (0x401f8000 + 0x06d4)
SW_PAD_CTL_PAD_GPIO_SPI_B0_08 SW PAD Control Register
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
#### IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_10
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_10>
#### iomuxc.sw_pad_ctl_pad_gpio_spi_b0_12
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_12>
#### p.iomuxc.sw_pad_ctl_pad_gpio_spi_b1_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_02>
#### iomuxc.enet2_ipp_ind_mac0_rxdata_select_input_0
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXDATA_SELECT_INPUT_0>
#### IOMUXC.ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_RXEN_SELECT_INPUT>
#### iomuxc.enet2_ipp_ind_mac0_timer_select_input_0
<link=p.IOMUXC.ENET2_IPP_IND_MAC0_TIMER_SELECT_INPUT_0>
#### IOMUXC.SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2
<link=p.IOMUXC.SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2>
#### p.iomuxc.sai3_ipp_ind_sai_rxbclk_select_input
<link=p.IOMUXC.SAI3_IPP_IND_SAI_RXBCLK_SELECT_INPUT>
#### iomuxc.sai3_ipp_ind_sai_txbclk_select_input
<link=p.IOMUXC.SAI3_IPP_IND_SAI_TXBCLK_SELECT_INPUT>
#### p.iomuxc.semc_i_ipp_ind_dqs4_select_input
<link=p.IOMUXC.SEMC_I_IPP_IND_DQS4_SELECT_INPUT>
#### p.kpp.kddr
<link=p.KPP.KDDR>
#### p.flexspi.lutcr
<link=p.FLEXSPI.LUTCR>
#### p.FLEXSPI.AHBRXBUF1CR0
<lang=dft>
 (rw)  [1;33m0x402a8024[0m (0x402a8000 + 0x0024)
AHB RX Buffer 1 Control Register 0
 (rw) (08)  [0;32mBUFSZ[0m  - [07:00] -  AHB RX Buffer Size in 64 bits.Refer AHB RX Buffer Management for more details.
 (rw) (04)  [0;32mMSTRID[0m  - [19:16] -  This AHB RX Buffer is assigned according to AHB Master with ID (MSTR_ID). Pleas
 e refer to for AHB RX Buffer allocation.
 (rw) (02)  [0;32mPRIORITY[0m  - [25:24] -  This priority for AHB Master Read which this AHB RX Buffer is assigned. Refer f
 or more details.
 (rw) (01)  [0;32mPREFETCHEN[0m  - [31:31] -  AHB Read Prefetch Enable for current AHB RX Buffer corresponding Master.
</lang>
#### p.FLEXSPI.FLSHCR1A2
<lang=dft>
 (rw)  [1;33m0x402a8074[0m (0x402a8000 + 0x0074)
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
#### FLEXSPI.IPRXFCR
<link=p.FLEXSPI.IPRXFCR>
#### FLEXSPI.DLLCRB
<link=p.FLEXSPI.DLLCRB>
#### FLEXSPI.IPTXFSTS
<link=p.FLEXSPI.IPTXFSTS>
#### flexspi.rfdr[3]
<link=p.FLEXSPI.RFDR[3]>
#### FLEXSPI.RFDR[9]
<link=p.FLEXSPI.RFDR[9]>
#### p.FLEXSPI.RFDR[14]
<lang=dft>
 (ro)  [1;33m0x402a8138[0m (0x402a8000 + 0x0138)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi.rfdr[19]
<link=p.FLEXSPI.RFDR[19]>
#### flexspi.rfdr[19]
<link=p.FLEXSPI.RFDR[19]>
#### p.FLEXSPI.RFDR[25]
<lang=dft>
 (ro)  [1;33m0x402a8164[0m (0x402a8000 + 0x0164)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI.RFDR[29]
<link=p.FLEXSPI.RFDR[29]>
#### FLEXSPI.RFDR[31]
<link=p.FLEXSPI.RFDR[31]>
#### p.FLEXSPI.TFDR[1]
<lang=dft>
 (wo)  [1;33m0x402a8184[0m (0x402a8000 + 0x0184)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### FLEXSPI.TFDR[5]
<link=p.FLEXSPI.TFDR[5]>
#### p.FLEXSPI.TFDR[12]
<lang=dft>
 (wo)  [1;33m0x402a81b0[0m (0x402a8000 + 0x01b0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI.TFDR[18]
<lang=dft>
 (wo)  [1;33m0x402a81c8[0m (0x402a8000 + 0x01c8)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.FLEXSPI.TFDR[20]
<lang=dft>
 (wo)  [1;33m0x402a81d0[0m (0x402a8000 + 0x01d0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi.tfdr[21]
<link=p.FLEXSPI.TFDR[21]>
#### flexspi.tfdr[22]
<link=p.FLEXSPI.TFDR[22]>
#### p.flexspi.tfdr[24]
<link=p.FLEXSPI.TFDR[24]>
#### flexspi.tfdr[27]
<link=p.FLEXSPI.TFDR[27]>
#### flexspi.lut[9]
<link=p.FLEXSPI.LUT[9]>
#### p.flexspi.lut[10]
<link=p.FLEXSPI.LUT[10]>
#### flexspi.lut[12]
<link=p.FLEXSPI.LUT[12]>
#### p.FLEXSPI.LUT[13]
<lang=dft>
 (rw)  [1;33m0x402a8234[0m (0x402a8000 + 0x0234)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI.LUT[16]
<lang=dft>
 (rw)  [1;33m0x402a8240[0m (0x402a8000 + 0x0240)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[17]
<link=p.FLEXSPI.LUT[17]>
#### FLEXSPI.LUT[22]
<link=p.FLEXSPI.LUT[22]>
#### flexspi.lut[23]
<link=p.FLEXSPI.LUT[23]>
#### FLEXSPI.LUT[28]
<link=p.FLEXSPI.LUT[28]>
#### flexspi.lut[33]
<link=p.FLEXSPI.LUT[33]>
#### flexspi.lut[34]
<link=p.FLEXSPI.LUT[34]>
#### p.flexspi.lut[36]
<link=p.FLEXSPI.LUT[36]>
#### p.FLEXSPI.LUT[38]
<lang=dft>
 (rw)  [1;33m0x402a8298[0m (0x402a8000 + 0x0298)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.flexspi.lut[39]
<link=p.FLEXSPI.LUT[39]>
#### flexspi.lut[39]
<link=p.FLEXSPI.LUT[39]>
#### flexspi.lut[41]
<link=p.FLEXSPI.LUT[41]>
#### p.flexspi.lut[46]
<link=p.FLEXSPI.LUT[46]>
#### p.FLEXSPI.LUT[49]
<lang=dft>
 (rw)  [1;33m0x402a82c4[0m (0x402a8000 + 0x02c4)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[57]
<link=p.FLEXSPI.LUT[57]>
#### p.FLEXSPI.LUT[59]
<lang=dft>
 (rw)  [1;33m0x402a82ec[0m (0x402a8000 + 0x02ec)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI.LUT[61]
<link=p.FLEXSPI.LUT[61]>
#### p.FLEXSPI.LUT[62]
<lang=dft>
 (rw)  [1;33m0x402a82f8[0m (0x402a8000 + 0x02f8)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### FLEXSPI2.LUTKEY
<link=p.FLEXSPI2.LUTKEY>
#### p.flexspi2.flsha2cr0
<link=p.FLEXSPI2.FLSHA2CR0>
#### FLEXSPI2.FLSHB1CR0
<link=p.FLEXSPI2.FLSHB1CR0>
#### p.flexspi2.ipcr0
<link=p.FLEXSPI2.IPCR0>
#### FLEXSPI2.IPRXFCR
<link=p.FLEXSPI2.IPRXFCR>
#### p.FLEXSPI2.STS0
<lang=dft>
 (ro)  [1;33m0x402a40e0[0m (0x402a4000 + 0x00e0)
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
#### FLEXSPI2.AHBSPNDSTS
<link=p.FLEXSPI2.AHBSPNDSTS>
#### p.flexspi2.rfdr[0]
<link=p.FLEXSPI2.RFDR[0]>
#### FLEXSPI2.RFDR[12]
<link=p.FLEXSPI2.RFDR[12]>
#### p.flexspi2.rfdr[13]
<link=p.FLEXSPI2.RFDR[13]>
#### p.FLEXSPI2.RFDR[14]
<lang=dft>
 (ro)  [1;33m0x402a4138[0m (0x402a4000 + 0x0138)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### p.flexspi2.rfdr[16]
<link=p.FLEXSPI2.RFDR[16]>
#### flexspi2.rfdr[16]
<link=p.FLEXSPI2.RFDR[16]>
#### p.flexspi2.rfdr[19]
<link=p.FLEXSPI2.RFDR[19]>
#### p.FLEXSPI2.RFDR[29]
<lang=dft>
 (ro)  [1;33m0x402a4174[0m (0x402a4000 + 0x0174)
IP RX FIFO Data Register 0
 (ro) (32)  [0;32mRXDATA[0m  - [31:00] -  RX Data
</lang>
#### FLEXSPI2.RFDR[29]
<link=p.FLEXSPI2.RFDR[29]>
#### flexspi2.rfdr[30]
<link=p.FLEXSPI2.RFDR[30]>
#### p.flexspi2.tfdr[2]
<link=p.FLEXSPI2.TFDR[2]>
#### p.FLEXSPI2.TFDR[4]
<lang=dft>
 (wo)  [1;33m0x402a4190[0m (0x402a4000 + 0x0190)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### flexspi2.tfdr[9]
<link=p.FLEXSPI2.TFDR[9]>
#### p.flexspi2.tfdr[10]
<link=p.FLEXSPI2.TFDR[10]>
#### p.FLEXSPI2.TFDR[12]
<lang=dft>
 (wo)  [1;33m0x402a41b0[0m (0x402a4000 + 0x01b0)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi2.tfdr[15]
<link=p.FLEXSPI2.TFDR[15]>
#### FLEXSPI2.TFDR[18]
<link=p.FLEXSPI2.TFDR[18]>
#### p.FLEXSPI2.TFDR[19]
<lang=dft>
 (wo)  [1;33m0x402a41cc[0m (0x402a4000 + 0x01cc)
IP TX FIFO Data Register 0
 (wo) (32)  [0;32mTXDATA[0m  - [31:00] -  TX Data
</lang>
#### p.flexspi2.tfdr[21]
<link=p.FLEXSPI2.TFDR[21]>
#### flexspi2.tfdr[23]
<link=p.FLEXSPI2.TFDR[23]>
#### FLEXSPI2.TFDR[27]
<link=p.FLEXSPI2.TFDR[27]>
#### FLEXSPI2.LUT[1]
<link=p.FLEXSPI2.LUT[1]>
#### flexspi2.lut[3]
<link=p.FLEXSPI2.LUT[3]>
#### p.flexspi2.lut[7]
<link=p.FLEXSPI2.LUT[7]>
#### flexspi2.lut[9]
<link=p.FLEXSPI2.LUT[9]>
#### flexspi2.lut[21]
<link=p.FLEXSPI2.LUT[21]>
#### p.FLEXSPI2.LUT[33]
<lang=dft>
 (rw)  [1;33m0x402a4284[0m (0x402a4000 + 0x0284)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[42]
<lang=dft>
 (rw)  [1;33m0x402a42a8[0m (0x402a4000 + 0x02a8)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[48]
<lang=dft>
 (rw)  [1;33m0x402a42c0[0m (0x402a4000 + 0x02c0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### p.FLEXSPI2.LUT[56]
<lang=dft>
 (rw)  [1;33m0x402a42e0[0m (0x402a4000 + 0x02e0)
LUT 0
 (rw) (08)  [0;32mOPERAND0[0m  - [07:00] -  OPERAND0
 (rw) (02)  [0;32mNUM_PADS0[0m  - [09:08] -  NUM_PADS0
 (rw) (06)  [0;32mOPCODE0[0m  - [15:10] -  OPCODE
 (rw) (08)  [0;32mOPERAND1[0m  - [23:16] -  OPERAND1
 (rw) (02)  [0;32mNUM_PADS1[0m  - [25:24] -  NUM_PADS1
 (rw) (06)  [0;32mOPCODE1[0m  - [31:26] -  OPCODE1
</lang>
#### flexspi2.lut[59]
<link=p.FLEXSPI2.LUT[59]>
#### p.PXP.CTRL_SET
<lang=dft>
 (rw)  [1;33m0x402b4004[0m (0x402b4000 + 0x0004)
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
#### p.PXP.STAT
<lang=dft>
 (rw)  [1;33m0x402b4010[0m (0x402b4000 + 0x0010)
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
#### PXP.OUT_CTRL
<link=p.PXP.OUT_CTRL>
#### p.pxp.out_ctrl_clr
<link=p.PXP.OUT_CTRL_CLR>
#### p.pxp.out_buf
<link=p.PXP.OUT_BUF>
#### pxp.out_buf2
<link=p.PXP.OUT_BUF2>
#### pxp.out_ps_lrc
<link=p.PXP.OUT_PS_LRC>
#### PXP.PS_CTRL_SET
<link=p.PXP.PS_CTRL_SET>
#### pxp.ps_ubuf
<link=p.PXP.PS_UBUF>
#### PXP.PS_BACKGROUND
<link=p.PXP.PS_BACKGROUND>
#### pxp.as_buf
<link=p.PXP.AS_BUF>
#### p.pxp.csc1_coef1
<link=p.PXP.CSC1_COEF1>
#### p.PXP.CSC1_COEF2
<lang=dft>
 (rw)  [1;33m0x402b41c0[0m (0x402b4000 + 0x01c0)
Color Space Conversion Coefficient Register 2
 (rw) (11)  [0;32mC3[0m  - [10:00] -  Two's complement Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x
 79C (-0.392)
 (ro) (05)  [0;32mRSVD0[0m  - [15:11] -  Reserved, always set to zero.
 (rw) (11)  [0;32mC2[0m  - [26:16] -  Two's complement Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x
 730 (-0.813)
 (ro) (05)  [0;32mRSVD1[0m  - [31:27] -  Reserved, always set to zero.
</lang>
#### pxp.next
<link=p.PXP.NEXT>
#### PXP.PORTER_DUFF_CTRL
<link=p.PXP.PORTER_DUFF_CTRL>
#### p.LCDIF
<lang=dft>
base: 0x402b8000
BM_ERROR_STAT   CRC_STAT        CTRL            CTRL1           
CTRL1_CLR       CTRL1_SET       CTRL1_TOG       CTRL2           
CTRL2_CLR       CTRL2_SET       CTRL2_TOG       CTRL_CLR        
CTRL_SET        CTRL_TOG        CUR_BUF         LUT0_ADDR       
LUT0_DATA       LUT1_ADDR       LUT1_DATA       LUT_CTRL        
NEXT_BUF        PIGEONCTRL0     PIGEONCTRL0_CLR PIGEONCTRL0_SET 
PIGEONCTRL0_TOG PIGEONCTRL1     PIGEONCTRL1_CLR PIGEONCTRL1_SET 
PIGEONCTRL1_TOG PIGEONCTRL2     PIGEONCTRL2_CLR PIGEONCTRL2_SET 
PIGEONCTRL2_TOG PIGEON_0_0      PIGEON_0_1      PIGEON_0_2      
PIGEON_10_0     PIGEON_10_1     PIGEON_10_2     PIGEON_11_0     
PIGEON_11_1     PIGEON_11_2     PIGEON_1_0      PIGEON_1_1      
PIGEON_1_2      PIGEON_2_0      PIGEON_2_1      PIGEON_2_2      
PIGEON_3_0      PIGEON_3_1      PIGEON_3_2      PIGEON_4_0      
PIGEON_4_1      PIGEON_4_2      PIGEON_5_0      PIGEON_5_1      
PIGEON_5_2      PIGEON_6_0      PIGEON_6_1      PIGEON_6_2      
PIGEON_7_0      PIGEON_7_1      PIGEON_7_2      PIGEON_8_0      
PIGEON_8_1      PIGEON_8_2      PIGEON_9_0      PIGEON_9_1      
PIGEON_9_2      STAT            TRANSFER_COUNT  VDCTRL0         
VDCTRL0_CLR     VDCTRL0_SET     VDCTRL0_TOG     VDCTRL1         
VDCTRL2         VDCTRL3         VDCTRL4         
输入 p.LCDIF.{reg_name} 以查看寄存器的详细信息
type p.LCDIF.{reg_name} to check details of registers
</lang>
#### lcdif.ctrl_set
<link=p.LCDIF.CTRL_SET>
#### p.LCDIF.CTRL_CLR
<lang=dft>
 (rw)  [1;33m0x402b8008[0m (0x402b8000 + 0x0008)
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
#### p.lcdif.ctrl1
<link=p.LCDIF.CTRL1>
#### p.LCDIF.CTRL1_SET
<lang=dft>
 (rw)  [1;33m0x402b8014[0m (0x402b8000 + 0x0014)
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
#### p.lcdif.ctrl2_set
<link=p.LCDIF.CTRL2_SET>
#### p.LCDIF.CTRL2_CLR
<lang=dft>
 (rw)  [1;33m0x402b8028[0m (0x402b8000 + 0x0028)
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
#### p.lcdif.ctrl2_clr
<link=p.LCDIF.CTRL2_CLR>
#### p.LCDIF.CTRL2_TOG
<lang=dft>
 (rw)  [1;33m0x402b802c[0m (0x402b8000 + 0x002c)
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
#### lcdif.bm_error_stat
<link=p.LCDIF.BM_ERROR_STAT>
#### p.LCDIF.PIGEONCTRL0
<lang=dft>
 (rw)  [1;33m0x402b8380[0m (0x402b8000 + 0x0380)
LCDIF Pigeon Mode Control0 Register
 (rw) (12)  [0;32mFD_PERIOD[0m  - [11:00] -  Period of line counter during FD phase
 (rw) (12)  [0;32mLD_PERIOD[0m  - [27:16] -  Period of pclk counter during LD phase
</lang>
#### lcdif.pigeonctrl1_tog
<link=p.LCDIF.PIGEONCTRL1_TOG>
#### LCDIF.PIGEONCTRL1_TOG
<link=p.LCDIF.PIGEONCTRL1_TOG>
#### p.LCDIF.PIGEONCTRL2_TOG
<lang=dft>
 (rw)  [1;33m0x402b83ac[0m (0x402b8000 + 0x03ac)
LCDIF Pigeon Mode Control2 Register
 (rw) (01)  [0;32mPIGEON_DATA_EN[0m  - [00:00] -  Pigeon mode data enable
 (rw) (01)  [0;32mPIGEON_CLK_GATE[0m  - [01:01] -  Pigeon mode dot clock gate enable
</lang>
#### p.LCDIF.PIGEON_3_0
<lang=dft>
 (rw)  [1;33m0x402b88c0[0m (0x402b8000 + 0x08c0)
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
#### LCDIF.PIGEON_5_0
<link=p.LCDIF.PIGEON_5_0>
#### p.lcdif.pigeon_5_1
<link=p.LCDIF.PIGEON_5_1>
#### LCDIF.PIGEON_7_2
<link=p.LCDIF.PIGEON_7_2>
#### lcdif.pigeon_8_0
<link=p.LCDIF.PIGEON_8_0>
#### LCDIF.PIGEON_9_2
<link=p.LCDIF.PIGEON_9_2>
#### p.lcdif.pigeon_11_0
<link=p.LCDIF.PIGEON_11_0>
#### p.LCDIF.LUT1_ADDR
<lang=dft>
 (rw)  [1;33m0x402b8b30[0m (0x402b8000 + 0x0b30)
Lookup Table Control Register.
 (rw) (08)  [0;32mADDR[0m  - [07:00] -  LUT indexed address pointer
</lang>
#### p.CSI
<lang=dft>
base: 0x402bc000
CSICR1          CSICR18         CSICR19         CSICR2          
CSICR3          CSIDMASA_FB1    CSIDMASA_FB2    CSIDMASA_STATFIFO  
CSIDMATS_STATFIFO  CSIFBUF_PARA    CSIIMAG_PARA    CSIRFIFO        
CSIRXCNT        CSISR           CSISTATFIFO     
输入 p.CSI.{reg_name} 以查看寄存器的详细信息
type p.CSI.{reg_name} to check details of registers
</lang>
#### csi.csirfifo
<link=p.CSI.CSIRFIFO>
#### p.csi.csidmats_statfifo
<link=p.CSI.CSIDMATS_STATFIFO>
#### csi.csidmats_statfifo
<link=p.CSI.CSIDMATS_STATFIFO>
#### CSI.CSIDMASA_FB2
<link=p.CSI.CSIDMASA_FB2>
#### p.csi.csicr18
<link=p.CSI.CSICR18>
#### p.usdhc1.ds_addr
<link=p.USDHC1.DS_ADDR>
#### USDHC1.INT_SIGNAL_EN
<link=p.USDHC1.INT_SIGNAL_EN>
#### p.USDHC1.WTMK_LVL
<lang=dft>
 (rw)  [1;33m0x402c0044[0m (0x402c0000 + 0x0044)
Watermark Level
 (rw) (08)  [0;32mRD_WML[0m  - [07:00] -  Read Watermark Level
 (rw) (05)  [0;32mRD_BRST_LEN[0m  - [12:08] -  Read Burst Length Due to system restriction, the actual burst length may not ex
 ceed 16.
 (rw) (08)  [0;32mWR_WML[0m  - [23:16] -  Write Watermark Level
 (rw) (05)  [0;32mWR_BRST_LEN[0m  - [28:24] -  Write Burst Length Due to system restriction, the actual burst length may not e
 xceed 16.
</lang>
#### p.USDHC1.DLL_STATUS
<lang=dft>
 (ro)  [1;33m0x402c0064[0m (0x402c0000 + 0x0064)
DLL Status
 (ro) (01)  [0;32mDLL_STS_SLV_LOCK[0m  - [00:00] -  DLL_STS_SLV_LOCK
 (ro) (01)  [0;32mDLL_STS_REF_LOCK[0m  - [01:01] -  DLL_STS_REF_LOCK
 (ro) (07)  [0;32mDLL_STS_SLV_SEL[0m  - [08:02] -  DLL_STS_SLV_SEL
 (ro) (07)  [0;32mDLL_STS_REF_SEL[0m  - [15:09] -  DLL_STS_REF_SEL
</lang>
#### usdhc1.dll_status
<link=p.USDHC1.DLL_STATUS>
#### USDHC1.CLK_TUNE_CTRL_STATUS
<link=p.USDHC1.CLK_TUNE_CTRL_STATUS>
#### p.USDHC1.VEND_SPEC2
<lang=dft>
 (rw)  [1;33m0x402c00c8[0m (0x402c0000 + 0x00c8)
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
#### p.usdhc1.tuning_ctrl
<link=p.USDHC1.TUNING_CTRL>
#### usdhc2.blk_att
<link=p.USDHC2.BLK_ATT>
#### USDHC2.ADMA_ERR_STATUS
<link=p.USDHC2.ADMA_ERR_STATUS>
#### p.USDHC2.MMC_BOOT
<lang=dft>
 (rw)  [1;33m0x402c40c4[0m (0x402c4000 + 0x00c4)
MMC Boot Register
 (rw) (04)  [0;32mDTOCV_ACK[0m  - [03:00] -  DTOCV_ACK
      0 - DTOCV_ACK_0 :
         SDCLK x 2^14
      0x1 - DTOCV_ACK_1 :
         SDCLK x 2^15
      0x2 - DTOCV_ACK_2 :
         SDCLK x 2^16
      0x3 - DTOCV_ACK_3 :
         SDCLK x 2^17
      0x4 - DTOCV_ACK_4 :
         SDCLK x 2^18
      0x5 - DTOCV_ACK_5 :
         SDCLK x 2^19
      0x6 - DTOCV_ACK_6 :
         SDCLK x 2^20
      0x7 - DTOCV_ACK_7 :
         SDCLK x 2^21
      0xE - DTOCV_ACK_14 :
         SDCLK x 2^28
      0xF - DTOCV_ACK_15 :
         SDCLK x 2^29
 (rw) (01)  [0;32mBOOT_ACK[0m  - [04:04] -  BOOT_ACK
      0 - BOOT_ACK_0 :
         No ack
      0x1 - BOOT_ACK_1 :
         Ack
 (rw) (01)  [0;32mBOOT_MODE[0m  - [05:05] -  BOOT_MODE
      0 - BOOT_MODE_0 :
         Normal boot
      0x1 - BOOT_MODE_1 :
         Alternative boot
 (rw) (01)  [0;32mBOOT_EN[0m  - [06:06] -  BOOT_EN
      0 - BOOT_EN_0 :
         Fast boot disable
      0x1 - BOOT_EN_1 :
         Fast boot enable
 (rw) (01)  [0;32mAUTO_SABG_EN[0m  - [07:07] -  AUTO_SABG_EN
 (rw) (01)  [0;32mDISABLE_TIME_OUT[0m  - [08:08] -  Disable Time Out
      0 - DISABLE_TIME_OUT_0 :
         Enable time out
      0x1 - DISABLE_TIME_OUT_1 :
         Disable time out
 (rw) (16)  [0;32mBOOT_BLK_CNT[0m  - [31:16] -  BOOT_BLK_CNT
</lang>
#### p.ENET.MIBC
<lang=dft>
 (rw)  [1;33m0x402d8064[0m (0x402d8000 + 0x0064)
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
#### p.enet.mibc
<link=p.ENET.MIBC>
#### p.ENET.TXIC
<lang=dft>
 (rw)  [1;33m0x402d80f0[0m (0x402d8000 + 0x00f0)
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
#### p.enet.rxic
<link=p.ENET.RXIC>
#### p.ENET.RSFL
<lang=dft>
 (rw)  [1;33m0x402d8190[0m (0x402d8000 + 0x0190)
Receive FIFO Section Full Threshold
 (rw) (08)  [0;32mRX_SECTION_FULL[0m  - [07:00] -  Value Of Receive FIFO Section Full Threshold
</lang>
#### ENET.RAFL
<link=p.ENET.RAFL>
#### ENET.RACC
<link=p.ENET.RACC>
#### p.enet.rmon_t_drop
<link=p.ENET.RMON_T_DROP>
#### enet.rmon_t_bc_pkt
<link=p.ENET.RMON_T_BC_PKT>
#### p.ENET.RMON_T_FRAG
<lang=dft>
 (ro)  [1;33m0x402d821c[0m (0x402d8000 + 0x021c)
Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of packets less than 64 bytes with bad CRC
</lang>
#### p.ENET.RMON_T_COL
<lang=dft>
 (ro)  [1;33m0x402d8224[0m (0x402d8000 + 0x0224)
Tx Collision Count Statistic Register
 (ro) (16)  [0;32mTXPKTS[0m  - [15:00] -  Number of transmit collisions
</lang>
#### p.enet.ieee_t_def
<link=p.ENET.IEEE_T_DEF>
#### p.ENET.IEEE_T_EXCOL
<lang=dft>
 (ro)  [1;33m0x402d8260[0m (0x402d8000 + 0x0260)
Frames Transmitted with Excessive Collisions Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of frames transmitted with excessive collisions
</lang>
#### p.ENET.RMON_R_MC_PKT
<lang=dft>
 (ro)  [1;33m0x402d828c[0m (0x402d8000 + 0x028c)
Rx Multicast Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive multicast packets
</lang>
#### p.ENET.RMON_R_OVERSIZE
<lang=dft>
 (ro)  [1;33m0x402d8298[0m (0x402d8000 + 0x0298)
Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of receive packets greater than MAX_FL and good CRC
</lang>
#### enet.rmon_r_p128to255
<link=p.ENET.RMON_R_P128TO255>
#### enet.rmon_r_p256to511
<link=p.ENET.RMON_R_P256TO511>
#### enet.ieee_r_drop
<link=p.ENET.IEEE_R_DROP>
#### enet.ieee_r_crc
<link=p.ENET.IEEE_R_CRC>
#### p.ENET.IEEE_R_OCTETS_OK
<lang=dft>
 (ro)  [1;33m0x402d82e0[0m (0x402d8000 + 0x02e0)
Octet Count for Frames Received without Error Statistic Register
 (ro) (32)  [0;32mCOUNT[0m  - [31:00] -  Number of octets for frames received without error
</lang>
#### p.enet.atcr
<link=p.ENET.ATCR>
#### p.ENET.ATOFF
<lang=dft>
 (rw)  [1;33m0x402d8408[0m (0x402d8000 + 0x0408)
Timer Offset Register
 (rw) (32)  [0;32mOFFSET[0m  - [31:00] -  Offset value for one-shot event generation
</lang>
#### p.enet.atstmp
<link=p.ENET.ATSTMP>
#### enet.tcsr0
<link=p.ENET.TCSR0>
#### p.ENET.TCCR0
<lang=dft>
 (rw)  [1;33m0x402d860c[0m (0x402d8000 + 0x060c)
Timer Compare Capture Register
 (rw) (32)  [0;32mTCC[0m  - [31:00] -  Timer Capture Compare
</lang>
#### ENET.TCCR2
<link=p.ENET.TCCR2>
#### p.enet2
<link=p.ENET2>
#### enet2.palr
<link=p.ENET2.PALR>
#### enet2.iaur
<link=p.ENET2.IAUR>
#### ENET2.IALR
<link=p.ENET2.IALR>
#### p.enet2.mrbr
<link=p.ENET2.MRBR>
#### enet2.raem
<link=p.ENET2.RAEM>
#### enet2.rmon_t_packets
<link=p.ENET2.RMON_T_PACKETS>
#### p.ENET2.IEEE_T_DROP
<lang=dft>
 (ro)  [1;33m0x402d4248[0m (0x402d4000 + 0x0248)
Reserved Statistic Register
</lang>
#### enet2.ieee_t_frame_ok
<link=p.ENET2.IEEE_T_FRAME_OK>
#### ENET2.IEEE_T_MCOL
<link=p.ENET2.IEEE_T_MCOL>
#### p.enet2.ieee_t_def
<link=p.ENET2.IEEE_T_DEF>
#### p.enet2.rmon_r_bc_pkt
<link=p.ENET2.RMON_R_BC_PKT>
#### ENET2.RMON_R_MC_PKT
<link=p.ENET2.RMON_R_MC_PKT>
#### enet2.rmon_r_crc_align
<link=p.ENET2.RMON_R_CRC_ALIGN>
#### p.enet2.rmon_r_undersize
<link=p.ENET2.RMON_R_UNDERSIZE>
#### p.ENET2.RMON_R_RESVD_0
<lang=dft>
 (ro)  [1;33m0x402d42a4[0m (0x402d4000 + 0x02a4)
Reserved Statistic Register
</lang>
#### p.ENET2.RMON_R_P64
<lang=dft>
 (ro)  [1;33m0x402d42a8[0m (0x402d4000 + 0x02a8)
Rx 64-Byte Packets Statistic Register
 (ro) (16)  [0;32mCOUNT[0m  - [15:00] -  Number of 64-byte receive packets
</lang>
#### p.ENET2.RMON_R_OCTETS
<lang=dft>
 (ro)  [1;33m0x402d42c4[0m (0x402d4000 + 0x02c4)
Rx Octets Statistic Register
 (ro) (32)  [0;32mCOUNT[0m  - [31:00] -  Number of receive octets
</lang>
#### p.enet2.ieee_r_crc
<link=p.ENET2.IEEE_R_CRC>
#### enet2.ieee_r_octets_ok
<link=p.ENET2.IEEE_R_OCTETS_OK>
#### p.ENET2.ATINC
<lang=dft>
 (rw)  [1;33m0x402d4414[0m (0x402d4000 + 0x0414)
Time-Stamping Clock Period Register
 (rw) (07)  [0;32mINC[0m  - [06:00] -  Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
 (rw) (07)  [0;32mINC_CORR[0m  - [14:08] -  Correction Increment Value
</lang>
#### p.enet2.tcsr2
<link=p.ENET2.TCSR2>
#### enet2.tccr0
<link=p.ENET2.TCCR0>
#### USB1.GPTIMER1CTRL
<link=p.USB1.GPTIMER1CTRL>
#### p.USB1.HCIVERSION
<lang=dft>
 (ro)  [1;33m0x402e0102[0m (0x402e0000 + 0x0102)
Host Controller Interface Version
 (ro) (16)  [0;32mHCIVERSION[0m  - [15:00] -  Host Controller Interface Version Number Default value is '10h', which means EH
 CI rev1.0.
</lang>
#### p.usb1.hccparams
<link=p.USB1.HCCPARAMS>
#### usb1.usbcmd
<link=p.USB1.USBCMD>
#### p.usb1.txfilltuning
<link=p.USB1.TXFILLTUNING>
#### p.USB1.ENDPTCOMPLETE
<lang=dft>
 (rw)  [1;33m0x402e01bc[0m (0x402e0000 + 0x01bc)
Endpoint Complete
 (rw) (08)  [0;32mERCE[0m  - [07:00] -  Endpoint Receive Complete Event - RW/C
 (rw) (08)  [0;32mETCE[0m  - [23:16] -  Endpoint Transmit Complete Event - R/WC
</lang>
#### p.usb2.hwdevice
<link=p.USB2.HWDEVICE>
#### p.USB2.HWRXBUF
<lang=dft>
 (ro)  [1;33m0x402e0214[0m (0x402e0200 + 0x0014)
RX Buffer Hardware Parameters
 (ro) (08)  [0;32mRXBURST[0m  - [07:00] -  Default burst size for memory to RX buffer transfer
 (ro) (08)  [0;32mRXADD[0m  - [15:08] -  Buffer total size for all receive endpoints is (2^RXADD)
</lang>
#### USB2.HWRXBUF
<link=p.USB2.HWRXBUF>
#### USB2.GPTIMER0CTRL
<link=p.USB2.GPTIMER0CTRL>
#### USB2.SBUSCFG
<link=p.USB2.SBUSCFG>
#### usb2.hcsparams
<link=p.USB2.HCSPARAMS>
#### p.USB2.USBINTR
<lang=dft>
 (rw)  [1;33m0x402e0348[0m (0x402e0200 + 0x0148)
Interrupt Enable Register
 (rw) (01)  [0;32mUE[0m  - [00:00] -  USB Interrupt Enable When this bit is one and the UI bit in n_USBSTS register i
 s a one the controller will issue an interrupt
 (rw) (01)  [0;32mUEE[0m  - [01:01] -  USB Error Interrupt Enable When this bit is one and the UEI bit in n_USBSTS reg
 ister is a one the controller will issue an interrupt
 (rw) (01)  [0;32mPCE[0m  - [02:02] -  Port Change Detect Interrupt Enable When this bit is one and the PCI bit in n_U
 SBSTS register is a one the controller will issue an interrupt
 (rw) (01)  [0;32mFRE[0m  - [03:03] -  Frame List Rollover Interrupt Enable When this bit is one and the FRI bit in n_
 USBSTS register is a one the controller will issue an interrupt
 (rw) (01)  [0;32mSEE[0m  - [04:04] -  System Error Interrupt Enable When this bit is one and the SEI bit in n_USBSTS 
 register is a one the controller will issue an interrupt
 (rw) (01)  [0;32mAAE[0m  - [05:05] -  Async Advance Interrupt Enable When this bit is one and the AAI bit in n_USBSTS
  register is a one the controller will issue an interrupt
 (rw) (01)  [0;32mURE[0m  - [06:06] -  USB Reset Interrupt Enable When this bit is one and the URI bit in n_USBSTS reg
 ister is a one the controller will issue an interrupt
 (rw) (01)  [0;32mSRE[0m  - [07:07] -  SOF Received Interrupt Enable When this bit is one and the SRI bit in n_USBSTS 
 register is a one the controller will issue an interrupt
 (rw) (01)  [0;32mSLE[0m  - [08:08] -  Sleep Interrupt Enable When this bit is one and the SLI bit in n_n_USBSTS regis
 ter is a one the controller will issue an interrupt
 (rw) (01)  [0;32mULPIE[0m  - [10:10] -  ULPI Interrupt Enable When this bit is one and the UPLII bit in n_USBSTS regist
 er is a one the controller will issue an interrupt
 (rw) (01)  [0;32mNAKE[0m  - [16:16] -  NAK Interrupt Enable When this bit is one and the NAKI bit in n_USBSTS register
  is a one the controller will issue an interrupt
 (rw) (01)  [0;32mUAIE[0m  - [18:18] -  USB Host Asynchronous Interrupt Enable When this bit is one, and the UAI bit in
  the n_USBSTS register is one, host controller will issue an interrupt at the n
 ext interrupt threshold
 (rw) (01)  [0;32mUPIE[0m  - [19:19] -  USB Host Periodic Interrupt Enable When this bit is one, and the UPI bit in the
  n_USBSTS register is one, host controller will issue an interrupt at the next 
 interrupt threshold
 (rw) (01)  [0;32mTIE0[0m  - [24:24] -  General Purpose Timer #0 Interrupt Enable When this bit is one and the TI0 bit 
 in n_USBSTS register is a one the controller will issue an interrupt
 (rw) (01)  [0;32mTIE1[0m  - [25:25] -  General Purpose Timer #1 Interrupt Enable When this bit is one and the TI1 bit 
 in n_USBSTS register is a one the controller will issue an interrupt
</lang>
#### p.USB2.OTGSC
<lang=dft>
 (rw)  [1;33m0x402e03a4[0m (0x402e0200 + 0x01a4)
On-The-Go Status & control
 (rw) (01)  [0;32mVD[0m  - [00:00] -  VBUS_Discharge - Read/Write. Setting this bit causes VBus to discharge through 
 a resistor.
 (rw) (01)  [0;32mVC[0m  - [01:01] -  VBUS Charge - Read/Write
 (rw) (01)  [0;32mOT[0m  - [03:03] -  OTG Termination - Read/Write
 (rw) (01)  [0;32mDP[0m  - [04:04] -  Data Pulsing - Read/Write
 (rw) (01)  [0;32mIDPU[0m  - [05:05] -  ID Pullup - Read/Write This bit provide control over the ID pull-up resistor; 0
  = off, 1 = on [default]
 (ro) (01)  [0;32mID[0m  - [08:08] -  USB ID - Read Only. 0 = A device, 1 = B device
 (ro) (01)  [0;32mAVV[0m  - [09:09] -  A VBus Valid - Read Only. Indicates VBus is above the A VBus valid threshold.
 (ro) (01)  [0;32mASV[0m  - [10:10] -  A Session Valid - Read Only. Indicates VBus is above the A session valid thresh
 old.
 (ro) (01)  [0;32mBSV[0m  - [11:11] -  B Session Valid - Read Only. Indicates VBus is above the B session valid thresh
 old.
 (ro) (01)  [0;32mBSE[0m  - [12:12] -  B Session End - Read Only. Indicates VBus is below the B session end threshold.
 (ro) (01)  [0;32mTOG_1MS[0m  - [13:13] -  1 millisecond timer toggle - Read Only. This bit toggles once per millisecond.
 (ro) (01)  [0;32mDPS[0m  - [14:14] -  Data Bus Pulsing Status - Read Only
 (rw) (01)  [0;32mIDIS[0m  - [16:16] -  USB ID Interrupt Status - Read/Write
 (rw) (01)  [0;32mAVVIS[0m  - [17:17] -  A VBus Valid Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mASVIS[0m  - [18:18] -  A Session Valid Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mBSVIS[0m  - [19:19] -  B Session Valid Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mBSEIS[0m  - [20:20] -  B Session End Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mSTATUS_1MS[0m  - [21:21] -  1 millisecond timer Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mDPIS[0m  - [22:22] -  Data Pulse Interrupt Status - Read/Write to Clear
 (rw) (01)  [0;32mIDIE[0m  - [24:24] -  USB ID Interrupt Enable - Read/Write. Setting this bit enables the USB ID inter
 rupt.
 (rw) (01)  [0;32mAVVIE[0m  - [25:25] -  A VBus Valid Interrupt Enable - Read/Write. Setting this bit enables the A VBus
  valid interrupt.
 (rw) (01)  [0;32mASVIE[0m  - [26:26] -  A Session Valid Interrupt Enable - Read/Write
 (rw) (01)  [0;32mBSVIE[0m  - [27:27] -  B Session Valid Interrupt Enable - Read/Write
 (rw) (01)  [0;32mBSEIE[0m  - [28:28] -  B Session End Interrupt Enable - Read/Write. Setting this bit enables the B ses
 sion end interrupt.
 (rw) (01)  [0;32mEN_1MS[0m  - [29:29] -  1 millisecond timer Interrupt Enable - Read/Write
 (rw) (01)  [0;32mDPIE[0m  - [30:30] -  Data Pulse Interrupt Enable
</lang>
#### usb2.endptsetupstat
<link=p.USB2.ENDPTSETUPSTAT>
#### USB2.ENDPTPRIME
<link=p.USB2.ENDPTPRIME>
#### USB2.ENDPTFLUSH
<link=p.USB2.ENDPTFLUSH>
#### p.USB2.ENDPTCTRL1
<lang=dft>
 (rw)  [1;33m0x402e03c4[0m (0x402e0200 + 0x01c4)
Endpoint Control 1
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
#### USB2.ENDPTCTRL2
<link=p.USB2.ENDPTCTRL2>
#### usb2.endptctrl6
<link=p.USB2.ENDPTCTRL6>
#### p.usbnc1
<link=p.USBNC1>
#### p.USBNC2.USB_OTG1_PHY_CTRL_0
<lang=dft>
 (rw)  [1;33m0x402e081c[0m (0x402e0004 + 0x0818)
OTG1 UTMI PHY Control 0 Register
 (rw) (01)  [0;32mUTMI_CLK_VLD[0m  - [31:31] -  Indicating whether OTG1 UTMI PHY clock is valid
      0 - UTMI_CLK_VLD_0 :
         Invalid
      0x1 - UTMI_CLK_VLD_1 :
         Valid
</lang>
#### semc.br3
<link=p.SEMC.BR3>
#### p.semc.br6
<link=p.SEMC.BR6>
#### p.semc.nandcr1
<link=p.SEMC.NANDCR1>
#### semc.norcr3
<link=p.SEMC.NORCR3>
#### p.semc.sramcr0
<link=p.SEMC.SRAMCR0>
#### SEMC.DBICR1
<link=p.SEMC.DBICR1>
#### semc.ipcr1
<link=p.SEMC.IPCR1>
#### p.semc.iptxdat
<link=p.SEMC.IPTXDAT>
#### p.semc.sts0
<link=p.SEMC.STS0>
#### SEMC.STS10
<link=p.SEMC.STS10>
#### p.DCP.CTRL_SET
<lang=dft>
 (rw)  [1;33m0x402fc004[0m (0x402fc000 + 0x0004)
DCP control register 0
 (rw) (08)  [0;32mCHANNEL_INTERRUPT_ENABLE[0m  - [07:00] -  Per-channel interrupt enable bit
      0x1 - CH0 :
         CH0
      0x2 - CH1 :
         CH1
      0x4 - CH2 :
         CH2
      0x8 - CH3 :
         CH3
 (rw) (01)  [0;32mENABLE_CONTEXT_SWITCHING[0m  - [21:21] -  Enable automatic context switching for the channels
 (rw) (01)  [0;32mENABLE_CONTEXT_CACHING[0m  - [22:22] -  The software must set this bit to enable the caching of contexts between the op
 erations
 (rw) (01)  [0;32mGATHER_RESIDUAL_WRITES[0m  - [23:23] -  The software must set this bit to enable the ragged writes to the unaligned buf
 fers to be gathered between multiple write operations
 (ro) (01)  [0;32mPRESENT_SHA[0m  - [28:28] -  Indicates whether the SHA1/SHA2 functions are present.
      0 - Absent :
         Absent
      0x1 - Present :
         Present
 (ro) (01)  [0;32mPRESENT_CRYPTO[0m  - [29:29] -  Indicates whether the crypto (cipher/hash) functions are present.
      0 - Absent :
         Absent
      0x1 - Present :
         Present
 (rw) (01)  [0;32mCLKGATE[0m  - [30:30] -  This bit must be set to zero for a normal operation
 (rw) (01)  [0;32mSFTRST[0m  - [31:31] -  Set this bit to zero to enable a normal DCP operation
</lang>
#### p.DCP.PACKET3
<lang=dft>
 (ro)  [1;33m0x402fc0b0[0m (0x402fc000 + 0x00b0)
DCP work packet 3 status register
 (ro) (32)  [0;32mADDR[0m  - [31:00] -  Source buffer address pointer
</lang>
#### p.dcp.ch0sema
<link=p.DCP.CH0SEMA>
#### p.DCP.CH0STAT
<lang=dft>
 (rw)  [1;33m0x402fc120[0m (0x402fc000 + 0x0120)
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
#### p.dcp.ch0opts
<link=p.DCP.CH0OPTS>
#### p.dcp.ch1cmdptr
<link=p.DCP.CH1CMDPTR>
#### p.dcp.ch1sema
<link=p.DCP.CH1SEMA>
#### DCP.CH1SEMA
<link=p.DCP.CH1SEMA>
#### p.DCP.CH1STAT_CLR
<lang=dft>
 (rw)  [1;33m0x402fc168[0m (0x402fc000 + 0x0168)
DCP channel 1 status register
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
 (rw) (08)  [0;32mERROR_CODE[0m  - [23:16] -  Indicates the additional error codes for some of the error conditions.
      0x1 - NEXT_CHAIN_IS_0 :
         Error is signalled because the next pointer is 0x00000000.
      0x2 - NO_CHAIN :
         Error is signalled because the semaphore is of a non-zero value and nei
         ther of the chain bits is set.
      0x3 - CONTEXT_ERROR :
         Error is signalled because an error was reported when reading/writing t
         he context buffer.
      0x4 - PAYLOAD_ERROR :
         Error is signalled because an error was reported when reading/writing t
         he payload.
      0x5 - INVALID_MODE :
         Error is signalled because the control packet specifies an invalid mode
          select (for example, blit + hash).
 (ro) (08)  [0;32mTAG[0m  - [31:24] -  Indicates the tag from the last completed packet in the command structure.
</lang>
#### dcp.ch1stat_clr
<link=p.DCP.CH1STAT_CLR>
#### p.DCP.CH1STAT_TOG
<lang=dft>
 (rw)  [1;33m0x402fc16c[0m (0x402fc000 + 0x016c)
DCP channel 1 status register
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
 (rw) (08)  [0;32mERROR_CODE[0m  - [23:16] -  Indicates the additional error codes for some of the error conditions.
      0x1 - NEXT_CHAIN_IS_0 :
         Error is signalled because the next pointer is 0x00000000.
      0x2 - NO_CHAIN :
         Error is signalled because the semaphore is of a non-zero value and nei
         ther of the chain bits is set.
      0x3 - CONTEXT_ERROR :
         Error is signalled because an error was reported when reading/writing t
         he context buffer.
      0x4 - PAYLOAD_ERROR :
         Error is signalled because an error was reported when reading/writing t
         he payload.
      0x5 - INVALID_MODE :
         Error is signalled because the control packet specifies an invalid mode
          select (for example, blit + hash).
 (ro) (08)  [0;32mTAG[0m  - [31:24] -  Indicates the tag from the last completed packet in the command structure.
</lang>
#### DCP.CH1OPTS
<link=p.DCP.CH1OPTS>
#### p.dcp.ch1opts_clr
<link=p.DCP.CH1OPTS_CLR>
#### dcp.ch2cmdptr
<link=p.DCP.CH2CMDPTR>
#### p.DCP.CH2SEMA
<lang=dft>
 (rw)  [1;33m0x402fc190[0m (0x402fc000 + 0x0190)
DCP channel 2 semaphore register
 (rw) (08)  [0;32mINCREMENT[0m  - [07:00] -  The value written to this field is added to the semaphore count in an atomic wa
 y, such that the simultaneous software adds and DCP hardware substracts happeni
 ng on the same clock are protected
 (ro) (08)  [0;32mVALUE[0m  - [23:16] -  This read-only field shows the current (instantaneous) value of the semaphore c
 ounter.
</lang>
#### dcp.ch2opts_set
<link=p.DCP.CH2OPTS_SET>
#### dcp.ch2opts_clr
<link=p.DCP.CH2OPTS_CLR>
#### p.dcp.ch3cmdptr
<link=p.DCP.CH3CMDPTR>
#### p.dcp.ch3stat_set
<link=p.DCP.CH3STAT_SET>
#### dcp.ch3stat_clr
<link=p.DCP.CH3STAT_CLR>
#### p.DCP.PAGETABLE
<lang=dft>
 (rw)  [1;33m0x402fc420[0m (0x402fc000 + 0x0420)
DCP page table register
 (rw) (01)  [0;32mENABLE[0m  - [00:00] -  Page table enable control
 (rw) (01)  [0;32mFLUSH[0m  - [01:01] -  Page table flush control. To flush the TLB, write this bit to 1 and then back t
 o 0.
 (rw) (30)  [0;32mBASE[0m  - [31:02] -  Page table base address
</lang>
#### spdif.srcsh
<link=p.SPDIF.SRCSH>
#### sai1.verid
<link=p.SAI1.VERID>
#### p.sai1.tcr2
<link=p.SAI1.TCR2>
#### SAI1.TCR5
<link=p.SAI1.TCR5>
#### sai1.tfr[0]
<link=p.SAI1.TFR[0]>
#### sai1.rdr[0]
<link=p.SAI1.RDR[0]>
#### SAI1.RDR[3]
<link=p.SAI1.RDR[3]>
#### p.SAI1.RFR[2]
<lang=dft>
 (ro)  [1;33m0x403840c8[0m (0x40384000 + 0x00c8)
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
#### p.sai2
<link=p.SAI2>
#### p.sai2.tcr4
<link=p.SAI2.TCR4>
#### p.SAI2.TDR[1]
<lang=dft>
 (rw)  [1;33m0x40388024[0m (0x40388000 + 0x0024)
SAI Transmit Data Register
 (rw) (32)  [0;32mTDR[0m  - [31:00] -  Transmit Data Register
</lang>
#### sai2.tdr[1]
<link=p.SAI2.TDR[1]>
#### SAI2.TFR[3]
<link=p.SAI2.TFR[3]>
#### sai2.rcr1
<link=p.SAI2.RCR1>
#### SAI2.RCR1
<link=p.SAI2.RCR1>
#### SAI2.RFR[0]
<link=p.SAI2.RFR[0]>
#### p.sai2.rfr[2]
<link=p.SAI2.RFR[2]>
#### p.sai3.tcr4
<link=p.SAI3.TCR4>
#### p.SAI3.TDR[0]
<lang=dft>
 (rw)  [1;33m0x4038c020[0m (0x4038c000 + 0x0020)
SAI Transmit Data Register
 (rw) (32)  [0;32mTDR[0m  - [31:00] -  Transmit Data Register
</lang>
#### sai3.tfr[1]
<link=p.SAI3.TFR[1]>
#### p.sai3.tfr[3]
<link=p.SAI3.TFR[3]>
#### SAI3.RCR2
<link=p.SAI3.RCR2>
#### p.SAI3.RCR5
<lang=dft>
 (rw)  [1;33m0x4038c09c[0m (0x4038c000 + 0x009c)
SAI Receive Configuration 5 Register
 (rw) (05)  [0;32mFBT[0m  - [12:08] -  First Bit Shifted
 (rw) (05)  [0;32mW0W[0m  - [20:16] -  Word 0 Width
 (rw) (05)  [0;32mWNW[0m  - [28:24] -  Word N Width
</lang>
#### sai3.rdr[2]
<link=p.SAI3.RDR[2]>
#### p.SAI3.RDR[3]
<lang=dft>
 (ro)  [1;33m0x4038c0ac[0m (0x4038c000 + 0x00ac)
SAI Receive Data Register
 (ro) (32)  [0;32mRDR[0m  - [31:00] -  Receive Data Register
</lang>
#### p.sai3.rfr[0]
<link=p.SAI3.RFR[0]>
#### SAI3.RFR[1]
<link=p.SAI3.RFR[1]>
#### SAI3.RMR
<link=p.SAI3.RMR>
#### lpspi1.cr
<link=p.LPSPI1.CR>
#### p.LPSPI1.CFGR1
<lang=dft>
 (rw)  [1;33m0x40394024[0m (0x40394000 + 0x0024)
Configuration Register 1
 (rw) (01)  [0;32mMASTER[0m  - [00:00] -  Master Mode
      0 - MASTER_0 :
         Slave mode
      0x1 - MASTER_1 :
         Master mode
 (rw) (01)  [0;32mSAMPLE[0m  - [01:01] -  Sample Point
      0 - SAMPLE_0 :
         Input data is sampled on SCK edge
      0x1 - SAMPLE_1 :
         Input data is sampled on delayed SCK edge
 (rw) (01)  [0;32mAUTOPCS[0m  - [02:02] -  Automatic PCS
      0 - AUTOPCS_0 :
         Automatic PCS generation is disabled
      0x1 - AUTOPCS_1 :
         Automatic PCS generation is enabled
 (rw) (01)  [0;32mNOSTALL[0m  - [03:03] -  No Stall
      0 - NOSTALL_0 :
         Transfers will stall when the transmit FIFO is empty or the receive FIF
         O is full
      0x1 - NOSTALL_1 :
         Transfers will not stall, allowing transmit FIFO underruns or receive F
         IFO overruns to occur
 (rw) (04)  [0;32mPCSPOL[0m  - [11:08] -  Peripheral Chip Select Polarity
      0 - PCSPOL_0 :
         The Peripheral Chip Select pin PCSx is active low
      0x1 - PCSPOL_1 :
         The Peripheral Chip Select pin PCSx is active high
 (rw) (03)  [0;32mMATCFG[0m  - [18:16] -  Match Configuration
      0 - MATCFG_0 :
         Match is disabled
      0x2 - MATCFG_2 :
         010b - Match is enabled, if 1st data word equals MATCH0 OR MATCH1, i.e.
         , (1st data word = MATCH0 + MATCH1)
      0x3 - MATCFG_3 :
         011b - Match is enabled, if any data word equals MATCH0 OR MATCH1, i.e.
         , (any data word = MATCH0 + MATCH1)
      0x4 - MATCFG_4 :
         100b - Match is enabled, if 1st data word equals MATCH0 AND 2nd data wo
         rd equals MATCH1, i.e., [(1st data word = MATCH0) * (2nd data word = MA
         TCH1)]
      0x5 - MATCFG_5 :
         101b - Match is enabled, if any data word equals MATCH0 AND the next da
         ta word equals MATCH1, i.e., [(any data word = MATCH0) * (next data wor
         d = MATCH1)]
      0x6 - MATCFG_6 :
         110b - Match is enabled, if (1st data word AND MATCH1) equals (MATCH0 A
         ND MATCH1), i.e., [(1st data word * MATCH1) = (MATCH0 * MATCH1)]
      0x7 - MATCFG_7 :
         111b - Match is enabled, if (any data word AND MATCH1) equals (MATCH0 A
         ND MATCH1), i.e., [(any data word * MATCH1) = (MATCH0 * MATCH1)]
 (rw) (02)  [0;32mPINCFG[0m  - [25:24] -  Pin Configuration
      0 - PINCFG_0 :
         SIN is used for input data and SOUT is used for output data
      0x1 - PINCFG_1 :
         SIN is used for both input and output data
      0x2 - PINCFG_2 :
         SOUT is used for both input and output data
      0x3 - PINCFG_3 :
         SOUT is used for input data and SIN is used for output data
 (rw) (01)  [0;32mOUTCFG[0m  - [26:26] -  Output Config
      0 - OUTCFG_0 :
         Output data retains last value when chip select is negated
      0x1 - OUTCFG_1 :
         Output data is tristated when chip select is negated
 (rw) (01)  [0;32mPCSCFG[0m  - [27:27] -  Peripheral Chip Select Configuration
      0 - PCSCFG_0 :
         PCS[3:2] are enabled
      0x1 - PCSCFG_1 :
         PCS[3:2] are disabled
</lang>
#### LPSPI1.FCR
<link=p.LPSPI1.FCR>
#### lpspi1.tdr
<link=p.LPSPI1.TDR>
#### p.lpspi2.cr
<link=p.LPSPI2.CR>
#### p.lpspi2.dmr0
<link=p.LPSPI2.DMR0>
#### LPSPI2.FSR
<link=p.LPSPI2.FSR>
#### p.lpspi2.tcr
<link=p.LPSPI2.TCR>
#### LPSPI2.TCR
<link=p.LPSPI2.TCR>
#### p.lpspi2.rsr
<link=p.LPSPI2.RSR>
#### p.LPSPI3.CR
<lang=dft>
 (rw)  [1;33m0x4039c010[0m (0x4039c000 + 0x0010)
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
#### p.lpspi3.dmr0
<link=p.LPSPI3.DMR0>
#### lpspi3.dmr0
<link=p.LPSPI3.DMR0>
#### p.lpspi4.cr
<link=p.LPSPI4.CR>
#### lpspi4.der
<link=p.LPSPI4.DER>
#### p.LPSPI4.CCR
<lang=dft>
 (rw)  [1;33m0x403a0040[0m (0x403a0000 + 0x0040)
Clock Configuration Register
 (rw) (08)  [0;32mSCKDIV[0m  - [07:00] -  SCK Divider
 (rw) (08)  [0;32mDBT[0m  - [15:08] -  Delay Between Transfers
 (rw) (08)  [0;32mPCSSCK[0m  - [23:16] -  PCS-to-SCK Delay
 (rw) (08)  [0;32mSCKPCS[0m  - [31:24] -  SCK-to-PCS Delay
</lang>
#### lpspi4.tcr
<link=p.LPSPI4.TCR>
#### p.ADC_ETC.TRIG1_CHAIN_1_0
<lang=dft>
 (rw)  [1;33m0x403b0040[0m (0x403b0000 + 0x0040)
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
#### p.ADC_ETC.TRIG1_CHAIN_7_6
<lang=dft>
 (rw)  [1;33m0x403b004c[0m (0x403b0000 + 0x004c)
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
#### adc_etc.trig2_result_5_4
<link=p.ADC_ETC.TRIG2_RESULT_5_4>
#### p.ADC_ETC.TRIG3_RESULT_3_2
<lang=dft>
 (ro)  [1;33m0x403b00a4[0m (0x403b0000 + 0x00a4)
ETC_TRIG Result Data 3/2 Register
 (ro) (12)  [0;32mDATA2[0m  - [11:00] -  Result DATA2
 (ro) (12)  [0;32mDATA3[0m  - [27:16] -  Result DATA3
</lang>
#### adc_etc.trig4_chain_5_4
<link=p.ADC_ETC.TRIG4_CHAIN_5_4>
#### adc_etc.trig4_chain_7_6
<link=p.ADC_ETC.TRIG4_CHAIN_7_6>
#### ADC_ETC.TRIG5_CHAIN_3_2
<link=p.ADC_ETC.TRIG5_CHAIN_3_2>
#### ADC_ETC.TRIG5_CHAIN_5_4
<link=p.ADC_ETC.TRIG5_CHAIN_5_4>
#### p.adc_etc.trig6_result_5_4
<link=p.ADC_ETC.TRIG6_RESULT_5_4>
#### p.adc_etc.trig6_result_7_6
<link=p.ADC_ETC.TRIG6_RESULT_7_6>
#### p.ADC_ETC.TRIG7_CHAIN_3_2
<lang=dft>
 (rw)  [1;33m0x403b0134[0m (0x403b0000 + 0x0134)
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
#### aoi1.bfcrt013
<link=p.AOI1.BFCRT013>
#### AOI1.BFCRT232
<link=p.AOI1.BFCRT232>
#### aoi2.bfcrt013
<link=p.AOI2.BFCRT013>
#### AOI2.BFCRT230
<link=p.AOI2.BFCRT230>
#### p.AOI2.BFCRT232
<lang=dft>
 (rw)  [1;33m0x403b800a[0m (0x403b8000 + 0x000a)
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
#### p.xbara1.sel2
<link=p.XBARA1.SEL2>
#### p.XBARA1.SEL5
<lang=dft>
 (rw)  [1;33m0x403bc00a[0m (0x403bc000 + 0x000a)
Crossbar A Select Register 5
 (rw) (07)  [0;32mSEL10[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT10 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL11[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT11 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### xbara1.sel9
<link=p.XBARA1.SEL9>
#### p.xbara1.sel18
<link=p.XBARA1.SEL18>
#### XBARA1.SEL22
<link=p.XBARA1.SEL22>
#### xbara1.sel23
<link=p.XBARA1.SEL23>
#### p.xbara1.sel29
<link=p.XBARA1.SEL29>
#### p.XBARA1.SEL39
<lang=dft>
 (rw)  [1;33m0x403bc04e[0m (0x403bc000 + 0x004e)
Crossbar A Select Register 39
 (rw) (07)  [0;32mSEL78[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT78 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL79[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT79 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### XBARA1.SEL40
<link=p.XBARA1.SEL40>
#### xbara1.sel41
<link=p.XBARA1.SEL41>
#### p.XBARA1.SEL48
<lang=dft>
 (rw)  [1;33m0x403bc060[0m (0x403bc000 + 0x0060)
Crossbar A Select Register 48
 (rw) (07)  [0;32mSEL96[0m  - [06:00] -  Input (XBARA_INn) to be muxed to XBARA_OUT96 (refer to Functional Description s
 ection for input/output assignment)
 (rw) (07)  [0;32mSEL97[0m  - [14:08] -  Input (XBARA_INn) to be muxed to XBARA_OUT97 (refer to Functional Description s
 ection for input/output assignment)
</lang>
#### p.xbara1.sel54
<link=p.XBARA1.SEL54>
#### xbara1.sel56
<link=p.XBARA1.SEL56>
#### XBARA1.SEL57
<link=p.XBARA1.SEL57>
#### p.xbara1.sel65
<link=p.XBARA1.SEL65>
#### p.xbarb2
<link=p.XBARB2>
#### p.XBARB2.SEL2
<lang=dft>
 (rw)  [1;33m0x403c0004[0m (0x403c0000 + 0x0004)
Crossbar B Select Register 2
 (rw) (06)  [0;32mSEL4[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT4 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (06)  [0;32mSEL5[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT5 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### XBARB2.SEL3
<link=p.XBARB2.SEL3>
#### p.xbarb2.sel4
<link=p.XBARB2.SEL4>
#### XBARB3.SEL3
<link=p.XBARB3.SEL3>
#### p.XBARB3.SEL4
<lang=dft>
 (rw)  [1;33m0x403c4008[0m (0x403c4000 + 0x0008)
Crossbar B Select Register 4
 (rw) (06)  [0;32mSEL8[0m  - [05:00] -  Input (XBARB_INn) to be muxed to XBARB_OUT8 (refer to Functional Description se
 ction for input/output assignment)
 (rw) (06)  [0;32mSEL9[0m  - [13:08] -  Input (XBARB_INn) to be muxed to XBARB_OUT9 (refer to Functional Description se
 ction for input/output assignment)
</lang>
#### ENC1.POSD
<link=p.ENC1.POSD>
#### p.ENC1.REVH
<lang=dft>
 (ro)  [1;33m0x403c800c[0m (0x403c8000 + 0x000c)
Revolution Hold Register
 (ro) (16)  [0;32mREVH[0m  - [15:00] -  This read-only register contains a snapshot of the value of the REV register.
</lang>
#### ENC1.UPOSH
<link=p.ENC1.UPOSH>
#### enc1.imr
<link=p.ENC1.IMR>
#### ENC1.LMOD
<link=p.ENC1.LMOD>
#### ENC2.WTR
<link=p.ENC2.WTR>
#### p.enc2.posd
<link=p.ENC2.POSD>
#### enc2.rev
<link=p.ENC2.REV>
#### ENC2.REV
<link=p.ENC2.REV>
#### p.enc2.revh
<link=p.ENC2.REVH>
#### enc2.revh
<link=p.ENC2.REVH>
#### p.enc2.uposh
<link=p.ENC2.UPOSH>
#### enc2.uposh
<link=p.ENC2.UPOSH>
#### p.enc3.revh
<link=p.ENC3.REVH>
#### enc3.ucomp
<link=p.ENC3.UCOMP>
#### enc4.posd
<link=p.ENC4.POSD>
#### enc4.uinit
<link=p.ENC4.UINIT>
#### ENC4.UINIT
<link=p.ENC4.UINIT>
#### p.enc4.linit
<link=p.ENC4.LINIT>
#### enc4.umod
<link=p.ENC4.UMOD>
#### PWM1.SM0INIT
<link=p.PWM1.SM0INIT>
#### PWM1.SM0VAL0
<link=p.PWM1.SM0VAL0>
#### pwm1.sm0fracval1
<link=p.PWM1.SM0FRACVAL1>
#### p.PWM1.SM0FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403dc014[0m (0x403dc000 + 0x0014)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### p.pwm1.sm0val5
<link=p.PWM1.SM0VAL5>
#### p.pwm1.sm0dmaen
<link=p.PWM1.SM0DMAEN>
#### pwm1.sm0tctrl
<link=p.PWM1.SM0TCTRL>
#### p.PWM1.SM0DTCNT0
<lang=dft>
 (rw)  [1;33m0x403dc030[0m (0x403dc000 + 0x0030)
Deadtime Count Register 0
 (rw) (16)  [0;32mDTCNT0[0m  - [15:00] -  DTCNT0
</lang>
#### p.pwm1.sm0captctrlb
<link=p.PWM1.SM0CAPTCTRLB>
#### PWM1.SM0CAPTCOMPX
<link=p.PWM1.SM0CAPTCOMPX>
#### p.pwm1.sm0cval1
<link=p.PWM1.SM0CVAL1>
#### pwm1.sm0cval1
<link=p.PWM1.SM0CVAL1>
#### PWM1.SM1VAL2
<link=p.PWM1.SM1VAL2>
#### p.pwm1.sm1fracval4
<link=p.PWM1.SM1FRACVAL4>
#### pwm1.sm1fracval4
<link=p.PWM1.SM1FRACVAL4>
#### p.pwm1.sm1val4
<link=p.PWM1.SM1VAL4>
#### PWM1.SM1FRACVAL5
<link=p.PWM1.SM1FRACVAL5>
#### p.pwm1.sm1dismap1
<link=p.PWM1.SM1DISMAP1>
#### pwm1.sm1captctrla
<link=p.PWM1.SM1CAPTCTRLA>
#### pwm1.sm1cval1
<link=p.PWM1.SM1CVAL1>
#### p.pwm1.sm1cval4cyc
<link=p.PWM1.SM1CVAL4CYC>
#### p.pwm1.sm2init
<link=p.PWM1.SM2INIT>
#### p.PWM1.SM2FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403dc0d0[0m (0x403dc000 + 0x00d0)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### pwm1.sm2val2
<link=p.PWM1.SM2VAL2>
#### pwm1.sm2fracval3
<link=p.PWM1.SM2FRACVAL3>
#### p.pwm1.sm2octrl
<link=p.PWM1.SM2OCTRL>
#### p.PWM1.SM2DTCNT0
<lang=dft>
 (rw)  [1;33m0x403dc0f0[0m (0x403dc000 + 0x00f0)
Deadtime Count Register 0
 (rw) (16)  [0;32mDTCNT0[0m  - [15:00] -  DTCNT0
</lang>
#### PWM1.SM2CVAL1
<link=p.PWM1.SM2CVAL1>
#### pwm1.sm2cval1cyc
<link=p.PWM1.SM2CVAL1CYC>
#### p.PWM1.SM2CVAL4
<lang=dft>
 (ro)  [1;33m0x403dc110[0m (0x403dc000 + 0x0110)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### pwm1.sm3cnt
<link=p.PWM1.SM3CNT>
#### pwm1.sm3val3
<link=p.PWM1.SM3VAL3>
#### pwm1.sm3frctrl
<link=p.PWM1.SM3FRCTRL>
#### p.PWM1.SM3INTEN
<lang=dft>
 (rw)  [1;33m0x403dc146[0m (0x403dc000 + 0x0146)
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
#### p.PWM1.SM3DISMAP0
<lang=dft>
 (rw)  [1;33m0x403dc14c[0m (0x403dc000 + 0x014c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### PWM1.SM3DISMAP0
<link=p.PWM1.SM3DISMAP0>
#### p.PWM1.SM3CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403dc154[0m (0x403dc000 + 0x0154)
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
#### p.pwm1.sm3captcompx
<link=p.PWM1.SM3CAPTCOMPX>
#### p.pwm1.sm3cval5cyc
<link=p.PWM1.SM3CVAL5CYC>
#### p.PWM1.FCTRL20
<lang=dft>
 (rw)  [1;33m0x403dc194[0m (0x403dc000 + 0x0194)
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
#### PWM2.SM0CNT
<link=p.PWM2.SM0CNT>
#### p.pwm2.sm0fracval2
<link=p.PWM2.SM0FRACVAL2>
#### p.pwm2.sm0val2
<link=p.PWM2.SM0VAL2>
#### PWM2.SM0FRACVAL5
<link=p.PWM2.SM0FRACVAL5>
#### p.PWM2.SM0INTEN
<lang=dft>
 (rw)  [1;33m0x403e0026[0m (0x403e0000 + 0x0026)
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
#### p.PWM2.SM0DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e002c[0m (0x403e0000 + 0x002c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### p.pwm2.sm0dismap1
<link=p.PWM2.SM0DISMAP1>
#### pwm2.sm0dismap1
<link=p.PWM2.SM0DISMAP1>
#### p.PWM2.SM0CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e0034[0m (0x403e0000 + 0x0034)
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
#### pwm2.sm0captcompa
<link=p.PWM2.SM0CAPTCOMPA>
#### PWM2.SM0CAPTCTRLX
<link=p.PWM2.SM0CAPTCTRLX>
#### PWM2.SM0CVAL1
<link=p.PWM2.SM0CVAL1>
#### p.PWM2.SM1FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e0070[0m (0x403e0000 + 0x0070)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### p.pwm2.sm1val3
<link=p.PWM2.SM1VAL3>
#### pwm2.sm1sts
<link=p.PWM2.SM1STS>
#### p.PWM2.SM1DTCNT0
<lang=dft>
 (rw)  [1;33m0x403e0090[0m (0x403e0000 + 0x0090)
Deadtime Count Register 0
 (rw) (16)  [0;32mDTCNT0[0m  - [15:00] -  DTCNT0
</lang>
#### PWM2.SM1DTCNT0
<link=p.PWM2.SM1DTCNT0>
#### pwm2.sm1captctrlb
<link=p.PWM2.SM1CAPTCTRLB>
#### p.pwm2.sm1cval1cyc
<link=p.PWM2.SM1CVAL1CYC>
#### p.pwm2.sm1cval2
<link=p.PWM2.SM1CVAL2>
#### PWM2.SM1CVAL2
<link=p.PWM2.SM1CVAL2>
#### p.pwm2.sm1cval2cyc
<link=p.PWM2.SM1CVAL2CYC>
#### PWM2.SM1CVAL2CYC
<link=p.PWM2.SM1CVAL2CYC>
#### p.PWM2.SM1CVAL4
<lang=dft>
 (ro)  [1;33m0x403e00b0[0m (0x403e0000 + 0x00b0)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### pwm2.sm1cval4
<link=p.PWM2.SM1CVAL4>
#### pwm2.sm1cval5cyc
<link=p.PWM2.SM1CVAL5CYC>
#### PWM2.SM2VAL1
<link=p.PWM2.SM2VAL1>
#### PWM2.SM2FRACVAL4
<link=p.PWM2.SM2FRACVAL4>
#### pwm2.sm2val5
<link=p.PWM2.SM2VAL5>
#### pwm2.sm2tctrl
<link=p.PWM2.SM2TCTRL>
#### pwm2.sm2cval0cyc
<link=p.PWM2.SM2CVAL0CYC>
#### pwm2.sm2cval3cyc
<link=p.PWM2.SM2CVAL3CYC>
#### PWM2.SM2CVAL4CYC
<link=p.PWM2.SM2CVAL4CYC>
#### p.pwm2.sm2cval5
<link=p.PWM2.SM2CVAL5>
#### PWM2.SM3CTRL2
<link=p.PWM2.SM3CTRL2>
#### PWM2.SM3VAL1
<link=p.PWM2.SM3VAL1>
#### p.PWM2.SM3FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e0134[0m (0x403e0000 + 0x0134)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### pwm2.sm3val4
<link=p.PWM2.SM3VAL4>
#### p.pwm2.sm3fracval5
<link=p.PWM2.SM3FRACVAL5>
#### pwm2.sm3fracval5
<link=p.PWM2.SM3FRACVAL5>
#### p.PWM2.SM3DTCNT0
<lang=dft>
 (rw)  [1;33m0x403e0150[0m (0x403e0000 + 0x0150)
Deadtime Count Register 0
 (rw) (16)  [0;32mDTCNT0[0m  - [15:00] -  DTCNT0
</lang>
#### pwm2.sm3cval3cyc
<link=p.PWM2.SM3CVAL3CYC>
#### PWM2.SM3CVAL4
<link=p.PWM2.SM3CVAL4>
#### p.pwm2.sm3cval5
<link=p.PWM2.SM3CVAL5>
#### p.PWM2.OUTEN
<lang=dft>
 (rw)  [1;33m0x403e0180[0m (0x403e0000 + 0x0180)
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
#### p.PWM2.FCTRL20
<lang=dft>
 (rw)  [1;33m0x403e0194[0m (0x403e0000 + 0x0194)
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
#### p.pwm3.sm0init
<link=p.PWM3.SM0INIT>
#### p.PWM3.SM0FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e4010[0m (0x403e4000 + 0x0010)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### pwm3.sm0val3
<link=p.PWM3.SM0VAL3>
#### p.pwm3.sm0octrl
<link=p.PWM3.SM0OCTRL>
#### pwm3.sm0octrl
<link=p.PWM3.SM0OCTRL>
#### pwm3.sm0dismap0
<link=p.PWM3.SM0DISMAP0>
#### p.PWM3.SM0DTCNT0
<lang=dft>
 (rw)  [1;33m0x403e4030[0m (0x403e4000 + 0x0030)
Deadtime Count Register 0
 (rw) (16)  [0;32mDTCNT0[0m  - [15:00] -  DTCNT0
</lang>
#### PWM3.SM0DTCNT0
<link=p.PWM3.SM0DTCNT0>
#### PWM3.SM0CVAL2
<link=p.PWM3.SM0CVAL2>
#### PWM3.SM0CVAL2CYC
<link=p.PWM3.SM0CVAL2CYC>
#### p.PWM3.SM0CVAL4
<lang=dft>
 (ro)  [1;33m0x403e4050[0m (0x403e4000 + 0x0050)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### PWM3.SM1CNT
<link=p.PWM3.SM1CNT>
#### pwm3.sm1val2
<link=p.PWM3.SM1VAL2>
#### pwm3.sm1fracval5
<link=p.PWM3.SM1FRACVAL5>
#### PWM3.SM1FRACVAL5
<link=p.PWM3.SM1FRACVAL5>
#### p.PWM3.SM1INTEN
<lang=dft>
 (rw)  [1;33m0x403e4086[0m (0x403e4000 + 0x0086)
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
#### p.PWM3.SM1DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e408c[0m (0x403e4000 + 0x008c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### p.PWM3.SM1CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e4094[0m (0x403e4000 + 0x0094)
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
#### PWM3.SM1CAPTCTRLX
<link=p.PWM3.SM1CAPTCTRLX>
#### p.pwm3.sm1captcompx
<link=p.PWM3.SM1CAPTCOMPX>
#### PWM3.SM1CVAL1
<link=p.PWM3.SM1CVAL1>
#### pwm3.sm1cval3cyc
<link=p.PWM3.SM1CVAL3CYC>
#### p.pwm3.sm1cval5cyc
<link=p.PWM3.SM1CVAL5CYC>
#### PWM3.SM2CTRL2
<link=p.PWM3.SM2CTRL2>
#### PWM3.SM2VAL1
<link=p.PWM3.SM2VAL1>
#### pwm3.sm2fracval2
<link=p.PWM3.SM2FRACVAL2>
#### p.PWM3.SM2FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e40d4[0m (0x403e4000 + 0x00d4)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### p.pwm3.sm2val5
<link=p.PWM3.SM2VAL5>
#### p.pwm3.sm2dmaen
<link=p.PWM3.SM2DMAEN>
#### p.PWM3.SM2DTCNT0
<lang=dft>
 (rw)  [1;33m0x403e40f0[0m (0x403e4000 + 0x00f0)
Deadtime Count Register 0
 (rw) (16)  [0;32mDTCNT0[0m  - [15:00] -  DTCNT0
</lang>
#### pwm3.sm2captctrla
<link=p.PWM3.SM2CAPTCTRLA>
#### p.pwm3.sm2captctrlb
<link=p.PWM3.SM2CAPTCTRLB>
#### pwm3.sm2cval0cyc
<link=p.PWM3.SM2CVAL0CYC>
#### p.pwm3.sm2cval1
<link=p.PWM3.SM2CVAL1>
#### PWM3.SM2CVAL4
<link=p.PWM3.SM2CVAL4>
#### PWM3.SM3VAL1
<link=p.PWM3.SM3VAL1>
#### p.pwm3.sm3fracval4
<link=p.PWM3.SM3FRACVAL4>
#### PWM3.SM3FRACVAL4
<link=p.PWM3.SM3FRACVAL4>
#### p.pwm3.sm3val4
<link=p.PWM3.SM3VAL4>
#### p.pwm3.sm3dismap1
<link=p.PWM3.SM3DISMAP1>
#### pwm3.sm3captctrlb
<link=p.PWM3.SM3CAPTCTRLB>
#### pwm3.sm3cval0
<link=p.PWM3.SM3CVAL0>
#### p.pwm3.sm3cval4cyc
<link=p.PWM3.SM3CVAL4CYC>
#### PWM3.SM3CVAL4CYC
<link=p.PWM3.SM3CVAL4CYC>
#### pwm3.outen
<link=p.PWM3.OUTEN>
#### p.PWM3.DTSRCSEL
<lang=dft>
 (rw)  [1;33m0x403e4186[0m (0x403e4000 + 0x0186)
PWM Source Select Register
 (rw) (02)  [0;32mSM0SEL45[0m  - [01:00] -  Submodule 0 PWM45 Control Select
      0 - SM0SEL45_0 :
         Generated SM0PWM45 signal is used by the deadtime logic.
      0x1 - SM0SEL45_1 :
         Inverted generated SM0PWM45 signal is used by the deadtime logic.
      0x2 - SM0SEL45_2 :
         SWCOUT[SM0OUT45] is used by the deadtime logic.
      0x3 - SM0SEL45_3 :
         PWM0_EXTB signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM0SEL23[0m  - [03:02] -  Submodule 0 PWM23 Control Select
      0 - SM0SEL23_0 :
         Generated SM0PWM23 signal is used by the deadtime logic.
      0x1 - SM0SEL23_1 :
         Inverted generated SM0PWM23 signal is used by the deadtime logic.
      0x2 - SM0SEL23_2 :
         SWCOUT[SM0OUT23] is used by the deadtime logic.
      0x3 - SM0SEL23_3 :
         PWM0_EXTA signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM1SEL45[0m  - [05:04] -  Submodule 1 PWM45 Control Select
      0 - SM1SEL45_0 :
         Generated SM1PWM45 signal is used by the deadtime logic.
      0x1 - SM1SEL45_1 :
         Inverted generated SM1PWM45 signal is used by the deadtime logic.
      0x2 - SM1SEL45_2 :
         SWCOUT[SM1OUT45] is used by the deadtime logic.
      0x3 - SM1SEL45_3 :
         PWM1_EXTB signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM1SEL23[0m  - [07:06] -  Submodule 1 PWM23 Control Select
      0 - SM1SEL23_0 :
         Generated SM1PWM23 signal is used by the deadtime logic.
      0x1 - SM1SEL23_1 :
         Inverted generated SM1PWM23 signal is used by the deadtime logic.
      0x2 - SM1SEL23_2 :
         SWCOUT[SM1OUT23] is used by the deadtime logic.
      0x3 - SM1SEL23_3 :
         PWM1_EXTA signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM2SEL45[0m  - [09:08] -  Submodule 2 PWM45 Control Select
      0 - SM2SEL45_0 :
         Generated SM2PWM45 signal is used by the deadtime logic.
      0x1 - SM2SEL45_1 :
         Inverted generated SM2PWM45 signal is used by the deadtime logic.
      0x2 - SM2SEL45_2 :
         SWCOUT[SM2OUT45] is used by the deadtime logic.
      0x3 - SM2SEL45_3 :
         PWM2_EXTB signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM2SEL23[0m  - [11:10] -  Submodule 2 PWM23 Control Select
      0 - SM2SEL23_0 :
         Generated SM2PWM23 signal is used by the deadtime logic.
      0x1 - SM2SEL23_1 :
         Inverted generated SM2PWM23 signal is used by the deadtime logic.
      0x2 - SM2SEL23_2 :
         SWCOUT[SM2OUT23] is used by the deadtime logic.
      0x3 - SM2SEL23_3 :
         PWM2_EXTA signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM3SEL45[0m  - [13:12] -  Submodule 3 PWM45 Control Select
      0 - SM3SEL45_0 :
         Generated SM3PWM45 signal is used by the deadtime logic.
      0x1 - SM3SEL45_1 :
         Inverted generated SM3PWM45 signal is used by the deadtime logic.
      0x2 - SM3SEL45_2 :
         SWCOUT[SM3OUT45] is used by the deadtime logic.
      0x3 - SM3SEL45_3 :
         PWM3_EXTB signal is used by the deadtime logic.
 (rw) (02)  [0;32mSM3SEL23[0m  - [15:14] -  Submodule 3 PWM23 Control Select
      0 - SM3SEL23_0 :
         Generated SM3PWM23 signal is used by the deadtime logic.
      0x1 - SM3SEL23_1 :
         Inverted generated SM3PWM23 signal is used by the deadtime logic.
      0x2 - SM3SEL23_2 :
         SWCOUT[SM3OUT23] is used by the deadtime logic.
      0x3 - SM3SEL23_3 :
         PWM3_EXTA signal is used by the deadtime logic.
</lang>
#### pwm3.fctrl20
<link=p.PWM3.FCTRL20>
#### pwm4.sm0val1
<link=p.PWM4.SM0VAL1>
#### p.PWM4.SM0FRACVAL2
<lang=dft>
 (rw)  [1;33m0x403e8010[0m (0x403e8000 + 0x0010)
Fractional Value Register 2
 (rw) (05)  [0;32mFRACVAL2[0m  - [15:11] -  Fractional Value 2
</lang>
#### PWM4.SM0FRACVAL3
<link=p.PWM4.SM0FRACVAL3>
#### p.pwm4.sm0fracval4
<link=p.PWM4.SM0FRACVAL4>
#### PWM4.SM0VAL5
<link=p.PWM4.SM0VAL5>
#### p.pwm4.sm0sts
<link=p.PWM4.SM0STS>
#### p.PWM4.SM0CAPTCTRLA
<lang=dft>
 (rw)  [1;33m0x403e8034[0m (0x403e8000 + 0x0034)
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
#### pwm4.sm0captctrlb
<link=p.PWM4.SM0CAPTCTRLB>
#### p.PWM4.SM0CVAL0CYC
<lang=dft>
 (ro)  [1;33m0x403e8042[0m (0x403e8000 + 0x0042)
Capture Value 0 Cycle Register
 (ro) (04)  [0;32mCVAL0CYC[0m  - [03:00] -  CVAL0CYC
</lang>
#### pwm4.sm0cval1
<link=p.PWM4.SM0CVAL1>
#### p.PWM4.SM0CVAL4
<lang=dft>
 (ro)  [1;33m0x403e8050[0m (0x403e8000 + 0x0050)
Capture Value 4 Register
 (ro) (16)  [0;32mCAPTVAL4[0m  - [15:00] -  CAPTVAL4
</lang>
#### p.PWM4.SM1CNT
<lang=dft>
 (ro)  [1;33m0x403e8060[0m (0x403e8000 + 0x0060)
Counter Register
 (ro) (16)  [0;32mCNT[0m  - [15:00] -  Counter Register Bits
</lang>
#### pwm4.sm1val0
<link=p.PWM4.SM1VAL0>
#### p.pwm4.sm1fracval1
<link=p.PWM4.SM1FRACVAL1>
#### pwm4.sm1fracval2
<link=p.PWM4.SM1FRACVAL2>
#### PWM4.SM1VAL5
<link=p.PWM4.SM1VAL5>
#### p.pwm4.sm1frctrl
<link=p.PWM4.SM1FRCTRL>
#### p.PWM4.SM1TCTRL
<lang=dft>
 (rw)  [1;33m0x403e808a[0m (0x403e8000 + 0x008a)
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
#### p.pwm4.sm1captctrlx
<link=p.PWM4.SM1CAPTCTRLX>
#### p.PWM4.SM1CVAL0
<lang=dft>
 (ro)  [1;33m0x403e80a0[0m (0x403e8000 + 0x00a0)
Capture Value 0 Register
 (ro) (16)  [0;32mCAPTVAL0[0m  - [15:00] -  CAPTVAL0
</lang>
#### p.pwm4.sm1cval2cyc
<link=p.PWM4.SM1CVAL2CYC>
#### p.pwm4.sm1cval3cyc
<link=p.PWM4.SM1CVAL3CYC>
#### p.PWM4.SM2VAL2
<lang=dft>
 (rw)  [1;33m0x403e80d2[0m (0x403e8000 + 0x00d2)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### p.PWM4.SM2FRACVAL3
<lang=dft>
 (rw)  [1;33m0x403e80d4[0m (0x403e8000 + 0x00d4)
Fractional Value Register 3
 (rw) (05)  [0;32mFRACVAL3[0m  - [15:11] -  Fractional Value 3
</lang>
#### p.pwm4.sm2val5
<link=p.PWM4.SM2VAL5>
#### p.PWM4.SM2TCTRL
<lang=dft>
 (rw)  [1;33m0x403e80ea[0m (0x403e8000 + 0x00ea)
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
#### p.PWM4.SM2CVAL1CYC
<lang=dft>
 (ro)  [1;33m0x403e8106[0m (0x403e8000 + 0x0106)
Capture Value 1 Cycle Register
 (ro) (04)  [0;32mCVAL1CYC[0m  - [03:00] -  CVAL1CYC
</lang>
#### PWM4.SM3CNT
<link=p.PWM4.SM3CNT>
#### p.PWM4.SM3VAL2
<lang=dft>
 (rw)  [1;33m0x403e8132[0m (0x403e8000 + 0x0132)
Value Register 2
 (rw) (16)  [0;32mVAL2[0m  - [15:00] -  Value Register 2
</lang>
#### p.pwm4.sm3fracval3
<link=p.PWM4.SM3FRACVAL3>
#### p.pwm4.sm3val4
<link=p.PWM4.SM3VAL4>
#### p.PWM4.SM3DISMAP0
<lang=dft>
 (rw)  [1;33m0x403e814c[0m (0x403e8000 + 0x014c)
Fault Disable Mapping Register 0
 (rw) (04)  [0;32mDIS0A[0m  - [03:00] -  PWM_A Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0B[0m  - [07:04] -  PWM_B Fault Disable Mask 0
 (rw) (04)  [0;32mDIS0X[0m  - [11:08] -  PWM_X Fault Disable Mask 0
</lang>
#### PWM4.SM3CAPTCTRLB
<link=p.PWM4.SM3CAPTCTRLB>
#### PWM4.SM3CAPTCOMPX
<link=p.PWM4.SM3CAPTCOMPX>
#### PWM4.SM3CVAL1CYC
<link=p.PWM4.SM3CVAL1CYC>
#### pwm4.ftst0
<link=p.PWM4.FTST0>
#### p.BEE.ADDR_OFFSET1
<lang=dft>
 (rw)  [1;33m0x403ec008[0m (0x403ec000 + 0x0008)
no description available
 (rw) (16)  [0;32mADDR_OFFSET1[0m  - [15:00] -  Signed offset for BEE region 1
 (rw) (16)  [0;32mADDR_OFFSET1_LOCK[0m  - [31:16] -  Lock bits for addr_offset1
</lang>
#### p.BEE.CTR_NONCE1_W1
<lang=dft>
 (wo)  [1;33m0x403ec034[0m (0x403ec000 + 0x0034)
no description available
 (wo) (32)  [0;32mNONCE11[0m  - [31:00] -  Nonce1 from software for CTR, for region1. Nonce1={Nonce13,Nonce12,Nonce11,Nonc
 e10}
</lang>
#### BEE.REGION1_BOT
<link=p.BEE.REGION1_BOT>
#### p.LPI2C1.MCR
<lang=dft>
 (rw)  [1;33m0x403f0010[0m (0x403f0000 + 0x0010)
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
#### LPI2C1.MSR
<link=p.LPI2C1.MSR>
#### lpi2c1.mcfgr0
<link=p.LPI2C1.MCFGR0>
#### LPI2C1.MCFGR2
<link=p.LPI2C1.MCFGR2>
#### LPI2C1.SDER
<link=p.LPI2C1.SDER>
#### LPI2C1.SAMR
<link=p.LPI2C1.SAMR>
#### p.lpi2c2.verid
<link=p.LPI2C2.VERID>
#### LPI2C2.MIER
<link=p.LPI2C2.MIER>
#### p.LPI2C2.SCR
<lang=dft>
 (rw)  [1;33m0x403f4110[0m (0x403f4000 + 0x0110)
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
#### lpi2c2.scr
<link=p.LPI2C2.SCR>
#### p.lpi2c2.sasr
<link=p.LPI2C2.SASR>
#### lpi2c2.star
<link=p.LPI2C2.STAR>
#### LPI2C2.STDR
<link=p.LPI2C2.STDR>
#### p.lpi2c3.mcr
<link=p.LPI2C3.MCR>
#### lpi2c3.mier
<link=p.LPI2C3.MIER>
#### LPI2C3.SCFGR1
<link=p.LPI2C3.SCFGR1>
#### p.lpi2c3.sasr
<link=p.LPI2C3.SASR>
#### p.LPI2C3.STDR
<lang=dft>
 (rw)  [1;33m0x403f8160[0m (0x403f8000 + 0x0160)
Slave Transmit Data Register
 (wo) (08)  [0;32mDATA[0m  - [07:00] -  Transmit Data
</lang>
#### lpi2c4.param
<link=p.LPI2C4.PARAM>
#### LPI2C4.MCCR0
<link=p.LPI2C4.MCCR0>
#### lpi2c4.mccr1
<link=p.LPI2C4.MCCR1>
#### lpi2c4.mrdr
<link=p.LPI2C4.MRDR>
#### lpi2c4.sier
<link=p.LPI2C4.SIER>
#### p.lpi2c4.sder
<link=p.LPI2C4.SDER>
#### lpi2c4.scfgr2
<link=p.LPI2C4.SCFGR2>
#### lpi2c4.sasr
<link=p.LPI2C4.SASR>
#### LPI2C4.SASR
<link=p.LPI2C4.SASR>
#### p.SystemControl
<lang=dft>
base: 0xe000e000
ACTLR           AIRCR           BFAR            CCR             
CCSIDR          CFSR            CLIDR           CM7_ABFSR       
CM7_AHBPCR      CM7_AHBSCR      CM7_CACR        CM7_DTCMCR      
CM7_ITCMCR      CPACR           CPUID           CSSELR          
CTR             DCCIMVAC        DCCISW          DCCMVAC         
DCCMVAU         DCCSW           DCIMVAC         DCISW           
DFSR            HFSR            ICIALLU         ICIMVAU         
ICSR            ID_AFR0         ID_DFR0         ID_ISAR0        
ID_ISAR1        ID_ISAR2        ID_ISAR3        ID_ISAR4        
ID_MMFR0        ID_MMFR1        ID_MMFR2        ID_MMFR3        
ID_PFR0         ID_PFR1         MMFAR           SCR             
SHCSR           SHPR1           SHPR2           SHPR3           
STIR            VTOR            
输入 p.SystemControl.{reg_name} 以查看寄存器的详细信息
type p.SystemControl.{reg_name} to check details of registers
</lang>
#### p.SYSTEMCONTROL.ACTLR
<lang=dft>
 (rw)  [1;33m0xe000e008[0m (0xe000e000 + 0x0008)
Auxiliary Control Register,
 (rw) (01)  [0;32mDISFOLD[0m  - [02:02] -  Disables folding of IT instructions.
      0 - DISFOLD_0 :
         Normal operation.
 (rw) (01)  [0;32mFPEXCODIS[0m  - [10:10] -  Disables FPU exception outputs.
      0 - FPEXCODIS_0 :
         Normal operation.
      0x1 - FPEXCODIS_1 :
         FPU exception outputs are disabled.
 (rw) (01)  [0;32mDISRAMODE[0m  - [11:11] -  Disables dynamic read allocate mode for Write-Back Write-Allocate memory region
 s.
      0 - DISRAMODE_0 :
         Normal operation.
      0x1 - DISRAMODE_1 :
         Dynamic disabled.
 (rw) (01)  [0;32mDISITMATBFLUSH[0m  - [12:12] -  Disables ITM and DWT ATB flush.
      0x1 - DISITMATBFLUSH_1 :
         ITM and DWT ATB flush disabled, this bit is always 1.
 (rw) (01)  [0;32mDISBTACREAD[0m  - [13:13] -  Disables BTAC read.
      0 - DISBTACREAD_0 :
         Normal operation.
      0x1 - DISBTACREAD_1 :
         BTAC is not used and only static branch prediction can occur.
 (rw) (01)  [0;32mDISBTACALLOC[0m  - [14:14] -  Disables BTAC allocate.
      0 - DISBTACALLOC_0 :
         Normal operation.
      0x1 - DISBTACALLOC_1 :
         No new entries are allocated in Branch Target Address Cache (BTAC), but
          existing entries can be updated.
 (rw) (01)  [0;32mDISCRITAXIRUR[0m  - [15:15] -  Disables critical AXI Read-Under-Read.
      0 - DISCRITAXIRUR_0 :
         Normal operation.
      0x1 - DISCRITAXIRUR_1 :
         An AXI read to Strongly-Ordered or Device memory, or an LDREX to Sharea
         ble memory, is not put on AXI if there are any outstanding reads on AXI
         . Transactions on AXI cannot be interrupted. This bit might reduce the 
         time that these transactions are in progress and might improve worst ca
         se interrupt latency. Performance is decreased when this bit is set.
 (rw) (05)  [0;32mDISDI[0m  - [20:16] -  Disables dual-issued.
      0 - DISDI_0 :
         Normal operation.
      0x1 - DISDI_1 :
         Nothing can be dual-issued when this instruction type is in channel 0.
 (rw) (05)  [0;32mDISISSCH1[0m  - [25:21] -  Disables dual-issued.
      0 - DISISSCH1_0 :
         Normal operation.
      0x1 - DISISSCH1_1 :
         Nothing can be dual-issued when this instruction type is in channel 1.
 (rw) (01)  [0;32mDISDYNADD[0m  - [26:26] -  Disables dynamic allocation of ADD and SUB instructions
      0 - DISDYNADD_0 :
         Normal operation. Some ADD and SUB instrctions are resolved in EX1.
      0x1 - DISDYNADD_1 :
         All ADD and SUB instructions are resolved in EX2.
 (rw) (01)  [0;32mDISCRITAXIRUW[0m  - [27:27] -  Disables critical AXI read-under-write
      0 - DISCRITAXIRUW_0 :
         Normal operation. This is backwards compatible with r0.
      0x1 - DISCRITAXIRUW_1 :
         AXI reads to DEV/SO memory. Exclusive reads to Shareable memory are not
          initiated on the AXIM AR channel until all outstanding stores on AXI a
         re complete.
 (rw) (01)  [0;32mDISFPUISSOPT[0m  - [28:28] -  Disables critical AXI read-under-write
      0 - DISFPUISSOPT_0 :
         Normal operation.
</lang>
#### p.SYSTEMCONTROL.SHPR2
<lang=dft>
 (rw)  [1;33m0xe000ed1c[0m (0xe000e000 + 0x0d1c)
System Handler Priority Register 2
 (rw) (08)  [0;32mPRI_11[0m  - [31:24] -  Priority of system handler 11, SVCall
</lang>
#### systemcontrol.shcsr
<link=p.SYSTEMCONTROL.SHCSR>
#### p.systemcontrol.dfsr
<link=p.SYSTEMCONTROL.DFSR>
#### SystemControl.MMFAR
<link=p.SYSTEMCONTROL.MMFAR>
#### systemcontrol.id_mmfr3
<link=p.SYSTEMCONTROL.ID_MMFR3>
#### p.SYSTEMCONTROL.ID_ISAR0
<lang=dft>
 (ro)  [1;33m0xe000ed60[0m (0xe000e000 + 0x0d60)
Instruction Set Attributes Register 0
 (ro) (04)  [0;32mBITCOUNT_INSTRS[0m  - [07:04] -  Indicates the supported Bit Counting instructions
      0 - BITCOUNT_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - BITCOUNT_INSTRS_1 :
         Adds support for the CLZ instruction
 (ro) (04)  [0;32mBITFIELD_INSTRS[0m  - [11:08] -  Indicates the supported BitField instructions
      0 - BITFIELD_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - BITFIELD_INSTRS_1 :
         Adds support for the BFC, BFI, SBFX, and UBFX instructions
 (ro) (04)  [0;32mCMPBRANCH_INSTRS[0m  - [15:12] -  Indicates the supported combined Compare and Branch instructions
      0 - CMPBRANCH_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - CMPBRANCH_INSTRS_1 :
         Adds support for the CBNZ and CBZ instructions
 (ro) (04)  [0;32mCOPROC_INSTRS[0m  - [19:16] -  Indicates the supported Coprocessor instructions
      0 - COPROC_INSTRS_0 :
         None supported, except for separately attributed architectures, for exa
         mple the Floating-point extension
      0x1 - COPROC_INSTRS_1 :
         Adds support for generic CDP, LDC, MCR, MRC, and STC instructions
      0x2 - COPROC_INSTRS_2 :
         As for 1, and adds support for generic CDP2, LDC2, MCR2, MRC2, and STC2
          instructions
      0x3 - COPROC_INSTRS_3 :
         As for 2, and adds support for generic MCRR and MRRC instructions
      0x4 - COPROC_INSTRS_4 :
         As for 3, and adds support for generic MCRR2 and MRRC2 instructions
 (ro) (04)  [0;32mDEBUG_INSTRS[0m  - [23:20] -  Indicates the supported Debug instructions
      0 - DEBUG_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - DEBUG_INSTRS_1 :
         Adds support for the BKPT instruction
 (ro) (04)  [0;32mDIVIDE_INSTRS[0m  - [27:24] -  Indicates the supported Divide instructions
      0 - DIVIDE_INSTRS_0 :
         None supported, ARMv7-M unused
      0x1 - DIVIDE_INSTRS_1 :
         Adds support for the SDIV and UDIV instructions
</lang>
#### systemcontrol.clidr
<link=p.SYSTEMCONTROL.CLIDR>
#### p.SYSTEMCONTROL.CSSELR
<lang=dft>
 (rw)  [1;33m0xe000ed84[0m (0xe000e000 + 0x0d84)
Cache Size Selection Register
 (rw) (01)  [0;32mIND[0m  - [00:00] -  Instruction not data bit
      0 - IND_0 :
         Data or unified cache.
      0x1 - IND_1 :
         Instruction cache.
 (rw) (03)  [0;32mLEVEL[0m  - [03:01] -  Cache level of required cache
      0 - LEVEL_0 :
         Level 1 cache.
      0x1 - LEVEL_1 :
         Level 2 cache.
      0x2 - LEVEL_2 :
         Level 3 cache.
      0x3 - LEVEL_3 :
         Level 4 cache.
      0x4 - LEVEL_4 :
         Level 5 cache.
      0x5 - LEVEL_5 :
         Level 6 cache.
      0x6 - LEVEL_6 :
         Level 7 cache.
</lang>
#### p.SYSTEMCONTROL.STIR
<lang=dft>
 (rw)  [1;33m0xe000ef00[0m (0xe000e000 + 0x0f00)
Instruction cache invalidate all to Point of Unification (PoU)
 (wo) (09)  [0;32mINTID[0m  - [08:00] -  Indicates the interrupt to be triggered
</lang>
#### SystemControl.DCIMVAC
<link=p.SYSTEMCONTROL.DCIMVAC>
#### p.SYSTEMCONTROL.DCCMVAC
<lang=dft>
 (wo)  [1;33m0xe000ef68[0m (0xe000e000 + 0x0f68)
Data cache clean by address to PoC
 (wo) (32)  [0;32mDCCMVAC[0m  - [31:00] -  D-cache clean by MVA to PoC
</lang>
#### p.systemcontrol.dccmvac
<link=p.SYSTEMCONTROL.DCCMVAC>
#### p.SYSTEMCONTROL.DCCIMVAC
<lang=dft>
 (wo)  [1;33m0xe000ef70[0m (0xe000e000 + 0x0f70)
Data cache clean and invalidate by address to PoC
 (wo) (32)  [0;32mDCCIMVAC[0m  - [31:00] -  D-cache clean and invalidate by MVA to PoC
</lang>
#### systemcontrol.dccisw
<link=p.SYSTEMCONTROL.DCCISW>
#### p.SYSTEMCONTROL.CM7_ITCMCR
<lang=dft>
 (rw)  [1;33m0xe000ef90[0m (0xe000e000 + 0x0f90)
Instruction Tightly-Coupled Memory Control Register
 (rw) (01)  [0;32mEN[0m  - [00:00] -  TCM enable. When a TCM is disabled all accesses are made to the AXIM interface.
      0 - EN_0 :
         TCM disabled.
      0x1 - EN_1 :
         TCM enabled.
 (rw) (01)  [0;32mRMW[0m  - [01:01] -  Read-Modify-Write (RMW) enable. Indicates that all writes to TCM, that are not 
 the full width of the TCM RAM, use a RMW sequence.
      0 - RMW_0 :
         RMW disabled.
      0x1 - RMW_1 :
         RMW enabled.
 (rw) (01)  [0;32mRETEN[0m  - [02:02] -  Retry phase enable. When enabled the processor guarantees to honor the retry ou
 tput on the corresponding TCM interface, re-executing the instruction which car
 ried out the TCM access.
      0 - RETEN_0 :
         Retry phase disabled.
      0x1 - RETEN_1 :
         Retry phase enabled.
 (ro) (04)  [0;32mSZ[0m  - [06:03] -  TCM size. Indicates the size of the relevant TCM.
      0 - SZ_0 :
         No TCM implemented.
      0x3 - SZ_3 :
         4KB.
      0x4 - SZ_4 :
         8KB.
      0x5 - SZ_5 :
         16KB.
      0x6 - SZ_6 :
         32KB.
      0x7 - SZ_7 :
         64KB.
      0x8 - SZ_8 :
         128KB.
      0x9 - SZ_9 :
         256KB.
      0xA - SZ_10 :
         512KB.
      0xB - SZ_11 :
         1MB.
      0xC - SZ_12 :
         2MB.
      0xD - SZ_13 :
         4MB.
      0xE - SZ_14 :
         8MB.
      0xF - SZ_15 :
         16MB.
</lang>
#### p.systemcontrol.cm7_abfsr
<link=p.SYSTEMCONTROL.CM7_ABFSR>
#### p.nvic.nviciser2
<link=p.NVIC.NVICISER2>
#### nvic.nvicispr0
<link=p.NVIC.NVICISPR0>
#### p.nvic.nvicicpr0
<link=p.NVIC.NVICICPR0>
#### p.nvic.nviciabr0
<link=p.NVIC.NVICIABR0>
#### p.NVIC.NVICIP3
<lang=dft>
 (rw)  [1;33m0xe000e403[0m (0xe000e100 + 0x0303)
Interrupt Priority Register 3
 (rw) (04)  [0;32mPRI3[0m  - [07:04] -  Priority of the INT_DMA3_DMA19 interrupt 3
</lang>
#### p.NVIC.NVICIP13
<lang=dft>
 (rw)  [1;33m0xe000e40d[0m (0xe000e100 + 0x030d)
Interrupt Priority Register 13
 (rw) (04)  [0;32mPRI13[0m  - [07:04] -  Priority of the INT_DMA13_DMA29 interrupt 13
</lang>
#### p.nvic.nvicip14
<link=p.NVIC.NVICIP14>
#### p.nvic.nvicip21
<link=p.NVIC.NVICIP21>
#### p.nvic.nvicip32
<link=p.NVIC.NVICIP32>
#### nvic.nvicip39
<link=p.NVIC.NVICIP39>
#### p.NVIC.NVICIP40
<lang=dft>
 (rw)  [1;33m0xe000e428[0m (0xe000e100 + 0x0328)
Interrupt Priority Register 40
 (rw) (04)  [0;32mPRI40[0m  - [07:04] -  Priority of the INT_TSC_DIG interrupt 40
</lang>
#### NVIC.NVICIP41
<link=p.NVIC.NVICIP41>
#### nvic.nvicip43
<link=p.NVIC.NVICIP43>
#### NVIC.NVICIP52
<link=p.NVIC.NVICIP52>
#### nvic.nvicip54
<link=p.NVIC.NVICIP54>
#### p.nvic.nvicip58
<link=p.NVIC.NVICIP58>
#### nvic.nvicip65
<link=p.NVIC.NVICIP65>
#### p.NVIC.NVICIP66
<lang=dft>
 (rw)  [1;33m0xe000e442[0m (0xe000e100 + 0x0342)
Interrupt Priority Register 66
 (rw) (04)  [0;32mPRI66[0m  - [07:04] -  Priority of the INT_USB_PHY2 interrupt 66
</lang>
#### NVIC.NVICIP67
<link=p.NVIC.NVICIP67>
#### p.NVIC.NVICIP71
<lang=dft>
 (rw)  [1;33m0xe000e447[0m (0xe000e100 + 0x0347)
Interrupt Priority Register 71
 (rw) (04)  [0;32mPRI71[0m  - [07:04] -  Priority of the INT_Reserved87 interrupt 71
</lang>
#### NVIC.NVICIP74
<link=p.NVIC.NVICIP74>
#### p.NVIC.NVICIP84
<lang=dft>
 (rw)  [1;33m0xe000e454[0m (0xe000e100 + 0x0354)
Interrupt Priority Register 84
 (rw) (04)  [0;32mPRI84[0m  - [07:04] -  Priority of the INT_GPIO3_Combined_0_15 interrupt 84
</lang>
#### NVIC.NVICIP85
<link=p.NVIC.NVICIP85>
#### nvic.nvicip87
<link=p.NVIC.NVICIP87>
#### p.nvic.nvicip88
<link=p.NVIC.NVICIP88>
#### nvic.nvicip90
<link=p.NVIC.NVICIP90>
#### NVIC.NVICIP96
<link=p.NVIC.NVICIP96>
#### p.nvic.nvicip108
<link=p.NVIC.NVICIP108>
#### p.nvic.nvicip126
<link=p.NVIC.NVICIP126>
#### NVIC.NVICIP129
<link=p.NVIC.NVICIP129>
#### p.nvic.nvicip135
<link=p.NVIC.NVICIP135>
#### p.NVIC.NVICIP138
<lang=dft>
 (rw)  [1;33m0xe000e48a[0m (0xe000e100 + 0x038a)
Interrupt Priority Register 138
 (rw) (04)  [0;32mPRI138[0m  - [07:04] -  Priority of the INT_PWM2_1 interrupt 138
</lang>
#### p.NVIC.NVICIP140
<lang=dft>
 (rw)  [1;33m0xe000e48c[0m (0xe000e100 + 0x038c)
Interrupt Priority Register 140
 (rw) (04)  [0;32mPRI140[0m  - [07:04] -  Priority of the INT_PWM2_3 interrupt 140
</lang>
#### nvic.nvicip142
<link=p.NVIC.NVICIP142>
#### NVIC.NVICIP144
<link=p.NVIC.NVICIP144>
#### p.nvic.nvicip147
<link=p.NVIC.NVICIP147>
#### nvic.nvicip151
<link=p.NVIC.NVICIP151>
#### p.NVIC.NVICIP153
<lang=dft>
 (rw)  [1;33m0xe000e499[0m (0xe000e100 + 0x0399)
Interrupt Priority Register 153
 (rw) (04)  [0;32mPRI153[0m  - [07:04] -  Priority of the INT_ENET2_1588_Timer interrupt 153
</lang>
#### NVIC.NVICIP153
<link=p.NVIC.NVICIP153>
#### p.nvic.nvicstir
<link=p.NVIC.NVICSTIR>
#### MPR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AIPSTZ1.MPR
   p.AIPSTZ2.MPR
   p.AIPSTZ3.MPR
   p.AIPSTZ4.MPR
#### OPACR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.AIPSTZ1.OPACR2
   p.AIPSTZ2.OPACR2
   p.AIPSTZ3.OPACR2
   p.AIPSTZ4.OPACR2
#### cval0
<link=CVAL0>
#### ltmr64h
<link=LTMR64H>
#### cr1
<link=CR1>
#### GPR3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.IOMUXC_SNVS_GPR.GPR3
   p.IOMUXC_GPR.GPR3
   p.SRC.GPR3
#### SW_MUX_CTL_PAD_WAKEUP
<link=p.IOMUXC_SNVS.SW_MUX_CTL_PAD_WAKEUP>
#### GPR13
<link=p.IOMUXC_GPR.GPR13>
#### gpr29
<link=GPR29>
#### gpr33
<link=GPR33>
#### wsr
<link=WSR>
#### WICR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.WDOG1.WICR
   p.WDOG2.WICR
#### wicr
<link=WICR>
#### cnt
<link=CNT>
#### hc3
<link=HC3>
#### SCMISC
<link=p.TRNG.SCMISC>
#### FRQCNT
<link=p.TRNG.FRQCNT>
#### ent[1]
<link=ENT[1]>
#### ENT[8]
<link=p.TRNG.ENT[8]>
#### int_ctrl
<link=INT_CTRL>
#### HPSICR
<link=p.SNVS.HPSICR>
#### HPHACR
<link=p.SNVS.HPHACR>
#### lpsvcr
<link=LPSVCR>
#### lptdcr
<link=LPTDCR>
#### lpsr
<link=LPSR>
#### lpsrtcmr
<link=LPSRTCMR>
#### LPZMKR[0]
<link=p.SNVS.LPZMKR[0]>
#### lpgpr[4]
<link=LPGPR[4]>
#### hpvidr1
<link=HPVIDR1>
#### pll_audio_num
<link=PLL_AUDIO_NUM>
#### pll_audio_denom
<link=PLL_AUDIO_DENOM>
#### pfd_480
<link=PFD_480>
#### misc0_tog
<link=MISC0_TOG>
#### MISC1_SET
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC1_SET
   p.PMU.MISC1_SET
#### MISC1_CLR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CCM_ANALOG.MISC1_CLR
   p.PMU.MISC1_CLR
#### REG_3P0_TOG
<link=p.PMU.REG_3P0_TOG>
#### reg_2p5_clr
<link=REG_2P5_CLR>
#### TEMPSENSE0_CLR
<link=p.TEMPMON.TEMPSENSE0_CLR>
#### OSC_CONFIG1_CLR
<link=p.XTALOSC24M.OSC_CONFIG1_CLR>
#### pwd_clr
<link=PWD_CLR>
#### tx_tog
<link=TX_TOG>
#### csl0
<link=CSL0>
#### csl14
<link=CSL14>
#### HP0
<link=p.CSU.HP0>
#### int_en
<link=INT_EN>
#### es
<link=ES>
#### eei
<link=EEI>
#### CERR
<link=p.DMA0.CERR>
#### err
<link=ERR>
#### EARS
<link=p.DMA0.EARS>
#### tcd1_slast
<link=TCD1_SLAST>
#### TCD2_SADDR
<link=p.DMA0.TCD2_SADDR>
#### tcd2_saddr
<link=TCD2_SADDR>
#### TCD3_ATTR
<link=p.DMA0.TCD3_ATTR>
#### TCD3_NBYTES_MLNO
<link=p.DMA0.TCD3_NBYTES_MLNO>
#### TCD3_DADDR
<link=p.DMA0.TCD3_DADDR>
#### tcd3_citer_elinkno
<link=TCD3_CITER_ELINKNO>
#### TCD3_CSR
<link=p.DMA0.TCD3_CSR>
#### TCD4_ATTR
<link=p.DMA0.TCD4_ATTR>
#### TCD4_BITER_ELINKYES
<link=p.DMA0.TCD4_BITER_ELINKYES>
#### tcd5_dlastsga
<link=TCD5_DLASTSGA>
#### TCD5_BITER_ELINKNO
<link=p.DMA0.TCD5_BITER_ELINKNO>
#### TCD6_DOFF
<link=p.DMA0.TCD6_DOFF>
#### tcd6_biter_elinkno
<link=TCD6_BITER_ELINKNO>
#### TCD7_NBYTES_MLOFFNO
<link=p.DMA0.TCD7_NBYTES_MLOFFNO>
#### tcd7_dlastsga
<link=TCD7_DLASTSGA>
#### tcd8_nbytes_mloffno
<link=TCD8_NBYTES_MLOFFNO>
#### TCD8_SLAST
<link=p.DMA0.TCD8_SLAST>
#### tcd8_csr
<link=TCD8_CSR>
#### TCD9_ATTR
<link=p.DMA0.TCD9_ATTR>
#### TCD9_NBYTES_MLNO
<link=p.DMA0.TCD9_NBYTES_MLNO>
#### TCD9_SLAST
<link=p.DMA0.TCD9_SLAST>
#### tcd10_csr
<link=TCD10_CSR>
#### TCD12_NBYTES_MLOFFYES
<link=p.DMA0.TCD12_NBYTES_MLOFFYES>
#### tcd14_nbytes_mloffno
<link=TCD14_NBYTES_MLOFFNO>
#### tcd15_soff
<link=TCD15_SOFF>
#### TCD15_BITER_ELINKNO
<link=p.DMA0.TCD15_BITER_ELINKNO>
#### TCD16_CITER_ELINKYES
<link=p.DMA0.TCD16_CITER_ELINKYES>
#### tcd16_citer_elinkyes
<link=TCD16_CITER_ELINKYES>
#### TCD17_SOFF
<link=p.DMA0.TCD17_SOFF>
#### TCD17_NBYTES_MLNO
<link=p.DMA0.TCD17_NBYTES_MLNO>
#### TCD17_DADDR
<link=p.DMA0.TCD17_DADDR>
#### TCD18_SOFF
<link=p.DMA0.TCD18_SOFF>
#### TCD18_BITER_ELINKYES
<link=p.DMA0.TCD18_BITER_ELINKYES>
#### tcd19_nbytes_mloffno
<link=TCD19_NBYTES_MLOFFNO>
#### tcd21_soff
<link=TCD21_SOFF>
#### tcd22_slast
<link=TCD22_SLAST>
#### TCD23_ATTR
<link=p.DMA0.TCD23_ATTR>
#### tcd23_biter_elinkno
<link=TCD23_BITER_ELINKNO>
#### tcd25_nbytes_mloffyes
<link=TCD25_NBYTES_MLOFFYES>
#### tcd25_citer_elinkno
<link=TCD25_CITER_ELINKNO>
#### TCD26_ATTR
<link=p.DMA0.TCD26_ATTR>
#### TCD26_CITER_ELINKYES
<link=p.DMA0.TCD26_CITER_ELINKYES>
#### TCD27_SLAST
<link=p.DMA0.TCD27_SLAST>
#### TCD30_ATTR
<link=p.DMA0.TCD30_ATTR>
#### tcd30_slast
<link=TCD30_SLAST>
#### TCD30_DLASTSGA
<link=p.DMA0.TCD30_DLASTSGA>
#### TCD31_NBYTES_MLNO
<link=p.DMA0.TCD31_NBYTES_MLNO>
#### CHCFG[3]
<link=p.DMAMUX.CHCFG[3]>
#### chcfg[5]
<link=CHCFG[5]>
#### CHCFG[6]
<link=p.DMAMUX.CHCFG[6]>
#### chcfg[19]
<link=CHCFG[19]>
#### chcfg[30]
<link=CHCFG[30]>
#### ISR2
<link=p.GPC.ISR2>
#### cdcdr
<link=CDCDR>
#### cgpr
<link=CGPR>
#### ROMPATCH5D
<link=p.ROMC.ROMPATCH5D>
#### rompatch2d
<link=ROMPATCH2D>
#### rompatch1a
<link=ROMPATCH1A>
#### ROMPATCH9A
<link=p.ROMC.ROMPATCH9A>
#### ROMPATCH11A
<link=p.ROMC.ROMPATCH11A>
#### MODIR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPUART1.MODIR
   p.LPUART2.MODIR
   p.LPUART3.MODIR
   p.LPUART4.MODIR
   p.LPUART5.MODIR
   p.LPUART6.MODIR
   p.LPUART7.MODIR
   p.LPUART8.MODIR
#### water
<link=WATER>
#### shiftsden
<link=SHIFTSDEN>
#### SHIFTCFG[2]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTCFG[2]
   p.FLEXIO2.SHIFTCFG[2]
   p.FLEXIO3.SHIFTCFG[2]
#### SHIFTBUFBIS[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFBIS[0]
   p.FLEXIO2.SHIFTBUFBIS[0]
   p.FLEXIO3.SHIFTBUFBIS[0]
#### shiftbufbis[3]
<link=SHIFTBUFBIS[3]>
#### SHIFTBUFBBS[0]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXIO1.SHIFTBUFBBS[0]
   p.FLEXIO2.SHIFTBUFBBS[0]
   p.FLEXIO3.SHIFTBUFBBS[0]
#### shiftbufbbs[0]
<link=SHIFTBUFBBS[0]>
#### shiftbufnis[0]
<link=SHIFTBUFNIS[0]>
#### ctrl1
<link=CTRL1>
#### iflag1
<link=IFLAG1>
#### DBG1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.DBG1
   p.CAN2.DBG1
#### RXIMR7
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR7
   p.CAN2.RXIMR7
#### RXIMR13
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR13
   p.CAN2.RXIMR13
#### RXIMR26
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR26
   p.CAN2.RXIMR26
#### rximr27
<link=RXIMR27>
#### RXIMR35
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.CAN1.RXIMR35
   p.CAN2.RXIMR35
#### rximr56
<link=RXIMR56>
#### mb0_16b_word3
<link=MB0_16B_WORD3>
#### MB0_64B_WORD4
<link=p.CAN3.MB0_64B_WORD4>
#### MB0_32B_WORD5
<link=p.CAN3.MB0_32B_WORD5>
#### MB1_16B_ID
<link=p.CAN3.MB1_16B_ID>
#### MB1_16B_WORD0
<link=p.CAN3.MB1_16B_WORD0>
#### mb1_32b_word2
<link=MB1_32B_WORD2>
#### mb2_16b_word0
<link=MB2_16B_WORD0>
#### mb3_8b_word0
<link=MB3_8B_WORD0>
#### word03
<link=WORD03>
#### id4
<link=ID4>
#### mb4_8b_id
<link=MB4_8B_ID>
#### MB3_16B_WORD2
<link=p.CAN3.MB3_16B_WORD2>
#### MB1_64B_WORD4
<link=p.CAN3.MB1_64B_WORD4>
#### mb6_8b_cs
<link=MB6_8B_CS>
#### MB6_8B_WORD1
<link=p.CAN3.MB6_8B_WORD1>
#### WORD07
<link=p.CAN3.WORD07>
#### word18
<link=WORD18>
#### mb2_64b_cs
<link=MB2_64B_CS>
#### mb3_32b_word5
<link=MB3_32B_WORD5>
#### id10
<link=ID10>
#### mb6_16b_word3
<link=MB6_16B_WORD3>
#### mb2_64b_word4
<link=MB2_64B_WORD4>
#### MB4_32B_WORD1
<link=p.CAN3.MB4_32B_WORD1>
#### MB12_8B_WORD1
<link=p.CAN3.MB12_8B_WORD1>
#### mb2_64b_word13
<link=MB2_64B_WORD13>
#### mb3_64b_id
<link=MB3_64B_ID>
#### word113
<link=WORD113>
#### mb14_8b_cs
<link=MB14_8B_CS>
#### mb9_16b_word0
<link=MB9_16B_WORD0>
#### mb5_32b_word6
<link=MB5_32B_WORD6>
#### mb15_8b_cs
<link=MB15_8B_CS>
#### mb3_64b_word5
<link=MB3_64B_WORD5>
#### cs16
<link=CS16>
#### MB11_16B_WORD0
<link=p.CAN3.MB11_16B_WORD0>
#### mb17_8b_word0
<link=MB17_8B_WORD0>
#### WORD017
<link=p.CAN3.WORD017>
#### mb11_16b_word3
<link=MB11_16B_WORD3>
#### mb7_32b_word1
<link=MB7_32B_WORD1>
#### MB4_64B_WORD1
<link=p.CAN3.MB4_64B_WORD1>
#### mb13_16b_word0
<link=MB13_16B_WORD0>
#### MB13_16B_WORD2
<link=p.CAN3.MB13_16B_WORD2>
#### ID21
<link=p.CAN3.ID21>
#### mb21_8b_id
<link=MB21_8B_ID>
#### mb8_32b_word4
<link=MB8_32B_WORD4>
#### MB22_8B_CS
<link=p.CAN3.MB22_8B_CS>
#### MB15_16B_ID
<link=p.CAN3.MB15_16B_ID>
#### mb23_8b_cs
<link=MB23_8B_CS>
#### mb23_8b_word0
<link=MB23_8B_WORD0>
#### MB5_64B_WORD3
<link=p.CAN3.MB5_64B_WORD3>
#### MB24_8B_WORD0
<link=p.CAN3.MB24_8B_WORD0>
#### MB9_32B_WORD6
<link=p.CAN3.MB9_32B_WORD6>
#### id25
<link=ID25>
#### mb17_16b_id
<link=MB17_16B_ID>
#### mb10_32b_word2
<link=MB10_32B_WORD2>
#### WORD026
<link=p.CAN3.WORD026>
#### MB10_32B_WORD5
<link=p.CAN3.MB10_32B_WORD5>
#### mb17_16b_word3
<link=MB17_16B_WORD3>
#### MB27_8B_WORD0
<link=p.CAN3.MB27_8B_WORD0>
#### mb18_16b_word1
<link=MB18_16B_WORD1>
#### mb6_64b_word1
<link=MB6_64B_WORD1>
#### MB28_8B_WORD0
<link=p.CAN3.MB28_8B_WORD0>
#### MB6_64B_WORD8
<link=p.CAN3.MB6_64B_WORD8>
#### cs30
<link=CS30>
#### MB6_64B_WORD12
<link=p.CAN3.MB6_64B_WORD12>
#### mb20_16b_word3
<link=MB20_16B_WORD3>
#### WORD031
<link=p.CAN3.WORD031>
#### MB12_32B_WORD5
<link=p.CAN3.MB12_32B_WORD5>
#### mb31_8b_word1
<link=MB31_8B_WORD1>
#### MB7_64B_ID
<link=p.CAN3.MB7_64B_ID>
#### mb7_64b_word0
<link=MB7_64B_WORD0>
#### ID32
<link=p.CAN3.ID32>
#### mb12_32b_word7
<link=MB12_32B_WORD7>
#### mb21_16b_word1
<link=MB21_16B_WORD1>
#### mb33_8b_id
<link=MB33_8B_ID>
#### mb22_16b_word1
<link=MB22_16B_WORD1>
#### CS34
<link=p.CAN3.CS34>
#### mb23_16b_word1
<link=MB23_16B_WORD1>
#### mb7_64b_word14
<link=MB7_64B_WORD14>
#### word035
<link=WORD035>
#### MB14_32B_WORD1
<link=p.CAN3.MB14_32B_WORD1>
#### id36
<link=ID36>
#### mb14_32b_word6
<link=MB14_32B_WORD6>
#### MB8_64B_WORD3
<link=p.CAN3.MB8_64B_WORD3>
#### mb8_64b_word5
<link=MB8_64B_WORD5>
#### mb25_16b_word2
<link=MB25_16B_WORD2>
#### WORD139
<link=p.CAN3.WORD139>
#### mb8_64b_word14
<link=MB8_64B_WORD14>
#### MB27_16B_CS
<link=p.CAN3.MB27_16B_CS>
#### MB40_8B_WORD0
<link=p.CAN3.MB40_8B_WORD0>
#### MB16_32B_WORD1
<link=p.CAN3.MB16_32B_WORD1>
#### mb9_64b_id
<link=MB9_64B_ID>
#### WORD140
<link=p.CAN3.WORD140>
#### cs41
<link=CS41>
#### mb16_32b_word3
<link=MB16_32B_WORD3>
#### word041
<link=WORD041>
#### mb9_64b_word4
<link=MB9_64B_WORD4>
#### MB28_16B_WORD2
<link=p.CAN3.MB28_16B_WORD2>
#### ID43
<link=p.CAN3.ID43>
#### MB29_16B_ID
<link=p.CAN3.MB29_16B_ID>
#### MB29_16B_WORD0
<link=p.CAN3.MB29_16B_WORD0>
#### WORD045
<link=p.CAN3.WORD045>
#### mb46_8b_word1
<link=MB46_8B_WORD1>
#### mb19_32b_id
<link=MB19_32B_ID>
#### MB10_64B_WORD13
<link=p.CAN3.MB10_64B_WORD13>
#### mb10_64b_word14
<link=MB10_64B_WORD14>
#### mb19_32b_word5
<link=MB19_32B_WORD5>
#### MB49_8B_ID
<link=p.CAN3.MB49_8B_ID>
#### MB11_64B_CS
<link=p.CAN3.MB11_64B_CS>
#### mb49_8b_word0
<link=MB49_8B_WORD0>
#### MB19_32B_WORD7
<link=p.CAN3.MB19_32B_WORD7>
#### ID50
<link=p.CAN3.ID50>
#### MB34_16B_CS
<link=p.CAN3.MB34_16B_CS>
#### MB20_32B_WORD4
<link=p.CAN3.MB20_32B_WORD4>
#### MB51_8B_WORD1
<link=p.CAN3.MB51_8B_WORD1>
#### MB11_64B_WORD11
<link=p.CAN3.MB11_64B_WORD11>
#### mb11_64b_word12
<link=MB11_64B_WORD12>
#### MB35_16B_WORD0
<link=p.CAN3.MB35_16B_WORD0>
#### MB53_8B_ID
<link=p.CAN3.MB53_8B_ID>
#### WORD153
<link=p.CAN3.WORD153>
#### mb36_16b_cs
<link=MB36_16B_CS>
#### mb12_64b_id
<link=MB12_64B_ID>
#### MB21_32B_WORD7
<link=p.CAN3.MB21_32B_WORD7>
#### mb12_64b_word3
<link=MB12_64B_WORD3>
#### MB12_64B_WORD5
<link=p.CAN3.MB12_64B_WORD5>
#### mb55_8b_word1
<link=MB55_8B_WORD1>
#### MB37_16B_WORD0
<link=p.CAN3.MB37_16B_WORD0>
#### MB22_32B_WORD3
<link=p.CAN3.MB22_32B_WORD3>
#### word056
<link=WORD056>
#### CS57
<link=p.CAN3.CS57>
#### mb38_16b_id
<link=MB38_16B_ID>
#### MB58_8B_CS
<link=p.CAN3.MB58_8B_CS>
#### MB23_32B_WORD2
<link=p.CAN3.MB23_32B_WORD2>
#### mb39_16b_cs
<link=MB39_16B_CS>
#### MB58_8B_WORD0
<link=p.CAN3.MB58_8B_WORD0>
#### mb13_64b_word5
<link=MB13_64B_WORD5>
#### MB40_16B_ID
<link=p.CAN3.MB40_16B_ID>
#### MB13_64B_WORD7
<link=p.CAN3.MB13_64B_WORD7>
#### mb61_8b_word1
<link=MB61_8B_WORD1>
#### mb41_16b_word1
<link=MB41_16B_WORD1>
#### word162
<link=WORD162>
#### CS63
<link=p.CAN3.CS63>
#### rximr[6]
<link=RXIMR[6]>
#### rximr[9]
<link=RXIMR[9]>
#### RXIMR[10]
<link=p.CAN3.RXIMR[10]>
#### rximr[16]
<link=RXIMR[16]>
#### rximr[23]
<link=RXIMR[23]>
#### rximr[33]
<link=RXIMR[33]>
#### RXIMR[43]
<link=p.CAN3.RXIMR[43]>
#### rximr[46]
<link=RXIMR[46]>
#### RXIMR[49]
<link=p.CAN3.RXIMR[49]>
#### HR_TIME_STAMP[9]
<link=p.CAN3.HR_TIME_STAMP[9]>
#### hr_time_stamp[12]
<link=HR_TIME_STAMP[12]>
#### hr_time_stamp[17]
<link=HR_TIME_STAMP[17]>
#### hr_time_stamp[40]
<link=HR_TIME_STAMP[40]>
#### HR_TIME_STAMP[42]
<link=p.CAN3.HR_TIME_STAMP[42]>
#### HR_TIME_STAMP[47]
<link=p.CAN3.HR_TIME_STAMP[47]>
#### erffel[5]
<link=ERFFEL[5]>
#### ERFFEL[15]
<link=p.CAN3.ERFFEL[15]>
#### erffel[15]
<link=ERFFEL[15]>
#### erffel[42]
<link=ERFFEL[42]>
#### ERFFEL[47]
<link=p.CAN3.ERFFEL[47]>
#### erffel[47]
<link=ERFFEL[47]>
#### ERFFEL[54]
<link=p.CAN3.ERFFEL[54]>
#### erffel[54]
<link=ERFFEL[54]>
#### ERFFEL[61]
<link=p.CAN3.ERFFEL[61]>
#### ERFFEL[66]
<link=p.CAN3.ERFFEL[66]>
#### ERFFEL[72]
<link=p.CAN3.ERFFEL[72]>
#### ERFFEL[78]
<link=p.CAN3.ERFFEL[78]>
#### erffel[78]
<link=ERFFEL[78]>
#### erffel[85]
<link=ERFFEL[85]>
#### ERFFEL[86]
<link=p.CAN3.ERFFEL[86]>
#### erffel[101]
<link=ERFFEL[101]>
#### ERFFEL[120]
<link=p.CAN3.ERFFEL[120]>
#### COMP10
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.COMP10
   p.TMR2.COMP10
   p.TMR3.COMP10
   p.TMR4.COMP10
#### comp10
<link=COMP10>
#### cmpld10
<link=CMPLD10>
#### DMA0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.TMR1.DMA0
   p.TMR2.DMA0
   p.TMR3.DMA0
   p.TMR4.DMA0
#### sw_sticky
<link=SW_STICKY>
#### LOCK
<link=p.OCOTP.LOCK>
#### lock
<link=LOCK>
#### cfg0
<link=CFG0>
#### CFG2
<link=p.OCOTP.CFG2>
#### OTPMK3
<link=p.OCOTP.OTPMK3>
#### otpmk5
<link=OTPMK5>
#### srk2
<link=SRK2>
#### SRK4
<link=p.OCOTP.SRK4>
#### otpmk_crc32
<link=OTPMK_CRC32>
#### SW_MUX_CTL_PAD_GPIO_EMC_06
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_06>
#### sw_mux_ctl_pad_gpio_emc_06
<link=SW_MUX_CTL_PAD_GPIO_EMC_06>
#### SW_MUX_CTL_PAD_GPIO_EMC_11
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_11>
#### sw_mux_ctl_pad_gpio_emc_11
<link=SW_MUX_CTL_PAD_GPIO_EMC_11>
#### SW_MUX_CTL_PAD_GPIO_EMC_20
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_EMC_20>
#### sw_mux_ctl_pad_gpio_emc_20
<link=SW_MUX_CTL_PAD_GPIO_EMC_20>
#### SW_MUX_CTL_PAD_GPIO_AD_B0_10
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B0_10>
#### sw_mux_ctl_pad_gpio_ad_b1_00
<link=SW_MUX_CTL_PAD_GPIO_AD_B1_00>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_04
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_04>
#### SW_MUX_CTL_PAD_GPIO_AD_B1_13
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_AD_B1_13>
#### sw_mux_ctl_pad_gpio_b0_02
<link=SW_MUX_CTL_PAD_GPIO_B0_02>
#### SW_MUX_CTL_PAD_GPIO_B0_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B0_03>
#### SW_MUX_CTL_PAD_GPIO_B1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_B1_05>
#### sw_mux_ctl_pad_gpio_b1_05
<link=SW_MUX_CTL_PAD_GPIO_B1_05>
#### SW_MUX_CTL_PAD_GPIO_SD_B0_02
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B0_02>
#### sw_mux_ctl_pad_gpio_sd_b1_00
<link=SW_MUX_CTL_PAD_GPIO_SD_B1_00>
#### SW_MUX_CTL_PAD_GPIO_SD_B1_05
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SD_B1_05>
#### SW_PAD_CTL_PAD_GPIO_EMC_01
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_01>
#### sw_pad_ctl_pad_gpio_emc_11
<link=SW_PAD_CTL_PAD_GPIO_EMC_11>
#### SW_PAD_CTL_PAD_GPIO_EMC_16
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_16>
#### SW_PAD_CTL_PAD_GPIO_EMC_27
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_27>
#### sw_pad_ctl_pad_gpio_emc_37
<link=SW_PAD_CTL_PAD_GPIO_EMC_37>
#### SW_PAD_CTL_PAD_GPIO_EMC_38
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_EMC_38>
#### sw_pad_ctl_pad_gpio_ad_b0_00
<link=SW_PAD_CTL_PAD_GPIO_AD_B0_00>
#### SW_PAD_CTL_PAD_GPIO_AD_B0_11
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_AD_B0_11>
#### sw_pad_ctl_pad_gpio_ad_b1_08
<link=SW_PAD_CTL_PAD_GPIO_AD_B1_08>
#### SW_PAD_CTL_PAD_GPIO_B0_00
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B0_00>
#### sw_pad_ctl_pad_gpio_b0_03
<link=SW_PAD_CTL_PAD_GPIO_B0_03>
#### SW_PAD_CTL_PAD_GPIO_B1_07
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_B1_07>
#### sw_pad_ctl_pad_gpio_b1_08
<link=SW_PAD_CTL_PAD_GPIO_B1_08>
#### SW_PAD_CTL_PAD_GPIO_SD_B0_02
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B0_02>
#### sw_pad_ctl_pad_gpio_sd_b1_04
<link=SW_PAD_CTL_PAD_GPIO_SD_B1_04>
#### SW_PAD_CTL_PAD_GPIO_SD_B1_09
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SD_B1_09>
#### ANATOP_USB_OTG2_ID_SELECT_INPUT
<link=p.IOMUXC.ANATOP_USB_OTG2_ID_SELECT_INPUT>
#### CSI_DATA08_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA08_SELECT_INPUT>
#### CSI_DATA09_SELECT_INPUT
<link=p.IOMUXC.CSI_DATA09_SELECT_INPUT>
#### ENET0_TIMER_SELECT_INPUT
<link=p.IOMUXC.ENET0_TIMER_SELECT_INPUT>
#### flexcan2_rx_select_input
<link=FLEXCAN2_RX_SELECT_INPUT>
#### FLEXPWM1_PWMA1_SELECT_INPUT
<link=p.IOMUXC.FLEXPWM1_PWMA1_SELECT_INPUT>
#### flexpwm2_pwma2_select_input
<link=FLEXPWM2_PWMA2_SELECT_INPUT>
#### FLEXSPIA_DATA3_SELECT_INPUT
<link=p.IOMUXC.FLEXSPIA_DATA3_SELECT_INPUT>
#### LPI2C3_SDA_SELECT_INPUT
<link=p.IOMUXC.LPI2C3_SDA_SELECT_INPUT>
#### LPSPI3_SCK_SELECT_INPUT
<link=p.IOMUXC.LPSPI3_SCK_SELECT_INPUT>
#### LPUART7_TX_SELECT_INPUT
<link=p.IOMUXC.LPUART7_TX_SELECT_INPUT>
#### lpuart8_rx_select_input
<link=LPUART8_RX_SELECT_INPUT>
#### nmi_select_input
<link=NMI_SELECT_INPUT>
#### sai1_rx_data3_select_input
<link=SAI1_RX_DATA3_SELECT_INPUT>
#### SAI1_TX_BCLK_SELECT_INPUT
<link=p.IOMUXC.SAI1_TX_BCLK_SELECT_INPUT>
#### USDHC2_CMD_SELECT_INPUT
<link=p.IOMUXC.USDHC2_CMD_SELECT_INPUT>
#### usdhc2_data1_select_input
<link=USDHC2_DATA1_SELECT_INPUT>
#### usdhc2_wp_select_input
<link=USDHC2_WP_SELECT_INPUT>
#### XBAR1_IN02_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN02_SELECT_INPUT>
#### XBAR1_IN03_SELECT_INPUT
<link=p.IOMUXC.XBAR1_IN03_SELECT_INPUT>
#### xbar1_in05_select_input
<link=XBAR1_IN05_SELECT_INPUT>
#### xbar1_in19_select_input
<link=XBAR1_IN19_SELECT_INPUT>
#### sw_mux_ctl_pad_gpio_spi_b0_06
<link=SW_MUX_CTL_PAD_GPIO_SPI_B0_06>
#### SW_MUX_CTL_PAD_GPIO_SPI_B1_03
<link=p.IOMUXC.SW_MUX_CTL_PAD_GPIO_SPI_B1_03>
#### sw_pad_ctl_pad_gpio_spi_b0_03
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_03>
#### SW_PAD_CTL_PAD_GPIO_SPI_B0_08
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B0_08>
#### sw_pad_ctl_pad_gpio_spi_b0_10
<link=SW_PAD_CTL_PAD_GPIO_SPI_B0_10>
#### SW_PAD_CTL_PAD_GPIO_SPI_B1_03
<link=p.IOMUXC.SW_PAD_CTL_PAD_GPIO_SPI_B1_03>
#### sw_pad_ctl_pad_gpio_spi_b1_04
<link=SW_PAD_CTL_PAD_GPIO_SPI_B1_04>
#### gpt1_ipp_ind_capin1_select_input
<link=GPT1_IPP_IND_CAPIN1_SELECT_INPUT>
#### SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2
<link=p.IOMUXC.SAI3_IPG_CLK_SAI_MCLK_SELECT_INPUT_2>
#### SAI3_IPP_IND_SAI_RXDATA_SELECT_INPUT_0
<link=p.IOMUXC.SAI3_IPP_IND_SAI_RXDATA_SELECT_INPUT_0>
#### SAI3_IPP_IND_SAI_TXSYNC_SELECT_INPUT
<link=p.IOMUXC.SAI3_IPP_IND_SAI_TXSYNC_SELECT_INPUT>
#### KPCR
<link=p.KPP.KPCR>
#### mcr1
<link=MCR1>
#### AHBRXBUF3CR0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.AHBRXBUF3CR0
   p.FLEXSPI2.AHBRXBUF3CR0
#### FLSHCR2B2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.FLSHCR2B2
   p.FLEXSPI2.FLSHCR2B2
#### dllcra
<link=DLLCRA>
#### IPTXFSTS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.IPTXFSTS
   p.FLEXSPI2.IPTXFSTS
#### rfdr[2]
<link=RFDR[2]>
#### rfdr[8]
<link=RFDR[8]>
#### rfdr[15]
<link=RFDR[15]>
#### TFDR[6]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[6]
   p.FLEXSPI2.TFDR[6]
#### tfdr[6]
<link=TFDR[6]>
#### TFDR[16]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[16]
   p.FLEXSPI2.TFDR[16]
#### tfdr[16]
<link=TFDR[16]>
#### TFDR[23]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[23]
   p.FLEXSPI2.TFDR[23]
#### tfdr[23]
<link=TFDR[23]>
#### TFDR[29]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[29]
   p.FLEXSPI2.TFDR[29]
#### tfdr[29]
<link=TFDR[29]>
#### TFDR[30]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.TFDR[30]
   p.FLEXSPI2.TFDR[30]
#### tfdr[30]
<link=TFDR[30]>
#### LUT[9]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[9]
   p.FLEXSPI2.LUT[9]
#### lut[20]
<link=LUT[20]>
#### LUT[25]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[25]
   p.FLEXSPI2.LUT[25]
#### lut[33]
<link=LUT[33]>
#### LUT[42]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[42]
   p.FLEXSPI2.LUT[42]
#### LUT[48]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[48]
   p.FLEXSPI2.LUT[48]
#### LUT[51]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[51]
   p.FLEXSPI2.LUT[51]
#### LUT[56]
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.FLEXSPI.LUT[56]
   p.FLEXSPI2.LUT[56]
#### lut[56]
<link=LUT[56]>
#### OUT_CTRL
<link=p.PXP.OUT_CTRL>
#### OUT_AS_ULC
<link=p.PXP.OUT_AS_ULC>
#### PS_BACKGROUND
<link=p.PXP.PS_BACKGROUND>
#### ps_scale
<link=PS_SCALE>
#### NEXT
<link=p.PXP.NEXT>
#### ctrl1_tog
<link=CTRL1_TOG>
#### CTRL2_CLR
<link=p.LCDIF.CTRL2_CLR>
#### next_buf
<link=NEXT_BUF>
#### VDCTRL0_CLR
<link=p.LCDIF.VDCTRL0_CLR>
#### pigeonctrl0
<link=PIGEONCTRL0>
#### pigeonctrl0_clr
<link=PIGEONCTRL0_CLR>
#### PIGEONCTRL1
<link=p.LCDIF.PIGEONCTRL1>
#### pigeon_0_2
<link=PIGEON_0_2>
#### pigeon_5_0
<link=PIGEON_5_0>
#### PIGEON_8_1
<link=p.LCDIF.PIGEON_8_1>
#### PIGEON_11_0
<link=p.LCDIF.PIGEON_11_0>
#### LUT1_ADDR
<link=p.LCDIF.LUT1_ADDR>
#### CSICR1
<link=p.CSI.CSICR1>
#### csicr18
<link=CSICR18>
#### cmd_rsp2
<link=CMD_RSP2>
#### ADMA_ERR_STATUS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USDHC1.ADMA_ERR_STATUS
   p.USDHC2.ADMA_ERR_STATUS
#### clk_tune_ctrl_status
<link=CLK_TUNE_CTRL_STATUS>
#### RCR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RCR
   p.ENET2.RCR
#### paur
<link=PAUR>
#### opd
<link=OPD>
#### ialr
<link=IALR>
#### galr
<link=GALR>
#### rsem
<link=RSEM>
#### rafl
<link=RAFL>
#### TAEM
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TAEM
   p.ENET2.TAEM
#### RMON_T_CRC_ALIGN
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.RMON_T_CRC_ALIGN
   p.ENET2.RMON_T_CRC_ALIGN
#### IEEE_R_OCTETS_OK
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.IEEE_R_OCTETS_OK
   p.ENET2.IEEE_R_OCTETS_OK
#### ATVR
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.ATVR
   p.ENET2.ATVR
#### atper
<link=ATPER>
#### TCCR1
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENET.TCCR1
   p.ENET2.TCCR1
#### tccr1
<link=TCCR1>
#### gptimer0ld
<link=GPTIMER0LD>
#### HCSPARAMS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.HCSPARAMS
   p.USB2.HCSPARAMS
#### PERIODICLISTBASE
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.PERIODICLISTBASE
   p.USB2.PERIODICLISTBASE
#### usbmode
<link=USBMODE>
#### ENDPTCOMPLETE
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USB1.ENDPTCOMPLETE
   p.USB2.ENDPTCOMPLETE
#### USB_OTG1_CTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.USBNC1.USB_OTG1_CTRL
   p.USBNC2.USB_OTG1_CTRL
#### BMCR1
<link=p.SEMC.BMCR1>
#### bmcr1
<link=BMCR1>
#### BR5
<link=p.SEMC.BR5>
#### sdramcr0
<link=SDRAMCR0>
#### NANDCR2
<link=p.SEMC.NANDCR2>
#### CHANNELCTRL_SET
<link=p.DCP.CHANNELCTRL_SET>
#### CH0STAT
<link=p.DCP.CH0STAT>
#### ch0stat
<link=CH0STAT>
#### ch0stat_set
<link=CH0STAT_SET>
#### CH2STAT_SET
<link=p.DCP.CH2STAT_SET>
#### CH2OPTS_SET
<link=p.DCP.CH2OPTS_SET>
#### CH3OPTS_TOG
<link=p.DCP.CH3OPTS_TOG>
#### dbgselect
<link=DBGSELECT>
#### sis
<link=SIS>
#### srr
<link=SRR>
#### stcsch
<link=STCSCH>
#### TCR3
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.SAI1.TCR3
   p.SAI2.TCR3
   p.SAI3.TCR3
#### trig3_counter
<link=TRIG3_COUNTER>
#### trig3_result_3_2
<link=TRIG3_RESULT_3_2>
#### trig3_result_5_4
<link=TRIG3_RESULT_5_4>
#### TRIG5_RESULT_1_0
<link=p.ADC_ETC.TRIG5_RESULT_1_0>
#### TRIG6_CHAIN_3_2
<link=p.ADC_ETC.TRIG6_CHAIN_3_2>
#### TRIG6_CHAIN_5_4
<link=p.ADC_ETC.TRIG6_CHAIN_5_4>
#### bfcrt012
<link=BFCRT012>
#### sel1
<link=SEL1>
#### SEL7
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.XBARA1.SEL7
   p.XBARB2.SEL7
   p.XBARB3.SEL7
#### SEL12
<link=p.XBARA1.SEL12>
#### sel29
<link=SEL29>
#### sel33
<link=SEL33>
#### SEL34
<link=p.XBARA1.SEL34>
#### SEL49
<link=p.XBARA1.SEL49>
#### sel51
<link=SEL51>
#### sel64
<link=SEL64>
#### POSDH
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.ENC1.POSDH
   p.ENC2.POSDH
   p.ENC3.POSDH
   p.ENC4.POSDH
#### revh
<link=REVH>
#### sm0cnt
<link=SM0CNT>
#### SM0VAL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0VAL0
   p.PWM2.SM0VAL0
   p.PWM3.SM0VAL0
   p.PWM4.SM0VAL0
#### sm0val3
<link=SM0VAL3>
#### SM0STS
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0STS
   p.PWM2.SM0STS
   p.PWM3.SM0STS
   p.PWM4.SM0STS
#### SM0CAPTCOMPX
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM0CAPTCOMPX
   p.PWM2.SM0CAPTCOMPX
   p.PWM3.SM0CAPTCOMPX
   p.PWM4.SM0CAPTCOMPX
#### SM1VAL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1VAL0
   p.PWM2.SM1VAL0
   p.PWM3.SM1VAL0
   p.PWM4.SM1VAL0
#### sm1val2
<link=SM1VAL2>
#### sm1cval0cyc
<link=SM1CVAL0CYC>
#### SM1CVAL1CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM1CVAL1CYC
   p.PWM2.SM1CVAL1CYC
   p.PWM3.SM1CVAL1CYC
   p.PWM4.SM1CVAL1CYC
#### sm1cval4
<link=SM1CVAL4>
#### SM2TCTRL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2TCTRL
   p.PWM2.SM2TCTRL
   p.PWM3.SM2TCTRL
   p.PWM4.SM2TCTRL
#### SM2CVAL0
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL0
   p.PWM2.SM2CVAL0
   p.PWM3.SM2CVAL0
   p.PWM4.SM2CVAL0
#### sm2cval1
<link=SM2CVAL1>
#### SM2CVAL5CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM2CVAL5CYC
   p.PWM2.SM2CVAL5CYC
   p.PWM3.SM2CVAL5CYC
   p.PWM4.SM2CVAL5CYC
#### sm3captcompa
<link=SM3CAPTCOMPA>
#### SM3CAPTCOMPX
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CAPTCOMPX
   p.PWM2.SM3CAPTCOMPX
   p.PWM3.SM3CAPTCOMPX
   p.PWM4.SM3CAPTCOMPX
#### SM3CVAL1CYC
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL1CYC
   p.PWM2.SM3CVAL1CYC
   p.PWM3.SM3CVAL1CYC
   p.PWM4.SM3CVAL1CYC
#### sm3cval1cyc
<link=SM3CVAL1CYC>
#### SM3CVAL4
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.SM3CVAL4
   p.PWM2.SM3CVAL4
   p.PWM3.SM3CVAL4
   p.PWM4.SM3CVAL4
#### DTSRCSEL
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.PWM1.DTSRCSEL
   p.PWM2.DTSRCSEL
   p.PWM3.DTSRCSEL
   p.PWM4.DTSRCSEL
#### fsts0
<link=FSTS0>
#### CTR_NONCE1_W3
<link=p.BEE.CTR_NONCE1_W3>
#### SCFGR2
<lang=dft>
多个外设有这个寄存器/ multiple same names:
   p.LPI2C1.SCFGR2
   p.LPI2C2.SCFGR2
   p.LPI2C3.SCFGR2
   p.LPI2C4.SCFGR2
#### cpuid
<link=CPUID>
#### csselr
<link=CSSELR>
#### cm7_ahbpcr
<link=CM7_AHBPCR>
#### nvicispr2
<link=NVICISPR2>
#### NVICISPR3
<link=p.NVIC.NVICISPR3>
#### NVICIABR1
<link=p.NVIC.NVICIABR1>
#### NVICIP2
<link=p.NVIC.NVICIP2>
#### nvicip10
<link=NVICIP10>
#### NVICIP17
<link=p.NVIC.NVICIP17>
#### NVICIP23
<link=p.NVIC.NVICIP23>
#### nvicip29
<link=NVICIP29>
#### nvicip36
<link=NVICIP36>
#### NVICIP39
<link=p.NVIC.NVICIP39>
#### NVICIP41
<link=p.NVIC.NVICIP41>
#### nvicip66
<link=NVICIP66>
#### NVICIP74
<link=p.NVIC.NVICIP74>
#### NVICIP85
<link=p.NVIC.NVICIP85>
#### NVICIP101
<link=p.NVIC.NVICIP101>
#### nvicip108
<link=NVICIP108>
#### NVICIP116
<link=p.NVIC.NVICIP116>
#### NVICIP127
<link=p.NVIC.NVICIP127>
#### nvicip132
<link=NVICIP132>
#### NVICIP138
<link=p.NVIC.NVICIP138>
#### nvicip150
<link=NVICIP150>
