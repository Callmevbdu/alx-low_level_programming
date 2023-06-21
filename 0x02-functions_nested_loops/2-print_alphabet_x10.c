#include "main.h"

/**
 * print_alphabet_x10 - a prototype that uses _putchar function
 * Description: A C program that writes the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= a; b++)
		{
			char ch = 97;

			while (ch <= 122)
			{
				_putchar(ch);
				ch++;

			}
		_putchar('\n');

		}
	}

}
