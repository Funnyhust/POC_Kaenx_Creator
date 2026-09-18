/*
 * knob.h
 *
 *  Created on: Jul 23, 2025
 *      Author: DungTranBK
 */

#ifndef KNOB_H_
#define KNOB_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "knob_common.h"

/******************************************************************************/
/*                       EXPORT TYPE AND DEFINITION                           */
/******************************************************************************/

#define KNOB_SOF                 0xA5

#if CHANGE_DEVICE_NAME_EN
#define KNOB_MAX_PAYLOAD_LEN     200
#else
#define KNOB_MAX_PAYLOAD_LEN     80
#endif

#define KNOB_MIN_PAYLOAD_LEN     1

typedef struct {
    u8 sof;
    u8 cmd_id;
    u8 len_hi;
    u8 len_lo;
    u8 data[KNOB_MAX_PAYLOAD_LEN];
}knob_message_format_t;


typedef struct {
    u8 r;
    u8 g;
    u8 b;
}knob_rgb_t;

enum  {
    RING_LED_MODE_OFF,
    RING_LED_MODE_ON,
    RING_LED_MODE_BLINK,
    RING_LED_MODE_REFRESH,
    RING_LED_MODE_UNKNOWN,
};
typedef uint8_t RingLedMode_enum;

enum  {
    RING_LED_COLOR_RED,
    RING_LED_COLOR_GREEN,
    RING_LED_COLOR_BLUE,
    RING_LED_COLOR_WHITE,
    RING_LED_COLOR_RGB,
    RING_LED_COLOR_RW,
    RING_LED_COLOR_PINK,
    RING_LED_COLOR_NONE,
    RING_LED_COLOR_LOW,
    RING_LED_COLOR_UNKNOWN,
};
typedef uint8_t RingLedColor_enum;


typedef struct {
    RingLedMode_enum mode;
    RingLedColor_enum color;
    uint8_t  blink_time;
    uint16_t blink_interval;
    uint32_t timeout;
    RingLedColor_enum current_color;

    /*
    knob_rgb_t  rgb;
    uint16_t interval_ms;
    */
}knob_ring_t;

#define RING_LED_DEFAULT    { RING_LED_MODE_BLINK, LED_COLOR_RED, 0xFF, 300 }

/*
 * typedef and definition for knob
 */
#define KNOB_STATUS_SEND_FRAME            0x00


#define KNOB_CONNECTION_DISCONNECTION_CMD 0x33
#define KNOB_BRUSH_IMAGE_CMD              0x34
#define KNOB_SCREEN_REFRESH_CMD           0x37
#define KNOB_CONTROL_KNOB_DISPLAY_RGB     0x38
#define KNOB_SET_LONG_PUSH_DURATION       0x3A
#define KNOB_REPORT_EVENT_CMD             0x3C
#define KNOB_REPORT_FILL_IMAGES_FINISHED  0x3D

#define KNOB_CLOSE_THE_BLUETOOTH          0x41

#define KNOB_ACK                          0xFE
#define IMAGE_INDEX_UNKNOWN               0xFFFF

#define KNOB_LONG_PUSH_DURATION_MS        10000


enum {
    KNOB_SCREEN_OFF,
    KNOB_SCREEN_ON,
};

typedef u8 KnobScreenStatus_Enum;


enum {
    MODE_UNKNOWN,
    MODE_SWITCH,
    MODE_SCENE,
    MODE_CCT,
    MODE_DIM,
    MODE_CURTAIN,
    MODE_FAN,
    MODE_AIR_CONDITIONER,
    MODE_AUDIO,   // Audio
    MODE_BEGIN = MODE_SWITCH,
    MODE_END = MODE_AUDIO,
};
typedef u8 KnobUiMode_Enum;

enum {
	DISPLAY_LOGO_SCREEN,
	DISPLAY_CLOCK_SCREEN,
	DISPLAY_CONTROL_SCREEN,
	DISPLAY_CONFIGURATION_SCREEN,
	DISPLAY_UNKNOWN_SCREEN,
};
typedef u8 KnobDisplayScreen_Enum;


#define KNOB_BLINK_TIMEOUT_MS      20000

#define KNOB_NOTIFY_TIME_LEN_MS    3000
#define KNOB_SERIAL_QUEUE_ENABLE   1

#define BACKGROUND_OFF          0x03d9
#define BACKGROUND_ON           0x03d8


#define ICON_POWER_ON           0x03cb
#define ICON_POWER_OFF          0x03cc


#define ICON_SCENE_COMFORT      0x0064
#define ICON_SCENE_RELAX        0x0065
#define ICON_SCENE_SLEEP        0x0066
#define ICON_SCENE_COZY         0x0067
#define ICON_SCENE_ACTIVE       0x0068
#define ICON_SCENE_WARM         0x0069

#define ICON_SCENE_START           ICON_SCENE_COMFORT

#define NAVIGATION_IMAGE_OFFSET    0x03e9

#define NAVIGATION_AC_IMAGE_OFFSET 0x03ec
/*
 * Common
 */

#if SCREEN_TYPE == TYPE_VERTICAL
#define ICON_X_POSITION       0x000c
#define ICON_Y_POSITION       0x0085
#else
#define ICON_X_POSITION       0x0085
#define ICON_Y_POSITION       0x000c
#endif

#define BACKGROUND_BLACK      0x03da

/*
 * Fan
 */
#define ICON_FAN_OFF                  0x00c3
#define ICON_FAN_LEVEL_1              0x00bf
#define ICON_FAN_LEVEL_2              0x00c0
#define ICON_FAN_LEVEL_3              0x00c1
#define ICON_FAN_LEVEL_4              0x00c2
#define ICON_FAN_START                ICON_FAN_OFF

#define ICON_FAN_PANEL_OFF            0x00c4
#define ICON_FAN_PANEL_LEVEL_1        0x00c5
#define ICON_FAN_PANEL_LEVEL_2        0x00c6
#define ICON_FAN_PANEL_LEVEL_3        0x00c7
#define ICON_FAN_PANEL_LEVEL_4        0x00c8
#define ICON_FAN_PANEL_START          ICON_FAN_PANEL_OFF

/*
 * Music
 */
#define ICON_MUSIC_PLAY               0x00de
#define ICON_MUSIC_STOP               0x00de

#define ICON_PLAY                     0x00e0
#define ICON_PAUSE                    0x00df

#define ICON_PREVIOUS                 0x00e1
#define ICON_NEXT                     0x00e2

#define ICON_PLAY_ACTIVE              0x03e6
#define ICON_PAUSE_ACTIVE             0x03e5

#define ICON_PREVIOUS_ACTIVE          0x03e7
#define ICON_NEXT_ACTIVE              0x03e8

// CLOCK
#define ICON_OFFSET_DAY_OFF_WEEK      0x02e8
#define ICON_OFFSET_DAY_MONTH         0x02ef

#define ICON_OFFSET_MONTH             0x030e

#define ICON_OFFSET_HOUR              0x02ab
#define ICON_OFFSET_MINUTE            0x02ab

#define ICON_COLON                    0x02e7
#define ICON_DOUBLE_UNDERSCORE        0x03d4

#define ICON_COMMA                    0x03d8

#define ICON_PERCENT                  0x03ce

/*
 * CCT: Icon
 */

/*
 * LOGO
 */
#define ICON_LOGO_COMPANY             0x03ab

/*
 *  Air conditioning
 */
#define ICON_AC_ON                    0x00c9
#define ICON_AC_OFF                   0x00ca

// Swing mode
#define ICON_SWING_START_INDEX              0x014d
#define TEXT_SWING_START_INDEX              0x015b
#define TEXT_HIDDEN_SWING_START_INDEX       0x0154

// Air mode
#define ICON_AIR_MODE_START_INDEX           0x0162
#define TEXT_AIR_MODE_START_INDEX           0x016c
#define TEXT_HIDDEN_AIR_MODE_START_INDEX    0x0167


#define ICON_SYMBOL_CELCIUS                 0x03cf

#define ICON_AC_FAN                         0x00cb
#define ICON_AC_FAN_AUTO                    0x00cc
#define ICON_AC_FAN_LOW                     0x00cd
#define ICON_AC_FAN_MIDDLE                  0x00ce
#define ICON_AC_FAN_HIGH                    0x00cf
#define ICON_AC_FAN_START                   ICON_AC_FAN_AUTO

#define ICON_AC_SWING                       0x00d0
#define ICON_AC_SWING_AUTO                  0x00d1
#define ICON_AC_SWING_P0                    0x00d2
#define ICON_AC_SWING_P1                    0x00d3
#define ICON_AC_SWING_P2                    0x00d4
#define ICON_AC_SWING_P3                    0x00d5
#define ICON_AC_SWING_P4                    0x00d6
#define ICON_AC_SWING_STOP                  0x00d7
#define ICON_AC_SWING_START                 ICON_AC_SWING_AUTO

#define ICON_AC_MODE                        0x00d8
#define ICON_AC_MODE_AUTO                   0x00d9
#define ICON_AC_MODE_FAN                    0x00da
#define ICON_AC_MODE_HEAT                   0x00db
#define ICON_AC_MODE_COOL                   0x00dc
#define ICON_AC_MODE_DRY                    0x00dd
#define ICON_AC_MODE_START                  ICON_AC_MODE_AUTO


// Main
#define ICON_AC_MAIN_MODE_START             0x0414
#define ICON_AC_MAIN_FAN_START              0x0410


// End air

/*
 * List
 */
#define ICON_LIST_START_INDEX            0x03ac
#define TEXT_LIST_START_INDEX            0x03b4
#define TEXT_HIDDEN_LIST_START_INDEX     0x03bc

#define ICON_LIST_HIDDEN_START_INDEX     0x03c4

#define ICON_UNKNOWN                     0xFFFF
#define INDEX_UNKNOWN                    0xFF

/*
 * Select
 */
#define SELECT_CONTROL_TYPE_X_MIN        29
#define SELECT_CONTROL_TYPE_X_MAX        114

#define SELECT_CONTROL_TYPE_Y_MIN        183
#define SELECT_CONTROL_TYPE_Y_MAX        303


#define OFFSET_NO_TIME                   0x1A

#define KNOB_FORCE_CLEAR_BUSY_ENABLE     1

/*
 * FACT
 */
#define FACT_MODE_IS_ACTIVE_INDEX        0x03f0
#define FACT_RESULT_PASS_INDEX           0x03f1
#define FACT_RESULT_FAILURE_INDEX        0x03f2

#define FACT_KNOB_IS_OK_INDEX            0x0419

#if SCREEN_TYPE == TYPE_VERTICAL

#define TEST_MODE_X_POS  197
#define TEST_MODE_Y_POS  45

#define FACT_X_POS       146
#define FACT_Y_POS       50

#define KNOB_OK_X_POS    266
#define KNOB_OK_Y_POS    55
#else
#define TEST_MODE_X_POS      45
#define TEST_MODE_Y_POS      197

#define FACT_X_POS       50
#define FACT_Y_POS       146

#define KNOB_OK_X_POS    55
#define KNOB_OK_Y_POS    266
#endif

typedef void (*typeKnob_handle_change_ui_mode)(KnobUiMode_Enum ui_mode);

#define RING_LED_DEFAULT_COLOR_EN     1

#if SCREEN_TYPE == TYPE_VERTICAL

// 1. Reset network button
#define BTN_RESET_NETWORK_Y_MIN       18
#define BTN_RESET_NETWORK_Y_MAX       449
#define BTN_RESET_NETWORK_X_MIN       76
#define BTN_RESET_NETWORK_X_MAX       228

// 1. Reset to default configuration button
#define BTN_RESET_TO_DEFAULT_Y_MIN    18
#define BTN_RESET_TO_DEFAULT_Y_MAX    449
#define BTN_RESET_TO_DEFAULT_X_MIN    275
#define BTN_RESET_TO_DEFAULT_X_MAX    372

// 1. Back button
#define BTN_BACK_Y_MIN    196
#define BTN_BACK_Y_MAX    293
#define BTN_BACK_X_MIN    410
#define BTN_BACK_X_MAX    454


// 2. Agree button
#define BTN_AGREE_Y_MIN       100
#define BTN_AGREE_Y_MAX       388
#define BTN_AGREE_X_MIN       207
#define BTN_AGREE_X_MAX       296

// 2. Cancel button
#define BTN_CANCEL_Y_MIN       100
#define BTN_CANCEL_Y_MAX       388
#define BTN_CANCEL_X_MIN       345
#define BTN_CANCEL_X_MAX       436

#else
// 1. Reset network button
#define BTN_RESET_NETWORK_X_MIN       18
#define BTN_RESET_NETWORK_X_MAX       449
#define BTN_RESET_NETWORK_Y_MIN       76
#define BTN_RESET_NETWORK_Y_MAX       228

// 1. Reset to default configuration button
#define BTN_RESET_TO_DEFAULT_X_MIN    18
#define BTN_RESET_TO_DEFAULT_X_MAX    449
#define BTN_RESET_TO_DEFAULT_Y_MIN    275
#define BTN_RESET_TO_DEFAULT_Y_MAX    372

// 1. Back button
#define BTN_BACK_X_MIN    196
#define BTN_BACK_X_MAX    293
#define BTN_BACK_Y_MIN    410
#define BTN_BACK_Y_MAX    454


// 2. Agree button
#define BTN_AGREE_X_MIN       100
#define BTN_AGREE_X_MAX       388
#define BTN_AGREE_Y_MIN       207
#define BTN_AGREE_Y_MAX       296

// 2. Cancel button
#define BTN_CANCEL_X_MIN       100
#define BTN_CANCEL_X_MAX       388
#define BTN_CANCEL_Y_MIN       345
#define BTN_CANCEL_Y_MAX       436

#endif

#define SHOW_ACTIVE_BUTTON_TIME_LEN_MS   TIMER_250MS

/******************************************************************************/
/*                              EXPORT FUNCTION                               */
/******************************************************************************/
bool knob_is_init_success(void);
void knob_init_delay(void);
void knob_proc(void);
void knob_handle_rx_message_cmd(knob_message_format_t* p);
KnobUiMode_Enum knob_get_current_ui_mode(void);
bool knob_change_ui_mode(KnobUiMode_Enum ui_mode);
bool knob_push_ring_cmd_to_fifo(knob_ring_t *knob_ring_cmd, bool reset_fifo);
void knob_force_inactive_current_led_command(void);
int knob_set_ring_command(RingLedMode_enum mode,  \
        RingLedColor_enum color, uint8_t blink_time, u16 interval, u32 timeout, bool reset_fifo);
void knob_refresh_current_screen_and_clear_busy(void);
void knob_force_end_notify(KnobNotifyType_Enum notify_type);
FunctionStatus_Enum knob_handle_voice_command(u8 command_code);
void knob_handle_rx_message_received(u8* p_buf, int len);

int knob_handle_get_display_brightness(u8 model_idx, u8* par, int par_len);
int knob_handle_set_display_brightness(u8 model_idx, u8* par, int par_len);
int knob_handle_get_inactive_timeout(u8 model_idx, u8* par, int par_len);
int knob_handle_set_inactive_timeout(u8 model_idx, u8* par, int par_len);


int knob_handle_get_led_brightness(u8 model_idx, u8* par, int par_len);
int knob_handle_set_led_brightness(u8 model_idx, u8* par, int par_len);

int knob_handle_set_config_screen_for_knob(u8 model_idx, u8* par, int par_len);

int knob_response_display_brightness(u8 model_idx);
int knob_response_led_brightness(u8 model_idx);
int knob_handle_response_inactive_timeout(u8 model_idx);

void knob_brush_single_image(u16 image_index, u16 x_pos, u16 y_pos);

void knob_brush_test_rf_status(bool is_pass);

void knob_refresh_sceen_with_model_idx(u8 idx);
void knob_handle_disable_visibility_current_endpoint(u8 idx);

#endif /* KNOB_H_ */
