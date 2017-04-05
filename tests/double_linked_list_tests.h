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

TEST(DoubleLinkedList, contains) {
    List l(0);
    l.push_front(1);
    l.push_front(3);
    EXPECT_TRUE(l.contains(1));
    EXPECT_TRUE(l.contains(3));
    EXPECT_FALSE(l.contains(9));
}

TEST(DoubleLinkedList, count) {
    List l(0);
    l.push_front(1);
    l.push_front(1);
    l.push_front(1);
    l.push_front(4);
    EXPECT_EQ(l.count(1), 3);
    EXPECT_EQ(l.count(4), 1);
    EXPECT_EQ(l.count(99), 0);
}


#endif //DATA_STRUCTURES_ALGORITHMS_DOUBLE_LINKED_LIST_TESTS_H
