/*
 * timer_1_private.h
 *
 *  Created on: Jun 23, 2024
 *      Author: Kimo Store
 *
 *  This header file contains the private definitions for the TIMER1 module.
 *  It includes the register addresses and bit positions for the ATmega328P microcontroller.
 */

#ifndef TIMER_1_PRIVATE_H_
#define TIMER_1_PRIVATE_H_

#include "../lib/utils.h"  // Include utility library

// Define register addresses for ATmega328P

#define TCCR1A REG8(0x80)  // Timer/Counter Control Register A
#define COM1A1 7  // Compare Match Output A Mode bit 1
#define COM1A0 6  // Compare Match Output A Mode bit 0
#define COM1B1 5  // Compare Match Output B Mode bit 1
#define COM1B0 4  // Compare Match Output B Mode bit 0
#define WGM11  1  // Waveform Generation Mode bit 1
#define WGM10  0  // Waveform Generation Mode bit 0

#define TCCR1B REG8(0x81)  // Timer/Counter Control Register B
#define ICNC1 7  // Input Capture Noise Canceler
#define ICES1 6  // Input Capture Edge Select
#define WGM13 4  // Waveform Generation Mode bit 3
#define WGM12 3  // Waveform Generation Mode bit 2
#define CS12  2  // Clock Select bit 2
#define CS11  1  // Clock Select bit 1
#define CS10  0  // Clock Select bit 0

#define TCCR1C REG8(0x82)  // Timer/Counter Control Register C
#define FOC1A 7  // Force Output Compare A
#define FOC1B 6  // Force Output Compare B

#define TCNT1H REG8(0x85)  // Timer/Counter Register High Byte
#define TCNT1L REG8(0x84)  // Timer/Counter Register Low Byte
#define TCNT1 REG16(0x84)  // Timer/Counter Register

#define OCR1AH REG8(0x89)  // Output Compare Register A High Byte
#define OCR1AL REG8(0x88)  // Output Compare Register A Low Byte
#define OCR1A REG16(0x88)  // Output Compare Register A

#define TIMSK1 REG8(0x6F)  // Timer/Counter Interrupt Mask Register
#define OCIE1A  1  // Output Compare A Match Interrupt Enable

#endif /* TIMER_1_PRIVATE_H_ */