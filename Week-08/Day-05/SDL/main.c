#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>
#include <time.h>
#include "game.h"
#include "draw.h"

Uint32 my_callbackfunc(Uint32 interval, void *param)
{
    SDL_Event event;
    SDL_UserEvent userevent;

/* In this example, our callback pushes an SDL_USEREVENT event
into the queue, and causes our callback to be called again at the
same interval: */

    userevent.type = SDL_USEREVENT;
    userevent.code = 0;
    userevent.data1 = NULL;
    userevent.data2 = NULL;

    event.type = SDL_USEREVENT;
    event.user = userevent;

    SDL_PushEvent(&event);
    return(interval);
}

int main(int argc, char *args[]) {
    srand(time(NULL));

    int start = 0;
    int counter = 1;
    int x_snake = 150;
    int y_snake = 150;
    int direction = 4;
    int x_apple = rand() % 600;
    int y_apple = rand() % 600;

    //Start up SDL and create window
    if (!init()) {
        SDL_Log("Failed to initialize!");
        close();
        return -1;
    }

    //Main loop flag
    int quit = 0;

    //Event handler
    SDL_Event e;

    //TIMER
    int timerIntervalInMilliseconds = 10;
    SDL_AddTimer(timerIntervalInMilliseconds, my_callbackfunc, NULL);
    //TIMER

    //While application is running
    while (!quit) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = 1;

            } else if (e.type == SDL_KEYDOWN) {
                switch (e.key.keysym.sym) {
                    case SDLK_UP:
                        printf("INFO: UP Arrow\n");
                        up(&direction);
                        break;

                    case SDLK_DOWN:
                        printf("INFO: DOWN Arrow\n");
                        down(&direction);
                        break;

                    case SDLK_LEFT:
                        printf("INFO: LEFT Arrow\n");
                        left(&direction);
                        break;

                    case SDLK_RIGHT:
                        printf("INFO: RIGHT Arrow\n");
                        right(&direction);
                        break;

                    case SDLK_SPACE:
                        printf("INFO: SPACE\n");
                        start = 1;
                        break;

                    default:
                        // Pressed something else
                        break;
                }

            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);
                printf("INFO: Clicked --> X: %d | Y: %d\n", x, y);

            } else if (e.type == SDL_USEREVENT) {
                if(direction == 1 && start == 1) {
                    y_snake -= 2;
                } else if (direction == 2 && start == 1) {
                    y_snake += 2;
                } else if (direction == 3 && start == 1) {
                    x_snake -= 2;
                } else if (direction == 4 && start == 1) {
                    x_snake += 2;
                }
            }

        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xA9, 0xA9, 0xA9, 0xFF);
        SDL_RenderClear(gRenderer);

        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);

        //DRAW HERE

        draw_apple(x_apple, y_apple, gRenderer);
        draw_snake(x_snake, y_snake, gRenderer, counter);

        //Update screen
        SDL_RenderPresent(gRenderer);

        if (x_snake < 1 || x_snake > SCREEN_WIDTH - 1 || y_snake < 1 || y_snake > SCREEN_HEIGHT - 1) {
            close();
            return 0;
        }
    }

    //Free resources and close SDL
    close();

    return 0;
}