#include "main.h"

int is_pn(int num, int itr);

/**
 * is_prime_number - a function that checks if input is a prime number
 * @n: input number
 * Return: 1 if input is a p.n, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_pn(n, n - 1));
}

/**
 * is_pn - function that calculates if a number is prime
 * @num: input integer
 * @itr: iterator
 * Return: 1 if num is prime, 0 if not
*/

int is_pn(int num, int itr)
{
	if (itr == 1)
		return (1);
	if (num % itr == 0 && itr > 0)
		return (0);
	return (is_pn(num, itr - 1));
}
