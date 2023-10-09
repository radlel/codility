#include <iostream>
#include "sparse_binary_decomposition.h"


const int BITS_IN_BYTE = 8;
const int SPARSE_MASK = 0b11;
const int VALUE_IS_SPARSE = -1;


int getSparseMaskIndex(int val) {
    /* Checks if integer is sparse, if not return index of mask
       breaking sparse feature */
    for (int i = 0; i < (int)(sizeof(val) * BITS_IN_BYTE - 2); i++) {
        if (((val >> i) & SPARSE_MASK) == SPARSE_MASK) {
            return i;
        }
    }

    return VALUE_IS_SPARSE;
}

int solution(int N) {
    int sparse_mask_index = 0;

    for (int val = 0; val <= N / 2;) {
        /* Iterate through range <0, ..., N / 2 */

        sparse_mask_index = getSparseMaskIndex(val);

        if (VALUE_IS_SPARSE != sparse_mask_index) {
            /* Value is not sparse, update it skipping all not sparse numbers */
            val += (1 << (sparse_mask_index));
        } else {
            /* Value is sparse, check corresponding integer */
            if (VALUE_IS_SPARSE != getSparseMaskIndex(N - val)) {
                /* Corresponding integer is not sparse, keep checking */
                val++;
            } else {
                /* Solution found */
                return val;
            }
        }
    }

    return -1;
}
