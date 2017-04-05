#ifndef DATA_STRUCTURES_FOO_H
#define DATA_STRUCTURES_FOO_H

struct LinkedNode {
    double value;
    LinkedNode *next = nullptr;

    LinkedNode();

    LinkedNode(const double &_value) : value(_value) {};
};


class LinkedList {

    typedef LinkedNode Node;

    Node *head;
public:

    LinkedList();

    LinkedList(const double &head_value);

    ~LinkedList();

    void push(const double &value);

    double pop();

    unsigned int count(const double &value) const;

    bool contains(const double &value) const;

    bool empty() const;
};

#endif //DATA_STRUCTURES_FOO_H
