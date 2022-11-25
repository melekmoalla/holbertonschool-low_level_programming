#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print -function that prints a hash table.
 *@ht: const hash_table_t
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *current;

	for (i = 0; ht && i < ht->size; i++)
	{
		current = ht->array[i];
		if (current)
		{
			p = current;
			current = current->next;
			free(p->key);
			free(p->value);
			free(p);
		}
		ht->array[i] = NULL;
	}
}
