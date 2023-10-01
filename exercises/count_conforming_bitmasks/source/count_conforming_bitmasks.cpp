#include <iostream>
#include "count_conforming_bitmasks.h"

#define VALUE_LEN (30)


int getNumberOfCombinations(int val) {
    int result = 1;

    for (int i = 0; i < VALUE_LEN; i++) {
        if (0 == (val & (1 << i))) {
            result *= 2;
        }
    }

    return result;
}


int solution(int A, int B, int C) {
    int result = 0;

    int n_a = 0, n_b = 0, n_c = 0;
    int n_a_or_b = 0, n_a_or_c = 0, n_b_or_c = 0;
    int n_a_or_b_or_c = 0;

    n_a = getNumberOfCombinations(A);
    n_b = getNumberOfCombinations(B);
    n_c = getNumberOfCombinations(C);

    n_a_or_b = getNumberOfCombinations(A | B);
    n_a_or_c = getNumberOfCombinations(A | C);
    n_b_or_c = getNumberOfCombinations(B | C);

    n_a_or_b_or_c = getNumberOfCombinations(A | B | C);

    result = n_a + n_b + n_c - (n_a_or_b + n_a_or_c + n_b_or_c) + n_a_or_b_or_c;

    return result;
}
