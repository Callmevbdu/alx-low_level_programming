#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 * from 0 to 14
*/

void more_numbers(void)
{
	int line, count, ch;

	for (line = 1; line <= 10; line++)
	{
		for (count = 0; count <= 14; count++)
		{
			ch = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				ch = count % 10;
			}
			_putchar(ch + 48);
		}
		_putchar('\n');
	}
}...
