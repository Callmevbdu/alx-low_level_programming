#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string
 * @s: a string input pointer
*/

void _print_rev_recursion(char *s)
{
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
