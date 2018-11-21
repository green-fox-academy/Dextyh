#include "Tree.h"

Tree::Tree(Color color) : Flower(color) {

    _color = color;
    _waterAmount = 0;
}

void Tree::absorb(int wateringAmount) {

    _waterAmount = _waterAmount +  wateringAmount / 5 * 2;
}

bool Tree::needWater() {
    if (_waterAmount < 10) {
        return true;

    } else {
        return false;
    }
}

std::string Tree::getName() {
    return "Tree";
}
