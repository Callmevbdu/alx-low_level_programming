#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: input unsigned long number
 * @index: index starting from "0" of the bit we want to clear
 * Return: success "1", otherwise "-1".
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
