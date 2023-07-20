#include "function_pointer.h"

/**
 * int_index - a function that searches for an integer
 * @array: integer array
 * @size: array size
 * @cmp: function to compare
 * Return: the integer index (0), -1 otherwise.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
