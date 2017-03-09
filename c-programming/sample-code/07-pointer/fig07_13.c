/*
 * Attempting to modify a constant pointer
 * to non-constant data.
 * To compile:
 * $ gcc fig07_13.c -o fig07_13
 */
#include <stdio.h>

int main(void)
{
	int x; // define x
	int y; // define y

	// ptr is a constant pointer to an integer that can be modified
	// through ptr, but ptr always point to the same memory location
	int * const ptr = &x;

	*ptr = 30; // allowed: *ptr is not const
	printf("*ptr = %d\n", *ptr);
	printf("x = %d\n", x);

	ptr = &y; // error: assignment of read-only variable 'ptr'
}