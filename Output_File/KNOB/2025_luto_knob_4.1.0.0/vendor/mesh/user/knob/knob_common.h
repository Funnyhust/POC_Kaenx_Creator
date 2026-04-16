/*
 * knob_common.h
 *
 *  Created on: Jul 23, 2025
 *      Author: DungTranBK
 */

#ifndef KNOB_COMMON_H_
#define KNOB_COMMON_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "../utilities.h"
#include "tl_common.h"
/******************************************************************************/
/*                       EXPORT TYPE AND DEFINITION                           */
/******************************************************************************/
#define POSITION_UNKNOWN 0xFFFF

enum {
    BUTTON_TYPE_PHYSICAL = 0,
    BUTTON_TYPE_TOUCH = 1,
};
typedef u8 KnobButtonType_Enum;

enum {
    EVENT_NUMBER,
    EVENT_SHORT_PUSH,
    EVENT_LONG_PUSH,
    EVENT_CCW_ROTATE,
    EVENT_CW_ROTATE,
    EVENT_TOUCH_SHORT_PRESS,
    EVENT_TOUCH_LONG_PRESS,
    EVENT_SWIPE_LEFT,
    EVENT_SWIPE_RIGHT,
    EVENT_SWIPE_UP,
    EVENT_SWIPE_DOWN,
    EVENT_KNOB_UNKNOWN,
};
typedef u8 KnobEvent_Enum;

enum {
    NOTI_TIMER_WAKEUP,
    NOTI_EMERGENCY_SOS,
    NOTI_DOOR_BELL,
    NOTI_MOTION_SENSOR,
    NOTI_ALARM_ACTIVATE,
    NOTI_ALARM_DEACTIVE,
    NOTI_ACTIVE_EMOJI,
    NOTI_COOL_EMOJI,
    NOTI_WARM_EMOJI,
    NOTI_COZY_EMOJI,
    NOTI_RELAX_EMOJI,
    NOTI_SLEEP_EMOJI,
    // Internal
    NOTI_RESET_TO_FACTORY = 0xFA,
    NOTI_RESET_NETWORK = 0xFB,
    NOTI_INVALID_TIME  =  0xFC,
    NOTI_SCENE_ACTIVATED =  0xFD,
    NOTI_VOICE_WAKEUP = 0xFE,
    NOTI_EXIT = 0xFF,
    NOTI_FROM_HOST_END = NOTI_SLEEP_EMOJI,
};
typedef uint8_t KnobNotifyType_Enum;

typedef struct {
    u8 cmd_id;
    u8 notify_type;
}knob_notify_response_t;


typedef struct {
    u8  status_code;
    u8  key_status;
    u16 x_pos;
    u16 y_pos;
    u8  detect_phycical;
    u8  detect_touch;
}knob_report_status_t;


typedef struct {
    u8 status_code;
    u8 status;
}knob_report_brush_image_t;


typedef struct {
    u8 status_code;
    u8 status;
}knob_report_brush_image_finish_t;

typedef struct {
    u8 status_code;
    u8 status;
}knob_refresh_screen_t;

typedef struct{
    u8 status_code;
    u8 status;
}knob_open_close_uart_t;

enum {
    PREVIOUS_BUTTON,
    PAUSE_BUTTON,
    PLAY_BUTTON,
    NEXT_BUTTON,
    BUTTON_UNKNOWN,
};
typedef uint8_t AudioButton_Enum;


typedef union{
    knob_report_status_t             knob_report_status;
    knob_open_close_uart_t           knob_open_close_uart;
    knob_report_brush_image_t        knob_brush_image;
    knob_report_brush_image_finish_t knob_finish_fill_image;
    knob_refresh_screen_t            knob_refresh_display;
}knob_uart_union_t;

#define DISPLAY_NAVIGATION_EN        1

#define TYPE_HORIZONTAL                      0
#define TYPE_VERTICAL                        1

#ifdef _SCREEN_HOZ_
#define SCREEN_TYPE                          TYPE_HORIZONTAL
#elif defined _SCREEN_VER_
#define SCREEN_TYPE                          TYPE_VERTICAL
#endif

/******************************************************************************/
/*                              EXPORT FUNCTION                               */
/******************************************************************************/
void knob_display_notify_with_time_length(KnobNotifyType_Enum notify_type, u32 time_len_ms);
void knob_set_audio_brush_image_with_active_button(AudioButton_Enum active_button);

void advanced_setup_enable_auto_send(bool en, u32 delay_time);

#endif /* KNOB_COMMON_H_ */
