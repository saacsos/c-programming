/*
 * Using function memchr
 * To compile:
 * $ gcc fig08_31.c -o fig08_31
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *s = "This is a string"; // initialize char pointer

    printf("The remainder of s after character 'r' ");
    printf("is found is \"%s\"\n", (char *) memchr(s, 'r', 16));
}
