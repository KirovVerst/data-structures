#ifndef DATA_STRUCTURES_VECTOR_H
#define DATA_STRUCTURES_VECTOR_H


#include <cstdio>

class vector {
    const static unsigned int DEFAULT_CAPACITY = 100;
    double *arr;
    unsigned int curr_size;
    unsigned int capacity;

    void extend(unsigned int delta_size);

    void check_bounds(unsigned int index) throw();

public:
    vector();

    vector(unsigned int size);

    ~vector();

    void append(double element);

    void clear();

    bool contains(double element);

    double elementAt(unsigned int index) throw();

    int indexOf(double element);

    void insertAt(unsigned int index, double element) throw();

    bool empty();

    void removeAt(unsigned int index) throw();

    void remove(double element);

    void replace(unsigned int index, double element)throw();

    unsigned int size();
};


#endif //DATA_STRUCTURES_VECTOR_H
