#ifndef _MERGE_SORT_H
#define _MERGE_SORT_H

#include <iostream>

#include "SortBehaviour.h"

class MergeSort : public SortBehaviour {
	public: // Utilities
		virtual void sort() const {
			std::cout << "Merge sort()" << std::endl;
		}
};

#endif