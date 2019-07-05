#include "stdio.h"
#include "string.h"	
#include "fsl_gpio.h"
#include "M8266WIFIDrv.h"
#include "fsl_iomuxc.h"
#include "fsl_lpspi.h"

#ifdef BOARD_OMVRT1
#define M8266WIFI_INTERFACE_SPI									LPSPI1
#define M8266WIFI_SPI_CLK_MUX									IOMUXC_GPIO_EMC_27_LPSPI1_SCK
#define M8266WIFI_SPI_MOSI_MUX									IOMUXC_GPIO_EMC_28_LPSPI1_SDO
#define M8266WIFI_SPI_MISO_MUX									IOMUXC_GPIO_EMC_29_LPSPI1_SDI

#define M8266WIFI_SPI_nCS_PORT_MUX								IOMUXC_GPIO_EMC_30_GPIO4_IO30
#define M8266WIFI_SPI_nCS_GPIO									GPIO4
#define M8266WIFI_SPI_nCS_GPIO_PIN								30


#define M8266WIFI_nRESET_PORT_MUX								IOMUXC_GPIO_B1_08_GPIO2_IO24
#define M8266WIFI_nRESET_GPIO									GPIO2
#define M8266WIFI_nRESET_GPIO_PIN								24

#define M8266WIFI_DBG_IO_PORT_MUX								IOMUXC_GPIO_B1_09_GPIO2_IO25
#define M8266WIFI_DBG_IO_GPIO									GPIO2
#define M8266WIFI_DBG_IO_PIN									25

#define M8266WIFI_DBG_IO_PORT_MUX1								IOMUXC_GPIO_AD_B0_13_GPIO1_IO13
#define M8266WIFI_DBG_IO_GPIO1									GPIO1
#define M8266WIFI_DBG_IO_PIN1									13

#define M8266WIFI_INT_IO_PORT_MUX								IOMUXC_GPIO_AD_B0_13_GPIO1_IO13
#define M8266WIFI_INT_IO_GPIO									GPIO1
#define M8266WIFI_INT_IO_PIN									13

#define M8266WIFI_INT_IRQ										GPIO1_Combined_0_15_IRQn
#define M8266WIFI_INT_HANDLER									GPIO1_Combined_0_15_IRQHandler

#else
// default board is i.MX RT1050/60 EVK

#define M8266WIFI_INTERFACE_SPI									LPSPI1
#define M8266WIFI_SPI_CLK_MUX									IOMUXC_GPIO_SD_B0_00_LPSPI1_SCK
#define M8266WIFI_SPI_MOSI_MUX									IOMUXC_GPIO_SD_B0_02_LPSPI1_SDO
#define M8266WIFI_SPI_MISO_MUX									IOMUXC_GPIO_SD_B0_03_LPSPI1_SDI

#define M8266WIFI_SPI_nCS_PORT_MUX								IOMUXC_GPIO_AD_B1_01_GPIO1_IO17
#define M8266WIFI_SPI_nCS_GPIO									GPIO1
#define M8266WIFI_SPI_nCS_GPIO_PIN								17


#define M8266WIFI_nRESET_PORT_MUX									IOMUXC_GPIO_B1_08_GPIO2_IO24
#define M8266WIFI_nRESET_GPIO										GPIO2
#define M8266WIFI_nRESET_GPIO_PIN									24

#define M8266WIFI_DBG_IO_PORT_MUX								IOMUXC_GPIO_AD_B0_03_GPIO1_IO03
#define M8266WIFI_DBG_IO_GPIO									GPIO1
#define M8266WIFI_DBG_IO_PIN									03

#define M8266WIFI_INT_IO_PORT_MUX								IOMUXC_GPIO_AD_B0_02_GPIO1_IO02
#define M8266WIFI_INT_IO_GPIO									GPIO1
#define M8266WIFI_INT_IO_PIN									02

#define M8266WIFI_INT_IRQ										GPIO1_Combined_0_15_IRQn
#define M8266WIFI_INT_HANDLER									GPIO1_Combined_0_15_IRQHandler
#endif


#ifndef SPI_BaudRatePrescaler_2
#define SPI_BaudRatePrescaler_2         ((uint32_t)0x00000000U)
#define SPI_BaudRatePrescaler_4         ((uint32_t)0x00000002U)
#define SPI_BaudRatePrescaler_6         ((uint32_t)0x00000004U)
#define SPI_BaudRatePrescaler_8         ((uint32_t)0x00000006U)
#define SPI_BaudRatePrescaler_12        ((uint32_t)0x0000000AU)
#define SPI_BaudRatePrescaler_16        ((uint32_t)0x0000000EU)
#define SPI_BaudRatePrescaler_32        ((uint32_t)0x0000001EU)
#define SPI_BaudRatePrescaler_64        ((uint32_t)0x0000003EU)
#define SPI_BaudRatePrescaler_128       ((uint32_t)0x0000007EU)
#define SPI_BaudRatePrescaler_256       ((uint32_t)0x000000FEU)
#endif


#define ESP8266_SPI_EN					1
#define ESP8266_UART_EN				0


void M8266_pin_init()
{
#if ESP8266_SPI_EN
	gpio_pin_config_t gpio_config;
	
	//Initial iMx RT1052's GPIO for M8266WIFI_SPI_nCS
	IOMUXC_SetPinMux(M8266WIFI_SPI_nCS_PORT_MUX, 0);
	IOMUXC_SetPinConfig(M8266WIFI_SPI_nCS_PORT_MUX, 0xB069);  // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate
	gpio_config.direction 			= kGPIO_DigitalOutput;				// Output
	gpio_config.interruptMode	  =	kGPIO_NoIntmode;						// NO Interrupt
	gpio_config.outputLogic		  =	1;										  		// Initially High
	GPIO_PinInit(M8266WIFI_SPI_nCS_GPIO, M8266WIFI_SPI_nCS_GPIO_PIN, &gpio_config); 	        						// Initialise the GPIO	
	
	//Initial iMx RT1052's GPIO for M8266WIFI_SPI_nRST
  	IOMUXC_SetPinMux(M8266WIFI_nRESET_PORT_MUX, 0);			
	IOMUXC_SetPinConfig(M8266WIFI_nRESET_PORT_MUX, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
	gpio_config.direction 			= kGPIO_DigitalOutput;				// Output
	gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt
	gpio_config.outputLogic		=	1;														// Initially High
	GPIO_PinInit(M8266WIFI_nRESET_GPIO, M8266WIFI_nRESET_GPIO_PIN, &gpio_config); 	        						// Initialise the GPIO	

	IOMUXC_SetPinMux(M8266WIFI_DBG_IO_PORT_MUX, 0);			
	IOMUXC_SetPinConfig(M8266WIFI_DBG_IO_PORT_MUX, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
	gpio_config.direction 			= kGPIO_DigitalOutput;				// Output
	gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt
	gpio_config.outputLogic		=	0;														// Initially High
	GPIO_PinInit(M8266WIFI_DBG_IO_GPIO, M8266WIFI_DBG_IO_PIN, &gpio_config);
#ifdef BOARD_OMVRT1
	IOMUXC_SetPinMux(M8266WIFI_DBG_IO_PORT_MUX1, 0);			
	IOMUXC_SetPinConfig(M8266WIFI_DBG_IO_PORT_MUX1, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
	gpio_config.direction 			= kGPIO_DigitalOutput;				// Output
	gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt
	gpio_config.outputLogic		=	0;														// Initially High
	GPIO_PinInit(M8266WIFI_DBG_IO_GPIO1, M8266WIFI_DBG_IO_PIN1, &gpio_config);
#endif    
	//SPI Pin
	IOMUXC_SetPinMux(M8266WIFI_SPI_CLK_MUX, 0);                                    
    IOMUXC_SetPinMux(M8266WIFI_SPI_MOSI_MUX, 0);                                    
    IOMUXC_SetPinMux(M8266WIFI_SPI_MISO_MUX, 0);                                    

    IOMUXC_SetPinConfig(M8266WIFI_SPI_CLK_MUX,0x3069);  //0x3069=b0| 00|11| 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pulldown, pull enabled, 100MHz, R0/5=52, Fast Slew Rate
    IOMUXC_SetPinConfig(M8266WIFI_SPI_MOSI_MUX,0x3069);                                                                              
    IOMUXC_SetPinConfig(M8266WIFI_SPI_MISO_MUX,0x10B0u);
	
#endif

#ifdef BOARD_OMVRT1
	IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_19_GPIO4_IO19, 0);			
	IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_19_GPIO4_IO19, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
	gpio_config.direction 			= kGPIO_DigitalOutput;				// Output
	gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt
	gpio_config.outputLogic		=	0;														// Initially High
	GPIO_PinInit(GPIO4, 19, &gpio_config);

	IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_20_GPIO4_IO20, 0);			
	IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_20_GPIO4_IO20, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
	gpio_config.direction 			= kGPIO_DigitalOutput;				// Output
	gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt
	gpio_config.outputLogic		=	0;														// Initially High
	GPIO_PinInit(GPIO4, 20, &gpio_config);   
#endif


}

void M8266_Clear_REV_INT_Flags()
{
	GPIO_PortClearInterruptFlags(M8266WIFI_INT_IO_GPIO, 1U << M8266WIFI_INT_IO_PIN);
}

void M8266WIFI_INT_HANDLER(void)
{
	wifidbg_int_handler();
}

void M8266_Write_REV_INT(uint8_t en)
{
	if (en == 1)
	{
		EnableIRQ(M8266WIFI_INT_IRQ);
		GPIO_PortEnableInterrupts(M8266WIFI_INT_IO_GPIO, 1U << M8266WIFI_INT_IO_PIN);
	}
	else
	{
		DisableIRQ(M8266WIFI_INT_IRQ);
		GPIO_PortDisableInterrupts(M8266WIFI_INT_IO_GPIO, 1U << M8266WIFI_INT_IO_PIN);
	}
		
}

void M8266_Init_REV_INT_Pins()
{
	gpio_pin_config_t gpio_config;
	
	IOMUXC_SetPinMux(M8266WIFI_INT_IO_PORT_MUX, 0);			
	IOMUXC_SetPinConfig(M8266WIFI_INT_IO_PORT_MUX, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
	gpio_config.direction 			= kGPIO_DigitalInput;				// Output
	gpio_config.interruptMode	=	kGPIO_IntRisingEdge;							// NO Interrupt													// Initially High
	GPIO_PinInit(M8266WIFI_INT_IO_GPIO, M8266WIFI_INT_IO_PIN, &gpio_config);
}

void M8266_DBG_IO_Write(int idx, uint8_t value)
{
	gpio_pin_config_t gpio_config;
	
	switch(idx)
	{
		case 0:
			if (value)
				GPIO_PinWrite(M8266WIFI_DBG_IO_GPIO, M8266WIFI_DBG_IO_PIN,1);
			else
				GPIO_PinWrite(M8266WIFI_DBG_IO_GPIO, M8266WIFI_DBG_IO_PIN,0);
				break;
		case 1:
#ifdef BOARD_OMVRT1			
			if (value)
				GPIO_PinWrite(M8266WIFI_DBG_IO_GPIO1, M8266WIFI_DBG_IO_PIN1,1);
			else
				GPIO_PinWrite(M8266WIFI_DBG_IO_GPIO1, M8266WIFI_DBG_IO_PIN1,0);
				break;
			break;
		case 2:
			
			gpio_config.outputLogic =	value;
		
			IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_19_GPIO4_IO19, 0);			
			IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_19_GPIO4_IO19, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
			gpio_config.direction			= kGPIO_DigitalOutput;				// Output
			gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt														// Initially High
			GPIO_PinInit(GPIO4, 19, &gpio_config);
#endif			
			break;
			default:
	}
			
}

void M8266_DBG_IO_Toggle(int idx)
{
	gpio_pin_config_t gpio_config;
	
	if (idx == 0)
	{
		if(((M8266WIFI_DBG_IO_GPIO->DR) >> M8266WIFI_DBG_IO_PIN) & 0x1U)
			gpio_config.outputLogic = 0;
		else
			gpio_config.outputLogic =	1;
			
		IOMUXC_SetPinMux(M8266WIFI_DBG_IO_PORT_MUX, 0); 		
		IOMUXC_SetPinConfig(M8266WIFI_DBG_IO_PORT_MUX, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
		gpio_config.direction			= kGPIO_DigitalOutput;				// Output
		gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt
																// Initially High
		GPIO_PinInit(M8266WIFI_DBG_IO_GPIO, M8266WIFI_DBG_IO_PIN, &gpio_config);
		
			
		
	}
#ifdef BOARD_OMVRT1		
	else if (idx == 1)
	{
		if(((M8266WIFI_DBG_IO_GPIO1->DR) >> M8266WIFI_DBG_IO_PIN1) & 0x1U)
			gpio_config.outputLogic = 0;
		else
			gpio_config.outputLogic =	1;
		
		IOMUXC_SetPinMux(M8266WIFI_DBG_IO_PORT_MUX1, 0);			
		IOMUXC_SetPinConfig(M8266WIFI_DBG_IO_PORT_MUX1, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
		gpio_config.direction			= kGPIO_DigitalOutput;				// Output
		gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt														// Initially High
		GPIO_PinInit(M8266WIFI_DBG_IO_GPIO1, M8266WIFI_DBG_IO_PIN1, &gpio_config);

		
	}

	else if (idx == 2)
	{
		if(((GPIO4->DR) >> 19) & 0x1U)
			gpio_config.outputLogic = 0;
		else
			gpio_config.outputLogic =	1;
		
		IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_19_GPIO4_IO19, 0);			
		IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_19_GPIO4_IO19, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
		gpio_config.direction			= kGPIO_DigitalOutput;				// Output
		gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt														// Initially High
		GPIO_PinInit(GPIO4, 19, &gpio_config);
	}
	else if (idx == 3)
	{
		if(((GPIO4->DR) >> 20) & 0x1U)
			gpio_config.outputLogic = 0;
		else
			gpio_config.outputLogic =	1;
		
		IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_20_GPIO4_IO20, 0);			
		IOMUXC_SetPinConfig(IOMUXC_GPIO_EMC_20_GPIO4_IO20, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
		gpio_config.direction			= kGPIO_DigitalOutput;				// Output
		gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt														// Initially High
		GPIO_PinInit(GPIO4, 20, &gpio_config);
	}
#endif		
}

void M8266_host_interface_init()
{
#if ESP8266_SPI_EN
	uint32_t lpspi_clk;
	u8  lpspi_clk_divid_def =  2; // Default Clock divider = 2, therefore SPI Source Clock =192MHz as default
    uint32_t spi_baudrate=8000000;    //SCK->8MHz Baud=8Mbps. Noted:  SCK frequency different from LPSPI Module clock(lpspiclk)
	lpspi_master_config_t lpspi_config;
	
	//
	
	uint32_t pll3_clk = CLOCK_GetUsb1PfdFreq(kCLOCK_Pfd0);	
	 //Setup the SPI Module Clock sources to be PLL3_PFD0/(1+5)=576Mhz/(1+5) = 96MHz
	
    CLOCK_SetMux(kCLOCK_LpspiMux, 1);     								// Select USB1 PLL PFD0(576MHz) as LPSPI Clock Sources
    CLOCK_SetDiv(kCLOCK_LpspiDiv, lpspi_clk_divid_def);    // Default Clock divider = 35, therefore SPI Clock = 16MHz Initally

    LPSPI_Enable(M8266WIFI_INTERFACE_SPI, false);		
    lpspi_clk=(CLOCK_GetUsb1PfdFreq(kCLOCK_Pfd0)/(lpspi_clk_divid_def+1));
    lpspi_config.baudRate												=	spi_baudrate;
    lpspi_config.whichPcs												=	kLPSPI_Pcs1;
    lpspi_config.pcsActiveHighOrLow							=	kLPSPI_PcsActiveLow;
    lpspi_config.bitsPerFrame										=	8;
    lpspi_config.cpol														=	kLPSPI_ClockPolarityActiveHigh; // Require Idle Low, so Active High
    lpspi_config.cpha														=	kLPSPI_ClockPhaseFirstEdge;     // kLPSPI_ClockPhaseSecondEdge;
    lpspi_config.direction											=	kLPSPI_MsbFirst;
    lpspi_config.pinCfg													=	kLPSPI_SdiInSdoOut;
    lpspi_config.dataOutConfig									= kLpspiDataOutRetained;					// kLpspiDataOutTristate;
    lpspi_config.pcsToSckDelayInNanoSec					=  5; // The delay is (SCKPCS+1)cycles of lpspi_clk. Therefore, at least 5.02ns @ 192MHz
    lpspi_config.lastSckToPcsDelayInNanoSec			=  5; // The delay is (PCSSCK+1)cycles of lpspi_clk. Therefore, at least 5.02ns @ 192MHz
    lpspi_config.betweenTransferDelayInNanoSec	= 10; // The delya is (DBT   +2)cycles of lpspi_clk. Therefore, at least 5.02ns @ 192MHz 

    LPSPI_MasterInit(M8266WIFI_INTERFACE_SPI, &lpspi_config, lpspi_clk);
    LPSPI_Enable(M8266WIFI_INTERFACE_SPI, true);
	
#else ESP8266_UART_EN
#endif
}

//////////////////////////////////////////////////////////////////////////////////////
// BELOW FUNCTIONS ARE REQUIRED BY M8266WIFIDRV.LIB. 
// PLEASE IMPLEMENTE THEM ACCORDING TO YOUR HARDWARE
//////////////////////////////////////////////////////////////////////////////////////
/***********************************************************************************
 * M8266HostIf_Set_nRESET_Pin                                                      *
 * Description                                                                     *
 *    To Outpout HIGH or LOW onto the GPIO pin for M8266WIFI nRESET                *
 *    You may update the macros of GPIO PIN usages for nRESET from brd_cfg.h       *
 *    You are not recommended to modify codes below please                         *
 * Parameter(s):                                                                   *
 *    1. level: LEVEL output to nRESET pin                                         *
 *              0 = output LOW  onto nRESET                                        *
 *              1 = output HIGH onto nRESET                                        *
 * Return:                                                                         *
 *    None                                                                         *
 ***********************************************************************************/
void M8266HostIf_Set_nRESET_Pin(u8 level)
{
	  if(level!=0)
		{
			GPIO_PinWrite(M8266WIFI_nRESET_GPIO, M8266WIFI_nRESET_GPIO_PIN, 1);
		}
		else
		{
			GPIO_PinWrite(M8266WIFI_nRESET_GPIO, M8266WIFI_nRESET_GPIO_PIN, 0);
		}
}
/***********************************************************************************
 * M8266HostIf_Set_SPI_nCS_PIN                                                     *
 * Description                                                                     *
 *    To Outpout HIGH or LOW onto the GPIO pin for M8266WIFI SPI nCS               *
 *    You may update the macros of GPIO PIN usages for SPI nCS from brd_cfg.h      *
 *    You are not recommended to modify codes below please                         *
 * Parameter(s):                                                                   *
 *    1. level: LEVEL output to SPI nCS pin                                        *
 *              0 = output LOW  onto SPI nCS                                       *
 *              1 = output HIGH onto SPI nCS                                       *
 * Return:                                                                         *
 *    None                                                                         *
 ***********************************************************************************/
void M8266HostIf_Set_SPI_nCS_Pin(u8 level)
{
	  if(level!=0)
		{
			GPIO_PinWrite(M8266WIFI_SPI_nCS_GPIO, M8266WIFI_SPI_nCS_GPIO_PIN, 1);
		}
		else
		{
			GPIO_PinWrite(M8266WIFI_SPI_nCS_GPIO, M8266WIFI_SPI_nCS_GPIO_PIN, 0);
		}
}

/***********************************************************************************
 * M8266WIFIHostIf_delay_us                                                        *
 * Description                                                                     *
 *    To loop delay some micro seconds.                                            *
 * Parameter(s):                                                                   *
 *    1. nus: the micro seconds to delay                                           *
 * Return:                                                                         *
 *    none                                                                         *
 ***********************************************************************************/
void M8266HostIf_delay_us(u8 nus)
{
   mp_hal_delay_us(nus);
}

void M8266WIFI_Module_delay_ms(u16 nms)
{
	 u16 i, j;
	 for(i=0; i<nms; i++)
	   for(j=0; j<4; j++)									// delay 1ms. Call 4 times of delay_us(250), as M8266HostIf_delay_us(u8 nus), nus max 255
	      M8266HostIf_delay_us(250);
}

void M8266WIFI_Module_Hardware_Reset(void) // total 800ms
{
	 M8266HostIf_Set_SPI_nCS_Pin(0);   			// Module nCS==ESP8266 GPIO15 as well, Low during reset in order for a normal reset 
	 M8266WIFI_Module_delay_ms(1); 	    		// delay 1ms, adequate for nCS stable
	
	 M8266HostIf_Set_nRESET_Pin(0);					// Pull low the nReset Pin to bring the module into reset state
	 M8266WIFI_Module_delay_ms(5);      		// delay 1ms, adequate for nRESET stable.
																					// give more time especially for some board not good enough
	
	 M8266HostIf_Set_nRESET_Pin(1);					// Pull high again the nReset Pin to bring the module exiting reset state
	 M8266WIFI_Module_delay_ms(300); 	  		// at least 18ms required for reset-out-boot sampling boottrap pin
																					// Here, we use 300ms for adequate abundance, since some board GPIO,
																					// needs more time for stable(especially for nRESET)
																					// You may shorten the time or give more time here according your board v.s. effiency
 	 M8266HostIf_Set_SPI_nCS_Pin(1);
 //M8266WIFI_Module_delay_ms(1); 	    		// delay 1ms, adequate for nCS stable
	
   	 M8266WIFI_Module_delay_ms(800-300-5-2); // Delay more than around 500ms for M8266WIFI module bootup and initialization 
																					 // including bootup information print?¡ê 
}

void M8266HostIf_SPI_SetSpeed(u32 SPI_BaudRatePrescaler)
{
	M8266WIFI_INTERFACE_SPI->CR  &= ~(1<<0);	   							  // MEN=0,???1LPSPIx	 	 
	M8266WIFI_INTERFACE_SPI->CCR &= ~(0XFF<<0);  							  // SCKDIV=0X00,??3ySCKDIV?-¨¤¡ä¦Ì?¨¦¨¨??
	M8266WIFI_INTERFACE_SPI->CCR |= SPI_BaudRatePrescaler&0xFF;	// SCKDIV=sckdiv,¨¦¨¨??SCKDIV
	M8266WIFI_INTERFACE_SPI->CR  |= 1<<0;											  // MEN=0,¨º1?¨¹LPSPIx	
}


void M8266_drv_init()
{
	M8266_pin_init();
	M8266_host_interface_init();
}

int M8266_setup(uint8_t mode)
{
	uint32_t spi_clk;
	uint16_t status;
	
	M8266WIFI_Module_Hardware_Reset();

	M8266WIFI_Module_delay_ms(1);
	M8266HostIf_SPI_SetSpeed(SPI_BaudRatePrescaler_8);					// Setup SPI Clock. Here 192/8 = 24 MHz for for iMXRT10xx.
	spi_clk = 24000000;

	//It is very important to call M8266HostIf_SPI_Select() to tell the driver which SPI you used
 	 //and how faster the SPI clock you used. The function must be called before SPI access
   if(M8266HostIf_SPI_Select((uint32_t)M8266WIFI_INTERFACE_SPI, spi_clk, &status)==0)
   {
   		return -1;
   }

#if 1  // Used to evaluate the high-speed spi communication. Changed to #if 0 to comment it for formal release
{
	 volatile u32  i, j;
	 u8   byte;

	if(M8266WIFI_SPI_Interface_Communication_OK(&byte)==0) 	  									//	if SPI logical Communication failed
	{
		return -1;
	}
   
	i = 100000;
	j = M8266WIFI_SPI_Interface_Communication_Stress_Test(i);
	if( (j<i)&&(i-j>5)) 		//  if SPI Communication stress test failed
	{
	   return -1;
	}
 }
#endif

	if(M8266WIFI_SPI_Set_Opmode(mode, 0, &status)==0)  // set to AP Only mode, not saved // 1=STA Only, 2=AP Only, 3=STA+AP
    	return -1;
   return 0;
}




//wifi mode run as AP, send test data through UDP
int M8266_test_mode()
{
#define TEST_CONNECTION_TYPE   0	    // 0=WIFI module as UDP, 1=WIFI module as TCP Client, 2=WIFI module as TCP Server
#define TEST_REMOTE_ADDR		 "192.168.4.2"	 // "www.baidu.com"
#define TEST_REMOTE_PORT		 4321						 // 80
#define TEST_LOCAL_PORT  		4321


	uint16_t status = 0;
	uint8_t sta_ap_mode;
	
	M8266_drv_init();
	M8266_setup(2);

	if(M8266WIFI_SPI_Config_AP("Anylinkin", "1234567890", 4, 6, 0, &status)==0)  // set to 4=WPA_WPA2_PSK, not saved // 0=OPEN, 1=WEP, 2=WPA_PSK, 3=WPA2_PSK, 4=WPA_WPA2_PSK
    	return -1;

	if(M8266WIFI_SPI_Get_Opmode(&sta_ap_mode, &status)==0)  
    	return -1;

	if (sta_ap_mode != 2)
		return -1;

	if(M8266WIFI_SPI_Setup_Connection(TEST_CONNECTION_TYPE, TEST_LOCAL_PORT, TEST_REMOTE_ADDR, TEST_REMOTE_PORT, 0, 20, &status)==0)
	{
		return -1;
	}

#define TEST_SEND_DATA_SIZE   1024 //2048 // 1472 //1460

   	uint8_t  snd_data[TEST_SEND_DATA_SIZE];
	uint16_t sent = 0;
   	uint32_t total_sent = 0, MBytes = 0; 
	uint16_t batch;

 	 for(int i=0; i<TEST_SEND_DATA_SIZE; i++) snd_data[i]=i; 
	 
   	uint8_t link_no=0;
	
 	 for(batch=0; ; batch++)
	 {
		  snd_data[0]= batch>>8;    							// first two bytes using bacth to differentiate the continous packets 
			snd_data[1]= batch&0xFF;  
		  snd_data[TEST_SEND_DATA_SIZE-2]=0xFF;		// last two bytes using customised to lable end of a packet for the sake of searching for data verification. Here FF FF as an example

#if 1
		  if(total_sent> 1024*1024)
			{
				 MBytes++;
				 total_sent -= 1024*1024;
			}
#else		 
		  if( (batch%1024)==0)
				LED_set(0, (batch/1024)&0x01);	
#endif	

#if 0  // if use simple but less-efficiency transmission, changed to "#if 1"
			//u32 M8266WIFI_SPI_Send_Data_Block(u8 Data[], u32 Data_len, u16 tcp_packet_size, u8 link_no, u16* status); 
		  sent = M8266WIFI_SPI_Send_Data_Block(snd_data, TEST_SEND_DATA_SIZE, 1460, link_no, &status);
		  total_sent += sent;
			  
			if( (sent!=TEST_SEND_DATA_SIZE) || ( (status&0xFF)!= 0 ) ) 
			{
				if(  ((status&0xFF)==0x14)      // 0x14 = connection of link_no not present
				   ||((status&0xFF)==0x15) )    // 0x15 = connection of link_no closed
				{
					// do some work here, including re-establish the closed connect or link here and re-send the packet if any
					// additional work here
					  M8266HostIf_delay_us(249);	
				}
				else if	( (status&0xFF)==0x18)       // 0x18 = TCP server in listening states and no tcp clients connecting to so far
				{
					  M8266HostIf_delay_us(250);	
				}
				else if	( (status&0xFF)==0x1E)       // 0x1E: too many errors ecountered during sending can not fixed
				{
					  M8266HostIf_delay_us(251);	
				}
				else                                 // 0x10, 0x11 here may due to spi failure during sending, and normally packet has been sent partially, i.e. sent!=0
				{
						M8266HostIf_delay_us(200);
					// do some work here					  
					  if(sent<TEST_SEND_DATA_SIZE)
							 total_sent += M8266WIFI_SPI_Send_Data(snd_data+sent, TEST_SEND_DATA_SIZE-sent, link_no, &status);  // try to resend the left packet
				}
			}

#elif 0 // complex but high-efficiency transsmission test
			//u16 M8266WIFI_SPI_Send_Data(u8 data[], u16 data_len, u8 link_no, u16* status)
      sent = M8266WIFI_SPI_Send_Data(snd_data, TEST_SEND_DATA_SIZE, link_no, &status);
			total_sent += sent;
			
			//M8266WIFI_Module_delay_ms(10);
			
			if( (sent!=TEST_SEND_DATA_SIZE) || ( (status&0xFF)!= 0 ) ) 
			{
				if( (status&0xFF)==0x12 )  				   // 0x12 = Module send buffer full, and normally sent return with 0, i.e. this packet has not been sent anyway
				{                              
			      M8266HostIf_delay_us(250);       // if 500Kbytes/s, need 2ms for 1Kbytes packet to be sent. If use 250us here, may repeat query 8- times, but in a small interval
					  //M8266WIFI_Module_delay_ms(1);	 // if 500Kbytes/s, need 2ms for 1Kbytes packet to be sent. If use 1ms here,   may repeat query 2- times, but in a large interval
					  if(sent<TEST_SEND_DATA_SIZE)
					     total_sent += M8266WIFI_SPI_Send_Data(snd_data+sent, TEST_SEND_DATA_SIZE-sent, link_no, &status);  // try to resend it					
				}
				else if(  ((status&0xFF)==0x14)      // 0x14 = connection of link_no not present
					      ||((status&0xFF)==0x15) )    // 0x15 = connection of link_no closed
				{
					// do some work here, including re-establish the closed connect or link here and re-send the packet if any
					// additional work here
					  M8266HostIf_delay_us(249);	
				}
				else if	( (status&0xFF)==0x18)       // 0x18 = TCP server in listening states and no tcp clients connecting to so far
				{
					  M8266HostIf_delay_us(251);	
				}				
				else                                 // 0x10, 0x11 here may due to spi failure during sending, and normally packet has been sent partially, i.e. sent!=0
				{
						M8266HostIf_delay_us(200);
					// do some work here					  
					  if(sent<TEST_SEND_DATA_SIZE)
							 total_sent += M8266WIFI_SPI_Send_Data(snd_data+sent, TEST_SEND_DATA_SIZE-sent, link_no, &status);  // try to resend the left packet
				}
				
			}
#elif 0 // transsmission test, avoid skip
			{
			   #define M8266WIFI_SPI_SEND_DATA_BLOCK_MAX_LOOPS   1000
         #define tcp_packet_size 1024
         u16 loops     = 0;
			   u32 len       = TEST_SEND_DATA_SIZE;

         for(sent=0, loops=0; (sent<len)&&(loops<=M8266WIFI_SPI_SEND_DATA_BLOCK_MAX_LOOPS); loops++)
         {		
    	      sent += M8266WIFI_SPI_Send_Data_Block(snd_data+sent, len, tcp_packet_size, link_no, &status);
            if(sent>=len)  break;
			      if((status&0xFF) == 0x00)
			      {
			      }
		        else
			      {
				      if(   ((status&0xFF) == 0x14)      // 0x14 = connection of link_no not present
                 || ((status&0xFF) == 0x15)    // 0x15 = connection of link_no closed
                 || ((status&0xFF) == 0x18) )  // 0x18 = TCP server in listening states and no tcp clients connecting to so far
	            {
                 // add some failure process here
	            }
	            else
	            {
	               M8266HostIf_delay_us(100);
	            }
			      }
          } // end of for(...
			
			    total_sent += sent;
			} 
#elif 1 // efficient transsmission test, avoid skip
      {			
#define M8266WIFI_SPI_SEND_DATA_BLOCK_MAX_LOOPS   1000
#define tcp_packet_size 1024
        uint16_t loops     = 0;
		uint16_t len       = TEST_SEND_DATA_SIZE; 

         for(sent=0, loops=0; (sent<len)&&(loops<=M8266WIFI_SPI_SEND_DATA_BLOCK_MAX_LOOPS); loops++)
         {		
				    sent += M8266WIFI_SPI_Send_Data(snd_data+sent, ((len-sent)>tcp_packet_size)?tcp_packet_size:(len-sent), link_no, &status);
            if(sent>=len)  break;
			      if((status&0xFF) == 0x00)
			      {
			      }
		        else
			      {
				      if(   ((status&0xFF) == 0x14)      // 0x14 = connection of link_no not present
                 || ((status&0xFF) == 0x15)    // 0x15 = connection of link_no closed
                 || ((status&0xFF) == 0x18) )  // 0x18 = TCP server in listening states and no tcp clients connecting to so far
	            {
                 // add some failure process here
	            }
	            else
	            {
	               M8266HostIf_delay_us(100);
	            }
			     }
         } // end of for(...
			
			   total_sent += sent;
#endif			
			
	 } // end of for(batch=0; ; batch++)
 }

	return 0;
}

