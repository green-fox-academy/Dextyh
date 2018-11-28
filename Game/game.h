#ifndef GAME_GAME_H
#define GAME_GAME_H

#include <iostream>
#include <SDL.h>
#include <SDL_log.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "resources.h"


//Screen dimension constants
const int SCREEN_SIZE = 600;
const int SCREEN_WIDTH = SCREEN_SIZE;
const int SCREEN_HEIGHT = SCREEN_SIZE;

//The window we'll be rendering to
SDL_Window *gWindow = nullptr;

//The window renderer
SDL_Renderer *gRenderer = nullptr;

//Starts up SDL and creates window
bool init() {
    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_Log("SDL could not initialize! SDL Error: %s", SDL_GetError());
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow("Wanderer - The RPG game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                               SCREEN_WIDTH,
                               SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (gWindow == nullptr) {
        SDL_Log("Window could not be created! SDL Error: %s", SDL_GetError());
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
    if (gRenderer == nullptr) {
        SDL_Log("Renderer could not be created! SDL Error: %s", SDL_GetError());
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

    //Initialize SDL_Image libary
    int imgFlags = IMG_INIT_PNG;
    if (!(IMG_Init(imgFlags) & imgFlags)) {
        std::cout << "Couldn't initialize SDL_Image libary";
        return false;
    }

    //Initialize SDL_ttf libary
    if (TTF_Init() == -1) {
        std::cout << "Couldn't initialize SDL_ttf libary";
        return false;
    }

    return true;
}

//Frees media and shuts down SDL
void close() {
    //Destroy window
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);
    gWindow = nullptr;
    gRenderer = nullptr;

    // Quit SDL_Image
    IMG_Quit();

    SDL_Quit();
}


#endif
