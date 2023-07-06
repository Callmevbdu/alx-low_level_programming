#include "main.h"

int _sqrt(int num, int itr);

/**
 * _sqrt - find the natural square root of a number
 * @num: input num
 * @itr: iterator
 * Return: sum
*/

int _sqrt(int num, int itr)
{
	if (itr * itr > num)
		return (-1);
	if (itr * itr == num)
		return (itr);
	return (_sqrt(num, itr + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number
 * Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
