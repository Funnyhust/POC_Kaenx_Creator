/*
 * element.c
 *
 *  Created on: Jul 23, 2025
 *      Author: DungTranBK
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "tl_common.h"
#include "proj_lib/ble/blt_config.h"
#include "vendor/common/mesh_node.h"
#include "vendor/common/system_time.h"
#include "vendor/common/lighting_model.h"
#include "vendor/common/lighting_model_HSL.h"
#include "vendor/common/sensors_model.h"
#include "vendor/common/scene.h"
#include "string.h"
#include "knob.h"
#include "knob_common.h"
#include "../sw_binding.h"
#include "../flash_user.h"
#include "../timestamp.h"
#include "../cycle_funcs.h"
#include "../relay.h"
#include "../key_report.h"
#include "../led_ev.h"
#include "../execution_scene.h"
#include "../scene_btn.h"
#include "config.h"
#include "peripheral/curtain.h"
#include "knob_msg.h"
#include "element.h"

#include "vendor/mesh/user/debug.h"
#ifdef  DEBUG_ELEMENT
#define DBG_ELEMENT_SEND_STR(x)              Dbg_sendString((s8*)x)
#define DBG_ELEMENT_SEND_NUM(x)              Dbg_sendNum(x)
#define DBG_ELEMENT_SEND_HEX(x)              Dbg_sendHex(x)
#define DBG_ELEMENT_SEND_INT(x)              Dbg_sendInt(x)
#define DBG_ELEMENT_SEND_ONE_BYTE_HEX(x)     Dbg_sendOneByteHex(x)
#else
#define DBG_ELEMENT_SEND_STR(x)
#define DBG_ELEMENT_SEND_NUM(x)
#define DBG_ELEMENT_SEND_HEX(x)
#define DBG_ELEMENT_SEND_INT(x)
#define DBG_ELEMENT_SEND_ONE_BYTE_HEX(x)
#endif

typeElement_handle_refresh_sceen pvElement_handle_refresh_sceen = NULL;
typeEle_handleRepsonseSceneMode  pvEle_handleRepsonseSceneMode = NULL;
typeEle_handleDisableVisibilityCurrentEndpoint pvEle_handleDisableVisibilityCurrentEndpoint = NULL;

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/
const cct_value_t  cct_map_scene_and_value[CCT_SCENE_CNT] = {
             {0xFFFF, 0x1CB7}, {0xFFFF, 0x16d5}, {0x3333, 0x306b}, {0xFFFF, 0x4E20} };
const u8 const_curtain_level_array[] = { 0x00, 0x33, 0x63,  0x96, 0xbd, 0xDD, 0xFF };
const u8 host_fan_arr[] = { 0x3F, 0x7E, 0xBD, 0xFF };

typedef struct
{
    u8 key_flash;
    u8 model_index;
    scene_par_t scene_par;
    switch_par_t switch_par;
    cct_par_t cct;
    dim_par_t dim;
    curtain_par_t curtain_par;
    air_par_t air;
    audio_par_t audio_par;
    fan_par_t  fan_par;
    u8 rsv[9];
}virtual_device_par_t;

// Device par
static virtual_device_par_t virtual_device_par;
static virtual_device_par_t backup_device_par;

#define BLOCK_SIZE_ELE_PAR            sizeof(virtual_device_par_t)
#define FLASH_SIZE_ELE_PAR            (FLASH_SECTOR_SIZE - BLOCK_SIZE_ELE_PAR)
static int adr_ele_par_idx = 0;

// Endpoint type
static EndpointType_Enum endpoint_type[ELE_CNT];

#define BLOCK_SIZE_ENDPOINT_TYPE       sizeof(endpoint_type)
#define FLASH_SIZE_ENDPOINT_TYPE       (FLASH_SECTOR_SIZE - BLOCK_SIZE_ENDPOINT_TYPE)
static int adr_endpoint_type_idx = 0;


// Name of endpoint
static common_endpoint_par_t common_endpoint_par[ELE_CNT];

#define BLOCK_SIZE_COMMON_ENDPOINT_PAR       sizeof(common_endpoint_par)
#define FLASH_SIZE_COMMON_ENDPOINT_PAR       (FLASH_SECTOR_SIZE - BLOCK_SIZE_COMMON_ENDPOINT_PAR)
static int adr_common_endpoint_par_idx = 0;

// Name of scene
static common_scene_par_t common_scene_par[MAX_SCENE_CNT];

#define BLOCK_SIZE_COMMON_SCENE_PAR       sizeof(common_scene_par)
#define FLASH_SIZE_COMMON_SCENE_PAR       (FLASH_SECTOR_SIZE - BLOCK_SIZE_COMMON_SCENE_PAR)
static int adr_common_scene_par_idx = 0;

// Text symbol big size
const u8 text_symbol_big_size[TOTAL_TEXT_SYMBOL] = {
		28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 32, 28,
		32, 32, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 20, 32, 30, 14, 14, 14, 14,
		14, 14, 14, 28, 14, 44, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,
		30, 30, 30, 30, 30, 32, 32, 20, 28, 20, 30, 30, 30, 30, 30, 30, 32, 32, 32, 32,
		32, 32, 28, 40, 28, 28, 28, 28, 28, 28, 28, 28, 36, 36, 36, 36, 36, 36, 36, 36,
		36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 34, 36, 36, 38, 30, 30, 30, 30, 30, 30,
		30, 30, 30, 30, 30, 30, 30, 38, 38, 16, 16, 16, 16, 16, 16, 28, 34, 30, 44, 38, 38,
		38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 32, 38, 33,
		32, 32, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 34, 48, 36, 34, 34, 34,
		34, 34, 34, 34, 32, 24, 32, 32, 34, 32, 34, 30, 34, 34, 18, 24, 46, 32, 32, 32,
		48, 32, 36, 24, 20, 20, 24, 32, 32, 20, 20, 20, 20, 30, 16, 16, 16, 26, 16, 16,
		32, 32, 16, 26, 16, 14, 10
};

// Text symbol big size
const u8 text_symbol_medium_size[TOTAL_TEXT_SYMBOL] = {
		18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 20, 18,
		20, 22, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 12, 12, 12,  8,
		12,  8, 12, 18, 10, 28, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
		20, 20, 20, 20, 20, 20, 20, 14, 18, 12, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
		20, 20, 18, 26, 18, 18, 18, 18, 18, 18, 18, 18, 22, 22, 22, 22, 22, 22, 22, 22,
		22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 24, 24, 26, 20, 20, 20, 20, 20, 20,
		20, 20, 20, 20, 20, 20, 20, 24, 24, 10, 10, 10, 10, 10, 10, 18, 22, 20, 28, 24, 26,
		26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 22, 26, 22,
		22, 22, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 22, 32, 22, 22, 22, 22,
		22, 22, 22, 22, 22, 16, 20, 22, 22, 20, 22, 20, 22, 22, 10, 16, 30, 22, 22, 22,
		30, 22, 24, 16, 14, 14, 16, 22, 22, 14, 14, 14, 14, 20, 10, 10, 10, 16, 10, 10,
		22, 22, 10, 18, 10, 10, 8
};

/******************************************************************************/
/*                          PRIVATE FUNCTIONS DECLERATION                     */
/******************************************************************************/
static void element_store_common_endpoint_par(void);
static void element_set_common_endpoint_par_default(u8 idx);
static void element_store_common_scene_par(void);

static void element_set_common_scene_par_default(u8 scene_idx);

static void element_refresh_screen(u8 idx);
static int  element_response_status_to_host(u16 op, u8 model_idx, u8* par, u8 par_len);
static int  element_response_curtain_level(u8 model_idx, u8 present, u8 target, CutainState_enum st);
static int  element_response_cct_status(u8 idx);
static int  element_response_dim_status(u8 idx);
static int  element_response_fan_level(u8 model_idx, u8 level);
static int  element_response_switch_status(u8 idx);
static int element_response_audio_status(u8 idx);
static int element_response_audio_volume(u8 idx);
static int element_send_audio_control_to_host(u8 idx, HostAudiState_Enum control_state);

static int element_handle_message_set_endpoint_visibility(u8 model_idx, u8* par, int par_len);

static void ele_setup_publish_status_delay(u8 model_idx, u32 delay_ms);

/******************************************************************************/
/*                           EXPORT FUNCTIONS DECLERATION                     */
/******************************************************************************/

/**
 * @func    element_get_visibility_bit_mask
 * @brief
 * @param
 * @retval  None
 */
u16 element_get_visibility_bit_mask(void)
{
	u16 bit_mask = 0;
	foreach(i, ELE_CNT) {
		if(common_endpoint_par[i].enable == true) {
			bit_mask |= (1 << i);
		}
	}
	return bit_mask;
}

/**
 * @func    element_store_device_par
 * @brief
 * @param
 * @retval  None
 */
static void element_store_device_par(void)
{
    virtual_device_par.key_flash = KEY_FLASH_DEFAULT;
    flash_user_store(&adr_ele_par_idx, (uint32_t)FLASH_ADR_KNOB_ELE_PAR,  \
           FLASH_SIZE_ELE_PAR, BLOCK_SIZE_ELE_PAR, (u8*)&virtual_device_par );
    memcpy(&backup_device_par, &virtual_device_par, sizeof(virtual_device_par_t));
}

/**
 * @func    element_check_and_modify_device_par
 * @brief
 * @param
 * @retval  None
 */
static void element_check_and_modify_all_device_par(void)
{
	bool is_need_save = false;
    foreach(i, ELE_CNT) {
        if(endpoint_type[i] == TYPE_SWITCH) {
            if(virtual_device_par.switch_par.onoff_st[i] > G_ONOFF_RSV) {
                virtual_device_par.switch_par.onoff_st[i] = G_OFF;
                is_need_save = true;
            }
        }
        else if(endpoint_type[i] == TYPE_SCENE) {
            if(virtual_device_par.scene_par.current_scene_id >= MAX_SCENE_CNT) {
                virtual_device_par.scene_par.current_scene_id = 0;
                is_need_save = true;
            }
        }
        else if(endpoint_type[i] == TYPE_CCT) {
        	virtual_device_par.cct.display_mode[i] = DISPLAY_CCT_LIGHTNESS;
            if(virtual_device_par.cct.temperature[i] > CTL_TEMP_MAX
            				|| virtual_device_par.cct.temperature[i] < CTL_TEMP_MIN) {
                virtual_device_par.cct.temperature[i] = CTL_TEMP_MAX;
                is_need_save = true;
            }
        }
        else if(endpoint_type[i] == TYPE_DIM) {

        }
        else if(endpoint_type[i] == TYPE_CURTAIN) {

        }
        else if(endpoint_type[i] == TYPE_FAN) {
            if(virtual_device_par.fan_par.level[i] > FAN_LEVEL_MAX) {
                virtual_device_par.fan_par.level[i] = FAN_LEVEL_MAX;
                is_need_save = true;
            }
            if(virtual_device_par.fan_par.level_non_zz[i] > FAN_LEVEL_MAX) {
                virtual_device_par.fan_par.level_non_zz[i] = FAN_LEVEL_MAX;
                is_need_save = true;
            }
        }
        else if(endpoint_type[i] == TYPE_AIR_CONDITIONER) {
        	virtual_device_par.air.display_mode[i] = DISPLAY_AIR_MAIN;
            if(virtual_device_par.air.temp[i] > AIR_TEMP_MAX) {
                virtual_device_par.air.temp[i] = AIR_TEMP_DEFAULT;
                is_need_save = true;
            }
            if(virtual_device_par.air.mode[i] > AIR_MODE_MAX) {
                virtual_device_par.air.mode[i] = AIR_MODE_COOL;
                is_need_save = true;
            }
            if(virtual_device_par.air.fan[i] > FAN_VOL_MAX) {
                virtual_device_par.air.fan[i] = FAN_VOL_LOW;
                is_need_save = true;
            }
            if(virtual_device_par.air.swing[i] > SWING_MAX) {
                virtual_device_par.air.swing[i] = SWING_MAX;
                is_need_save = true;
            }
            if(virtual_device_par.air.display_mode[i] > DISPLAY_AIR_UNKNOWN) {
                virtual_device_par.air.display_mode[i] = DISPLAY_AIR_MAIN;
                is_need_save = true;
            }
            if(virtual_device_par.air.on_off[i] > G_ONOFF_RSV) {
                virtual_device_par.air.on_off[i] = G_OFF;
                is_need_save = true;
            }
        }
        else if(endpoint_type[i] == TYPE_AUDIO) {
            if(virtual_device_par.audio_par.volume[i] > AUDIO_VOLUME_MAX) {
                virtual_device_par.audio_par.volume[i] = AUDIO_VOLUME_MAX;
                is_need_save = true;
            }
        }
    }
    if(is_need_save == true) {
    	DBG_ELEMENT_SEND_STR("############################ Save default device par: ");
    	element_store_device_par();
    }
}

/**
 * @func    element_set_default_value_after_join
 * @brief
 * @param
 * @retval  None
 */
void element_set_default_value_after_join(void)
{
	foreach(idx, ELE_CNT) {
		if(endpoint_type[idx] == TYPE_CCT) {
			virtual_device_par.cct.index = 0;
			virtual_device_par.cct.temperature[idx] = CCT_TEMP_DEFAULT;
			virtual_device_par.cct.brightness[idx] = CCT_LIGHTNESS_DEFAULT;
			virtual_device_par.cct.brightness_non_zz[idx] = CCT_LIGHTNESS_DEFAULT;
			DBG_ELEMENT_SEND_STR(" - CCT");
		}
		else if(endpoint_type[idx] == TYPE_DIM) {
			virtual_device_par.dim.index = 0;
			virtual_device_par.dim.level[idx] = DIM_LEVEL_DEFAULT;
			virtual_device_par.dim.level_non_zz[idx] = DIM_LEVEL_DEFAULT;
		}
		if(virtual_device_par.model_index == idx) {
			element_refresh_screen(idx);
		}
	}
}

/**
 * @func    element_set_device_par_default
 * @brief
 * @param
 * @retval  None
 */
static void element_set_device_par_default(u8 idx)
{
    DBG_ELEMENT_SEND_STR("\n *** STORE element par default");
    if(idx >= ELE_CNT) {
    	return;
    }
	if(endpoint_type[idx] == TYPE_SWITCH) {
		virtual_device_par.switch_par.index = 0;
		virtual_device_par.switch_par.onoff_st[idx] = G_OFF;
	}
	else if(endpoint_type[idx] == TYPE_SCENE) {
		virtual_device_par.scene_par.current_scene_id = 0;
	}
	else if(endpoint_type[idx] == TYPE_CCT) {
		virtual_device_par.cct.index = 0;
		virtual_device_par.cct.temperature[idx] = CCT_TEMP_DEFAULT;
		virtual_device_par.cct.brightness[idx] = CCT_LIGHTNESS_DEFAULT;
		virtual_device_par.cct.brightness_non_zz[idx] = CCT_LIGHTNESS_DEFAULT;
		DBG_ELEMENT_SEND_STR(" - CCT");
	}
	else if(endpoint_type[idx] == TYPE_DIM) {
		virtual_device_par.dim.index = 0;
		virtual_device_par.dim.level[idx] = DIM_LEVEL_DEFAULT;
		virtual_device_par.dim.level_non_zz[idx] = DIM_LEVEL_DEFAULT;
	}
	else if(endpoint_type[idx] == TYPE_CURTAIN) {
		virtual_device_par.curtain_par.index = idx;
		virtual_device_par.curtain_par.level[idx] = _MAX_POSITION;
		virtual_device_par.curtain_par.previous_level[idx] = _MAX_POSITION;
		virtual_device_par.curtain_par.st[idx] = ST_STOPED;
		curtain_set_common_par(idx, virtual_device_par.curtain_par.level[idx]);
	}
	else if(endpoint_type[idx] == TYPE_FAN) {
		virtual_device_par.fan_par.level[idx] = FAN_OFF;
		virtual_device_par.fan_par.level_non_zz[idx] = FAN_LEVEL_MAX;
	}
	else if(endpoint_type[idx] == TYPE_AIR_CONDITIONER) {
		virtual_device_par.air.temp[idx] = AIR_TEMP_DEFAULT;
		virtual_device_par.air.display_mode[idx] = DISPLAY_AIR_MAIN;
		virtual_device_par.air.on_off[idx] = G_OFF;
		virtual_device_par.air.mode[idx] = AIR_MODE_COOL;
		virtual_device_par.air.temp[idx] = AIR_TEMP_DEFAULT;
		virtual_device_par.air.fan[idx] = FAN_VOL_LOW;
		virtual_device_par.air.swing[idx] = SWING_AUTO;
	}
	else if(endpoint_type[idx] == TYPE_AUDIO) {
		virtual_device_par.audio_par.state[idx] = AUDIO_PAUSE;
		virtual_device_par.audio_par.volume[idx] = AUDIO_VOLUME_MAX;
	}
}

/**
 * @func    element_restore_device_par
 * @brief
 * @param
 * @retval  None
 */
static void element_restore_device_par(void)
{
    u8 temp[BLOCK_SIZE_ELE_PAR];
    flash_user_get_flash_index(&adr_ele_par_idx,  \
            FLASH_ADR_KNOB_ELE_PAR, FLASH_SIZE_ELE_PAR, BLOCK_SIZE_ELE_PAR, temp
        );
    flash_user_restore(adr_ele_par_idx,  \
            FLASH_ADR_KNOB_ELE_PAR, BLOCK_SIZE_ELE_PAR, (u8*)&virtual_device_par);
    if(virtual_device_par.key_flash != KEY_FLASH_DEFAULT) {
        memset(&virtual_device_par, 0, BLOCK_SIZE_ELE_PAR);
    	foreach(i, ELE_CNT) {
    		element_set_device_par_default(i);
    	}
        virtual_device_par.model_index = 0;
        element_store_device_par();
    }
    else {
    	element_check_and_modify_all_device_par();
    }
    memcpy(&backup_device_par, &virtual_device_par, sizeof(virtual_device_par_t));
    // External files
    foreach(i, ELE_CNT) {
        curtain_set_common_par(i, virtual_device_par.curtain_par.level[i]);
    }
}

/***************************** Endpoint Type *****************************/

/**
 * @func    element_store_endpoint_type
 * @brief
 * @param
 * @retval  None
 */
static void element_store_endpoint_type(void)
{
	flash_user_store(&adr_endpoint_type_idx, (uint32_t)FLASH_ADR_ENDPOINT_TYPE,  \
			FLASH_SIZE_ENDPOINT_TYPE, BLOCK_SIZE_ENDPOINT_TYPE, (u8*)&endpoint_type);
}

/**
 * @func    element_store_endpoint_type_default
 * @brief
 * @param
 * @retval  None
 */
static void element_store_endpoint_type_default(void)
{
	DBG_ELEMENT_SEND_STR("\n element_store_endpoint_type_default");
	for(u8 i = 0; i < ELE_CNT; i++) {
		endpoint_type[i] = TYPE_SWITCH;
	}
	element_store_endpoint_type();
}

/**
 * @func    element_restore_endpoint_type
 * @brief
 * @param
 * @retval  None
 */
static void element_restore_endpoint_type(void)
{
	u8 temp[BLOCK_SIZE_ENDPOINT_TYPE];
	flash_user_get_flash_index(&adr_endpoint_type_idx,  \
			FLASH_ADR_ENDPOINT_TYPE, FLASH_SIZE_ENDPOINT_TYPE, BLOCK_SIZE_ENDPOINT_TYPE, temp
		);
	flash_user_restore(adr_endpoint_type_idx,  \
			FLASH_ADR_ENDPOINT_TYPE, BLOCK_SIZE_ENDPOINT_TYPE, (u8*)&endpoint_type);
	if(endpoint_type[0] != TYPE_SWITCH || endpoint_type[1] != TYPE_SWITCH) {
		element_store_endpoint_type_default();
	}

#ifdef  DEBUG_ELEMENT
	DBG_ELEMENT_SEND_STR("\n element_restore_endpoint_type");
	foreach(i, ELE_CNT) {
		DBG_ELEMENT_SEND_INT(endpoint_type[i]);
		if(i < (ELE_CNT-1)) {
			DBG_ELEMENT_SEND_STR(", ");
		}
	}
#endif
}

/**
 * @func    element_handle_message_get_all_endpoint_type
 * @brief
 * @param   None
 * @retval  None
 */
int element_handle_message_get_all_endpoint_type(u8 model_idx)
{
	if(model_idx < ELE_CNT) {
		u8 tmp[ELE_CNT/2+2];
		u8 *p = &tmp[2];
		tmp[0] = SPID_ENDPOINT_TYPE;
		tmp[1] = 0;
		foreach(i, ELE_CNT/2) {
			p[i] = (endpoint_type[i*2] << 4)&0xF0;
			p[i] |= (endpoint_type[i*2+1]&0x0F);
		}
		return mesh_tx_cmd_rsp(
				SENSOR_SETTING_STATUS, tmp, ELE_CNT/2+2,
				ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
			);
	}
	return -1;
}

/**
 * @func    element_handle_message_get_endpoint_type
 * @brief
 * @param   None
 * @retval  None
 */
int element_handle_message_get_endpoint_type(u8 model_idx, u8* par, int par_len)
{
	u8 endpoint_id = par[0];
	if(endpoint_id == 0) {
		return element_handle_message_get_all_endpoint_type(model_idx);
	}
	else {
		if(endpoint_id <= ELE_CNT) {
			u8 tmp[3];
			tmp[0] = SPID_ENDPOINT_TYPE;
			tmp[1] = endpoint_id;
			tmp[2] = endpoint_type[endpoint_id-1];
			return mesh_tx_cmd_rsp(
					SENSOR_SETTING_STATUS, tmp, 3,
					ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
				);
		}
	}
	return -1;
}
/**
 * @func    element_handle_change_set_endpoint_type
 * @brief
 * @param   None
 * @retval  None
 */
int element_handle_message_set_endpoint_type(u8 model_idx, u8* par, int par_len)
{
	u8 endpoint_id = par[0];

	bool save = false;
	bool save_group = false;
	bool save_binding = false;
	bool save_scene = false;
	bool save_advanced = false;
	bool refresh_enable = false;
	bool save_btn_scene = false;
	bool save_execution_scene = false;

	if(endpoint_id == 0) {
		u8* p_set = &par[1];
		u8 tmp[ELE_CNT];
		foreach(i, ELE_CNT/2) {
			tmp[i*2] = (p_set[i] >> 4)&0x0F;
			tmp[i*2+1] = (p_set[i])&0x0F;
		}
		// Check valid endpoint type
		u8 number_endpoint_scene = 0;
		bool failure = false;
		foreach(i, ELE_CNT) {
			if(tmp[i] > TYPE_MAX) {
				failure = true;
			}
			else if(tmp[i] == TYPE_SCENE) {
				if(++number_endpoint_scene > 1) {
					failure = true;
				}
			}
			if(failure == true) {
				element_handle_message_get_endpoint_type(model_idx, par, par_len);
				return -1;
			}
		}
		// Fix type switch for endpoint 1 and 2
		tmp[0] = tmp[1] = TYPE_SWITCH;

		// Check refresh screen
		u8 index = virtual_device_par.model_index;
		if(tmp[index] == TYPE_UNKNOWN) {
			virtual_device_par.model_index = 0;
			refresh_enable = true;
		}
		else {
			if(endpoint_type[index] != tmp[index]) {
				refresh_enable = true;
				if(tmp[index] == TYPE_SCENE) {
					virtual_device_par.model_index = 0;
				}
			}
		}
		// Update new endpoint type
		foreach(i, ELE_CNT) {
			if(endpoint_type[i] != tmp[i]) {
				save = true;
				endpoint_type[i] = tmp[i];
				// Endpoint name, icon
				element_set_common_endpoint_par_default(i);
				// Scene activated, name, icon
				foreach(i, MAX_SCENE_CNT) {
					element_set_common_scene_par_default(i);
				}
				// Status, display mode, range value... it will automatic save to flash
				element_set_device_par_default(i);
				// Scene
				if(scene_delete_all_scene_manual(i) == true) {
					save_scene = true;
				}
				// Binding
				if(get_group_binding_adr(i) != ADR_UNASSIGNED) {
					binding_delete(i);
					save_binding = true;
				}
				// Group
				if(mesh_cmd_sig_delete_all_sub(i) == true) {
					save_group = true;
				}
				// Advanced configuration
				if(advanced_config_set_to_default(i) == true) {
					save_advanced = true;
				}
				// Execution scene - Normal
				if(endpoint_type[i] == TYPE_SCENE) {
					if(sc_delete_all_not_save_flash() == true) {
						save_btn_scene = true;
						DBG_ELEMENT_SEND_STR("\n ****** save_btn_scene = true");
					}
					else {
						DBG_ELEMENT_SEND_STR("\n ****** don't need save_btn_scene");
					}
				}
				// Execution scene - On/Off
				if(endpoint_type[i] == TYPE_SWITCH) {
					if(execution_scene_delete_scene_follow_model_idx_not_save_flash(i) == true) {
						save_execution_scene = true;
						DBG_ELEMENT_SEND_STR("\n ****** save_execution_scene = true");
					}
					else {
						DBG_ELEMENT_SEND_STR("\n ###### don't need save_execution_scene");
					}
				}
				// Send All configuration
				advanced_setup_enable_auto_send(true, TIMER_15S+rand()%TIMER_5S);
			}
		}
	}
	else {
		if(endpoint_id <= ELE_CNT) {
			u8 idx = endpoint_id-1;
			u8 set_type = par[1];
			// max scene = 1
			if(set_type == TYPE_SCENE) {
				foreach(i, ELE_CNT) {
					if(i != idx) {
						if(endpoint_type[i] == TYPE_SCENE) {
							 element_handle_message_get_endpoint_type(model_idx, par, par_len);
							 return -1;
						}
					}
				}
			}
			// fix sw1, sw2
			if(idx < RELAY_CNT ||
					set_type > TYPE_MAX ) {
				 element_handle_message_get_endpoint_type(model_idx, par, par_len);
				 return -1;
			}
			// Set same type
			if(set_type == endpoint_type[idx]) {
				 element_handle_message_get_endpoint_type(model_idx, par, par_len);
				 return 0;
			}
			// Check refresh
			if(virtual_device_par.model_index == idx) {
				if(set_type == TYPE_UNKNOWN) {
					virtual_device_par.model_index = 0;
					refresh_enable = true;
				}
				else {
					if(endpoint_type[virtual_device_par.model_index] != set_type) {
						refresh_enable = true;
					}
					if(set_type == TYPE_SCENE) {
						virtual_device_par.model_index = 0;
					}
				}
			}
			// Main handle
			save = true;

			if(endpoint_type[idx] != set_type) {
				if(set_type == TYPE_SCENE) {
					// Scene activated, name, icon
					foreach(i, MAX_SCENE_CNT) {
						element_set_common_scene_par_default(i);
					}
					// Execution scene - Normal
					if(set_type == TYPE_SCENE) {
						if(sc_delete_all_not_save_flash() == true) {
							save_btn_scene = true;
							DBG_ELEMENT_SEND_STR("\n ****** save_btn_scene = true");
						}
						else {
							DBG_ELEMENT_SEND_STR("\n ****** don't need save_btn_scene");
						}
					}
				}
				else if(set_type == TYPE_SWITCH) {
					// Execution scene - On/Off
					if(set_type == TYPE_SWITCH) {
						if(execution_scene_delete_scene_follow_model_idx_not_save_flash(idx) == true) {
							save_execution_scene = true;
							DBG_ELEMENT_SEND_STR("\n ****** save_execution_scene = true");
						}
						else {
							DBG_ELEMENT_SEND_STR("\n ###### don't need save_execution_scene");
						}
					}
				}
			}
			endpoint_type[idx] = set_type;
			// Endpoint name, icon
			element_set_common_endpoint_par_default(idx);

			// Status, display mode, range value... it will automatic save to flash
			element_set_device_par_default(idx);
			// Scene
			if(scene_delete_all_scene_manual(idx) == true) {
				save_scene = true;
			}
			// Binding
			if(get_group_binding_adr(idx) != ADR_UNASSIGNED) {
				binding_delete(idx);
				save_binding = true;
			}
			// Group
			if(mesh_cmd_sig_delete_all_sub(idx) == true) {
				save_group = true;
			}
			// Advanced configuration
			if(advanced_config_set_to_default(idx) == true) {
				save_advanced = true;
			}
			// Force update status
			ele_setup_publish_status_delay(idx, TIMER_5S + rand()%TIMER_30S);
		}
		else {
			return -1;
		}
	}
    element_handle_message_get_endpoint_type(model_idx, par, par_len);
    element_store_endpoint_type();

#if ENABLE_AUTO_ENABLE_VISIBILITY
	u8 tmp[2];
	tmp[0] = endpoint_id;
	tmp[1] = true;
	element_handle_message_set_endpoint_visibility(model_idx, tmp, 2);
#endif

    if(save == true) {
        element_store_common_endpoint_par();
        element_store_common_scene_par();
    }
    if(save_scene == true) {
    	mesh_model_store(1, SIG_MD_SCENE_SETUP_S);
    }
    if(save_group == true) {
    	mesh_cmd_sig_save_all_mesh_model();
    }
    if(save_binding == true) {
    	store_binding_para();
    }
    if(save_advanced == true) {
    	advanced_config_store();
    }
    if(save_btn_scene == true) {
    	sc_save_flash();
    }
    if(save_execution_scene == true) {
    	execution_scene_save_flash();
    }
    // Refresh screen
    if(refresh_enable == true) {
    	element_refresh_screen(virtual_device_par.model_index);
    }
    // Send all advanced configuration
    if(endpoint_id != 0) {
    	u8 idx = endpoint_id - 1;
		if(endpoint_type[idx] == TYPE_SWITCH) {
			advanced_config_response_switch_mode(idx, ele_adr_primary + idx);
			advaced_config_response_on_power_up_state(idx, ele_adr_primary +idx);
		}
		else if(endpoint_type[idx] == TYPE_CURTAIN) {
			advanced_config_response_limit_time(idx, ele_adr_primary + idx);
		}
    }
    return 0;
}

/**
 * @func    element_handle_message_get_endpoint_name
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_get_endpoint_name(u8 model_idx, u8* par, int par_len)
{
    u8 idx =  par[0] - 1;
    if(idx >= ELE_CNT) {
        return -1;
    }
    u8 tmp[common_endpoint_par[idx].name_len + 3];
    tmp[0] = SPID_ENDPOINT_NAME;
    tmp[1] = idx + 1;
    tmp[2] = common_endpoint_par[idx].name_len;
    memcpy(&tmp[3], common_endpoint_par[idx].name, common_endpoint_par[idx].name_len);
    return mesh_tx_cmd_rsp(
    		SENSOR_SETTING_STATUS, tmp, common_endpoint_par[idx].name_len + 3,
    		ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
        );
    return 0;
}

/**
 * @func    is_valid_name
 * @brief
 * @param   None
 * @retval  None
 */
static bool is_valid_name(u8* p_name, u8 len)
{
	foreach(i, len) {
		if(p_name[i] > SYMBOL_BIG_SPACE) {
			return false;
		}
	}
	return true;
}

/**
 * @func    element_handle_message_set_endpoint_name
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_set_endpoint_name(u8 model_idx, u8* par, int par_len)
{
	DBG_ELEMENT_SEND_STR("\n element_handle_message_set_endpoint_name: ");
    set_endpoint_name_t *p_set = (set_endpoint_name_t*)par;
    u8 idx = p_set->endpoint_id-1;
    if(p_set->name_len > DEVICE_NAME_MAX_LEN) {
        element_handle_message_get_endpoint_name(model_idx, par, par_len);
        return -1;
    }
    bool is_new = false;
    if(is_valid_name(p_set->name, p_set->name_len) == true) {
		memcpy(common_endpoint_par[idx].name, p_set->name, p_set->name_len);
		common_endpoint_par[idx].name_len = p_set->name_len;
		element_store_common_endpoint_par();
		is_new = true;
    }
    element_handle_message_get_endpoint_name(model_idx, par, par_len);
    // Refresh screen
    if(virtual_device_par.model_index == idx) {
    	element_refresh_screen(virtual_device_par.model_index);
    }
    if(is_new == false) {
    	return -1;
    }
    return 0;
}

/**
 * @func    element_handle_message_get_endpoint_icon
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_get_endpoint_icon(u8 model_idx, u8* par, int par_len)
{
    u8 idx = par[0] - 1;
    if(idx >= ELE_CNT) {
        return -1;
    }
    u8 tmp[3];
    tmp[0] = SPID_ENDPOINT_ICON;
    tmp[1] = idx + 1;
    tmp[2] = common_endpoint_par[idx].icon_id;
    return mesh_tx_cmd_rsp(
    		SENSOR_SETTING_STATUS, tmp, 3,
    		ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
        );
}

/**
 * @func    element_endpoint_is_light
 * @brief
 * @param   None
 * @retval  None
 */
static bool element_endpoint_is_light(u8 idx)
{
    if(endpoint_type[idx] == TYPE_SWITCH || endpoint_type[idx] == TYPE_DIM || endpoint_type[idx] == TYPE_CCT) {
        return true;
    }
    return false;
}

/**
 * @func    element_endpoint_is_curtain
 * @brief
 * @param   None
 * @retval  None
 */
static bool element_endpoint_is_curtain(u8 idx)
{
    if(endpoint_type[idx] == TYPE_CURTAIN) {
        return true;
    }
    return false;
}

/**
 * @func    element_handle_message_set_endpoint_icon
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_set_endpoint_icon(u8 model_idx, u8* par, int par_len)
{
    set_endpoint_icon_t *p_set = (set_endpoint_icon_t*)par;
    u8 idx = p_set->endpoint_id - 1;
    if(idx >= ELE_CNT) {
    	DBG_ELEMENT_SEND_STR("\n F-1");
        return -1;
    }
    // Check valid icon id
    if(element_endpoint_is_light(idx)) {
        if(p_set->icon_id > LIGHT_ICON_ID_END || p_set->icon_id < LIGHT_ICON_ID_START) {
            element_handle_message_get_endpoint_icon(model_idx, par, par_len);
            DBG_ELEMENT_SEND_STR("\n F-2: ");
            DBG_ELEMENT_SEND_INT(p_set->icon_id);
            return -1;
        }
    }
    else if(element_endpoint_is_curtain(idx)) {
        if(p_set->icon_id != CURTAIN_ICON_ID_HORIZONTAL && p_set->icon_id != CURTAIN_ICON_ID_VERTICAL) {
            element_handle_message_get_endpoint_icon(model_idx, par, par_len);
            return -1;
        }
    }
    else {
    	DBG_ELEMENT_SEND_STR("\n F-4");
        return -1;
    }
    common_endpoint_par[idx].icon_id = p_set->icon_id;
    element_store_common_endpoint_par();
    element_handle_message_get_endpoint_icon(model_idx, par, par_len);
    // Refresh screen
    if(virtual_device_par.model_index == idx) {
    	element_refresh_screen(virtual_device_par.model_index);
    }
    return 0;
}

/**
 * @func    is_all_scene_inactive
 * @brief
 * @param   None
 * @retval  None
 */
static bool is_all_scene_inactive(void)
{
	foreach(i, MAX_SCENE_CNT) {
		if(common_scene_par[i].is_actived == true) {
			return false;
		}
	}
	return true;
}

/**
 * @func    element_handle_message_get_scene_enable_disable
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_get_scene_enable_disable(u8 model_idx, u8* par, int par_len)
{
    u8 scene_id = par[0];
    if(scene_id == (KNOB_SCENE_ID_OFFSET - 1)) {
        u16 bit_mask = 0;
        foreach(i, MAX_SCENE_CNT) {
            if(common_scene_par[i].is_actived == true) {
                bit_mask |= (1 << i);
            }
        }
        u8 tmp[4];
        tmp[0] = SPID_SCENE_ENABLE_DISABLE;
        tmp[1] = scene_id;
        tmp[2] = (u8)(bit_mask &0xFF);
        tmp[3] = (u8)(bit_mask >> 8);
        return mesh_tx_cmd_rsp(
					SENSOR_SETTING_STATUS, tmp, 4,
					ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
				);
        return 0;
    }
    u8 idx = scene_id - KNOB_SCENE_ID_OFFSET;
    if(idx >= MAX_SCENE_CNT) {
        return -1;
    }
    u8 tmp[3];
    tmp[0] = SPID_SCENE_ENABLE_DISABLE;
    tmp[1] = scene_id;
    tmp[2] = common_scene_par[idx].is_actived;
    return mesh_tx_cmd_rsp(
    		SENSOR_SETTING_STATUS, tmp, 3,
    		ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
        );
    
}

/**
 * @func    element_handle_message_set_scene_enable_disable      
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_set_scene_enable_disable(u8 model_idx, u8* par, int par_len)
{
    set_scene_enable_disable_t *p_set = (set_scene_enable_disable_t*)par;
    bool refresh = false;
    u8 idx = p_set->scene_id - KNOB_SCENE_ID_OFFSET;
    if(idx >= MAX_SCENE_CNT) {
        return -1;
    }
    if(common_scene_par[idx].is_actived != p_set->enable) {
    	if(endpoint_type[virtual_device_par.model_index] == TYPE_SCENE) {
    		refresh = true;
    	}
		common_scene_par[idx].is_actived = p_set->enable&0x01;
		element_store_common_scene_par();
    }
    element_handle_message_get_scene_enable_disable(model_idx, par, par_len);
    // Refresh screen
    // if(endpoint_type[virtual_device_par.model_index] == TYPE_SCENE)
    {
    	if(virtual_device_par.scene_par.current_scene_id == idx) {
    		DBG_ELEMENT_SEND_STR("\n element_handle_message_set_scene_enable_disable --- 1");
            if(common_scene_par[idx].is_actived == false) {
                bool is_found = false;
                foreach(i, MAX_SCENE_CNT) {
                    if(common_scene_par[i].is_actived == true) {
                        virtual_device_par.scene_par.current_scene_id = i;
                        is_found = true;
                        break;
                    }
                }
                if(is_found == false) {
                    virtual_device_par.model_index = 0;
                }
            }
    	}
    	else {
    		// if(common_scene_par[virtual_device_par.scene_par.current_scene_id].is_actived == false)
    		{
    			DBG_ELEMENT_SEND_STR("\n element_handle_message_set_scene_enable_disable --- 2");
    			 if(common_scene_par[idx].is_actived == true) {
    				 virtual_device_par.scene_par.current_scene_id = idx;
    				 DBG_ELEMENT_SEND_STR("\n ***1");
    			 }
    			 else {
    				 DBG_ELEMENT_SEND_STR("\n ***2");
					 bool is_found = false;
					 foreach(i, MAX_SCENE_CNT) {
						 if(common_scene_par[i].is_actived == true) {
							 virtual_device_par.scene_par.current_scene_id = i;
							 is_found = true;
							 break;
						 }
					 }
					 if(is_found == false) {
						 virtual_device_par.model_index = 0;
					 }
    			 }
    		}
    	}
    }
    if(refresh == true) {
		element_refresh_screen(virtual_device_par.model_index);
    }
    return 0;
}

/**
 * @func    element_handle_message_get_scene_name
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_get_scene_name(u8 model_idx, u8* par, int par_len)
{
    u8 idx = par[0] - KNOB_SCENE_ID_OFFSET;
    if(idx >= MAX_SCENE_CNT) {
        return -1;
    }
    u8 tmp[common_scene_par[idx].name_len + 3];
    tmp[0] = SPID_SCENE_NAME;
    tmp[1] = idx + KNOB_SCENE_ID_OFFSET;
    tmp[2] = common_scene_par[idx].name_len;
    memcpy(&tmp[3], common_scene_par[idx].name, common_scene_par[idx].name_len);
    return mesh_tx_cmd_rsp(
    		SENSOR_SETTING_STATUS, tmp, common_scene_par[idx].name_len + 3,
    		ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
        );
    return 0;
}

/**
 * @func    element_handle_message_set_scene_name
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_set_scene_name(u8 model_idx, u8* par, int par_len)
{
	DBG_ELEMENT_SEND_STR("\n element_handle_message_set_scene_name: ");
    set_scene_name_t *p_set = (set_scene_name_t*)par;
    u8 idx = p_set->scene_id - KNOB_SCENE_ID_OFFSET;
    if(idx >= MAX_SCENE_CNT) {
        return -1;
    }
    if(p_set->name_len > SCENE_NAME_MAX_LEN) {
        element_handle_message_get_scene_name(model_idx, par, par_len);
        return -1;
    }
    bool is_new = false;
    if(is_valid_name(p_set->name, p_set->name_len) == true) {
		memcpy(common_scene_par[idx].name, p_set->name, p_set->name_len);
		common_scene_par[idx].name_len = p_set->name_len;
		element_store_common_scene_par();
		is_new = true;
    }
    element_handle_message_get_scene_name(model_idx, par, par_len);
    // Refresh screen
    if(endpoint_type[virtual_device_par.model_index] == TYPE_SCENE) {
    	if(virtual_device_par.scene_par.current_scene_id == idx) {
    		element_refresh_screen(virtual_device_par.model_index);
    	}
    	else {
    		if(virtual_device_par.scene_par.current_scene_id != idx && common_scene_par[idx].is_actived == true)  {
    			virtual_device_par.scene_par.current_scene_id = idx;
    			element_refresh_screen(virtual_device_par.model_index);
    		}
    	}
    }
    if(is_new == false) {
    	return -1;
    }
    return 0;
}

/**
 * @func    element_handle_message_get_scene_icon
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_get_scene_icon(u8 model_idx, u8* par, int par_len)
{
    u8 idx = par[0] - KNOB_SCENE_ID_OFFSET;
    if(idx >= MAX_SCENE_CNT) {
        return -1;
    }
    u8 tmp[3];
    tmp[0] = SPID_SCENE_ICON;
    tmp[1] = idx + KNOB_SCENE_ID_OFFSET;
    tmp[2] = common_scene_par[idx].icon_id;
    return mesh_tx_cmd_rsp(
    		SENSOR_SETTING_STATUS, tmp, 3,
    		ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
        );
    return 0;
}

/**
 * @func    element_handle_message_set_scene_icon
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_set_scene_icon(u8 model_idx, u8* par, int par_len)
{
    set_scene_icon_t *p_set = (set_scene_icon_t*)par;
    u8 idx = p_set->scene_id - KNOB_SCENE_ID_OFFSET;
    if(idx >= MAX_SCENE_CNT) {
        return -1;
    }
    if(p_set->icon_id > SCENE_ICON_END || p_set->icon_id < SCENE_ICON_START) {
        element_handle_message_get_scene_icon(model_idx, par, par_len);
        return -1;
    }
    common_scene_par[idx].icon_id = p_set->icon_id;
    element_store_common_scene_par();
    element_handle_message_get_scene_icon(model_idx, par, par_len);
    // Refresh screen
    if(endpoint_type[virtual_device_par.model_index] == TYPE_SCENE) {
    	if(virtual_device_par.scene_par.current_scene_id == idx) {
    		element_refresh_screen(virtual_device_par.model_index);
    	}
    	else {
    		if(virtual_device_par.scene_par.current_scene_id != idx && common_scene_par[idx].is_actived == true)  {
    			virtual_device_par.scene_par.current_scene_id = idx;
    			element_refresh_screen(virtual_device_par.model_index);
    		}
    	}
    }
    return 0;
}   

/**
 * @func    element_handle_message_get_endpoint_visibility
 * @brief
 * @param   None
 * @retval  None
 */
int element_handle_message_get_endpoint_visibility(u8 model_idx, u8* par, int par_len)
{
	u8 endpoint_id =  par[0];
	if(endpoint_id == 0) {
		u16 bit_mask = 0;
		foreach(i, ELE_CNT) {
			if(common_endpoint_par[i].enable == true) {
				bit_mask |= (1 << i);
			}
		}
		u8 tmp[4];
		tmp[0] = SPID_ENDPOINT_VISIBILITY;
		tmp[1] = 0;
		tmp[2] = (u8)bit_mask;
		tmp[3] = (u8)(bit_mask >> 8);
	    return mesh_tx_cmd_rsp(
	    		SENSOR_SETTING_STATUS, tmp, 4,
	    		ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
	        );
	}
	else {
		u8 idx = endpoint_id - 1;
		if(idx < ELE_CNT) {
			u8 tmp[3];
			tmp[0] = SPID_ENDPOINT_VISIBILITY;
			tmp[1] = endpoint_id;
			tmp[2] = common_endpoint_par[idx].enable;
		    return mesh_tx_cmd_rsp(
		    		SENSOR_SETTING_STATUS, tmp, 3,
		    		ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
		        );
		}
	}
	return -1;
}

/**
 * @func    element_handle_message_set_endpoint_visibility
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_set_endpoint_visibility(u8 model_idx, u8* par, int par_len)
{
	u8 endpoint_id = par[0];
	u8 idx = endpoint_id - 1;
	u8 enable = par[1];
	if(idx < ELE_CNT) {
		if(enable == true || enable == false) {
			if(common_endpoint_par[idx].enable != enable) {
				// enable save
				common_endpoint_par[idx].enable = enable;
				element_store_common_endpoint_par();
				// Refresh
				if(virtual_device_par.model_index == idx) {
					if(pvEle_handleDisableVisibilityCurrentEndpoint != NULL) {
						pvEle_handleDisableVisibilityCurrentEndpoint(idx);
					}
				}
			}
		}
		return element_handle_message_get_endpoint_visibility(model_idx, &endpoint_id, 1);
	}
	return -1;
}

/**
 * @func    element_handle_message_get_ac_parameter
 * @brief
 * @param   None
 * @retval  None
 */
int element_handle_message_get_ac_parameter(u8 model_idx, u8* par, int par_len)
{
	u8 endpoint_id = par[0];
	u8 idx = endpoint_id - 1;
	if(idx < ELE_CNT) {
		u8 len = sizeof(ac_config_mask_t) + 2;
		u8 tmp[len];
		tmp[0] = SPID_AC_PAR_CONFIGURATION;
		tmp[1] = endpoint_id;
		memcpy(&tmp[2], &common_endpoint_par[idx].ac_config_mask, sizeof(ac_config_mask_t));
		return mesh_tx_cmd_rsp(
				SENSOR_SETTING_STATUS, tmp, len,
				ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
			);
	}
	return -1;
}

/**
 * @func    element_handle_message_set_ac_parameter
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_set_ac_parameter(u8 model_idx, u8* par, int par_len)
{
	u8 endpoint_id = par[0];
	u8 idx = endpoint_id - 1;
	if(idx < ELE_CNT) {
		ac_config_mask_t* p = (ac_config_mask_t*)&par[1];
		if((p->mode&AC_MODE_BIT_MASK) != 0  \
				&& (p->fan&AC_FAN_BIT_MASK) != 0  \
					&& (p->mode&AC_SWING_BIT_MASK) != 0) {
			if(p->temp_min >= AC_TEMP_MIN_DEFAULT && p->temp_min < AC_TEMP_MAX_DEFAULT
					&& p->temp_max > AC_TEMP_MIN_DEFAULT && p->temp_max <= AC_TEMP_MAX_DEFAULT) {
				if(p->temp_min < p->temp_max) {
					if(p->temp_step <= (p->temp_max - p->temp_min)*10) {
						DBG_ELEMENT_SEND_STR("\n AC set parameter pass all!");
						memcpy(&common_endpoint_par[idx].ac_config_mask, p, sizeof(ac_config_mask_t));
						element_store_common_endpoint_par();
						element_handle_message_get_ac_parameter(model_idx, &endpoint_id, 1);
						return 0;
					}
				}
			}
		}
		element_handle_message_get_ac_parameter(model_idx, &endpoint_id, 1);
	}
	return -1;
}


/**
 * @func    element_handle_message_get_endpoint_info
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_get_endpoint_info(u8 model_idx, u8* par, int par_len)
{
	DBG_ELEMENT_SEND_STR("\nelement_handle_message_get_endpoint_info");
	u8 idx = par[0] - 1;
	if(idx >= ELE_CNT || model_idx >= ELE_CNT) {
		return -1;
	}
	endpoint_info_rsp_t endpoint_info_rsp;
	endpoint_info_rsp.spid = SPID_ENPOINT_INFO;
	endpoint_info_rsp.endpoint_id =  par[0];
	endpoint_info_rsp.type = endpoint_type[idx];
	endpoint_info_rsp.icon_id = common_endpoint_par[idx].icon_id;
	endpoint_info_rsp.name_len = common_endpoint_par[idx].name_len;
	memcpy(endpoint_info_rsp.name, common_endpoint_par[idx].name, DEVICE_NAME_MAX_LEN);
	if(endpoint_type[idx] == TYPE_SCENE) {
		endpoint_info_rsp.name_len = 0;
	}
	u8 len = sizeof(endpoint_info_rsp_t) - DEVICE_NAME_MAX_LEN + endpoint_info_rsp.name_len + 1;
	u8 pos_enable = endpoint_info_rsp.name_len;
	if(pos_enable > DEVICE_NAME_MAX_LEN) {
		pos_enable = DEVICE_NAME_MAX_LEN;
	}
	endpoint_info_rsp.name[pos_enable] = common_endpoint_par[idx].enable;

	return mesh_tx_cmd_rsp(
					SENSOR_SETTING_STATUS,
					(u8*)&endpoint_info_rsp,
					len,
					ele_adr_primary + model_idx,
					GATEWAY_UNICAST_ADDR,
					0,
					0
				);
}

/**
 * @func    element_handle_message_get_scene_info
 * @brief
 * @param   None
 * @retval  None
 */
static int element_handle_message_get_scene_info(u8 model_idx, u8* par, int par_len)
{
	if(model_idx >= ELE_CNT) {
		return -1;
	}
	DBG_ELEMENT_SEND_STR("\nelement_handle_message_get_scene_info");
	if(endpoint_type[model_idx] == TYPE_SCENE) {
		u8 idx = par[0] - KNOB_SCENE_ID_OFFSET;
		if(idx >= MAX_SCENE_CNT) {
			return -1;
		}
		scene_info_rsp_t scene_info_rsp;
		scene_info_rsp.spid = SPID_SCENE_INFO;
		scene_info_rsp.scene_id =  par[0];
		scene_info_rsp.enable = common_scene_par[idx].is_actived;
		scene_info_rsp.icon_id = common_scene_par[idx].icon_id;
		scene_info_rsp.name_len = common_scene_par[idx].name_len;
		memcpy(scene_info_rsp.name, common_scene_par[idx].name, DEVICE_NAME_MAX_LEN);
		u8 len = sizeof(scene_info_rsp_t) - DEVICE_NAME_MAX_LEN + scene_info_rsp.name_len;
		return mesh_tx_cmd_rsp(
						SENSOR_SETTING_STATUS,
						(u8*)&scene_info_rsp,
						len,
						ele_adr_primary + model_idx,
						GATEWAY_UNICAST_ADDR,
						0,
						0
					);
	}
	DBG_ELEMENT_SEND_STR("\n Endpoint type not scene");
	return -1;
}

/**
 * @func    element_handle_bluetooth_config_message
 * @brief
 * @param   None
 * @retval  None
 */
int element_handle_bluetooth_config_message(u8 *par, int par_len, mesh_cb_fun_par_t *cb_par)
{
	DBG_ELEMENT_SEND_STR("\n&&&&&&&&&&&&&&&&&& element_handle_bluetooth_config_message: ");
#ifdef  DEBUG_ELEMENT
	foreach(i, par_len) {
		DBG_ELEMENT_SEND_ONE_BYTE_HEX(par[i]);
		DBG_ELEMENT_SEND_STR(" ");
	}
#endif

	SpidMessageType_Enum msg_type = (par[0] >> 6)&0x03;
	u8 spid_cmd = par[0]&0x3F;

	if(msg_type == SPID_MESSAGE_GET) {
		switch(spid_cmd) {
            case SPID_ENDPOINT_TYPE:
                element_handle_message_get_endpoint_type(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_ENDPOINT_NAME:
                element_handle_message_get_endpoint_name(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_ENDPOINT_ICON:
                element_handle_message_get_endpoint_icon(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_SCENE_ENABLE_DISABLE:
                element_handle_message_get_scene_enable_disable(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_SCENE_NAME:
                element_handle_message_get_scene_name(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_SCENE_ICON:
                element_handle_message_get_scene_icon(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_ENDPOINT_VISIBILITY:
            	element_handle_message_get_endpoint_visibility(cb_par->model_idx, &par[1], par_len);
            	break;

            case SPID_ENPOINT_INFO:
            	element_handle_message_get_endpoint_info(cb_par->model_idx, &par[1], par_len);
            	break;

            case SPID_SCENE_INFO:
            	element_handle_message_get_scene_info(cb_par->model_idx, &par[1], par_len);
            	break;

            case SPID_AC_PAR_CONFIGURATION:
            	element_handle_message_get_ac_parameter(cb_par->model_idx, &par[1], par_len);
            	break;

            default:
                DBG_ELEMENT_SEND_STR("\n *** Invalid knob spid_cmd GET: ");
                DBG_ELEMENT_SEND_INT(spid_cmd);
                return -1;
		}
	}
	else if(msg_type == SPID_MESSAGE_SET) {
		int ret = 0;
        switch(spid_cmd) {
            case SPID_ENDPOINT_TYPE:
            	ret = element_handle_message_set_endpoint_type(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_ENDPOINT_NAME:
            	ret = element_handle_message_set_endpoint_name(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_ENDPOINT_ICON:
            	DBG_ELEMENT_SEND_STR("\n SPID_ENDPOINT_ICON");
            	ret = element_handle_message_set_endpoint_icon(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_SCENE_ENABLE_DISABLE:
            	ret = element_handle_message_set_scene_enable_disable(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_SCENE_NAME:
            	ret = element_handle_message_set_scene_name(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_SCENE_ICON:
            	ret = element_handle_message_set_scene_icon(cb_par->model_idx, &par[1], par_len);
                break;

            case SPID_ENDPOINT_VISIBILITY:
            	ret = element_handle_message_set_endpoint_visibility(cb_par->model_idx, &par[1], par_len);
            	break;

            case SPID_AC_PAR_CONFIGURATION:
            	ret = element_handle_message_set_ac_parameter(cb_par->model_idx, &par[1], par_len);
            	break;

            default:
                DBG_ELEMENT_SEND_STR("\n *** Invalid knob spid_cmd SET: ");
                DBG_ELEMENT_SEND_INT(spid_cmd);
                return -1;
		}
        if(ret == 0) {
        	send_led_evt(LED_NOTIFY_CONFIG_SUCCESS);
        }
        else {
        	send_led_evt(LED_NOTIFY_CONFIG_FAILURE);
        }
	}
	return 0;
}

/********************** Endpoint name and endpoint icon **********************/
/**
 * @func    element_store_common_endpoint_par
 * @brief
 * @param   None
 * @retval  None
 */
static void element_store_common_endpoint_par(void)
{
	flash_user_store(&adr_common_endpoint_par_idx, (uint32_t)FLASH_ADR_COMMON_ENDPOINT_PAR,  \
			FLASH_SIZE_COMMON_ENDPOINT_PAR, BLOCK_SIZE_COMMON_ENDPOINT_PAR, (u8*)&common_endpoint_par);
}

/**
 * @func    element_set_ac_common_configuration
 * @brief
 * @param   None
 * @retval  None
 */
static int element_set_ac_common_configuration(u8 idx)
{
	if(idx < ELE_CNT) {
        common_endpoint_par[idx].ac_config_mask.mode  = AC_MODE_MASK_DEFAULT;
        common_endpoint_par[idx].ac_config_mask.fan   = AC_FAN_MASK_DEFAULT;
        common_endpoint_par[idx].ac_config_mask.swing = AC_SWING_MASK_DEFAULT;
        common_endpoint_par[idx].ac_config_mask.temp_min = AC_TEMP_MIN_DEFAULT;
        common_endpoint_par[idx].ac_config_mask.temp_max = AC_TEMP_MAX_DEFAULT;
        common_endpoint_par[idx].ac_config_mask.temp_step = AC_TEMP_STEP_DEFAULT;
        return 0;
	}
	return -1;
}

/**
 * @func    element_store_common_endpoint_par_default
 * @brief
 * @param   None
 * @retval  None
 */
static void element_set_common_endpoint_par_default(u8 idx)
{
	u8 len;
	if(idx <= ELE_CNT) {
        if(idx < RELAY_CNT) {
        	common_endpoint_par[idx].enable = true;
        }
        else {
        	common_endpoint_par[idx].enable = false;
        }
		switch(endpoint_type[idx]) {
            case TYPE_SWITCH:
            {
            	u8 arr[] = { 0xA2, 0x54, 0x25, 0x46, 0x13, 0x24, 0xE4 };  // Switch+space
            	len = sizeof(arr);
                memcpy(common_endpoint_par[idx].name, arr, len);
                common_endpoint_par[idx].icon_id = LIGHT_ICON_ID_SWITCH_DEFAULT;
                break;
            }
            case TYPE_SCENE:
            {
                u8 arr[] = { 0x53, 0x3F, 0x1F, 0x2F, 0x1F };  // Scene
                len = sizeof(arr);
                memcpy(common_endpoint_par[idx].name, arr, len);
                break;
            }

            case TYPE_CCT:
            {
                u8 arr[] = { 112, 112, 163, 228 };  // CCT + space
                len = sizeof(arr);
                memcpy(common_endpoint_par[idx].name, arr, len);
                common_endpoint_par[idx].icon_id = LIGHT_ICON_ID_CCT_DEFAULT;
                break;
            }

            case TYPE_DIM:
            {
            	u8 arr[] = {113, 37, 46, 46, 22, 68, 228 };
                len = sizeof(arr);
                memcpy(common_endpoint_par[idx].name, arr, len);
                common_endpoint_par[idx].icon_id = LIGHT_ICON_ID_DIM_DEFAULT;
                break;
            }

            case TYPE_CURTAIN:
            {
            	u8 arr[] = {112, 71, 68, 70, 00, 37, 47 , 228 };
                len = sizeof(arr);
                memcpy(common_endpoint_par[idx].name, arr, len);
                common_endpoint_par[idx].icon_id = CURTAIN_ICON_ID_DEFAULT;
                break;
            }
                break;

			case TYPE_FAN:
            {
            	u8 arr[] = {127, 00, 47, 228 };
                len = sizeof(arr);
                memcpy(common_endpoint_par[idx].name, arr, len);
                break;
            }

			case TYPE_AIR_CONDITIONER:
            {
            	u8 arr[] = {93, 37, 68, 228, 19, 48, 47, 20, 37, 70, 37, 48, 47, 37, 47, 35, 228 };
                len = sizeof(arr);
                memcpy(common_endpoint_par[idx].name, arr, len);
                // AC common configuration
                element_set_ac_common_configuration(idx);
                break;
            }

			case TYPE_AUDIO:
            {
            	u8 arr[] = {139, 71, 69, 37, 19, 228 };
                len = sizeof(arr);
                memcpy(common_endpoint_par[idx].name, arr, len);
                break;
            }
				
			case TYPE_UNKNOWN:
			default:
				return;
		}
        common_endpoint_par[idx].name[len] = NUMBER_SYMBOL_OFFSET + ((idx+1)/10);
        common_endpoint_par[idx].name[len+1] = NUMBER_SYMBOL_OFFSET + ((idx+1)%10);
        common_endpoint_par[idx].name_len = len+2;
	}
}

/**
 * @func    element_restore_common_endpoint_par
 * @brief
 * @param   None
 * @retval  None
 */
static void element_restore_common_endpoint_par(void)
{
	flash_user_get_flash_index(&adr_common_endpoint_par_idx,  \
			FLASH_ADR_COMMON_ENDPOINT_PAR, FLASH_SIZE_COMMON_ENDPOINT_PAR, BLOCK_SIZE_COMMON_ENDPOINT_PAR, (u8*)&common_endpoint_par);
    flash_user_restore(adr_common_endpoint_par_idx,  \
    		FLASH_ADR_COMMON_ENDPOINT_PAR, BLOCK_SIZE_COMMON_ENDPOINT_PAR, (u8*)&common_endpoint_par);
    if(common_endpoint_par[0].name[0] == TEXT_SYMBOL_UNKNOWN) {
    	foreach(i, ELE_CNT) {
    		element_set_common_endpoint_par_default(i);
    	}
    	element_store_common_endpoint_par();
    }
}

/**
 * @func    element_get_common_endpoint_par
 * @brief
 * @param   None
 * @retval  None
 */
common_endpoint_par_t* element_get_common_endpoint_par(u8 idx)
{
	return &common_endpoint_par[idx];
}

/**
 * @func    element_store_common_scene_par
 * @brief
 * @param   None
 * @retval  None
 */
static void element_store_common_scene_par(void)
{
	DBG_ELEMENT_SEND_STR("\n ****************** element_store_common_scene_par");
	flash_user_store(&adr_common_scene_par_idx, (uint32_t)FLASH_ADR_COMMON_SCENE_PAR,  \
			FLASH_SIZE_COMMON_SCENE_PAR, BLOCK_SIZE_COMMON_SCENE_PAR, (u8*)&common_scene_par);
}

/**
 * @func    element_set_common_scene_par_default
 * @brief
 * @param   None
 * @retval  None
 */
static void element_set_common_scene_par_default(u8 scene_idx)
{
	if(scene_idx < MAX_SCENE_CNT) {
		u8 arr[] = { 162, 19, 22, 47, 22, 228 };  // Scene
		u8 len = sizeof(arr);
		memcpy(common_scene_par[scene_idx].name, arr, len);
		common_scene_par[scene_idx].name[len] = NUMBER_SYMBOL_OFFSET + ((scene_idx+1)/10);
		common_scene_par[scene_idx].name[len+1] = NUMBER_SYMBOL_OFFSET + ((scene_idx+1)%10);
		common_scene_par[scene_idx].name_len = len+2;
		common_scene_par[scene_idx].icon_id = SCENE_ICON_ID_OFFSET;
		if(scene_idx == 0) {
			common_scene_par[scene_idx].is_actived = true;
		}
		else {
			common_scene_par[scene_idx].is_actived = false;
		}
	}
}

/**
 * @func    element_restore_scene_name
 * @brief
 * @param   None
 * @retval  None
 */
static void element_restore_common_scene_par(void)
{
	flash_user_get_flash_index(&adr_common_scene_par_idx,  \
			FLASH_ADR_COMMON_SCENE_PAR, FLASH_SIZE_COMMON_SCENE_PAR, BLOCK_SIZE_COMMON_SCENE_PAR, (u8*)&common_scene_par);
    flash_user_restore(adr_common_scene_par_idx,  \
    		FLASH_ADR_COMMON_SCENE_PAR, BLOCK_SIZE_COMMON_SCENE_PAR, (u8*)&common_scene_par);
    if(common_scene_par[0].name[0] == TEXT_SYMBOL_UNKNOWN) {
		foreach(i, MAX_SCENE_CNT) {
			element_set_common_scene_par_default(i);
		}
		element_store_common_scene_par();
    }
}

/**
 * @func    element_get_common_scene_par
 * @brief
 * @param   None
 * @retval  None
 */
common_scene_par_t* element_get_common_scene_par(u8 scene_index)
{
	if(scene_index < MAX_SCENE_CNT) {
		return &common_scene_par[scene_index];
	}
	return 0;
}

/**********************************************************/

/**
 * @func    get_endpoint_type_follow_model_index
 * @brief
 * @param
 * @retval  None
 */
EndpointType_Enum get_endpoint_type_follow_model_index(u8 model_index)
{
	EndpointType_Enum type = TYPE_UNKNOWN;
	if(model_index < ELE_CNT) {
		type = endpoint_type[model_index];
	}
	return type;
}

/**
 * @func    element_get_all_endpoint_type_bitmask
 * @brief
 * @param   None
 * @retval  None
 */
u16 element_get_all_endpoint_type_bit_mask(void)
{
	u16 bit_mask = 0;
	foreach(i, ELE_CNT) {
		if(endpoint_type[i] <= TYPE_MAX) {
			bit_mask |= (1 << endpoint_type[i]);
		}
	}
	DBG_ELEMENT_SEND_STR("\n element_get_all_endpoint_type_bit_mask: ");
	DBG_ELEMENT_SEND_INT(bit_mask);
	return bit_mask;
}

/**
 * @func    element_store_device_par_delay
 * @brief
 * @param
 * @retval  None
 */
static void element_store_device_par_delay(void)
{
    DBG_ELEMENT_SEND_STR("\n element_store_device_par_delay");
    element_store_device_par();
    CycleFunc_remove(element_store_device_par_delay);
}

/**
 * @func    element_check_store_device_par
 * @brief
 * @param
 * @retval  None
 */
static void element_check_store_device_par(void)
{
    static u32 tmp_time_check_store = 0;
    if(clock_time_exceed_ms(  \
            tmp_time_check_store, CHECK_STORE_DEVICE_PAR_INTERVAL_MS)) {
        if(memcmp(&backup_device_par, &virtual_device_par, sizeof(virtual_device_par_t)) != 0) {
            DBG_ELEMENT_SEND_STR("\n Element par is change, need save: ");
            CycleFunc_add(element_store_device_par_delay,  STORE_DEVICE_PAR_DELAY_MS);
        }
        tmp_time_check_store = clock_time_ms();
    }
}

/*************************************************************************************************/

/**
 * @func    element_refresh_screen
 * @brief
 * @param
 * @retval  None
 */
static void element_refresh_screen(u8 idx)
{
    if(pvElement_handle_refresh_sceen != NULL) {
        pvElement_handle_refresh_sceen(idx);
    }
}

/*
 * SET MESSAGE
 */
/**
 * @func    element_handle_on_off_set
 * @brief
 * @param
 * @retval  None
 */
int element_handle_on_off_set(u8 model_idx, u8* par, int par_len)
{
    mesh_cmd_g_onoff_set_t *p_set = (mesh_cmd_g_onoff_set_t *)par;
    if(p_set->onoff >= G_ONOFF_RSV) {
        return -1;
    }
    DBG_ELEMENT_SEND_STR("\n G_ONOFF_SET: ");
    DBG_ELEMENT_SEND_INT(model_idx);

	EndpointType_Enum type =  \
			get_endpoint_type_follow_model_index(model_idx);
    if(type == TYPE_SWITCH) {
        u8 idx = model_idx;
		virtual_device_par.switch_par.onoff_st[model_idx] = p_set->onoff&0x01;
		relay_set_target_state(idx, virtual_device_par.switch_par.onoff_st[model_idx]);
		element_refresh_screen(model_idx);
		//element_response_switch_status(model_idx);
		DBG_ELEMENT_SEND_STR("\n > Switch on_off SET: ");
		DBG_ELEMENT_SEND_INT(p_set->onoff);
    }
    else if(type == TYPE_CCT) {
        if(p_set->onoff == G_ON) {
            virtual_device_par.cct.brightness[model_idx] = virtual_device_par.cct.brightness_non_zz[model_idx];
        }
        else {
            virtual_device_par.cct.brightness[model_idx] = 0;
        }
        element_refresh_screen(model_idx);
        element_response_cct_status(model_idx);
        DBG_ELEMENT_SEND_STR("\n > CCT on_off SET: ");
        DBG_ELEMENT_SEND_INT(p_set->onoff);
    }
    else if(type == TYPE_DIM) {
    	if(p_set->onoff == G_ON) {
    		 virtual_device_par.dim.level[model_idx] = virtual_device_par.dim.level_non_zz[model_idx];
		}
		else {
			 virtual_device_par.dim.level[model_idx] = 0;
		}
		element_refresh_screen(model_idx);
		element_response_dim_status(model_idx);
		DBG_ELEMENT_SEND_STR("\n > DIM on_off SET: ");
		DBG_ELEMENT_SEND_INT(p_set->onoff);
    }
    else if(type == TYPE_FAN) {
    	if(p_set->onoff == G_ON) {
    		 virtual_device_par.fan_par.level[model_idx] = virtual_device_par.fan_par.level_non_zz[model_idx];
		}
		else {
			 virtual_device_par.fan_par.level[model_idx] = FAN_OFF;
		}
		element_refresh_screen(model_idx);
		element_response_fan_level(model_idx, virtual_device_par.fan_par.level[model_idx]);
    }
    return 0;
}

/**
 * @func    is_valid_temp
 * @brief
 * @param
 * @retval  None
 */
u16 convert_host_temp_to_ele_temp(u16 temp)
{
    u16 tmp;
    tmp =  (u16)((u32)((temp - CTL_TEMP_MIN) * (KNOB_TEMPERATURE_MAX - KNOB_TEMPERATURE_MIN))   \
                        / (CTL_TEMP_MAX - CTL_TEMP_MIN) + KNOB_TEMPERATURE_MIN);

    DBG_ELEMENT_SEND_STR("\n Temp_ELE: ");
    DBG_ELEMENT_SEND_INT(tmp);

    if(tmp < KNOB_TEMPERATURE_MIN) {
        tmp = KNOB_TEMPERATURE_MIN;
    }
    else if(tmp > KNOB_TEMPERATURE_MAX) {
        tmp = KNOB_TEMPERATURE_MAX;
    }
    return tmp;
}

/**
 * @func    element_handle_ctl_set
 * @brief
 * @param
 * @retval  None
 */
int element_handle_ctl_set(u8 model_idx, u8* par, int par_len)
{
    DBG_ELEMENT_SEND_INT(model_idx);
    mesh_cmd_light_ctl_set_t* p_set = (mesh_cmd_light_ctl_set_t*)par;
    if(p_set->temp < CTL_TEMP_MIN || p_set->temp > CTL_TEMP_MAX) {
        DBG_ELEMENT_SEND_STR("\n CCT Temperature Invalid");
        return -1;
    }
    if(model_idx < ELE_CNT) {
        virtual_device_par.cct.brightness[model_idx] = p_set->lightness;
        virtual_device_par.cct.temperature[model_idx] = p_set->temp;
        element_refresh_screen(model_idx);
        element_response_cct_status(model_idx);
        return 0;
    }
    return -1;
}

/**
 * @func    element_handle_light_temp_set
 * @brief
 * @param
 * @retval  None
 */
int element_handle_light_temp_set(u8 model_idx, u8* par, int par_len)
{
    DBG_ELEMENT_SEND_STR("\n TEMP SET: ");

    return 0;
}

/**
 * @func    element_handle_lightness_set
 * @brief
 * @param
 * @retval  None
 */
int element_handle_lightness_set(u8 model_idx, u8* par, int par_len)
{
    mesh_cmd_lightness_set_t* p_set = (mesh_cmd_lightness_set_t*)par;

    DBG_ELEMENT_SEND_STR("\n LIGHTNESS SET: ");
    DBG_ELEMENT_SEND_INT(p_set->lightness);

    if(model_idx < ELE_CNT) {
    	if(endpoint_type[model_idx] == TYPE_DIM) {
			virtual_device_par.dim.level[model_idx] = p_set->lightness;
			element_response_dim_status(model_idx);

			DBG_ELEMENT_SEND_STR("\n ---TYPE_DIM---");

    	}
    	else if(endpoint_type[model_idx] == TYPE_CCT) {
    		virtual_device_par.cct.brightness[model_idx] = p_set->lightness;
			element_response_cct_status(model_idx);
    	}
    	else {
    		return -1;
    	}
		element_refresh_screen(model_idx);
		return 0;
    }
    return -1;
}

/**
 * @func    element_handle_hsl_set
 * @brief
 * @param
 * @retval  None
 */
int element_handle_hsl_set(u8 model_idx, u8* par, int par_len)
{
    DBG_ELEMENT_SEND_STR("\n HSL SET: ");

    return 0;
}


/**
 * @func    convert_host_level_to_fan_level
 * @brief
 * @param
 * @retval  None
 */
static FanLevel_Enum convert_host_level_to_fan_level(u8 host_level)
{
    if(host_level < host_fan_arr[0]) {
        return FAN_OFF;
    }
    for(int i = sizeof(host_fan_arr)-1; i >= 0; i--) {
        if(host_level >= host_fan_arr[i]) {
            return (u8)i+1;
        }
    }
    return FAN_OFF;
}

/**
 * @func    convert_host_level_to_fan_level
 * @brief
 * @param
 * @retval  None
 */
static FanLevel_Enum convert_fan_level_to_host_fan_level(u8 fan_level)
{
    u8 host_level = HOST_FAN_OFF;
    switch(fan_level)
    {
        case FAN_LEVEL_1:
            host_level = HOST_FAN_LOW;
            break;

        case FAN_LEVEL_2:
            host_level = HOST_FAN_MID;
            break;

        case FAN_LEVEL_3:
            host_level = HOST_FAN_HIGH;
            break;

        case FAN_LEVEL_4:
            host_level = HOST_FAN_VERY_HIGH;
            break;
    }
    return host_level;
}


/**
 * @func    element_handle_level_set
 * @brief
 * @param
 * @retval  None
 */
int element_handle_level_set(u8 idx, u8* par, int par_len)
{
    DBG_ELEMENT_SEND_STR("\n *** Level SET: ");
    DBG_ELEMENT_SEND_INT(idx);

    vd_cmd_g_level_set_t* p_set = (vd_cmd_g_level_set_t*)par;
    EndpointType_Enum type = get_endpoint_type_follow_model_index(idx);
    if(type == TYPE_CURTAIN) {
    	DBG_ELEMENT_SEND_STR("\n TYPE_CURTAIN");
        if(p_set->type == CURTAIN_CMD_TYPE_RUN) {
            if(idx < ELE_CNT)  {
                virtual_device_par.curtain_par.level[idx] = p_set->level;
                virtual_device_par.curtain_par.previous_level[idx] = virtual_device_par.curtain_par.level[idx];
#if !ENABLE_SHOW_PRESENT_CURTAIN_LEVEL
                if(element_get_current_index() == idx) {
                    element_refresh_screen(idx);
                }
#endif
                Curtain_ControlCurtainByApp(idx,  \
                		CURTAIN_CMD_TYPE_RUN, virtual_device_par.curtain_par.level[idx]);
                DBG_ELEMENT_SEND_STR("\n CURTAIN_CMD_TYPE_RUN: ");
                DBG_ELEMENT_SEND_INT(idx);
                return 0;
            }
        }
        else if(p_set->type == CURTAIN_CMD_TYPE_STOP) {
            #if CONTROL_CURTAIN_INTERNAL_ENABLE
            Curtain_ControlCurtainByApp(idx, CURTAIN_CMD_TYPE_STOP, virtual_device_par.curtain_par.level[idx]);
            DBG_ELEMENT_SEND_STR("\n CURTAIN_CMD_TYPE_STOP: ");
            DBG_ELEMENT_SEND_INT(idx);
            #endif
        }
    }
    else if(type == TYPE_FAN) {
        FanLevel_Enum fan_level = convert_host_level_to_fan_level(p_set->level);
        virtual_device_par.fan_par.level[idx] = fan_level;
        if(fan_level != FAN_OFF) {
            virtual_device_par.fan_par.level_non_zz[idx] = fan_level;
        }
        element_response_fan_level(idx, virtual_device_par.fan_par.level[idx]);
        element_refresh_screen(idx);
        DBG_ELEMENT_SEND_STR("\n *** FAN SET: ");
        DBG_ELEMENT_SEND_INT(fan_level);
    }
    return -1;
}

/**
 * @func    convert_host_temp_to_device_temp
 * @brief
 * @param
 * @retval  None
 */
static bool convert_host_temp_to_device_temp(u16 host_temp, u16 *p_temp)
{
    if(host_temp < AIR_TEMP_MIN) {
        *p_temp = AIR_TEMP_MIN;
    }
    else if(host_temp > AIR_TEMP_MAX) {
        *p_temp = AIR_TEMP_MAX;
    }
    else {
        *p_temp = host_temp;
    }
    return true;
}

/**
 * @func    convert_host_fan_to_device_fan
 * @brief
 * @param
 * @retval  None
 */
static bool convert_host_fan_to_device_fan(HostFanVolume_Enum host_fan_volume, FanVolume_Enum *p_fan_volume)
{
    switch(host_fan_volume)
    {
        case HOST_FAN_VOL_LOW:
            *p_fan_volume = FAN_VOL_LOW;
            break;

        case HOST_FAN_VOL_MEDIUM:
            *p_fan_volume = FAN_VOL_MID;
            break;

        case HOST_FAN_VOL_HIGH:
            *p_fan_volume = FAN_VOL_HIGH;
            break;

        default: *p_fan_volume = FAN_VOL_LOW;
    }
    return true;
}

/**
 * @func    convert_host_temp_to_device_temp
 * @brief
 * @param
 * @retval  None
 */
static bool convert_host_swing_to_device_swing(u8 host_swing, u8 *p_swing)
{
    switch(host_swing) {
        case HOST_FAN_DIR_SWING:
            *p_swing = SWING_AUTO;
            break;

        case HOST_FAN_DIR_P0:
            *p_swing = SWING_P0;
            break;

        case HOST_FAN_DIR_P1:
            *p_swing = SWING_P1;
            break;

        case HOST_FAN_DIR_P2:
            *p_swing = SWING_P2;
            break;

        case HOST_FAN_DIR_P3:
            *p_swing = SWING_P3;
            break;

        case HOST_FAN_DIR_P4:
            *p_swing = SWING_P4;

            break;
        case HOST_FAN_DIR_STOP:
            *p_swing = SWING_STOP;
            break;

        default: return false;
    }
    return true;
}

/**
 * @func    convert_host_mode_to_device_mode
 * @brief
 * @param
 * @retval  None
 */
static bool convert_host_mode_to_device_mode(u8 host_mode, u8 *p_mode)
{
    switch(host_mode) {
        case HOST_OPERATION_MODE_FAN:
            *p_mode = AIR_MODE_FAN;
            break;

        case HOST_OPERATION_MODE_HEATING:
            *p_mode = AIR_MODE_HEAT;
            break;

        case HOST_OPERATION_MODE_COOLING:
            *p_mode = AIR_MODE_COOL;
            break;

        case HOST_OPERATION_MODE_AUTO:
            *p_mode = AIR_MODE_AUTO;
            break;

        case HOST_OPERATION_MODE_DRY:
            *p_mode = AIR_MODE_DRY;
            break;

        default: return false;
    }
    return true;
}

/**
 * @func    convert_host_fan_to_device_fan
 * @brief
 * @param
 * @retval  None
 */
static HostFanVolume_Enum convert_device_fan_to_host_fan(FanVolume_Enum fan_volume)
{
    u8 host_fan = HOST_FAN_VOL_AUTO;
    switch(fan_volume)
    {
        case FAN_VOL_LOW:
            host_fan = HOST_FAN_VOL_LOW;
            break;

        case  FAN_VOL_MID:
            host_fan = HOST_FAN_VOL_MEDIUM;
            break;

        case  FAN_VOL_HIGH:
            host_fan = HOST_FAN_VOL_HIGH;
            break;
    }
    return host_fan;
}

/**
 * @func    convert_host_temp_to_device_temp
 * @brief
 * @param
 * @retval  None
 */
static HostFanDir_Enum convert_device_swing_to_host_swing(SwingMode_Enum swing)
{
    HostFanDir_Enum host_swing = HOST_FAN_DIR_SWING;
    switch(swing) {
        case  SWING_P0:
            host_swing = HOST_FAN_DIR_P0;
            break;

        case  SWING_P1:
            host_swing = HOST_FAN_DIR_P1;
            break;

        case SWING_P2:
            host_swing = HOST_FAN_DIR_P2;
            break;

        case SWING_P3:
            host_swing = HOST_FAN_DIR_P3;
            break;

        case SWING_P4:
            host_swing = HOST_FAN_DIR_P4;

            break;
        case SWING_STOP:
            host_swing = HOST_FAN_DIR_STOP;
            break;

        case SWING_AUTO:
        	host_swing = HOST_FAN_DIR_SWING;
        	break;
    }
    return host_swing;
}

/**
 * @func    convert_device_mode_to_host_mode
 * @brief
 * @param
 * @retval  None
 */
static HostOperationMode_Enum convert_device_mode_to_host_mode(AirMode_Enum mode)
{
    HostOperationMode_Enum host_mode = HOST_OPERATION_MODE_COOLING;
    switch(mode) {
        case AIR_MODE_FAN:
            host_mode = HOST_OPERATION_MODE_FAN;
            break;

        case AIR_MODE_HEAT:
            host_mode = HOST_OPERATION_MODE_HEATING;
            break;

        case AIR_MODE_COOL:
            host_mode = HOST_OPERATION_MODE_COOLING;
            break;

        case AIR_MODE_AUTO:
            host_mode = HOST_OPERATION_MODE_AUTO;
            break;

        case AIR_MODE_DRY:
            host_mode = HOST_OPERATION_MODE_DRY;
            break;

    }
    return host_mode;
}

/**
 * @func    element_handle_config_node_set
 * @brief
 * @param
 * @retval  None
 */
static int element_handle_config_node_set(u8 model_idx, u8* par, int par_len)
{
	if(endpoint_type[model_idx] == TYPE_AIR_CONDITIONER) {
        config_node_t *vd_config_node = (config_node_t*)par;
        if(vd_config_node->cmd_id != VD_CONFIG_AIR_CONDITIONER) {
            return -1;
        }
        if(vd_config_node->message_type == CONFIG_NODE_SET) {
            ac_control_set_t *ac_control_set = (ac_control_set_t*)&vd_config_node->data;
            u16 device_temp;
            u8 device_fan_volume, device_swing, device_mode;
            if(convert_host_fan_to_device_fan(
                    ac_control_set->fan_volume, &device_fan_volume) == false) {
                return -1;
            }
            if(convert_host_temp_to_device_temp(
                    ac_control_set->temp, &device_temp) == false) {
                return -1;
            }
            if(convert_host_mode_to_device_mode(
            		ac_control_set->onoff_mode.mode, &device_mode) == false) {
                return -1;
            }
            if(convert_host_swing_to_device_swing(
                    ac_control_set->fan_dir, &device_swing) == false) {
                return -1;
            }
            virtual_device_par.air.on_off[model_idx] = ac_control_set->onoff_mode.onoff;
            virtual_device_par.air.temp[model_idx] = device_temp;
            virtual_device_par.air.fan[model_idx] = device_fan_volume;
            virtual_device_par.air.swing[model_idx] = device_swing;
            virtual_device_par.air.mode[model_idx] = device_mode;


            if(ac_control_set->onoff_mode.onoff == G_OFF  \
            		&& virtual_device_par.air.display_mode[model_idx] != DISPLAY_AIR_MAIN) {
            	virtual_device_par.air.display_mode[model_idx] = DISPLAY_AIR_MAIN;
            }

            element_refresh_screen(model_idx);
            element_response_ac_status(model_idx);
        }
        else if(vd_config_node->message_type == CONFIG_NODE_GET){
            element_response_ac_status(model_idx);
        }
        return 0;
    }
    return -1;
}
/**
 * @func    element_handle_speaker_set
 * @brief
 * @param
 * @retval  None
 */
static int element_handle_speaker_set(u8 model_idx, u8* par, int par_len)
{
    if(model_idx >= ELE_CNT) {
        return -1;
    }
    if(endpoint_type[model_idx] != TYPE_AUDIO) {
    	return -1;
    }
    DBG_ELEMENT_SEND_STR("\n *** element_handle_speaker_set: ");
    speaker_set_t* speaker_set = (speaker_set_t*)par;
    if(speaker_set->par_id == SPEAKER_PLAYBACK_CFG_ID) {
        switch(speaker_set->data)
        {
            case PLAYBACK_CONTROL_PAUSE:
                virtual_device_par.audio_par.state[model_idx] = AUDIO_PAUSE;
                break;

            case PLAYBACK_CONTROL_PLAY:
                virtual_device_par.audio_par.state[model_idx] = AUDIO_PLAY;
                break;

            case PLAYBACK_CONTROL_NEXT:
                element_send_audio_control_to_host(model_idx, HOST_AUDIO_NEXT);
                return 0;

            case PLAYBACK_CONTROL_PREVIOUS:
                element_send_audio_control_to_host(model_idx, HOST_AUDIO_PREVIOUS);
                return 0;

            default: return -1;
        }
        element_refresh_screen(model_idx);
        element_response_audio_status(model_idx);
        return 0;
    }
    else if(speaker_set->par_id == SPEAKER_VOLUME_CFG_ID) {
        DBG_ELEMENT_SEND_STR("\n ***Volume control");

        volume_and_mute_t* p_set = (volume_and_mute_t*)&speaker_set->data;
        u8 volume = p_set->volume;
        u8 mute = p_set->mute;
        if(is_in_range(volume, AUDIO_VOLUME_MIN, AUDIO_VOLUME_MAX)) {
            virtual_device_par.audio_par.volume[model_idx] = volume;
        }
        if(mute == AUDIO_UNMUTE || mute == AUDIO_MUTE) {
            virtual_device_par.audio_par.mute[model_idx] = mute;
        }
        element_refresh_screen(model_idx);
        element_response_audio_volume(model_idx);
        return 0;
    }
    return -1;
}

/**
 * @func    element_response_status_to_host
 * @brief
 * @param
 * @retval  None
 */
static int element_response_status_to_host(u16 op, u8 model_idx, u8* par, u8 par_len)
{
	// TODO
    if(par_len < KNOB_PAR_LEN_MAX) {
        knob_response_t knob_response;
        u8 head_len = (u8)(sizeof(knob_response_t) - KNOB_PAR_LEN_MAX);
        swap16((u8*)&knob_response.op, (u8*)&op);
        knob_response.model_idx = model_idx;
        knob_response.par_len = par_len;
        memcpy(knob_response.par, par, par_len);
        // Serial_cmdSendUnknownCmd(SCI_BLUETOOTH, CMD_ID_KNOB_RESPONSE, (u8*)&knob_response, head_len + par_len);
        knob_handle_response_message_from_mcu((u8*)&knob_response, head_len + par_len);
        return 0;
    }
    return -1;
}

/**
 * @func    element_response_switch_status
 * @brief
 * @param
 * @retval  None
 */
static int element_response_switch_status(u8 idx)
{
	if(idx < ELE_CNT) {
		return element_response_status_to_host(
					   G_ONOFF_STATUS,
					   idx,
					   (u8*)&virtual_device_par.switch_par.onoff_st[idx],
					   1
				   );
	}
	return -1;
}

/**
 * @func    element_response_cct_status
 * @brief
 * @param
 * @retval  None
 */
static int element_response_cct_status(u8 idx)
{
	if(idx < ELE_CNT) {
		mesh_cmd_light_ctl_st_t mesh_cmd_light_ctl_st;
		mesh_cmd_light_ctl_st.present_lightness = virtual_device_par.cct.brightness[idx];
		mesh_cmd_light_ctl_st.present_temp = virtual_device_par.cct.temperature[idx];

		DBG_ELEMENT_SEND_STR("\n ###### element_response_cct_status: ");
		DBG_ELEMENT_SEND_INT(idx);
		DBG_ELEMENT_SEND_STR(", ");
		DBG_ELEMENT_SEND_INT(mesh_cmd_light_ctl_st.present_lightness);

		DBG_ELEMENT_SEND_STR(", ");
		DBG_ELEMENT_SEND_INT(mesh_cmd_light_ctl_st.present_temp);


		return element_response_status_to_host(
					   LIGHT_CTL_STATUS,
					   idx,
					   (u8*)&mesh_cmd_light_ctl_st,
					   sizeof(mesh_cmd_light_ctl_st_t)
				   );
	}
	return -1;
}


/**
 * @func    element_handle_ctl_get
 * @brief
 * @param
 * @retval  None
 */
int element_handle_on_off_get(u8 model_idx, u8* par, int par_len)
{
	if(model_idx < ELE_CNT) {
		DBG_ELEMENT_SEND_STR("\n OnOff GET: ");
		u8 on_off_st = G_ON;
		if(endpoint_type[model_idx] == TYPE_SWITCH) {
			on_off_st = virtual_device_par.switch_par.onoff_st[model_idx];
		}
		else if(endpoint_type[model_idx] == TYPE_DIM) {
			if(virtual_device_par.dim.level[model_idx] == LUM_OFF) {
				on_off_st = G_OFF;
			}
		}
		else if(endpoint_type[model_idx] == TYPE_CCT) {
			if(virtual_device_par.cct.brightness[model_idx] == LUM_OFF) {
				on_off_st = G_OFF;
			}
		}
		else if(endpoint_type[model_idx] == TYPE_FAN) {
			if(virtual_device_par.fan_par.level[model_idx] == FAN_OFF) {
				on_off_st = G_OFF;
			}
		}
		else {
			return -1;
		}
		return mesh_tx_cmd_rsp(
				G_ONOFF_STATUS, &on_off_st, 1,
				ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
			);
	}
	return -1;
}

/**
 * @func    element_handle_ctl_get
 * @brief
 * @param
 * @retval  None
 */
int element_handle_ctl_get(u8 model_idx, u8* par, int par_len)
{
	if(model_idx < ELE_CNT) {
		DBG_ELEMENT_SEND_STR("\n CTL GET: ");
		element_response_cct_status(model_idx);
		return 0;
	}
	return -1;
}

/**
 * @func    element_response_dim_status
 * @brief
 * @param
 * @retval  None
 */
static int element_response_dim_status(u8 idx)
{
	if(idx < ELE_CNT) {
		mesh_cmd_lightness_st_t mesh_cmd_lightness_st;
		mesh_cmd_lightness_st.present =  virtual_device_par.dim.level[idx];
		return element_response_status_to_host(
				       LIGHTNESS_STATUS,
					   idx,
					   (u8*)&mesh_cmd_lightness_st,
					   sizeof(mesh_cmd_lightness_st.present)
				   );
	}
	return -1;
}

/**
 * @func    element_handle_lightness_get
 * @brief
 * @param
 * @retval  None
 */
int element_handle_lightness_get(u8 model_idx, u8* par, int par_len)
{
    DBG_ELEMENT_SEND_STR("\n Lightness GET: ");
    if(model_idx < ELE_CNT) {
    	if(endpoint_type[model_idx] == TYPE_DIM) {
			element_response_dim_status(model_idx);
    	}
    	else if(endpoint_type[model_idx] == TYPE_CCT) {
			mesh_cmd_lightness_st_t mesh_cmd_lightness_st;
			mesh_cmd_lightness_st.present = virtual_device_par.cct.brightness[model_idx];
			return mesh_tx_cmd_rsp(
					LIGHTNESS_STATUS, (u8*)&mesh_cmd_lightness_st, sizeof(mesh_cmd_lightness_st.present),
					ele_adr_primary + model_idx, GATEWAY_UNICAST_ADDR, 0, 0
				);
    	}
		return 0;
    }
    return 0;
}

/**
 * @func    element_response_curtain_level
 * @brief
 * @param
 * @retval  None
 */
static int element_response_curtain_level(u8 model_idx, u8 present, u8 target, CutainState_enum st)
{
    DBG_ELEMENT_SEND_STR("\n element_response_curtain_level: ");
    DBG_ELEMENT_SEND_INT(model_idx);

    vd_cmd_g_level_status_t vd_cmd_g_level_status;
    memset(&vd_cmd_g_level_status, 0, sizeof(vd_cmd_g_level_status_t));
    vd_cmd_g_level_status.state = st;
    vd_cmd_g_level_status.present_level = present;
    vd_cmd_g_level_status.target_level = target;

    return element_response_status_to_host(
                   G_LEVEL_STATUS,
                   model_idx,
                   (u8*)&vd_cmd_g_level_status,
                   sizeof(vd_cmd_g_level_status_t)
               );
}

/**
 * @func    ac_prepare_ac_control_response
 * @brief
 * @param
 * @retval  None
 */
int ac_response_ac_status_to_network(u8 idx)
{
	if(idx < ELE_CNT) {
		ac_control_rsp_t ac_control_rsp;
		ac_control_rsp.cmd_id = VD_CONFIG_AIR_CONDITIONER;
		ac_control_rsp.onoff_mode.onoff = virtual_device_par.air.on_off[idx];
		ac_control_rsp.onoff_mode.mode =  \
				convert_device_mode_to_host_mode(virtual_device_par.air.mode[idx]);
		ac_control_rsp.fan_dir =  \
				convert_device_swing_to_host_swing(virtual_device_par.air.swing[idx]);
		ac_control_rsp.fan_volume =  \
				convert_device_fan_to_host_fan(virtual_device_par.air.fan[idx]);
		ac_control_rsp.temp = virtual_device_par.air.temp[idx];
		ac_control_rsp.temp_room = ac_control_rsp.temp;

		mesh_tx_cmd_rsp(
				VD_CONFIG_NODE_STATUS,
				(u8*)&ac_control_rsp,
				sizeof(ac_control_rsp_t),
				ele_adr_primary + idx,
				GATEWAY_UNICAST_ADDR,
				0,
				0
			);
	}
	return -1;
}

/**
 * @func    element_response_ac_status
 * @brief
 * @param
 * @retval  None
 */
int element_response_ac_status(u8 idx)
{
	if(idx < ELE_CNT) {
		ac_control_rsp_t ac_control_rsp;
		ac_control_rsp.cmd_id = VD_CONFIG_AIR_CONDITIONER;
		ac_control_rsp.onoff_mode.onoff = virtual_device_par.air.on_off[idx];
		ac_control_rsp.onoff_mode.mode =  \
				convert_device_mode_to_host_mode(virtual_device_par.air.mode[idx]);
		ac_control_rsp.fan_dir =  \
				convert_device_swing_to_host_swing(virtual_device_par.air.swing[idx]);
		ac_control_rsp.fan_volume =  \
				convert_device_fan_to_host_fan(virtual_device_par.air.fan[idx]);
		ac_control_rsp.temp = virtual_device_par.air.temp[idx];
		ac_control_rsp.temp_room = ac_control_rsp.temp;
		return element_response_status_to_host(
						   ELE_CONFIG_NODE_STATUS,
						   idx,
						   (u8*)&ac_control_rsp,
						   sizeof(ac_control_rsp_t)
					   );
	}
	return -1;
}

/**
 * @func    element_response_fan_level
 * @brief
 * @param
 * @retval  None
 */
static int element_response_fan_level(u8 model_idx, u8 fan_level)
{
    DBG_ELEMENT_SEND_STR("\n element_response_fan_level");
    u8 host_level = convert_fan_level_to_host_fan_level(fan_level);
    return element_response_status_to_host(
                   G_LEVEL_STATUS,
                   model_idx,
                   (u8*)&host_level,
                   sizeof(host_level)
               );
}

/**
 * @func    element_handle_level_get
 * @brief
 * @param
 * @retval  None
 */
int element_handle_level_get(u8 model_idx, u8* par, int par_len)
{
	if(model_idx < ELE_CNT)  {
		if(endpoint_type[model_idx] == TYPE_CURTAIN) {
			element_response_curtain_level(model_idx,  \
					virtual_device_par.curtain_par.level[model_idx], virtual_device_par.curtain_par.level[model_idx], ST_STOPED);

		}
		else if(endpoint_type[model_idx] == TYPE_FAN) {
			element_response_fan_level(model_idx, virtual_device_par.fan_par.level[model_idx]);
		}
	}
    return 0;
}


/**
 * @func    element_send_audio_control_to_host
 * @brief
 * @param
 * @retval  None
 */
static int element_send_audio_control_to_host(u8 idx, HostAudiState_Enum control_state)
{
    speaker_status_rsp_t speaker_status_rsp;
    speaker_status_rsp.par_id = 0x01;
    speaker_status_rsp.run_mode = RUN_MODE_SD_CARD;
    speaker_status_rsp.state = control_state;
    return element_response_status_to_host(
                   VD_LIGHT_SPEAKER_STATUS,
                   idx,
                   (u8*)&speaker_status_rsp,
                   sizeof(speaker_status_rsp_t)
               );
}

/**
 * @func    element_response_audio_status
 * @brief
 * @param
 * @retval  None
 */
static int element_response_audio_volume(u8 idx)
{
	if(idx >= ELE_CNT) {
		return -1;
	}
    u8 rsp[3];
    rsp[0] = SPEAKER_VOLUME_CFG_ID;
    rsp[1] = virtual_device_par.audio_par.volume[idx];
    rsp[2] = virtual_device_par.audio_par.mute[idx];
    return element_response_status_to_host(
                   VD_LIGHT_SPEAKER_STATUS,
                   idx,
                   (u8*)&rsp,
                   sizeof(rsp)
               );
}

/**
 * @func    element_response_audio_volume_delay
 * @brief
 * @param
 * @retval  None
 */
static void element_response_audio_volume_delay(void)
{
    element_response_audio_volume(virtual_device_par.audio_par.idx);
    CycleFunc_remove(element_response_audio_volume_delay);
}

/**
 * @func    element_response_audio_status
 * @brief
 * @param
 * @retval  None
 */
static int element_response_audio_status(u8 idx)
{
    speaker_status_rsp_t speaker_status_rsp;
    speaker_status_rsp.par_id = SPEAKER_PLAYBACK_CFG_ID;
    speaker_status_rsp.run_mode = RUN_MODE_SD_CARD;
    if(virtual_device_par.audio_par.state[idx] == AUDIO_PAUSE) {
        speaker_status_rsp.state = HOST_AUDIO_PAUSE;
    }
    else if( virtual_device_par.audio_par.state[idx] == AUDIO_PLAY) {
        speaker_status_rsp.state = HOST_AUDIO_RUNNING;
    }
    else {
        return -1;
    }
    return element_response_status_to_host(
                   VD_LIGHT_SPEAKER_STATUS,
                   idx,
                   (u8*)&speaker_status_rsp,
                   sizeof(speaker_status_rsp_t)
               );
}

#ifdef DEBUG_ELEMENT

/**
 * @func    calculator_position
 * @brief
 * @param
 * @retval  None
 */
static void calculator_position(u16 x_pos, u16 y_pos)
{
    static u16 x_min = 0xFFFF, x_max = 0xFFFF;
    static u16 y_min = 0xFFFF, y_max = 0xFFFF;

    if(x_min == 0xFFFF || x_min > x_pos) {
        x_min = x_pos;
    }
    if(x_max == 0xFFFF || x_max < x_pos) {
        x_max = x_pos;
    }
    if(y_min == 0xFFFF || y_min > y_pos) {
        y_min = y_pos;
    }
    if(y_max == 0xFFFF || y_max < y_pos) {
        y_max = y_pos;
    }
    DBG_ELEMENT_SEND_STR("\n ...X_POS: ");
    DBG_ELEMENT_SEND_INT(x_pos);
    DBG_ELEMENT_SEND_STR(", ");
    DBG_ELEMENT_SEND_INT(x_min);
    DBG_ELEMENT_SEND_STR(", ");
    DBG_ELEMENT_SEND_INT(x_max);

    DBG_ELEMENT_SEND_STR("\n ...Y_POS: ");
    DBG_ELEMENT_SEND_INT(y_pos);

    DBG_ELEMENT_SEND_STR(", ");
    DBG_ELEMENT_SEND_INT(y_min);
    DBG_ELEMENT_SEND_STR(", ");
    DBG_ELEMENT_SEND_INT(y_max);
}
#endif

/**
 * @func    is_in_range_power_button
 * @brief
 * @param
 * @retval  None
 */
static bool is_in_range_power_button(u16 x, u16 y)
{
	if(is_in_range(x, POWER_X_MIN, POWER_X_MAX) && is_in_range(y, POWER_Y_MIN, POWER_Y_MAX)) {
		return true;
	}
	return false;
}


/**
 * @func    element_handle_next_scene
 * @brief
 * @param
 * @retval  None
 */
static bool element_handle_next_scene(void)
{
	u8 search_arr[MAX_SCENE_CNT-1];
	u8 index = 0;
	int count = virtual_device_par.scene_par.current_scene_id;
	while(++count < MAX_SCENE_CNT) {
		if(index < sizeof(search_arr)) {
			search_arr[index] = count;
			index++;
		}
	}
	count = -1;
	while(++count < virtual_device_par.scene_par.current_scene_id) {
		if(index < sizeof(search_arr)) {
			search_arr[index] = count;
			index++;
		}
	}
	foreach(i, MAX_SCENE_CNT-1) {
		if(common_scene_par[search_arr[i]].is_actived == true) {
			virtual_device_par.scene_par.current_scene_id = search_arr[i];
			return true;
		}
	}
	return false;
}

/**
 * @func    element_handle_previous_scene
 * @brief
 * @param
 * @retval  None
 */
static bool element_handle_previous_scene(void)
{
	u8 search_arr[MAX_SCENE_CNT-1];
	u8 index = 0;
	int count = virtual_device_par.scene_par.current_scene_id;
	while(--count >= 0) {
		if(index < sizeof(search_arr)) {
			search_arr[index] = count;
			index++;
		}
	}
	count = MAX_SCENE_CNT;
	while(--count > virtual_device_par.scene_par.current_scene_id) {
		if(index < sizeof(search_arr)) {
			search_arr[index] = count;
			index++;
		}
	}
	foreach(i, MAX_SCENE_CNT-1) {
		if(common_scene_par[search_arr[i]].is_actived == true) {
			virtual_device_par.scene_par.current_scene_id = search_arr[i];
			return true;
		}
	}
	return false;
}

/**
 * @func    scene_get_scene_position
 * @brief
 * @param
 * @retval  None
 */
bool scene_get_scene_position(u8 scene_index, u8* total_scene, u8 *pos)
{
	u8 count = 0;
	u8 scene_arr[MAX_SCENE_CNT];
	foreach(i, MAX_SCENE_CNT) {
		if(common_scene_par[i].is_actived == true) {
			scene_arr[count] = i;
			count++;
		}
	}
	*total_scene = count;
	foreach(i, count) {
		if(scene_index == scene_arr[i]) {
			*pos = i;
			return true;
		}
	}
	return false;
}

/**
 * @func    scene_handle_knob_event
 * @brief
 * @param
 * @retval  None
 */
static FunctionStatus_Enum scene_handle_knob_event( \
                KnobEvent_Enum event, u8 times, u16 x_pos, u16 y_pos)
{
	if(is_all_scene_inactive() == true) {
		return RT_CANT_HANDLE;
	}
	if(event == EVENT_TOUCH_SHORT_PRESS)
	{
		#ifdef DEBUG_ELEMENT
		calculator_position(x_pos, y_pos);
		#endif
		if(is_in_range(x_pos, SCENE_ACTIVE_BTN_X_MIN, SCENE_ACTIVE_BTN_X_MAX)	\
					&& is_in_range(y_pos, SCENE_ACTIVE_BTN_Y_MIN, SCENE_ACTIVE_BTN_Y_MAX)) {
			DBG_ELEMENT_SEND_STR("\n *** SCENE ACTIVE");
			u8 scene_id = virtual_device_par.scene_par.current_scene_id + KNOB_SCENE_ID_OFFSET;
			key_report_send(virtual_device_par.model_index, scene_id, true);
			return RT_ACTIVATED;
		}
		return RT_FAILURE;
	}
	#if SCREEN_TYPE  == TYPE_HORIZONTAL
	else if(event == EVENT_SWIPE_UP || event == EVENT_CW_ROTATE)
	#else
	else if(event == EVENT_SWIPE_LEFT || event == EVENT_CW_ROTATE)
	#endif
	{
		if(element_handle_next_scene() == true) {
			return RT_SUCCESS;
		}
		return RT_FAILURE;
	}
	#if SCREEN_TYPE  == TYPE_HORIZONTAL
	else if(event == EVENT_SWIPE_DOWN || event == EVENT_CCW_ROTATE)
	#else
	else if(event == EVENT_SWIPE_RIGHT || event == EVENT_CCW_ROTATE)
	#endif
	{
		if(element_handle_previous_scene() == true) {
			return RT_SUCCESS;
		}
		return RT_FAILURE;
	}
    return RT_FAILURE;
}

/**
 * @func    switch_handle_knob_event
 * @brief
 * @param
 * @retval  None
 */
static FunctionStatus_Enum switch_handle_knob_event(u8 idx, KnobEvent_Enum event, u8 times, u16 x_pos, u16 y_pos)
{
	if(event == EVENT_TOUCH_SHORT_PRESS) {
		#ifdef DEBUG_ELEMENT
		calculator_position(x_pos, y_pos);
		#endif
        if(is_in_range_power_button(x_pos, y_pos) == true) {
            virtual_device_par.switch_par.onoff_st[idx] =  \
            			(virtual_device_par.switch_par.onoff_st[idx]^0x01)&0x01;
    		return RT_SUCCESS;
        }
	}
	return RT_FAILURE;
}

/**
 * @func    element_control_cct_when_internal_scene_active
 * @brief
 * @param
 * @retval  None
 */
static FunctionStatus_Enum  element_control_cct_when_internal_scene_active(u8 idx, u8 scene_id)
{
	if(idx < ELE_CNT) {
		if(scene_id < CCT_SCENE_CNT) {
			virtual_device_par.cct.brightness[idx] = cct_map_scene_and_value[scene_id].brightness;
			virtual_device_par.cct.temperature[idx] = cct_map_scene_and_value[scene_id].temperature;
			return RT_ACTIVATED;
		}
	}
    return RT_FAILURE;
}

/**
 * @func    get_decrease_brightness
 * @brief
 * @param
 * @retval  None
 */
static u16 get_decrease_brightness(u16 brightness)
{
	u16 new_brightness;
	u8 percent = (brightness*100 + BRIGHTNESS_STEP_CHANGE/4)/LIGHTNESS_MAX;
	if(percent > 0) {
		percent--;
		if(percent > 0) {
			new_brightness = (percent*LIGHTNESS_MAX + BRIGHTNESS_STEP_CHANGE/4)/100;
		}
		else {
			new_brightness = 0;
		}
	} else {
		new_brightness = 0;
	}
	return new_brightness;
}

/**
 * @func    get_increase_brightness
 * @brief
 * @param
 * @retval  None
 */
static u16 get_increase_brightness(u16 brightness)
{
	u16 new_brightness;
	u8 percent = (brightness*100 + BRIGHTNESS_STEP_CHANGE/4)/LIGHTNESS_MAX;
	if(percent < 100) {
		if(++percent < 100) {
			new_brightness = (percent*LIGHTNESS_MAX + BRIGHTNESS_STEP_CHANGE/4)/100;
		}
		else {
			new_brightness = LIGHTNESS_MAX;
		}
	} else {
		new_brightness = LIGHTNESS_MAX;
	}
	return new_brightness;
}

/**
 * @func    cct_handle_knob_event
 * @brief
 * @param
 * @retval  None
 */
static FunctionStatus_Enum cct_handle_knob_event(u8 idx, KnobEvent_Enum event, u8 times, u16 x_pos, u16 y_pos)
{
	#if SCREEN_TYPE  == TYPE_HORIZONTAL
    if(event == EVENT_SWIPE_DOWN)
	#else
    if(event == EVENT_SWIPE_RIGHT)
	#endif
    {
        if(virtual_device_par.cct.display_mode[idx] == DISPLAY_CCT_MIN) {
            virtual_device_par.cct.display_mode[idx] = DISPLAY_CCT_MAX;
        }
        else {
            virtual_device_par.cct.display_mode[idx]--;
        }
        return RT_SUCCESS;
    }
	#if SCREEN_TYPE  == TYPE_HORIZONTAL
    else if(event == EVENT_SWIPE_UP)
	#else
    else if(event == EVENT_SWIPE_LEFT)
	#endif
    {
        if(virtual_device_par.cct.display_mode[idx] == DISPLAY_CCT_MAX) {
            virtual_device_par.cct.display_mode[idx] = DISPLAY_CCT_MIN;
        }
        else {
            virtual_device_par.cct.display_mode[idx]++;
        }
        return RT_SUCCESS;
    }
    else if(event == EVENT_TOUCH_SHORT_PRESS) {
        if(virtual_device_par.cct.display_mode[idx] == DISPLAY_CCT_SCENE) {
            CctSceneId_Enum scene_id;
			#ifdef DEBUG_ELEMENT
			calculator_position(x_pos, y_pos);
			#endif
			#if SCREEN_TYPE  == TYPE_HORIZONTAL
            if(is_in_range(x_pos, 61, 205) && is_in_range(y_pos, 72, 195)) {
                scene_id = CCT_SCENE_LUNCH;
            }
            else if(is_in_range(x_pos, 288, 397) && is_in_range(y_pos, 72, 175)) {
                scene_id = CCT_SCENE_READING;
            }
            else if(is_in_range(x_pos, 62, 159) && is_in_range(y_pos, 314, 405)) {
                scene_id = CCT_SCENE_MOVIE;
            }
            else if(is_in_range(x_pos, 291, 405) && is_in_range(y_pos, 308, 413)) {
                scene_id = CCT_SCENE_WORK;
            }
			#else
            if(is_in_range(x_pos, 77, 199) && is_in_range(y_pos, 261, 401)) {
                scene_id = CCT_SCENE_LUNCH;
            }
            else if(is_in_range(x_pos, 81, 196) && is_in_range(y_pos, 48, 161)) {
                scene_id = CCT_SCENE_READING;
            }
            else if(is_in_range(x_pos, 265, 383) && is_in_range(y_pos, 268, 380)) {
                scene_id = CCT_SCENE_MOVIE;
            }
            else if(is_in_range(x_pos, 278, 395) && is_in_range(y_pos, 34, 167)) {
                scene_id = CCT_SCENE_WORK;
            }
			#endif
            else {
                return RT_FAILURE;
            }
            FunctionStatus_Enum state =  element_control_cct_when_internal_scene_active(idx, scene_id);
            if(state == RT_ACTIVATED) {
                knob_display_notify_with_time_length(
                            NOTI_SCENE_ACTIVATED,
                            NOTIFY_SCENE_ACTIVE_TIMEOUT_MS
                        );
            }
            return state;
        }
        else {
        	if(is_in_range_power_button(x_pos, y_pos) == true) {
				if(virtual_device_par.cct.brightness[idx] != 0) {
					virtual_device_par.cct.brightness_non_zz[idx] = virtual_device_par.cct.brightness[idx];
					virtual_device_par.cct.brightness[idx] = 0;
				}
				else {
					virtual_device_par.cct.brightness[idx] = virtual_device_par.cct.brightness_non_zz[idx];
				}
	            DBG_ELEMENT_SEND_STR("\n CCT - ON_OFF control");
	            DBG_ELEMENT_SEND_INT(virtual_device_par.cct.brightness[idx]);
	            return RT_SUCCESS;
        	}
        }
    }
    else {
        u8 temp = times;
        if(virtual_device_par.cct.display_mode[idx] == DISPLAY_CCT_LIGHTNESS) {
            if(event == EVENT_CW_ROTATE) {
                while(temp--) {
                    if(virtual_device_par.cct.brightness[idx] < LIGHTNESS_MAX) {
                    	virtual_device_par.cct.brightness[idx] =  \
                    			get_increase_brightness(virtual_device_par.cct.brightness[idx]);
                    }
                }
                return RT_SUCCESS;
            }
            else if(event == EVENT_CCW_ROTATE) {
                while(temp--) {
                    if(virtual_device_par.cct.brightness[idx] > 0) {
                    	if(virtual_device_par.cct.brightness[idx] > BRIGHTNESS_STEP_CHANGE) {
                    		virtual_device_par.cct.brightness[idx] -= BRIGHTNESS_STEP_CHANGE;
                    	}
                    	else {
                    		virtual_device_par.cct.brightness[idx] = 0;
                    	}
                    }
                }
                return RT_SUCCESS;
            }
        }
        else if(virtual_device_par.cct.display_mode[idx] == DISPLAY_CCT_TEMP) {
            if(event == EVENT_CW_ROTATE) {
                while(temp--) {
                	if(virtual_device_par.cct.temperature[idx] < CTL_TEMP_MAX) {
						if(virtual_device_par.cct.temperature[idx]  \
										< (CTL_TEMP_MAX + TEMPERATURE_STEP_CHANGE)) {
							virtual_device_par.cct.temperature[idx] += TEMPERATURE_STEP_CHANGE;
						}
						else {
							virtual_device_par.cct.temperature[idx] = CTL_TEMP_MAX;
							break;
						}
					}

                }
                if(virtual_device_par.cct.temperature[idx] > CTL_TEMP_MAX) {
                    virtual_device_par.cct.temperature[idx] = CTL_TEMP_MAX;
                }
                return RT_SUCCESS;
            }
            else if(event == EVENT_CCW_ROTATE) {
                while(temp--) {
                    if(virtual_device_par.cct.temperature[idx] > CTL_TEMP_MIN) {
                    	if(virtual_device_par.cct.temperature[idx]  \
                    	                > (CTL_TEMP_MIN + TEMPERATURE_STEP_CHANGE)) {
                    		virtual_device_par.cct.temperature[idx] -= TEMPERATURE_STEP_CHANGE;
                    	}
                    	else {
                    		virtual_device_par.cct.temperature[idx] = CTL_TEMP_MIN;
                    		break;
                    	}
                    }
                }
                if(virtual_device_par.cct.temperature[idx] < CTL_TEMP_MIN) {
                    virtual_device_par.cct.temperature[idx] = CTL_TEMP_MIN;
                }
                return RT_SUCCESS;
            }
        }
    }
    return RT_FAILURE;
}

/**
 * @func    dim_handle_knob_event
 * @brief
 * @param
 * @retval  None
 */
static FunctionStatus_Enum dim_handle_knob_event(u8 idx, KnobEvent_Enum event, u8 times, u16 x_pos, u16 y_pos)
{
	u8 temp = times;
	if(event == EVENT_CW_ROTATE) {
		while(temp--) {
			virtual_device_par.dim.level[idx] = get_increase_brightness(virtual_device_par.dim.level[idx]);
		}
		return RT_SUCCESS;
	}
	else if(event == EVENT_CCW_ROTATE) {
		while(temp--) {
			virtual_device_par.dim.level[idx] = get_decrease_brightness(virtual_device_par.dim.level[idx]);
		}
		return RT_SUCCESS;
	}
	else if(event == EVENT_TOUCH_SHORT_PRESS) {
		if(is_in_range_power_button(x_pos, y_pos) == true) {
			if(virtual_device_par.dim.level[idx] != 0) {
				virtual_device_par.dim.level_non_zz[idx] = virtual_device_par.dim.level[idx];
				virtual_device_par.dim.level[idx] = 0;
			}
			else {
				virtual_device_par.dim.level[idx] = virtual_device_par.dim.level_non_zz[idx];
			}
			DBG_ELEMENT_SEND_STR("\n DIM - ON_OFF control: ");
			DBG_ELEMENT_SEND_INT(virtual_device_par.dim.level[idx]);
			return RT_SUCCESS;
		}
	}
	return RT_FAILURE;
}

/**
 * @func    element_handle_curtain_update_position
 * @brief
 * @param
 * @retval  None
 */
static void element_handle_curtain_update_position(u8 idx, u8 pos_present, u8 pos_target, u8 st)
{
    if(idx < ELE_CNT) {
        bool refresh_en = false;
        if(virtual_device_par.model_index == idx) {
#if ENABLE_SHOW_PRESENT_CURTAIN_LEVEL
            if(virtual_device_par.curtain_par.level[idx] != pos_target ||
            			virtual_device_par.curtain_par.previous_level[idx] != pos_present) {
                refresh_en = true;
            }
#else
            if(virtual_device_par.curtain_par.level[idx] != pos_target) {
                refresh_en = true;
            }
#endif
        }
        virtual_device_par.curtain_par.previous_level[idx] = pos_present;
        virtual_device_par.curtain_par.level[idx] = pos_target;
        virtual_device_par.curtain_par.st[idx] = st;

        CutainState_enum curtain_st = virtual_device_par.curtain_par.st[idx];
        // virtual_device_par.curtain_par.previous_level[idx] =  virtual_device_par.curtain_par.level[idx];
        element_response_curtain_level(
        		   idx,
                   virtual_device_par.curtain_par.previous_level[idx],
                   virtual_device_par.curtain_par.level[idx],
                   curtain_st
               );
        if(refresh_en == true) {
        	DBG_ELEMENT_SEND_STR("\n$$$$$$$$$$$$$$$$$$$$$$$$$ CURTAIN REFRESH");
            element_refresh_screen(idx);
        }
        DBG_ELEMENT_SEND_STR("\n element_handle_curtain_update_position:  ");
        DBG_ELEMENT_SEND_INT(idx);
        DBG_ELEMENT_SEND_STR(", ");
        DBG_ELEMENT_SEND_INT(pos_present);
        DBG_ELEMENT_SEND_STR(", ");
        DBG_ELEMENT_SEND_INT(pos_target);
        DBG_ELEMENT_SEND_STR(", ");
        DBG_ELEMENT_SEND_INT(st);
    }
}

/**
 * @func    curtain_handle_knob_event
 * @brief
 * @param
 * @retval  None
 */
static FunctionStatus_Enum curtain_handle_knob_event(u8 idx, KnobEvent_Enum event, u8 times, u16 x_pos, u16 y_pos)
{
    if(idx >= ELE_CNT) {
        return RT_FAILURE;
    }
    u8 total_step = sizeof(const_curtain_level_array);
    int i = 0;
    u8 temp = virtual_device_par.curtain_par.level[idx];

    if(event == EVENT_CW_ROTATE)
    {
        if(virtual_device_par.curtain_par.level[idx] < KNOB_CURTAIN_LEVEL_MAX) {
        	DBG_ELEMENT_SEND_STR("\n...1");
        	for(i = 0; i < total_step; i++) {
                if(virtual_device_par.curtain_par.level[idx] < const_curtain_level_array[i]) {
                    if((const_curtain_level_array[i] -
                            virtual_device_par.curtain_par.level[idx] < CURTAIN_MIN_STEP_CHANGE)
                                    && (i < (total_step - 1))) {
                        virtual_device_par.curtain_par.level[idx] = const_curtain_level_array[i+1];
                    }
                    else {
                        virtual_device_par.curtain_par.level[idx] = const_curtain_level_array[i];
                    }
                    break;
                }
            }
            if(i == total_step) {
                virtual_device_par.curtain_par.level[idx]  = KNOB_CURTAIN_LEVEL_MAX;
            }
            #if CONTROL_CURTAIN_INTERNAL_ENABLE
            if(temp != virtual_device_par.curtain_par.level[idx]) {
                Curtain_ControlCurtainByApp(idx, CURTAIN_CMD_TYPE_RUN, virtual_device_par.curtain_par.level[idx]);
            }
            #endif
        }
        return RT_SUCCESS;
    }
    else if(event == EVENT_CCW_ROTATE)
    {
        if(virtual_device_par.curtain_par.level[idx] > KNOB_CURTAIN_LEVEL_MIN) {
            for(i = total_step-1; i > 0; i--) {
                if(virtual_device_par.curtain_par.level[idx] > const_curtain_level_array[i]) {

                    if((virtual_device_par.curtain_par.level[idx]
                                 - const_curtain_level_array[i] < CURTAIN_MIN_STEP_CHANGE) && (i > 0))  {
                        virtual_device_par.curtain_par.level[idx] = const_curtain_level_array[i-1];
                    }
                    else {
                        virtual_device_par.curtain_par.level[idx] = const_curtain_level_array[i];
                    }
                    break;
                }
            }
            if(i == 0) {
                virtual_device_par.curtain_par.level[idx] = KNOB_CURTAIN_LEVEL_MIN;
            }
            #if CONTROL_CURTAIN_INTERNAL_ENABLE
            if(temp != virtual_device_par.curtain_par.level[idx]) {
                Curtain_ControlCurtainByApp(idx, CURTAIN_CMD_TYPE_RUN, virtual_device_par.curtain_par.level[idx]);
            }
            #endif
        }
        return RT_SUCCESS;
    }
    else if(event == EVENT_TOUCH_SHORT_PRESS) {

        #ifdef DEBUG_ELEMENT
        calculator_position(x_pos, y_pos);
        #endif

        if(is_in_range(x_pos, CZ_OPEN_X_MIN, CZ_OPEN_X_MAX)
                && is_in_range(y_pos, CZ_OPEN_Y_MIN, CZ_OPEN_Y_MAX))
        {
            virtual_device_par.curtain_par.level[idx] = KNOB_CURTAIN_LEVEL_MIN;
            #if CONTROL_CURTAIN_INTERNAL_ENABLE
            Curtain_ControlCurtainByApp(idx, CURTAIN_CMD_TYPE_RUN, _MIN_POSITION);
            #endif
            return RT_SUCCESS;
        }
        else if(is_in_range(x_pos, CZ_STOP_X_MIN, CZ_STOP_X_MAX)
                && is_in_range(y_pos, CZ_STOP_Y_MIN, CZ_STOP_Y_MAX))
        {
            #if CONTROL_CURTAIN_INTERNAL_ENABLE
            Curtain_ControlCurtainByApp(idx, CURTAIN_CMD_TYPE_STOP, _MIN_POSITION);
            #endif
            return RT_SUCCESS;
        }
        else if(is_in_range(x_pos, CZ_CLOSE_X_MIN, CZ_CLOSE_X_MAX)
                && is_in_range(y_pos, CZ_CLOSE_Y_MIN, CZ_CLOSE_Y_MAX))
        {
            virtual_device_par.curtain_par.level[idx] = KNOB_CURTAIN_LEVEL_MAX;
            #if CONTROL_CURTAIN_INTERNAL_ENABLE
            Curtain_ControlCurtainByApp(idx, CURTAIN_CMD_TYPE_RUN, _MAX_POSITION);
            #endif
            return RT_SUCCESS;
        }
    }
    return RT_FAILURE;
}


/**
 * @func    fan_handle_knob_event
 * @brief
 * @param
 * @retval  None
 */
static FunctionStatus_Enum fan_handle_knob_event(u8 idx, KnobEvent_Enum event, u8 times, u16 x_pos, u16 y_pos)
{
    if(event == EVENT_TOUCH_SHORT_PRESS) {
		#ifdef DEBUG_ELEMENT
		calculator_position(x_pos, y_pos);
		#endif
		if(is_in_range_power_button(x_pos, y_pos) == true) {
			if(virtual_device_par.fan_par.level[idx] != FAN_OFF) {
				virtual_device_par.fan_par.level_non_zz[idx] = virtual_device_par.fan_par.level[idx];
				virtual_device_par.fan_par.level[idx] = FAN_OFF;
			}
			else {
				virtual_device_par.fan_par.level[idx] = virtual_device_par.fan_par.level_non_zz[idx];
			}
			DBG_ELEMENT_SEND_STR("\n FAN - ON_OFF control");
			DBG_ELEMENT_SEND_INT(virtual_device_par.fan_par.level[idx]);
	        return RT_SUCCESS;
		}
		else if(is_in_range(x_pos, FAN_DOWN_X_MIN, FAN_DOWN_X_MAX)
				&& is_in_range(y_pos, FAN_DOWN_Y_MIN, FAN_DOWN_Y_MAX)) {
			if(virtual_device_par.fan_par.level[idx] > FAN_OFF) {
				virtual_device_par.fan_par.level[idx]--;
				return RT_SUCCESS;
			}
			else {
				return RT_CANT_HANDLE;
			}
		}
		else if(is_in_range(x_pos, FAN_UP_X_MIN, FAN_UP_X_MAX)
				&& is_in_range(y_pos, FAN_UP_Y_MIN, FAN_UP_Y_MAX)) {
			if(virtual_device_par.fan_par.level[idx] < FAN_LEVEL_MAX) {
				virtual_device_par.fan_par.level[idx]++;
				return RT_SUCCESS;
			}
			else {
				return RT_CANT_HANDLE;
			}
		}
    }
    else {
        if(event == EVENT_CW_ROTATE) {
            if(virtual_device_par.fan_par.level[idx] < FAN_LEVEL_MAX) {
                virtual_device_par.fan_par.level[idx]++;
            }
            else {
                return RT_CANT_HANDLE;
            }
            return RT_SUCCESS;
        }
        else if(event == EVENT_CCW_ROTATE) {
            if(virtual_device_par.fan_par.level[idx] > FAN_OFF) {
                virtual_device_par.fan_par.level[idx]--;
            }
            else {
                return RT_CANT_HANDLE;
            }
            return RT_SUCCESS;
        }
    }
    return RT_FAILURE;
}

/**
 * @func    element_get_mode_array
 * @brief
 * @param
 * @retval  None
 */
static bool element_get_ac_mode_array(u8 idx, u8* array, u8 *total)
{
	if(idx < ELE_CNT) {
		u8 temp_mode = common_endpoint_par[idx].ac_config_mask.mode;
		if((temp_mode&AC_MODE_BIT_MASK) == 0) {
			temp_mode = AC_MODE_BIT_MASK;
		}
		u8 pos = 0;
		foreach(i, AIR_MODE_MAX+1) {
			if(((temp_mode>>i)&0x01) == 1) {
				array[pos++] = i;
			}
		}
		*total = pos;
		return true;
	}
	return false;
}

/**
 * @func    element_get_ac_fan_array
 * @brief
 * @param
 * @retval  None
 */
static bool element_get_ac_fan_array(u8 idx, u8* array, u8 *total)
{
	if(idx < ELE_CNT) {
		u8 temp_fan = common_endpoint_par[idx].ac_config_mask.fan;
		if((temp_fan&AC_FAN_BIT_MASK) == 0) {
			temp_fan = AC_FAN_BIT_MASK;
		}
		u8 pos = 0;
		foreach(i, FAN_VOL_MAX+1) {
			if(((temp_fan>>i)&0x01) == 1) {
				array[pos++] = i;

				DBG_ELEMENT_SEND_INT(array[pos-1]);
				DBG_ELEMENT_SEND_STR(", ");

			}
		}
		*total = pos;
		return true;
	}
	return false;
}


/**
 * @func    element_get_ac_swing_array
 * @brief
 * @param
 * @retval  None
 */
static bool element_get_ac_swing_array(u8 idx, u8* array, u8 *total)
{
	if(idx < ELE_CNT) {
		u8 temp_swing = common_endpoint_par[idx].ac_config_mask.swing;
		if((temp_swing&AC_SWING_BIT_MASK) == 0) {
			temp_swing = AC_SWING_BIT_MASK;
		}
		u8 pos = 0;
		foreach(i, SWING_MAX+1) {
			if(((temp_swing>>i)&0x01) == 1) {
				array[pos++] = i;
			}
		}
		*total = pos;
		return true;
	}
	return false;
}

/**
 * @func    ac_set_next_mode
 * @brief
 * @param
 * @retval  None
 */
static int ac_set_next_mode(u8 idx)
{
    u8 tmp_arr[16];
    u8 cnt = 0;
	if(idx < ELE_CNT) {
		if(element_get_ac_mode_array(idx, tmp_arr, &cnt) == true) {
			foreach(i, cnt) {
				if(virtual_device_par.air.mode[idx] == tmp_arr[i]) {
					if(i < cnt-1) {
						virtual_device_par.air.mode[idx] = tmp_arr[i+1];
					}
					else {
						virtual_device_par.air.mode[idx] = tmp_arr[0];
					}
					return RT_SUCCESS;
				}
			}
			virtual_device_par.air.mode[idx] = tmp_arr[cnt-1];
			return RT_SUCCESS;
		}
	}
	return RT_FAILURE;
}

/**
 * @func    ac_set_previous_mode
 * @brief
 * @param
 * @retval  None
 */
static int ac_set_previous_mode(u8 idx)
{
    u8 tmp_arr[16];
    u8 cnt = 0;
	if(idx < ELE_CNT) {
		if(element_get_ac_mode_array(idx, tmp_arr, &cnt) == true) {
			foreach(i, cnt) {
				if(virtual_device_par.air.mode[idx] == tmp_arr[i]) {
					if(i > 0) {
						virtual_device_par.air.mode[idx] = tmp_arr[i-1];
					}
					else {
						virtual_device_par.air.mode[idx] = tmp_arr[cnt-1];
					}
					return RT_SUCCESS;
				}
			}
			virtual_device_par.air.mode[idx] = tmp_arr[0];
			return RT_SUCCESS;
		}
	}
	return RT_FAILURE;
}

/**
 * @func    ac_set_next_fan
 * @brief
 * @param
 * @retval  None
 */
static int ac_set_next_fan(u8 idx)
{
    u8 tmp_arr[16];
    u8 cnt = 0;
	if(idx < ELE_CNT) {
		if(element_get_ac_fan_array(idx, tmp_arr, &cnt) == true) {
			foreach(i, cnt) {
				if(virtual_device_par.air.fan[idx] == tmp_arr[i]) {
					if(i < cnt-1) {
						virtual_device_par.air.fan[idx] = tmp_arr[i+1];
					}
					else {
						virtual_device_par.air.fan[idx] = tmp_arr[0];
					}
					return RT_SUCCESS;
				}
			}
			virtual_device_par.air.fan[idx] = tmp_arr[cnt-1];
			return RT_SUCCESS;
		}
	}
	return RT_FAILURE;
}


/**
 * @func    ac_set_previous_fan
 * @brief
 * @param
 * @retval  None
 */
static int ac_set_previous_fan(u8 idx)
{
    u8 tmp_arr[16];
    u8 cnt = 0;
	if(idx < ELE_CNT) {
		if(element_get_ac_fan_array(idx, tmp_arr, &cnt) == true) {
			foreach(i, cnt) {
				if(virtual_device_par.air.fan[idx] == tmp_arr[i]) {
					if(i > 0) {
						virtual_device_par.air.fan[idx] = tmp_arr[i-1];
					}
					else {
						virtual_device_par.air.fan[idx] = tmp_arr[cnt-1];
					}
					return RT_SUCCESS;
				}
			}
			virtual_device_par.air.fan[idx] = tmp_arr[0];
			return RT_SUCCESS;
		}
	}
	return RT_FAILURE;
}

/**
 * @func    ac_set_next_swing
 * @brief
 * @param
 * @retval  None
 */
static int ac_set_next_swing(u8 idx)
{
    u8 tmp_arr[16];
    u8 cnt = 0;
	if(idx < ELE_CNT) {
		if(element_get_ac_swing_array(idx, tmp_arr, &cnt) == true) {
			foreach(i, cnt) {
				if(virtual_device_par.air.swing[idx] == tmp_arr[i]) {
					if(i < cnt-1) {
						virtual_device_par.air.swing[idx] = tmp_arr[i+1];
					}
					else {
						virtual_device_par.air.swing[idx] = tmp_arr[0];
					}
					return RT_SUCCESS;
				}
			}
			virtual_device_par.air.swing[idx] = tmp_arr[cnt-1];
			return RT_SUCCESS;
		}
	}
	return RT_FAILURE;
}

/**
 * @func    ac_set_previous_swing
 * @brief
 * @param
 * @retval  None
 */
static int ac_set_previous_swing(u8 idx)
{
    u8 tmp_arr[16];
    u8 cnt = 0;
	if(idx < ELE_CNT) {
		if(element_get_ac_swing_array(idx, tmp_arr, &cnt) == true) {
			foreach(i, cnt) {
				if(virtual_device_par.air.swing[idx] == tmp_arr[i]) {
					if(i > 0) {
						virtual_device_par.air.swing[idx] = tmp_arr[i-1];
					}
					else {
						virtual_device_par.air.swing[idx] = tmp_arr[cnt-1];
					}
					return RT_SUCCESS;
				}
			}
			virtual_device_par.air.swing[idx] = tmp_arr[cnt-1];
			return RT_SUCCESS;
		}
	}
	return RT_FAILURE;
}


/**
 * @func    knob_convert_air_temperature_to_percent
 * @brief
 * @param
 * @retval  None
 */
u8 element_convert_air_temperature_to_percent(u8 idx)
{
	if(idx < ELE_CNT) {
		u16 temp = virtual_device_par.air.temp[idx];
		u16 tmp = temp;
		u16 max = common_endpoint_par[idx].ac_config_mask.temp_max*10;
		u16 min = common_endpoint_par[idx].ac_config_mask.temp_min*10;
		if(temp < min) {
			tmp = min;
		}
		else if(temp > max) {
			tmp = max;
		}
		return (u8)(((tmp - min)*100)/(max - min));
	}
	return 0;
}

/**
 * @func    is_ac_mode_support_change_temp
 * @brief
 * @param
 * @retval  None
 */
static bool is_ac_mode_support_change_temp(u8 mode)
{
	if(mode == AIR_MODE_COOL || mode == AIR_MODE_HEAT) {
		return true;
	}
	return false;
}


/**
 * @func    air_handle_knob_event
 * @brief
 * @param
 * @retval  None
 */
static FunctionStatus_Enum air_handle_knob_event(u8 idx, KnobEvent_Enum event, u8 times, u16 x_pos, u16 y_pos)
{
	#if SCREEN_TYPE  == TYPE_HORIZONTAL
    if(event == EVENT_SWIPE_UP || event == EVENT_SWIPE_DOWN) {
    	if(virtual_device_par.air.on_off[idx] == G_OFF) {
    		 virtual_device_par.air.display_mode[idx] = DISPLAY_AIR_MAIN;
    		 return RT_SUCCESS;
    	}
        AirConditionDisplayMode_Enum temp = virtual_device_par.air.display_mode[idx];
        if(event == EVENT_SWIPE_UP) {
            if(++temp > DISPLAY_AIR_END) {
                temp = DISPLAY_AIR_BEGIN;
            }
        }
        else if(event == EVENT_SWIPE_DOWN) {
            if(temp == DISPLAY_AIR_BEGIN) {
                temp = DISPLAY_AIR_END;
            }
            else {
                temp = temp - 1;
            }
        }
        DBG_ELEMENT_SEND_STR("\n ...AIR display mode: ");
        DBG_ELEMENT_SEND_INT(virtual_device_par.air.display_mode[idx]);

        if(virtual_device_par.air.display_mode[idx] != temp) {
            virtual_device_par.air.display_mode[idx] = temp;
            return RT_SUCCESS;
        }
    }
	#else
    if(event == EVENT_SWIPE_LEFT || event == EVENT_SWIPE_RIGHT) {
    	if(virtual_device_par.air.on_off[idx] == G_OFF) {
    		 virtual_device_par.air.display_mode[idx] = DISPLAY_AIR_MAIN;
    		 return RT_SUCCESS;
    	}
        AirConditionDisplayMode_Enum temp = virtual_device_par.air.display_mode[idx];
        if(event == EVENT_SWIPE_LEFT) {
            if(++temp > DISPLAY_AIR_END) {
                temp = DISPLAY_AIR_BEGIN;
            }
        }
        else if(event == EVENT_SWIPE_RIGHT) {
            if(temp == DISPLAY_AIR_BEGIN) {
                temp = DISPLAY_AIR_END;
            }
            else {
                temp = temp - 1;
            }
        }
        if(virtual_device_par.air.display_mode[idx] != temp) {
            virtual_device_par.air.display_mode[idx] = temp;
            return RT_SUCCESS;
        }
    }
	#endif

    else {
        if(virtual_device_par.air.display_mode[idx] == DISPLAY_AIR_MAIN) {
            int temp = times;
            if(temp > AIR_STEP_TEMP_CHANGE_MAX) {
                temp = AIR_STEP_TEMP_CHANGE_MAX;
            }
            if(virtual_device_par.air.on_off[idx] == G_ON) {
            	if(event == EVENT_CW_ROTATE || event == EVENT_CCW_ROTATE) {
            		if(is_ac_mode_support_change_temp(virtual_device_par.air.mode[idx]) == false) {
                		DBG_ELEMENT_SEND_STR("\n Present mode don't support change TEMP: ");
                		DBG_ELEMENT_SEND_INT(virtual_device_par.air.mode[idx]);
                		return RT_FAILURE;
            		}
            	}
			    // Change air temperature
			    if(event == EVENT_CW_ROTATE) {
				    while(temp--) {
					    if(virtual_device_par.air.temp[idx] <  \
					    		common_endpoint_par[idx].ac_config_mask.temp_max*10) {
						    virtual_device_par.air.temp[idx] += common_endpoint_par[idx].ac_config_mask.temp_step;
					    }
				    }
				    if(virtual_device_par.air.temp[idx] > common_endpoint_par[idx].ac_config_mask.temp_max*10) {
					    virtual_device_par.air.temp[idx] = common_endpoint_par[idx].ac_config_mask.temp_max*10;
				    }
				    return ST_SUCCESS;
			    }
			    else if(event == EVENT_CCW_ROTATE) {
				    while(temp--) {
					    if(virtual_device_par.air.temp[idx] >   \
					    		common_endpoint_par[idx].ac_config_mask.temp_min*10) {
						    virtual_device_par.air.temp[idx] -= common_endpoint_par[idx].ac_config_mask.temp_step;
					    }
				    }
				    if(virtual_device_par.air.temp[idx] <  \
				    		common_endpoint_par[idx].ac_config_mask.temp_min*10) {
					    virtual_device_par.air.temp[idx] = common_endpoint_par[idx].ac_config_mask.temp_min*10;
				    }
				    return ST_SUCCESS;
			    }
            }
            // Toggle on off status
            if(event == EVENT_TOUCH_SHORT_PRESS) {
				#ifdef DEBUG_ELEMENT
				calculator_position(x_pos, y_pos);
				#endif
            	if(is_in_range_power_button(x_pos, y_pos) == true) {
            		virtual_device_par.air.on_off[idx] = (virtual_device_par.air.on_off[idx] ^1)&1;
                    return RT_SUCCESS;
            	}
	#if AIR_CONTROL_MODE_AND_FAN_IN_MAIN_EN
            	if(virtual_device_par.air.on_off[idx] == G_ON) {
					if(is_in_range(x_pos, MODE_X_MIN, MODE_X_MAX)  \
									&& is_in_range(y_pos, MODE_Y_MIN, MODE_Y_MAX)) {
						return ac_set_next_mode(idx);
					}
					else if(is_in_range(x_pos, FAN_X_MIN, FAN_X_MAX)  \
									&& is_in_range(y_pos, FAN_Y_MIN, FAN_Y_MAX)) {
						return ac_set_next_fan(idx);
					}
            	}
	#endif
            }
            return RT_FAILURE;
        }
        else if(virtual_device_par.air.display_mode[idx] == DISPLAY_AIR_MODE) {
        	if(event == EVENT_CW_ROTATE) {
        		return ac_set_next_mode(idx);
            }
            else if(event == EVENT_CCW_ROTATE) {
            	return ac_set_previous_mode(idx);
            }
            else if(event == EVENT_TOUCH_SHORT_PRESS) {
				#ifdef DEBUG_ELEMENT
				calculator_position(x_pos, y_pos);
				#endif
                if(is_in_range(x_pos, AC_DOWN_X_MIN, AC_DOWN_X_MAX)
                			&& is_in_range(y_pos, AC_DOWN_Y_MIN, AC_DOWN_Y_MAX)) {
                	return ac_set_previous_mode(idx);
                }
                else if(is_in_range(x_pos, AC_UP_X_MIN, AC_UP_X_MAX)
                			&& is_in_range(y_pos, AC_UP_Y_MIN, AC_UP_Y_MAX)) {
                	return ac_set_next_mode(idx);
                }
		    }
        }
        else if(virtual_device_par.air.display_mode[idx] == DISPLAY_AIR_FAN) {
        	if(event == EVENT_CW_ROTATE) {
        		return ac_set_next_fan(idx);
            }
            else if(event == EVENT_CCW_ROTATE) {
            	return ac_set_previous_fan(idx);
            }
            else if(event == EVENT_TOUCH_SHORT_PRESS) {
                if(is_in_range(x_pos, AC_DOWN_X_MIN, AC_DOWN_X_MAX)
                			&& is_in_range(y_pos, AC_DOWN_Y_MIN, AC_DOWN_Y_MAX)) {
                	return ac_set_previous_fan(idx);
                }
                else if(is_in_range(x_pos, AC_UP_X_MIN, AC_UP_X_MAX)
                			&& is_in_range(y_pos, AC_UP_Y_MIN, AC_UP_Y_MAX)) {
                	return ac_set_next_fan(idx);
				}
            }
        }
        else if(virtual_device_par.air.display_mode[idx] == DISPLAY_AIR_SWING) {
        	if(event == EVENT_CW_ROTATE) {
        		return ac_set_next_swing(idx);
            }
            else if(event == EVENT_CCW_ROTATE) {
            	return ac_set_previous_swing(idx);
            }
            else if(event == EVENT_TOUCH_SHORT_PRESS) {
                if(is_in_range(x_pos, AC_DOWN_X_MIN, AC_DOWN_X_MAX)
                			&& is_in_range(y_pos, AC_DOWN_Y_MIN, AC_DOWN_Y_MAX)) {
                	return ac_set_previous_swing(idx);
                }
                else if(is_in_range(x_pos, AC_UP_X_MIN, AC_UP_X_MAX)
                			&& is_in_range(y_pos, AC_UP_Y_MIN, AC_UP_Y_MAX)) {
                	return ac_set_next_swing(idx);
			    }
            }
        }
    }
    return RT_FAILURE;
}

/**
 * @func    audio_handle_knob_event
 * @brief
 * @param
 * @retval  None
 */
static FunctionStatus_Enum audio_handle_knob_event(u8 idx, KnobEvent_Enum event, u8 times, u16 x_pos, u16 y_pos)
{
    if(event == EVENT_TOUCH_SHORT_PRESS) {
        #ifdef DEBUG_ELEMENT
        calculator_position(x_pos, y_pos);
        #endif
        if(is_in_range(x_pos, AUDIO_PAUSE_PLAY_X_MIN,AUDIO_PAUSE_PLAY_X_MAX)
                        && is_in_range(y_pos, AUDIO_PAUSE_PLAY_Y_MIN, AUDIO_PAUSE_PLAY_Y_MAX))
        {
            if( virtual_device_par.audio_par.state[idx] == AUDIO_PAUSE) {
                virtual_device_par.audio_par.state[idx] = AUDIO_PLAY;
                knob_set_audio_brush_image_with_active_button(PLAY_BUTTON);
                return RT_ACTIVATED;
            }
            else {
                virtual_device_par.audio_par.state[idx] = AUDIO_PAUSE;
                knob_set_audio_brush_image_with_active_button(PAUSE_BUTTON);
                return RT_ACTIVATED;
            }
            return RT_SUCCESS;
        }
        else if(is_in_range(x_pos, AUDIO_PREVIOUS_X_MIN, AUDIO_PREVIOUS_X_MAX)
                && is_in_range(y_pos, AUDIO_PREVIOUS_Y_MIN, AUDIO_PREVIOUS_Y_MAX))
        {
            element_send_audio_control_to_host(idx, HOST_AUDIO_PREVIOUS);
            knob_set_audio_brush_image_with_active_button(PREVIOUS_BUTTON);
            return RT_CANT_HANDLE;
        }
        else if(is_in_range(x_pos, AUDIO_NEXT_X_MIN, AUDIO_NEXT_X_MAX)
                && is_in_range(y_pos, AUDIO_NEXT_Y_MIN, AUDIO_NEXT_Y_MAX))
        {
            element_send_audio_control_to_host(idx, HOST_AUDIO_NEXT);
            knob_set_audio_brush_image_with_active_button(NEXT_BUTTON);
            return RT_CANT_HANDLE;
        }
    }
    else if(event == EVENT_CW_ROTATE) {
        if(virtual_device_par.audio_par.volume[idx] == AUDIO_VOLUME_MAX) {
            return RT_SUCCESS;
        }
        int temp = times;
        while(temp--) {
            if(virtual_device_par.audio_par.volume[idx] < AUDIO_VOLUME_MAX) {
                virtual_device_par.audio_par.volume[idx]++;
            }
        }
        return RT_SUCCESS;
    }
    else if(event == EVENT_CCW_ROTATE) {
        if(virtual_device_par.audio_par.volume[idx] == AUDIO_VOLUME_MIN) {
            return RT_SUCCESS;
        }
        int temp = times;
        while(temp--) {
            if(virtual_device_par.audio_par.volume[idx] > AUDIO_VOLUME_MIN) {
                virtual_device_par.audio_par.volume[idx]--;
            }
        }
        return RT_SUCCESS;
    }
    return RT_FAILURE;
}


typedef struct {
	bool flag;
	u32  delay_t_ms;
	u32  start_t_ms;
}ele_publish_status_delay_t;

static ele_publish_status_delay_t ele_publish_status_delay[ELE_CNT];

/**
 * @func    ele_setup_publish_status_delay
 * @brief
 * @param
 * @retval  None
 */
static void ele_setup_publish_status_delay(u8 model_idx, u32 delay_ms)
{
	if(model_idx < ELE_CNT) {
		ele_publish_status_delay[model_idx].flag = true;
		ele_publish_status_delay[model_idx].start_t_ms = clock_time_ms();
		ele_publish_status_delay[model_idx].delay_t_ms = delay_ms;
	}
}

/**
 * @func    ele_publish_status_delay_proc
 * @brief
 * @param
 * @retval  None
 */
static void ele_publish_status_delay_proc(void)
{
	foreach(i, ELE_CNT) {
		if(ele_publish_status_delay[i].flag == true) {
			if(clock_time_exceed_ms(ele_publish_status_delay[i].start_t_ms,
						ele_publish_status_delay[i].delay_t_ms)) {
				EndpointType_Enum type = get_endpoint_type_follow_model_index(i);

				DBG_ELEMENT_SEND_STR("\n ele_publish_status_delay_proc: ");
				DBG_ELEMENT_SEND_INT(i);

				if(type == TYPE_SWITCH) {
					DBG_ELEMENT_SEND_STR(" - Switch");
					element_response_switch_status(i);
				}
				else if(type == TYPE_CCT) {
					DBG_ELEMENT_SEND_STR(" - CCT");
					element_response_cct_status(i);
				}
				else if(type == TYPE_DIM) {
					DBG_ELEMENT_SEND_STR(" - DIM");
					element_response_dim_status(i);
				}
				else if(type == TYPE_CURTAIN) {
					DBG_ELEMENT_SEND_STR(" - CURTAIN");
					element_response_curtain_level(
								i,
								virtual_device_par.curtain_par.previous_level[i],
								virtual_device_par.curtain_par.level[i],
								virtual_device_par.curtain_par.st[i]
							);
				}
				else if(type == TYPE_AIR_CONDITIONER) {
					DBG_ELEMENT_SEND_STR(" - AC");
					element_response_ac_status(i);
				}
				ele_publish_status_delay[i].flag = false;
			}
		}
	}
}

/**
 * @func    ele_copy_current_air_value
 * @brief
 * @param
 * @retval  None
 */
static bool ele_copy_current_air_value(u8 idx, air_value_t *p)
{
	if(idx >= ELE_CNT) {
		return false;
	}
	p->on_off = virtual_device_par.air.on_off[idx];
	p->mode = virtual_device_par.air.mode[idx];
	p->temp = virtual_device_par.air.temp[idx];
	p->fan = virtual_device_par.air.fan[idx];
	p->swing = virtual_device_par.air.swing[idx];
	return true;
}

/**
 * @func    knob_device_handle_report_event
 * @brief
 * @param
 * @retval  None
 */
FunctionStatus_Enum knob_device_handle_report_event(u8 *p_idx, KnobEvent_Enum event, u16 x_pos, u16 y_pos, u8 times)
{
    FunctionStatus_Enum ret = RT_FAILURE;
    u8 idx = virtual_device_par.model_index;
    *p_idx = idx;
    u8 type = endpoint_type[idx];
    if(type > TYPE_MAX) {
    	DBG_ELEMENT_SEND_STR("\n ERR: Unknown endpoint type");
    	return ret;
    }
    switch(type)
    {
        case TYPE_SCENE:
        	DBG_ELEMENT_SEND_STR("\n ... TYPE_SCENE");
            ret = scene_handle_knob_event(event, times, x_pos, y_pos);
            break;

        case TYPE_SWITCH:
        {
			u8 onoff_st = virtual_device_par.switch_par.onoff_st[idx];
			ret = switch_handle_knob_event(idx, event, times, x_pos, y_pos);
		    if(ret == RT_SUCCESS) {
		    	if(onoff_st != virtual_device_par.switch_par.onoff_st[idx]) {
                    // ele_setup_publish_status_delay(idx + ELE_RELAY_OFFSET, 0);
                    relay_set_target_state(idx, virtual_device_par.switch_par.onoff_st[idx]);
		    	}
		    }
        	break;
        }
        case TYPE_CCT:
        {
        	DBG_ELEMENT_SEND_STR("\n ... TYPE_CCT");
            u16 brightness_present  = virtual_device_par.cct.brightness[idx];
            u16 temperature_present = virtual_device_par.cct.temperature[idx];
            ret = cct_handle_knob_event(idx, event, times, x_pos, y_pos);
            if(ret == RT_SUCCESS) {
                if(brightness_present != virtual_device_par.cct.brightness[idx]  \
                            || temperature_present != virtual_device_par.cct.temperature[idx]) {
                    ele_setup_publish_status_delay(idx, DELAY_TIME_RSP_WHEN_LEVEL_CHANGE_MS);
                }
            }
            else if(ret == RT_ACTIVATED) {
            	ele_setup_publish_status_delay(idx, DELAY_TIME_RSP_WHEN_LEVEL_CHANGE_MS);
            }
            break;
        }
        case TYPE_DIM:
        {
        	u16 level = virtual_device_par.dim.level[idx];
        	ret = dim_handle_knob_event(idx, event, times, x_pos, y_pos);
        	if(ret == RT_SUCCESS) {
        		if(level != virtual_device_par.dim.level[idx]) {
                    ele_setup_publish_status_delay(idx, DELAY_TIME_RSP_WHEN_LEVEL_CHANGE_MS);
        		}
        	}
        	break;
        }
        case TYPE_CURTAIN:
        {
            ret = curtain_handle_knob_event(idx, event, times, x_pos, y_pos);
            break;
        }
        case TYPE_FAN:
        {
        	u8 level =  virtual_device_par.fan_par.level[idx];
			ret = fan_handle_knob_event(idx, event, times, x_pos, y_pos);
			if(ret == ST_SUCCESS) {
				if(level != virtual_device_par.fan_par.level[idx]) {
					element_response_fan_level(idx, virtual_device_par.fan_par.level[idx]);
				}
			}
        	break;
        }
        case TYPE_AIR_CONDITIONER:
        {
        	air_value_t air_value;
        	if(ele_copy_current_air_value(idx, &air_value) == false) {
        		return ret;
        	}
            ret = air_handle_knob_event(idx, event, times, x_pos, y_pos);
            if(ret == RT_SUCCESS) {
                if(air_value.on_off != virtual_device_par.air.on_off[idx]
                        || air_value.temp != virtual_device_par.air.temp[idx]
                            || air_value.mode != virtual_device_par.air.mode[idx]
                                || air_value.fan != virtual_device_par.air.fan[idx]
                                    || air_value.swing != virtual_device_par.air.swing[idx]
                ) {
                    ele_setup_publish_status_delay(idx, DELAY_TIME_RSP_WHEN_LEVEL_CHANGE_MS);
                }
            }
            break;
        }
        case TYPE_AUDIO:
        {
        	audio_value_t audio_value;
        	audio_value.state = virtual_device_par.audio_par.state[idx];
        	audio_value.volume = virtual_device_par.audio_par.volume[idx];
        	audio_value.mute = virtual_device_par.audio_par.mute[idx];

			ret = audio_handle_knob_event(idx, event, times, x_pos, y_pos);
			if(ret == RT_SUCCESS || ret == RT_ACTIVATED) {
				if(audio_value.state != virtual_device_par.audio_par.state[idx]) {
					element_response_audio_status(idx);
				}
				else if(audio_value.volume != virtual_device_par.audio_par.volume[idx]) {
					virtual_device_par.audio_par.idx = idx;
					CycleFunc_add(element_response_audio_volume_delay, DELAY_TIME_RSP_WHEN_LEVEL_CHANGE_MS);
				}
			}
        	break;
        }
    }
    return ret;
}

/**
 * @func    element_set_active_endpoint_index
 * @brief
 * @param
 * @retval  None
 */
int element_set_active_endpoint_index(u8 index)
{
	if(index < ELE_CNT) {
		if(common_endpoint_par[index].enable == true) {
			virtual_device_par.model_index = index;
			return 0;
		}
	}
	return -1;
}

/**
 * @func    element_handle_next_endpoint_index
 * @brief
 * @param
 * @retval  None
 */
u8 element_handle_next_endpoint_index(void)
{
	u8 search_arr[ELE_CNT-1];
	u8 index = 0;
	int count = virtual_device_par.model_index;
	while(++count < ELE_CNT) {
		if(index < sizeof(search_arr)) {
			search_arr[index] = count;
			index++;
		}
	}
	count = -1;
	while(++count < virtual_device_par.model_index) {
		if(index < sizeof(search_arr)) {
			search_arr[index] = count;
			index++;
		}
	}
	foreach(i, ELE_CNT-1) {
		if(endpoint_type[search_arr[i]] != TYPE_UNKNOWN   \
					&& common_endpoint_par[search_arr[i]].enable == true) {
			if((endpoint_type[search_arr[i]] == TYPE_SCENE)
						&& (is_all_scene_inactive() == true)) {
				continue;
			}
			virtual_device_par.model_index = search_arr[i];
			return search_arr[i];
		}
	}
	return virtual_device_par.model_index;
}

/**
 * @func    element_handle_previous_endpoint_index
 * @brief
 * @param
 * @retval  None
 */
u8 element_handle_previous_endpoint_index(void)
{
	u8 search_arr[ELE_CNT-1];
	u8 index = 0;
	int count = virtual_device_par.model_index;
	while(--count >= 0) {
		if(index < sizeof(search_arr)) {
			search_arr[index] = count;
			index++;
		}
	}
	count = ELE_CNT;
	while(--count > virtual_device_par.model_index) {
		if(index < sizeof(search_arr)) {
			search_arr[index] = count;
			index++;
		}
	}
	foreach(i, ELE_CNT-1) {
		if(endpoint_type[search_arr[i]] != TYPE_UNKNOWN  \
					&& common_endpoint_par[search_arr[i]].enable == true) {
			if((endpoint_type[search_arr[i]] == TYPE_SCENE)
						&& (is_all_scene_inactive() == true)) {
				continue;
			}
			virtual_device_par.model_index = search_arr[i];
			return search_arr[i];
		}
	}
	return virtual_device_par.model_index;
}

/**
 * @func    scene_get_scene_par
 * @brief
 * @param
 * @retval  None
 */
scene_par_t* scene_get_scene_par(void)
{
    return &virtual_device_par.scene_par;
}

/**
 * @func    knob_device_get_switch_par
 * @brief
 * @param
 * @retval  None
 */
switch_par_t* knob_device_get_switch_par(void)
{
    return &virtual_device_par.switch_par;
}

/**
 * @func    knob_device_get_cct_par
 * @brief
 * @param
 * @retval  None
 */
cct_par_t* knob_device_get_cct_par(void)
{
    return &virtual_device_par.cct;
}

/**
 * @func    knob_device_get_dim_par
 * @brief
 * @param
 * @retval  None
 */
dim_par_t* knob_device_get_dim_par(void)
{
    return &virtual_device_par.dim;
}

/**
 * @func    scene_get_curtain_par
 * @brief
 * @param
 * @retval  None
 */
curtain_par_t* knob_device_get_curtain_par(void)
{
    return &virtual_device_par.curtain_par;
}

/**
 * @func    knob_device_get_air_par
 * @brief
 * @param
 * @retval  None
 */
air_par_t* knob_device_get_air_par(void)
{
    return &virtual_device_par.air;
}

/**
 * @func    knob_device_get_current_state
 * @brief
 * @param
 * @retval  None
 */
audio_par_t* knob_device_get_audio_par(void)
{
    return &virtual_device_par.audio_par;
}

/**
 * @func    knob_device_get_fan_level
 * @brief
 * @param
 * @retval  None
 */
u8 knob_device_get_fan_level(u8 idx)
{
    return virtual_device_par.fan_par.level[idx];
}

/**
 * @func    knob_device_get_host_fan_level fan_level
 * @brief
 * @param
 * @retval  None
 */
u8 knob_device_get_host_fan_level(u8 idx)
{
    return convert_fan_level_to_host_fan_level(virtual_device_par.fan_par.level[idx]);
}

/**
 * @func    element_get_current_index
 * @brief
 * @param
 * @retval  None
 */
u8 element_get_current_index(void)
{
	return virtual_device_par.model_index;
}

/**
 * @func    knob_dev_init
 * @brief
 * @param
 * @retval  None
 */
void knob_element_callback_init_from_app(typeEle_handleRepsonseSceneMode func)
{
    if(func != NULL) {
        pvEle_handleRepsonseSceneMode = func;
    }
}

/*************************** SWITCH AUTO RUN ************************/
typedef struct {
	u32 auto_trans_st_t;
	u8  present_st;
}auto_trans_par_t;

static auto_trans_par_t auto_trans_par[ELE_CNT];

/**
 * @func    switch_auto_init
 * @brief
 * @param
 * @retval  None
 */
static void  element_switch_auto_init(void)
{
	foreach(i, ELE_CNT) {
		auto_trans_par[i].auto_trans_st_t = 0;
		auto_trans_par[i].present_st = G_ONOFF_RSV;
	}
}

/**
 * @func   element_switch_set_new_state
 * @brief
 * @param  None
 * @retval None
 */
static void element_switch_set_new_state(u8 idx, u8 st)
{
	if(idx < ELE_CNT) {
		virtual_device_par.switch_par.onoff_st[idx] = st;
		relay_set_target_state(idx, st);
		element_refresh_screen(idx);
	}
}

/**
 * @func   element_handle_switch_change_state
 * @brief
 * @param  None
 * @retval None
 */
static void element_handle_switch_change_state(u8 model_idx, u8 st)
{
	if(model_idx < ELE_CNT) {
		if(auto_trans_par[model_idx].present_st != st) {
			auto_trans_par[model_idx].auto_trans_st_t = clock_time_ms();
			auto_trans_par[model_idx].present_st = st;
		}
		element_response_switch_status(model_idx);
	}
}

/**
 * @func   auto_loop_task
 * @brief
 * @param  None
 * @retval None
 */
static void switch_auto_proc(void)
{
	u16 relay_state = relay_get_target_state();
	foreach(i, ELE_CNT) {
		if(endpoint_type[i] != TYPE_SWITCH) {
			return;
		}
		if(advanced_config[i].switch_mode.mode == TOGGLE_SWITCH_TYPE) {
			if((advanced_config[i].switch_mode.toggle_type == TOGGLE_DEFAULT)
				|| (advanced_config[i].switch_mode.toggle_type >= TOGGLE_UNKNOWN)
						|| (advanced_config[i].switch_mode.toggle_type == TOGGLE_DELAY_ON)
								|| (advanced_config[i].switch_mode.toggle_type == TOGGLE_DELAY_OFF)) {
				continue;
			}
			if(advanced_config[i].switch_mode.toggle_type == TOGGLE_AUTO_ON) {
				if(((relay_state>>i)&0x01) == G_ON) {
					continue;
				}
				else {
					if(clock_time_exceed_ms(
							auto_trans_par[i].auto_trans_st_t,
							s_to_ms(advanced_config[i].switch_mode.delay_time_s)))
					{
						element_switch_set_new_state(i, G_ON);
						//DBG_ELEMENT_SEND_STR("\n ^^^^^^^^ AUTO_ON");
					}
				}
			}
			else if(advanced_config[i].switch_mode.toggle_type == TOGGLE_AUTO_OFF) {
				if(((relay_state>>i)&0x01) == G_OFF) {
					continue;
				}
				else {
					if(clock_time_exceed_ms(
							auto_trans_par[i].auto_trans_st_t,
							s_to_ms(advanced_config[i].switch_mode.delay_time_s)))
					{
						element_switch_set_new_state(i, G_OFF);
						//DBG_ELEMENT_SEND_STR("\n ^^^^^^^^ AUTO_OFF");
					}
				}
			}
		}
		else if(advanced_config[i].switch_mode.mode == MOMENTORY_SWITCH_TYPE) {
			if(((relay_state>>i)&0x01) == G_OFF) {
				continue;
			}
			else {
				if(clock_time_exceed_ms(auto_trans_par[i].auto_trans_st_t,TIMER_500MS))
				{
					element_switch_set_new_state(i, G_OFF);
				}
			}
		}
	}
}

/**
 * @func    relay_handle_switch_change_mode
 * @brief
 * @param
 * @retval  None
 */
static void element_handle_switch_change_mode(u8 idx, u8 mode)
{
	if(idx < ELE_CNT) {
		if(advanced_config[idx].switch_mode.mode == LIGHTING_SWITCH_TYPE
				|| advanced_config[idx].switch_mode.mode == TOGGLE_SWITCH_TYPE) {
			// Same state
			relay_set_target_state(idx, virtual_device_par.switch_par.onoff_st[idx]);
		}
		else if(advanced_config[idx].switch_mode.mode == MOMENTORY_SWITCH_TYPE) {
			virtual_device_par.switch_par.onoff_st[idx] = G_OFF;
			relay_set_target_state(idx, G_OFF);
		}
		else {
			return;
		}
		if(virtual_device_par.model_index == idx) {
			element_refresh_screen(idx);
		}
	}
}

/**
 * @func    element_init
 * @brief
 * @param
 * @retval  None
 */
void element_init(typeElement_handle_refresh_sceen func,
			typeEle_handleDisableVisibilityCurrentEndpoint func_1)
{
    advanced_config_init();

    element_restore_endpoint_type();
    element_restore_device_par();

    element_restore_common_endpoint_par();
    element_restore_common_scene_par();

    if(func != NULL) {
        pvElement_handle_refresh_sceen = func;
    }
    if(func_1 != NULL) {
    	pvEle_handleDisableVisibilityCurrentEndpoint = func_1;
    }
    // External
    curtain_init();
    Curtain_CallbackInit(element_handle_curtain_update_position);

    foreach(i, ELE_CNT) {
    	ele_publish_status_delay[i].flag = false;
    }
    // Relay
	advanced_callback_init(element_handle_switch_change_mode);
    relay_init();
    relay_callback_init(element_handle_switch_change_state);

    foreach(i, ELE_CNT) {
    	if(endpoint_type[i] == TYPE_SWITCH) {
    		u8 st = virtual_device_par.switch_par.onoff_st[i];
    		if(advanced_config[i].switch_mode.mode == MOMENTORY_SWITCH_TYPE) {
    			st = G_OFF;
    		} else {
    			if(advanced_config[i].power_on_state == ON_POWER_UP_ON) {
    				st = G_ON;
    			} else if(advanced_config[i].power_on_state == ON_POWER_UP_OFF) {
    				st = G_OFF;
    			}
    		}
    		virtual_device_par.switch_par.onoff_st[i] = st;
    		relay_set_target_state(i, st);
    	}
    }
    // Auto initial
    element_switch_auto_init();
}

/**
 * @func    knob_element_proc
 * @brief
 * @param
 * @retval  None
 */
void knob_element_proc(void)
{
	// TODO
    element_check_store_device_par();
	foreach(i, ELE_CNT) {
		if(endpoint_type[i] == TYPE_CCT) {
			if(virtual_device_par.cct.brightness[i] != 0
					&& virtual_device_par.cct.brightness_non_zz[i] != virtual_device_par.cct.brightness[i]) {
				virtual_device_par.cct.brightness_non_zz[i] = virtual_device_par.cct.brightness[i];
			}
		}
		else if(endpoint_type[i] == TYPE_DIM) {
			if(virtual_device_par.dim.level[i] != 0
					&& virtual_device_par.dim.level_non_zz[i] != virtual_device_par.dim.level[i]) {
				virtual_device_par.dim.level_non_zz[i] = virtual_device_par.dim.level[i];
			}
		}
		else if(endpoint_type[i] == TYPE_FAN) {
			if(virtual_device_par.fan_par.level[i] != 0 &&
					virtual_device_par.fan_par.level_non_zz[i] != virtual_device_par.fan_par.level[i]) {
				virtual_device_par.fan_par.level_non_zz[i] = virtual_device_par.fan_par.level[i];
			}
		}
	}
    curtain_proc();
    ele_publish_status_delay_proc();
    relay_proc();
    switch_auto_proc();
}

/**
 * @func    element_handle_get_device_status
 * @brief
 * @param
 * @retval  None
 */
void element_handle_get_device_status(u8* par, u8 par_len)
{
    u16 deviceMask = (u16)((u16)(par[0]<<8) | par[1]);
    foreach(i, ELE_CNT) {
    	if((deviceMask >> i)&0x01) {
    		switch(endpoint_type[i]) {
				case TYPE_SWITCH:
					element_response_switch_status(i);
					break;

				case TYPE_CCT:
					element_response_cct_status(i);
					break;

				case TYPE_DIM:
					element_response_dim_status(i);
					break;

				case TYPE_CURTAIN:
		            element_response_curtain_level(i,  \
		                    virtual_device_par.curtain_par.level[i], virtual_device_par.curtain_par.level[i], ST_STOPED);
					break;

				case TYPE_FAN:
					element_response_fan_level(i, virtual_device_par.fan_par.level[i]);
					break;

				case TYPE_AIR_CONDITIONER:
					element_response_ac_status(i);
					break;

				case TYPE_AUDIO:
					element_response_audio_status(i);
					break;
    		}
    	}
    }
}

/**
 * @func    element_handle_incomming_get
 * @brief
 * @param
 * @retval  None
 */
int element_handle_incomming_message(u8* par, u8 par_len)
{
    knob_request_t* p_knob_request = (knob_request_t*)par;
    int err = -1;

    switch(p_knob_request->op)
    {
        case G_ONOFF_SET:
        case G_ONOFF_SET_NOACK:
        {
            err = element_handle_on_off_set(
                     p_knob_request->model_idx, p_knob_request->par,  p_knob_request->par_len);
            break;
        }
        case LIGHT_CTL_SET:
        case LIGHT_CTL_SET_NOACK:
        {
            err = element_handle_ctl_set(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
            break;
        }
        case LIGHT_CTL_TEMP_SET:
        case LIGHT_CTL_TEMP_SET_NOACK:
        {
            err = element_handle_light_temp_set(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
            break;
        }
        case LIGHTNESS_SET:
        {
            err = element_handle_lightness_set(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
            break;
        	break;
        }
        case LIGHT_HSL_SET:
        case LIGHT_HSL_SET_NOACK:
        {
            err = element_handle_hsl_set(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
            break;
        }
        case G_LEVEL_SET:
        case G_LEVEL_SET_NOACK:
            err = element_handle_level_set(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
            break;

        case ((VD_CONFIG_NODE_SET_ACK << 8)|0x11):  // Set and get
            err = element_handle_config_node_set(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
            break;

        case ((VD_LIGHT_SPEAKER_SET << 8)|0x11):
        case ((VD_LIGHT_SPEAKER_SET_NOACK << 8)|0x11):
			err = element_handle_speaker_set(
							p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len
						);
			break;

        /******************************* GET MESSAGE *******************************/
        case G_ONOFF_GET:
            err = element_handle_on_off_get(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
        	break;

        case LIGHT_CTL_GET:
        {
            err = element_handle_ctl_get(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
            break;
        }
        case LIGHTNESS_GET:
        {
            err =  element_handle_lightness_get(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
            break;
        }

        case G_LEVEL_GET:
            err =  element_handle_level_get(
                     p_knob_request->model_idx, p_knob_request->par, p_knob_request->par_len);
            break;

        case ((VD_LIGHT_SPEAKER_GET << 8)|0x11):
            if(p_knob_request->model_idx < ELE_CNT) {
            	if(endpoint_type[p_knob_request->model_idx] == TYPE_AUDIO) {
					element_response_audio_status(p_knob_request->model_idx);
					element_response_audio_volume(p_knob_request->model_idx);
            	}
            }
			break;
    }
    return err;
}

