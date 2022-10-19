#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 *@argc: int
 *@argv: int
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc <= 1)
	{
		printf("Error");
		printf("\n");
		return (1);
	}

	else
	{

		for (i = 1; i < argc; i++)
		{

			sum *= atoi(argv[i]);
		}
		printf("%d", sum);
	}
	printf("\n");

	return (0);
}
