/*
 * knob.h
 *
 *  Created on: May 7, 2025
 *      Author: DungTranBK
 */

#ifndef KNOB_MSG_H_
#define KNOB_MSG_H_
/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "tl_common.h"
#include "element.h"

/******************************************************************************/

/******************************************************************************/
/*                       EXPORT TYPE AND DEFINITION                           */
/******************************************************************************/


/******************************************************************************/
/*                              EXPORT FUNCTION                               */
/******************************************************************************/
void auto_send_config_proc(void);
int advanced_config_enable_auto_send(void);

int knob_handle_mesh_cmd_sig_g_on_off_set(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par);
int knob_handle_response_message_from_mcu(u8 *par, u8 par_len);

int knob_handle_control_message(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par, u16 op);
int knob_send_request_message_to_mcu(u16 op, u8 model_idx, u8* par, u8 par_len, bool update_en);

#endif /* KNOB_MSG_H_ */
