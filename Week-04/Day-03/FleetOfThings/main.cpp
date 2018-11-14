#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch


    Thing milk("Get Milk");
    Thing obstacles("Remove the obstacles");
    Thing standUp ("Stand up");
    Thing lunch ("Eat lunch");

    standUp.complete();
    lunch.complete();

    fleet.add(milk);
    fleet.add(obstacles);
    fleet.add(standUp);
    fleet.add(lunch);




    std::cout << fleet.toString() << std::endl;
    return 0;
}