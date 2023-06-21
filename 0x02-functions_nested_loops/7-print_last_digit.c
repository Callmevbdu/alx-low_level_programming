#include "main.h"

/**
 * print_last_digit - a function that prints only the last digit
 * @n: an input integer
 * Return: lastDig
*/

int print_last_digit(int n)
{
	int lastDig;

	if (n < 0)
		lastDig = -1 * (n % 10);
	else
		lastDig = n % 10;

	_putchar(lastDig + '0');
	return (lastDig);

}
