#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 8, 13, 17, 19, 20, 21, 22, 24, 50, 100
	};
	size_t size = sizeof(array) / sizeof(array[0]);
	/* Test cases for binary search */
	printf("Found %d at index: %d\n\n", 8, binary_search(array, size, 8));
	printf("Found %d at index: %d\n\n", 100, binary_search(array, size, 100));
	printf("Found %d at index: %d\n\n", 42, binary_search(array, size, 42));

	return (EXIT_SUCCESS);
}

