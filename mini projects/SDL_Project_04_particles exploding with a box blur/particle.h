#pragma once
class Particle{
public:
	Particle();
	~Particle();
	void update(int interval);
	double pos_x;
	double pos_y;

private:
	const long double PI = 3.14159265358979323846;
	double particleSpeed;
	double particleDirection;
	double x_speed;
	double y_speed;
	void init();
};

