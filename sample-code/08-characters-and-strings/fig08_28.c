/*
 * Using function memcpy
 * To compile:
 * $ gcc fig08_28.c -o fig08_28
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[17]; // create char array s1
    char s2[] = "Copy this string"; // initialize char array s2

    memcpy(s1, s2, 17);
    puts("After s2 is copied into s1 with memcpy");
    printf("s1 contains \"%s\"\n", s1);
}
