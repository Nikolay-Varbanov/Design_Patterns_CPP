#ifndef _SUBJECT_H
#define _SUBJECT_H

#include <vector>

// Forward declaration for Attach(...), Detach(...) and _observers
class Observer;

class Subject {
	public: // Constructs
		Subject();
		virtual ~Subject();
	private: // Facilities
		std::vector<Observer *> _observers;
	public: // Utilities
		virtual void Attach(Observer *);
		virtual void Detach(Observer *);
		virtual void Notify();
};

#endif