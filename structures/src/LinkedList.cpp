#include <stdexcept>
#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::LinkedList(const double &value) : head(new Node(value)) {}

LinkedList::~LinkedList() {
    Node *ptr;
    while (head != nullptr) {
        ptr = head->next;
        delete head;
        head = ptr;
    }
}

void LinkedList::push(const double &value) {
    Node *n = new Node(value);
    n->next = head;
    head = n;
}

double LinkedList::pop() {
    if (this->empty()) {
        throw std::runtime_error("list is empty.");
    }
    Node *prev_head = head;
    double value = head->value;
    head = head->next;
    delete prev_head;
    return value;
}

bool LinkedList::empty() const {
    return head == nullptr;
}

unsigned int LinkedList::count(const double &value) const {
    unsigned int c = 0;
    Node *p = head;
    while (p != nullptr) {
        if (p->value == value) {
            c++;
        }
        p = p->next;
    }
    return c;
}

bool LinkedList::contains(const double &value) const {
    Node *ptr = head;
    while (ptr != nullptr) {
        if (ptr->value == value) {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}