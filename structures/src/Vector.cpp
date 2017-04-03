#include <stdexcept>
#include "Vector.h"

Vector::Vector() {
    this->arr = new double[DEFAULT_CAPACITY];
    this->capacity = DEFAULT_CAPACITY;
    this->curr_size = 0;
}

Vector::Vector(unsigned int _capacity) {
    this->arr = new double[_capacity];
    this->capacity = _capacity;
    this->curr_size = 0;
}

Vector::~Vector() {
    delete[] arr;
}

void Vector::check_bounds(unsigned int index) {
    if (index >= curr_size) {
        throw std::out_of_range("Index is out of range");
    }
}

void Vector::extend(unsigned int delta_size = DEFAULT_CAPACITY) {
    capacity += delta_size;
    double *new_arr = new double[curr_size + capacity];

    for (unsigned int i = 0; i < curr_size; i++) {
        new_arr[i] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
}

void Vector::append(double element) {
    if (capacity == curr_size) {
        extend();
    }
    arr[curr_size] = element;
    curr_size++;
}

void Vector::clear() {
    delete[] arr;
    capacity = DEFAULT_CAPACITY;
    arr = new double[capacity];
    curr_size = 0;
}

bool Vector::contains(const double element) {
    return this->indexOf(element) != -1;
}

double Vector::elementAt(const unsigned int index) {
    check_bounds(index);
    return arr[index];
}

int Vector::indexOf(const double element) {
    for (int i = 0; i < curr_size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

void Vector::removeAt(unsigned int index) {
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

void Vector::remove(double element) {
    int index = indexOf(element);
    if (index < 0) {
        return;
    } else {
        removeAt(index);
    }
}

void Vector::replace(unsigned int index, double element) {
    check_bounds(index);
    arr[index] = element;
}

void Vector::insertAt(unsigned int index, double element) {
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

bool Vector::empty() {
    return curr_size == 0;
}

unsigned int Vector::size() {
    return curr_size;
}