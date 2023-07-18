#include "main.h"
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * struct dog - struct that include infos of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: pointer
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d = {*name, age, *owner};
}
