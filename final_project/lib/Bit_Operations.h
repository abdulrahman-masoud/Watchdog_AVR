/*
 * Bit_Operations.h
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 */

#ifndef LIB_BIT_OPERATIONS_H_
#define LIB_BIT_OPERATIONS_H_

#define SET_BIT(X, BIT)            (X |=  (1 << (BIT)))
#define CLEAR_BIT(X, BIT)          (X &= ~(1 << (BIT)))
#define READ_BIT(X, BIT)           (((X) >> (BIT)) & 1)
#define TOGGLE_BIT(X, BIT)         (X ^= (1 << (BIT)))

#endif /* LIB_BIT_OPERATIONS_H_ */
