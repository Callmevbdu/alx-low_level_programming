#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: input unsigned long number
 * @index: index starting from "0" of the bit we want to set
 * Return: success "1", otherwise "-1".
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
