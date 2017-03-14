/*
 * Using functions strcpy and strncpy
 * To compile:
 * $ gcc fig08_15.c -o fig08_15
 */
#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15

int main(void)
{
    char str[] = "Happy Birthday to You."; // initialize char array x
    char copy1[SIZE1]; // create char array copy1
    char copy2[SIZE2]; // create char array copy2

    // copy contents of x into y
    printf("%s%s\n%s%s\n",
        "The string in array str is: ", str,
        "The string in array copy1 is: ", strcpy(copy1, str)
    );

    // copy first 14 characters of str into copy2. Does not copy null character
    strncpy(copy2, str, SIZE2 - 1);
    copy2[SIZE2 - 1] = '\0'; // terminate string in copy2
    printf("The string in array copy2 is: %s\n", copy2);

}
