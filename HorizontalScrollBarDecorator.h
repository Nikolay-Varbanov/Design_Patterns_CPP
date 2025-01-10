#ifndef _HORIZONTAL_SCROLL_BAR_DECORATOR_H
#define _HORIZONTAL_SCROLL_BAR_DECORATOR_H

#include <iostream>
#include <string>

#include "WindowDecorator.h"

class HorizontalScrollBarDecorator : public WindowDecorator {
	public: // Constructs
		HorizontalScrollBarDecorator(Window * decoratedWindow) : WindowDecorator(decoratedWindow)  {
			std::cout << "Constructing a HorizontalScrollBarDecorator" << std::endl;
		}
		~HorizontalScrollBarDecorator() {
			std::cout << "Deconstructing a HorizontalScrollBarDecorator" << std::endl;
		}
	public: // Utility
		void draw() {
			std::cout << "HorizontalScrollBarDecorator::draw()" << std::endl;
			drawHorizontalScrollBar();
			m_decoratedWindow -> draw();
		}
		std::string getDescription() {
			return m_decoratedWindow -> getDescription() + "with horizontal scrollbar\n";
		}
	private: // Utility
		void drawHorizontalScrollBar() {
			std::cout << "Drawing a Horizontal Scroll Bar" << std::endl;
		}
};

#endif