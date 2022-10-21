#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main -  a program that adds positive numbers.
 *@argc: int
 *@argv: char
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	char a[] = {25, 10, 5, 2, 1};
	int cents;
	int rest = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (cents >= a[i])
		{
			cents -= i;
			rest++;
		}
	}
	printf("%d\n", rest + cents);
	return (0);
}