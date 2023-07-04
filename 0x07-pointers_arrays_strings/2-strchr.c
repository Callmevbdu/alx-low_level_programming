#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: input string pointer
 * @c: character to be found
 * Return: 's' pointer
*/

char *_strchr(char *s, char c)
{
	int str;

	for (str = 0; s[str] >= '\0'; str++)
	{
		if (s[str] == c)
		{
			return (s + str);
		}
	}
	return ('\0');
}
