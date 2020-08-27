#include <iostream>
#include <SDL.h>
#include <math.h>
#include "window.h"

using namespace std;

int main(int argc, char* argv[]) {

	Window screen;

	if (screen.init() == false) {
		cout << "Error initializing SDL" << endl;
	}

	while (true) {

		//set color values
		int elapsed = SDL_GetTicks();
		unsigned char red   = (unsigned char)(1 + sin(elapsed * 0.0001)) * 128;
		unsigned char green = (unsigned char)(1 + sin(elapsed * 0.0004)) * 128;
		unsigned char blue  = (unsigned char)(1 + sin(elapsed * 0.0008)) * 128;

		//set window pixels
		for (int y = 0; y < Window::SCREEN_HEIGHT; y++) {
			for (int x = 0; x < Window::SCREEN_WIDTH; x++) {
				screen.setWindowPixel(x, y, red, green, blue);				
			}
		}
	
		//screen.setPixel(400, 300, 0, 0, 255); //set single pixel

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
