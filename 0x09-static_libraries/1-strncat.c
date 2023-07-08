#include "main.h"

/**
 * _strncat - a function that concatenates two string
 * @dest: input string 1
 * @src: input string 2
 * @n: number of bytes from @src
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int ch, i;

	ch = 0;

	while (dest[ch])
		ch++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[ch + i] = src[i];

	return (dest);
}
