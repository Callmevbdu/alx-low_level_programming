#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program that prints number from 0 to 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		putchar(ch + '0');
		ch++;
	}
	putchar('\n');

	return (0);
}
