# 配置与复用管理器 (Config and Mux Manager, CMM)

 

CMM服务于每个使用管脚和硬件的Python类，让他们的每个实例都知道自己使用哪个管脚和哪个外设 

利用make-pins.py生成的cpu_pin字典——它是联系cpu引脚名字符串和生成的pin object对象的纽带。

pin object中包含了非常丰富的内容，如下定义：

 

| pin_obj_t                                                    |
| ------------------------------------------------------------ |
| typedef struct {<br/>  mp_obj_base_t base;<br/>  qstr name;<br/>  qstr board_name;	<br/>  uint32_t port   : 4;	// GPIO端口号<br/>  uint32_t pin    : 5;  // GPIO引脚号<br/>  uint32_t num_af : 4;	// 此引脚支持多少个复用功能<br/>  uint32_t adc_channel : 5; // ADC通道号<br/>  uint32_t adc_num  : 3;  // 连接到了哪些ADC实例上，最多支持3个<br/>  uint32_t pin_mask;	// 未使用<br/>  GPIO_Type *gpio;	// 按gpio使用时对应的gpio寄存器<br/>  // >>> i.MX RT's pin alt_fn mux reg and pin cfg reg are not ordered in GPIO order, have to record the mapping<br/>  uint32_t afReg;	// 选择引脚复用功能的寄存器地址<br/>  uint32_t cfgReg;	// 配置引脚工作方式的寄存器地址<br/>  // <<<<br/>  const pin_af_obj_t *af; // 复用对象表<br/>} pin_obj_t; |

 

pin_af_obj_t类型的对象记录了每个复用功能的信息

| pin_af_obj_t                                                 |
| ------------------------------------------------------------ |
| typedef struct {<br/>  mp_obj_base_t base;<br/>  qstr name;  // 复用功能名<br/>  uint8_t idx; // 复用功能在引脚'afReg'中的编号<br/>  uint8_t fn;  // 复用功能类型枚举值, AF_FN_xxx。若同一脚可有同一功能的不同单元，则需区分实例<br/>  uint8_t unit;  // 复用功能的外设实例号<br/>  uint8_t type;	// 未使用<br/>  // >>> i.mx RT uses 2 levels of muxing (DAISYCHAIN, 'INPUT_SELECT' registers)<br/>  uint32_t inSelReg;<br/>  uint32_t inSelVal;<br/>  // <<<<br/><br/>  union {<br/>    void          *reg;  // 此复用功能对应的外设寄存器<br/>	TMR_Type *pQTmr;<br/>	LPI2C_Type *pI2C;<br/>	LPUART_Type *pUART;<br/>	LPSPI_Type *pSPI;<br/>	// ... 根据需要添加<br/>  };<br/>} pin_af_obj_t; |

 

然而，pin object并没有定义python类的每个实例需要哪个pin object。这就是配置与复用管理器要解决的了。

不同的驱动可能还需要附加的配置信息，并不统一，因此使用一个"hint"字符串来传递，由驱动来解析。

CMM也记录管脚与外设的分配情况，可以辅助cleanup。

## CMM的配置文件

CMM需要引脚分配输入文件，采用csv格式：考虑以下情况

\1.   cpu pin按GPIO使用。此时通过引脚名来找到对应的pin object并查出关联的GPIO。不需要hint

\2.   串转并扩展的GPI或GPO。此时引脚名为空，在hint中给出扩展关系

\3.   按“面向外设”使用。此时通过引脚名来找到对应的pin object，后面驱动根据AF_FN_xxxx枚举来找到复用对象。不需hint

\4.   按“面向功能”使用。例如”PTV”, “PWM”。如果内部使用多种外设或单元则需要填写hint。如果引脚的功能名与外设信号名不符，驱动程序自行映射，不需要hint。

\5.   包含了xbar的情况的3和4。此时需要在hint中给出与xbar的配接关系。

\6.   ADC通道同时关联到2个ADC外设单元，在hint给出默认选择哪个。

上述内容以CSV文件存储表格，示例如下：

| fn  功能 | unit  单元 | signal  信号 | hint  提示信息 | pinobj  引脚对象 | comments  备注，从这列开始不参与分析                         |
| -------- | ---------- | ------------ | -------------- | ---------------- | ------------------------------------------------------------ |
| pin      | -          | p1-23        | -              | AD_B0_03         |                                                              |
| pwm      | -          | ch4          | f2.3           | PTV.IO4          | pwm可由qtmr或flexpwm做                                       |
| pwm      | -          | ch1          | q1.1@x1.io14   | AD_B0_01         | pwm可由qtmr或flexpwm做，并且在这个脚上借助xbar1来配接到qtmr上 |
| servo    | -          | ch1          | q1.0           | B0_00            | servo可由qtmr或flexpwm做                                     |
| micary   | -          | mic12        | -              | B0_12            | 驱动自己知道mic12对应sai1的哪个信号名                        |
| adc      | -          | ch6          | 2              | AD_B1_09         | ch6可以使用1号ADC或者2号ADC                                  |
| spi      | 1          | SCLK         | -              | AD_B0_00         |                                                              |
| pin      | -          | p2-32        | exp.10         | -                | 扩展的IO的10号位                                             |

第6列开始是可选的注释，CMM分析器并不理会

借助Python脚本分析CMM输入文件，产生一个dict。key是comboName, 由Fn.Unit.Signal或Fn.Signal(Unit为”-“时)组成。值是一个元组:

当某一行对应了一个引脚对象时，为{comboName: (hint字符串, 引脚名字符串, 引脚对象, 属主对象)}

否则，为为{comboName: (hint字符串, 引脚名字符串, None对象, 属主对象)}

这个脚本需要自动执行。可以存放在SD卡根目录的下’cmm_load.py’，在主函数中查找并执行它。

 

## CMM API与示例

 

API暂定如下

/* Give back (Return) a pin to CMM, caller should put the pin to proper state first before give back*/

int **Mux_Give**(MuxItem_t *pMuxData);

 

/* Take a pin according to the function name (pszFn), unit (unit), and the signal name (pszSignal), 

 \* if the pin is owned by others then preempt it, usually one should avoid this confliction.

 \* On success, (userObj) will become the new owner of this pin.

 \* E.g., Mux_Take(self, "spi", 3, "SCLK", &muxData); 

 */

int **Mux_Take**(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData);

 

/* Like Mux_Take, but if the pin is owned by others then fail and returns a negative value */

int **Mux_TryTake**(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData);

 

/* Just query the pin, do not take */

int **Mux_Query**(mp_obj_t userObj, const char *pszFn, int unit, const char *pszSignal, MuxItem_t *pMuxData);

 

/* below APIs are just for complementary, convenient for getting multiple signals together */

 

/* Return a group of pins */

int **Mux_GiveMany**(MuxItem_t *pMuxData, int cnt);

 

/* take a group of pins, the amount is signalCnt */

int **Mux_TakeMany**(mp_obj_t userObj, const char *pszFn, int unit, const char **ppszSignals, int signalCnt, MuxItem_t *pMuxData);

 

/* Try take a group of pins, the amount is signalCnt */

int **Mux_TryTakeMany**(mp_obj_t userObj, const char *pszFn, int unit, const char **ppszSignals, int signalCnt, MuxItem_t *pMuxData);

 

/* Query a group of pins*/

int **Mux_QueryMany**(mp_obj_t userObj, const char *pszFn, int unit, const char **ppszSignals, int signalCnt, MuxItem_t *pMuxData);

 

驱动自己知道需要用哪些信号，具体外设的哪个alt_fn

示例伪码：获取I2S麦克风阵列所使用的引脚并初始化

MuxItem_t muxes[6];

char *pSignals[6] = {"mic12", "mic34", "mic56", "mic78", "ws", "bclk"};

err = Mux_TryTakeMany(self, "sai", 1, pSignals, 6, muxes);

for (int i=0; i<6; i++) {

  mp_hal_pin_config_alt(muxes[i].pPinObj, i < 4 ? GPIO_MODE_INPUT : GPIO_MODE_OUTPUT_PP, AF_FN_SAI1);

}

 

 