#ifndef _MAIN_MEAL_H
#define _MAIN_MEAL_H

#include <iostream>

class MainMeal {
	public: // Constructs
		MainMeal() { std::cout << "Constructing a Main Meal" << std::endl; };
		virtual ~MainMeal() { std::cout << "Destructing a Main Meal" << std::endl; };
	public: // Utilities
		virtual void OnRender() = 0;
};

#endif