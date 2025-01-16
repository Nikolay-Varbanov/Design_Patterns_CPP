#ifndef _SIDE_MEAL_H
#define _SIDE_MEAL_H

#include <iostream>

class SideMeal {
	public: // Constructs
		SideMeal() { std::cout << "Constructing a Side Meal" << std::endl; };
		virtual ~SideMeal() { std::cout << "Destructing a Side Meal" << std::endl; };
	public: // Utilities
		virtual void OnRender() = 0;
};

#endif