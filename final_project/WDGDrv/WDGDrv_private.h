/*
 * WDGDrv_private.h
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 */

#ifndef WDGDRV_WDGDRV_PRIVATE_H_
#define WDGDRV_WDGDRV_PRIVATE_H_

#include "../lib/utils.h"

#define MCUSR REG8(0x55)
#define  WDRF 3

#define WDTCSR REG8(0x60)
#define  WDIF 7
#define  WDIE 6
#define  WDP3 5
#define  WDCE 4
#define  WDE  3
#define  WDP2 2
#define  WDP1 1
#define  WDP0 0

#endif /* WDGDRV_WDGDRV_PRIVATE_H_ */
