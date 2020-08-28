#include <iostream>
#include <SDL.h>
#include <math.h>
#include "window.h"
#include "particle.h"
#include "swarm.h"

using namespace std;

int main(int argc, char* argv[]) {

	double windowWidthCenter = Window::SCREEN_WIDTH /2;
	double windowHeightCenter = Window::SCREEN_HEIGHT /2;

	Window screen;
	swarm swm;

	if (screen.init() == false) {
		cout << "Error initializing SDL" << endl;
	}

	while (true) {
		int elapsed = SDL_GetTicks();
		screen.clear();
		swm.update(elapsed);
	
		unsigned char red   = (unsigned char)(1 + sin(elapsed * 0.0001)) * 128;
		unsigned char green = (unsigned char)(1 + sin(elapsed * 0.0004)) * 128;
		unsigned char blue  = (unsigned char)(1 + sin(elapsed * 0.0008)) * 128;

		const Particle* const pParticles = swm.getParticle();

		for (int i = 0; i <swarm::numberOfParticles; i++) {
			Particle particle = pParticles[i];

			int x = (particle.pos_x + 1) * windowWidthCenter;
			int y = (particle.pos_y * windowWidthCenter) + windowHeightCenter;

			screen.setWindowPixel(x, y, red, green, blue);
		}

		//update the window
		screen.updateWindow();

		//check for messages/events
		if (screen.processEvents() == false) {
			break;
		}

	}

	screen.close();

	return 0;
}
