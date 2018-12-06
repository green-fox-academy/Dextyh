#include "car.h"

char* get_type(car_type_t type)
{
    if (type == BMW) {
        return "BMW";
    } else if (type == TESLA) {
        return "TESLA";
    } else if (type == VOLVO) {
        return "VOLVO";
    }
}

void info(car_t car)
{
    printf("Your car is a %s! It has got %.0lf KM!", get_type(car.type), car.km);

    if(car.type == TESLA) {
        printf(" Tesla is an electric car you fckin bastard! It hasn't got gas!\n");
    } else {
        printf(" Level of gas is %.0lf!\n", car.gas);
    }
}