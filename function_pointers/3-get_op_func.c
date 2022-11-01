#include "3-calc.h"

/**
 * get_op_func - that selects the correthe operation asked by the user
 * @s: char
 * Return: 0 or op
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
