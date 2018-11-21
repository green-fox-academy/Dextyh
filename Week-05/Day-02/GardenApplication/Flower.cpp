#include "Flower.h"

Flower::Flower(Color color) {

    _color = color;
    _waterAmount = 0;
}

std::string Flower::getColor() {

    if (_color == Color::BLUE) {
        return "Blue";

    } else if (_color == Color::ORANGE) {
        return "Orange";

    } else if (_color == Color::PURPLE) {
        return "Purple";

    } else if (_color == Color::YELLOW) {
        return "Yellow";
    }
}

void Flower::absorb(int wateringAmount) {

    _waterAmount = _waterAmount +  wateringAmount / 4 * 3;
}

bool Flower::needWater() {

    if (_waterAmount < 5) {
        return true;

    } else {
        return false;
    }

}

std::string Flower::getName() {
    return "Flower";
}

int Flower::getWaterAmount() {
    return _waterAmount;
}
