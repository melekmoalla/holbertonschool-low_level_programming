#include <stdio.h>

/**
 * main - program that prints its name,
 *@argc: int
 *@argv: int
 *Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{

    printf("%d", argc - 1);

    printf("\n");
    return (0);
}