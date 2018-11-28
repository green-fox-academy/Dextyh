#include "skeleton.h"

Skeleton::Skeleton(Area& area)  {

    _images = Images :: SKELETON;
    _isVisible = false;
    _xPos = rand() % 9 + 1;
    _yPos = rand() % 8 + 1;
    while (!area.isWalkable(_xPos, _yPos) || area.isCaptured(_xPos, _yPos)) {
        _xPos = rand() % 9 + 1;
        _yPos = rand() % 8 + 1;
    }
    area.setCaptured(_xPos,_yPos);

    int areaLevel = area.getAreaLevel();
    _hpMax = 2 * areaLevel * (rand() % 6 + 1);
    _hpCurrent = _hpMax;
    _defendPoint = areaLevel/2 * (rand() % 6 + 1);
    _strikePoint = areaLevel * (rand() % 6 + 1);
    _strikeValue = _strikePoint + (rand() % 6 + 1);


    _isAlive = IsAlive ::ALIVE;
}

void Skeleton::setVisible() {
    _isVisible = true;
}

void Skeleton::drawSkeleton(const Resources &resources, SDL_Renderer *renderer) {

    int x = _xPos * 60;
    int y = _yPos * 60;
    Area area;
    area.setCaptured(_xPos, _yPos);

    if(_isVisible) {
        Images images = _images;

        switch (_isAlive) {
            case IsAlive::ALIVE :
                images = Images::SKELETON;
                break;
            case IsAlive::DEAD :
                images = Images::RIP;
        }


        SDL_Rect rect = {x, y, 60, 60};
        SDL_RenderCopyEx(renderer, resources.getTexture(images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE);

    }

}


