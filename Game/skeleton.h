#ifndef GAME_SKELETON_H
#define GAME_SKELETON_H

#include <iostream>
#include <SDL.h>
#include <SDL_log.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "resources.h"
#include <stdlib.h>
#include "area.h"
#include "character.h"


class Skeleton : public Character {

public:
    Skeleton(Area& area);
    void drawSkeleton(const Resources& resources, SDL_Renderer* renderer);
    void setVisible();

private:
    Images _images;
    bool _isVisible;

};


#endif
