#include <iostream>
#include <string>

#include "SimpleElement.h"
#include "CompositeElement.h"



int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	std::string tagName = "div";
	
	HTMLElement * parent = NULL;

	HTMLElement * tmp = NULL;
	// div
	parent = new CompositeElement(tagName);
	
	tagName = "p";
	// p
	tmp = new SimpleElement(tagName);
	// add p to div
	parent -> add(tmp);
	// tmp is now div
	tmp = parent;
	
	tagName = "body";
	// Parent is body now
	parent = new CompositeElement(tagName);
	// add div to parent
	parent -> add(tmp);
	
	parent -> OnRender();
	
	delete parent;
	
	
}