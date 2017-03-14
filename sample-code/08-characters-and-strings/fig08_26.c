/*
 * Using function strtok
 * To compile:
 * $ gcc fig08_26.c -o fig08_26
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    // initialize array string
    char string[] = "Crash Bandicoot N. Sane Trilogy";

    printf("The string to be tokenized is:\n:: %s\n\nThe tokens are:\n", string);

    char *tokenPtr = strtok(string, " "); // begin tokenizing sentence

    // continue tokenizing sentence until tokenPtr becomes NULL
    while (tokenPtr != NULL) {
        printf(":: %s\n", tokenPtr);
        tokenPtr = strtok(NULL, " "); // get next token
    }
}
