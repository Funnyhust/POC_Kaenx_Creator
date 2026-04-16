/*
 * curtain.c
 *
 *  Created on: Jul 23, 2025
 *      Author: DungTranBK
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "string.h"
#include "vendor/mesh/user/utilities.h"
#include "vendor/common/system_time.h"
#include "vendor/common/mesh_node.h"
#include "curtain.h"

#include "vendor/mesh/user/debug.h"
#ifdef  DEBUG_CURTAIN
#define DBG_CURTAIN_SEND_STR(x)              Dbg_sendString((s8*)x)
#define DBG_CURTAIN_SEND_NUM(x)              Dbg_sendNum(x)
#define DBG_CURTAIN_SEND_HEX(x)              Dbg_sendHex(x)
#define DBG_CURTAIN_SEND_INT(x)              Dbg_sendInt(x)
#define DBG_CURTAIN_SEND_ONE_BYTE_HEX(x)     Dbg_sendOneByteHex(x)
#else
#define DBG_CURTAIN_SEND_STR(x)
#define DBG_CURTAIN_SEND_NUM(x)
#define DBG_CURTAINT_SEND_HEX(x)
#define DBG_CURTAIN_SEND_INT(x)
#define DBG_CURTAIN_SEND_ONE_BYTE_HEX(x)
#endif

#define CZ_EXTENDED_STATE    1
#define DEFAULT_PULL_DELAY   300


typeCurtain_handleUpdatePosition  pvCurtain_handleUpdatePosition = NULL;

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/
static Curtain_str curtainData[ELE_CNT];

/******************************************************************************/
/*                          PRIVATE FUNCTIONS DECLERATION                     */
/******************************************************************************/
static uint8_t Curtain_RunOpenCommand(u8 CT_No);
static uint8_t Curtain_RunCloseCommand(u8 CT_No);
static uint8_t Curtain_RunStopCommand(u8 CT_No);

/******************************************************************************/
/*                           EXPORT FUNCTIONS DECLERATION                     */
/******************************************************************************/

/**
 * @func   Curtain_GetCurtainPositionPerChar
 * @brief
 * @param  None
 * @retval Curtain position per char
 */
static bool Curtain_GetCurtainPositionPerChar(u8 CT_No, u8* pos_present, u8* pos_target, u8* state)
{
    if(CT_No < ELE_CNT) {
        if(curtainData[CT_No].currentPosition == 0) {
            *pos_present = 0;
        }
        else {
            *pos_present = (uint8_t)(((curtainData[CT_No].currentPosition + CURTAIN_CORRECTION_ERROR_VAL)*0xFF) \
                        /curtainData[CT_No].curtainLimitTime);
        }
        // Modify extended_state
        if(curtainData[CT_No].extended_state == EX_ST_STOP
                || curtainData[CT_No].extended_state == EX_ST_STOPED) {
            if(curtainData[CT_No].currentPosition == curtainData[CT_No].curtainLimitTime) {
                curtainData[CT_No].extended_state = EX_ST_CLOSED;
            }
            else if(curtainData[CT_No].currentPosition == 0) {
                curtainData[CT_No].extended_state = EX_ST_OPENNED;
            }
        }
        *state = curtainData[CT_No].extended_state;
        if(curtainData[CT_No].destinationPositionToGoTo == DESTINATION_NULL) {
            if(curtainData[CT_No].curtainState == CURTAIN_STATE_CLOSE) {
                *pos_target = 0xFF;
            }
            else if(curtainData[CT_No].curtainState == CURTAIN_STATE_OPEN) {
                *pos_target = 0;
            }
            else {
                *pos_target = *pos_present;
            }
        }
        else {
            if(curtainData[CT_No].destinationPositionToGoTo >= curtainData[CT_No].curtainLimitTime) {
                *pos_target = 0xFF;
            }
            else {
                *pos_target = (u8)(((curtainData[CT_No].destinationPositionToGoTo + CURTAIN_CORRECTION_ERROR_VAL)*0xFF)  \
                        /curtainData[CT_No].curtainLimitTime);
            }
        }
        return true;
    }
    return false;
}

/**
 * @func   Curtain_UpdateCurtainPosition
 * @brief
 * @param  None
 * @retval None
 */
static void Curtain_UpdateCurtainPosition(u8 CT_no)
{
    u8  pos_present, pos_target, state;
    if(Curtain_GetCurtainPositionPerChar( \
                CT_no, &pos_present, &pos_target, &state) == true) {
        if(pvCurtain_handleUpdatePosition != NULL) {
            pvCurtain_handleUpdatePosition(CT_no, pos_present, pos_target, state);
        }
    }
}

/**
 * @func   Curtain_SetCommand
 * @brief
 * @param  CurtainNumber_enum: Curtain Number
 *         BYTE: Command ID
 * @retval None
 */
static void Curtain_SetCommand(u8 CT_No, CurtainCmd_enum curtainCmd)
{
    switch (curtainCmd) {
        case CURTAIN_CMD_OPEN:
            Curtain_RunOpenCommand(CT_No);
            break;
        case CURTAIN_CMD_CLOSE:
            Curtain_RunCloseCommand(CT_No);
            break;
        case CURTAIN_CMD_STOP:
            Curtain_RunStopCommand(CT_No);
            break;
    }
    curtainData[CT_No].currentCmd = CURTAIN_CMD_IDLE;
}

/**
 * @func   Curtain_SetStopCmdAndSendLevel
 * @brief
 * @param  CurtainNumber_enum: Curtain Number
 * @retval None
 */
static void Curtain_SetStopCmdIfBufferIsIdle(u8 CT_No)
{
    if(curtainData[CT_No].bufferCmd == CURTAIN_CMD_IDLE){
        Curtain_SetCommand(CT_No, CURTAIN_CMD_STOP);
    }
}

/**
 * @func   Curtain_RunOpenCommand
 * @brief
 * @param  None
 * @retval None
 */
static void Curtain_StoreCurrentPosition(u8 CT_no)
{

}

/**
 * @func   Curtain_HandleLimitPosition
 * @brief
 * @param  CurtainNumber_enum: Curtain Number
 * @retval None
 */
static void Curtain_HandleLimitPosition(u8 CT_No)
{
    curtainData[CT_No].enableCalculatorCurtainPosition = DISABLE;
    Curtain_SetStopCmdIfBufferIsIdle(CT_No);
}

/**
 * @func    Curtain_RunOpenCommand
 * @brief
 * @param  CurtainNumber_enum: Curtain Number
 * @retval BYTE: Handle Open Command Status
 */
static uint8_t Curtain_RunOpenCommand(u8 CT_No)
{
    curtainData[CT_No].curtainState = CURTAIN_STATE_OPEN;
    curtainData[CT_No].enableCalculatorCurtainPosition = ENABLE;
    curtainData[CT_No].destinationPositionToGoTo = curtainData[CT_No].tempDestinationPositionToGoTo;
    curtainData[CT_No].curtainRunningStartTime = clock_time_ms();
    curtainData[CT_No].startPosition = curtainData[CT_No].currentPosition;
    curtainData[CT_No].extended_state = EX_ST_START_OPEN;
    // Update Level
    if(curtainData[CT_No].currentPosition != 0) {
        Curtain_UpdateCurtainPosition(CT_No);
    }
    curtainData[CT_No].extended_state = EX_ST_OPENNING;
    return CURRENT_CMD_HANDLE_DONE;
}

/**
 * @func   Curtain_RunCloseCommand
 * @brief
 * @param  CurtainNumber_enum: Curtain Number
 * @retval BYTE: Handle Close Command Status
 */
static uint8_t Curtain_RunCloseCommand(u8 CT_No)
{
    curtainData[CT_No].extended_state = EX_ST_START_CLOSE;
    curtainData[CT_No].curtainState = CURTAIN_STATE_CLOSE;
    curtainData[CT_No].enableCalculatorCurtainPosition = ENABLE;
    curtainData[CT_No].destinationPositionToGoTo = curtainData[CT_No].tempDestinationPositionToGoTo;
    curtainData[CT_No].curtainRunningStartTime = clock_time_ms();
    curtainData[CT_No].startPosition = curtainData[CT_No].currentPosition;
    // Update Level
    if(curtainData[CT_No].currentPosition != curtainData[CT_No].curtainLimitTime) {
        Curtain_UpdateCurtainPosition(CT_No);
    }
    curtainData[CT_No].extended_state = EX_ST_CLOSING;
    return CURRENT_CMD_HANDLE_DONE;
}

/**
 * @func   Curtain_RunStopCommand
 * @brief  None
 * @param  CurtainNumber_enum: Curtain Number
 * @retval BYTE: Handle Stop Command Status
 */
static uint8_t Curtain_RunStopCommand(u8 CT_No)
{
    DBG_CURTAIN_SEND_STR("\n Curtain_RunStopCommand: ");

    curtainData[CT_No].extended_state = EX_ST_STOP;
    curtainData[CT_No].curtainState = CURTAIN_STATE_STOP;
    curtainData[CT_No].enableCalculatorCurtainPosition = DISABLE;
    curtainData[CT_No].destinationPositionToGoTo = curtainData[CT_No].currentPosition;

    Curtain_StoreCurrentPosition(CT_No);
    // Update Level
    Curtain_UpdateCurtainPosition(CT_No);
    curtainData[CT_No].extended_state = EX_ST_STOPED;
    return CURRENT_CMD_HANDLE_DONE;
}

/**
 * @func   Curtain_HandleGotoSpecifiedPosition
 * @brief
 * @param  CurtainNumber_enum: Curtain Number
 * @retval None
 */
static void Curtain_HandleGotoSpecifiedPosition(u8 CT_No)
{
    if (curtainData[CT_No].destinationPositionToGoTo != DESTINATION_NULL) {
        if (curtainData[CT_No].curtainState == CURTAIN_STATE_CLOSE) {
            if (curtainData[CT_No].currentPosition
                    >= curtainData[CT_No].destinationPositionToGoTo) {
                curtainData[CT_No].currentPosition =  \
                        curtainData[CT_No].destinationPositionToGoTo + CURTAIN_CORRECTION_ERROR_VAL;


                DBG_CURTAIN_SEND_STR("\n Goto specific success: ");
                DBG_CURTAIN_SEND_INT((u16)curtainData[CT_No].currentPosition);

                Curtain_SetStopCmdIfBufferIsIdle(CT_No);
            }
        } else if (curtainData[CT_No].curtainState == CURTAIN_STATE_OPEN) {
            if (curtainData[CT_No].currentPosition
                    <= curtainData[CT_No].destinationPositionToGoTo) {
                curtainData[CT_No].currentPosition =  \
                        curtainData[CT_No].destinationPositionToGoTo + CURTAIN_CORRECTION_ERROR_VAL;

                DBG_CURTAIN_SEND_STR("\n Goto specific success: ");
                DBG_CURTAIN_SEND_INT((u16)curtainData[CT_No].currentPosition);

                Curtain_SetStopCmdIfBufferIsIdle(CT_No);
            }
        }
    }
}

/**
 * @func   Curtain_HandleMinMaxPosition
 * @brief
 * @param  CurtainNumber_enum: Curtain Number
 * @retval None
 */
static void Curtain_HandleMinMaxPosition(u8 CT_No)
{
    switch (curtainData[CT_No].curtainState) {
        case CURTAIN_STATE_OPEN:
            curtainData[CT_No].currentPosition = curtainData[CT_No].startPosition
                    - clock_time_get_elapsed_time(curtainData[CT_No].curtainRunningStartTime);
            if ((long) curtainData[CT_No].currentPosition <= 0) {
                curtainData[CT_No].currentPosition = 0;
                curtainData[CT_No].sendStep = MIN_STEP;
#ifdef CZ_EXTENDED_STATE
                curtainData[CT_No].extended_state = EX_ST_OPENNED;
#endif
                Curtain_HandleLimitPosition(CT_No); // Min Position
            }
            break;

        case CURTAIN_STATE_CLOSE:
            curtainData[CT_No].currentPosition = curtainData[CT_No].startPosition
                    + clock_time_get_elapsed_time(curtainData[CT_No].curtainRunningStartTime);
            if (curtainData[CT_No].currentPosition
                    >= curtainData[CT_No].curtainLimitTime) {
                curtainData[CT_No].currentPosition = curtainData[CT_No].curtainLimitTime;
                curtainData[CT_No].sendStep = MAX_STEP;
#ifdef CZ_EXTENDED_STATE
                curtainData[CT_No].extended_state = EX_ST_CLOSED;
#endif
                Curtain_HandleLimitPosition(CT_No); // Max Position
            }
            break;
    }
}

/**
 * @func   Curtain_HandleSendLevel
 * @brief
 * @param  CurtainNumber_enum: Curtain Number
 * @retval None
 */
static void Curtain_HandleSendLevel(u8 CT_No)
{
    u8 i, j;
    u32 stepToSendLevel;
    u32 temp;
    stepToSendLevel = curtainData[CT_No].curtainLimitTime/7;
    for (i = 0; i < 7; i++) {
        temp = i*stepToSendLevel;
        j = (uint8_t)(i+1);
        if(curtainData[CT_No].currentPosition != 0){
            if ((curtainData[CT_No].currentPosition >= temp)                                     \
                    && (curtainData[CT_No].currentPosition < (temp + stepToSendLevel))) {
                if (curtainData[CT_No].sendStep != j){
                    switch(curtainData[CT_No].curtainState){
                    case CURTAIN_STATE_OPEN:
                        if(curtainData[CT_No].currentPosition <= (temp + (stepToSendLevel >> 1))){
                            Curtain_UpdateCurtainPosition(CT_No);
                            curtainData[CT_No].sendStep = j;
                        }
                        break;

                    case CURTAIN_STATE_CLOSE:
                        if(curtainData[CT_No].currentPosition >= (temp + (stepToSendLevel >> 1))){
                            Curtain_UpdateCurtainPosition(CT_No);
                            curtainData[CT_No].sendStep = j;
                        }
                        break;
                    }
                }
                return;
            }
        }
    }
}

/**
 * @func   Curtain_GotoPosition
 * @brief  Curtain go to specified position
 * @param  CurtainNumber_enum: Curtain Position
 *         BYTE: Position Per Char (0x00 to 0xFF)
 * @retval None
 */
static void Curtain_GotoPosition(u8 CT_No, u8 positionPerChar)
{

	DBG_CURTAIN_SEND_STR("\n Curtain_GotoPosition: ");
	DBG_CURTAIN_SEND_INT(positionPerChar);

    curtainData[CT_No].tempDestinationPositionToGoTo =
               (curtainData[CT_No].curtainLimitTime * positionPerChar + CURTAIN_CORRECTION_ERROR_VAL) / 0xFF;

    u32 min_step_ms = curtainData[CT_No].curtainLimitTime/50;   // 2%
    if(min_step_ms < 2 * DEFAULT_PULL_DELAY) {
    	min_step_ms = 2 * DEFAULT_PULL_DELAY;
    }
    if (curtainData[CT_No].tempDestinationPositionToGoTo > curtainData[CT_No].currentPosition) {
        if ((curtainData[CT_No].tempDestinationPositionToGoTo
                - curtainData[CT_No].currentPosition) < min_step_ms) {
            if(curtainData[CT_No].curtainState != CURTAIN_STATE_CLOSE){
                Curtain_SetCommand(CT_No, CURTAIN_CMD_STOP);
            }else{
                curtainData[CT_No].destinationPositionToGoTo = curtainData[CT_No].tempDestinationPositionToGoTo;
            }
        }
        else {
			Curtain_SetCommand(CT_No, CURTAIN_CMD_CLOSE);
			DBG_CURTAIN_SEND_STR("\n *** CURTAIN_CMD_CLOSE: ");
        }
    }
    else if (curtainData[CT_No].tempDestinationPositionToGoTo < curtainData[CT_No].currentPosition) {
        if ((curtainData[CT_No].currentPosition
                      - curtainData[CT_No].tempDestinationPositionToGoTo) < min_step_ms) {
            if(curtainData[CT_No].curtainState != CURTAIN_STATE_OPEN){
                Curtain_SetCommand(CT_No, CURTAIN_CMD_STOP);
            }else{
                curtainData[CT_No].destinationPositionToGoTo =  \
                        curtainData[CT_No].tempDestinationPositionToGoTo;
            }
        }
        else {
        	Curtain_SetCommand(CT_No, CURTAIN_CMD_OPEN);
            DBG_CURTAIN_SEND_STR("\n *** CURTAIN_CMD_OPEN: ");
        }
    }
    else {
        Curtain_SetCommand(CT_No, CURTAIN_CMD_STOP);
        DBG_CURTAIN_SEND_STR("\n *** CURTAIN_CMD_STOP: ");
    }
}

/**
 * @func   Curtain_ControlCurtainByApp
 * @brief
 * @param  CurtainNumber_enum: Curtain Number
 *         CurtainControlId_enum: Command ID
 *         BYTE: Curtain Position To Go
 * @retval None
 */
void Curtain_ControlCurtainByApp(u8 CT_No,                        \
                    CzControlType_Enum CT_CmdId, uint8_t positionPerChar)
{
    if(CT_CmdId == CURTAIN_CMD_TYPE_STOP) {
        Curtain_SetCommand(CT_No, CURTAIN_CMD_STOP);
    }else if(CT_CmdId == CURTAIN_CMD_TYPE_RUN) {
        if (positionPerChar == _MAX_POSITION) {
            curtainData[CT_No].tempDestinationPositionToGoTo = DESTINATION_NULL;
            Curtain_SetCommand(CT_No, CURTAIN_CMD_CLOSE);
        }
        else if (positionPerChar == _MIN_POSITION) {
            curtainData[CT_No].tempDestinationPositionToGoTo = DESTINATION_NULL;
            Curtain_SetCommand(CT_No, CURTAIN_CMD_OPEN);
        }
        else {
            Curtain_GotoPosition(CT_No, positionPerChar);
        }
    }
}


/**
 * @func   curtain_proc
 * @brief
 * @param  None
 * @retval None
 */
void curtain_proc(void)
{
    foreach(i, ELE_CNT) {
        // Handle Go To Position
        if(curtainData[i].enableCalculatorCurtainPosition == ENABLE) {
            Curtain_HandleGotoSpecifiedPosition(i);
            Curtain_HandleSendLevel(i);
            Curtain_HandleMinMaxPosition(i);
        }
    }
}

/**
 * @func   Curtain_UpdateCurtainPosition
 * @brief
 * @param  None
 * @retval None
 */
void Curtain_CallbackInit(typeCurtain_handleUpdatePosition func)
{
    if(func != NULL) {
        pvCurtain_handleUpdatePosition = func;
    }
}

/**
 * @func   curtain_init
 * @brief
 * @param  None
 * @retval None
 */
void curtain_init(void)
{
    foreach(i, ELE_CNT)
    {
        curtainData[i].enableCalculatorCurtainPosition = DISABLE;
        curtainData[i].cmdStep = 0;
        curtainData[i].sendStep = SEND_STEP_NULL;
        curtainData[i].currentCmd = CURTAIN_CMD_IDLE;
        curtainData[i].bufferCmd = CURTAIN_CMD_IDLE;

        // Stop Curtain
        curtainData[i].tempDestinationPositionToGoTo = DESTINATION_NULL;
        curtainData[i].destinationPositionToGoTo = DESTINATION_NULL;
        Curtain_SetCommand(i, CURTAIN_CMD_STOP);
        curtainData[i].curtainState = CURTAIN_STATE_STOP;
        #ifdef CZ_EXTENDED_STATE
        curtainData[i].extended_state = EX_ST_STOPED;
        #endif
    }
}

/**
 * @func   curtain_get_limit_time
 * @brief
 * @param  None
 * @retval None
 */
u32 curtain_get_limit_time(u8 idx)
{
    if(idx < ELE_CNT) {
        return curtainData[idx].curtainLimitTime;
    }
    return CURTAIN_LIMIT_TIME_INVALID;
}

/**
 * @func   curtain_set_common_par
 * @brief
 * @param  None
 * @retval None
 */
bool curtain_set_limit_time_from_app(u8 idx, u32 limit_time_set)
{
    if(idx < ELE_CNT) {
        if((limit_time_set >= CURTAIN_LIMIT_TIME_MIN)  \
                           && (limit_time_set <= CURTAIN_LIMIT_TIME_MAX)) {
            curtainData[idx].currentPosition = (curtainData[idx].currentPosition * limit_time_set)
                          / curtainData[idx].curtainLimitTime;
            curtainData[idx].curtainLimitTime = limit_time_set;
            return true;
        }
    }
    return false;
}

/**
 * @func   curtain_set_limit_time_when_power_up
 * @brief
 * @param  None
 * @retval None
 */
void curtain_set_limit_time_when_power_up(u8 idx, u32 limit_time_ms)
{
	if(idx < ELE_CNT) {
		if(limit_time_ms < CURTAIN_LIMIT_TIME_MIN) {
			curtainData[idx].curtainLimitTime = CURTAIN_LIMIT_TIME_MIN;
		}
		else {
			if(limit_time_ms > CURTAIN_LIMIT_TIME_MAX) {
				curtainData[idx].curtainLimitTime = LIMIT_TIME_DEFAULT;
			}
			else {
				curtainData[idx].curtainLimitTime = limit_time_ms;
			}
		}
	}
}

/**
 * @func   curtain_set_common_par
 * @brief
 * @param  None
 * @retval None
 */
void curtain_set_common_par(u8 idx, u8 position_per_char)
{
    if(idx < ELE_CNT) {
        if(curtainData[idx].currentPosition == _MAX_POSITION) {
            curtainData[idx].currentPosition = curtainData[idx].curtainLimitTime;
        }
        else {
            curtainData[idx].currentPosition =   \
                    (curtainData[idx].curtainLimitTime * position_per_char + CURTAIN_CORRECTION_ERROR_VAL) / _MAX_POSITION;;
        }
    }
}

// End curtain.c
