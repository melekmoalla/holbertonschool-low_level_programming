#include <stdio.h>

/**
 * main -  prints the largest prime factor of the number 612852475143$
 * Return: 0
 */
int main(void)
{
	long int n;

	n = 612852475143;

	int div = 2;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			n = n / div;
			if (n == 1)
			{
				printf("%d", div);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}