#ifndef DATA_STRUCTURES_ALGORITHMS_DOUBLELINKEDLIST_H
#define DATA_STRUCTURES_ALGORITHMS_DOUBLELINKEDLIST_H


struct DoubleLinkedNode {
    double value;
    DoubleLinkedNode *prev = nullptr;
    DoubleLinkedNode *next = nullptr;

    DoubleLinkedNode() {};

    DoubleLinkedNode(const double &_value) : value(_value) {};
};


class DoubleLinkedList {

    typedef DoubleLinkedNode Node;

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

    bool contains(const double &_value) const;

    unsigned int count(const double &_value) const;

    bool empty() const;

};


#endif //DATA_STRUCTURES_ALGORITHMS_DOUBLELINKEDLIST_H
