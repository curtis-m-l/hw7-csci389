/*
 * Naive implementation of converter function.
 * Compiled with: g++ -std=c++17 -O3 -o opt driver.c naive_converter.c
 * Tests run with: ./opt quotes.txt 2000
 */

#include "converter.h"
#include <stdlib.h>

void convert_all(unsigned nlines, char *lines[], quote_t nums[])
{
    for (unsigned i = 0; i < nlines; i++) {
        char* line = lines[i];
        quote_t val = 0;
        do {
            val *= 10;
            val += (*line - '0');
            line++;
        } while ( *line != '\0' );
        nums[i] = val;
    }
}