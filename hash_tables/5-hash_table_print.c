#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, a = 0;
	hash_node_t *p;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (a && i < ht->size)
			{
				printf(", ");
			}
			else
			{
				a = 1;
			}
			printf("'%s': '%s'", p->key, p->value);
			p = p->next;
		}
	}
	printf("}");
	printf("\n");
}
