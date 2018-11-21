#ifndef MODELDEVICES_PRINTER3D_H
#define MODELDEVICES_PRINTER3D_H

#include <iostream>
#include "printer.h"

class Printer3d : public Printer {

public:

    Printer3d(int sizeX, int sizeY, int sizeZ);

    std::string getSize() override;

private:

    int _sizeX;
    int _sizeY;
    int _sizeZ;

};


#endif
