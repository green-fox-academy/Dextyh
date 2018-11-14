#include <iostream>
#include <vector>

#include "domino.h"

std::vector<Domino> initializeDominoes()
{
    std::vector<Domino> dominoes;
    dominoes.push_back(Domino(5, 2));
    dominoes.push_back(Domino(4, 6));
    dominoes.push_back(Domino(1, 5));
    dominoes.push_back(Domino(6, 7));
    dominoes.push_back(Domino(2, 4));
    dominoes.push_back(Domino(7, 1));
    return dominoes;
}

int main(int argc, char* args[])
{
    std::vector<Domino> dominoes = initializeDominoes();
    // You have the list of Dominoes
    // Order them into one snake where the adjacent dominoes have the same numbers on their adjacent sides
    // eg: [2, 4], [4, 3], [3, 5] ...

    int i = 0;
    int number = 0;

    for (int j = 0; j < dominoes.size(); ++j) {

        std::cout << dominoes[i].toString();
        number = dominoes[i].getValues().second;

        for (int k = 0; k < dominoes.size(); ++k) {

            if (number == dominoes[k].getValues().first ) {
                i = k;
                break;
            }
        }
    }

    return 0;
}