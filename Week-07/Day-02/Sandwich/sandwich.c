#include "sandwich.h"

float price(sandwich_t sandwich, int number_of_sandwiches)
{
    return sandwich.price * number_of_sandwiches;
}