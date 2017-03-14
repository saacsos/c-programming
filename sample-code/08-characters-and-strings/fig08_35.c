/*
 * Using function strlen
 * To compile:
 * $ gcc fig08_35.c -o fig08_35
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    // initialize 3 char pointers
    const char *string1 = "abcdefghijklmnopqrstuvwxyz";
    const char *string2 = "It's nine";
    const char *string3 = "\t\t\t";

    printf("The length of \"%s\" is %u\n", string1, strlen(string1));
    printf("The length of \"%s\" is %u\n", string2, strlen(string2));
    printf("The length of \"%s\" is %u\n", string3, strlen(string3));
}
