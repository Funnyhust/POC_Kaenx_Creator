
/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/

#include "../../../proj/tl_common.h"
#include "../../../proj_lib/ble/blt_config.h"
#include "../../../proj_lib/ble/service/ble_ll_ota.h"
#include "../../../proj_lib/ble/ll//ll.h"
#include "../../common/app_beacon.h"
#include "../../common/generic_model.h"
#include "led_ev.h"
#include "factory_reset.h"

#include "debug.h"
#ifdef  FACTORY_RST_DBG_EN
#define DBG_FACTORY_RST_SEND_STR(x)   Dbg_sendString((s8*)x)
#define DBG_FACTORY_RST_SEND_INT(x)   Dbg_sendInt(x)
#define DBG_FACTORY_RST_SEND_HEX(x)   Dbg_sendHex(x)
#else
#define DBG_FACTORY_RST_SEND_STR(x)
#define DBG_FACTORY_RST_SEND_INT(x)
#define DBG_FACTORY_RST_SEND_HEX(x)
#endif
/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

FactoryReset_str factoryReset = {FALSE, 0 , 0};

/******************************************************************************/
/*                        PRIVATE FUNCTIONS DECLERATION                       */
/******************************************************************************/

/******************************************************************************/
/*                        EXPORT FUNCTIONS DECLERATION                        */
/******************************************************************************/
/**
 * @func    start_factory_reset
 * @brief
 * @param   None
 * @retval  None
 */
void start_factory_reset(void)
{
	DBG_FACTORY_RST_SEND_STR("\n start_factory_reset");
	sleep_us(500000);   // wait tx buffer send completed.
	irq_disable();
	factory_reset();
	//show_ota_result(OTA_SUCCESS);
	start_reboot();
}

/**
 * @func    start_factory_reset
 * @brief
 * @param   None
 * @retval  None
 */
void handle_factory_reset_with_delay(void)
{
	if(factoryReset.flag == TRUE){
		if(clock_time_exceed_ms(factoryReset.startTimeDelay, factoryReset.delayTime)) {
			if((clock_time_ms()     \
					- factoryReset.startTimeDelay) > MAX_FACTORY_RESET_DELAY_MS) {
				factoryReset.flag = FALSE;
			}else{
			    start_factory_reset();
			}
		}
	}
}
/**
 * @func    start_factory_reset
 * @brief
 * @param   None
 * @retval  None
 */
void setup_factory_reset_with_delay(u8 enable, bool factory_flag, bool led_flag)
{
	DBG_FACTORY_RST_SEND_STR("\n setup_factory_reset_with_delay");
	if(enable == TRUE) {
		if(factoryReset.flag == FALSE) {
			factoryReset.flag = TRUE;
			factoryReset.factory_flag = factory_flag;
			factoryReset.startTimeDelay = clock_time_ms();
			factoryReset.delayTime = 3000;
			send_config_node_reset_status_manual();
			if(led_flag == true) {
				send_led_evt(LED_NOTIFY_RESET_NETWORK);
			}
		}
	}
	else {
		factoryReset.flag = FALSE;
	}
}
/**
 * @func    factory_reset
 * @brief
 * @param   None
 * @retval  None
 */
int factory_reset()
{
	DBG_FACTORY_RST_SEND_STR("\n factory_reset");
	u8 r = irq_disable ();
	for(int i = 0; i < (FLASH_ADR_AREA_1_END - FLASH_ADR_AREA_1_START) / 4096; ++i) {
	    u32 adr = FLASH_ADR_AREA_1_START + i*0x1000;
	    if(factoryReset.factory_flag == true) {
	    	flash_erase_sector(adr);
	    }
	    else {
			if(adr != FLASH_ADR_KNOB_CONFIG) {
				flash_erase_sector(adr);
			}
	    }
	}
	for(int i = 0; i < (FLASH_ADR_AREA_2_END - FLASH_ADR_AREA_2_START) / 4096; ++i) {
	    u32 adr = FLASH_ADR_AREA_2_START + i*0x1000;
	    if(adr != FLASH_ADR_KNOB_CONFIG) {
		    flash_erase_sector(adr);
		}
	}
	if(factoryReset.factory_flag == true) {
		for(int i = 0; i < (FLASH_ADR_VENDOR_END - FLASH_ADR_VENDOR_START) / 4096; ++i) {
			u32 adr = FLASH_ADR_VENDOR_START + i*0x1000;
			flash_erase_sector(adr);
		}
	}
	else {
		flash_erase_sector(FLASH_ADR_SCENE_BUTTON);
		flash_erase_sector(FLASH_ADR_EXECUTION_SCENE);
		flash_erase_sector(FLASH_ADR_BINDING_PARAMS);
	}
    irq_restore(r);
	return 0;
}
/**
 * @func    kick_out
 * @brief
 * @param   None
 * @retval  None
 */
void kick_out(int led_en)
{
	DBG_FACTORY_RST_SEND_STR("\n kick_out");
	if(bls_ll_isConnectState()) {
		bls_ll_terminateConnection (0x13);
	}
	setup_factory_reset_with_delay(true, false, true);
}
