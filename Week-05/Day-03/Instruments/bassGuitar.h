#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H

#include <iostream>
#include "stringedInstrument.h"

class BassGuitar : public StringedInstrument{

public:

    BassGuitar();
    BassGuitar(int numberOfStrings);

    std::string sound() override;
    void play() override;

};


#endif
