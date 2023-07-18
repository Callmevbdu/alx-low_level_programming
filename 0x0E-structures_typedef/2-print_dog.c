#include "dog.h"

/**
 * print_dog - a function that print data of struct dog
 * @d: pointer to struct dog
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d.name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %c\n", d.name);
		}
		if (d.age == NULL)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d.age);
		}
		if (d.owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %c\n", d.owner);
		}

	}
}
