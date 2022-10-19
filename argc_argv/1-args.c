#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.-
 *@argc: int
 *@argv: int
 *Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d", argc - 1);

	return (0);
}
