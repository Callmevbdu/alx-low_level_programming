#include "main.h"

/**
 * print_numbers - a function that prints number from 0 to 9
*/

void print_numbers(void)
{
	int ch = 0;

	do {
		_putchar(ch + 48);
		ch++;
	} while (ch >= 0 && ch <= 9);
	_putchar('\n');
}
