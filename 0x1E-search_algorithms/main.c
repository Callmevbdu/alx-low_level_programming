#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	/* Test cases for linear search */
	printf("Found %d at index: %d\n\n", 8, linear_search(array, size, 8));
	printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
	printf("Found %d at index: %d\n\n", 0, linear_search(array, size, 0));
	printf("Found %d at index: %d\n\n", -1, linear_search(array, size, -1));
	printf("Found %d at index: %d\n\n", 99, linear_search(array, size, 99));

	return (EXIT_SUCCESS);
}

