#include "hash_tables.h"

/**
 *
 *
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;
    hash_table_t *new_table = NULL;
    if (size < 1)
    {
        return NULL;
    }
    /*space for the table */
    if ((new_table = calloc(1, sizeof(hash_table_t))) == NULL)
    {
        return NULL;
    }
    if ((new_table->array = calloc(1, sizeof(hash_node_t) * size)) == NULL)
    {
        free(new_table);
        return NULL;
    }
    /* Inicialization of the internal table */
    for (i = 0; i < size; i++)
    {
        new_table->array[i] = NULL;
    }
    new_table->size = size;
    return new_table;
}