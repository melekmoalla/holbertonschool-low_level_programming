#include "main.h"

/**
 * _isalpha - return 1 alphabet
 * Return: 0
 */

int _isalpha(int c)

{

	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);

	putchar('\n');
}
