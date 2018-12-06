#include "house.h"

int market_price(house_t house)
{
    return house.area * 400;
}

int worth_to_buy(house_t house)
{
    if (house.price < market_price(house)) {
        return 1;
    } else {
        return 0;
    }
}

int list_worth(house_t houses[])
{
    int counter = 0;
    for (int i = 0; i < sizeof(houses) / sizeof(houses[0]); ++i) {
        if (worth_to_buy(houses[i])) {
            counter++;
        }
    }
    return counter;
}