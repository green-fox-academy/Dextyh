#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H

#include <iostream>
#include "animal.h"

class Reptile : public Animal {

public:

    Reptile(std::string name);

    std::string getName() override;

    std::string breed() override;

};


#endif
