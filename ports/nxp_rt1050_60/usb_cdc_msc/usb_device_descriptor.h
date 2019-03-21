/*
 * Copyright (c) 2015 - 2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _USB_DEVICE_DESCRIPTOR_H_
#define _USB_DEVICE_DESCRIPTOR_H_ 1

/*******************************************************************************
* Definitions
******************************************************************************/
#define USB_DEVICE_SPECIFIC_BCD_VERSION (0x0200)
#define USB_DEVICE_DEMO_BCD_VERSION (0x0101U)

/* Communication Class SubClass Codes */
#define USB_CDC_DIRECT_LINE_CONTROL_MODEL (0x01)
#define USB_CDC_ABSTRACT_CONTROL_MODEL (0x02)
#define USB_CDC_TELEPHONE_CONTROL_MODEL (0x03)
#define USB_CDC_MULTI_CHANNEL_CONTROL_MODEL (0x04)
#define USB_CDC_CAPI_CONTROL_MOPDEL (0x05)
#define USB_CDC_ETHERNET_NETWORKING_CONTROL_MODEL (0x06)
#define USB_CDC_ATM_NETWORKING_CONTROL_MODEL (0x07)
#define USB_CDC_WIRELESS_HANDSET_CONTROL_MODEL (0x08)
#define USB_CDC_DEVICE_MANAGEMENT (0x09)
#define USB_CDC_MOBILE_DIRECT_LINE_MODEL (0x0A)
#define USB_CDC_OBEX (0x0B)
#define USB_CDC_ETHERNET_EMULATION_MODEL (0x0C)

/* Communication Class Protocol Codes */
#define USB_CDC_NO_CLASS_SPECIFIC_PROTOCOL (0x00) /*also for Data Class Protocol Code */
#define USB_CDC_AT_250_PROTOCOL (0x01)
#define USB_CDC_AT_PCCA_101_PROTOCOL (0x02)
#define USB_CDC_AT_PCCA_101_ANNEX_O (0x03)
#define USB_CDC_AT_GSM_7_07 (0x04)
#define USB_CDC_AT_3GPP_27_007 (0x05)
#define USB_CDC_AT_TIA_CDMA (0x06)
#define USB_CDC_ETHERNET_EMULATION_PROTOCOL (0x07)
#define USB_CDC_EXTERNAL_PROTOCOL (0xFE)
#define USB_CDC_VENDOR_SPECIFIC (0xFF) /*also for Data Class Protocol Code */

/* Data Class Protocol Codes */
#define USB_CDC_PYHSICAL_INTERFACE_PROTOCOL (0x30)
#define USB_CDC_HDLC_PROTOCOL (0x31)
#define USB_CDC_TRANSPARENT_PROTOCOL (0x32)
#define USB_CDC_MANAGEMENT_PROTOCOL (0x50)
#define USB_CDC_DATA_LINK_Q931_PROTOCOL (0x51)
#define USB_CDC_DATA_LINK_Q921_PROTOCOL (0x52)
#define USB_CDC_DATA_COMPRESSION_V42BIS (0x90)
#define USB_CDC_EURO_ISDN_PROTOCOL (0x91)
#define USB_CDC_RATE_ADAPTION_ISDN_V24 (0x92)
#define USB_CDC_CAPI_COMMANDS (0x93)
#define USB_CDC_HOST_BASED_DRIVER (0xFD)
#define USB_CDC_UNIT_FUNCTIONAL (0xFE)

/* Descriptor SubType in Communications Class Functional Descriptors */
#define USB_CDC_HEADER_FUNC_DESC (0x00)
#define USB_CDC_CALL_MANAGEMENT_FUNC_DESC (0x01)
#define USB_CDC_ABSTRACT_CONTROL_FUNC_DESC (0x02)
#define USB_CDC_DIRECT_LINE_FUNC_DESC (0x03)
#define USB_CDC_TELEPHONE_RINGER_FUNC_DESC (0x04)
#define USB_CDC_TELEPHONE_REPORT_FUNC_DESC (0x05)
#define USB_CDC_UNION_FUNC_DESC (0x06)
#define USB_CDC_COUNTRY_SELECT_FUNC_DESC (0x07)
#define USB_CDC_TELEPHONE_MODES_FUNC_DESC (0x08)
#define USB_CDC_TERMINAL_FUNC_DESC (0x09)
#define USB_CDC_NETWORK_CHANNEL_FUNC_DESC (0x0A)
#define USB_CDC_PROTOCOL_UNIT_FUNC_DESC (0x0B)
#define USB_CDC_EXTENSION_UNIT_FUNC_DESC (0x0C)
#define USB_CDC_MULTI_CHANNEL_FUNC_DESC (0x0D)
#define USB_CDC_CAPI_CONTROL_FUNC_DESC (0x0E)
#define USB_CDC_ETHERNET_NETWORKING_FUNC_DESC (0x0F)
#define USB_CDC_ATM_NETWORKING_FUNC_DESC (0x10)
#define USB_CDC_WIRELESS_CONTROL_FUNC_DESC (0x11)
#define USB_CDC_MOBILE_DIRECT_LINE_FUNC_DESC (0x12)
#define USB_CDC_MDLM_DETAIL_FUNC_DESC (0x13)
#define USB_CDC_DEVICE_MANAGEMENT_FUNC_DESC (0x14)
#define USB_CDC_OBEX_FUNC_DESC (0x15)
#define USB_CDC_COMMAND_SET_FUNC_DESC (0x16)
#define USB_CDC_COMMAND_SET_DETAIL_FUNC_DESC (0x17)
#define USB_CDC_TELEPHONE_CONTROL_FUNC_DESC (0x18)
#define USB_CDC_OBEX_SERVICE_ID_FUNC_DESC (0x19)

/* usb descritpor length */
#define USB_DESCRIPTOR_LENGTH_CONFIGURATION_ALL (98)
#define USB_MSC_DISK_REPORT_DESCRIPTOR_LENGTH (63)
#define USB_CDC_VCOM_REPORT_DESCRIPTOR_LENGTH (33)
#define USB_IAD_DESC_SIZE (8)
#define USB_DESCRIPTOR_LENGTH_CDC_HEADER_FUNC (5)
#define USB_DESCRIPTOR_LENGTH_CDC_CALL_MANAG (5)
#define USB_DESCRIPTOR_LENGTH_CDC_ABSTRACT (4)
#define USB_DESCRIPTOR_LENGTH_CDC_UNION_FUNC (5)

#define USB_DEVICE_CONFIGURATION_COUNT (1)
#define USB_DEVICE_STRING_COUNT (11)
#define USB_DEVICE_LANGUAGE_COUNT (1)
#define USB_INTERFACE_COUNT (4)	// 20171124

#define USB_COMPOSITE_CONFIGURE_INDEX (1)

#define USB_MSC_DISK_CLASS (0x08)
/* scsi command set */
#define USB_MSC_DISK_SUBCLASS (0x06)
/* bulk only transport protocol */
#define USB_MSC_DISK_PROTOCOL (0x50)

#define USB_MSC_DISK_INTERFACE_COUNT (1)
#define USB_MSC_DISK_INTERFACE_INDEX (2)
#define USB_MSC_DISK_ENDPOINT_COUNT (2)
#define USB_MSC_DISK_BULK_IN_ENDPOINT (1)
#define USB_MSC_DISK_BULK_OUT_ENDPOINT (1)

#define HS_MSC_DISK_BULK_IN_PACKET_SIZE 512 //(512)
#define FS_MSC_DISK_BULK_IN_PACKET_SIZE (64)
#define HS_MSC_DISK_BULK_OUT_PACKET_SIZE 512 //(512)
#define FS_MSC_DISK_BULK_OUT_PACKET_SIZE (64)

/* Configuration, interface and endpoint. */
#define USB_CDC_VCOM_CIC_CLASS (0x02)
#define USB_CDC_VCOM_CIC_SUBCLASS (0x02)
#define USB_CDC_VCOM_CIC_PROTOCOL (0x00)
#define USB_CDC_VCOM_DIC_CLASS (0x0A)
#define USB_CDC_VCOM_DIC_SUBCLASS (0x00)
#define USB_CDC_VCOM_DIC_PROTOCOL (0x00)

#define USB_CDC_VCOM_CIC_INTERFACE_INDEX (0)
#define USB_CDC_VCOM_DIC_INTERFACE_INDEX (1)
#define USB_CDC_VCOM_CIC_ENDPOINT_COUNT (1)
#define USB_CDC_VCOM_CIC_INTERRUPT_IN_ENDPOINT (3)
#define USB_CDC_VCOM_DIC_ENDPOINT_COUNT (2)
#define USB_CDC_VCOM_DIC_BULK_IN_ENDPOINT (2)
#define USB_CDC_VCOM_DIC_BULK_OUT_ENDPOINT (2)

/* Packet size. */
#define HS_CDC_VCOM_INTERRUPT_IN_PACKET_SIZE (16)
#define FS_CDC_VCOM_INTERRUPT_IN_PACKET_SIZE (16)
#define HS_CDC_VCOM_INTERRUPT_IN_INTERVAL (0x07) /* 2^(7-1) = 8ms */
#define FS_CDC_VCOM_INTERRUPT_IN_INTERVAL (0x08)

#define HS_CDC_VCOM_BULK_IN_PACKET_SIZE (512)
#define FS_CDC_VCOM_BULK_IN_PACKET_SIZE (64)
#define HS_CDC_VCOM_BULK_OUT_PACKET_SIZE (512)
#define FS_CDC_VCOM_BULK_OUT_PACKET_SIZE (64)

/* String descriptor length. */
#define USB_DESCRIPTOR_LENGTH_STRING0 (4)
#define USB_DESCRIPTOR_LENGTH_STRING1 (38)
#define USB_DESCRIPTOR_LENGTH_STRING2 (38)
#define USB_DESCRIPTOR_LENGTH_STRING3 (34)
#define USB_DESCRIPTOR_LENGTH_STRING4 (36)

#define USB_DESCRIPTOR_TYPE_CDC_CS_INTERFACE (0x24)
#define USB_DESCRIPTOR_TYPE_CDC_CS_ENDPOINT (0x25)

#define USB_HID_MOUSE_INTERFACE_COUNT (1U)
// #define USB_HID_MOUSE_INTERFACE_INDEX (0U)
#define USB_HID_MOUSE_IN_BUFFER_LENGTH (8U)
#define USB_HID_MOUSE_ENDPOINT_COUNT (1U)
// #define USB_HID_MOUSE_ENDPOINT_IN (1U)

#define USB_HID_MOUSE_REPORT_LENGTH (0x04U)

#define USB_HID_MOUSE_CLASS (0x03U)
#define USB_HID_MOUSE_SUBCLASS (0x01U)
#define USB_HID_MOUSE_PROTOCOL (0x02U)

#define HS_HID_MOUSE_INTERRUPT_IN_PACKET_SIZE (8U)
#define FS_HID_MOUSE_INTERRUPT_IN_PACKET_SIZE (8U)
#define HS_HID_MOUSE_INTERRUPT_IN_INTERVAL (0x06U) /* 2^(6-1) = 4ms */
#define FS_HID_MOUSE_INTERRUPT_IN_INTERVAL (0x04U)

#define USB_HID_KEYBOARD_CLASS (0x03U)
#define USB_HID_KEYBOARD_SUBCLASS (0x01U)
#define USB_HID_KEYBOARD_PROTOCOL (0x01U)

#define USB_HID_KEYBOARD_INTERFACE_COUNT (1U)
// #define USB_HID_KEYBOARD_INTERFACE_INDEX (1U)
#define USB_HID_KEYBOARD_IN_BUFFER_LENGTH (8U)
#define USB_HID_KEYBOARD_ENDPOINT_COUNT (1U)
// #define USB_HID_KEYBOARD_ENDPOINT_IN (2U)

#define HS_HID_KEYBOARD_INTERRUPT_IN_PACKET_SIZE (8U)
#define FS_HID_KEYBOARD_INTERRUPT_IN_PACKET_SIZE (8U)
#define HS_HID_KEYBOARD_INTERRUPT_IN_INTERVAL (0x06U) /* 2^(6-1) = 4ms */
#define FS_HID_KEYBOARD_INTERRUPT_IN_INTERVAL (0x04U)

#define USB_HID_KEYBOARD_REPORT_LENGTH (0x08U)

#define USB_HID_GENERIC_CONFIGURE_INDEX (1U)
#define USB_HID_GENERIC_INTERFACE_COUNT (1U)

#define USB_HID_GENERIC_IN_BUFFER_LENGTH (8U)
#define USB_HID_GENERIC_OUT_BUFFER_LENGTH (8U)
#define USB_HID_GENERIC_ENDPOINT_COUNT (2U)
// #define USB_HID_GENERIC_INTERFACE_INDEX (0U)
// #define USB_HID_GENERIC_ENDPOINT_IN (1U)
// #define USB_HID_GENERIC_ENDPOINT_OUT (2U)

#define USB_HID_GENERIC_CLASS (0x03U)
#define USB_HID_GENERIC_SUBCLASS (0x00U)
#define USB_HID_GENERIC_PROTOCOL (0x00U)

#define HS_HID_GENERIC_INTERRUPT_OUT_PACKET_SIZE (8U)
#define FS_HID_GENERIC_INTERRUPT_OUT_PACKET_SIZE (8U)
#define HS_HID_GENERIC_INTERRUPT_OUT_INTERVAL (0x04U) /* 2^(4-1) = 1ms */
#define FS_HID_GENERIC_INTERRUPT_OUT_INTERVAL (0x01U)

#define HS_HID_GENERIC_INTERRUPT_IN_PACKET_SIZE (8U)
#define FS_HID_GENERIC_INTERRUPT_IN_PACKET_SIZE (8U)
#define HS_HID_GENERIC_INTERRUPT_IN_INTERVAL (0x04U) /* 2^(4-1) = 1ms */
#define FS_HID_GENERIC_INTERRUPT_IN_INTERVAL (0x01U)


/* Class code. */
#define USB_DEVICE_CLASS (0xEF)
#define USB_DEVICE_SUBCLASS (0x02)
#define USB_DEVICE_PROTOCOL (0x01)

#define USB_DEVICE_MAX_POWER (0x32)

#define WBVAL(x) ((x) & 0xFF),(((x) >> 8) & 0xFF)


/* HID Subclass Codes */
#define HID_SUBCLASS_NONE               0x00
#define HID_SUBCLASS_BOOT               0x01

/* HID Protocol Codes */
#define HID_PROTOCOL_NONE               0x00
#define HID_PROTOCOL_KEYBOARD           0x01
#define HID_PROTOCOL_MOUSE              0x02


/* HID Descriptor Types */
#define HID_HID_DESCRIPTOR_TYPE         0x21
#define HID_REPORT_DESCRIPTOR_TYPE      0x22
#define HID_PHYSICAL_DESCRIPTOR_TYPE    0x23


/* HID Descriptor */
#pragma pack(1)
typedef  struct _HID_DESCRIPTOR {
  uint8_t  bLength;
  uint8_t  bDescriptorType;
  uint16_t bcdHID;
  uint8_t  bCountryCode;
  uint8_t  bNumDescriptors;
  /* Array of one or more descriptors */
  /*__packed*/ struct _HID_DESCRIPTOR_LIST {
    uint8_t  bDescriptorType;
    uint16_t wDescriptorLength;
  } DescriptorList[1];
} HID_DESCRIPTOR;
#pragma pack()

/* HID Request Codes */
#define HID_REQUEST_GET_REPORT          0x01
#define HID_REQUEST_GET_IDLE            0x02
#define HID_REQUEST_GET_PROTOCOL        0x03
#define HID_REQUEST_SET_REPORT          0x09
#define HID_REQUEST_SET_IDLE            0x0A
#define HID_REQUEST_SET_PROTOCOL        0x0B

/* HID Report Types */
#define HID_REPORT_INPUT                0x01
#define HID_REPORT_OUTPUT               0x02
#define HID_REPORT_FEATURE              0x03


/* Usage Pages */
#define HID_USAGE_PAGE_UNDEFINED        0x00
#define HID_USAGE_PAGE_GENERIC          0x01
#define HID_USAGE_PAGE_SIMULATION       0x02
#define HID_USAGE_PAGE_VR               0x03
#define HID_USAGE_PAGE_SPORT            0x04
#define HID_USAGE_PAGE_GAME             0x05
#define HID_USAGE_PAGE_DEV_CONTROLS     0x06
#define HID_USAGE_PAGE_KEYBOARD         0x07
#define HID_USAGE_PAGE_LED              0x08
#define HID_USAGE_PAGE_BUTTON           0x09
#define HID_USAGE_PAGE_ORDINAL          0x0A
#define HID_USAGE_PAGE_TELEPHONY        0x0B
#define HID_USAGE_PAGE_CONSUMER         0x0C
#define HID_USAGE_PAGE_DIGITIZER        0x0D
#define HID_USAGE_PAGE_UNICODE          0x10
#define HID_USAGE_PAGE_ALPHANUMERIC     0x14
/* ... */


/* Generic Desktop Page (0x01) */
#define HID_USAGE_GENERIC_POINTER               0x01
#define HID_USAGE_GENERIC_MOUSE                 0x02
#define HID_USAGE_GENERIC_JOYSTICK              0x04
#define HID_USAGE_GENERIC_GAMEPAD               0x05
#define HID_USAGE_GENERIC_KEYBOARD              0x06
#define HID_USAGE_GENERIC_KEYPAD                0x07
#define HID_USAGE_GENERIC_X                     0x30
#define HID_USAGE_GENERIC_Y                     0x31
#define HID_USAGE_GENERIC_Z                     0x32
#define HID_USAGE_GENERIC_RX                    0x33
#define HID_USAGE_GENERIC_RY                    0x34
#define HID_USAGE_GENERIC_RZ                    0x35
#define HID_USAGE_GENERIC_SLIDER                0x36
#define HID_USAGE_GENERIC_DIAL                  0x37
#define HID_USAGE_GENERIC_WHEEL                 0x38
#define HID_USAGE_GENERIC_HATSWITCH             0x39
#define HID_USAGE_GENERIC_COUNTED_BUFFER        0x3A
#define HID_USAGE_GENERIC_BYTE_COUNT            0x3B
#define HID_USAGE_GENERIC_MOTION_WAKEUP         0x3C
#define HID_USAGE_GENERIC_VX                    0x40
#define HID_USAGE_GENERIC_VY                    0x41
#define HID_USAGE_GENERIC_VZ                    0x42
#define HID_USAGE_GENERIC_VBRX                  0x43
#define HID_USAGE_GENERIC_VBRY                  0x44
#define HID_USAGE_GENERIC_VBRZ                  0x45
#define HID_USAGE_GENERIC_VNO                   0x46
#define HID_USAGE_GENERIC_SYSTEM_CTL            0x80
#define HID_USAGE_GENERIC_SYSCTL_POWER          0x81
#define HID_USAGE_GENERIC_SYSCTL_SLEEP          0x82
#define HID_USAGE_GENERIC_SYSCTL_WAKE           0x83
#define HID_USAGE_GENERIC_SYSCTL_CONTEXT_MENU   0x84
#define HID_USAGE_GENERIC_SYSCTL_MAIN_MENU      0x85
#define HID_USAGE_GENERIC_SYSCTL_APP_MENU       0x86
#define HID_USAGE_GENERIC_SYSCTL_HELP_MENU      0x87
#define HID_USAGE_GENERIC_SYSCTL_MENU_EXIT      0x88
#define HID_USAGE_GENERIC_SYSCTL_MENU_SELECT    0x89
#define HID_USAGE_GENERIC_SYSCTL_MENU_RIGHT     0x8A
#define HID_USAGE_GENERIC_SYSCTL_MENU_LEFT      0x8B
#define HID_USAGE_GENERIC_SYSCTL_MENU_UP        0x8C
#define HID_USAGE_GENERIC_SYSCTL_MENU_DOWN      0x8D
/* ... */

/* Simulation Controls Page (0x02) */
/* ... */
#define HID_USAGE_SIMULATION_RUDDER             0xBA
#define HID_USAGE_SIMULATION_THROTTLE           0xBB
/* ... */

/* Virtual Reality Controls Page (0x03) */
/* ... */

/* Sport Controls Page (0x04) */
/* ... */

/* Game Controls Page (0x05) */
/* ... */

/* Generic Device Controls Page (0x06) */
/* ... */

/* Keyboard/Keypad Page (0x07) */

/* Error "keys" */
#define HID_USAGE_KEYBOARD_NOEVENT              0x00
#define HID_USAGE_KEYBOARD_ROLLOVER             0x01
#define HID_USAGE_KEYBOARD_POSTFAIL             0x02
#define HID_USAGE_KEYBOARD_UNDEFINED            0x03

/* Letters */
#define HID_USAGE_KEYBOARD_aA                   0x04
#define HID_USAGE_KEYBOARD_zZ                   0x1D

/* Numbers */
#define HID_USAGE_KEYBOARD_ONE                  0x1E
#define HID_USAGE_KEYBOARD_ZERO                 0x27

#define HID_USAGE_KEYBOARD_RETURN               0x28
#define HID_USAGE_KEYBOARD_ESCAPE               0x29
#define HID_USAGE_KEYBOARD_DELETE               0x2A

/* Funtion keys */
#define HID_USAGE_KEYBOARD_F1                   0x3A
#define HID_USAGE_KEYBOARD_F12                  0x45

#define HID_USAGE_KEYBOARD_PRINT_SCREEN         0x46

/* Modifier Keys */
#define HID_USAGE_KEYBOARD_LCTRL                0xE0
#define HID_USAGE_KEYBOARD_LSHFT                0xE1
#define HID_USAGE_KEYBOARD_LALT                 0xE2
#define HID_USAGE_KEYBOARD_LGUI                 0xE3
#define HID_USAGE_KEYBOARD_RCTRL                0xE4
#define HID_USAGE_KEYBOARD_RSHFT                0xE5
#define HID_USAGE_KEYBOARD_RALT                 0xE6
#define HID_USAGE_KEYBOARD_RGUI                 0xE7
#define HID_USAGE_KEYBOARD_SCROLL_LOCK          0x47
#define HID_USAGE_KEYBOARD_NUM_LOCK             0x53
#define HID_USAGE_KEYBOARD_CAPS_LOCK            0x39

/* ... */

/* LED Page (0x08) */
#define HID_USAGE_LED_NUM_LOCK                  0x01
#define HID_USAGE_LED_CAPS_LOCK                 0x02
#define HID_USAGE_LED_SCROLL_LOCK               0x03
#define HID_USAGE_LED_COMPOSE                   0x04
#define HID_USAGE_LED_KANA                      0x05
#define HID_USAGE_LED_POWER                     0x06
#define HID_USAGE_LED_SHIFT                     0x07
#define HID_USAGE_LED_DO_NOT_DISTURB            0x08
#define HID_USAGE_LED_MUTE                      0x09
#define HID_USAGE_LED_TONE_ENABLE               0x0A
#define HID_USAGE_LED_HIGH_CUT_FILTER           0x0B
#define HID_USAGE_LED_LOW_CUT_FILTER            0x0C
#define HID_USAGE_LED_EQUALIZER_ENABLE          0x0D
#define HID_USAGE_LED_SOUND_FIELD_ON            0x0E
#define HID_USAGE_LED_SURROUND_FIELD_ON         0x0F
#define HID_USAGE_LED_REPEAT                    0x10
#define HID_USAGE_LED_STEREO                    0x11
#define HID_USAGE_LED_SAMPLING_RATE_DETECT      0x12
#define HID_USAGE_LED_SPINNING                  0x13
#define HID_USAGE_LED_CAV                       0x14
#define HID_USAGE_LED_CLV                       0x15
#define HID_USAGE_LED_RECORDING_FORMAT_DET      0x16
#define HID_USAGE_LED_OFF_HOOK                  0x17
#define HID_USAGE_LED_RING                      0x18
#define HID_USAGE_LED_MESSAGE_WAITING           0x19
#define HID_USAGE_LED_DATA_MODE                 0x1A
#define HID_USAGE_LED_BATTERY_OPERATION         0x1B
#define HID_USAGE_LED_BATTERY_OK                0x1C
#define HID_USAGE_LED_BATTERY_LOW               0x1D
#define HID_USAGE_LED_SPEAKER                   0x1E
#define HID_USAGE_LED_HEAD_SET                  0x1F
#define HID_USAGE_LED_HOLD                      0x20
#define HID_USAGE_LED_MICROPHONE                0x21
#define HID_USAGE_LED_COVERAGE                  0x22
#define HID_USAGE_LED_NIGHT_MODE                0x23
#define HID_USAGE_LED_SEND_CALLS                0x24
#define HID_USAGE_LED_CALL_PICKUP               0x25
#define HID_USAGE_LED_CONFERENCE                0x26
#define HID_USAGE_LED_STAND_BY                  0x27
#define HID_USAGE_LED_CAMERA_ON                 0x28
#define HID_USAGE_LED_CAMERA_OFF                0x29
#define HID_USAGE_LED_ON_LINE                   0x2A
#define HID_USAGE_LED_OFF_LINE                  0x2B
#define HID_USAGE_LED_BUSY                      0x2C
#define HID_USAGE_LED_READY                     0x2D
#define HID_USAGE_LED_PAPER_OUT                 0x2E
#define HID_USAGE_LED_PAPER_JAM                 0x2F
#define HID_USAGE_LED_REMOTE                    0x30
#define HID_USAGE_LED_FORWARD                   0x31
#define HID_USAGE_LED_REVERSE                   0x32
#define HID_USAGE_LED_STOP                      0x33
#define HID_USAGE_LED_REWIND                    0x34
#define HID_USAGE_LED_FAST_FORWARD              0x35
#define HID_USAGE_LED_PLAY                      0x36
#define HID_USAGE_LED_PAUSE                     0x37
#define HID_USAGE_LED_RECORD                    0x38
#define HID_USAGE_LED_ERROR                     0x39
#define HID_USAGE_LED_SELECTED_INDICATOR        0x3A
#define HID_USAGE_LED_IN_USE_INDICATOR          0x3B
#define HID_USAGE_LED_MULTI_MODE_INDICATOR      0x3C
#define HID_USAGE_LED_INDICATOR_ON              0x3D
#define HID_USAGE_LED_INDICATOR_FLASH           0x3E
#define HID_USAGE_LED_INDICATOR_SLOW_BLINK      0x3F
#define HID_USAGE_LED_INDICATOR_FAST_BLINK      0x40
#define HID_USAGE_LED_INDICATOR_OFF             0x41
#define HID_USAGE_LED_FLASH_ON_TIME             0x42
#define HID_USAGE_LED_SLOW_BLINK_ON_TIME        0x43
#define HID_USAGE_LED_SLOW_BLINK_OFF_TIME       0x44
#define HID_USAGE_LED_FAST_BLINK_ON_TIME        0x45
#define HID_USAGE_LED_FAST_BLINK_OFF_TIME       0x46
#define HID_USAGE_LED_INDICATOR_COLOR           0x47
#define HID_USAGE_LED_RED                       0x48
#define HID_USAGE_LED_GREEN                     0x49
#define HID_USAGE_LED_AMBER                     0x4A
#define HID_USAGE_LED_GENERIC_INDICATOR         0x4B

/* Button Page (0x09) */
/*   There is no need to label these usages. */

/* Ordinal Page (0x0A) */
/*   There is no need to label these usages. */

/* Telephony Device Page (0x0B) */
#define HID_USAGE_TELEPHONY_PHONE               0x01
#define HID_USAGE_TELEPHONY_ANSWERING_MACHINE   0x02
#define HID_USAGE_TELEPHONY_MESSAGE_CONTROLS    0x03
#define HID_USAGE_TELEPHONY_HANDSET             0x04
#define HID_USAGE_TELEPHONY_HEADSET             0x05
#define HID_USAGE_TELEPHONY_KEYPAD              0x06
#define HID_USAGE_TELEPHONY_PROGRAMMABLE_BUTTON 0x07
/* ... */

/* Consumer Page (0x0C) */
#define HID_USAGE_CONSUMER_CONTROL              0x01
/* ... */

/* and others ... */


/* HID Report Item Macros */

/* Main Items */
#define HID_Input(x)           0x81,x
#define HID_Output(x)          0x91,x
#define HID_Feature(x)         0xB1,x
#define HID_Collection(x)      0xA1,x
#define HID_EndCollection      0xC0

/* Data (Input, Output, Feature) */
#define HID_Data               0<<0
#define HID_Constant           1<<0
#define HID_Array              0<<1
#define HID_Variable           1<<1
#define HID_Absolute           0<<2
#define HID_Relative           1<<2
#define HID_NoWrap             0<<3
#define HID_Wrap               1<<3
#define HID_Linear             0<<4
#define HID_NonLinear          1<<4
#define HID_PreferredState     0<<5
#define HID_NoPreferred        1<<5
#define HID_NoNullPosition     0<<6
#define HID_NullState          1<<6
#define HID_NonVolatile        0<<7
#define HID_Volatile           1<<7

/* Collection Data */
#define HID_Physical           0x00
#define HID_Application        0x01
#define HID_Logical            0x02
#define HID_Report             0x03
#define HID_NamedArray         0x04
#define HID_UsageSwitch        0x05
#define HID_UsageModifier      0x06

/* Global Items */
#define HID_UsagePage(x)       0x05,x
#define HID_UsagePageVendor(x) 0x06,x,0xFF
#define HID_LogicalMin(x)      0x15,x
#define HID_LogicalMinS(x)     0x16,(x&0xFF),((x>>8)&0xFF)
#define HID_LogicalMinL(x)     0x17,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_LogicalMax(x)      0x25,x
#define HID_LogicalMaxS(x)     0x26,(x&0xFF),((x>>8)&0xFF)
#define HID_LogicalMaxL(x)     0x27,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_PhysicalMin(x)     0x35,x
#define HID_PhysicalMinS(x)    0x36,(x&0xFF),((x>>8)&0xFF)
#define HID_PhysicalMinL(x)    0x37,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_PhysicalMax(x)     0x45,x
#define HID_PhysicalMaxS(x)    0x46,(x&0xFF),((x>>8)&0xFF)
#define HID_PhysicalMaxL(x)    0x47,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_UnitExponent(x)    0x55,x
#define HID_Unit(x)            0x65,x
#define HID_UnitS(x)           0x66,(x&0xFF),((x>>8)&0xFF)
#define HID_UnitL(x)           0x67,(x&0xFF),((x>>8)&0xFF),((x>>16)&0xFF),((x>>24)&0xFF)
#define HID_ReportSize(x)      0x75,x
#define HID_ReportID(x)        0x85,x
#define HID_ReportCount(x)     0x95,x
#define HID_Push               0xA0
#define HID_Pop                0xB0

/* Local Items */
#define HID_Usage(x)           0x09,x
#define HID_UsageMin(x)        0x19,x
#define HID_UsageMax(x)        0x29,x

#include "usb.h"
#include "usb_device.h"
#include "usb_device_class.h"


typedef union _USBDCfgFix_t
{
	struct {
	uint8_t itfNdx;
	uint8_t epInNdx;
	uint8_t epOutNdx;
	uint16_t cfgDescSize;

	uint8_t roMscEpInNdx;
	uint8_t roMscEpOutNdx;
	uint8_t roMscItfNdx;
	uint8_t roCdcCicEpNdx;
	uint8_t roCdcDicEpInNdx;
	uint8_t roCdcDicEpOutNdx;
	uint8_t roCdcCicItfNdx;
	uint8_t roCdcDicItfNdx;
	uint8_t roHidMEpInNdx;
	uint8_t roHidMItfNdx;
	uint8_t roHidKEpInNdx;
	uint8_t roHidKItfNdx;
	uint8_t roHidGEpInNdx;
	uint8_t roHidGItfNdx;
	const uint8_t *pcHidGRptDesc;
	uint8_t hidGRptDescLen;
	};
	uint32_t d32;
}USBDCfgFix_t;

#ifndef _USB_DEVICE_DESCRIPTOR_C_
	extern const USBDCfgFix_t g_cfgFix;
#endif

typedef enum {
	USBDESC_HID_REPORT_MOUSE,
	USBDESC_HID_REPORT_KEYBOARD,
	USBDESC_HID_GENERIC,
}usbd_desc_enum_t;

typedef enum {
	USBEP_VCP_CIC_EP_IN,
	USBEP_VCP_DIC_EP_IN,
	USBEP_VCP_DIC_EP_OUT,
	USBEP_MSC_EP_IN,
	USBEP_MSC_EP_UT,
	USBEP_HID_KEYBOARD_EP_IN,
	USBEP_HID_MOUSE_EP_IN,
	USBEP_HID_GENERIC_EP_IN,
	USBEP_HID_GENERIC_EP_OUT,
	USBEP_AUD_PLAYBACK_STREAM_EP_OUT,
	USBEP_AUD_RECORD_STREAM_EP_IN,
}usbd_ep_ndx_enum_t;

typedef enum {
    USBD_MODE_CDC = 0x01,   // virtual com
    USBD_MODE_MSC = 0x02,   // mass storage
    USBD_MODE_HIDK = 0x04,  // HID keyboard
    USBD_MODE_HIDM = 0x08,  // HID mouse
    USBD_MODE_HIDI = 0x10,  // HID generic input
    USBD_MODE_HIDO = 0x20,  // HID generic output
    USBD_MODE_HIDG = USBD_MODE_HIDI | USBD_MODE_HIDO, // implemented in single class, single itf
    USBD_MODE_HID = USBD_MODE_HIDK | USBD_MODE_HIDM,   // HID = K + M, implemented in 2 classes, each has 1 itf
    USBD_MODE_AUDP = 0x40,  // audio playback
    USBD_MODE_AUDR = 0x80,  // audio record
    USBD_MODE_AUD  = USBD_MODE_AUDP | USBD_MODE_AUDR,
    USBD_MODE_CDC_MSC = USBD_MODE_CDC | USBD_MODE_MSC,
    USBD_MODE_CDC_HID = USBD_MODE_CDC | USBD_MODE_HID,
    USBD_MODE_MSC_HID = USBD_MODE_MSC | USBD_MODE_HID,
    USBD_MODE_MSC_HID_HIDG = USBD_MODE_MSC | USBD_MODE_HID | USBD_MODE_HIDG,
    USBD_MODE_CDC_MSC_AUD = USBD_MODE_CDC | USBD_MODE_MSC | USBD_MODE_AUD, // epIn: 2+1+(1rec+1fdbk), epOut: 1+1+(1plbk + 1ctrl)
    USBD_MODE_CDC_MSC_HIDM = USBD_MODE_CDC_MSC | USBD_MODE_HIDM,
    USBD_MODE_CDC_MSC_HIDG = USBD_MODE_CDC_MSC | USBD_MODE_HIDG,
} usb_device_mode_t;

typedef struct _USBD_HID_ModeInfoTypeDef {
    uint8_t subclass; // 0=no sub class, 1=boot
    uint8_t protocol; // 0=none, 1=keyboard, 2=mouse
    uint8_t max_packet_len; // only support up to 255
    uint8_t polling_interval; // in units of 1ms
    uint8_t report_desc_len;
	// >>> rocky added
	uint8_t is_has_in_ep;
	uint8_t is_has_out_ep;
	uint16_t in_ep_max_packet_len; // 0 = use 'max_packet_len' field
	uint16_t out_ep_max_packet_len; // 0 = use 'max_packet_len' field
	uint8_t in_polling_interval; // in units of 1ms, 0 = use 'polling interval'
	uint8_t out_polling_interval; // in units of 1ms, 0 = use 'polling interval'
	// <<<
    const uint8_t *report_desc;
} USBD_HID_ModeInfoTypeDef;

/*******************************************************************************
* API
******************************************************************************/

void USBD_SetVIDPIDRelease(uint16_t vid, uint16_t pid, uint16_t device_release_num, int cdc_only);


/*!
 * @brief USB device set speed function.
 *
 * This function sets the speed of the USB device.
 *
 * Due to the difference of HS and FS descriptors, the device descriptors and configurations need to be updated to match
 * current speed.
 * As the default, the device descriptors and configurations are configured by using FS parameters for both EHCI and
 * KHCI.
 * When the EHCI is enabled, the application needs to call this function to update device by using current speed.
 * The updated information includes endpoint max packet size, endpoint interval, etc.
 *
 * @param handle The USB device handle.
 * @param speed Speed type. USB_SPEED_HIGH/USB_SPEED_FULL/USB_SPEED_LOW.
 *
 * @return A USB error code or kStatus_USB_Success.
 */
extern usb_status_t USB_DeviceSetSpeed(usb_device_handle handle, uint8_t speed);

/*!
 * @brief USB device get device descriptor function.
 *
 * This function gets the device descriptor of the USB device.
 *
 * @param handle The USB device handle.
 * @param deviceDescriptor The pointer to the device descriptor structure.
 *
 * @return A USB error code or kStatus_USB_Success.
 */
usb_status_t USB_DeviceGetDeviceDescriptor(usb_device_handle handle,
                                           usb_device_get_device_descriptor_struct_t *deviceDescriptor);

/*!
 * @brief USB device get configuration descriptor function.
 *
 * This function gets the configuration descriptor of the USB device.
 *
 * @param handle The USB device handle.
 * @param configurationDescriptor The pointer to the configuration descriptor structure.
 *
 * @return A USB error code or kStatus_USB_Success.
 */
usb_status_t USB_DeviceGetConfigurationDescriptor(
    usb_device_handle handle, usb_device_get_configuration_descriptor_struct_t *configurationDescriptor);

/*!
 * @brief USB device get string descriptor function.
 *
 * This function gets the string descriptor of the USB device.
 *
 * @param handle The USB device handle.
 * @param stringDescriptor Pointer to the string descriptor structure.
 *
 * @return A USB error code or kStatus_USB_Success.
 */
usb_status_t USB_DeviceGetStringDescriptor(usb_device_handle handle,
                                           usb_device_get_string_descriptor_struct_t *stringDescriptor);

const uint8_t* USBD_GetHidGenericReportDesc(void);
int USBD_SelectMode(uint32_t mode, USBD_HID_ModeInfoTypeDef *hid_info);
uint8_t USBD_GetMode(void);

uint32_t USBD_GetEpNdx(usbd_ep_ndx_enum_t ep);

#endif /* _USB_DEVICE_DESCRIPTOR_H_ */
