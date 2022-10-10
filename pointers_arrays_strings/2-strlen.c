#include "main.h"

/**
 * _strlen - switch the paragraph to the number
 * @s: char
 * Return: i
 */

int _strlen(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	return (i);
}

