#include "main.h"

/**
 * _isupper - return 0 ro 1
 *@c: int
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
