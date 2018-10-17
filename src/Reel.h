class Reel {
public : 
	Reel();
	Reel(float n_value);
	~Reel();
	float value;
	Reel* prev;
	Reel* next;
};
