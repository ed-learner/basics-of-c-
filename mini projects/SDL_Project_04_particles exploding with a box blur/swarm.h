#pragma once
#include "particle.h"

class swarm{
private:
	Particle *Particles;
	int previousTime;

public:
	swarm();
	~swarm();

	const static int numberOfParticles = 5000;
	const Particle *const getParticle() { return Particles; }
	void update(int elapsed);
};

