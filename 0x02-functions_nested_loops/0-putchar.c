#include "main.h"

/**
 * main - entry point
 * Description: A C program that prints "_putchar" using a prototype.
 * Return: 0 (success)
*/

int main(void)
{
	char string[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(string[ch]);
	_putchar('\n');

	return (0);
}
