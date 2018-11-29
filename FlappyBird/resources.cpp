#include "resources.h"

Resources::Resources(SDL_Renderer* renderer) {

    _images[Images::MENU] = loadImage("img/menu.png", renderer);
    _images[Images::BACKGROUND] = loadImage("img/background.jpg", renderer);
    _images[Images::BIRD] = loadImage("img/bird.png", renderer);
    _images[Images::PIPETOP] = loadImage("img/pipeTop.png", renderer);
    _images[Images::PIPEBOT] = loadImage("img/pipeBot.png", renderer);

}

SDL_Texture *Resources::loadImage(const std::string &name, SDL_Renderer* renderer) {

    SDL_Surface* loadedSurface = IMG_Load( name.c_str() );
    if( loadedSurface == nullptr )
    {
        SDL_Log("Couldn't load your image(s)");
    }

    SDL_Texture* texture = SDL_CreateTextureFromSurface( renderer, loadedSurface );
    SDL_FreeSurface( loadedSurface );
    return texture;
}

SDL_Texture *Resources::getTexture(Images images) const {

    return _images.at(images);
}