/*
 * What does this program do?
 * To compile:
 * $ gcc x06_18.c -o x06_18 -std=c11
 */
#include <stdio.h>
#define MAX 10

// function prototype
void whatIsThis(const int b[], size_t startSubscript, size_t size);

int main(void)
{
	int p[MAX] = {5, 7, 2, 1, 0, 4, 3, 0, 6, 8};

	puts("Answer is: ");
	whatIsThis(p, 0, MAX);
	puts("");
}

// What does this function do?
void whatIsThis(const int b[], size_t startSubscript, size_t size)
{
	if (startSubscript < size) {
		whatIsThis(b, startSubscript + 1, size);
		printf("%d  ", b[startSubscript] * 5);
	}
}