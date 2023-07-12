#include <unistd.h>
#include "main.h"

/**
 * _putchar - types the char c to stdout
 * @c: The char to print
 * Return: 1 (success), -1 (error)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
