#include <iostream>
#include "printer.h"
#include "printer3d.h"
#include "printer2d.h"
#include "scanner.h"
#include "copier.h"
#include <vector>

int main() {

    std::vector<Printer*> printers;

    Printer2d printer1(7, 12);
    Printer2d printer2(4, 8);
    Printer2d printer3(9, 11);
    Printer3d printer4(4, 6, 9);
    Printer3d printer5(7, 11, 12);
    Copier copier1(12, 13, 30);

    printers.push_back(&printer1);
    printers.push_back(&printer2);
    printers.push_back(&printer3);
    printers.push_back(&printer4);
    printers.push_back(&printer5);
    printers.push_back(&copier1);

    for (int i = 0; i < printers.size(); ++i) {
        printers[i]->print();
    }

    std::cout << std::endl;

    std::vector<Scanner*> scanners;

    Scanner scanner1(28);
    Scanner scanner2(39);
    Copier copier2(7, 18, 25);
    Copier copier3(16, 23, 41);

    scanners.push_back(&scanner1);
    scanners.push_back(&scanner2);
    scanners.push_back(&copier2);
    scanners.push_back(&copier3);

    for (int j = 0; j < scanners.size(); ++j) {
        scanners[j]->scan();
    }



    return 0;
}