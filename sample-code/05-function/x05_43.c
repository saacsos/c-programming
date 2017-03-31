/*
 * What does the following program do?
 * To compile:
 * $ gcc x05_43.c -o x05_43
 */
#include <stdio.h>

unsigned int mystery(unsigned int a, unsigned int b); // function prototype

int main(void)
{
    printf("%s", "Enter two positive integers: ");
    unsigned int x; // first integer
    unsigned int y; // second integer
    scanf("%u%u", &x, &y);

    printf("The result is %u\n", mystery(x, y));
}

// Parameter b must be a positive integer
// to prevent infinite recursive
unsigned int mystery(unsigned int a, unsigned int b)
{
    // base case
    if (1 == b) {
        return a;
    } else { // recursive step
        return a + mystery(a, b - 1);
    }
}
