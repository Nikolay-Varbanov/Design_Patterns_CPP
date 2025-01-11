#include <iostream>

#include "ClockTimer.h"

#include "DigitalClock.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	ClockTimer * centralClock = new ClockTimer();
	
	DigitalClock * digitalClock = new DigitalClock(centralClock);
	
	centralClock -> Tick();
	
	delete digitalClock;
	
	delete centralClock;
	
}