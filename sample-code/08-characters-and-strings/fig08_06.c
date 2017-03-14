/*
 * Using function stdtod
 * To compile:
 * $ gcc fig08_06.c -o fig08_06
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *string = "51.2% are admitted"; // initialize string
    char *stringPtr; // create char pointer

    double d = strtod(string, &stringPtr);

    printf("The string \"%s\" is converted to the \n", string);
    printf("double value %.2f and the string \"%s\"\n", d, stringPtr);

    puts("");
    // unable to convert any portion of its first argument to double
    const char *string2 = "There are 100 students in this class"; // initialize string
    char *string2Ptr; // create char pointer

    double d2 = strtod(string2, &string2Ptr);
    // first of string is not able to convert to double,
    // function strtod returns 0

    printf("The string \"%s\" is converted to the \n", string2);
    printf("double value %.2f and the string \"%s\"\n", d2, string2Ptr);
}
