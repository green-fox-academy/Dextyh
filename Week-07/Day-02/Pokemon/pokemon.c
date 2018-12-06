#include "pokemon.h"

int get_faster_count(pokemon_t pokemons[], int length, int speed)
{
    if (speed > 10){
        printf("Maximum speed is 10 you bastard!");
        return -1;
    } else {

        int counter = 0;
        for (int i = 0; i < length; ++i) {
            if (pokemons[i].speed > speed) {
                counter++;
            }
        }
        return counter;
    }
}

int get_type_count(pokemon_t pokemons[], int length, type_t type)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if(pokemons[i].type == type) {
            counter++;
        }
    }
    return counter;
}

type_t get_strongest_pokemons_type(pokemon_t pokemons[], int length, int strength)
{
    if (strength > 10){
        printf("Maximum strength is 10 you bastard!");
        return -1;
    } else {

        type_t type;
        int maxStrength = 0;

        for (int i = 0; i < length; ++i) {
            if (maxStrength < pokemons[i].strength) {
                maxStrength = pokemons[i].strength;
                type = pokemons[i].type;
            }
        }
        return type;
    }
}

int get_type_strongest_pokemon(pokemon_t pokemons[], int length, type_t type)
{
    int maxStrength = 0;

    for (int i = 0; i < length; ++i) {
        if (type == pokemons[i].type) {
            maxStrength = pokemons[i].strength;
        }
    }
    return maxStrength;
}