/*
 * Using function sscanf
 * To compile:
 * $ gcc fig08_13.c -o fig08_13
 */
#include <stdio.h>

int main(void)
{
    char s[] = "54366 87.549"; // initialize array s
    int x; // x value to be input
    double y; // y value to be input

    sscanf(s, "%d%lf", &x, &y);
    printf("%s\n%s%6d\n%s%8.3f\n",
        "The values stored in character array s are:",
        "integer:", x, "double:", y
    );
}
