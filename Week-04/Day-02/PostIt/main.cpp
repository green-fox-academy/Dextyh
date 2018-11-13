#include <iostream>
#include "post_it.h"


/* Create a PostIt class that has
a backgroundColor
a text on it
a textColor
Create a few example post-it objects:
an orange with blue text: "Idea 1"
a pink with black text: "Awesome"
a yellow with green text: "Superb!"
*/




int main() {

    PostIt PostIt1 ("PostIt1", "Orange", "Idea 1", "Blue");
    PostIt1.setBackgroundColor("WORKS");
    std::cout << "Background Color: " << PostIt1.getBackgroundColor() << " | Text: " << PostIt1.getText() << " | Text Color: " << PostIt1.getTextColor() << std::endl << std::endl;

    PostIt PostIt2 ("PostIt2", "Pink", "Awesome", "Black");
    PostIt2.setText("WORKS");
    std::cout << "Background Color: " << PostIt2.getBackgroundColor() << " | Text: " << PostIt2.getText() << " | Text Color: " << PostIt2.getTextColor() << std::endl << std::endl;

    PostIt PostIt3 ("PostIt3", "Yellow", "Superb!", "Green");
    PostIt3.setTextColor("WORKS");
    std::cout << "Background Color: " << PostIt3.getBackgroundColor() << " | Text: " << PostIt3.getText() << " | Text Color: " << PostIt3.getTextColor() << std::endl << std::endl;


    return 0;
}