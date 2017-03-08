/*
 * Attempting to modify a constant pointer to constant data.
 * To compile:
 * $ gcc fig07_14.c -o fig07_14
 */
#include <stdio.h>

int main(void)
{
	int x = 10; // initialize x
	int y; // declare y

	// ptr is a constant pointer to a constant integer.
	// ptr always points to the same location;
	// the integer at that location cannot be modified.
	const int *const ptr = &x; // initialzation is OK

	printf("%d\n", *ptr); // print: 10
	*ptr = 3; // error: assignment of read-only location '*ptr'
	ptr = &y; // error: assignment of read-only variable 'ptr'
}