/*
 * Optimized implementation of converter function.
 * Compiled with: g++ -std=c++17 -O3 -o opt driver.c optimized_converter.c
 * Tests run with: ./opt quotes.txt 2000
 */

#include "converter.h"
#include <stdlib.h>

void convert_all(unsigned nlines, char* lines[], quote_t nums[])
{
    char* line;
    quote_t val;
    for (unsigned i = 0; i < nlines; i++) {
        line = *(lines++);
        val = (*(line++) - '0');
        do {
            val = (val << 3) + (val << 1) + (*line - '0');
        } while ( *(++line) != '\0' );
        *(nums++) = val;
    }
}