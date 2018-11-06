#include <iostream>
#include <algorithm>
#include <vector>



int main(int argc, char* args[])
{
    const std::vector<int> numbers = {1, 2, 3, 4, 5};


    if ( std::find(numbers.begin(), numbers.end(), 7) != numbers.end() ){
        std::cout << "Hoorray" << std::endl;
    }
    else{
        std::cout << "Noooooooo" << std::endl;
    }





    for(int i=0; i < numbers.size(); i++) {


        numbers[i] == 7;

        if (numbers[i] == 7) {
            std::cout << "Hoorray" << std::endl;
        }
        break;


    }








    return 0;
}