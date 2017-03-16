/*
 * Initializing the elements of an array with an initailizer list.
 * To compile:
 * $ gcc fig06_04.c -o fig06_04 -std=c11
 */

#include <stdio.h>

int main(void)
{
	// use initializer list to initialize array n
	int n[5] = {32, 27, 64, 18, 95};

	printf("array n\n");
	printf("%s%13s\n", "Element", "Value");

	// output contents of array n in tabular format
	for (size_t i = 0; i < 5; ++i) {
		printf("%7u%13d\n", i, n[i]);
	}

	printf("\n\n");

	// use fewer initializers than elements in the array, 
	// the remaining elements are initialized to zero
	int m[5] = {1}; // equal to {1, 0, 0, 0, 0}

	printf("array m\n");
	printf("%s%13s\n", "Element", "Value");

	// output contents of array m in tabular format
	for (size_t i = 0; i < 5; ++i) {
		printf("%7u%13d\n", i, m[i]);
	}
}