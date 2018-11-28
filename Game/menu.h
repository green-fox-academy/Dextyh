#ifndef GAME_MENU_H
#define GAME_MENU_H

#include <iostream>
#include <SDL.h>
#include <SDL_log.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "resources.h"
#include "area.h"

class Menu {

public:
    Menu();
    void drawMenu(const Resources& resources, SDL_Renderer* renderer);
    Images getImages();
    void setUnVisible();

private:
    Images _images;
    bool _isVisible;

};


#endif
