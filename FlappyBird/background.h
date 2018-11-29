#ifndef FLAPPYBIRD_BACKGROUND_H
#define FLAPPYBIRD_BACKGROUND_H


#include "resources.h"

class Background {

public:

    Background();
    void setVisible();
    bool getVisable();
    void drawBackground(const Resources &resources, SDL_Renderer *renderer);

protected:

    Images _images;
    bool _isVisible;

};


#endif
