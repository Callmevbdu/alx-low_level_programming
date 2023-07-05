#include "main.h"

/**
 * _strlen_recursion - a function that return the length of a string
 * @s: a string input pointer
 * Return: Length int
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s > '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}

	return (length);
}
