#ifndef _BINARY_TREE_SEARCH_H
#define _BINARY_TREE_SEARCH_H

#include <iostream>

#include "SearchBehaviour.h"

class BinaryTreeSearch : public SearchBehaviour {
	public: // Utilities
		virtual void search() const {
			std::cout << "BinaryTree search()" << std::endl;
		}
};

#endif