/*
 * Cube a variable using pass-by-reference with a pointer argument.
 * To compile:
 * $ gcc fig07_07.c -o fig07_07
 */
#include <stdio.h>

// function prototype
void cubeByReference(int *nPtr);

int main(void)
{
	int number = 7; // initialize number

	printf("The original value of number is %d\n", number);

	// pass address of number to cubeByReference
	cubeByReference(&number);

	printf("The new value of number is %d\n", number);
}

// calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}