#include "window.h"
#include<iostream>

using namespace std;


	Window::Window(): window(NULL), renderer(NULL), texture(NULL), buffer(NULL), buffer2(NULL) {

	}

	//initilize window parameters
	bool Window::init() {

		if (SDL_Init(SDL_INIT_VIDEO) < 0) {
			cout << "SDL Init failed" << endl; 
			return false;
		}

		window = SDL_CreateWindow("Exploding Screen Particles", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

		if (window == NULL) {
			SDL_Quit();
			return false;
		}

		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
		texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

		if (renderer == NULL) {
			cout << "Could not create renderer" << endl;
			SDL_Quit();
			return false;
		}
		if (texture == NULL) {
			cout << "Could not create texture" << endl;
			SDL_DestroyRenderer(renderer);
			SDL_DestroyWindow(window);
			SDL_Quit();
			return false;
		}

		buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
		buffer2 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

		memset(buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
		memset(buffer2, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
	
		return true;
	}
	void Window::clear() {
		memset(buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
		memset(buffer2, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
	}
	//update windows
	void Window:: updateWindow(){
		SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH * sizeof(Uint32));
		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}

	//set pixels for red, green and blue using bit shifting
	void Window::setWindowPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {
		
		if (x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT) {
			return;
		}

		Uint32 color = 0;

		color += red;
		color <<= 8;
		color += green;
		color <<= 8;
		color += blue;
		color <<= 8;
		color += 0xFF;
		
		buffer[(y * SCREEN_WIDTH) + x] = color;
	}

	//process events such as closing of the window
	bool Window::processEvents() {
		SDL_Event event;

		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				return false;
			}
		}
		return true;
	}

	void Window::boxBlur() {
       //swap the buffers so pixel is in buffer2 

		Uint32* temp = buffer;
		buffer = buffer2;
		buffer2 = temp;

		for (int y = 0; y < SCREEN_HEIGHT; y++) {
			for (int x = 0; x < SCREEN_WIDTH; x++) {

				int redTotal = 0;
				int greenTotal = 0;
				int blueTotal = 0;

				for(int row = -1; row <= 1; row++){
					for (int col = -1; col <= 1; col++) {
						int currentX = x + col;
						int currentY = y + row;

						if (currentX >= 0 && currentX < SCREEN_WIDTH && currentY >= 0 && currentY < SCREEN_HEIGHT) {
							Uint32 color = buffer2[currentY * SCREEN_WIDTH + currentX];

							Uint8 red = color >> 24;
							Uint8 green = color >> 16;
							Uint8 blue = color >> 8;

							redTotal += red;
							greenTotal += green;
							blueTotal += blue;
						}

					}
				}
				Uint8 red = redTotal / 9;
				Uint8 green = greenTotal / 9;
				Uint8 blue = blueTotal / 9;

				setWindowPixel(x, y, red, green, blue);
			}

			

		}

	}


	//close window
	void Window::close() {
		delete[] buffer;
		delete[] buffer2;
		SDL_DestroyRenderer(renderer);
		SDL_DestroyTexture(texture);
		SDL_DestroyWindow(window);
		SDL_Quit();
	}
