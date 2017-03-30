#ifndef DATA_STRUCTURES_SET_H
#define DATA_STRUCTURES_SET_H

#include "Vector.h"

class Set {
    Vector *items;
public:

    Set();

    Set(double *values, unsigned int len);

    ~Set();

    void add(double item);

    void remove(double item);

    bool contains(double item);

    unsigned int size();

    bool empty();

    double pop();

    Set unite(Set other);

    Set intersection(Set other);

    Set difference(Set other);

    Set symmetric_difference(Set other);

};


#endif //DATA_STRUCTURES_SET_H
