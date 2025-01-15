#ifndef _ROBOT_H
#define _ROBOT_H

#include <iostream>

class Robot {
	public: // Constrcuts
		Robot() { std::cout << "Constructing a Robot" << std::endl; };
		~Robot() { std::cout << "Destructing a Robot" << std::endl; };
	public: // Utilities
		void speak() { std::cout << "Robot Speaking" << std::endl; };
		void walk() { std::cout << "Robot Walking" << std::endl; };
		void work() { std::cout << "Robot Working" << std::endl; };
};

#endif