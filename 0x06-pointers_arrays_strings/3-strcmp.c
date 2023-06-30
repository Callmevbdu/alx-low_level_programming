#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input char 1
 * @s2: input char 2
 * Return: 1 if the chars are the same, 0 otherwise.
*/

char _strcmp(char *s1, char *s2)
{
	int eq = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eq = ((int) *s1 - 48) - ((int) *s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (eq);
}
