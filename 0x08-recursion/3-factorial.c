#include "main.h"

/**
 * factorial - a function that returns the factorial of input number
 * @n: input number
 * Return: -1 error, 1 factorial of 0, factorial (success)
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
