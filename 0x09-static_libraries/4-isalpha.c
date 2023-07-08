#include "main.h"

/**
 * _isalpha - a prototype that checks if the char
 * "c" is a letter, lowercase or upper.
 * @c: an integer for the letter c
 * Return: 1 if c is alpha, 0 otherwise
*/

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
		return (1);

	if (c >= 65 && c <= 122)
		return (1);

	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
