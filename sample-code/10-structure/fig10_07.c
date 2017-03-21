/*
 * Displaying an unsigned int in bits
 * To compile:
 * $ gcc fig10_07.c -o fig10_07 -std=c11
 */
#include <stdio.h>

// prototypes
void displayBits(unsigned int value);

int main(void)
{
    unsigned int x; // variable to hold user input

    printf("%s", "Enter a non-negative int: ");
    scanf("%u", &x);

    displayBits(x);
}

// display bits of an unsigned int value
void displayBits(unsigned int value)
{
    // define displayMask and left shift 31 bits
    unsigned int displayMask = 1 << 31; // 10000000 00000000 00000000 00000000

    printf("%10u = ", value);

    // loop through bits
    for (unsigned int c = 1; c <= 32; ++c) {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; // shift value left by 1

        if (c % 8 == 0) { // output space after 8 bits
            putchar(' ');
        }
    }

    putchar('\n');
}
