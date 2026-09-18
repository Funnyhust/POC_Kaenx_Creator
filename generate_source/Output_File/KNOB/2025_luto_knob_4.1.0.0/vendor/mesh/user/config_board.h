/*
 * config_board.h
 *
 *  Created on: Jun 3, 2025
 *      Author: DungTranBK
 */

#ifndef CONFIG_BOARD_H_
#define CONFIG_BOARD_H_


#define SWITCH_CNT      ELE_CNT
#define RELAY_CNT       2

#define BACKUP_MASK_RL  0xFFFF

// Relay
#define RL0_IO_PIN       GPIO_PC4
#define RL1_IO_PIN       GPIO_PC1

#define ZERO_DETECT_PIN  GPIO_PB5


#endif /* CONFIG_BOARD_H_ */
