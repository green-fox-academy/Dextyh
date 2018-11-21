#include "printer2d.h"

Printer2d::Printer2d(int sizeX, int sizeY) {

    _sizeX = sizeX;
    _sizeY = sizeY;
}

std::string Printer2d::getSize() {

    std::string X = std::to_string(_sizeX);
    std::string Y = std::to_string(_sizeY);
    return X + " X " + Y;
}