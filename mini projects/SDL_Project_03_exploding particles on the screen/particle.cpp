#include "particle.h"
#include <cstdlib>


using namespace std;

Particle::Particle() : pos_x(0), pos_y(0) {

	particleDirection = (2* PI *rand() )/ RAND_MAX;
	particleSpeed = (0.0001 * rand()) / RAND_MAX;
}

Particle::~Particle() {
	
}

void Particle::update(int interval) {
	x_speed = particleSpeed * cos(particleDirection);
	y_speed = particleSpeed * sin(particleDirection);

	pos_x += x_speed * interval;
	pos_y += y_speed * interval;

}
