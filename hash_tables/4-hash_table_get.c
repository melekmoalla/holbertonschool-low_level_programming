#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * jdida - function that add a new node of the index array
 *@c: hash_node_t
 * Return: new
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *new;

    index = key_index((unsigned char *)key, ht->size);
    new = ht->array[index];
    if (new)
    {
        if (strcmp(key, new->key) == 0)
        {
            return (new->value);
        }
    }
    return (NULL);
}