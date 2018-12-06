#ifndef CARREGISTER_CAR_H
#define CARREGISTER_CAR_H

typedef enum transmission {

    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH

} transmission_t;

typedef struct car {

    char manufacturers_name[256];
    float price;
    int year;
    transmission_t type;

} car_t;

int number_of_older_cars(car_t cars[], int length, int age);
int number_of_type_cars(car_t cars[], int length, transmission_t type);



#endif
