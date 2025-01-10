#include <iostream>

#include "ConcreteFactoryA.h"

int main() {
	
	std::cout << "Hey Im Working here!!!" << std::endl;
	
	// Init
	FactoryMethod * factory = new ConcreteFactoryA();
	// explicit conversion to "(char*)" to suppres warning string to char*
	Product * productA = factory -> createProduct((char*)"ConcreteProductA"); 
	Product * productB = factory -> createProduct((char*)"ConcreteProductB");
	
	// Logic
	productA -> OnRender();
	productB -> OnRender();
	
	//CleanUp
	delete factory;
	delete productA;
	delete productB;
	
	
}