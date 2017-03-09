/*
 * What does the following program do?
 * What happens if you exchange lines 8 and 9?
 * To compile:
 * $ gcc x05_42.c -o x05_42
 */
#include <stdio.h>

int main(void)
{
    int c; // variable to hold character input by user

    if ((c = getchar()) != EOF) {
        main();
        printf("%c", c);
    }
}
