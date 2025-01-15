#ifndef _COMMAND_H
#define _COMMAND_H

#include <iostream>

class Command {
	public: // Constrcuts
		Command() { std::cout << "Constructing a Command" << std::endl; };
		virtual ~Command() { std::cout << "Destructing a Command" << std::endl; };
	public: // Utilities
		virtual void OnExecute() = 0;
};

#endif