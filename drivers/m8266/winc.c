/*/
 * This file is part of the OpenMV project.
 * Copyright (c) 2013-2017 Ibrahim Abdelkader <iabdalkader@openmv.io> & Kwabena W. Agyeman <kwagyeman@openmv.io>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * WINC1500 driver.
 *
 */
#include "winc.h"
#include "common.h"
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <errno.h>


// WINC's includes
#include "socket.h"
#include "M8266WIFIDrv.h"
#include "fsl_debug_console.h"
#include "wifidbg.h"
static volatile bool ip_obtained = false;
static volatile bool wlan_connected = false;
static volatile uint32_t connected_sta_ip = false;
static volatile uint8_t spi_interrupt_flag = false;
static volatile uint8_t spi_none_intterrupt_flag = false;

#define SPI_NON_INT_CONTEXT_ENTER() \
	do {							\
		spi_none_intterrupt_flag = true;\
		}while(0);\


#define SPI_NON_INT_CONTEXT_LEAVE() 		\
	do {									\
		spi_none_intterrupt_flag = false;	\
		if (spi_interrupt_flag == true) { 	\
			wifidbg_dispatch();				\
			winc_write_spi_int_flag(0);		\
		}									\
		}while(0);							\
		

typedef struct {
    int size;
    struct sockaddr_in addr;
} recv_from_t;

typedef struct {
    int sock;
    struct sockaddr_in addr;
} accept_t;

typedef struct {
    void *arg;
    winc_scan_callback_t cb;
} scan_arg_t;

uint32_t nmi_inet_addr(char *pcIpAddr);

int winc_init(winc_mode_t winc_mode)
{
	// Initialize the BSP.
    switch (winc_mode) {
        case WINC_MODE_BSP: {
	        // Initialize the BSP and return.
            break;
        }

        case WINC_MODE_FIRMWARE: {

            break;
        }

        case WINC_MODE_AP:
        case WINC_MODE_STA: {
            
            // Initialize Wi-Fi driver with data and status callbacks.
            if (M8266_wifi_init(winc_mode + 1) != 0) {
                return -1;
            }
            // Initialize socket layer.
            socketInit();
            break;
        }
        default:
            break;
    }

    return 0;
}

int winc_connect(const char *ssid, uint8_t security, const char *key, uint16_t channel)
{
	uint16_t status;
	int8_t rt = 0;
	
	SPI_NON_INT_CONTEXT_ENTER();
    // Connect to AP
    if (M8266WIFI_SPI_STA_Connect_Ap((uint8_t*)ssid, (uint8_t*)key, 0, 10, &status) == 0) {
        rt = -1;
    }

    SPI_NON_INT_CONTEXT_LEAVE();
    PRINTF("%s connected with AP:%s, return status=0x%x\r\n",__func__,ssid,status);
    return rt;
}

int winc_start_ap(const char *ssid, uint8_t security, const char *key, uint16_t channel)
{
	uint16_t status;
	int8_t rt = 0;

	SPI_NON_INT_CONTEXT_ENTER();
	if (M8266WIFI_SPI_Config_AP((uint8_t*)ssid, (uint8_t*)key, security, channel, 0, &status)==0)
		rt = -1;
	SPI_NON_INT_CONTEXT_LEAVE();
	PRINTF("%s ssid:%s\r\n",__func__,ssid);
    return rt;
}

int winc_disconnect()
{
	uint16_t status;
	int8_t rt = 0;

	SPI_NON_INT_CONTEXT_ENTER();
    if (M8266WIFI_SPI_STA_DisConnect_Ap(&status) == 0)
		rt = -1;
	
	SPI_NON_INT_CONTEXT_LEAVE();

	return rt;
}

int winc_isconnected()
{
	uint16_t status;
	uint8_t connect_status;
	int8_t rt = 0;

	SPI_NON_INT_CONTEXT_ENTER();
	if (M8266WIFI_SPI_Get_STA_Connection_Status(&connect_status, &status) == 0)
		rt = 0;
	SPI_NON_INT_CONTEXT_LEAVE();
	//PRINTF("%s connection status:0x%x\r\n",__func__,status);
	if (connect_status == 5)
		rt = 1;
	else
		rt = 0;

	return rt;

}

int winc_connected_sta(uint32_t *sta_ip)
{
    uint16_t status;
	char ip_str[30] = {0};
	int8_t rt = 0;
	
	SPI_NON_INT_CONTEXT_ENTER();
    if (M8266WIFI_SPI_Get_STA_IP_Addr(ip_str, &status) == 0)
		rt = -1;
	*sta_ip = nmi_inet_addr(ip_str);

	SPI_NON_INT_CONTEXT_LEAVE();
	
    return rt; 
}

int winc_wait_for_sta(uint32_t *sta_ip, uint32_t timeout)
{//not supported by m8266 module
	return -1;
}

int winc_ifconfig(winc_ifconfig_t *ifconfig)
{
	char ip_str[32] = {0};

	uint16_t status;
	uint8_t param_len;
	int8_t rt = 0;
	
	SPI_NON_INT_CONTEXT_ENTER();
	if (M8266WIFI_SPI_Query_STA_Param(STA_PARAM_TYPE_RSSI, (uint8_t *)&(ifconfig->rssi), &param_len, &status) == 0)
		rt = -1;

	if (M8266WIFI_SPI_Query_STA_Param(STA_PARAM_TYPE_SSID, (uint8_t *)ifconfig->ssid, &param_len, &status) == 0)
		rt = -1;

	
	if (M8266WIFI_SPI_Get_STA_IP_Addr(ip_str, &status) == 0)
		rt = -1;
	uint32_t ip = nmi_inet_addr(ip_str);

	ifconfig->ip_addr[0] = ip;
    ifconfig->ip_addr[1] = ip >> 8;
    ifconfig->ip_addr[2] = ip >> 16;
    ifconfig->ip_addr[3] = ip >> 24;

	PRINTF("IFCONFIG ssid:%s,RSSI:%d,IP addr:%s\r\n",
				ifconfig->ssid,ifconfig->rssi,ip_str);
	if (M8266WIFI_SPI_Query_STA_Param(STA_PARAM_TYPE_MAC, ifconfig->mac_addr, &param_len, &status) == 0)
		rt = -1;

	SPI_NON_INT_CONTEXT_LEAVE();	
    
    return rt;
}

int winc_scan(winc_scan_callback_t cb, void *arg)
{
	uint16_t status;
    scan_arg_t scan_arg = {arg, cb};
	struct ScannedSigs result[32] = {0};
	winc_scan_result_t scan_result = {0};
	int8_t rt = 0;
	
	SPI_NON_INT_CONTEXT_ENTER();
	
    if(M8266WIFI_SPI_STA_Scan_Signals(result,32,0xff,10,&status) == 0)
		rt = -1;

	SPI_NON_INT_CONTEXT_LEAVE();
	for(int i=0;i<32;i++)
	{
		if (result[i].rssi != 0)
		{
			strcpy(scan_result.ssid, result[i].ssid);
			scan_result.security = result[i].authmode;
			scan_result.channel = result[i].channel;
			scan_result.rssi = result[i].rssi;
			if (cb != NULL)
				cb(&scan_result, arg);
			PRINTF("WIFI SCAN results: %s, rssi%d\r\n",scan_result.ssid,scan_result.rssi);
		}
	}
	
    return rt;
}

int winc_get_rssi()
{
    int8_t rssi;
    uint16_t status;
	uint8_t param_len;
	
	SPI_NON_INT_CONTEXT_ENTER();
    if (M8266WIFI_SPI_Query_STA_Param(STA_PARAM_TYPE_RSSI, &rssi, &param_len, &status) == 0)	
		rssi = -1;

	SPI_NON_INT_CONTEXT_LEAVE();
    return rssi; 
}

int winc_fw_version(winc_fwver_t *wfwver)
{
    
    return 0;
}

int winc_flash_dump(const char *path)
{
    
    return 0;
}

int winc_flash_erase()
{
    // Erase the WINC1500 flash.
    
    return 0;
}

int winc_flash_write(const char *path)
{
    // Program the firmware on the WINC1500 flash.
    
    return 0;
}

int winc_flash_verify(const char *path)
{
    // Verify the firmware on the WINC1500 flash.
    
    return 0;
}

int winc_gethostbyname(const char *name, uint8_t *out_ip)
{
    int ret;
    uint32_t ip=0;
	char ip_str[16] = {0};

	int8_t rt = 0;
	
	SPI_NON_INT_CONTEXT_ENTER();
    if (SPI_STA_Get_HostIP_by_HostName(ip_str, (char *)name, 5, NULL) == 0){
        rt = -1;
    }
	SPI_NON_INT_CONTEXT_LEAVE();
	ip = nmi_inet_addr(ip_str);
    out_ip[0] = ip;
    out_ip[1] = ip >> 8;
    out_ip[2] = ip >> 16;
    out_ip[3] = ip >> 24;

    PRINTF("%s name:%s, ip:%s\r\n",__func__,name,ip_str);
    return rt;
}

int winc_socket_socket(uint8_t type)
{
    // open socket
    return M8266_socket_socket(type);
}

void winc_socket_close(int fd)
{
    M8266_socket_close(fd);
}

int winc_socket_bind(int fd, sockaddr *addr)
{
    // Call bind and check HIF errors.
    int ret = M8266_socket_bind(fd, addr);
    if (ret == SOCK_ERR_NO_ERROR) {
        // Do async request
        
    }

    return ret;
}

int winc_socket_listen(int fd, uint32_t backlog)
{
    // Call listen and check HIF errors.
    int ret = M8266_socket_listen(fd, backlog);

    return ret;
}

int winc_socket_accept(int fd, sockaddr *addr, int *fd_out, uint32_t timeout)
{
    accept_t acpt;
	
	SPI_NON_INT_CONTEXT_ENTER();
    // Call accept and check HIF errors.
    int ret = M8266_socket_accept(fd, addr, fd_out,timeout);
	SPI_NON_INT_CONTEXT_LEAVE();
	
    return ret;
}

int winc_socket_connect(int fd, sockaddr *addr, uint32_t timeout)
{
	SPI_NON_INT_CONTEXT_ENTER();
    int ret = M8266_socket_connect(fd, addr, timeout);
    if (ret == SOCK_ERR_NO_ERROR) {
        // Do async request
        //ret = winc_async_request(SOCKET_MSG_CONNECT, &ret, timeout);
    }
	SPI_NON_INT_CONTEXT_LEAVE();
	
    return ret;
}

int winc_socket_is_connected(int fd)
{
	uint16_t status;
	uint8_t ret = 0;
	
	ret = M8266_socket_is_connected(fd);

	return ret;
}

int winc_socket_send(int fd, const uint8_t *buf, uint32_t len, uint32_t timeout)
{
    int bytes = 0;

	SPI_NON_INT_CONTEXT_ENTER();
    bytes = M8266_socket_send(fd, (uint8_t*)buf, len, timeout);
	SPI_NON_INT_CONTEXT_LEAVE();
    if (bytes < 0) {
    	return -1;
    }
    return bytes;
}

int winc_socket_recv(int fd, uint8_t *buf, uint32_t len, winc_socket_buf_t *sockbuf, uint32_t timeout)
{
    if (sockbuf->size == 0) { // No buffered data.
        sockbuf->idx = 0; // Reset sockbuf index.

        int recv_bytes;
        // Set recv to the maximum possible packet size.
        SPI_NON_INT_CONTEXT_ENTER();
        recv_bytes = M8266_socket_recv(fd, sockbuf->buf, SOCKET_BUFFER_MAX_LENGTH, timeout);
        SPI_NON_INT_CONTEXT_LEAVE();
        if (recv_bytes < 0) {
            // Do async request
           return -1;
        }

        sockbuf->size = recv_bytes;
    }

    uint32_t bytes = MIN(len, sockbuf->size);
    memcpy(buf, sockbuf->buf+sockbuf->idx, bytes);
    sockbuf->idx  += bytes;
    sockbuf->size -= bytes;
    return bytes;
}

int winc_write_spi_int_flag(uint8_t value)
{
	spi_interrupt_flag = value;
	
	return 0;
}

int winc_get_none_spi_int_flag()
{
	return spi_none_intterrupt_flag;
}

int winc_socket_send_in_int(int fd, const uint8_t *buf, uint32_t len, uint32_t timeout)
{
    int bytes = 0;

    bytes = M8266_socket_send(fd, (uint8_t*)buf, len, timeout);
    if (bytes < 0) {
    	return -1;
    }
    return bytes;
}


int winc_socket_recv_in_int(int fd, uint8_t *buf, uint32_t len, winc_socket_buf_t *sockbuf, uint32_t timeout_ms)
{
    if (sockbuf->size == 0) { // No buffered data.
        sockbuf->idx = 0; // Reset sockbuf index.

        int recv_bytes;
        // Set recv to the maximum possible packet size.
        recv_bytes = M8266_socket_recv(fd, sockbuf->buf, SOCKET_BUFFER_MAX_LENGTH, timeout_ms);
        if (recv_bytes < 0) {
        	PRINTF("TCP Recieved error\r\n");	
            // Do async request
           return -1;
        }

        sockbuf->size = recv_bytes;
    }

    uint32_t bytes = MIN(len, sockbuf->size);
    memcpy(buf, sockbuf->buf+sockbuf->idx, bytes);
    sockbuf->idx  += bytes;
    sockbuf->size -= bytes;
    return bytes;
}


int winc_socket_sendto(int fd, const uint8_t *buf, uint32_t len, sockaddr *addr, uint32_t timeout)
{
	SPI_NON_INT_CONTEXT_ENTER();
    int ret = M8266_socket_sendto(fd, (uint8_t*)buf, len, addr, timeout);
    if (ret == SOCK_ERR_NO_ERROR) {
        // Do async request
        
    }
	SPI_NON_INT_CONTEXT_LEAVE();
    return ret;
}

int winc_socket_recvfrom(int fd, uint8_t *buf, uint32_t len, sockaddr *addr, uint32_t timeout)
{
	SPI_NON_INT_CONTEXT_ENTER();
    int ret = M8266_socket_recvfrom(fd, buf, len, addr,timeout);
    SPI_NON_INT_CONTEXT_LEAVE();
    if (ret < 0) {
        // Do async request
       return -1;
    }
	
    return ret;
}

int winc_socket_setsockopt(int fd, uint32_t level, uint32_t opt, const void *optval, uint32_t optlen)
{
    return 0;
}

uint32_t nmi_inet_addr(char *pcIpAddr)
{
	uint8_t	tmp;
	uint32_t	u32IP = 0;
	uint8_t	au8IP[4];
	uint8_t 	c;
	uint8_t	i, j;

	tmp = 0;

	for(i = 0; i < 4; ++i)
	{
		j = 0;
		do
		{
			c = *pcIpAddr;
			++j;
			if(j > 4)
			{
				return 0;
			}
			if(c == '.' || c == 0)
			{
				au8IP[i] = tmp;
				tmp = 0;
			}
			else if(c >= '0' && c <= '9')
			{
				tmp = (tmp * 10) + (c - '0');
			}
			else
			{
				return 0;
			}
			++pcIpAddr;
		} while(c != '.' && c != 0);
	}
	memcpy((uint8_t*)&u32IP, au8IP, 4);
	return u32IP;
}


void make_sockaddr(sockaddr *addr, uint8_t *ip, uint16_t port)
{
	addr->sa_family = AF_INET; 
    addr->sa_data[0] = (uint8_t)(port >> 8); 
    addr->sa_data[1] = (uint8_t)(port); 
    addr->sa_data[2] = ip[0]; 
    addr->sa_data[3] = ip[1]; 
    addr->sa_data[4] = ip[2]; 
    addr->sa_data[5] = ip[3];
}

void unpack_sockaddr(sockaddr *addr, uint8_t *ip, uint16_t *port)
{
    *port = (addr->sa_data[0] << 8) | addr->sa_data[1]; 
    ip[0] = addr->sa_data[2]; 
    ip[1] = addr->sa_data[3]; 
    ip[2] = addr->sa_data[4]; 
    ip[3] = addr->sa_data[5];
}    

