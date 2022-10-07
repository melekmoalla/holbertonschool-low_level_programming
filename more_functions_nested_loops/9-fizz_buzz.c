#include <stdio.h>
#include <stdlib.h>

/**
 * main - print fizzbuzz
 * Return: 0
 */

int main(void)
{

	int c;

	for (c = 1; c <= 100; c++)
	{

		if ((c % 3 == 0) && (c % 5 == 0))
		{

			printf("FizzBuzz");
			printf(" ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (c % 5 == 0)
		{
			if (c != 100)
			{
				printf("Buzz");
				printf(" ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else if (c != (c % 3 == 0) || c != (c % 5 == 0))
		{
			printf("%d", c);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
