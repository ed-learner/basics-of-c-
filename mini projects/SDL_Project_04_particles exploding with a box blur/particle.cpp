#include "particle.h"
#include <cstdlib>


using namespace std;


Particle::Particle() : pos_x(0), pos_y(0) {

	init();
}

Particle::~Particle() {
	
}

void Particle::init() {
	pos_x = 0;
	pos_y = 0;

	particleDirection = (2 * PI * rand()) / RAND_MAX;
	particleSpeed = (0.05 * rand()) / RAND_MAX;
	particleSpeed = pow(particleSpeed, 2);
}

void Particle::update(int interval) {

	particleDirection += interval * 0.00005;
	x_speed = particleSpeed * cos(particleDirection);
	y_speed = particleSpeed * sin(particleDirection);

	pos_x += x_speed*interval;
	pos_y += y_speed*interval;

	if (pos_x < -1 || pos_x > 1 || pos_y < -1 || pos_y > 1) {

		init();
	}

	if (rand() < RAND_MAX / 100) {
		init();
	}


}



