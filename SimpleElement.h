#ifndef _SIMPLE_ELEMENT_H
#define _SIMPLE_ELEMENT_H

#include <iostream>
#include <string>

#include "HTMLElement.h"

class SimpleElement : public HTMLElement {
	public: // Constructs
	SimpleElement(std::string tagName) : _tagName(tagName) { 
		std::cout << "Constructing a SimpleElement" << std::endl; 
	};
	~SimpleElement() { std::cout << "Destructing a SimpleElement tag: " << _tagName << std::endl; };
	public: // Facilities
		std::string _tagName;
	public: // Utilities
		void OnRender() { 
			std::cout << "<" 
								<< _tagName 
								<< ">" 
								<< std::endl 
								<< "</" 
								<< _tagName 
								<< ">" 
								<< std::endl; 
		};
};

#endif