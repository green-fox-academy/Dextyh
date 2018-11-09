#include <iostream>
#include <SDL.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>



//Screen dimension constants

const int SCREEN = 600;
const int SCREEN_WIDTH = SCREEN;
const int SCREEN_HEIGHT = SCREEN;

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

void hexagon(double x1, double y1, double x2, double y2);

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


void hexagon(double x1, double y1, double x2, double y2) {



    double angle = 300;

    double alfa = angle * M_PI / 180;


    for (int i = 0; i < 6; i++) {

        double x = x1 - x2;
        double y = y1 - y2;

        double newx = x2 + (x * cos(alfa) - y * sin(alfa));
        double newy = y2 + (x * sin(alfa) + y * cos(alfa));

        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderDrawLine(gRenderer, x1,y1,newx,newy);

        x1 = newx;
        y1 = newy;

    }

}

void function() {



    double length = 30;

    double height = 1.73205080757 * length;

    double xS1 = 30;
    double yS1 = SCREEN - 8 * 30;
    double xS2 = 30 * 2;
    double yS2 = SCREEN - 8 * 30;

    double x1 = xS1;
    double y1 = yS1;
    double x2 = xS2;
    double y2 = yS2;

    int column = 4;
    bool swap = true;

  for (int g = 0; g < 7; g++) {

   if (column >= 7) {

        swap = false;
    }

      for (int i = 0; i < column; i++) {

          hexagon(x1, y1, x2, y2);

          x1 = x1;
          y1 = y1 - height;
          x2 = x2;
          y2 = y2 - height;
      }

      if (swap) {

          column = column + 1;

          xS1 = xS1 + length + length / 2;
          yS1 = yS1 + height / 2;
          xS2 = xS2 + length + length / 2;
          yS2 = yS2 + height / 2;

          x1 = xS1;
          y1 = yS1;
          x2 = xS2;
          y2 = yS2;


      } if(!swap) {

          column = column -1;

          xS1 = xS1 + length + length / 2;
          yS1 = yS1 - height / 2;
          xS2 = xS2 + length + length / 2;
          yS2 = yS2 - height / 2;

          x1 = xS1;
          y1 = yS1;
          x2 = xS2;
          y2 = yS2;

      }



  }







}







