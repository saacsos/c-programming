/*
 * Using the & and * pointer operators.
 * To compile:
 * $ gcc fig07_04.c -o fig07_04
 */
#include <stdio.h>

int main(void)
{
	int num = 278;
	int *numPtr = &num; // set numPtr to the address of num

	printf("The address of num is %p\n", &num);
	printf("The value of numPtr is %p\n", numPtr);
	puts("");
	printf("The value of num is %d\n", num);
	printf("The value of *numPtr is %d\n", *numPtr);
	puts("");
	puts("Showing that * and & are complements of each other");
	printf("*&numPtr = %p\n", *&numPtr);
	printf("&*numPtr = %p\n", &*numPtr);
}