/*
 * Initializing the elements of array s to the even integers from 2 to 10
 * To compile:
 * $ gcc fig06_05.c -o fig06_05 -std=c11
 */

#include <stdio.h>
#define SIZE 5		// maximum size of array

int main(void)
{
	// symbolic constant SIZE can be used to specify array size
	int s[SIZE];

	// set the value
	for (size_t j = 0; j < SIZE; ++j)
		s[j] = 2 * (j + 1);

	printf("%s%13s\n", "Element", "Value");

	// output contents of array s in tabular format
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%7u%13d\n", i, s[i]);
	}
}