#include <iostream>
#include <vector>

#include "Subject.h"
#include "Observer.h"

Subject::Subject() {
	std::cout << "Constructing a Subject" << std::endl;
}

Subject::~Subject() {
	std::cout << "Deconstructing a Subject" << std::endl;
}

void Subject::Attach(Observer * o) {
	_observers.push_back(o);
}

void Subject::Detach(Observer * o) {
	
	int count = _observers.size();
	int i;
	
	for(i = 0; i < count; i++) {
		
		if(_observers[i] == o)
			break;
		
	}
	if(i < count)
		_observers.erase(_observers.begin() + i);
	
}

void Subject::Notify() {
	
	for(int i = 0; i < _observers.size(); i++)
			(_observers[i]) -> Update(this);
	
	// the "()" are there because of the priority of the "->"
	
}