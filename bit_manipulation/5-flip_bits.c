#include "main.h"

/**
 * flip_bits - returns the number of bits  from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: i
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	while (n || m)
	{

		int last_bit_a = n & 1;
		int last_bit_b = m & 1;

		if (last_bit_a != last_bit_b)
			count++;

		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
