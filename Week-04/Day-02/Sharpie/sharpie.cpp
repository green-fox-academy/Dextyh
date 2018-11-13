#include "sharpie.h"

Sharpie::Sharpie(std::string name, std::string color, float width) {

    _color = color;
    _width = width;
    _inkAmount = 100;

    std::cout << "You have got a " << name << " !" << std::endl << std::endl;
}

void Sharpie::use() {

    _inkAmount = _inkAmount - 5;
}

std::string Sharpie::getColor() {
    return _color;
}

float Sharpie::getWidth() {
    return _width;
}

float Sharpie::getInkAmount() {
    return _inkAmount;
}
