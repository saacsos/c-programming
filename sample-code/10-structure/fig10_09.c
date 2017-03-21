/*
 * Using the bitwise AND, bitwise inclusive OR,
 * bitwise exclusive OR and bitwise complement operators
 * To compile:
 * $ gcc fig10_09.c -o fig10_09 -std=c11
 */
#include <stdio.h>

void displayBits(unsigned int value); // prototype

int main(void)
{
    // demonstrate bitwise AND (&)
    unsigned int number1 = 65535;
    unsigned int number2 = 1;
    puts("The result of combining the following");
    displayBits(number1);
    displayBits(number2);
    puts("using the bitwise AND operator & is");
    displayBits(number1 & number2);
    puts("");

    // demonstrate bitwise inclusive OR (|)
    number1 = 18504;
    number2 = 34567;
    puts("The result of combining the following");
    displayBits(number1);
    displayBits(number2);
    puts("using the bitwise inclusive OR operator | is");
    displayBits(number1 | number2);
    puts("");

    // demonstrate bitwise exclusive OR (^)
    number1 = 18504;
    number2 = 34504;
    puts("The result of combining the following");
    displayBits(number1);
    displayBits(number2);
    puts("using the bitwise exclusive OR operator ^ is");
    displayBits(number1 ^ number2);
    puts("");

    // demonstrate bitwise complement (~)
    number1 = 18504;
    puts("The one's complement of");
    displayBits(number1);
    puts("is");
    displayBits(~number1);
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
