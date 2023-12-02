#include "hash_tables.h"

/**
 * hash_table_create - a function which creates a hash table.
 * @size: input by user (hash table size).
 * Return: a pointer to the table, "NULL" else.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HashTable;
	unsigned long int idx;

	HashTable = malloc(sizeof(hash_table_t));

	if (HashTable == NULL)
		return (NULL);

	HashTable->size = size;
	HashTable->array = malloc(size * sizeof(hash_node_t *));

	if (HashTable->array == NULL)
	{
		free(HashTable);
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
		HashTable->array[idx] = NULL;

	return (HashTable);
}
