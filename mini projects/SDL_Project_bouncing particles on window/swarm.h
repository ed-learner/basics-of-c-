#pragma once
#include "particle.h"

class swarm{
private:
	Particle *Particles;

public:
	swarm();
	~swarm();

	const static int numberOfParticles = 1000;
	const Particle *const getParticle() { return Particles; }
	void update();
};

