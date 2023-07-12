#include "main.h"

/**
 * _strlen - calculate length of a string
 * @s: string input
 * Return: sum integer
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - a function that concatenates two strings
 * @s1: string input 1
 * @s2: string 2
 * Return: pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2, and null
 * terminated, "NULL" on failure
*/

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *m;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	m = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (m == 0)
		return (0);

	for (i = 0; i <= sz1 + sz2; i++)
	{
		if (i < sz1)
			m[i] = s1[i];
		else
			m[i] = s2[i - sz];
	}
	m[i] = '\0';
	return (m);
}
