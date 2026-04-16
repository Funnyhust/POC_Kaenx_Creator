/*
 * curtain.h
 *
 *  Created on: Jul 23, 2025
 *      Author: DungTranBK
 */

#ifndef CURTAIN_H_
#define CURTAIN_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/


/******************************************************************************/
/*                       EXPORT TYPE AND DEFINITION                           */
/******************************************************************************/

enum {
    CURTAIN_0,
    CURTAIN_1,
    CURTAIN_MAX = CURTAIN_1,
    CURTAIN_IDX_UNKNOWN,
};


enum CurtainState_enum{
    CURTAIN_STATE_IDLE  = 0,
    CURTAIN_STATE_STOP  = 1,
    CURTAIN_STATE_OPEN  = 2,
    CURTAIN_STATE_CLOSE = 3,
    CURTAIN_STATE_WAIT_NEXT_CMD  = 4,
};
typedef uint8_t CurtainState_enum;


enum CurtainCmd_enum{
    CURTAIN_CMD_IDLE  = 0,
    CURTAIN_CMD_STOP  = 1,
    CURTAIN_CMD_OPEN  = 2,
    CURTAIN_CMD_CLOSE = 3,
};
typedef uint8_t CurtainCmd_enum;

enum ExternCutainState_enum {
    EX_ST_START_OPEN   = 0,
    EX_ST_OPENNING     = 1,
    EX_ST_OPENNED      = 2,
    EX_ST_START_CLOSE  = 3,
    EX_ST_CLOSING      = 4,
    EX_ST_CLOSED       = 5,
    EX_ST_STOP         = 6,
    EX_ST_STOPED       = 7,
    EX_ST_UNKNOWN      = 8,
};
typedef uint8_t ExternCutainState_enum;

enum CurtainSendStep_enum{
    MIN_STEP       = 0,
    SEND_STEP_1    = 1,
    SEND_STEP_2    = 2,
    SEND_STEP_3    = 3,
    SEND_STEP_4    = 4,
    SEND_STEP_5    = 5,
    SEND_STEP_6    = 6,
    SEND_STEP_7    = 7,
    MAX_STEP       = 8,
    SEND_STEP_NULL = 9,
};
typedef uint8_t CurtainSendStep_enum;

typedef struct
{
    CurtainState_enum  curtainState;
    /*-------------Curtain Command-------------------*/
    CurtainState_enum  currentCmd;
    CurtainState_enum  bufferCmd;
    uint8_t  cmdStep;
    uint32_t startDelayTimeForCmdStep;

    /*-------------Curtain Parameter----------------*/
    uint32_t curtainLimitTime;
    uint32_t currentPosition;
    uint32_t startPosition;
    uint32_t curtainRunningStartTime;
    uint32_t destinationPositionToGoTo;
    uint32_t tempDestinationPositionToGoTo;
    uint8_t  enableCalculatorCurtainPosition;
    ExternCutainState_enum extended_state;

    CurtainSendStep_enum  sendStep;
}Curtain_str;

typedef struct {
    uint8_t  endpoint;
    uint8_t  calip_cmd_id;
    uint32_t limit_time;
}calip_curtain_limit_time_t;

enum CalipCurtainLimitTimeCommandID_enum{
    GET_CURTAIN_LIMIT_TIME      = 0x00,
    CHANGE_TO_LIMIT_TIME_MODE   = 0x01,
    EXIT_LEARN_LIMIT_TIME_MODE  = 0x02,
    SET_CURTAIN_LIMIT_TIME      = 0x03,
};
typedef uint8_t CalipCurtainLimitTimeCommandID_enum;

enum CurrentCmdHandler_enum{
    CURRENT_CMD_HANDLE_NOT_DONE = 0,
    CURRENT_CMD_HANDLE_DONE     = 1,
    CURRENT_CMD_HANDLE_ERROR    = 2,
};
typedef uint8_t CurrentCmdHandler_enum;

enum {
    CURTAIN_CMD_TYPE_STOP = 1,
    CURTAIN_CMD_TYPE_RUN  = 2,
};
typedef u8 CzControlType_Enum;

enum PositionPerChar_enum{
    _MIN_POSITION = 0x00,
    _MAX_POSITION = 0xFF,
};
typedef uint8_t PositionPerChar_enum;


#define DESTINATION_NULL               0xFFFFFFFF
#define CURTAIN_CORRECTION_ERROR_VAL   0x03u

#define CURTAIN_MIN_STEP_CHANGE        0x05


#define LIMIT_TIME_DEFAULT             TIMER_20S

#define CURTAIN_LIMIT_TIME_MIN         TIMER_1S
#define CURTAIN_LIMIT_TIME_MAX         TIMER_5Min

#define CURTAIN_LIMIT_TIME_INVALID     0

typedef void (*typeCurtain_handleUpdatePosition)(u8 CT_no, u8 pos_present, u8 pos_target, u8 current_state);

/******************************************************************************/
/*                              EXPORT FUNCTION                               */
/******************************************************************************/
void Curtain_ControlCurtainByApp(u8 CT_No, CzControlType_Enum CT_CmdId, uint8_t positionPerChar);
void Curtain_CallbackInit(typeCurtain_handleUpdatePosition func);
void curtain_init(void);
void curtain_proc(void);

void curtain_set_limit_time_when_power_up(u8 idx, u32 limt_time_ms);
void curtain_set_common_par(u8 idx, u8 position_per_char);

u32 curtain_get_limit_time(u8 idx);
bool curtain_set_limit_time_from_app(u8 idx, u32 limit_time_set);

#endif /* CURTAIN_H_ */
