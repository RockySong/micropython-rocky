#include "stdio.h"
#include "string.h"	
#include "fsl_gpio.h"
//#include "M8266WIFIDrv.h"
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


#define M8266WIFI_nRESET_PORT_MUX								IOMUXC_GPIO_AD_B0_13_GPIO1_IO13
#define M8266WIFI_nRESET_GPIO									GPIO1
#define M8266WIFI_nRESET_GPIO_PIN								13

#define M8266WIFI_DBG_IO_PORT_MUX								IOMUXC_GPIO_B1_09_GPIO2_IO25
#define M8266WIFI_DBG_IO_GPIO									GPIO2
#define M8266WIFI_DBG_IO_PIN									25

#define M8266WIFI_DBG_IO_PORT_MUX1								IOMUXC_GPIO_B1_08_GPIO2_IO24
#define M8266WIFI_DBG_IO_GPIO1									GPIO2
#define M8266WIFI_DBG_IO_PIN1									24

#define M8266WIFI_DBG_IO_PORT_MUX2								IOMUXC_GPIO_EMC_20_GPIO4_IO20
#define M8266WIFI_DBG_IO_GPIO2									GPIO4
#define M8266WIFI_DBG_IO_PIN2									20

#define M8266WIFI_DBG_IO_PORT_MUX3								IOMUXC_GPIO_EMC_19_GPIO4_IO19
#define M8266WIFI_DBG_IO_GPIO3									GPIO4
#define M8266WIFI_DBG_IO_PIN3									19

#else
// default board is i.MX RT1050/60 EVK

#define M8266WIFI_INTERFACE_SPI									LPSPI1
#define M8266WIFI_SPI_CLK_MUX									IOMUXC_GPIO_SD_B0_00_LPSPI1_SCK
#define M8266WIFI_SPI_MOSI_MUX									IOMUXC_GPIO_SD_B0_02_LPSPI1_SDO
#define M8266WIFI_SPI_MISO_MUX									IOMUXC_GPIO_SD_B0_03_LPSPI1_SDI

#define M8266WIFI_SPI_nCS_PORT_MUX								IOMUXC_GPIO_AD_B1_02_GPIO1_IO18
#define M8266WIFI_SPI_nCS_GPIO									GPIO1
#define M8266WIFI_SPI_nCS_GPIO_PIN								18


#define M8266WIFI_nRESET_PORT_MUX									IOMUXC_GPIO_AD_B1_03_GPIO1_IO19
#define M8266WIFI_nRESET_GPIO										GPIO1
#define M8266WIFI_nRESET_GPIO_PIN									19

#define M8266WIFI_DBG_IO_PORT_MUX								IOMUXC_GPIO_AD_B0_10_GPIO1_IO10
#define M8266WIFI_DBG_IO_GPIO									GPIO1
#define M8266WIFI_DBG_IO_PIN									10

#define M8266WIFI_DBG_IO_PORT_MUX1								IOMUXC_GPIO_AD_B0_09_GPIO1_IO09
#define M8266WIFI_DBG_IO_GPIO1									GPIO1
#define M8266WIFI_DBG_IO_PIN1									9


#define M8266WIFI_DBG_IO_PORT_MUX2								IOMUXC_GPIO_AD_B1_08_GPIO1_IO24
#define M8266WIFI_DBG_IO_GPIO2									GPIO1
#define M8266WIFI_DBG_IO_PIN2									24
#endif


#ifndef SPI_BaudRatePrescaler_2
#define SPI_BaudRatePrescaler_2         ((uint32_t)0x00000000U)
#define SPI_BaudRatePrescaler_4         ((uint32_t)0x00000002U)
#define SPI_BaudRatePrescaler_6         ((uint32_t)0x00000004U)
#define SPI_BaudRatePrescaler_8         ((uint32_t)0x00000006U)
#define SPI_BaudRatePrescaler_12        ((uint32_t)0x0000000AU)
#define SPI_BaudRatePrescaler_16        ((uint32_t)0x0000000EU)
#define SPI_BaudRatePrescaler_24        ((uint32_t)0x00000016U)
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
    //IOMUXC_SetPinConfig(M8266WIFI_SPI_MISO_MUX,0x3069);
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

void LED_DBG_STATE(uint8_t idx)
{
	if (idx < 5)
		led_state(idx, 1);
}

void LED_DBG_CLR(uint8_t idx)
{
	if (idx < 5)
		led_state(idx, 0);
}

void LED_DBG_CLR_ALL()
{
	led_state(1, 0);
    led_state(2, 0);
    led_state(3, 0);
    led_state(4, 0);
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
			default:
				break;
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
		if(((M8266WIFI_DBG_IO_GPIO2->DR) >> M8266WIFI_DBG_IO_PIN2) & 0x1U)
			gpio_config.outputLogic = 0;
		else
			gpio_config.outputLogic =	1;
		
		IOMUXC_SetPinMux(M8266WIFI_DBG_IO_PORT_MUX2, 0);			
		IOMUXC_SetPinConfig(M8266WIFI_DBG_IO_PORT_MUX2, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
		gpio_config.direction			= kGPIO_DigitalOutput;				// Output
		gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt														// Initially High
		GPIO_PinInit(M8266WIFI_DBG_IO_GPIO2, M8266WIFI_DBG_IO_PIN2, &gpio_config);
	}
	else if (idx == 3)
	{
		if(((M8266WIFI_DBG_IO_GPIO3->DR) >> M8266WIFI_DBG_IO_PIN3) & 0x1U)
			gpio_config.outputLogic = 0;
		else
			gpio_config.outputLogic =	1;
		
		IOMUXC_SetPinMux(M8266WIFI_DBG_IO_PORT_MUX3, 0);			
		IOMUXC_SetPinConfig(M8266WIFI_DBG_IO_PORT_MUX3, 0xB069);   // 0xB069=b0| 10|11 0|000 01|10 1|00|1 -> Hysteresis Disabled, 100KOhm Pullup, pull enabled, 100MHz, R0/5=52, Fast Slew Rate 
		gpio_config.direction			= kGPIO_DigitalOutput;				// Output
		gpio_config.interruptMode	=	kGPIO_NoIntmode;							// NO Interrupt														// Initially High
		GPIO_PinInit(M8266WIFI_DBG_IO_GPIO3, M8266WIFI_DBG_IO_PIN3, &gpio_config);
	}
	
}

void M8266_host_interface_init()
{
#if ESP8266_SPI_EN
	uint32_t lpspi_clk;
	uint8_t  lpspi_clk_divid_def =  2; // Default Clock divider = 2, therefore SPI Source Clock =192MHz as default
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
    lpspi_config.pcsToSckDelayInNanoSec					=  160;//5; // The delay is (SCKPCS+1)cycles of lpspi_clk. Therefore, at least 5.02ns @ 192MHz
    lpspi_config.lastSckToPcsDelayInNanoSec			=  160;//5; // The delay is (PCSSCK+1)cycles of lpspi_clk. Therefore, at least 5.02ns @ 192MHz
    lpspi_config.betweenTransferDelayInNanoSec	= 160;//10; // The delya is (DBT   +2)cycles of lpspi_clk. Therefore, at least 5.02ns @ 192MHz 

	lpspi_config.pcsToSckDelayInNanoSec = 1000000000 / 12000000 * 2;
    lpspi_config.lastSckToPcsDelayInNanoSec = 1000000000 / 12000000 * 2;
    lpspi_config.betweenTransferDelayInNanoSec = 1000000000 / 12000000 * 2;
    
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
void M8266HostIf_Set_nRESET_Pin(uint8_t level)
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
void M8266HostIf_Set_SPI_nCS_Pin(uint8_t level)
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
void M8266HostIf_delay_us(uint8_t nus)
{
   mp_hal_delay_us(nus);
}

void M8266WIFI_Module_delay_ms(uint16_t nms)
{
	 uint16_t i, j;
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

void M8266HostIf_SPI_SetSpeed(uint32_t SPI_BaudRatePrescaler)
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
	M8266HostIf_SPI_SetSpeed(SPI_BaudRatePrescaler_32);					// Setup SPI Clock. Here 192/8 = 24 MHz for for iMXRT10xx.
	spi_clk = 6000000;

	//It is very important to call M8266HostIf_SPI_Select() to tell the driver which SPI you used
 	 //and how faster the SPI clock you used. The function must be called before SPI access
	if(M8266HostIf_SPI_Select((uint32_t)M8266WIFI_INTERFACE_SPI, spi_clk, &status)==0)
	{
		return -1;
	}
	volatile uint32_t  i, j;
	uint8_t   byte;

	if(M8266WIFI_SPI_Interface_Communication_OK(&byte)==0) 	  									//	if SPI logical Communication failed
	{
		return -1;
	}
   
	i = 100000;
	j = M8266WIFI_SPI_Interface_Communication_Stress_Test(i);
	if( (j<i)&&(i-j>10)) 		//  if SPI Communication stress test failed
	{
	   return -1;
	}

	if(M8266WIFI_SPI_Set_Opmode(mode, 0, &status)==0)  // set to AP Only mode, not saved // 1=STA Only, 2=AP Only, 3=STA+AP
    	return -1;
   return 0;
}




//wifi mode run as AP, send test data through UDP


