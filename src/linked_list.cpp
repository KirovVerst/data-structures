#include "../inlcude/linked_list.h"
#include <iostream>


linked_list::linked_list() : head(NULL) {}

linked_list::linked_list(double head_value) {
    head = new node();
    head->value = head_value;
}

linked_list::~linked_list() {
    while (head != NULL) {
        node *n = head->next;
        delete head;
        head = n;
    }
}

void linked_list::push(double v) {
    node *n = new node();
    n->next = head;
    n->value = v;
    head = n;
}

double linked_list::pop() throw() {
    if (this->is_empty()) {
        throw std::runtime_error("The list is empty.");
    }
    node *r_podoubleer = head;
    double r_value = head->value;
    head = head->next;
    delete r_podoubleer;
    return r_value;
}

bool linked_list::is_empty() {
    return head == NULL;
}

double linked_list::count(double v) {
    double c = 0;
    node *p = head;
    while (p != NULL) {
        if (p->value == v) {
            c++;
        }
        p = p->next;
    }
    return c;
}