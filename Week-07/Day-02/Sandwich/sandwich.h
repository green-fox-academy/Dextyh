#ifndef SANDWICH_SANDWICH_H
#define SANDWICH_SANDWICH_H

typedef struct sandwich {

    char name[100];
    float price;
    float weight;

} sandwich_t;

float price(sandwich_t sandwich, int number_of_sandwiches);

#endif
