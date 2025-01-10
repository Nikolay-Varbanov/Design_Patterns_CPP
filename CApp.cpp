#include <iostream>

#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

#include "SequentialSearch.h"
#include "BinaryTreeSearch.h"
#include "HashTableSearch.h"

#include "Collection.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;

	SortBehaviour * merge = new MergeSort();
	
	SortBehaviour * quick = new QuickSort();
	
	SortBehaviour * heap = new HeapSort();
	
	SearchBehaviour * sequential = new SequentialSearch();
	
	SearchBehaviour * binaryTree = new BinaryTreeSearch();
	
	SearchBehaviour * hashTable = new HashTableSearch();
	
	std::cout << "Testing of sort behaviours" << std::endl << std::endl;
	
	merge -> sort();
	
	quick -> sort();
	
	heap -> sort();
	
	std::cout << std::endl << "Ending testing of sort behaviours" << std::endl << std::endl;
	
	std::cout << "Testing of search behaviours" << std::endl << std::endl;
	
	sequential -> search();
	
	binaryTree -> search();
	
	hashTable -> search();
	
	std::cout << std::endl << "Ending testing of search behaviours" << std::endl << std::endl;

	std::cout << "Testing of Collection context" << std::endl << std::endl;
	
	Collection colA;
	colA.set_sort(merge);
	colA.sort();
	
	Collection colB;
	colB.set_search(binaryTree);
	colB.search();
	
	std::cout << std::endl << "Ending testing of Collection context" << std::endl << std::endl;

	delete merge;
	
	delete quick;
	
	delete heap;
	
	delete sequential;
	
	delete binaryTree;
	
	delete hashTable;
}