#ifndef DATA_STRUCTURES_FOO_H
#define DATA_STRUCTURES_FOO_H

struct node {
    double value;
    node *next;
};

class linked_list {
    node *head;
public:

    linked_list();

    linked_list(double root_value);

    ~linked_list();


    double pop() throw();

    double count(double v);

    void push(double v);

    bool is_empty();
};

#endif //DATA_STRUCTURES_FOO_H
