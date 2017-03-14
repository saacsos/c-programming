/*
 * Using function stdtol
 * To compile:
 * $ gcc fig08_07.c -o fig08_07
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *string = "-1234567abc"; // initialize string pointer
    char *remainderPtr; // create char pointer

    long x = strtol(string, &remainderPtr, 0);

    printf("%s\"%s\"\n", "The original string is ", string);
    printf("%s%ld\n", "The converted value is ", x);
    printf("%s\"%s\"\n", "The remainder of the original string is ", remainderPtr);
    printf("%s%ld\n", "The converted value plus 567 is ", x + 567);
}
