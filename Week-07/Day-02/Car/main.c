#include <stdio.h>
#include "car.h"

int main() {

    car_t car1;
    car1.type = BMW;
    car1.km = 185000;
    car1.gas = 45;

    car_t car2;
    car2.type = TESLA;
    car2.km = 9000;
    car2.gas = 0;

    info(car1);
    info(car2);

    return 0;
}