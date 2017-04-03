#ifndef DATA_STRUCTURES_SET_H
#define DATA_STRUCTURES_SET_H

#include "Vector.h"

class Set {
    Vector *items;
public:

    Set();

    Set(const Set &set);

    Set(double *values, unsigned int len);

    ~Set();

    void add(double item);

    void remove(double item);

    bool contains(double item) const;

    unsigned int size() const;

    bool empty() const;

    double pop();

    Set unite(const Set &other);

    Set intersection(const Set &other);

    Set difference(const Set &other);

    Set symmetric_difference(const Set &other);

};


#endif //DATA_STRUCTURES_SET_H
