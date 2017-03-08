/*
 * Printing an upper-case string one character at a time
 * using a non-constant pointer to constant data
 * To compile:
 * $ gcc fig07_11.c -o fig07_11
 */
#include <stdio.h>
#include <ctype.h>

// function prototype
void printCharacters(const char *sPtr);

int main(void)
{
	// initialize char array
	char string[] = "Printing an upper-case string one character at a time.";

	puts("The result is:");
	printCharacters(string);
	puts("");
}

// sPtr cannot be used to modify the character to which it points,
// sPtr is a "read-only" pointer
void printCharacters(const char *sPtr)
{
	// loop through entire string
	for (; *sPtr != '\0'; ++sPtr) { // no initialization
		printf("%c", toupper(*sPtr));
	}
}