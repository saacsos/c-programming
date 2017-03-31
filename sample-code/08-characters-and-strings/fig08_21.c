/*
 * Using function strcspn
 * To compile:
 * $ gcc fig08_21.c -o fig08_21
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    // initialize two char pointers
    const char *string1 = "The value is 3.14159";
    const char *string2 = "1234567890";

    printf("string1: %s\nstring2: %s\n", string1, string2);
    puts("The length of the initial segment of string1");
    printf("containing no characters from string2 is %d\n",
            strcspn(string1, string2)
    );
}
