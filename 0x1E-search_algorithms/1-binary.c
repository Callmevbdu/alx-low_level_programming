#include <stdio.h>

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
	int low = 0;
	int high = size - 1;
	int i;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;  /* Avoid overflow */

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);  /* Error */
}
