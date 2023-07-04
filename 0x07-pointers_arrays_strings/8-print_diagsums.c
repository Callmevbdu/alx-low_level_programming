#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: integer input pointer
 * @size: integer input
 * Return: the sum of the diagonal square
*/

void print_diagsums(int *a, int size)
{
	int str, sum1 = 0, sum2 = 0;

	for (str = 0; str < size; str++)
	{
		sum1 += a[str];
		sum2 += a[size - str - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
