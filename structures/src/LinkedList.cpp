#include "LinkedList.h"
#include <iostream>


LinkedList::LinkedList() : head(NULL) {}

LinkedList::LinkedList(double head_value) {
    head = new Node();
    head->value = head_value;
}

LinkedList::~LinkedList() {
    while (head != NULL) {
        Node *n = head->next;
        delete head;
        head = n;
    }
}

void LinkedList::push(double v) {
    Node *n = new Node();
    n->next = head;
    n->value = v;
    head = n;
}

double LinkedList::pop() throw() {
    if (this->is_empty()) {
        throw std::runtime_error("The list is empty.");
    }
    Node *prev_head = head;
    double value = head->value;
    head = head->next;
    delete prev_head;
    return value;
}

bool LinkedList::is_empty() const {
    return head == NULL;
}

unsigned int LinkedList::count(double v) const {
    unsigned int c = 0;
    Node *p = head;
    while (p != NULL) {
        if (p->value == v) {
            c++;
        }
        p = p->next;
    }
    return c;
}