#include <iostream>
#include <string>
#include <vector>

void unique(int array[], int size);


int main(int argc, char* args[]) {

    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    unique(numbers, size);

    return 0;
}


void unique(int array[], int size) {

    std::vector<int> result;

    for (int j = 0; j < size; ++j) {

        if ((std::find(result.begin(),result.end(), array[j]) != result.end())) {

        } else {
            result.push_back(array[j]);
        }
    }

    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << ' ';
    }
}