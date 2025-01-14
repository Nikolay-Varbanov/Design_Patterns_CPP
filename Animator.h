#ifndef _ANIMATOR_H
#define _ANIMATOR_H

#include "Animation.h"

class Animator {
	public: // Constructs
		Animator();
		~Animator();
	private: // Facilities
		Animation * _currentAnimation;
		char _event;
	public: // Utilities
		void OnLoop();
};

#endif