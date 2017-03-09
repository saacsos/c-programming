/*
 * What does this program do?
 * To compile:
 * $ gcc x07_20.c -o x07_20
 */
#include <stdio.h>
#define SIZE 80

size_t mystery(const char *s); // prototype

int main(void)
{
    char string[SIZE]; // create char array

    puts("Enter a string: ");
    scanf("%79s", string);
    printf("%d\n", mystery(string));
}

// What does this function do?
size_t mystery(const char *s)
{
    size_t x;

    // loop through string
    for (x = 0; *s != '\0'; ++s) {
        ++x;
    }
    return x;
}
