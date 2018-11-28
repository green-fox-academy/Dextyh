#include <iostream>
#include "game.h"
#include <SDL.h>
#include <SDL_log.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "resources.h"
#include "menu.h"
#include <stdlib.h>
#include "area.h"
#include "hero.h"
#include "skeleton.h"
#include <time.h>
#include "boss.h"
#include "character.h"


int main(int argc, char *args[])
{
    srand (time(nullptr));

    //Start up SDL and create window
    if (!init()) {
        SDL_Log("Failed to initialize!");
        close();
        return -1;
    }

    Resources resources(gRenderer);
    Menu menu;
    Area area;
    Hero hero;
    Boss boss(area);
    Skeleton skeleton1(area);
    Skeleton skeleton2(area);
    Skeleton skeleton3(area);
    // std::vector<Skeleton> skeletons;

    int xHero;
    int yHero;
    Direction direction;
    Map map;

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while (!quit) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;

            } else if( e.type == SDL_KEYDOWN ) {
                switch(e.key.keysym.sym) { //It can cause a problem
                    case SDLK_UP:
                        //Pressed Up
                        // std::cout << "INFO: Press: UP Arrow" << std::endl;
                        if (yHero >= 1 && area.isWalkable(xHero, yHero-1)) {
                            hero.setYHero(yHero = yHero - 1);
                        }
                        hero.setDirection(direction = Direction::UP);
                        // std::cout << "X: "<< xHero << " Y: " << yHero << std::endl;

                        break;
                    case SDLK_DOWN:
                        //Pressed Down
                        // std::cout << "INFO: Press: DOWN Arrow" << std::endl;
                        if (yHero <= 7 && area.isWalkable(xHero, yHero+1)) {
                            hero.setYHero(yHero = yHero + 1);
                        }
                        hero.setDirection(direction = Direction::DOWN);
                        // std::cout << "X: "<< xHero << " Y: " << yHero << std::endl;
                        break;
                    case SDLK_LEFT:
                        //Pressed Left
                        // std::cout << "INFO: Press: LEFT Arrow" << std::endl;
                        if (xHero >= 1 && area.isWalkable(xHero-1, yHero)) {
                            hero.setXHero(xHero = xHero - 1);
                        }
                        hero.setDirection(direction = Direction::LEFT);
                        // std::cout << "X: "<< xHero << " Y: " << yHero << std::endl;

                        break;
                    case SDLK_RIGHT:
                        //Pressed Right
                        // std::cout << "INFO: Press: RIGHT Arrow" << std::endl;
                        if (xHero <= 8 && area.isWalkable(xHero+1, yHero)) {
                            hero.setXHero(xHero = xHero + 1);
                        }
                        hero.setDirection(direction = Direction::RIGHT);
                        // std::cout << "X: "<< xHero << " Y: " << yHero << std::endl;

                        break;
                    case SDLK_SPACE:
                        //Pressed Right
                        // std::cout << "INFO: Press: SPACE" << std::endl;
                        hero.strike(area, hero, boss);
                        hero.strike(area, hero, skeleton1);
                        hero.strike(area, hero, skeleton2);
                        hero.strike(area, hero, skeleton3);


                        break;
                    default:
                        //Pressed something else
                        break;
                }
            } else if(e.type == SDL_MOUSEBUTTONDOWN){
                int x, y;
                SDL_GetMouseState( &x, &y );
                std::cout << "INFO: Clicked --> X: " << x << " | Y: " << y << std::endl;

                if (x >= 225 && x <= 355 && y >= 270 && y <= 325) {
                    std::cout << "Good Luck - Have Fun" << std::endl;
                    menu.setUnVisible();
                    area.setVisible();
                    hero.setVisible();
                    boss.setVisible();
                    skeleton1.setVisible();
                    skeleton2.setVisible();
                    skeleton3.setVisible();
                    SDL_Delay( 1000 );

                } else if (x >= 485 && y >= 550) {
                    std::cout << "Good Bye!" << std::endl;
                    SDL_Delay( 1000 );
                    quit = true;

                } else if (x >= 0 && x <= 125 && y >= 525) {
                    std::cout << "Open Github Profile" << std::endl;
                    SDL_Delay( 1000 );
                    system("open https://github.com/dextyh");

                }

        }
    }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0x69, 0x69, 0x69, 0xFF);
        SDL_RenderClear(gRenderer);

        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);

        //DRAW FUNCTION -->

        menu.drawMenu(resources, gRenderer);
        area.drawArea(resources, gRenderer);
        boss.drawBoss(resources, gRenderer);
        skeleton1.drawSkeleton(resources, gRenderer);
        skeleton2.drawSkeleton(resources, gRenderer);
        skeleton3.drawSkeleton(resources, gRenderer);
        hero.drawHero(resources, gRenderer);


        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}
