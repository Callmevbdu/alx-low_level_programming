#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program prints alphabet using putchar excluding 'q' and 'e'
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = '97';

	while (ch <= '122')
	{
		if (ch == '101' || ch == '113')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar ('\n');

	return (0);
}
