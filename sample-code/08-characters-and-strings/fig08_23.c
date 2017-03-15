/*
 * Using function strrchr
 * To compile:
 * $ gcc fig08_23.c -o fig08_23
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    // initialize char pointer
    const char *string = "A zoo has many animals including zebras";

    int c = 'z'; // character to search for

    printf("The remainder of string begining with\n");
    printf("the last occurence of character '%c' is: \"%s\"\n", c, strrchr(string, c));
}
