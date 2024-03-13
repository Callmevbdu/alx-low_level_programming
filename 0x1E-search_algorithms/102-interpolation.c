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
	size_t l = 0;
	size_t h = size - 1;
	size_t pos;

	if (array  == NULL)
                return (-1);

	while (l <= h && value >= array[l])
	{
		pos = l + (size_t)(((double)(h - l) * (value - array[l]))
				/ (array[h] - array[l]));

		if (pos > size - 1)
		pos = size - 1;

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}
