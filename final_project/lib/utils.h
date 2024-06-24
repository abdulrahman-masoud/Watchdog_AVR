/*
 * utils.h
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This header file contains utility definitions for the project.
 *  It includes the standard types header file and defines macros for accessing memory-mapped registers.
 */

#ifndef LIB_UTILS_H_
#define LIB_UTILS_H_

#include "Std_Types.h"  // Include the standard types definitions

// Macro to access an 8-bit memory-mapped register.
// ADDR: The address of the register.
// Returns: A reference to the 8-bit register at the specified address.
#define REG8(ADDR)  (*(uint8 *)(ADDR))

// Macro to access a 16-bit memory-mapped register.
// ADDR: The address of the register.
// Returns: A reference to the 16-bit register at the specified address.
#define REG16(ADDR)  (*(uint16 *)(ADDR))

#endif /* LIB_UTILS_H_ */