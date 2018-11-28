#include "hero.h"


Hero::Hero() {

    _images = Images :: HERO_DOWN;
    _isVisible = false;
    _xPos = 0;
    _yPos = 0;
    _direction = Direction::DOWN;
    _level = 1;
    _hpMax = 20 + 3 * (rand() % 6 + 1);
    _hpCurrent = _hpMax;
    _defendPoint = 2 * (rand() % 6 + 1);
    _strikePoint = 5 + (rand() % 6 + 1);
    _strikeValue = _strikePoint + (rand() % 6 + 1);

    _isAlive = IsAlive ::ALIVE;
}

void Hero::setVisible() {
    _isVisible = true;
}

void Hero::setXHero(int xHero) {
    _xPos = xHero;
}

void Hero::setYHero(int yHero) {
    _yPos = yHero;
}

void Hero::setDirection(Direction direction) {
    _direction = direction;
}

void Hero::drawHero(const Resources &resources, SDL_Renderer *renderer) {

    int x = _xPos * 60;
    int y = _yPos * 60;
    Direction direction = _direction;

    if(_isVisible == true) {
        Images images = _images;

        switch (direction) {
            case Direction::DOWN :
                images = Images::HERO_DOWN;
                break;
            case Direction::UP :
                images = Images::HERO_UP;
                break;
            case Direction::RIGHT :
                images = Images::HERO_RIGHT;
                break;
            case Direction::LEFT :
                images = Images::HERO_LEFT;
                break;

        }


        SDL_Rect rect = {x, y, 60, 60};
        SDL_RenderCopyEx( renderer, resources.getTexture(images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE );

    }

}


