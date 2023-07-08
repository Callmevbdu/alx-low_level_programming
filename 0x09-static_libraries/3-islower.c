#include "main.h"

/**
 * _islower - a prototype that checks if the input is lowercase
 * @c : an integer input
 * Return: 1 if the char "c" is lowercase, 0 otherwise.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

