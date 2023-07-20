#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array
 * @array: integer array
 * @size: size of the array
 * @action: pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *finish = array + size - 1;

	if (array && size && action)
		while (array <= finish)
			action(*array++);
}
