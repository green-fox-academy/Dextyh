#include <iostream>

int main() {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    int x = currentHours + currentMinutes + currentSeconds;

    int day = 24*60*60;

    std::cout << (day-x) << std::endl;

    return 0;
}