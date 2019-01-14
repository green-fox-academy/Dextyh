#ifndef SDL_DRAW_H
#define SDL_DRAW_H

#include <SDL.h>

void draw_snake(int x, int y, SDL_Renderer *renderer, int counter);
void draw_apple(int x, int y, SDL_Renderer *renderer);

void up(int* direction);
void down(int* direction);
void left(int* direction);
void right(int* direction);

#endif
