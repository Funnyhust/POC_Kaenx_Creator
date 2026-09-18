/*
 * cycle_funcs.c
 *
 *  Created on: Jul 23, 2025
 *      Author: DungTranBK
 */

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "utilities.h"
#include "vendor/common/system_time.h"
#include "cycle_funcs.h"
/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

static cycle_funcs_info_t cycle_funcs_info[CYCLE_FUNC_LIST_MAX];

/******************************************************************************/
/*                            PRIVATE FUNCTIONS                               */
/******************************************************************************/

static BOOL cycle_func_initialized = FALSE;

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/
/**
* @func   CycleFunc_init
* @brief
* @param
* @retval None
*/
void CycleFunc_init(void)
{
    for(uint8_t index_func = 0; index_func < CYCLE_FUNC_LIST_MAX; index_func++) {
        cycle_funcs_info[index_func].pfunc = NULL;
        cycle_funcs_info[index_func].is_used = FALSE;
    }
    cycle_func_initialized = TRUE;
}

/**
* @func   CycleFunc_add
* @brief
* @param
* @retval None
*/
void CycleFunc_add(cycle_handle_func pfunc, uint32_t time_length)
{
    for(uint8_t index_func = 0; index_func < CYCLE_FUNC_LIST_MAX; index_func++) {
        if(cycle_funcs_info[index_func].is_used == TRUE) {
            if(cycle_funcs_info[index_func].pfunc == pfunc) {
                // UPDATE TIME STEP
                cycle_funcs_info[index_func].time_start = clock_time_ms();
                // UPDATE TIME LENGTH
                cycle_funcs_info[index_func].time_length = time_length;
                return;
            }
        }
    }
    for(uint8_t index_func = 0; index_func < CYCLE_FUNC_LIST_MAX; index_func++) {
        if(cycle_funcs_info[index_func].is_used == FALSE) {
            cycle_funcs_info[index_func].is_used = TRUE;
            cycle_funcs_info[index_func].pfunc = pfunc;
            cycle_funcs_info[index_func].time_start = clock_time_ms();
            cycle_funcs_info[index_func].time_length = time_length;
            break;
        }
    }
}

/**
* @func   CycleFunc_remove
* @brief
* @param
* @retval None
*/
void CycleFunc_remove(cycle_handle_func pfunc)
{
    for(uint8_t index_func = 0; index_func < CYCLE_FUNC_LIST_MAX; index_func++) {
        if(cycle_funcs_info[index_func].is_used == TRUE) {
            if(cycle_funcs_info[index_func].pfunc == pfunc) {
                cycle_funcs_info[index_func].pfunc = NULL;
                cycle_funcs_info[index_func].is_used = FALSE;
            }
        }
    }
}

/**
* @func   CycleFunc_proc
* @brief
* @param
* @retval None
*/
void CycleFunc_proc(void)
{
    if(cycle_func_initialized == FALSE){
        return;
    }
    for(uint8_t index_func = 0; index_func < CYCLE_FUNC_LIST_MAX; index_func++) {
        if(cycle_funcs_info[index_func].is_used == TRUE) {
            if(clock_time_get_elapsed_time(cycle_funcs_info[index_func].time_start)   \
                    >= cycle_funcs_info[index_func].time_length) {
                cycle_funcs_info[index_func].time_start = clock_time_ms();
                if(cycle_funcs_info[index_func].pfunc != NULL) {
                    cycle_funcs_info[index_func].pfunc();
                }
                else {
                    CycleFunc_remove(cycle_funcs_info[index_func].pfunc);
                }
            }
        }
    }
}

// End File
