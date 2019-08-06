/********************************************************************
 * M8266WIFIDrv.h
 * .Description
 *     Header file of M8266WIFI Dirver Layer
 * .Copyright(c) Anylinkin Technology 2015.5-
 *     IoT@anylinkin.com
 *     http://www.anylinkin.com
 *     http://anylinkin.taobao.com
 * .Author:	wzuo(wzuo@anylinkin.com, 1521340710@qq.com)
 * .History
 *     - 20180828 V1.1.8-4
 ********************************************************************/
#ifndef _M8266WIFI_H_
#define _M8266WIFI_H_

//// Holtek HT32F16XX
//#include "ht32f1655_56.h"

//// TI's MSP430x1xx, MSP430x552x, TMS320F28335, which use usigned long for 32-bit
//typedef unsigned char     uint8_t;
//typedef unsigned int  	  uint16_t;
//typedef unsigned long  	  uint32_t;
//typedef   signed char     sint8_t;

//Others which use unsigned int for 32-bit
typedef unsigned char         uint8_t;
typedef unsigned short int    uint16_t;
typedef unsigned int          uint32_t;
typedef   signed char         sint8_t;


typedef uint32_t  	 u32;
typedef uint16_t 	 u16;
typedef uint8_t  	 u8;
typedef sint8_t          s8;

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   1. APIs releated to SPI Host I/F Function Configuration and Performance Test // 
//       - M8266HostIf_SPI_Select                                        4.1.1    //
//       - M8266WIFI_SPI_Interface_Communication_OK                      4.1.2    //
//       - M8266WIFI_SPI_Interface_Communication_Stress_Test             4.1.3    //
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

/***********************************************************************************
 * M8266HostIf_SPI_Select                                                          *
 * Description                                                                     *
 *  1.To specify the SPI used by providing the base address of SPI used            *
 *  2.Called when Initial M8266WIFI Module before perform SPI read/write           *
 * Parameter(s):                                                                   *
 *  1. spi_base_addr: the base address of used                                     *
 *     you may use M8266WIFI_INTERFACE_SPI defined in brd_cfg.h as example         *
 *  2. spi_clock: the spi_clock you set in HZ                                      *
 *     e.g.  10500000 for 10.5MHz                                                  *
 *  3. status when error                                                           *
 * Return:                                                                         *
 *   1. success                                                                    *
 *   0. failure                                                                    *
 ***********************************************************************************/
u8 M8266HostIf_SPI_Select(uint32_t spi_base_addr, uint32_t spi_clock, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Interface_Communication_OK                                        *
 * Description                                                                     *
 *  1. To write a byte and then read out from M8266WIFI module SPI registers       *
 *     to check whether the logical fundamentai SPI communication (read/write)     *
 *     is stablly OK under the clock and interconnection                           *
 *  2. Called during the initialization of M8266WIFI Module                        *
 *     DONOT CALL IT AFTER MODULE HAS STARTED THE NORMAL OPERATION                 *
 * Parameter(s):                                                                   *
 *  1. byte:  a pointer to the byte read out during test                           *
 *     - normally the data should be 0x41 during test.                             *
 *       if it is 0x41, this function will return 1 for success as well            *
 *     - If readout other value, it may indicating the fundamental SPI             *
 *       communication is not OK. e.g. 0xFF may indicates that your spi            *
 *       port has problem such incoreect interconnection or initialization         *
 *     - user NULL if you don't expect this data                                   * 
 * Return:                                                                         *
 *   1. success                                                                    *
 *   0. failure                                                                    *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Interface_Communication_OK(u8* byte);	

/***********************************************************************************
 * M8266WIFI_SPI_Interface_Communication_Stress_Test                               *
 * Description                                                                     *
 *  1. To perform a batch of byte write and then read out from M8266WIFI module    *
 *     SPI register to check whether the high-speed and bulk fundamentai SPI       *
 *     communication (read/write) is stablly OK under the clock                    *
 *  2. Called during the initialization of M8266WIFI Module                        *
 *     DONOT CALL IT AFTER MODULE HAS STARTED THE NORMAL OPERATION                 *
 *  3. You may call it in your debug code for speed stablility test                *
 *     during your stress performance test to your produc                          * 
 * Parameter(s):                                                                   *
 *  1. max_times:  the max write-read times used for the stress test               *
 *     - And the test data to be written will be nimber byte of data               *
 *       from 0 to  max_times                                                      *
 * Return:                                                                         *
 *  1. success times of write-read-verify                                          *
 ***********************************************************************************/
u32 M8266WIFI_SPI_Interface_Communication_Stress_Test(u32 max_times);


////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   2. APIs releated to Module WIFI fundamental Query and Configurations via SPI //
//       - M8266WIFI_SPI_Get_Opmode                                      4.2.1    //
//       - M8266WIFI_SPI_Set_Opmode                                      4.2.2    //
//                                                                                //
//       - M8266WIFI_SPI_STA_Connect_Ap                                  4.2.3    //
//       - M8266WIFI_SPI_STA_DisConnect_Ap                               4.2.4    //
//       - M8266WIFI_SPI_Config_STA_StaticIpAddr                         4.2.5    //
//       - M8266WIFI_SPI_Query_STA_Dhcpc                                 4.2.6    //
//       - M8266WIFI_SPI_Enable_STA_Dhcpc                                4.2.7    //
//       - M8266WIFI_SPI_Get_STA_Connection_Status                       4.2.8    //
//       - M8266WIFI_SPI_Get_STA_IP_Addr                                 4.2.9    //
//       - M8266WIFI_SPI_STA_Query_Current_SSID_And_RSSI                 4.2.10   //
//       - M8266WIFI_SPI_STA_Scan_Signals                                4.2.11   //
//       - M8266WIFI_SPI_Set_STA_Hostname                                4.2.12   //
//       - M8266WIFI_SPI_Get_STA_Hostname                                4.2.13   //
//       - M8266WIFI_SPI_Query_STA_Param                                 4.2.14   //
//                                                                                //
//       - M8266WIFI_SPI_Config_AP                                  		 4.2.15   //
//       - M8266WIFI_SPI_Query_AP_Param                             		 4.2.16   //
//       - M8266WIFI_SPI_Config_AP_Param                             		 4.2.17   //
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

/***********************************************************************************
 * M8266WIFI_SPI_Get_Opmode                                                        *
 * .Description:                                                                   *
 *     To get the op_mode(STA, AP, or STA+AP) of M8266WIFI module via SPI          *
 * .Parameter(s)                                                                   *
 *     1. op_mode : pointer to the op_mode returned                                *
 *        =1, 			STA mode                                                       *
 *        =2, 			AP mode                                                        *
 *        =3, 			STA+AP mode                                                    *
 *     2. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Get_Opmode(u8* op_mode, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Set_Opmode                                                        *
 * .Description:                                                                   *
 *     To set op_mode(STA, AP, or STA+AP) of M8266WIFI module via SPI              *
 * .Parameter(s)                                                                   *
 *     1. op_mode : the op_mode to set                                             *
 *        =1, 			set to STA mode                                                *
 *        =2, 			set to AP mode                                                 *
 *        =3, 			set to STA+AP mode                                             *
 *        =others, 	set to STA+AP mode                                             *
 *     2. saved   : to save into flash the opmode or not                           *
 *        =0,       not saved, i.e. after reboot setting will restore to previous  *
 *        =others,  saved, i.e. after reboot, the saved setting will be loaded     *
 *                  PLEASE DO NOT CALL IT EACH TIME OF BOOTUP WITH SAVED != 0      *
 *                  OR, THE FLASH ON MODULE MIGHT GO TO FAILURE DUE TO LIFT CYCLE  *
 *                  OF WRITE                                                       *
 *     3. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Set_Opmode(u8 op_mode, u8 saved, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_STA_Connect_Ap                                                    *
 * .Description:                                                                   *
 *     To connect the M8266WIFI STA to an AP or router via SPI                     *
 * .Parameter(s)                                                                   *
 *     1. ssid    : the ssid of AP connected to. Max len = 32 Bytes                *
 *     2. password: the passowrd of AP connecting to. Max len = 64 Bytes           *
 *     3. saved   : to save the ssid and password into flash the opmode or not     *
 *        =0,       not saved, i.e. after reboot setting will restore to previous  *
 *        =others,  saved, i.e. after reboot, the saved setting will be loaded     *
 *                  PLEASE DO NOT CALL IT EACH TIME OF BOOTUP WITH SAVED != 0      *
 *                  OR, THE FLASH ON MODULE MIGHT GO TO FAILURE DUE TO LIFT CYCLE  *
 *                  OF WRITE                                                       *
 *     4. timeout_in_s: max time in seconds waiting for being connected            *
 *     5. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 *                  errcode(LSB)                                                   *
 *                    = 0x32, if connect timeout                                   *
 *                    = 0x4A, if SSID not found or not present                     *
 *                    = 0x4B, if SSID found but authentication failed,wrong password*
 *                    = 0x4C, if module in AP Only mode                            *
 *                    = 0x4D, if failed due to other reasons                       *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_STA_Connect_Ap(u8 ssid[32], u8 password[64], u8 saved, u8 timeout_in_s, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_STA_DisConnect_Ap                                                 *
 * .Description:                                                                   *
 *     To DisConnect the M8266WIFI STA from an AP or router via SPI                *
 * .Parameter(s)                                                                   *
 *     1. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_STA_DisConnect_Ap(u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Config_STA_StaticIpAddr                                           *
 * .Description:                                                                   *
 *     To config ip addresses of the module STA via SPI                            *
 * .Parameter(s)                                                                   *
 *     1. ip_addr : the ip address to set                                 				 *
 *                  - SHOULD be string like "192.168.1.103"                        *
 *                  - USE NULL if don't expect to set it                           *
 *     2. gw_addr : the gateway address to set                             				 *
 *                  - SHOULD be string like "192.168.1.1"                          *
 *                  - USE NULL if don't expect to set it                           *
 *     3. netmask : the netmask address to set                             				 *
 *                  - SHOULD be string like "255.255.255.0"                        *
 *                  - USE NULL if don't expect to set it                           *
 *     4  saved                                                                    *
 *             = 0,      config not saved, only this time valid                    *
 *             = others, config be saved, and valid upon next boot                 *
 *               if saved,  module bootup with dhcp diabled using stored           *
 *                          ip address                                             *
 *                  PLEASE DO NOT CALL IT EACH TIME OF BOOTUP WITH SAVED != 0      *
 *                  OR, THE FLASH ON MODULE MIGHT GO TO FAILURE DUE TO LIFT CYCLE  *
 *                  OF WRITE                                                       *
 *     5. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 * .Note(s):                                                                       *
 *     Call this API will disable the dhcpc                                        *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Config_STA_StaticIpAddr(char* ip_addr, char* gw_addr, char* netmask, u8 saved, u16* status);
//below macro used to keep compatible with previous API
#define M8266WIFI_SPI_Config_STA_Static_IP_Addr(ip_addr, gw_addr, netmask, status)  M8266WIFI_SPI_Config_STA_StaticIpAddr(ip_addr,gw_addr,netmask,0,status)

/***********************************************************************************
 * M8266WIFI_SPI_Query_STA_Dhcpc         	                                         *
 * .Description:                                                                   *
 *     To query whether the dhcpc enabled or not of the module STA via SPI         *
 * .Parameter(s)                                                                   *
 *     1. enable: pointer to return whether diabled or not           				       *
 *             = 0, dhcpc disabled                                                 *
 *             = 1, dhcpc enabled                                                  *
 *     2. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Query_STA_Dhcpc(u8* enabled, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Enable_STA_Dhcpc       	                                         *
 * .Description:                                                                   *
 *     To enable or diable the dhcpc of the module STA via SPI                     *
 * .Parameter(s)                                                                   *
 *     1. enable                                                     				       *
 *             = 0,      disable the dhcpc, and module uses static ip address      *
 *             = others, enable  the dhcpc, and mdule uses ip address via dhcp     *
 *     2  saved                                                                    *
 *             = 0,      config not saved, only this time valid                    *
 *             = others, config be saved, and valid upon next boot                 *
 *               kindly reminded that:                                             *
 *               - if saved=1 with enable=1, module bootup with dhcp enabled       *
 *               - if saved=1 with enable=0, module bootup with dhcp disabled      *
 *                 and using previous stored static ip address by                  *
 *                 M8266WIFI_SPI_Config_STA_StaticIpAddr with saved != 0           *
 *                 So, make sure an valid static ip address stored before          *
 *               -  PLEASE DO NOT CALL IT EACH TIME OF BOOTUP WITH SAVED != 0      *
 *                  OR, THE FLASH ON MODULE MIGHT GO TO FAILURE DUE TO LIFT CYCLE  *
 *                  OF WRITE                                                       *
 *     3. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Enable_STA_Dhcpc(u8 enable, u8 saved, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Get_STA_Connection_Status                                         *
 * .Description:                                                                   *
 *     To get the connecting status of M8266WIFI STA to AP or routers via SPI      *
 * .Parameter(s)                                                                   *
 *     1. connection_status :  the connection status returned                      *
 *          =0, if station is in idle                                              *
 *          =1, if station is connecting to an AP                                  *
 *          =2, if station is to connect to an AP but with an wrong password       *
 *          =3, if station is to connect to an AP which is not found               *
 *          =4, if station failed to connect to the AP                             *
 *          =5, if station is connected to the AP and has got the IP successfully  *
 *          =255, if the module is in AP-only mode                                 *
 *     2. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Get_STA_Connection_Status(u8* connection_status, u16* status);


/***********************************************************************************
 * M8266WIFI_SPI_Get_STA_IP_Addr                                                   *
 * .Description:                                                                   *
 *     To get ip address of M8266WIFI STA via SPI                                  *
 * .Parameter(s)                                                                   *
 *     1. sta_ip :  the sta ip address returned if successful                      *
 *                  "0.0.0.0" returned if in AP-only mode or ip not achieved       *
 *     2. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Get_STA_IP_Addr(char* sta_ip , u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_STA_Query_Current_SSID_And_RSSI                                   *
 * .Description:                                                                   *
 *     To get current AP info (SSID and RSSI) M8266WIFI STA connected to           *
 * .Parameter(s)                                                                   *
 *     1. ssid    : the current SSID returned which m8266wifi sta connected to     *
 *     2. rssi    : the rssi of current connected ssid. 31 if error                *
 *     3. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_STA_Query_Current_SSID_And_RSSI(char* ssid, s8* rssi, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_STA_Scan_Signals                                                  *
 * .Description:                                                                   *
 *     To perform a scanning procedure, the scanned signals sorted by rssi         *
 * .Parameter(s)                                                                   *
 *     1. scanned_signals : the return signals after scanning                      *
 *     2. max_signals     : max counts of signals to scan                          *
 *     3. channel         : channel to scan. USE 0xFF to scan all channles         *
 *     4. timeout_in_s    : time out in seconds                                    *
 *     5. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *    !=0, signal numbers scanned succesfully                                      *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 struct ScannedSigs{
	char ssid[32];
	u8   channel;
	u8   authmode;
	s8   rssi;
};
u8 M8266WIFI_SPI_STA_Scan_Signals(struct ScannedSigs scanned_signals[], u8 max_signals, 
																  u8 channel, u8 timeout_in_s, u16* status);

/**********************************************************************************
 * M8266WIFI_SPI_Get_STA_Hostname								                                  *
 * .Description:																																	*
 *     To get the hostname of the STA via SPI                                     *
 *     Note: Will return failure if module in AP-Only Mode                        *
 * .Parameter(s)																																	*
 *     1. hostbame 		: the hostame to get  		       														*
 *     2. status  		: pointer to the status upon failure												*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
u8 M8266WIFI_SPI_Get_STA_Hostname(char hostname[28+1], u16* status);

/**********************************************************************************
 * M8266WIFI_SPI_Set_STA_Hostname								                                  *
 * .Description:																																	*
 *     To set up the hostname of the STA via SPI                                  *
 *     Note: Will return failure if module in AP-Only Mode                        *
 * .Parameter(s)																																	*
 *     1. hostbame 		: the hostame to setup		       														*
 *     2. status  		: pointer to the status upon failure												*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
u8 M8266WIFI_SPI_Set_STA_Hostname(char hostname[28+1], u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Query_STA_Param                                                   *
 * .Description:                                                                   *
 *     To query a parameter of the module STA via SPI                              *
 * .Parameter(s)                                                                   *
 *     1. param_type : the parame type to set, enum of STA_PARAM_TYPE      				 *
 *                      STA_PARAM_TYPE_SSID					= 0,                           *
 *                      STA_PARAM_TYPE_PASSWORD			= 1,                           *
 *                      STA_PARAM_TYPE_CHANNEL			= 2,                           *
 *                      STA_PARAM_TYPE_HOSTNAME			= 3,                           *
 *										 	STA_PARAM_TYPE_USE_BSSID		= 4,													 *
 *                      STA_PARAM_TYPE_BSSID				= 5,													 *
 *											STA_PARAM_TYPE_RSSI					= 6,													 *
 *											STA_PARAM_TYPE_IP_ADDR			= 7,													 *
 *                      STA_PARAM_TYPE_GATEWAY_ADDR	= 8,                           *
 *                      STA_PARAM_TYPE_NETMASK_ADDR	= 9,                           * 
 *                     	STA_PARAM_TYPE_MAC					= 11,                          *
 *     2. param      : pointer to the param value returned                         *
 *     3. param_len  : pointer to length the param, unit in bytes                  *
 *     4. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
typedef enum{
	STA_PARAM_TYPE_SSID						= 0,
	STA_PARAM_TYPE_PASSWORD				= 1,
	STA_PARAM_TYPE_CHANNEL				= 2,
	STA_PARAM_TYPE_HOSTNAME				= 3,
	STA_PARAM_TYPE_USE_BSSID			= 4,
	STA_PARAM_TYPE_BSSID					= 5,
	STA_PARAM_TYPE_RSSI						= 6,
	STA_PARAM_TYPE_IP_ADDR				= 7,
	STA_PARAM_TYPE_GATEWAY_ADDR		= 8,
	STA_PARAM_TYPE_NETMASK_ADDR		= 9,
	STA_PARAM_TYPE_DHCPC					= 10,
	STA_PARAM_TYPE_MAC						= 11,
}STA_PARAM_TYPE;
u8 M8266WIFI_SPI_Query_STA_Param(STA_PARAM_TYPE param_type, u8* param, u8* param_len, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Config_AP                                                         *
 * .Description:                                                                   *
 *     To config the module AP via SPI                                             *
 * .Parameter(s)                                                                   *
 *     1. ssid    : the ssid of AP, Max Size=13 Bytes                              *
 *     2. password: the passowrd of AP, Max Size=13 Bytes                          *
 *     3. enc     : authorisation mode, valid value is 0~4                         *
 *                  = 0, OPEN                                                      *
 *                  = 1, WEP                                                       *
 *                  = 2, WPA_PSK                                                   *
 *                  = 3, WPA2_PSK                                                  *
 *                  = 4, WPA_WPA2_PSK                                              *
 *                  = others, OPEN                                                 *
 *     4. channel: the channel of AP, valid value is 1~13.                         *
 *        - Value other than 1~13 will set to channel 6                            *
 *     5. saved   : to save the ssid and password into flash the opmode or not     *
 *        =0,       not saved, i.e. after reboot setting will restore to previous  *
 *        =others,  saved, i.e. after reboot, the saved setting will be loaded     *
 *                  PLEASE DO NOT CALL IT EACH TIME OF BOOTUP WITH SAVED != 0      *
 *                  OR, THE FLASH ON MODULE MIGHT GO TO FAILURE DUE TO LIFT CYCLE  *
 *                  OF WRITE                                                       *
 *     6. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Config_AP(u8 ssid[13+1], u8 password[13+1], u8 enc, u8 channel, u8 saved, u16* status);

typedef enum{
	AP_PARAM_TYPE_SSID 						= 0,
	AP_PARAM_TYPE_PASSWORD 				= 1,
	AP_PARAM_TYPE_CHANNEL 				= 2,
	AP_PARAM_TYPE_AUTHMODE 				= 3,
	AP_PARAM_TYPE_SSID_HIDDEN 		= 4,
	AP_PARAM_TYPE_MAX_CONNECT 		= 5,
	AP_PARAM_TYPE_BEACON_INTERVAL = 6,	
	AP_PARAM_TYPE_IP_ADDR					= 7,
  AP_PARAM_TYPE_GATEWAY_ADDR	  = 8,
  AP_PARAM_TYPE_NETMASK_ADDR	  = 9,
  AP_PARAM_TYPE_PHY_MODE			  = 10,
  AP_PARAM_TYPE_MAC						  = 11
}AP_PARAM_TYPE; 
/***********************************************************************************
 * M8266WIFI_SPI_Query_AP_Param                                                    *
 * .Description:                                                                   *
 *     To query a parameter of the module AP via SPI                               *
 * .Parameter(s)                                                                   *
 *     1. param_type : the parame type to set, enum of AP_PARAM_TYPE       				 *
 *                      AP_PARAM_TYPE_SSID 						= 0,												 *
 *                      AP_PARAM_TYPE_PASSWORD 				= 1,												 *
 *                      AP_PARAM_TYPE_CHANNEL 				= 2,												 *
 *                      AP_PARAM_TYPE_AUTHMODE 				= 3,												 *
 *                      AP_PARAM_TYPE_SSID_HIDDEN 		= 4,												 *
 *                      AP_PARAM_TYPE_MAX_CONNECT 		= 5,												 *
 *                      AP_PARAM_TYPE_BEACON_INTERVAL = 6,												 *
 *                      AP_PARAM_TYPE_IP_ADDR					= 7,											   *
 *                      AP_PARAM_TYPE_GATEWAY_ADDR	  = 8,                         *
 *                      AP_PARAM_TYPE_NETMASK_ADDR	  = 9,                         *
 *                      AP_PARAM_TYPE_PHY_MODE			  = 10,												 *
 *                      AP_PARAM_TYPE_MAC						  = 11												 *
 *     2. param      : pointer to the param value returned                         *
 *     3. param_len  : pointer to length the param, unit in bytes                  *
 *     4. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Query_AP_Param(AP_PARAM_TYPE param_type, u8* param, u8* param_len, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Config_AP_Param                                                   *
 * .Description:                                                                   *
 *     To config a parameter of the module AP via SPI                              *
 * .Parameter(s)                                                                   *
 *     1. param_type : the parame type to set, enum of AP_PARAM_TYPE       				 *
 *                      AP_PARAM_TYPE_SSID 						= 0,												 *
 *                      AP_PARAM_TYPE_PASSWORD 				= 1,												 *
 *                      AP_PARAM_TYPE_CHANNEL 				= 2,												 *
 *                      AP_PARAM_TYPE_AUTHMODE 				= 3,												 *
 *                      AP_PARAM_TYPE_SSID_HIDDEN 		= 4,												 *
 *                      AP_PARAM_TYPE_MAX_CONNECT 		= 5,												 *
 *                      AP_PARAM_TYPE_BEACON_INTERVAL = 6,												 *
 *                      AP_PARAM_TYPE_IP_ADDR					= 7												   *
 *                      AP_PARAM_TYPE_GATEWAY_ADDR	  = 8,                         *
 *                      AP_PARAM_TYPE_NETMASK_ADDR	  = 9,                         * 
 *     2. param      : pointer to the param value                                  *
 *     3. param_len  : length the param, unit in bytes                             *
 *     4. saved   : to save the param into flash or not												     *
 *        =0,       not saved, i.e. after reboot setting will restore to previous  *
 *        =others,  saved, i.e. after reboot, the saved setting will be loaded     *
 *                  PLEASE DO NOT CALL IT EACH TIME OF BOOTUP WITH SAVED != 0      *
 *                  OR, THE FLASH ON MODULE MIGHT GO TO FAILURE DUE TO LIFT CYCLE  *
 *                  OF WRITE                                                       *
 *     5. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Config_AP_Param(AP_PARAM_TYPE param_type, u8* param, u8 param_len, u8 saved, u16* status);


////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   3. APIs releated to Module WIFI TCP/UDP Connection Operations via SPI        //
//       - M8266WIFI_SPI_Setup_Connection                                4.3.1    //
//       - M8266WIFI_SPI_DisConnect_Connection                           4.3.2    //
//       - M8266WIFI_SPI_Delete_Connection                               4.3.3    //
//       - M8266WIFI_SPI_Query_Connection                                4.3.4    //

//       - M8266WIFI_SPI_Op_Multicuast_Group														 4.3.5    //
//                                                                                //
//       - M8266WIFI_SPI_Set_TcpServer_Auto_Discon_Timeout               4.3.6    //
//       - M8266WIFI_SPI_Query_Max_Clients_Allowed_To_A_Tcp_Server       4.3.7    //
//       - M8266WIFI_SPI_Config_Max_Clients_Allowed_To_A_Tcp_Server      4.3.8    //
//       - M8266WIFI_SPI_List_Clients_On_A_TCP_Server                    4.3.9    //
//       - M8266WIFI_SPI_Disconnect_TcpClient                            4.3.10   //

//       - M8266WIFI_SPI_Query_Last_Tcp_Disconnect_Cause                 4.3.11   //
//       - M8266WIFI_SPI_Query_Tcp_Send_Retry_Max                        4.3.12   //
//       - M8266WIFI_SPI_Config_Tcp_Retran_Max                           4.3.13   //
//       - M8266WIFI_SPI_Query_Tcp_Mss                                   4.3.14   //
//       - M8266WIFI_SPI_Query_Tcp_Window_num                            4.3.15   //
//       - M8266WIFI_SPI_Config_Tcp_Window_num                           4.3.16   //
//                                                                                //
//       - SPI_STA_Get_HostIP_by_HostName                                4.3.17   //
//
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
/***********************************************************************************
 * M8266WIFI_SPI_Setup_Connection                                                  *
 * .Description:                                                                   *
 *     To setup a UDP connection or an TCP client connection via SPI               *
 * .Parameter(s)                                                                   *
 *     1. tcp_udp      : connection type                                           *
 *                       =0, udp                                                   *
 *                       =1, tcp client                                            *
 *                       =2, tcp server                                            *
 *     2. local_port   : local_port specified                                      *
 *                       =0, M8266WIFI module will generate a random local port    *
 *                      !=0, the local_port specified here will be used            *
 *     3. remote_addr  : string of ip or dns address of the remote connection      *
 *     4. remote_port  : port of remote connection                                 *
 *     5. link_no      : the number of link used for multiple links. Max 4         *
 *     6. timeout_in_s : the max timeout connecting to a remote, unit in seconds   *
 *     7. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Setup_Connection(u8 tcp_udp, u16 local_port, 
																	char* remote_addr, u16 remote_port, 
																	u8 link_no, u8 timeout_in_s, u16* status);
																	
/***********************************************************************************
 * M8266WIFI_SPI_Disconnect_Connection                                             *
 * .Description:                                                                   *
 *     To disconnect the connections on M8266WIFI TCP server via SPI               *
 * .Parameter(s)                                                                   *
 *     1. link_no : the number of link to be deleted/disconnected                  *
 *     2. status  : pointer to the status upon failure                             *
 *     3. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 *                  errcode(LSB)                                                   *
 *                    = 0x54, disconnect a socket not present                      *
 *                    = 0x55, disconnect a TCP socket when busy in receiving       *
 *                    = 0x56, disconnect a TCP socket when busy in reading         *
 *                    = 0x57, no need to disconnect the sockets since it is        *
 *                            - UDP, using M8266WIFI_SPI_Delete_Connection, or     *
 *                            - TCP Server without clients connecting to, or       *
 *                            - TCP Client already disconnected                    *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Disconnect_Connection(u8 link_no, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Delete_Connection                                                 *
 * .Description:                                                                   *
 *     To disconnect and delete a client connection on M8266WIFI via SPI           *
 * .Parameter(s)                                                                   *
 *     1. link_no : the number of link to be deleted/disconnected                  *
 *     2. status  : pointer to the status upon failure                             *
 *     3. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 *                  errcode(LSB)                                                   *
 *                    = 0x54, delete a socket not present                          *
 *                    = 0x55, delete a socket when busy in receiving               *
 *                    = 0x56, delete a socket when busy in reading                 *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Delete_Connection(u8 link_no, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Query_Connection                                                  *
 * .Description:                                                                   *
 *     To Query the information about a connection on M8266WIFI via SPI            *
 *     including connection type, state, local port, remote_ip and port, etc       *
 * .Parameter(s)                                                                   *
 *     1. link_no 				: the number of link to query                            *
 *     2. connection_type	:	pointer to the connection type returned                *
 *                          If you don't expected this value returned, use NULL    *
 *                          = 0, udp                                               *
 *                          = 1, tcp Client                                        *
 *                          = 2, tcp Server                                        *
 *                          = others, invalid                                      *
 *                          Use NULL if you don't expect it returned               *
 *     3. connection_state:	pointer to the connection state returned               *
 *                          = 0, invalid                                           *
 *                          = 1, wait                                              *
 *                          = 2, listen                                            *
 *                          = 3, connect                                           *
 *                          = 4, write                                             *
 *                          = 5, read                                              *
 *                          = 6, close                                             *
 *                          = others, invalid                                      *
 *                          Use NULL if you don't expect it returned               *
 *     4. local_port      : pointer to the local port returned                     *
 *                          Use NULL if you don't expect it returned               *
 *     5. remote_ip       : pointer to the remote ip returned,                     *
 *                          - String like "192.168.4.2"                            *
 *                          - Use NULL if you don't expect it returned             *
 *     6. remote_port     : pointer to the remote port returned                    *
 *                          Use NULL if you don't expect it returned               *
 *     7. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Query_Connection(u8 link_no, u8* connection_type, u8* connection_state,
												u16* local_port, u8* remote_ip, u16* remote_port, u16* status);
typedef enum{
		ANYLINKIN_WIFI_LINK_CONNECTION_STATE_INVALID	=	0,
		ANYLINKIN_WIFI_LINK_CONNECTION_STATE_WAIT	    =	1,
		ANYLINKIN_WIFI_LINK_CONNECTION_STATE_LISTEN	  =	2,
		ANYLINKIN_WIFI_LINK_CONNECTION_STATE_CONNECT  =	3,
	  ANYLINKIN_WIFI_LINK_CONNECTION_STATE_WRITE    =	4,
	  ANYLINKIN_WIFI_LINK_CONNECTION_STATE_READ     =	5,
	  ANYLINKIN_WIFI_LINK_CONNECTION_STATE_CLOSE    =	6
} ANYLINKIN_WIFI_LINK_CONNECTION_STATES;

/***********************************************************************************
 * M8266WIFI_SPI_Op_Multicuast_Group                                               *
 * .Description:                                                                   *
 *     To join or leave a multicuast groupo AP via SPI                             *
 *     The module should be in STA or STA+AP mode and have connected               *
 *     to a routers before call this API                                           *
 * .Parameter(s)                                                                   *
 *     1. join_not_leave : join or leave the multicuast groud       				       *
 *        =1, join                                          											 *
 *        =0, leave                                          											 *
 *     2. multicust_group_ip : the ip address of a multicuast groud       				 *
 *        e.g. "224.6.6.6".                                                        *
 *     3. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Op_Multicuast_Group(u8 join_not_leave, char multicust_group_ip[15+1], u16* status);

/**********************************************************************************
 * M8266WIFI_SPI_Set_TcpServer_Auto_Discon_Timeout                                *
 * .Description:																																	*
 *     To set up the tcp server's auto-disconnection timeout time 								*
 *     when no communication from clients via SPI																	*
 * .Parameter(s)																																	*
 *     1. link_no 		: the number of link to setup																*
 *     2. timeout_in_s: the timeout in seconds the tcp server will auto 					*
 *                      disconnect the connection when no communication						*
 *										  from clients																							*
 *     2. status  		: pointer to the status upon failure												*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
u8 M8266WIFI_SPI_Set_TcpServer_Auto_Discon_Timeout(u8 link_no, u16 timeout_in_s, u16* status);

/**********************************************************************************
 * M8266WIFI_SPI_Query_Max_Clients_Allowed_To_A_Tcp_Server                        *
 * .Description:																																	*
 *     To query the max tcp clients could be accepted simutenoeously to           *
 *     this tcp server                                           					  			*
 * .Parameter(s)																																	*
 *     1. server_link_no: the number of tcp server link to query		  						*
 *     2. max_allowed   : pointer to max allowed                                  *
 *     3. status    		: pointer to the status upon failure											*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
 u8 M8266WIFI_SPI_Query_Max_Clients_Allowed_To_A_Tcp_Server(u8 server_link_no, u8* max_allowed, u16* status);
 
/**********************************************************************************
 * M8266WIFI_SPI_Config_Max_Clients_Allowed_To_A_Tcp_Server                       *
 * .Description:																																	*
 *     To Config the max tcp clients could be accepted simutenoeously to          *
 *     this tcp server                                           					  			*
 * .Parameter(s)																																	*
 *     1. server_link_no: the number of tcp server link to config		  						*
 *     2. max_allowed   : max allowed, range 1~15                                 *
 *     3. status    		: pointer to the status upon failure											*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
 u8 M8266WIFI_SPI_Config_Max_Clients_Allowed_To_A_Tcp_Server(u8 server_link_no, u8 max_allowed, u16* status);

typedef struct {
	  u8  connection_state;
	  u8  remote_ip[4];
	  u16 remote_port;
 }ClientInfo;
/***********************************************************************************
 * M8266WIFI_SPI_List_Clients_On_A_TCP_Server                                      *
 * .Description:                                                                   *
 *     To Query the information of clients on a link of tcp server of M8266WIFI    *
 * .Parameter(s)                                                                   *
 *     1. server_link_no  : the link number of a tcp server to query               *
 *     2. clients        	:	pointer to sum of clients listed                       *
 *                          value range: 0~15                                      *
 *     3. pRemoteClients  :	array of struct clients_info the clients returned      *
 *     4. status          : pointer to return errcode(LSB) and status(MSB)         *
 *                          upon exception(s) of error(s)                          *
 *                          Use NULL if you don't expect them returned             *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_List_Clients_On_A_TCP_Server(u8 server_link_no, u8* clients, 
																					ClientInfo RemoteClients[], u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Disconnect_TcpClient                                              *
 * .Description:                                                                   *
 *     To disconnect a client connections on M8266WIFI TCP server via SPI          *
 * .Parameter(s)                                                                   *
 *     1. link_no     : the number of link to be deleted/disconnected              *
 *     2. client_info : pointer to the remote tcp client info to disconnect        *
 *                      use NULL to disconnect all the remote clients if any       *
 *     3. status      : pointer to return errcode(LSB) and status(MSB) upon error  *
 *                      Use NULL if you don't expect them returned                 *
 *                      errcode(LSB)                                               *
 *                      = 0x54, disconnect a tcp client socket not present         *
 *                      = 0x55, disconnect a TCP socket when busy in receiving     *
 *                      = 0x56, disconnect a TCP socket when busy in reading       *
 *                      = 0x57, no need to disconnect the sockets since it is      *
 *                            - UDP, use M8266WIFI_SPI_Delete_Connection. OR       *
 *                            - TCP Server without clients connecting to. OR       *
 *                            - TCP Client already disconnected                    *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Disconnect_TcpClient(u8 link_no, ClientInfo *client_info, u16* status);
 

/**********************************************************************************
 * M8266WIFI_SPI_Query_Last_Tcp_Disconnect_Cause                                  *
 * .Description:																																	*
 *     To query the cause of last tcp disconnect                 					  			*
 * .Parameter(s)																																	*
 *     1. link_no 			: the number of link to query															*
 *     2. discon_cause  : pointer to the last disconnect cause                    *
 *                        -3, if sending timeout                                  *
 *                        -9, if reset request by remote peer reset               *
 *                        -20,if disconnected by remote peer                      *
 *                        -21,if diconnected by the local                         *
 *                        -22,if deleted by the local                             *
 *     3. status  		  : pointer to the status upon failure											*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
u8 M8266WIFI_SPI_Query_Last_Tcp_Disconnect_Cause(u8 link_no, s8* disconnect_cause, u16* status);


u8 M8266WIFI_SPI_Disconnect_TcpClient(u8 link_no, ClientInfo *client_info, u16* status);

/**********************************************************************************
 * M8266WIFI_SPI_Query_Tcp_Retran_Max                                             *
 * .Description:																																	*
 *     To query the tcp max retransmission                  					       			*
 * .Parameter(s)																																	*
 *     1. link_no 			: the number of link to query															*
 *     2. max_retran    : pointer to max retransimision                           *
 *     3. status  		  : pointer to the status upon failure											*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
 u8 M8266WIFI_SPI_Query_Tcp_Retran_Max(u8 link_no, u8* max_retran, u16* status);
 
/**********************************************************************************
 * M8266WIFI_SPI_Config_Tcp_Retran_Max                                            *
 * .Description:																																	*
 *     To config the tcp max retransmission                 					       			*
 * .Parameter(s)																																	*
 *     1. link_no 			: the number of link to query															*
 *     2. max_retran    : value of max retransimision, range 1-12                 *
 *                        if <1,  then use 1                                      * 
 *                        if >12, then use 12                                     * 
 *     3. status  		  : pointer to the status upon failure											*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
 u8 M8266WIFI_SPI_Config_Tcp_Retran_Max(u8 link_no, u8 max_retran, u16* status);
 
 /**********************************************************************************
 * M8266WIFI_SPI_Query_Tcp_Mss                                                    *
 * .Description:																																	*
 *     To query the tcp mss value                           					       			*
 * .Parameter(s)																																	*
 *     1. link_no 			: the number of link to query															*
 *     2. tcp_mss       : pointer to max retransimision                           *
 *     3. status  		  : pointer to the status upon failure											*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
 u8 M8266WIFI_SPI_Query_Tcp_Mss(u8 link_no, u16* tcp_mss, u16* status);

/**********************************************************************************
 * M8266WIFI_SPI_Query_Tcp_Window_num                                             *
 * .Description:																																	*
 *     To query the tcp window num                           					       			*
 * .Parameter(s)																																	*
 *     1. link_no 			: the number of link to query															*
 *     2. tcp_wnd_num   : number of tcp windows                                   *
 *     3. status  		  : pointer to the status upon failure											*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
 u8 M8266WIFI_SPI_Query_Tcp_Window_num(u8 link_no, u8* tcp_wnd_num, u16* status);
 
 /**********************************************************************************
 * M8266WIFI_SPI_Config_Tcp_Window_num                                            *
 * .Description:																																	*
 *     To config the tcp max retransmission                 					       			*
 * .Parameter(s)																																	*
 *     1. link_no 			: the number of link to query															*
 *     2. tcp_wnd_num   : numbers of tcp windows, range 1-15                      *
 *                        if <1,  then use 1                                      * 
 *                        if >15, then use 15                                     * 
 *     3. status  		: pointer to the status upon failure												*
 * .Return value:																																	*
 *     =1, success																																*
 *     =0, has error(s)																														*
 **********************************************************************************/
 u8 M8266WIFI_SPI_Config_Tcp_Window_num(u8 link_no, u8 tcp_wnd_num, u16* status);

/***********************************************************************************
 * SPI_STA_Get_HostIP_by_HostName                                                  *
 * .Description:                                                                   *
 *     To get the host ip_addr by hostName                                         *
 * .Parameter(s)                                                                   *
 *     1. hostIp      : the host ip_addr returned                                  *
 *     2. hostName    : the host name to get ip                                    *
 *     3. timeout_in_s: timeout in seconds                                         *
 *     3. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 SPI_STA_Get_HostIP_by_HostName(char* hostIp, char* hostName, u8 timeout_in_s, u16* status);


////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   4. APIs releated to TCP/UDP Packets TXD and RXD via SPI                      //
//       - M8266WIFI_SPI_Send_Data                                       4.4.1    //
//       - M8266WIFI_SPI_Send_Data_Block                                 4.4.2    //
//       - M8266WIFI_SPI_Send_Udp_Data                                   4.4.3    //
//       - M8266WIFI_SPI_Send_Data_to_TcpClient                          4.4.4    //

//       - M8266WIFI_SPI_Has_DataReceived                                4.4.5    //
//       - M8266WIFI_SPI_RecvData                                        4.4.6    //
//       - M8266WIFI_SPI_RecvData_ex                                     4.4.7    //
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

/***********************************************************************************
 * M8266WIFI_SPI_Send_Data                                                         *
 * .Description:                                                                   *
 *     To send Data to WIFI via M8266 module SPI                                   *
 * .Parameters                                                                     *
 *     1. Data   : the pointer to the Data buffer to be sent                       *
 *     2. len    : the length the Data buffer to be sent                           *
 *     3. link_no: the wifi service link number sent to                            *
 *     4. pointer to return errcode(LSB) and status(MSB) when error encountered    *
 *        use NULL if you don't expect errcode and status                          *
 *        errcode:                                                                 *
 *            = 0x10: timeout when wait Module spi rxd Buffer ready                *
 *            = 0x11: timeout when wait wifi to send data                          *
 *            = 0x12: Module Sending Buffer full                                   *
 *              Module Buffer full defined as                                      *
 *              - If total size of packets waiting to send via WIFI > 5*1024, or   *
 *              - If counts     of packets waiting to send via WIFI > 8            *
 *            = 0x13: Wrong link_no used                                           *
 *            = 0x14: connection by link_no not present                            *
 *            = 0x15: connection by link_no closed                                 *
 *            = 0x18: No clients connecting to this TCP server                     *
 *            = 0x1F: Other errors                                                 *
 * .Return value:                                                                  *
 *     Actually length that has been sent successfuuly                             *
 ***********************************************************************************/
u16 M8266WIFI_SPI_Send_Data(u8 Data[], u16 Data_len, u8 link_no, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Send_Data_Block                                                   *
 * .Description:                                                                   *
 *     To send Data block to WIFI via M8266 module SPI                             *
 * .Parameters                                                                     *
 *     1. Data    				: the pointer to the Data buffer to be sent              *
 *     2. Data_len				: the length the Data buffer to be sent                  *
 *     3. link_no 				: the wifi service link number sent to                   *
 *     4. tcp_packet_size : tcp packet size                                        *
 *                          smaller than 1460, i.e. 1024 recomennded               *
 *                          not exceeding MSS(normally 1460) recomendded           *
 *     5. pointer to return errcode(LSB) and status(MSB) when error encountered    *
 *        use NULL if you don't expect errcode and status                          *
 *        errcode:                                                                 *
 *            = 0x13: Wrong link_no used                                           *
 *            = 0x14: connection by link_no not present                            *
 *            = 0x15: connection by link_no closed                                 *
 *            = 0x18: No clients connecting to this TCP server                     *
 *            = 0x1E: too many errors ecountered during sending can not fixed      *
 *            = 0x1F: Other errors                                                 *
 * .Return value:                                                                  *
 *     Actually length that has been sent successfuuly                             *
 ***********************************************************************************/
u32 M8266WIFI_SPI_Send_Data_Block(u8 Data[], u32 Data_len, u16 tcp_packet_size, u8 link_no, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Send_Udp_Data                                                     *
 * .Description:                                                                   *
 *     .To send Udp Data to WIFI via M8266 module SPI especially suitable for      *
 *      those UDP transmission requiring frequently changing destination           *
 *     .If the UDP transission does not need update dest, please use               *
 *       M8266WIFI_SPI_Send_Data above for better efficiency                       *
 * .Parameters                                                                     *
 *     1. Data   : the pointer to the Data buffer to be sent                       *
 *     2. len    : the length the Data buffer to be sent                           *
 *     3. link_no: the wifi service link number sent to                            *
 *     4. udp_dest_addr: string of ip or dns address of the remote connection      *
 *     5. udp_dest_port: port of remote connection                                 *
 *     6. pointer to return errcode(LSB) and status(MSB) when error encountered    *
 *        use NULL if you don't expect errcode and status                          *
 *        errcode:                                                                 *
 *            = 0x10: timeout when wait Module spi rxd Buffer ready                *
 *            = 0x11: timeout when wait wifi to send data                          *
 *            = 0x12: Module Sending Buffer full                                   *
 *              Module Buffer full defined as                                      *
 *              - If total size of packets waiting to send via WIFI > 5*1024, or   *
 *              - If counts     of packets waiting to send via WIFI > 8            *
 *            = 0x13: Wrong link_no used                                           *
 *            = 0x14: connection by link_no not present                            *
 *            = 0x15: connection by link_no closed                                 *
 *            = 0x19: this link is not a UDP service                               *
 *            = 0x1A: try to point to a new udp dest but failed                    *
 *            = 0x1F: Other errors                                                 *
 * .Return value:                                                                  *
 *     Actually length that has been sent successfuuly                             *
 ***********************************************************************************/
u16 M8266WIFI_SPI_Send_Udp_Data(u8 Data[], u16 Data_len, u8 link_no, char* udp_dest_addr, u16 udp_dest_port, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Send_Data_to_TcpClient                                               *
 * .Description:                                                                   *
 *     .To send tcp Data to a tcp client from this  M8266 tcp server               *
 *       especially suitable for scenarios of multiple clients for                 *
 *     .If the tcp server has only one client, please use                          *
 *       M8266WIFI_SPI_Send_Data above for better efficiency                       *
 * .Parameters                                                                     *
 *     1. Data   : the pointer to the Data buffer to be sent                       *
 *     2. len    : the length the Data buffer to be sent                           *
 *     3. link_no: the tcp server link number sent to                              *
 *     4. tcp_client_dest_addr: string of ip or dns address of the remote client   *
 *     5. tcp_client_dest_port: port of remote cleint                              *
 *     6. pointer to return errcode(LSB) and status(MSB) when error encountered    *
 *        use NULL if you don't expect errcode and status                          *
 *        errcode:                                                                 *
 *            = 0x10: timeout when wait Module spi rxd Buffer ready                *
 *            = 0x11: timeout when wait wifi to send data                          *
 *            = 0x12: Module Sending Buffer full                                   *
 *              Module Buffer full defined as                                      *
 *              - If total size of packets waiting to send via WIFI > 5*1024, or   *
 *              - If counts     of packets waiting to send via WIFI > 8            *
 *            = 0x13: Wrong link_no used                                           *
 *            = 0x14: connection by link_no not present                            *
 *            = 0x15: connection by link_no closed                                 *
 *            = 0x19: this link is not a TCP Server                                *
 *            = 0x1A: try to point to a client but failed. no this client          *
 *            = 0x1F: Other errors                                                 *
 * .Return value:                                                                  *
 *     Actually length that has been sent successfuuly                             *
 ***********************************************************************************/
 u16 M8266WIFI_SPI_Send_Data_to_TcpClient(u8 Data[], u16 Data_len, u8 server_link_no, 
																				char* tcp_client_dest_addr, u16 tcp_client_dest_port, 
																				u16* status);


/***********************************************************************************
 * M8266WIFI_SPI_Has_DataReceived                                                  *
 * .Description:                                                                   *
 *     To check whether the M8266WIFI module has received data awaiting master     *
 *     to fetch away                                                               *
 * .Parameters                                                                     *
 *     None                                                                        *
 * .Return value:                                                                  *
 *     1, if the M8266WIFI module has received data from wifi                      *
 *     0, if the M8266WIFI module has not received data from wifi                  *
 ***********************************************************************************/
u8 M8266WIFI_SPI_Has_DataReceived(void);

/***********************************************************************************
 * M8266WIFI_SPI_RcvData                                                           *
 * .Description:                                                                   *
 *     To receive the wifi data from M8266WIFI                                     *
 * .Parameters                                                                     *
 *     1. Data           - the buffer to contained the received Data               *
 *     2. max_len        - the max length of Data to fetech                        *
 *     3. max_wait_in_ms - the max timeout to wait for the Data                    *
 *     4. link_no        - pointer to return the link_no that current wifi Data    *
 *                         come from. use NULL if you don't expect it returned     *
 *     5. status         - pointer to return errcode(LSB) and status(MSB)          *
 *                         when error encountered. Use NULL if you don't expect    *
 *                         them returned                                           *
 *        errcode:                                                                 *
 *            = 0x20: timeout when wait module has received data via WIFI          *
 *            = 0x22: no date in Module wifi receive buffer                        *
 *            = 0x23: Read data from the left of last packets in Module wifi       *
 *                    receive buffer                                               *
 *            = 0x24: The packet in the Module wifi receive buffer is larger       *
 *                    in size than the max_len specified here. Only part of        *
 *                    the packet received                                          *
 *            = 0x2F: Other errors                                                 *
 * .Return value:                                                                  *
 *     - the size of larger packet first in the Module wifi receive buffer         *
 *       if errcode = 0x24                                                         *
 *     - the actual length of wifi packet received successfully                    *
 *       if others                                                                 *
 ***********************************************************************************/
u16 M8266WIFI_SPI_RecvData(u8 Data[], u16 max_len, uint16_t max_wait_in_ms, 
												   u8* link_no, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_RcvData_ex                                                        *
 * .Description:                                                                   *
 *     To receive the wifi data from M8266WIFI, extended                           *
 *     Compared with M8266WIFI_SPI_RcvData(), this function also return the        *
 *     source remote_ip and remote_port meanwhile                                  *
 * .Parameters                                                                     *
 *     1. Data           - the buffer to contained the received Data               *
 *     2. max_len        - the max length of Data to fetech                        *
 *     3. max_wait_in_ms - the max timeout to wait for the Data                    *
 *     4. link_no        - pointer to return the link_no that current wifi Data    *
 *                         come from. use NULL if you don't expect it returned     *
 *     5. remote_ip      - array[4] to return the remote_ip that current wifi Data *
 *                         come from. use NULL if you don't expect it returned     *
 *                         e.g. if remote ip is "192.168.4.2", then remote_ip will *
 *                         return with remote_ip[0]=192, remote_ip[1]=168,         *
 *                         remote_ip[2]=4, and remote_ip[3]=2                      *
 *     6. remote_ip      - pointer to return the remote_port that current wifi Data*
 *                         come from. use NULL if you don't expect it returned     *
 *     7. status         - pointer to return errcode(LSB) and status(MSB)          *
 *                         when error encountered. Use NULL if you don't expect    *
 *                         them returned                                           *
 *        errcode:                                                                 *
 *            = 0x20: timeout when wait module has received data via WIFI          *
 *            = 0x22: no date in Module wifi receive buffer                        *
 *            = 0x23: Read data from the left of last packets in Module wifi       *
 *                    receive buffer                                               *
 *            = 0x24: The packet in the Module wifi receive buffer is larger       *
 *                    in size than the max_len specified here. Only part of        *
 *                    the packet received                                          *
 *            = 0x2F: Other errors                                                 *
 * .Return value:                                                                  *
 *     - the size of larger packet first in the Module wifi receive buffer         *
 *       if errcode = 0x24                                                         *
 *     - the actual length of wifi packet received successfully                    *
 *       if others                                                                 *
 ***********************************************************************************/
u16 M8266WIFI_SPI_RecvData_ex(u8 Data[], u16 max_len, uint16_t max_wait_in_ms, 
															u8* link_no, u8 remote_ip[4], u16* remote_port, u16* status);

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   5. APIs releated to Smart Config via SPI                                     //
//       - M8266WIFI_SPI_Module_SmartConfig                              4.5.1    //
//       - M8266WIFI_SPI_StartWpsConfig                                  4.5.2    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

/***********************************************************************************
 * u8 M8266WIFI_SPI_Module_SmartConfig                                             *
 * .Description:                                                                   *
 *     To perform an SmartConfig procedure to wifi module via SPI                  *
 * .Parameter(s)                                                                   *
 *     1. timeout_in_s  : timeout for an smartconfig procedure                     *
 *     2. smartconfig_type   : pointer to smartconfig type returned                *
 *                    use NULL if you don't expect this param returned             *
 *                    = 0, if type is ESPTOUCH                                     *
 *                    = 1, if type is AIRKISS                                      *
 *                    =-1, if invalid or unknown                                   *
 *     3. smartconfig_phone_ip :                                                   *
 *                   - the ip of the phone or smart device                         *
 *                     that runs smartconfig app to broadcust ssid/password        *
 *                     e.g. "192.168.43.21"                                        *
 *                   - use NULL if you don't expect this param returned            *
 *                   - Airkiss does not response ip addrsss of smart devices,      *
 *                     so smartconfig_phone_ip[0] will be 0 if airkiss             *
 *     4. status  : pointer to return errcode(LSB) upon error                      *
 *                  Use NULL if you don't expect them returned                     *
 *                  == 0x0000  success                                             *
 *                  != 0x0000  failed                                              *
 *                     (1) failed to start smartconfig if MSB(8) = 0x68            *
 *                     (2) failed during smartconfig   if MSB(8) = 0x6A            *
 *                          - failed to find channel           if LSB(8) = 0x00    *
 *                          - failed to get ssid/password      if LSB(8) = 0x01    *
 *                          - failed to connect the ap/routers if LSB(8) = 0x02/03 *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Module_SmartConfig(u8 timeout_in_s, u8* smartconfig_type, char smartconfig_phone_ip[15+1], u16* status);
 
/***********************************************************************************
 * M8266WIFI_SPI_StartSmartConfig                                                  *
 * .Description:                                                                   *
 *     To start/stop smart config of M8266WIFI via SPI                             *
 *     Once enter the smartconfig mode, either smartlinkin or airkiss be adapted   * 
 *     After perform a start operation, the M8266WIFI will be set in STA mode      *
 * .Parameter(s)                                                                   *
 *     1. en      : to start or stop                                               *
 *                  =0, to stop                                                    *
 *                  others, to start                                               *
 *     2. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_StartSmartConfig(u8 en, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_StartWpsConfig                                                    *
 * .Description:                                                                   *
 *     To start/stop wps config of M8266WIFI via SPI                               *
 *     After perform a start operation, the M8266WIFI will be set in STA mode      *
 * .Parameter(s)                                                                   *
 *     1. en      : to start or stop                                               *
 *                  =0, to stop                                                    *
 *                  others, to start                                               *
 *     2. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
u8 M8266WIFI_SPI_StartWpsConfig(u8 en, u16* status);


////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   6. APIs releated to on-module web operations via SPI                         //
//       - M8266WIFI_SPI_Set_WebServer                                   4.6.1    //
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

/***********************************************************************************
 * M8266WIFI_SPI_Set_WebServer                                                     *
 * .Description:                                                                   *
 *     To set the web server via SPI, with option save or not                      *
 * .Parameter(s)                                                                   *
 *     1. open_not_shutdown  : to start or shutdown the local web server           *
 *            =0,      to shutdown the webserver if it is running                  *
 *            =others, to (re-)start the webserver                                 *
 *     2. server_port : the port used for web_server                               *
 *            - Only valid when open_not_shutdown!=0.                              *
 *            - When open_not_shutdown !=0, and server_port=0, then default        *
 *              port = 80 will be used                                             *
 *     3. saved: to save the setting or not.                                       *
 *            - saved == 1, the setting will be saved and valid on module bootup   *
 *              e.g. if you start a web server with saved=1, upon next bootup      *
 *              the web server on module will startup automatically                *
 *              e.g. if you stop a web server with saved1=1, upon next booup       *
 *              the web server on the module will not start-up                     *
 *            - saved == 0, the setting will not be saved and valid only currently *
 *              And after reboot, the settings will restore to previous default    *
 *            - when called with saved=1, the API will write the FL:ASH on module. *
 *                  PLEASE DO NOT CALL IT EACH TIME OF BOOTUP WITH SAVED != 0      *
 *                  OR, THE FLASH ON MODULE MIGHT GO TO FAILURE DUE TO LIFT CYCLE  *
 *                  OF WRITE                                                       *
 *     4. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Set_WebServer(u8 open_not_shutdown, u16 server_port, u8 saved, u16* status);

 u8 M8266WIFI_SPI_Set_Web_Server(u8 open_not_shutdown, u16 server_port, u16* status);
 //below macro used to keep compatible with previous API
 #define SPI_Set_Web_Server(open_not_shutdown, server_port, status)  M8266WIFI_SPI_Set_WebServer(open_not_shutdown, server_port, 0, status)

/***********************************************************************************
 * M8266WIFI_SPI_QueryDns                                             *
 * .Description:                                                                   *
 *     To query the dns server info via SPI                                        *
 * .Parameter(s)                                                                   *
 *     1. start_on_boot   : pointer to whether start on boot                       *
 *        use NULL if you don't expect it                                          *
 *     2. current_running : pointer to whether dns is now running                  *
 *        use NULL if you don't expect it                                          *
 *     3. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_QueryDns(u8* start_on_bootup, u8* current_running, u16* status);
 
  /***********************************************************************************
 * M8266WIFI_SPI_StartDns                                                          *
 * .Description:                                                                   *
 *     To start or shutdonw the local DNS on module                                *
 * .Parameter(s)                                                                   *
 *     1. start_not_shutdown  : to start or shutdown the local dns server          *
 *            =0,      to shutdown the webserver if it is running                  *
 *            =others, to (re-)start the webserver                                 *
 *     2. saved: to save the setting or not.                                       *
 *            - saved == 1, the setting will be saved and valid on module bootup   *
 *              e.g. if you start a dns server with saved=1, upon next bootup      *
 *              the dns server on module will startup automatically                *
 *              e.g. if you stop a dns server with saved1=1, upon next booup       *
 *              the dns server on the module will not start-up                     *
 *            - saved == 0, the setting will not be saved and valid only currently *
 *              And after reboot, the settings will restore to previous default    *
 *            - when called with saved=1, the API will write the FL:ASH on module. *
 *                  PLEASE DO NOT CALL IT EACH TIME OF BOOTUP WITH SAVED != 0      *
 *                  OR, THE FLASH ON MODULE MIGHT GO TO FAILURE DUE TO LIFT CYCLE  *
 *                  OF WRITE                                                       *
 *     3. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_StartDns(u8 start_not_shutdown, u8 save, u16* status);


////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   7. APIs releated to module low power operations via SPI                      //
//       - M8266WIFI_SPI_Set_Tx_Max_Power                                4.7.1    //
//       - M8266WIFI_SPI_Sleep_Module                                    4.7.2    //
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

/***********************************************************************************
 * M8266WIFI_SPI_Set_Tx_Max_Power                                                  *
 * .Description:                                                                   *
 *     To set the RF Tx Max Power via SPI comannd                                  *
 * .Parameter(s)                                                                   *
 *     1. tx_max_power : the max tx power in 0.25 dBm.                             *
 *                       range = 0~82, i.e. 0~20.5dBm, or 1mW~112mW                *
 *                               tx_max_power  dBm        P/mW                     *
 *                                 0            0          1.0                     *
 *                                 4            1          1.3                     *
 *                                12            3          2.0                     *
 *                                28            7          5.0                     *
 *                                40           10         10.0                     *
 *                                52           13         20.0                     *
 *                                68           17         50.0                     *
 *                                80           20        100.0                     *
 *                                82           20.5      112.20                    *
 *        upon bootup default, tx_max_power = 82, i.e. 20.5dBm or 112.20mW         *
 *                                                                                 *
 *     2. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Set_Tx_Max_Power(u8 tx_max_power, u16 *status);

/**********************************************************************************
 * M8266WIFI_SPI_Sleep_Module                                                      *
 * .Description:                                                                   *
 *     To bring the M8266WIFI module into sleep mode via SPI comannd               *
 * .Parameter(s)                                                                   *
 *     1. sleep_type : the type of sleep                                           *
 *        = 0      :  reserved                                                     *
 *        = 1      :  reserved                                                     *
 *        = 2      :  reserved                                                     *
 *        = 3      :  deep sleep                                                   *
 *        = others :  reserved                                                     *
 *     2. time_to_wakeup_in_ms : time to wakeup from sleep, unit in ms             *
 *        - max value 4294967 ms (about 1.19hour).                                 *
 *          if a value exceed this provided, then 4294967ms will be used           *
 *        - use 0 if expect to sleep for ever without automatic wakeup             *
 *     2. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * Note:                                                                           *
 *     1. The nCS should be pulled low before exit sleep and release after bootup  *
 *        from sleep if reset_type=3 in order for a normal bootup from extern flash*
 *     2. after a call of this function, normally the module should be re init     *
 *        via functions such as M8266WIFI_Module_Init_Via_SPI(), and the connection*
 *        should be re-established as well.                                        *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Sleep_Module(u8 sleep_type, u32 time_to_wakeup_in_ms, u16 *status);
  
/***********************************************************************************
 * M8266WIFI_SPI_Reset_Module                                                      *
 * .Description:                                                                   *
 *     To reset the M8266WIFI module at once via SPI comannd                       *
 * .Parameter(s)                                                                   *
 *     1. reset_type : the type of reset                                           *
 *        = 0 :  to perform a software reset to the module,                        *
 *               boot-mode of last power on will be kept                           *
 *        = 1 :  to perform a hardware reset via chip_EN                           *
 *               boot-mode will be sampled again.                                  *
 * Note:                                                                           *
 *     1. after a call of this function, normally the module should be re init     *
 *        via functions such as M8266WIFI_Module_Init_Via_SPI(), and the connection*
 *        should be re-established as well.                                        *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Reset_Module(u8 reset_type, u16* status);

/**********************************************************************************
 * M8266WIFI_SPI_Restore_Module_to_Default                                         *
 * .Description:                                                                   *
 *     To restore the M8266WIFI module to factory default and then reboot module   *
 *     via SPI comannd. e.g. module will be in AP-Only mode                        *
 * .Parameter(s)                                                                   *
 *     1. status  : pointer to return errcode(LSB) and status(MSB) upon error      *
 *                  Use NULL if you don't expect them returned                     *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Restore_Module_to_Default(u16* status);

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   8. APIs releated to module resources operations via SPI                      //
//       - M8266WIFI_SPI_Query_Module_Gpio_Mode                          4.8.1    //
//       - M8266WIFI_SPI_Config_Module_Gpio_Mode                         4.8.2    //
//       - M8266WIFI_SPI_Read_Module_Gpio                                4.8.3    //
//       - M8266WIFI_SPI_Write_Module_Gpio                               4.8.4    //
//       - M8266WIFI_SPI_Read_Module_Adc                                 4.8.5    //
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
typedef enum{
	 M8266WIFI_MODULE_GPIO_MODES_INPUT_NOPULL 	= 0,
	 M8266WIFI_MODULE_GPIO_MODES_INPUT_PULLUP		= 1,
	 M8266WIFI_MODULE_GPIO_MODES_OUTPUT_NORMAL	= 2,
	 M8266WIFI_MODULE_GPIO_MODES_OUTPUT_OD			= 3,
	 M8266WIFI_MODULE_GPIO_MODES_ALTERNATIIVE		= 4,
 }M8266WIFI_MODULE_GPIO_MODES;
 
 /**********************************************************************************
 * M8266WIFI_SPI_Query_Module_Gpio_Mode                                            *
 * .Description:                                                                   *
 *     To query the on-module gpios whether as input or output                     *
 * .Parameter(s)                                                                   *
 *     1. io_no        : the number of on-module GPIO                              *
 *     2. io_mode      : mode to get                                               *
 *                       =0, input  without pull                                   *
 *                       =1, input  with    pullup                                 *
 *                       =2, output normal                                         *
 *                       =3, output open drain                                     *
 *     3. status       : pointer to return errcode(LSB) and status(MSB) upon error *
 *                       Use NULL if you don't expect them returned                *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Query_Module_Gpio_Mode(u8 io_no, M8266WIFI_MODULE_GPIO_MODES *io_mode, u16* status);

 /**********************************************************************************
 * M8266WIFI_SPI_Config_Module_Gpio_Mode                                           *
 * .Description:                                                                   *
 *     To config the on-module gpios as input or output                            *
 * .Parameter(s)                                                                   *
 *     1. io_no        : the number of on-module GPIO                              *
 *     2. io_mode      : mode to set                                               *
 *                       =0, input  without pull                                   *
 *                       =1, input  with    pullup                                 *
 *                       =2, output normal                                         *
 *                       =3, output open drain                                     *
 *     3. status       : pointer to return errcode(LSB) and status(MSB) upon error *
 *                       Use NULL if you don't expect them returned                *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Config_Module_Gpio_Mode(u8 io_no, M8266WIFI_MODULE_GPIO_MODES io_mode, u16* status);
 
 /**********************************************************************************
 * M8266WIFI_SPI_Read_Module_Gpio                                                  *
 * .Description:                                                                   *
 *     To read the gpios level                                                     *
 * .Parameter(s)                                                                   *
 *     1. io_no        : the number of on-module GPIO                              *
 *     2. level        : pointer of the level read back                            *
 *     3. status       : pointer to return errcode(LSB) and status(MSB) upon error *
 *                       Use NULL if you don't expect them returned                *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Read_Module_Gpio(u8 io_no, u8* level, u16* status);

/**********************************************************************************
 * M8266WIFI_SPI_Write_Module_Gpio                                                 *
 * .Description:                                                                   *
 *     To write the on-module gpios as output                                      *
 * .Parameter(s)                                                                   *
 *     1. io_no        : the number of on-module GPIO                              *
 *     2. level        : pointer of the level read back                            *
 *     3. status       : pointer to return errcode(LSB) and status(MSB) upon error *
 *                       Use NULL if you don't expect them returned                *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Write_Module_Gpio(u8 io_no, u8 level, u16* status);

 /**********************************************************************************
 * M8266WIFI_SPI_Read_Module_Adc                                                   *
 * .Description:                                                                   *
 *     To write on-module gpios as output                                          *
 * .Parameter(s)                                                                   *
 *     1. adc          : pointer to the adc value                                  *
 *     2. status       : pointer to return errcode(LSB) and status(MSB) upon error *
 *                       Use NULL if you don't expect them returned                *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Read_Module_Adc(u16* adc, u16* status);
 
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   9. APIs releated to module information                                       //
//       - M8266WIFI_SPI_Get_Module_Info                                 4.9.1    //
//       - M8266WIFI_SPI_Get_Driver_Info                                 4.9.2    //
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

/**********************************************************************************
 * M8266WIFI_SPI_Get_Module_Info                                                   *
 * .Description:                                                                   *
 *     To get the M8266WIFI module information, such as ESP8266_ID,                *
 *     Flash Size, Firmware Version                                                *
 * .Parameter(s)                                                                   *
 *     1. esp8266_id: the pointer to the returned esp8266_id                       *
 *                    Use NULL if you don't expect it returned                     *
 *     2. flash_size: the pointer to the returned flash_size                       *
 *                    returned value                                               *
 *                      = 0, if 512KB                                              *
 *                      = 1, if 1MB                                                *
 *                      = 2, if 2MB                                                *
 *                      = 3, if 4MB                                                *
 *                      = others, invalid                                          *
 *                    Use NULL if you don't expect it returned                     *
 *     3. fw_ver    : the pointer to the returned firmware version                 *
 *                    buffer size should be no less than 16 bytes                  *
 *                    returned value e.g. "1.1.4-4"                                *
 *                    Use NULL if you don't expect it returned                     *
 *     4. status    : pointer to return errcode(LSB) and status(MSB) upon error    *
 *                    Use NULL if you don't expect them returned                   *
 * .Return value:                                                                  *
 *     =1, success                                                                 *
 *     =0, has error(s)                                                            *
 ***********************************************************************************/
 u8 M8266WIFI_SPI_Get_Module_Info(u32* esp8266_id, u8* flash_size, char* fw_ver, u16* status);

/***********************************************************************************
 * M8266WIFI_SPI_Get_Driver_Info                                                   *
 * .Description:                                                                   *
 *     To get the M8266WIFI driver information                                     *
 * .Parameter(s)                                                                   *
 *     1. drv_info: the pointer to the returned driver information buffer.         *
 *                  buffer size should be no less than 64 Bytes                   *
 *                  e.g. "ANYLINKIN M8266WIFI SPI DRIVER V1.4, 20170316"           *
 * .Return value                                                                   *
 *     driver_info: the pointer to the returned driver information                 *
 ***********************************************************************************/
char* M8266WIFI_SPI_Get_Driver_Info(char* drv_info);


////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//   Below specifications are required by M8266WIFIDrv.lib                        //
//   And should be implemented according to the hardware in M8266HostIf.c         //
//   Put here kust for purpose ofheader specification                             //
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
void M8266HostIf_Set_nRESET_Pin(u8 level);
void M8266HostIf_Set_SPI_nCS_Pin(u8 level);
void M8266HostIf_delay_us(u8 nus);
u8   M8266HostIf_SPI_ReadWriteByte(u8 byte); // Not required for most platforms.

#endif
