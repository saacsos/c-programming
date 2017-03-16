/*
 * What does this program do?
 * To compile:
 * $ gcc x06_17.c -o x06_17 -std=c11
 */
#include <stdio.h>
#define SIZE 6

// function prototype
int whatIsThis(const int b[], size_t p);

int main(void)
{
	int x; // holds return value of function whatIsThis
	int a[SIZE] = {1, 2, 3, 4, 5, 6}; // initialize array a
	x = whatIsThis(a, SIZE);
	printf("Result is %d\n", x);
}

// What does this function do?
int whatIsThis(const int b[], size_t p)
{
	// base case
	if (1 == p) {
		return b[0];
	} else {
		// recursion step
		return b[p - 1] * whatIsThis(b, p - 1);
	}
}