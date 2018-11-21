#include "violin.h"

Violin::Violin(int numberOfStrings) {

    _name = "Violin";
    _numberOfStrings = numberOfStrings;
}

Violin::Violin() {

    _name = "Violin";
    _numberOfStrings = 6;
}

std::string Violin::sound() {

    return "Screech";
}

void Violin::play() {

    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;

}