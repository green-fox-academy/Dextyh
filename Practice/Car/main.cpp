#include <iostream>

#include "car.h"
#include "carpark.h"

int main() {

    Carpark carpark;
    Car car1(1, "SGU-347", 1234, false);
    Car car2(2, "GHS-342", 1013, false);
    Car car3(3, "YGA-432", 999, false);
    carpark.addCar(car1);
    carpark.addCar(car2);
    carpark.addCar(car3);

    Car car4(4, "PSA-123", 1234, false);
    carpark.addCar(car4);

    carpark.modifyTicket(2);

    for(auto p : carpark.getPenaltiesByYear()) {
        std::cout << "Year: " << p.first << " | Number: " << p.second << std::endl;
    }


    return 0;
}