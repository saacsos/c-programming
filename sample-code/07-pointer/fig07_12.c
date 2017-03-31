/*
 * Attempting to modify data 
 * through a non-constant pointer to constant data
 * To compile:
 * $ gcc fig07_12.c -o fig07_12
 */
#include <stdio.h>

// function prototype
void attemptToModify(const int *nPtr);

int main(void)
{
	// initialize int array
	int numbers[] = {3, 5, 7, 9};

	attemptToModify(&numbers[2]);
}

// nPtr cannot be used to modify the value
// of the variable to which it points.
void attemptToModify(const int *nPtr)
{
	*nPtr *= 30; // error: assignment of read-only location '*nPtr'
}
