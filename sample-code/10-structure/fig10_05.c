/*
 * Displaying the value of a union in both member data types
 * To compile:
 * $ gcc fig10_05.c -o fig10_05
 */
#include <stdio.h>

// number union definition
union number {
    int x;
    double y;
};

int main(void)
{
    union number value; // define union variable

    value.x = 100; // put an integer into variable
    puts("Put 100 in the integer member");
    puts("and print both members.");
    printf("%s\n  %d\n\n", "int:", value.x);
    printf("%s\n  %lf\n\n\n", "double:", value.y);

    value.y = 100.0; // put a double into the same union
    puts("Put 100.0 in the floating member");
    puts("and print both members.");
    printf("%s\n  %d\n\n", "int:", value.x);
    printf("%s\n  %lf\n\n\n", "double:", value.y);
}
