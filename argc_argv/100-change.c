#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main -  a program that adds positive numbers.
 *@argc: int
 *@argv: char
 *Return: 0
 */

int main(int argc, char *argv[])
{
    int i = 0;
    char a[] = {25, 10, 5, 2, 1};
    int cents;
    int rest = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return (0);
    }
    while (cents > 0)
    {
        if (cents >= a[i])
        {
            cents -= a[i];
            rest++;
        }
        else
            i++;
    }
    printf("%d\n", rest + cents);
    return (0);
}