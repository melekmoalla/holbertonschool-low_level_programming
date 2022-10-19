#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers.
 *@argc: int
 *@argv: int
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc < 3)
	{
		printf("0");
		printf("\n");
	}

	else
	{

		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < '\n'; j++)
			{
				if (argv[i][j] >= '0' || argv[i][j] <= '9')
				{

					sum += atoi(argv[i]);
				}

				else
				{
					printf("Error");
					printf("\n");
					return (1);
				}
			}
			printf("%d", sum);
		}
		printf("\n");
	}
	return (0);
}
