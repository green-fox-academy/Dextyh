#ifndef GARDENAPPLICATION_FLOWER_H
#define GARDENAPPLICATION_FLOWER_H

#include <iostream>

enum class Color {

    YELLOW,
    BLUE,
    PURPLE,
    ORANGE
};


class Flower {

public:

    Flower(Color color);

    std::string getColor();

    virtual void absorb(int wateringAmount);

    virtual bool needWater();

    virtual std::string getName();

    int getWaterAmount();


protected:

    Color _color;

    int _waterAmount;

};


#endif
