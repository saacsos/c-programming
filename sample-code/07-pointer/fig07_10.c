/*
 * Converting a string to uppercase
 * using non-constant pointer to non-constant data
 * To compile:
 * $ gcc fig07_10.c -o fig07_10
 */
#include <stdio.h>
#include <ctype.h>

// function prototype
void convertToUppercase(char *sPtr);

int main(void)
{
	// initialize char array
	char string[] = "prOducT PRice: $65.13";

	printf("The string before conversion: %s\n", string);

	convertToUppercase(string);

	printf("The string  after conversion: %s\n", string);
}

// convert string to uppercase letters
void convertToUppercase(char *sPtr)
{
	while (*sPtr != '\0') { // current character is not '\0'
		*sPtr = toupper(*sPtr); // convert to uppercase
		++sPtr; // make sPtr point to the next character
	}
}