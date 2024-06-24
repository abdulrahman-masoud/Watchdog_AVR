/*
 * WDGDrv.h
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 *
 *  This header file contains the public definitions and function prototypes for the Watchdog Driver (WDGDrv) module.
 *  It includes the definitions for the WDGDrv_init and WDGDrv_IsrNotification functions.
 */

#ifndef WDGDRV_WDGDRV_H_
#define WDGDRV_WDGDRV_H_

/*
 * Function:  WDGDrv_init
 * --------------------
 * Initialize the Watchdog Driver (WDGDrv) module.
 *
 *  returns: void
 */
void WDGDrv_init(void);

/*
 * Function:  WDGDrv_IsrNotification
 * --------------------
 * This function is called when the Watchdog Timer generates an interrupt.
 * It is used to handle the interrupt and perform necessary actions.
 *
 *  returns: void
 */
void WDGDrv_IsrNotification(void);

#endif /* WDGDRV_WDGDRV_H_ */