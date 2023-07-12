#include "main.h"

/**
 * *create_array - a function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: unsigned integer
 * @c: a character input
 * Return: "NULL" if size equals 0
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size)

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
