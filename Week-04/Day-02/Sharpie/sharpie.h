#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>

class Sharpie {

public:

    Sharpie (std::string name, std::string color, float width);

    void use();

    std::string getColor ();
    float getWidth ();
    float getInkAmount ();

private:

    std::string _color;
    float _width;
    float _inkAmount;

};


#endif
