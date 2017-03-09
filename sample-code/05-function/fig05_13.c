/*
 * Randomizing the die-rolling program.
 * Using function rand() and srand() in header stdlib.h
 * To compile:
 * $ gcc fig05_13.c -o fig05_13 -std=c11
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int seed; // number used to seed the random number generator

    printf("%s", "Enter seed: ");
    scanf("%u", &seed); // note %u for unsigned int

    srand(seed); // seed the random number generator

    // loop 10 times
    for (unsigned int i = 1; i <= 10; ++i) {
        // pick a random number from 1 to 6 and output it
        printf("%3d", 1 + rand() % 6);
    }
    puts("");
}
