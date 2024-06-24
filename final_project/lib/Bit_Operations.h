/*
 * Bit_Operations.h
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This header file contains the definitions of several macros that perform bit-level operations.
 *  These operations include setting a bit, clearing a bit, reading a bit, and toggling a bit.
 */

#ifndef LIB_BIT_OPERATIONS_H_
#define LIB_BIT_OPERATIONS_H_

// Macro to set a specific bit in a variable.
// X: The variable in which the bit is to be set.
// BIT: The position of the bit to be set (0-indexed).
#define SET_BIT(X, BIT)            (X |=  (1 << (BIT)))

// Macro to clear a specific bit in a variable.
// X: The variable in which the bit is to be cleared.
// BIT: The position of the bit to be cleared (0-indexed).
#define CLEAR_BIT(X, BIT)          (X &= ~(1 << (BIT)))

// Macro to read a specific bit in a variable.
// X: The variable from which the bit is to be read.
// BIT: The position of the bit to be read (0-indexed).
// Returns: The value of the bit (either 0 or 1).
#define READ_BIT(X, BIT)           (((X) >> (BIT)) & 1)

// Macro to toggle a specific bit in a variable.
// X: The variable in which the bit is to be toggled.
// BIT: The position of the bit to be toggled (0-indexed).
#define TOGGLE_BIT(X, BIT)         (X ^= (1 << (BIT)))

#endif /* LIB_BIT_OPERATIONS_H_ */