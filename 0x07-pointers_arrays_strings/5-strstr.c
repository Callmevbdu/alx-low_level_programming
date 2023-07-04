#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the source string
 * @needle: the substring to be found
 * Return: pointer to the beginning of the located substring(success),
 * "NULL" (failure)
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
