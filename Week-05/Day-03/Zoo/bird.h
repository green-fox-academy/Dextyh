#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H

#include <iostream>
#include "animal.h"

class Bird : public Animal {

public:

    Bird(std::string name);

    std::string getName() override;

    std::string breed() override;

};


#endif
