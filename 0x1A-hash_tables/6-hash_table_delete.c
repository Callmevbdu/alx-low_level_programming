#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 * @ht: A pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *top = ht;
	hash_node_t *current, *old;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			current = ht->array[idx];
			while (current != NULL)
			{
				old = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = old;
			}
		}
	}
	free(top->array);
	free(top);
}