#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if not found or if
 * array is NULL
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	for (; low <= high && value >= array[low]; low++)
	{
		pos = low + (size_t)(((double)(high - low) * (value - array[low]))
				/ (array[high] - array[low]));

		if (pos > size - 1)
			pos = size - 1;

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
