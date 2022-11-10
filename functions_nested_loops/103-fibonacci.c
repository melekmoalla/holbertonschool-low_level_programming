#include <stdio.h>

/**
 * main - fonction to print the first 50 fibonacci
 * Return: 0
 */
int main(void)
{
    long int t1 = 1, t2 = 2, nextTerm = 0, i = 0;

    nextTerm = t1 + t2;

    while (i <= 7)
    {

        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;

        i++;
    }
    printf("%ld", nextTerm);
    printf("\n");
    return (0);
}