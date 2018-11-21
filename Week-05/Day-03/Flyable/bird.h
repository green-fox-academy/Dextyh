#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H

#include <iostream>
#include "animal.h"
#include "flyable.h"

class Bird : public Animal, public Flyable {

public:

    Bird(std::string name);

    std::string getName() override;

    std::string breed() override;

    void land() override;
    void fly() override;
    void takeOff() override;

};


#endif
