#ifndef DATA_STRUCTURES_ALGORITHMS_DOUBLELINKEDLIST_H
#define DATA_STRUCTURES_ALGORITHMS_DOUBLELINKEDLIST_H


struct Node {
    double value;
    Node *prev = nullptr;
    Node *next = nullptr;

    Node() {};

    Node(const double &_value) : value(_value) {};
};

class DoubleLinkedList {
    Node *head = nullptr;
    Node *tail = nullptr;
public:
    DoubleLinkedList();

    DoubleLinkedList(const double &head_value);

    ~DoubleLinkedList();

    void push_back(const double &value);

    void push_front(const double &value);

    double pop_back();

    double pop_front();

    bool empty() const;

};


#endif //DATA_STRUCTURES_ALGORITHMS_DOUBLELINKEDLIST_H
