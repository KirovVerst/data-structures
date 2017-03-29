#include "../inlcude/linked_list.h"
#include <iostream>

using namespace std;

linked_list::linked_list() : head(NULL) {}

linked_list::linked_list(int head_value) {
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

void linked_list::push(int v) {
    node *n = new node();
    n->next = head;
    n->value = v;
    head = n;
}

int linked_list::pop() throw() {
    if (this->is_empty()) {
        throw runtime_error("The list is empty.");
    }
    node *r_pointer = head;
    int r_value = head->value;
    head = head->next;
    delete r_pointer;
    return r_value;
}

bool linked_list::is_empty() {
    return head == NULL;
}

int linked_list::count(int v) {
    int c = 0;
    node *p = head;
    while (p != NULL) {
        if (p->value == v) {
            c++;
        }
        p = p->next;
    }
    return c;
}