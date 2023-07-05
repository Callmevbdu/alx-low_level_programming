#include "main.h"

/**
 * _pow_recursion - a function that returns the value "x" raised to the power
 * of "y".
 * @x: input number
 * @y: input number
 * Return: number (success), -1 if y is lower than 0
*/

int _pow_recursion(int x, int y)
{
	int exponent, result;

	for (exponent = y; exponent >= 0; exponent--)
	{
		result = result * x;
	}

	return (result);
}
