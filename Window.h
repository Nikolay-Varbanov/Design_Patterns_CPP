#ifndef _WINDOW_H
#define _WINDOW_H

#include <iostream>
#include <string>

class Window {
	public: // Constructs
		virtual ~Window() { std::cout << "Destructing a Window" << std::endl; }
	public: // Utilities
		virtual void draw() = 0;
		virtual std::string getDescription() = 0;
};

#endif