#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if not found or if
 * array is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jumpStep;
	size_t left = 0;
	size_t right = 0;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	jumpStep = (size_t)sqrt(size);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += jumpStep;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	for (i = left; i < right && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
