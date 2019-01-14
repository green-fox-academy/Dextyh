#include <iostream>

int main() {


    double a = 24;
    int out = 0;

    if ((int)a % 2 == 0) {
        std::cout << out+1 << std::endl;
    }


    int b = 13;
    std::string out2 = "";

    if ((10 <= b) && (b <= 20)) {
        std::string out2 = "Sweet!";
        std::cout << out2 << std::endl;
    } else if (b < 10) {
        std::string out2 = "Less!";
        std::cout << out2 << std::endl;
    } else if (20 < b) {
        std::string out2 = "More!";
        std::cout << out2 << std::endl;
    }




    int c = 123;
    int credits = 100;
    bool isBonus = false;

    if ((50 <= credits) && (isBonus == false)) {
        int c = 123-2;
        std::cout << c << std::endl;

    } else if ((credits < 50) && (isBonus == false)) {
        int c = 123-1;
        std::cout << c << std::endl;
    } else if (isBonus == true) {
        std::cout << c << std::endl;
    }



    int d = 8;
    int time = 120;
    std::string out3 = "";

    if ((d % 4 == 0) && (time <= 200)) {
        std::string out3 = "Check";
        std::cout << out3 << std::endl;
    } else if (200 < time) {
        std::string out3 = "Time Out";
        std::cout << out3 << std::endl;
    } else {
        std::string out3 = "Run Forest Run!";
        std::cout << out3 << std::endl;
    }





    return 0;
}