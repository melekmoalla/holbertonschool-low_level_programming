#include <stdio.h>

/**
 * main - fonction to print the first 50 fibonacci
 * Return: 0
 */
int main(vid)
{
	long int t1 = 1, t2 = 2, nextTerm = 0, i = 0;

	printf("%ld, %ld, ", t1, t2);
	nextTerm = t1 + t2;

	while (i <= 47)
	{
		if (i != 47)
		{
			printf("%ld, ", nextTerm);
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1 + t2;
		}
		else
		{
			printf("%ld", nextTerm);
		}
		i++;
	}
	printf("\n");
	return (0);
}
