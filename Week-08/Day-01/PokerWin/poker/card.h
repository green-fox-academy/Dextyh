#ifndef POKERWIN_CARD_H
#define POKERWIN_CARD_H


enum class Suit {

    HEARTS,
    DIAMONDS,
    SPADES,
    CLUBS

};

enum class Value {

    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    J,
    Q,
    K,
    A

};

enum class Rank {

    HIGH_CARD,
    PAIR,
    TWO_PAIRS,
    THREE_OF_A_KIND,
    STRAIGHT,
    FLUSH,
    FULL,
    FULL_HOUSE,
    FOUR_OF_A_KIND,
    STRAIGHT_FLUSH

};


class Card {

public:

Card(Value value);
Value getValue();

private:

Suit _suit;
Value _value;


};


#endif
