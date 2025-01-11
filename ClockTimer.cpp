#include <iostream>

#include <time.h>
//#include <sys/types.h>
//#include <sys/typeb.h>
#include <string.h>

#include "ClockTimer.h"

ClockTimer::ClockTimer() { 
	std::cout << "Constructing ClockTimer" << std::endl;
	_strtime( tmpbuf );
}

ClockTimer::~ClockTimer() { 
	std::cout << "Deconstructing ClockTimer" << std::endl;
}

int ClockTimer::GetHour() {
	char timebuf[128];
	strncpy( timebuf, tmpbuf, 2);
	timebuf[2] = NULL;
	return atoi(timebuf);
}

int ClockTimer::GetMinute() { 
	char timebuf[128];
	strncpy( timebuf, tmpbuf+3, 2);
	timebuf[2] = NULL;
	return atoi(timebuf);
}

int ClockTimer::GetSecond() { 
	char timebuf[128];
	strncpy(timebuf, tmpbuf+6, 2);
	timebuf[2] = NULL;
	return atoi(timebuf);
}

void ClockTimer::Tick() { 
	_tzset();
	_strtime( tmpbuf );
	// Notify goes here
}