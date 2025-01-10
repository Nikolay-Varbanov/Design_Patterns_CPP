#ifndef _SEQUENTIALSEARCH_H
#define _SEQUENTIALSEARCH_H

#include <iostream>

#include "SearchBehaviour.h"

class SequentialSearch : public SearchBehaviour {
	public: // Utilities
		virtual void search() const {
			std::cout << "Sequential search()" << std::endl;
		}
};

#endif