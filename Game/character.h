#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include <iostream>
#include <SDL.h>
#include <SDL_log.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "resources.h"
#include <stdlib.h>
#include "area.h"

enum class IsAlive {
    ALIVE,
    DEAD
};

class Character {

public:

    void strikeBack(Character hero, Character enemie);
    void strike(Area& area, Character& hero, Character& enemie);
    virtual void setDie();

protected:

    IsAlive _isAlive;

    int _xPos;
    int _yPos;

    int _level;
    int _hpMax;
    int _hpCurrent;
    int _defendPoint;
    int _strikePoint;
    int _strikeValue;
};


#endif
