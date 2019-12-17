/* This file is part of the OpenMV project.
 * Copyright (c) 2013-2018 Ibrahim Abdelkader <iabdalkader@openmv.io> & Kwabena W. Agyeman <kwagyeman@openmv.io>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 */
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <errno.h>

#include "mp.h"
#include "irq.h"
#include "lexer.h"
#include "parse.h"
#include "compile.h"
#include "runtime.h"
#include "stackctrl.h"
#include "usbdbg.h"
#include "sensor.h"
#include "framebuffer.h"
#include "omv_boardconfig.h"
#include "lib/utils/pyexec.h"
//#include "unistd.h"
#include "fsl_debug_console.h"
#include "Ring_buffer.h"
#include "Fsl_pit.h"
#include "Fsl_qtmr.h"
#if MICROPY_HW_WIFIDBG_EN
#include "winc.h"
#include "socket.h"
#include "wifidbg.h"
#ifdef MICROPY_PY_RTTHREAD
#include "rtthread.h"

#ifndef MIN
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#endif

#define OPENMVCAM_BROADCAST_ADDR ((uint8_t [5]){255, 255, 255, 255})
#define OPENMVCAM_BROADCAST_PORT (0xABD1)
#define SERVER_ADDR              ((uint8_t [5]){192, 168, 1, 1})
#define SERVER_PORT              (9000)
#define BUFFER_SIZE              (1024)

#define UDPCAST_STRING           "%d.%d.%d.%d:%d:%s"
#define UDPCAST_STRING_SIZE      4+4+4+4+6+WINC_MAX_BOARD_NAME_LEN+1

#define WIFI_DBG_USE_INT_LOOP 0
#define WIFI_DBG_USE_TIMER_LOOP 1

#define WIFIDBG_PIT_INTERVAL_MS			(20U)
#define WIFIDBG_PIT_TIMEOUT_5S_COUNT	(5000/WIFIDBG_PIT_INTERVAL_MS)
#define close_all_sockets()             \
    do {                                \
        winc_socket_close(server_fd);   \
        winc_socket_close(udpbcast_fd); \
        client_fd = -1;                 \
        server_fd = -1;                 \
        udpbcast_fd = -1;               \
        udpbcast_time = 0;				\
        wifidbg_ready = 0;				\
    } while (0);							\

#define close_server_socket()           \
    do {                                \
        winc_socket_close(server_fd);   \
        server_fd = -1;                 \
    } while (0)

#define close_udpbcast_socket()         \
    do {                                \
        winc_socket_close(udpbcast_fd); \
        udpbcast_fd = -1;               \
    } while (0)

#define TIMEDOUT(x) (x == -ETIMEDOUT || x == SOCK_ERR_TIMEOUT)

static int client_fd = -1;
static int server_fd = -1;
static int udpbcast_fd = -1;
static int udpbcast_time = 0;
static uint8_t ip_addr[WINC_IP_ADDR_LEN] = {0x0};
static char udpbcast_string[UDPCAST_STRING_SIZE] = {0x0};
static winc_socket_buf_t sockbuf;

#define WIFI_DBG_BUF_SIZE  256
#define WIFI_DBG_BUF_CNT	4
static uint8_t s_SendBuf[WIFI_DBG_BUF_CNT][WIFI_DBG_BUF_SIZE];
static uint8_t socket_buf[1024];
//static uint8_t cmd_buf[32];
static uint8_t request = 0;
static int32_t xfer_length = 0;
static ring_block_t s_txRB;
static uint8_t *s_pCurTxBuf, *s_pCurRxBuf;
static bool wifidbg_ready = false;
static bool wifidbg_ap_connected = false;
void wifidbg_disable_connection_loop();
void wifidbg_enable_connection_loop();	
void wifidbg_init_pit_timer_for_connection_loop();
int wifidbg_init(wifidbg_config_t *config)
{
    client_fd = -1;
    server_fd = -1;
    udpbcast_fd = -1;
	wifidbg_ap_connected = false;
	LED_DBG_CLR_ALL();
    if(!config->mode) { // STA Mode

        // Initialize WiFi in STA mode.
        if (winc_init(WINC_MODE_STA) != 0) {
            return -1;
        }
		if (M8266_socket_enter_ota(config->client_ssid,config->client_key))
			return -2;
        // Connect to network.
        if (winc_connect(config->client_ssid,
                         config->client_security,
                         config->client_key,
                         config->client_channel) != 0) {
            PRINTF("[WIFI DBG] Can't connect with AP:%s\r\n",config->client_ssid);
			
            return -2;
        }

        winc_ifconfig_t ifconfig;

        if (winc_ifconfig(&ifconfig) < 0) {
            return -3;
        }
		PRINTF("Connected with %s \r\n",config->client_ssid);
        memcpy(ip_addr, ifconfig.ip_addr, WINC_IP_ADDR_LEN);
        wifidbg_ap_connected = true;
		LED_DBG_STATE(1);
		
    } else { // AP Mode

        // Initialize WiFi in AP mode.
        if (winc_init(WINC_MODE_AP) != 0) {
            return -1;
        }

        // Start WiFi in AP mode.
        if (winc_start_ap(config->access_point_ssid,
                          config->access_point_security,
                          config->access_point_key,
                          config->access_point_channel) != 0) {
            return -2;
        }

        memcpy(ip_addr, SERVER_ADDR, WINC_IP_ADDR_LEN);
        wifidbg_ap_connected = true;
    }

    snprintf(udpbcast_string, UDPCAST_STRING_SIZE, UDPCAST_STRING,
             ip_addr[0], ip_addr[1], ip_addr[2], ip_addr[3],
             SERVER_PORT, config->board_name);

	RingBlk_Init(&s_txRB, s_SendBuf[0], WIFI_DBG_BUF_SIZE, WIFI_DBG_BUF_CNT);


    return 0;
}

void wifidbg_enter_dbg_mode(void)
{
	winc_enter_dbg_mode();
}

bool wifidbg_AP_connected(void)
{
	return wifidbg_ap_connected;
}

void wifidbg_FlushTxBuffer(void)
{
	RingBlk_Init(&s_txRB, s_SendBuf[0], WIFI_DBG_BUF_SIZE, WIFI_DBG_BUF_CNT);
}

uint32_t wifidbg_TxBufGetFilledBytes(void) {
	return RingBlk_GetUsedBytes(&s_txRB);
}

void wifidbg_TxBufWrite(const uint8_t *buf, uint32_t len)
{
	int i;
	int retry = 0;
	int rt;
    for (i = 0; i < len; ) {
#if 1
		if(RingBlk_GetFreeBytes(&s_txRB) == 0)
			return;
#else		
		while (RingBlk_GetFreeBytes(&s_txRB) == 0) {
			__WFI();
			if (retry++ >= 10) {
				//s_isTxIdle = 1; // it seems some bug prevent from restoring s_isTxIdle
				break;
			}
		}
#endif
		rt = RingBlk_Write(&s_txRB, buf, len - i);
		if(rt)
			i += rt;
		else
			return;
    }

}

int wifidbg_ReadLogTxBlk(uint8_t *pBuf, uint32_t bufSize) {
	int ret;
	ring_block_t rbBkup = s_txRB;
tryread:
	ret = RingBlk_Read(&s_txRB, pBuf, bufSize);
	if (ret < bufSize && rbBkup.cbTotUsed > ret) {
		s_txRB = rbBkup;
		goto tryread;
	}
	return ret;
}


void wifidbg_send_strn(const char *str, size_t len)
{
	if ((!wifidbg_ready) || (wifidbg_isconnected() == 0))
		return;

	wifidbg_TxBufWrite((const uint8_t *)str,len);
}

bool wifidbg_isconnected()
{	
	if ((client_fd >=0) && (server_fd >=0))
		return 1;

	return 0;
}

int wifidbg_connect_IDE()
{
	int ret;
    uint8_t *buf = socket_buf;
	
    sockaddr client_sockaddr,udpbcast_sockaddr,server_sockaddr;

	if (winc_isconnected() == 0)
	{
		wifidbg_ap_connected = false;
		PRINTF("Disconnected with AP...\r\n");
		usbdbg_set_irq_enabled(true);
		return -1;
	}
	LED_DBG_STATE(1);
    if ((client_fd < 0) && (udpbcast_fd < 0)) {
		
        // Create broadcast socket.
        make_sockaddr(&udpbcast_sockaddr, OPENMVCAM_BROADCAST_ADDR, OPENMVCAM_BROADCAST_PORT);

        if ((udpbcast_fd = winc_socket_socket(SOCK_DGRAM)) < 0) {
            return -1;
        }

        if ((ret = winc_socket_bind(udpbcast_fd, &udpbcast_sockaddr)) < 0) {
            close_udpbcast_socket();
            return -1;
        }

        return -1;
    }

    if ((client_fd < 0) && (udpbcast_fd >= 0) && (udpbcast_time<256)) {
		uint8_t board_cast_addr[4] = {192,168,43,229}; 
        // Broadcast message to the IDE.
		memcpy(board_cast_addr, ip_addr,4);
		board_cast_addr[3] = udpbcast_time % 256;
        //make_sockaddr(&udpbcast_sockaddr, OPENMVCAM_BROADCAST_ADDR, OPENMVCAM_BROADCAST_PORT);
		make_sockaddr(&udpbcast_sockaddr, board_cast_addr, OPENMVCAM_BROADCAST_PORT);
		
		for(int j=0;j<5;j++) {
			if ((ret = winc_socket_sendto(udpbcast_fd, (uint8_t *) udpbcast_string,
							strlen(udpbcast_string) + 1, &udpbcast_sockaddr, 500)) < 0) {
				close_udpbcast_socket();
				return -1;
			}
			rt_thread_mdelay(5);
		}
		udpbcast_time ++;
        return -1;
    }

    if (server_fd < 0) {
        // Create server socket
        make_sockaddr(&server_sockaddr, ip_addr, SERVER_PORT);

        if ((server_fd = winc_socket_socket(SOCK_STREAM)) < 0) {
            return -1;
        }

        if ((ret = winc_socket_bind(server_fd, &server_sockaddr)) < 0) {
            close_all_sockets();
            return -1;
        }

        if ((ret = winc_socket_listen(server_fd, 1)) < 0) {
            close_all_sockets();
            return -1;
        }

        return 0;
    }

    if (client_fd < 0) {
        sockbuf.size = sockbuf.idx = 0;
        // Call accept.
        if ((ret = winc_socket_accept(server_fd,
                        &client_sockaddr, &client_fd, 10)) < 0) {
							
			udpbcast_time = 0;
            if (TIMEDOUT(ret)) {
                client_fd = -1;
                return 0;
            } else {
                close_all_sockets();
                return -1;
            }
            
        }
        udpbcast_time = 0;
		wifidbg_ready = true;
	#ifndef MICROPY_PY_RTTHREAD	
		wifidbg_enable_connection_loop();
	#endif
		LED_DBG_STATE(2);
		usbdbg_set_irq_enabled(false);
    }

    return 0;
}

rt_timer_t wifi_tmr;

int wifidbg_dispatch()
{
	int ret = 0;
	int bytes = 0;
    uint8_t *buf = socket_buf;
	static uint8_t dbg_cmd[64] = {0};
	uint8_t md = 0;
    sockaddr client_sockaddr,udpbcast_sockaddr,server_sockaddr;
    static uint32_t dbg_tx_len =0;
    static uint32_t dbg_tx_rt =0;

	if (client_fd < 0)
		return -1;
	
	if ((sockbuf.size == 0)&&(winc_socket_has_rev(client_fd) == 0)){
		return -1;
	}
	
	M8266_DBG_IO_Write(0,1);
rx_loop:
	if(xfer_length == 0)
	{//new cmd from IDE	
		//M8266_DBG_IO_Toggle(0);
		if ((ret = winc_socket_recv(client_fd, buf, 6, &sockbuf, 100,&md)) < 0) {
			M8266_DBG_IO_Write(0,0);
			return -2;
		}
		if(ret == 0 && md !=0)
			goto rx_loop;
		
		if (buf[0] != 0x30) {
			memcpy(dbg_cmd,buf,6);
			memcpy(dbg_cmd+6,&sockbuf,32);
			M8266_DBG_IO_Write(0,0);
			systick_sleep(1);
			M8266_DBG_IO_Write(0,1);
			systick_sleep(1);
			M8266_DBG_IO_Write(0,0);
			//send empty package
			bytes = 4;
			*((int *)buf) = 0x1;
			M8266_DBG_IO_Toggle(3);
			if ((ret = winc_socket_sendblock(client_fd, (uint8_t *)buf,bytes, 100)) < 0) {
                	close_all_sockets();
					M8266_DBG_IO_Write(0,0);
                	return -2;
            }
            M8266_DBG_IO_Toggle(3);
			return 0;
		}
		//M8266_DBG_IO_Toggle(0);
		request = buf[1];
		xfer_length = *((uint32_t*)(buf+2));
		wifidbg_control(buf+6, request, xfer_length);
		if(xfer_length == 0 && sockbuf.size != 0)
		{
			sockbuf.size = 0;
			//send empty package
			bytes = 4;
			*((int *)buf) = 0x0;
			M8266_DBG_IO_Toggle(3);
			if ((ret = winc_socket_sendblock(client_fd, (uint8_t *)buf,bytes, 100)) < 0) {
                	close_all_sockets();
					M8266_DBG_IO_Write(0,0);
                	return -2;
            }
            M8266_DBG_IO_Toggle(3);
		}
	}
	//PRINTF("request:0x%x,cmd len:%d\r\n",request,xfer_length);

    while (xfer_length>0) {
        if (request & 0x80) {
            // Device-to-host data phase
            bytes = MIN(xfer_length, BUFFER_SIZE);
            
			wifidbg_data_in(buf, bytes);
			M8266_DBG_IO_Toggle(3);
			if ((ret = winc_socket_sendblock(client_fd, (uint8_t *)buf,bytes, 100)) < 0) {
                	close_all_sockets();
					M8266_DBG_IO_Write(0,0);
                	return -2;
            }
            M8266_DBG_IO_Toggle(3);
			xfer_length -= ret;
			if(xfer_length)
				systick_sleep(2);
			else if (xfer_length < 0)
			{
				return -2;
			}
				
            //PRINTF("Socket sent:%d,%d\r\n",bytes,ret);
        }
        else {
			
			if ((sockbuf.size == 0) && (winc_socket_has_rev(client_fd) == 0)){
				M8266_DBG_IO_Write(0,0);
				return -1;
			}
			
			//M8266_DBG_IO_Toggle(1);
			// Host-to-device data phase
			md = 0;
			do{
	            int bytes = MIN(xfer_length, BUFFER_SIZE);
	            if ((ret = winc_socket_recv(client_fd, buf, xfer_length, &sockbuf, 200,&md)) < 0) {
	                //close_all_sockets();
	                M8266_DBG_IO_Write(0,0);
	                return -2;
	            }
	            xfer_length -= ret;
				
				wifidbg_data_out(buf, ret);
				if (xfer_length < 0)
				{
					return -2;
				}
			}while(md);
            //M8266_DBG_IO_Toggle(1);
        }
    }

//    if((sockbuf.size!= 0) || (winc_socket_rev(client_fd) >0))
//    	goto rx_loop;

	M8266_DBG_IO_Write(0,0);
    return 0;
}

void rtt_wifidbg_hardjump()
{
	//send signal to main thread
	PRINTF("wifi dbg time out\r\n");
	rtt_send_sig_to_main();
}

void rt_wifidbg_timeout(void *parameter)
{
	int ret = 0;
	static uint32_t wd_count = 0;
	
	wifidbg_config_t *wifidbg_config = (wifidbg_config_t *)parameter;
	
	M8266_DBG_IO_Toggle(2);
	//connect to the ap
	if (wifidbg_ap_connected == false)
	{
		wifidbg_init(parameter);
	}
	
	//connect with ide
	if (wifidbg_isconnected() == 0)
	{
		wifidbg_connect_IDE();
	}
	else
	{
	//data dispach
		ret = wifidbg_dispatch();
		if (ret < 0)
			wd_count ++;
		else 
			wd_count = 0;

		if ((wd_count >= WIFIDBG_PIT_TIMEOUT_5S_COUNT) || (ret == -2))//5 sec no data from IDE,disconnect
		{
			M8266_DBG_IO_Toggle(1);
			PRINTF("6 sec no data from IDE, disconnect...\r\n");
			//if (winc_socket_is_connected() == 0)
			{
				wifidbg_disconnect();
				close_all_sockets();
				wd_count = 0;
				if(usbdbg_script_running())
				{
					usbdbg_set_script_running(false);
					mp_obj_exception_clear_traceback(MP_STATE_PORT(omv_ide_irq));
					rtt_wifidbg_hardjump();
				}
				usbdbg_set_irq_enabled(true);
				
			}
				
		}
	}
}

void rtt_wifidbg_start(void *parameter)
{
	wifi_tmr = rt_timer_create("wifi_rmr", rt_wifidbg_timeout,
                             parameter, WIFIDBG_PIT_INTERVAL_MS,
                             RT_TIMER_FLAG_PERIODIC|RT_TIMER_FLAG_SOFT_TIMER);
	
	if (wifi_tmr != RT_NULL) rt_timer_start(wifi_tmr);
	
	PRINTF("start wifi dbg timer\r\n");
}
#endif
#endif
