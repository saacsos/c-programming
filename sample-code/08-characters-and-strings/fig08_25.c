/*
 * Using function strstr
 * To compile:
 * $ gcc fig08_25.c -o fig08_25
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *string = "Horizon Zero Dawn"; // string to search
    const char *searchFor = "Zero"; // string to search for

    printf("string: %s\nsearch for: %s\n\n", string, searchFor);

    printf("strstr(string, searchFor) = %s\n", strstr(string, searchFor));
}
