#ifndef _ORDER_BUILDER_H
#define _ORDER_BUILDER_H

#include <string>

#include "Order.h"

#include "MainMeal.h"
#include "SideMeal.h"
#include "Drinks.h"
#include "Toy.h"

class OrderBuilder {
	public: // Constrcuts
		OrderBuilder();
		~OrderBuilder();
	public: // Facilities
		MainMeal * _tmpMainMeal;
		SideMeal * _tmpSideMeal;
		Drinks * _tmpDrinks;
		Toy * _tmpToy;
	public: // Utilities
		bool OrderMainMeal(std::string);
		bool OrderSaidMeal(std::string);
		bool OrderDrinks(std::string);
		bool OrderToy(std::string);
		Order * OrderMeal();
};

#endif