#include "bird.h"

Bird::Bird() {

    _images = Images :: BIRD;
    _isVisible = false;
    _yPosition = 215;
}

void Bird::setVisible() {
    _isVisible = true;
}

int Bird::getYPosition() {

    return _yPosition;
}

void Bird::setYPosition(int yPosition) {
    _yPosition = yPosition;
}

void Bird::drawBird(const Resources &resources, SDL_Renderer *renderer) {
    if (_isVisible) {
        Images images = _images;

        SDL_Rect rect = {40, _yPosition, 60, 60};
        SDL_RenderCopyEx(renderer, resources.getTexture(images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE);
    }
}

