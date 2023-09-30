#include <iostream>
#include "binary_gap.h"

#define BITS_IN_BYTE (8)


int solution(int N) {
    int max_gap = 0;
    int temp_gap = 0;
    bool counting_en = false;

    /* Iterate through all bits in N */
    for (int i = 0; i < (int)(sizeof(N) * BITS_IN_BYTE); i++) {
        if (0 == (N & (1 << i))) {
            if (false != counting_en) {
                /* Increment temp_gap if bit value is 0 and counting is enabled */
                temp_gap ++;
            }
        } else {
            if (false == counting_en) {
                /* Enable counting when first bit with value 1 is detected */
                counting_en = true;
            } else {
                /* Consecutive bit with value 1, update max_gap if temp_gap is larger */
                if (temp_gap > max_gap) {
                    max_gap = temp_gap;
                }
                temp_gap = 0;
            }
        }
    }

    return max_gap;
}
