
#ifndef DATA_STRUCTURES_ALGORITHMS_EXAMPLE_H
#define DATA_STRUCTURES_ALGORITHMS_EXAMPLE_H

#include "gtest/gtest.h"
#include "Set.h"

TEST(Set, init) {
    Set s1;
    EXPECT_EQ(s1.size(), 0);
    double *values = new double[4]{1, 2, 3, 4};
    Set s2(values, 4);
    EXPECT_EQ(s2.size(), 4);
}


TEST(Set, add_and_pop) {
    Set s1;
    s1.add(12);
    s1.add(12);
    s1.add(12);
    EXPECT_EQ(s1.size(), 1);
    EXPECT_EQ(s1.pop(), 12);
    EXPECT_TRUE(s1.empty());
}


TEST(Set, contains) {
    Set s1;
    s1.add(1);
    EXPECT_TRUE(s1.contains(1));
}

#endif //DATA_STRUCTURES_ALGORITHMS_EXAMPLE_H
