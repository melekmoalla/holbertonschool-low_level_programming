#include "main.h"

/**
 *_strlen_recursion - function that prints a string in reverse.
 *@s: char
 *Return: 0 or lenght
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
