/*
 * Creating and using a programmer-defined function
 * To compile:
 * $ gcc fig05_03.c -o fig05_03 -std=c11
 */
#include <stdio.h>

int square(int side); // function prototype

int main(void)
{
    // loop 10 times and calculate and output square of x each time
    for (int x = 1; x <= 10; ++x) {
        printf("%d ", square(x)); // call function square
    }
    puts("");
}

// square function definition
// returns the square of its parameter
int square(int side) // side is a copy of the argument to the function
{
    return side * side; // returns the square of side as an int
}
