#ifndef _CONCRETE_FACTORY_1_H
#define _CONCRETE_FACTORY_1_H

#include <iostream>
#include <string.h> // for strcmp(...)

#include "AbstractFactory.h"

#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
	public: // Constructs
		ConcreteFactory1() {
			std::cout << "Constructiong ConcreteFactory1" << std::endl;
		};
		~ConcreteFactory1() {
			std::cout << "Destructiong ConcreteFactory1" << std::endl;
		};
	public:
		Product *createProductA() {
			return new ConcreteProductA1();
		};
		Product *createProductB() {
			return new ConcreteProductB1();
		};
	
};

#endif