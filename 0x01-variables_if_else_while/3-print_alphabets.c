#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that prints the alphabet using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch1 = 97;
	char ch2 = 65;

	while (ch1 <= 122 && ch2 <= 90)
	{
		putchar(ch1);
		putchar(ch2);
		ch1++;
		ch2++;
	}
	putchar('\n')
}
