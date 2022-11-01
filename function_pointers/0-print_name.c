#include "function_pointers.h"

/**
 * print_name - print the point function
 * @name: char
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}