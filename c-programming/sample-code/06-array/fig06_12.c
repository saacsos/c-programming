/*
 * Array name is the same as the address of the array's first element.
 * To compile:
 * $ gcc fig06_12.c -o fig06_12 -std=c11
 */
#include <stdio.h>

int main(void) 
{
	char array[3]; // define an array of size 3

	printf("%9s = %p\n%9s = %p\n%9s = %p\n",
		"array", array,
		"&array[0]", &array[0],
		"&array", &array);
}