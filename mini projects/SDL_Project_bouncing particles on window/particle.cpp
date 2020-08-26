#include "particle.h"
#include <cstdlib>

Particle::Particle() {

	//pos within -1 and 1
	pos_x = (2.0 * (double)rand() / RAND_MAX) -1; 
	pos_y = (2.0 * (double)rand() / RAND_MAX) - 1;

	x_speed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1);
	y_speed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1);
}

Particle::~Particle() {
	
}
void Particle::update() {

	pos_x += x_speed;
	pos_y += y_speed;

	//keep the particles in the bounds of the window
	if (pos_x <= -1.0 || pos_x >= 1.0) {
		pos_x = -pos_y;
	}
	if (pos_y <= -1.0 || pos_y >= 1.0) {
		pos_y = -pos_y;
	}

}
