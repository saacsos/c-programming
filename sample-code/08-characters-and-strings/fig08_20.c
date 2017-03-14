/*
 * Using function strchr
 * To compile:
 * $ gcc fig08_20.c -o fig08_20
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *string = "Horizon Zero Dawn"; // initialize char pointer
    char ch1 = 'D'; // initialize ch1
    char ch2 = 'd'; // initialize ch2

    // if ch1 was found in string
    if (strchr(string, ch1) != NULL) { // can remove "!= NULL"
        printf("'%c' was found in \"%s\".\n", ch1, string);
    } else { // if ch1 was not found
        printf("'%c' was not found in \"%s\".\n", ch1, string);
    }

    printf("'%c' %s in \"%s\".\n",
        ch2,
        strchr(string, ch2) ? "was found" : "was not found",
        string
    );
}
