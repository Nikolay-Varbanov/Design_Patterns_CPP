#ifndef _HEAP_SORT_H
#define _HEAP_SORT_H

#include <iostream>

#include "SortBehaviour.h"

class HeapSort : public SortBehaviour {
	public: // Utilities
		virtual void sort() const {
			std::cout << "Heap sort()" << std::endl;
		}
};

#endif