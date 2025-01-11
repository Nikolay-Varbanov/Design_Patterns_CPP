#ifndef _DIGITAL_CLOCK_H
#define _DIGITAL_CLOCK_H

#include "Observer.h"
// forward declarations
// Needed by the constructor signature
class ClockTimer;
// Needed by Update signature
class Subject;

class DigitalClock : public Observer {
	public: // Constructs
		DigitalClock(ClockTimer *);
		~DigitalClock();
	private: // Facilities
		ClockTimer * _subject;
	public: // Utilities
		void Update(Subject *);
		void Draw();
};

#endif