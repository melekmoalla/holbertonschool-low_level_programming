#include <stdio.h>
#include <stdlib.h>

/**
 * print_square - print'#'
 * @size: int
 */

int main(void)
{

    int c;

    for (c = 1; c <= 100; c++)
    {
        if (c % 3 == 0)
        {
            printf("Fizz");
            printf(" ");
        }
        else if (c % 5 == 0)
        {
            printf("Buzz");
            printf(" ");
        }
        else if ((c % 3 == 0) && (c % 5 == 0))
        {
            printf("FizzBuzz");
        }
        else if (c != (c % 3 == 0) || c != (c % 5 == 0))
        {
            printf("%d", c);
            printf(" ");
        }
    }
    return (0);
}
