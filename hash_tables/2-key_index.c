#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.


 *@key: const unsigned char
 *@size: unsigned long int
 *Return: d
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, i = 0, d;

	hash = hash_djb2(key);

	d = hash % size;
	i++;

	return (d);
}
