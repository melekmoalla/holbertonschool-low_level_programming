#include "main.h"

/**
 * add - add two number
 * @a: int
 * @b: int
 * Return: sum
 */

void print_to_98(int n)
{
    int i;

    if (n < 98)
    {
        for (i = n; i <= 98; i++)
        {
            printf(",  ");
            printf("%d", i);
        }
    }
    else if (n > 98)
    {
        for (i = n; i >= 98; i--)
        {
            printf(",  ");
            printf("%d", i);
        }
    }
    else
    {

        printf("%d", n);
    }
    printf("\n");
}