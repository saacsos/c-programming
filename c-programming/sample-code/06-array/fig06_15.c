/*
 * Sorting an array's values into ascending order.
 * To compile:
 * $ gcc fig06_15.c -o fig06_15 -std=c11
 */
#include <stdio.h>
#define SIZE 10

int main(void)
{
	// initialize a
	int a[SIZE] = {32, 6, 0, 58, 11, 12, 88, 70, 46, 67};

	puts("Data items in original order:");

	// output original array
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}

	// bubble sort
	// loop to control number of passes
	for (unsigned int pass = 1; pass < SIZE; ++pass) {
		
		// loop to control number of comparisons per pass
		for (size_t i = 0; i < SIZE - 1; ++i) {

			// compare adjacent elements and
			// swap them if first element is greater than second element
			if (a[i] > a[i + 1]) {
				int hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}

		}
	}

	puts("\nData items in ascending order");

	// output sorted array
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}

	puts("");
}