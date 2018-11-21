#include "electricGuitar.h"

ElectricGuitar::ElectricGuitar(int numberOfStrings) {

    _name = "ElectricGuitar";
    _numberOfStrings = numberOfStrings;
}

ElectricGuitar::ElectricGuitar() {

    _name = "ElectricGuitar";
    _numberOfStrings = 6;
}

std::string ElectricGuitar::sound() {

    return "Twang";
}

void ElectricGuitar::play() {

    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;

}

