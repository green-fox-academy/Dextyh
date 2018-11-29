#include "game.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "time.h"
#include "stdlib.h"

#include "resources.h"
#include "menu.h"
#include "background.h"
#include "bird.h"
#include "pipe.h"
#include <vector>

Uint32 my_callbackfunc(Uint32 interval, void *param)
{
    SDL_Event event;
    SDL_UserEvent userevent;

/* In this example, our callback pushes an SDL_USEREVENT event
into the queue, and causes our callback to be called again at the
same interval: */

    userevent.type = SDL_USEREVENT;
    userevent.code = 0;
    userevent.data1 = nullptr;
    userevent.data2 = nullptr;

    event.type = SDL_USEREVENT;
    event.user = userevent;

    SDL_PushEvent(&event);
    return(interval);
}

int main(int argc, char *args[]) {
    srand(time(nullptr));

    //Start up SDL and create window
    if (!init()) {
        SDL_Log("Failed to initialize!");
        close();
        return -1;
    }

    Resources resources(gRenderer);
    Menu menu;
    Background background;

    Bird bird;
    int birdY = bird.getYPosition();


    int x = 400;
    int counter = 0;
    std::vector<Pipe> pipes;

    for (int i = 0; i < 100; ++i) {
        pipes.push_back(Pipe(x));
        x = x + 150;
    }




    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;


    //TIMER
    int timerIntervalInMilliseconds = 20;
    SDL_AddTimer(timerIntervalInMilliseconds, my_callbackfunc, nullptr );
    //TIMER

    //While application is running
    while (!quit) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;

            } else if (e.type == SDL_KEYDOWN) {
                switch (e.key.keysym.sym) {

                    case SDLK_SPACE:
                        // std::cout << "INFO: SPACE" << std::endl;
                        bird.setYPosition(birdY);
                        birdY = birdY - 50;
                        break;

                    default:
                        // Pressed something else
                        break;
                }

            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);
                std::cout << "INFO: Clicked --> X: " << x << " | Y: " << y << std::endl;

                if (x >= 165 && x <= 305 && y >= 260 && y <= 365) {
                    std::cout << "Good Luck - Have Fun" << std::endl << std::endl;
                    menu.setUnVisible();
                    background.setVisible();
                    bird.setVisible();

                    for (int i = 0; i < pipes.size(); ++i) {
                        pipes[i].setVisible();
                    }

                    SDL_Delay(1000);

                }

            //TIMER
            } else if (e.type == SDL_USEREVENT && background.getVisable()) {
                bird.setYPosition(birdY);
                birdY = birdY + 3;

                for (int i = 0; i < pipes.size(); ++i) {
                    pipes[i].move();
                }

                for (int k = 0; k < pipes.size(); ++k) {
                    if (pipes[k].getXPosition() == 50) {
                        counter++;
                        std::cout << "Score: " << counter << std::endl;
                    }
                }

            }
            //TIMER
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderClear(gRenderer);

        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);

        //DRAW HERE

        menu.drawMenu(resources, gRenderer);
        background.drawBackground(resources, gRenderer);
        bird.drawBird(resources, gRenderer);

        for (int j = 0; j < pipes.size(); ++j) {
            pipes[j].drawPipeTop(resources, gRenderer);
            pipes[j].drawPipeBot(resources, gRenderer);
        }



        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}