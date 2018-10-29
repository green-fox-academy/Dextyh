#include <iostream>

void multi(int x[] , int size);

int main() {



    int numList[] = {3, 4, 5, 6, 7};



    multi(numList , sizeof (numList) / sizeof (numList[0]));

    for (int b = 0; b < sizeof (numList) / sizeof (numList[0]); b++ ) {
        std::cout << numList[b] << std::endl;
    }





    return 0;
}

void multi(int x[] , int size) {



    for(int a = 0; a < size; ++a) {

        x[a] = x[a] * 2;
    }





}