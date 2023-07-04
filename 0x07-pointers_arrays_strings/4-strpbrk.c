#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input string pointer
 * @accept: input bytes
 * Return: pointer to the byte in accept (success), NULL (failure).
*/

char *_strpbrk(char *s, char *accept)
{
	int str = 0, btr = 0;
	char *ptr;

	while (s[str] != '\0')
	{
		while (accept[btr] != '\0')
		{
			if (accept[btr] == s[str])
			{
				ptr = &s[str];
				return (ptr);
			}
			btr++;
		}
		str++;
	}
	return (0);
}
