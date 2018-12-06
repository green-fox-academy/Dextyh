#include "pirate.h"

int sum_gold(pirate_t pirates[], int length)
{
    int gold_counter = 0;

    for (int i = 0; i < length; ++i) {
        gold_counter += pirates[i].gold;
    }
    return gold_counter;
}

int averange_gold(pirate_t pirates[], int length)
{
    int gold_counter = 0;

    for (int i = 0; i < length; ++i) {
        gold_counter += pirates[i].gold;
    }
    return gold_counter / length;
}

char* richest_wooden_leg(pirate_t pirates[], int length, char* richest_name)
{
    int gold_max = 0;
    char name[25];

    for (int i = 0; i < length; ++i) {
        if(pirates[i].gold > gold_max && pirates[i].has_wooden_leg) {
            gold_max = pirates[i].gold;
            strcpy(name, pirates[i].name);
        }
    }
    return strcpy(richest_name, name);
}

