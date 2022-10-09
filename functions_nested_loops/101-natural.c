#include <stdio.h>

/**
 * main - write the multiple 3 and 5
 * Return: 0
 */

int main(void)
{
	int a = 5;
	int b = 3;
	int c;
	int d = 0;

	for (c = 1; c < 244293; c++)
	{
		if ((c % a == 0) || (c % b == 0))
		{
			d += c;
		}
	}
	printf("%d", c);
	printf("\n");
	return (0);
}