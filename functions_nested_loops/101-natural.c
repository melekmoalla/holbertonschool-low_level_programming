#include <stdio.h>

/**
 * print_times_table - write the number
 * @n: int
 * Return: 0
 */

int main(void)
{
    int a = 5;
    int b = 3;
    int c;
    int d = 0;

    for (c = 1; c < 1024; c++)
    {
        if ((a % c == 0) || (b % c == 0))
        {
            while (d < 1024)
            {
                d = d + c;
                printf("%d", d);
                break;
            }
        }
    }
    printf("\n");
    return (0);
}