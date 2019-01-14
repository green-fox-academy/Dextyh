#include <SDL_render.h>
#include "draw.h"

void draw_apple(int x, int y, SDL_Renderer *renderer)
{
    SDL_Rect apple1;
    apple1.x = x;
    apple1.y = y;
    apple1.w = 16;
    apple1.h = 16;
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF );
    SDL_RenderFillRect(renderer,  &apple1);

    SDL_Rect apple2;
    apple2.x = x+2;
    apple2.y = y+2;
    apple2.w = 12;
    apple2.h = 12;
    SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF );
    SDL_RenderFillRect(renderer,  &apple2);
}

void draw_snake(int x, int y, SDL_Renderer *renderer, int counter)
{
    for (int i = 0; i < counter; ++i) {
        SDL_Rect snake1;
        snake1.x = x;
        snake1.y = y;
        snake1.w = 25;
        snake1.h = 25;
        SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF );
        SDL_RenderFillRect(renderer,  &snake1);

        SDL_Rect snake2;
        snake2.x = x+3;
        snake2.y = y+3;
        snake2.w = 19;
        snake2.h = 19;
        SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 0xFF );
        SDL_RenderFillRect(renderer,  &snake2);
    }
}

void up(int* direction)
{
    *direction = 1;
}

void down(int* direction)
{
    *direction = 2;
}

void left(int* direction)
{
    *direction = 3;
}

void right(int* direction)
{
    *direction = 4;
}
