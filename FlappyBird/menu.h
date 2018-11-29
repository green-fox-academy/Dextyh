#ifndef FLAPPYBIRD_MENU_H
#define FLAPPYBIRD_MENU_H


#include "resources.h"

class Menu {

public:

    Menu();
    void drawMenu(const Resources& resources, SDL_Renderer* renderer);
    void setUnVisible();

private:

    Images _images;
    bool _isVisible;

};


#endif
