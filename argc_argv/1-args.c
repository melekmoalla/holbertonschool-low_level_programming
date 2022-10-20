#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.-
 *@argc: int
 *@argv: int
 *Return: 0
 */
__attribute__((unused))
int main(int argc,  char *argv[])
{

	printf("%d", argc - 1);
	printf("\n");
	return (0);
}