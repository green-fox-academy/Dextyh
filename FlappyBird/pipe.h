#ifndef FLAPPYBIRD_PIPE_H
#define FLAPPYBIRD_PIPE_H

#include "resources.h"
#include "random.h"


class Pipe {

public:
    Pipe(int x);
    void drawPipeTop(const Resources& resources, SDL_Renderer* renderer);
    void drawPipeBot(const Resources& resources, SDL_Renderer* renderer);
    void setVisible();
    void move();

private:
    Images _images;
    bool _isVisible;
    int _xPosition;
    int _pipeHeight;
    int _pipeStart;
};


#endif
