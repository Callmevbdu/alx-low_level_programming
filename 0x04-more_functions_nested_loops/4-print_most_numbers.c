#include "main.h"

/**
 * print_most_numbers - a function that prints number from 0 to 9
 * except 2 and 4
*/

void print_most_numbers(void)
{
	int ch = 0;

	do {
		if (ch == 2 || ch == 4)
			ch++;
		_putchar(ch + 48);
		ch++;
	} while (ch >= 0 && ch <= 9);
	_putchar('\n');
}
