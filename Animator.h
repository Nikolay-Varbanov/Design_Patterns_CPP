#ifndef _ANIMATOR_H
#define _ANIMATOR_H

class Animator {
	public: // Constructs
		Animator();
		~Animator();
	private: // Facilities
		char _event;
	public: // Utilities
		void OnLoop();
	private: // Utilities
		void OnEvent();
		void OnRender();
};

#endif