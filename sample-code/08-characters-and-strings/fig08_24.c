/*
 * Using function strspn
 * To compile:
 * $ gcc fig08_24.c -o fig08_24
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    // initialize two char pointers
    const char *string1 = "The value is 3.14159";
    const char *string2 = "aehi lsTuv";

    printf("string1: %s\nstring2: %s\n\n", string1, string2);

    printf("The length of the initial segment of string1\n");
    printf("containing only characters from string2 is %d\n", strspn(string1, string2));
}
