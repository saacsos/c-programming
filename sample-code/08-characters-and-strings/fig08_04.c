/*
 * Using functions isspace, iscntrl, ispunct, isprint and isgraph
 * To compile:
 * $ gcc fig08_04.c -o fig08_04
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n\n",
            "According to isspace: ",
            "Space ( )", isspace(' ') ? " is a " : " is not a ", "whitespace character",
            "Newline (\\n)", isspace('\n') ? " is a " : " is not a ", "whitespace character",
            "Horizontal tab (\\t)", isspace('\t') ? " is a " : " is not a ", "whitespace character",
            "Alert (\\a)", isspace('\a') ? " is a " : " is not a ", "whitespace character",
            "%", isspace('%') ? " is a " : " is not a ", "whitespace character"
    );

    printf("%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n\n",
            "According to iscntrl: ",
            "Space ( )", iscntrl(' ') ? " is a " : " is not a ", "control character",
            "Newline (\\n)", iscntrl('\n') ? " is a " : " is not a ", "control character",
            "Horizontal tab (\\t)", iscntrl('\t') ? " is a " : " is not a ", "control character",
            "Alert (\\a)", iscntrl('\a') ? " is a " : " is not a ", "control character",
            "%", iscntrl('%') ? " is a " : " is not a ", "control character"
    );

    printf("%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n\n",
            "According to ispunct: ",
            "Space ( )", ispunct(' ') ? " is a " : " is not a ", "punctuation character",
            "Newline (\\n)", ispunct('\n') ? " is a " : " is not a ", "punctuation character",
            "Horizontal tab (\\t)", ispunct('\t') ? " is a " : " is not a ", "punctuation character",
            "Alert (\\a)", ispunct('\a') ? " is a " : " is not a ", "punctuation character",
            "%", ispunct('%') ? " is a " : " is not a ", "punctuation character",
            ":", ispunct(':') ? " is a " : " is not a ", "punctuation character",
            "B", ispunct('B') ? " is a " : " is not a ", "punctuation character"
    );

    printf("%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n\n",
            "According to isprint: ",
            "Space ( )", isprint(' ') ? " is a " : " is not a ", "printing character",
            "Newline (\\n)", isprint('\n') ? " is a " : " is not a ", "printing character",
            "Horizontal tab (\\t)", isprint('\t') ? " is a " : " is not a ", "printing character",
            "Alert (\\a)", isprint('\a') ? " is a " : " is not a ", "printing character",
            "%", isprint('%') ? " is a " : " is not a ", "printing character"
    );

    printf("%s\n%s%s%s\n%s%s%s\n\n",
            "According to isgraph: ",
            "W", isgraph('W') ? " is a " : " is not a ", "printing character other than a space",
            "Space ( )", isgraph(' ') ? " is a " : " is not a ", "printing character other than a space"
    );

}
