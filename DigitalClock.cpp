#include <iostream>

#include "DigitalClock.h"

#include "Subject.h"

#include "ClockTimer.h"

DigitalClock::DigitalClock(ClockTimer * s) {
	std::cout << "Constructing a DigitalClock" << std::endl;
	_subject = s;
	_subject -> Attach(this);
}

DigitalClock::~DigitalClock() {
	std::cout << "Deconstructing a DigitalClock" << std::endl;
	_subject -> Detach(this);
}

void DigitalClock::Update(Subject * theChangedSubject) {
	if(theChangedSubject == _subject)
		Draw();
}

void DigitalClock::Draw() {
	
	std::cout << "DigitalClock says ding dong time is "
						<< _subject -> GetHour()
						<< ":"
						<< _subject -> GetMinute()
						<< ":"
						<< _subject -> GetSecond()
						<< std::endl;
	
}