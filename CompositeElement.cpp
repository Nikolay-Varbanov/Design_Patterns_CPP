#include "CompositeElement.h"

CompositeElement::CompositeElement(std::string tagName) : SimpleElement(tagName) {
	
	std::cout << "Constructing a CompositeElement" << std::endl;
	
};

CompositeElement::~CompositeElement() {
	
	for(int i = 0; i < _children.size(); i++) {
		delete _children[i];
	}
	
	std::cout << "Destructing a CompositeElement tag: " << _tagName << std::endl;
	
};

void CompositeElement::OnRender() {
	
	RenderTagOpening();
	for(int i = 0; i < _children.size(); i++) {
		_children[i] -> OnRender();
	}
	RenderTagClosing();
	
};

void CompositeElement::add(HTMLElement * child) {
	
	_children.push_back(child);
	
};