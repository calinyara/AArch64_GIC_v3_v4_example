// ------------------------------------------------------------
// SP804 Dual Timer
// Header Filer
//
// Copyright ARM Ltd 2009. All rights reserved.
// ------------------------------------------------------------

#ifndef _SP804_TIMER_
#define _SP804_TIMER_

#include <stdint.h>

// Set base address of timer
// address - virtual address of SP804 timer
void setTimerBaseAddress(uint64_t address);


// Sets up the private timer
// load_value  - Initial value of timer
// auto_reload - Peroidic (SP804_SINGLESHOT) or one shot (SP804_SINGLESHOT)
// interrupt   - Whether to generate an interrupt

#define SP804_AUTORELOAD   (0)
#define SP804_SINGLESHOT   (1)
#define SP804_GENERATE_IRQ (1 << 5)
#define SP804_NO_IRQ       (0)

void initTimer(uint32_t load_value, uint32_t auto_reload, uint32_t interrupt);


// Starts the timer
void startTimer(void);


// Stops the timer
void stopTimer(void);


// Returns the current timer count
uint32_t getTimerCount(void);


// Clears the timer interrupt
void clearTimerIrq(void);

#endif

// ------------------------------------------------------------
// End of sp804_timer.h
// ------------------------------------------------------------
