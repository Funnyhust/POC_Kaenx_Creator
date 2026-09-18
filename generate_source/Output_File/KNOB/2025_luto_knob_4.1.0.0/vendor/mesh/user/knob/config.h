/*
 * config.h
 *
 *  Created on: Oct 4, 2025
 *      Author: DungTranBK
 */

#ifndef CONFIG_H_
#define CONFIG_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "knob_common.h"

/******************************************************************************/
/*                       EXPORT TYPE AND DEFINITION                           */
/******************************************************************************/
typedef struct {
	u8  mode;
	u8  toggle_type;
	u16 delay_time_s;
}switch_mode_t;

typedef struct {
	switch_mode_t switch_mode;
	u8 power_on_state;
	u32 curtain_limit_time;
}advanced_config_t;

extern advanced_config_t advanced_config[ELE_CNT];

typedef void (*type_handle_btn_change_mode)(u8 btn_id, u8 mode);

/******************************************************************************/
/*                              EXPORT FUNCTION                               */
/******************************************************************************/
int advanced_config_response_limit_time(u8 idx, u16 adr_src);
int advanced_config_response_switch_mode(u8 idx, u16 adr_src);
int advaced_config_response_on_power_up_state(u8 idx, u8 adr_src);

void advanced_config_store(void);
bool advanced_config_set_to_default(u8 model_idx);
int advanced_config_handle_get_limit_time(u8 model_idx, u8* par, u8 par_len);
int advanced_config_handle_set_limit_time(u8 model_idx, u8* par, u8 par_len);
int advanced_config_handle_get_switch_mode(u8 model_idx, u8* par, u8 par_len);
int advance_config_handle_set_switch_mode(u8 model_idx, u8* par, u8 par_len);
int advanced_config_handle_get_on_power_up_state(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par);
int advanced_config_handle_set_on_power_up_state(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par);

void advanced_callback_init(type_handle_btn_change_mode func);
void advanced_config_init(void);

#endif /* CONFIG_H_ */
