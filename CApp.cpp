#include <iostream>
#include <string>

#include "Order.h"

#include "OrderBuilder.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	OrderBuilder * kidOrder = new OrderBuilder();
	
	std::string which = "Hamburger";
	
	if( kidOrder -> OrderMainMeal(which) ) {
		std::cout << "OrderMainMeal(which) Sucessfull" << std::endl;
	}
	
	which = "Chiken Chunks";
	
	if(	kidOrder -> OrderSaidMeal(which) ) {
		std::cout << "OrderSaidMeal(which) Sucessfull" << std::endl;
	}
	
	which = "Soda";
	
	if( kidOrder -> OrderDrinks(which) ) {
		std::cout << "OrderDrinks(which) Sucessfull" << std::endl;
	}
	
	which = "Car";
	
	if( kidOrder -> OrderToy(which) ) {
		std::cout << "OrderToy(which) Sucessfull" << std::endl;
	}
	
	Order * order = kidOrder -> OrderMeal();
	
	if(order != NULL) {	
		order -> OnRender();
		
		delete order;
	}
	
	delete kidOrder;
	
}