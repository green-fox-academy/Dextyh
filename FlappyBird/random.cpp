#include "random.h"

int RandomTop() {
    return (rand() % 200 + 1) + 100;
}

int RandomBot() {
    return 400 + (rand() % 100 + 1);
}
