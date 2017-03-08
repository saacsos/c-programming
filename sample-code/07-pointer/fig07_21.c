/*
 * Copying a string using array notation and pointer notation.
 * To compile:
 * $ gcc fig07_21.c -o fig07_21 -std=c11
 */
#include <stdio.h>
#define SIZE 10

// function prototype
void copy1(char * const s1, const char * const s2);
void copy2(char * s1, const char *s2);

int main (void)
{
	char string1[SIZE]; // create array string1
	char *string2 = "Hello"; // create a pointer to a string

	copy1(string1, string2);
	printf("string1: %s\n", string1);

	char string3[SIZE]; // create array string3
	char string4[] = "Good Bye"; // create char array containing a string

	copy2(string3, string4);
	printf("string3: %s\n", string3);
}

// copy s2 to s1 using array notation
void copy1(char * const s1, const char * const s2)
{
	for (size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i) {
		; // do nothing in body
	}
}

// copy s2 to s1 using pointer notation
void copy2(char *s1, const char *s2)
{
	for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
		; // do nothing in body
	}
}