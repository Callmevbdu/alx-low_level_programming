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

	/*print a-z*/
	while (ch1 <= 122)
	{
		putchar(ch1);
		ch1++;
	}

	/*print A-Z*/
	while (ch2 <= 90)
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');

	return (0);
}
