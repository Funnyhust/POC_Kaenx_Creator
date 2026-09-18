/*
 * key_report.h
 *
 *  Created on: Feb 27, 2020
 *      Author: DungTran BK
 */

#ifndef KEY_REPORT_H_
#define KEY_REPORT_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "utilities.h"
/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/
enum ButtonKey_enum
	{
		EV_SW_ON               = 5,
		EV_SW_OFF              = 6,
		BTN_KEY_MAX            = EV_SW_OFF,
		EV_BTN_CNT             = 2,   // Total
	};
typedef u8 ButtonKey_enum;

/******************************************************************************/
/*                             EXPORT FUNCTIONS                               */
/******************************************************************************/
void key_report_send(u8 idx, u8 key_code, BOOL en_execution);
uint16_t get_ele_addr_base_btn_idx(uint8_t idx);

#endif /* KEY_REPORT_H_ */
