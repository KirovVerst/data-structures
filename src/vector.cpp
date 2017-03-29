#include <stdexcept>
#include "../include/vector.h"

vector::vector() {
    this->arr = new double[DEFAULT_CAPACITY];
    this->capacity = DEFAULT_CAPACITY;
    this->curr_size = 0;
}

vector::vector(unsigned int capacity) {
    this->arr = new double[capacity];
    this->capacity = capacity;
    this->curr_size = 0;
}

vector::~vector() {
    delete[] arr;
}

void vector::check_bounds(unsigned int index) throw() {
    if (index >= curr_size) {
        throw std::runtime_error("index is out of range");
    }
}

void vector::extend(unsigned int delta_size = DEFAULT_CAPACITY) {
    capacity += delta_size;
    double *new_arr = new double[curr_size + capacity];

    for (unsigned int i = 0; i < curr_size; i++) {
        new_arr[i] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
}

void vector::append(double element) {
    if (capacity == curr_size) {
        extend();
    }
    arr[curr_size] = element;
    curr_size++;
}

void vector::clear() {
    delete[] arr;
    capacity = DEFAULT_CAPACITY;
    arr = new double[capacity];
    curr_size = 0;
}

bool vector::contains(const double element) {
    return this->indexOf(element) != -1;
}

double vector::elementAt(const unsigned int index) throw() {
    check_bounds(index);
    return arr[index];
}

int vector::indexOf(const double element) {
    for (int i = 0; i < curr_size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

void vector::removeAt(unsigned int index) throw() {
    check_bounds(index);

    double *new_arr = new double[capacity];
    for (unsigned int i = 0; i < index; ++i) {
        new_arr[i] = arr[i];
    }
    for (unsigned int i = index; i < curr_size; ++i) {
        new_arr[i] = arr[i + 1];
    }
    delete[] arr;
    arr = new_arr;
    curr_size--;
}

void vector::remove(double element) {
    int index = indexOf(element);
    if (index < 0) {
        return;
    } else {
        removeAt(index);
    }
}

void vector::replace(unsigned int index, double element) throw() {
    check_bounds(index);
    arr[index] = element;
}

void vector::insertAt(unsigned int index, double element)throw() {
    check_bounds(index);
    if (curr_size + 1 > capacity) {
        extend();
    }
    curr_size++;
    double *new_arr = new double[capacity];
    for (unsigned int i = 0; i < index; i++) {
        new_arr[i] = arr[i];
    }
    new_arr[index] = element;
    for (int j = index + 1; j < curr_size; ++j) {
        new_arr[j] = arr[j - 1];
    }
    delete[] arr;
}

bool vector::empty() {
    return curr_size == 0;
}

unsigned int vector::size() {
    return curr_size;
}