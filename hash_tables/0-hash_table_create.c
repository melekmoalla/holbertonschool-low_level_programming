#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hash table.
 *@size: unsigned long int
 *Return: HashTable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HashTable;

	HashTable = malloc(sizeof(hash_table_t));
	if (HashTable == NULL)
		return (NULL);

	HashTable->size = size;
	/*allocating memory for array*/
	HashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (HashTable->array == NULL)
	{
		free(HashTable->array);
		return (NULL);
	}
	return (HashTable);
}
