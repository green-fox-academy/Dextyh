#include "vehicle.h"

std::string Vehicle::getColor() {

    if(_color == Color::RED) {
        return "Red";

    } else if (_color == Color::GREEN) {
        return "Green";

    } else if (_color == Color::BLUE) {
        return "Blue";
    }

}
