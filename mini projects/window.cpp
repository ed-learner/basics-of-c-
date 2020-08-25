#include "window.h"
#include<iostream>

using namespace std;


	Window::Window(): window(NULL), renderer(NULL), texture(NULL), buffer(NULL) {

	}

	//initilize window parameters
	bool Window::init() {

		if (SDL_Init(SDL_INIT_VIDEO) < 0) {
			cout << "SDL Init failed" << endl; 
			return false;
		}

		window = SDL_CreateWindow("Screen Window Color Change", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

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
		memset(buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
	
		return true;
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

	//close window
	void Window::close() {
		delete[] buffer;
		SDL_DestroyRenderer(renderer);
		SDL_DestroyTexture(texture);
		SDL_DestroyWindow(window);
		SDL_Quit();
	}
