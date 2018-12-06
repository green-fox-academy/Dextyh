#include <stdlib.h>
#include <time.h>
#include <SDL.h>
#include <SDL_image.h>
#include "resources.h"

//#include "resources.h"
//#include "area.h"
//#include "characters.h"
//#include "hero.h"





//Screen dimension constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;

//The window we'll be rendering to
SDL_Window *gWindow = NULL;

//The window renderer
SDL_Renderer *gRenderer = NULL;

//Starts up SDL and creates window
int init() {

    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_Log("SDL could not initialize! SDL Error: %s", SDL_GetError());
        return 0;
    }

    //Create window
    gWindow = SDL_CreateWindow("Wanderer - The RPG game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                               SCREEN_WIDTH,
                               SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (gWindow == NULL) {
        SDL_Log("Window could not be created! SDL Error: %s", SDL_GetError());
        return 0;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
    if (gRenderer == NULL) {
        SDL_Log("Renderer could not be created! SDL Error: %s", SDL_GetError());
        return 0;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

    //Initialize SDL_Image
    int imgFlags = IMG_INIT_PNG;
    if (!(IMG_Init(imgFlags) & imgFlags)) {
        SDL_Log("SDL_Image could not initialize! SDL Error: %s", SDL_GetError());
        return 0;
    }

    return 1;
}

//Frees media and shuts down SDL
void close() {

    //Destroy window
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;
    gRenderer = NULL;

    IMG_Quit();
    SDL_Quit();
}







int menuIsVisible = 1;

void setMenuUnVisible() {
    menuIsVisible = 0;
}

void drawMenu();




int main(int argc, char *args[]) {
    srand(time(NULL));




    const char* menu = "img/menu.png";

    SDL_Surface* loadedSurface = IMG_Load(menu);
    if( loadedSurface == NULL )
    {
        SDL_Log("Couldn't load your image(s)");
    }

    SDL_Texture* menuTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
    SDL_FreeSurface( loadedSurface );








    //Start up SDL and create window
    if (!init()) {
        SDL_Log("Failed to initialize!");
        close();
        return -1;
    }

    //Resources resources(gRenderer);

    //Menu menu;
    //Area area;

    //Hero hero;
    //int xHero;
    //int yHero;
    //Direction direction;

    //Main loop flag
    int quit = 0;

    //Event handler
    SDL_Event e;

    //While application is running
    while (!quit) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = 1;

            }/* else if (e.type == SDL_KEYDOWN) {
                switch (e.key.keysym.sym) {
                    case SDLK_UP:
                        printf("INFO: UP Arrow\n");
                        if (yHero >= 1 && area.isWalkable(xHero, yHero - 1)) {
                            hero.setHeroPosition(xHero, yHero = yHero - 1);
                        }
                        hero.setDirection(direction = Direction::UP);
                        break;

                    case SDLK_DOWN:
                        printf("INFO: DOWN Arrow\n");
                        if (yHero <= 8 && area.isWalkable(xHero, yHero + 1)) {
                            hero.setHeroPosition(xHero, yHero = yHero + 1);
                        }
                        hero.setDirection(direction = Direction::DOWN);
                        break;

                    case SDLK_LEFT:
                        printf("INFO: LEFT Arrow\n");
                        if (xHero >= 1 && area.isWalkable(xHero - 1, yHero)) {
                            hero.setHeroPosition(xHero = xHero - 1, yHero);
                        }
                        hero.setDirection(direction = Direction::LEFT);
                        break;

                    case SDLK_RIGHT:
                        printf("INFO: Right Arrow\n");
                        if (xHero <= 8 && area.isWalkable(xHero + 1, yHero)) {
                            hero.setHeroPosition(xHero = xHero + 1, yHero);
                        }
                        hero.setDirection(direction = Direction::RIGHT);
                        break;

                    case SDLK_SPACE:
                        printf("INFO: SPACE\n");
                        break;

                    default:
                        // Pressed something else
                        break;
                }

            }*/ else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);

                if (x >= 225 && x <= 355 && y >= 270 && y <= 325) {
                    printf("Good Luck - Have Fun\n");
                    setMenuUnVisible();
                    //area.setVisible();
                    //hero.setVisible();
                    SDL_Delay(1000);

                } else if (x >= 485 && y >= 550) {
                    printf("Good Bye!\n");
                    SDL_Delay(1000);
                    quit = 1;

                } else if (x >= 0 && x <= 125 && y >= 525) {
                    printf("Thank you for visiting my Github Profile!\n");
                    SDL_Delay(1000);
                    system("open https://github.com/dextyh");
                }

            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderClear(gRenderer);

        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);

        //DRAW HERE

        if (menuIsVisible) {

            SDL_Rect rect = {0, 0, 600, 720};
            SDL_RenderCopyEx(gRenderer, menuTexture, NULL, &rect, 0.0, NULL, SDL_FLIP_NONE);
        }
        //area.drawArea(resources, gRenderer);
        //hero.draw(resources, gRenderer);
//

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}
