#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: user input.
 * @size: hash table's array size.
 * Return: the index where "key" should be stroed in the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	return (hash_djb2(key) % size);
}
