//
// Created by Kirov on 04/04/2017.
//

#ifndef DATA_STRUCTURES_ALGORITHMS_VECTOR_TESTS_H
#define DATA_STRUCTURES_ALGORITHMS_VECTOR_TESTS_H


#include "gtest/gtest.h"
#include "Vector.h"

TEST(Vector, init) {
    Vector v1;
    EXPECT_EQ(v1.size(), 0);
    Vector v2(12);
    EXPECT_EQ(v2.size(), 0);
    double arr[] = {1, 2, 3, 4, 5};
    Vector v3(&arr[0], 5, 5);
    EXPECT_EQ(v3.size(), 5);
}


TEST(Vector, append) {
    double arr[] = {1, 2, 3, 4, 5};
    Vector v(&arr[0], 5, 5);
    v.append(6);
    EXPECT_EQ(v.size(), 6);
    EXPECT_EQ(v.elementAt(5), 6);
}

TEST(Vector, clear) {
    double arr[] = {1, 2, 3, 4, 5};
    Vector v(&arr[0], 5, 5);
    v.clear();
    EXPECT_EQ(v.size(), 0);
}

TEST(Vector, remove) {
    double arr[] = {1, 2, 3, 4, 5};
    Vector v(&arr[0], 5, 5);
    v.remove(1);
    EXPECT_FALSE(v.contains(1));
    EXPECT_EQ(v.elementAt(0), 2);
    EXPECT_EQ(v.size(), 4);
}

TEST(Vector, removeAt) {
    double arr[] = {0, 1, 2, 3, 4};
    Vector v(&arr[0], 5, 5);
    v.removeAt(2);
    EXPECT_FALSE(v.contains(2));
    EXPECT_EQ(v.elementAt(2), 3);
    EXPECT_EQ(v.size(), 4);
}

TEST(Vector, replace) {
    double arr[] = {0, 1, 2, 3, 4};
    Vector v(&arr[0], 5, 5);
    v.replace(2, 90);
    EXPECT_EQ(v.elementAt(2), 90);
    EXPECT_EQ(v.size(), 5);
}

TEST(Vector, insertAt) {
    double arr[] = {0, 1, 2, 3, 4};
    Vector v(&arr[0], 5, 5);
    v.insertAt(2, 90);
    EXPECT_EQ(v.elementAt(2), 90);
    EXPECT_EQ(v.elementAt(3), 2);
    EXPECT_EQ(v.size(), 6);
}

TEST(Vector, indexOf) {
    double arr[] = {0, 1, 2, 1, 4};
    Vector v(&arr[0], 5, 5);
    EXPECT_EQ(v.indexOf(1), 1);
    EXPECT_EQ(v.indexOf(5), -1);
}

#endif //DATA_STRUCTURES_ALGORITHMS_VECTOR_TESTS_H
