/*
 * Using function memcmp
 * To compile:
 * $ gcc fig08_30.c -o fig08_30
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "ABCDEFG";
    char s2[] = "ABCDXYZ";

    printf("memcmp(s1, s2, 4) = %2d\n", memcmp(s1, s2, 4));
    printf("memcmp(s1, s2, 7) = %2d\n", memcmp(s1, s2, 7));
    printf("memcmp(s2, s1, 7) = %2d\n", memcmp(s2, s1, 7));
}
