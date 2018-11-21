#ifndef MODELDEVICES_COPIER_H
#define MODELDEVICES_COPIER_H

#include <iostream>
#include "printer2d.h"
#include "scanner.h"

class Copier : public Printer2d, public Scanner {

public:

    Copier(int sizeX, int sizeY, int speed);

    void copy();

private:



};


#endif
