/*
 * config.c
 *
 *  Created on: Oct 4, 2025
 *      Author: DungTranBK
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "tl_common.h"
#include "vendor/common/mesh_node.h"
#include "proj_lib/ble/blt_config.h"
#include "proj_lib/sig_mesh/app_mesh.h"
#include "../utilities.h"
#include "../flash_user.h"
#include "../led_ev.h"
#include "peripheral/curtain.h"
#include "config.h"

#include "vendor/mesh/user/debug.h"
#ifdef  DEBUG_ADVANCED_CONFIG
#define DBG_ADVANCED_CONFIG_SEND_STR(x)              Dbg_sendString((s8*)x)
#define DBG_ADVANCED_CONFIG_SEND_NUM(x)              Dbg_sendNum(x)
#define DBG_ADVANCED_CONFIG_SEND_HEX(x)              Dbg_sendHex(x)
#define DBG_ADVANCED_CONFIG_SEND_INT(x)              Dbg_sendInt(x)
#define DBG_ADVANCED_CONFIG_SEND_ONE_BYTE_HEX(x)     Dbg_sendOneByteHex(x)
#else
#define DBG_ADVANCED_CONFIG_SEND_STR(x)
#define DBG_ADVANCED_CONFIG_SEND_NUM(x)
#define DBG_ADVANCED_CONFIG_SEND_HEX(x)
#define DBG_ADVANCED_CONFIG_SEND_INT(x)
#define DBG_ADVANCED_CONFIG_SEND_ONE_BYTE_HEX(x)
#endif

type_handle_btn_change_mode pv_handle_btn_change_mode = NULL;

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

advanced_config_t advanced_config[ELE_CNT];

#define BLOCK_SIZE_ADVANCED_CONFIG       sizeof(advanced_config)
#define FLASH_SIZE_ADVANCED_CONFIG       (FLASH_SECTOR_SIZE - BLOCK_SIZE_ADVANCED_CONFIG)
static int adr_advanced_config_idx = 0;


typedef struct {
	u8  btn_id;
	u8  btn_mode;
	u8  toggle_type;
	u16 delay_s;
}set_sw_mode_t;


typedef struct {
	u8  code;
	u8  btn_id;
	u8  btn_mode;
	u8  toggle_type;
	u16 delay_s;
}rsp_sw_mode_t;

#define LEN_MSG_SET_SW_MODE               2
#define LEN_MSG_SET_ON_POWER_UP_STATE     1
#define LEN_MSG_SET_LIMIT_TIME            4

#define AUTO_ON_OFF_MAX_TIME_SECOND       10800
#define AUTO_ON_OFF_MIN_TIME_SECOND       1


/******************************************************************************/
/*                          PRIVATE FUNCTIONS DECLERATION                     */
/******************************************************************************/


/******************************************************************************/
/*                           EXPORT FUNCTIONS DECLERATION                     */
/******************************************************************************/

/*
 * @func    advanced_config_store
 * @brief   Store the advanced configuration
 * @param   None
 * @retval  None
*/
void advanced_config_store(void)
{
    flash_user_store(&adr_advanced_config_idx,  \
			FLASH_ADR_ADVANCED_CONFIG, FLASH_SIZE_ADVANCED_CONFIG, BLOCK_SIZE_ADVANCED_CONFIG, (u8*)advanced_config);
}

/*
 * @func    advanced_config_restore
 * @brief   Restore the advanced configuration
 * @param   None
 * @retval  None
*/
void advanced_config_restore(void)
{
	u8 temp[BLOCK_SIZE_ADVANCED_CONFIG];
    flash_user_get_flash_index(&adr_advanced_config_idx,  \
    		FLASH_ADR_ADVANCED_CONFIG, FLASH_SIZE_ADVANCED_CONFIG, BLOCK_SIZE_ADVANCED_CONFIG, temp);
    flash_user_restore(adr_advanced_config_idx,  \
    		FLASH_ADR_ADVANCED_CONFIG, BLOCK_SIZE_ADVANCED_CONFIG, (u8*)advanced_config);
	if(advanced_config[0].switch_mode.mode >= SWITCH_TYPE_UNKNOWN) {
		foreach(i, ELE_CNT) {
			advanced_config[i].switch_mode.mode = TOGGLE_SWITCH_TYPE;
			advanced_config[i].switch_mode.toggle_type = TOGGLE_DEFAULT;
			advanced_config[i].switch_mode.delay_time_s = 1;
			advanced_config[i].power_on_state = ON_POWER_UP_RESTORE;
			advanced_config[i].curtain_limit_time = LIMIT_TIME_DEFAULT;
		}
		advanced_config_store();
	}
	foreach(i, ELE_CNT) {
		curtain_set_limit_time_when_power_up(i, advanced_config[i].curtain_limit_time);
	}
}

/*
 * @func    advanced_config_set_to_default
 * @brief
 * @param   None
 * @retval  None
*/
bool advanced_config_set_to_default(u8 model_idx)
{
	if(model_idx < ELE_CNT) {
		if(advanced_config[model_idx].switch_mode.mode != TOGGLE_SWITCH_TYPE ||
				advanced_config[model_idx].switch_mode.toggle_type != TOGGLE_DEFAULT ||
					advanced_config[model_idx].switch_mode.delay_time_s != 1 ||
						advanced_config[model_idx].power_on_state != ON_POWER_UP_RESTORE ||
							advanced_config[model_idx].curtain_limit_time != LIMIT_TIME_DEFAULT) {
			advanced_config[model_idx].switch_mode.mode = TOGGLE_SWITCH_TYPE;
			advanced_config[model_idx].switch_mode.toggle_type = TOGGLE_DEFAULT;
			advanced_config[model_idx].switch_mode.delay_time_s = 1;
			advanced_config[model_idx].power_on_state = ON_POWER_UP_RESTORE;
			advanced_config[model_idx].curtain_limit_time = LIMIT_TIME_DEFAULT;
			return true;
		}
	}
	return false;
}

/*
 * @func    advanced_config_response_limit_time
 * @brief
 * @param   None
 * @retval  None
*/
int advanced_config_response_limit_time(u8 idx, u16 adr_src)
{
	if(idx < ELE_CNT) {
		u8 tmp[2+sizeof(u32)];
		tmp[0] = VD_CONFIG_CURTAIN_LIMIT_TIME;
		tmp[1] = 0;
		memcpy(&tmp[2], &advanced_config[idx].curtain_limit_time, sizeof(u32));
		return mesh_tx_cmd_rsp(
						VD_CONFIG_NODE_STATUS,
						tmp,
						sizeof(tmp),
						adr_src,
						GATEWAY_UNICAST_ADDR,
						0,
						0
					);
	}
	return -1;
}

/*
 * @func    advanced_config_handle_get_limit_time
 * @brief
 * @param   None
 * @retval  None
*/
int advanced_config_handle_get_limit_time(u8 model_idx, u8* par, u8 par_len)
{
	if(model_idx < ELE_CNT) {
		return advanced_config_response_limit_time(model_idx, ele_adr_primary + model_idx);
	}
	return -1;
}

/*
 * @func    advanced_config_handle_set_get_limit_time
 * @brief
 * @param   None
 * @retval  None
*/
int advanced_config_handle_set_limit_time(u8 model_idx, u8* par, u8 par_len)
{
	DBG_ADVANCED_CONFIG_SEND_STR("\n advanced_config_handle_set_get_limit_time");
	if(model_idx < ELE_CNT) {
		u32 limit_time = 0;
		foreach(i, sizeof(u32)) {
			limit_time |= (u32)(par[i]<<8*i);
		}
		if(curtain_set_limit_time_from_app(model_idx, limit_time) == true) {
			advanced_config[model_idx].curtain_limit_time = limit_time;
			send_led_evt(LED_NOTIFY_CONFIG_SUCCESS);
			advanced_config_store();
		}
		else {
			send_led_evt(LED_NOTIFY_CONFIG_FAILURE);
		}
		return advanced_config_handle_get_limit_time(model_idx, par, par_len);
	}
	send_led_evt(LED_NOTIFY_CONFIG_FAILURE);
	return -1;
}

/*
 * @func    advanced_config_response_switch_mode
 * @brief
 * @param   None
 * @retval  None
*/
int advanced_config_response_switch_mode(u8 idx, u16 adr_src)
{
	if(idx < ELE_CNT) {
		rsp_sw_mode_t rsp_sw_mode;
		rsp_sw_mode.code = VD_CONFIG_SWITCH_MODE_OPT;
		rsp_sw_mode.btn_id = idx + 1;
		rsp_sw_mode.btn_mode = advanced_config[idx].switch_mode.mode;
		rsp_sw_mode.toggle_type = advanced_config[idx].switch_mode.toggle_type;
		rsp_sw_mode.delay_s = advanced_config[idx].switch_mode.delay_time_s;
		return mesh_tx_cmd_rsp(
						VD_CONFIG_NODE_STATUS,
						(u8*)&rsp_sw_mode,
						sizeof(rsp_sw_mode_t),
						adr_src,
						GATEWAY_UNICAST_ADDR,
						0,
						0
					);
	}
	return -1;
}

/*
 * @func    advanced_config_handle_get_switch_mode
 * @brief
 * @param   None
 * @retval  None
*/
int advanced_config_handle_get_switch_mode(u8 model_idx, u8* par, u8 par_len)
{
	if(model_idx < ELE_CNT) {
		set_sw_mode_t* p = (set_sw_mode_t*)par;
		u8 idx = p->btn_id-1;
		advanced_config_response_switch_mode(idx, ele_adr_primary + model_idx);
	}
	return -1;
}

/*
 * @func    advance_config_handle_set_switch_mode
 * @brief
 * @param   None
 * @retval  None
*/
int advance_config_handle_set_switch_mode(u8 model_idx, u8* par, u8 par_len)
{
	DBG_ADVANCED_CONFIG_SEND_STR("\n advance_config_handle_set_switch_mode");
	set_sw_mode_t* p = (set_sw_mode_t*)par;
	if(par_len == LEN_MSG_SET_SW_MODE
				|| par_len == sizeof(set_sw_mode_t)) {
		bool success = false;
		u8 index = p->btn_id - 1;
		if(index < ELE_CNT) {
			u8 tmp_mode = advanced_config[index].switch_mode.mode;
			if(p->btn_mode < SWITCH_TYPE_UNKNOWN) {
				advanced_config[index].switch_mode.mode = p->btn_mode;
				success = true;
				if(par_len == sizeof(set_sw_mode_t)) {
					if((p->toggle_type >= TOGGLE_UNKNOWN) \
							|| (p->toggle_type == TOGGLE_DELAY_OFF)
								|| (p->toggle_type == TOGGLE_DELAY_ON)) {
						DBG_ADVANCED_CONFIG_SEND_STR("\n TOGG MODE INVALID");
					}
					else {
						if((p->delay_s >= AUTO_ON_OFF_MIN_TIME_SECOND)    \
									&& (p->delay_s <= AUTO_ON_OFF_MAX_TIME_SECOND)) {
							advanced_config[index].switch_mode.toggle_type = p->toggle_type;
							advanced_config[index].switch_mode.delay_time_s = p->delay_s;
							DBG_ADVANCED_CONFIG_SEND_STR("\n OK_0");
						}
						else {
							if(p->toggle_type == TOGGLE_DEFAULT) {
								advanced_config[index].switch_mode.toggle_type = TOGGLE_DEFAULT;
							}
						}
					}
				}
				else {
					if(p->btn_mode == TOGGLE_SWITCH_TYPE) {
						advanced_config[index].switch_mode.toggle_type = TOGGLE_DEFAULT;
					}
				}
				advanced_config_store();
			}
			if(success) {
				send_led_evt(LED_NOTIFY_CONFIG_SUCCESS);
			}
			else {
				send_led_evt(LED_NOTIFY_CONFIG_FAILURE);
			}
			advanced_config_handle_get_switch_mode(index, par, par_len);
			// Handle change switch mode
			if(tmp_mode != advanced_config[index].switch_mode.mode) {
				if(pv_handle_btn_change_mode != NULL) {
					pv_handle_btn_change_mode(index, advanced_config[index].switch_mode.mode);
				}
			}
			return 0;
		}
	}
	send_led_evt(LED_NOTIFY_CONFIG_FAILURE);
	return -1;
}

/*
 * @func    advaced_config_response_on_power_up_state
 * @brief
 * @param   None
 * @retval  None
*/
int advaced_config_response_on_power_up_state(u8 idx, u8 adr_src)
{
	if(idx < ELE_CNT) {
		u8 tmp = advanced_config[idx].power_on_state;
		return mesh_tx_cmd_rsp(
					G_ON_POWER_UP_STATUS, &tmp, 1, adr_src, GATEWAY_UNICAST_ADDR, 0, 0
				);
	}
	return -1;
}

/*
 * @func    advanced_config_handle_get_on_power_up_state
 * @brief
 * @param   None
 * @retval  None
*/
int advanced_config_handle_get_on_power_up_state(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par)
{
	DBG_ADVANCED_CONFIG_SEND_STR("\n advanced_config_handle_get_on_power_up_state");
	if(cb_par->model_idx < ELE_CNT) {
		u8 tmp = advanced_config[cb_par->model_idx].power_on_state;
		return mesh_tx_cmd_rsp(
					G_ON_POWER_UP_STATUS, &tmp, 1, ele_adr_primary + cb_par->model_idx, GATEWAY_UNICAST_ADDR, 0, 0
				);
	}
	return -1;
}

/*
 * @func    advanced_config_handle_set_on_power_up_state
 * @brief
 * @param   None
 * @retval  None
*/
int advanced_config_handle_set_on_power_up_state(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par)
{
	DBG_ADVANCED_CONFIG_SEND_STR("\n advanced_config_handle_set_on_power_up_state");
	if(cb_par->model_idx < ELE_CNT) {
		u8 tmp = par[0];
		if(tmp < ON_POWER_UP_UNKNOWN) {
			advanced_config[cb_par->model_idx].power_on_state = tmp;
			advanced_config_store();
			send_led_evt(LED_NOTIFY_CONFIG_SUCCESS);
		}
		else {
			send_led_evt(LED_NOTIFY_CONFIG_FAILURE);
		}
		return advanced_config_handle_get_on_power_up_state(par, par_len, cb_par);
	}
	return -1;
}

/*
 * @func    advanced_callback_init
 * @brief
 * @param   None
 * @retval  None
*/
void advanced_callback_init(type_handle_btn_change_mode func)
{
	if(func != NULL) {
		pv_handle_btn_change_mode = func;
	}
}

/*
 * @func    advanced_config_init
 * @brief
 * @param   None
 * @retval  None
*/
void advanced_config_init(void)
{
	advanced_config_restore();
}

