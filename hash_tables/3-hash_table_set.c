#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

hash_node_t *jdida(__attribute__((unused)) hash_node_t *c)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_table_t));
	if (!new)
	{
		return (NULL);
	}
	new->key = NULL;
	new->value = NULL;
	new->next = c;

	return (new);
}

hash_node_t *hot9odam(hash_node_t *new, const char *key, const char *value)
{
	new = jdida(new);
	new->key = strdup(key);
	new->key = strdup(value);
	return (new);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);

	new = ht->array[index];
	if (new == NULL)
	{
		new = jdida(NULL);
	}
	if (new->key)
	{
		ht->array[index] = hot9odam(new, key, value);
		return (1);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	ht->array[index] = new;
	return (1);
}
