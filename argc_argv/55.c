#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main -  a program that adds positive numbers.
 *@argc: int
 *@argv: int
 *Return: 0
 */

int minCoins(int V)
{
    int a[] = {25, 10, 5, 2, 1};
    int i;
    int res;
    int sub_res;

    if (V == 0)
    {
        return (0);
    }
    res = INT_MAX;
    for (i = 0; i < 5; i++)
    {
        if (a[i] <= V)
        {
            sub_res = minCoins(V - a[i]);
            if (sub_res != INT_MAX && sub_res + 1 < res)
                res = sub_res + 1;
        }
    }
    return (res);
}

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    return (minCoins(atoi(argv[1])));
}
