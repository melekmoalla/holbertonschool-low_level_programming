#include "main.h"
/**
 * print_to_98 - write all number to 98
 * @n: int
 * Return: all number
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98");
		printf("\n");
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d", n);
				printf(", ");
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
		printf("\n");
	}
}
