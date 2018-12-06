#include <stdio.h>
#include "sandwich.h"
#include <string.h>

int main() {

    sandwich_t sandwich;
    strcpy(sandwich.name, "Big_Belly_Burger");
    sandwich.price = 5.49;

    int number_of_pieces = 5;

    printf("Price for %d %s is: %.2f USD\n",number_of_pieces, sandwich.name, price(sandwich, number_of_pieces));

    return 0;
}