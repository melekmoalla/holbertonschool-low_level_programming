#include <stdio.h>

/**
 * main - print all the alphabet revers
 * Return: 0
 */

int main()
{
    int i;
    for (i = 'z'; i >= 'a'; i--)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}
