#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints alphabet a-z
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = '97';

	while (ch <= '122')
	{
		putchar(ch);
		ch++;
	}

	return (0);
}
