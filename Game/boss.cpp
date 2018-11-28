#include "boss.h"

Boss::Boss(Area& area)  {

    _images = Images :: BOSS;
    _isVisible = false;
    _xPos = rand() % 9 + 1;
    _yPos = rand() % 8 + 1;
    while (!area.isWalkable(_xPos, _yPos) || area.isCaptured(_xPos, _yPos)) {
        _xPos = rand() % 9 + 1;
        _yPos = rand() % 8 + 1;
    }
    area.setCaptured(_xPos,_yPos);


    int areaLevel = area.getAreaLevel();
    _hpMax = 2 * areaLevel * (rand() % 6 + 1) + (rand() % 6 + 1);
    _hpCurrent = _hpMax;
    _defendPoint = areaLevel/2 * (rand() % 6 + 1) + (rand() % 6 + 1) / 2;
    _strikePoint = areaLevel * (rand() % 6 + 1) + areaLevel;
    _strikeValue = _strikePoint + (rand() % 6 + 1);

    _isAlive = IsAlive ::ALIVE;

}

void Boss::setVisible() {
    _isVisible = true;
}

void Boss::drawBoss(const Resources &resources, SDL_Renderer *renderer) {
    int x = _xPos * 60;
    int y = _yPos * 60;

    if(_isVisible) {
        Images images = _images;

        switch (_isAlive) {
            case IsAlive ::ALIVE :
                images = Images::BOSS;
                break;
            case IsAlive ::DEAD :
                images = Images::RIP;
                break;
        }

        SDL_Rect rect = {x, y, 60, 60};
        SDL_RenderCopyEx(renderer, resources.getTexture(images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE);
    }
}


