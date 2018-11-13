#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>

class Counter {

public:

    Counter();

    Counter(int number);

    void add(int number);

    void add();

    int get();

    void reset();

private:

    int _number;
    int _start;

};


#endif
