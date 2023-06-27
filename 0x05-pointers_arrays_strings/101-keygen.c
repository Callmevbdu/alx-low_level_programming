#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a function that generate random passwords
 * Return: 0
*/

int main(void)
{
	int key;
	char c;

	srand(time(NULL));
	while (key <= 2645)
	{
		c = rand() % 128;
		key += c;
		putchar(c);
	}
	putchar(2772 - key);
	return (0);
}
