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

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;

	std::cout << "Main Meal" << std::endl;
	
	MainMeal * hamburger = new Hamburger();
	MainMeal * hotDog = new HotDog();
	MainMeal * cheeseBurger = new CheeseBurger();
	
	hamburger -> OnRender();
	hotDog -> OnRender();
	cheeseBurger -> OnRender();
	
	delete hamburger;
	delete hotDog;
	delete cheeseBurger;
	
	std::cout << "Side Meal" << std::endl;
	
	SideMeal * frenchFries = new FrenchFries();
	SideMeal * onionRings = new OnionRings();
	SideMeal * chikenChunks = new ChikenChunks();
	
	frenchFries -> OnRender();
	onionRings -> OnRender();
	chikenChunks -> OnRender();
	
	delete frenchFries;
	delete onionRings;
	delete chikenChunks;
	
	std::cout << "Drinks" << std::endl;
	
	Drinks * cola = new Cola();
	Drinks * soda = new Soda();
	Drinks * fanta = new Fanta();
	
	cola -> OnRender();
	soda -> OnRender();
	fanta -> OnRender();
	
	delete cola;
	delete soda;
	delete fanta;
	
}