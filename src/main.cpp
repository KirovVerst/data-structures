#include <iostream>
#include "gtest/gtest.h"

TEST(Dummy, foobar1) {
    EXPECT_EQ(1, 1);
}


TEST(Dummy, foobar2) {
    EXPECT_EQ(1, 1);
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}