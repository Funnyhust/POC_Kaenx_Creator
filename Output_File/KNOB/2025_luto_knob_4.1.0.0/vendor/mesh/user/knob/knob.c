/*
 * knob.c
 *
 *  Created on: Jul 23, 2025
 *      Author: DungTranBK
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "stdlib.h"
#include "string.h"
#include "element.h"
#include "../fifo.h"
#include "../timestamp.h"
#include "../cycle_funcs.h"
#include "../flash_user.h"
#include "../factory_reset.h"
#include "../fact/fact_com.h"
#include "../led_ev.h"
#include "vendor/common/mesh_node.h"
#include "vendor/common/system_time.h"
#include "vendor/common/mesh_common.h"
#include "knob.h"

#include "vendor/mesh/user/debug.h"
#ifdef  DEBUG_KNOB
#define DBG_KNOB_SEND_STR(x)              Dbg_sendString((s8*)x)
#define DBG_KNOB_SEND_NUM(x)              Dbg_sendDword(x)
#define DBG_KNOB_SEND_HEX(x)              Dbg_sendHex(x)
#define DBG_KNOB_SEND_INT(x)              Dbg_sendInt(x)
#define DBG_KNOB_SEND_ONE_BYTE_HEX(x)     Dbg_sendOneByteHex(x)
#else
#define DBG_KNOB_SEND_STR(x)
#define DBG_KNOB_SEND_NUM(x)
#define DBG_KNOB_SEND_HEX(x)
#define DBG_KNOB_SEND_INT(x)
#define DBG_KNOB_SEND_ONE_BYTE_HEX(x)
#endif

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

static bool knob_power_on_flag = true;

#define VALUE_RING_LED_ON                   0xFF

#define MAX_BRUG_IMAGE                      10
#define CHECK_BRUSH_IMAGE_INTERVAL_MS       TIMER_50MS

#if SCREEN_TYPE  == TYPE_HORIZONTAL
const u8 week_day_pos_arr[] = { 0x85, 0x8E, 0x83, 0x8E, 0x9E, 0x91, 0x8E };
#else
const u16 week_day_pos_arr[] = { 0x010a, 0x0108, 0x010c, 0x0108, 0x0110, 0x0110, 0x0108 };
#endif

typedef struct {
    u8  ui_mode;
    u16 level;
}brush_image_t;

enum {
    KNOB_DISCONNECTED = 0,
    KNOB_CONNECTED = 1,
};
typedef u8 KnobComunicationStatus_Enum;


typedef struct {
    bool is_busy;
    u32  busy_start_t_ms;
    u32  busy_time_len_ms;
    KnobNotifyType_Enum notify_type;
}knob_extend_par_t;


typedef struct {
    KnobComunicationStatus_Enum connect_status;
    KnobUiMode_Enum ui_mode;
    knob_extend_par_t knob_extend_par;
    KnobDisplayScreen_Enum screen;
    bool init_success;
}knob_par_t;

static knob_par_t knob_par = {
			.connect_status = KNOB_DISCONNECTED,
			.ui_mode = MODE_CCT,
			.screen = DISPLAY_CLOCK_SCREEN,
			.init_success = false,
		};

/*
 * Knob serial command
 */
typedef struct {
    uint8_t len;
    uint8_t payload[KNOB_MAX_PAYLOAD_LEN];
}knob_serial_t;

#define BUF_KNOB_CMD_SIZE                    10

static Fifo_t fifo_knob_commands;
static knob_serial_t knob_serial_buffer[BUF_KNOB_CMD_SIZE];

static uint32_t knob_push_payload_st_t_ms = 0;

#define KNOB_TRANSMIT_INTERVAL_MS_MIN        100
#define KNOB_TRANSMIT_INTERVAL_MS_DEFAULT    120
#define KNOB_TRANSMIT_INTERVAL_MS_MAX        300

static u16 knob_transmit_interval_ms = KNOB_TRANSMIT_INTERVAL_MS_DEFAULT;

/*
 * Knob ring UI
 */
#define BUF_RING_CMD_SIZE       4

static Fifo_t fifo_ring_commands;
static knob_ring_t knob_ring_buffer[BUF_RING_CMD_SIZE];


typedef struct {
    bool is_active;
    u32  active_last_t_ms;
    u32  start_t_ms;
    knob_ring_t data;
    u32  toggle_led_last_time;
}knob_ring_running_t;

static knob_ring_running_t knob_ring_running = {.active_last_t_ms = 0};

#define SLOW_STEP                       1
#define FAST_STEP                       3
#define MIN_INTERVAL                    100
#define FAST_ROTATE_THRESHOLD           4
#define FAST_ROTATE_TIME_MS_WINDOW      500
#define MIN_IDLE_TIME_MS                150

typedef struct {
    u8 rsp_status_code;
    u8 offset_adr;
    u8 figure_no_hi;
    u8 figure_no_lo;
    u16 x_codinate;
    u16 y_codinate;
}control_fill_background_t;


#define OFFSET_BACKGROUND_BRIGHTNESS    0x00

#define OFFSET_LEVEL_FRAME              0x01
#define TOTAL_LEVEL_FRAME               0x64

#define OFFSET_NUMBER                   0x031e

#define OFFSET_STATUS_LIGHT_ON          0xca
#define OFFSET_STATUS_LIGHT_OFF         0xcb

#define OFFSET_CURTAIN                  0xb0

#define OFFSET_TEMPERATURE              0x0383


typedef struct {
    u8  cnt;
    u32 rotate_last_time_ms;
}rotate_par_t;

static rotate_par_t right_rotate_par = { .cnt = 0 };
static rotate_par_t left_rotate_par = { .cnt = 0 };


typedef struct {
    KnobNotifyType_Enum type;
    u16 index;
    u32 time_len;
    RingLedMode_enum mode;
    RingLedColor_enum color;
}notify_index_t;

const notify_index_t notify_index_arr[] = {
           { NOTI_INVALID_TIME, 0x03dc, 1000, RING_LED_MODE_UNKNOWN,  RING_LED_COLOR_UNKNOWN },
           { NOTI_SCENE_ACTIVATED, 0x03db, 500, RING_LED_MODE_UNKNOWN,  RING_LED_COLOR_UNKNOWN },
           { NOTI_RESET_NETWORK, 0x03fd, 3000, RING_LED_MODE_UNKNOWN, RING_LED_COLOR_UNKNOWN },
           { NOTI_RESET_TO_FACTORY, 0x03fe, 3000, RING_LED_MODE_UNKNOWN, RING_LED_COLOR_UNKNOWN},
};

/*
 * Screen configuration
 */
#define KNOB_INACTIVE_TIMEOUT_MIN_SECONDS        10
#define KNOB_INACTIVE_TIMEOUT_MAX_SECONDS        3600  // 18h

#define KNOB_INACTIVE_TIMEOUT_DEFAULT_SECONDS    300    // 5 minutes


#define KNOB_DISPLAY_BRIGHTNESS_MIN_PERCENT      1
#define KNOB_DISPLAY_BRIGHTNESS_MAX_PERCENT      100

#define KNOB_DISPLAY_BRIGHTNESS_DEFAULT_PERCENT  80

#define KNOB_INTERNAL_BRIGHTNESS_MIN             20
#define KNOB_INTERNAL_BRIGHTNESS_MAX             250

#define KNOB_LED_BRIGHTNESS_MIN                  1
#define KNOB_LED_BRIGHTNESS_MAX                  100

#define KNOB_LED_BRIGHTNESS_DEFAULT              50


typedef struct {
    u8  enable;
    u16 timeout_s;
}config_inactive_timeout_t;

typedef struct {
	u8 led_brightness;
    u8 display_brightness;
    config_inactive_timeout_t inactive_timeout;
    u8 rsv[12];
}knob_config_t;

static knob_config_t knob_config;


#define BLOCK_SIZE_KNOB_CONFIG    sizeof(knob_config_t)
#define FLASH_SIZE_KNOB_CONFIG    (FLASH_SECTOR_SIZE - BLOCK_SIZE_KNOB_CONFIG)

static int adr_knob_config_idx = 0;


enum {
    AWAKE_SRC_BY_USER,
    AWAKE_SRC_BY_OUTPUT,
    AWAKE_SRC_BY_TIMER,
    AWAKE_SRC_BY_APP,
    AWAKE_SRC_UNKNOWN,
};
typedef uint8_t AwakeSource_Enum;

/*
 * Turn On/Off Display
 */
#define KNOB_REFRESH_INTERVAL_S        300   // 5 minutes

typedef struct {
    bool is_activated;
    u32  knob_active_st_time_s;
    u32  send_cmd_on_off_st_t_s;
    u16  current_active_timeout_s;
    AwakeSource_Enum awake_source;
    bool disable_refresh_time;
    u32  refresh_st_t_s;
}knob_display_par_t;

static knob_display_par_t knob_display_par = {
         .is_activated = true,
         .knob_active_st_time_s = 0,
         .send_cmd_on_off_st_t_s = 0,
         .awake_source = AWAKE_SRC_UNKNOWN,
         .disable_refresh_time = false,
    };

typedef struct {
	u8  enable;
	u8  index;
	u32 start_t_ms;
}refresh_navigation_t;

static refresh_navigation_t refresh_navigation = { .enable = false, .index = 0 };

static bool navigation_is_active = true;

#if 0
typedef struct {
	bool is_active;
	u32  active_start_t_ms;
}reset_par_t;

static reset_par_t reset_par = {.is_active = false};

#define CONFIRM_RESET_TIMEOUT_MS    TIMER_5S
#endif

enum {
	CONFIG_TYPE_RESET_NETWORK,
	CONFIG_TYPE_RESET_FACTORY_DEFAULT,
	CONFIG_TYPE_UNKNOWN,
};
typedef u8 ConfigType_Enum;

enum {
	CONFIG_SCREEN_SELECTION,
	CONFIG_SCREEN_RESET_NETWORK,
	CONFIG_SCREEN_RESET_FACTORY_DEFAULT,
	CONFIG_SCREEN_UNKNOWN,
};
typedef u8 ConfigScreen_Enum;

typedef struct {
	KnobDisplayScreen_Enum save_screen;
	u32 start_t_ms;
	ConfigType_Enum type;
	ConfigScreen_Enum present_screen;
	ConfigScreen_Enum target_screen;
	u32 trans_t_ms;
}config_par_t;

#define CONFIGURATION_TIME_OUT_MS    TIMER_5Min

static config_par_t config_par;



enum {
	DIRECTION_NEXT,
	DIRECTION_PREVIOUS,
	DIRECTION_FIX_SCREEN,
	DIRECTION_UNKNOWN,
};
typedef u8 ScreenDirection_Enum;

typedef struct {
	ScreenDirection_Enum direction;
	u8 endpoint_id;
}select_screen_set_t;

/******************************************************************************/
/*                          PRIVATE FUNCTIONS DECLERATION                     */
/******************************************************************************/
static void knob_set_brush_image(KnobUiMode_Enum ui_mode);
static void knob_ring_turn_off(void);
static void knob_update_display_screen_brightness(void);
static void knob_set_black_background(void);
static void knob_ring_refresh(void);

/******************************************************************************/
/*                           EXPORT FUNCTIONS DECLERATION                     */
/******************************************************************************/
/**
 * @func    knob_store_all_config
 * @brief
 * @param
 * @retval  None
 */
static void knob_store_all_config(void)
{
    flash_user_store(&adr_knob_config_idx, FLASH_ADR_KNOB_CONFIG,  \
            FLASH_SIZE_KNOB_CONFIG, BLOCK_SIZE_KNOB_CONFIG, (u8*)&knob_config);
}

/**
 * @func    knob_restore_all_config
 * @brief
 * @param
 * @retval  None
 */
static void knob_restore_all_config(void)
{
    u8 temp[BLOCK_SIZE_KNOB_CONFIG];
    flash_user_get_flash_index(&adr_knob_config_idx,  \
            FLASH_ADR_KNOB_CONFIG, FLASH_SIZE_KNOB_CONFIG, BLOCK_SIZE_KNOB_CONFIG, temp
        );
    flash_user_restore(adr_knob_config_idx,  \
            FLASH_ADR_KNOB_CONFIG, BLOCK_SIZE_KNOB_CONFIG, (u8*)&knob_config);
    if(knob_config.display_brightness > KNOB_DISPLAY_BRIGHTNESS_MAX_PERCENT) {
		knob_config.display_brightness = KNOB_DISPLAY_BRIGHTNESS_DEFAULT_PERCENT;
		knob_config.inactive_timeout.enable = true;
		knob_config.inactive_timeout.timeout_s = KNOB_INACTIVE_TIMEOUT_DEFAULT_SECONDS;
		knob_config.led_brightness = KNOB_LED_BRIGHTNESS_DEFAULT;
		knob_store_all_config();
	}
	knob_display_par.current_active_timeout_s = knob_config.inactive_timeout.timeout_s;
	if(knob_config.led_brightness > KNOB_LED_BRIGHTNESS_MAX   \
			||  knob_config.led_brightness < KNOB_LED_BRIGHTNESS_MIN) {
		knob_config.led_brightness = KNOB_LED_BRIGHTNESS_DEFAULT;
	}
}
 
 /**
  * @func    knob_get_display_brightness
  * @brief
  * @param
  * @retval  None
  */
 u8 knob_get_display_brightness(void)
 {
     return knob_config.display_brightness;
 }
 
/**
* @func    knob_response_display_brightness
* @brief
* @param
* @retval  None
*/
int knob_response_display_brightness(u8 model_idx)
{
	if(model_idx < ELE_CNT) {
		u8 tmp[2];
		tmp[0] = VD_CONFIG_KNOB_BRIGHTNESS;
		tmp[1] = knob_config.display_brightness;
		return mesh_tx_cmd_rsp(
				 VD_CONFIG_NODE_STATUS,
				 tmp,
				 sizeof(tmp),
				 ele_adr_primary + model_idx,
				 GATEWAY_UNICAST_ADDR,
				 0,
				 0
			 );
	}
	return -1;
}

 /**
  * @func    knob_handle_get_display_brightness
  * @brief
  * @param
  * @retval  None
  */
int knob_handle_get_display_brightness(u8 model_idx, u8* par, int par_len)
{
	return knob_response_display_brightness(model_idx);
}

/**
* @func    knob_handle_set_display_brightness
* @brief
* @param
* @retval  None
*/
int knob_handle_set_display_brightness(u8 model_idx, u8* par, int par_len)
{
	if(model_idx < ELE_CNT) {
		u8 display_brightness = par[0];
		if(display_brightness < KNOB_DISPLAY_BRIGHTNESS_MIN_PERCENT) {
			display_brightness = KNOB_DISPLAY_BRIGHTNESS_MIN_PERCENT;
		}
		else if(display_brightness > KNOB_DISPLAY_BRIGHTNESS_MAX_PERCENT) {
			display_brightness = KNOB_DISPLAY_BRIGHTNESS_MAX_PERCENT;
		}
		knob_config.display_brightness = display_brightness;
		knob_update_display_screen_brightness();
		knob_store_all_config();
		return knob_handle_get_display_brightness(model_idx, par, par_len);
	}
	return -1;
}


/**
* @func    knob_response_led_brightness
* @brief
* @param
* @retval  None
*/
int knob_response_led_brightness(u8 model_idx)
{
	if(model_idx < ELE_CNT) {
		u8 tmp[2];
		tmp[0] = VD_CONFIG_BACKLIGHT_BRIGHTNESS;
		tmp[1] = knob_config.led_brightness;
		return mesh_tx_cmd_rsp(
				 VD_CONFIG_NODE_STATUS,
				 tmp,
				 sizeof(tmp),
				 ele_adr_primary + model_idx,
				 GATEWAY_UNICAST_ADDR,
				 0,
				 0
			 );
	}
	return -1;
}

/**
 * @func    knob_handle_get_led_brightness
 * @brief
 * @param
 * @retval  None
 */
int knob_handle_get_led_brightness(u8 model_idx, u8* par, int par_len)
{
	return knob_response_led_brightness(model_idx);
}

/**
* @func    knob_handle_set_led_brightness
* @brief
* @param
* @retval  None
*/
int knob_handle_set_led_brightness(u8 model_idx, u8* par, int par_len)
{
	if(model_idx < ELE_CNT) {
		u8 led_brightness = par[0];
		if(led_brightness <= KNOB_LED_BRIGHTNESS_MAX  \
				&& led_brightness != knob_config.led_brightness) {
			if(led_brightness < KNOB_LED_BRIGHTNESS_MIN ) {
				led_brightness = KNOB_LED_BRIGHTNESS_MIN;
			}
			knob_config.led_brightness = led_brightness;
			knob_ring_refresh();
			knob_store_all_config();
		}
		return knob_handle_get_led_brightness(model_idx, par, par_len);
	}
	return -1;
}

/**
* @func    knob_handle_response_inactive_timeout
* @brief
* @param
* @retval  None
*/
int knob_handle_response_inactive_timeout(u8 model_idx)
{
	if(model_idx < ELE_CNT) {
		u8 tmp[1+sizeof(config_inactive_timeout_t)];
		tmp[0] = VD_CONFIG_KNOB_INACTIVE_TIMEOUT;
		memcpy(&tmp[1], &knob_config.inactive_timeout, sizeof(config_inactive_timeout_t));
		return mesh_tx_cmd_rsp(
				 VD_CONFIG_NODE_STATUS,
				 tmp,
				 sizeof(tmp),
				 ele_adr_primary + model_idx,
				 GATEWAY_UNICAST_ADDR,
				 0,
				 0
			 );
	}
	return -1;
}

/**
* @func    knob_get_inactive_timeout_config
* @brief
* @param
* @retval  None
*/
int knob_handle_get_inactive_timeout(u8 model_idx, u8* par, int par_len)
{
	return knob_handle_response_inactive_timeout(model_idx);
}

/**
* @func    knob_handle_set_inactive_timeout
* @brief
* @param
* @retval  None
*/
int knob_handle_set_inactive_timeout(u8 model_idx, u8* par, int par_len)
{
	if(model_idx < ELE_CNT) {
		config_inactive_timeout_t *p_set = (config_inactive_timeout_t*)par;
		if(p_set->enable <= max2(true, false)) {
			if(p_set->timeout_s >= KNOB_INACTIVE_TIMEOUT_MIN_SECONDS
					&& p_set->timeout_s <= KNOB_INACTIVE_TIMEOUT_MAX_SECONDS) {
				if(knob_config.inactive_timeout.enable == true && p_set->enable == false) {
					knob_set_brush_image(knob_par.ui_mode);
				}
				/*
				knob_config.inactive_timeout.enable = p_set->enable;
				*/
				knob_config.inactive_timeout.enable = true;
				knob_config.inactive_timeout.timeout_s = p_set->timeout_s;
				knob_display_par.current_active_timeout_s = p_set->timeout_s;
				knob_display_par.knob_active_st_time_s = clock_time_s();
				knob_store_all_config();
				return knob_handle_get_inactive_timeout(model_idx, par, par_len);
			}
		}
	}
	return -1;
}

/**
 * @func    knob_handle_set_config_screen_for_knob
 * @brief
 * @param
 * @retval  None
 */
int knob_handle_set_config_screen_for_knob(u8 model_idx, u8* par, int par_len)
{
	if(model_idx < ELE_CNT) {
		DBG_KNOB_SEND_STR("\n knob_handle_set_config_screen_for_knob: ");
		select_screen_set_t* p = (select_screen_set_t*)par;
		u8 current_index = element_get_current_index();
		u8 index;
		if(p->direction == DIRECTION_NEXT) {
			index = element_handle_next_endpoint_index();
		}
		else if(p->direction == DIRECTION_PREVIOUS) {
			index = element_handle_previous_endpoint_index();
		}
		else if(p->direction == DIRECTION_FIX_SCREEN) {
			index = p->endpoint_id-1;
			if(index >= ELE_CNT) {
				return -1;
			}
			element_set_active_endpoint_index(index);
		}
		else {
			return -1;
		}
		if(current_index != index) {
			knob_par.screen = DISPLAY_CONTROL_SCREEN;
			knob_set_brush_image(knob_par.ui_mode);
		}
		return 0;
	}
	return -1;
}

/**
 * @func    knob_setup_navigation_when_rotate_active
 * @brief
 * @param
 * @retval  None
 */
static void knob_setup_navigation_when_rotate_active(void)
{
	refresh_navigation.enable = true;
	refresh_navigation.start_t_ms = clock_time_ms();
	navigation_is_active = false;
}

/**
 * @func    knob_rotate_proc
 * @brief
 * @param
 * @retval  None
 */
static void knob_rotate_proc(void)
{
    if(right_rotate_par.cnt != 0) {
        u8 counter = 0;
        if(clock_time_exceed_ms(right_rotate_par.rotate_last_time_ms, MIN_IDLE_TIME_MS)) {
            if(right_rotate_par.cnt < FAST_ROTATE_THRESHOLD)  {
                counter = right_rotate_par.cnt*SLOW_STEP;
            } else {
                counter = right_rotate_par.cnt*FAST_STEP;
            }
        }
        if(right_rotate_par.cnt >= FAST_ROTATE_THRESHOLD) {
            counter = right_rotate_par.cnt*FAST_STEP;
        }
        if(counter != 0) {
        	if(knob_par.screen == DISPLAY_CONTROL_SCREEN) {
        		u8 idx;
				if(knob_device_handle_report_event(
							&idx, EVENT_CW_ROTATE, POSITION_UNKNOWN, POSITION_UNKNOWN, counter) == RT_SUCCESS) {
					knob_set_brush_image(knob_par.ui_mode);
					// Set up
					knob_setup_navigation_when_rotate_active();
				}
        	}
            right_rotate_par.cnt = 0;
        }
    }
    if(left_rotate_par.cnt != 0) {
        u8 counter = 0;
        if(clock_time_exceed_ms(left_rotate_par.rotate_last_time_ms, MIN_IDLE_TIME_MS)) {
            if(left_rotate_par.cnt < FAST_ROTATE_THRESHOLD)  {
                counter = left_rotate_par.cnt*SLOW_STEP;
            } else {
                counter = left_rotate_par.cnt*FAST_STEP;
            }
        }
        if(left_rotate_par.cnt >= FAST_ROTATE_THRESHOLD) {
            counter = left_rotate_par.cnt*FAST_STEP;
        }
        if(counter != 0) {
        	if(knob_par.screen == DISPLAY_CONTROL_SCREEN) {
        		u8 idx;
				if(knob_device_handle_report_event(&idx, EVENT_CCW_ROTATE, POSITION_UNKNOWN, POSITION_UNKNOWN, counter) == RT_SUCCESS) {
					knob_set_brush_image(knob_par.ui_mode);
					// Set up
					knob_setup_navigation_when_rotate_active();
				}
        	}
            left_rotate_par.cnt = 0;
        }
    }
}

/**
 * @func    knob_caculator_check_sum
 * @brief
 * @param
 * @retval  None
 */
static u8 knob_caculator_check_sum(u8 *p, u8 len)
{
    u8 check_sum = 0;
    foreach(i, len) {
        check_sum += p[i];
    }
    return (u8)(check_sum^0xFF);
}

/**
 * @func    knob_sen_packet_command
 * @brief
 * @param
 * @retval  None
 */
static int knob_send_packet_command(u8 cmd_id, u8* par, u8 par_len, bool queue_en)
{
    if(par_len > KNOB_MAX_PAYLOAD_LEN) {
        return RT_FAILURE;
    }
    u8 total_len = (u8)(par_len + 5);  // 1 byte header + 1 byte cmd_id + 2 bytes length + payload + 1 byte checksum
    u8 buf[total_len];
    buf[0] = KNOB_SOF;
    buf[1] = cmd_id;
    buf[2] = HI_U16(par_len);
    buf[3] = LO_U16(par_len);
    memcpy(&buf[4], par, par_len);
    buf[total_len-1] = knob_caculator_check_sum(&buf[1], total_len-2);
    if(queue_en == true) {
        knob_serial_t knob_serial;
        knob_serial.len = total_len;
        memcpy(knob_serial.payload, buf, total_len);
        FifoPush(&fifo_knob_commands, &knob_serial);
    }
    else {
        my_fifo_push_hci_tx_fifo(buf, total_len, 0, 0);
        knob_push_payload_st_t_ms = clock_time_ms();
        knob_transmit_interval_ms = KNOB_TRANSMIT_INTERVAL_MS_MIN;
        DBG_KNOB_SEND_STR("\n ############## INTERVAL: 50MS");
    }
    return RT_SUCCESS;
}


/**
 * @func    knob_turn_on_off_comunication
 * @brief
 * @param
 * @retval  None
 */
static void knob_turn_on_off_comunication(KnobComunicationStatus_Enum conn_status)
{
    u8 p[2];
    p[0] = KNOB_STATUS_SEND_FRAME;
    p[1] = conn_status;
    knob_send_packet_command(KNOB_CONNECTION_DISCONNECTION_CMD, p, sizeof(p), true);
}

/**
 * @func    knob_close_the_bluetooth
 * @brief
 * @param
 * @retval  None
 */
static void knob_close_the_bluetooth(void)
{
    u8 p[2];
    p[0] = KNOB_STATUS_SEND_FRAME;
    p[1] = 1;
    knob_send_packet_command(KNOB_CLOSE_THE_BLUETOOTH, p, sizeof(p), true);
}

/**
 * @func    knob_turn_on_comunication
 * @brief
 * @param
 * @retval  None
 */
static void knob_turn_on_comunication(void)
{
    knob_turn_on_off_comunication(KNOB_CONNECTED);
}

/**
 * @func    knob_setup_long_push_duration
 * @brief
 * @param
 * @retval  None
 */
static void knob_setup_long_push_duration(u16 duration)
{
    u8 p[3];
    p[0] = KNOB_STATUS_SEND_FRAME;
    p[1] = HI_U16(duration);
    p[2] = LO_U16(duration);
    knob_send_packet_command(KNOB_SET_LONG_PUSH_DURATION, p, sizeof(p), true);
}

#if 0

/**
 * @func    knob_turn_off_comunication
 * @brief
 * @param
 * @retval  None
 */
static void knob_turn_off_comunication(void)
{
    knob_par.connect_status = KNOB_DISCONNECTED;
    knob_turn_on_off_comunication(KNOB_DISCONNECTED);
}
#endif

/**
 * @func    knob_turn_on_off_comunication
 * @brief
 * @param
 * @retval  None
 */
static void knob_rgb_set(u8 r, u8 g, u8 b)
{
    u8 p[4];
    p[0] = KNOB_STATUS_SEND_FRAME;
    p[1] = r;
    p[2] = g;
    p[3] = b;
    knob_send_packet_command(KNOB_CONTROL_KNOB_DISPLAY_RGB, p, sizeof(p), true);
}

/**
 * @func    knob_refresh_screen
 * @brief
 * @param
 * @retval  None
 */
static void knob_refresh_screen(KnobScreenStatus_Enum status)
{
	u8 payload[2];
	payload[0] = KNOB_STATUS_SEND_FRAME;
	payload[1] = status;
	knob_send_packet_command(KNOB_SCREEN_REFRESH_CMD, payload, 2, false);
	// Update flag
	if(status == KNOB_SCREEN_OFF) {
		knob_display_par.is_activated = false;
	}
	else {
		knob_display_par.is_activated = true;
		if(knob_display_par.disable_refresh_time == true) {
			knob_display_par.disable_refresh_time = false;
			DBG_KNOB_SEND_STR("\n *****************************************");
			return;
		}
		if(knob_display_par.awake_source != AWAKE_SRC_BY_TIMER
				&& knob_display_par.awake_source != AWAKE_SRC_BY_OUTPUT && knob_display_par.awake_source != AWAKE_SRC_BY_APP) {
			knob_display_par.knob_active_st_time_s = clock_time_s();
		}
	}
	knob_display_par.refresh_st_t_s = clock_time_s();
}

/**
 * @func    knob_convert_curtain_level_to_image_index
 * @brief
 * @param
 * @retval  None
 */
static u8 knob_convert_curtain_level_to_image_index(u8 level)
{
    u8 arr[7] = {0, 17, 33, 50, 67, 83, 100};
    int size = sizeof(arr);
    u8 nearestIndex = 0;
    int minDiff = abs(arr[0] - level);

    for (u8 i = 1; i < size; i++) {
        int diff = abs(arr[i] - level);
        if (diff < minDiff) {
            minDiff = diff;
            nearestIndex = i;
        }
    }
    if(nearestIndex == 0) {
        if(level != 0) {
            nearestIndex = 1;
        }
    }
    else if(nearestIndex == size - 1) {
        if(level != 0x64) {
            nearestIndex = (u8)size - 2;
        }
    }
    return nearestIndex;
}

/**
 * @func    knob_convert_curtain_level_to_percent
 * @brief
 * @param
 * @retval  None
 */
static u8 knob_convert_curtain_level_to_percent(u8 level)
{
    u8 percent;
    if (level <= 165) {
        if(level == 0) {
            percent = 0;
        }
        else {
            percent =  (u8)((level+1)/ 3);
        }
    }
    if (level > 165) {
        percent = (u8)(55 + ((level+1) - 165)/2);
    }
    return percent;
}

/**
 * @func    knob_convert_temperature_to_image_index
 * @brief
 * @param
 * @retval  None
 */
static u8 knob_convert_temperature_to_image_index(u16 temp)
{
    u16 tmp = temp;
    if(temp < KNOB_TEMPERATURE_MIN) {
        tmp = KNOB_TEMPERATURE_MIN;
    }
    else if(temp > KNOB_TEMPERATURE_MAX) {
        tmp = KNOB_TEMPERATURE_MAX;
    }
    u8 image_index = (u8)((tmp - KNOB_TEMPERATURE_MIN)/KNOB_TEMPERATURE_STEP_CHANGE);
    if(((tmp - KNOB_TEMPERATURE_MIN)%KNOB_TEMPERATURE_STEP_CHANGE) > (KNOB_TEMPERATURE_STEP_CHANGE >> 1)) {
        return (image_index + 1);
    }
    return image_index;
}

/**
 * @func    knob_convert_temperature_to_image_index
 * @brief
 * @param
 * @retval  None
 */
static u8 knob_convert_temperature_to_percent(u16 temp)
{
    u16 tmp = temp;
    if(temp < KNOB_TEMPERATURE_MIN) {
        tmp = KNOB_TEMPERATURE_MIN;
    }
    else if(temp > KNOB_TEMPERATURE_MAX) {
        tmp = KNOB_TEMPERATURE_MAX;
    }
    return (u8)(((tmp - KNOB_TEMPERATURE_MIN)*100)/(KNOB_TEMPERATURE_MAX - KNOB_TEMPERATURE_MIN));
}

#if 0
/**
 * @func    knob_convert_air_temperature_to_percent
 * @brief
 * @param
 * @retval  None
 */
static u8 knob_convert_air_temperature_to_percent(u16 temp)
{
    u16 tmp = temp;
    if(temp < AIR_TEMP_MIN) {
        tmp = AIR_TEMP_MIN;
    }
    else if(temp > AIR_TEMP_MAX) {
        tmp = AIR_TEMP_MAX;
    }
    return (u8)(((tmp - AIR_TEMP_MIN)*100)/(AIR_TEMP_MAX - AIR_TEMP_MIN));
}
#endif

/**
 * @func    knob_get_name_infor_with_check_len
 * @brief
 * @param
 * @retval  None
 */
static bool knob_get_name_infor_with_check_len(
		TextSize_Enum size, u8* in_name, u8 len,
		u8* out_name, u8* out_name_len, u16* out_name_width, u16* out_st_pos)
{
    if(len > DEVICE_NAME_MAX_LEN) {
        return false;
    }
    u16 width = 0;
    u8 tmp[DEVICE_NAME_MAX_LEN];

    if(size == TEXT_SIZE_BIG) {
    	foreach(i, len) {
    		width += text_symbol_big_size[in_name[i]];
    	}
		if(width > DEVICE_NAME_WIDTH_MAX_BIG_SIZE) {
			u8 pos = 0;
			width = NAME_START_POSITION+3*text_symbol_big_size[DOT_SYMBOL_INDEX];
			memcpy(tmp, in_name, len);
			while(width < DEVICE_NAME_WIDTH_MAX_BIG_SIZE && (pos < DEVICE_NAME_MAX_LEN - 3)) {
				width += text_symbol_big_size[in_name[pos]];
				pos++;
			}
			if(pos+3 <= DEVICE_NAME_MAX_LEN) {
				memcpy(out_name, in_name, pos);
				out_name[pos++] = DOT_SYMBOL_INDEX;
				out_name[pos++] = DOT_SYMBOL_INDEX;
				out_name[pos++] = DOT_SYMBOL_INDEX;
				*out_name_len = pos;
				*out_st_pos += NAME_START_POSITION + ((DEVICE_NAME_WIDTH_MAX_BIG_SIZE - width) >> 1);
				return true;
			}
			return false;
		}
		else {
			memcpy(out_name, in_name, len);
			*out_name_len = len;
			*out_st_pos += NAME_START_POSITION + ((DEVICE_NAME_WIDTH_MAX_BIG_SIZE - width) >> 1);
			return true;
		}
    }
    else if(size == TEXT_SIZE_MEDIUM) {
    	foreach(i, len) {
    		width += text_symbol_medium_size[in_name[i]];
    	}
		if(width > DEVICE_NAME_WIDTH_MAX_MEDIUM_SIZE) {
			u8 pos = 0;
			width = NAME_START_POSITION+3*text_symbol_medium_size[DOT_SYMBOL_INDEX];
			memcpy(tmp, in_name, len);
			while(width < DEVICE_NAME_WIDTH_MAX_MEDIUM_SIZE && (pos < DEVICE_NAME_MAX_LEN - 3)) {
				width += text_symbol_medium_size[in_name[pos]];
				pos++;
			}
			if(pos+3 <= DEVICE_NAME_MAX_LEN) {
				memcpy(out_name, in_name, pos);
				out_name[pos]   = DOT_SYMBOL_INDEX;
				out_name[pos++] = DOT_SYMBOL_INDEX;
				out_name[pos++] = DOT_SYMBOL_INDEX;
				*out_name_len = pos;
				*out_st_pos += NAME_START_POSITION + ((DEVICE_NAME_WIDTH_MAX_MEDIUM_SIZE - width) >> 1);
				return true;
			}
			return false;
		}
		else {
			memcpy(out_name, in_name, len);
			*out_name_len = len;
			*out_st_pos += NAME_START_POSITION + ((DEVICE_NAME_WIDTH_MAX_MEDIUM_SIZE - width) >> 1);
			return true;
		}
    }
    return false;
}

/**
 * @func    knob_convert_icon_id_to_icon_key
 * @brief
 * @param
 * @retval  None
 */
bool convert_light_icon_id_and_status_to_image_index(u8 icon_id, u8 status, u16* image_index)
{
	if(icon_id >= LIGHT_ICON_ID_START && icon_id <= LIGHT_ICON_ID_END) {
		if((icon_id - 1) > LIGHT_ICON_ID_CNT) {
			return false;
		}
		*image_index = ENDPOINT_ICON_KEY_OFFSET + ((icon_id-1)*2);
		if(status == G_OFF) {
			*image_index += 1;
		}
		return true;
	}
	return false;
}


/**
 * @func    knob_brush_single_image
 * @brief
 * @param
 * @retval  None
 */
void knob_brush_test_rf_status(bool is_pass)
{
	u8 payload[200];
	u8 index = 0;
	payload[index++] = KNOB_STATUS_SEND_FRAME;
	payload[index++] = 0x00;
	if(is_pass == true) {
		payload[index++] = HI_U16(FACT_RESULT_PASS_INDEX);
		payload[index++] = LO_U16(FACT_RESULT_PASS_INDEX);
	}
	else {
		payload[index++] = HI_U16(FACT_RESULT_FAILURE_INDEX);
		payload[index++] = LO_U16(FACT_RESULT_FAILURE_INDEX);
	}
	payload[index++] = HI_U16(FACT_X_POS);
	payload[index++] = LO_U16(FACT_X_POS);
	payload[index++] = HI_U16(FACT_Y_POS);
	payload[index++] = LO_U16(FACT_Y_POS);

	payload[index++] = 0x00;
	payload[index++] = HI_U16(FACT_KNOB_IS_OK_INDEX);
	payload[index++] = LO_U16(FACT_KNOB_IS_OK_INDEX);
	payload[index++] = HI_U16(KNOB_OK_X_POS);
	payload[index++] = LO_U16(KNOB_OK_X_POS);
	payload[index++] = HI_U16(KNOB_OK_Y_POS);
	payload[index++] = LO_U16(KNOB_OK_Y_POS);

	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);
}

/**
 * @func    knob_brush_single_image
 * @brief
 * @param
 * @retval  None
 */
void knob_brush_single_image(u16 image_index, u16 x_pos, u16 y_pos)
{
	u8 payload[10];
	u8 index = 0;
	payload[index++] = KNOB_STATUS_SEND_FRAME;
	payload[index++] = 0x00;
	payload[index++] = HI_U16(image_index);
	payload[index++] = LO_U16(image_index);
	payload[index++] = HI_U16(x_pos);
	payload[index++] = LO_U16(x_pos);
	payload[index++] = HI_U16(y_pos);
	payload[index++] = LO_U16(y_pos);
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);
}

/**
 * @func    knob_set_switch_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_switch_brush_image(u8 idx)
{
#if SCREEN_TYPE  == TYPE_HORIZONTAL
	switch_par_t* switch_par = knob_device_get_switch_par();
	if(idx >= ELE_CNT) {
		DBG_KNOB_SEND_STR("\n Invalid switch index");
		return;
	}
	u8 on_off_status = switch_par->onoff_st[idx];
	u8 payload[200];
	u8 index = 0;

	payload[index++] = KNOB_STATUS_SEND_FRAME;
	// Layer 0, icon power on
	payload[index++] = 0;
	if(on_off_status == G_OFF) {
        payload[index++] = HI_U16(ICON_POWER_OFF);
        payload[index++] = LO_U16(ICON_POWER_OFF);
	}
	else {
        payload[index++] = HI_U16(ICON_POWER_ON);
        payload[index++] = LO_U16(ICON_POWER_ON);
	}
	payload[index++] = 0;
	payload[index++] = 0xc0;
	payload[index++] = 0x01;
	payload[index++] = 0x6c;

	#if CHANGE_DEVICE_NAME_EN
    common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
    // Endpoint icon
    u16 image_index = 0;
    if(convert_light_icon_id_and_status_to_image_index(
    			common_endpoint_par->icon_id, on_off_status, &image_index) == true) {
		payload[index++] = 0x00;
		payload[index++] = HI_U16(image_index);
		payload[index++] = LO_U16(image_index);
		payload[index++] = HI_U16(ICON_X_POSITION);
		payload[index++] = LO_U16(ICON_X_POSITION);
		payload[index++] = HI_U16(ICON_Y_POSITION);
		payload[index++] = LO_U16(ICON_Y_POSITION);
    }
    // Endpoint name
	u8 name[DEVICE_NAME_MAX_LEN];
	u8 len = 0;
	u16 width;
	u16 x_pos = 0;
	bool st = knob_get_name_infor_with_check_len(  \
			TEXT_SIZE_BIG, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &x_pos);
	if(st == true) {
		foreach(i, len) {
			u16 image_index = TEXT_BIG_SIZE_OFFSET + name[i];
			if(name[i] == SYMBOL_BIG_SPACE) {
				x_pos += text_symbol_big_size[SYMBOL_BIG_SPACE];
			}
			else {
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = HI_U16(x_pos);
				payload[index++] = LO_U16(x_pos);
				payload[index++] = HI_U16(BIG_NAME_Y_POSITION);
				payload[index++] = LO_U16(BIG_NAME_Y_POSITION);
				x_pos += text_symbol_big_size[name[i]];
			}
		}
	}
	#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);
#else

	switch_par_t* switch_par = knob_device_get_switch_par();
	if(idx >= ELE_CNT) {
		DBG_KNOB_SEND_STR("\n Invalid switch index");
		return;
	}
	u8 on_off_status = switch_par->onoff_st[idx];
	u8 payload[200];
	u8 index = 0;

	payload[index++] = KNOB_STATUS_SEND_FRAME;
	// Layer 0, icon power on
	payload[index++] = 0;
	if(on_off_status == G_OFF) {
        payload[index++] = HI_U16(ICON_POWER_OFF);
        payload[index++] = LO_U16(ICON_POWER_OFF);
	}
	else {
        payload[index++] = HI_U16(ICON_POWER_ON);
        payload[index++] = LO_U16(ICON_POWER_ON);
	}
	payload[index++] = 0x01;
	payload[index++] = 0x6c;
	payload[index++] = 0x00;
	payload[index++] = 0xc0;

	#if CHANGE_DEVICE_NAME_EN
    common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
    // Endpoint icon
    u16 image_index = 0;
    if(convert_light_icon_id_and_status_to_image_index(
    			common_endpoint_par->icon_id, on_off_status, &image_index) == true) {
		payload[index++] = 0x00;
		payload[index++] = HI_U16(image_index);
		payload[index++] = LO_U16(image_index);
		payload[index++] = HI_U16(ICON_X_POSITION);
		payload[index++] = LO_U16(ICON_X_POSITION);
		payload[index++] = HI_U16(ICON_Y_POSITION);
		payload[index++] = LO_U16(ICON_Y_POSITION);
    }
    // Endpoint name
	u8 name[DEVICE_NAME_MAX_LEN];
	u8 len = 0;
	u16 width;
	u16 y_pos = 0;
	bool st = knob_get_name_infor_with_check_len(  \
			TEXT_SIZE_BIG, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &y_pos);
	if(st == true) {
		for(int i = len - 1; i >= 0; i--) {
			u16 image_index = TEXT_BIG_SIZE_OFFSET + name[i];
			if(name[i] == SYMBOL_BIG_SPACE) {
				y_pos += text_symbol_big_size[SYMBOL_BIG_SPACE];
			}
			else {
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = HI_U16(BIG_NAME_X_POSITION);
				payload[index++] = LO_U16(BIG_NAME_X_POSITION);
				payload[index++] = HI_U16(y_pos);
				payload[index++] = LO_U16(y_pos);
				y_pos += text_symbol_big_size[name[i]];
			}
		}
	}
	#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);

#endif
}

/**
 * @func    knob_convert_icon_id_to_icon_key
 * @brief
 * @param
 * @retval  None
 */
bool convert_scene_icon_id_to_image_index(u8 icon_id, u16* image_index)
{
	if(icon_id >= SCENE_ICON_START && icon_id <= SCENE_ICON_END) {
		if((icon_id - 1) > SCENE_ICON_CNT) {
			return false;
		}
		*image_index = SCENE_ICON_KEY_OFFSET + (icon_id-1);
		return true;
	}
	return false;
}

/**
 * @func    knob_set_scene_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_scene_brush_image(void)
{
    scene_par_t *scene_par = scene_get_scene_par();
	u8 index = 0;
	u8 payload[200];

#if SCREEN_TYPE  == TYPE_HORIZONTAL
	payload[index++] = KNOB_STATUS_SEND_FRAME;
	// Layer 0: Active button
	payload[index++] = 0x00;
	payload[index++] = 0x03;
	payload[index++] = 0xe1;
	payload[index++] = 0x00;
	payload[index++] = 0x8e;
	payload[index++] = 0x01;
	payload[index++] = 0x5d;

	// Layer 2: Scene name
#if CHANGE_DEVICE_NAME_EN
	common_scene_par_t *common_scene_par = element_get_common_scene_par(scene_par->current_scene_id);
	// Scene position
	u8 total_scene, pos;
	if(scene_get_scene_position(scene_par->current_scene_id, &total_scene, &pos) == true) {
		if(total_scene > 1) {
			u16 navigation_image = NAVIGATION_IMAGE_OFFSET;
			if(pos != 0) {
				navigation_image = (pos == (total_scene - 1))?  \
						(navigation_image + 2):(navigation_image+1);
			}
			payload[index++] = 0x00;
			payload[index++] = HI_U16(navigation_image);
			payload[index++] = LO_U16(navigation_image);
			payload[index++] = HI_U16(0);
			payload[index++] = LO_U16(0);
			payload[index++] = HI_U16(0);
			payload[index++] = LO_U16(0);
		}
	}
	// Scene icon
	u16 image_index = 0;
	if(convert_scene_icon_id_to_image_index(
			common_scene_par->icon_id, &image_index) == true) {
		payload[index++] = 0x00;
		payload[index++] = HI_U16(image_index);
		payload[index++] = LO_U16(image_index);
		payload[index++] = HI_U16(ICON_X_POSITION);
		payload[index++] = LO_U16(ICON_X_POSITION);
		payload[index++] = HI_U16(ICON_Y_POSITION);
		payload[index++] = LO_U16(ICON_Y_POSITION);
	}
	// Scene name
	if(common_scene_par != NULL) {
		u8 name[SCENE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 x_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_BIG, common_scene_par->name, common_scene_par->name_len, name, &len, &width, &x_pos);
		if(st == true) {
			foreach(i, len) {
				u16 image_index = TEXT_BIG_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					x_pos += text_symbol_big_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(x_pos);
					payload[index++] = LO_U16(x_pos);
					payload[index++] = HI_U16(MEDIUM_NAME_Y_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_Y_POSITION);
					x_pos += text_symbol_big_size[name[i]];
				}
			}
		}
	}
#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);
#else
	payload[index++] = KNOB_STATUS_SEND_FRAME;
	// Layer 0: Active button
	payload[index++] = 0x00;
	payload[index++] = 0x03;
	payload[index++] = 0xe1;
	payload[index++] = 0x01;
	payload[index++] = 0x5d;
	payload[index++] = 0x00;
	payload[index++] = 0x8e;

	// Layer 2: Scene name
#if CHANGE_DEVICE_NAME_EN
	common_scene_par_t *common_scene_par = element_get_common_scene_par(scene_par->current_scene_id);
	// Scene position
	u8 total_scene, pos;
	if(scene_get_scene_position(scene_par->current_scene_id, &total_scene, &pos) == true) {
		if(total_scene > 1) {
			u16 navigation_image = NAVIGATION_IMAGE_OFFSET;
			if(pos != 0) {
				navigation_image = (pos == (total_scene - 1))?  \
						(navigation_image + 2):(navigation_image+1);
			}
			payload[index++] = 0x00;
			payload[index++] = HI_U16(navigation_image);
			payload[index++] = LO_U16(navigation_image);
			payload[index++] = HI_U16(0);
			payload[index++] = LO_U16(0);
			payload[index++] = HI_U16(0);
			payload[index++] = LO_U16(0);
		}
	}
	// Scene icon
	u16 image_index = 0;
	if(convert_scene_icon_id_to_image_index(
			common_scene_par->icon_id, &image_index) == true) {
		payload[index++] = 0x00;
		payload[index++] = HI_U16(image_index);
		payload[index++] = LO_U16(image_index);
		payload[index++] = HI_U16(ICON_X_POSITION);
		payload[index++] = LO_U16(ICON_X_POSITION);
		payload[index++] = HI_U16(ICON_Y_POSITION);
		payload[index++] = LO_U16(ICON_Y_POSITION);
	}
	// Scene name
	if(common_scene_par != NULL) {
		u8 name[SCENE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 y_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_BIG, common_scene_par->name, common_scene_par->name_len, name, &len, &width, &y_pos);
		if(st == true) {
			for(int i = len - 1; i >= 0; i--) {
				u16 image_index = TEXT_BIG_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					y_pos += text_symbol_big_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(BIG_NAME_X_POSITION);
					payload[index++] = LO_U16(BIG_NAME_X_POSITION);
					payload[index++] = HI_U16(y_pos);
					payload[index++] = LO_U16(y_pos);
					y_pos += text_symbol_big_size[name[i]];
				}
			}
		}
	}
#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);
#endif
}


/**
 * @func    knob_set_cct_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_cct_brush_image(u8 idx)
{
	if(idx >= ELE_CNT) {
		return;
	}
    cct_par_t* p_cct_par = knob_device_get_cct_par();
    u8 payload[200];
    u8 index = 0;

    u8 level = (p_cct_par->brightness[idx] + LIGHTNESS_MAX/200)*100/LIGHTNESS_MAX;
    u8 display_mode = p_cct_par->display_mode[idx];

#if SCREEN_TYPE  == TYPE_HORIZONTAL
	if(display_mode == DISPLAY_CCT_LIGHTNESS) {
		payload[index++] = KNOB_STATUS_SEND_FRAME;
		// Layer 0, Power switch
		payload[index++] = 0;
		if(level > 0) {
			payload[index++] = HI_U16(ICON_POWER_ON);
			payload[index++] = LO_U16(ICON_POWER_ON);
		}
		else {
			payload[index++] = HI_U16(ICON_POWER_OFF);
			payload[index++] = LO_U16(ICON_POWER_OFF);
		}
		payload[index++] = 0;
		payload[index++] = 0xc0;
		payload[index++] = 0x01;
		payload[index++] = 0x6c;

	#if DISPLAY_NAVIGATION_EN
		if(navigation_is_active == true) {
			DBG_KNOB_SEND_STR("\n &&&&&&&&&&&&&& navigation_is_active");
			payload[index++] = 0x00;
			payload[index++] = HI_U16(NAVIGATION_IMAGE_OFFSET);
			payload[index++] = LO_U16(NAVIGATION_IMAGE_OFFSET);
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
		}
		else
	#endif
		{
			// Layer 1, level frame
			if(level > 0) {
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = (u8)level-1;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}

		// Layer 2 // Number
		payload[index++] = 0x00;
		payload[index++] = HI_U16(level+OFFSET_NUMBER);
		payload[index++] = LO_U16(level+OFFSET_NUMBER);
		payload[index++] = 0x00;
		payload[index++] = 0xb0;
		payload[index++] = 0x01;
		payload[index++] = 0x17;

		// Layer 3, symbol percent
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_PERCENT);
		payload[index++] = LO_U16(ICON_PERCENT);
		payload[index++] = 0x01;
		if(level == 100) {
			payload[index++] = 0x1F;
		}
		else {
			payload[index++] = 0x10;
		}
		payload[index++] = 0x01;
		payload[index++] = 0x1b;

		DBG_KNOB_SEND_STR("\n CCT - Display Lightness");
	}
	else if(display_mode == DISPLAY_CCT_TEMP) {
		u16 figure_no = knob_convert_temperature_to_image_index(
							convert_host_temp_to_ele_temp(p_cct_par->temperature[idx])) + OFFSET_TEMPERATURE;
		payload[index++] = KNOB_STATUS_SEND_FRAME;

		u8 on_off = (p_cct_par->brightness[idx] == 0)?G_OFF:G_ON;
		// Layer 0, Power switch
		payload[index++] = 0;
		if(on_off == G_ON) {
			payload[index++] = HI_U16(ICON_POWER_ON);
			payload[index++] = LO_U16(ICON_POWER_ON);
		}
		else {
			payload[index++] = HI_U16(ICON_POWER_OFF);
			payload[index++] = LO_U16(ICON_POWER_OFF);
		}
		payload[index++] = 0;
		payload[index++] = 0xc0;
		payload[index++] = 0x01;
		payload[index++] = 0x6c;

	#if DISPLAY_NAVIGATION_EN
		if(navigation_is_active == true) {
			DBG_KNOB_SEND_STR("\n &&&&&&&&&&&&&& navigation_is_active");
			payload[index++] = 0x00;
			payload[index++] = HI_U16(NAVIGATION_IMAGE_OFFSET + 1);
			payload[index++] = LO_U16(NAVIGATION_IMAGE_OFFSET + 1);
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
		}
		else
	#endif
		{
			// Layer 1, level frame
			u8 percent = knob_convert_temperature_to_percent(   \
						 	 convert_host_temp_to_ele_temp(p_cct_par->temperature[idx]));
			if(percent != 0)
			{
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = percent-1;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}
		// Layer 3 // Number
		payload[index++] = 0x00;
		payload[index++] = HI_U16(figure_no);;
		payload[index++] = LO_U16(figure_no);
		payload[index++] = 0x00;
		payload[index++] = 0x7E;
		payload[index++] = 0x01;
		payload[index++] = 0x17;

		DBG_KNOB_SEND_STR("\n CCT - Display Temperature: ");
	}
	else if(display_mode == DISPLAY_CCT_SCENE) {
		payload[index++] = KNOB_STATUS_SEND_FRAME;
		// Layer 0, Power switch
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xaa;
		payload[index++] = 0;
		payload[index++] = 0;
		payload[index++] = 0;
		payload[index++] = 0;

		// lauyer1, Navigation
	#if DISPLAY_NAVIGATION_EN
		payload[index++] = 0x00;
		payload[index++] = HI_U16(NAVIGATION_IMAGE_OFFSET + 2);
		payload[index++] = LO_U16(NAVIGATION_IMAGE_OFFSET + 2);
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
	#endif

		DBG_KNOB_SEND_STR("\n ### CCT - SCENE_DISPLAY");
	}
	#if CHANGE_DEVICE_NAME_EN
	common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
	// Endpoint icon
	if(display_mode != DISPLAY_CCT_SCENE) {
		u16 image_index = 0;
		u8 on_off_status = (level > 0)?G_ON:G_OFF;
		if(convert_light_icon_id_and_status_to_image_index(
					common_endpoint_par->icon_id, on_off_status, &image_index) == true) {
			payload[index++] = 0x00;
			payload[index++] = HI_U16(image_index);
			payload[index++] = LO_U16(image_index);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);
		}
	}
	// Endpoint name
	u8 name[DEVICE_NAME_MAX_LEN];
	u8 len = 0;
	u16 width;
	u16 x_pos = 0;
	bool st = knob_get_name_infor_with_check_len(  \
			TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &x_pos);
	if(st == true) {
		foreach(i, len) {
			u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
			if(name[i] == SYMBOL_BIG_SPACE) {
				x_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
			}
			else {
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = HI_U16(x_pos);
				payload[index++] = LO_U16(x_pos);
				payload[index++] = HI_U16(MEDIUM_NAME_Y_POSITION);
				payload[index++] = LO_U16(MEDIUM_NAME_Y_POSITION);
				x_pos += text_symbol_medium_size[name[i]];
			}
		}
	}
	#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);
#else
	if(display_mode == DISPLAY_CCT_LIGHTNESS) {
		payload[index++] = KNOB_STATUS_SEND_FRAME;
		// Layer 0, Power switch
		payload[index++] = 0;
		if(level > 0) {
			payload[index++] = HI_U16(ICON_POWER_ON);
			payload[index++] = LO_U16(ICON_POWER_ON);
		}
		else {
			payload[index++] = HI_U16(ICON_POWER_OFF);
			payload[index++] = LO_U16(ICON_POWER_OFF);
		}
		payload[index++] = 0x01;
		payload[index++] = 0x6c;
		payload[index++] = 0;
		payload[index++] = 0xc0;

	#if DISPLAY_NAVIGATION_EN
		if(navigation_is_active == true) {
			DBG_KNOB_SEND_STR("\n &&&&&&&&&&&&&& navigation_is_active");
			payload[index++] = 0x00;
			payload[index++] = HI_U16(NAVIGATION_IMAGE_OFFSET);
			payload[index++] = LO_U16(NAVIGATION_IMAGE_OFFSET);
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
		}
		else
	#endif
		{
			// Layer 1, level frame
			if(level > 0) {
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = (u8)level-1;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}

		// Layer 2 // Number
		payload[index++] = 0x00;
		payload[index++] = HI_U16(level+OFFSET_NUMBER);
		payload[index++] = LO_U16(level+OFFSET_NUMBER);
		payload[index++] = 0x01;
		payload[index++] = 0x17;
		if(level == 100) {
			payload[index++] = 0x00;
			payload[index++] = 0xba;
		}
		else {
			payload[index++] = 0x00;
			payload[index++] = 0xb4;
		}

		// Layer 3, symbol percent
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_PERCENT);
		payload[index++] = LO_U16(ICON_PERCENT);
		payload[index++] = 0x01;
		payload[index++] = 0x1d;
	    if(level == 100) {
	        payload[index++] = 0x00;
	        payload[index++] = 0x97;
	    } else if(level < 10) {
	        payload[index++] = 0x00;
	        payload[index++] = 0xae;
	    } else {
	        payload[index++] = 0x00;
	        payload[index++] = 0x9e;
	    }

		DBG_KNOB_SEND_STR("\n CCT - Display Lightness");
	}
	else if(display_mode == DISPLAY_CCT_TEMP) {
		u16 figure_no = knob_convert_temperature_to_image_index(
							convert_host_temp_to_ele_temp(p_cct_par->temperature[idx])) + OFFSET_TEMPERATURE;
		payload[index++] = KNOB_STATUS_SEND_FRAME;

		u8 on_off = (p_cct_par->brightness[idx] == 0)?G_OFF:G_ON;
		// Layer 0, Power switch
		payload[index++] = 0;
		if(on_off == G_ON) {
			payload[index++] = HI_U16(ICON_POWER_ON);
			payload[index++] = LO_U16(ICON_POWER_ON);
		}
		else {
			payload[index++] = HI_U16(ICON_POWER_OFF);
			payload[index++] = LO_U16(ICON_POWER_OFF);
		}
		payload[index++] = 0x01;
		payload[index++] = 0x6c;
		payload[index++] = 0x00;
		payload[index++] = 0xc0;


	#if DISPLAY_NAVIGATION_EN
		if(navigation_is_active == true) {
			DBG_KNOB_SEND_STR("\n &&&&&&&&&&&&&& navigation_is_active");
			payload[index++] = 0x00;
			payload[index++] = HI_U16(NAVIGATION_IMAGE_OFFSET + 1);
			payload[index++] = LO_U16(NAVIGATION_IMAGE_OFFSET + 1);
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
		}
		else
	#endif
		{
			// Layer 1, level frame
			u8 percent = knob_convert_temperature_to_percent(   \
						 	 convert_host_temp_to_ele_temp(p_cct_par->temperature[idx]));
			if(percent != 0)
			{
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = percent-1;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}
		// Layer 3 // Number
		payload[index++] = 0x00;
		payload[index++] = HI_U16(figure_no);;
		payload[index++] = LO_U16(figure_no);
		payload[index++] = 0x01;
		payload[index++] = 0x17;
		payload[index++] = 0x00;
		payload[index++] = 0x7E;

		DBG_KNOB_SEND_STR("\n CCT - Display Temperature: ");
	}
	else if(display_mode == DISPLAY_CCT_SCENE) {
		payload[index++] = KNOB_STATUS_SEND_FRAME;
		// Layer 0, Power switch
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xaa;
		payload[index++] = 0;
		payload[index++] = 0;
		payload[index++] = 0;
		payload[index++] = 0;

		// lauyer1, Navigation
	#if DISPLAY_NAVIGATION_EN
		payload[index++] = 0x00;
		payload[index++] = HI_U16(NAVIGATION_IMAGE_OFFSET + 2);
		payload[index++] = LO_U16(NAVIGATION_IMAGE_OFFSET + 2);
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
	#endif

		DBG_KNOB_SEND_STR("\n ### CCT - SCENE_DISPLAY");
	}
	#if CHANGE_DEVICE_NAME_EN
	common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
	// Endpoint icon
	if(display_mode != DISPLAY_CCT_SCENE) {
		u16 image_index = 0;
		u8 on_off_status = (level > 0)?G_ON:G_OFF;
		if(convert_light_icon_id_and_status_to_image_index(
					common_endpoint_par->icon_id, on_off_status, &image_index) == true) {
			payload[index++] = 0x00;
			payload[index++] = HI_U16(image_index);
			payload[index++] = LO_U16(image_index);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);
		}
	}
	// Endpoint name
	u8 name[DEVICE_NAME_MAX_LEN];
	u8 len = 0;
	u16 width;
	u16 y_pos = 0;
	bool st = knob_get_name_infor_with_check_len(  \
			TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &y_pos);
	if(st == true) {
		for(int i = len - 1; i >= 0; i--) {
			u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
			if(name[i] == SYMBOL_BIG_SPACE) {
				y_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
			}
			else {
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = HI_U16(MEDIUM_NAME_X_POSITION);
				payload[index++] = LO_U16(MEDIUM_NAME_X_POSITION);
				payload[index++] = HI_U16(y_pos);
				payload[index++] = LO_U16(y_pos);
				y_pos += text_symbol_medium_size[name[i]];
			}
		}
	}
	#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);
#endif
}

/**
 * @func    knob_set_dim_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_dim_brush_image(u8 idx)
{
	u8 payload[200];
	u8 index = 0;
	dim_par_t* dim_par = knob_device_get_dim_par();
	if(dim_par->index >= ELE_CNT) {
		return;
	}
	u8 level = (dim_par->level[idx] + LIGHTNESS_MAX/200)*100/LIGHTNESS_MAX;

#if SCREEN_TYPE  == TYPE_HORIZONTAL
	payload[index++] = KNOB_STATUS_SEND_FRAME;
	// Layer 0, Power switch
	payload[index++] = 0;
	if(level > 0) {
		payload[index++] = HI_U16(ICON_POWER_ON);
		payload[index++] = LO_U16(ICON_POWER_ON);
	}
	else {
		payload[index++] = HI_U16(ICON_POWER_OFF);
		payload[index++] = LO_U16(ICON_POWER_OFF);
	}
    payload[index++] = 0x00;
    payload[index++] = 0xc0;
    payload[index++] = 0x01;
    payload[index++] = 0x6c;

	#if DISPLAY_NAVIGATION_EN
	if(navigation_is_active == true) {
		// Layer 1, don't have navigation
	}
	else
	#endif
	{
		// Layer 1, level frame
		if(level > 0) {
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = (u8)level-1;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
		}
	}
    // Layer 2 // Number
    payload[index++] = 0x00;
    payload[index++] = HI_U16(level+OFFSET_NUMBER);
    payload[index++] = LO_U16(level+OFFSET_NUMBER);
    payload[index++] = 0x00;
    payload[index++] = 0xb0;
    payload[index++] = 0x01;
    payload[index++] = 0x17;

    // Layer 3, symbol percent
    payload[index++] = 0x00;
    payload[index++] = HI_U16(ICON_PERCENT);
    payload[index++] = LO_U16(ICON_PERCENT);
    payload[index++] = 0x01;
    if(level == 100) {
        payload[index++] = 0x1F;
    } else {
        payload[index++] = 0x10;
    }
    payload[index++] = 0x01;
    payload[index++] = 0x1b;

	#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		// Endpoint icon
		u16 image_index = 0;
		u8 on_off_status = (level > 0)?G_ON:G_OFF;
		if(convert_light_icon_id_and_status_to_image_index(
					common_endpoint_par->icon_id, on_off_status, &image_index) == true) {
			payload[index++] = 0x00;
			payload[index++] = HI_U16(image_index);
			payload[index++] = LO_U16(image_index);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);
		}
		// Endpoint name
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 x_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &x_pos);
		if(st == true) {
			foreach(i, len) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					x_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(x_pos);
					payload[index++] = LO_U16(x_pos);
					payload[index++] = HI_U16(MEDIUM_NAME_Y_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_Y_POSITION);
					x_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
	#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);
#else
	payload[index++] = KNOB_STATUS_SEND_FRAME;
	// Layer 0, Power switch
	payload[index++] = 0;
	if(level > 0) {
		payload[index++] = HI_U16(ICON_POWER_ON);
		payload[index++] = LO_U16(ICON_POWER_ON);
	}
	else {
		payload[index++] = HI_U16(ICON_POWER_OFF);
		payload[index++] = LO_U16(ICON_POWER_OFF);
	}
	payload[index++] = 0x01;
	payload[index++] = 0x6c;
	payload[index++] = 0x00;
	payload[index++] = 0xc0;

	#if DISPLAY_NAVIGATION_EN
	if(navigation_is_active == true) {
		// Layer 1, don't have navigation
	}
	else
	#endif
	{
		// Layer 1, level frame
		if(level > 0) {
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = (u8)level-1;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
		}
	}
	// Layer 2 // Number
	payload[index++] = 0x00;
	payload[index++] = HI_U16(level+OFFSET_NUMBER);
	payload[index++] = LO_U16(level+OFFSET_NUMBER);
	payload[index++] = 0x01;
	payload[index++] = 0x17;
	if(level == 100) {
		payload[index++] = 0x00;
		payload[index++] = 0xba;
	}
	else {
		payload[index++] = 0x00;
		payload[index++] = 0xb4;
	}

	// Layer 3, symbol percent
	payload[index++] = 0x00;
	payload[index++] = HI_U16(ICON_PERCENT);
	payload[index++] = LO_U16(ICON_PERCENT);
	payload[index++] = 0x01;
	payload[index++] = 0x1d;
    if(level == 100) {
        payload[index++] = 0x00;
        payload[index++] = 0x97;
    } else if(level < 10) {
        payload[index++] = 0x00;
        payload[index++] = 0xae;
    } else {
        payload[index++] = 0x00;
        payload[index++] = 0x9e;
    }

	#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		// Endpoint icon
		u16 image_index = 0;
		u8 on_off_status = (level > 0)?G_ON:G_OFF;
		if(convert_light_icon_id_and_status_to_image_index(
					common_endpoint_par->icon_id, on_off_status, &image_index) == true) {
			payload[index++] = 0x00;
			payload[index++] = HI_U16(image_index);
			payload[index++] = LO_U16(image_index);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);
		}
		// Endpoint name
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 y_pos = 0;
		u8 st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &y_pos);
		if(st == true) {
			for(int i = len - 1; i >= 0; i--) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					y_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = HI_U16(y_pos);
					payload[index++] = LO_U16(y_pos);
					y_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
	#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&payload, index, true);
#endif
}

/**
 * @func    knob_convert_icon_id_to_icon_key
 * @brief
 * @param
 * @retval  None
 */
bool convert_curtain_icon_id_and_level_to_image_index(u8 icon_id, u8 pos, u16* image_index)
{
	if(icon_id == CURTAIN_ICON_ID_HORIZONTAL || icon_id == CURTAIN_ICON_ID_VERTICAL) {
		*image_index =   \
				OFFSET_CURTAIN + 7*(icon_id - CURTAIN_ICON_ID_START) + pos;
		return true;
	}
	return false;
}

/**
 * @func    knob_set_curtain_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_curtain_brush_image(u8 idx)
{
	DBG_KNOB_SEND_STR("\n knob_set_curtain_brush_image: ");
    curtain_par_t* curtain_par = knob_device_get_curtain_par();

#if SCREEN_TYPE  == TYPE_HORIZONTAL
    if(idx < ELE_CNT) {
    	DBG_KNOB_SEND_STR("1, ");
        u8 percent = knob_convert_curtain_level_to_percent((u8)curtain_par->level[idx]);
        u8 index = 0;
        u8 payload[200];

        payload[index++] = KNOB_STATUS_SEND_FRAME;

        // Layer 0: control button
        payload[index++] = 0;
        payload[index++] = 0;
        payload[index++] = 0xbe;
        payload[index++] = 0;
        payload[index++] = 0x45;
        payload[index++] = 0x01;
        payload[index++] = 0x18;

		#if DISPLAY_NAVIGATION_EN
		if(navigation_is_active == true) {
			// Layer 1, don't have navigation
		}
		else
		#endif
		{
			// Layer 1, level frame
			if(percent > 0) {
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = (u8)percent-1;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}
        // Layer 2, level number
        payload[index++] = 0x00;
        payload[index++] = HI_U16(percent+OFFSET_NUMBER);
        payload[index++] = LO_U16(percent+OFFSET_NUMBER);
        payload[index++] = 0x00;
        payload[index++] = 0xb2;
        payload[index++] = 0x01;
        payload[index++] = 0x76;

        // Layer 3, symbol
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_PERCENT);
        payload[index++] = LO_U16(ICON_PERCENT);

        if(percent == 100) {
            payload[index++] = 0x01;
            payload[index++] = 0x21;
        } else {
            payload[index++] = 0x01;
            payload[index++] = 0x12;
        }
        payload[index++] = 0x01;
        payload[index++] = 0x7B;

	#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		// Layer 4, symbolEndpoint icon follow level
		u16 image_index = 0;
#if ENABLE_SHOW_PRESENT_CURTAIN_LEVEL
		u8 present = knob_convert_curtain_level_to_percent((u8)curtain_par->previous_level[idx]);
		u8 pos = knob_convert_curtain_level_to_image_index((u8)present);
#else
		u8 pos = knob_convert_curtain_level_to_image_index((u8)percent);
#endif
		if(convert_curtain_icon_id_and_level_to_image_index(
					common_endpoint_par->icon_id, pos, &image_index) == true) {
			payload[index++] = 0x00;
			payload[index++] = HI_U16(image_index);
			payload[index++] = LO_U16(image_index);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);
		}
		// Layer 5, Endpoint name
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 x_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &x_pos);
		if(st == true) {
			foreach(i, len) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					x_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(x_pos);
					payload[index++] = LO_U16(x_pos);
					payload[index++] = HI_U16(MEDIUM_NAME_Y_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_Y_POSITION);
					x_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
	#endif
        knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
    }
#else
    if(idx < ELE_CNT) {
    	DBG_KNOB_SEND_STR("1, ");
        u8 percent = knob_convert_curtain_level_to_percent((u8)curtain_par->level[idx]);
        u8 index = 0;
        u8 payload[200];

        payload[index++] = KNOB_STATUS_SEND_FRAME;

        // Layer 0: control button
        payload[index++] = 0;
        payload[index++] = 0;
        payload[index++] = 0xbe;
        payload[index++] = 0x01;
        payload[index++] = 0x18;
        payload[index++] = 0;
        payload[index++] = 0x45;

		#if DISPLAY_NAVIGATION_EN
		if(navigation_is_active == true) {
			// Layer 1, don't have navigation
		}
		else
		#endif
		{
			// Layer 1, level frame
			if(percent > 0) {
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = (u8)percent-1;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}
        // Layer 2, level number
        payload[index++] = 0x00;
        payload[index++] = HI_U16(percent+OFFSET_NUMBER);
        payload[index++] = LO_U16(percent+OFFSET_NUMBER);
        payload[index++] = 0x01;
        payload[index++] = 0x76;
        if(percent == 100) {
            payload[index++] = 0x00;
            payload[index++] = 0xB4;
        } else {
            payload[index++] = 0x00;
            payload[index++] = 0xB2;
        }

        // Layer 3, symbol
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_PERCENT);
        payload[index++] = LO_U16(ICON_PERCENT);
        payload[index++] = 0x01;
        payload[index++] = 0x7B;
        if(percent == 100) {
            payload[index++] = 0x00;
            payload[index++] = 0x93;
        } else {
            payload[index++] = 0x00;
            payload[index++] = 0xa0;
        }

	#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		// Layer 4, symbolEndpoint icon follow level
		u16 image_index = 0;
#if ENABLE_SHOW_PRESENT_CURTAIN_LEVEL
		u8 present = knob_convert_curtain_level_to_percent((u8)curtain_par->previous_level[idx]);
		u8 pos = knob_convert_curtain_level_to_image_index((u8)present);
#else
		u8 pos = knob_convert_curtain_level_to_image_index((u8)percent);
#endif

		if(convert_curtain_icon_id_and_level_to_image_index(
					common_endpoint_par->icon_id, pos, &image_index) == true) {
			payload[index++] = 0x00;
			payload[index++] = HI_U16(image_index);
			payload[index++] = LO_U16(image_index);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);
		}
		// Layer 5, Endpoint name
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 y_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &y_pos);
		if(st == true) {
			for(int i = len - 1; i >= 0; i--) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					y_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = HI_U16(y_pos);
					payload[index++] = LO_U16(y_pos);
					y_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
	#endif
        knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
    }
#endif
}

/**
 * @func    knob_set_fan_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_fan_brush_image(u8 idx)
{
    u8 fan_level = knob_device_get_fan_level(idx);
#if SCREEN_TYPE  == TYPE_HORIZONTAL
    if(fan_level < FAN_LEVEL_UNKNOWN) {
        u8 payload[200];
        u8 index = 0;

        payload[index++] = KNOB_STATUS_SEND_FRAME;
        // Layer 0 - Background
        payload[index++] = 0x00;
        if(fan_level == FAN_OFF) {
			payload[index++] = HI_U16(ICON_POWER_OFF);
			payload[index++] = LO_U16(ICON_POWER_OFF);
        }
        else {
			payload[index++] = HI_U16(ICON_POWER_ON);
			payload[index++] = LO_U16(ICON_POWER_ON);
        }
        payload[index++] = 0x00;
        payload[index++] = 0xc0;
        payload[index++] = 0x01;
        payload[index++] = 0x6c;
        // Layer 1, icon fan
        u16 icon_fan = ICON_FAN_OFF;
        switch(fan_level) {
			case FAN_LEVEL_1:
				icon_fan = ICON_FAN_LEVEL_1;
				break;

			case FAN_LEVEL_2:
				icon_fan = ICON_FAN_LEVEL_2;
				break;

			case FAN_LEVEL_3:
				icon_fan = ICON_FAN_LEVEL_3;
				break;

			case FAN_LEVEL_4:
				icon_fan = ICON_FAN_LEVEL_4;
				break;
        }
        payload[index++] = 0x00;
        payload[index++] = HI_U16(icon_fan);
        payload[index++] = LO_U16(icon_fan);
    	payload[index++] = HI_U16(ICON_X_POSITION);
    	payload[index++] = LO_U16(ICON_X_POSITION);
    	payload[index++] = HI_U16(ICON_Y_POSITION);
    	payload[index++] = LO_U16(ICON_Y_POSITION);
        // Layer 2, control panel
        u16 icon_panel = fan_level + ICON_FAN_PANEL_START;
        payload[index++] = 0x00;
        payload[index++] = HI_U16(icon_panel);
        payload[index++] = LO_U16(icon_panel);
        payload[index++] = 0x00;
        payload[index++] = 0x32;
        payload[index++] = 0x01;
        payload[index++] = 0x17;
		#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 x_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &x_pos);
		if(st == true) {
			foreach(i, len) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					x_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(x_pos);
					payload[index++] = LO_U16(x_pos);
					payload[index++] = HI_U16(MEDIUM_NAME_Y_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_Y_POSITION);
					x_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
		#endif
        knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
    }
#else
    if(fan_level < FAN_LEVEL_UNKNOWN) {
        u8 payload[200];
        u8 index = 0;

        payload[index++] = KNOB_STATUS_SEND_FRAME;
        // Layer 0 - Background
        payload[index++] = 0x00;
        if(fan_level == FAN_OFF) {
			payload[index++] = HI_U16(ICON_POWER_OFF);
			payload[index++] = LO_U16(ICON_POWER_OFF);
        }
        else {
			payload[index++] = HI_U16(ICON_POWER_ON);
			payload[index++] = LO_U16(ICON_POWER_ON);
        }
        payload[index++] = 0x01;
        payload[index++] = 0x6c;
        payload[index++] = 0x00;
        payload[index++] = 0xc0;

        // Layer 1, icon fan
        u16 icon_fan = ICON_FAN_OFF;
        switch(fan_level) {
			case FAN_LEVEL_1:
				icon_fan = ICON_FAN_LEVEL_1;
				break;

			case FAN_LEVEL_2:
				icon_fan = ICON_FAN_LEVEL_2;
				break;

			case FAN_LEVEL_3:
				icon_fan = ICON_FAN_LEVEL_3;
				break;

			case FAN_LEVEL_4:
				icon_fan = ICON_FAN_LEVEL_4;
				break;
        }
        payload[index++] = 0x00;
        payload[index++] = HI_U16(icon_fan);
        payload[index++] = LO_U16(icon_fan);
    	payload[index++] = HI_U16(ICON_X_POSITION);
    	payload[index++] = LO_U16(ICON_X_POSITION);
    	payload[index++] = HI_U16(ICON_Y_POSITION);
    	payload[index++] = LO_U16(ICON_Y_POSITION);

        // Layer 2, control panel
        u16 icon_panel = fan_level + ICON_FAN_PANEL_START;
        payload[index++] = 0x00;
        payload[index++] = HI_U16(icon_panel);
        payload[index++] = LO_U16(icon_panel);
        payload[index++] = 0x01;
        payload[index++] = 0x17;
        payload[index++] = 0x00;
        payload[index++] = 0x32;

		#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 y_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &y_pos);
		if(st == true) {
			for(int i = len - 1; i >= 0; i--) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					y_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = HI_U16(y_pos);
					payload[index++] = LO_U16(y_pos);
					y_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
		#endif
        knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
    }
#endif
}

/**
 * @func    knob_set_air_conditioner_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_air_conditioner_brush_image(u8 idx)
{
    u8 payload[200];
    u8 index = 0;
	air_par_t* p_air_par = knob_device_get_air_par();
	u8 display_mode = p_air_par->display_mode[idx];
	u16 air_icon = (p_air_par->on_off[idx] == G_OFF)?ICON_AC_OFF:ICON_AC_ON;

#if SCREEN_TYPE  == TYPE_HORIZONTAL
	if(display_mode == DISPLAY_AIR_MAIN) {
		if(p_air_par->on_off[idx] == G_OFF) {
			// Layer 0, background
			payload[index++] = KNOB_STATUS_SEND_FRAME;

			// Layer 0, power switch
			payload[index++] = 0;
			payload[index++] = HI_U16(ICON_POWER_OFF);
			payload[index++] = LO_U16(ICON_POWER_OFF);
			payload[index++] = 0;
			payload[index++] = 0xc0;
			payload[index++] = 0x01;
			payload[index++] = 0x6c;

			// icon
			payload[index++] = 0x00;
			payload[index++] = HI_U16(ICON_AC_OFF);
			payload[index++] = LO_U16(ICON_AC_OFF);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);

			// text
			payload[index++] = 0x00;
			payload[index++] = HI_U16(ICON_DOUBLE_UNDERSCORE);
			payload[index++] = LO_U16(ICON_DOUBLE_UNDERSCORE);
			payload[index++] = 0x00;
			payload[index++] = 0xCA;
			payload[index++] = 0x01;
			payload[index++] = 0x15;

			#if DISPLAY_NAVIGATION_EN && 0
			// Navigation
			payload[index++] = 0x00;
			payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET);
			payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET);
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			#endif
		}
		else {

			u8 decimal = (u8)(p_air_par->temp[idx]%10);
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			// Layer 0, Power switch
			payload[index++] = 0;
			payload[index++] = HI_U16(ICON_POWER_ON);
			payload[index++] = LO_U16(ICON_POWER_ON);
			payload[index++] = 0;
			payload[index++] = 0xc0;
			payload[index++] = 0x01;
			payload[index++] = 0x6c;

			if(p_air_par->mode[idx] == AIR_MODE_AUTO
					|| p_air_par->mode[idx] == AIR_MODE_FAN
							|| p_air_par->mode[idx] == AIR_MODE_DRY) {
				// Point symbol
				payload[index++] = 0;
				payload[index++] = HI_U16(0x03d5);
				payload[index++] = LO_U16(0x03d5);
				payload[index++] = HI_U16(0x00ce);
				payload[index++] = LO_U16(0x00ce);
				payload[index++] = HI_U16(0x0105);
				payload[index++] = LO_U16(0x0105);

				payload[index++] = 0;
				payload[index++] = HI_U16(0x03d5);
				payload[index++] = LO_U16(0x03d5);
				payload[index++] = HI_U16(0x00ee);
				payload[index++] = LO_U16(0x00ee);
				payload[index++] = HI_U16(0x0105);
				payload[index++] = LO_U16(0x0105);

				#if DISPLAY_NAVIGATION_EN
				payload[index++] = 0x00;
				payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET);
				payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET);
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				#endif
			}
			else {
				// Layer1, level
				u8 percent = element_convert_air_temperature_to_percent(idx);
				#if DISPLAY_NAVIGATION_EN
				if(navigation_is_active == true) {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET);
					payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET);
					payload[index++] = 0x00;
					payload[index++] = 0x00;
					payload[index++] = 0x00;
					payload[index++] = 0x00;
				}
				else
				#endif
				{
					if(percent != 0) {
						payload[index++] = 0x00;
						payload[index++] = 0x00;
						payload[index++] = percent-1;
						payload[index++] = 0x00;
						payload[index++] = 0x00;
						payload[index++] = 0x00;
						payload[index++] = 0x00;
					}
				}
				if(decimal == 0) {
					// Layer2, Temperature number
					payload[index++] = 0x00;
					payload[index++] = HI_U16(p_air_par->temp[idx]/10+OFFSET_NUMBER);
					payload[index++] = LO_U16(p_air_par->temp[idx]/10+OFFSET_NUMBER);
					payload[index++] = 0x00;
					payload[index++] = 0xb0;
					payload[index++] = 0x01;
					payload[index++] = 0x17;

					// C
					payload[index++] = 0x00;
					payload[index++] = HI_U16(ICON_SYMBOL_CELCIUS);
					payload[index++] = LO_U16(ICON_SYMBOL_CELCIUS);
					payload[index++] = 0x01;
					payload[index++] = 0x10;
					payload[index++] = 0x01;
					payload[index++] = 0x1b;
				}
				else {
					// Layer2, Temperature number
					payload[index++] = 0x00;
					payload[index++] = HI_U16(p_air_par->temp[idx]/10+OFFSET_NUMBER);
					payload[index++] = LO_U16(p_air_par->temp[idx]/10+OFFSET_NUMBER);
					payload[index++] = 0x00;
					payload[index++] = 0x86;
					payload[index++] = 0x01;
					payload[index++] = 0x17;

					// Point symbol
					payload[index++] = 0x00;
					payload[index++] = 0x03;
					payload[index++] = 0xd5;
					payload[index++] = 0x00;
					payload[index++] = 0xde;
					payload[index++] = 0x01;
					payload[index++] = 0x17;

					// Decimal
					payload[index++] = 0x00;
					payload[index++] = HI_U16(decimal+OFFSET_NUMBER);
					payload[index++] = LO_U16(decimal+OFFSET_NUMBER);
					payload[index++] = 0x00;
					payload[index++] = 0xd2;
					payload[index++] = 0x01;
					payload[index++] = 0x17;

					// C
					payload[index++] = 0x00;
					payload[index++] = HI_U16(ICON_SYMBOL_CELCIUS);
					payload[index++] = LO_U16(ICON_SYMBOL_CELCIUS);
					payload[index++] = 0x01;
					payload[index++] = 0x20;
					payload[index++] = 0x01;
					payload[index++] = 0x1b;
				}
			}
			// icon
			u16 icon_pos = ICON_AC_ON;
			payload[index++] = 0x00;
			payload[index++] = HI_U16(icon_pos);
			payload[index++] = LO_U16(icon_pos);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);
		}
		if(p_air_par->on_off[idx] == G_ON) {
			// Main Mode
			payload[index++] = 0x00;
			payload[index++] = HI_U16(ICON_AC_MAIN_MODE_START + p_air_par->mode[idx]);
			payload[index++] = LO_U16(ICON_AC_MAIN_MODE_START + p_air_par->mode[idx]);
			payload[index++] = 0x00;
			payload[index++] = 0x2A;
			payload[index++] = 0x01;
			payload[index++] = 0x17;
			// Main Fan
			payload[index++] = 0x00;
			payload[index++] = HI_U16(ICON_AC_MAIN_FAN_START + p_air_par->fan[idx]);
			payload[index++] = LO_U16(ICON_AC_MAIN_FAN_START + p_air_par->fan[idx]);
			payload[index++] = 0x01;
			payload[index++] = 0x59;
			payload[index++] = 0x01;
			payload[index++] = 0x17;
		}
	}
	else if(display_mode == DISPLAY_AIR_MODE) {

		// Layer 0, background
		payload[index++] = KNOB_STATUS_SEND_FRAME;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(air_icon);
		payload[index++] = LO_U16(air_icon);
		payload[index++] = 0x00;
		payload[index++] = 0x85;
		payload[index++] = 0x00;
		payload[index++] = 0x0C;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_MODE);
		payload[index++] = LO_U16(ICON_AC_MODE);
		payload[index++] = 0x00;
		payload[index++] = 0x9c;
		payload[index++] = 0x01;
		payload[index++] = 0x75;

		// selection icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_MODE_START + p_air_par->mode[idx]);
		payload[index++] = LO_U16(ICON_AC_MODE_START + p_air_par->mode[idx]);
		payload[index++] = 0x00;
		payload[index++] = 0x49;
		payload[index++] = 0x01;
		payload[index++] = 0x18;

		// Navigation
		#if DISPLAY_NAVIGATION_EN
		payload[index++] = 0x00;
		payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET + 1);
		payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET + 1);
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		#endif
	}
	else if(display_mode == DISPLAY_AIR_FAN) {
		// Layer 0, background
		payload[index++] = KNOB_STATUS_SEND_FRAME;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(air_icon);
		payload[index++] = LO_U16(air_icon);
		payload[index++] = 0x00;
		payload[index++] = 0x85;
		payload[index++] = 0x00;
		payload[index++] = 0x0C;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_FAN );
		payload[index++] = LO_U16(ICON_AC_FAN );
		payload[index++] = 0x00;
		payload[index++] = 0xac;
		payload[index++] = 0x01;
		payload[index++] = 0x75;

		// selection icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_FAN_START + p_air_par->fan[idx]);
		payload[index++] = LO_U16(ICON_AC_FAN_START + p_air_par->fan[idx]);
		payload[index++] = 0x00;
		payload[index++] = 0x49;
		payload[index++] = 0x01;
		payload[index++] = 0x18;

		// Navigation
		#if DISPLAY_NAVIGATION_EN
		payload[index++] = 0x00;
		payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET + 2);
		payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET + 2);
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		#endif

	}
	else if(display_mode == DISPLAY_AIR_SWING) {
		// Layer 0, background
		payload[index++] = KNOB_STATUS_SEND_FRAME;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(air_icon);
		payload[index++] = LO_U16(air_icon);
		payload[index++] = 0x00;
		payload[index++] = 0x85;
		payload[index++] = 0x00;
		payload[index++] = 0x0C;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_SWING);
		payload[index++] = LO_U16(ICON_AC_SWING);
		payload[index++] = 0x00;
		payload[index++] = 0x97;
		payload[index++] = 0x01;
		payload[index++] = 0x75;

		// selection icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_SWING_START + p_air_par->swing[idx]);
		payload[index++] = LO_U16(ICON_AC_SWING_START + p_air_par->swing[idx]);
		payload[index++] = 0x00;
		payload[index++] = 0x49;
		payload[index++] = 0x01;
		payload[index++] = 0x18;

		// Navigation
		#if DISPLAY_NAVIGATION_EN
		payload[index++] = 0x00;
		payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET + 3);
		payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET + 3);
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		#endif
	}
	#if CHANGE_DEVICE_NAME_EN
	common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
	u8 name[DEVICE_NAME_MAX_LEN];
	u8 len = 0;
	u16 width;
	u16 x_pos = 0;
	bool st = knob_get_name_infor_with_check_len(  \
			TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &x_pos);
	if(st == true) {
		foreach(i, len) {
			u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
			if(name[i] == SYMBOL_BIG_SPACE) {
				x_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
			}
			else {
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = HI_U16(x_pos);
				payload[index++] = LO_U16(x_pos);
				payload[index++] = HI_U16(MEDIUM_NAME_Y_POSITION);
				payload[index++] = LO_U16(MEDIUM_NAME_Y_POSITION);
				x_pos += text_symbol_medium_size[name[i]];
			}
		}
	}
	#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
#else
	if(display_mode == DISPLAY_AIR_MAIN) {
		if(p_air_par->on_off[idx] == G_OFF) {
			// Layer 0, background
			payload[index++] = KNOB_STATUS_SEND_FRAME;

			// Layer 0, power switch
			payload[index++] = 0;
			payload[index++] = HI_U16(ICON_POWER_OFF);
			payload[index++] = LO_U16(ICON_POWER_OFF);
			payload[index++] = 0x01;
			payload[index++] = 0x6c;
			payload[index++] = 0;
			payload[index++] = 0xc0;

			// icon
			payload[index++] = 0x00;
			payload[index++] = HI_U16(ICON_AC_OFF);
			payload[index++] = LO_U16(ICON_AC_OFF);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);

			// text
			payload[index++] = 0x00;
			payload[index++] = HI_U16(ICON_DOUBLE_UNDERSCORE);
			payload[index++] = LO_U16(ICON_DOUBLE_UNDERSCORE);
			payload[index++] = 0x01;
			payload[index++] = 0x15;
			payload[index++] = 0x00;
			payload[index++] = 0xCA;

			#if DISPLAY_NAVIGATION_EN && 0
			// Navigation
			payload[index++] = 0x00;
			payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET);
			payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET);
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			payload[index++] = 0x00;
			#endif
		}
		else {
			u8 decimal = (u8)(p_air_par->temp[idx]%10);
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			// Layer 0, Power switch
			payload[index++] = 0;
			payload[index++] = HI_U16(ICON_POWER_ON);
			payload[index++] = LO_U16(ICON_POWER_ON);
			payload[index++] = 0x01;
			payload[index++] = 0x6c;
			payload[index++] = 0;
			payload[index++] = 0xc0;

			if(p_air_par->mode[idx] == AIR_MODE_AUTO
					|| p_air_par->mode[idx] == AIR_MODE_FAN
							|| p_air_par->mode[idx] == AIR_MODE_DRY) {
				// Point symbol
				payload[index++] = 0;
				payload[index++] = HI_U16(0x03d5);
				payload[index++] = LO_U16(0x03d5);
				payload[index++] = HI_U16(0x0105);
				payload[index++] = LO_U16(0x0105);
				payload[index++] = HI_U16(0x00ce);
				payload[index++] = LO_U16(0x00ce);

				payload[index++] = 0;
				payload[index++] = HI_U16(0x03d5);
				payload[index++] = LO_U16(0x03d5);
				payload[index++] = HI_U16(0x0105);
				payload[index++] = LO_U16(0x0105);
				payload[index++] = HI_U16(0x00ee);
				payload[index++] = LO_U16(0x00ee);



				#if DISPLAY_NAVIGATION_EN
				payload[index++] = 0x00;
				payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET);
				payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET);
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				#endif
			}
			else {
				// Layer1, level
				u8 percent = element_convert_air_temperature_to_percent(idx);
				#if DISPLAY_NAVIGATION_EN
				if(navigation_is_active == true) {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET);
					payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET);
					payload[index++] = 0x00;
					payload[index++] = 0x00;
					payload[index++] = 0x00;
					payload[index++] = 0x00;
				}
				else
				#endif
				{
					if(percent != 0) {
						payload[index++] = 0x00;
						payload[index++] = 0x00;
						payload[index++] = percent-1;
						payload[index++] = 0x00;
						payload[index++] = 0x00;
						payload[index++] = 0x00;
						payload[index++] = 0x00;
					}
				}
				if(decimal == 0) {
					// Layer2, Temperature number
					payload[index++] = 0x00;
					payload[index++] = HI_U16(p_air_par->temp[idx]/10+OFFSET_NUMBER);
					payload[index++] = LO_U16(p_air_par->temp[idx]/10+OFFSET_NUMBER);
					payload[index++] = 0x01;
					payload[index++] = 0x17;
					payload[index++] = 0x00;
					payload[index++] = 0xb0;

					// C
					payload[index++] = 0x00;
					payload[index++] = HI_U16(ICON_SYMBOL_CELCIUS);
					payload[index++] = LO_U16(ICON_SYMBOL_CELCIUS);
					payload[index++] = 0x01;
					payload[index++] = 0x1c;
					payload[index++] = 0x00;
					payload[index++] = 0x96;
				}
				else {
					// Layer2, Temperature number
					payload[index++] = 0x00;
					payload[index++] = HI_U16(p_air_par->temp[idx]/10+OFFSET_NUMBER);
					payload[index++] = LO_U16(p_air_par->temp[idx]/10+OFFSET_NUMBER);
					payload[index++] = 0x01;
					payload[index++] = 0x17;
					payload[index++] = 0x00;
					payload[index++] = 0xd2;

					// Point symbol
					payload[index++] = 0x00;
					payload[index++] = 0x03;
					payload[index++] = 0xd5;
					payload[index++] = 0x01;
					payload[index++] = 0x17;
					payload[index++] = 0x00;
					payload[index++] = 0xd0;

					// Decimal
					payload[index++] = 0x00;
					payload[index++] = HI_U16(decimal+OFFSET_NUMBER);
					payload[index++] = LO_U16(decimal+OFFSET_NUMBER);
					payload[index++] = 0x01;
					payload[index++] = 0x17;
					payload[index++] = 0x00;
					payload[index++] = 0x86;

					// C
					payload[index++] = 0x00;
					payload[index++] = HI_U16(ICON_SYMBOL_CELCIUS);
					payload[index++] = LO_U16(ICON_SYMBOL_CELCIUS);
					payload[index++] = 0x01;
					payload[index++] = 0x1c;
					payload[index++] = 0x00;
					payload[index++] = 0x85;
				}
			}
			// icon
			u16 icon_pos = ICON_AC_ON;
			payload[index++] = 0x00;
			payload[index++] = HI_U16(icon_pos);
			payload[index++] = LO_U16(icon_pos);
			payload[index++] = HI_U16(ICON_X_POSITION);
			payload[index++] = LO_U16(ICON_X_POSITION);
			payload[index++] = HI_U16(ICON_Y_POSITION);
			payload[index++] = LO_U16(ICON_Y_POSITION);
		}
		if(p_air_par->on_off[idx] == G_ON) {
			// Main Mode
			payload[index++] = 0x00;
			payload[index++] = HI_U16(ICON_AC_MAIN_MODE_START + p_air_par->mode[idx]);
			payload[index++] = LO_U16(ICON_AC_MAIN_MODE_START + p_air_par->mode[idx]);
			payload[index++] = 0x01;
			payload[index++] = 0x17;
			payload[index++] = 0x01;
			payload[index++] = 0x65;

			// Main Fan
			payload[index++] = 0x00;
			payload[index++] = HI_U16(ICON_AC_MAIN_FAN_START + p_air_par->fan[idx]);
			payload[index++] = LO_U16(ICON_AC_MAIN_FAN_START + p_air_par->fan[idx]);
			payload[index++] = 0x01;
			payload[index++] = 0x10;
			payload[index++] = 0x00;
			payload[index++] = 0x2A;
		}

	}
	else if(display_mode == DISPLAY_AIR_MODE) {

		// Layer 0, background
		payload[index++] = KNOB_STATUS_SEND_FRAME;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(air_icon);
		payload[index++] = LO_U16(air_icon);
		payload[index++] = 0x00;
		payload[index++] = 0x0C;
		payload[index++] = 0x00;
		payload[index++] = 0x85;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_MODE);
		payload[index++] = LO_U16(ICON_AC_MODE);
		payload[index++] = 0x01;
		payload[index++] = 0x75;
		payload[index++] = 0x00;
		payload[index++] = 0x9c;

		// selection icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_MODE_START + p_air_par->mode[idx]);
		payload[index++] = LO_U16(ICON_AC_MODE_START + p_air_par->mode[idx]);
		payload[index++] = 0x01;
		payload[index++] = 0x18;
		payload[index++] = 0x00;
		payload[index++] = 0x49;

		// Navigation
		#if DISPLAY_NAVIGATION_EN
		payload[index++] = 0x00;
		payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET + 1);
		payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET + 1);
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		#endif
	}
	else if(display_mode == DISPLAY_AIR_FAN) {
		// Layer 0, background
		payload[index++] = KNOB_STATUS_SEND_FRAME;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(air_icon);
		payload[index++] = LO_U16(air_icon);
		payload[index++] = 0x00;
		payload[index++] = 0x0C;
		payload[index++] = 0x00;
		payload[index++] = 0x85;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_FAN );
		payload[index++] = LO_U16(ICON_AC_FAN );
		payload[index++] = 0x01;
		payload[index++] = 0x75;
		payload[index++] = 0x00;
		payload[index++] = 0xac;

		// selection icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_FAN_START + p_air_par->fan[idx]);
		payload[index++] = LO_U16(ICON_AC_FAN_START + p_air_par->fan[idx]);
		payload[index++] = 0x01;
		payload[index++] = 0x18;
		payload[index++] = 0x00;
		payload[index++] = 0x49;

		// Navigation
		#if DISPLAY_NAVIGATION_EN
		payload[index++] = 0x00;
		payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET + 2);
		payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET + 2);
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		#endif
	}
	else if(display_mode == DISPLAY_AIR_SWING) {
		// Layer 0, background
		payload[index++] = KNOB_STATUS_SEND_FRAME;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(air_icon);
		payload[index++] = LO_U16(air_icon);
		payload[index++] = 0x00;
		payload[index++] = 0x0C;
		payload[index++] = 0x00;
		payload[index++] = 0x85;

		// icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_SWING);
		payload[index++] = LO_U16(ICON_AC_SWING);
		payload[index++] = 0x01;
		payload[index++] = 0x75;
		payload[index++] = 0x00;
		payload[index++] = 0x97;

		// selection icon
		payload[index++] = 0x00;
		payload[index++] = HI_U16(ICON_AC_SWING_START + p_air_par->swing[idx]);
		payload[index++] = LO_U16(ICON_AC_SWING_START + p_air_par->swing[idx]);
		payload[index++] = 0x01;
		payload[index++] = 0x18;
		payload[index++] = 0x00;
		payload[index++] = 0x49;

		// Navigation
		#if DISPLAY_NAVIGATION_EN
		payload[index++] = 0x00;
		payload[index++] = HI_U16(NAVIGATION_AC_IMAGE_OFFSET + 3);
		payload[index++] = LO_U16(NAVIGATION_AC_IMAGE_OFFSET + 3);
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		payload[index++] = 0x00;
		#endif
	}
	#if CHANGE_DEVICE_NAME_EN
	common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
	u8 name[DEVICE_NAME_MAX_LEN];
	u8 len = 0;
	u16 width;
	u16 y_pos = 0;
	bool st = knob_get_name_infor_with_check_len(  \
			TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &y_pos);
	if(st == true) {
		for(int i = len - 1; i >= 0; i--) {
			u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
			if(name[i] == SYMBOL_BIG_SPACE) {
				y_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
			}
			else {
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = HI_U16(MEDIUM_NAME_X_POSITION);
				payload[index++] = LO_U16(MEDIUM_NAME_X_POSITION);
				payload[index++] = HI_U16(y_pos);
				payload[index++] = LO_U16(y_pos);
				y_pos += text_symbol_medium_size[name[i]];
			}
		}
	}
	#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
#endif
}

/**
 * @func    knob_set_audio_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_audio_brush_image(u8 idx)
{
    audio_par_t *p_audio_par = knob_device_get_audio_par();

#if SCREEN_TYPE  == TYPE_HORIZONTAL
    if(p_audio_par->state[idx] != AUDIO_ST_UNKNOWN) {
        DBG_KNOB_SEND_STR("\n ### knob_set_audio_brush_image");

        u8 payload[200];
        uint8_t index = 0;

        payload[index++] = KNOB_STATUS_SEND_FRAME;
        // Layer 0 - Music
        payload[index++] = 0x00;
        if(p_audio_par->state[idx] == AUDIO_PAUSE) {
            payload[index++] = HI_U16(ICON_MUSIC_STOP);
            payload[index++] = LO_U16(ICON_MUSIC_STOP);
        }
        else {
            payload[index++] = HI_U16(ICON_MUSIC_PLAY);
            payload[index++] = LO_U16(ICON_MUSIC_PLAY);
        }
    	payload[index++] = HI_U16(ICON_X_POSITION);
    	payload[index++] = LO_U16(ICON_X_POSITION);
    	payload[index++] = HI_U16(ICON_Y_POSITION);
    	payload[index++] = LO_U16(ICON_Y_POSITION);

        // Layer1 - Pause/Play
        payload[index++] = 0x00;
        if(p_audio_par->state[idx] == AUDIO_PAUSE) {
            payload[index++] = HI_U16(ICON_PAUSE);
            payload[index++] = LO_U16(ICON_PAUSE);
        }
        else {
            payload[index++] = HI_U16(ICON_PLAY);
            payload[index++] = LO_U16(ICON_PLAY);
        }
        payload[index++] = 0x00;
        payload[index++] = 0xB7;
        payload[index++] = 0x01;
        payload[index++] = 0x0e;

        // Layer 2 - Next
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_NEXT);
        payload[index++] = LO_U16(ICON_NEXT);
        payload[index++] = 0x01;
        payload[index++] = 0x39;
        payload[index++] = 0x01;
        payload[index++] = 0x0e;

        // Layer 3 - Previous
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_PREVIOUS);
        payload[index++] = LO_U16(ICON_PREVIOUS);
        payload[index++] = 0x00;
        payload[index++] = 0x35;
        payload[index++] = 0x01;
        payload[index++] = 0x0e;

        u8 volume = p_audio_par->volume[idx];
        if(p_audio_par->volume[idx] > AUDIO_VOLUME_MAX)  {
            volume = AUDIO_VOLUME_MAX;
        }

		#if DISPLAY_NAVIGATION_EN
        // Layer 4 - Navigation
		if(navigation_is_active == true) {
			// Layer 1, don't have navigation
		}
		else
		#endif
		{
			// Layer 4 - Volume (level cycle)
			if(volume > 0) {
				u8 image_index;

				image_index = volume - 1;
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}
        // Layer 5 - Percent
        payload[index++] = 0x00;
        payload[index++] = HI_U16(volume+OFFSET_NUMBER);
        payload[index++] = LO_U16(volume+OFFSET_NUMBER);
        payload[index++] = 0x00;
        payload[index++] = 0xb0;
        payload[index++] = 0x01;
        payload[index++] = 0x76;

        // Layer 4, symbol
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_PERCENT);
        payload[index++] = LO_U16(ICON_PERCENT);
        if(volume == AUDIO_VOLUME_MAX) {
            payload[index++] = 0x01;
            payload[index++] = 0x1f;
        }
        else {
            payload[index++] = 0x01;
            payload[index++] = 0x10;
        }
        payload[index++] = 0x01;
        payload[index++] = 0x79;
		#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 x_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &x_pos);
		if(st == true) {
			foreach(i, len) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					x_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(x_pos);
					payload[index++] = LO_U16(x_pos);
					payload[index++] = HI_U16(MEDIUM_NAME_Y_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_Y_POSITION);
					x_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
		#endif
        knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
    }
#else
    if(p_audio_par->state[idx] != AUDIO_ST_UNKNOWN) {
        DBG_KNOB_SEND_STR("\n ### knob_set_audio_brush_image");

        u8 payload[200];
        uint8_t index = 0;

        payload[index++] = KNOB_STATUS_SEND_FRAME;
        // Layer 0 - Music
        payload[index++] = 0x00;
        if(p_audio_par->state[idx] == AUDIO_PAUSE) {
            payload[index++] = HI_U16(ICON_MUSIC_STOP);
            payload[index++] = LO_U16(ICON_MUSIC_STOP);
        }
        else {
            payload[index++] = HI_U16(ICON_MUSIC_PLAY);
            payload[index++] = LO_U16(ICON_MUSIC_PLAY);
        }
    	payload[index++] = HI_U16(ICON_X_POSITION);
    	payload[index++] = LO_U16(ICON_X_POSITION);
    	payload[index++] = HI_U16(ICON_Y_POSITION);
    	payload[index++] = LO_U16(ICON_Y_POSITION);

        // Layer1 - Pause/Play
        payload[index++] = 0x00;
        if(p_audio_par->state[idx] == AUDIO_PAUSE) {
            payload[index++] = HI_U16(ICON_PAUSE);
            payload[index++] = LO_U16(ICON_PAUSE);
        }
        else {
            payload[index++] = HI_U16(ICON_PLAY);
            payload[index++] = LO_U16(ICON_PLAY);
        }
        payload[index++] = 0x01;
        payload[index++] = 0x0e;
        payload[index++] = 0x00;
        payload[index++] = 0xB7;

        // Layer 2 - Next
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_NEXT);
        payload[index++] = LO_U16(ICON_NEXT);
        payload[index++] = 0x01;
        payload[index++] = 0x0e;
        payload[index++] = 0x00;
        payload[index++] = 0x35;

        // Layer 3 - Previous
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_PREVIOUS);
        payload[index++] = LO_U16(ICON_PREVIOUS);
        payload[index++] = 0x01;
        payload[index++] = 0x0e;
        payload[index++] = 0x01;
        payload[index++] = 0x39;

        u8 volume = p_audio_par->volume[idx];
        if(p_audio_par->volume[idx] > AUDIO_VOLUME_MAX)  {
            volume = AUDIO_VOLUME_MAX;
        }

		#if DISPLAY_NAVIGATION_EN
        // Layer 4 - Navigation
		if(navigation_is_active == true) {
			// Layer 1, don't have navigation
		}
		else
		#endif
		{
			// Layer 4 - Volume (level cycle)
			if(volume > 0) {
				u8 image_index;

				image_index = volume - 1;
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}
        // Layer 5 - Percent
        payload[index++] = 0x00;
        payload[index++] = HI_U16(volume+OFFSET_NUMBER);
        payload[index++] = LO_U16(volume+OFFSET_NUMBER);
        payload[index++] = 0x01;
        payload[index++] = 0x76;
        if(volume == AUDIO_VOLUME_MAX) {
            payload[index++] = 0x00;
            payload[index++] = 0xB4;
        } else {
            payload[index++] = 0x00;
            payload[index++] = 0xB2;
        }

        // Layer 4, symbol
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_PERCENT);
        payload[index++] = LO_U16(ICON_PERCENT);
        payload[index++] = 0x01;
        payload[index++] = 0x7B;
        if(volume == AUDIO_VOLUME_MAX) {
            payload[index++] = 0x00;
            payload[index++] = 0x93;
        } else {
            payload[index++] = 0x00;
            payload[index++] = 0xa0;
        }
		#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 y_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &y_pos);
		if(st == true) {
			for(int i = len - 1; i >= 0; i--) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					y_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = HI_U16(y_pos);
					payload[index++] = LO_U16(y_pos);
					y_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
		#endif
        knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
    }
#endif
}

/**
 * @func    knob_audio_brush_image_delay
 * @brief
 * @param
 * @retval  None
 */
static void knob_audio_brush_image_delay(void)
{
	u8 idx = element_get_current_index();
	if(idx < ELE_CNT) {
		if(get_endpoint_type_follow_model_index(idx) == TYPE_AUDIO) {
			knob_set_audio_brush_image(idx);
		}
	}
    CycleFunc_remove(knob_audio_brush_image_delay);
}

/**
 * @func    knob_set_audio_brush_image
 * @brief
 * @param
 * @retval  None
 */
void knob_set_audio_brush_image_with_active_button(AudioButton_Enum active_button)
{
    audio_par_t *p_audio_par = knob_device_get_audio_par();
    u8 idx = element_get_current_index();

#if SCREEN_TYPE  == TYPE_HORIZONTAL
    if(p_audio_par->state[idx] != AUDIO_ST_UNKNOWN) {
        DBG_KNOB_SEND_STR("\n ### knob_set_audio_brush_image");

        u8 payload[200];
        uint8_t index = 0;

        payload[index++] = KNOB_STATUS_SEND_FRAME;
        // Layer 0 - Music
        payload[index++] = 0x00;
        if(p_audio_par->state[idx] == AUDIO_PAUSE) {
            payload[index++] = HI_U16(ICON_MUSIC_STOP);
            payload[index++] = LO_U16(ICON_MUSIC_STOP);
        }
        else {
            payload[index++] = HI_U16(ICON_MUSIC_PLAY);
            payload[index++] = LO_U16(ICON_MUSIC_PLAY);
        }
    	payload[index++] = HI_U16(ICON_X_POSITION);
    	payload[index++] = LO_U16(ICON_X_POSITION);
    	payload[index++] = HI_U16(ICON_Y_POSITION);
    	payload[index++] = LO_U16(ICON_Y_POSITION);

        // Layer1 - Pause/Play
        payload[index++] = 0x00;
        if(p_audio_par->state[idx] == AUDIO_PAUSE) {
        	if(active_button == PAUSE_BUTTON) {
				payload[index++] = HI_U16(ICON_PAUSE_ACTIVE);
				payload[index++] = LO_U16(ICON_PAUSE_ACTIVE);
        	}
        	else {
				payload[index++] = HI_U16(ICON_PAUSE);
				payload[index++] = LO_U16(ICON_PAUSE);
        	}
        }
        else {
        	if(active_button == PLAY_BUTTON) {
				payload[index++] = HI_U16(ICON_PLAY_ACTIVE);
				payload[index++] = LO_U16(ICON_PLAY_ACTIVE);
        	}
        	else {
				payload[index++] = HI_U16(ICON_PLAY);
				payload[index++] = LO_U16(ICON_PLAY);
        	}
        }
        payload[index++] = 0x00;
        payload[index++] = 0xB7;
        payload[index++] = 0x01;
        payload[index++] = 0x0e;

        // Layer 2 - Next
        payload[index++] = 0x00;
        if(active_button == NEXT_BUTTON) {
			payload[index++] = HI_U16(ICON_NEXT_ACTIVE);
			payload[index++] = LO_U16(ICON_NEXT_ACTIVE);
        }
        else {
			payload[index++] = HI_U16(ICON_NEXT);
			payload[index++] = LO_U16(ICON_NEXT);
        }
        payload[index++] = 0x01;
        payload[index++] = 0x39;
        payload[index++] = 0x01;
        payload[index++] = 0x0e;

        // Layer 3 - Previous
        payload[index++] = 0x00;
        if(active_button == PREVIOUS_BUTTON) {
			payload[index++] = HI_U16(ICON_PREVIOUS_ACTIVE);
			payload[index++] = LO_U16(ICON_PREVIOUS_ACTIVE);
        }
        else {
			payload[index++] = HI_U16(ICON_PREVIOUS);
			payload[index++] = LO_U16(ICON_PREVIOUS);
        }
        payload[index++] = 0x00;
        payload[index++] = 0x35;
        payload[index++] = 0x01;
        payload[index++] = 0x0e;

        u8 volume = p_audio_par->volume[idx];
        if(p_audio_par->volume[idx] > AUDIO_VOLUME_MAX)  {
            volume = AUDIO_VOLUME_MAX;
        }
		#if DISPLAY_NAVIGATION_EN
		// Layer 4 - Navigation
		if(navigation_is_active == true) {
			// Layer 1, don't have navigation
		}
		else
		#endif
		{
			// Layer 4 - Volume (level cycle)
			if(volume > 0) {
				u8 image_index;

				image_index = volume - 1;
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}
        // Layer 5 - Percent
        payload[index++] = 0x00;
        payload[index++] = HI_U16(volume+OFFSET_NUMBER);
        payload[index++] = LO_U16(volume+OFFSET_NUMBER);
        payload[index++] = 0x00;
        payload[index++] = 0xb0;
        payload[index++] = 0x01;
        payload[index++] = 0x76;

        // Layer 4, symbol
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_PERCENT);
        payload[index++] = LO_U16(ICON_PERCENT);
        if(volume == AUDIO_VOLUME_MAX) {
            payload[index++] = 0x01;
            payload[index++] = 0x1f;
        }
        else {
            payload[index++] = 0x01;
            payload[index++] = 0x10;
        }
        payload[index++] = 0x01;
        payload[index++] = 0x79;

#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 x_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &x_pos);
		if(st == true) {
			foreach(i, len) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					x_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(x_pos);
					payload[index++] = LO_U16(x_pos);
					payload[index++] = HI_U16(MEDIUM_NAME_Y_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_Y_POSITION);
					x_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
#endif
        knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
        // refresh delay
        CycleFunc_add(knob_audio_brush_image_delay, TIMER_300MS);
    }
#else
    if(p_audio_par->state[idx] != AUDIO_ST_UNKNOWN) {
        DBG_KNOB_SEND_STR("\n ### knob_set_audio_brush_image");

        u8 payload[200];
        uint8_t index = 0;

        payload[index++] = KNOB_STATUS_SEND_FRAME;
        // Layer 0 - Music
        payload[index++] = 0x00;
        if(p_audio_par->state[idx] == AUDIO_PAUSE) {
            payload[index++] = HI_U16(ICON_MUSIC_STOP);
            payload[index++] = LO_U16(ICON_MUSIC_STOP);
        }
        else {
            payload[index++] = HI_U16(ICON_MUSIC_PLAY);
            payload[index++] = LO_U16(ICON_MUSIC_PLAY);
        }
    	payload[index++] = HI_U16(ICON_X_POSITION);
    	payload[index++] = LO_U16(ICON_X_POSITION);
    	payload[index++] = HI_U16(ICON_Y_POSITION);
    	payload[index++] = LO_U16(ICON_Y_POSITION);

        // Layer1 - Pause/Play
        payload[index++] = 0x00;
        if(p_audio_par->state[idx] == AUDIO_PAUSE) {
        	if(active_button == PAUSE_BUTTON) {
				payload[index++] = HI_U16(ICON_PAUSE_ACTIVE);
				payload[index++] = LO_U16(ICON_PAUSE_ACTIVE);
        	}
        	else {
				payload[index++] = HI_U16(ICON_PAUSE);
				payload[index++] = LO_U16(ICON_PAUSE);
        	}
        }
        else {
        	if(active_button == PLAY_BUTTON) {
				payload[index++] = HI_U16(ICON_PLAY_ACTIVE);
				payload[index++] = LO_U16(ICON_PLAY_ACTIVE);
        	}
        	else {
				payload[index++] = HI_U16(ICON_PLAY);
				payload[index++] = LO_U16(ICON_PLAY);
        	}
        }
        payload[index++] = 0x01;
        payload[index++] = 0x0e;
        payload[index++] = 0x00;
        payload[index++] = 0xB7;

        // Layer 2 - Next
        payload[index++] = 0x00;
        if(active_button == NEXT_BUTTON) {
			payload[index++] = HI_U16(ICON_NEXT_ACTIVE);
			payload[index++] = LO_U16(ICON_NEXT_ACTIVE);
        }
        else {
			payload[index++] = HI_U16(ICON_NEXT);
			payload[index++] = LO_U16(ICON_NEXT);
        }
        payload[index++] = 0x01;
        payload[index++] = 0x0e;
        payload[index++] = 0x00;
        payload[index++] = 0x35;

        // Layer 3 - Previous
        payload[index++] = 0x00;
        if(active_button == PREVIOUS_BUTTON) {
			payload[index++] = HI_U16(ICON_PREVIOUS_ACTIVE);
			payload[index++] = LO_U16(ICON_PREVIOUS_ACTIVE);
        }
        else {
			payload[index++] = HI_U16(ICON_PREVIOUS);
			payload[index++] = LO_U16(ICON_PREVIOUS);
        }
        payload[index++] = 0x01;
        payload[index++] = 0x0e;
        payload[index++] = 0x01;
        payload[index++] = 0x39;

        u8 volume = p_audio_par->volume[idx];
        if(p_audio_par->volume[idx] > AUDIO_VOLUME_MAX)  {
            volume = AUDIO_VOLUME_MAX;
        }
		#if DISPLAY_NAVIGATION_EN
		// Layer 4 - Navigation
		if(navigation_is_active == true) {
			// Layer 1, don't have navigation
		}
		else
		#endif
		{
			// Layer 4 - Volume (level cycle)
			if(volume > 0) {
				u8 image_index;

				image_index = volume - 1;
				payload[index++] = 0x00;
				payload[index++] = HI_U16(image_index);
				payload[index++] = LO_U16(image_index);
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
				payload[index++] = 0x00;
			}
		}
        // Layer 5 - Percent
        payload[index++] = 0x00;
        payload[index++] = HI_U16(volume+OFFSET_NUMBER);
        payload[index++] = LO_U16(volume+OFFSET_NUMBER);
        payload[index++] = 0x01;
        payload[index++] = 0x76;
        if(volume == AUDIO_VOLUME_MAX) {
            payload[index++] = 0x00;
            payload[index++] = 0xB4;
        } else {
            payload[index++] = 0x00;
            payload[index++] = 0xB2;
        }

        // Layer 4, symbol
        payload[index++] = 0x00;
        payload[index++] = HI_U16(ICON_PERCENT);
        payload[index++] = LO_U16(ICON_PERCENT);
        payload[index++] = 0x01;
        payload[index++] = 0x7B;
        if(volume == AUDIO_VOLUME_MAX) {
            payload[index++] = 0x00;
            payload[index++] = 0x93;
        } else {
            payload[index++] = 0x00;
            payload[index++] = 0xa0;
        }

#if CHANGE_DEVICE_NAME_EN
		common_endpoint_par_t *common_endpoint_par = element_get_common_endpoint_par(idx);
		u8 name[DEVICE_NAME_MAX_LEN];
		u8 len = 0;
		u16 width;
		u16 y_pos = 0;
		bool st = knob_get_name_infor_with_check_len(  \
				TEXT_SIZE_MEDIUM, common_endpoint_par->name, common_endpoint_par->name_len, name, &len, &width, &y_pos);
		if(st == true) {
			for(int i = len - 1; i >= 0; i--) {
				u16 image_index = TEXT_MEDIUM_SIZE_OFFSET + name[i];
				if(name[i] == SYMBOL_BIG_SPACE) {
					y_pos += text_symbol_medium_size[SYMBOL_BIG_SPACE];
				}
				else {
					payload[index++] = 0x00;
					payload[index++] = HI_U16(image_index);
					payload[index++] = LO_U16(image_index);
					payload[index++] = HI_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = LO_U16(MEDIUM_NAME_X_POSITION);
					payload[index++] = HI_U16(y_pos);
					payload[index++] = LO_U16(y_pos);
					y_pos += text_symbol_medium_size[name[i]];
				}
			}
		}
#endif
        knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
        // refresh delay
        CycleFunc_add(knob_audio_brush_image_delay, TIMER_300MS);
    }
#endif
}

const u8 time_text_size[] = {140, 124, 136, 138, 140, 138, 140, 130, 142, 140, 124,
		                     106, 120, 122, 124, 122, 124, 116, 124, 124, 136, 120,
                             132, 134, 136, 134, 136, 128, 138, 136, 138, 122, 134,
                             138, 138, 136, 138, 130, 140, 138, 140, 122, 136, 138,
                             140, 138, 140, 132, 142, 140, 138, 120, 134, 136, 138,
                             136, 138, 130, 140, 138
						};
// Hour and minute
#define ICON_TIME_COLON_POSITION   0xd8

#define ICON_COLON_SIZE            0x22
#define TIME_SPACE_SIZE            0x10

/**
 * @func    knob_clock_set_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_clock_set_brush_image(void)
{
    u8 payload[200];
    uint8_t index = 0;
    u16 temp;
#if SCREEN_TYPE == TYPE_HORIZONTAL
    if(timestamp_device_is_has_time() == true) {
        time_st_t *p_time = timestamp_get_date_time();
        if(p_time != NULL) {
            DBG_KNOB_SEND_STR("\n ...Knob device is has time");

            payload[index++] = KNOB_STATUS_SEND_FRAME;

            // Layer 0, Week day (164, 102)
            temp = p_time->wday + ICON_OFFSET_DAY_OFF_WEEK;

            payload[index++] = 0x00;
            payload[index++] = HI_U16(temp);
            payload[index++] = LO_U16(temp);
            payload[index++] = 0x00;
            payload[index++] = week_day_pos_arr[p_time->wday];
            payload[index++] = 0x00;
            payload[index++] = 0x66;

            // Layer 1, Symbol
            payload[index++] = 0x00;
            payload[index++] = HI_U16(ICON_COMMA);
            payload[index++] = LO_U16(ICON_COMMA);
            payload[index++] = 0x00;
            payload[index++] = 0xCE;
            payload[index++] = 0x00;
            payload[index++] = 0x66;

            // Layer 2, Month day (222, 102)
            temp = p_time->day + ICON_OFFSET_DAY_MONTH - 1;
            payload[index++] = 0x00;
            payload[index++] = HI_U16(temp);
            payload[index++] = LO_U16(temp);
            payload[index++] = 0x00;
            payload[index++] = 0xDE;
            payload[index++] = 0x00;
            payload[index++] = 0x66;

            // Layer 3, Month (256, 102)
            temp = p_time->month + ICON_OFFSET_MONTH-1;
            payload[index++] = 0x00;
            payload[index++] = HI_U16(temp);
            payload[index++] = LO_U16(temp);
            payload[index++] = 0x01;
            payload[index++] = 0x10;
            payload[index++] = 0x00;
            payload[index++] = 0x66;

            // Layer 4, Hour (93, 146)
            u16 x_pos = ICON_TIME_COLON_POSITION - TIME_SPACE_SIZE - time_text_size[p_time->hour];
            temp = p_time->hour + ICON_OFFSET_HOUR;
            payload[index++] = 0x00;
            payload[index++] = HI_U16(temp);
            payload[index++] = LO_U16(temp);
            payload[index++] = HI_U16(x_pos);
            payload[index++] = LO_U16(x_pos);
            payload[index++] = 0x00;
            payload[index++] = 0x92;

            // layer 5, : symbol (174, 146)
            payload[index++] = 0x00;
            payload[index++] = HI_U16(ICON_COLON);
            payload[index++] = LO_U16(ICON_COLON);
            payload[index++] = HI_U16(ICON_TIME_COLON_POSITION);
            payload[index++] = LO_U16(ICON_TIME_COLON_POSITION);
            payload[index++] = 0x00;
            payload[index++] = 0x8a;

            // Layer 6: Minute (254, 146)
            x_pos = ICON_TIME_COLON_POSITION + ICON_COLON_SIZE + TIME_SPACE_SIZE;
            temp = p_time->minute + ICON_OFFSET_MINUTE;
            payload[index++] = 0x00;
            payload[index++] = HI_U16(temp);
            payload[index++] = LO_U16(temp);
		    payload[index++] = HI_U16(x_pos);
		    payload[index++] = LO_U16(x_pos);
            payload[index++] = 0x00;
            payload[index++] = 0x92;

            // Layer 7, Special image
            payload[index++] = 0x00;
            payload[index++] = 0x03;
            payload[index++] = 0x1b;
            payload[index++] = 0x00;
            payload[index++] = 0x6a;
            payload[index++] = 0x00;
            payload[index++] = 0xdf;
            knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);

            return;
        }
        else {
            DBG_KNOB_SEND_STR("\n Can't get time stamp");
        }
    }
    else {
        DBG_KNOB_SEND_STR("\n Knob device don't has time");
    }

    payload[index++] = KNOB_STATUS_SEND_FRAME;
    // Layer 0, Hour
    temp = 0x5D + OFFSET_NO_TIME;
    payload[index++] = 0x00;
    payload[index++] = HI_U16(ICON_DOUBLE_UNDERSCORE);
    payload[index++] = LO_U16(ICON_DOUBLE_UNDERSCORE);
    payload[index++] = HI_U16(temp);
    payload[index++] = LO_U16(temp);
    payload[index++] = 0x00;
    payload[index++] = 0xa3;

    // layer 1, : symbol
    payload[index++] = 0x00;
    payload[index++] = HI_U16(ICON_COLON);
    payload[index++] = LO_U16(ICON_COLON);
    payload[index++] = HI_U16(ICON_TIME_COLON_POSITION);
    payload[index++] = LO_U16(ICON_TIME_COLON_POSITION);
    payload[index++] = 0x00;
    payload[index++] = 0x8a;
    // Layer 2: Minute
    temp = 0xFE + OFFSET_NO_TIME;
    payload[index++] = 0x00;
    payload[index++] = HI_U16(ICON_DOUBLE_UNDERSCORE);
    payload[index++] = LO_U16(ICON_DOUBLE_UNDERSCORE);
    payload[index++] = HI_U16(temp);
    payload[index++] = LO_U16(temp);
    payload[index++] = 0x00;
    payload[index++] = 0xa3;

    // Special image
    payload[index++] = 0x00;
    payload[index++] = 0x03;
    payload[index++] = 0x1b;
    payload[index++] = 0x00;
    payload[index++] = 0x6a;
    payload[index++] = 0x00;
    payload[index++] = 0xdf;

    knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
#else
    if(timestamp_device_is_has_time() == true) {
        time_st_t *p_time = timestamp_get_date_time();
        if(p_time != NULL) {
            DBG_KNOB_SEND_STR("\n ...Knob device is has time");

            payload[index++] = KNOB_STATUS_SEND_FRAME;

            // Layer 0, Week day (164, 102)
            temp = p_time->wday + ICON_OFFSET_DAY_OFF_WEEK;

            payload[index++] = 0x00;
            payload[index++] = HI_U16(temp);
            payload[index++] = LO_U16(temp);
            payload[index++] = 0x00;
            payload[index++] = 0x66;
            payload[index++] = HI_U16(week_day_pos_arr[p_time->wday]);
            payload[index++] = LO_U16(week_day_pos_arr[p_time->wday]);

            // Layer 1, Symbol
            payload[index++] = 0x00;
            payload[index++] = HI_U16(ICON_COMMA);
            payload[index++] = LO_U16(ICON_COMMA);
            payload[index++] = 0x00;
            payload[index++] = 0x66;
            payload[index++] = 0x00;
            payload[index++] = 0xff;

            // Layer 2, Month day (222, 102)
            temp = p_time->day + ICON_OFFSET_DAY_MONTH - 1;
            payload[index++] = 0x00;
            payload[index++] = HI_U16(temp);
            payload[index++] = LO_U16(temp);
            payload[index++] = 0x00;
            payload[index++] = 0x66;
            payload[index++] = 0x00;
            payload[index++] = 0xcb;

            // Layer 3, Month (256, 102)
            temp = p_time->month + ICON_OFFSET_MONTH-1;
            payload[index++] = 0x00;
            payload[index++] = HI_U16(temp);
            payload[index++] = LO_U16(temp);
            payload[index++] = 0x00;
            payload[index++] = 0x66;
            payload[index++] = 0x00;
            payload[index++] = 0x85;

            // Layer 6: Minute (254, 146)
            temp = p_time->minute + ICON_OFFSET_MINUTE;
            u16 y_pos = ICON_TIME_COLON_POSITION - TIME_SPACE_SIZE - time_text_size[p_time->minute];

            payload[index++] = 0x00;
            payload[index++] = HI_U16(temp);
            payload[index++] = LO_U16(temp);
            payload[index++] = 0x00;
            payload[index++] = 0x92;
            payload[index++] = HI_U16(y_pos);
            payload[index++] = LO_U16(y_pos);

            // layer 5, : symbol (174, 146)
            payload[index++] = 0x00;
            payload[index++] = HI_U16(ICON_COLON);
            payload[index++] = LO_U16(ICON_COLON);
            payload[index++] = 0x00;
            payload[index++] = 0x8a;
            payload[index++] = HI_U16(ICON_TIME_COLON_POSITION);
            payload[index++] = LO_U16(ICON_TIME_COLON_POSITION);

            // Layer 4, Hour (93, 146)
            y_pos = ICON_TIME_COLON_POSITION + ICON_COLON_SIZE + TIME_SPACE_SIZE;
            temp = p_time->hour + ICON_OFFSET_HOUR;
            payload[index++] = 0x00;
		    payload[index++] = HI_U16(temp);
		    payload[index++] = LO_U16(temp);
		    payload[index++] = 0x00;
		    payload[index++] = 0x92;
		    payload[index++] = HI_U16(y_pos);
		    payload[index++] = LO_U16(y_pos);

            //  Layer 7, Special image
            payload[index++] = 0x00;
            payload[index++] = 0x03;
            payload[index++] = 0x1b;
            payload[index++] = 0x00;
            payload[index++] = 0xdf;
            payload[index++] = 0x00;
            payload[index++] = 0x6a;

            knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
            return;
        }
        else {
            DBG_KNOB_SEND_STR("\n Can't get time stamp");
        }
    }
    else {
        DBG_KNOB_SEND_STR("\n Knob device don't has time");
    }

    payload[index++] = KNOB_STATUS_SEND_FRAME;
    // Layer 0, Hour
    temp = 0x80;
    payload[index++] = 0x00;
    payload[index++] = HI_U16(ICON_DOUBLE_UNDERSCORE);
    payload[index++] = LO_U16(ICON_DOUBLE_UNDERSCORE);
    payload[index++] = 0x00;
    payload[index++] = 0xa3;
    payload[index++] = HI_U16(temp);
    payload[index++] = LO_U16(temp);

    // layer 1, : symbol
    temp = 0xD8;
    payload[index++] = 0x00;
    payload[index++] = HI_U16(ICON_COLON);
    payload[index++] = LO_U16(ICON_COLON);
    payload[index++] = 0x00;
    payload[index++] = 0x8a;
    payload[index++] = HI_U16(temp);
    payload[index++] = LO_U16(temp);

    // Layer 2: Minute
    temp = 0x0114;
    payload[index++] = 0x00;
    payload[index++] = HI_U16(ICON_DOUBLE_UNDERSCORE);
    payload[index++] = LO_U16(ICON_DOUBLE_UNDERSCORE);
    payload[index++] = 0x00;
    payload[index++] = 0xa3;
    payload[index++] = HI_U16(temp);
    payload[index++] = LO_U16(temp);

    // Layer 3, Special image
    payload[index++] = 0x00;
    payload[index++] = 0x03;
    payload[index++] = 0x1b;
    payload[index++] = 0x00;
    payload[index++] = 0xdf;
    payload[index++] = 0x00;
    payload[index++] = 0x6a;
    knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
#endif
}

/**
 * @func    knob_set_curtain_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_company_identify_brush_image(void)
{
    u8 index = 0;
    u8 payload[24];
#if SCREEN_TYPE  == TYPE_HORIZONTAL
    payload[index++] = KNOB_STATUS_SEND_FRAME;
    payload[index++] = 0;
    payload[index++] = HI_U16(ICON_LOGO_COMPANY);
    payload[index++] = LO_U16(ICON_LOGO_COMPANY);
    payload[index++] = 0;
    payload[index++] = 0x3f;
    payload[index++] = 0;
    payload[index++] = 0xba;
    knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
#else
    payload[index++] = KNOB_STATUS_SEND_FRAME;
    payload[index++] = 0;
    payload[index++] = HI_U16(ICON_LOGO_COMPANY);
    payload[index++] = LO_U16(ICON_LOGO_COMPANY);
    payload[index++] = 0;
    payload[index++] = 0xba;
    payload[index++] = 0;
    payload[index++] = 0x3f;
    knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
#endif
}

/**
 * @func    knob_configuration_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_configuration_brush_image(void)
{
	u8 payload[200];
	u8 index = 0;

#if SCREEN_TYPE  == TYPE_HORIZONTAL
	if(config_par.present_screen == CONFIG_SCREEN_SELECTION) {
		// Reset network
		payload[index++] = KNOB_STATUS_SEND_FRAME;
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xf3;
		payload[index++] = 0x00;
		payload[index++] = 0x1d;
		payload[index++] = 0x00;
		payload[index++] = 0x82;

		// Reset factory default
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xf5;
		payload[index++] = 0x00;
		payload[index++] = 0x1d;
		payload[index++] = 0x01;
		payload[index++] = 0x01;

		// Back
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xff;
		payload[index++] = 0x00;
		payload[index++] = 0xd0;
		payload[index++] = 0x01;
		payload[index++] = 0x7B;
	}
	else if(config_par.present_screen == CONFIG_SCREEN_RESET_NETWORK  \
			|| config_par.present_screen == CONFIG_SCREEN_RESET_FACTORY_DEFAULT) {
		// icon
		if(config_par.present_screen == CONFIG_SCREEN_RESET_NETWORK) {
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			payload[index++] = 0;
			payload[index++] = 0x03;
			payload[index++] = 0xf7;
			payload[index++] = 0x00;
			payload[index++] = 0xaa;
			payload[index++] = 0x00;
			payload[index++] = 0x17;
		}
		else {
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			payload[index++] = 0;
			payload[index++] = 0x03;
			payload[index++] = 0xf8;
			payload[index++] = 0x00;
			payload[index++] = 0xaa;
			payload[index++] = 0x00;
			payload[index++] = 0x17;
		}
		// Agree
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xf9;
		payload[index++] = 0x00;
		payload[index++] = 0x85;
		payload[index++] = 0x00;
		payload[index++] = 0xc6;
		// Cancel
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xfb;
		payload[index++] = 0x00;
		payload[index++] = 0x85;
		payload[index++] = 0x01;
		payload[index++] = 0x47;
	}
#else
	if(config_par.present_screen == CONFIG_SCREEN_SELECTION) {
		// Reset network
		payload[index++] = KNOB_STATUS_SEND_FRAME;
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xf3;
		payload[index++] = 0x00;
		payload[index++] = 0x82;
		payload[index++] = 0x00;
		payload[index++] = 0x1d;

		// Reset factory default
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xf5;
		payload[index++] = 0x01;
		payload[index++] = 0x01;
		payload[index++] = 0x00;
		payload[index++] = 0x1d;

		// Back
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xff;
		payload[index++] = 0x01;
		payload[index++] = 0x7b;
		payload[index++] = 0x00;
		payload[index++] = 0xd0;
	}
	else if(config_par.present_screen == CONFIG_SCREEN_RESET_NETWORK  \
			|| config_par.present_screen == CONFIG_SCREEN_RESET_FACTORY_DEFAULT) {
		// icon
		if(config_par.present_screen == CONFIG_SCREEN_RESET_NETWORK) {
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			payload[index++] = 0;
			payload[index++] = 0x03;
			payload[index++] = 0xf7;
			payload[index++] = 0x00;
			payload[index++] = 0x17;
			payload[index++] = 0x00;
			payload[index++] = 0xaa;
		}
		else {
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			payload[index++] = 0;
			payload[index++] = 0x03;
			payload[index++] = 0xf8;
			payload[index++] = 0x00;
			payload[index++] = 0x17;
			payload[index++] = 0x00;
			payload[index++] = 0xaa;
		}
		// Agree
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xf9;
		payload[index++] = 0x00;
		payload[index++] = 0xc6;
		payload[index++] = 0x00;
		payload[index++] = 0x85;
		// Cancel
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xfb;
		payload[index++] = 0x01;
		payload[index++] = 0x47;
		payload[index++] = 0x00;
		payload[index++] = 0x85;
	}
#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
}

/**
 * @func    knob_configuration_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_configuration_brush_image_with_btn_index(u8 btn_index)
{
	u8 payload[200];
	u8 index = 0;
#if SCREEN_TYPE  == TYPE_HORIZONTAL
	if(config_par.present_screen == CONFIG_SCREEN_SELECTION) {
		// Reset network
		payload[index++] = KNOB_STATUS_SEND_FRAME;
		payload[index++] = 0;
		if(btn_index == 0) {
			payload[index++] = 0x03;
			payload[index++] = 0xf4;
		}
		else {
			payload[index++] = 0x03;
			payload[index++] = 0xf3;
		}
		payload[index++] = 0x00;
		payload[index++] = 0x1d;
		payload[index++] = 0x00;
		payload[index++] = 0x82;

		// Reset factory default
		payload[index++] = 0;
		if(btn_index == 1) {
			payload[index++] = 0x03;
			payload[index++] = 0xf6;
		}
		else {
			payload[index++] = 0x03;
			payload[index++] = 0xf5;
		}
		payload[index++] = 0x00;
		payload[index++] = 0x1d;
		payload[index++] = 0x01;
		payload[index++] = 0x01;

		// Back
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xff;
		payload[index++] = 0x00;
		payload[index++] = 0xd0;
		payload[index++] = 0x01;
		payload[index++] = 0x7B;
	}
	else if(config_par.present_screen == CONFIG_SCREEN_RESET_NETWORK  \
			|| config_par.present_screen == CONFIG_SCREEN_RESET_FACTORY_DEFAULT) {
		// icon
		if(config_par.present_screen == CONFIG_SCREEN_RESET_NETWORK) {
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			payload[index++] = 0;
			payload[index++] = 0x03;
			payload[index++] = 0xf7;
			payload[index++] = 0x00;
			payload[index++] = 0xaa;
			payload[index++] = 0x00;
			payload[index++] = 0x17;
		}
		else {
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			payload[index++] = 0;
			payload[index++] = 0x03;
			payload[index++] = 0xf8;
			payload[index++] = 0x00;
			payload[index++] = 0xaa;
			payload[index++] = 0x00;
			payload[index++] = 0x17;
		}
		// Agree
		payload[index++] = 0;
		if(btn_index == 0) {
			payload[index++] = 0x03;
			payload[index++] = 0xfa;
		}
		else {
			payload[index++] = 0x03;
			payload[index++] = 0xf9;
		}
		payload[index++] = 0x00;
		payload[index++] = 0x85;
		payload[index++] = 0x00;
		payload[index++] = 0xc6;
		// Cancel
		payload[index++] = 0;
		if(btn_index == 1) {
			payload[index++] = 0x03;
			payload[index++] = 0xfc;
		}
		else {
			payload[index++] = 0x03;
			payload[index++] = 0xfb;
		}
		payload[index++] = 0x00;
		payload[index++] = 0x85;
		payload[index++] = 0x01;
		payload[index++] = 0x47;
	}
#else
	if(config_par.present_screen == CONFIG_SCREEN_SELECTION) {
		// Reset network
		payload[index++] = KNOB_STATUS_SEND_FRAME;
		payload[index++] = 0;
		if(btn_index == 0) {
			payload[index++] = 0x03;
			payload[index++] = 0xf4;
		}
		else {
			payload[index++] = 0x03;
			payload[index++] = 0xf3;
		}
		payload[index++] = 0x00;
		payload[index++] = 0x82;
		payload[index++] = 0x00;
		payload[index++] = 0x1d;

		// Reset factory default
		payload[index++] = 0;
		if(btn_index == 1) {
			payload[index++] = 0x03;
			payload[index++] = 0xf6;
		}
		else {
			payload[index++] = 0x03;
			payload[index++] = 0xf5;
		}
		payload[index++] = 0x01;
		payload[index++] = 0x01;
		payload[index++] = 0x00;
		payload[index++] = 0x1d;

		// Back
		payload[index++] = 0;
		payload[index++] = 0x03;
		payload[index++] = 0xff;
		payload[index++] = 0x01;
		payload[index++] = 0x7B;
		payload[index++] = 0x00;
		payload[index++] = 0xd0;
	}
	else if(config_par.present_screen == CONFIG_SCREEN_RESET_NETWORK  \
			|| config_par.present_screen == CONFIG_SCREEN_RESET_FACTORY_DEFAULT) {
		// icon
		if(config_par.present_screen == CONFIG_SCREEN_RESET_NETWORK) {
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			payload[index++] = 0;
			payload[index++] = 0x03;
			payload[index++] = 0xf7;
			payload[index++] = 0x00;
			payload[index++] = 0x17;
			payload[index++] = 0x00;
			payload[index++] = 0xaa;
		}
		else {
			payload[index++] = KNOB_STATUS_SEND_FRAME;
			payload[index++] = 0;
			payload[index++] = 0x03;
			payload[index++] = 0xf8;
			payload[index++] = 0x00;
			payload[index++] = 0x17;
			payload[index++] = 0x00;
			payload[index++] = 0xaa;
		}
		// Agree
		payload[index++] = 0;
		if(btn_index == 0) {
			payload[index++] = 0x03;
			payload[index++] = 0xfa;
		}
		else {
			payload[index++] = 0x03;
			payload[index++] = 0xf9;
		}
		payload[index++] = 0x00;
		payload[index++] = 0xc6;
		payload[index++] = 0x00;
		payload[index++] = 0x85;

		// Cancel
		payload[index++] = 0;
		if(btn_index == 1) {
			payload[index++] = 0x03;
			payload[index++] = 0xfc;
		}
		else {
			payload[index++] = 0x03;
			payload[index++] = 0xfb;
		}
		payload[index++] = 0x01;
		payload[index++] = 0x47;
		payload[index++] = 0x00;
		payload[index++] = 0x85;
	}
#endif
	knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
}

#ifdef DEBUG_KNOB

/**
 * @func    calculator_position
 * @brief
 * @param
 * @retval  None
 */
static void calculator_position(u16 x_pos, u16 y_pos)
{
    static u16 x_min = 0xFFFF, x_max = 0xFFFF;
    static u16 y_min = 0xFFFF, y_max = 0xFFFF;

    if(x_min == 0xFFFF || x_min > x_pos) {
        x_min = x_pos;
    }
    if(x_max == 0xFFFF || x_max < x_pos) {
        x_max = x_pos;
    }
    if(y_min == 0xFFFF || y_min > y_pos) {
        y_min = y_pos;
    }
    if(y_max == 0xFFFF || y_max < y_pos) {
        y_max = y_pos;
    }
    DBG_KNOB_SEND_STR("\n ...X_POS: ");
    DBG_KNOB_SEND_INT(x_pos);
    DBG_KNOB_SEND_STR(", ");
    DBG_KNOB_SEND_INT(x_min);
    DBG_KNOB_SEND_STR(", ");
    DBG_KNOB_SEND_INT(x_max);

    DBG_KNOB_SEND_STR("\n ...Y_POS: ");
    DBG_KNOB_SEND_INT(y_pos);

    DBG_KNOB_SEND_STR(", ");
    DBG_KNOB_SEND_INT(y_min);
    DBG_KNOB_SEND_STR(", ");
    DBG_KNOB_SEND_INT(y_max);
}
#endif

/**
 * @func    knob_refresh_screen_delay
 * @brief
 * @param
 * @retval  None
 */
static void knob_refresh_screen_delay(void)
{
	knob_set_brush_image(knob_par.ui_mode);
	CycleFunc_remove(knob_refresh_screen_delay);
}

/**
 * @func    knob_notify_reset_network_success
 * @brief
 * @param
 * @retval  None
 */
static void knob_notify_reset_network_success_delay(void)
{
	knob_display_notify_with_time_length(NOTI_RESET_NETWORK, 5000);
	send_led_evt(LED_NOTIFY_RESET_NETWORK);
	CycleFunc_remove(knob_notify_reset_network_success_delay);
}

/**
 * @func    knob_notify_reset_to_factory_success_delay
 * @brief
 * @param
 * @retval  None
 */
static void knob_notify_reset_to_factory_success_delay(void)
{
	knob_display_notify_with_time_length(NOTI_RESET_TO_FACTORY, 5000);
	send_led_evt(LED_NOTIFY_RESET_NETWORK);
	CycleFunc_remove(knob_notify_reset_to_factory_success_delay);
}

/**
 * @func    knob_handle_event_in_configuration_mode
 * @brief
 * @param
 * @retval  None
 */
static int knob_handle_event_in_configuration_mode(KnobEvent_Enum event, u16 x_pos, u16 y_pos)
{
	DBG_KNOB_SEND_STR("\n knob_handle_event_in_configuration_mode: ");
	DBG_KNOB_SEND_INT(event);
	DBG_KNOB_SEND_STR(", ");
	DBG_KNOB_SEND_INT(config_par.present_screen);

	if(config_par.present_screen == CONFIG_SCREEN_SELECTION) {
		if(event == EVENT_TOUCH_SHORT_PRESS) {
			#ifdef DEBUG_KNOB
			calculator_position(x_pos, y_pos);
			#endif
			// Reset network button
			if(is_in_range(x_pos, BTN_RESET_NETWORK_X_MIN, BTN_RESET_NETWORK_X_MAX)
					&& is_in_range(y_pos, BTN_RESET_NETWORK_Y_MIN, BTN_RESET_NETWORK_Y_MAX)) {
				knob_configuration_brush_image_with_btn_index(0);
				config_par.present_screen = CONFIG_SCREEN_RESET_NETWORK;
				CycleFunc_add(knob_refresh_screen_delay, SHOW_ACTIVE_BUTTON_TIME_LEN_MS);
			}
			// Reset to default button
			if(is_in_range(x_pos, BTN_RESET_TO_DEFAULT_X_MIN, BTN_RESET_TO_DEFAULT_X_MAX)
					&& is_in_range(y_pos, BTN_RESET_TO_DEFAULT_Y_MIN, BTN_RESET_TO_DEFAULT_Y_MAX)) {
				knob_configuration_brush_image_with_btn_index(1);
				config_par.present_screen = CONFIG_SCREEN_RESET_FACTORY_DEFAULT;
				CycleFunc_add(knob_refresh_screen_delay, SHOW_ACTIVE_BUTTON_TIME_LEN_MS);
			}
			// Back button
			if(is_in_range(x_pos, BTN_BACK_X_MIN, BTN_BACK_X_MAX)
					&& is_in_range(y_pos, BTN_BACK_Y_MIN, BTN_BACK_Y_MAX)) {
				if(config_par.save_screen != DISPLAY_CONFIGURATION_SCREEN) {
					knob_par.screen = config_par.save_screen;
				}
				else {
					knob_par.screen = DISPLAY_CONTROL_SCREEN;
				}
				knob_set_brush_image(knob_par.ui_mode);
			}
		}
	}
	else if(config_par.present_screen == CONFIG_SCREEN_RESET_NETWORK) {
		if(event == EVENT_TOUCH_SHORT_PRESS) {
			#ifdef DEBUG_KNOB
			calculator_position(x_pos, y_pos);
			#endif

			DBG_KNOB_SEND_STR("\n******************");

			if(is_in_range(x_pos, BTN_AGREE_X_MIN, BTN_AGREE_X_MAX)
						&& is_in_range(y_pos, BTN_AGREE_Y_MIN, BTN_AGREE_Y_MAX)) {
				knob_configuration_brush_image_with_btn_index(0);
				setup_factory_reset_with_delay(true, false, false);
				CycleFunc_add(knob_notify_reset_network_success_delay, TIMER_500MS);
			}
			else if(is_in_range(x_pos, BTN_CANCEL_X_MIN, BTN_CANCEL_X_MAX)
						&& is_in_range(y_pos, BTN_CANCEL_Y_MIN, BTN_CANCEL_Y_MAX)) {
				knob_configuration_brush_image_with_btn_index(1);
				config_par.present_screen = CONFIG_SCREEN_SELECTION;
				CycleFunc_add(knob_refresh_screen_delay, SHOW_ACTIVE_BUTTON_TIME_LEN_MS);
			}
		}
	}
	else if(config_par.present_screen == CONFIG_SCREEN_RESET_FACTORY_DEFAULT) {
		if(event == EVENT_TOUCH_SHORT_PRESS) {
			#ifdef DEBUG_KNOB
			calculator_position(x_pos, y_pos);
			#endif
			if(is_in_range(x_pos, BTN_AGREE_X_MIN, BTN_AGREE_X_MAX)
						&& is_in_range(y_pos, BTN_AGREE_Y_MIN, BTN_AGREE_Y_MAX)) {
				knob_configuration_brush_image_with_btn_index(0);
				setup_factory_reset_with_delay(true, true, false);
				CycleFunc_add(knob_notify_reset_to_factory_success_delay, TIMER_500MS);
			}
			else if(is_in_range(x_pos, BTN_CANCEL_X_MIN, BTN_CANCEL_X_MAX)
						&& is_in_range(y_pos, BTN_CANCEL_Y_MIN, BTN_CANCEL_Y_MAX)) {
				knob_configuration_brush_image_with_btn_index(1);
				config_par.present_screen = CONFIG_SCREEN_SELECTION;
				CycleFunc_add(knob_refresh_screen_delay, SHOW_ACTIVE_BUTTON_TIME_LEN_MS);
			}
		}
	}
	else {
		return -1;
	}
	return 0;
}

/**
 * @func    knob_config_mode_init
 * @brief
 * @param
 * @retval  None
 */
static void knob_config_mode_init(void)
{
	if(knob_par.screen != DISPLAY_CONFIGURATION_SCREEN) {
		config_par.save_screen = knob_par.screen;
	}
	knob_par.screen = DISPLAY_CONFIGURATION_SCREEN;
	config_par.type = CONFIG_TYPE_UNKNOWN;
	config_par.present_screen = config_par.target_screen = CONFIG_SCREEN_SELECTION;
	config_par.start_t_ms = clock_time_ms();
	config_par.trans_t_ms = 0;
	knob_set_brush_image(knob_par.ui_mode);
}

/**
 * @func    knob_set_brush_image
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_brush_image(KnobUiMode_Enum ui_mode)
{
    DBG_KNOB_SEND_STR("\n knob_set_brush_image: ");
    DBG_KNOB_SEND_INT(ui_mode);

    if(knob_par.screen == DISPLAY_CONTROL_SCREEN) {
    	u8 idx = element_get_current_index();
    	EndpointType_Enum type = get_endpoint_type_follow_model_index(idx);
    	switch(type)
    	{
			case TYPE_SWITCH:
				knob_set_switch_brush_image(idx);
				DBG_KNOB_SEND_STR("\n knob_set_switch_brush_image");
				break;

			case TYPE_SCENE:
				knob_set_scene_brush_image();
				break;

			case TYPE_CCT:
				knob_set_cct_brush_image(idx);
				break;

			case TYPE_DIM:
				knob_set_dim_brush_image(idx);
				break;

			case TYPE_CURTAIN:
				knob_set_curtain_brush_image(idx);
				break;

			case TYPE_FAN:
				knob_set_fan_brush_image(idx);
				break;

			case TYPE_AIR_CONDITIONER:
				knob_set_air_conditioner_brush_image(idx);
				break;

			case TYPE_AUDIO:
				knob_set_audio_brush_image(idx);
				break;
    	}
    }
    else if(knob_par.screen == DISPLAY_CLOCK_SCREEN) {
    	 knob_clock_set_brush_image();
    }
    else if(knob_par.screen == DISPLAY_CONFIGURATION_SCREEN) {
    	knob_configuration_brush_image();
    }
}

/**
 * @func    knob_get_current_ui_mode
 * @brief
 * @param
 * @retval  None
 */
KnobUiMode_Enum knob_get_current_ui_mode(void)
{
    return knob_par.ui_mode;
}

/**
 * @func    knob_change_ui_mode
 * @brief
 * @param
 * @retval  None
 */
bool knob_change_ui_mode(KnobUiMode_Enum ui_mode)
{
    knob_display_par.current_active_timeout_s = knob_config.inactive_timeout.timeout_s;
    knob_display_par.awake_source = AWAKE_SRC_BY_USER;

#if KNOB_FORCE_CLEAR_BUSY_ENABLE
    knob_par.knob_extend_par.is_busy = false;
#else
    if(knob_par.knob_extend_par.is_busy == false)
#endif
    {
        if(ui_mode != MODE_UNKNOWN) {
            knob_par.ui_mode = ui_mode;
            knob_set_brush_image(knob_par.ui_mode);
            return true;
        }
    }
    return false;
}

/**
 * @func    knob_handle_disable_visibility_current_endpoint
 * @brief
 * @param
 * @retval  None
 */
void knob_handle_disable_visibility_current_endpoint(u8 idx)
{
	if(element_handle_next_endpoint_index() == idx) {
		knob_par.screen = DISPLAY_CLOCK_SCREEN;
	}
	knob_set_brush_image(knob_par.ui_mode);
}

/**
 * @func    knob_refresh_sceen_with_model_idx
 * @brief
 * @param
 * @retval  None
 */
void knob_refresh_sceen_with_model_idx(u8 idx)
{
	if(knob_display_par.is_activated == true) {
		if(idx == element_get_current_index()) {
			knob_display_par.awake_source = AWAKE_SRC_BY_APP;
			knob_set_brush_image(knob_par.ui_mode);
		}
	}
}

/**
 * @func    knob_force_end_notify
 * @brief
 * @param
 * @retval  None
 */
void knob_force_end_notify(KnobNotifyType_Enum notify_type)
{
    if(notify_type == knob_par.knob_extend_par.notify_type) {
        knob_set_ring_command(RING_LED_MODE_OFF,  \
                RING_LED_COLOR_NONE, 0, 500, KNOB_NOTIFY_TIME_LEN_MS, true);
        if(knob_display_par.awake_source == AWAKE_SRC_BY_OUTPUT) {
            knob_display_par.current_active_timeout_s = 0;
            knob_par.knob_extend_par.is_busy = false;
        }
        else {
            knob_refresh_current_screen_and_clear_busy();
        }
    }
}

/**
 * @func    knob_refresh_current_screen
 * @brief
 * @param
 * @retval  None
 */
void knob_refresh_current_screen_and_clear_busy(void)
{
    knob_par.knob_extend_par.is_busy = false;
    knob_set_brush_image(knob_par.ui_mode);
    knob_display_par.disable_refresh_time = true;
}

/**
 * @func    knob_change_to_control_screen
 * @brief
 * @param
 * @retval  None
 */
static void knob_change_to_control_screen(void)
{
	u16 visibility_mask = element_get_visibility_bit_mask();
	if(visibility_mask != 0) {
		knob_par.screen = DISPLAY_CONTROL_SCREEN;
		u8 current_index = element_get_current_index();
		if(((visibility_mask >> current_index)&0x01) == 0) {
			element_handle_next_endpoint_index();
		}
		knob_set_brush_image(knob_par.ui_mode);
		DBG_KNOB_SEND_STR("\n DISPLAY_CONTROL_SCREEN");
	}
}

/**
 * @func    knob_handle_event_short_push
 * @brief
 * @param
 * @retval  None
 */
static void knob_handle_event_short_push(void)
{
	if(knob_par.screen == DISPLAY_CLOCK_SCREEN) {
		knob_change_to_control_screen();
	}
	else {
		knob_par.screen = DISPLAY_CLOCK_SCREEN;
		knob_set_brush_image(knob_par.ui_mode);
		DBG_KNOB_SEND_STR("\n DISPLAY_CONTROL_SCREEN");
	}
}

#if SCREEN_TYPE  == TYPE_HORIZONTAL
/**
 * @func    knob_handle_swipe_right_left_event_in_control_screen
 * @brief
 * @param
 * @retval  None
 */
static void knob_handle_swipe_right_left_event_in_control_screen(KnobEvent_Enum event)
{
	u8 current_index = element_get_current_index();
	u8 index;
	if(event == EVENT_SWIPE_LEFT) {
		index = element_handle_next_endpoint_index();
	}
	else if(event == EVENT_SWIPE_RIGHT) {
		index = element_handle_previous_endpoint_index();
	}
	if(current_index != index) {
		DBG_KNOB_SEND_STR("\n ********** Index: ");
		DBG_KNOB_SEND_INT(index);
		DBG_KNOB_SEND_STR("\n **********");
		knob_set_brush_image(knob_par.ui_mode);
	}
}
#else

/**
 * @func    knob_handle_swipe_up_down_event_in_control_screen
 * @brief
 * @param
 * @retval  None
 */
static void knob_handle_swipe_up_down_event_in_control_screen(KnobEvent_Enum event)
{
	u8 current_index = element_get_current_index();
	u8 index;
	if(event == EVENT_SWIPE_DOWN) {
		index = element_handle_next_endpoint_index();
	}
	else if(event == EVENT_SWIPE_UP) {
		index = element_handle_previous_endpoint_index();
	}
	if(current_index != index) {
		DBG_KNOB_SEND_STR("\n ********** Index: ");
		DBG_KNOB_SEND_INT(index);
		DBG_KNOB_SEND_STR("\n **********");
		knob_set_brush_image(knob_par.ui_mode);
	}
}
#endif

/**
 * @func    knob_handle_report_event
 * @brief
 * @param
 * @retval  None
 */
static void knob_handle_report_event(knob_uart_union_t* p)
{
    u8 event = p->knob_report_status.key_status;

    // handle event
    if(event == EVENT_CCW_ROTATE
                    || event == EVENT_CW_ROTATE || event == EVENT_SHORT_PUSH) {
        switch(event)
        {
            case EVENT_CW_ROTATE:
                left_rotate_par.cnt = 0;
                if(knob_par.screen == DISPLAY_CONTROL_SCREEN) {
					right_rotate_par.cnt++;
					right_rotate_par.rotate_last_time_ms = clock_time_ms();
					// Navigation
                	knob_setup_navigation_when_rotate_active();
                }
                break;

            case EVENT_CCW_ROTATE:
                right_rotate_par.cnt = 0;
                if(knob_par.screen == DISPLAY_CONTROL_SCREEN) {
					left_rotate_par.cnt++;
					left_rotate_par.rotate_last_time_ms = clock_time_ms();
					// Navigation
                	knob_setup_navigation_when_rotate_active();
                }
                break;

            case EVENT_SHORT_PUSH:
            	knob_handle_event_short_push();
            	navigation_is_active = true;
                break;
        }
    }
    else {
    	navigation_is_active = true;

		u16 x_pos, y_pos;
		swap16((u8*)&x_pos, (u8*)&p->knob_report_status.x_pos);
		swap16((u8*)&y_pos, (u8*)&p->knob_report_status.y_pos);
		if(knob_par.screen == DISPLAY_CLOCK_SCREEN) {
			knob_clock_set_brush_image();
			// knob_change_to_control_screen();
		}
		else if(knob_par.screen == DISPLAY_CONTROL_SCREEN) {
			#if SCREEN_TYPE  == TYPE_HORIZONTAL
			if(event == EVENT_SWIPE_LEFT || event == EVENT_SWIPE_RIGHT) {
				knob_handle_swipe_right_left_event_in_control_screen(event);
				return;
			}
			#else
			if(event == EVENT_SWIPE_UP || event == EVENT_SWIPE_DOWN) {
				knob_handle_swipe_up_down_event_in_control_screen(event);
				return;
			}
			#endif
			u8 idx;
			FunctionStatus_Enum function_st =  \
					knob_device_handle_report_event(&idx, event, x_pos, y_pos, 1);
			EndpointType_Enum type = get_endpoint_type_follow_model_index(idx);

			if(function_st == RT_SUCCESS  \
						&& knob_par.knob_extend_par.is_busy == false) {
				knob_set_brush_image(knob_par.ui_mode);
			}
			else if(function_st == RT_ACTIVATED) {
				if(type == TYPE_SCENE) {
					knob_display_notify_with_time_length(
								NOTI_SCENE_ACTIVATED, NOTIFY_SCENE_ACTIVE_TIMEOUT_MS
							);
				}
			}
			else if(function_st == RT_INVALID_TIME) {
				if(type == TYPE_SCENE) {
					knob_display_notify_with_time_length(
								 NOTI_INVALID_TIME, NOTIFY_SCENE_ACTIVE_TIMEOUT_MS
							 );
				}
			}
		}
		else if(knob_par.screen == DISPLAY_CONFIGURATION_SCREEN) {
			if(knob_handle_event_in_configuration_mode(event, x_pos, y_pos) == -1) {
				start_reboot();
			}
		}
    }
}

/**
 * @func    knob_get_image_index_from_notify_type
 * @brief
 * @param
 * @retval  None
 */
static u16 knob_get_image_index_from_notify_type(KnobNotifyType_Enum notify_type, u8* pos)
{
    foreach_arr(i, notify_index_arr) {
        if(notify_index_arr[i].type == notify_type) {
            *pos = i;
            return notify_index_arr[i].index;
        }
    }
    return IMAGE_INDEX_UNKNOWN;
}

/**
 * @func    knob_display_notify_whith_time_length
 * @brief
 * @param
 * @retval  None
 */
void knob_display_notify_with_time_length(KnobNotifyType_Enum notify_type, u32 time_len_ms)
{
    if(notify_type == NOTI_EXIT) {
        if(knob_par.knob_extend_par.is_busy == true) {
            DBG_KNOB_SEND_STR("\n KNOB NOTI_EXIT");
            knob_par.knob_extend_par.is_busy = false;
            if(knob_display_par.awake_source == AWAKE_SRC_BY_OUTPUT) {
				knob_display_par.current_active_timeout_s = 0;
			}
			else {
				knob_set_brush_image(knob_par.ui_mode);
				knob_display_par.disable_refresh_time = true;
			}
            // Stop ring
            knob_ring_running.is_active = false;
            knob_ring_turn_off();
        }
        DBG_KNOB_SEND_STR("\n ------ SUCCESS");
        return;
    }
    u8 pos;
    u16 image_index =  \
            knob_get_image_index_from_notify_type(notify_type, &pos);

    DBG_KNOB_SEND_STR("\n knob_display_notify_with_time_length: ");
    DBG_KNOB_SEND_HEX(image_index);

    if(image_index != IMAGE_INDEX_UNKNOWN)
    {
        control_fill_background_t message;
        message.rsp_status_code = KNOB_STATUS_SEND_FRAME;
        message.offset_adr = 0;
        message.figure_no_hi  = HI_U16(image_index);
        message.figure_no_lo  = LO_U16(image_index);
#if SCREEN_TYPE  == TYPE_HORIZONTAL
        if(notify_type == NOTI_SCENE_ACTIVATED) {
            message.x_codinate = 0x2500;
            message.y_codinate = 0x4700;
        }
        else if(notify_type == NOTI_INVALID_TIME) {
            message.x_codinate = 0x4200;
            message.y_codinate = 0xcc00;
        }
        else if(notify_type == NOTI_RESET_NETWORK) {
            message.x_codinate = 0x2000;
            message.y_codinate = 0xbb00;
        }
        else if(notify_type == NOTI_RESET_TO_FACTORY) {
            message.x_codinate = 0x2000;
            message.y_codinate = 0x9b00;
        }
#else
        if(notify_type == NOTI_SCENE_ACTIVATED) {
            message.x_codinate = 0x4700;
            message.y_codinate = 0x2500;
        }
        else if(notify_type == NOTI_INVALID_TIME) {
            message.x_codinate = 0xcc00;
            message.y_codinate = 0x4200;
        }
        else if(notify_type == NOTI_RESET_NETWORK) {
            message.x_codinate = 0xbb00;
            message.y_codinate = 0x2000;
        }
        else if(notify_type == NOTI_RESET_TO_FACTORY) {
            message.x_codinate = 0x9b00;
            message.y_codinate = 0x2000;
        }
#endif
        knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, (u8*)&message, sizeof(control_fill_background_t), true);

        // Ring led
        u32 ring_time = time_len_ms;
        u16 interval = RING_DEFAULT_BLINK_INTERVAL_MS;
        // Confirm later
        if(notify_index_arr[pos].mode == RING_LED_MODE_BLINK) {
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                      notify_index_arr[pos].color, 0, interval, ring_time, true);
        }
        else if(notify_index_arr[pos].mode == RING_LED_MODE_ON) {
            knob_set_ring_command(RING_LED_MODE_ON,  \
                      notify_index_arr[pos].color, 0, 0, ring_time, true);
        }
        // Set busy
        knob_par.knob_extend_par.is_busy = true;
        knob_par.knob_extend_par.busy_start_t_ms = clock_time_ms();
        knob_par.knob_extend_par.busy_time_len_ms = notify_index_arr[pos].time_len;
        knob_par.knob_extend_par.notify_type = notify_type;

        // Update active timeout
        if(knob_display_par.is_activated == false) {
            u16 tmp_s = (u16)knob_par.knob_extend_par.busy_time_len_ms/1000;
            if(knob_display_par.current_active_timeout_s > tmp_s) {
                knob_display_par.current_active_timeout_s = tmp_s;
            }
            knob_display_par.awake_source = AWAKE_SRC_BY_OUTPUT;
        }
        knob_display_par.disable_refresh_time = true;

        DBG_KNOB_SEND_STR("\n ### Show notify image ###:  ");
        DBG_KNOB_SEND_NUM(notify_index_arr[pos].time_len);
    }
}

/**
 * @func    knob_handle_busy_timeout
 * @brief
 * @param
 * @retval  None
 */
static void knob_handle_busy_timeout(void)
{
    if(knob_par.knob_extend_par.is_busy == true) {
        if(clock_time_get_elapsed_time(   \
                knob_par.knob_extend_par.busy_start_t_ms) > knob_par.knob_extend_par.busy_time_len_ms) {
        	if(knob_display_par.awake_source == AWAKE_SRC_BY_OUTPUT) {
				knob_display_par.current_active_timeout_s = 0;
				knob_par.knob_extend_par.is_busy = false;
			}
			else {
				knob_refresh_current_screen_and_clear_busy();
			}
        }
    }
}

/**
 * @func    knob_set_company_identify_delay
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_company_identify_delay(void)
{
	knob_set_company_identify_brush_image();
	CycleFunc_remove(knob_set_company_identify_delay);
}

/**
 * @func    knob_close_the_bluetooth_delay
 * @brief
 * @param
 * @retval  None
 */
static void knob_close_the_bluetooth_delay(void)
{
	knob_close_the_bluetooth();
	CycleFunc_remove(knob_close_the_bluetooth_delay);
}

/**
 * @func    knob_handle_rx_message_cmd
 * @brief
 * @param
 * @retval  None
 */
void knob_handle_rx_message_cmd(knob_message_format_t* p)
{
    //DBG_KNOB_SEND_STR("\n knob_handle_rx_message_cmd: ");
    //DBG_KNOB_SEND_ONE_BYTE_HEX(p->cmd_id);

    switch(p->cmd_id)
    {
        case KNOB_REPORT_EVENT_CMD:
        {
        	if(fact_is_active() == true) {
        		break;
        	}
            knob_uart_union_t* p_evt = (knob_uart_union_t*)p->data;
            u8 event = p_evt->knob_report_status.key_status;
            DBG_KNOB_SEND_STR("\n KNOB_REPORT_EVENT_CMD: ");
            DBG_KNOB_SEND_INT(event);


#ifdef  DEBUG_KNOB
            if(event == EVENT_TOUCH_LONG_PRESS) {
            	DBG_KNOB_SEND_STR("\n *****************************EVENT_TOUCH_LONG_PRESS");
            }
#endif

#if 0
            // Reset factory
            if(event == EVENT_LONG_PUSH) {
            	if(reset_par.is_active == false) {
        			knob_set_ring_command(RING_LED_MODE_BLINK, \
        					RING_LED_COLOR_RED, 2, 500, CONFIRM_RESET_TIMEOUT_MS, true);
        			reset_par.is_active = true;
        			reset_par.active_start_t_ms = clock_time_ms();
        			return;
            	}
            }
            if(reset_par.is_active == true) {
            	if(event == EVENT_NUMBER) {
        			knob_set_ring_command(RING_LED_MODE_ON, \
        					RING_LED_COLOR_PINK, 0, 0, CONFIRM_RESET_TIMEOUT_MS, true);
        			reset_par.active_start_t_ms = clock_time_ms();
            	}
            	else if(event == EVENT_SHORT_PUSH) {
            		if(!clock_time_exceed_ms(reset_par.active_start_t_ms, CONFIRM_RESET_TIMEOUT_MS)) {
            			setup_factory_reset_with_delay(true);
            			knob_ring_running.is_active = false;
            			knob_set_ring_command(RING_LED_MODE_OFF, \
            			        	RING_LED_COLOR_NONE, 0, 0, 0, true);
                        return;
            		}
            	}
            }
#else
            if(event == EVENT_LONG_PUSH) {
            	if(knob_par.screen != DISPLAY_CONFIGURATION_SCREEN) {
            		knob_config_mode_init();
            	}
            }
#endif
            if(event == EVENT_NUMBER) {
                break;
            }
            knob_display_par.current_active_timeout_s = knob_config.inactive_timeout.timeout_s;
            knob_display_par.awake_source = AWAKE_SRC_BY_USER;
            if(knob_display_par.is_activated == false) {
                knob_set_brush_image(knob_par.ui_mode);
                break;
            }
            if(knob_par.knob_extend_par.is_busy == true) {
#if KNOB_FORCE_CLEAR_BUSY_ENABLE
                // Check change to clock mode
                knob_uart_union_t* p_evt = (knob_uart_union_t*)p->data;
                u8 event = p_evt->knob_report_status.key_status;
                if(event == EVENT_SHORT_PUSH) {
                    knob_par.screen = DISPLAY_CLOCK_SCREEN;
                    knob_force_end_notify(knob_par.knob_extend_par.notify_type);
                    break;
                }
#endif
                if(clock_time_get_elapsed_time(   \
                        knob_par.knob_extend_par.busy_start_t_ms) > knob_par.knob_extend_par.busy_time_len_ms) {
                    knob_par.knob_extend_par.is_busy = false;
                    knob_set_brush_image(knob_par.ui_mode);
                }
                break;
            }
            DBG_KNOB_SEND_STR("\n ^^^ KNOB_REPORT_EVENT_CMD");
            knob_handle_report_event((knob_uart_union_t*)p->data);
            break;
        }
        case KNOB_REPORT_FILL_IMAGES_FINISHED:
            DBG_KNOB_SEND_STR("\n KNOB_REPORT_FILL_IMAGES_FINISHED");
            knob_refresh_screen(KNOB_SCREEN_ON);
            break;

        case KNOB_CONNECTION_DISCONNECTION_CMD:
            if(p->data[0] == KNOB_ACK) {
                if(knob_par.connect_status == KNOB_DISCONNECTED) {
                    knob_par.connect_status = KNOB_CONNECTED;
                    if(knob_power_on_flag == true)
                    {
                        knob_power_on_flag = false;
                        knob_update_display_screen_brightness();
                        knob_set_black_background();
                        CycleFunc_add(knob_set_company_identify_delay, TIMER_1S);
                        DBG_KNOB_SEND_STR("\n ############## Show logo company");
                        CycleFunc_add(knob_close_the_bluetooth_delay, TIMER_10S);
                    }
                    else {
                        knob_set_brush_image(knob_par.ui_mode);
                    }
                    DBG_KNOB_SEND_STR("\n ******************* KNOB_CONNECTION_DISCONNECTION_CMD");
                }
            }
            break;

        default:
            break;
    }
}

/**
 * @func    knob_push_ring_cmd_to_fifo
 * @brief
 * @param
 * @retval  None
 */
bool knob_push_ring_cmd_to_fifo(knob_ring_t *knob_ring_cmd, bool reset_fifo)
{
    if(knob_ring_cmd != NULL) {
        if(reset_fifo == true) {
            FifoFlush(&fifo_ring_commands);
        }
        if(FifoPush(&fifo_ring_commands, knob_ring_cmd)) {
            return true;
        }
    }
    return false;
}

/**
 * @func    knob_force_inactive_current_led_command
 * @brief
 * @param
 * @retval  None
 */
void knob_force_inactive_current_led_command(void)
{
	 knob_ring_running.is_active = false;
}

/**
 * @func    knob_set_ring_command
 * @brief
 * @param
 * @retval  None
 */
int knob_set_ring_command(RingLedMode_enum mode,  \
        RingLedColor_enum color, uint8_t blink_time, u16 interval, u32 timeout, bool reset_fifo)
{
	DBG_KNOB_SEND_STR("\n ************************ knob_set_ring_command: ");
    if(mode >= RING_LED_MODE_UNKNOWN \
            || color >= RING_LED_COLOR_UNKNOWN) {
        return -1;
    }
    DBG_KNOB_SEND_STR("1");
    knob_ring_t knob_ring;
    knob_ring.mode = mode;
    knob_ring.color = color;
    knob_ring.blink_time = blink_time;
    knob_ring.blink_interval = interval;
    knob_ring.timeout = timeout;
    knob_push_ring_cmd_to_fifo(&knob_ring, reset_fifo);
    return 0;
}

/**
 * @func    knob_ring_turn_off
 * @brief
 * @param
 * @retval  None
 */
static void knob_ring_turn_off(void)
{
    knob_rgb_set(0, 0, 0);
}

/**
 * @func    knob_ring_refresh
 * @brief
 * @param
 * @retval  None
 */
static void knob_ring_refresh(void)
{
	u8 value = (0xFF*knob_config.led_brightness)/100;
	if(is_provision_success() == true) {
		knob_rgb_set(value, value, value);   // White
	}
	else {
		knob_rgb_set(value, 0, 0);   // Red
	}
}

/**
 * @func    knob_set_ring_color
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_ring_color(RingLedMode_enum color)
{
    switch(color)
    {
        case RING_LED_COLOR_RED:
            knob_rgb_set(VALUE_RING_LED_ON, 0, 0);
            break;

        case RING_LED_COLOR_GREEN:
            knob_rgb_set(0, VALUE_RING_LED_ON, 0);
            break;

        case RING_LED_COLOR_BLUE:
            knob_rgb_set(0, 0, VALUE_RING_LED_ON);
            break;

        case RING_LED_COLOR_WHITE:
            knob_rgb_set(VALUE_RING_LED_ON, VALUE_RING_LED_ON, VALUE_RING_LED_ON);
            break;

        case RING_LED_COLOR_PINK:
        	knob_rgb_set(VALUE_RING_LED_ON, 0, VALUE_RING_LED_ON);
        	break;

        case RING_LED_COLOR_LOW:
        	knob_rgb_set(1, 1, 1);
        	break;

        case RING_LED_COLOR_NONE:
            knob_rgb_set(10, 10, 10);
            break;
    }
    knob_ring_running.data.current_color = color;
}


/**
 * @func    ring_toggle
 * @brief
 * @param
 * @retval  None
 */
static void ring_toggle(void)
{
    RingLedColor_enum color = RING_LED_COLOR_NONE;
    switch(knob_ring_running.data.color)
    {
        case RING_LED_COLOR_RED:
            if(knob_ring_running.data.current_color == RING_LED_COLOR_RED) {
                color = RING_LED_COLOR_LOW;
            }
            else {
                color = RING_LED_COLOR_RED;
            }
            break;

        case RING_LED_COLOR_GREEN:
            if(knob_ring_running.data.current_color == RING_LED_COLOR_GREEN) {
                color = RING_LED_COLOR_LOW;
            }
            else {
                color = RING_LED_COLOR_GREEN;
            }
            break;

        case RING_LED_COLOR_BLUE:
            if(knob_ring_running.data.current_color == RING_LED_COLOR_BLUE) {
                color = RING_LED_COLOR_LOW;
            }
            else {
                color = RING_LED_COLOR_BLUE;
            }
            break;

        case RING_LED_COLOR_PINK:
        	DBG_KNOB_SEND_STR("\n --- Blink RING_LED_COLOR_PINK: ");

        	DBG_KNOB_SEND_INT(knob_ring_running.data.blink_time);
        	DBG_KNOB_SEND_STR(", ");


            if(knob_ring_running.data.current_color == RING_LED_COLOR_PINK) {
                color = RING_LED_COLOR_LOW;
                DBG_KNOB_SEND_INT(1);
            }
            else {
                color = RING_LED_COLOR_PINK;
                DBG_KNOB_SEND_INT(2);
            }
            break;

        case RING_LED_COLOR_WHITE:
            if(knob_ring_running.data.current_color == RING_LED_COLOR_WHITE) {
                color = RING_LED_COLOR_LOW;
            }
            else {
                color = RING_LED_COLOR_WHITE;
            }
            break;

        case RING_LED_COLOR_RGB:
            if(knob_ring_running.data.current_color == RING_LED_COLOR_RED) {
                color = RING_LED_COLOR_GREEN;
            }
            else if(knob_ring_running.data.current_color == RING_LED_COLOR_GREEN) {
                color = RING_LED_COLOR_BLUE;
            }
            else {
                color = RING_LED_COLOR_RED;
            }
            break;

        case RING_LED_COLOR_RW:
            if(knob_ring_running.data.current_color == RING_LED_COLOR_RED) {
                color = RING_LED_COLOR_WHITE;
            }
            else {
                color = RING_LED_COLOR_RED;
            }
            break;

        default: return;
    }
    knob_set_ring_color(color);
}

/**
 * @func    knob_ring_toggle_handle
 * @brief
 * @param
 * @retval  None
 */
static void knob_ring_toggle_handle(void)
{
	static u32 ring_blink_scan_timer = 0;
	if(clock_time_get_elapsed_time(ring_blink_scan_timer) > TIMER_10MS) {
		if(knob_ring_running.data.blink_time > 0) {
			   if((clock_time_get_elapsed_time(knob_ring_running.toggle_led_last_time)
							> knob_ring_running.data.blink_interval)) {
				   knob_ring_running.toggle_led_last_time = clock_time_ms();
				   knob_ring_running.data.blink_time--;
				   if(knob_ring_running.data.blink_time == 0) {
					   knob_ring_running.is_active = false;
#if RING_LED_DEFAULT_COLOR_EN
					   knob_ring_refresh();
#else
					   knob_set_ring_color(RING_LED_COLOR_LOW);
#endif
				   }
				   else {
					   ring_toggle();
				   }
			   }
		}
		ring_blink_scan_timer = clock_time_ms();
	}
}

/**
 * @func    knob_ring_effect_handle
 * @brief
 * @param
 * @retval  None
 */
static void knob_ring_effect_handle(void)
{
	static u32 fifo_not_empty_st_time_ms = 0;
    if(knob_ring_running.is_active == false) {
        // Check ring_fifo
        if (FifoIsEmpty(&fifo_ring_commands) == false)
        {
        	if(knob_ring_running.active_last_t_ms != 0) {
        		if(!clock_time_exceed_ms(knob_ring_running.active_last_t_ms, TIMER_500MS)) {
        			return;
        		}
        		knob_ring_running.active_last_t_ms = 0;
        	}
        	fifo_not_empty_st_time_ms = clock_time_ms();
            knob_ring_t knob_ring;
            if(FifoPop(&fifo_ring_commands, &knob_ring) == true) {
                memcpy(&knob_ring_running.data, &knob_ring, sizeof(knob_ring_t));
                // on/off/blink
                if(knob_ring_running.data.mode == RING_LED_MODE_ON) {
                    knob_set_ring_color(knob_ring_running.data.color);
                    DBG_KNOB_SEND_STR("\n ************* knob_ring_effect_handle: RING_LED_MODE_ON");
                }
                else if(knob_ring_running.data.mode == RING_LED_MODE_OFF) {
                    knob_set_ring_color(RING_LED_COLOR_NONE);
                    knob_ring_running.is_active = false;
                    knob_ring_turn_off();
                    DBG_KNOB_SEND_STR("\n ************* knob_ring_effect_handle: RING_LED_MODE_OFF");
                }
                else if(knob_ring_running.data.mode == RING_LED_MODE_BLINK) {
                    RingLedColor_enum color = RING_LED_COLOR_NONE;
                    knob_set_ring_color(color);
                    knob_ring_running.toggle_led_last_time = clock_time_ms();
                }

                knob_ring_running.is_active = true;
                knob_ring_running.start_t_ms = clock_time_ms();

                // Control RGB
                DBG_KNOB_SEND_STR("\n Knob ring active: ");
                DBG_KNOB_SEND_INT(knob_ring_running.data.blink_interval);
                DBG_KNOB_SEND_STR(", ");
                DBG_KNOB_SEND_NUM(knob_ring_running.start_t_ms);
                DBG_KNOB_SEND_STR(", ");
                DBG_KNOB_SEND_NUM(knob_ring_running.data.timeout);
            }
        }
#if !RING_LED_DEFAULT_COLOR_EN
        else {
        	if(knob_ring_running.data.current_color == RING_LED_COLOR_LOW) {
        		if(clock_time_exceed_ms(fifo_not_empty_st_time_ms, TIMER_5S)) {
        			DBG_KNOB_SEND_STR("\n Set Color None");
        			knob_set_ring_color(RING_LED_COLOR_NONE);
        		}
        	}
        }
#endif
    }
    else {
    	knob_ring_running.active_last_t_ms = clock_time_ms();
    	if(knob_ring_running.data.mode == RING_LED_MODE_BLINK) {
    		knob_ring_toggle_handle();
    	}
    	else {
			if(clock_time_get_elapsed_time(   \
					knob_ring_running.start_t_ms) > knob_ring_running.data.timeout) {
				knob_ring_running.is_active = false;
#if RING_LED_DEFAULT_COLOR_EN
				knob_ring_refresh();
#else
				knob_ring_turn_off();
#endif
			}
    	}
    }
}

/**
 * @func    knob_serial_transmit_handle
 * @brief
 * @param
 * @retval  None
 */
static void knob_serial_transmit_handle(void)
{
    if (FifoIsEmpty(&fifo_knob_commands) == false) {
        if(clock_time_get_elapsed_time(knob_push_payload_st_t_ms) >= knob_transmit_interval_ms) {

        	DBG_KNOB_SEND_STR("\n FIFO_ITEM: ");
        	DBG_KNOB_SEND_INT(fifo_knob_commands.head);
        	DBG_KNOB_SEND_STR(", ");
        	DBG_KNOB_SEND_INT(fifo_knob_commands.tail);


            knob_serial_t temp;
            if(FifoPop(&fifo_knob_commands, &temp) == true) {
                my_fifo_push_hci_tx_fifo(temp.payload, temp.len, 0, 0);

                #if defined  DEBUG_KNOB
                DBG_KNOB_SEND_STR("\n ####### TX: ");
                DBG_KNOB_SEND_INT(temp.len);
				#endif

#if defined  DEBUG_KNOB && 0
                DBG_KNOB_SEND_STR("\n FIFO: ");
                foreach(i, temp.len) {
                	DBG_KNOB_SEND_STR(" ");
                	DBG_KNOB_SEND_ONE_BYTE_HEX(temp.payload[i]);
                }
#endif
                if(temp.payload[1] == KNOB_BRUSH_IMAGE_CMD) {
                    knob_transmit_interval_ms = KNOB_TRANSMIT_INTERVAL_MS_MAX;
                    DBG_KNOB_SEND_STR("\n ************** INTERVAL: 300MS");
                }
                else {
                    knob_transmit_interval_ms = KNOB_TRANSMIT_INTERVAL_MS_MIN;
                    DBG_KNOB_SEND_STR("\n ************** INTERVAL: 50MS");
                }
            }
            // Reset time
            knob_push_payload_st_t_ms = clock_time_ms();
        }
    }
}

/*
 * @func    knob_send_turn_on_connection_periodic
 * @brief
 * @param
 * @retval  None
 */
static void knob_send_turn_on_connection_periodic(void)
{
   static u32 send_turn_on_connection_st_t_ms = 0;
   if(knob_par.connect_status == KNOB_DISCONNECTED) {
       if(clock_time_exceed_ms(send_turn_on_connection_st_t_ms, TIMER_2S)) {
           knob_turn_on_comunication();
           send_turn_on_connection_st_t_ms = clock_time_ms();
       }
   }
   else {
       if(clock_time_exceed_ms(send_turn_on_connection_st_t_ms, TIMER_15Min)) {
           knob_turn_on_comunication();
           send_turn_on_connection_st_t_ms = clock_time_ms();
       }
   }
}

/**
 * @func    knob_set_display_screen_brightness
 * @brief
 * @param
 * @retval  None
 */
static void knob_update_display_screen_brightness(void)
{
    // standardize
    if(knob_config.display_brightness < KNOB_DISPLAY_BRIGHTNESS_MIN_PERCENT) {
        knob_config.display_brightness = KNOB_DISPLAY_BRIGHTNESS_MIN_PERCENT;
    }
    else if(knob_config.display_brightness > KNOB_DISPLAY_BRIGHTNESS_MAX_PERCENT) {
        knob_config.display_brightness = KNOB_DISPLAY_BRIGHTNESS_MAX_PERCENT;
    }
    // 1 - 100 to 20 - 250
    u8 set_value = (u8)((knob_config.display_brightness*(KNOB_INTERNAL_BRIGHTNESS_MAX  \
                    - KNOB_INTERNAL_BRIGHTNESS_MIN))/100) + KNOB_INTERNAL_BRIGHTNESS_MIN;
    if(set_value > KNOB_INTERNAL_BRIGHTNESS_MAX) {
        set_value = KNOB_INTERNAL_BRIGHTNESS_MAX;
    }
    DBG_KNOB_SEND_STR("\n --- set_value: ");
    DBG_KNOB_SEND_INT(set_value);
    // Update to knob
    u8 p[2];
    p[0] = KNOB_STATUS_SEND_FRAME;
    p[1] = set_value;
    knob_send_packet_command(0x39, p, sizeof(p), true);
}

/**
 * @func    knob_handle_refresh_time
 * @brief
 * @param
 * @retval  None
 */
static void knob_handle_refresh_time(void)
{
    if(knob_display_par.is_activated == false) {
        return;
    }
    if((knob_par.screen == DISPLAY_CLOCK_SCREEN)  \
                && (knob_par.knob_extend_par.is_busy == false)) {
    	knob_display_par.awake_source = AWAKE_SRC_BY_TIMER;
        knob_set_brush_image(knob_par.ui_mode);
    }
}

/**
 * @func    knob_set_black_background
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_black_background(void)
{
    u8 index = 0;
    u8 payload[24];
    payload[index++] = KNOB_STATUS_SEND_FRAME;
    payload[index++] = 0;
    payload[index++] = HI_U16(BACKGROUND_BLACK);
    payload[index++] = LO_U16(BACKGROUND_BLACK);
    payload[index++] = 0;
    payload[index++] = 0;
    payload[index++] = 0;
    payload[index++] = 0;
    knob_send_packet_command(KNOB_BRUSH_IMAGE_CMD, payload, index, true);
}

/**
 * @func    knob_check_exit_configuration_mode
 * @brief
 * @param
 * @retval  None
 */
static void knob_check_exit_configuration_mode(void)
{
	if(knob_par.screen == DISPLAY_CONFIGURATION_SCREEN) {
		if(clock_time_exceed_ms(config_par.start_t_ms, CONFIGURATION_TIME_OUT_MS)) {
			if(config_par.save_screen != DISPLAY_CONFIGURATION_SCREEN) {
				knob_par.screen = config_par.save_screen;
			}
			else {
				knob_par.screen = DISPLAY_CONTROL_SCREEN;
			}
			knob_set_brush_image(knob_par.ui_mode);
		}
	}
}

/**
 * @func    knob_check_on_off_display
 * @brief
 * @param
 * @retval  None
 */
static void knob_check_on_off_display(void)
{
    if(knob_par.knob_extend_par.is_busy == true   \
    		|| knob_par.screen == DISPLAY_CONFIGURATION_SCREEN) {
        return;
    }
    if(knob_display_par.is_activated == true) {
        if(knob_config.inactive_timeout.enable == true) {
        	if (FifoIsEmpty(&fifo_knob_commands) == false) {
                return;
            }
        	if(!clock_time_exceed_ms(knob_push_payload_st_t_ms, TIMER_1S)) {
        		return;
        	}
#if defined DEBUG_KNOB && 0
            static u32 tmp_ms = 0;
            if(clock_time_exceed_ms(tmp_ms, TIMER_1S)) {
                DBG_KNOB_SEND_STR("\n knob_display_par.knob_active_st_time_s: ");
                DBG_KNOB_SEND_INT((u16)knob_display_par.knob_active_st_time_s);
                DBG_KNOB_SEND_STR(", current_active_timeout_s: ");
                DBG_KNOB_SEND_INT(knob_display_par.current_active_timeout_s);
                DBG_KNOB_SEND_STR(", ");
                DBG_KNOB_SEND_INT((u16)clock_time_s());
                tmp_ms = clock_time_ms();
            }
#endif
            if(clock_time_exceed_s(   \
                    knob_display_par.knob_active_st_time_s, knob_display_par.current_active_timeout_s)) {
                knob_display_par.current_active_timeout_s = knob_config.inactive_timeout.timeout_s;
                knob_display_par.awake_source = AWAKE_SRC_UNKNOWN;
                knob_refresh_screen(KNOB_SCREEN_OFF);
                DBG_KNOB_SEND_STR("\n ***********************************************************************");
            }
        }
    }
    else {
    	if(clock_time_exceed_s( \
    			knob_display_par.refresh_st_t_s, KNOB_REFRESH_INTERVAL_S)) {
    		DBG_KNOB_SEND_STR("\n #################### REFRESH: 1 #################### ");
    		knob_refresh_screen(KNOB_SCREEN_OFF);
    	}
    }
}

/**
 * @func    knob_handle_rx_message_received
 * @brief
 * @param
 * @retval  None
 */
void knob_handle_rx_message_received( u8* p_buf, int len )
{
	DBG_KNOB_SEND_STR("\n REC: ");
	foreach(i, len) {
		DBG_KNOB_SEND_STR(" ");
		DBG_KNOB_SEND_ONE_BYTE_HEX(p_buf[i]);
	}

	int index = 0;
	knob_message_format_t rx_message;
	while(index < len)
	{
		// SOF_HI
		if(*(p_buf + index++) != KNOB_SOF) {
			continue;
		}
		rx_message.sof = KNOB_SOF;
		// Command ID
		rx_message.cmd_id = *(p_buf + index++);
		// Length
		rx_message.len_hi = *(p_buf + index++);
		rx_message.len_lo = *(p_buf + index++);

		u16 length = (u16)(rx_message.len_hi << 8)|rx_message.len_lo;

		// Check valid length
		if(length > KNOB_MAX_PAYLOAD_LEN) {
			return;
		}
		// Data
		foreach(i, length) {
			rx_message.data[i] = *(p_buf + index++);
		}
        // Calculator check sum
		u8 received_sum = *(p_buf + index++);
		u8 *p = &rx_message.cmd_id;
		u8 cSum = knob_caculator_check_sum(p, length+3);
		if(cSum == received_sum) {
			knob_handle_rx_message_cmd(&rx_message);
			continue;
		}
		else {
			DBG_KNOB_SEND_STR("\n Checksum failure");
		}
	}
}



/**
 * @func    knob_set_brush_image_with_navigation
 * @brief
 * @param
 * @retval  None
 */
static void knob_set_brush_image_with_navigation(void)
{
    DBG_KNOB_SEND_STR("\n knob_set_brush_image_with_navigation: ");

    if(knob_par.screen == DISPLAY_CONTROL_SCREEN) {
    	u8 idx = element_get_current_index();
    	EndpointType_Enum type = get_endpoint_type_follow_model_index(idx);
		navigation_is_active = true;
    	switch(type)
    	{
			case TYPE_CCT:
			{
				cct_par_t* p_cct_par = knob_device_get_cct_par();
				if(p_cct_par->display_mode[idx] == DISPLAY_CCT_LIGHTNESS  \
						|| p_cct_par->display_mode[idx] == DISPLAY_CCT_TEMP) {
					knob_set_cct_brush_image(idx);
				}
				break;
			}
			case TYPE_DIM:
				knob_set_dim_brush_image(idx);
				break;

			case TYPE_CURTAIN:
				knob_set_curtain_brush_image(idx);
				break;

			case TYPE_AIR_CONDITIONER:
			{
				air_par_t* p_air_par = knob_device_get_air_par();
				if(p_air_par->display_mode[idx] == DISPLAY_AIR_MAIN) {
					knob_set_air_conditioner_brush_image(idx);
				}
				break;
			}
			case TYPE_AUDIO:
				knob_set_audio_brush_image(idx);
				break;
    	}
    }
}

/**
 * @func    knob_refresh_navigation_handle
 * @brief
 * @param
 * @retval  None
 */
static void knob_refresh_navigation_handle(void)
{
	if(refresh_navigation.enable == true) {
		if(clock_time_exceed_ms(refresh_navigation.start_t_ms, TIMER_2S)) {
			knob_set_brush_image_with_navigation();
			refresh_navigation.enable = false;
			DBG_KNOB_SEND_STR("\n ++++++++knob_refresh_navigation_handle");
		}
	}
}

#if 0
/**
 * @func    knob_clean_reset_flag_proc
 * @brief
 * @param
 * @retval  None
 */
static void knob_clean_reset_flag_proc(void)
{
	if(reset_par.is_active == true) {
		if(clock_time_exceed_ms(reset_par.active_start_t_ms, CONFIRM_RESET_TIMEOUT_MS)) {
			reset_par.is_active = false;
		}
	}
}
#endif

/**
 * @func    knob_is_init_success
 * @brief
 * @param
 * @retval  None
 */
bool knob_is_init_success(void)
{
	return knob_par.init_success;
}

/**
 * @func    knob_proc
 * @brief
 * @param
 * @retval  None
 */
void knob_proc(void)
{
	if(knob_par.init_success == false) {
		return;
	}
    if(fact_is_active() == false) {
        knob_rotate_proc();
        knob_refresh_navigation_handle();
        knob_send_turn_on_connection_periodic();
        knob_handle_busy_timeout();
        // On/off display
        knob_check_on_off_display();
        knob_check_exit_configuration_mode();
    }
    knob_ring_effect_handle();
    knob_serial_transmit_handle();
#if 0
    knob_clean_reset_flag_proc();
#endif
}

/**
 * @func    knob_init
 * @brief
 * @param
 * @retval  None
 */
void knob_init_delay(void)
{
	knob_par.init_success = true;
    knob_par.knob_extend_par.is_busy = false;
    // Knob ring UI buffer initial
    FifoInit(&fifo_ring_commands, knob_ring_buffer, sizeof(knob_ring_t), BUF_RING_CMD_SIZE);
    knob_ring_running.is_active = false;
    // Knob serial buffer
    FifoInit(&fifo_knob_commands, knob_serial_buffer, sizeof(knob_serial_t), BUF_KNOB_CMD_SIZE);
    knob_turn_on_comunication();
    knob_setup_long_push_duration(KNOB_LONG_PUSH_DURATION_MS);
    // time stamp
    timestamp_init(knob_handle_refresh_time);
    // Restore all configuration
    knob_restore_all_config();
    CycleFunc_remove(knob_init_delay);
}
