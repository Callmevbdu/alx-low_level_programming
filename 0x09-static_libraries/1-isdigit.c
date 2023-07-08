#include "main.h"

/**
 * _isdigit - a function that checks if input is a digit.
 * @c: input integer
 * Return: 1 if input is digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
