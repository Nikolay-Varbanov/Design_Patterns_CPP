#include <iostream>

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

int main() {
	
	std::cout << "Hey Im Working here!!!" << std::endl;
	
	// Init
	std::cout << "Initializing Factory Type 1" << std::endl << std::endl;
	AbstractFactory * factory1 = new ConcreteFactory1();
	
	std::cout << "Initializing Factory Type 1" << std::endl << std::endl;
	AbstractFactory * factory2 = new ConcreteFactory2();
	
	std::cout << std::endl << "Initializing Products Type 1" << std::endl << std::endl;
	Product * productA1 = factory1 -> createProductA();
	Product * productB1 = factory1 -> createProductB();
	
	std::cout << std::endl << "Initializing Products Type 2" << std::endl << std::endl;
	Product * productA2 = factory2 -> createProductA();
	Product * productB2 = factory2 -> createProductB();
	
	// Logic
	std::cout << std::endl << "Rendering Type 1" << std::endl << std::endl;
	productA1 -> OnRender();
	productB1 -> OnRender();
	
	std::cout << std::endl << "Rendering Type 2" << std::endl << std::endl;
	productA2 -> OnRender();
	productB2 -> OnRender();
	
	//CleanUp
	std::cout << std::endl << "Deleting Factory Type 1" << std::endl << std::endl;
	delete factory1;
	
	std::cout << std::endl << "Deleting Factory Type 2" << std::endl << std::endl;
	delete factory2;
	
	std::cout << std::endl << "Deleting Products Type 1" << std::endl << std::endl;
	delete productA1;
	delete productB1;
	
	std::cout << std::endl << "Deleting Products Type 2" << std::endl << std::endl;
	delete productA2;
	delete productB2;
	
	
}