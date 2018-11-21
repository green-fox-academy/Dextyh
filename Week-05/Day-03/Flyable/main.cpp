#include <iostream>
#include "flyable.h"
#include "vehicle.h"
#include "helicopter.h"
#include "animal.h"
#include "bird.h"

int main() {

    Helicopter medicopter117(2100, 240, Color::RED);
    medicopter117.takeOff();
    medicopter117.fly();
    medicopter117.land();

    std::cout << std::endl;

    Bird bird("Csorike");
    bird.takeOff();
    bird.fly();
    bird.land();

    return 0;
}