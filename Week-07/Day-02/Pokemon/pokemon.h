#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#include <stdio.h>

typedef enum type {

    NORMAL,
    FIRE,
    WATER,
    ICE

    //Sorry, I won't type all types there!

} type_t;

typedef struct pokemon {

    char name[256];
    int age;
    int strength;
    int speed;
    type_t type;

} pokemon_t;

int get_faster_count(pokemon_t pokemons[], int length, int speed);
int get_type_count(pokemon_t pokemons[], int length, type_t type);
type_t get_strongest_pokemons_type(pokemon_t pokemons[], int length, int strength);
int get_type_strongest_pokemon(pokemon_t pokemons[], int length, type_t type);

#endif
