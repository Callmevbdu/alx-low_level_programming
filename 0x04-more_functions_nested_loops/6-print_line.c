#include "main.h"

/**
 * print_line - a function that print a line using the "_" character
 * @n: input integer which define the length of the line
*/

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
			_putchar(95);
		_putchar('\n');
	}
}
