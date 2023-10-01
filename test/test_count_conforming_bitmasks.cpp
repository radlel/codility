#include "gtest/gtest.h"
#include <chrono>
#include "count_conforming_bitmasks.h"


TEST(TEST_COUNT_CONFORMING_BITMASKS, test_example) {
    int A = 1073741727;
    int B = 1073741631;
    int C = 1073741679;
    int expected_result = 8;
    int result = 0;

    result = solution(A, B, C);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_COUNT_CONFORMING_BITMASKS, test_simple) {
    int A = 1073741817;
    int B = 1073741811;
    int C = 1073741812;
    int expected_result = 11;
    int result = 0;

    result = solution(A, B, C);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_COUNT_CONFORMING_BITMASKS, test_disjoint_bits) {
    int A = 1073741805;
    int B = 1073741631;
    int C = 1073741307;
    int expected_result = 10;
    int result = 0;

    result = solution(A, B, C);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_COUNT_CONFORMING_BITMASKS, test_chain) {
    int A = 1073741815;
    int B = 1073741795;
    int C = 1073741761;
    int expected_result = 32;
    int result = 0;

    result = solution(A, B, C);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_COUNT_CONFORMING_BITMASKS, test_incl_excl_rule1) {
    int A = 1073741702;
    int B = 1073741697;
    int C = 1073741823;
    int expected_result = 80;
    int result = 0;

    result = solution(A, B, C);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_COUNT_CONFORMING_BITMASKS, test_incl_excl_rule2) {
    int A = 1073741817;
    int B = 1073741703;
    int C = 1073741696;
    int expected_result = 128;
    int result = 0;

    result = solution(A, B, C);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_COUNT_CONFORMING_BITMASKS, test_extreme_min_result) {
    int A = 1073741823;
    int B = 1073741823;
    int C = 1073741823;
    int expected_result = 1;
    int result = 0;

    result = solution(A, B, C);

    EXPECT_EQ (result, expected_result);
}
