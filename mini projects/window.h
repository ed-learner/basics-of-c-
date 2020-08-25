#pragma once

#include<SDL.h>

class Window{
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 400;
	Window();
	bool init();
	void updateWindow();
	void setWindowPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();

private:
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Texture *texture;
	Uint32 *buffer;

};

