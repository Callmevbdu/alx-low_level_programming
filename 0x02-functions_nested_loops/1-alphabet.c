#include "main.h"

/**
 * main - entry point
 * Description: A C program that prints the alphabet in lower case
 * using a prototype.
 * Return: 0 (success)
*/

int print_alphabet(void)
{
	char ch = 97;

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
