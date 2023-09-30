#include "gtest/gtest.h"
#include "add.h"

TEST(TEST_ADD, test_example1) {
    int a = 1, b = 2;

    int result = add(a, b);

    EXPECT_EQ (result,  3);
}
