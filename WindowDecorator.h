#ifndef _WINDOW_DECORATOR_H
#define _WINDOW_DECORATOR_H

#include <iostream>

class WindowDecorator {
	public: // Constructors
		WindowDecorator() {
			std::cout << "Constructing a WindowDecorator" << std::endl;
		}
		~WindowDecorator() {
			std::cout << "Destructing a WindowDecorator" << std::endl;
		}
	public: // Utilities
	protected: // Facilities
};

#endif