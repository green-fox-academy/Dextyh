#include <iostream>
#include <SDL.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>


//Screen dimension constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

void function();

void draw()
{

    function();
}

bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Colored Box", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        draw();

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}



void function() {

   int a = SCREEN_WIDTH;
   int b = SCREEN_HEIGHT;
   int x = 0;

    for (int i = 0; i < 1000; i++) {

        SDL_SetRenderDrawColor( gRenderer, 0x00, 0x00, 0xFF, 0xFF );

        SDL_RenderDrawLine(gRenderer, 0, x, a, x);

        x = x + 1;

    }

    x = 0;


    for (int i = 0; i < 1000; i++) {

        SDL_SetRenderDrawColor( gRenderer, 0x00, 0xFF, 0x00, 0xFF );

        SDL_RenderDrawLine(gRenderer, 0, (b-b/3) + x, a, (b-b/3) + x);

        x = x + 1;

    }

    x = 0;

//ház
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xE4, 0xC4, 0xFF );
    SDL_Rect rect1 = {500, 300, 150, 150};
    SDL_RenderFillRect (gRenderer, &rect1);
//nap
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0x00, 0x1E );
    SDL_Rect rect2 = {40, 40, 70, 70};
    SDL_RenderFillRect (gRenderer, &rect2);


//tető

    int f = 300;

    int left = 500;
    int right = 650;

    for (int i = 0; i < 75; i++) {

        SDL_SetRenderDrawColor( gRenderer, 0xD2, 0x69, 0x00, 0x1E );
        SDL_RenderDrawLine(gRenderer, left, f, right, f);

        left = left + 1;
        right = right - 1;
        f = f - 1;
    }

 //ajtó

    SDL_SetRenderDrawColor( gRenderer, 0xF4, 0xA4, 0x60, 0xFF );
    SDL_Rect rect3 = {600, 380, 50, 70};
    SDL_RenderFillRect (gRenderer, &rect3);


    //kilincs

    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
    SDL_Rect rect4 = {603, 415, 10, 3};
    SDL_RenderFillRect (gRenderer, &rect4);



}