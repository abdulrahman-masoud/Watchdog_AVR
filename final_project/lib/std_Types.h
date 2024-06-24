/*
 * std_Types.h
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This header file contains the definitions of several standard types.
 *  These types include signed and unsigned integers of various sizes, floating point numbers, and a boolean type.
 */

#ifndef LIB_STD_TYPES_H_
#define LIB_STD_TYPES_H_

// Signed 8-bit integer, range: -128 to 127
typedef signed char         sint8;

// Unsigned 8-bit integer, range: 0 to 255
typedef unsigned char       uint8;

// Signed 16-bit integer, range: -32768 to 32767
typedef signed short        sint16;

// Unsigned 16-bit integer, range: 0 to 65535
typedef unsigned short      uint16;

// Signed 32-bit integer, range: -2147483648 to 2147483647
typedef signed long         sint32;

// Unsigned 32-bit integer, range: 0 to 4294967295
typedef unsigned long       uint32;

// Unsigned 64-bit integer, range: 0 to 18446744073709551615
typedef unsigned long long  uint64;

// Signed 64-bit integer, range: -9223372036854775808 to 9223372036854775807
typedef signed long long    sint64;

// 32-bit floating point number, range: 1.1754943635e-38 to 3.4028235e+38
typedef float               float32;

// 64-bit floating point number, range: 2.2250738585072015e-308 to 1.7976931348623158e+308
typedef double              float64;

// Boolean type for use with TRUE/FALSE
typedef unsigned char       boolean;

#endif /* LIB_STD_TYPES_H_ */