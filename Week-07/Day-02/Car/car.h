#ifndef CAR_CAR_H
#define CAR_CAR_H

#include <stdio.h>

typedef enum car_type {

    BMW,
    TESLA,
    VOLVO

} car_type_t;

typedef struct car {

    car_type_t type;
    double km;
    double gas;

} car_t;

char* get_type(car_type_t type);
void info(car_t car);


#endif
