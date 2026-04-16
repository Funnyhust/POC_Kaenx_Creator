/*
 * serial.h
 *
 *  Created on: Sep 18, 2020
 *      Author: DungTran BK
 */

#ifndef SERIAL_H_
#define SERIAL_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "proj/tl_common.h"
#include "vendor/common/light.h"
#include "utilities.h"
#include "knob/element.h"

/******************************************************************************/

typedef void (*type_handleGetDeviceInfoSuccess)(void);
typedef int  (*typeSerial_HandleRspConfigMcuCallbackFunc)(u8*, int);
typedef int  (*typeSerial_HandleInterProvCallbackFunc)(u8*, int);

/******************************************************************************/
/*                       EXPORT TYPE AND DEFINITION                           */
/******************************************************************************/

#define SOF_HI                      0x4c
#define SOF_LO                      0x4d

#define MAX_SERIAL_PAYLOAD_LEN      64
#define MIN_SERIAL_PAYLOAD_LEN      2

#define HEADER_UART_MSG_LEN         4

typedef struct{
	u8 start_hi;
	u8 start_low;
	u8 len;
	u8 cmd_id;
	u8 data[MAX_SERIAL_PAYLOAD_LEN - HEADER_UART_MSG_LEN];
}tx_message_format_t;


typedef struct
{
	u8 cmd_id;
	u8 data[MAX_SERIAL_PAYLOAD_LEN - HEADER_UART_MSG_LEN];
}tx_cmd_format_t;

enum direction_tx_cmd_t{
	HOST_TO_MC,
	MC_TO_HOST,
	ZIGBEE_TO_BLE,
};
typedef u8 direction_tx_cmd_t;

typedef struct {
	u8 cmd_id;
	u8 dev_no;
	u8 dev_type;
	union {
		u8 status;
		u8 event;
		u8 scene_id;
		struct level_t{
			u8 type;
			u8 present_level;
			u8 target_level;
			u8 state;
		}level_st;
		struct cct_t {
			u16 lightness;
			u16 temperature;
		}cct_st;
		struct dim_t{
			u16 lightness;
		}dim_st;

		struct ac_t{
			u8 on_off;
			u8 mode;
			u8 swing;
			u8 fan;
			u16 temp_set;
			u16 temp_room;
		}ac_st;
	};
}device_status_t;


typedef struct {
	u8 cmd_id;
	u8 voice_cmd;
	u8 channel;
}void_cmd_t;

typedef struct {
	u8 cmd_id;
	u8 btn_id;
	u8 status;
}button_status_t;

typedef struct {
	u8 len;
	u8 cmd_id;
	u8 data[MAX_SERIAL_PAYLOAD_LEN - HEADER_UART_MSG_LEN];
}tx_message_cmd_format_t;

typedef struct {
	bool success;
	u32  last_get_t_100ms;
}get_dev_infor_t;

typedef struct {
	bool en;
	u32  start_t;
	u16  delay_t;
}refresh_nwk_dst_t;

typedef struct {
	u8  dev_id;
	u8  op;
	u8  current_mode;
	u32 limit_t;
}rsp_limit_time_t;

#define P_ST_TRANS(idx, type)		(&light_res_sw[idx].trans[type])

#define CMD_ID_DEVICE_INFOR_GET            0x81
#define CMD_ID_DEVICE_INFOR_RSP            0x01

#define CMD_ID_DEVICE_STATUS_GET           0x82
#define CMD_ID_DEVICE_STATUS_RSP           0x02

#define CMD_ID_DEVICE_CONTROL_SET          0x83
#define CMD_ID_BUTTON_STATUS_RSP           0x03

#define CMD_ID_LED_CONTROL_SET             0x84

#define CMD_ID_DEV_CONFIG_BT_TO_MCU        0x86
#define CMD_ID_RSP_DEV_CONFIG_MCU_TO_BT    0x06

#define CMD_ID_RSP_UART_SYNC_BT_MCU        0x87
#define CMD_ID_UART_SYNC_MCU_BT            0x07

#define CMD_ID_GET_VERSION_MCU             0x88
#define CMD_ID_RSP_VERSION_MCU             0x08

#define CMD_ID_ERROR_MESSAGE_MCU_TO_BT     0x12
#define ERROR_MESSAGE_MIN_LENGTH           8

#define CMD_ID_CONNECTION_GET              0x19
#define CMD_ID_CONNECTION_RESPONSE         0x99

#define CMD_ID_CONFIG_LIMIT_TIME_CURTAIN   0x95
#define CMD_ID_RSP_LIMIT_TIME_CURTAIN      0x15

#define CMD_ID_SET_TEST_MODE               0x1B
#define CMD_ID_SET_TEST_MODE_RSP           0x9B

#define CMD_ID_UPDATE_RESULT_TEST_MODE     0x9C

#define CMD_ID_RESET_ALL_HOST_OPT          0x1E
#define CMD_ID_RESET_ALL_HOST_OPT_RSP      0x9E

// NEW
#define CMD_ID_NETWORK_MAC_GET            0xC0
#define CMD_ID_NETWORK_MAC_RSP            0xE0

#define CMD_ID_INTER_PROV_SET             0xC1
#define CMD_ID_INTER_PROV_RSP             0xE1

#define CMD_ID_REMAINING_HOST_INF_GET     0xC2
#define CMD_ID_REMAINING_HOST_INF_RSP     0xE2

#define CMD_ID_MASTER_LED_CONTROL_SET     0xC3
#define CMD_ID_MASTER_LED_CONTROL_RSP     0xE3

#define CMD_ID_PROV_STATE_RSP             0x96
#define CMD_ID_PROV_STATE_GET             0x16

#define CMD_ID_NETWORK_MODE_GET           0x97
#define CMD_ID_NETWORK_MODE_RSP           0x17

#define CMD_ID_NETWORK_MODE_SET           0x18
#define CMD_ID_SET_NETWORK_MODE_RSP       0x98


#define CMD_ID_UPDATE_RESULT_TEST_MODE    0x9C

// 2025
#define CMD_ID_VOICE_EVENT_RSP            0x30

#define CMD_ID_REQUEST_UPDATE_ALL_CONFIG  0x7A

#define CMD_ID_UPDATE_SCENE_EVENT         0x7C

#define CMD_ID_REQUEST_RESET_NETWORK      0x7D
#define CMD_ID_RESPONSE_RESET_NETWORK     0xFD

#define CMD_ID_TIMESTAMP_RSP              0x7B
#define CMD_ID_TIMESTAMP_SET              0xFB

#define CMD_ID_KNOB_REQUEST               0xFE
#define CMD_ID_KNOB_RESPONSE              0x7E

#define CMD_ID_RSP_HOST_INFO              0xFF
#define CMD_ID_GET_HOST_INFO              0x7F

#define LENGTH_CMD_LED          0x09
#define LENGTH_GET_DEV_INFO     0x02

#if DIMMER_EN_BINDING
typedef struct {
	u8  level;
	u16 lightness;
	u8  trans_t;
}dim_binding_t;
#define DIM_TRANS_DEFAULT    0x16
#endif

typedef struct {
	u8 present_level;
	u8 target_level;
	u8 state;
}curtain_binding_par_t;

typedef struct {
	u8 onoff_present;
	u8 group_state;
}switch_binding_t;

typedef struct {
	u16 group_lightness;
	u16 group_temperature;
}cct_binding_t;

typedef struct {
	u8 on_off;
	u8 mode;
	u8 swing;
	u8 fan;
	u16 temp_set;
}ac_binding_t;

/*
 *  Aggregate group status of all device types
 */
typedef struct {
	switch_binding_t      sw;
	cct_binding_t         cct;
	dim_binding_t         dimmer;
	curtain_binding_par_t curtain;
	ac_binding_t          ac;
}binding_par_t;

typedef binding_par_t * binding_par_p;

typedef struct {
	u8 cmd_id;
	u8 protocol;
	u8 MAC[8];
}network_mac_rsp_t;

typedef struct {
	u8  cmd_id;
	u8  id_led;
	u16 mask;
	u8  state;
	u8  blink_time;
	u8  last_state;
}repeater_control_led_t;

enum {
	FACT_SUCCESS = 0,
	FACT_ERROR   = 1,
};

enum {
	FACT_ERR_BUSY  = 0,
	FACT_ERR_IS_PROVING = 1,
	FACT_ERR_IS_PROVED = 2,
	FACT_NO_ERR = 0xFF,
};

typedef struct {
	u8 state;
	u8 error_code;
}confirm_test_mode_t;

typedef struct {
	u8 protocol;
	u8 device_type;
	u8 endpoint_cnt;
	u8 prov_state;
	u8 MAC[8];
	u8 version[3];
	u16 PID;
}device_infor_t;

extern u8 app_control_st[ELE_CNT];

/******************************************************************************/
/*                              EXPORT FUNCTION                               */
/******************************************************************************/
void set_st_group_binding(int idx, bool st);
void handle_refresh_network_dest(void);
void serial_handle_relay_or_switch_status_response(u8 model_idx, device_status_t* dev_st);
void serial_handle_dim_status_response(u8 model_idx, device_status_t* dev_st);
void serial_handle_cct_status_response(u8 model_idx, u16 lightness, u16 temp);
void serial_handle_curtain_status_response(u8 model_idx, device_status_t* dev_st);
void serial_handle_ac_status_response(u8 model_idx, ac_status_t* ac_status);
void common_par_init(void);

#endif /* SERIAL_H_ */
