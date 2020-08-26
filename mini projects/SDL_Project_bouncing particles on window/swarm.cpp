#include "swarm.h"

swarm::swarm() {
	Particles = new Particle[numberOfParticles];
}

swarm::~swarm() {
	delete[] Particles;

}

void swarm::update() {
	for (int i = 0; i < swarm::numberOfParticles; i++) {
		Particles[i].update();
	}
}