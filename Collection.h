#ifndef _COLLECTION_H
#define _COLLECTION_H

#include <iostream>

#include "SortBehaviour.h"
#include "SearchBehaviour.h"

class Collection {
	public: // Constructs
		Collection() { std::cout << "Creating a Collection" << std::endl;}
	private: // Facilities
		SortBehaviour * m_sort;
		SearchBehaviour * m_search;
	public: // Utilities
		void set_search(SearchBehaviour * behaviour) {
			m_search = behaviour;
		}
		void set_sort(SortBehaviour * behaviour) {
			m_sort = behaviour;
		}
		void search() const {
			if(m_search != NULL)
				m_search -> search();
		}
		void sort() const {
			if(m_sort != NULL)
				m_sort -> sort();
		}
};
#endif