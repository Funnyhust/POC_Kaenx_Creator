/*
 * handle_rx_network.c
 *
 *  Created on: Sep 19, 2020
 *      Author: DungTran BK
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "../../../proj_lib/ble/blt_config.h"
#include "../../common/system_time.h"
#include "../../../proj_lib/sig_mesh/app_mesh.h"
#include "../../common/lighting_model.h"
#include "../../common/lighting_model_HSL.h"
#include "knob/config.h"
#include "knob/element.h"
#include "utilities.h"
#include "serial.h"
#include "sw_binding.h"
#include "net_message.h"

#include "debug.h"
#ifdef NET_MSG_DBG_EN
#define DBG_NET_MSG_SEND_STR(x)   Dbg_sendString((s8*)x)
#define DBG_NET_MSG_SEND_INT(x)   Dbg_sendInt(x)
#define DBG_NET_MSG_SEND_HEX(x)   Dbg_sendHex(x)
#define DBG_NET_MSG_SEND_BYTE(x)  Dbg_sendHexOneByte(x)
#else
#define DBG_NET_MSG_SEND_STR(x)
#define DBG_NET_MSG_SEND_INT(x)
#define DBG_NET_MSG_SEND_HEX(x)
#define DBG_NET_MSG_SEND_BYTE(x)
#endif
/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

u8 incomming_st[ELE_CNT] = {
		G_ONOFF_RSV,
		#if ELE_CNT > 1
		G_ONOFF_RSV,
		#endif
		#if ELE_CNT > 2
		G_ONOFF_RSV,
		#endif
		#if ELE_CNT > 3
		G_ONOFF_RSV,
		#endif
		#if ELE_CNT > 4
		G_ONOFF_RSV,
		#endif
		#if ELE_CNT > 5
		G_ONOFF_RSV,
		#endif
};

u8 scene_active_arr[ELE_CNT] = {
		FALSE,
	#if ELE_CNT > 1
		FALSE,
	#endif
	#if ELE_CNT > 2
		FALSE,
	#endif
	#if ELE_CNT > 3
		FALSE,
	#endif
	#if ELE_CNT > 4
		FALSE,
	#endif
	#if ELE_CNT > 5
		FALSE,
	#endif
};

u8 app_control_st[ELE_CNT] = {
		0,
	#if ELE_CNT > 1
		0,
	#endif
};

/******************************************************************************/
/*                          PRIVATE FUNCTIONS DECLERATION                     */
/******************************************************************************/
static bool check_en_control(u16 model_idx, u16 adr_dst);
/******************************************************************************/
/*                           EXPORT FUNCTIONS DECLERATION                     */
/******************************************************************************/

/**
 * @func    check_en_control
 * @brief
 * @param   None
 * @retval  None
 */
static bool check_en_control(u16 model_idx, u16 adr_dst)
{
	if(get_endpoint_type_follow_model_index(model_idx) == TYPE_SWITCH) {
		if(advanced_config[model_idx].switch_mode.mode == MOMENTORY_SWITCH_TYPE) {
			if(adr_dst == ADR_ALL_NODES) {
				return false;
			}
		}
	}
	return true;
}


/**
 * @func    get_app_control_st
 * @brief
 * @param
 * @retval  None
 */
u8 get_incomming_st(int idx)
{
	if(idx < ELE_CNT) {
	    return incomming_st[idx];
	}
	return G_ONOFF_RSV;
}
/**
 * @func    set_app_control_st
 * @brief
 * @param
 * @retval  None
 */
void set_incomming_st(int idx, bool st)
{
	if(idx < ELE_CNT) {
	    incomming_st[idx] = st;
	}
}
// End file
