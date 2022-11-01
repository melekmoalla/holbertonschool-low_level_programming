#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - fonction to do the test
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index;
	int a;
	int b;
	char opp;
	int (*fonct)(int, int);

	opp = *(argv[2]);
	fonct = *(get_op_func(&opp));
	opp = *(argv[2]);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][1] != '\0') || (fonct == NULL) || (argv[2] == NULL))
	{
		printf("Error\n");
		exit(99);
	}
	if ((opp == '/' || opp == '%') && (!atoi(argv[3])))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	index = get_op_func(&opp)(a, b);
	printf("%d\n", index);
	return (0);
}
