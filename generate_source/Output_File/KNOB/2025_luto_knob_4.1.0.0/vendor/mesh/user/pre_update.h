/*
 * pre_update.h
 *
 *  Created on: Sep 25, 2020
 *      Author: DungTran BK
 */

#ifndef PRE_UPDATE_H_
#define PRE_UPDATE_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "../../../proj/tl_common.h"
/******************************************************************************/
/*                       EXPORT TYPE AND DEFINITION                           */
/******************************************************************************/

typedef struct {
	u32 last_t_s;
	u32 interval_t_s;
}update_status_periodically_t;

#define MESH_PERIODIC_PUBLISH_RANDOM_TIME	600  // 10 minutes
#define MESH_PERIODIC_PUBLISH_TIME	        1500  // 25 minutes

#define MESH_PERIODIC_PUBLISH_RANDOM_TIME_PW_ON	5
#define MESH_PERIODIC_PUBLISH_TIME_PW_ON	    30

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/
void init_update_dev_status_after_join(void);
void update_dev_status_init(void);
void update_handle_update_device_st_periodically(void);

#endif /* PRE_UPDATE_H_ */
