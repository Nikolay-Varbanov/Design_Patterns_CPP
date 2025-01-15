#include <iostream>

#include "Robot.h"

#include "RobotControl.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	Robot * _robot = new Robot();
	
	RobotControl * _robotControl = new RobotControl(_robot, &Robot::walk);
	
	RobotControl * _robotControlOne = new RobotControl(_robot, &Robot::work);
	
	_robotControl -> OnExecute();
	
	_robotControlOne -> OnExecute();
	
	delete _robot;
	
	delete _robotControl;
	
	delete _robotControlOne;
	
}