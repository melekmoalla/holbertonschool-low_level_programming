#include "main.h"

/**
 * _pow_recursion - check the code
 *@x: int
 *@y: int
 * Return: -1 or sum of pow or 1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	if (y != 0)

		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
