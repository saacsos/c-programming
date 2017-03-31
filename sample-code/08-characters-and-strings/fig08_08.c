/*
 * Using function stdtoul
 * To compile:
 * $ gcc fig08_08.c -o fig08_08
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *string = "123456789abc"; // initialize string pointer
    char *remainderPtr; // create char pointer

    unsigned long x = strtoul(string, &remainderPtr, 0);

    printf("%s\"%s\"\n", "The original string is ", string);
    printf("%s%lu\n", "The converted value is ", x);
    printf("%s\"%s\"\n", "The remainder of the original string is ", remainderPtr);
    printf("%s%lu\n", "The converted value minus 789 is ", x - 789);
}
