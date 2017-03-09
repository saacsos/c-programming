/*
 * Analyzing a student poll.
 * To compile:
 * $ gcc fig06_07.c -o fig06_07 -std=c11
 */
#include <stdio.h>
#define RESPONSES_SIZE 40 // define array size
#define FREQUENCY_SIZE 11

int main (void) {
	// initialze frequency counters to 0
	int frequency[FREQUENCY_SIZE] = {0};

	// place the survey responses in the responses zrray
	int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 
		1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 
		5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

	// for each answer, select value of an element of array responses
	// and use that value as an index in array frequency to determine
	// element to increment
	for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
		++frequency[responses[answer]];
	}

	// display the results
	printf("%s%17s\n", "Rating", "Frequency");

	// output the frequencies in a tabular format
	for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
		printf("%6d%17d\n", rating, frequency[rating]);
	}
}