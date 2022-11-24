#include "hash_tables.h"

/**
 *hash_djb2 - function implementing the djb2 algorithm.
 *@str: const unsigned char
 *Return: hash
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash = 0, i = 0;

    if (key == NULL)
    {
        return (0);
    }
    hash = hash_djb2(key);
    while (key && key[i])
    {
        hash = hash % size;
        i++;
    }
    return (hash);
}