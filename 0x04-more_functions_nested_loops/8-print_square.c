#include "main.h"

/**
 * print_square - a function which prints a square using # char
 * @size: an integer defining the square size
*/

void print_square(int size)
{
	int length, width;

	if (size <= 0)
		_putchar('\n');
	else if (size == 1)
		_putchar(35);
	else
		for (length = 2; length <= size; length++)
		{
			for (width = 2; width <= size; width++)
				_putchar(35)
		}
		_putchar('\n');
}
