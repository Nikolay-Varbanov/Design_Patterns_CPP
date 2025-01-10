#ifndef _VERTICAL_SCROLL_BAR_DECORATOR_H
#define _VERTICAL_SCROLL_BAR_DECORATOR_H

#include <iostream>
#include <string>

#include "WindowDecorator.h"

class VerticalScrollBarDecorator : public WindowDecorator {
	public: // Constructs
		VerticalScrollBarDecorator(Window * decoratedWindow) : WindowDecorator(decoratedWindow) 
			{ 
				std::cout << "Constructing a VerticalScrollBarDecorator" << std::endl; 
			}
		~VerticalScrollBarDecorator() 
			{ 
				std::cout << "Destructing a VerticalScrollBarDecorator" << std::endl; 
			}
	public: // Utilities
		void draw() {
			std::cout << "VerticalScrollBarDecorator::draw()" << std::endl;
			// draw a vertical scroll bar on it
			drawVerticalScrollBar();
			// draw a window
			m_decoratedWindow -> draw();
		}
		std::string getDescription() {
			return m_decoratedWindow ->getDescription() + "with vertical scrollbar\n";
		}
	private: // Utilities
		void drawVerticalScrollBar() {
			std::cout << "Drawing a Vertical Scroll Bar" << std::endl;
		}
};

#endif