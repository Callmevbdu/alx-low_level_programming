#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @ch: input string
 * Return: encoded string
*/

char *leet(char *ch)
{
	char *cp = ch;
	char letter[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*ch)
	{
		for (i = 0; i < sizeof(letter) / sizeof(char); i++)
		{
			if (*ch == letter[i] || *ch == letter[i] + 32)
			{
				*ch = 48 + num[i];
			}
		}
		ch++;
	}
	return (cp);
}
