#include <iostream>

// Main Meal
#include "Hamburger.h"
#include "HotDog.h"
#include "CheeseBurger.h"

// Side Meal
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

#include "Order.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	std::cout << "Order" << std::endl;
	
	MainMeal * hamburger = new Hamburger();
	
	SideMeal * frenchFries = new FrenchFries();
	
	Drinks * cola = new Cola();
	
	Toy * car = new Car();
	
	Order * order = new Order ( hamburger,
															frenchFries,
															cola,
															car );
	
	order -> OnRender();
	
	delete order;
	
}