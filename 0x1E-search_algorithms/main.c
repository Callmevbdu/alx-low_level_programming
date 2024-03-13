#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n", 5, interpolation_search(array, size, 5));
	printf("Found %d at index: %d\n", 11, interpolation_search(array, size, 11));
	printf("Found %d at index: %d\n", 1, interpolation_search(array, size, 1));

	return (0);
}
