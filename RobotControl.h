#ifndef _ROBOT_CONTROL_H
#define _ROBOT_CONTROL_H

#include <iostream>

#include "Command.h"
#include "Robot.h"

class RobotControl : public Command {
	public: // constrcuts
		RobotControl(Robot * receiver, void (Robot::*receiverMethod)()) : _receiver(receiver),
																																			_receiverMethod(receiverMethod) { 
			
			std::cout << "Constructing a RobotControl" << std::endl; 
			};
		~RobotControl() { std::cout << "Destructing a RobotControl" << std::endl; };
	private: // Facilities
		Robot * _receiver;
		void (Robot::*_receiverMethod)();
	public: // Utilities
		void OnExecute() { (_receiver->*_receiverMethod)(); };
};

#endif