#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that emulate the game of FizzBuzz
 * (Prints "Fizz" for number 3 multiples, prints "Buzz" for
 * number 5 multiples and prints "FizzBuzz" for both numbers multuples.
 * Return: 0 (success)
*/

int main(void)
{
	int ch;

	for (ch = 1; ch <= 100; ch++)
	{
		if (ch % 3 == 0 && ch % 5 != 0)
		{
			printf(" Fizz");
		} else if (ch % 5 == 0 && ch % 3 != 0)
		{
			printf(" Buzz");
		} else if (ch % 3 == 0 && ch % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (ch == 1)
		{
			printf("%d", ch);
		} else
		{
			printf(" %d", ch);
		}
	}
	printf("\n");

	return (0);
}
