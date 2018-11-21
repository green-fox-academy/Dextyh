#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include <iostream>
#include "flyable.h"
#include "vehicle.h"

class Helicopter : public Flyable, public Vehicle {

public:

    Helicopter(int weight, int maxSpeed, Color color);

    void land() override;
    void fly() override;
    void takeOff() override;

};


#endif
