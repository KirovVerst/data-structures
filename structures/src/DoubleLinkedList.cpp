#include <stdexcept>
#include "DoubleLinkedList.h"

DoubleLinkedList::DoubleLinkedList() {};

DoubleLinkedList::DoubleLinkedList(const double &value) : head(new Node(value)), tail(head) {}

DoubleLinkedList::~DoubleLinkedList() {
    Node *ptr;
    while (head != nullptr) {
        ptr = head->prev;
        delete head;
        head = ptr;
    }
}

void DoubleLinkedList::push_back(const double &value) {
    Node *node = new Node(value);
    tail->prev = node;
    node->next = tail;
    tail = node;
}

void DoubleLinkedList::push_front(const double &value) {
    Node *node = new Node(value);
    head->next = node;
    node->prev = head;
    head = node;
}

bool DoubleLinkedList::empty() const {
    return head == nullptr;
}

double DoubleLinkedList::pop_back() {
    if (tail == nullptr) {
        throw std::runtime_error("list is empty");
    }
    Node *prev_tail = tail;
    tail = prev_tail->next;
    tail->prev = nullptr;
    double value = prev_tail->value;
    delete prev_tail;
    return value;
}

double DoubleLinkedList::pop_front() {
    if (head == nullptr) {
        throw std::runtime_error("list is empty");
    }
    Node *prev_head = head;
    head = head->prev;
    head->next = nullptr;
    double value = prev_head->value;
    delete prev_head;
    return value;
}

bool DoubleLinkedList::contains(const double &_value) const {
    Node *ptr = head;
    while (ptr != nullptr) {
        if (ptr->value == _value) {
            return true;
        }
        ptr = ptr->prev;
    }
    return false;
}

unsigned int DoubleLinkedList::count(const double &_value) const {
    Node *ptr = head;

    unsigned int _count = 0;
    while (ptr != nullptr) {
        if (ptr->value == _value) {
            _count++;
        }
        ptr = ptr->prev;
    }
    return _count;
}

