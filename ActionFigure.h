#ifndef _ACTION_FIGURE_H
#define _ACTION_FIGURE_H

#include <iostream>

#include "Toy.h"

class ActionFigure : public Toy {
	public: // Constructs
		ActionFigure() { std::cout << "Constructing a Action Figure" << std::endl; };
		~ActionFigure() { std::cout << "Destructing a Action Figure" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Action Figure" << std::endl; };
};

#endif