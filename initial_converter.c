/*
 * Trivial implementation of converter function.
 * Compiled with: g++ -std=c++17 -O3 -o opt driver.c initial_converter.c
 * Tests run with: Tests run with: ./opt quotes.txt 2000
 */

#include "converter.h"
#include <stdlib.h>

void convert_all(unsigned nlines, char* lines[], quote_t nums[])
{
    for (unsigned i = 0; i < nlines; i++) {
        nums[i] = atoi(lines[i]);
    }
}