#include "main.h"

/**
 * print_square - a function which prints a square using # char
 * @size: an integer defining the square size
*/

void print_square(int size)
{
	int length, width;

	for (length = 1; length <= size; length++)
	{
		for (width = 1; width <= size; width++)
			_putchar(35)
		_putchar('\n');
	}
}
