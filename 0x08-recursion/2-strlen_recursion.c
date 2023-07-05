#include "main.h"

/**
 * _strlen_recursion - a function that return the length of a string
 * @s: a string input pointer
*/

void _strlen_recursion(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}
