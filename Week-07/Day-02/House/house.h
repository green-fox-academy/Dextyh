#ifndef HOUSE_HOUSE_H
#define HOUSE_HOUSE_H

#include <stdio.h>

typedef struct house {

    char address[100];
    int price;
    int number_of_rooms;
    int area;

} house_t;

int market_price(house_t house);
int worth_to_buy(house_t house);
int list_worth(house_t houses[]);

#endif
