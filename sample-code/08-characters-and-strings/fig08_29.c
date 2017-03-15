/*
 * Using function memmove
 * To compile:
 * $ gcc fig08_29.c -o fig08_29
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Home Sweet Home"; // initialize char array s

    printf("string s before memmove is: %s\n", s);
    printf("string s after memmove is: %s\n", (char *) memmove(s, &s[5], 10));
}
