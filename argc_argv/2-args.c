#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives.
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
		printf("\n");
	}

	return (0);
}
