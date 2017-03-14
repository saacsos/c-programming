/*
 * Using functions fgets and putchar
 * To compile:
 * $ gcc fig08_10.c -o fig08_10
 */
#include <stdio.h>
#define SIZE 80

void reverse(const char * const sPtr); // prototype

int main(void)
{
    char sentence[SIZE]; // create char array
    puts("Enter a line of text:");

    // use fgets to read line of text
    fgets(sentence, SIZE, stdin);

    printf("\n%s", "The line printed backward is:");
    reverse(sentence);
}

// recursively outputs characters in string in reverse order
void reverse(const char * const sPtr)
{
    // if end of the string
    if ('\0' == sPtr[0]) { // base case
        return;
    }
    // if not end of the string
    reverse(&sPtr[1]); // recursive step
    putchar(sPtr[0]); // use putchar to display character
}
