#include <iostream>
#include "swap.h"

void swap(int* a, int* b) {
    if (nullptr != a && nullptr != b) {
        *a ^= *b ^= *a ^= *b;
    }
}
