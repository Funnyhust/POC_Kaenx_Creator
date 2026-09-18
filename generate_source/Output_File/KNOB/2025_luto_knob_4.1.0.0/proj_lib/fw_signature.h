/*
 * fw_signature.h
 *
 *  Created on: Feb 18, 2025
 *      Author: DungTranBK
 */

#ifndef FW_SIGNATURE_H_
#define FW_SIGNATURE_H_

#include "drivers/8258/timer.h"
#include "drivers/8258/flash.h"

void blt_firmware_signature_proc(void);
void fw_signature_set_external_val(u32 ota_program_offset, u32 calib_firmware_addr, u32 ota_address);

#endif /* FW_SIGNATURE_H_ */
