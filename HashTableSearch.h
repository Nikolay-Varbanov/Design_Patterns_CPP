#ifndef _HASH_TABLE_SEARCH_H
#define _HASH_TABLE_SEARCH_H

#include <iostream>

#include "SearchBehaviour.h"

class HashTableSearch : public SearchBehaviour {
	public: // Utilities
		virtual void search() const {
			std::cout << "HashTable search()" << std::endl;
		}
};

#endif