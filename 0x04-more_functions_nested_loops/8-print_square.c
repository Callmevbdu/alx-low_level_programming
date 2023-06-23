#include "main.h"

/**
 * print_square - a function which prints a square using # char
 * @size: an integer defining the square size
*/

void print_square(int size)
{
	int length, width;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
