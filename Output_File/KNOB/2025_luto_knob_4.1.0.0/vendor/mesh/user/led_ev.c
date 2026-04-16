/*
 * led_ev.c
 *
 *  Created on: Sep 21, 2020
 *      Author: DungTran BK
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "../../common/app_provison.h"
#include "cycle_funcs.h"
#include "knob/knob.h"
#include "serial.h"
#include "led_ev.h"

#include "debug.h"
#ifdef  LED_EV_DBG_EN
#define DBG_LED_EV_SEND_STR(x)   Dbg_sendString((s8*)x)
#define DBG_LED_EV_SEND_INT(x)   Dbg_sendInt(x)
#define DBG_LED_EV_SEND_HEX(x)   Dbg_sendHex(x)
#define DBG_LED_EV_SEND_BYTE(x)  Dbg_sendHexOneByte(x)
#else
#define DBG_LED_EV_SEND_STR(x)
#define DBG_LED_EV_SEND_INT(x)
#define DBG_LED_EV_SEND_HEX(x)
#define DBG_LED_EV_SEND_BYTE(x)
#endif

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/
#define LED_MASK_NOTIFY_NW_STATUS      0x0001

/******************************************************************************/
/*                          PRIVATE FUNCTIONS DECLERATION                     */
/******************************************************************************/

/**
 * @func    led_evt_notify_join_success_delay
 * @brief   None
 * @param
 * @retval  None
 */
static void led_evt_notify_join_success_delay(void)
{
    knob_set_ring_command(RING_LED_MODE_BLINK,  \
               RING_LED_COLOR_PINK, 6, 500, KNOB_BLINK_TIMEOUT_MS, true);
    CycleFunc_remove(led_evt_notify_join_success_delay);
}

/**
 * @func    send_led_evt
 * @brief   None
 * @param
 * @retval  None
 */
void send_led_evt(u8 led_evt)
{
	switch( led_evt )
	{
		case LED_POWER_ON:
			if(STATE_DEV_UNPROV == get_provision_state()) {
                knob_set_ring_command(RING_LED_MODE_BLINK,  \
                           RING_LED_COLOR_RED, 6, 500, KNOB_BLINK_TIMEOUT_MS, false);
			}
			else {
                knob_set_ring_command(RING_LED_MODE_BLINK,  \
                		RING_LED_COLOR_PINK, 6, 500, KNOB_BLINK_TIMEOUT_MS, false);
			}
			DBG_LED_EV_SEND_STR("\n LED_POWER_ON");
			break;

		case LED_OTA_FAIL:
			 knob_set_ring_command(RING_LED_MODE_BLINK,  \
			        RING_LED_COLOR_RED, 12, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_OTA_SUCESS:
			 knob_set_ring_command(RING_LED_MODE_BLINK,  \
			        RING_LED_COLOR_BLUE, 12, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_FAIL_ADD_APPKEY:
		case LED_PROVISION_FAIL:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_RED, 6, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_SUC_ADD_APPKEY:
			CycleFunc_add(led_evt_notify_join_success_delay, TIMER_2S);
			break;

		case LED_PROVISION_SUCCESS:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_PINK, 6, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_CMD_SET_SUBSCRIPTION:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_BLUE, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_CMD_DEL_SUBSCRIPTION:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_RED, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_CMD_SET_SCENE:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_BLUE, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_CMD_DEL_SCENE:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_RED, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_CMD_BINDING_ENABLE:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_BLUE, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_CMD_BINDING_DISABLE:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_RED, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_CMD_BINDING_FAIL:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_RED, 2, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_LINK_TO_LIGHT_GROUP_SUCCESS:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_BLUE, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_LINK_TO_LIGHT_GROUP_FAIL:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_RED, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		case LED_NOTIFY_RESET_NETWORK:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_PINK, 4, 500, KNOB_BLINK_TIMEOUT_MS, true);
			break;

		case LED_NOTIFY_CONFIG_SUCCESS:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_BLUE, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;


		case LED_NOTIFY_CONFIG_FAILURE:
            knob_set_ring_command(RING_LED_MODE_BLINK,  \
                       RING_LED_COLOR_RED, 4, 500, KNOB_BLINK_TIMEOUT_MS, false);
			break;

		default: break;
	}
}
// End file
