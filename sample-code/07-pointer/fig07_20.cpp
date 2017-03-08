/*
 * Using indexing and pointer notations with arrays.
 * To compile:
 * $ gcc fig07_20.cpp -o fig07_20
 */
#include <stdio.h>
#define ARRAY_SIZE 4

int main(void)
{
	int b[] = {10, 20, 30, 40}; // create and initialize array b
	int *bPtr = b; // create bPtr and point it to array b

	// output array b using array index notation
	puts("Array b printed with:\n\nArray index notation");
	// loop through array b
	for (size_t i = 0; i < ARRAY_SIZE; ++i) {
		printf("b[%u] = %d\n", i, b[i]);
	}

	// output array b using array name and pointer/offset notation
	puts("\nPointer/offset notation where the pointer is the array name");
	// loop through array b
	for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
		printf("*(b + %u) = %d\n", offset, *(b + offset));
	}

	// output array b using bPtr and array index notation
	puts("\nPointer index notation");
	// loop through array b
	for (size_t i = 0; i < ARRAY_SIZE; ++i) {
		printf("bPtr[%u] = %d\n", i, bPtr[i]);
	}

	// output array b using bPtr and pointer/offset notation
	puts("\nPointer/offset notation");
	// loop through array b
	for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
		printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
	}
}