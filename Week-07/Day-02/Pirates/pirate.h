#ifndef PIRATES_PIRATE_H
#define PIRATES_PIRATE_H

#include <stdio.h>
#include <string.h>

typedef struct pirate {

    char name[25];
    int has_wooden_leg;
    int gold;

} pirate_t;

int sum_gold(pirate_t pirates[], int length);
int averange_gold(pirate_t pirates[], int length);
char* richest_wooden_leg(pirate_t pirates[], int length, char* richest_name);

#endif
