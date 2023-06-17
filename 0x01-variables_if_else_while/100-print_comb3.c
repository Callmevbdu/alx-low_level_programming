#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program that prints all possible combinations of two digits
 * excludig the combination of the same digit ex "00", "11" ...
 *
 * Return: 0 (success)
*/

int main(void)
{
	int dig1 = 0, dig2;

	while (dig1 <= 9)
	{
		dig2 = 0;
		while (dig2 <= 9)
		{
			if (dig1 != dig2 && dig1 < dig2)
			{
				putchar(dig1 + 48);
				putchar(dig2 + 48);

				if (dig1 + dig2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');

	return (0);
}
