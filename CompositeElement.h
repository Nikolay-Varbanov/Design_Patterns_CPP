#ifndef _COMPOSITE_ELEMENT_H
#define _COMPOSITE_ELEMENT_H

#include <iostream>
#include <string>
#include <vector>

#include "SimpleElement.h"

class CompositeElement : public SimpleElement {
	public: // Constructs
		CompositeElement(std::string);
		~CompositeElement();
	public: // Facilities
		//std::string _tagName;
		std::vector<HTMLElement *> _children;
	public: // Utilities
		void OnRender();
		void add(HTMLElement *);
};

#endif