#include "swarm.h"

swarm::swarm(): previousTime(0) {
	Particles = new Particle[numberOfParticles];
}

swarm::~swarm() {
	delete[] Particles;

}

void swarm::update(int elapsed) {
	int interval = elapsed - previousTime;

	for (int i = 0; i < swarm::numberOfParticles; i++) {
		Particles[i].update(interval);
	}

	previousTime = elapsed;

}