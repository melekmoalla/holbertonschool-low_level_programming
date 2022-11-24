#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * jdida - function that add a new node of the index array
 *@c: hash_node_t
 * Return: new
 */
hash_node_t *jdida(hash_node_t *c)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		return (NULL);
	}
	new->key = NULL;
	new->value = NULL;
	new->next = c;

	return (new);
}

/**
 *hot9odam - the fonction that add another noder withe the olde node
 *@new:hash_node_t
 *@key: const char
 *@value: const char
 * Return: a or new if the key of the new  ==key of the old new
 */
hash_node_t *hot9odam(hash_node_t *new, const char *key, const char *value)
{
	hash_node_t *a = new;

	while (a)
	{
		if (strcmp(key, a->key) == 0)
		{
			free(a->value);
			a->value = strdup(value);
			return (new);
		}
		a = a->next;
	}
	a = jdida(new);
	a->key = strdup(key);
	a->value = strdup(value);
	return (a);
}

/**
 * hash_table_set -  function that adds an element to the hash table.
 *@ht:hash_node_t
 *@key: const char
 *@value: const char
 * Return: 1 or 0 if fail
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
