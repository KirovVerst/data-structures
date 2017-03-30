//
// Created by Kirov on 30/03/2017.
//
#include <stdexcept>

#include "../include/Set.h"

using std::out_of_range;

Set::Set() {
    items = new Vector();
};

Set::Set(double *values, unsigned int len) {
    items = new Vector(len);
    for (int i = 0; i < len; ++i) {
        items->append(values[i]);
    }
}

Set::~Set() {
    delete items;
}

void Set::add(double item) {
    if (!items->contains(item)) {
        items->append(item);
    }
};

void Set::remove(double item) {
    int index = items->indexOf(item);
    if (index != -1) {
        items->removeAt(index);
    }
};

bool Set::contains(double item) {
    return items->contains(item);
};

unsigned int Set::size() {
    return items->size();
};

bool Set::empty() {
    return items->empty();
};

double Set::pop() {
    if (empty()) {
        throw std::out_of_range("Set is empty");
    }
    double v = items->elementAt(size() - 1);
    items->removeAt(size() - 1);
    return v;

}