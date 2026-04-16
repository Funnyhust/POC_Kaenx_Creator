/*
 * utilities.h
 *
 *  Created on: Feb 18, 2020
 *      Author: DungTran BK
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "../../../proj/tl_common.h"

/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/

#define MAX_U32     0xFFFFFFFF
#define MAX_U16     0xFFFF
#define MAX_U8      0xFF

#define HI_U16(x)   (u8)((x) >> 8)
#define LO_U16(x)   (u8)(x)

#ifndef BOOL
    #define BOOL    unsigned char
#endif

#ifndef PROV_SUCCESS
	#define PROV_SUCCESS          0x1
	#define PROV_FAIL             0x0
#endif

#ifndef PROV_STEP_SUCCESS
	#define PROV_STEP_SUCCESS     0x1
	#define PROV_STEP_FAIL        0x0
#endif

#ifndef IRQ_EN
#define IRQ_DISABLE    0
#define IRQ_ENABLE     1
#endif

enum ButtonState_enum
{
	RELEASE            = 0,
	HOLD_3S            = 1,
	HOLD_5S            = 2,
	HOLD_10S           = 3,

	PRESS_TWO_TIME     = 4,
	PRESS_THREE_TIME   = 5,  // just use by MC
	PRESS_FOUR_TIME    = 6,
	PRESS_FIVE_TIME    = 7,
	PRESS_TEN_TIME     = 8,  // just use by MC

	HOLD_15S           = 9,
	HOLD_7S            = 10,
	HOLD_9S            = 11,
	HOLD_12S           = 12,

	PRESS_SIX_TIME     = 13,
	PRESS_EIGHT_TIME   = 14,  // just use by MC
	HOLD_50MS          = 15,  // just use by MC
	HOLD_500MS         = 16,  // just use by MC
	PRESS_TWELVE_TIME  = 17,  // just use by MC

	PRESS_ONE_TIME     = 18,

	RL_AFTER_PRESS     = 0xFB,

	HOLD_2S            = 0xFC,
	HOLD_4S            = 0xFD,

    BTN_ST_UNKNOWN     = 0xFE,
	SHORT_HOLD         = 0xFD,

	START_PRESS        = 0xFE,
	NO_PRESS           = 0xFF
};
typedef uint8_t ButtonState_enum;


#define TIMER_5MS      5
#define TIMER_10MS     10
#define TIMER_20MS     20
#define TIMER_50MS     50
#define TIMER_70MS     70
#define TIMER_100MS    100
#define TIMER_150MS    150
#define TIMER_200MS    200
#define TIMER_250MS    250
#define TIMER_300MS    300
#define TIMER_500MS    500

#define TIMER_1S       1000
#define TIMER_1S2      1200
#define TIMER_1S5      1500
#define TIMER_2S       2000
#define TIMER_3S       3000
#define TIMER_5S       5000
#define TIMER_7S       7000
#define TIMER_9S       9000
#define TIMER_10S      10000
#define TIMER_15S      15000
#define TIMER_20S      20000
#define TIMER_30S      30000
#define TIMER_1Min     60000
#define TIMER_70S      70000
#define TIMER_90S      90000
#define TIMER_5Min     300000
#define TIMER_15Min    900000

// 2IN_2OUT
#define VD_CONFIG_SW_SET_MAIN_PARAMS         0x10
#define VD_CONFIG_SW_SET_MAP_UNMAP_INPUT     0x11

// RL SWITCH
#define VD_CONFIG_ALL_SWITCH_OPT             0x20
#define VD_CONFIG_SWITCH_MODE_OPT            0x21
#define VD_CONFIG_LED_INTENSITY_OPT          0x22
#define VD_CONFIG_LOCK_ALL_SWITCH_OPT        0x23
#define VD_CONFIG_GLASS_TYPE_OPT             0x24
#define VD_CONFIG_RELAY_TYPE_OPT             0x25
#define VD_CONFIG_CURTAIN_TYPE_OPT           0x26
#define VD_CONFIG_DIMMER_TYPE_OPT            0x27
#define VD_CONFIG_LOCK_BIT_SW_OPT            0x28
#define VD_CONFIG_GET_VERSION_MCU            0x29

#define VD_CONFIG_ON_POWER_UP_STATE          0x2A
#define VD_CONFIG_AUTO_LOCK_OPT              0x2B
#define VD_MAP_INPUT_OUTPUT_OPT              0x2C

#define VD_QUERY_TIMESTAMP                   0x2E

#define VD_CONFIG_GROUP_ASSOCIATION          0x30
#define VD_EN_ON_OFF_GROUP_DEFAULT           0x31
#define VD_DIMMING_CONFIGURATION             0x32

#define VD_CONFIG_CURTAIN_LIMIT_TIME         0x40

#define VD_CONFIG_NETWORK_MODE               0x50

#define VD_CONFIG_BACKLIGHT_BRIGHTNESS       0x53

#define VD_CONFIG_AIR_CONDITIONER            0x67

#define VD_CONFIG_SEND_NOTIFY                0xE3

#define VD_CONFIG_REMAINING_HOST_INFO        0x80
#define VD_CONFIG_INTER_PROVISION            0x81



#define VD_CONFIG_ENDPOINT_VISIBILITY        0xA0
#define VD_CONFIG_AC_PARAMETER               0xA1

#define VD_CONFIG_LINK_TO_LIGHT_GROUP        0xE2
#define VD_SEND_NOTIFICATION_TO_MCU          0xE3


#define VD_CONFIG_SCENE_BUTTON_MODE          0xE4
#define VD_CONFIG_SCENE_SCHEDULE             0xE5

#define VD_CONFIG_KNOB_BRIGHTNESS            0xE6
#define VD_CONFIG_KNOB_INACTIVE_TIMEOUT      0xE7

#define VD_SELECT_SCREEN_FOR_KNOB            0xE8


#define VD_CONFIG_TIMESTAMP                  0xAC
#define VD_TS_LOCK_SCHEDULE                  0xC8

#define VD_CONFIG_LED_MASTER_CONTROL         0xF0

#define VD_DEVICE_INFORMATION                0xFE
#define VD_FACT_TEST_RF                      0xFF

#define VD_CONFIG_NODE_CNT                   0x08
#define VD_CONFIG_NODE_SET_START_CMD         VD_CONFIG_ALL_SWITCH_OPT

#define CONFIG_NODE_SET                      0x00
#define CONFIG_NODE_GET                      0x01

#define VD_CONFIG_ALL_OPT                    VD_CONFIG_ALL_SWITCH_OPT

enum {
	SLOW_REPORT,
	FAST_REPORT,
	VERY_FAST_REPORT
};

enum switch_type_enum
{
	TOGGLE_SWITCH_TYPE	  = 0,
	MOMENTORY_SWITCH_TYPE = 1,
	LIGHTING_SWITCH_TYPE  = 2,
	SWITCH_TYPE_UNKNOWN
};
typedef u8 switch_type_enum;

enum toggle_mode_enum
{
	TOGGLE_DEFAULT   = 0x0,
	TOGGLE_DELAY_ON  = 0x1,
	TOGGLE_DELAY_OFF = 0x2,
	TOGGLE_AUTO_ON   = 0x3,
	TOGGLE_AUTO_OFF  = 0x4,
	TOGGLE_UNKNOWN   = 0x5
};
typedef u8 toggle_mode_enum;

enum device_type_t
{
	DEV_SWITCH  = 0x01,
	DEV_SOCKET  = 0x02,
	DEV_CURTAIN = 0x03,
	DEV_DIMMER  = 0x04,
	DEV_FAN     = 0x05,
	DEV_ROLLING_DOOR = 0x10,
	DEV_GATE    = 0x11,
	TYPE_PHYSICAL_SWITCH = 0x20,
	TYPE_DOCH_2M = 0x80,
	TYPE_DOCH_4M = 0x81,
};
typedef u8 device_type_t;

enum {
	SUB_OFF     = 0,
	SUB_ON      = 1,
	SUB_UNKNOWN = 2
}last_state_send_to_sub_t;

enum {
	PROTO_ZIGBEE,
	PROTO_BLUETOOH,
	PROTO_ZWAVE,
	PROTO_MASTER_WIFI,
    PROTO_MASTER_THREAD,
	PROTO_PLC,
	PROTO_UNKNOWN
};

enum {
	NW_MODE_FULL_FUNCTION,
	NW_MODE_REPEATER,
	NW_MODE_UNKNOWN
};

enum {
	ON_POWER_UP_OFF,
	ON_POWER_UP_ON,
	ON_POWER_UP_RESTORE,
	ON_POWER_UP_UNKNOWN,
};

typedef struct {
	u8 cmd_id;
	u8 dev_no;
	u8 dev_type;
	u8 state;
	u8 xor;
}uart_on_off_set_t;

typedef struct {
	u8 cmd_id;
	u8 dev_no;
	u8 dev_type;
	u8 mode;
	u8 level;
	u8 xor;
}cz_level_set_t;

typedef struct {
	u8 cmd_id;
	u8 dev_no;
	u8 dev_type;
	u8 level;
	u8 xor;
}dz_level_set_t;

typedef struct {
	u8 cmd_id;
	u8 dev_no;
	u8 dev_type;
	u8 level;
	u8 xor;
}fz_level_set_t;

typedef struct {
	u8 cmd_id;
	u8 dev_no;
	u8 dev_type;
	u8 level;
	u8 xor;
}gate_level_set_t;

typedef struct {
	u8  cmd_id;
	u8  dev_mask_h;
	u8  dev_mask_l;
	u8  xor;
}uart_on_off_st_get_t;


typedef struct {
	u8 second;
	u8 minute;
	u8 hour;
	u8 day;
	u8 wday;
	u8 month;
	u8 year;
}custom_time_t;

typedef struct {
	u8   evt;
	u32  update_st_t;
	bool hold_500ms_flag;
}btn_evt_t;

enum FunctionStatus_Enum {
    RT_SUCCESS,
    RT_FAILURE,
    RT_IDLE,
    RT_ACTIVATED,
    RT_INVALID_TIME,
    RT_CANT_HANDLE,
    RT_SAME_STATE,
    RT_NOT_CHANGE,
    RT_NOT_REFRESH,
    RT_INVALID,
};
typedef uint8_t FunctionStatus_Enum;

enum {
	B_START_PRESS,
	B_HOLD_500MS,
	B_RELEASE,
	B_ST_UNKNOWN
};

enum lock_unlock_enum {
	TS_UNLOCK = 0,
	TS_LOCK = 1,
	TS_LOCK_UNKNOWN = 2,
};
typedef uint8_t lock_unlock_enum;


enum {
	FAN_CMD_LEVEL   = 0,
	FAN_CMD_ON_OFF  = 1,
	FAN_CMD_UNKNOWN
};

typedef struct {
	u8 par_id;
    u8 run_mode;
    u8 state;
}speaker_status_rsp_t;

typedef struct{
	u8 code;
	u8 data;
}vd_config_node_t;

#if MD_LEVEL_EN
typedef struct {
	u8 type;
	u8 level;
	u8 tid;
	u8 transit_t;
	u8 delay;
}vd_cmd_g_level_set_t;

typedef struct {
	u8 type;
	u8 present_level;
	u8 target_level;
	u8 state;
}vd_cmd_g_level_status_t;

#endif

typedef struct {
	u8 present_level;
	u8 target_level;
	u8 state;
}curtain_level_t;

enum {
	CUR_CMD_STOP = 1,
	CUR_CMD_RUN  = 2,
};

typedef uart_on_off_st_get_t level_get_t;

static inline u32 s_to_ms(u32 seconds){
    return seconds*1000;
}

#define SCENE_ID_OFFSET           0x81
#define MAX_SCENE_CNT             16

#define FLASH_INDEX_DEFAULT       1
#define DEVICE_TYPE               TYPE_DOCH_4M

/******************************************************************************/
/*                            EXPORT FUNCTIONS                                */
/******************************************************************************/

bool IsMatchVal(uint8_t *buff, uint8_t size, uint8_t val);
void __delay_us(uint32_t us);
void __delay_ms(uint32_t ms);

u16 get_blink_led_mask_follow_model_index(u8 model_idx);
bool is_in_range(int value, int min, int max);
#endif /* UTILITIES_H_ */
