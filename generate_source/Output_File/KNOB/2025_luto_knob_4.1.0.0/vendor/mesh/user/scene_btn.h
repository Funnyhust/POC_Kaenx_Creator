/*
 * scene_btn.h
 *
 *  Created on: Jun 26, 2025
 *      Author: DungTranBK
 */

#ifndef SCENE_BTN_H_
#define SCENE_BTN_H_
/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "proj/tl_common.h"

/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/


/******************************************************************************/
/*                             EXPORT FUNCTIONS                               */
/******************************************************************************/
bool sc_delete_all_not_save_flash(void);
void sc_save_flash(void);
void sc_execution_scene_init(void);
void sc_execution_scene_active(u8 model_idx, u8 key_event);
void sc_execution_set_up_auto_send(void);
void sc_execution_proc(void);
int  sc_handle_vendor_setup_execution_scene_set(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par);

bool sc_execution_dimming_is_exist(u8 idx, u8* evt);
int sc_execution_dimming_control_by_key_number(u8 key_number, u8 evt, u8 st);

#endif /* SCENE_BTN_H_ */
