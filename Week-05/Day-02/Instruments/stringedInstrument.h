#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include <iostream>
#include "instrument.h"

class StringedInstrument : Instrument {

public:

    virtual std::string sound() = 0;

protected:

    int _numberOfStrings;

};


#endif
