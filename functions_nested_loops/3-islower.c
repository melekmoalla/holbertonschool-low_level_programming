#include "main.h"

/**
 * _islower - return 1 lowercase
 * @c: int
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

	putchar('\n');
}
