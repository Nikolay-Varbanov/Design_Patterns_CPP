#include <iostream>

#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	std::cout << "Testing of sort behaviours" << std::endl << std::endl;
	
	SortBehaviour * merge = new MergeSort();
	
	SortBehaviour * quick = new QuickSort();
	
	SortBehaviour * heap = new HeapSort();
	
	merge -> sort();
	
	quick -> sort();
	
	heap -> sort();
	
	delete merge;
	
	delete quick;
	
	delete heap;
	
	std::cout << std::endl << "Ending testing of sort behaviours" << std::endl << std::endl;
	
}