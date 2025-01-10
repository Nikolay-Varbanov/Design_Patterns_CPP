#ifndef _QUICK_SORT_H
#define _QUICK_SORT_H

#include <iostream>

#include "SortBehaviour.h"

class QuickSort : public SortBehaviour {
	public: // Utilities
		virtual void sort() const {
				std::cout << "Quick sort()" << std::endl;
		}
};

#endif