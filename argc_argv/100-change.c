#include <stdio.h>
#include <ctype.h>
/**
 * main -  a program that adds positive numbers.
 *@argc: int
 *@argv: char
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, rest = 0;

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
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			rest++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			rest++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			rest++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			rest++;
		}
		else if (cents >= 1)
		{
			cents -= 1;
			rest++;
		}
	}
	printf("%d\n", rest + cents);
	return (0);
}
