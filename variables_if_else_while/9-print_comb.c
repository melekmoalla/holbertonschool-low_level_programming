#include <stdio.h>
/**
 * main - print the num with " ,"
 * Return: 0
 */

int main(void)
{
    int ch;
    for (ch = '0'; ch <= '9'; ch++)
    {
        putchar(ch);

        if (ch != '9')
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
}