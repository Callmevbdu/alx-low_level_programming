#include "main.h"

/**
 * print_sign - a prototype which checks if the input "n" is a number
 * greater or lesser than 0.
 * @n: is the input integer
 * Return: 1 if number is greater than zero, 0 if the number is zero, -1 if
 * the number is lesser than zero.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
