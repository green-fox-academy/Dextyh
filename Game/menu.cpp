#include "menu.h"

Menu::Menu() {

    _images = Images ::MENU;
    _isVisible = true;

}

Images Menu::getImages() {
    return _images;
}

void Menu::setUnVisible() {
    _isVisible = false;
}

void Menu::drawMenu(const Resources &resources, SDL_Renderer *renderer) {

    if (_isVisible) {
        Images images = _images;

        SDL_Rect rect = {0, 0, 600, 600};
        SDL_RenderCopyEx( renderer, resources.getTexture(images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE );
    }

}
