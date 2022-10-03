#include <stdio.h>
/**
 * main - print the num with " ,"
 * Return: 0
 */

int main(void)
{
    int ch = '0';
    while (ch <= '9')
    {
        putchar(ch);
        ch++;
        putchar(' ');
        putchar(',');
    }

    putchar('\n');
    return (0);
}