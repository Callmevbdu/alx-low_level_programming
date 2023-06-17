#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *	main - Entry point
 *
 *	Description: A C program that prints a n number.
 *
 *	return is 0 (success)
 *
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d", n, "is positive\n");
	} else
	{
		printf("%d", n, "is negative\n");
	}
	return (0);
}
