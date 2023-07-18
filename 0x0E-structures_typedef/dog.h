#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct containing infos of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: A dog information header file!
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
