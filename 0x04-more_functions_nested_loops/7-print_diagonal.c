#include "main.h"

/**
 * print_diagonal - a function that print a diagonal using the "\\" character
 * @n: input integer which define the space after printing
*/

void print_diagonal(int n)
{
	int space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (space = 1; space <= n; space++)
			_putchar(92);
		_putchar('\n');
	}
}
