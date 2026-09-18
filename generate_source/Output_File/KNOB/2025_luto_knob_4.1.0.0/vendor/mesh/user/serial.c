/*
 * serial.c
 *
 *  Created on: Sep 18, 2020
 *      Author: DungTran BK
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/

#include "../../../proj/tl_common.h"
#include "../../../proj_lib/ble/blt_config.h"
#include "../../common/system_time.h"
#include "../../common/lighting_model.h"
#include "../../../proj_lib/sig_mesh/app_mesh.h"
#include "utilities.h"
#include "key_report.h"
#include "execution_scene.h"
#include "net_message.h"
#include "sw_binding.h"
#include "sw_binding.h"
#include "proj/drivers/uart.h"
#include "serial_queue.h"
#include "pre_update.h"
#include "knob/knob_msg.h"
#include "fact/fact.h"
#include "factory_reset.h"
#include "scene_btn.h"
#include "serial.h"

#include "debug.h"
#ifdef SERIAL_DBG_EN
#define DBG_SERIAL_SEND_STR(x)   Dbg_sendString((s8*)x)
#define DBG_SERIAL_SEND_INT(x)   Dbg_sendInt(x)
#define DBG_SERIAL_SEND_HEX(x)   Dbg_sendHex(x)
#define DBG_SERIAL_SEND_BYTE(x)  Dbg_sendHexOneByte(x)
#define DBG_SERIAL_SEND_HEX32(x) Dbg_sendHex32(x)
#else
#define DBG_SERIAL_SEND_STR(x)
#define DBG_SERIAL_SEND_INT(x)
#define DBG_SERIAL_SEND_HEX(x)
#define DBG_SERIAL_SEND_BYTE(x)
#define DBG_SERIAL_SEND_HEX32(x)
#endif

type_handleGetDeviceInfoSuccess            pv_handleGetDeviceInfoSuccess = NULL;
typeSerial_HandleRspConfigMcuCallbackFunc  pvSerial_HandleRspConfigMcu   = NULL;
#if INTER_PROVISION_EN
typeSerial_HandleInterProvCallbackFunc     pvSerial_HandleInterProvCallbackFunc = NULL;
#endif
/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/
static binding_par_t  binding_par[ELE_CNT];

static u8 lightness_tid[ELE_CNT];
static u8 state_of_group_binding[ELE_CNT];
static BOOL en_binding_and_execution[ELE_CNT];
static BOOL cz_first_st_msg[ELE_CNT];
static BOOL pw_on_flag[ELE_CNT];
static u8 gen_execution_scene_st[ELE_CNT];

curtain_level_t cz_level_st[ELE_CNT];
/******************************************************************************/
/*                          PRIVATE FUNCTIONS DECLERATION                     */
/******************************************************************************/


/******************************************************************************/
/*                           EXPORT FUNCTIONS DECLERATION                     */
/******************************************************************************/

/**
 * @func    set_st_group_binding
 * @brief
 * @param   None
 * @retval  None
 */
void set_st_group_binding(int idx, bool st)
{
	if(idx < ELE_CNT) {
		state_of_group_binding[idx] = st;
	}
}

/**
 * @func    binding_par_init
 * @brief
 * @param
 * @retval  None
 */
static void binding_par_init(void)
{
	foreach(i, ELE_CNT) {
		// switch on off
		binding_par[i].sw.onoff_present = G_ONOFF_RSV;
		// Curtain
		binding_par[i].curtain.present_level = binding_par[i].curtain.target_level = 0;
		binding_par[i].curtain.state = ST_UNKNOWN;
		// dimmer
		binding_par[i].dimmer.level     = 0;
		binding_par[i].dimmer.lightness = 0;
		binding_par[i].dimmer.trans_t = DIM_TRANS_DEFAULT;
		// CCT
		binding_par[i].cct.group_lightness = 0;
		binding_par[i].cct.group_temperature = CTL_TEMP_MIN;
	}
}

/**
 * @func    common_par_init
 * @brief
 * @param
 * @retval  None
 */
void common_par_init(void)
{
	binding_par_init();
	foreach(i, ELE_CNT) {
		lightness_tid[i] = 0;
		state_of_group_binding[i] = SUB_UNKNOWN;
		en_binding_and_execution[i] = false;
		cz_first_st_msg[i] = false;
		pw_on_flag[i] = true;
		gen_execution_scene_st[i] = G_ONOFF_RSV;

		cz_level_st[i].present_level = cz_level_st[i].target_level = 0;
		cz_level_st[i].state = ST_UNKNOWN;
	}
}

/**
 * @func    send_on_off_control_to_ble_group
 * @brief
 * @param
 * @retval  None
 */
static void send_on_off_control_to_ble_group(u8 model_idx, BOOL status)
{
	if(model_idx < ELE_CNT) {
		u16 binding_adr = get_group_binding_adr(model_idx);
		if(binding_adr != ADR_UNASSIGNED) {
			BOOL en_binding = FALSE;
			mesh_cmd_g_onoff_set_t on_off_set;
			// CLEAN force control
			if(nwk_control_msg_para[model_idx].dst == binding_adr) {
				force_control_binding[model_idx] = FALSE;
			}
			// POWER ON
			if(state_of_group_binding[model_idx] == SUB_UNKNOWN) {
				state_of_group_binding[model_idx] = status;
				return;
			}
			// Check Binding
			if(((state_of_group_binding[model_idx] != status)   \
						&& (nwk_control_msg_para[model_idx].dst != binding_adr)   \
								&& (nwk_control_msg_para[model_idx].dst < ADR_ALL_PROXY))
										|| (force_control_binding[model_idx] == TRUE)) {
				en_binding = TRUE;
				state_of_group_binding[model_idx] = status;
				// INTERNAL
				foreach(i, ELE_CNT) {
					if(i != model_idx) {
						u16 temp_binding = get_group_binding_adr(i);
						if((temp_binding != ADR_UNASSIGNED) && (temp_binding == binding_adr)) {
							// MANUAL CONTROL
							update_control_message_params(
										i, ele_adr_primary + model_idx, binding_adr, G_ONOFF_SET
									);
							mesh_cmd_g_onoff_set_t onoff_set;
							onoff_set.onoff = status;
							knob_send_request_message_to_mcu(
												G_ONOFF_SET,
												i,
												(u8*)&onoff_set,
												sizeof(mesh_cmd_g_onoff_set_t),
												TRUE
											);
							state_of_group_binding[i] = status;
						}
					}
				}
			}
			else if((nwk_control_msg_para[model_idx].dst == binding_adr)    \
						|| (nwk_control_msg_para[model_idx].dst >= ADR_ALL_PROXY)) {
				state_of_group_binding[model_idx] = status;
			}
			// Control
			if(en_binding == TRUE) {
				on_off_set.onoff = status;
				on_off_set.tid = 0;
				on_off_set.transit_t = 0x0A;
				on_off_set.delay = 1;
				u8 len = sizeof(mesh_cmd_g_onoff_set_t), par[len+1];
				memcpy((u8*)&par, (u8*)&on_off_set, len);
				if(force_control_binding[model_idx] == TRUE) {
					par[len] = 0x0;
					len++;
					force_control_binding[model_idx] = FALSE;
				}
				mesh_tx_cmd_rsp(
						G_ONOFF_SET_NOACK,
						(u8 *)par,
						len,
						ele_adr_primary + model_idx,
						binding_adr,
						0,
						0
					);
			}
		}
	}
}

/**
 * @func    dim_update_binding_lightness
 * @brief
 * @param
 * @retval  None
 */
static void dim_update_binding_lightness(int idx, u16 lightness)
{
	if(idx < ELE_CNT) {
		binding_par[idx].dimmer.trans_t   \
	    		= (abs(lightness - binding_par[idx].dimmer.lightness)*DIM_TRANS_DEFAULT)/LIGHTNESS_MAX;
		binding_par[idx].dimmer.lightness = lightness;
	}
}

/**
 * @func    send_on_off_control_to_ble_group
 * @brief
 * @param
 * @retval  None
 */
static void dim_binding_control(u8 idx, u16 lightness)
{
	DBG_SERIAL_SEND_STR("\n dim_binding_control: ");
	if(idx < ELE_CNT) {
		u16 binding_adr = get_group_binding_adr(idx);
		DBG_SERIAL_SEND_HEX(binding_adr);
		if(binding_adr != ADR_UNASSIGNED) {
			BOOL en_binding = FALSE;
			// CLEAN force control
			if(nwk_control_msg_para[idx].dst == binding_adr) {
				force_control_binding[idx] = FALSE;
			}
			// Check Binding
			if(((binding_par[idx].dimmer.lightness != lightness)   \
						&& (nwk_control_msg_para[idx].dst != binding_adr)   \
								&& (nwk_control_msg_para[idx].dst < ADR_ALL_PROXY))
										|| (force_control_binding[idx] == TRUE)) {
				en_binding = TRUE;
				dim_update_binding_lightness(idx, lightness);
			}
			else if((nwk_control_msg_para[idx].dst == binding_adr)    \
						|| (nwk_control_msg_para[idx].dst >= ADR_ALL_PROXY)) {
				dim_update_binding_lightness(idx, lightness);
			}
			// Control
			if(en_binding == TRUE) {
				DBG_SERIAL_SEND_STR("\n Dimmer binding active");
				if(lightness != LUM_OFF) {
					mesh_cmd_lightness_set_t lightness_set;
					lightness_set.lightness = binding_par[idx].dimmer.lightness;
					lightness_set.tid = ++lightness_tid[idx];
					lightness_set.transit_t = binding_par[idx].dimmer.trans_t;
					lightness_set.delay = 0;
					u8 par_len = sizeof(mesh_cmd_lightness_set_t), par[par_len+1];
					memcpy((u8*)&par, (u8*)&lightness_set, par_len);
					if(force_control_binding[idx] == TRUE) {
						par[par_len] = 0x0;
						par_len++;
						force_control_binding[idx] = FALSE;
					}
					mesh_tx_cmd_rsp(
							LIGHTNESS_SET_NOACK, (u8 *)par, par_len, ele_adr_primary + idx, binding_adr, 0, 0
						);
				}
				else {
					mesh_cmd_g_onoff_set_t on_off_set;
					on_off_set.onoff = G_OFF;
					on_off_set.tid = ++lightness_tid[idx];
					on_off_set.transit_t = binding_par[idx].dimmer.trans_t;
					on_off_set.delay = 0;
					u8 len = sizeof(mesh_cmd_g_onoff_set_t), par[len+1];
					memcpy((u8*)&par, (u8*)&on_off_set, len);
					if(force_control_binding[idx] == TRUE) {
						par[len] = 0x0;
						len++;
						force_control_binding[idx] = FALSE;
					}
					mesh_tx_cmd_rsp(
							G_ONOFF_SET_NOACK, (u8 *)par, len, ele_adr_primary + idx, binding_adr, 0, 0
						);
				}
			}
		}
	}
}

/**
 * @func    cct_update_binding_par
 * @brief
 * @param
 * @retval  None
 */
static void cct_update_binding_par(u8 idx, u16 lightness, u16 temperature)
{
	if(idx < ELE_CNT) {
		binding_par[idx].cct.group_lightness = lightness;
		binding_par[idx].cct.group_temperature = temperature;
	}
}

/**
 * @func    cct_control_binding_group
 * @brief
 * @param
 * @retval  None
 */
static void cct_control_binding_group(u8 idx, u16 lightness, u16 temperature)
{
	DBG_SERIAL_SEND_STR("\n *** cct_control_binding_group: ");
	if(idx < ELE_CNT) {
		u16 binding_adr = get_group_binding_adr(idx);
		if(binding_adr != ADR_UNASSIGNED) {
			DBG_SERIAL_SEND_STR("1, ");
			BOOL en_binding = FALSE;
			// CLEAN force control
			if(nwk_control_msg_para[idx].dst == binding_adr) {
				force_control_binding[idx] = FALSE;
				DBG_SERIAL_SEND_STR("2, ");
			}

			DBG_SERIAL_SEND_STR("\n group_lightness: ");
			DBG_SERIAL_SEND_HEX(binding_par[idx].cct.group_lightness );
			DBG_SERIAL_SEND_STR("-");
			DBG_SERIAL_SEND_HEX(lightness);

			DBG_SERIAL_SEND_STR("\n group_temperature: ");
			DBG_SERIAL_SEND_HEX(binding_par[idx].cct.group_temperature);
			DBG_SERIAL_SEND_STR("-");
			DBG_SERIAL_SEND_HEX(temperature);

			DBG_SERIAL_SEND_STR("\n nwk_control_msg_para[idx].dst: ");
			DBG_SERIAL_SEND_HEX(nwk_control_msg_para[idx].dst);
			DBG_SERIAL_SEND_STR("-");
			DBG_SERIAL_SEND_HEX(nwk_control_msg_para[idx].dst);

			DBG_SERIAL_SEND_STR("\n force_control_binding: ");
			DBG_SERIAL_SEND_INT(force_control_binding[idx]);

			// Check Binding
			if(((binding_par[idx].cct.group_lightness != lightness  \
					|| binding_par[idx].cct.group_temperature != temperature)   \
						&& (nwk_control_msg_para[idx].dst != binding_adr)   \
								&& (nwk_control_msg_para[idx].dst < ADR_ALL_PROXY))
										|| (force_control_binding[idx] == TRUE)) {
				en_binding = TRUE;
				cct_update_binding_par(idx, lightness, temperature);
				DBG_SERIAL_SEND_STR("3, ");
			}
			else if((nwk_control_msg_para[idx].dst == binding_adr)    \
						|| (nwk_control_msg_para[idx].dst >= ADR_ALL_PROXY)) {
				cct_update_binding_par(idx, lightness, temperature);
				DBG_SERIAL_SEND_STR("4, ");
			}
			// Control
			if(en_binding == TRUE) {
				DBG_SERIAL_SEND_STR("\n CCT binding active");
				mesh_cmd_light_ctl_set_t ctl_set;
				memset(&ctl_set, 0, sizeof(mesh_cmd_light_ctl_set_t));
				ctl_set.lightness = lightness;
				ctl_set.temp = get_ctl_temp_from_level(u16_to_s16(temperature), CTL_TEMP_MIN, CTL_TEMP_MAX);
				ctl_set.transit_t = 0x10;
				mesh_tx_cmd_rsp(
						LIGHT_CTL_SET, (u8*)&ctl_set, sizeof(mesh_cmd_light_ctl_set_t), ele_adr_primary + idx, binding_adr, 0, 0
					);
			}
		}
	}
}

/**
 * @func    curtain_update_binding_para
 * @brief
 * @param
 * @retval  None
 */
static void curtain_update_binding_para(u8 model_idx)
{
	if(model_idx < ELE_CNT) {
		binding_par[model_idx].curtain.present_level = cz_level_st[model_idx].present_level;
		binding_par[model_idx].curtain.target_level  = cz_level_st[model_idx].target_level;
		binding_par[model_idx].curtain.state = cz_level_st[model_idx].state;
	}
}

/**
 * @func    curtain_control_binding_group
 * @brief   Note: Update curtain parameter first
 * @param
 * @retval  None
 */
static void curtain_control_binding_group(u8 model_idx)
{
	DBG_SERIAL_SEND_STR("\n DST: ");
	DBG_SERIAL_SEND_HEX(nwk_control_msg_para[model_idx].dst);

	DBG_SERIAL_SEND_STR("\n ******************\n curtain_control_binding_group: ");
	DBG_SERIAL_SEND_INT(cz_level_st[model_idx].state);

	if(model_idx < ELE_CNT) {
		u16 binding_adr = get_group_binding_adr(model_idx);

		DBG_SERIAL_SEND_STR("0, ");

		if(binding_adr != ADR_UNASSIGNED) {

			DBG_SERIAL_SEND_STR("1, ");

			BOOL en_binding = FALSE;
			vd_cmd_g_level_set_t vd_level_set;
			// CLEAN force control
			if(nwk_control_msg_para[model_idx].dst == binding_adr) {
				force_control_binding[model_idx] = FALSE;
			}
			// POWER ON
			if(binding_par[model_idx].curtain.state == ST_UNKNOWN) {
				binding_par[model_idx].curtain.state = cz_level_st[model_idx].present_level;
				return;
			}
			DBG_SERIAL_SEND_STR("2, ");
			// Check Binding
			if(((nwk_control_msg_para[model_idx].dst != binding_adr)   \
					&& (nwk_control_msg_para[model_idx].dst < ADR_ALL_PROXY))  \
							|| (force_control_binding[model_idx] == TRUE)) {
				if((cz_level_st[model_idx].state == ST_START_OPEN)
						|| (cz_level_st[model_idx].state == ST_START_CLOSE)
							|| (cz_level_st[model_idx].state == ST_STOP)) {
					en_binding = TRUE;
					DBG_SERIAL_SEND_STR("3, ");
				}
				DBG_SERIAL_SEND_STR("4, ");
				if(en_binding == TRUE) {
					curtain_update_binding_para(model_idx);
					DBG_SERIAL_SEND_STR("5, ");
					// INTERNAL
					foreach(i, ELE_CNT) {
						if(i != model_idx) {
							u16 temp_binding = get_group_binding_adr(i);
							if((temp_binding != ADR_UNASSIGNED) && (temp_binding == binding_adr)) {
								// MANUAL CONTROL
								update_control_message_params(
											i,
											ele_adr_primary + model_idx,
											binding_adr,
											G_LEVEL_SET
										);
								// Control
								vd_cmd_g_level_set_t level_set;
								level_set.level = binding_par[model_idx].curtain.target_level;
								level_set.type = CUR_CMD_RUN;
								if(cz_level_st[model_idx].state == ST_STOP) {
									level_set.type = CUR_CMD_STOP;
								}
								knob_send_request_message_to_mcu(
											G_LEVEL_SET, i, (u8*)&level_set, sizeof(vd_cmd_g_level_set_t), true
										);
							}
						}
					}
				}
			}
			else if((nwk_control_msg_para[model_idx].dst == binding_adr)    \
						|| (nwk_control_msg_para[model_idx].dst >= ADR_ALL_PROXY)) {
				binding_par[model_idx].curtain.state = cz_level_st[model_idx].state;
				binding_par[model_idx].curtain.present_level = cz_level_st[model_idx].present_level;
				binding_par[model_idx].curtain.target_level = cz_level_st[model_idx].target_level;
			}
			// Binding control
			if(en_binding == TRUE) {
				DBG_SERIAL_SEND_STR("6, ");
				u8 type = CUR_CMD_RUN;
				if(cz_level_st[model_idx].state == ST_STOP) {
					//type = CURTAIN_CMD_STOP;
				}
				vd_level_set.type = type;
				vd_level_set.level = cz_level_st[model_idx].target_level;
				vd_level_set.tid = 0;
				vd_level_set.transit_t = vd_level_set.delay = 0;

				u8 len = sizeof(vd_cmd_g_level_set_t);
				u8 par[len+1];
				memcpy((u8*)&par, (u8*)&vd_level_set, len);
				if(force_control_binding[model_idx] == TRUE) {
					par[len] = 0x0;
					len++;
					force_control_binding[model_idx] = FALSE;
				}
				mesh_tx_cmd_rsp(
						G_LEVEL_SET_NOACK,
						(u8 *)par,
						len,
						ele_adr_primary + model_idx,
						binding_adr,
						0,
						0
					);
				DBG_SERIAL_SEND_STR("\n BINDING CONTROL: ");
				DBG_SERIAL_SEND_INT(vd_level_set.level);

				DBG_SERIAL_SEND_STR(", ");
				DBG_SERIAL_SEND_INT((vd_level_set.level*100)/255);
			}
		}
	}
}

/**
 * @func    cct_update_binding_par
 * @brief
 * @param
 * @retval  None
 */
static void ac_update_binding_par(u8 idx, ac_status_t* ac_status)
{
	if(idx < ELE_CNT) {
		binding_par[idx].ac.on_off = ac_status->onoff;
		binding_par[idx].ac.mode = ac_status->mode;
		binding_par[idx].ac.swing =  ac_status->swing;
		binding_par[idx].ac.fan = ac_status->fan;
		binding_par[idx].ac.temp_set = ac_status->temp_set;
	}
}

/**
 * @func    ac_control_binding_group
 * @brief
 * @param
 * @retval  None
 */
static void ac_control_binding_group(u8 idx, ac_status_t* ac_status)
{
	DBG_SERIAL_SEND_STR("\n *** ac_control_binding_group: ");
	if(idx < ELE_CNT) {
		u16 binding_adr = get_group_binding_adr(idx);
		if(binding_adr != ADR_UNASSIGNED) {
			DBG_SERIAL_SEND_STR("1, ");
			BOOL en_binding = FALSE;
			// CLEAN force control
			if(nwk_control_msg_para[idx].dst == binding_adr) {
				force_control_binding[idx] = FALSE;
				DBG_SERIAL_SEND_STR("2, ");
			}

			DBG_SERIAL_SEND_STR("\n on_off: ");
			DBG_SERIAL_SEND_HEX(binding_par[idx].ac.on_off );
			DBG_SERIAL_SEND_STR("-");
			DBG_SERIAL_SEND_HEX(ac_status->onoff);

			DBG_SERIAL_SEND_STR("\n mode: ");
			DBG_SERIAL_SEND_HEX(binding_par[idx].ac.mode );
			DBG_SERIAL_SEND_STR("-");
			DBG_SERIAL_SEND_HEX(ac_status->mode);

			DBG_SERIAL_SEND_STR("\n swing: ");
			DBG_SERIAL_SEND_HEX(binding_par[idx].ac.swing );
			DBG_SERIAL_SEND_STR("-");
			DBG_SERIAL_SEND_HEX(ac_status->swing);

			DBG_SERIAL_SEND_STR("\n fan: ");
			DBG_SERIAL_SEND_HEX(binding_par[idx].ac.fan );
			DBG_SERIAL_SEND_STR("-");
			DBG_SERIAL_SEND_HEX(ac_status->fan);

			DBG_SERIAL_SEND_STR("\n temp_set: ");
			DBG_SERIAL_SEND_HEX(binding_par[idx].ac.temp_set );
			DBG_SERIAL_SEND_STR("-");
			DBG_SERIAL_SEND_HEX(ac_status->temp_set);


			DBG_SERIAL_SEND_STR("\n nwk_control_msg_para[idx].dst: ");
			DBG_SERIAL_SEND_HEX(nwk_control_msg_para[idx].dst);
			DBG_SERIAL_SEND_STR("-");
			DBG_SERIAL_SEND_HEX(nwk_control_msg_para[idx].dst);

			DBG_SERIAL_SEND_STR("\n force_control_binding: ");
			DBG_SERIAL_SEND_INT(force_control_binding[idx]);

			// Check Binding
			if(((binding_par[idx].ac.on_off != ac_status->onoff  \
					|| binding_par[idx].ac.mode != ac_status->mode
						|| binding_par[idx].ac.swing != ac_status->swing
							|| binding_par[idx].ac.fan != ac_status->fan
								|| binding_par[idx].ac.temp_set != ac_status->temp_set )   \
									&& (nwk_control_msg_para[idx].dst != binding_adr)   \
										&& (nwk_control_msg_para[idx].dst < ADR_ALL_PROXY))
											|| (force_control_binding[idx] == TRUE)) {
				en_binding = TRUE;
				ac_update_binding_par(idx, ac_status);
				DBG_SERIAL_SEND_STR("3, ");
			}
			else if((nwk_control_msg_para[idx].dst == binding_adr)    \
						|| (nwk_control_msg_para[idx].dst >= ADR_ALL_PROXY)) {
				ac_update_binding_par(idx, ac_status);
				DBG_SERIAL_SEND_STR("4, ");
			}
			// Control
			if(en_binding == TRUE) {
				DBG_SERIAL_SEND_STR("\n AC binding active");

				ac_control_set_cmd_t ac_control_set_cmd;
				ac_control_set_cmd.msg_type = CONFIG_NODE_SET;
				ac_control_set_cmd.cmd = VD_CONFIG_AIR_CONDITIONER;
				ac_control_set_cmd.onoff_mode.onoff = ac_status->onoff;
				ac_control_set_cmd.onoff_mode.mode = ac_status->mode;
				ac_control_set_cmd.swing = ac_status->swing;
				ac_control_set_cmd.fan = ac_status->fan;
				ac_control_set_cmd.temp = ac_status->temp_set;

				mesh_tx_cmd_rsp(
						VD_CONFIG_NODE_SET_ACK, (u8*)&ac_control_set_cmd, sizeof(ac_control_set_cmd_t), ele_adr_primary + idx, binding_adr, 0, 0
					);
			}
		}
	}
}

/**
 * @func    serial_handle_relay_or_switch_status_response
 * @brief
 * @param
 * @retval  None
 */
void serial_handle_relay_or_switch_status_response(u8 model_idx, device_status_t* dev_st)
{
	DBG_SERIAL_SEND_STR("\n serial_handle_relay_or_switch_status_response: ");
	DBG_SERIAL_SEND_INT(model_idx);
	DBG_SERIAL_SEND_STR(", ");
	DBG_SERIAL_SEND_INT(dev_st->status);
	if(model_idx >= ELE_CNT) {
		return;
	}
	st_transition_t *p_trans = P_ST_TRANS(model_idx, ST_TRANS_LIGHTNESS);
	if(dev_st->status < G_ONOFF_RSV) {
		if(clock_time_exceed_ms(0, TIMER_5S)) {
			foreach(i, ELE_CNT) {
				en_binding_and_execution[i] = TRUE;
			}
		}
		if(en_binding_and_execution[model_idx] == TRUE) {
			uint16_t ele_addr = get_ele_addr_base_btn_idx(model_idx);
			if(ele_addr != ADR_UNASSIGNED) {
				u8 key_code = (dev_st->status == G_ON)?EV_SW_ON:EV_SW_OFF;
				if((dev_st->status != gen_execution_scene_st[model_idx])  \
									&& (gen_execution_scene_st[model_idx] != G_ONOFF_RSV)) {
					if(nwk_control_msg_para[model_idx].dst < ADR_FIXED_GROUP_START) {
						execution_scene_active(model_idx, key_code);
						DBG_SERIAL_SEND_STR("\n >>> SW Execution scene success: ");
						DBG_SERIAL_SEND_INT(key_code);
					}
				}
				gen_execution_scene_st[model_idx] = dev_st->status;
			}
			send_on_off_control_to_ble_group(model_idx, dev_st->status);
		}
		else {
			en_binding_and_execution[model_idx] = TRUE;
			// POWER ON
			gen_execution_scene_st[model_idx] = dev_st->status;
			// POWER ON
			if(state_of_group_binding[model_idx] == SUB_UNKNOWN) {
				state_of_group_binding[model_idx] = dev_st->status;
			}
		}
		if(dev_st->status == G_ON) {
			p_trans->present = p_trans->target = LEVEL_MAX;
		}
		else if(dev_st->status == G_OFF) {
			p_trans->present = p_trans->target = LEVEL_OFF;
		}
		if(nwk_control_msg_para[model_idx].dst < ADR_GROUP_START_POINT) {
			if(pw_on_flag[model_idx] == TRUE) {
				if(clock_time_exceed_ms(0, TIMER_5S)) {
					pw_on_flag[model_idx] = FALSE;
				}
				else {
					return;
				}
			}
			if(get_incomming_st(model_idx) != dev_st->status) {
				mesh_tx_cmd_lightness_st(
								model_idx,
								ele_adr_primary + model_idx,
								GATEWAY_UNICAST_ADDR,
								LIGHTNESS_STATUS,
								0,
								0
							);
				set_incomming_st(model_idx, dev_st->status);
			}
			else {
				light_publish_status_delay(model_idx, 0);
			}
		}
		else {
			if(nwk_control_msg_para[model_idx].dst < ADR_FIXED_GROUP_START) {
				light_publish_status_delay(model_idx, TIMER_1S + (rand()%TIMER_3S));
			}
			else {
				light_publish_status_delay(model_idx, TIMER_5S + (rand()%TIMER_30S));
			}
			nwk_control_msg_para[model_idx].dst = ele_adr_primary + model_idx;
		}
	}
}

/**
 * @func    serial_handle_rx_message_cmd
 * @brief
 * @param
 * @retval  None
 */
void serial_handle_dim_status_response(u8 model_idx, device_status_t* dev_st)
{
	if(model_idx >= ELE_CNT) {
		return;
	}
	DBG_SERIAL_SEND_STR("\n *** serial_handle_dim_status_response");

	st_transition_t *p_trans   \
					= P_ST_TRANS(model_idx, ST_TRANS_LIGHTNESS);
	u16 lightness = dev_st->dim_st.lightness;
	p_trans->present = p_trans->target = u16_to_s16(lightness);

	// binding_par[model_idx].dimmer.lightness = lightness;

	if(nwk_control_msg_para[model_idx].dst < ADR_GROUP_START_POINT) {
		light_publish_status_delay(model_idx, 0);
	}
	else {
		light_publish_status_delay(
					model_idx, TIMER_3S + rand()%TIMER_7S
				);
		nwk_control_msg_para[model_idx].opcode = LIGHTNESS_SET;
	}
	// EXECUTION AND BINDING
	if(en_binding_and_execution[model_idx] == FALSE) {
		if(clock_time_exceed_ms(0, TIMER_5S)) {
			foreach(i, ELE_CNT) {
				en_binding_and_execution[i] = TRUE;
			}
		}
	}
	if(en_binding_and_execution[model_idx] == TRUE) {
		dim_binding_control(model_idx, s16_to_u16(p_trans->present));
	}
	else {
		// POWER ON
		en_binding_and_execution[model_idx] = TRUE;
		dim_update_binding_lightness(
					model_idx, s16_to_u16(p_trans->present)
				);
	}
	// UDT DST
	if(nwk_control_msg_para[model_idx].dst >= ADR_GROUP_START_POINT) {
		nwk_control_msg_para[model_idx].dst = ele_adr_primary + model_idx;
	}
}

/**
 * @func    serial_handle_rx_message_cmd
 * @brief
 * @param
 * @retval  None
 */
void serial_handle_cct_status_response(u8 model_idx, u16 lightness, u16 temp)
{
	if(model_idx >= ELE_CNT) {
		return;
	}
	st_transition_t *p_trans_lightness = P_ST_TRANS(model_idx, ST_TRANS_LIGHTNESS);
	st_transition_t *p_trans_temp = P_ST_TRANS(model_idx, ST_TRANS_CTL_TEMP);
	p_trans_lightness->present = p_trans_lightness->target =  \
			u16_to_s16(lightness);
	p_trans_temp->present = p_trans_temp->target =  \
			get_level_from_ctl_temp(temp, CTL_TEMP_MIN, CTL_TEMP_MAX);

	// binding_par[model_idx].cct.group_lightness = lightness;
	u16 temperature = s16_to_u16(p_trans_temp->present);

	DBG_SERIAL_SEND_STR("\n Lightness_u16: ");
	DBG_SERIAL_SEND_INT(lightness);
	DBG_SERIAL_SEND_STR("\n Temp_u16: ");
	DBG_SERIAL_SEND_INT(temp);

	if(en_binding_and_execution[model_idx] == FALSE) {
		if(clock_time_exceed_ms(0, TIMER_5S)) {
			foreach(i, ELE_CNT) {
				en_binding_and_execution[i] = TRUE;
			}
		}
	}
	if(en_binding_and_execution[model_idx] == TRUE) {
		cct_control_binding_group(model_idx, lightness, temperature);
	}
	else {
		en_binding_and_execution[model_idx] = TRUE;
		// Power on
		cct_update_binding_par(model_idx, lightness, temperature);
	}
	if(nwk_control_msg_para[model_idx].dst < ADR_GROUP_START_POINT) {
		light_publish_status_delay(model_idx, 0);
	}
	else {
		light_publish_status_delay(model_idx, TIMER_3S + rand()%TIMER_7S);
		nwk_control_msg_para[model_idx].opcode = LIGHT_CTL_SET;
	}
	if(nwk_control_msg_para[model_idx].dst >= ADR_GROUP_START_POINT) {
		nwk_control_msg_para[model_idx].dst = ele_adr_primary + model_idx;
	}
}

/**
 * @func    serial_handle_rx_message_cmd
 * @brief
 * @param
 * @retval  None
 */
void serial_handle_curtain_status_response(u8 model_idx, device_status_t* dev_st)
{
	if(model_idx >= ELE_CNT) {
		return;
	}
	cz_level_st[model_idx].present_level = dev_st->level_st.present_level;
	cz_level_st[model_idx].target_level = dev_st->level_st.target_level;
	cz_level_st[model_idx].state = dev_st->level_st.state;

	DBG_SERIAL_SEND_STR("\n CURTAIN UPDATE LEVEL: ");
	DBG_SERIAL_SEND_INT(dev_st->level_st.present_level);
	DBG_SERIAL_SEND_STR(" ");
	DBG_SERIAL_SEND_INT(dev_st->level_st.target_level);
	DBG_SERIAL_SEND_STR(" ");
	DBG_SERIAL_SEND_INT(dev_st->level_st.state);

	// Binding
#if CURTAIN_ENABLE_BINDING
	if(en_binding_and_execution[model_idx] == TRUE) {
		curtain_control_binding_group(model_idx);
	}
	else {
		en_binding_and_execution[model_idx] = TRUE;
		// POWER ON
		if(binding_par[model_idx].curtain.state == ST_UNKNOWN) {
			binding_par[model_idx].curtain.state = dev_st->level_st.state;
		}
	}
#endif
	if(nwk_control_msg_para[model_idx].dst < ADR_GROUP_START_POINT) {
		light_publish_status_delay(model_idx, 0);
	}
	else {
		light_publish_status_delay(
					model_idx, TIMER_1S+rand()%TIMER_3S
				);
		nwk_control_msg_para[model_idx].dst = ele_adr_primary + model_idx;
	}
}


/**
 * @func    serial_handle_ac_status_response
 * @brief
 * @param
 * @retval  None
 */
void serial_handle_ac_status_response(u8 model_idx, ac_status_t* ac_status)
{
	if(model_idx >= ELE_CNT) {
		return;
	}

	DBG_SERIAL_SEND_STR("\n power: ");
	DBG_SERIAL_SEND_INT(ac_status->onoff);
	DBG_SERIAL_SEND_STR("\n mode: ");
	DBG_SERIAL_SEND_INT(ac_status->mode);
	DBG_SERIAL_SEND_STR("\n swing: ");
	DBG_SERIAL_SEND_INT(ac_status->swing);

	DBG_SERIAL_SEND_STR("\n fan: ");
	DBG_SERIAL_SEND_INT(ac_status->fan);

	DBG_SERIAL_SEND_STR("\n temp_set: ");
	DBG_SERIAL_SEND_INT(ac_status->temp_set);

	DBG_SERIAL_SEND_STR("\n temp_room: ");
	DBG_SERIAL_SEND_INT(ac_status->temp_room);


	if(en_binding_and_execution[model_idx] == FALSE) {
		if(clock_time_exceed_ms(0, TIMER_5S)) {
			foreach(i, ELE_CNT) {
				en_binding_and_execution[i] = TRUE;
			}
		}
	}
	if(en_binding_and_execution[model_idx] == TRUE) {
		ac_control_binding_group(model_idx, ac_status);
	}
	else {
		en_binding_and_execution[model_idx] = TRUE;
		// Power on
		ac_update_binding_par(model_idx, ac_status);
	}
	if(nwk_control_msg_para[model_idx].dst < ADR_GROUP_START_POINT) {
		light_publish_status_delay(model_idx, 0);
	}
	else {
		light_publish_status_delay(model_idx, TIMER_3S + rand()%TIMER_7S);
	}
	if(nwk_control_msg_para[model_idx].dst >= ADR_GROUP_START_POINT) {
		nwk_control_msg_para[model_idx].dst = ele_adr_primary + model_idx;
	}
}

// End file
