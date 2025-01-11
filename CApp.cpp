#include <iostream>

#include "ClockTimer.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	ClockTimer * centralClock = new ClockTimer();
	
	std::cout << "centralClock Test"
						<< std::endl
						<< centralClock -> GetHour()
						<< ":"
						<< centralClock -> GetMinute()
						<< ":"
						<< centralClock -> GetSecond()
						<< std::endl;
	
	delete centralClock;
	
}