/*
 * Using functions strcmp and strncmp
 * To compile:
 * $ gcc fig08_18.c -o fig08_18
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *s1 = "Five Nights at Freddy's"; // initialize char pointer
    const char *s2 = "Five Nights at Freddy's"; // initialize char pointer
    const char *s3 = "Five Nights at Nancy's"; // initialize char pointer

    printf("s1: %s\ns2: %s\ns3: %s\n\n", s1, s2, s3);

    printf("%s%2d\n", "strcmp(s1, s2) = ", strcmp(s1, s2));
    printf("%s%2d\n", "strcmp(s1, s3) = ", strcmp(s1, s3));
    printf("%s%2d\n\n", "strcmp(s3, s1) = ", strcmp(s3, s1));

    printf("%s%2d\n", "strncmp(s1, s3, 15) = ", strncmp(s1, s3, 15));
    printf("%s%2d\n", "strncmp(s1, s3, 16) = ", strncmp(s1, s3, 16));
    printf("%s%2d\n", "strncmp(s3, s1, 16) = ", strncmp(s3, s1, 16));
}
