#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H

#include <iostream>
#include "animal.h"

class Mammal : public Animal {

public:

    Mammal(std::string name);

    std::string getName() override;

    std::string breed() override;

};


#endif
