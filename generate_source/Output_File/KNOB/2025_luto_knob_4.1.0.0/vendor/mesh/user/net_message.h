/*
 * net_message.h
 *
 *  Created on: Sep 19, 2020
 *      Author: DungTran BK
 */

#ifndef NET_MESSAGE_H_
#define NET_MESSAGE_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "../../../proj/tl_common.h"
/******************************************************************************/
/*                       EXPORT TYPE AND DEFINITION                           */
/******************************************************************************/

typedef struct {
	u8  st_present;
	u8  st_from_nwk;
	u8  binding_st;
	u32 binding_active_last_t;
}sw_control_t;

#define CONTROL_BDG_SAME_ST_CNT_MAX       0x3

extern u8 scene_active_arr[ELE_CNT];
extern u8 incomming_st[ELE_CNT];

typedef struct {
	u8  flag;
	u8  level;
	u16 lightness;
	u8  level_non_zz;
	u16 lightness_non_zz;
}app_control_state_t;

/******************************************************************************/
/*                              EXPORT FUNCTION                               */
/******************************************************************************/
void send_control_dev_manual_to_mcu(u16 model_idx, bool state, bool update_en);
u8 get_incomming_st(int idx);
void set_incomming_st(int idx, bool st);
void cz_send_control_dev_manual_to_mcu(u16 model_idx, u8 pos, u8 control_id, bool update_en);

#endif /* NET_MESSAGE_H_ */
