#include "background.h"

Background::Background() {
    _images = Images :: BACKGROUND;
    _isVisible = false;
}

void Background::setVisible() {
    _isVisible = true;
}


bool Background::getVisable() {
    return _isVisible;
}

void Background::drawBackground(const Resources &resources, SDL_Renderer *renderer) {

    if (_isVisible) {
        Images images = _images;

        SDL_Rect rect = {0, 0, 470, 615};
        SDL_RenderCopyEx(renderer, resources.getTexture(images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE);
    }
}
