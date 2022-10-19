#include <stdio.h>

/**
 * main - program that prints its name,
 *@argc: int
 *@argv: int
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
