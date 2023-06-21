#include "main.h"

/**
 * times_table - a prototype that writes the multiplication table of
 * the number 9
*/

void times_table(void)
{
	int n, mul, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mul;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}



}
