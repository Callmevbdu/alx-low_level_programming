#include "main.h"

/**
 * string_toupper - a function that change all lowercase letters
 * of a string into uppercase
 * @ch: input string
 * Return: Uppercase string
*/

char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122)
		{
			ch[i] = ch[i] - 32;
		}
	}

	return (ch);
}
