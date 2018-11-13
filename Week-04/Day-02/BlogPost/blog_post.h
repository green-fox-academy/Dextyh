#ifndef BLOGPOST_BLOG_POST_H
#define BLOGPOST_BLOG_POST_H

#include <iostream>

class BlogPost {

public:

    BlogPost(std::string name, std::string authorName, std::string title, std::string text, std::string publicationDate);

    void setAuthorName (std::string authorName);
    void setTitle (std::string title);
    void setText (std::string text);
    void setPublicationDate (std::string publicationDate);

    std::string getAuthorName();
    std::string getTitle();
    std::string getText();
    std::string getPublicationDate();

private:

    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;


};


#endif
