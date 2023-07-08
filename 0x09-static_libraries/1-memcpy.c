#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination input pointer
 * @src: source input pointer
 * @n: integer input bytes
 * Return: destination pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int str;

	for (str = 0; str < n; str++)
	{
		dest[str] = src[str];
	}
	return (dest);
}
