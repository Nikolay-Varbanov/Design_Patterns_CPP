#ifndef _WINDOW_DECORATOR_H
#define _WINDOW_DECORATOR_H

#include <iostream>

#include "Window.h"

class WindowDecorator : public Window {
	public: // Constructors
		WindowDecorator() {
			std::cout << "Constructing a WindowDecorator" << std::endl;
		}
		~WindowDecorator() {
			std::cout << "Destructing a WindowDecorator" << std::endl;
		}
	public: // Utilities
	protected: // Facilities
		Window * m_decoratedWindow;
};

#endif