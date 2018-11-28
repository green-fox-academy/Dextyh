#include "resources.h"

Resources::Resources(SDL_Renderer* renderer)
{
    _images[Images::FLOOR] = loadImage("img/floor.png", renderer);
    _images[Images::WALL] = loadImage("img/wall.png", renderer);
    _images[Images::HERO_DOWN] = loadImage("img/hero-down.png", renderer);
    _images[Images::HERO_UP] = loadImage("img/hero-up.png", renderer);
    _images[Images::HERO_RIGHT] = loadImage("img/hero-right.png", renderer);
    _images[Images::HERO_LEFT] = loadImage("img/hero-left.png", renderer);
    _images[Images::BOSS] = loadImage("img/boss.png", renderer);
    _images[Images::SKELETON] = loadImage("img/skeleton.png", renderer);
    _images[Images::MENU] = loadImage("img/menu.png", renderer);
    _images[Images::RIP] = loadImage("img/rip.png", renderer);

}

SDL_Texture *Resources::loadImage(const std::string &name, SDL_Renderer* renderer)
{
    SDL_Surface* loadedSurface = IMG_Load( name.c_str() ); //path is the string that contains where the image is
    if( loadedSurface == nullptr )
    {
        SDL_Log("Couldn't load your image(s)", SDL_GetError());
    }
    //SDL_Renderer* object
    SDL_Texture* texture = SDL_CreateTextureFromSurface( renderer, loadedSurface );
    SDL_FreeSurface( loadedSurface );
    return texture;
}

SDL_Texture *Resources::getTexture(Images images) const
{
    return _images.at(images);
}

