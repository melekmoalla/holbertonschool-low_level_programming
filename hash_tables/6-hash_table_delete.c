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
    hash_node_t *p;

    if (ht == NULL)
        return;
    for (i = 0; ht && i < ht->size; i++)
    {
        p = ht->array[i];
        while (p)
        {
            p = p->next;
            free(p);
        }
    }
}
