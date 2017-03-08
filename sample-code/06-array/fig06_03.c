/*
 * Initializing the elements of an array to zeros.
 * To compile:
 * $ gcc fig06_03.c -o fig06_03 -std=c11
 */

#include <stdio.h>

int main(void) 
{
	int n[5]; // n is an array of five integers

	// set elements of array n to 0
	for (size_t i = 0; i < 5; ++i) {
		n[i] = 0;
	}

	printf("%s%13s\n", "Element", "Value");

	// output contents of array n in tabular format
	for (size_t i = 0; i < 5; ++i) {
		printf("%7u%13d\n", i, n[i]);
	}
}

/*
 Notice that the counter-control variable i is declared to be of type `size_t` in each `for` statement (Line 14 and 21),
 which according to the C standard represent an unsigned integral type.
 This type is recommended for any variable that represents an array's size or indices [1]. 

 Type `size_t` is defined in header <stddef.h>, which is often included by other headers (such as <stdio.h>).
 [Note: If you attempt to compile and receive errors, simply include <stddef.h> in your program.]

 [1] On some compilers, `size_t` represents `unsigned int` and on others it represents `unsigned long`.
 Compilers that use `unsigned long` typically generate a warning on line 22 
 because `%u` is for displaying `unsigned int`, not `unsigned long`.
 To eliminate this warning, replace the format specification `%u` with `%lu`
 */