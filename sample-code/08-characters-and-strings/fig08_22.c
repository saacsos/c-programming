/*
 * Using function strpbrk
 * To compile:
 * $ gcc fig08_22.c -o fig08_22
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    // initialize two char pointers
    const char *string1 = "This is a test";
    const char *string2 = "beware";

    printf("Of the characters in \"%s\"\n", string2);
    printf("'%c' appears earliest in\n", *strpbrk(string1, string2));
    printf("\"%s\"\n", string1);
}
