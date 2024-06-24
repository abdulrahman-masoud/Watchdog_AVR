/*
 * timer_0_private.h
 *
 *  Created on: Jun 23, 2024
 *      Author: DELL
 *
 *  This header file contains the private definitions for the TIMER0 module.
 *  It includes the register addresses and bit positions for the ATmega328P microcontroller.
 */

#ifndef TIMER0_TIMER_0_PRIVATE_H_
#define TIMER0_TIMER_0_PRIVATE_H_

#include "../lib/utils.h"  // Include utility library

// Define register addresses for ATmega328P

#define TCCR0A REG8(0x44)  // Timer/Counter Control Register A
#define COM0A1 7  // Compare Match Output A Mode bit 1
#define COM0A0 6  // Compare Match Output A Mode bit 0
#define COM0B1 5  // Compare Match Output B Mode bit 1
#define COM0B0 4  // Compare Match Output B Mode bit 0
#define WGM01  1  // Waveform Generation Mode bit 1
#define WGM00  0  // Waveform Generation Mode bit 0

#define TCCR0B REG8(0x45)  // Timer/Counter Control Register B
#define FOC0A 7  // Force Output Compare A
#define FOC0B 6  // Force Output Compare B
#define WGM02 3  // Waveform Generation Mode bit 2
#define CS02  2  // Clock Select bit 2
#define CS01  1  // Clock Select bit 1
#define CS00  0  // Clock Select bit 0

#define TCNT0 REG8(0x46)  // Timer/Counter Register
#define TIMSK0 REG8(0x6E)  // Timer/Counter Interrupt Mask Register
#define OCIE0A  1  // Output Compare A Match Interrupt Enable
#define OCIE0B  2  // Output Compare B Match Interrupt Enable
#define TOIE0   0  // Timer/Counter Overflow Interrupt Enable

#define TIFR0 REG8(0x35)  // Timer/Counter Interrupt Flag Register
#define OCF0A  1  // Output Compare A Match Flag
#define OCF0B  2  // Output Compare B Match Flag
#define TOV0   0  // Timer/Counter Overflow Flag

#define OCR0A REG8(0x47)  // Output Compare Register A
#define OCR0B REG8(0x48)  // Output Compare Register B

#endif /* TIMER0_TIMER_0_PRIVATE_H_ */