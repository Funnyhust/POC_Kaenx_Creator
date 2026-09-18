/*
 * element.h
 *
 *  Created on: Jul 23, 2025
 *      Author: DungTranBK
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "knob_common.h"
#include "vendor/common/mesh_node.h"
#include "proj_lib/sig_mesh/app_mesh.h"

/******************************************************************************/
/*                       EXPORT TYPE AND DEFINITION                           */
/******************************************************************************/
enum {
    TYPE_UNKNOWN,
    TYPE_SWITCH,
    TYPE_SCENE,
    TYPE_CCT,
    TYPE_DIM,
    TYPE_CURTAIN,
    TYPE_FAN,
    TYPE_AIR_CONDITIONER,
    TYPE_AUDIO,
    TYPE_MAX = TYPE_AUDIO,
};
typedef u8 KnobMode_Enum;

typedef KnobMode_Enum EndpointType_Enum;

/*
 * Scene
 */

enum {
    SCENE_DISPLAY_LIST,
    SCENE_DISPLAY_MODE,
};
typedef uint8_t SceneDisplayType_Enum;

enum {
    SCENE_MODE_AUTO,
    SCENE_MODE_MANUAL,
    SCENE_MODE_UNKNOWN,
};
typedef uint8_t SceneMode_Enum;

typedef struct {
    u8 current_scene_id;
}scene_par_t;

#define KNOB_TOTAL_SCENE    (SCENE_ID_MAX+1)


typedef struct {
    u8  enable;
    u16 start_time;
    u16 stop_time;
    u8  repeat_time;
}scene_auto_par_t;

typedef struct {
    SceneMode_Enum scene_mode;
    uint8_t rsv[3];
}scene_config_t;

typedef struct {
    u8  scene_id;
    u8  enable;
    u16 start_time;
    u16 stop_time;
    u8  repeat_time;
}set_scene_schedule_t;

typedef set_scene_schedule_t response_scene_schedule_t;


/*
 * Switch
 */
typedef struct {
	u8 index;
	u8 onoff_st[ELE_CNT];
}switch_par_t;

/*
 * CCT
 */
enum {
    CCT_SCENE_LUNCH,
    CCT_SCENE_READING,
    CCT_SCENE_MOVIE,
    CCT_SCENE_WORK,
    CCT_SCENE_CNT,
};
typedef uint8_t CctSceneId_Enum;

enum {
    DISPLAY_CCT_LIGHTNESS = 0,
    DISPLAY_CCT_TEMP = 1,
    DISPLAY_CCT_SCENE = 2,
    DISPLAY_CCT_MIN = DISPLAY_CCT_LIGHTNESS,
    DISPLAY_CCT_MAX = DISPLAY_CCT_SCENE,
};
typedef u8 CctDisplayMode_Enum;

typedef struct {
    u16 brightness;
    u16 temperature;
}cct_value_t;

typedef struct {
    u8  index;
	u16 brightness[ELE_CNT];
    u16 temperature[ELE_CNT];
    u16 brightness_non_zz[ELE_CNT];
    CctDisplayMode_Enum display_mode[ELE_CNT];
}cct_par_t;

/*
 * Curtain
 */
typedef struct {
    u8 index;
    u8 level[ELE_CNT];
    u8 previous_level[ELE_CNT];
    u8 st[ELE_CNT];
}curtain_par_t;

/*
 * dimmer
 */

typedef struct {
	u8 index;
    u16 level[ELE_CNT];
    u16 level_non_zz[ELE_CNT];
}dim_par_t;

/*
 * Air conditioner
 */
enum {
    DISPLAY_AIR_MAIN = 0,
    DISPLAY_AIR_MODE = 1,
    DISPLAY_AIR_FAN = 2,
    DISPLAY_AIR_SWING = 3,
    DISPLAY_AIR_UNKNOWN = 4,
    DISPLAY_AIR_BEGIN = DISPLAY_AIR_MAIN,
    DISPLAY_AIR_END   = DISPLAY_AIR_SWING,
};
typedef u8 AirConditionDisplayMode_Enum;

enum {
    CONFIG_AIR_MODE,
    CONFIG_FAN_MODE,
    CONFIG_SWING_MODE,
    CONFIG_AIR_UNKNOWN,
    CONFIG_AIR_MAX = CONFIG_SWING_MODE,
    CONFIG_AIR_MIN = CONFIG_AIR_MODE,
};
typedef u8 AirConfigSelect_Enum;

typedef struct {
    u8 on_off[ELE_CNT];
    u8 mode[ELE_CNT];
    u16 temp[ELE_CNT];
    u8 fan[ELE_CNT];
    u8 swing[ELE_CNT];
    AirConditionDisplayMode_Enum display_mode[ELE_CNT];
}air_par_t;


typedef struct {
    u8 on_off;
    u8 mode;
    u8 temp;
    u8 fan;
    u8 swing;
}air_value_t;

enum {
	FAN_VOL_AUTO,
    FAN_VOL_LOW,
    FAN_VOL_MID,
    FAN_VOL_HIGH,
    FAN_VOL_UNKNOWN,
    FAN_VOL_MAX = FAN_VOL_HIGH,
    FAN_VOL_MIN = FAN_VOL_LOW,
};
typedef u8 FanVolume_Enum;

enum {
    HOST_FAN_VOL_AUTO = 0,
    HOST_FAN_VOL_LOW = 1,
    HOST_FAN_VOL_MEDIUM = 3,
    HOST_FAN_VOL_HIGH = 5,
    HOST_FAN_VOL_UNKNOWN = 0xFF,
};
typedef uint8_t HostFanVolume_Enum;

enum {
    AIR_MODE_AUTO,
    AIR_MODE_FAN,
    AIR_MODE_HEAT,
    AIR_MODE_COOL,
    AIR_MODE_DRY,
    AIR_MODE_UNKNOWN,
    AIR_MODE_MAX = AIR_MODE_DRY,
    AIR_MODE_MIN = AIR_MODE_AUTO,
};
typedef u8 AirMode_Enum;

enum {
    HOST_OPERATION_MODE_FAN = 0,
    HOST_OPERATION_MODE_HEATING = 1,
    HOST_OPERATION_MODE_COOLING = 2,
    HOST_OPERATION_MODE_AUTO = 3,
    HOST_OPERATION_MODE_SETPOINT = 6,
    HOST_OPERATION_MODE_DRY = 7,
};
typedef uint8_t HostOperationMode_Enum;

enum {
    SWING_AUTO,
    SWING_P0,
    SWING_P1,
    SWING_P2,
    SWING_P3,
    SWING_P4,
    SWING_STOP,
    SWING_UNKNOWN,
    SWING_MAX = SWING_STOP,
    SWING_MIN = SWING_AUTO,
};
typedef u8 SwingMode_Enum;

enum {
    HOST_FAN_DIR_P0 = 0,
    HOST_FAN_DIR_P1 = 1,
    HOST_FAN_DIR_P2 = 2,
    HOST_FAN_DIR_P3 = 3,
    HOST_FAN_DIR_P4 = 4,
    HOST_FAN_DIR_STOP = 6,
    HOST_FAN_DIR_SWING = 7,
};
typedef uint8_t HostFanDir_Enum;

/*
 * Audio
 */
enum {
    AUDIO_PAUSE,
    AUDIO_PLAY,
    AUDIO_ST_UNKNOWN,
};
typedef uint8_t AudioState_Enum;

typedef struct {
    AudioState_Enum state;
    uint8_t volume;
    uint8_t mute;
}audio_com_t;

typedef struct {
	u8 idx;
    AudioState_Enum state[ELE_CNT];
    uint8_t volume[ELE_CNT];
    uint8_t mute[ELE_CNT];
}audio_par_t;

typedef struct {
    AudioState_Enum state;
    uint8_t volume;
    uint8_t mute;
}audio_value_t;

#define AUDIO_VOLUME_MIN     0
#define AUDIO_VOLUME_MAX     100

#define AUDIO_UNMUTE  0x00
#define AUDIO_MUTE    0x01

// Play back Control
enum {
    PLAYBACK_CONTROL_PAUSE     = 0x00,
    PLAYBACK_CONTROL_RESUME    = 0x01,
    PLAYBACK_CONTROL_NEXT      = 0x80,
    PLAYBACK_CONTROL_PREVIOUS  = 0x81,
    PLAYBACK_CONTROL_PLAY      = 0x04,
    PLAYBACK_CONTROL_UNKNOWN   = 0xFF,
};


#define SPEAKER_PLAYBACK_CFG_ID        0x01
#define SPEAKER_VOLUME_CFG_ID          0x02


#define SPEAKER_ANALYZER_COLOR_CFG_ID  0x80
#define SPEAKER_ANALYZER_TIME_CFG_ID   0x81
#define SPEAKER_ANALYZER_MODE_CFG_ID   0x82

typedef struct {
    u8 par_id;
    u8 data;
}speaker_set_t;

typedef struct {
    u8 volume;
    u8 mute;
}volume_and_mute_t;


enum {
    HOST_AUDIO_NONE,
    HOST_AUDIO_INIT,
    HOST_AUDIO_RUNNING,
    HOST_AUDIO_PAUSE,
    HOST_AUDIO_STOPPED,
    HOST_AUDIO_FINISH,
    HOST_AUDIO_ERROR,
    HOST_AUDIO_NEXT = 0x80,
    HOST_AUDIO_PREVIOUS = 0x81,
};
typedef uint8_t HostAudiState_Enum;

enum {
    RUN_MODE_SD_CARD,
    RUN_MODE_BLUETOOTH,
    RUN_MODE_HTTP,
};

/*
 * Fan
 */
enum {
    FAN_DISPLAY_MAIN,
    FAN_DISPLAY_CONTROL,
    FAN_DISPLAY_UNKNOWN,
};
typedef uint8_t FanDisplayMode_Enum;

typedef struct {
    FanDisplayMode_Enum display_mode;
    u8 level;
    u8 level_non_zz;
}fan_com_t;

typedef struct {
    FanDisplayMode_Enum display_mode[ELE_CNT];
    u8 level[ELE_CNT];
    u8 level_non_zz[ELE_CNT];
}fan_par_t;

enum {
    FAN_OFF,
    FAN_LEVEL_1,
    FAN_LEVEL_2,
    FAN_LEVEL_3,
    FAN_LEVEL_4,
    FAN_LEVEL_MAX = FAN_LEVEL_4,
    FAN_LEVEL_UNKNOWN,
};
typedef u8 FanLevel_Enum;

enum {
    HOST_FAN_OFF  = 0,
    HOST_FAN_LOW = 0x3F,
    HOST_FAN_MID = 0x7E,
    HOST_FAN_HIGH = 0xBD,
    HOST_FAN_VERY_HIGH = 0xFF,
};
typedef u8 FanHostLevel_Enum;

#define KNOB_BRIGHTNESS_MAX            0x64
#define KNOB_BRIGHTNESS_MIN            0x00

#define KNOB_TEMPERATURE_MAX           6500
#define KNOB_TEMPERATURE_MIN           2700
#define KNOB_TEMPERATURE_STEP_CHANGE   100


#define KNOB_DIM_LEVEL_MAX             0x64
#define KNOB_DIM_LEVEL_MIN             0x00

#define KNOB_FAN_LEVEL_MAX             0x04
#define KNOB_FAN_LEVEL_MIN             0x00

#define AIR_TEMP_MIN                    160
#define AIR_TEMP_MAX                    320
#define AIR_TEMP_DEFAULT                250

#define AIR_TEMP_STEP_CHANGE            5

#define KNOB_CURTAIN_LEVEL_MAX          0xFF   // closed
#define KNOB_CURTAIN_LEVEL_MIN          0x00   // opened


/*
 * Scene
 */
#if SCREEN_TYPE  == TYPE_HORIZONTAL
#define SCENE_ACTIVE_BTN_X_MIN     116
#define SCENE_ACTIVE_BTN_X_MAX     356

#define SCENE_ACTIVE_BTN_Y_MIN     370
#define SCENE_ACTIVE_BTN_Y_MAX     449
#else
#define SCENE_ACTIVE_BTN_X_MIN     338
#define SCENE_ACTIVE_BTN_X_MAX     457

#define SCENE_ACTIVE_BTN_Y_MIN     88
#define SCENE_ACTIVE_BTN_Y_MAX     345
#endif

/*
 * Curtain
 */
#if SCREEN_TYPE  == TYPE_HORIZONTAL
#define CZ_OPEN_X_MIN                   36
#define CZ_OPEN_X_MAX                   156

#define CZ_OPEN_Y_MIN                   306
#define CZ_OPEN_Y_MAX                   389

#define CZ_STOP_X_MIN                   217
#define CZ_STOP_X_MAX                   303

#define CZ_STOP_Y_MIN                   300
#define CZ_STOP_Y_MAX                   403

#define CZ_CLOSE_X_MIN                  331
#define CZ_CLOSE_X_MAX                  440

#define CZ_CLOSE_Y_MIN                  300
#define CZ_CLOSE_Y_MAX                  381
#else
#define CZ_OPEN_X_MIN                   290
#define CZ_OPEN_X_MAX                   390

#define CZ_OPEN_Y_MIN                   329
#define CZ_OPEN_Y_MAX                   416

#define CZ_STOP_X_MIN                   290
#define CZ_STOP_X_MAX                   396

#define CZ_STOP_Y_MIN                   154
#define CZ_STOP_Y_MAX                   257

#define CZ_CLOSE_X_MIN                  291
#define CZ_CLOSE_X_MAX                  387

#define CZ_CLOSE_Y_MIN                  24
#define CZ_CLOSE_Y_MAX                  118
#endif

/*
 * Fan
 */
#if SCREEN_TYPE  == TYPE_HORIZONTAL
#define FAN_DOWN_X_MIN                  33
#define FAN_DOWN_X_MAX                  108

#define FAN_DOWN_Y_MIN                  291
#define FAN_DOWN_Y_MAX                  350

#define FAN_UP_X_MIN                    385
#define FAN_UP_X_MAX                    448

#define FAN_UP_Y_MIN                    268
#define FAN_UP_Y_MAX                    352
#else
#define FAN_DOWN_X_MIN                  276
#define FAN_DOWN_X_MAX                  368

#define FAN_DOWN_Y_MIN                  331
#define FAN_DOWN_Y_MAX                  445

#define FAN_UP_X_MIN                    249
#define FAN_UP_X_MAX                    368

#define FAN_UP_Y_MIN                    13
#define FAN_UP_Y_MAX                    118
#endif

/*
 * Common
 */
#if SCREEN_TYPE  == TYPE_HORIZONTAL
#define POWER_X_MIN                     147
#define POWER_X_MAX                     319

#define POWER_Y_MIN                     369
#define POWER_Y_MAX                     456
#else
#define POWER_X_MIN                     370
#define POWER_X_MAX                     457

#define POWER_Y_MIN                     143
#define POWER_Y_MAX                     290
#endif

/*
 * AC
 */
#if SCREEN_TYPE  == TYPE_HORIZONTAL
#define AC_DOWN_X_MIN                   36
#define AC_DOWN_X_MAX                   147

#define AC_DOWN_Y_MIN                   280
#define AC_DOWN_Y_MAX                   376

#define AC_UP_X_MIN                     379
#define AC_UP_X_MAX                     440

#define AC_UP_Y_MIN                     288
#define AC_UP_Y_MAX                     352

// Main mode
#define MODE_X_MIN                     24
#define MODE_X_MAX                     103

#define MODE_Y_MIN                     284
#define MODE_Y_MAX                     367

// Main Fan
#define FAN_X_MIN                      361
#define FAN_X_MAX                      430

#define FAN_Y_MIN                      286
#define FAN_Y_MAX                      371

#else
#define AC_DOWN_X_MIN                   278
#define AC_DOWN_X_MAX                   384

#define AC_DOWN_Y_MIN                   305
#define AC_DOWN_Y_MAX                   410

#define AC_UP_X_MIN                     282
#define AC_UP_X_MAX                     369

#define AC_UP_Y_MIN                     28
#define AC_UP_Y_MAX                     123

// Main mode
#define MODE_X_MIN                     301
#define MODE_X_MAX                     382

#define MODE_Y_MIN                     345
#define MODE_Y_MAX                     415

// Main Fan
#define FAN_X_MIN                      285
#define FAN_X_MAX                      354

#define FAN_Y_MIN                      22
#define FAN_Y_MAX                      79

#endif
/*
 * Audio
 */
#if SCREEN_TYPE  == TYPE_HORIZONTAL
#define AUDIO_PAUSE_PLAY_X_MIN          215
#define AUDIO_PAUSE_PLAY_X_MAX          297

#define AUDIO_PAUSE_PLAY_Y_MIN          274
#define AUDIO_PAUSE_PLAY_Y_MAX          388

#define AUDIO_PREVIOUS_X_MIN            70
#define AUDIO_PREVIOUS_X_MAX            146

#define AUDIO_PREVIOUS_Y_MIN            273
#define AUDIO_PREVIOUS_Y_MAX            388

#define AUDIO_NEXT_X_MIN                350
#define AUDIO_NEXT_X_MAX                439

#define AUDIO_NEXT_Y_MIN                273
#define AUDIO_NEXT_Y_MAX                388
#else
#define AUDIO_PAUSE_PLAY_X_MIN          292
#define AUDIO_PAUSE_PLAY_X_MAX          409

#define AUDIO_PAUSE_PLAY_Y_MIN          170
#define AUDIO_PAUSE_PLAY_Y_MAX          265

#define AUDIO_PREVIOUS_X_MIN            291
#define AUDIO_PREVIOUS_X_MAX            391

#define AUDIO_PREVIOUS_Y_MIN            326
#define AUDIO_PREVIOUS_Y_MAX            431

#define AUDIO_NEXT_X_MIN                287
#define AUDIO_NEXT_X_MAX                362

#define AUDIO_NEXT_Y_MIN                27
#define AUDIO_NEXT_Y_MAX                93
#endif

typedef void (*typeElement_handle_refresh_sceen)(u8 idx);


#define NOTIFY_SCENE_ACTIVE_TIMEOUT_MS          TIMER_500MS

#define NOTIFY_ACTIVE_EVT_FROM_APP_TIMEOUT_MS   TIMER_3S

#define RING_DEFAULT_BLINK_INTERVAL_MS          TIMER_500MS
#define RING_FAST_BLINK_INTERVAL_MS             TIMER_200MS


typedef void (*typeElement_handle_notify_display)(KnobNotifyType_Enum notify_type, u32 time_len_ms);

#define KNOB_PAR_LEN_MAX         16

typedef struct {
	u16 op;
    u8  model_idx;
    u8  par_len;
    u8  par[KNOB_PAR_LEN_MAX];
}knob_request_t;

typedef struct {
    u16 op;
    u8  model_idx;
    u8  par_len;
    u8  par[KNOB_PAR_LEN_MAX];
}knob_response_t;
/*
 * mesh common
 */


#define LIGHTNESS_MAX              (0xFFFF)
#define LUM_OFF                    (0)

#define CTL_TEMP_MIN               (0x0320)    // 800
#define CTL_TEMP_MAX               (0x4E20)    // 20000

#define AIR_STEP_TEMP_CHANGE_MAX  2


#define CCT_TEMP_DEFAULT            CTL_TEMP_MIN
#define CCT_LIGHTNESS_DEFAULT       0x21FC

#define DIM_LEVEL_DEFAULT           0x21FC

enum CutainState_enum {
    ST_START_OPEN   = 0,
    ST_OPENNING     = 1,
    ST_OPENNED      = 2,
    ST_START_CLOSE  = 3,
    ST_CLOSING      = 4,
    ST_CLOSED       = 5,
    ST_STOP         = 6,
    ST_STOPED       = 7,
    ST_KNOB_CONTROL = 8,
    ST_UNKNOWN,
};
typedef uint8_t CutainState_enum;



#define REFRESH_DISPLAY_WHEN_RECEIVE_CONTROL_MSG_ENABLE      1

#define CCT_CKNOB_RESPONSE_DELAY_MS            TIMER_250MS

#define CHECK_STORE_DEVICE_PAR_INTERVAL_MS     TIMER_5S
#define STORE_DEVICE_PAR_DELAY_MS              TIMER_2S


#define VOICE_STEP_CHANGE_TUABLE_LIGHT         25    // percent
#define VOICE_STEP_CHANGE_TEMPERATURE          1000    // k


#define VOICE_STEP_CHANGE_VOLUME         10    // percent


typedef void (*typeEle_handleRepsonseSceneMode)(void);

#define DELAY_TIME_RSP_WHEN_LEVEL_CHANGE_MS    TIMER_500MS


#define ELE_CONFIG_NODE_STATUS                 0xF9

typedef struct {
    u8 message_type;
    u8 cmd_id;
    u8 data[1];
}config_node_t;


typedef struct {
	u8 mode:6;
	u8 onoff:2;
}onoff_mode_t;

typedef struct {
	onoff_mode_t onoff_mode;
    u8  fan_dir;
    u8  fan_volume;
    u16 temp;
}ac_control_set_t;

typedef struct {
    u8 cmd_id;
    onoff_mode_t onoff_mode;
    u8 fan_dir;
    u8  fan_volume;
    u16 temp;
    u16 temp_room;
}ac_control_rsp_t;


typedef struct {
	u8  msg_type;
	u8  cmd;
	onoff_mode_t onoff_mode;
    u8  swing;
    u8  fan;
    u16 temp;
}ac_control_set_cmd_t;

typedef struct {
    u8  onoff;
    u8  mode;
    u8  swing;
    u8  fan;
    u16 temp_set;
    u16 temp_room;
}ac_status_t;

#define TEXT_SYMBOL_UNKNOWN        0xFF

#define DEVICE_NAME_WIDTH_MAX_BIG_SIZE      438    // pixel
#define DEVICE_NAME_WIDTH_MAX_MEDIUM_SIZE   438    // pixel

#define SYMBOL_BIG_SPACE                    0xe4   // 228

#define DEVICE_NAME_MAX_LEN                 20
#define SCENE_NAME_MAX_LEN                  20


typedef struct {
	u8 mode;         // 0: auto, 1: fan, 2: heat, 3; cool, 7: dry
	u8 fan;          // 0: auto, 1: low , 3: mid: 3, 5: high
	u8 swing;        // 0: swing, 0: P0, 1: P1, 2: P2, 3: P3, 4: P4, 6: stop,
	u8 temp_min;     // 16
	u8 temp_max;     // 32
	u8 temp_step;    // 0: 0.5 - 1: 1
}ac_config_mask_t;

#define AC_MODE_MASK_DEFAULT     0x1F  // dry -> auto -> cool -> heat -> fan
#define AC_FAN_MASK_DEFAULT      0x0E  // high > mid > low > auto
#define AC_SWING_MASK_DEFAULT    0x7F  // swing > stop > P4 > P3 > P2 > P1 > P0


#define AC_MODE_BIT_MASK     0x1F  // dry -> auto -> cool -> heat -> fan
#define AC_FAN_BIT_MASK      0x0F  // high > mid > low > auto
#define AC_SWING_BIT_MASK    0x7F  // swing > stop > P4 > P3 > P2 > P1 > P0

#define AC_TEMP_MIN_DEFAULT      16
#define AC_TEMP_MAX_DEFAULT      32
#define AC_TEMP_STEP_DEFAULT     5     // 0.5

typedef struct {
	u8 name_len;
    u8 name[DEVICE_NAME_MAX_LEN];
    u8 icon_id;
    u8 enable;
    // Air conditioning
    ac_config_mask_t ac_config_mask;
}common_endpoint_par_t;

typedef struct {
	u8 is_actived;
	u8 name_len;
    u8 name[SCENE_NAME_MAX_LEN];
    u8 icon_id;
}common_scene_par_t;

#define TOTAL_TEXT_SYMBOL          229

#define NUMBER_SYMBOL_OFFSET       186

#define TEXT_BIG_SIZE_OFFSET       0xe3
#define TEXT_MEDIUM_SIZE_OFFSET    0x01c7

#define NAME_START_POSITION        0x0e

#if SCREEN_TYPE  == TYPE_HORIZONTAL
#define MEDIUM_NAME_Y_POSITION     0x00e1
#define BIG_NAME_Y_POSITION        0x00f5
#else
#define MEDIUM_NAME_X_POSITION     0x00e1
#define BIG_NAME_X_POSITION        0x00f5
#endif

#define DOT_SYMBOL_INDEX           0xdd

enum {
	SPID_ENDPOINT_TYPE = 0,
	SPID_ENDPOINT_NAME = 1,
	SPID_ENDPOINT_ICON = 2,
	SPID_SCENE_ENABLE_DISABLE = 3,
	SPID_SCENE_NAME = 4,
	SPID_SCENE_ICON = 5,
	SPID_ENDPOINT_VISIBILITY = 6,
	SPID_AC_PAR_CONFIGURATION = 7,
	SPID_ENPOINT_INFO = 0x10,
	SPID_SCENE_INFO = 0x11,
	SPID_UNKNOWN,
};
typedef u8 SpidCommand_Enum;


enum {
	SPID_MESSAGE_GET = 0,
	SPID_MESSAGE_SET = 1,
	SPID_MESSAGE_UNKNOWN,
};
typedef u8 SpidMessageType_Enum;


typedef struct {
    u8 endpoint_id;
    u8 name_len;
    u8 name[1];
}set_endpoint_name_t;

typedef struct {
    u8 endpoint_id;
    u8 icon_id;
}set_endpoint_icon_t;

typedef struct {
    u8 scene_id;
    u8 enable;
}set_scene_enable_disable_t;

typedef struct {
    u8 scene_id;
    u8 name_len;
    u8 name[1];
}set_scene_name_t;

typedef struct {
    u8 scene_id;
    u8 icon_id;
}set_scene_icon_t;


typedef struct {
	u8 spid;
	u8 endpoint_id;
	u8 type;
	u8 icon_id;
	u8 name_len;
	u8 name[DEVICE_NAME_MAX_LEN + 1];
}endpoint_info_rsp_t;

typedef struct {
	u8 spid;
	u8 scene_id;
	u8 enable;
	u8 icon_id;
	u8 name_len;
	u8 name[DEVICE_NAME_MAX_LEN];
}scene_info_rsp_t;

enum {
	TEXT_SIZE_MEDIUM,
	TEXT_SIZE_BIG,
	TEXT_SIZE_UNKNOWN
};
typedef u8 TextSize_Enum;

#define KNOB_SCENE_ID_OFFSET          SCENE_ID_OFFSET

#define LIGHT_ICON_ID_START           1
#define LIGHT_ICON_ID_END             20
#define LIGHT_ICON_ID_CNT             ((LIGHT_ICON_ID_END - LIGHT_ICON_ID_START)+1)

#define LIGHT_ICON_ID_SWITCH_DEFAULT  17
#define LIGHT_ICON_ID_CCT_DEFAULT     16
#define LIGHT_ICON_ID_DIM_DEFAULT     5


#define CURTAIN_ICON_ID_HORIZONTAL    21
#define CURTAIN_ICON_ID_VERTICAL      22

#define CURTAIN_ICON_ID_START         CURTAIN_ICON_ID_HORIZONTAL
#define CURTAIN_ICON_ID_DEFAULT       CURTAIN_ICON_ID_HORIZONTAL


#define SCENE_ICON_START              1
#define SCENE_ICON_END                36
#define SCENE_ICON_CNT                ((SCENE_ICON_END - SCENE_ICON_START)+1)


#define ENDPOINT_ICON_KEY_OFFSET      0x88

#define SCENE_ICON_KEY_OFFSET         0x64
#define SCENE_ICON_ID_OFFSET          10

/*
 * Extern variable
 */
extern const u8 text_symbol_big_size[TOTAL_TEXT_SYMBOL];
extern const u8 text_symbol_medium_size[TOTAL_TEXT_SYMBOL];

#define TEMPERATURE_STEP_CHANGE       506
#define BRIGHTNESS_STEP_CHANGE        655

typedef void (*typeEle_handleDisableVisibilityCurrentEndpoint)(u8 idx);

/******************************************************************************/
/*                              EXPORT FUNCTION                               */
/******************************************************************************/
void element_set_default_value_after_join(void);

u16 element_get_visibility_bit_mask(void);

int element_handle_message_get_endpoint_visibility(u8 model_idx, u8* par, int par_len);

EndpointType_Enum get_endpoint_type_follow_model_index(u8 model_index);

int element_handle_message_get_all_endpoint_type(u8 model_idx);

u16 element_get_all_endpoint_type_bit_mask(void);

void element_store_scene_config_default(void);

int element_handle_bluetooth_config_message(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par);

common_endpoint_par_t* element_get_common_endpoint_par(u8 idx);
common_scene_par_t* element_get_common_scene_par(u8 scene_index);

int element_handle_on_off_set(u8 model_idx, u8* par, int par_len);
int element_handle_ctl_set(u8 model_idx, u8* par, int par_len);
int element_handle_light_temp_set(u8 model_idx, u8* par, int par_len);
int element_handle_hsl_set(u8 model_idx, u8* par, int par_len);
int element_handle_lightness_set(u8 model_idx, u8* par, int par_len);
int element_handle_level_set(u8 model_idx, u8* par, int par_len);

int element_handle_on_off_get(u8 model_idx, u8* par, int par_len);
int element_handle_ctl_get(u8 model_idx, u8* par, int par_len);
int element_handle_light_temp_get(u8 model_idx, u8* par, int par_len);
int element_handle_hsl_get(u8 model_idx, u8* par, int par_len);
int element_handle_lightness_get(u8 model_idx, u8* par, int par_len);
int element_handle_level_get(u8 model_idx, u8* par, int par_len);


FunctionStatus_Enum knob_device_handle_report_event(  \
        u8* p_idx, KnobEvent_Enum event, u16 x_pos, u16 y_pos, u8 times);
void element_init(typeElement_handle_refresh_sceen func,
			typeEle_handleDisableVisibilityCurrentEndpoint func_1);

void knob_element_callback_init_from_app(typeEle_handleRepsonseSceneMode func);
int element_handle_set_scene_mode(u8 mode);
SceneMode_Enum element_handle_get_scene_mode(void);
bool scene_get_scene_position(u8 scene_index, u8* total_scene, u8 *pos);

int element_handle_set_scene_schedule(u8* par);
int element_handle_get_scene_schedule(uint8_t scene_id, response_scene_schedule_t* rsp);

scene_par_t* scene_get_scene_par(void);
switch_par_t* knob_device_get_switch_par(void);
cct_par_t* knob_device_get_cct_par(void);
dim_par_t* knob_device_get_dim_par(void);
curtain_par_t* knob_device_get_curtain_par(void);
air_par_t* knob_device_get_air_par(void);
audio_par_t* knob_device_get_audio_par(void);
u8 knob_device_get_fan_level(u8 idx);
u8 knob_device_get_host_fan_level(u8 idx);

void element_handle_get_device_status(u8* par, u8 par_len);
int element_handle_incomming_message(u8* par, u8 par_len);

void knob_element_proc(void);

FunctionStatus_Enum element_handle_curtain_limit_time_message(u8* par, u8* rsp_idx);
u32 element_handle_get_limit_time(u8 idx);
FunctionStatus_Enum element_handle_voice_command(u8 command_code);

u8 element_get_current_index(void);

int element_set_active_endpoint_index(u8 index);
u8 element_handle_next_endpoint_index(void);
u8 element_handle_previous_endpoint_index(void);

u16 convert_host_temp_to_ele_temp(u16 temp);

int ac_response_ac_status_to_network(u8 idx);
int element_response_ac_status(u8 idx);

u8 element_convert_air_temperature_to_percent(u8 idx);
int element_handle_message_get_ac_parameter(u8 model_idx, u8* par, int par_len);

#endif /* ELEMENT_H_ */
