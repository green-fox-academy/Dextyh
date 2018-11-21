#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include <iostream>
#include "stringedInstrument.h"

class ElectricGuitar : public StringedInstrument {

public:

    ElectricGuitar();
    ElectricGuitar(int numberOfStrings);

    std::string sound() override;
    void play() override;

};


#endif
