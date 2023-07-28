#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @str: input string
 * Return: length of the input
*/

int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str++)
		i++;
	return (i);
}

/**
 * print_list - function that prints linked list
 * @h: pointer
 * Return: size of the list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
