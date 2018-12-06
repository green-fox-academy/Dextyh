#ifndef WANDERER_MENU_H
#define WANDERER_MENU_H

#include <stdlib.h>
#include <SDL.h>


void drawMenu(const Resources &resources, SDL_Renderer *renderer) {

    if (_isVisible) {
        Images images = _images;

        SDL_Rect rect = {0, 0, 600, 720};
        SDL_RenderCopyEx(renderer, resources.getTexture(images), NULL, &rect, 0.0, NULL, SDL_FLIP_NONE);
    }
}

#endif
