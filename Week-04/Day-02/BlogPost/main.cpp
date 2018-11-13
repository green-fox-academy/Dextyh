#include <iostream>

/* Create a BlogPost class that has
an authorName
a title
a text
a publicationDate
Create a few blog post objects:

"Lorem Ipsum" titled by John Doe posted at "2000.05.04."
Lorem ipsum dolor sit amet.
"Wait but why" titled by Tim Urban posted at "2010.10.10."
A popular long-form, stick-figure-illustrated blog about almost everything.
"One Engineer Is Trying to Get IBM to Reckon With Trump" titled by William Turton at "2017.03.28."
Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention.
When I asked to take his picture outside one of IBM’s New York City offices,
he told me that he wasn’t really into the whole organizer profile thing.
*/

#include "blog_post.h"


int main() {

    BlogPost First ("First", "John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.", "2000.05.04.");
    std::cout << "Author Name: " << First.getAuthorName() << " | Title: " << First.getTitle() << " | Text: " << First.getText() << " | Publication Date: " << First.getPublicationDate() << std::endl << std::endl;

    BlogPost Second ("Second", "Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10.");
    std::cout << "Author Name: " << Second.getAuthorName() << " | Title: " << Second.getTitle() << " | Text: " << Second.getText() << " | Publication Date: " << Second.getPublicationDate() << std::endl << std::endl;

    BlogPost Third ("Third", "William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "LONG SHIT", "2017.03.28.");
    std::cout << "Author Name: " << Third.getAuthorName() << " | Title: " << Third.getTitle() << " | Text: " << Third.getText() << " | Publication Date: " << Third.getPublicationDate() << std::endl << std::endl;


    return 0;
}