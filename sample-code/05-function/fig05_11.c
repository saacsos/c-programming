/*
 * Shifted, scaled random integers produced by 1 + rand() % 6.
 * Using function rand() in header stdlib.h
 * To compile:
 * $ gcc fig05_11.c -o fig05_11 -std=c11
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // loop 20 times
    for (unsigned int i = 1; i <= 20; ++i) {
        // pick random number from 1 to 6 and output it
        printf("%10d", 1 + (rand() % 6));

        // if counter is divisible by 5, begin new line of output
        if (i % 5 == 0) {
            puts("");
        }
    }
}
