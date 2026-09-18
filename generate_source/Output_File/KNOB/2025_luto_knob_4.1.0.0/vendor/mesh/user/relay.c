/*
 * relay.c
 *
 *  Created on: Jun 3, 2025
 *      Author: DungTranBK
 */

#include "proj_lib/sig_mesh/app_mesh.h"
#include "vendor/common/system_time.h"
#include "flash_user.h"
#include "utilities.h"
#include "user_irq.h"
#include "knob/config.h"
#include "relay.h"

#include "debug.h"
#ifdef  RELAY_DBG_EN
#define DBG_RELAY_SEND_STR(x)   Dbg_sendString((s8*)x)
#define DBG_RELAY_SEND_INT(x)   Dbg_sendInt(x)
#define DBG_RELAY_SEND_HEX(x)   Dbg_sendHex(x)
#else
#define DBG_RELAY_SEND_STR(x)
#define DBG_RELAY_SEND_INT(x)
#define DBG_RELAY_SEND_HEX(x)
#endif


type_relay_handle_state_change pv_relay_handle_state_change = NULL;

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

static uint16_t hold_time_on[RELAY_CNT];
static uint16_t hold_time_off[RELAY_CNT];

const u16 pin_control_arr[RELAY_CNT] = RELAY_ARR;

static u16 RLS_TARGET = 0;
static u16 RLS_PRESENT = 0;


typedef struct {
	uint8_t channel;
	uint8_t state;
	uint8_t step;
} relay_active_t;

static relay_active_t active_channel_st = {
		.channel = NO_RL_NUMBER_ACTIVE,
		.state = 0xFF,
		.step = 0
	};


static uint8_t  relay_module_status = RELAY_MODULE_IDLE;
static uint8_t  done_on_off_control_flag = CONTROL_IN_PROCESSING;
static uint32_t start_time_wait_zero_point = 0;
static uint8_t  control_when_timeout = 0;
static uint16_t half_period_of_grid = 10000;



#if CACULATOR_FREQ_EN

typedef struct {
	u32 last_irq_t_ms;
	u32 start_t_ms;
	u8  freq;
	u8  cnt;
}caculator_grid_freq_t;

static caculator_grid_freq_t caculator_grid_freq_st = {
	.last_irq_t_ms = 0,
	.start_t_ms = 0,
	.freq = 50,
	.cnt = 0,
};
#endif

/******************************************************************************/
/*                        PRIVATE FUNCTIONS DECLERATION                       */
/******************************************************************************/
static void relay_on(u8 idx);
static void relay_off(u8 idx);

/******************************************************************************/
/*                        EXPORT FUNCTIONS DECLERATION                        */
/******************************************************************************/

/**
 * @func   RL_ChangeRelayStateWhenTimerOV (For RTC Timer)
 * @brief  Interrupt server of RTC module, used to turn on/off
 *         the relay at zero point
 * @param  None
 * @retval None
 */
void RL_changeRelayStateWhenTimerOV(void)
{
	timer1_disable();
	if(RELAY_MODULE_IDLE != relay_module_status){
        if(active_channel_st.channel < RELAY_CNT){
        	if(advanced_config[active_channel_st.channel].switch_mode.mode == LIGHTING_SWITCH_TYPE) {
        		relay_on(active_channel_st.channel);
        	}
        	else {
        		(active_channel_st.state == G_ON)?(relay_on(active_channel_st.channel)):(relay_off(active_channel_st.channel));
        	}
		}
		done_on_off_control_flag = CONTROL_SUCCESS;
		relay_module_status = RELAY_MODULE_IDLE;
	}
}

/**
 * @func   RL_handleZeroSync
 * @brief
 * @param  None
 * @retval None
 */
void RL_handleZeroSync(void)
{
	if(control_when_timeout == 0){
		control_when_timeout = 1;
        timer1_enable();
		#if !CACULATOR_FREQ_EN
		gpio_en_interrupt(PIN_ZERO_DETECT, IRQ_DISABLE);
		#endif
	}
#if CACULATOR_FREQ_EN
	if(clock_time_exceed_ms(caculator_grid_freq_st.last_irq_t_ms, TIMER_5MS)){
	    caculator_grid_freq_st.cnt++;
	    caculator_grid_freq_st.last_irq_t_ms = clock_time_ms();
	}
	if((clock_time_get_elapsed_time   \
			(caculator_grid_freq_st.start_t_ms) >= TIMER_1S) && (caculator_grid_freq_st.cnt != 0)){
		caculator_grid_freq_st.start_t_ms = clock_time_ms();
		caculator_grid_freq_st.freq = caculator_grid_freq_st.cnt;
		// Update PERIOD
		if(clock_time_exceed_s(0, 5)){
			if(caculator_grid_freq_st.freq < 55){
				half_period_of_grid = 10000;
			}
			else{
				half_period_of_grid = 8000;
			}
			DBG_RELAY_SEND_STR("\n FREQ: ");
			DBG_RELAY_SEND_INT(caculator_grid_freq_st.freq);
		}
		caculator_grid_freq_st.cnt = 0;
	}
	// DBG_RELAY_SEND_STR("\n Zero Point Detected");
#else
	DBG_RELAY_SEND_STR("\n Zero Point Detected");
#endif
}

/**
 * @func    relay_callback_init
 * @brief
 * @param
 * @retval  None
 */
void relay_callback_init(type_relay_handle_state_change func)
{
	if(func != NULL) {
		pv_relay_handle_state_change = func;
	}
}

/**
 * @func    relay_init
 * @brief
 * @param
 * @retval  None
 */
void relay_init(void)
{
	foreach(i, RELAY_CNT) {
		gpio_set_func(pin_control_arr[i], AS_GPIO);
		gpio_set_output_en(pin_control_arr[i], 1);
		gpio_set_input_en(pin_control_arr[i], 0);
		gpio_write(pin_control_arr[i], RL_OFF);
		// Var
		hold_time_on[i] = DEFAULT_RL_ON_DELAY;
		hold_time_off[i] = DEFAULT_RL_OFF_DELAY;
	}
	// ZERO
#if IRQ_GPIO_ENABLE
	gpio_set_interrupt_init(
				ZERO_DETECT_PIN, PM_PIN_PULLUP_1M, 0, FLD_IRQ_GPIO_EN
			);
	gpio_en_interrupt(ZERO_DETECT_PIN, IRQ_ENABLE);
	gpio_irq_callback_init(RL_handleZeroSync);
#endif
	// TIMER
	timer1_hw_config();
	timer1_irq_callback_init(RL_changeRelayStateWhenTimerOV);
}

/**
 * @func    relay_on
 * @brief
 * @param
 * @retval  None
 */
static void relay_on(u8 idx)
{
	if(idx < RELAY_CNT) {
		gpio_write(pin_control_arr[idx], RL_ON);
	}
}

/**
 * @func    relay_off
 * @brief
 * @param
 * @retval  None
 */
static void relay_off(u8 idx)
{
	if(idx < RELAY_CNT) {
		gpio_write(pin_control_arr[idx], RL_OFF);
	}
}

/**
 * @func   RL_setUpTimerToChangeRlState
 * @brief  Set up compare value for TIMER1
 * @param  Byte: State to change of the active relay channel ,Byte: Active relay channel
 * @retval None
 */
 static void RL_setUpTimerToChangeRlState(u8 st, u8 idx)
 {
	uint16_t compare_us;
	compare_us = (st == G_ON)	\
	     ?(half_period_of_grid - hold_time_on[active_channel_st.channel])	\
	           :(half_period_of_grid - hold_time_off[active_channel_st.channel]);

	timer1_update_cmp_value(compare_us);
}

/**
 * @func   relay_proc
 * @brief  Handling to turn on/off the relay, set the necessary parameters
 *         to turn on/off the relay at the correct zero point.
 * @param  None
 * @retval BYTE
 */
u8 relay_proc(void)
{
    if(relay_module_status == RELAY_MODULE_IDLE){
		if(done_on_off_control_flag == CONTROL_SUCCESS){
			if(active_channel_st.channel != NO_RL_NUMBER_ACTIVE){
				(active_channel_st.state == G_ON)
						?(RLS_PRESENT |= (1 << active_channel_st.channel))
								:(RLS_PRESENT &= ~(1 << active_channel_st.channel));
				if(pv_relay_handle_state_change != NULL) {
					pv_relay_handle_state_change(active_channel_st.channel, active_channel_st.state);
				}
				active_channel_st.channel = NO_RL_NUMBER_ACTIVE;
			}
			done_on_off_control_flag = CONTROL_IN_PROCESSING;
		}
		if(RLS_TARGET != RLS_PRESENT){
			foreach(i, RELAY_CNT) {
				if(((RLS_TARGET >> i) & 0x01) != ((RLS_PRESENT >> i) & 0x01)){
					active_channel_st.channel = i;
					active_channel_st.step = 0;
					active_channel_st.state = ((RLS_TARGET >> i) & 0x01);
					relay_module_status = RELAY_MODULE_BUSY;
					// Set up compare value for TIMER1
					RL_setUpTimerToChangeRlState(
								active_channel_st.state, active_channel_st.channel
							);
					gpio_en_interrupt(ZERO_DETECT_PIN, IRQ_ENABLE);
					start_time_wait_zero_point = clock_time_ms();
					control_when_timeout = 0;
					break;
				}
			}
			for(u8 i = RELAY_CNT; i < ELE_CNT; i++) {
				if(((RLS_TARGET >> i) & 0x01) != ((RLS_PRESENT >> i) & 0x01)){
					u8 st = ((RLS_TARGET >> i)&0x01);
					if(st == G_ON) {
						RLS_PRESENT |= (1 << i);
					}
					else {
						RLS_PRESENT &= (~(1 << i));
					}
					if(pv_relay_handle_state_change != NULL) {
						pv_relay_handle_state_change(i, st);
					}
				}
			}
			DBG_RELAY_SEND_STR("\n RLS_PRESENT: ");
			DBG_RELAY_SEND_HEX(RLS_PRESENT);

			DBG_RELAY_SEND_STR("\n RLS TARGET: ");
			DBG_RELAY_SEND_HEX(RLS_TARGET);

		}
	}
    else{
	    if(active_channel_st.channel != NO_RL_NUMBER_ACTIVE){
            if(control_when_timeout == 0){
				if(clock_time_get_elapsed_time(start_time_wait_zero_point) > TIMER_50MS){
					DBG_RELAY_SEND_STR("\r\n Wait Zero Point Time out");
					control_when_timeout = 1;
					timer1_enable();
#if !CACULATOR_FREQ_EN
					gpio_en_interrupt(
								PIN_ZERO_DETECT, IRQ_DISABLE
							);
#endif
				}
			}
		}
	}
	return relay_module_status;
}

/**
 * @func    relay_get_target_state
 * @brief
 * @param
 * @retval  None
 */
u16 relay_get_target_state(void)
{
	return RLS_PRESENT;
}

/**
 * @func    relay_set_target_state
 * @brief
 * @param
 * @retval  None
 */
void relay_set_target_state(u8 idx, u8 st)
{
	if(idx < ELE_CNT) {
		if(st == G_ON){
			RLS_TARGET |= (uint16_t)(1 << idx);
			RLS_PRESENT &= (uint16_t)(~(1 << idx));
		} else {
			RLS_TARGET &= (uint16_t)(~(1 << idx));
			RLS_PRESENT |= (uint16_t)(1 << idx);
		}
		RLS_TARGET &= BACKUP_MASK_RL;
	}
}
