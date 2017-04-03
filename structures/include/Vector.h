#ifndef DATA_STRUCTURES_VECTOR_H
#define DATA_STRUCTURES_VECTOR_H


#include <cstdio>

class Vector {
    const static unsigned int DEFAULT_CAPACITY = 100;
    double *arr;
    unsigned int curr_size;
    unsigned int capacity;

    void extend(unsigned int delta_size);

    void check_bounds(unsigned int index);

public:
    Vector();

    Vector(unsigned int _capacity);

    ~Vector();

    void append(double element);

    void clear();

    bool contains(double element);

    double elementAt(unsigned int index);

    int indexOf(double element);

    void insertAt(unsigned int index, double element);

    bool empty();

    void removeAt(unsigned int index);

    void remove(double element);

    void replace(unsigned int index, double element);

    unsigned int size();
};


#endif //DATA_STRUCTURES_VECTOR_H
