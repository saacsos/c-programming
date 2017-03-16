/*
 * Multipurpose sorting program using function pointers.
 * To compile:
 * $ gcc fig07_26.c -o fig07_26 -std=c11
 */
#include <stdio.h>
#define SIZE 12

// function prototypes
void bubble(int work[], size_t size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main(void)
{
	// initialize unordered array a
	int a[SIZE] = {77, 11, 29, 84, 35, 107, 16, 1, 94, 45, 61, 50};

	puts("Enter 1 to sort in ascending order,");
	printf("Enter 2 to sort in descending order: ");
	int order; // 1 for accending order or 2 for descending order
	scanf("%d", &order);

	puts("\nData items in original order:");
	// output original array
	for (size_t cnt = 0; cnt < SIZE; ++cnt) {
		printf("%5d", a[cnt]);
	}

	// sort array
	switch (order) {
		case 1:
			bubble(a, SIZE, ascending); // pass function ascending
			puts("\nData items in accending order:");
			break;
		case 2:
			bubble(a, SIZE, descending); // pass function descending
			puts("\nData items in descending order:");
			break;
		default:
			puts("\nInvalid order");
			puts("\nData items in original order:");
	}

	// output sorted array
	for (size_t cnt = 0; cnt < SIZE; ++cnt) {
		printf("%5d", a[cnt]);
	}

	puts("");
}

// multipurpose bubble sort; parameter compare is a pointer to function
void bubble(int work[], size_t size, int (*compare)(int a, int b))
{
	void swap (int *el1Ptr, int *el2Ptr); // prototype

	// loop to control passes
	for (unsigned int pass = 1; pass < size; ++pass) {
		// loop to control number of comparisons per pass
		for (size_t cnt = 0; cnt < size - 1; ++cnt) {
			// if adjacent elements are out of order, swap them
			if ((*compare)(work[cnt], work[cnt + 1])) {
				swap(&work[cnt], &work[cnt + 1]);
			}
		}
	}
}

// swap values at memory location to which el1Ptr and el2Ptr point
void swap(int *el1Ptr, int *el2Ptr)
{
	int hold = *el1Ptr;
	*el1Ptr = *el2Ptr;
	*el2Ptr = hold;
}

// determine whether elements are out of order for an ascending order sort
int ascending(int a, int b)
{
	return b < a; // should swap if b is less than a
}

// determine whether elements are out of order for a descending order sort
int descending(int a, int b)
{
	return b > a; // should swap if b is greater than a
}