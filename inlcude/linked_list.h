#ifndef DATA_STRUCTURES_FOO_H
#define DATA_STRUCTURES_FOO_H

struct node {
    int value;
    node *next;
};

class linked_list {
    node *head;
public:

    linked_list();

    linked_list(int root_value);

    ~linked_list();

    void push(int v);

    int pop() throw();

    bool is_empty();

    int count(int v);

};

#endif //DATA_STRUCTURES_FOO_H
