#ifndef GAME_HERO_H
#define GAME_HERO_H

#include <iostream>
#include <SDL.h>
#include <SDL_log.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "resources.h"
#include "character.h"

enum class Direction {
    UP,
    DOWN,
    RIGHT,
    LEFT
};

class Hero : public Character {

public:
    Hero();
    void drawHero(const Resources& resources, SDL_Renderer* renderer);
    void setVisible();
    void setXHero(int xHero);
    void setYHero(int yHero);
    void setDirection(Direction direction);

private:
    Images _images;
    bool _isVisible;
    Direction _direction;


};


#endif
