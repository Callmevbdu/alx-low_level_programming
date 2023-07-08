#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: input string
 * @b: input character
 * @n: input number of bytes
 * Return: the pointer 's'
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int str;

	for (str = 0; n > 0; str++, n--)
	{
		s[str] = b;
	}

	return (s);
}
