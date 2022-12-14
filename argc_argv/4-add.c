#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers.
 *@argc: int
 *@argv: int
 *Return: 0
 */

C
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
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					printf("Error");
					printf("\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}
		printf("%d", sum);
		printf("\n");
	}
	return (0);
}
