#ifndef _SIMPLE_WINDOW_H
#define _SIMPLE_WINDOW_H

#include <iostream>
#include <string>

#include "Window.h"

class SimpleWindow : public Window {
	public: // Constructs
		SimpleWindow() {std::cout << "Constructing SimpleWindow" << std::endl; };
		~SimpleWindow() {std::cout << "Destructing SimpleWindow" << std::endl; };
	public: // Utilities
		void draw() {
			std::cout << "Drawing a SimpleWindow" << std::endl;
		}
		std::string getDescription() {
				return "simple window\n";
		}
};

#endif