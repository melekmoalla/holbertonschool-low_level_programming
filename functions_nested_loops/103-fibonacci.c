#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int limit = 4000000;
	int sum = 0;
	int a = 1;
	int b = 1;
	int c = a + b;
	
	while (c < limit)
	{

		sum += c;
		a = b + c;
		b = c + a;
		c = a + b;
	}
	printf("%d\n", sum);
	return (0);
}
