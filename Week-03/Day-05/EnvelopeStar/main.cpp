#include <iostream>
#include <SDL.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>



//Screen dimension constants
const int SCREEN_WIDTH = 600;
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

    int cord = 0;

    for (int g = 0; g < 600; g++) {

        SDL_SetRenderDrawColor( gRenderer, 0x00, 0x00, 0x00, 0xFF );
        SDL_RenderDrawLine(gRenderer, 0, cord, 600, cord);

        cord = cord + 1;


    }




    //bot left
    int xStart1 = 0;
    int xEnd1 = SCREEN_WIDTH / 2;
    int yStart1 = SCREEN_HEIGHT / 2;
    int yEnd1 = SCREEN_HEIGHT / 2;

    //top right
    int xStart2 = SCREEN_WIDTH / 2;
    int xEnd2 = SCREEN_WIDTH / 2;
    int yStart2 = 0;
    int yEnd2 = SCREEN_WIDTH / 2;

    //bot right
    int xStart3 = SCREEN_WIDTH;
    int xEnd3 = SCREEN_WIDTH / 2;
    int yStart3 = SCREEN_WIDTH / 2;
    int yEnd3 = SCREEN_WIDTH / 2;

    //top left
    int xStart4 = SCREEN_WIDTH / 2;
    int xEnd4 = SCREEN_WIDTH / 2;
    int yStart4 = 0;
    int yEnd4 = SCREEN_WIDTH / 2;



    for (int i = 15; i < SCREEN_HEIGHT/2; i = i+15) {


        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0xFF, 0xFF );
        SDL_RenderDrawLine(gRenderer, xStart1+i, yStart1, xEnd1, yEnd1+i);

        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0xFF, 0xFF );
        SDL_RenderDrawLine(gRenderer, xStart2, yStart2+i, xEnd2+i, yEnd2);



        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0xFF, 0xFF );
        SDL_RenderDrawLine(gRenderer, xStart3-i, yStart3, xEnd3, yEnd3+i);

        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0xFF, 0xFF );
        SDL_RenderDrawLine(gRenderer, xStart4, yStart4+i, xEnd4-i, yEnd4);
    }






}