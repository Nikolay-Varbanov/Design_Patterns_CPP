#ifndef _HTML_ELEMENT_H
#define _HTML_ELEMENT_H

#include <iostream>

class HTMLElement {
	public: // Constructs
		HTMLElement() { std::cout << "Constrcuting a HTMLElement" << std::endl; };
		virtual ~HTMLElement() { std::cout << "Destrcuting a HTMLElement" << std::endl; };
	public: // Utilities
		virtual void OnRender() = 0;
		virtual void add(HTMLElement * element) { 
			std::cout << "Dummy implementation of HTMLElement::add(...)" << std::endl; 
		};
};

#endif