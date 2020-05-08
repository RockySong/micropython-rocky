# 1 "<stdin>"
# 1 "/mnt/hgfs/share/newone/micropython-rocky/ports/nxp_rt1050_60//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 27 "<stdin>"
# 1 "../../py/mpconfig.h" 1
# 62 "../../py/mpconfig.h"
# 1 "./mpconfigport.h" 1
# 30 "./mpconfigport.h"
       







# 1 "./boards/omvrt1/mpconfigboard.h" 1
# 26 "./boards/omvrt1/mpconfigboard.h"
typedef enum _enum_rootPtrs
{
 rootptr_oledfb = 0,
}enum_rootPtrs;
# 39 "./mpconfigport.h" 2
# 185 "./mpconfigport.h"
extern const struct _mp_obj_module_t machine_module;
extern const struct _mp_obj_module_t pyb_module;
extern const struct _mp_obj_module_t ioctl_key;
extern const struct _mp_obj_module_t mcu_module;
extern const struct _mp_obj_module_t mp_module_ubinascii;
extern const struct _mp_obj_module_t mp_module_ure;
extern const struct _mp_obj_module_t mp_module_uzlib;
extern const struct _mp_obj_module_t mp_module_ujson;
extern const struct _mp_obj_module_t mp_module_uheapq;
extern const struct _mp_obj_module_t mp_module_uhashlib;
extern const struct _mp_obj_module_t mp_module_uos;
extern const struct _mp_obj_module_t mp_module_utime;
extern const struct _mp_obj_module_t mp_module_usocket;
extern const struct _mp_obj_module_t mp_module_network;
extern const struct _mp_obj_module_t time_module;
extern const struct _mp_obj_module_t lcd_module;

extern const struct _mp_obj_module_t sensor_module;
extern const struct _mp_obj_module_t image_module;
extern const struct _mp_obj_module_t mjpeg_module;
extern const struct _mp_obj_module_t nn_module;
extern const struct _mp_obj_module_t gif_module;

extern const struct _mp_obj_module_t g_cmm_module;
extern const struct _mp_obj_module_t g_doc_module;
# 377 "./mpconfigport.h"
typedef int mp_int_t;
typedef unsigned int mp_uint_t;
typedef long mp_off_t;
# 392 "./mpconfigport.h"
void enable_irq(mp_uint_t state);
mp_uint_t disable_irq(void);





extern void EventPollHook(void);
# 421 "./mpconfigport.h"
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/alloca.h" 1 3
# 10 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/alloca.h" 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 15 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/_ansi.h" 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/newlib.h" 1 3
# 14 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/newlib.h" 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3
# 15 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/newlib.h" 2 3
# 16 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/config.h" 1 3



# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 5 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/config.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/features.h" 1 3
# 6 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/config.h" 2 3
# 17 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 11 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/alloca.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 1 3
# 13 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/lib/gcc/arm-none-eabi/7.2.1/include/stddef.h" 1 3 4
# 149 "/opt/gcc-arm-none-eabi-7-2017-q4-major/lib/gcc/arm-none-eabi/7.2.1/include/stddef.h" 3 4

# 149 "/opt/gcc-arm-none-eabi-7-2017-q4-major/lib/gcc/arm-none-eabi/7.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 216 "/opt/gcc-arm-none-eabi-7-2017-q4-major/lib/gcc/arm-none-eabi/7.2.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 328 "/opt/gcc-arm-none-eabi-7-2017-q4-major/lib/gcc/arm-none-eabi/7.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 15 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/_types.h" 1 3
# 24 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/_types.h" 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_types.h" 1 3






# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3
# 41 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 8 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/machine/_types.h" 2 3
# 25 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/_types.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/lock.h" 1 3
# 33 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;






extern void __retarget_lock_init(_LOCK_T *lock);

extern void __retarget_lock_init_recursive(_LOCK_T *lock);

extern void __retarget_lock_close(_LOCK_T lock);

extern void __retarget_lock_close_recursive(_LOCK_T lock);

extern void __retarget_lock_acquire(_LOCK_T lock);

extern void __retarget_lock_acquire_recursive(_LOCK_T lock);

extern int __retarget_lock_try_acquire(_LOCK_T lock);

extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);


extern void __retarget_lock_release(_LOCK_T lock);

extern void __retarget_lock_release_recursive(_LOCK_T lock);
# 26 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 88 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 129 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef unsigned int __size_t;
# 145 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef signed int _ssize_t;
# 156 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;


# 1 "/opt/gcc-arm-none-eabi-7-2017-q4-major/lib/gcc/arm-none-eabi/7.2.1/include/stddef.h" 1 3 4
# 357 "/opt/gcc-arm-none-eabi-7-2017-q4-major/lib/gcc/arm-none-eabi/7.2.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 160 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/_types.h" 2 3



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_T _flock_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;


typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;




typedef char * __va_list;
# 16 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 38 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 93 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 117 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 181 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (* _read) (struct _reent *, void *, char *, int)
                                          ;
  int (* _write) (struct _reent *, void *, const char *, int)

                                   ;
  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 287 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 319 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 569 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (* __cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 775 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "/opt/gcc-arm-none-eabi-7-2017-q4-major/arm-none-eabi/include/alloca.h" 2 3
# 422 "./mpconfigport.h" 2
# 63 "../../py/mpconfig.h" 2
# 646 "../../py/mpconfig.h"

# 646 "../../py/mpconfig.h"
typedef float mp_float_t;
# 28 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (2))

Q()
Q(*)
Q(_)
Q(/)

Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)
# 92 "<stdin>"
Q(boot.py)
Q(main.py)

Q(/flash)
Q(/flash/lib)
Q(/sd)
Q(/sd/lib)

Q(MSC+HID)
Q(VCP+MSC)
Q(VCP+HID)
Q(CDC+MSC)
Q(CDC+HID)
Q(/)



Q(CDC)
Q(flash)

Q(AD_B0_13)
Q(AF0_LPI2C4)
Q(AF1_GPT1)
Q(AF1_GPT2)
Q(AF1_PWM1)
Q(AF1_PWM2)
Q(AF1_PWM3)
Q(AF1_PWM4)
Q(AF1_TMR1)
Q(AF1_TMR2)
Q(AF2_LPI2C3)
Q(AF2_LPUART1)
Q(AF2_LPUART4)
Q(AF2_LPUART5)
Q(AF2_LPUART6)
Q(AF2_LPUART8)
Q(AF3_LPSPI1)
Q(AF3_SAI3)
Q(AF4_PWM1)
Q(AF4_TMR2)
Q(AF5_GPIO1)
Q(AF5_GPIO2)
Q(AF5_GPIO3)
Q(AF5_GPIO4)
Q(AF5_GPIO5)
Q(B1_08)
Q(B1_09)
Q(B1_15)
Q(EMC_19)
Q(EMC_20)
Q(EMC_21)
Q(EMC_22)
Q(EMC_27)
Q(EMC_28)
Q(EMC_29)
Q(EMC_30)
Q(EMC_39)
Q(EMC_40)
Q(EMC_41)
Q(KEY)
Q(LED_B)
Q(LED_G)
Q(LED_IR)
Q(LED_R)
Q(P0)
Q(P1)
Q(P10)
Q(P2)
Q(P3)
Q(P4)
Q(P5)
Q(P6)
Q(P7)
Q(P8)
Q(P9)
Q(WAKEUP)
Q(ADC1)
Q(ADC2)
Q(ADC_CAL)
Q(ADC_CFG)
Q(ADC_CV)
Q(ADC_ETC)
Q(ADC_GC)
Q(ADC_GS)
Q(ADC_HC0)
Q(ADC_HC1)
Q(ADC_HC2)
Q(ADC_HC3)
Q(ADC_HC4)
Q(ADC_HC5)
Q(ADC_HC6)
Q(ADC_HC7)
Q(ADC_HS)
Q(ADC_OFS)
Q(ADC_R0)
Q(ADC_R1)
Q(ADC_R2)
Q(ADC_R3)
Q(ADC_R4)
Q(ADC_R5)
Q(ADC_R6)
Q(ADC_R7)
Q(AIPSTZ1)
Q(AIPSTZ2)
Q(AIPSTZ3)
Q(AIPSTZ4)
Q(AOI1)
Q(AOI2)
Q(BEE)
Q(CAN1)
Q(CAN2)
Q(CCM)
Q(CCM_ANALOG)
Q(CMP1)
Q(CMP2)
Q(CMP3)
Q(CMP4)
Q(CSI)
Q(CSU)
Q(DCDC)
Q(DCP)
Q(DMA0)
Q(DMAMUX)
Q(ENC1)
Q(ENC2)
Q(ENC3)
Q(ENC4)
Q(ENET)
Q(EWM)
Q(FLEXIO1)
Q(FLEXIO2)
Q(FLEXRAM)
Q(FLEXSPI)
Q(GPC)
Q(GPIO1)
Q(GPIO2)
Q(GPIO3)
Q(GPIO4)
Q(GPIO5)
Q(GPIO_DR)
Q(GPIO_EDGE_SEL)
Q(GPIO_GDIR)
Q(GPIO_ICR1)
Q(GPIO_ICR2)
Q(GPIO_IMR)
Q(GPIO_ISR)
Q(GPIO_PSR)
Q(GPT1)
Q(GPT2)
Q(IOMUXC)
Q(IOMUXC_GPR)
Q(IOMUXC_SNVS)
Q(IOMUXC_SNVS_GPR)
Q(KPP)
Q(LCDIF)
Q(LPI2C1)
Q(LPI2C2)
Q(LPI2C3)
Q(LPI2C4)
Q(LPI2C_MCCR0)
Q(LPI2C_MCCR1)
Q(LPI2C_MCFGR0)
Q(LPI2C_MCFGR1)
Q(LPI2C_MCFGR2)
Q(LPI2C_MCFGR3)
Q(LPI2C_MCR)
Q(LPI2C_MDER)
Q(LPI2C_MDMR)
Q(LPI2C_MFCR)
Q(LPI2C_MFSR)
Q(LPI2C_MIER)
Q(LPI2C_MRDR)
Q(LPI2C_MSR)
Q(LPI2C_MTDR)
Q(LPI2C_PARAM)
Q(LPI2C_SAMR)
Q(LPI2C_SASR)
Q(LPI2C_SCFGR1)
Q(LPI2C_SCFGR2)
Q(LPI2C_SCR)
Q(LPI2C_SDER)
Q(LPI2C_SIER)
Q(LPI2C_SRDR)
Q(LPI2C_SSR)
Q(LPI2C_STAR)
Q(LPI2C_STDR)
Q(LPI2C_VERID)
Q(LPSPI1)
Q(LPSPI2)
Q(LPSPI3)
Q(LPSPI4)
Q(LPSPI_CCR)
Q(LPSPI_CFGR0)
Q(LPSPI_CFGR1)
Q(LPSPI_CR)
Q(LPSPI_DER)
Q(LPSPI_DMR0)
Q(LPSPI_DMR1)
Q(LPSPI_FCR)
Q(LPSPI_FSR)
Q(LPSPI_IER)
Q(LPSPI_PARAM)
Q(LPSPI_RDR)
Q(LPSPI_RSR)
Q(LPSPI_SR)
Q(LPSPI_TCR)
Q(LPSPI_TDR)
Q(LPSPI_VERID)
Q(LPUART1)
Q(LPUART2)
Q(LPUART3)
Q(LPUART4)
Q(LPUART5)
Q(LPUART6)
Q(LPUART7)
Q(LPUART8)
Q(OCOTP)
Q(PGC)
Q(PIT)
Q(PMU)
Q(PWM1)
Q(PWM2)
Q(PWM3)
Q(PWM4)
Q(PWM_CAPTCOMPA)
Q(PWM_CAPTCOMPB)
Q(PWM_CAPTCOMPX)
Q(PWM_CAPTCTRLA)
Q(PWM_CAPTCTRLB)
Q(PWM_CAPTCTRLX)
Q(PWM_CNT)
Q(PWM_CTRL)
Q(PWM_CTRL2)
Q(PWM_CVAL0)
Q(PWM_CVAL0CYC)
Q(PWM_CVAL1)
Q(PWM_CVAL1CYC)
Q(PWM_CVAL2)
Q(PWM_CVAL2CYC)
Q(PWM_CVAL3)
Q(PWM_CVAL3CYC)
Q(PWM_CVAL4)
Q(PWM_CVAL4CYC)
Q(PWM_CVAL5)
Q(PWM_CVAL5CYC)
Q(PWM_DISMAP0)
Q(PWM_DISMAP1)
Q(PWM_DMAEN)
Q(PWM_DTCNT0)
Q(PWM_DTCNT1)
Q(PWM_DTSRCSEL)
Q(PWM_FCTRL)
Q(PWM_FCTRL2)
Q(PWM_FFILT)
Q(PWM_FRACVAL1)
Q(PWM_FRACVAL2)
Q(PWM_FRACVAL3)
Q(PWM_FRACVAL4)
Q(PWM_FRACVAL5)
Q(PWM_FRCTRL)
Q(PWM_FSTS)
Q(PWM_FTST)
Q(PWM_INIT)
Q(PWM_INTEN)
Q(PWM_MASK)
Q(PWM_MCTRL)
Q(PWM_MCTRL2)
Q(PWM_OCTRL)
Q(PWM_OUTEN)
Q(PWM_STS)
Q(PWM_SWCOUT)
Q(PWM_TCTRL)
Q(PWM_VAL0)
Q(PWM_VAL1)
Q(PWM_VAL2)
Q(PWM_VAL3)
Q(PWM_VAL4)
Q(PWM_VAL5)
Q(PXP)
Q(ROMC)
Q(RTWDOG)
Q(SAI1)
Q(SAI2)
Q(SAI3)
Q(SEMC)
Q(SNVS)
Q(SPDIF)
Q(SRC)
Q(TEMPMON)
Q(TMR1)
Q(TMR2)
Q(TMR3)
Q(TMR4)
Q(TMR_CAPT)
Q(TMR_CMPLD1)
Q(TMR_CMPLD2)
Q(TMR_CNTR)
Q(TMR_COMP1)
Q(TMR_COMP2)
Q(TMR_CSCTRL)
Q(TMR_CTRL)
Q(TMR_DMA)
Q(TMR_ENBL)
Q(TMR_FILT)
Q(TMR_HOLD)
Q(TMR_LOAD)
Q(TMR_SCTRL)
Q(TRNG)
Q(TSC)
Q(USB1)
Q(USB2)
Q(USBNC1)
Q(USBNC2)
Q(USBPHY1)
Q(USBPHY2)
Q(USB_ANALOG)
Q(USDHC1)
Q(USDHC2)
Q(WDOG1)
Q(WDOG2)
Q(XBARA1)
Q(XBARB2)
Q(XBARB3)
Q(XTALOSC24M)
# 428 "<stdin>"
Q(omv)
Q(version_major)
Q(version_minor)
Q(version_patch)
Q(version_string)
Q(arch)
Q(board_type)
Q(board_id)


Q(image)
Q(binary_to_grayscale)
Q(binary_to_rgb)
Q(binary_to_lab)
Q(binary_to_yuv)
Q(grayscale_to_binary)
Q(grayscale_to_rgb)
Q(grayscale_to_lab)
Q(grayscale_to_yuv)
Q(rgb_to_binary)
Q(rgb_to_grayscale)
Q(rgb_to_lab)
Q(rgb_to_yuv)
Q(lab_to_binary)
Q(lab_to_grayscale)
Q(lab_to_rgb)
Q(lab_to_yuv)
Q(yuv_to_binary)
Q(yuv_to_grayscale)
Q(yuv_to_rgb)
Q(yuv_to_lab)
Q(HaarCascade)
Q(search)
Q(SEARCH_EX)
Q(SEARCH_DS)
Q(EDGE_CANNY)
Q(EDGE_SIMPLE)
Q(CORNER_FAST)
Q(CORNER_AGAST)
Q(load_descriptor)
Q(save_descriptor)
Q(match_descriptor)


Q(find_template)
Q(kp_desc)
Q(lbp_desc)
Q(Cascade)
Q(cmp_lbp)
Q(find_features)
Q(find_keypoints)
Q(find_lbp)
Q(find_eye)
Q(find_edges)
Q(find_hog)
Q(normalized)
Q(filter_outliers)
Q(scale_factor)
Q(max_keypoints)
Q(corner_detector)
Q(kptmatch)
Q(selective_search)
Q(a1)
Q(a2)
Q(a3)


Q(lcd)
Q(type)
Q(set_backlight)
Q(get_backlight)
Q(display)
Q(clear)


Q(tv)
Q(channel)
Q(type)
Q(display)
Q(palettes)


Q(gif)
Q(Gif)
Q(open)
Q(add_frame)
Q(loop)


Q(mjpeg)
Q(Mjpeg)


Q(led)
Q(RED)
Q(GREEN)
Q(BLUE)
Q(IR)
Q(on)
Q(off)
Q(toggle)


Q(time)
Q(ticks)
Q(sleep)
Q(clock)
Q(Clock)


Q(tick)
Q(fps)
Q(avg)


Q(sensor)
Q(BINARY)
Q(GRAYSCALE)
Q(RGB565)
Q(YUV422)
Q(BAYER)
Q(JPEG)
Q(OV9650)
Q(OV2640)
Q(OV7725)
Q(MT9V034)
Q(LEPTON)
Q(value)
Q(shutdown)


Q(load)


Q(Net)


Q(forward)
Q(dry_run)
Q(softmax)





Q(min_scale)
Q(scale_mul)
Q(x_overlap)
Q(y_overlap)
Q(contrast_threshold)


Q(nn_class)
# 589 "<stdin>"
Q(QQCIF)
Q(QCIF)
Q(CIF)
Q(QQSIF)
Q(QSIF)
Q(SIF)

Q(QQQQVGA)
Q(QQQVGA)
Q(QQVGA)
Q(QVGA)
Q(VGA)
Q(HQQQVGA)
Q(HQQVGA)
Q(HQVGA)

Q(B64X32)
Q(B64X64)
Q(B128X64)
Q(B128X128)

Q(LCD)
Q(QQVGA2)
Q(WVGA)
Q(WVGA2)
Q(SVGA)
Q(XGA)
Q(SXGA)
Q(UXGA)
Q(HD)
Q(FHD)
Q(QHD)
Q(QXGA)
Q(WQXGA)
Q(WQXGA2)


Q(NORMAL)
Q(NEGATIVE)


Q(IOCTL_SET_TRIGGERED_MODE)
Q(IOCTL_GET_TRIGGERED_MODE)
Q(IOCTL_LEPTON_GET_WIDTH)
Q(IOCTL_LEPTON_GET_HEIGHT)
Q(IOCTL_LEPTON_GET_RADIOMETRY)
Q(IOCTL_LEPTON_GET_REFRESH)
Q(IOCTL_LEPTON_GET_RESOLUTION)
Q(IOCTL_LEPTON_RUN_COMMAND)
Q(IOCTL_LEPTON_SET_ATTRIBUTE)
Q(IOCTL_LEPTON_GET_ATTRIBUTE)
Q(IOCTL_LEPTON_GET_FPA_TEMPERATURE)
Q(IOCTL_LEPTON_GET_AUX_TEMPERATURE)
Q(IOCTL_LEPTON_SET_MEASUREMENT_MODE)
Q(IOCTL_LEPTON_GET_MEASUREMENT_MODE)
Q(IOCTL_LEPTON_SET_MEASUREMENT_RANGE)
Q(IOCTL_LEPTON_GET_MEASUREMENT_RANGE)


Q(PALETTE_RAINBOW)
Q(PALETTE_IRONBOW)

Q(reset)
Q(flush)
Q(snapshot)
Q(skip_frames)
Q(get_fb)
Q(get_id)
Q(alloc_extra_fb)
Q(dealloc_extra_fb)
Q(set_pixformat)
Q(set_framerate)
Q(set_framesize)
Q(set_vsync_output)
Q(set_binning)
Q(set_windowing)
Q(set_gainceiling)
Q(set_contrast)
Q(set_brightness)
Q(set_saturation)
Q(set_quality)
Q(set_colorbar)
Q(set_auto_gain)
Q(gain_db)
Q(gain_db_ceiling)
Q(get_gain_db)
Q(set_auto_exposure)
Q(exposure_us)
Q(get_exposure_us)
Q(set_auto_whitebal)
Q(rgb_gain_db)
Q(get_rgb_gain_db)
Q(set_hmirror)
Q(set_vflip)
Q(set_special_effect)
Q(set_lens_correction)
Q(ioctl)
Q(set_color_palette)
Q(get_color_palette)
Q(__write_reg)
Q(__read_reg)


Q(P1)
Q(P2)
Q(P3)
Q(P4)
Q(P5)
Q(P6)
Q(PA1)
Q(PA2)
Q(PA3)
Q(PA4)
Q(PA5)
Q(PA6)
Q(PA7)
Q(PA8)
Q(PB1)
Q(PB2)
Q(PB3)
Q(PB4)
Q(IN)
Q(OUT)
Q(gpio)
Q(GPIO)
Q(low)
Q(high)


Q(spi)
Q(read)
Q(write)
Q(write_image)


Q(uart)


Q(file)
Q(close)


Q(wlan)
Q(WEP)
Q(WPA)
Q(WPA2)
Q(init)
Q(connect)
Q(connected)
Q(ifconfig)
Q(patch_version)
Q(patch_program)
Q(socket)
Q(send)
Q(recv)
Q(bind)
Q(listen)
Q(accept)
Q(settimeout)
Q(setblocking)
Q(select)
Q(AF_INET)
Q(AF_INET6)
Q(SOCK_STREAM)
Q(SOCK_DGRAM)
Q(SOCK_RAW)
Q(IPPROTO_IP)
Q(IPPROTO_ICMP)
Q(IPPROTO_IPV4)
Q(IPPROTO_TCP)
Q(IPPROTO_UDP)
Q(IPPROTO_IPV6)
Q(IPPROTO_RAW)


Q(WINC)
Q(connect)
Q(start_ap)
Q(disconnect)
Q(isconnected)
Q(connected_sta)
Q(wait_for_sta)
Q(ifconfig)
Q(netinfo)
Q(fw_version)
Q(fw_dump)
Q(fw_update)
Q(scan)
Q(rssi)
Q(OPEN)
Q(WEP)
Q(WPA_PSK)
Q(802_1X)
Q(MODE_STA)
Q(MODE_AP)
Q(MODE_P2P)
Q(MODE_BSP)
Q(MODE_FIRMWARE)
Q(ssid)
Q(key)
Q(security)
Q(bssid)


Q(cpufreq)
Q(set_frequency)
Q(get_current_frequencies)
Q(get_supported_frequencies)


Q(Image)
Q(copy_to_fb)


Q(width)


Q(height)


Q(format)


Q(size)


Q(get_pixel)
Q(rgbtuple)


Q(set_pixel)
Q(color)


Q(mean_pool)


Q(mean_pooled)


Q(midpoint_pool)
Q(bias)


Q(midpoint_pooled)



Q(to_bitmap)
Q(copy)
Q(rgb_channel)


Q(to_grayscale)




Q(to_rgb565)




Q(to_rainbow)


Q(color_palette)


Q(compress)
Q(quality)


Q(compress_for_ide)



Q(compressed)



Q(compressed_for_ide)



Q(jpeg_encode_for_ide)


Q(jpeg_encoded_for_ide)



Q(crop)
Q(scale)
Q(roi)
Q(x_scale)
Q(y_scale)



Q(save)


Q(clear)
Q(mask)


Q(draw_line)

Q(thickness)


Q(draw_rectangle)


Q(fill)


Q(draw_circle)





Q(draw_ellipse)





Q(draw_string)


Q(x_spacing)
Q(y_spacing)
Q(mono_space)
Q(char_rotation)
Q(char_hmirror)
Q(char_vflip)
Q(string_rotation)
Q(string_hmirror)
Q(string_vflip)


Q(draw_cross)





Q(draw_arrow)





Q(draw_edges)






Q(draw_image)


Q(alpha)



Q(draw_keypoints)






Q(flood_fill)
Q(seed_threshold)
Q(floating_threshold)

Q(invert)
Q(clear_background)



Q(mask_rectangle)


Q(mask_circle)


Q(mask_ellipse)


Q(binary)

Q(zero)
# 995 "<stdin>"
Q(and)
Q(b_and)



Q(nand)
Q(b_nand)



Q(or)
Q(b_or)



Q(nor)
Q(b_nor)



Q(xor)
Q(b_xor)



Q(xnor)
Q(b_xnor)



Q(erode)




Q(dilate)
Q(threshold)
# 1045 "<stdin>"
Q(top_hat)




Q(black_hat)




Q(gamma_corr)
Q(gamma)
Q(contrast)
Q(brightness)


Q(negate)


Q(assign)
Q(replace)
Q(set)
Q(hmirror)
Q(vflip)
Q(transpose)



Q(add)



Q(sub)
Q(reverse)



Q(mul)




Q(div)

Q(mod)
# 1101 "<stdin>"
Q(difference)



Q(blend)




Q(histeq)
Q(adaptive)
Q(clip_limit)



Q(mean)

Q(offset)




Q(median)
Q(percentile)






Q(mode)






Q(midpoint)







Q(morph)
# 1155 "<stdin>"
Q(blur)
Q(gaussian)
Q(gaussian_blur)
Q(unsharp)
# 1167 "<stdin>"
Q(laplacian)
Q(sharpen)
# 1177 "<stdin>"
Q(bilateral)
Q(color_sigma)
Q(space_sigma)






Q(cartoon)


Q(mask)


Q(remove_shadows)


Q(chrominvar)


Q(illuminvar)


Q(linpolar)



Q(logpolar)



Q(lens_corr)
Q(strength)
Q(zoom)


Q(rotation_corr)
Q(x_rotation)
Q(y_rotation)
Q(z_rotation)
Q(x_translation)
Q(y_translation)



Q(get_similarity)

Q(similarity)

Q(stdev)




Q(get_hist)
Q(get_histogram)

Q(bins)
Q(l_bins)
Q(a_bins)
Q(b_bins)
Q(thresholds)


Q(histogram)




Q(get_percentile)
Q(get_threshold)
Q(get_stats)
Q(get_statistics)
Q(statistics)


Q(value)
Q(l_value)
Q(a_value)
Q(b_value)
# 1283 "<stdin>"
Q(lq)
Q(uq)
Q(l_mean)
Q(l_median)
Q(l_mode)
Q(l_stdev)
Q(l_min)
Q(l_max)
Q(l_lq)
Q(l_uq)
Q(a_mean)
Q(a_median)
Q(a_mode)
Q(a_stdev)
Q(a_min)
Q(a_max)
Q(a_lq)
Q(a_uq)
Q(b_mean)
Q(b_median)
Q(b_mode)
Q(b_stdev)
Q(b_min)
Q(b_max)
Q(b_lq)
Q(b_uq)


Q(get_regression)

Q(x_stride)
Q(y_stride)

Q(area_threshold)
Q(pixels_threshold)
Q(robust)

Q(line)

Q(x1)
Q(y1)
Q(x2)
Q(y2)
Q(length)
Q(magnitude)
Q(theta)
Q(rho)


Q(find_blobs)






Q(merge)
Q(margin)
Q(threshold_cb)
Q(merge_cb)
Q(x_hist_bins_max)
Q(y_hist_bins_max)

Q(blob)
Q(corners)
Q(min_corners)
Q(rect)
Q(x)
Q(y)
Q(w)
Q(h)
Q(pixels)
Q(cx)
Q(cxf)
Q(cy)
Q(cyf)
Q(rotation)
Q(rotation_deg)
Q(rotation_rad)
Q(code)
Q(count)
Q(perimeter)
Q(roundness)
Q(elongation)
Q(area)
Q(density)
Q(extent)
Q(compactness)
Q(solidity)
Q(convexity)
Q(x_hist_bins)
Q(y_hist_bins)
Q(major_axis_line)
Q(minor_axis_line)
Q(enclosing_circle)
Q(enclosed_ellipse)


Q(find_lines)




Q(theta_margin)
Q(rho_margin)


Q(find_line_segments)

Q(merge_distance)
Q(max_theta_diff)


Q(find_circles)




Q(x_margin)
Q(y_margin)
Q(r_margin)
Q(r_min)
Q(r_max)
Q(r_step)

Q(circle)



Q(r)



Q(find_rects)
# 1430 "<stdin>"
Q(find_qrcodes)


Q(qrcode)






Q(payload)
Q(version)
Q(ecc_level)
Q(mask)
Q(data_type)
Q(eci)
Q(is_numeric)
Q(is_alphanumeric)
Q(is_binary)
Q(is_kanji)


Q(find_apriltags)

Q(families)
Q(fx)
Q(fy)



Q(apriltag)






Q(id)
Q(family)
Q(hamming)



Q(goodness)
Q(decision_margin)


Q(z_translation)



Q(TAG16H5)
Q(TAG25H7)
Q(TAG25H9)
Q(TAG36H10)
Q(TAG36H11)
Q(ARTOOLKIT)


Q(find_datamatrices)

Q(effort)

Q(datamatrix)
# 1502 "<stdin>"
Q(rows)
Q(columns)
Q(capacity)
Q(padding)


Q(find_barcodes)


Q(barcode)
# 1522 "<stdin>"
Q(EAN2)
Q(EAN5)
Q(EAN8)
Q(UPCE)
Q(ISBN10)
Q(UPCA)
Q(EAN13)
Q(ISBN13)
Q(I25)
Q(DATABAR)
Q(DATABAR_EXP)
Q(CODABAR)
Q(CODE39)
Q(PDF417)
Q(CODE93)
Q(CODE128)


Q(find_displacement)

Q(template_roi)

Q(fix_rotation_scale)
Q(displacement)




Q(response)


Q(ImageWriter)

Q(imagewriter)





Q(ImageReader)

Q(imagereader)

Q(next_frame)





Q(fir)

Q(FIR_NONE)
Q(FIR_SHIELD)
Q(FIR_MLX90620)
Q(FIR_MLX90621)
Q(FIR_MLX90640)
Q(FIR_AMG8833)
Q(refresh)
Q(resolution)




Q(read_ta)
Q(read_ir)
Q(draw_ta)


Q(draw_ir)





Q(pixformat)



Q(tf)

Q(load_to_fb)
Q(free_from_fb)
Q(classify)
Q(segment)


Q(tf_model)



Q(channels)
# 1623 "<stdin>"
Q(tf_classification)




Q(output)




Q(802_1X)

Q(ADC)

Q(ADC)

Q(ADC1)

Q(ADC2)

Q(ADCAll)

Q(ADCAll)

Q(ADC_CAL)

Q(ADC_CFG)

Q(ADC_CV)

Q(ADC_ETC)

Q(ADC_GC)

Q(ADC_GS)

Q(ADC_HC0)

Q(ADC_HC1)

Q(ADC_HC2)

Q(ADC_HC3)

Q(ADC_HC4)

Q(ADC_HC5)

Q(ADC_HC6)

Q(ADC_HC7)

Q(ADC_HS)

Q(ADC_OFS)

Q(ADC_R0)

Q(ADC_R1)

Q(ADC_R2)

Q(ADC_R3)

Q(ADC_R4)

Q(ADC_R5)

Q(ADC_R6)

Q(ADC_R7)

Q(AF_INET)

Q(AF_INET6)

Q(AIPSTZ1)

Q(AIPSTZ2)

Q(AIPSTZ3)

Q(AIPSTZ4)

Q(ANALOG)

Q(AOI1)

Q(AOI2)

Q(ARRAY)

Q(ARTOOLKIT)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(B128X128)

Q(B128X64)

Q(B64X32)

Q(B64X64)

Q(BAYER)

Q(BEE)

Q(BFINT16)

Q(BFINT32)

Q(BFINT8)

Q(BFUINT16)

Q(BFUINT32)

Q(BFUINT8)

Q(BF_LEN)

Q(BF_POS)

Q(BIG_ENDIAN)

Q(BINARY)

Q(BLACK)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(BytesIO)

Q(BytesIO)

Q(CAN1)

Q(CAN2)

Q(CCM)

Q(CCM_ANALOG)

Q(CIF)

Q(CMP1)

Q(CMP2)

Q(CMP3)

Q(CMP4)

Q(CODABAR)

Q(CODE128)

Q(CODE39)

Q(CODE93)

Q(CORNER_AGAST)

Q(CORNER_FAST)

Q(CSI)

Q(CSU)

Q(Cascade)

Q(Clock)

Q(DATABAR)

Q(DATABAR_EXP)

Q(DCDC)

Q(DCMC)

Q(DCMC)

Q(DCP)

Q(DEEPSLEEP_RESETABC)

Q(DEINIT)

Q(DMA0)

Q(DMAMUX)

Q(DecompIO)

Q(DecompIO)

Q(EACCES)

Q(EACCES)

Q(EADDRINUSE)

Q(EADDRINUSE)

Q(EAGAIN)

Q(EAGAIN)

Q(EALREADY)

Q(EALREADY)

Q(EAN13)

Q(EAN2)

Q(EAN5)

Q(EAN8)

Q(EBADF)

Q(EBADF)

Q(ECONNABORTED)

Q(ECONNABORTED)

Q(ECONNREFUSED)

Q(ECONNREFUSED)

Q(ECONNRESET)

Q(ECONNRESET)

Q(EDGE_CANNY)

Q(EDGE_SIMPLE)

Q(EEXIST)

Q(EEXIST)

Q(EHOSTUNREACH)

Q(EHOSTUNREACH)

Q(EINPROGRESS)

Q(EINPROGRESS)

Q(EINVAL)

Q(EINVAL)

Q(EIO)

Q(EIO)

Q(EISDIR)

Q(EISDIR)

Q(ENC1)

Q(ENC2)

Q(ENC3)

Q(ENC4)

Q(ENET)

Q(ENOBUFS)

Q(ENOBUFS)

Q(ENODEV)

Q(ENODEV)

Q(ENOENT)

Q(ENOENT)

Q(ENOMEM)

Q(ENOMEM)

Q(ENOTCONN)

Q(ENOTCONN)

Q(EOFError)

Q(EOFError)

Q(EOPNOTSUPP)

Q(EOPNOTSUPP)

Q(EPERM)

Q(EPERM)

Q(ETIMEDOUT)

Q(ETIMEDOUT)

Q(EWM)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(FHD)

Q(FLEXIO1)

Q(FLEXIO2)

Q(FLEXRAM)

Q(FLEXSPI)

Q(FLOAT32)

Q(FLOAT64)

Q(FONT5x7)

Q(FONT6x13)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(Flash)

Q(Flash)

Q(GPC)

Q(GPIO1)

Q(GPIO2)

Q(GPIO3)

Q(GPIO4)

Q(GPIO5)

Q(GPIO_DR)

Q(GPIO_EDGE_SEL)

Q(GPIO_GDIR)

Q(GPIO_ICR1)

Q(GPIO_ICR2)

Q(GPIO_IMR)

Q(GPIO_ISR)

Q(GPIO_PSR)

Q(GPT1)

Q(GPT2)

Q(GRAYSCALE)

Q(GeneratorExit)

Q(GeneratorExit)

Q(Gif)

Q(Gif)

Q(HARD_RESET)

Q(HD)

Q(HID)

Q(HIZ)

Q(HQQQVGA)

Q(HQQVGA)

Q(HQVGA)

Q(HYS)

Q(HaarCascade)

Q(I25)

Q(I2C)

Q(I2C)

Q(I2C)

Q(IN)

Q(INIT)

Q(INT)

Q(INT16)

Q(INT32)

Q(INT64)

Q(INT8)

Q(IN_PDN)

Q(IN_PUP)

Q(IN_PUP_WEAK)

Q(IOCTL_GET_TRIGGERED_MODE)

Q(IOCTL_LEPTON_GET_ATTRIBUTE)

Q(IOCTL_LEPTON_GET_AUX_TEMPERATURE)

Q(IOCTL_LEPTON_GET_FPA_TEMPERATURE)

Q(IOCTL_LEPTON_GET_HEIGHT)

Q(IOCTL_LEPTON_GET_MEASUREMENT_MODE)

Q(IOCTL_LEPTON_GET_MEASUREMENT_RANGE)

Q(IOCTL_LEPTON_GET_RADIOMETRY)

Q(IOCTL_LEPTON_GET_REFRESH)

Q(IOCTL_LEPTON_GET_RESOLUTION)

Q(IOCTL_LEPTON_GET_WIDTH)

Q(IOCTL_LEPTON_RUN_COMMAND)

Q(IOCTL_LEPTON_SET_ATTRIBUTE)

Q(IOCTL_LEPTON_SET_MEASUREMENT_MODE)

Q(IOCTL_LEPTON_SET_MEASUREMENT_RANGE)

Q(IOCTL_SET_TRIGGERED_MODE)

Q(IOMUXC)

Q(IOMUXC_GPR)

Q(IOMUXC_SNVS)

Q(IOMUXC_SNVS_GPR)

Q(ISBN10)

Q(ISBN13)

Q(Image)

Q(Image)

Q(ImageReader)

Q(ImageWriter)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(JPEG)

Q(KPP)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LCD)

Q(LCDIF)

Q(LED)

Q(LED)

Q(LEPTON)

Q(LITTLE_ENDIAN)

Q(LONG)

Q(LONGLONG)

Q(LPI2C1)

Q(LPI2C2)

Q(LPI2C3)

Q(LPI2C4)

Q(LPI2C_MCCR0)

Q(LPI2C_MCCR1)

Q(LPI2C_MCFGR0)

Q(LPI2C_MCFGR1)

Q(LPI2C_MCFGR2)

Q(LPI2C_MCFGR3)

Q(LPI2C_MCR)

Q(LPI2C_MDER)

Q(LPI2C_MDMR)

Q(LPI2C_MFCR)

Q(LPI2C_MFSR)

Q(LPI2C_MIER)

Q(LPI2C_MRDR)

Q(LPI2C_MSR)

Q(LPI2C_MTDR)

Q(LPI2C_PARAM)

Q(LPI2C_SAMR)

Q(LPI2C_SASR)

Q(LPI2C_SCFGR1)

Q(LPI2C_SCFGR2)

Q(LPI2C_SCR)

Q(LPI2C_SDER)

Q(LPI2C_SIER)

Q(LPI2C_SRDR)

Q(LPI2C_SSR)

Q(LPI2C_STAR)

Q(LPI2C_STDR)

Q(LPI2C_VERID)

Q(LPSPI1)

Q(LPSPI2)

Q(LPSPI3)

Q(LPSPI4)

Q(LPSPI_CCR)

Q(LPSPI_CFGR0)

Q(LPSPI_CFGR1)

Q(LPSPI_CR)

Q(LPSPI_DER)

Q(LPSPI_DMR0)

Q(LPSPI_DMR1)

Q(LPSPI_FCR)

Q(LPSPI_FSR)

Q(LPSPI_IER)

Q(LPSPI_PARAM)

Q(LPSPI_RDR)

Q(LPSPI_RSR)

Q(LPSPI_SR)

Q(LPSPI_TCR)

Q(LPSPI_TDR)

Q(LPSPI_VERID)

Q(LPUART1)

Q(LPUART2)

Q(LPUART3)

Q(LPUART4)

Q(LPUART5)

Q(LPUART6)

Q(LPUART7)

Q(LPUART8)

Q(LSB)

Q(LSB)

Q(LookupError)

Q(LookupError)

Q(MASTER)

Q(MASTER)

Q(MODE_AP)

Q(MODE_BSP)

Q(MODE_FIRMWARE)

Q(MODE_P2P)

Q(MODE_STA)

Q(MSB)

Q(MSB)

Q(MSC)

Q(MSC_plus_HID)

Q(MT9V034)

Q(MemoryError)

Q(MemoryError)

Q(Mjpeg)

Q(Mjpeg)

Q(NATIVE)

Q(NEGATIVE)

Q(NORMAL)

Q(NameError)

Q(NameError)

Q(Net)

Q(None)

Q(NoneType)

Q(NotImplementedError)

Q(NotImplementedError)

Q(OCOTP)

Q(OD_PUP)

Q(OPEN)

Q(OPEN_DRAIN)

Q(OSError)

Q(OSError)

Q(OUT)

Q(OUT_WEAK)

Q(OV2640)

Q(OV7725)

Q(OV9650)

Q(OrderedDict)

Q(OrderedDict)

Q(OrderedDict)

Q(OverflowError)

Q(OverflowError)

Q(PALETTE_IRONBOW)

Q(PALETTE_RAINBOW)

Q(PDF417)

Q(PGC)

Q(PIT)

Q(PMU)

Q(POLLERR)

Q(POLLHUP)

Q(POLLIN)

Q(POLLOUT)

Q(PTR)

Q(PWM)

Q(PWM)

Q(PWM1)

Q(PWM2)

Q(PWM3)

Q(PWM4)

Q(PWM_CAPTCOMPA)

Q(PWM_CAPTCOMPB)

Q(PWM_CAPTCOMPX)

Q(PWM_CAPTCTRLA)

Q(PWM_CAPTCTRLB)

Q(PWM_CAPTCTRLX)

Q(PWM_CNT)

Q(PWM_CTRL)

Q(PWM_CTRL2)

Q(PWM_CVAL0)

Q(PWM_CVAL0CYC)

Q(PWM_CVAL1)

Q(PWM_CVAL1CYC)

Q(PWM_CVAL2)

Q(PWM_CVAL2CYC)

Q(PWM_CVAL3)

Q(PWM_CVAL3CYC)

Q(PWM_CVAL4)

Q(PWM_CVAL4CYC)

Q(PWM_CVAL5)

Q(PWM_CVAL5CYC)

Q(PWM_DISMAP0)

Q(PWM_DISMAP1)

Q(PWM_DMAEN)

Q(PWM_DTCNT0)

Q(PWM_DTCNT1)

Q(PWM_DTSRCSEL)

Q(PWM_FCTRL)

Q(PWM_FCTRL2)

Q(PWM_FFILT)

Q(PWM_FRACVAL1)

Q(PWM_FRACVAL2)

Q(PWM_FRACVAL3)

Q(PWM_FRACVAL4)

Q(PWM_FRACVAL5)

Q(PWM_FRCTRL)

Q(PWM_FSTS)

Q(PWM_FTST)

Q(PWM_INIT)

Q(PWM_INTEN)

Q(PWM_MASK)

Q(PWM_MCTRL)

Q(PWM_MCTRL2)

Q(PWM_OCTRL)

Q(PWM_OUTEN)

Q(PWM_STS)

Q(PWM_SWCOUT)

Q(PWM_TCTRL)

Q(PWM_VAL0)

Q(PWM_VAL1)

Q(PWM_VAL2)

Q(PWM_VAL3)

Q(PWM_VAL4)

Q(PWM_VAL5)

Q(PWRON_RESET)

Q(PXP)

Q(Pin)

Q(Pin)

Q(Pin)

Q(PinAF)

Q(PinBase)

Q(QCIF)

Q(QHD)

Q(QQCIF)

Q(QQQQVGA)

Q(QQQVGA)

Q(QQSIF)

Q(QQVGA)

Q(QQVGA2)

Q(QSIF)

Q(QTIMER)

Q(QTIMER)

Q(QVGA)

Q(QXGA)

Q(RGB565)

Q(ROMC)

Q(RPM)

Q(RPM)

Q(RTWDOG)

Q(RuntimeError)

Q(RuntimeError)

Q(SAI1)

Q(SAI2)

Q(SAI3)

Q(SD)

Q(SDCard)

Q(SDCard)

Q(SEARCH_DS)

Q(SEARCH_EX)

Q(SEC_COUNT)

Q(SEC_SIZE)

Q(SEMC)

Q(SHORT)

Q(SIF)

Q(SLAVE)

Q(SLAVE)

Q(SLEW_FAST)

Q(SNVS)

Q(SOCK_DGRAM)

Q(SOCK_RAW)

Q(SOCK_STREAM)

Q(SOFT_RESET)

Q(SPDIF)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SRC)

Q(SRPM)

Q(SRPM)

Q(SVGA)

Q(SWIM)

Q(SXGA)

Q(SYNC)

Q(Servo)

Q(Servo)

Q(Signal)

Q(Signal)

Q(SoftSPI)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(StringIO)

Q(StringIO)

Q(Switch)

Q(Switch)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(TAG16H5)

Q(TAG25H7)

Q(TAG25H9)

Q(TAG36H10)

Q(TAG36H11)

Q(TEMPMON)

Q(TMR)

Q(TMR)

Q(TMR1)

Q(TMR2)

Q(TMR3)

Q(TMR4)

Q(TMR_CAPT)

Q(TMR_CMPLD1)

Q(TMR_CMPLD2)

Q(TMR_CNTR)

Q(TMR_COMP1)

Q(TMR_COMP2)

Q(TMR_CSCTRL)

Q(TMR_CTRL)

Q(TMR_DMA)

Q(TMR_ENBL)

Q(TMR_FILT)

Q(TMR_HOLD)

Q(TMR_LOAD)

Q(TMR_SCTRL)

Q(TRNG)

Q(TSC)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(TypeError)

Q(TypeError)

Q(UART)

Q(UART)

Q(UART)

Q(UINT)

Q(UINT16)

Q(UINT32)

Q(UINT64)

Q(UINT8)

Q(ULONG)

Q(ULONGLONG)

Q(UPCA)

Q(UPCE)

Q(USB1)

Q(USB2)

Q(USBNC1)

Q(USBNC2)

Q(USBPHY1)

Q(USBPHY2)

Q(USB_ANALOG)

Q(USB_HID)

Q(USB_VCP)

Q(USB_VCP)

Q(USDHC1)

Q(USDHC2)

Q(USHORT)

Q(UXGA)

Q(UnicodeError)

Q(UnicodeError)

Q(VCP)

Q(VCP_plus_HID)

Q(VCP_plus_MSC)

Q(VGA)

Q(VOID)

Q(ValueError)

Q(ValueError)

Q(VfsFat)

Q(VfsFat)

Q(ViperTypeError)

Q(ViperTypeError)

Q(WDOG1)

Q(WDOG2)

Q(WDT_RESET)

Q(WEP)

Q(WHITE)

Q(WINC)

Q(WINC)

Q(WPA_PSK)

Q(WQXGA)

Q(WQXGA2)

Q(WVGA)

Q(WVGA2)

Q(XBARA1)

Q(XBARB2)

Q(XBARB3)

Q(XGA)

Q(XTALOSC24M)

Q(YUV422)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0x0a_)

Q(__abs__)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__and__)

Q(__anext__)

Q(__bases__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__call__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__contains__)

Q(__contains__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__delitem__)

Q(__delitem__)

Q(__dict__)

Q(__dir__)

Q(__divmod__)

Q(__doc__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__floordiv__)

Q(__ge__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__invert__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lshift__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__matmul__)

Q(__mod__)

Q(__module__)

Q(__mul__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__neg__)

Q(__new__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__or__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__pos__)

Q(__pow__)

Q(__qualname__)

Q(__read_reg)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__rshift__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(__truediv__)

Q(__write_reg)

Q(__xor__)

Q(_brace_open__colon__hash_b_brace_close_)

Q(_lt_dictcomp_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_lambda_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_module_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_stdin_gt_)

Q(_lt_string_gt_)

Q(_percent__hash_o)

Q(_percent__hash_x)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_flash)

Q(_slash_flash_slash_lib)

Q(_slash_sd)

Q(_slash_sd_slash_lib)

Q(_space_)

Q(_star_)

Q(_star_)

Q(_star_)

Q(a1)

Q(a1)

Q(a1)

Q(a2b_base64)

Q(a_bins)

Q(a_bins)

Q(a_bins)

Q(a_lq)

Q(a_max)

Q(a_mean)

Q(a_median)

Q(a_min)

Q(a_mode)

Q(a_stdev)

Q(a_uq)

Q(a_value)

Q(a_value)

Q(abs)

Q(accept)

Q(acos)

Q(acosh)

Q(adaptive)

Q(add)

Q(add)

Q(add)

Q(add)

Q(add)

Q(add)

Q(add)

Q(add_frame)

Q(add_frame)

Q(add_frame)

Q(addr)

Q(addr)

Q(addr)

Q(addr)

Q(addr)

Q(addr_size)

Q(addressof)

Q(addrsize)

Q(af)

Q(af_list)

Q(align)

Q(all)

Q(alloc_emergency_exception_buf)

Q(alloc_extra_fb)

Q(alpha)

Q(alpha)

Q(alt)

Q(and)

Q(and_)

Q(angle)

Q(angle)

Q(any)

Q(any)

Q(any)

Q(append)

Q(append)

Q(apriltag)

Q(arch)

Q(area)

Q(area_threshold)

Q(area_threshold)

Q(arg)

Q(args)

Q(argv)

Q(array)

Q(array)

Q(asin)

Q(asinh)

Q(asm_thumb)

Q(asr)

Q(assign)

Q(atan)

Q(atan2)

Q(atanh)

Q(avg)

Q(b)

Q(b2a_base64)

Q(b_and)

Q(b_bins)

Q(b_bins)

Q(b_bins)

Q(b_lq)

Q(b_max)

Q(b_mean)

Q(b_median)

Q(b_min)

Q(b_mode)

Q(b_nand)

Q(b_nor)

Q(b_or)

Q(b_stdev)

Q(b_uq)

Q(b_value)

Q(b_value)

Q(b_xnor)

Q(b_xor)

Q(barcode)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(bias)

Q(bias)

Q(bias)

Q(bilateral)

Q(bin)

Q(binary)

Q(binary_to_grayscale)

Q(binary_to_lab)

Q(binary_to_rgb)

Q(binary_to_yuv)

Q(bind)

Q(bins)

Q(bins)

Q(bins)

Q(bins)

Q(bins)

Q(bins)

Q(bins)

Q(bins)

Q(bins)

Q(bins)

Q(bins)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bkcolor)

Q(bl)

Q(black_hat)

Q(blend)

Q(blob)

Q(blur)

Q(board)

Q(board)

Q(board_id)

Q(board_type)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bootloader)

Q(bootloader)

Q(border_width)

Q(bound_method)

Q(brightness)

Q(buffer)

Q(buffering)

Q(builtins)

Q(builtins)

Q(bx)

Q(bytearray)

Q(bytearray)

Q(bytearray_at)

Q(bytecode)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes_at)

Q(calcsize)

Q(calibration)

Q(callable)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(callback)

Q(capacity)

Q(cartoon)

Q(ceil)

Q(center)

Q(center)

Q(channel)

Q(char_hmirror)

Q(char_rotation)

Q(char_vflip)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(choice)

Q(chr)

Q(chrominvar)

Q(circle)

Q(circle)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(clear)

Q(clear)

Q(clear_background)

Q(clear_fb)

Q(clear_screen)

Q(clip_limit)

Q(clock)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(closure)

Q(closure)

Q(clz)

Q(cmath)

Q(cmath)

Q(cmm)

Q(cmp)

Q(code)

Q(code)

Q(collect)

Q(color)

Q(color)

Q(color_palette)

Q(color_sigma)

Q(columns)

Q(compactness)

Q(compile)

Q(compile)

Q(complex)

Q(complex)

Q(compress)

Q(compress_for_ide)

Q(compressed)

Q(compressed_for_ide)

Q(connect)

Q(connect)

Q(connected_sta)

Q(const)

Q(const)

Q(contrast)

Q(contrast_threshold)

Q(convexity)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy_to_fb)

Q(copy_to_fb)

Q(copy_to_fb)

Q(copysign)

Q(corner_detector)

Q(corners)

Q(corners)

Q(corners)

Q(corners)

Q(corners)

Q(corners)

Q(cos)

Q(cos)

Q(cosh)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(cpsid)

Q(cpsie)

Q(cpu)

Q(cpu)

Q(crc)

Q(crop)

Q(cx)

Q(cx)

Q(cx)

Q(cx)

Q(cxf)

Q(cy)

Q(cy)

Q(cy)

Q(cy)

Q(cyf)

Q(data)

Q(data)

Q(data)

Q(data)

Q(data_type)

Q(datamatrix)

Q(dealloc_extra_fb)

Q(debug)

Q(decision_margin)

Q(decode)

Q(decode)

Q(decompress)

Q(deepsleep)

Q(default)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(delattr)

Q(delay)

Q(delay)

Q(deleter)

Q(density)

Q(dict)

Q(dict)

Q(dict)

Q(dict_view)

Q(difference)

Q(difference)

Q(difference)

Q(difference_update)

Q(digest)

Q(dilate)

Q(dir)

Q(dir)

Q(disable)

Q(disable_irq)

Q(disable_irq)

Q(discard)

Q(disconnect)

Q(displacement)

Q(div)

Q(divmod)

Q(dma)

Q(doc)

Q(doc)

Q(draw_arrow)

Q(draw_circle)

Q(draw_cross)

Q(draw_edges)

Q(draw_ellipse)

Q(draw_image)

Q(draw_keypoints)

Q(draw_line)

Q(draw_rectangle)

Q(draw_string)

Q(dry_run)

Q(dump)

Q(dumps)

Q(dupterm)

Q(e)

Q(e)

Q(ecc_level)

Q(eci)

Q(effort)

Q(elapsed_micros)

Q(elapsed_millis)

Q(elongation)

Q(enable)

Q(enable_irq)

Q(enable_irq)

Q(enclosed_ellipse)

Q(enclosing_circle)

Q(encode)

Q(encoding)

Q(encoding)

Q(end)

Q(endswith)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(erf)

Q(erfc)

Q(erode)

Q(errno)

Q(erro)

Q(erro)

Q(errorcode)

Q(eval)

Q(eval)

Q(exec)

Q(exec)

Q(execfile)

Q(exit)

Q(exp)

Q(exp)

Q(expm1)

Q(exposure_us)

Q(extend)

Q(extend)

Q(extent)

Q(fabs)

Q(families)

Q(family)

Q(fastslew)

Q(fault_debug)

Q(fcolor)

Q(file)

Q(file)

Q(file)

Q(fill)

Q(fill)

Q(fill)

Q(fill)

Q(fill)

Q(filter)

Q(filter)

Q(filter_outliers)

Q(find)

Q(find)

Q(find_apriltags)

Q(find_barcodes)

Q(find_blobs)

Q(find_circles)

Q(find_datamatrices)

Q(find_displacement)

Q(find_edges)

Q(find_eye)

Q(find_features)

Q(find_hog)

Q(find_keypoints)

Q(find_lbp)

Q(find_line_segments)

Q(find_lines)

Q(find_qrcodes)

Q(find_rects)

Q(find_template)

Q(firstbit)

Q(firstbit)

Q(firstbit)

Q(firstbit)

Q(fix_rotation_scale)

Q(flash)

Q(float)

Q(float)

Q(floating_threshold)

Q(floating_threshold)

Q(flood_fill)

Q(floor)

Q(flow)

Q(flush)

Q(flush)

Q(flush)

Q(fmod)

Q(font)

Q(format)

Q(format)

Q(format)

Q(format)

Q(forward)

Q(fps)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(frexp)

Q(from_bytes)

Q(fromkeys)

Q(frozenset)

Q(frozenset)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(fw_dump)

Q(fw_update)

Q(fw_version)

Q(fx)

Q(fy)

Q(gain_db)

Q(gain_db_ceiling)

Q(gamma)

Q(gamma)

Q(gamma_corr)

Q(gaussian)

Q(gaussian_blur)

Q(gc)

Q(gc)

Q(gencall)

Q(generator)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(get_color_palette)

Q(get_count)

Q(get_count)

Q(get_count)

Q(get_count)

Q(get_exposure_us)

Q(get_fb)

Q(get_font_height)

Q(get_gain_db)

Q(get_hist)

Q(get_histogram)

Q(get_id)

Q(get_percentile)

Q(get_pixel)

Q(get_pixel_physical)

Q(get_pps)

Q(get_regression)

Q(get_rgb_gain_db)

Q(get_rpm)

Q(get_similarity)

Q(get_spps)

Q(get_srpm)

Q(get_statistics)

Q(get_statistics)

Q(get_stats)

Q(get_stats)

Q(get_threshold)

Q(get_ticks)

Q(get_ticks)

Q(get_xy)

Q(getaddrinfo)

Q(getattr)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getrandbits)

Q(getter)

Q(gettime)

Q(getvalue)

Q(gif)

Q(gif)

Q(globals)

Q(goodness)

Q(gpio)

Q(grayscale_to_binary)

Q(grayscale_to_lab)

Q(grayscale_to_rgb)

Q(grayscale_to_yuv)

Q(group)

Q(h)

Q(h)

Q(h)

Q(h)

Q(h)

Q(h)

Q(h)

Q(h)

Q(halfduplex)

Q(hamming)

Q(hard_reset)

Q(hasattr)

Q(hash)

Q(have_cdc)

Q(heap_lock)

Q(heap_unlock)

Q(heapify)

Q(heappop)

Q(heappush)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(height)

Q(help)

Q(hex)

Q(hexlify)

Q(hid)

Q(high)

Q(histeq)

Q(histogram)

Q(histogram)

Q(hmirror)

Q(hys)

Q(id)

Q(id)

Q(id)

Q(idle)

Q(ifconfig)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(illuminvar)

Q(imag)

Q(image)

Q(image)

Q(imagereader)

Q(imagewriter)

Q(implementation)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(index)

Q(info)

Q(info)

Q(info)

Q(info)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(input)

Q(insert)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int)

Q(intensity)

Q(intersection)

Q(intersection)

Q(intersection_update)

Q(interval)

Q(interval)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(inverted)

Q(inverted)

Q(inverted)

Q(ioctl)

Q(ioctl)

Q(ioctl)

Q(ioctl)

Q(ipoll)

Q(is_alphanumeric)

Q(is_binary)

Q(is_kanji)

Q(is_numeric)

Q(isalpha)

Q(isalpha)

Q(isconnected)

Q(isconnected)

Q(isdigit)

Q(isdigit)

Q(isdisjoint)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isinf)

Q(isinstance)

Q(islower)

Q(islower)

Q(isnan)

Q(isspace)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issubset)

Q(issuperset)

Q(issuperset)

Q(isupper)

Q(isupper)

Q(items)

Q(iter)

Q(iterable)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(join)

Q(join)

Q(jpeg_encode_for_ide)

Q(jpeg_encoded_for_ide)

Q(kbd_intr)

Q(keepends)

Q(key)

Q(key)

Q(key)

Q(key)

Q(keys)

Q(keys)

Q(kp_desc)

Q(kptmatch)

Q(l_bins)

Q(l_bins)

Q(l_bins)

Q(l_bins)

Q(l_bins)

Q(l_bins)

Q(l_bins)

Q(l_lq)

Q(l_max)

Q(l_mean)

Q(l_median)

Q(l_min)

Q(l_mode)

Q(l_stdev)

Q(l_uq)

Q(l_value)

Q(l_value)

Q(lab_to_binary)

Q(lab_to_grayscale)

Q(lab_to_rgb)

Q(lab_to_yuv)

Q(label)

Q(laplacian)

Q(lbp_desc)

Q(lcd)

Q(ldexp)

Q(ldr)

Q(ldrb)

Q(ldrex)

Q(ldrh)

Q(len)

Q(length)

Q(lens_corr)

Q(lgamma)

Q(line)

Q(line)

Q(linpolar)

Q(list)

Q(list)

Q(listdir)

Q(listen)

Q(little)

Q(little)

Q(little)

Q(little)

Q(load)

Q(load)

Q(load_descriptor)

Q(loads)

Q(locals)

Q(localtime)

Q(log)

Q(log)

Q(log10)

Q(log10)

Q(log2)

Q(logpolar)

Q(logpolar)

Q(loop)

Q(loop)

Q(loop)

Q(low)

Q(lower)

Q(lower)

Q(lq)

Q(lsl)

Q(lsr)

Q(lstrip)

Q(lstrip)

Q(machine)

Q(machine)

Q(magnitude)

Q(magnitude)

Q(magnitude)

Q(main)

Q(major_axis_line)

Q(map)

Q(map)

Q(mapper)

Q(margin)

Q(mask)

Q(mask)

Q(mask_circle)

Q(mask_ellipse)

Q(mask_rectangle)

Q(match)

Q(match)

Q(match)

Q(match)

Q(match_descriptor)

Q(math)

Q(math)

Q(max)

Q(max)

Q(max)

Q(max)

Q(max_keypoints)

Q(max_theta_diff)

Q(maximum_space_recursion_space_depth_space_exceeded)

Q(maxsize)

Q(mcu)

Q(mcu)

Q(mcu)

Q(mean)

Q(mean)

Q(mean)

Q(mean_pool)

Q(mean_pooled)

Q(median)

Q(median)

Q(mem)

Q(mem16)

Q(mem16)

Q(mem32)

Q(mem32)

Q(mem8)

Q(mem8)

Q(mem_alloc)

Q(mem_free)

Q(mem_info)

Q(mem_read)

Q(mem_write)

Q(memaddr)

Q(memaddr)

Q(memoryview)

Q(memoryview)

Q(merge)

Q(merge_cb)

Q(merge_distance)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micros)

Q(midpoint)

Q(midpoint_pool)

Q(midpoint_pooled)

Q(millis)

Q(min)

Q(min)

Q(min)

Q(min)

Q(min_corners)

Q(min_scale)

Q(minor_axis_line)

Q(miso)

Q(miso)

Q(miso)

Q(mjpeg)

Q(mjpeg)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkfs)

Q(mkfs)

Q(mktime)

Q(mod)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(modf)

Q(modify)

Q(module)

Q(modules)

Q(modules)

Q(mono_space)

Q(morph)

Q(mosi)

Q(mosi)

Q(mosi)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mov)

Q(mov)

Q(movt)

Q(movw)

Q(movwt)

Q(mpy)

Q(mrs)

Q(mul)

Q(mul)

Q(mul)

Q(mul)

Q(name)

Q(name)

Q(name)

Q(namedtuple)

Q(names)

Q(nand)

Q(native)

Q(negate)

Q(network)

Q(network)

Q(next)

Q(next_frame)

Q(nn)

Q(nn)

Q(nn_class)

Q(nodename)

Q(nop)

Q(nor)

Q(normalized)

Q(nss)

Q(object)

Q(object)

Q(object)

Q(object)

Q(object)

Q(oct)

Q(off)

Q(off)

Q(off)

Q(offset)

Q(offset)

Q(offset)

Q(offset)

Q(offset)

Q(offset)

Q(offset)

Q(offset)

Q(omv)

Q(on)

Q(on)

Q(on)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open)

Q(opt)

Q(opt_level)

Q(or)

Q(ord)

Q(pack)

Q(pack_into)

Q(pad_expert_cfg)

Q(padding)

Q(parity)

Q(partition)

Q(partition)

Q(path)

Q(payload)

Q(payload)

Q(payload)

Q(pcolor)

Q(peektime)

Q(pend_throw)

Q(percentile)

Q(percentile)

Q(perimeter)

Q(period)

Q(period)

Q(period)

Q(period)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(pi)

Q(pi)

Q(pid)

Q(pin)

Q(pixels)

Q(pixels_threshold)

Q(pixels_threshold)

Q(platform)

Q(polar)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(poll)

Q(poll)

Q(poll)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(popitem)

Q(port)

Q(pow)

Q(pow)

Q(power)

Q(pprparam)

Q(pprparam)

Q(prescale)

Q(prescale)

Q(prescaler)

Q(present)

Q(print)

Q(print_exception)

Q(property)

Q(property)

Q(ptr)

Q(ptr)

Q(ptr16)

Q(ptr16)

Q(ptr32)

Q(ptr32)

Q(ptr8)

Q(ptr8)

Q(pull)

Q(pulse_width)

Q(push)

Q(push)

Q(put_box)

Q(put_char)

Q(put_circle)

Q(put_diamond)

Q(put_line)

Q(put_ltext)

Q(put_newline)

Q(put_pixel)

Q(put_pixel_physical)

Q(put_text)

Q(put_text_xy)

Q(pwm_freq)

Q(pwm_inverted)

Q(pwm_width)

Q(pyb)

Q(pyb)

Q(pyb)

Q(qrcode)

Q(qstr_info)

Q(quality)

Q(quality)

Q(quality)

Q(quality)

Q(quality)

Q(quality)

Q(quality)

Q(r)

Q(r)

Q(r)

Q(r_margin)

Q(r_max)

Q(r_max)

Q(r_min)

Q(r_min)

Q(r_step)

Q(radians)

Q(randint)

Q(random)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(rbit)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(readID)

Q(read_buf_len)

Q(read_channel)

Q(readblocks)

Q(readblocks)

Q(readblocks)

Q(readchar)

Q(readfrom)

Q(readfrom_into)

Q(readfrom_mem)

Q(readfrom_mem_into)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(readlines)

Q(readlines)

Q(readonly)

Q(real)

Q(rect)

Q(rect)

Q(rect)

Q(rect)

Q(rect)

Q(rect)

Q(rect)

Q(rect)

Q(rect)

Q(rect)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recv)

Q(recvfrom)

Q(reg)

Q(register)

Q(release)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove_shadows)

Q(rename)

Q(rename)

Q(rename)

Q(repl_info)

Q(repl_uart)

Q(replace)

Q(replace)

Q(replace)

Q(repr)

Q(reset)

Q(reset)

Q(reset)

Q(reset_cause)

Q(response)

Q(reverse)

Q(reverse)

Q(reverse)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rfind)

Q(rgb_channel)

Q(rgb_channel)

Q(rgb_channel)

Q(rgb_channel)

Q(rgb_gain_db)

Q(rgb_to_binary)

Q(rgb_to_grayscale)

Q(rgb_to_lab)

Q(rgb_to_yuv)

Q(rgbtuple)

Q(rho)

Q(rho_margin)

Q(rindex)

Q(rindex)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rng)

Q(rng)

Q(robust)

Q(roi)

Q(rotation)

Q(rotation)

Q(rotation)

Q(rotation)

Q(rotation)

Q(rotation_corr)

Q(rotation_deg)

Q(rotation_rad)

Q(round)

Q(roundness)

Q(route)

Q(rows)

Q(rpartition)

Q(rpartition)

Q(rsplit)

Q(rsplit)

Q(rssi)

Q(rstrip)

Q(rstrip)

Q(rtc)

Q(rtc)

Q(save)

Q(save_descriptor)

Q(scale)

Q(scale)

Q(scale)

Q(scale_factor)

Q(scale_factor)

Q(scale_mul)

Q(scan)

Q(scan)

Q(scan)

Q(schedule)

Q(sck)

Q(sck)

Q(sck)

Q(scl)

Q(sda)

Q(sdiv)

Q(search)

Q(search)

Q(search)

Q(search)

Q(security)

Q(security)

Q(seed)

Q(seed_threshold)

Q(seed_threshold)

Q(seek)

Q(seek)

Q(select)

Q(selective_search)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send)

Q(send_recv)

Q(sendbreak)

Q(sendto)

Q(sensor)

Q(sensor)

Q(sep)

Q(sep)

Q(set)

Q(set)

Q(set)

Q(set_auto_exposure)

Q(set_auto_gain)

Q(set_auto_whitebal)

Q(set_bkg_color)

Q(set_brightness)

Q(set_color_palette)

Q(set_colorbar)

Q(set_contrast)

Q(set_fill_color)

Q(set_font)

Q(set_font_trasparency)

Q(set_framerate)

Q(set_framesize)

Q(set_gainceiling)

Q(set_hmirror)

Q(set_lens_correction)

Q(set_pen_color)

Q(set_pixel)

Q(set_pixformat)

Q(set_quality)

Q(set_saturation)

Q(set_special_effect)

Q(set_title)

Q(set_vflip)

Q(set_vsync_output)

Q(set_windowing)

Q(set_xy)

Q(setattr)

Q(setblocking)

Q(setdefault)

Q(setinterrupt)

Q(setsockopt)

Q(setter)

Q(settimeout)

Q(sha256)

Q(sha256)

Q(sharpen)

Q(shutdown)

Q(similarity)

Q(sin)

Q(sin)

Q(single)

Q(sinh)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(size)

Q(sizeof)

Q(skip_frames)

Q(sleep)

Q(sleep)

Q(sleep)

Q(sleep)

Q(sleep_ms)

Q(sleep_us)

Q(slice)

Q(slice)

Q(snapshot)

Q(socket)

Q(socket)

Q(soft_reset)

Q(softmax)

Q(softmax)

Q(solidity)

Q(sort)

Q(sorted)

Q(space_sigma)

Q(speed)

Q(split)

Q(split)

Q(split)

Q(splitlines)

Q(splitlines)

Q(sqrt)

Q(sqrt)

Q(ssid)

Q(ssid)

Q(stack_use)

Q(standby)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start_ap)

Q(startswith)

Q(startswith)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(staticmethod)

Q(staticmethod)

Q(statistics)

Q(statistics)

Q(statistics)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(stderr)

Q(stdev)

Q(stdev)

Q(stdin)

Q(stdout)

Q(step)

Q(step)

Q(step)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(strb)

Q(strength)

Q(strex)

Q(strh)

Q(string_hmirror)

Q(string_rotation)

Q(string_vflip)

Q(strip)

Q(strip)

Q(struct)

Q(struct)

Q(sub)

Q(sub)

Q(sub)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(symmetric_difference)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sync)

Q(sync)

Q(sync)

Q(sys)

Q(sys)

Q(sysname)

Q(tan)

Q(tanh)

Q(tell)

Q(template_roi)

Q(test)

Q(theta)

Q(theta)

Q(theta_margin)

Q(thickness)

Q(thickness)

Q(thickness)

Q(thickness)

Q(thickness)

Q(thickness)

Q(thickness)

Q(thickness)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold)

Q(threshold_cb)

Q(thresholds)

Q(throw)

Q(throw)

Q(ti)

Q(tick)

Q(ticks)

Q(ticks_add)

Q(ticks_cpu)

Q(ticks_diff)

Q(ticks_ms)

Q(ticks_us)

Q(time)

Q(time)

Q(time)

Q(time)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout_char)

Q(to_bitmap)

Q(to_bitmap)

Q(to_bytes)

Q(to_grayscale)

Q(to_rainbow)

Q(to_rgb565)

Q(toggle)

Q(top_hat)

Q(transpose)

Q(trunc)

Q(tuple)

Q(tuple)

Q(tuple)

Q(type)

Q(type)

Q(type)

Q(uarray)

Q(uarray)

Q(ubinascii)

Q(ubinascii)

Q(ucollections)

Q(ucollections)

Q(uctypes)

Q(uctypes)

Q(uctypes)

Q(udelay)

Q(udiv)

Q(uerrno)

Q(uerrno)

Q(uhashlib)

Q(uhashlib)

Q(uheapq)

Q(uheapq)

Q(uint)

Q(uint)

Q(uint)

Q(uio)

Q(uio)

Q(ujson)

Q(ujson)

Q(umachine)

Q(umachine)

Q(umachine)

Q(umount)

Q(umount)

Q(uname)

Q(unhexlify)

Q(uniform)

Q(union)

Q(union)

Q(uniqueID)

Q(uniqueID)

Q(unique_id)

Q(unique_id)

Q(unlink)

Q(unpack)

Q(unpack_from)

Q(unregister)

Q(unsharp)

Q(uos)

Q(uos)

Q(update)

Q(update)

Q(update)

Q(update_display)

Q(upper)

Q(upper)

Q(uq)

Q(urandom)

Q(urandom)

Q(urandom)

Q(ure)

Q(ure)

Q(ure)

Q(usb_mode)

Q(uselect)

Q(uselect)

Q(usocket)

Q(usocket)

Q(ustruct)

Q(ustruct)

Q(utf_hyphen_8)

Q(utf_hyphen_8)

Q(utime)

Q(utime)

Q(utimeq)

Q(utimeq)

Q(utimeq)

Q(utimeq)

Q(uzlib)

Q(uzlib)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(values)

Q(vcmp)

Q(vcvt_f32_s32)

Q(vcvt_s32_f32)

Q(version)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(version_major)

Q(version_minor)

Q(version_patch)

Q(version_string)

Q(vflip)

Q(vid)

Q(viper)

Q(vldr)

Q(vmov)

Q(vmrs)

Q(vneg)

Q(vsqrt)

Q(vstr)

Q(w)

Q(w)

Q(w)

Q(w)

Q(w)

Q(w)

Q(w)

Q(w)

Q(wait_for_sta)

Q(wfi)

Q(wfi)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(width)

Q(window_close)

Q(window_open)

Q(window_scroll)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_readinto)

Q(write_readinto)

Q(writeblocks)

Q(writeblocks)

Q(writeblocks)

Q(writechar)

Q(writeto)

Q(writeto_mem)

Q(writevto)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x)

Q(x1)

Q(x2)

Q(x_hist_bins)

Q(x_hist_bins_max)

Q(x_margin)

Q(x_overlap)

Q(x_rotation)

Q(x_rotation)

Q(x_scale)

Q(x_scale)

Q(x_spacing)

Q(x_stride)

Q(x_stride)

Q(x_stride)

Q(x_stride)

Q(x_translation)

Q(x_translation)

Q(x_translation)

Q(xnor)

Q(xor)

Q(xwin_max)

Q(xwin_min)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y1)

Q(y2)

Q(y_hist_bins)

Q(y_hist_bins_max)

Q(y_margin)

Q(y_overlap)

Q(y_rotation)

Q(y_rotation)

Q(y_scale)

Q(y_scale)

Q(y_spacing)

Q(y_stride)

Q(y_stride)

Q(y_stride)

Q(y_stride)

Q(y_translation)

Q(y_translation)

Q(y_translation)

Q(yuv_to_binary)

Q(yuv_to_grayscale)

Q(yuv_to_lab)

Q(yuv_to_rgb)

Q(ywin_max)

Q(ywin_min)

Q(z_rotation)

Q(z_rotation)

Q(z_translation)

Q(zero)

Q(zip)

Q(zip)

Q(zoom)

Q(zoom)
