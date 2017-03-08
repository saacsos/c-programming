/*
 * Initializing multidimensional arrays.
 * To compile:
 * $ gcc fig06_21.c -o fig06_21 -std=c11
 */
#include <stdio.h>
#define COLUMN 3

// function prototype
void printArray(int a[][COLUMN]);

int main(void)
{
	// initialize 2d array
	int array1[2][COLUMN] = {{1, 2, 3}, {4, 5, 6}};
	puts("Values in array1 by row are:");
	printArray(array1);

	int array2[2][COLUMN] = {1, 2, 3, 4, 5};
	puts("Values in array2 by row are:");
	printArray(array2);

	int array3[2][COLUMN] = {{1, 2}, {4}};
	puts("Values in array3 by row are:");
	printArray(array3);
}

// output array with two rows and three columns
void printArray(int a[][COLUMN])
{
	// loop through rows
	for (size_t i = 0; i < 2; ++i) {

		// output column values
		for (size_t j = 0; j <= 2; ++j) {
			printf("%d ", a[i][j]);
		}

		puts("");
	} 
}