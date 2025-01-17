#include <iostream>
#include <string>

#include "SimpleElement.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	std::string tagName = "p";
	
	SimpleElement * _simpleElement = new SimpleElement(tagName);
	
	_simpleElement -> OnRender();
	
	delete _simpleElement;
	
	
}