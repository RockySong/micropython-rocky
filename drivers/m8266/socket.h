/**
 *
 * \file
 *
 * \brief BSD alike socket interface.
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef __SOCKET_H__
#define __SOCKET_H__

#ifdef  __cplusplus
extern "C" {
#endif

/** \defgroup SocketHeader Socket
 *          BSD alike socket interface beftween the host layer and the network 
 *          protocol stacks in the firmware.
 *          These functions are used by the host application to send or receive
 *          packets and to do other socket operations.    
 */
 
/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
INCLUDES
*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*/


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
MACROS
*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*/
/**
 * @defgroup  SocketDefines Defines
 * @ingroup SocketHeader
 */

/** @defgroup  IPDefines TCP/IP Defines
 * @ingroup SocketDefines
 * The following list of macros are used to define constants used throughout the socket layer.
 * @{
 */
#define HOSTNAME_MAX_SIZE									64
/*!< 
	Maximum allowed size for a host domain name passed to the function gethostbyname @ref gethostbyname. 
	command value. Used with the setsockopt function. 

*/
	
#define SOCKET_BUFFER_MAX_LENGTH							1024
/*!< 
	Maximum allowed size for a socket data buffer. Used with @ref send socket 
	function to ensure that the buffer sent is within the allowed range. 
*/

#define  AF_INET											2
/*!< 
	The AF_INET is the address family used for IPv4. An IPv4 transport address is specified with the @ref sockaddr_in structure.
	(It is the only supported type for the current implementation.) 
*/


#define  SOCK_STREAM										1
/*!< 
	 One of the IPv4 supported socket types for reliable connection-oriented stream connection.
	 Passed to the @ref socket function for the socket creation operation. 
*/

#define  SOCK_DGRAM											2
/*!<
	 One of the IPv4 supported socket types for unreliable connectionless datagram connection.
	 Passed to the @ref socket function for the socket creation operation.
*/


#define SOCKET_FLAGS_SSL									0x01
/*!< 
	This flag shall be passed to the socket API for SSL session. 
*/

#define TCP_SOCK_MAX										(7)
/*!<
	Maximum number of simultaneous TCP sockets.
*/

#define UDP_SOCK_MAX										4
/*!<
	Maximum number of simultaneous UDP sockets.
*/

#define MAX_SOCKET											(TCP_SOCK_MAX + UDP_SOCK_MAX)
/*!<
	Maximum number of Sockets.
*/

#define SOL_SOCKET											1
/*!< 
	Socket option.
	Used with the @ref setsockopt function
*/

#define SOL_SSL_SOCKET										2
/*!< 
	SSL Socket option level.
	Used with the @ref setsockopt function
*/

#define	SO_SET_UDP_SEND_CALLBACK							0x00
/*!<
	Socket option used by the application to enable/disable
	the use of UDP send callbacks.
	Used with the @ref setsockopt function.
*/

#define IP_ADD_MEMBERSHIP									0x01
/*!<
	Set Socket Option Add Membership command value.
	Used with the @ref setsockopt function.
*/


#define IP_DROP_MEMBERSHIP									0x02
/*!<
	Set Socket Option Drop Membership command value.
	Used with the @ref setsockopt function.
*/
 //@}



/**
 * @defgroup  TLSDefines TLS Defines
 * @ingroup SocketDefines
 */



/** @defgroup  SSLSocketOptions TLS Socket Options
 * @ingroup TLSDefines
 * The following list of macros are used to define SSL Socket options.
 * @{
 * @sa setsockopt
 */

#define SO_SSL_BYPASS_X509_VERIF							0x01
/*!<
	Allow an opened SSL socket to bypass the X509 certificate 
	verification process.
	It is highly required NOT to use this socket option in production
	software applications. It is supported for debugging and testing 
	purposes.
	The option value should be casted to int type and it is handled
	as a boolean flag.
*/


#define SO_SSL_SNI											0x02
/*!<
	Set the Server Name Indicator (SNI) for an SSL socket. The
	SNI is a NULL terminated string containing the server name
	assocated with the connection. It must not exceed the size
	of HOSTNAME_MAX_SIZE.
*/


#define SO_SSL_ENABLE_SESSION_CACHING						0x03
/*!<
	This option allow the TLS to cache the session information for fast
	TLS session establishment in future connections using the
	TLS Protocol session resume features.
*/

//@}



/** @defgroup  SSLCipherSuiteConfiguration TLS Cipher Suite Configurations
 * @ingroup TLSDefines
 * The following list of macros are used to define SSL Ciphersuite Configuration.
 * @sa sslSetActiveCipherSuites
 * @{
 */

#define SSL_ENABLE_ALL_SUITES                               0xfffffffful
/*!<
	Enable all possible supported cipher suites.
*/

#define SSL_ENABLE_RSA_SHA_SUITES							0x01
/*!<
	Enable RSA Hmac_SHA based Ciphersuites. For example,
		TLS_RSA_WITH_AES_128_CBC_SHA
*/


#define SSL_ENABLE_RSA_SHA256_SUITES						0x02
/*!<
	Enable RSA Hmac_SHA256 based Ciphersuites. For example,
		TLS_RSA_WITH_AES_128_CBC_SHA256
*/


#define SSL_ENABLE_DHE_SHA_SUITES							0x04
/*!<
	Enable DHE Hmac_SHA based Ciphersuites. For example,
		TLS_DHE_RSA_WITH_AES_128_CBC_SHA
*/


#define SSL_ENABLE_DHE_SHA256_SUITES						0x08
/*!<
	Enable DHE Hmac_SHA256 based Ciphersuites. For example,
		TLS_DHE_RSA_WITH_AES_128_CBC_SHA256
*/


#define SSL_ENABLE_RSA_GCM_SUITES							0x10
/*!<
	Enable RSA AEAD based Ciphersuites. For example,
		TLS_RSA_WITH_AES_128_GCM_SHA256
*/


#define SSL_ENABLE_DHE_GCM_SUITES							0x20
/*!<
	Enable DHE AEAD based Ciphersuites. For example,
		TLS_DHE_RSA_WITH_AES_128_GCM_SHA256
*/

 //@}





/**************
Socket Errors
**************/
/**@defgroup  SocketErrorCode Error Codes
 * @ingroup SocketHeader
 * The following list of macros are used to define the possible error codes returned as a result of a call to a socket function.
 * Errors are listed in numerical order with the error macro name.
 * @{
 */
#define SOCK_ERR_NO_ERROR									0
/*!<
	Successfull socket operation
*/


#define SOCK_ERR_INVALID_ADDRESS							-1
/*!<
	Socket address is invalid. The socket operation cannot be completed successfully without specifying a specific address 
	For example: bind is called without specifying a port number
*/


#define SOCK_ERR_ADDR_ALREADY_IN_USE						-2
/*!<
	Socket operation cannot bind on the given address. With socket operations, only one IP address per socket is permitted. 
	Any attempt for a new socket to bind with an IP address already bound to another open socket, 
	will return the following error code. States that bind operation failed. 
*/


#define SOCK_ERR_MAX_TCP_SOCK								-3
/*!<
	Exceeded the maximum number of TCP sockets. A maximum number of TCP sockets opened simultaneously is defined through TCP_SOCK_MAX. 
	It is not permitted to exceed that number at socket creation. Identifies that @ref socket operation failed. 
*/


#define SOCK_ERR_MAX_UDP_SOCK								-4
/*!<
	Exceeded the maximum number of UDP sockets. A maximum number of UDP sockets opened simultaneously is defined through UDP_SOCK_MAX. 
	It is not permitted to exceed that number at socket creation. Identifies that @ref socket operation failed
*/


#define SOCK_ERR_INVALID_ARG								-6
/*!<
	An invalid arguement is passed to a function.
*/


#define SOCK_ERR_MAX_LISTEN_SOCK							-7
/*!<
	Exceeded the maximum number of TCP passive listening sockets.
	Identifies Identifies that @ref listen operation failed. 
*/


#define SOCK_ERR_INVALID									-9
/*!<
	The requested socket operation is not valid in the
	current socket state. 
	For example: @ref accept is called on a TCP socket before @ref bind or @ref listen.
*/


#define SOCK_ERR_ADDR_IS_REQUIRED							-11
/*!<
	Destination address is required. Failure to provide the socket address required for the socket operation to be completed.
	It is generated as an error to the @ref sendto function when the address required to send the data to is not known. 
*/


#define SOCK_ERR_CONN_ABORTED								-12
/*!<
	The socket is closed by the peer. The local socket is
	closed also.
*/


#define SOCK_ERR_TIMEOUT									-13
/*!<
	The socket pending operation has  timedout. 
*/


#define SOCK_ERR_BUFFER_FULL								-14
/*!<
	No buffer space available to be used for the requested socket operation.
*/

#ifdef _NM_BSP_BIG_END

#define _htonl(m)				(m)
#define _htons(A)				(A)

#else

#define _htonl(m)		\
	(uint32)(((uint32)(m << 24)) | ((uint32)((m & 0x0000FF00) << 8)) | ((uint32)((m & 0x00FF0000) >> 8)) | ((uint32)(m >> 24)))
/*!<
	Convert a 4-byte integer from the host representation to the Network byte order representation.
*/


#define _htons(A)   	(uint16)((((uint16) (A)) << 8) | (((uint16) (A)) >> 8))
/*!<
	Convert a 2-byte integer (short) from the host representation to the Network byte order representation.
*/


#endif


#define _ntohl      		_htonl
/*!<
	Convert a 4-byte integer from the Network byte order representation to the host representation .
*/


#define _ntohs      		_htons
/*!<
	Convert a 2-byte integer from the Network byte order representation to the host representation .
*/
 //@}

/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
DATA TYPES
*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*/
/** @defgroup  SocketEnums Enumeration-Typedef
 * @ingroup SocketHeader
 * Specific Enumuration-typdefs used for socket operations
 * @{ */

/*!
@typedef	\
	SOCKET

@brief
	Definition for socket handler data type.
	Socket ID,used with all socket operations to uniquely identify the socket handler.
	Such an ID is uniquely assigned at socket creation when calling @ref socket operation.
*/
typedef signed char SOCKET;



/*!
@struct	\
	in_addr

@brief
	IPv4 address representation.

	This structure is used as a placeholder for IPV4 address in other structures.
@see
	sockaddr_in
*/
typedef struct{
	uint32_t		s_addr;
	/*!<
		Network Byte Order representation of the IPv4 address. For example,
		the address "192.168.0.10" is represented as 0x0A00A8C0.
	*/
}in_addr;


/*!
@struct	\
	sockaddr

@brief
	Generic socket address structure.

@see \
      sockaddr_in
*/
struct sockaddr{
    uint16_t		sa_family;
	/*!< 
Socket address family.
	*/
    uint8_t		sa_data[14];
	/*!< 
		    Maximum size of all the different socket address structures.
	*/
};


/*!
@struct	\
	sockaddr_in

@brief
	Socket address structure for IPV4 addresses. Used to specify socket address infomation to which to connect to.
	Can be cast to @ref sockaddr structure.
*/
struct sockaddr_in{
	uint16_t			sin_family;
	/*!<
		Specifies the address familly(AF).
		Members of AF_INET address family are IPv4 addresses.
		Hence,the only supported value for this is AF_INET.
	*/
	uint16_t   		sin_port;
	/*!<
		Port number of the socket. 
		Network sockets are identified by a pair of IP addresses and port number.
		It must be set in the Network Byte Order format , @ref _htons (e.g. _htons(80)).
		Can NOT have zero value.
	*/
	in_addr			sin_addr;
	/*!<
		IP Address of the socket.
		The IP address is of type @ref in_addr structure. 
		Can be set to "0" to accept any IP address for server operation. non zero otherwise.
	*/
	uint8_t			sin_zero[8];
	/*!<
		Padding to make structure the same size as @ref sockaddr.
	*/
};
 //@}
/**@defgroup  AsyncCalback Asynchronous Events
 * @ingroup SocketEnums
 * Specific Enumuration used for asynchronous operations
 * @{ */

#ifdef  __cplusplus
}
#endif /* __cplusplus */

int M8266_wifi_init(uint8_t mode);
void socketInit();

int M8266_socket_socket(uint8_t type);

void M8266_socket_close(int fd);

int M8266_socket_bind(int fd, sockaddr *addr);

int M8266_socket_listen(int fd, uint32_t backlog);


int M8266_socket_accept(int fd, sockaddr *addr, int *fd_out, uint32_t timeout);

int M8266_socket_connect(int fd, sockaddr *addr, uint32_t timeout);

int M8266_socket_send(int fd, const uint8_t *buf, uint32_t len, uint32_t timeout);


int M8266_socket_recv(int fd, uint8_t *buf, uint32_t len, uint32_t timeout_ms, uint8_t *md);

int M8266_socket_sendto(int fd, const uint8_t *buf, uint32_t len, sockaddr *addr, uint32_t timeout);

int M8266_socket_recvfrom(int fd, uint8_t *buf, uint32_t len, sockaddr *addr, uint32_t timeout);




#endif /* __SOCKET_H__ */

