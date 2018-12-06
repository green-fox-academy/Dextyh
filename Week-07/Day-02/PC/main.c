#include <stdio.h>
#include "computer.h"
#include "notebook.h"

int main() {

    computer_t computer1;
    computer1.cpu_speed_GHz = 4.2f;
    computer1.ram_size_GB = 16;
    computer1.bits = 64;

    notebook_t notebook1;
    notebook1.cpu_speed_GHz = 2.4f;
    notebook1.ram_size_GB = 8;
    notebook1.bits = 64;

    printf("Computer 1 || CPU: %.1f | RAM: %d | Bits: %d\n", computer1.cpu_speed_GHz, computer1.ram_size_GB, computer1.bits);
    printf("Notebook 1 || CPU: %.1f | RAM: %d | Bits: %d\n", notebook1.cpu_speed_GHz, notebook1.ram_size_GB, notebook1.bits);

    return 0;
}