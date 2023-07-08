#include "main.h"

/**
 * _isupper - a function that checks if input is uppercase
 * @c: input integer
 * Return: 1 if input is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
