#ifndef DATA_STRUCTURES_VECTOR_H
#define DATA_STRUCTURES_VECTOR_H


#include <cstdio>

class vector {
    const static unsigned int DEFAULT_CAPACITY = 100;
    double *arr;

    void extend(unsigned int delta_size);

public:
    vector();

    vector(unsigned int size);

    ~vector();

    void append(double element);

    void clear();

    bool contains(double element);

    double elementAt(double index);

    unsigned int indexOf(double element);

    void insertAt(unsigned int index, double element);

    bool empty();

    void removeAt(unsigned int index);

    void remove(double element);

    void replace(unsigned int index, double element);

    unsigned int size();
};


#endif //DATA_STRUCTURES_VECTOR_H
