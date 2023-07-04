#include "main.h"

/**
 * print_chessboard - a function that prints chessboard
 * @a: rows input
 * Return: 0
*/

void print_chessboard(char (*a)[8])
{
	int str, btr;

	for (str = 0; str < 8; str++)
	{
		for (btr = 0; btr < 8; btr++)
		{
			_putchar(a[str][btr]);
		}
		_putchar('\n');
	}
}
