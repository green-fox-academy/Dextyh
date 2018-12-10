#include <gtest/gtest.h>
#include "card.h"
#include "poker.h"


TEST(TestWinner, TestOneCard){

    std::vector<Card> player1;
    Card player1_card1(Value::FOUR);
    player1.push_back(player1_card1);

    std::vector<Card> player2;
    Card player2_card1(Value::J);
    player2.push_back(player2_card1);

    EXPECT_EQ(winner(player1, player2), 2);
}
