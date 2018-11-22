#include <gtest/gtest.h>
#include "apple.h"
#include <vector>

TEST(testAppleString, testCout){
    EXPECT_EQ(getApple(), "appleFAIL");

    if (getApple() == "appleFAIL") {
        std::cout << std::endl << "<< TEST COMPLETED >>" << std::endl;
    } else {
        std::cout << std::endl << "<< TEST FAILED >>" << std::endl;
    }
}

TEST(testSumFunction, testSumCout1){

    std::vector<int> listOfInts;

    EXPECT_EQ(sumFunction(listOfInts), 0);
}

TEST(testSumFunction, testSumCout2){

    std::vector<int> listOfInts;
    listOfInts.push_back(3);

    EXPECT_EQ(sumFunction(listOfInts), 3);
}

TEST(testSumFunction, testSumCout3){

    std::vector<int> listOfInts;
    listOfInts.push_back(3);
    listOfInts.push_back(8);

    EXPECT_EQ(sumFunction(listOfInts), 11);
}

TEST(testSumFunction, testSumCout4){

    std::vector<int> listOfInts;
    listOfInts.push_back(3);
    listOfInts.push_back(-8);

    EXPECT_EQ(sumFunction(listOfInts), -5);
}


