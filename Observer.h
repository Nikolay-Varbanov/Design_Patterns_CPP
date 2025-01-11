#ifndef _OBSERVER_H
#define _OBSERVER_H

#include <iostream>

// Forward declaration for Update(...) signature
class Subject;

class Observer {
	public: // Constructs
		Observer() { std::cout << "Constructing an Observer" << std::endl; };
		~Observer() { std::cout << "Deconstructing an Observer" << std::endl; };
	public: // Utilities
		virtual void Update(Subject * theChangeSubject) = 0;
};

#endif