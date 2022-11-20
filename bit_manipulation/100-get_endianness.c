#include "main.h"

/**
 * flip_bits - returns the number of bits  from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: i
 */
int get_endianness(void)
{
    unsigned int x = 1;
    char *c = (char *)&x;
    return (int)*c;
}