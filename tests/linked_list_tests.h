#ifndef DATA_STRUCTURES_ALGORITHMS_LINKED_LIST_TESTS_H
#define DATA_STRUCTURES_ALGORITHMS_LINKED_LIST_TESTS_H

#include "LinkedList.h"
#include "gtest/gtest.h"


TEST(LinkedList, init) {
    LinkedList l1;
    EXPECT_TRUE(l1.empty());
    LinkedList l2(12.34);
    EXPECT_FALSE(l2.empty());
}

TEST(LinkedList, push_pop) {
    LinkedList l;
    l.push(1);
    l.push(2);
    l.push(3);
    EXPECT_EQ(l.pop(), 3);
    EXPECT_EQ(l.pop(), 2);
    EXPECT_EQ(l.pop(), 1);
    EXPECT_TRUE(l.empty());
}


TEST(LinkedList, count) {
    LinkedList l;
    EXPECT_EQ(l.count(1), 0);
    l.push(1);
    EXPECT_EQ(l.count(1), 1);
}

TEST(LinkedList, contains) {
    LinkedList l;
    l.push(12);
    l.push(34);
    EXPECT_TRUE(l.contains(12));
    EXPECT_TRUE(l.contains(34));
    EXPECT_FALSE(l.contains(56));
}

#endif //DATA_STRUCTURES_ALGORITHMS_LINKED_LIST_TESTS_H
