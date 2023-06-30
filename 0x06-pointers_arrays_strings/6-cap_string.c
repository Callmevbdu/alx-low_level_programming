#include "main.h"
#include <stdio.h>

/**
 * LC - a function that checks if input string is lowercase
 * @ch: input
 * Return: 1 if lowercase, 0 otherwise
*/

int LC(char ch)
{
	return (ch >= 97 && ch <= 122);
}

/**
 * DLM - a function that checks if input is a delimiter
 * @ch: input
 * Return: 1 if delimiter, 0 otherwise
*/

int DLM(char ch)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (ch == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: input string
 * Return: Uppercase string
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int foundDLM = 1;

	while (*str)
	{
		if (DLM(*str))
			foundDLM = 1;
		else if (LC(*str) && foundDLM)
		{
			*str -= 32;
			foundDLM = 0;
		}
		else
			foundDLM = 0;
		str++;
	}

	return (ptr);
}
