#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 * @s: string input
 * Return: Lenght of a string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}

