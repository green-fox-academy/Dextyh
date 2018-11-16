#include <iostream>
#include <SDL.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
#include <SDL2_gfxPrimitives.h>



//Screen dimension constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;

//Draws geometry on the canvas
void draw(Sint16 x1, Sint16 y1,Sint16 x2, Sint16 y2,Sint16 x3, Sint16 y3, int number);

void function();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

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


        int cord = 0;

        for (int g = 0; g < 600; g++) {

            SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
            SDL_RenderDrawLine(gRenderer, 0, cord, 600, cord);

            cord = cord + 1;
        }


        draw(0, 0, SCREEN_WIDTH, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, 0);
        function();

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}

void draw(Sint16 x1, Sint16 y1,Sint16 x2, Sint16 y2,Sint16 x3, Sint16 y3, int number)
{

    if(number == 7) {
        return;
    }
    trigonRGBA(gRenderer, x1, y1, x2, y2, x3, y3, 0xFF, 0x00, 0x00, 0xFF);
    draw((Sint16) x1 + (x2 - x1) / 2, y1, x2, y2, (Sint16) x1 + (x2-x1) / 4 * 3, (Sint16) y2 + (y3-y2) / 2, number + 1);
    draw(x1, y1, (Sint16) (x1 + (x2-x1) / 2), y1, (Sint16) (x1 + (x2-x1) / 4), (Sint16)(y2 + (y3 - y2) / 2), number + 1);
    draw((Sint16) (x1 + (x2-x1) / 4), (Sint16)(y2 + (y3 - y2) / 2),(Sint16) x1 + (x2-x1) / 4 * 3, (Sint16) y2 + (y3-y2) / 2, x3,y3, number + 1);
}

void function() {




    int x1 = 0;
    int y1 = 0;
    int x2 = SCREEN_WIDTH;
    int y2 = 0;
    int x3 = SCREEN_WIDTH / 2;
    int y3 = SCREEN_HEIGHT;


    //top right
    int xStart2 = x2/2;
    int xEnd2 = x2/2;
    int yStart2 = y3 / 6;
    int yEnd2 = y3 / 2;

    //top left
    int xStart4 = x2/2;
    int xEnd4 = x2/2;
    int yStart4 = y3 / 6;
    int yEnd4 = y3  / 2;



    for (int i = 0; i < SCREEN_HEIGHT/4; i = i+12) {




        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawLine(gRenderer, xStart2, yStart2+i, xEnd2+i, yEnd2);


        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawLine(gRenderer, xStart4, yStart4+i, xEnd4-i, yEnd4);
    }
}