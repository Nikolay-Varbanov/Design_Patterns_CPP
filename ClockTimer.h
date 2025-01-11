#ifndef _CLOCK_TIMER_H
#define _CLOCK_TIMER_H

class ClockTimer {
	public: // Constructs
		ClockTimer();
		~ClockTimer();
	public: // Facilities
		char tmpbuf[128];
	public: // Utilities
		int GetHour();
		int GetMinute();
		int GetSecond();
		void Tick();
};

#endif