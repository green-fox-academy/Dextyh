#include "area.h"

Area::Area() {
    _isVisible = false;
    _areaLevel = 1;

}

int Area::getAreaLevel() {
    return _areaLevel;
}

void Area::setVisible() {
    _isVisible = true;
}

void Area::setCaptured(int x, int y) {
    _isCaptured[y][x] = true;
}

bool Area::isCaptured(int x, int y) {
    if (_isCaptured[y][x]) {
        return true;
    }
    return false;
}

void Area::drawArea(const Resources &resources, SDL_Renderer *renderer) {
    if (_isVisible == true) {

        int x = 0;
        int y = 0;

        for (int i = 0; i < 9; ++i) {

            for (int j = 0; j < 10; ++j) {

                if (fullMap[i][j] == Map::FLOOR) {
                    Images images = Images :: FLOOR;
                    SDL_Rect rect = {x, y, 60, 60};
                    SDL_RenderCopyEx( renderer, resources.getTexture(images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE );

                } else if (fullMap[i][j] == Map::WALL) {
                    Images images = Images ::WALL;
                    SDL_Rect rect = {x, y, 60, 60};
                    SDL_RenderCopyEx( renderer, resources.getTexture(images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE );
                }

                x = x + 60;
            }
            x = 0;
            y = y + 60;
        }


    }

}

bool Area::isWalkable(int x, int y) {

    return fullMap[y][x] != Map::WALL;

}