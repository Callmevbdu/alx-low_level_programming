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
	char ch = 48;

	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
