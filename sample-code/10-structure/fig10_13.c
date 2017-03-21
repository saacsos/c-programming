/*
 * Using the bitwise shift operators
 * To compile:
 * $ gcc fig10_13.c -o fig10_13 -std=c11
 */

#include <stdio.h>

void displayBits(unsigned int value); // prototype

int main(void)
{
    unsigned int number = 963; // initialize number

    // demonstrate bitwise left shift
    puts("The result of left shifting");
    displayBits(number);
    puts("1 bit position using the left shift operators << is");
    displayBits(number << 1);
    puts("8 bit positions using the left shift operators << is");
    displayBits(number << 8);
    puts("");

    // demonstrate bitwise right shift
    puts("The result of right shifting");
    displayBits(number);
    puts("1 bit position using the right shift operators >> is");
    displayBits(number >> 1);
    puts("8 bit positions using the right shift operators >> is");
    displayBits(number >> 8);
    puts("");

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
