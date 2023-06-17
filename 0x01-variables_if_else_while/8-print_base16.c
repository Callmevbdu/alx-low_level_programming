#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program that prints base 16 numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	char num = 48;
	char ch = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	while (ch <= 102)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
