#ifndef GAME_RESOURCES_H
#define GAME_RESOURCES_H

#include <iostream>
#include <SDL.h>
#include <SDL_log.h>
#include <SDL_image.h>
#include <map>
#include <SDL_render.h>

enum class Images{
    FLOOR,
    WALL,
    HERO_DOWN,
    HERO_UP,
    HERO_RIGHT,
    HERO_LEFT,
    BOSS,
    SKELETON,
    MENU,
    RIP

};

class Resources {

public:

    Resources(SDL_Renderer* renderer);
    SDL_Texture* getTexture(Images images) const;

private:

    SDL_Texture* loadImage(const std::string& name, SDL_Renderer* renderer);
    std::map<Images, SDL_Texture*> _images;

};


#endif
