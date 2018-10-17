class Reel {
public : 
	Reel();
	Reel(Reel* n_prev, float n_value);
	~Reel();
	float value;
	Reel* next;
};
