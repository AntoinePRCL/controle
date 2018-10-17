#include "Reel.h"

Reel::Reel(){
	next = nullptr;
}

Reel::Reel(Reel* n_next, float n_value) {
	value = n_value;
	next = n_next;
}

Reel::~Reel() {}
