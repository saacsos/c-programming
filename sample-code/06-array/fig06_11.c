/*
 * Static arrays are initialized to zero if not explicitly initialized.
 * To compile:
 * $ gcc fig06_11.c -o fig06_11 -std=c11
 */
#include <stdio.h>

void staticArrayInit(void);	// function prototype
void automaticArrayInit(void); // function prototype

int main(void) 
{
	puts("First call to each function:");
	staticArrayInit();
	automaticArrayInit();

	puts("\n--------------------\nSecond call to each function:");
	staticArrayInit();
	automaticArrayInit();

	puts("\n--------------------\nThird call to each function:");
	staticArrayInit();
	automaticArrayInit();
}

// function to demonstrate a static local array
void staticArrayInit(void)
{
	// initializes elements to 0 before the function is called
	static int array1[3];

	puts("\nValues on entering staticArrayInit:");

	// output contents of array1
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%u] = %d\t", i, array1[i]);
	}

	puts("\nValues on exiting staticArrayInit:");

	// modify and output contents of array1
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%u] = %d\t", i, array1[i] += 5);
	}
}

// function to demonstrate an automatic local array
void automaticArrayInit(void)
{
	// initializes elements each time function is called
	int array2[3] = {2, 4, 7};

	puts("\nValues on entering automaticArrayInit:");

	// output contents of array2
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%u] = %d\t", i, array2[i]);
	}

	puts("\nValues on exiting automaticArrayInit:");

	// modify and output contents of array2
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%u] = %d\t", i, array2[i] += 5);
	}
}