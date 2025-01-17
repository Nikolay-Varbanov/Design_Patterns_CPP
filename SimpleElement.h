#ifndef _SIMPLE_ELEMENT_H
#define _SIMPLE_ELEMENT_H

#include <iostream>
#include <string>


class SimpleElement {
	public: // Constructs
	SimpleElement(std::string tagName) : _tagName(tagName) { 
		std::cout << "Constructing a SimpleElement" << std::endl; 
	};
	~SimpleElement() { std::cout << "Destructing a SimpleElement" << std::endl; };
	public: // Facilities
		std::string _tagName;
	public: // Utilities
		void OnRender() { std::cout << "<" << _tagName << "></" << _tagName << ">" << std::endl; };
};

#endif