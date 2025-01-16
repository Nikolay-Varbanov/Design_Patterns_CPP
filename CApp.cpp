#include <iostream>

#include "Hamburger.h"
#include "HotDog.h"
#include "CheeseBurger.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	MainMeal * hamburger = new Hamburger();
	MainMeal * hotDog = new HotDog();
	MainMeal * cheeseBurger = new CheeseBurger();
	
	hamburger -> OnRender();
	hotDog -> OnRender();
	cheeseBurger -> OnRender();
	
	delete hamburger;
	delete hotDog;
	delete cheeseBurger;
	
}