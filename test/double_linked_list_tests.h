#ifndef DATA_STRUCTURES_ALGORITHMS_DOUBLE_LINKED_LIST_TESTS_H
#define DATA_STRUCTURES_ALGORITHMS_DOUBLE_LINKED_LIST_TESTS_H

#include "gtest/gtest.h"
#include "DoubleLinkedList.h"

typedef DoubleLinkedList List;

TEST(DoubleLinkedList, init) {
    List l1;
    EXPECT_TRUE(l1.empty());
    List l2(124);
    EXPECT_FALSE(l2.empty());
}

TEST(DoubleLinkedList, push_pop) {
    List l(0);
    l.push_back(1);
    l.push_back(2);
    l.push_front(-1);
    l.push_front(-2);
    EXPECT_EQ(l.pop_front(), -2);
    EXPECT_EQ(l.pop_back(), 2);
}


#endif //DATA_STRUCTURES_ALGORITHMS_DOUBLE_LINKED_LIST_TESTS_H
