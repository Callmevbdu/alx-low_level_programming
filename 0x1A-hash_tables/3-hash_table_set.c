#include "hash_tables.h"

/**
 * hash_table_set - A function that adds/update an element in a hash table.
 * @ht: hash table pointer.
 * @key: The key to add.
 * @value: The value with key.
 * Return: Failure (0), otherwise (-1).
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *next;
	char *valueCopy;
	unsigned long int idx, jdx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valueCopy = strdup(value);
	if (valueCopy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (jdx = idx; ht->array[jdx]; jdx++)
	{
		if (strcmp(ht->array[jdx]->key, key) == 0)
		{
			free(ht->array[jdx]->value);
			ht->array[jdx]->value = valueCopy;
			return (1);
		}
	}

	next = malloc(sizeof(hash_node_t));
	if (next == NULL)
	{
		free(valueCopy);
		return (0);
	}
	next->key = strdup(key);
	if (next->key == NULL)
	{
		free(next);
		return (0);
	}
	next->value = valueCopy;
	next->next = ht->array[idx];
	ht->array[idx] = next;

	return (1);
}