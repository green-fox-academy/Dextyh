#include "poker.h"

int winner(std::vector<Card> player1, std::vector<Card> player2) {

    Value valuePlayer1 = Value::TWO;
    Value valuePlayer2 = Value::TWO;

    for (int i = 0; i < player1.size(); ++i) {
        if (player1[i].getValue() > Value::TWO) {
            valuePlayer1 = player1[i].getValue();
        }
    }
    for (int j = 0; j < player2.size(); ++j) {
        if (player2[j].getValue() > Value::TWO) {
            valuePlayer2 = player2[j].getValue();
        }
    }

    if(valuePlayer1 > valuePlayer2) {
        return 1;
    } else if (valuePlayer1 < valuePlayer2) {
        return 2;
    } else {
        return 0;
    }
}
