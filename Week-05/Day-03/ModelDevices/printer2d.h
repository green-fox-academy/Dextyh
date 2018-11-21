#ifndef MODELDEVICES_PRINTER2D_H
#define MODELDEVICES_PRINTER2D_H

#include <iostream>
#include "printer.h"

class Printer2d : public Printer {

public:

    Printer2d(int sizeX, int sizeY);

    std::string getSize() override;

protected:

    int _sizeX;
    int _sizeY;

};


#endif
