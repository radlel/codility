#include "gtest/gtest.h"
#include "sparse_binary_decomposition.h"


#define BITS_IN_BYTE (8)
#define SPARSE_MASK (0b11)


bool isSparse(int val) {
    bool result = true;

    for (int i = 0; i < (int)(sizeof(val) * BITS_IN_BYTE - 2); i++) {
        if (((val >> i) & SPARSE_MASK) == SPARSE_MASK) {
            result = false;
            break;
        }
    }
    return result;
}


TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_example1) {
    int N = 26;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_simple1) {
    int N = 1166;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_simple2) {
    int N = 561892;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_simple3) {
    int N = 1031;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_small_power_of_two_minus_one) {
    int N = 1023;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_extreme1) {
    int N = 0;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_extreme2) {
    int N = 1;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_extreme3) {
    int N = 2;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_extreme4) {
    int N = 3;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_extreme5) {
    int N = 4;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_extreme6) {
    int N = 5;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_medium1) {
    int N = 74901729;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_medium2) {
    int N = 216188401;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_power_of_two_minus_one) {
    int N = 536870911;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_big_random) {
    int N = 935845759;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}

TEST(TEST_SPARSE_BINARY_DECOMPOSITION, test_maximal) {
    int N = 1000000000;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (true, result <= N);
    EXPECT_EQ (true, isSparse(result));
    EXPECT_EQ (true, isSparse(N - result));
}
