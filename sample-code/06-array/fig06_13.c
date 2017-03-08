/*
 * Passing arrays and individual array elements to functions
 * To compile:
 * $ gcc fig06_13.c -o fig06_13 -std=c11
 */
#include <stdio.h>
#define SIZE 5

// function prototype
void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main(void) 
{
	int a[SIZE] = {0, 1, 2, 3, 4}; // initialize array a

	puts("Passing entire array by reference:\n\n");

	printf("The values of the original array are: ");

	// output original array
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%3d", a[i]);
	}

	puts("");

	modifyArray(a, SIZE); // pass array a to modifyArray by reference

	puts("The values of the modified array are: ");

	// output modified array
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%3d", a[i]);
	}

	puts("\n\nPassing array element by value: ");

	printf("The values of a[3] is %d\n", a[3]);

	modifyElement(a[3]);

	// output the value of a[3]
	printf("The value of a[3] is %d\n", a[3]);
}

// `b` point to the original array `a` in memory
void modifyArray(int b[], size_t size)
{
	// multiply each array element by 3
	for (size_t j = 0; j < size; ++j) {
		b[j] *= 3;
	}
}

// `e` is a local copy of array element a[3] passed from main
void modifyElement(int e) 
{
	printf("Value in modifyElement is %d\n", e *= 3);
}