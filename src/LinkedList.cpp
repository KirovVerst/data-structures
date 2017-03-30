#include "../include/LinkedList.h"
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
    Node *r_podoubleer = head;
    double r_value = head->value;
    head = head->next;
    delete r_podoubleer;
    return r_value;
}

bool LinkedList::is_empty() {
    return head == NULL;
}

double LinkedList::count(double v) {
    double c = 0;
    Node *p = head;
    while (p != NULL) {
        if (p->value == v) {
            c++;
        }
        p = p->next;
    }
    return c;
}