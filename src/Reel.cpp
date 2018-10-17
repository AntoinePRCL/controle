#include "Reel.h"

Reel::Reel(){
	prev = NULL;
	next = NULL;
}

Reel::Reel(float n_value) {
	value = n_value;
}
