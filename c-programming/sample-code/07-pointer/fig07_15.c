/*
 * Applying sizeof to an array name returns
 * To compile:
 * $ gcc fig07_15.c -o fig07_15
 */
#include <stdio.h>
#define SIZE 20

size_t getSize(float *ptr); // function prototype

int main(void)
{
	float array[SIZE]; // declare array

	printf("The number of bytes in the array is %u\n", 
		sizeof(array)
	);
	printf("The number of bytes returned by getSize is %u\n", 
		getSize(array)
	);
}

// return size of ptr
size_t getSize(float *ptr)
{
	return sizeof(ptr);
}