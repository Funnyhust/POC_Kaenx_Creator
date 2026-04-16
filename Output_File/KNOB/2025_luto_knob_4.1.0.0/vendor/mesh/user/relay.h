/*
 * relay.h
 *
 *  Created on: Jun 3, 2025
 *      Author: DungTranBK
 */

#ifndef RELAY_H_
#define RELAY_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "config_board.h"

/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/
#define RL_ON       1
#define RL_OFF      0

#define RELAY_ARR   { RL0_IO_PIN, RL1_IO_PIN }


enum relay_module_status_enum{
	RELAY_MODULE_IDLE = 0,
	RELAY_MODULE_BUSY = 1,
};
typedef uint8_t RelayModuleStatus_enum;


enum RelayControlSuccess_enum{
	CONTROL_IN_PROCESSING = 0,
	CONTROL_SUCCESS = 1,
};
typedef uint8_t RelayControlSuccess_enum;


#define NO_RL_NUMBER_ACTIVE     0xFF


#define	DEFAULT_RL_ON_DELAY		4500
#define	DEFAULT_RL_OFF_DELAY    4500

#define SPECIAL_RL_ON_DELAY     4500
#define SPECIAL_RL_OFF_DELAY    4500

typedef void (*type_relay_handle_state_change)(u8 idx, u8 st);

/******************************************************************************/
/*                             EXPORT FUNCTIONS                               */
/******************************************************************************/
void relay_callback_init(type_relay_handle_state_change func);
void relay_init(void);
u8 relay_proc(void);
u16 relay_get_target_state(void);
void relay_set_target_state(u8 idx, u8 st);

#endif /* RELAY_H_ */
