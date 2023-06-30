#include "main.h"

/**
 * reverse_array - a function that reverses the content of
 * an array of integers
 * @a: an array of integers
 * @n: how much elements to swap
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] =  a[y];
		a[y] = z;
	}
}
