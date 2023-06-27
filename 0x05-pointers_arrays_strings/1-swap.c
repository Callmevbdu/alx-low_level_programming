#include "main.h"

/** 
 * swap_int - a function that swaps the value of two integers
 * @a: integer input 1
 * @b: integer input 2
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
