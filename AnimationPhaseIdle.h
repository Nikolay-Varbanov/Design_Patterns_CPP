#ifndef _ANIMATION_PHASE_IDLE_H
#define _ANIMATION_PHASE_IDLE_H

#include "Animation.h"

class AnimationPhaseIdle : public Animation {
	public: // Constructs
		AnimationPhaseIdle();
		~AnimationPhaseIdle();
	private: // Facilities
		char _event;
	public: // Utilities
		void OnLoop();
	private: // Utilities
		void OnEvent();
		void OnRender();
};

#endif