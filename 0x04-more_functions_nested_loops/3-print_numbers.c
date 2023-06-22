#include "main.h"

/**
 * print_numbers - a function that prints number from 0 to 9
*/

void print_numbers(void)
{
	int ch = 0;

	do {
		_putchar(ch + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_puthcar('\n');
}
