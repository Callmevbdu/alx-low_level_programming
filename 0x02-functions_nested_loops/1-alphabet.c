#include "main.h"

/**
 * print_alphabet - a prototype that uses "_putchar" function
 * Description: A C program that prints the alphabet in lower case
 * using a prototype.
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	char ch = 97;

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
