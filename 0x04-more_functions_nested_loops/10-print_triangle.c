#include "main.h"

/**
 * print_triangle - a function that prints a triangle using # sign
 * @size: an input integer which sets the size of the triangle
*/

void print_triangle(int size)
{
	int position, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (position = 1; position <= size; position++)
		{
			for (space = position; space < position; space++)
			{
				_putchar(' ');
			}
			for (space = 1; space <= position; space++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
