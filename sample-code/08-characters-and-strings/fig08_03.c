/*
 * Using functions islower, isupper, tolower and toupper
 * To compile:
 * $ gcc fig08_03.c -o fig08_03
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
        "According to islower:",
        islower('t') ? "t is a " : "t is not a ", "lowercase letter",
        islower('T') ? "T is a " : "T is not a ", "lowercase letter",
        islower('3') ? "3 is a " : "3 is not a ", "lowercase letter",
        islower('?') ? "? is a " : "? is not a ", "lowercase letter"
    );

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
        "According to isupper:",
        isupper('Q') ? "Q is an " : "Q is not an ", "uppercase letter",
        isupper('q') ? "q is an " : "q is not an ", "uppercase letter",
        isupper('0') ? "0 is an " : "0 is not an ", "uppercase letter",
        isupper('!') ? "! is an " : "! is not an ", "uppercase letter"
    );

    printf("%s\n%s%c\n%s%c\n%s%c\n%s%c\n\n",
        "According to tolower",
        "Y converted to lowercase is ", tolower('Y'),
        "y converted to lowercase is ", tolower('y'),
        "6 converted to lowercase is ", tolower('6'),
        "+ converted to lowercase is ", tolower('+')
    );

    printf("%s\n%s%c\n%s%c\n%s%c\n%s%c\n\n",
        "According to toupper",
        "z converted to uppercase is ", toupper('z'),
        "Z converted to uppercase is ", toupper('Z'),
        "1 converted to uppercase is ", toupper('1'),
        "^ converted to uppercase is ", toupper('^')
    );
}
