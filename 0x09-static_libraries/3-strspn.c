#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input string pointer
 * @accept: input bytes
 * Return: unsigned integer "str"
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str, btr;

	for (str = 0; s[str] != '\0'; str++)
	{
		for (btr = 0; accept[btr] != s[str]; btr++)
		{
			if (accept[btr] == '\0')
				return (str);
		}
	}
	return (str);
}
