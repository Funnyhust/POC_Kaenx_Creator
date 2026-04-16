/*
 * knob.c
 *
 *  Created on: May 7, 2025
 *      Author: DungTranBK
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "proj_lib/ble/blt_config.h"
#include "vendor/common/system_time.h"
#include "proj_lib/sig_mesh/app_mesh.h"
#include "vendor/common/lighting_model.h"
#include "vendor/common/lighting_model_HSL.h"
#include "../utilities.h"
#include "../serial.h"
#include "../sw_binding.h"
#include "../net_message.h"
#include "../cycle_funcs.h"
#include "knob.h"
#include "config.h"
#include "knob_msg.h"

#include "../debug.h"
#ifdef  KNOB_MSG_DBG_EN
#define DBG_KNOB_MSG_SEND_STR(x)   Dbg_sendString((s8*)x)
#define DBG_KNOB_MSG_SEND_INT(x)   Dbg_sendInt(x)
#define DBG_KNOB_MSG_SEND_HEX(x)   Dbg_sendHex(x)
#define DBG_KNOB_MSG_SEND_BYTE(x)  Dbg_sendHexOneByte(x)
#else
#define DBG_KNOB_MSG_SEND_STR(x)
#define DBG_KNOB_MSG_SEND_INT(x)
#define DBG_KNOB_MSG_SEND_HEX(x)
#define DBG_KNOB_MSG_SEND_BYTE(x)
#endif

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/
const u8 auto_send_config_arr[] = {
				VD_CONFIG_SWITCH_MODE_OPT,        // 0x21
				VD_CONFIG_ON_POWER_UP_STATE,      // 0x2A -> 0x8212 (V1)
				VD_CONFIG_CURTAIN_LIMIT_TIME,     // 0x40
				VD_CONFIG_BACKLIGHT_BRIGHTNESS,   // 0x53
				VD_CONFIG_KNOB_BRIGHTNESS,        // 0xE6
				VD_CONFIG_KNOB_INACTIVE_TIMEOUT,  // 0xE7
				VD_CONFIG_ENDPOINT_VISIBILITY,    // 0xA0
				VD_CONFIG_AC_PARAMETER,           // 0xA1
			};

typedef struct {
	bool en;
	u32  send_last_t;
	u8   op_index;
	u8   idx;
	bool en_fast;
	u32  delay_st;
	bool en_delay;
	bool send_join;
}advanced_cfg_auto_t;

static advanced_cfg_auto_t advanced_cfg_auto_st = {
				.en = false, .send_last_t = 0, .op_index = 0,  \
				.idx = 0, .delay_st = 0, .en_delay = false, .send_join = false
			};
/******************************************************************************/
/*                          PRIVATE FUNCTIONS DECLERATION                     */
/******************************************************************************/

/******************************************************************************/
/*                           EXPORT FUNCTIONS DECLERATION                     */
/******************************************************************************/

/**
 * @func    auto_send_config_proc
 * @brief
 * @param   None
 * @retval  None
 */
void auto_send_config_proc(void)
{
    if(advanced_cfg_auto_st.en == true) {
        if(clock_time_exceed_ms    \
        		(advanced_cfg_auto_st.send_last_t, TIMER_1S + rand()%TIMER_1S)) {
        	if(advanced_cfg_auto_st.op_index >= sizeof(auto_send_config_arr)) {
        		advanced_cfg_auto_st.en = false;
        		return;
        	}
			if(auto_send_config_arr[advanced_cfg_auto_st.op_index] == VD_CONFIG_SWITCH_MODE_OPT) {
				bool is_switch = false;
				if(get_endpoint_type_follow_model_index(advanced_cfg_auto_st.idx) == TYPE_SWITCH) {
					advanced_config_response_switch_mode(   \
							advanced_cfg_auto_st.idx, ele_adr_primary + advanced_cfg_auto_st.idx);
					is_switch = true;
				}
				if(++advanced_cfg_auto_st.idx >= ELE_CNT) {
					advanced_cfg_auto_st.op_index++;
					advanced_cfg_auto_st.idx = 0;
				}
				else {
					if(is_switch == false) {
						return;  // don't reset time
					}
				}
			}
			else if (auto_send_config_arr[advanced_cfg_auto_st.op_index] == VD_CONFIG_ON_POWER_UP_STATE) {
				bool is_switch = false;
				if(get_endpoint_type_follow_model_index(advanced_cfg_auto_st.idx) == TYPE_SWITCH) {
					advaced_config_response_on_power_up_state(  \
							advanced_cfg_auto_st.idx, ele_adr_primary + advanced_cfg_auto_st.idx);
					is_switch = true;
				}
				if(++advanced_cfg_auto_st.idx >= ELE_CNT) {
					advanced_cfg_auto_st.op_index++;
					advanced_cfg_auto_st.idx = 0;
				}
				else {
					if(is_switch == false) {
						return;  // don't reset time
					}
				}
			}
			else if(auto_send_config_arr[advanced_cfg_auto_st.op_index] == VD_CONFIG_CURTAIN_LIMIT_TIME) {
				bool is_curtain = false;
				if(get_endpoint_type_follow_model_index(advanced_cfg_auto_st.idx) == TYPE_CURTAIN) {
					advanced_config_response_limit_time(  \
							advanced_cfg_auto_st.idx, ele_adr_primary + advanced_cfg_auto_st.idx);
					is_curtain = true;
				}
				if(++advanced_cfg_auto_st.idx >= ELE_CNT) {
					advanced_cfg_auto_st.op_index++;
					advanced_cfg_auto_st.idx = 0;
				}
				else {
					if(is_curtain == false) {
						return;  // don't reset time
					}
				}
			}
			else if(auto_send_config_arr[advanced_cfg_auto_st.op_index] == VD_CONFIG_BACKLIGHT_BRIGHTNESS) {
				knob_response_led_brightness(0);
				advanced_cfg_auto_st.op_index++;
			}
			else if(auto_send_config_arr[advanced_cfg_auto_st.op_index] == VD_CONFIG_KNOB_BRIGHTNESS) {
				knob_response_display_brightness(0);
				advanced_cfg_auto_st.op_index++;
			}
			else if(auto_send_config_arr[advanced_cfg_auto_st.op_index] == VD_CONFIG_KNOB_INACTIVE_TIMEOUT) {
				knob_handle_response_inactive_timeout(0);
				advanced_cfg_auto_st.op_index++;
			}
			else if(auto_send_config_arr[advanced_cfg_auto_st.op_index] == VD_CONFIG_ENDPOINT_VISIBILITY) {
				u8 endpoint_id = 0;
				element_handle_message_get_endpoint_visibility(0, &endpoint_id, 1);
				advanced_cfg_auto_st.op_index++;
			}
			else if(auto_send_config_arr[advanced_cfg_auto_st.op_index] == VD_CONFIG_AC_PARAMETER) {
				bool is_ac = false;
				if(get_endpoint_type_follow_model_index(advanced_cfg_auto_st.idx) == TYPE_AIR_CONDITIONER) {
					u8 endpoint_id = advanced_cfg_auto_st.idx + 1;
					element_handle_message_get_ac_parameter(advanced_cfg_auto_st.idx, &endpoint_id, 1);
					is_ac = true;
				}
				if(++advanced_cfg_auto_st.idx >= ELE_CNT) {
					advanced_cfg_auto_st.op_index++;
					advanced_cfg_auto_st.idx = 0;
				}
				else {
					if(is_ac == false) {
						return;  // don't reset time
					}
				}
			}
			else {   // Unknown
				advanced_cfg_auto_st.op_index++;
				advanced_cfg_auto_st.idx = 0;
			}
			advanced_cfg_auto_st.send_last_t = clock_time_ms();
        }
    }
}

/**
 * @func    advanced_config_enable_auto_send
 * @brief
 * @param   None
 * @retval  None
 */
int advanced_config_enable_auto_send(void)
{
	advanced_cfg_auto_st.en = true;
	advanced_cfg_auto_st.send_last_t = clock_time_ms();
	if(advanced_cfg_auto_st.send_last_t >= TIMER_1S) {
		advanced_cfg_auto_st.send_last_t -= TIMER_1S;
	}
	advanced_cfg_auto_st.op_index = 0;
	advanced_cfg_auto_st.idx = 0;
	return 0;
}

/**
 * @func    advance_config_auto_send_delay
 * @brief
 * @param
 * @retval  None
 */
void advance_config_auto_send_delay(void)
{
	advanced_config_enable_auto_send();
	CycleFunc_remove(advance_config_auto_send_delay);
}

/**
 * @func    advanced_setup_enable_auto_send
 * @brief
 * @param
 * @retval  None
 */
void advanced_setup_enable_auto_send(bool en, u32 delay_time)
{
	if(en == true) {
		CycleFunc_add(advance_config_auto_send_delay, delay_time);
	}
	else {
		CycleFunc_remove(advance_config_auto_send_delay);
	}
}

/**********************************************************
 * BLE MESH MESSAGE
 *********************************************************/

/**
 * @func    knob_handle_control_message
 * @brief   CCT, HSL, LIGHTNESS control
 * @param
 * @retval  None
 */
int knob_handle_control_message(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par, u16 op)
{
	DBG_KNOB_MSG_SEND_STR("\n knob_handle_control_message: ");
	DBG_KNOB_MSG_SEND_INT(cb_par->model_idx);
	EndpointType_Enum type = get_endpoint_type_follow_model_index(cb_par->model_idx);
	// Binding loop
	foreach(i, ELE_CNT) {
		if(cb_par->adr_src == ele_adr_primary + i) {
			if(get_endpoint_type_follow_model_index(i) != TYPE_SCENE) {
				return -1;
			}
			DBG_KNOB_MSG_SEND_STR("\n *** Enable - from scene endpoint");
		}
	}
	DBG_KNOB_MSG_SEND_STR("\n 1, ");
	if(type == TYPE_SWITCH) {
		u16 binding_adr = get_group_binding_adr(cb_par->model_idx);
		if(binding_adr == ADR_UNASSIGNED) {
			return -1;
		}
		if(cb_par->adr_dst == binding_adr) {
			DBG_KNOB_MSG_SEND_STR("\n ...SWITCH");
			u8 st_control = G_ONOFF_RSV;
			if(op == LIGHTNESS_SET) {
				mesh_cmd_lightness_set_t* p_set = (mesh_cmd_lightness_set_t*)par;
				st_control = (p_set->lightness == LUM_OFF)?G_OFF:G_ON;
			}
			else if(op == LIGHT_CTL_SET) {
				mesh_cmd_light_ctl_set_t *p_set = (mesh_cmd_light_ctl_set_t *)par;
				st_control = (p_set->lightness == LUM_OFF)?G_OFF:G_ON;
			}
			else if(op == LIGHT_HSL_SET) {
				mesh_cmd_light_hsl_set_t *p_set = (mesh_cmd_light_hsl_set_t *)par;
				st_control = (p_set->lightness == LUM_OFF)?G_OFF:G_ON;
			}
			if(st_control < G_ONOFF_RSV)
			{
				bool en_send = TRUE;
				st_transition_t *p_trans = P_ST_TRANS(cb_par->model_idx, ST_TRANS_LIGHTNESS);
				if(p_trans->target == LEVEL_OFF) {
					if(st_control == G_OFF) {
						control_binding_st[cb_par->model_idx].cnt_same++;
						if(control_binding_st[cb_par->model_idx].cnt_same >= CONTROL_BDG_SAME_ST_CNT_MAX) {
							en_send = FALSE;
						}
					}
					else {
						control_binding_st[cb_par->model_idx].cnt_same = 0;
					}
				}
				else if(p_trans->target == LEVEL_MAX) {
					if(st_control == G_ON) {
						control_binding_st[cb_par->model_idx].cnt_same++;
						if(control_binding_st[cb_par->model_idx].cnt_same >= CONTROL_BDG_SAME_ST_CNT_MAX) {
							en_send = FALSE;
						}
					}
					else {
						control_binding_st[cb_par->model_idx].cnt_same = 0;
					}
				}
				if(en_send == TRUE) {
					mesh_cmd_g_onoff_set_t onoff_set;
					memset(&onoff_set, 0, sizeof(mesh_cmd_g_onoff_set_t));
					onoff_set.onoff = st_control;
					knob_send_request_message_to_mcu(
								G_ONOFF_SET,cb_par->model_idx,(u8*)&onoff_set,sizeof(mesh_cmd_g_onoff_set_t),TRUE
							);
					update_control_message_params(
								cb_par->model_idx,cb_par->adr_src,cb_par->adr_dst,G_ONOFF_SET
							);
				}
			}
			return 0;
		}
	}
	else if(type == TYPE_DIM) {
		DBG_KNOB_MSG_SEND_STR("\n ...DIM: ");
		if(op == LIGHTNESS_SET) {
			mesh_cmd_lightness_set_t *lightness_set = (mesh_cmd_lightness_set_t*)par;

#ifdef  KNOB_DBG_EN
			foreach(i, sizeof(mesh_cmd_lightness_set_t)) {
				DBG_KNOB_SEND_BYTE(par[i]);
				DBG_KNOB_MSG_SEND_STR(" ");
			}
#endif

			if(par_len == sizeof(mesh_cmd_lightness_set_t)+1) {
				if(par[par_len - 1] == 0x0) {
					st_transition_t *p_trans =   \
							P_ST_TRANS(cb_par->model_idx, ST_TRANS_LIGHTNESS);
					if(s16_to_u16(p_trans->present) == lightness_set->lightness) {
						__delay_ms(50);
						force_control_binding[cb_par->model_idx] = FALSE;
						return -1;
					}
				}
			}
			update_control_message_params(
						cb_par->model_idx,cb_par->adr_src,cb_par->adr_dst, LIGHTNESS_SET
					);
			return knob_send_request_message_to_mcu(
							LIGHTNESS_SET,cb_par->model_idx,(u8*)lightness_set,sizeof(mesh_cmd_lightness_set_t), TRUE
						);
		}
		else {
		    if(op == G_ONOFF_SET) {
				mesh_cmd_g_onoff_set_t* onoff_set = (mesh_cmd_g_onoff_set_t*)par;
				return knob_send_request_message_to_mcu(
								G_ONOFF_SET,cb_par->model_idx,(u8*)onoff_set, sizeof(mesh_cmd_g_onoff_set_t), TRUE
							);
			}
		}
		return -1;
	}
	else if(type == TYPE_CCT) {
		DBG_KNOB_MSG_SEND_STR("\n ...CCT control");
		if(op == LIGHT_CTL_SET) {
			mesh_cmd_light_ctl_set_t* mesh_cmd_light_ctl_set = (mesh_cmd_light_ctl_set_t *)par;
			update_control_message_params(cb_par->model_idx,cb_par->adr_src,cb_par->adr_dst, LIGHT_CTL_SET);
			return knob_send_request_message_to_mcu(
							LIGHT_CTL_SET,cb_par->model_idx,(u8*)mesh_cmd_light_ctl_set, sizeof(mesh_cmd_light_ctl_set_t), TRUE
						);
		}
		else if(op == LIGHTNESS_SET) {
			mesh_cmd_lightness_set_t *lightness_set = (mesh_cmd_lightness_set_t*)par;
			update_control_message_params(cb_par->model_idx,cb_par->adr_src,cb_par->adr_dst, LIGHTNESS_SET);
			return knob_send_request_message_to_mcu(
							LIGHTNESS_SET,cb_par->model_idx,(u8*)lightness_set, sizeof(mesh_cmd_lightness_set_t), TRUE
						);
		}
		else if(op == G_ONOFF_SET) {
			mesh_cmd_g_onoff_set_t* onoff_set = (mesh_cmd_g_onoff_set_t*)par;
			update_control_message_params(cb_par->model_idx,cb_par->adr_src,cb_par->adr_dst,G_ONOFF_SET);
			return knob_send_request_message_to_mcu(
							G_ONOFF_SET, cb_par->model_idx,(u8*)onoff_set, sizeof(mesh_cmd_g_onoff_set_t), TRUE
						);
		}
	}
	else if(type == TYPE_CURTAIN) {
		#ifdef  KNOB_DBG_EN
		DBG_KNOB_MSG_SEND_STR("\n ...Curtain control: ");
		foreach(i, par_len) {
			DBG_KNOB_SEND_BYTE(par[i]);
			DBG_KNOB_MSG_SEND_STR(" ");
		}
        #endif
		vd_cmd_g_level_set_t *level_set = (vd_cmd_g_level_set_t *)par;
		if(op == G_LEVEL_SET) {
			update_control_message_params(cb_par->model_idx,cb_par->adr_src,cb_par->adr_dst, G_LEVEL_SET);
			return knob_send_request_message_to_mcu(
							G_LEVEL_SET,cb_par->model_idx,(u8*)level_set, sizeof(vd_cmd_g_level_set_t), TRUE
						);
		}
	}
	else if(type == TYPE_FAN) {
		#ifdef  KNOB_DBG_EN
		DBG_KNOB_MSG_SEND_STR("\n ...Fan control: ");
		foreach(i, par_len) {
			DBG_KNOB_SEND_BYTE(par[i]);
			DBG_KNOB_MSG_SEND_STR(" ");
		}
		#endif
		if(op == G_LEVEL_SET) {
			vd_cmd_g_level_set_t *level_set = (vd_cmd_g_level_set_t *)par;
			if(level_set->type == FAN_CMD_LEVEL) {
				update_control_message_params(cb_par->model_idx,cb_par->adr_src,cb_par->adr_dst, G_LEVEL_SET);
				return knob_send_request_message_to_mcu(
								G_LEVEL_SET,cb_par->model_idx,(u8*)level_set, sizeof(vd_cmd_g_level_set_t), TRUE
							);
			}
		}
	}
	else if(type == TYPE_AIR_CONDITIONER) {
		DBG_KNOB_MSG_SEND_STR("\n ELE AC");
		if(op == VD_CONFIG_NODE_SET_ACK) {
			u16 vd_op = (op << 8)|0x11;
			update_control_message_params(cb_par->model_idx, cb_par->adr_src,cb_par->adr_dst, op);
			return knob_send_request_message_to_mcu(vd_op, cb_par->model_idx, par, par_len, TRUE);
		}
	}
	else if(type == TYPE_AUDIO) {
		DBG_KNOB_MSG_SEND_STR("\n ELE MUSIC");
		if(op == VD_LIGHT_SPEAKER_SET || VD_LIGHT_SPEAKER_GET) {
			u16 vd_op = (op << 8)|0x11;
			update_control_message_params(cb_par->model_idx, \
					cb_par->adr_src,cb_par->adr_dst, op);
			return knob_send_request_message_to_mcu(
							vd_op,cb_par->model_idx, par, par_len, TRUE
						);
		}
	}
	else {
		DBG_KNOB_MSG_SEND_STR("\n ELE_KNOB not support");
	}
	return -1;
}


/**
 * @func    knob_send_request_message_to_mcu
 * @brief
 * @param
 * @retval  None
 */
int knob_send_request_message_to_mcu(
		u16 op, u8 model_idx, u8* par, u8 par_len, bool update_en)
{
	if(par_len < KNOB_PAR_LEN_MAX)
	{
		knob_request_t knob_request;
		u8 head_len = sizeof(knob_request_t) - KNOB_PAR_LEN_MAX;
		knob_request.op = op;
		knob_request.model_idx = model_idx;
		knob_request.par_len = par_len;
		memcpy(knob_request.par, par, par_len);
		u8 *p = (u8*)&knob_request;
		u8 cXor = 0;
		foreach(i, head_len + par_len) {
			cXor ^= *( p + i );
		}
		knob_request.par[par_len] = cXor;
		element_handle_incomming_message((u8*)&knob_request.op, head_len + par_len);
		if(update_en == TRUE) {
			if(op == G_ONOFF_SET) {
				mesh_cmd_g_onoff_set_t* on_off_set = (mesh_cmd_g_onoff_set_t*)par;
				u8 onoff_st = on_off_set->onoff;
				incomming_st[model_idx] = onoff_st;
			}
		}
		return 0;
	}
	return -1;
}

/**
 * @func    knob_handle_mesh_cmd_sig_g_on_off_set
 * @brief
 * @param
 * @retval  None
 */
int knob_handle_mesh_cmd_sig_g_on_off_set(
		u8 *par, int par_len, mesh_cb_fun_par_t *cb_par)
{
	DBG_KNOB_MSG_SEND_STR("\n knob_handle_mesh_cmd_sig_g_on_off_set: ");
	EndpointType_Enum type = get_endpoint_type_follow_model_index(cb_par->model_idx);
	if(type == TYPE_SWITCH  \
			|| type == TYPE_CCT  \
				|| type == TYPE_DIM
					|| type == TYPE_FAN)
	{
		if(cb_par->model_idx >= ELE_CNT) {
			return -1;
		}
		foreach(i, ELE_CNT) {
			if(cb_par->adr_src == ele_adr_primary + i) {
				if(get_endpoint_type_follow_model_index(i) != TYPE_SCENE) {
					return -1;
				}
				DBG_KNOB_MSG_SEND_STR("\n *** Enable - from scene endpoint");
			}
		}
		mesh_cmd_g_onoff_set_t *p_set = (mesh_cmd_g_onoff_set_t *)par;
		if(par_len == sizeof(mesh_cmd_g_onoff_set_t)+1) {
		    if(par[par_len - 1] == 0x0) {
				st_transition_t *p_trans =   \
						P_ST_TRANS(cb_par->model_idx, ST_TRANS_LIGHTNESS);
				if(get_onoff_from_level(p_trans->present) == p_set->onoff) {
					__delay_ms(50);
					force_control_binding[cb_par->model_idx] = FALSE;
					return -1;
				}
		    }
		}
		update_control_message_params(
							cb_par->model_idx,
							cb_par->adr_src,
							cb_par->adr_dst,
							G_ONOFF_SET
						);
		knob_send_request_message_to_mcu(
							G_ONOFF_SET,
							cb_par->model_idx,
							par,
							par_len,
							TRUE
						);
		return 0;
	}
	return -1;
}

/*****************************
 * MCU MESSAGE
 ****************************/

/**
 * @func    knob_handle_knob_response_message_from_mcu
 * @brief
 * @param
 * @retval  None
 */
int knob_handle_response_message_from_mcu(u8 *par, u8 par_len)
{
#ifdef  KNOB_DBG_EN
	DBG_KNOB_MSG_SEND_STR("\n knob_handle_response_message_from_mcu: ");
	foreach(i, par_len) {
		DBG_KNOB_SEND_BYTE(par[i]);
		DBG_KNOB_MSG_SEND_STR(" ");
	}
#endif
	if(par_len <= sizeof(knob_response_t)+1) {
		knob_response_t* p_knob_response = (knob_response_t*)par;

		DBG_KNOB_MSG_SEND_STR("model_idx: ");
		DBG_KNOB_MSG_SEND_INT(p_knob_response->model_idx);

		EndpointType_Enum type = get_endpoint_type_follow_model_index(p_knob_response->model_idx);
		switch(type)
		{
			case TYPE_SWITCH:
			{
				DBG_KNOB_MSG_SEND_STR("\n ELE_SUPPORT_SWITCH");
				mesh_cmd_g_onoff_st_t *onoff_st = (mesh_cmd_g_onoff_st_t*)p_knob_response->par;
				device_status_t device_status;
				device_status.status = onoff_st->present_onoff;
				serial_handle_relay_or_switch_status_response(p_knob_response->model_idx, &device_status);
				break;
			}
			case TYPE_CCT:
			{
				DBG_KNOB_MSG_SEND_STR("\n ELE_SUPPORT_CCT: ");
				DBG_KNOB_MSG_SEND_INT(p_knob_response->model_idx);
				mesh_cmd_light_ctl_st_t *mesh_cmd_light_ctl_st =  \
								(mesh_cmd_light_ctl_st_t*)p_knob_response->par;
				serial_handle_cct_status_response(
								p_knob_response->model_idx,
								mesh_cmd_light_ctl_st->present_lightness,
								mesh_cmd_light_ctl_st->present_temp
							);
				break;
			}

			case TYPE_DIM:
			{
				DBG_KNOB_MSG_SEND_STR("\n ELE_SUPPORT_DIM");
				mesh_cmd_lightness_st_t *lightness_st = (mesh_cmd_lightness_st_t*)p_knob_response->par;
				device_status_t device_status;
				device_status.dim_st.lightness = lightness_st->present;
				serial_handle_dim_status_response(p_knob_response->model_idx, &device_status);
				DBG_KNOB_MSG_SEND_STR("\n Lightness: ");
				DBG_KNOB_MSG_SEND_HEX(lightness_st->present);
				DBG_KNOB_MSG_SEND_STR(", ");
				DBG_KNOB_MSG_SEND_HEX(device_status.status);
				break;
			}
			case TYPE_CURTAIN:
				DBG_KNOB_MSG_SEND_STR("\n ELE_SUPPORT_CURTAIN: ");
				vd_cmd_g_level_status_t *vd_cmd_g_level_status =  \
								(vd_cmd_g_level_status_t*)p_knob_response->par;
				DBG_KNOB_MSG_SEND_INT(vd_cmd_g_level_status->present_level);
				device_status_t device_status;
				memset(&device_status, 0, sizeof(device_status_t));
				device_status.level_st.type = vd_cmd_g_level_status->type;
				device_status.level_st.state = vd_cmd_g_level_status->state;
				device_status.level_st.present_level = vd_cmd_g_level_status->present_level;
				device_status.level_st.target_level = vd_cmd_g_level_status->target_level;
				serial_handle_curtain_status_response(p_knob_response->model_idx, &device_status);
				break;

			case TYPE_FAN:
			{
				DBG_KNOB_MSG_SEND_STR("\n RESP ELE_SUPPORT_FAN");
				u8 model_idx = p_knob_response->model_idx;
				if(nwk_control_msg_para[model_idx].dst < ADR_GROUP_START_POINT) {
					light_publish_status_delay(model_idx, 0);
				}
				else {
					if(nwk_control_msg_para[model_idx].dst < ADR_FIXED_GROUP_START) {
						light_publish_status_delay(model_idx, TIMER_1S + (rand()%TIMER_3S));
					}
					else {
						light_publish_status_delay(model_idx, TIMER_5S + (rand()%TIMER_30S));
					}
					nwk_control_msg_para[model_idx].opcode = G_LEVEL_SET;
					nwk_control_msg_para[model_idx].dst = ele_adr_primary + model_idx;
				}
				break;
			}
			case TYPE_AIR_CONDITIONER:
			{
				DBG_KNOB_MSG_SEND_STR("\n RESP ELE_SUPPORT_AC");

				ac_control_rsp_t *p = (ac_control_rsp_t*)p_knob_response->par;
				device_status_t device_status;

				device_status.ac_st.on_off = p->onoff_mode.onoff;
				device_status.ac_st.mode = p->onoff_mode.mode;
				device_status.ac_st.swing = p->fan_dir;
				device_status.ac_st.fan = p->fan_volume;
				device_status.ac_st.temp_set = p->temp;
				device_status.ac_st.temp_room = p->temp_room;

				serial_handle_ac_status_response(p_knob_response->model_idx, (ac_status_t*)&device_status.ac_st);

				/*
				mesh_tx_cmd_rsp(
						VD_CONFIG_NODE_STATUS,
						p_knob_response->par,
						p_knob_response->par_len,
						ele_adr_primary + p_knob_response->model_idx,
						GATEWAY_UNICAST_ADDR,
						0,
						0
					);
				*/
				break;
			}
			case TYPE_AUDIO:
				DBG_KNOB_MSG_SEND_STR("\n RESP ELE_SUPPORT_MUSIC");
				mesh_tx_cmd_rsp(
						VD_LIGHT_SPEAKER_STATUS,
						 p_knob_response->par,
						 p_knob_response->par_len,
						ele_adr_primary + p_knob_response->model_idx,
						GATEWAY_UNICAST_ADDR,
						0,
						0
					);
				break;

			default:
				DBG_KNOB_MSG_SEND_STR("\n Knob ELE not support");
				break;
		}
		return 0;
	}
	return -1;
}
