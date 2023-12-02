#include "hash_tables.h"

/**
 * hash_table_get - A function that gets the value associated with
 * the key in a hash table.
 * @ht: Hash table pointer.
 * @key: The key to get the value of.
 * Return: NULL if not matched, otherwise the value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *next;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	next = ht->array[idx];
	while (next && strcmp(next->key, key) != 0)
		next = next->next;

	return ((next == NULL) ? NULL : next->value);
}