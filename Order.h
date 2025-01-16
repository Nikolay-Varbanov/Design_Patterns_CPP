#ifndef _ORDER_H
#define _ORDER_H

#include <iostream>

#include "MainMeal.h"
#include "SideMeal.h"
#include "Drinks.h"
#include "Toy.h"

class Order {
	public: // Constructs
		Order(MainMeal * tmpMainMeal,
					SideMeal * tmpSideMeal,
					Drinks * tmpDrinks,
					Toy * tmpToy) : _mainMeal(tmpMainMeal),
													_sideMeal(tmpSideMeal),
													_drinks(tmpDrinks), 
													_toy(tmpToy) { 
			std::cout << "Constructing an Order" << std::endl; 
				};
		~Order() { 
			std::cout << "Destructiong an Order" << std::endl; 
			
			delete _mainMeal;
			delete _sideMeal;
			delete _drinks;
			delete _toy;
			
			};
	public: // Facilities
		MainMeal * _mainMeal;
		SideMeal * _sideMeal;
		Drinks * _drinks;
		Toy * _toy;
	public: // Utilities
		void OnRender() {
			std::cout << std::endl
								<< "Order has: "
								<< std::endl
								<< std::endl;
			
			_mainMeal -> OnRender();
			_sideMeal -> OnRender();
			_drinks -> OnRender();
			_toy -> OnRender();
			
			std::cout << std::endl;
			
		};
};

#endif