#include "main.h"

/**
 * puts2 - a function prints every other character of a string,
 * starting with the first character
 * @str: a string input
 * Return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}