/*
 * Computing the sum of the elements of an array
 * To compile:
 * $ gcc fig06_06.c -o fig06_06 -std=c11
 */
#include <stdio.h>
#define SIZE 12

int main(void)
{
	// use an initializer list to initialize the array
	int arr[SIZE] = {1, 3, 5, 4, 7, 9, 12, 88, 99, 25, 67, 71};
	int total = 0; // sum of array

	// sum contents of array arr
	for (size_t i = 0; i < SIZE; ++i) {
		total += arr[i];
	}

	printf("Total of array element values is %d\n", total);
}