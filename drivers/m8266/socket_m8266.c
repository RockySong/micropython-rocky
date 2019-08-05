#include "winc.h"
#include "common.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>


// WINC's includes
#include "socket.h"
#include "M8266WIFIDrv.h"
#include "winc.h"
#include "m8266_hw.h"
#include "fsl_debug_console.h"
#define MAX_CLIENTS	15
#define MAX_LINKS	4

typedef enum 
{
	UDP,
	TCP_CLIENT,
	TCP_SERVER
}CONNECTION_TYPE;

typedef enum 
{
	SOCKET_IDLE,
	SOCKET_BIND,
	SOCKET_LISTEN,
	SOCKET_CONNECTED,
	SOCKET_DISCONNECTED
}SOCKET_ST;

typedef struct socket_t
{
	uint8_t sock;
	uint8_t linkno;
	uint8_t socket_type;
	uint8_t protocal;
	uint8_t bused;
	uint8_t status;
	uint16_t local_port;
	
}g_socket_t;

typedef struct socket_out_t
{
	sockaddr client_addr;
	uint8_t sock;
	uint8_t sock_in;
	uint8_t linkno;
	uint16_t remote_port;
}g_socket_out_t;

struct socket_t gSockets[MAX_LINKS];
struct socket_out_t gSockets_client[MAX_CLIENTS];
uint8_t socket_count = 0;
uint8_t socket_out_count = 0;


int M8266_wifi_init(uint8_t mode)
{
	M8266_drv_init();
	M8266_setup(mode);

	return 0;
}

void M8266_wifi_deinit()
{
}

void socketInit()
{
	memset(gSockets, 0x0, sizeof(gSockets));
	socket_count = 0;
	for(int i =0; i < MAX_LINKS; i++)
	{
		gSockets[i].linkno = i;
		gSockets[i].bused = 0;
	}
	memset(gSockets_client, 0x0, sizeof(gSockets_client));
	socket_out_count = 0;
}

int M8266_socket_socket(uint8_t type)
{	
	for(int i =0; i < MAX_LINKS; i++)
	{
		if (gSockets[i].bused == 0)
		{
			socket_count ++;
			gSockets[i].sock = i;
			gSockets[i].socket_type = type;
			gSockets[i].bused = 1;
			return i;
		}
	}

	return -1;
}

void M8266_socket_close(int fd)
{
	uint16_t status;

	if (fd < 0)
		return;
		
	for (int i = 0; i < MAX_LINKS; i++)
	{
		if (fd == i && gSockets[i].bused == 1)
		{
			if (gSockets[fd].status == SOCKET_CONNECTED){
				if (M8266WIFI_SPI_Delete_Connection(gSockets[fd].linkno, &status) == 0)
					PRINTF("%s delete %d error 0x%x\r\n",__func__, gSockets[fd].linkno,status);
				else
					PRINTF("%s delete connection:0x%x\r\n",__func__,gSockets[fd].linkno);	
			}
				
			gSockets[i].bused = 0;
			gSockets[i].status = 0;
			socket_count --;
		}
	}
}

int M8266_socket_bind(int fd, sockaddr *addr)
{
	uint8_t ip[4];
	gSockets[fd].status = SOCKET_BIND;
	unpack_sockaddr(addr, ip, &gSockets[fd].local_port);
	PRINTF("%s bind port:%d\r\n",__func__,gSockets[fd].local_port);
	
	return 0;
}

int M8266_socket_listen(int fd, uint32_t backlog)
{
	gSockets[fd].status = SOCKET_LISTEN;
	gSockets[fd].protocal = TCP_SERVER;
	
	return 0;
}

int M8266_socket_accept(int fd, sockaddr *addr, int *fd_out, uint32_t timeout)
{
	uint8_t remote_addr[4];
	uint16_t remote_port;
	char ip_str[30] = {0};
	uint16_t status;
	uint8_t connect_state = 0;
	uint8_t remote_ip[4];
	uint8_t connect_type = 0;
	
	unpack_sockaddr(addr, remote_addr, &remote_port);
	sprintf(ip_str, "%d.%d.%d.%d",remote_addr[0],remote_addr[1],remote_addr[2],remote_addr[3]);
	
	if (M8266WIFI_SPI_Setup_Connection(gSockets[fd].protocal, 
			gSockets[fd].local_port,ip_str,remote_port, gSockets[fd].linkno,timeout, 
			&status) == 0)
	{
		PRINTF("%s Setup COnnection failed:x%x\r\n",__func__,status);
		return -2;		
	}

	if( M8266WIFI_SPI_Set_TcpServer_Auto_Discon_Timeout(gSockets[fd].linkno, 0xffff, &status) == 0)
    {
    	PRINTF("%s Set COnnection Auto Dis failed:x%x\r\n",__func__,status);
    	return -2;
    }
    
	PRINTF("%s TCP Server accept at local port%d linkno 0x%x\r\n",__func__,gSockets[fd].local_port,gSockets[fd].linkno);
	
	volatile uint32_t us_start = mp_hal_ticks_us();
    while(mp_hal_ticks_us() - us_start < timeout*1000*1000)
    {
    	if (M8266WIFI_SPI_Query_Connection(gSockets[fd].linkno, &connect_type, 
    			&connect_state,NULL,ip_str, &remote_port, &status) != 0)
		{
			//PRINTF("%d Connection State=0x%x, Status:0x%x Client:%s:%d\r\n",connect_type,connect_state,status,ip_str,remote_port);
	    	if (connect_state == ANYLINKIN_WIFI_LINK_CONNECTION_STATE_CONNECT)
	    	{
	    		gSockets[fd].status = SOCKET_CONNECTED;
	    		if(socket_out_count < MAX_CLIENTS)
	    		{
	    			uint32_t client_ip = nmi_inet_addr(ip_str);
	    			make_sockaddr(&gSockets_client[socket_out_count].client_addr,(uint8_t *)&client_ip,remote_port);
						
	    			*fd_out = socket_out_count;
	    			gSockets_client[socket_out_count].sock = *fd_out;
	    			gSockets_client[socket_out_count].sock_in = fd;
	    			gSockets_client[socket_out_count].linkno = gSockets[fd].linkno;
	    			gSockets_client[socket_out_count].remote_port = remote_port;
	    			socket_out_count ++;
					PRINTF("TCP Client %d Connected ip:%s at linkno %d\r\n",*fd_out,ip_str,gSockets[fd].linkno);
	    			return 0;
	    		}
	    	}
		}
		else
		{
			PRINTF("%s Query COnnection State failed:x%x\r\n",__func__,status);
		}
		
	    mp_hal_delay_us(500);
    }

    return SOCK_ERR_TIMEOUT;
}

int M8266_socket_connect(int fd, sockaddr *addr, uint32_t timeout)
{
	uint8_t remote_addr[4];
	uint16_t remote_port;
	char ip_str[30] = {0};
	uint16_t status;
	uint8_t connect_state = 0;
	uint8_t remote_ip[4];
	
	unpack_sockaddr(addr, remote_addr, &remote_port);
	sprintf(ip_str, "%d.%d.%d.%d",remote_addr[0],remote_addr[1],remote_addr[2],remote_addr[3]);

	gSockets[fd].protocal = TCP_CLIENT;
	if (M8266WIFI_SPI_Setup_Connection(gSockets[fd].protocal, 
				gSockets[fd].local_port,ip_str,remote_port, gSockets[fd].linkno,timeout, 
				&status) == 0)
	{
			return -1;		
	}
	PRINTF("TCP Client connecting to %s, status:0x%x\r\n",ip_str,status);
	return 0;
}

int M8266_socket_is_connected(int fd)
{
	uint16_t status;
	uint8_t connect_state = 0;
	
	if (M8266WIFI_SPI_Query_Connection(gSockets[fd].linkno, NULL,&connect_state,NULL,NULL, NULL, &status) == 0)
    {
    	PRINTF("M8266WIFI_SPI_Query_Connection failed :0x%x\r\n",status);
    	return 0;
    }

    if (connect_state ==0 || connect_state > 5)
    	return 0;

    return 1;
}

int M8266_socket_send(int fd, const uint8_t *buf, uint32_t len, uint32_t timeout_ms)
{
	
	uint16_t loops = 0;
	uint32_t sent = 0; 
	uint32_t tcp_packet_size = 1024;
	uint16_t status;
	
	if (fd > socket_out_count)
		return -1;

	volatile uint32_t us_start = mp_hal_ticks_us();
    for(sent=0, loops=0; (sent<len)&&(loops<= 1000); loops++)
    {		
		sent += M8266WIFI_SPI_Send_Data((uint8_t *)buf+sent, ((len-sent)>tcp_packet_size)?tcp_packet_size:(len-sent),gSockets_client[fd].linkno, &status);
        if(sent>=len)  return sent;
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
                 	PRINTF("%s sent:%d len:%d, status:0x%x\r\n",__func__,sent,len,status);
                 	return -1;
	            }
	            else if(   ((status&0xFF) == 0x11)
	            		||((status&0xFF) == 0x12)||((status&0xFF) == 0x10)  )
	            {
					mp_hal_delay_us(200);
	            	return sent;
	            }
	            else
	            {
	               mp_hal_delay_us(100);
	            }
		}

		if(mp_hal_ticks_us() - us_start >= timeout_ms*1000)
			return sent;
    } // end of for(...
	return sent;
}

int M8266_socket_sendblock(int fd, const uint8_t *buf, uint32_t len,uint32_t block_size, uint32_t timeout_ms)
{
	
	uint16_t loops = 0;
	uint32_t sent = 0; 
	uint32_t tcp_packet_size = 1024;
	uint16_t status;
	static uint16_t error_status;
	if (fd > socket_out_count)
		return -1;

   // for(sent=0, loops=0; (sent<len)&&(loops<= 1000); loops++)
    {
	#if 0		
		sent = M8266WIFI_SPI_Send_Data_Block((uint8_t *)buf, len,block_size,gSockets_client[fd].linkno,&status);
	#else
		sent = M8266WIFI_SPI_Send_BlockData((uint8_t *)buf, len,block_size,gSockets_client[fd].linkno,NULL,0, &status);
	#endif
		error_status = status;
        if(sent>=len)  return sent;
		if((status&0xFF) == 0x00)
    	{
      	}
		else
		{
			
			if( ((status&0xFF) == 0x14)      // 0x14 = connection of link_no not present
                 || ((status&0xFF) == 0x15)    // 0x15 = connection of link_no closed
                 || ((status&0xFF) == 0x18))  // 0x18 = TCP server in listening states and no tcp clients connecting to so far
	            {
                 // add some failure process here
                 	PRINTF("%s sent:%d len:%d, status:0x%x\r\n",__func__,sent,len,status);
                 	return -1;
	            }
	            else if( ((status&0xFF) == 0x11)
	            		||((status&0xFF) == 0x12)||((status&0xFF) == 0x10)  )
	            {
					mp_hal_delay_us(200);
	            	return sent;
	            }
	            else
	            {
	               mp_hal_delay_us(100);
	            }
		}


    } // end of for(...
	return sent;
}

int M8266_socket_has_data_rev(int fd)
{
	return M8266WIFI_SPI_Has_DataReceived();
}

int M8266_socket_recv(int fd, uint8_t *buf, uint32_t len, uint32_t timeout_ms, uint8_t *md)
{
	uint16_t status;
	uint32_t read_len;
	uint8_t linkno;
	read_len = M8266WIFI_SPI_RecvData(buf,len,timeout_ms,&linkno,&status);
	
	status = status & 0xff;
	if (status == 0x2f){
		PRINTF("M8266_socket_recv error:0x%x\r\n",status);
		*md = 0;
		return -1;
	}
	else if(status == 0x24)
	{
		*md = 1;
	}
	else if(status == 0x23)
	{
		*md = 1;
	}
	else if ( status == 0x22)
	{
		*md = 0;
	}
	else if (status == 0)
	{
		*md = 0;
	}
	//PRINTF("TCP Recieved:%d status:0x%x at link %d\r\n",read_len, status,linkno);
	return read_len;
}

int M8266_socket_sendto(int fd, const uint8_t *buf, uint32_t len, sockaddr *addr, uint32_t timeout_ms)
{
	uint8_t remote_addr[4];
	uint16_t remote_port;
	char ip_str[30] = {0};
	uint8_t connect_state = 0;
	uint8_t remote_ip[4];
	uint16_t loops = 0;
	uint32_t sent = 0; 
	uint32_t tcp_packet_size = 1024;
	uint16_t status;
		
	unpack_sockaddr(addr, remote_addr, &remote_port);
	sprintf(ip_str, "%d.%d.%d.%d",remote_addr[0],remote_addr[1],remote_addr[2],remote_addr[3]);
	if (gSockets[fd].status <= SOCKET_BIND)
	{
		gSockets[fd].protocal = UDP;
		
		PRINTF("UDP Setup at linkno:%d:%d\r\n",gSockets[fd].linkno, gSockets[fd].protocal);

		if (M8266WIFI_SPI_Setup_Connection(gSockets[fd].protocal, 
					gSockets[fd].local_port,ip_str,remote_port, gSockets[fd].linkno,timeout_ms, 
					&status) == 0)
		{
				return -1;		
		}

		gSockets[fd].status = SOCKET_CONNECTED;
	}

	//PRINTF("UDP Send data to %d.%d.%d.%d port:%d at %d\r\n",remote_addr[0],remote_addr[1],remote_addr[2],remote_addr[3],remote_port,gSockets[fd].linkno);
	volatile uint32_t us_start = mp_hal_ticks_us();
    for(sent=0, loops=0; (sent<len)&&(loops<= 1000); loops++)
    {
		sent = M8266WIFI_SPI_Send_Udp_Data((uint8_t *)buf+sent, ((len-sent)>tcp_packet_size)?tcp_packet_size:(len-sent),gSockets[fd].linkno,ip_str,remote_port, &status);

		if(sent>=len)  return sent;
		if((status&0xFF) == 0x00)
    	{
      	}
		else
		{
			PRINTF("UDP Send to (%s)Data sent:%d len%d status:0x%x\r\n",ip_str,sent,len,status);
            if ((status & 0xFF) == 0x12)
            {
               mp_hal_delay_us(100);
            }
            else 
            	return sent;
		}

		if(mp_hal_ticks_us() - us_start >= timeout_ms*1000)
			return sent;
	}

	return sent;
	
}

int M8266_socket_recvfrom(int fd, uint8_t *buf, uint32_t len, sockaddr *addr, uint32_t timeout_ms)
{

	uint16_t status;
	uint8_t remote_addr[4];
	uint16_t remote_port;
	char ip_str[30] = {0};
	uint8_t linkno;
	
	unpack_sockaddr(addr, remote_addr, &remote_port);
	sprintf(ip_str, "%d.%d.%d.%d",remote_addr[0],remote_addr[1],remote_addr[2],remote_addr[3]);

	if (gSockets[fd].status <= SOCKET_BIND)
	{
		gSockets[fd].protocal = UDP;
		
		PRINTF("UDP Rev Setup at linkno%d\r\n",gSockets[fd].linkno);

		if (M8266WIFI_SPI_Setup_Connection(gSockets[fd].protocal, 
					gSockets[fd].local_port,ip_str,remote_port, gSockets[fd].linkno,timeout_ms, 
					&status) == 0)
		{
				return -1;		
		}

		gSockets[fd].status = SOCKET_CONNECTED;
	}

	int read_len = M8266WIFI_SPI_RecvData_ex(buf,len,timeout_ms,&linkno,remote_addr,&remote_port,&status);
	if (status &0xff== 0x2f)
		return -1;
	PRINTF("UDP Rev from %d.%d.%d.%d readlen:%d status:0x%x at link %d\r\n",remote_addr[0],remote_addr[1],remote_addr[2],remote_addr[3],read_len,status,linkno);

	return read_len;
	
}

void M8266_socket_dbg_mode()
{
#define DBG_PORT		4321
#define DBG_BUF_SIZE	2501
#define LOOP_CNT		1024
#define BUFFER_SIZE 1024

	int server_fd,client_fd;
	sockaddr client_sockaddr,udpbcast_sockaddr,server_sockaddr;
	int ret;
	uint8_t ip_addr[WINC_IP_ADDR_LEN] = {0x0};
	static char buf[DBG_BUF_SIZE];	
	static int dbg_total_size = 0;
	uint8_t md;
	static winc_socket_buf_t dbg_sockbuf;
	static uint8_t request = 0;
	static uint32_t xfer_length = 0;
	int bytes;
	uint8_t rd_buf[6] = {0};
	if ((server_fd = winc_socket_socket(SOCK_STREAM)) < 0) {
            return;
    }

	make_sockaddr(&server_sockaddr, ip_addr, DBG_PORT);
    if ((ret = winc_socket_bind(server_fd, &server_sockaddr)) < 0) {
        return;
    }

    if ((ret = winc_socket_listen(server_fd, 1)) < 0) {
        return ;
    }

    if ((ret = winc_socket_accept(server_fd,
                        &client_sockaddr, &client_fd, 10)) < 0) {
        winc_socket_close(server_fd);
		return ;
    }

#if 1
	while(1)
	{
		
		
		if(M8266WIFI_SPI_Has_DataReceived() == 0)
			continue;
		
		if ((ret = winc_socket_recv_in_int(client_fd, rd_buf, 6, &dbg_sockbuf, 100,&md)) < 0) {
			
			
				
				continue;
		}
		
		if (ret != 6 || rd_buf[0] != 0x30) {
			//M8266_DBG_IO_Toggle(0);
			continue;
		}
		//M8266_DBG_IO_Toggle(0);
		request = rd_buf[1];
		xfer_length = *((uint32_t*)(rd_buf+2));
		usbdbg_control(rd_buf+6, request, xfer_length);
		
		while (xfer_length>0) {
        if (request & 0x80) {
            // Device-to-host data phase
            bytes = MIN(xfer_length, BUFFER_SIZE);
            xfer_length -= bytes;
			
            wifidbg_data_in(buf, bytes);

			if ((ret = winc_socket_sendblock_in_int(client_fd, (uint8_t *)buf,bytes, 100)) < 0) {
                  	continue;
            	}
			}
		}
		mp_hal_delay_us(8000);
		
	}
#else
	for(int i=0;i<DBG_BUF_SIZE;i++)
		buf[i] = i;

	for(int j=0;;j++)
	{
		if ((ret = winc_socket_sendblock_in_int(client_fd, (uint8_t *)buf, DBG_BUF_SIZE, 100)) < 0) {
           winc_socket_close(server_fd);
           return;
        }

        dbg_total_size += ret;
		mp_hal_delay_us(400);
	}

	winc_socket_close(server_fd);
#endif        
}