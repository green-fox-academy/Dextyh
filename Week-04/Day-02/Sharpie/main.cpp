#include <iostream>

/* Create Sharpie class
We should know about each sharpie their
color (which should be a string), width (which will be a floating point number), inkAmount (another floating point number)
When creating one, we need to specify the color and the width
Every sharpie is created with a default 100 as inkAmount
We can use() the sharpie objects
which decreases inkAmount
 */

#include "sharpie.h"


int main() {

    Sharpie Pen("Pen", "Red", 10);
    std::cout << "Color: " << Pen.getColor() << " | Width: " << Pen.getWidth() << " | Ink Amount: " << Pen.getInkAmount() << std::endl << std::endl;

    int hours = 0;
    for (int i = 0; i < 5; i++) {
        Pen.use();
        hours++;
    }
    std::cout << "You were using your Pen for " << hours << " hours!" << std::endl;
    std::cout << "Color: " << Pen.getColor() << " | Width: " << Pen.getWidth() << " | Ink Amount: " << Pen.getInkAmount() << std::endl << std::endl;


    return 0;
}