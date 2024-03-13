#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted integer
 * array. Uses binary search algorithm for efficient search.
 * @array: pointer to the first element of the sorted integer array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return:  index of found value, -1 if not found or array is NULL.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d ", array[i]);
		}
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] > value)
		{
			high = i - 1;
		}
		else
		{
			low = i + 1;
		}
	}

	return (-1);  /* Error */
}
