/*
 * Displaying a histogram.
 * To compile:
 * $ gcc fig06_08.c -o fig06_08 -std=c11
 */
#include <stdio.h>
#define SIZE 5

int main(void)
{
	// use initializer list to initialize array n
	int n[SIZE] = {19, 3, 15, 7, 11};

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	// for each element of array n, output a bar of the histogram
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%7u%13d        ", i, n[i]);

		// print one bar
		for (int j = 1; j <= n[i]; ++j) 
			printf("%c", '*');

		puts(""); // end a histogram bar with a new line
	}
}