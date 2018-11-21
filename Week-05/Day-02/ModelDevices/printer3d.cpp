#include "printer3d.h"

Printer3d::Printer3d(int sizeX, int sizeY, int sizeZ) {

    _sizeX = sizeX;
    _sizeY = sizeY;
    _sizeZ = sizeZ;
}

std::string Printer3d::getSize() {

    std::string X = std::to_string(_sizeX);
    std::string Y = std::to_string(_sizeY);
    std::string Z = std::to_string(_sizeZ);

    return X + " X " + Y + " X " + Z;
}
