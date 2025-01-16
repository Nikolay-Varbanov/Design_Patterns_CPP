#include <iostream>

#include "OrderBuilder.h"
// MainMeal
#include "Hamburger.h"
#include "HotDog.h"
#include "CheeseBurger.h"
// SideMeal
#include "FrenchFries.h"
#include "OnionRings.h"
#include "ChikenChunks.h"
// Drinks
#include "Cola.h"
#include "Soda.h"
#include "Fanta.h"
// Toy
#include "Car.h"
#include "ActionFigure.h"
#include "SportToy.h"

OrderBuilder::OrderBuilder() :	_tmpMainMeal(NULL), 
																_tmpSideMeal(NULL),
																_tmpDrinks(NULL),
																_tmpToy(NULL) { 

	std::cout << "Constrcuting a OrderBuilder" << std::endl; 

};

OrderBuilder::~OrderBuilder() { 
	
	_tmpMainMeal = NULL; 
	_tmpSideMeal = NULL;
	_tmpDrinks = NULL;
	_tmpToy = NULL;
	
	std::cout << "Destructing a OrderBuilder" << std::endl; 
	
};

bool OrderBuilder::OrderMainMeal(std::string which) {
	
	if(which == "Hamburger") {
		_tmpMainMeal = new Hamburger();
		return true;
	} else if(which == "Hot Dog") {
		_tmpMainMeal = new HotDog();
		return true;
	} else if(which == "Cheese Burger") {
		_tmpMainMeal = new CheeseBurger();
		return true;
	}
	
	return false;
	
};

bool OrderBuilder::OrderSaidMeal(std::string which) {
	
	if(which == "French Fries") {
		_tmpSideMeal = new FrenchFries();
		return true;
	} else if(which == "Onion Rings") {
		_tmpSideMeal = new OnionRings();
		return true;
	} else if(which == "Chiken Chunks") {
		_tmpSideMeal = new ChikenChunks();
		return true;
	}
	
	return false;
	
};

bool OrderBuilder::OrderDrinks(std::string which) {
	
	if(which == "Cola") {
		_tmpDrinks = new Cola();
		return true;
	} else if(which == "Soda") {
		_tmpDrinks = new Soda();
		return true;
	} else if(which == "Fanta") {
		_tmpDrinks = new Fanta();
		return true;
	}
	
	return false;
	
};

bool OrderBuilder::OrderToy(std::string which) {
	
	if(which == "Car") {
		_tmpToy = new Car();
		return true;
	} else if(which == "Action Figure") {
		_tmpToy = new ActionFigure();
		return true;
	} else if(which == "Sport Toy") {
		_tmpToy = new SportToy();
		return true;
	}
	
	return false;
	
};

Order * OrderBuilder::OrderMeal() {
	
	if(	_tmpMainMeal != NULL && 
			_tmpSideMeal != NULL && 
			_tmpDrinks != NULL && 
			_tmpToy != NULL) {
		std::cout << "OrderBuilder::OrderMeal" << std::endl;
		Order * tmpOrder = new Order(	_tmpMainMeal, 
											_tmpSideMeal, 
											_tmpDrinks, 
											_tmpToy);
		
		return tmpOrder;
		
	}
	
	return NULL;
	
};