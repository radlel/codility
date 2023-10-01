#include <iostream>
#include "count_conforming_bitmasks.h"


const int VALUE_LEN_BITS = 30;


int getNumberOfCombinations(int val) {
    /* Returns number of conforming combinations for provided integer */
    int result = 1;

    /* Check each bit value in provided integer, if equals 0 multiply result by 2.
       Example: for integer 0b1110 there are 2 conforming combinations:
       0b1110, 0b1111 */
    for (int i = 0; i < VALUE_LEN_BITS; i++) {
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

    /* Check how many conforming combinations exist for integers A, B, C */
    n_a = getNumberOfCombinations(A);
    n_b = getNumberOfCombinations(B);
    n_c = getNumberOfCombinations(C);

    /* Check how many common conforming combinations exist for integer pairs A|B, A|C, B|C */
    n_a_or_b = getNumberOfCombinations(A | B);
    n_a_or_c = getNumberOfCombinations(A | C);
    n_b_or_c = getNumberOfCombinations(B | C);

    /* Check how many common conforming combinations exist for integer group A|B|C */
    n_a_or_b_or_c = getNumberOfCombinations(A | B | C);

    /* Sum up combinations for integers A, B and C. Then substract number of common combinations
       of pairs. Also if there are combinations conforming whole group, they were substracted 3
       times in previous step and are not considered anymore. Add them back. */
    result = n_a + n_b + n_c - (n_a_or_b + n_a_or_c + n_b_or_c) + n_a_or_b_or_c;

    return result;
}
