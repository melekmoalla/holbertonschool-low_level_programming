#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get -  a function that retrieves a value associated with a key.
 *@ht: hash_node_t
 *@key: const char key
 * Return: the value or null if fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new;

	if (!ht || !key)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	new = ht->array[index];
	while (new)
	{
		if (strcmp(key, new->key) == 0)
		{
			return (new->value);
		}
		new = new->next;
	}
	return (NULL);
}
