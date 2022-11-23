#include "hash_tables.h"

/**
 *
 *
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;

    hash_table_t *new_table = malloc(sizeof(hash_table_t) * 1);
    if (new_table == NULL)
    {
        return (NULL);
    }
    new_table->array = malloc(sizeof(hash_node_t) * size);
    for (i = 0; i < size; i++)
    {
        new_table->array[i] = NULL;
    }
    return new_table;
}