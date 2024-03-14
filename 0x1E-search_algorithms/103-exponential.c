#include "search_algos.h"

/**
 * _binary_search - a function that searches for a value in a sorted integer
 * array. Uses binary search algorithm for efficient search.
 * @array: pointer to the first element of the sorted integer array
 * @low: var
 * @high: var
 * @value: the value to search for
 * Return:  index of found value, -1 if not found or array is NULL.
*/

int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (pos = low; pos < high; pos++)
			printf("%d, ", array[pos]);

		printf("%d\n", array[pos]);

		pos = low + (high - low) / 2;

		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}

/**
 * exponential_search - a function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if not found or if
 * array is NULL
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t pos = 0, high;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (pos = 1; pos < size && array[pos] <= value; pos = pos * 2)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	}

	high = pos < size ? pos : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", pos / 2, high);

	return (_binary_search(array, pos / 2, high, value));
}
