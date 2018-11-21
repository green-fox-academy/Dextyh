#ifndef MODELDEVICES_PRINTER_H
#define MODELDEVICES_PRINTER_H

#include <iostream>

class Printer {

public:

    virtual std::string getSize() = 0;

    void print();

protected:



};


#endif
