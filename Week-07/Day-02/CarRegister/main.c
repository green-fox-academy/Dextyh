#include <stdio.h>
#include "car.h"

int main() {

    car_t car1;
    car_t car2;
    car_t car3;
    car_t car4;
    car_t car5;

    car1.year = 2000;
    car2.year = 2015;
    car3.year = 2017;
    car4.year = 2012;
    car5.year = 1997;

    car_t cars[5] = {car1, car2, car3, car4, car5};
    printf("%d\n",number_of_older_cars(cars, 5, 15));

    cars[0].type = AUTOMATIC;
    cars[1].type = MANUAL;
    cars[2].type = AUTOMATIC;
    cars[3].type = AUTOMATIC;
    cars[4].type = AUTOMATIC;

    printf("%d\n", number_of_type_cars(cars, 5, AUTOMATIC));

    return 0;
}