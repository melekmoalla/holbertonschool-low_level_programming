#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - unction that deletes a hash table.
 *@ht: const hash_table_t
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *current;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			p = current;
			current = current->next;
			free(p->key);
			free(p->value);
			free(p);
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
