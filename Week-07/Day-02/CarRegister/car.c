#include "car.h"

int number_of_older_cars(car_t cars[], int length, int age)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (2018-cars[i].year > age) {
            counter++;
        }
    }
    return counter;
}

int number_of_type_cars(car_t cars[], int length, transmission_t type)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if (cars[i].type == type) {
            counter++;
        }
    }
    return counter;
}