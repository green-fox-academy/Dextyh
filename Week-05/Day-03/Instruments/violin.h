#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include <iostream>
#include "stringedInstrument.h"

class Violin : public StringedInstrument {

public:

    Violin();
    Violin(int numberOfStrings);

    std::string sound() override;
    void play() override;

};


#endif //INSTRUMENTS_VIOLIN_H
