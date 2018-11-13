#ifndef POSTIT_POST_IT_H
#define POSTIT_POST_IT_H

#include <iostream>

class PostIt {

public:

    PostIt (std::string name, std::string backgroundColor, std::string text, std::string textColor);

    void setBackgroundColor (std::string backgroundColor);
    void setText (std::string text);
    void setTextColor (std::string textColor);

    std::string getBackgroundColor();
    std::string getText();
    std::string getTextColor();

private:

    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;

};


#endif
