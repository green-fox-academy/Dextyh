#ifndef FLAPPYBIRD_BIRD_H
#define FLAPPYBIRD_BIRD_H


#include "resources.h"

class Bird {

public:
    Bird();
    void drawBird(const Resources& resources, SDL_Renderer* renderer);
    void setVisible();
    int getYPosition();
    void setYPosition(int yPosition);

private:
    Images _images;
    bool _isVisible;
    int _yPosition;

};


#endif
