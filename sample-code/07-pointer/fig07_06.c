/*
 * Cube a variable using pass-by-value.
 * To compile:
 * $ gcc fig07_06.c -o fig07_06
 */
#include <stdio.h>

// function prototype
int cubeByValue(int n);

int main(void)
{
	int number = 6; // initialize number
	int result;	// declare result

	printf("The original value of number is %d\n", number);

	// pass number by value to cubeByValue
	result = cubeByValue(number);

	printf("The result of cubeByValue is %d\n", result);

	printf("The value of number after pass to function is %d\n", number);
}

// calculate and return cube of integer argument
int cubeByValue(int n) 
{
	return n * n * n; // cube local variable n and return result
}