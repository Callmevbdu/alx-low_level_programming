#include "main.h"

/**
 * print_diagonal - a function that print a diagonal using the \ character
 * @n: input integer which define the space after printing
*/

void print_diagonal(int n)
{
	int position, space;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (position = 0; position < n; position++)
		{
			for (space = 0; space < n; space++)
			{
				if (position == space)
					_putchar('\\');
				else if (space < position)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
