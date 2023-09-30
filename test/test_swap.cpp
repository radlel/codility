#include "gtest/gtest.h"
#include "swap.h"

TEST(TEST_SWAP, test_example1) {
    int a = 1, b = 2;

    swap(&a, &b);

    EXPECT_EQ (a,  2);
    EXPECT_EQ (b,  1);
}
