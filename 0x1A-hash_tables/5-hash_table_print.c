#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Description: Key and value pairs are printed in order.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *next;
	unsigned long int idx;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (flag == 1)
				printf(", ");

			next = ht->array[idx];
			while (next != NULL)
			{
				printf("'%s': '%s'", next->key, next->value);
				next = next->next;
				if (next != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}