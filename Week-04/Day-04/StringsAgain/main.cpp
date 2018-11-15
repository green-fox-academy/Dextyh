#include <iostream>
#include <string>
#include <algorithm>

std::string text (std::string text, int i);

int main() {

    std::string input;

    std::cout << "Type something here: ";
    std::cin >> input;
    std::cout << text(input, 0);

    return 0;
}


std::string text (std::string input, int i) {

    if (i >= sizeof(input) / sizeof(input[0])) {
        return input;

    } else if (input[i] == 'x') {
        input.erase(input.begin() + i);
        return text(input, i);

    } else {
        return text(input, i+1);
    }


}
