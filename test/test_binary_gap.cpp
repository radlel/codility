#include "gtest/gtest.h"
#include "binary_gap.h"


TEST(TEST_BINARY_GAP, test_example1) {
    int N = 1041;
    int expected_result = 5;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_example2) {
    int N = 15;
    int expected_result = 0;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_example3) {
    int N = 32;
    int expected_result = 0;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_extremes1) {
    int N = 1;
    int expected_result = 0;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_extremes2) {
    int N = 5;
    int expected_result = 1;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_extremes3) {
    int N = 2147483647;
    int expected_result = 0;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_trailing_zeroes1) {
    int N = 6;
    int expected_result = 0;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_trailing_zeroes2) {
    int N = 328;
    int expected_result = 2;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_power_of_2_1) {
    int N = 5;
    int expected_result = 1;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_power_of_2_2) {
    int N = 16;
    int expected_result = 0;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_power_of_2_3) {
    int N = 1024;
    int expected_result = 0;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_simple1_1) {
    int N = 9;
    int expected_result = 2;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_simple1_2) {
    int N = 11;
    int expected_result = 1;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_simple2_1) {
    int N = 19;
    int expected_result = 2;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_simple2_2) {
    int N = 42;
    int expected_result = 1;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_simple3_1) {
    int N = 1162;
    int expected_result = 3;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_simple3_2) {
    int N = 5;
    int expected_result = 1;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_medium1_1) {
    int N = 51712;
    int expected_result = 2;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_medium1_2) {
    int N = 20;
    int expected_result = 1;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_medium2_1) {
    int N = 561892;
    int expected_result = 3;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_medium2_2) {
    int N = 9;
    int expected_result = 2;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_medium3) {
    int N = 66561;
    int expected_result = 9;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_large1) {
    int N = 6291457;
    int expected_result = 20;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_large2) {
    int N = 74901729;
    int expected_result = 4;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_large3) {
    int N = 805306373;
    int expected_result = 25;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_large4) {
    int N = 1376796946;
    int expected_result = 5;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_large5) {
    int N = 1073741825;
    int expected_result = 29;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}

TEST(TEST_BINARY_GAP, test_large6) {
    int N = 1610612737;
    int expected_result = 28;
    int result = 0;

    result = solution(N);

    EXPECT_EQ (result, expected_result);
}