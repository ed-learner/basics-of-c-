#pragma once
class Particle{
public:
	Particle();
	~Particle();
	void update();

	double pos_x;
	double pos_y;
	
	double x_speed;
	double y_speed;
};

