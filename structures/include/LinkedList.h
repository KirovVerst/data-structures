#ifndef DATA_STRUCTURES_FOO_H
#define DATA_STRUCTURES_FOO_H

struct Node {
    double value;
    Node *next;
};

class LinkedList {
    Node *head;
public:

    LinkedList();

    LinkedList(double head_value);

    ~LinkedList();


    double pop() throw();

    unsigned int count(double v) const;

    void push(double v);

    bool is_empty() const;
};

#endif //DATA_STRUCTURES_FOO_H
