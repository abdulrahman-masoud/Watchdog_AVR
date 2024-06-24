/*
 * WDGDrv_private.h
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 *
 *  This header file contains the private definitions for the Watchdog Driver (WDGDrv) module.
 *  It includes the register addresses and bit positions for the ATmega328P microcontroller.
 */

#ifndef WDGDRV_WDGDRV_PRIVATE_H_
#define WDGDRV_WDGDRV_PRIVATE_H_

#include "../lib/utils.h"  // Include utility library

// Define register addresses for ATmega328P

#define MCUSR REG8(0x55)  // MCU Status Register
#define  WDRF 3  // Watchdog Reset Flag

#define WDTCSR REG8(0x60)  // Watchdog Timer Control and Status Register
#define  WDIF 7  // Watchdog Timeout Flag
#define  WDIE 6  // Watchdog Timeout Interrupt Enable
#define  WDP3 5  // Watchdog Timer Prescaler 3
#define  WDCE 4  // Watchdog Change Enable
#define  WDE  3  // Watchdog Enable
#define  WDP2 2  // Watchdog Timer Prescaler 2
#define  WDP1 1  // Watchdog Timer Prescaler 1
#define  WDP0 0  // Watchdog Timer Prescaler 0

#endif /* WDGDRV_WDGDRV_PRIVATE_H_ */