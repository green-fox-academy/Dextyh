#ifndef FLAPPYBIRD_RESOURCES_H
#define FLAPPYBIRD_RESOURCES_H


#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_log.h>
#include <map>

enum class Images {
    MENU,
    BACKGROUND,
    BIRD,
    PIPETOP,
    PIPEBOT

};

class Resources {

public:

    Resources(SDL_Renderer *renderer);
    SDL_Texture *getTexture(Images images) const;

private:

    SDL_Texture *loadImage(const std::string &name, SDL_Renderer *renderer);
    std::map<Images, SDL_Texture *> _images;

};

#endif