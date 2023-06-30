#include "main.h"

/**
 * _strcat - a function that concatenates two string
 * @dest: input string 1
 * @src: input string 2
 * Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int ch, ch2;

	ch = 0;

	while (dest[ch])
		ch++;

	for (ch2 = 0; src[ch2]; ch2++)
		dest[ch++] = src[ch2];

	return (dest);
}
